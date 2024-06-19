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
	int iLocal_15 = 0;
	var uLocal_16 = 30;
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
	var uLocal_29 = 0;
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
	var uLocal_47 = 4;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 2;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 4;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 5;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 5;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	Any anLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = -1;
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
	var uLocal_101 = -1;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 2;
	var uLocal_106 = 1;
	var uLocal_107 = 1;
	var uLocal_108 = 1;
	var uLocal_109 = 0;
	var uLocal_110 = 1;
	var uLocal_111 = 2;
	var uLocal_112 = 2;
	var uLocal_113 = 3;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 3;
	var uLocal_117 = 1;
	var uLocal_118 = 3;
	var uLocal_119 = 3;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x54A9ED6B ^0xBF64DCBB
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	anLocal_80 = anScriptParam_0;
	iLocal_81.f_1 = anScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&iLocal_81);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_1(&iLocal_81);

	while (func_2())
	{
		switch (iLocal_79)
		{
			case 0:
				if (func_3(&iLocal_81))
				{
					iLocal_79 = 1;
				
					if (iLocal_81.f_4 == -1)
						iLocal_81.f_4 = func_4(&iLocal_81);
				}
				break;
		
			case 1:
				if (func_5(&iLocal_81))
					func_6(&iLocal_81);
			
				func_7(&iLocal_81);
				func_8(&iLocal_81);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&iLocal_81);
	return;
}

void func_1(var uParam0) // Position - 0xA4 Hash - 0x24052CB4 ^0x3F2A6941
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(anLocal_80);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0xBD Hash - 0x5C23286E ^0xFDEB700F
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	return true;
}

BOOL func_3(var uParam0) // Position - 0xD1 Hash - 0xF06FC284 ^0xC0DEC5DC
{
	Hash scenarioPointType;

	if (iLocal_81 == 0)
	{
		scenarioPointType = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		iLocal_81 = func_10(scenarioPointType);
		return false;
	}

	if (func_11(iLocal_81, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}

	func_12(uParam0);
	return true;
}

int func_4(var uParam0) // Position - 0x11E Hash - 0x5B237E25 ^0x830C9106
{
	int i;
	int num;
	int num2;
	float num3;

	num2 = -1;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return -1;

	if (*uParam0 == -544327665)
		num = 3;
	else if (*uParam0 == 1120968795)
		num = 2;
	else if (*uParam0 == -834293086)
		num = 10;
	else if (*uParam0 == 1519472817)
		num = 2;
	else if (*uParam0 == -1859023693)
		num = 11;
	else if (*uParam0 == 2000209669)
		num = 12;
	else if (*uParam0 == -1761578407)
		num = 11;
	else if (*uParam0 == -1243267511)
		num = 5;
	else if (*uParam0 == -1272862985)
		num = 4;
	else if (*uParam0 == 1535254161)
		num = 4;
	else if (*uParam0 == 870958936)
		num = 5;
	else if (*uParam0 == 513110082)
		num = 3;
	else if (*uParam0 == -321841939)
		num = 20;
	else if (*uParam0 == -890175011)
		num = 5;
	else if (*uParam0 == 677950956)
		num = 6;
	else if (*uParam0 == 503180747)
		num = 2;
	else
		return 0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (num2 == -1)
		{
			num2 = i;
			num3 = func_14(Global_35, func_13(uParam0, i), true);
		}
		else if (num3 > func_14(Global_35, func_13(uParam0, i), true))
		{
			num2 = i;
			num3 = func_14(Global_35, func_13(uParam0, i), true);
		}
	}

	return num2;
}

BOOL func_5(var uParam0) // Position - 0x2B2 Hash - 0x7F2631C6 ^0x7F2631C6
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	
		case 677950956:
			if (func_15())
				return true;
			else
				return false;
			break;
	
		case 1861313914:
			if (func_16(59))
				return false;
			else
				return true;
			break;
	}

	return false;
}

void func_6(var uParam0) // Position - 0x42F Hash - 0x611E412E ^0xCDDB3FFD
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!func_17(uParam0))
		{
			func_18(uParam0);
			func_19(uParam0, 0);
		}
	}

	switch (uParam0->f_5)
	{
		case 0:
			if (!func_17(uParam0))
				return;
		
			if (*uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -321841939)
				if (func_20(uParam0))
					func_19(uParam0, 7);
		
			func_21(uParam0);
		
			if (_IS_NULL_VECTOR(uParam0->f_6.f_2))
			{
				func_19(uParam0, 7);
				return;
			}
		
			func_19(uParam0, 1);
			break;
	
		case 1:
			if (func_14(Global_35, uParam0->f_6.f_2, true) <= uParam0->f_6)
			{
				func_23(&(uParam0->f_6.f_5));
			
				if (func_11(*uParam0, 2) || func_11(*uParam0, 16) || *uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -1761578407 && func_20(uParam0))
					func_19(uParam0, 3);
				else
					func_19(uParam0, 2);
			}
			break;
	
		case 2:
			if (!func_24(&(uParam0->f_6.f_5)))
			{
				PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 150, 100);
				func_25(&(uParam0->f_6.f_5));
			}
			else if (func_26(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 150, 100);
				func_19(uParam0, 3);
			}
			break;
	
		case 3:
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, false))
			{
				func_28(uParam0);
			
				if (func_11(*uParam0, 2) || func_11(*uParam0, 16) || *uParam0 == -1761578407 && func_20(uParam0))
					func_19(uParam0, 6);
				else
					func_19(uParam0, 4);
			}
			break;
	
		case 4:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), false);
		
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, true))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			else if (func_31(uParam0))
			{
				if (!func_11(*uParam0, 16))
				{
					func_32(*uParam0, 16);
				
					if (func_33(uParam0->f_6.f_8))
						func_34(uParam0->f_6.f_8, false, true);
				
					func_35(uParam0);
					func_36(uParam0, true);
				
					if (!(*uParam0 == -321841939))
						func_37(true, -1);
				}
				else if (func_33(uParam0->f_6.f_8))
				{
					func_34(uParam0->f_6.f_8, false, true);
				}
			
				func_25(&(uParam0->f_6.f_5));
				func_19(uParam0, 5);
			}
			else if (func_38(uParam0->f_6.f_8, true) > 0f)
			{
				if (!func_11(*uParam0, 16))
				{
					if (!func_39(uParam0->f_3, 2))
					{
						func_40(&(uParam0->f_3), 2);
					
						if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
							func_41(uParam0);
					}
				
					if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						func_42(uParam0);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				func_43(&(uParam0->f_3), 2);
			
				if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						CAM::STOP_GAMEPLAY_HINT(false);
			}
			break;
	
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
		
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), false);
		
			if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
				func_42(uParam0);
		
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")))
			{
			}
			else if (func_26(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						CAM::STOP_GAMEPLAY_HINT(false);
			
				if (func_39(uParam0->f_3, 2))
					func_43(&(uParam0->f_3), 2);
			
				if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					func_44(uParam0);
			
				if (*uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -321841939)
				{
					func_18(uParam0);
					func_19(uParam0, 7);
				}
				else
				{
					func_19(uParam0, 6);
				}
			}
			break;
	
		case 6:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), false);
		
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, true))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			break;
	
		case 7:
			break;
	}

	return;
}

void func_7(var uParam0) // Position - 0x9B3 Hash - 0xB8E838DE ^0x57F08B38
{
	int num;

	if (!func_39(uParam0->f_3, 8))
	{
		if (func_45(*uParam0) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (func_46(&(uParam0->f_2)))
			{
				num = 3;
			
				if (*uParam0 == -849582265 && Global_40.f_11953)
					num = 4;
			
				func_47(num, 0, 0, 0, 0, false, 1065353216, false);
				func_40(&(uParam0->f_3), 8);
			
				if (*uParam0 == -849582265)
					Global_40.f_11953 = 1;
			}
		}
	}

	return;
}

void func_8(var uParam0) // Position - 0xA35 Hash - 0x6336E823 ^0xA484C534
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;
	int num;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	iLocal_62 > 0 && iLocal_62 < 13;

	switch (iLocal_62)
	{
		case 0:
			if (func_39(uParam0->f_3, 1))
				func_43(&(uParam0->f_3), 1);
		
			if (*uParam0 == 870958936 || *uParam0 == 513110082)
			{
				if (func_48(*uParam0))
				{
					if (func_20(uParam0))
					{
						func_49(&iLocal_62, 13, true);
						return;
					}
				
					func_49(&iLocal_62, 13, true);
					return;
				}
			}
			else if (*uParam0 == 1284679164 || *uParam0 == -1494823099)
			{
				if (*uParam0 == 1284679164)
				{
					if (!func_52(func_50(uParam0, 0), func_51(uParam0, uParam0->f_4), true))
						return;
				
					if (func_48(*uParam0))
					{
						func_49(&iLocal_62, 13, true);
						return;
					}
				}
				else if (*uParam0 == -1494823099)
				{
					if (func_48(*uParam0))
					{
						func_49(&iLocal_62, 13, true);
						return;
					}
				
					if (!func_52(func_50(uParam0, 0), func_53(uParam0, 0), true))
						return;
				}
			}
			else if (*uParam0 == 118535038)
			{
				if (!func_54(uParam0))
					return;
			
				if (func_48(*uParam0))
				{
					func_55(1766284049, true, false);
					func_49(&iLocal_62, 13, true);
					return;
				}
			}
			else
			{
				if (func_48(*uParam0))
				{
					func_49(&iLocal_62, 13, true);
					return;
				}
			
				if (*uParam0 == 373034311)
				{
					if (!func_48(-321841939))
					{
						if (func_56() >= 20)
							if (!func_48(-321841939))
								func_57(-321841939);
					
						return;
					}
				}
				else if (*uParam0 == 464413478)
				{
					if (!func_58(Global_35, func_53(uParam0, 1), 75f, true, true))
						return;
				}
				else if (*uParam0 == 1187689415)
				{
					func_59();
				}
				else if (*uParam0 == -261997819)
				{
					if (!func_60())
						return;
				}
			}
		
			func_61(uParam0);
			func_49(&iLocal_62, 1, true);
			break;
	
		case 1:
			func_62(uParam0);
			func_49(&iLocal_62, 2, true);
			break;
	
		case 2:
			if (!func_63(uParam0) || func_64())
				return;
		
			func_49(&iLocal_62, 3, true);
			break;
	
		case 3:
			if (func_65(uParam0))
				func_49(&iLocal_62, 10, true);
			break;
	
		case 10:
			if (!func_39(uParam0->f_3, 1))
				func_40(&(uParam0->f_3), 1);
		
			if (*uParam0 == -1427565340)
			{
				if (!uLocal_55[0])
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_66[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_66[0], Global_35, true, true))
					{
						if (func_67(&uLocal_66, func_53(uParam0, 1), func_66(uParam0, 1), 1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
							{
								ENTITY::SET_ENTITY_VELOCITY(uLocal_66[1], 0f, 0f, 0.25f);
								uLocal_55[0] = 1;
							}
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (!uLocal_55[1])
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) > 0.2f)
							uLocal_55[1] = 1;
					}
					else if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) < 0.01f)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
						TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[1]);
						uLocal_55[1] = 0;
						func_49(&iLocal_62, 11, true);
					}
				}
			}
			else if (*uParam0 == 464413478)
			{
				if (!uLocal_55[0])
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_66[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_66[0], Global_35, true, true))
						uLocal_55[0] = 1;
				}
				else if (!uLocal_55[1])
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) > 0.1f)
							uLocal_55[1] = 1;
				}
				else if (!uLocal_55[2])
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					{
						if (ENTITY::GET_ENTITY_SPEED(uLocal_66[1]) < 0.1f)
						{
							uLocal_55[2] = 1;
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
							TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[1]);
						}
					}
				}
			
				if (uLocal_55[2])
				{
					if (!func_48(*uParam0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && PED::_GET_CARRIER_AS_PED(uLocal_66[1]) == Global_35)
						{
							func_68(uParam0);
							func_69(uParam0);
							func_49(&iLocal_62, 13, true);
						}
						else if (func_70())
						{
							if (func_71(joaat("provision_gold_nugget")))
							{
								func_68(uParam0);
								func_69(uParam0);
								func_49(&iLocal_62, 13, true);
							}
						}
					}
				}
			}
			else if (*uParam0 == 733338689)
			{
				if (!func_39(Global_40.f_8863.f_149, 32))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						func_40(&(Global_40.f_8863.f_149), 32);
						func_73(func_72(uParam0), 1, false, 0, 0, 752097756, 0, 0, 0, 0);
					}
				}
			
				if (!func_39(Global_40.f_8863.f_149, 64))
					if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
						if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
							func_49(&iLocal_62, 11, true);
			
				if (func_39(Global_40.f_8863.f_149, 32) && func_39(Global_40.f_8863.f_149, 64))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == -261997819 || *uParam0 == -599506500 || *uParam0 == 1424723727)
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_16[0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_16[0]))
				{
					func_68(uParam0);
				
					if (!func_75(func_74(uParam0, uParam0->f_4)))
						func_76(func_74(uParam0, uParam0->f_4));
				
					func_73(func_74(uParam0, uParam0->f_4), 1, false, false, false, 752097756, 0, 0, 0, false);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == 1187689415)
			{
				if (!func_11(*uParam0, 32))
					if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
						func_77(*uParam0);
			
				for (i = 0; i <= 30 - 1; i = i + 1)
				{
					if (!func_78(i))
					{
						if (OBJECT::DOES_PICKUP_EXIST(uLocal_16[i]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_16[i]))
						{
							func_79(i);
							func_80(uParam0);
						}
					}
				}
			
				if (func_81())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == 870958936 || *uParam0 == 2072029413)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
					if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						func_49(&iLocal_62, 11, true);
			}
			else if (*uParam0 == 2135153015)
			{
				if (!func_39(Global_40.f_8863.f_149, 1024))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						func_40(&(Global_40.f_8863.f_149), 1024);
						func_73(func_72(uParam0), 1, false, false, false, 752097756, 0, 0, 0, false);
					
						if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]) && !TASK::_IS_SCENARIO_POINT_ACTIVE(uLocal_47[0]))
							TASK::_SET_SCENARIO_POINT_ACTIVE(uLocal_47[0], true);
					}
				}
			
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
					if (func_58(Global_35, func_53(uParam0, 1), 15f, true, true))
						TASK::_0xA6A76D666A281F2D(uLocal_66[1], func_82(uParam0, 0));
			
				if (!func_39(Global_40.f_8863.f_149, 2048))
					if (func_70())
						if (func_71(func_82(uParam0, 0)))
							func_40(&(Global_40.f_8863.f_149), 2048);
			
				if (func_39(Global_40.f_8863.f_149, 2048) && func_39(Global_40.f_8863.f_149, 1024))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == 513110082)
			{
				if (uParam0->f_4 == 2)
				{
					for (j = 3; j <= 7; j = j + 1)
					{
						if (!func_83(uParam0, j))
							if (func_70())
								if (func_71(func_82(uParam0, j)))
									func_84(uParam0, j);
					}
				
					if (!func_83(uParam0, 2))
					{
						if (!uLocal_55[3])
						{
							if (func_58(Global_35, func_85(uParam0, 0), 15f, true, true))
							{
								if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
								{
									uLocal_47[0] = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_86(uParam0, 2), func_87(uParam0, 0), 1f, 0, false);
								
									if (OBJECT::DOES_PICKUP_EXIST(uLocal_16[0]))
										OBJECT::BLOCK_PICKUP_FROM_PLAYER_COLLECTION(uLocal_16[0], 1);
								}
								else if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									uLocal_55[3] = 1;
								
									if (OBJECT::DOES_PICKUP_EXIST(uLocal_16[0]))
										OBJECT::BLOCK_PICKUP_FROM_PLAYER_COLLECTION(uLocal_16[0], 0);
								}
							}
						}
						else if (OBJECT::DOES_PICKUP_EXIST(uLocal_16[0]) && OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_16[0]))
						{
							func_84(uParam0, 2);
						
							if (!func_75(func_74(uParam0, 0)))
								func_76(func_74(uParam0, 0));
						
							func_73(func_74(uParam0, 0), 1, false, false, false, 752097756, 0, 0, 0, false);
							func_73(func_88(uParam0), WEAPON::GET_WEAPON_CLIP_SIZE(func_74(uParam0, 0)) * 4, true, false, false, 752097756, 0, 0, 0, false);
						}
					}
				
					if (func_39(Global_40.f_8863.f_150, 1) && func_39(Global_40.f_8863.f_150, 2) && func_39(Global_40.f_8863.f_150, 8) && func_39(Global_40.f_8863.f_150, 16) && func_39(Global_40.f_8863.f_150, 32) && func_39(Global_40.f_8863.f_150, 64) && func_39(Global_40.f_8863.f_150, 128) && func_39(Global_40.f_8863.f_150, 4) && !func_70())
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
					else if (func_39(Global_40.f_8863.f_150, 8) && func_39(Global_40.f_8863.f_150, 16) && func_39(Global_40.f_8863.f_150, 32) && func_39(Global_40.f_8863.f_150, 64) && func_39(Global_40.f_8863.f_150, 128) && func_39(Global_40.f_8863.f_150, 4) && !func_70())
					{
						func_77(*uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
				{
					if (func_58(Global_35, func_53(uParam0, 0), 15f, true, true))
					{
						if (uParam0->f_4 == 0)
							if (func_39(Global_40.f_8863.f_150, 2))
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 1));
							else
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 0));
						else if (uParam0->f_4 == 1)
							if (func_39(Global_40.f_8863.f_150, 1))
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 1));
							else
								TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 0));
					
						if (func_70())
						{
							if (func_71(func_82(uParam0, 0)) || func_71(func_82(uParam0, 1)))
							{
								if (uParam0->f_4 == 0)
									func_84(uParam0, 0);
								else if (uParam0->f_4 == 1)
									func_84(uParam0, 1);
							
								func_80(uParam0);
								func_77(*uParam0);
							
								if (uParam0->f_4 == 0)
									if (func_39(Global_40.f_8863.f_150, 2))
										if (func_89(func_82(uParam0, 0), 1, false))
											func_90(func_82(uParam0, 0), 1, true, -142743235, false);
								else if (uParam0->f_4 == 1)
									if (func_39(Global_40.f_8863.f_150, 1))
										if (func_89(func_82(uParam0, 0), 1, false))
											func_90(func_82(uParam0, 0), 1, true, -142743235, false);
							}
						}
						else if (func_39(Global_40.f_8863.f_150, 1) && func_39(Global_40.f_8863.f_150, 2))
						{
							if (func_89(func_82(uParam0, 1), 1, false))
								func_90(func_82(uParam0, 1), 1, true, -142743235, false);
						
							func_73(func_82(uParam0, 2), 1, false, false, false, 752097756, 0, 0, 0, false);
							func_69(uParam0);
							func_49(&iLocal_62, 13, true);
						}
					}
				}
			}
			else if (*uParam0 == 247563739)
			{
				if (func_39(Global_40.f_8863.f_150, 256))
				{
					if (func_11(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
				}
				else
				{
					if (!func_11(*uParam0, 8) && VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
						func_91(uParam0);
				
					if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
						if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
							func_49(&iLocal_62, 11, true);
				}
			}
			else if (*uParam0 == 1284679164)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
					func_77(*uParam0);
			
				if (func_39(Global_40.f_8863.f_149, 131072) && func_39(Global_40.f_8863.f_149, 262144) && func_39(Global_40.f_8863.f_149, 524288) && func_39(Global_40.f_8863.f_149, 1048576))
				{
					if (func_11(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
				}
				else
				{
					for (k = 0; k <= 3; k = k + 1)
					{
						if (!func_83(uParam0, k))
						{
							if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[k]))
							{
								func_92(uParam0, &uLocal_47[k], &uLocal_66, k);
							
								if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[k]) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									func_84(uParam0, k);
									func_49(&iLocal_62, 11, true);
								}
							}
						}
					}
				}
			}
			else if (*uParam0 == -1859413640)
			{
				for (l = 0; l <= 1; l = l + 1)
				{
					if (!func_83(uParam0, l))
					{
						if (func_58(Global_35, func_53(uParam0, 0), 15f, true, true))
						{
							if (func_70())
							{
								if (func_71(func_93(uParam0, l)))
								{
									func_84(uParam0, l);
									func_47(0, 0, 0, 0, 0, false, 1065353216, false);
								}
							}
						}
					}
				}
			
				if (func_39(Global_40.f_8863.f_149, 134217728) && func_39(Global_40.f_8863.f_149, 67108864) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == 373034311)
			{
				if (!func_39(Global_40.f_8863.f_148, 2097152))
				{
					if (func_11(*uParam0, 16))
					{
						func_40(&(Global_40.f_8863.f_148), 2097152);
						func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0);
					}
				}
				else if (!uLocal_55[3])
				{
					if (func_70())
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && func_71(func_93(uParam0, 0)))
							uLocal_55[3] = 1;
				}
				else if (!func_70())
				{
					Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.5f;
					func_94();
					func_49(&iLocal_62, 11, true);
				}
			}
			else if (*uParam0 == -1061274876)
			{
				for (m = 0; m <= 4; m = m + 1)
				{
					if (!func_83(uParam0, m))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[m]))
							if (func_58(Global_35, func_53(uParam0, 0), 15f, true, true))
								TASK::_0xA6A76D666A281F2D(uLocal_66[m], func_82(uParam0, m));
					
						if (func_70())
							if (func_71(func_82(uParam0, m)))
								func_84(uParam0, m);
					}
				}
			
				if (func_39(Global_40.f_8863.f_149, 4096) && func_39(Global_40.f_8863.f_149, 8192) && func_39(Global_40.f_8863.f_149, 16384) && func_39(Global_40.f_8863.f_149, 32768) && func_39(Global_40.f_8863.f_149, 65536) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == 118535038)
			{
				for (n = 0; n <= 2; n = n + 1)
				{
					if (!func_83(uParam0, n))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[n]))
							if (func_58(Global_35, func_53(uParam0, 0), 15f, true, true))
								TASK::_0xA6A76D666A281F2D(uLocal_66[n], func_82(uParam0, n));
					
						if (func_70())
							if (func_71(func_82(uParam0, n)))
								func_84(uParam0, n);
					}
				}
			
				if (func_39(Global_40.f_8863.f_149, 128) && func_39(Global_40.f_8863.f_149, 256) && func_39(Global_40.f_8863.f_149, 512) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == -357364973 || *uParam0 == -1481450947 || *uParam0 == -657632 || *uParam0 == 435290930)
			{
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == -1494823099)
			{
				if (!func_39(Global_40.f_8863.f_149, 2097152))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
						if (func_58(Global_35, func_53(uParam0, 0), 5f, true, true))
							TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_95(uParam0, 0));
				
					if (func_70())
						if (func_71(func_95(uParam0, 0)))
							func_40(&(Global_40.f_8863.f_149), 2097152);
				}
			
				if (!func_39(Global_40.f_8863.f_149, 4194304))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
						if (func_58(Global_35, func_53(uParam0, 1), 5f, true, true))
							TASK::_0xA6A76D666A281F2D(uLocal_66[1], func_95(uParam0, 1));
				
					if (func_70())
						if (func_71(func_95(uParam0, 1)))
							func_40(&(Global_40.f_8863.f_149), 4194304);
				}
			
				if (func_39(Global_40.f_8863.f_149, 2097152) && func_39(Global_40.f_8863.f_149, 4194304) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == -780455182)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
					func_77(*uParam0);
			
				if (!func_39(Global_40.f_8863.f_149, 16777216))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (func_58(Global_35, func_53(uParam0, 0), 15f, true, true))
							TASK::_0xA6A76D666A281F2D(uLocal_66[0], func_82(uParam0, 0));
					
						if (func_70())
							if (func_71(func_82(uParam0, 0)))
								func_40(&(Global_40.f_8863.f_149), 16777216);
					}
				}
			
				if (func_39(Global_40.f_8863.f_149, 16777216) && func_11(*uParam0, 16) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == -709811179)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
					func_77(*uParam0);
			
				if (!func_39(Global_40.f_8863.f_149, 33554432))
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
						if (func_70())
							if (func_71(func_95(uParam0, 0)))
								func_40(&(Global_40.f_8863.f_149), 33554432);
			
				if (func_39(Global_40.f_8863.f_149, 33554432) && func_11(*uParam0, 16) && !func_70())
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
			{
				func_73(func_72(uParam0), 1, false, false, false, 752097756, 0, 0, 0, false);
				func_68(uParam0);
				func_69(uParam0);
				func_49(&iLocal_62, 13, true);
			}
			break;
	
		case 11:
			if (*uParam0 == -1427565340)
			{
				if (!func_48(*uParam0))
				{
					if (func_70())
						if (func_71(func_93(uParam0, 1)))
							uLocal_55[3] = 1;
				
					if (uLocal_55[3] && !func_70())
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
				}
			}
			else if (*uParam0 == 247563739)
			{
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
					func_77(*uParam0);
			
				if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
				{
					if (!func_39(Global_40.f_8863.f_150, 256))
					{
						if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY("ObjectExchange")))
							{
								func_40(&(Global_40.f_8863.f_150), 256);
								func_96(1500, false, 1065353216, 1, 0, 0, 1, 752097756);
							}
						}
					}
					else if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]) && !PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && func_11(*uParam0, 16))
					{
						func_68(uParam0);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
				}
			}
			else if (*uParam0 == 1284679164)
			{
				for (o = 0; o <= 0; o = o + 1)
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[o]))
					{
						if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[o]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
						{
							if (func_11(*uParam0, 16) && func_39(Global_40.f_8863.f_149, 131072) && func_39(Global_40.f_8863.f_149, 262144) && func_39(Global_40.f_8863.f_149, 524288) && func_39(Global_40.f_8863.f_149, 1048576))
							{
								func_68(uParam0);
								func_69(uParam0);
								func_49(&iLocal_62, 13, true);
							}
							else
							{
								func_49(&iLocal_62, 10, true);
							}
						}
					}
				}
			}
			else if (*uParam0 == 2072029413)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
				{
					if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						func_68(uParam0);
					
						if (!func_75(func_74(uParam0, uParam0->f_4)))
							func_76(func_74(uParam0, uParam0->f_4));
					
						func_73(func_74(uParam0, uParam0->f_4), 1, false, false, false, 752097756, 0, 0, 0, false);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
				}
			}
			else if (*uParam0 == 870958936)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
				{
					if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						func_97(uParam0);
						func_80(uParam0);
						func_77(*uParam0);
					
						if (func_39(Global_40.f_8863.f_149, 1) && func_39(Global_40.f_8863.f_149, 2) && func_39(Global_40.f_8863.f_149, 4) && func_39(Global_40.f_8863.f_149, 8) && func_39(Global_40.f_8863.f_149, 16))
							func_32(*uParam0, 2);
					
						if (!func_75(func_74(uParam0, uParam0->f_4)))
							func_76(func_74(uParam0, uParam0->f_4));
					
						func_73(func_74(uParam0, uParam0->f_4), 1, false, false, false, 752097756, 0, 0, 0, false);
						func_69(uParam0);
						func_49(&iLocal_62, 13, true);
					}
				}
			}
			else if (*uParam0 == 733338689)
			{
				if (!func_39(Global_40.f_8863.f_149, 32))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[0]) && PED::_GET_CARRIER_AS_PED(uLocal_66[0]) == Global_35)
					{
						func_40(&(Global_40.f_8863.f_149), 32);
						func_73(func_72(uParam0), 1, false, false, false, 752097756, 0, 0, 0, false);
					}
				}
			
				if (!func_39(Global_40.f_8863.f_149, 64))
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
					{
						if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, uLocal_47[0]) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							func_40(&(Global_40.f_8863.f_149), 64);
						
							if (!func_75(func_74(uParam0, uParam0->f_4)))
								func_76(func_74(uParam0, uParam0->f_4));
						
							func_73(func_74(uParam0, uParam0->f_4), 1, false, false, false, 752097756, 0, 0, 0, false);
						}
					}
				}
			
				if (func_39(Global_40.f_8863.f_149, 32) && func_39(Global_40.f_8863.f_149, 64))
				{
					func_68(uParam0);
					func_69(uParam0);
					func_49(&iLocal_62, 13, true);
				}
			}
			else if (*uParam0 == 373034311)
			{
				func_68(uParam0);
				num = func_98();
				func_99(-321841939, num, 20);
				func_100(MISC::VAR_STRING(2, "MISSION_COMPLETE"));
				func_37(true, -1);
				func_69(uParam0);
				func_49(&iLocal_62, 13, true);
			}
			break;
	
		case 13:
			break;
	
		default:
			break;
	}

	return;
}

void func_9(var uParam0) // Position - 0x249D Hash - 0x64AAF7F8 ^0x492348CD
{
	int i;

	func_69(uParam0);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_14))
		VOLUME::DELETE_VOLUME(volLocal_14);

	for (i = 0; i <= 30 - 1; i = i + 1)
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_16[i]))
			OBJECT::REMOVE_PICKUP(uLocal_16[i]);
	}

	if (*uParam0 == 1284679164)
		func_52(func_50(uParam0, 0), func_51(uParam0, uParam0->f_4), false);
	else if (*uParam0 == -1494823099)
		func_52(func_50(uParam0, 0), func_53(uParam0, 0), false);

	if (*uParam0 == 464413478 || *uParam0 == -1494823099)
	{
		for (i = 0; i <= 2 - 1; i = i + 1)
		{
			if (!(uLocal_52[i] == 0) && ENTITY::IS_MAP_ENTITY_PINNED(uLocal_52[i]))
				ENTITY::_UNPIN_MAP_ENTITY(uLocal_52[i]);
		}
	}

	func_101(&uLocal_66, true);
	func_102(uParam0);
	return;
}

int func_10(Hash hParam0) // Position - 0x258B Hash - 0xB8EC44B7 ^0xB12C5BE7
{
	switch (hParam0)
	{
		case joaat("WB_DISCO_TRAIL_TREES"):
			return -1272862985;
	
		case joaat("WB_DISCO_CIV_WAR_KNIFE"):
			return -599506500;
	
		case joaat("WB_DISCO_TREE_HOUSE"):
			return 1091556515;
	
		case joaat("WB_DISCO_BLACK_FLOWER"):
			return -1494823099;
	
		case joaat("WB_DISCO_MOUNTAIN_CLIMB"):
			return 1833243216;
	
		case joaat("WB_DISCO_ABANDONED_FURNITURE"):
			return -1882503209;
	
		case joaat("WB_DISCO_LIGHTNING_ALLEY"):
			return -1841331114;
	
		case joaat("WB_DISCO_GHOST_TRAIN"):
			return 397377585;
	
		case joaat("WB_DISCO_INDIAN_BURIAL"):
			return -849582265;
	
		case joaat("WB_DISCO_ABANDONED_OIL_WELL"):
			return -1300082860;
	
		case joaat("WB_DISCO_PIRATE_RUM"):
			return -357364973;
	
		case joaat("WB_DISCO_DEAD_BEAR"):
			return 2072069278;
	
		case joaat("WB_DISCO_JESUIT_MISSIONARY"):
			return 429544447;
	
		case joaat("WB_DISCO_ROPE_BRIDGE"):
			return -1923503631;
	
		case joaat("WB_DISCO_QUARRY"):
			return -1848895400;
	
		case joaat("WB_DISCO_GEYSER"):
			return 1351526287;
	
		case joaat("WB_DISCO_DEAD_MICAH"):
			return -1240932004;
	
		case joaat("WB_DISCO_DERAILED_TRAIN"):
			return -2019711818;
	
		case joaat("WB_DISCO_METEOR_SHOWER"):
			return -777150535;
	
		case joaat("WB_DISCO_BIRD_NEST"):
			return 435290930;
	
		case joaat("WB_DISCO_GRAYS_SECRET"):
			return -1887999095;
	
		case joaat("WB_DISCO_DESERTED_FARM"):
			return -919236330;
	
		case joaat("WB_DISCO_DEFACED_GRAVE"):
			return -780455182;
	
		case joaat("WB_DISCO_REGISTER_ROCK"):
			return -1761189332;
	
		case joaat("WB_DISCO_BURNED_SETTLEMENT"):
			return 149709049;
	
		case joaat("WB_DISCO_BROKEN_BRIDGE"):
			return 1519472817;
	
		case joaat("WB_DISCO_DESERT_SKELETONS"):
			return 1505050944;
	
		case joaat("WB_DISCO_WAGON_CHEST"):
			return -1829339703;
	
		case joaat("WB_DISCO_BARREL_RIDER"):
			return -1287911066;
	
		case joaat("WB_DISCO_FACE_TREES"):
			return -1243267511;
	
		case joaat("WB_DISCO_RUNAWAY_CORPSE"):
			return -641229542;
	
		case joaat("WB_DISCO_ANCIENT_URN"):
			return -1427565340;
	
		case joaat("WB_DISCO_DONKEY_LADY"):
			return -1636964661;
	
		case joaat("WB_DISCO_ONE_ROOM_CHURCH"):
			return 921081956;
	
		case joaat("WB_DISCO_OBJECT_IN_TREE"):
			return 1124200691;
	
		case joaat("WB_DISCO_OLD_RAILROAD_CAMP"):
			return 330993088;
	
		case joaat("WB_DISCO_ABANDONED_TRADING_POST"):
			return 247563739;
	
		case joaat("WB_DISCO_RAILROAD_GRAVESTONE"):
			return -657632;
	
		case joaat("WB_DISCO_TREE_TRUNK_BOAT"):
			return -1457751321;
	
		case joaat("WB_DISCO_PIRATE_SKELETON"):
			return -1144800837;
	
		case joaat("WB_DISCO_SCARECROW_1"):
			return -1420566543;
	
		case joaat("WB_DISCO_ABANDONED_WELL"):
			return -1481450947;
	
		case joaat("WB_DISCO_HERMIT_WOMAN"):
			return 1982045664;
	
		case joaat("WB_DISCO_CONESTOGA_WAGON"):
			return 1187917501;
	
		case joaat("WB_DISCO_EARLY_SETTLERS"):
			return 1431862613;
	
		case joaat("WB_DISCO_POTS_TREE"):
			return -1686810506;
	
		case joaat("WB_DISCO_OVERTURNED_HEARSE"):
			return 949011950;
	
		case joaat("WB_DISCO_FRANKENSTEIN_BOOK"):
			return 1284679164;
	
		case joaat("WB_DISCO_ALCHEMIST"):
			return 233600584;
	
		case joaat("WB_DISCO_STUFFED_GORILLA"):
			return -490142739;
	
		case joaat("WB_DISCO_GRAVESTONE_TREE"):
			return -409986722;
	
		case joaat("WB_DISCO_FROZEN_SETTLER"):
			return 2134589549;
	
		case joaat("WB_DISCO_OLD_FIREPLACE"):
			return 1120968795;
	
		case joaat("WB_DISCO_AZTEC_MASK"):
			return 677950956;
	
		case joaat("WB_DISCO_DEAD_CHAIN_GANG"):
			return -499529359;
	
		case joaat("WB_DISCO_CATTLE_CARCASSES"):
			return -968854939;
	
		case joaat("WB_DISCO_PIRATE_KNIFE"):
			return 1424723727;
	
		case joaat("WB_DISCO_ABANDONED_CHURCH"):
			return -1958832660;
	
		case joaat("WB_DISCO_FACTORY_IN_SWAMP"):
			return 1154568952;
	
		case joaat("WB_DISCO_ROADSIDE_BROTHEL"):
			return -2060865802;
	
		case joaat("WB_DISCO_ANCIENT_TOMAHAWK"):
			return 2072029413;
	
		case joaat("WB_DISCO_TREASURE_MAP_HALVES"):
			return 513110082;
	
		case joaat("WB_DISCO_SHRINE"):
			return -1859413640;
	
		case joaat("WB_DISCO_BRAITH_3"):
			return -2108030724;
	
		case joaat("WB_DISCO_SHEEP_GUY"):
			return -777592153;
	
		case joaat("WB_DISCO_ABANDONED_MISSION"):
			return 683269210;
	
		case joaat("WB_DISCO_DEAD_TOWN"):
			return -1109016944;
	
		case joaat("WB_DISCO_MAIL_TRUCK"):
			return -1061274876;
	
		case joaat("WB_DISCO_BANK_STAGECOACH"):
			return 1335921989;
	
		case joaat("WB_DISCO_CIV_WAR_BATTLEFIELD"):
			return 1535254161;
	
		case joaat("WB_DISCO_EASEL"):
			return 1034793488;
	
		case joaat("WB_DISCO_CIRCUS_WAGON"):
			return 657666087;
	
		case joaat("WB_DISCO_WAGON_CIRCLE"):
			return 1187689415;
	
		case joaat("WB_DISCO_VAMPIRE_CLUES"):
			return -890175011;
	
		case joaat("WB_DISCO_OBELISK"):
			return -979575591;
	
		case joaat("WB_DISCO_WATER_DIVINER"):
			return -1177787273;
	
		case joaat("WB_DISCO_WHALE_BONE"):
			return -986176781;
	
		case joaat("WB_DISCO_PIG_MASK"):
			return -763376358;
	
		case joaat("WB_DISCO_MEDITATING_MONK"):
			return -415839138;
	
		case joaat("WB_DISCO_BLACK_SHEEP"):
			return -35775921;
	
		case joaat("WB_DISCO_UTOPIAN_COLONY"):
			return -1960242214;
	
		case joaat("WB_DISCO_FOSSILIZED_MAN"):
			return -1646022773;
	
		case joaat("WB_DISCO_OLD_GRAVESTONES"):
			return 230001763;
	
		case joaat("WB_DISCO_DEAD_MINER"):
			return 425000526;
	
		case joaat("WB_DISCO_HORNET_NESTS"):
			return -834293086;
	
		case joaat("WB_DISCO_FACE_IN_CLIFF"):
			return -2009137002;
	
		case joaat("WB_DISCO_BATS_IN_BARN"):
			return -2008558277;
	
		case joaat("WB_DISCO_WHISKEY_TREE"):
			return 464413478;
	
		case joaat("WB_DISCO_METEOR_HOUSE"):
			return 1673499939;
	
		case joaat("WB_DISCO_SUN_DIAL"):
			return -30872859;
	
		case joaat("WB_DISCO_STRANGE_STATUES"):
			return 2000209669;
	
		case joaat("WB_DISCO_LIGHTNING_TREES"):
			return -715636193;
	
		case joaat("WB_DISCO_POWDER_KEG"):
			return -1308658310;
	
		case joaat("WB_DISCO_BRUSH_FIRE"):
			return 1734766691;
	
		case joaat("WB_DISCO_DEAD_SNAKE"):
			return -1714262909;
	
		case joaat("WB_DISCO_WITCHES_CAULDRON"):
			return 1464664327;
	
		case joaat("WB_DISCO_DEAD_CHINESE_TRAVELLER"):
			return 1342653896;
	
		case joaat("WB_DISCO_CRASHED_AIRSHIP"):
			return 58958195;
	
		case joaat("WB_DISCO_METEORITE"):
			return -709811179;
	
		case joaat("WB_DISCO_BOOTS_NOTE_RANGE"):
			return 2135153015;
	
		case joaat("WB_DISCO_FLYING_MACHINE"):
			return -1053108445;
	
		case joaat("WB_DISCO_OLD_DIRTY_CABIN"):
			return -654238687;
	
		case joaat("WB_DISCO_BUCK_CARCASS"):
			return -1824429070;
	
		case joaat("WB_DISCO_GRAVE"):
			return -1761578407;
	
		case joaat("WB_DISCO_TREE_STRUCK"):
			return -1505275983;
	
		case joaat("WB_DISCO_CEREMONIAL_HATCHET"):
			return -261997819;
	
		case joaat("WB_DISCO_BOAT_IN_TREE"):
			return -1084929085;
	
		case joaat("WB_DISCO_UTE_WICKUP"):
			return -1891628345;
	
		case joaat("WB_DISCO_GIANT_REMAINS"):
			return -1787770845;
	
		case joaat("WB_DISCO_KILL_ZONE"):
			return 503180747;
	
		case joaat("WB_DISCO_VIKING_GEAR"):
			return 733338689;
	
		case joaat("WB_DISCO_PILE_SKULLS"):
			return 173549940;
	
		case joaat("WB_DISCO_ANCIENT_SEALED_CLAY_URN"):
			return -1427565340;
	
		case joaat("WB_DISCO_BRA_SECRET"):
			return 1861313914;
	
		case joaat("WB_DISCO_AXE_IN_TREE"):
			return 870958936;
	
		case joaat("WB_DISCO_DREAMCATCHERS"):
			return -321841939;
	
		case joaat("WB_DISCO_OLD_FIREPIT"):
			return -544327665;
	
		case joaat("WB_DISCO_MICAH_CAMP"):
			return 118535038;
	
		case joaat("WB_DISCO_RAM_MASK"):
			return 1490223565;
	
		case joaat("WB_DISCO_SCARECROW_2"):
			return -1208846034;
	
		case joaat("WB_DISCO_ARTHUR_GRAVE"):
			return 404434344;
	
		case joaat("WB_DISCO_WHISPERING_TREES"):
			return 221420861;
	
		case joaat("WB_DISCO_TRADING_POST"):
			return -232974724;
	
		case joaat("WB_DISCO_BROKEN_WAGONS"):
			return -1859023693;
	
		case joaat("WB_DISCO_CIV_WAR_FORT"):
			return 1347913620;
	
		case joaat("WB_DISCO_DESERT_WAGON"):
			return -1283611369;
	
		case joaat("WB_DISCO_ANCIENT_ARROW_HEADS"):
			return 373034311;
	
		case joaat("WB_DISCO_PAGAN_RITUAL"):
			return -739986731;
	
		case joaat("WB_DISCO_SPERM_WHALE"):
			return 1986618633;
	
		case joaat("WB_DISCO_SWAMP_HAND"):
			return 1519228573;
	
		case joaat("WB_DISCO_MAMMOTH"):
			return -148407339;
	
		case joaat("WB_DISCO_SCARECROW_3"):
			return 1048086072;
	
		case joaat("WB_DISCO_SERPENT_MOUND"):
			return -607940493;
	
		case joaat("WB_DISCO_PHONOGRAPH_HOUSE"):
			return -1614148516;
	
		case joaat("WB_DISCO_STONEHENGE"):
			return -161804536;
	
		case joaat("WB_DISCO_FIRE_LOOKOUT_TOWER"):
			return 918206817;
	
		case joaat("WB_DISCO_FLATTENED_CABIN"):
			return -920971071;
	
		case joaat("WB_DISCO_OLD_WORLD_SCRIPT"):
			return -1609238411;
	
		case joaat("WB_DISCO_CAT_MASK"):
			return 1801731633;
	
		case joaat("WB_DISCO_DEAD_CIV_WAR"):
			return 1937333853;
	
		case joaat("WB_DISCO_LOVE_MESSAGE"):
			return 74587361;
	
		case joaat("WB_DISCO_HIDDEN_TUNNEL"):
			return 308500632;
	
		case joaat("WB_DISCO_SCARECROW_4"):
			return 939555152;
	
		case joaat("WB_DISCO_CORPSE_PIT"):
			return -1568839185;
	
		default:
		
	}

	return 0;
}

BOOL func_11(int iParam0, BOOL bParam1) // Position - 0x2D7C Hash - 0x92045BA6 ^0x92045BA6
{
	if (!func_103(iParam0))
		return false;

	return Global_40.f_8863[func_104(iParam0, 1)] && bParam1 != false;
}

void func_12(var uParam0) // Position - 0x2DA6 Hash - 0xDA8817E5 ^0xAD3AC0C4
{
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;
	char* name;

	if (func_45(*uParam0))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			switch (*uParam0)
			{
				case -1891628345:
					vector = { -2694.572f, -1500.398f, 150f };
					vector2 = { 0f, 0f, 1.841f };
					vector3 = { 16.663f, 12.967f, 11.141f };
					name = "DLUW_Attack";
					break;
			
				case -1859413640:
					vector = { 2195.32f, -554.613f, 40.995f };
					vector2 = { 0f, 0f, -74.605f };
					vector3 = { 1.691f, 1.755f, 2.318f };
					name = "DLSW_Attack";
					break;
			
				case -1761578407:
					if (Global_36 > -1200f)
					{
						vector = { -762.369f, -1910.463f, 51f };
						vector2 = { 0f, 0f, 43.472f };
						vector3 = { 3.896f, 3.266f, 3.303f };
						name = "DLG1_Attack";
					}
					else
					{
						vector = { -1738f, -996f, 114f };
						vector2 = { 0f, 0f, -54.795f };
						vector3 = { 4.369f, 3.487f, 3.303f };
						name = "DLG2_Attack";
					}
					break;
			
				case -849582265:
					vector = { -2587.832f, -81.85f, 166.262f };
					vector2 = { 0f, 0f, 9.056f };
					vector3 = { 52.076f, 56.679f, 16.103f };
					name = "DLIB_Attack";
					break;
			
				case -780455182:
					vector = { -988.307f, 1692.387f, 243.864f };
					vector2 = { 0f, 0f, 0f };
					vector3 = { 4.673f, 3.887f, 3.06f };
					name = "DLDG_Attack";
					break;
			
				case -739986731:
					vector = { -2905.353f, -254.294f, 186.571f };
					vector2 = { 0f, 0f, 129.763f };
					vector3 = { 7.64f, 7.534f, 4f };
					name = "DLPR_Attack";
					break;
			
				case -641229542:
					vector = { 1750.836f, -2091.653f, 40.941f };
					vector2 = { 0f, 0f, -30.078f };
					vector3 = { 2.215f, 3.182f, 2.394f };
					name = "DLRC_Attack";
					break;
			
				case -499529359:
					vector = { 2285.546f, 97.363f, 49.583f };
					vector2 = { 0f, 0f, -30.998f };
					vector3 = { 7.132f, 4.645f, 4.596f };
					name = "DLDCG_Attack";
					break;
			
				case -657632:
					vector = { 2684.651f, 71.256f, 59f };
					vector2 = { 0f, 0f, 111.493f };
					vector3 = { 4.343f, 3.084f, 3.303f };
					name = "DLRG_Attack";
					break;
			
				case 230001763:
					vector = { 2133.283f, 145.452f, 75.745f };
					vector2 = { 0f, 0f, 58.303f };
					vector3 = { 17.167f, 17.176f, 9.904f };
					name = "DLOG_Attack";
					break;
			
				case 404434344:
					if (Global_36 > -1200f)
					{
						vector = { -762.369f, -1910.463f, 51f };
						vector2 = { 0f, 0f, 43.472f };
						vector3 = { 3.896f, 3.266f, 3.303f };
						name = "DLG1_Attack";
					}
					else
					{
						vector = { -1738f, -996f, 114f };
						vector2 = { 0f, 0f, -54.795f };
						vector3 = { 4.369f, 3.487f, 3.303f };
						name = "DLG2_Attack";
					}
					break;
			
				case 429544447:
					vector = { -6314.771f, -3467f, -11.247f };
					vector2 = { 0f, 0f, 32.675f };
					vector3 = { 2.852f, 3.164f, 3.06f };
					name = "DLJM_Attack";
					break;
			
				case 683269210:
					vector = { -5576.82f, -2583.934f, -9.541f };
					vector2 = { 0f, 0f, 30.534f };
					vector3 = { 13.524f, 10.157f, 15.906f };
					name = "DLAM_Attack";
					break;
			
				case 921081956:
					vector = { 2415.271f, -738.691f, 41f };
					vector2 = { 0f, 0f, 89.245f };
					vector3 = { 6.662f, 6.841f, 12.231f };
					name = "DLORC_Attack";
					break;
			
				case 949011950:
					vector = { -2341.024f, -2180.015f, 70f };
					vector2 = { 0f, 0f, 123.618f };
					vector3 = { 7.322f, 10.134f, 10.231f };
					name = "DLOH_Attack";
					break;
			
				case 1861313914:
					vector = { 894.559f, -1969.353f, 43.7f };
					vector2 = { 0f, 0f, 51.997f };
					vector3 = { 4.5f, 4.5f, 6f };
					name = "DLBS_Attack";
					break;
			
				case 2072029413:
					vector = { 808.518f, 2299.105f, 250.32f };
					vector2 = { 0f, 0f, 21.51f };
					vector3 = { 5f, 4f, 9f };
					name = "DLAT_Attack";
					break;
			}
		
			uParam0->f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, name);
		}
	}

	return;
}

Vector3 func_13(var uParam0, int iParam1) // Position - 0x328B Hash - 0xAF22EF00 ^0xAF22EF00
{
	switch (*uParam0)
	{
		case -1859023693:
			if (iParam1 == 0)
				return 525.7659f, 373.9645f, 107.9581f;
			else if (iParam1 == 1)
				return 610.1569f, -142.2089f, 146.4651f;
			else if (iParam1 == 2)
				return 1253.2327f, 40.0713f, 94.2498f;
			else if (iParam1 == 3)
				return 886.287f, 470.977f, 103.937f;
			else if (iParam1 == 4)
				return 370.7786f, 1072.1497f, 190.1675f;
			else if (iParam1 == 5)
				return -3575.8662f, -2199.0667f, -13.415f;
			else if (iParam1 == 6)
				return -5159.0303f, -3162.6704f, -18.5954f;
			else if (iParam1 == 7)
				return -3970.8042f, -3027.6924f, -12.9605f;
			else if (iParam1 == 8)
				return -3242.6785f, -3077.8752f, -0.5597f;
			else if (iParam1 == 9)
				return -3686.284f, -3258.813f, -4.4117f;
			else if (iParam1 == 10)
				return 795.2883f, 1013.3038f, 118.3968f;
			break;
	
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
				return -762.4968f, -1910.6614f, 50.4933f;
			else if (iParam1 == 10)
				return -1738.2819f, -995.4295f, 113.6716f;
			else
				return func_51(uParam0, iParam1);
			break;
	
		case -1272862985:
			return func_51(uParam0, iParam1);
	
		case -1243267511:
			return func_51(uParam0, iParam1);
	
		case -890175011:
			return func_51(uParam0, iParam1);
	
		case -834293086:
			if (iParam1 == 0)
				return 1747.0217f, -267.8047f, 73.0826f;
			else if (iParam1 == 1)
				return 1978.2886f, -60.4567f, 59.4946f;
			else if (iParam1 == 2)
				return 640.8188f, -1062.6128f, 48.0237f;
			else if (iParam1 == 3)
				return 839.6257f, -1174.0022f, 54.9616f;
			else if (iParam1 == 4)
				return 1917.6115f, 10.6206f, 77.6881f;
			else if (iParam1 == 5)
				return -85.5144f, 76.4358f, 93.2066f;
			else if (iParam1 == 6)
				return 76.4646f, 854.9302f, 207.8816f;
			else if (iParam1 == 7)
				return 1871.2151f, 643.5952f, 119.9651f;
			else if (iParam1 == 8)
				return 2572.7585f, 690.9401f, 83.9642f;
			else if (iParam1 == 9)
				return 2264.918f, 934.7651f, 81.1843f;
			break;
	
		case -544327665:
			if (iParam1 == 0)
				return 500.882f, 80.003f, 139.28f;
			else if (iParam1 == 1)
				return 759.079f, -1133.282f, 55.059f;
			else if (iParam1 == 2)
				return -3667.897f, -2805.515f, -7.129f;
			break;
	
		case -321841939:
			return func_51(uParam0, iParam1);
	
		case 503180747:
			if (iParam1 == 0)
				return 2325.9783f, 1070.3202f, 44.9401f;
			else if (iParam1 == 1)
				return -2698.6558f, 697.2829f, 162.88904f;
			break;
	
		case 513110082:
			if (iParam1 == 0)
				return -2531.5f, 1174.4f, 225.9f;
			else if (iParam1 == 1)
				return 3026.4f, 1778f, 84.2f;
			else if (iParam1 == 2)
				return -4389.58f, -2166.55f, 50.81f;
			break;
	
		case 677950956:
			return func_51(uParam0, iParam1);
	
		case 870958936:
			return func_86(uParam0, iParam1);
	
		case 1120968795:
			if (iParam1 == 0)
				return -1521.8108f, 519.1222f, 101.6756f;
			else if (iParam1 == 1)
				return 2417.9363f, 853.4788f, 72.5143f;
			break;
	
		case 1519472817:
			if (iParam1 == 0)
				return -2519.4753f, 820.6946f, 146.4494f;
			else if (iParam1 == 1)
				return -1349.7274f, -923.9958f, 69.342f;
			break;
	
		case 1535254161:
			return func_51(uParam0, iParam1);
	
		case 2000209669:
			return func_105(uParam0, iParam1);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

float func_14(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x3741 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_15() // Position - 0x3769 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_106() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_16(int iParam0) // Position - 0x378E Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_107(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_17(var uParam0) // Position - 0x37ED Hash - 0x700EF42A ^0x1FB24E73
{
	if (func_39(uParam0->f_3, 1))
		return true;

	return false;
}

void func_18(var uParam0) // Position - 0x3806 Hash - 0xB1BE772 ^0x50C155FC
{
	if (func_33(uParam0->f_6.f_8))
		func_108(&(uParam0->f_6.f_8), true, true);

	func_25(&(uParam0->f_6.f_5));

	if (func_39(uParam0->f_3, 2))
		func_43(&(uParam0->f_3), 2);

	return;
}

void func_19(var uParam0, int iParam1) // Position - 0x3846 Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

BOOL func_20(var uParam0) // Position - 0x3854 Hash - 0x52835008 ^0x3922FFAC
{
	switch (*uParam0)
	{
		case -1859023693:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 4096))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 8192))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_153, 16384))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_153, 32768))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_153, 65536))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_153, 131072))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_153, 262144))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_153, 524288))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_153, 1048576))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_153, 2097152))
					return true;
			else if (uParam0->f_4 == 10)
				if (func_39(Global_40.f_8863.f_153, 4194304))
					return true;
			break;
	
		case -1761578407:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_154, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_154, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_154, 4))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_154, 8))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_154, 16))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_154, 32))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_154, 64))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_154, 128))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_154, 256))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_154, 512))
					return true;
			else if (uParam0->f_4 == 10)
				if (func_39(Global_40.f_8863.f_154, 1024))
					return true;
			break;
	
		case -1272862985:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_152, 262144))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_152, 524288))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_152, 1048576))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_152, 2097152))
					return true;
			break;
	
		case -890175011:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_154, 2048))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_154, 4096))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_154, 8192))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_154, 16384))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_154, 32768))
					return true;
			break;
	
		case -834293086:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_153, 4))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_153, 8))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_153, 16))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_153, 32))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_153, 64))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_153, 128))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_153, 256))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_153, 512))
					return true;
			break;
	
		case -544327665:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_152, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_152, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_152, 4))
					return true;
			break;
	
		case -321841939:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_148, 2))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_148, 4))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_148, 8))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_148, 16))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_148, 32))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_148, 64))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_148, 128))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_148, 256))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_148, 512))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_148, 1024))
					return true;
			else if (uParam0->f_4 == 10)
				if (func_39(Global_40.f_8863.f_148, 2048))
					return true;
			else if (uParam0->f_4 == 11)
				if (func_39(Global_40.f_8863.f_148, 4096))
					return true;
			else if (uParam0->f_4 == 12)
				if (func_39(Global_40.f_8863.f_148, 8192))
					return true;
			else if (uParam0->f_4 == 13)
				if (func_39(Global_40.f_8863.f_148, 16384))
					return true;
			else if (uParam0->f_4 == 14)
				if (func_39(Global_40.f_8863.f_148, 32768))
					return true;
			else if (uParam0->f_4 == 15)
				if (func_39(Global_40.f_8863.f_148, 65536))
					return true;
			else if (uParam0->f_4 == 16)
				if (func_39(Global_40.f_8863.f_148, 131072))
					return true;
			else if (uParam0->f_4 == 17)
				if (func_39(Global_40.f_8863.f_148, 262144))
					return true;
			else if (uParam0->f_4 == 18)
				if (func_39(Global_40.f_8863.f_148, 524288))
					return true;
			else if (uParam0->f_4 == 19)
				if (func_39(Global_40.f_8863.f_148, 1048576))
					return true;
			break;
	
		case 404434344:
			if (func_39(Global_40.f_8863.f_154, 1))
				return true;
			break;
	
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
						return true;
					break;
			
				case 2:
					if (func_39(Global_40.f_8863.f_150, 4) && func_39(Global_40.f_8863.f_150, 8) && func_39(Global_40.f_8863.f_150, 16) && func_39(Global_40.f_8863.f_150, 32) && func_39(Global_40.f_8863.f_150, 64) && func_39(Global_40.f_8863.f_150, 128))
						return true;
					break;
			
				default:
					break;
			}
			break;
	
		case 677950956:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_154, 65536))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_154, 131072))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_154, 262144))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_154, 524288))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_154, 1048576))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_154, 2097152))
					return true;
			break;
	
		case 870958936:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_149, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_149, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_149, 4))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_149, 8))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_149, 16))
					return true;
			break;
	
		case 1120968795:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 1024))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 2048))
					return true;
			break;
	
		case 1519472817:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 8388608))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 16777216))
					return true;
			break;
	
		case 2000209669:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_152, 8))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_152, 16))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_152, 32))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_152, 64))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_152, 128))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_152, 256))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_152, 512))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_152, 1024))
					return true;
			else if (uParam0->f_4 == 11)
				if (func_39(Global_40.f_8863.f_152, 16384))
					return true;
			break;
	
		default:
			break;
	}

	return false;
}

void func_21(var uParam0) // Position - 0x4511 Hash - 0x32186C70 ^0xD26CF7E4
{
	uParam0->f_6.f_2 = { func_51(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;

	switch (*uParam0)
	{
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
	
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
	
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
	
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			func_109(uParam0);
			break;
	
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
	
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
	
		case -1243267511:
			uParam0->f_6 = 10f;
			func_109(uParam0);
			break;
	
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
		
			if (uParam0->f_4 == 0 || uParam0->f_4 == 1 || uParam0->f_4 == 3 || uParam0->f_4 == 4)
				func_109(uParam0);
			break;
	
		case -607940493:
			uParam0->f_6 = 30f;
			func_109(uParam0);
			break;
	
		case -321841939:
			uParam0->f_6 = 10f;
			break;
	
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
		
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
				func_109(uParam0);
			break;
	
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			func_109(uParam0);
			break;
	
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4729 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_23(var uParam0) // Position - 0x4753 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_24(var uParam0) // Position - 0x4769 Hash - 0x5001E582 ^0x5001E582
{
	return func_110(*uParam0, 1);
}

void func_25(var uParam0) // Position - 0x4779 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_111(uParam0, 0f);
	return;
}

int func_26(var uParam0) // Position - 0x4788 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_24(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_112(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_113() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_27(var uParam0, BOOL bParam1) // Position - 0x47DB Hash - 0x1ACEECAF ^0xDBC34297
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
			return true;
	
		if (func_114(uParam0))
			return true;
	
		if (!func_115(uParam0, 0))
			return true;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return true;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !func_116(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6.f_1 + 0.5f || !func_116(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_114(uParam0))
			return false;
	
		if (!func_115(uParam0, 0))
			return false;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return false;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && func_116(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) <= uParam0->f_6.f_1 && func_116(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}

	return false;
}

void func_28(var uParam0) // Position - 0x49FD Hash - 0x7046A941 ^0xB12522B2
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (func_48(*uParam0))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_117("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_117("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_117("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_117("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			func_34(uParam0->f_6.f_8, false, true);
		}
		else
		{
			uParam0->f_6.f_8 = func_117("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
		}
	
		func_118(uParam0->f_6.f_8, 13, true, true);
		func_119(uParam0->f_6.f_8);
	}

	return;
}

char* func_29(var uParam0) // Position - 0x4E3F Hash - 0x7223E95E ^0xF99B86DA
{
	if (*uParam0 == 404434344)
		if (func_48(*uParam0))
			return "DISCO_GRAVE_AM";
		else
			return "DISCO_GRAVE";
	else if (*uParam0 == -1761578407)
		if (func_20(uParam0))
			if (uParam0->f_4 == 0)
				return "DISCO_GRAVE_AM";
			else if (uParam0->f_4 == 1)
				return "DISCO_GRAVE_JC";
			else if (uParam0->f_4 == 2)
				return "DISCO_GRAVE_HM";
			else if (uParam0->f_4 == 3)
				return "DISCO_GRAVE_LS";
			else if (uParam0->f_4 == 4)
				return "DISCO_GRAVE_SM";
			else if (uParam0->f_4 == 5)
				return "DISCO_GRAVE_DC";
			else if (uParam0->f_4 == 6)
				return "DISCO_GRAVE_KD";
			else if (uParam0->f_4 == 7)
				return "DISCO_GRAVE_SG";
			else if (uParam0->f_4 == 8)
				return "DISCO_GRAVE_EF";
		else
			return "DISCO_GRAVE";
	else if (*uParam0 == -890175011)
		return "DISCO_VAMP";
	else if (*uParam0 == 677950956)
		return "DISCO_VAMP";
	else if (*uParam0 == -321841939)
		return "DISCO_DREAM";
	else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		if (*uParam0 == -1958832660)
			return "DISCO_AC";
		else if (*uParam0 == -1300082860)
			return "DISCO_AW";
		else if (*uParam0 == 247563739)
			return "DISCO_ATP";
		else if (*uParam0 == -1287911066)
			return "DISCO_BR";
		else if (*uParam0 == 1861313914)
			return "DISCO_BS";
		else if (*uParam0 == 1734766691)
			return "DISCO_FIRE";
		else if (*uParam0 == 657666087)
			return "DISCO_CW";
		else if (*uParam0 == 1535254161)
			return "DISCO_CWB";
		else if (*uParam0 == 58958195)
			return "DISCO_CA";
		else if (*uParam0 == -1109016944)
			return "DISCO_DT";
		else if (*uParam0 == -780455182)
			return "DISCO_DG";
		else if (*uParam0 == -1636964661)
			return "DISCO_DL";
		else if (*uParam0 == -2009137002)
			return "DISCO_FIC";
		else if (*uParam0 == -1243267511)
			return "DISCO_FT";
		else if (*uParam0 == -1053108445)
			return "DISCO_FLY";
		else if (*uParam0 == -1646022773)
			return "DISCO_FO";
		else if (*uParam0 == 1284679164)
			return "DISCO_FR";
		else if (*uParam0 == 2134589549)
			return "DISCO_FS";
		else if (*uParam0 == -1787770845)
			return "DISCO_GM";
		else if (*uParam0 == -1887999095)
			return "DISCO_GS";
		else if (*uParam0 == 1519228573)
			return "DISCO_HS";
		else if (*uParam0 == 1982045664)
			return "DISCO_HW";
		else if (*uParam0 == 308500632)
			return "DISCO_HT";
		else if (*uParam0 == -849582265)
			return "DISCO_IB";
		else if (*uParam0 == 429544447)
			return "DISCO_JM";
		else if (*uParam0 == -148407339)
			return "DISCO_MA";
		else if (*uParam0 == -415839138)
			return "DISCO_MONK";
		else if (*uParam0 == 1673499939)
			return "DISCO_MH";
		else if (*uParam0 == -709811179)
			return "DISCO_MT";
		else if (*uParam0 == -979575591)
			return "DISCO_OB";
		else if (*uParam0 == -1609238411)
			return "DISCO_OWS";
		else if (*uParam0 == 921081956)
			return "DISCO_ORC";
		else if (*uParam0 == -739986731)
			return "DISCO_PR";
		else if (*uParam0 == 1034793488)
			return "DISCO_PIC";
		else if (*uParam0 == -1614148516)
			return "DISCO_PH";
		else if (*uParam0 == -1761189332)
			return "DISCO_RR";
		else if (*uParam0 == -607940493)
			return "DISCO_SM";
		else if (*uParam0 == 1986618633)
			return "DISCO_SW";
		else if (*uParam0 == -161804536)
			return "DISCO_ST";
		else if (*uParam0 == 2000209669)
			return "DISCO_SS";
		else if (*uParam0 == -232974724)
			return "DISCO_TP";
		else if (*uParam0 == -1272862985)
			return "DISCO_TT";
		else if (*uParam0 == -1891628345)
			return "DISCO_UTE";
		else if (*uParam0 == -1960242214)
			return "DISCO_UCB";
		else if (*uParam0 == -1505275983)
			return "DISCO_WT";
		else if (*uParam0 == -986176781)
			return "DISCO_WB";
		else if (*uParam0 == 373034311)
			return "DISCO_AA";
	else if (*uParam0 == -986176781 || *uParam0 == 1986618633 || *uParam0 == -1787770845 || *uParam0 == -148407339)
		return "DISCO_BONES";
	else if (*uParam0 == -1958832660 || *uParam0 == 921081956 || *uParam0 == 247563739 || *uParam0 == -232974724 || *uParam0 == -1300082860 || *uParam0 == -979575591 || *uParam0 == 1673499939)
		return "DISCO_STRUCT";
	else if (*uParam0 == -780455182)
		return "DISCO_GRAVE";
	else if (*uParam0 == -2009137002)
		return "DISCO_SCULPT";
	else if (*uParam0 == -1243267511 || *uParam0 == -1272862985 || *uParam0 == -1505275983)
		return "DISCO_TREE";
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
		return "DISCO_PAINT";
	else if (*uParam0 == -1646022773 || *uParam0 == 1284679164 || *uParam0 == 2134589549 || *uParam0 == -1887999095 || *uParam0 == 1519228573 || *uParam0 == -1287911066 || *uParam0 == -1636964661 || *uParam0 == 429544447 || *uParam0 == -739986731)
		return "DISCO_CORPSE";
	else if (*uParam0 == -1109016944 || *uParam0 == 1535254161 || *uParam0 == -849582265 || *uParam0 == -161804536 || *uParam0 == -1891628345 || *uParam0 == -1960242214 || *uParam0 == -607940493 || *uParam0 == 308500632 || *uParam0 == 1734766691 || *uParam0 == -415839138 || *uParam0 == 1982045664)
		return "DISCO_SITE";
	else if (*uParam0 == -1614148516)
		return "DISCO_DEVICE";
	else if (*uParam0 == -1761189332 || *uParam0 == -1609238411 || *uParam0 == -709811179)
		return "DISCO_ROCK";
	else if (*uParam0 == 58958195 || *uParam0 == -1053108445 || *uParam0 == 657666087)
		return "DISCO_WRECK";
	else if (*uParam0 == 1861313914)
		if (func_16(59))
			return "DISCO_CORPSE";
		else
			return "DISCO_SITE";
	else if (*uParam0 == 2000209669)
		if (uParam0->f_4 == 11)
			return "DISCO_PAINT";
		else
			return "DISCO_SCULPT";
	else
		return "DISCO_UNKNOWN";

	return "";
}

void func_30(var uParam0, int iParam1, char* sParam2, BOOL bParam3) // Position - 0x56B0 Hash - 0x92B8786B ^0x6992BF35
{
	int num;
	int num2;
	int num3;

	if (!func_33(iParam1))
		return;

	num = func_120(iParam1);

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
	{
		if (!(*uParam0 == -890175011) && !(*uParam0 == 677950956) && !(*uParam0 == -1308658310))
			if (bParam3)
				func_40(&num2, 12);
			else
				func_40(&num2, 8);
	
		if (*uParam0 == 1861313914 || *uParam0 == -1308658310 || *uParam0 == -415839138)
			if (func_11(*uParam0, 16))
				num3 = 0;
			else
				num3 = 2;
		else
			num3 = 0;
	
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, num3, 1, 1710353528, sParam2, num2);
	}

	return;
}

BOOL func_31(var uParam0) // Position - 0x577B Hash - 0x87BF472A ^0x8A3FB963
{
	if (func_121(uParam0->f_6.f_8, true))
		return true;

	return false;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0x5796 Hash - 0x54AA129E ^0x54AA129E
{
	if (!func_103(iParam0))
		return;

	Global_40.f_8863[func_104(iParam0, 1)] = Global_40.f_8863[func_104(iParam0, 1)] || bParam1;
	return;
}

BOOL func_33(int iParam0) // Position - 0x57CC Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_34(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x580B Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_33(iParam0))
		return;

	num = func_120(iParam0);
	func_122(num, bParam1);
	return;
}

void func_35(var uParam0) // Position - 0x5837 Hash - 0xB093A844 ^0xA61CDF5C
{
	if (func_106() != -1)
		return;

	if (*uParam0 == -321841939)
	{
		if (func_123(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
				MAP::_MAP_DISCOVER_REGION(func_123(uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_124(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_124(*uParam0, uParam0->f_4)))
				MAP::_MAP_DISCOVER_REGION(func_124(*uParam0, uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	
		func_91(uParam0);
	}

	return;
}

void func_36(var uParam0, BOOL bParam1) // Position - 0x58C5 Hash - 0x3BBAC949 ^0x751C9296
{
	int num;

	if (*uParam0 == -321841939)
		if (bParam1)
			if (func_98() < 20 - 1)
				return;
		else if (!func_125())
			return;

	if (bParam1)
		num = func_127(*uParam0, func_126(), uParam0->f_4);
	else
		num = func_128(*uParam0, uParam0->f_4);

	if (num != 0)
	{
		if (bParam1)
		{
			func_129(num, 0);
		
			if (*uParam0 == -890175011)
			{
				if (func_130() == 5 - 1)
				{
					if (func_126())
					{
						func_129(joaat("journal_town_secret_vampmap_ar"), 0);
						num = joaat("journal_town_secret_vampmap_ar");
					}
					else
					{
						func_129(joaat("journal_town_secret_vampmap_jn"), 0);
						num = joaat("journal_town_secret_vampmap_jn");
					}
				}
			}
		}
	
		if (func_131())
		{
			Global_1357518 = num;
		
			if (bParam1 == true)
				Global_1357519 = { uParam0->f_6.f_2 };
		}
	}

	return;
}

void func_37(BOOL bParam0, int iParam1) // Position - 0x5996 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_132(&Global_0, 8);

	if (!func_133() || func_106() != -1)
		return;

	func_132(&Global_0, 1);
	return;
}

float func_38(int iParam0, BOOL bParam1) // Position - 0x59DC Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return 0f;

	num = func_120(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x5A34 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_40(int iParam0, int iParam1) // Position - 0x5A43 Hash - 0xF55E891F ^0xF55E891F
{
	func_134(iParam0, iParam1);
	return;
}

void func_41(var uParam0) // Position - 0x5A53 Hash - 0x7DD80D7C ^0x2A3ED7AA
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_51(uParam0, uParam0->f_4) };
	return;
}

void func_42(var uParam0) // Position - 0x5A9A Hash - 0xC9354E8F ^0x12F79925
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &(uParam0->f_6.f_10));

	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x5ABA Hash - 0xF55E891F ^0xF55E891F
{
	func_135(uParam0, iParam1);
	return;
}

void func_44(var uParam0) // Position - 0x5ACA Hash - 0x90A3D13B ^0x25DA303B
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(Global_35, 6, false);

	return;
}

BOOL func_45(int iParam0) // Position - 0x5AE6 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1891628345:
		case -1859413640:
		case -1761578407:
		case -849582265:
		case -780455182:
		case -739986731:
		case -641229542:
		case -499529359:
		case -657632:
		case 230001763:
		case 404434344:
		case 429544447:
		case 683269210:
		case 921081956:
		case 949011950:
		case 1861313914:
		case 2072029413:
			return true;
	}

	return false;
}

BOOL func_46(var uParam0) // Position - 0x5B64 Hash - 0xA77C53D8 ^0x41543EB2
{
	Vector3 vector;
	var coords;

	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		func_136(*uParam0, &vector);
	
		if (FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(-1, vector, vector.f_3, vector.f_6) == func_137(Global_35))
		{
			return true;
		}
		else if (MISC::IS_BULLET_IN_ANGLED_AREA(vector, vector.f_3, vector.f_6, true))
		{
			coords = { 0f, 0f, 0f };
		
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &coords))
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(coords, vector, vector.f_3, vector.f_6, false, true))
					return true;
		}
	}

	return false;
}

void func_47(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x5BED Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_106() != -1)
		return;

	if (Global_36616 && func_138(iParam1) != false)
		return;

	num = func_139(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_140(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
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
			func_141(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_140(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

BOOL func_48(int iParam0) // Position - 0x5CEC Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_11(iParam0, 2);
}

void func_49(var uParam0, int iParam1, BOOL bParam2) // Position - 0x5CFB Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_25(&(uParam0->f_1));

	return;
}

char* func_50(var uParam0, int iParam1) // Position - 0x5D15 Hash - 0x577B8755 ^0xCE6C701
{
	switch (*uParam0)
	{
		case -1494823099:
			return "scr_shack_jewlerybox";
	
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return "m05_mine_collapse_rocks";
			
				case 1:
					return "m05_mine_explosive";
			
				default:
					break;
			}
			break;
	
		case 1284679164:
			return "van_farmhouse_monster";
	}

	return "";
}

Vector3 func_51(var uParam0, int iParam1) // Position - 0x5D78 Hash - 0xC47AB599 ^0xC47AB599
{
	switch (*uParam0)
	{
		case -2009137002:
			return 1260.3309f, 1296.422f, 217.8313f;
	
		case -1960242214:
			return 749.9653f, 1825.0815f, 240.1131f;
	
		case -1958832660:
			return 1591.8629f, -1845.2925f, 65.196f;
	
		case -1891628345:
			return -2694.1494f, -1499.7002f, 150.6036f;
	
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return func_142(uParam0, 0);
	
		case -1787770845:
			return -1915.6179f, -30.6525f, 287.4662f;
	
		case -1761578407:
			if (iParam1 == 0)
				return 794.4265f, 1777.1082f, 281.0706f;
			else if (iParam1 == 1)
				return -1277.7407f, 2895.727f, 386.2982f;
			else if (iParam1 == 2)
				return 2577.4329f, -627.2448f, 42.97695f;
			else if (iParam1 == 3)
				return 2579.3894f, -627.86975f, 42.96334f;
			else if (iParam1 == 4)
				return 672.4651f, -974.1768f, 54.4574f;
			else if (iParam1 == 5)
				return -1307.0912f, 2468.8923f, 309.8042f;
			else if (iParam1 == 6)
				return 1735.9027f, -1893.9288f, 45.189f;
			else if (iParam1 == 7)
				return 2157.9163f, 795.1056f, 156.5394f;
			else if (iParam1 == 8)
				return 514.147f, 1932.5339f, 200.2069f;
			break;
	
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
	
		case -1646022773:
			return 2148.9868f, 1918.4429f, 194.4452f;
	
		case -1614148516:
			return func_53(uParam0, 0);
	
		case -1609238411:
			return 3220.5217f, 1463.2781f, 52.9448f;
	
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
	
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
	
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.3552f, 1069.8513f, 122.7836f;
			
				case 1:
					return 2150.689f, 1124.0936f, 130.4564f;
			
				case 2:
					return 2210.9138f, 1134.4962f, 141.0999f;
			
				case 3:
					return 2251.7058f, 1198.5743f, 121.7253f;
			
				default:
				
			}
			break;
	
		case -1243267511:
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
			
				case 1:
					return -2687.9932f, -402.3363f, 148.3894f;
			
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
			
				case 3:
					return -2694.1677f, -412.4018f, 148.8531f;
			
				case 4:
					return -2697.2847f, -408.3287f, 149.3549f;
			
				default:
				
			}
			break;
	
		case -1109016944:
			return 1733.1165f, -424.945f, 48.4327f;
	
		case -1053108445:
			return -4346.388f, -2604.2485f, -1.1693f;
	
		case -986176781:
			return -2774.1094f, -431.3145f, 174.3467f;
	
		case -979575591:
			return -2937.4429f, -138.5504f, 199.3164f;
	
		case -890175011:
			switch (iParam1)
			{
				case 0:
					return 2826.6787f, -1323.0426f, 46.43373f;
			
				case 1:
					return 2736.7324f, -1339.3354f, 46.65415f;
			
				case 2:
					return 2698.488f, -1306.1943f, 49.48277f;
			
				case 3:
					return 2773.8484f, -1182.3187f, 48.53596f;
			
				case 4:
					return 2820.0027f, -1230.7089f, 47.52145f;
			
				default:
				
			}
			break;
	
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
	
		case -780455182:
			return func_53(uParam0, 1);
	
		case -739986731:
			return -2904.9517f, -254.2731f, 186.965f;
	
		case -709811179:
			return 2291.5684f, 2080.9324f, 200.7657f;
	
		case -607940493:
			return 2698.9946f, 410.8617f, 77.4735f;
	
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.4495f, 198.416f;
			
				case 1:
					return -490.2726f, 1355.5359f, 205.7345f;
			
				case 2:
					return 299.3675f, 1795.3009f, 197.5344f;
			
				case 3:
					return 1884.7041f, 1927.3337f, 249.5903f;
			
				case 4:
					return 2549.5059f, 1624.2812f, 93.5729f;
			
				case 5:
					return 2489.881f, 1375.1556f, 107.1609f;
			
				case 6:
					return 2657.0615f, 1286.7151f, 117.8777f;
			
				case 7:
					return 2577.3848f, 1161.8445f, 158.058f;
			
				case 8:
					return 2342.9253f, 844.4003f, 82.3675f;
			
				case 9:
					return 1698.3235f, 719.6797f, 125.0664f;
			
				case 10:
					return 1986.1445f, -208.0823f, 51.4904f;
			
				case 11:
					return 1263.5956f, 528.7397f, 88.8471f;
			
				case 12:
					return 1626.3717f, -0.4718f, 87.7166f;
			
				case 13:
					return 1562.5807f, -219.7309f, 84.4919f;
			
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
			
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
			
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
			
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
			
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
			
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
			
				default:
				
			}
			break;
	
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
	
		case -161804536:
			return 2388.6423f, 1690.1865f, 95.5056f;
	
		case -148407339:
			return -1732.145f, 2191.0862f, 293.2867f;
	
		case 58958195:
			return -2565.2583f, 756.6277f, 153.3524f;
	
		case 149709049:
			return -353.4487f, -133.7923f, 46.4927f;
	
		case 247563739:
			return 2450.049f, 2104.1897f, 173.9434f;
	
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
	
		case 373034311:
			return func_53(uParam0, 0);
	
		case 404434344:
			return 794.4265f, 1777.1082f, 281.0706f;
	
		case 657666087:
			return -1749.0651f, -1624.2925f, 90.1441f;
	
		case 677950956:
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.7908f, 48.5643f;
			
				case 1:
					return -781.2938f, -1320.0243f, 44.8353f;
			
				case 2:
					return -729.9185f, -1219.6156f, 41.4298f;
			
				case 3:
					return -773.6366f, -1354.4657f, 44.1805f;
			
				case 4:
					return -756.8423f, -1276.1244f, 49.337f;
			
				case 5:
					return -816.6586f, -1310.7571f, 43.2499f;
			
				default:
				
			}
			break;
	
		case 921081956:
			return 2417.1724f, -738.7664f, 42.3038f;
	
		case 1034793488:
			return 1705.8854f, -1006.9387f, 43.8407f;
	
		case 1284679164:
			return 2782.7463f, 536.9514f, 72.1612f;
	
		case 1535254161:
			switch (iParam1)
			{
				case 0:
					return 1478.7609f, -1831.4489f, 52.0191f;
			
				case 1:
					return 1487.7264f, -1822.5234f, 53.4034f;
			
				case 2:
					return 1501.0931f, -1813.105f, 53.2804f;
			
				case 3:
					return 1520.8224f, -1805.3981f, 52.6965f;
			
				default:
				
			}
			break;
	
		case 1673499939:
			return 2476.0007f, 1997.8243f, 167.269f;
	
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
	
		case 1861313914:
			return 894.6589f, -1969.3633f, 44.554f;
	
		case 1986618633:
			return -4688.022f, -3419.1147f, 17.2107f;
	
		case 2000209669:
			if (iParam1 == 11)
				return func_105(uParam0, 11);
			else
				return func_105(uParam0, 7);
			break;
	
		case 2134589549:
			return func_53(uParam0, 0);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_52(char* sParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x66F0 Hash - 0x8A350A82 ^0x30FE8278
{
	Interior interiorAtCoords;

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);

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

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
Vector3 func_53(var uParam0, int iParam1) // Position - 0x6739 Hash - 0xE500AA03 ^0xE500AA03
{
	switch (*uParam0)
	{
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -232974724:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1259.7351f, 1294.3583f, 216.09608f;
			
				case 1:
					return 1259.7351f, 1294.3583f, 216.09608f;
			
				default:
					break;
			}
			break;
	
		case -1891628345:
			switch (iParam1)
			{
				case 0:
					return -2694.6008f, -1500.2484f, 150.5708f;
			
				default:
					break;
			}
			break;
	
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 2195.15f, -554.37f, 41.02f;
			
				case 1:
					return 2195.38f, -554.33f, 41.02f;
			
				default:
					break;
			}
			break;
	
		case -1761578407:
			switch (iParam1)
			{
				case 0:
					return 1735.312f, -1894.4722f, 44.5668f;
			
				default:
					break;
			}
			break;
	
		case -1614148516:
			switch (iParam1)
			{
				case 0:
					return 2307.5916f, -330.3333f, 41.6732f;
			
				default:
					break;
			}
			break;
	
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return -5854.0186f, -3745.0708f, -25.5216f;
			
				case 1:
					return -5854.012f, -3744.8984f, -25.519f;
			
				default:
					break;
			}
			break;
	
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 1268.29f, -386.947f, 88.4659f;
			
				default:
					break;
			}
			break;
	
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 2255.46f, -753.712f, 42.5807f;
			
				case 1:
					return 2255.29f, -753.756f, 42.8407f;
			
				default:
					break;
			}
			break;
	
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 1068.42f, -2024.7f, 49.25f;
			
				default:
					break;
			}
			break;
	
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return -2334.66f, 102.11f, 221.988f;
			
				case 1:
					return -2351.1057f, 111.0932f, 217f;
			
				case 2:
					return -2351.33f, 110.337f, 216.825f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 365.9631f, -16.5072f, 99.3002f;
			
				default:
					break;
			}
			break;
	
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1581.16f, -1383.19f, 55.3f;
			
				default:
					break;
			}
			break;
	
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 398.28f, -1267.89f, 40.737f;
			
				default:
					break;
			}
			break;
	
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 180.217f, 1304.7f, 178.603f;
			
				case 1:
					return 180.267f, 1304.62f, 178.607f;
			
				case 2:
					return 180.387f, 1304.79f, 178.601f;
			
				case 3:
					return 180.397f, 1304.7f, 178.605f;
			
				case 4:
					return 180.437f, 1304.66f, 178.599f;
			
				default:
					break;
			}
			break;
	
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return -1019.89f, 1692.11f, 244.105f;
			
				case 1:
					return -988.1135f, 1692.0748f, 243.3826f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1123.43f, 430.557f, 95.3598f;
			
				default:
					break;
			}
			break;
	
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 2545.93f, 800.34f, 77.013f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2904.945f, -254.221f, 187.3f;
			
				default:
					break;
			}
			break;
	
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 2289.75f, 2081.3f, 199.581f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.56f, -2669.16f, 42.2f;
			
				default:
					break;
			}
			break;
	
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 2385.7993f, 1696.7253f, 95.7555f;
			
				case 1:
					return 2385.81f, 1696.69f, 95.7678f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.4628f, 763.3734f, 95.371f;
			
				default:
					break;
			}
			break;
	
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 2685.8904f, 70.2216f, 58.3001f;
			
				default:
					break;
			}
			break;
	
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return -1530.6893f, -308.1162f, 141.4804f;
			
				case 1:
					return -1532.0513f, -308.3718f, 141.5067f;
			
				case 2:
					return -1530.594f, -308.8933f, 141.4845f;
			
				default:
					break;
			}
			break;
	
		case 247563739:
			switch (iParam1)
			{
				case 0:
					return 2448.5803f, 2097.7295f, 172.2719f;
			
				default:
					break;
			}
			break;
	
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 2316.89f, 1072.69f, 94.409f;
			
				default:
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2367.9f, 124.4f, 215.94f;
			
				case 1:
					return -2366.67f, 124.726f, 215.914f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -5886.735f, -2762.1213f, -5.0027f;
			
				default:
					break;
			}
			break;
	
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 494.1373f, -301.9945f, 147.9723f;
			
				case 1:
					return 494.1373f, -301.9945f, 147f;
			
				default:
					break;
			}
			break;
	
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return -2530.6284f, 1173.581f, 225.1708f;
				
					default:
						goto 0x684;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
				
					default:
						goto 0x684;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return -4394.6f, -2159.37f, 47.498f;
				
					case 1:
						return -4394.685f, -2159.115f, 47.5059f;
				
					case 2:
						return -4394.76f, -2159.05f, 47.498f;
				
					case 3:
						return -4394.446f, -2159.219f, 47.523f;
				
					case 4:
						return -4394.639f, -2159.254f, 47.499f;
				
					default:
						break;
				}
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1755.0781f, -1623.8643f, 90.579f;
			
				default:
					break;
			}
			break;
	
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 2383.35f, 1695.3f, 96.018f;
			
				default:
					break;
			}
			break;
	
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 1139.765f, 464.21f, 98.375f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2343.7512f, -2181.3718f, 73.3274f;
			
				case 1:
					return -2343.7512f, -2181.3718f, 73.3274f;
			
				default:
					break;
			}
			break;
	
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return -2311.151f, -2380.23f, 64.66f;
			
				default:
					break;
			}
			break;
	
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 2442.855f, 287.212f, 66.39f;
			
				default:
					break;
			}
			break;
	
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 2811.8635f, 996.6885f, 53.9353f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3338.99f, -2501.585f, 1.926f;
			
				default:
					break;
			}
			break;
	
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 2443.16f, 290.578f, 66.5052f;
			
				default:
					break;
			}
			break;
	
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -5151.3f, -2118.4f, 13f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.28f, 1997.81f, 166.918f;
			
				default:
					break;
			}
			break;
	
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 2286.46f, -727.94f, 42.98f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.43f, -1769.6f, 52.5869f;
			
				default:
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 830.571f, 1924.11f, 258.798f;
			
				case 1:
					return 830.641f, 1924.09f, 258.798f;
			
				case 2:
					return 830.611f, 1924.12f, 258.825f;
			
				default:
					break;
			}
			break;
	
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return -1619.97f, 1353.525f, 356.399f;
			
				default:
					break;
			}
			break;
	
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return -161.8621f, 1734.9019f, 170.799f;
			
				case 1:
					return -161.862f, 1734.9f, 170.687f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_54(var uParam0) // Position - 0x723F Hash - 0x2536D815 ^0x2536D815
{
	switch (*uParam0)
	{
		case -2108030724:
			if (!func_16(26))
				return false;
			break;
	
		case -2008558277:
			if (func_148(19))
				return false;
			break;
	
		case -1887999095:
			if (!func_16(21))
				return false;
			break;
	
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!func_143() && !func_144())
				{
					!func_143();
					!func_144();
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!func_147(8924991) && !func_147(665676602))
				{
					!func_147(8924991);
					!func_147(665676602);
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!func_147(1488286867))
					return false;
			}
			else if (uParam0->f_4 == 6)
			{
				if (!func_147(651395116))
					return false;
			}
			else if (uParam0->f_4 == 7)
			{
				if (!func_147(-1241340344))
					return false;
			}
			else if (uParam0->f_4 == 8)
			{
				if (!func_147(409602249))
					return false;
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else
			{
				uParam0->f_4 == 1;
			}
			break;
	
		case -1308658310:
			if (func_148(11))
				return false;
			break;
	
		case -1240932004:
			if (!func_16(77))
				return false;
			break;
	
		case 118535038:
			if (!func_16(12))
				return false;
			break;
	
		case 221420861:
			if (func_148(29))
				return false;
			break;
	
		case 308500632:
			if (!(Global_40.f_11623[20 /*8*/] > 0))
				return false;
			break;
	
		case 404434344:
			if (!func_143() && !func_144())
			{
				!func_143();
				!func_144();
				return false;
			}
			else if (func_145(77))
			{
				return false;
			}
			else if (func_146() != 0)
			{
				return false;
			}
			break;
	
		case 677950956:
			if (!func_15())
				return false;
			break;
	
		case 1861313914:
			if (func_145(19) || func_148(4))
				return false;
			break;
	
		case 1982045664:
			if (func_145(66))
				return false;
			break;
	}

	return true;
}

void func_55(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x74B4 Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_151();
			func_149(iParam0);
			break;
	
		case -1925798111:
			func_149(-1925798111);
			func_150(-919512195);
			func_150(420709909);
			func_150(1703426636);
			break;
	
		case -1838352012:
			func_150(-1674179981);
			func_150(-1835851517);
			func_149(-1838352012);
			break;
	
		case -1835851517:
			func_150(-1674179981);
			func_150(-1838352012);
			func_149(-1835851517);
			break;
	
		case -1738165526:
			func_149(-1738165526);
			func_150(0);
			func_150(473295046);
			break;
	
		case -1717960576:
			func_150(210001842);
			func_149(-1717960576);
			break;
	
		case -1674179981:
			func_150(-1835851517);
			func_150(-1838352012);
			func_149(-1674179981);
			break;
	
		case -1612662716:
			func_150(1822001510);
			func_149(-1612662716);
			break;
	
		case -1414537028:
			func_150(38162571);
			func_150(1350391819);
			func_150(54073871);
			func_149(-1414537028);
			break;
	
		case -1311865656:
			func_149(-1311865656);
			func_150(1509509592);
			func_150(-959357075);
			func_150(405586984);
			break;
	
		case -1271608261:
			func_150(-150493654);
			func_150(1846061697);
			func_150(-1145519186);
			func_149(-1271608261);
			break;
	
		case -1223121209:
			func_149(-1223121209);
			func_150(630808005);
			break;
	
		case -1145519186:
			func_150(-150493654);
			func_150(-1271608261);
			func_150(1846061697);
			func_149(-1145519186);
			break;
	
		case -1124061431:
			func_150(198200492);
			func_149(-1124061431);
			func_150(52706132);
			func_150(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_149(-1080627546);
			else
				func_150(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_150(-538889627);
			func_150(-538880323);
			func_150(-1056767524);
			func_149(iParam0);
			break;
	
		case -959357075:
			func_149(-959357075);
			func_150(1509509592);
			func_150(405586984);
			func_150(-1311865656);
			break;
	
		case -919512195:
			func_149(-919512195);
			func_150(-1925798111);
			func_150(420709909);
			func_150(1703426636);
			break;
	
		case -664252410:
			func_150(2019386373);
			func_150(2109952320);
			func_149(-664252410);
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
			func_152();
			func_149(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_149(-524145696);
			else
				func_150(-524145696);
		
			func_150(1626481264);
			func_150(282809459);
			break;
	
		case -502324015:
			func_150(1497516462);
			func_150(2016141805);
			func_150(1010885152);
			func_149(-502324015);
			break;
	
		case -434590080:
			func_150(1376646519);
			func_150(931649776);
			func_150(1743048395);
			func_150(449774763);
			func_149(-434590080);
			break;
	
		case -404698347:
			func_150(1306158345);
			func_150(1952610440);
			func_150(-223469678);
			func_150(1517904467);
			func_149(-404698347);
			break;
	
		case -259123672:
			func_150(198200492);
			func_150(-1124061431);
			func_150(52706132);
			func_149(-259123672);
			break;
	
		case -223469678:
			func_150(1306158345);
			func_150(1952610440);
			func_150(-404698347);
			func_150(1517904467);
			func_149(-223469678);
			break;
	
		case -150493654:
			func_150(-1271608261);
			func_150(1846061697);
			func_150(-1145519186);
			func_149(-150493654);
			break;
	
		case 0:
			func_149(0);
			func_150(473295046);
			func_150(-1738165526);
			break;
	
		case 38162571:
			func_150(-1414537028);
			func_150(1350391819);
			func_150(54073871);
			func_149(38162571);
			break;
	
		case 52706132:
			func_150(198200492);
			func_150(-1124061431);
			func_149(52706132);
			func_150(-259123672);
			break;
	
		case 54073871:
			func_150(-1414537028);
			func_150(38162571);
			func_150(1350391819);
			func_149(54073871);
			break;
	
		case 198200492:
			func_149(198200492);
			func_150(-1124061431);
			func_150(52706132);
			func_150(-259123672);
			break;
	
		case 210001842:
			func_150(-1717960576);
			func_149(210001842);
			break;
	
		case 280705402:
			func_150(1766284049);
			func_150(1926308480);
			func_149(280705402);
			break;
	
		case 282809459:
			func_149(282809459);
			func_150(1626481264);
			func_150(-524145696);
			break;
	
		case 405586984:
			func_149(405586984);
			func_150(1509509592);
			func_150(-959357075);
			func_150(-1311865656);
			break;
	
		case 420709909:
			func_149(420709909);
			func_150(-919512195);
			func_150(-1925798111);
			func_150(1703426636);
			break;
	
		case 439465264:
			if (func_147(1609506757))
				if (bParam1)
					func_149(439465264);
				else
					func_150(439465264);
			break;
	
		case 449774763:
			func_150(1376646519);
			func_150(931649776);
			func_150(-434590080);
			func_150(1743048395);
			func_149(449774763);
			break;
	
		case 473295046:
			func_149(473295046);
			func_150(0);
			func_150(-1738165526);
			break;
	
		case 630808005:
			func_149(630808005);
			func_150(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_149(885203519);
			else
				func_150(885203519);
			break;
	
		case 931649776:
			func_150(1376646519);
			func_150(-434590080);
			func_150(1743048395);
			func_150(449774763);
			func_149(931649776);
			break;
	
		case 932909855:
			func_149(932909855);
			func_150(2051822093);
			break;
	
		case 1010885152:
			func_150(1497516462);
			func_150(2016141805);
			func_149(1010885152);
			func_150(-502324015);
			break;
	
		case 1306158345:
			func_150(1952610440);
			func_150(-223469678);
			func_150(-404698347);
			func_150(1517904467);
			func_149(1306158345);
			break;
	
		case 1350391819:
			func_150(-1414537028);
			func_150(38162571);
			func_150(54073871);
			func_149(1350391819);
			break;
	
		case 1376646519:
			func_150(931649776);
			func_150(-434590080);
			func_150(1743048395);
			func_150(449774763);
			func_149(1376646519);
			break;
	
		case 1453909576:
			func_149(1453909576);
			func_150(1643531967);
			break;
	
		case 1497516462:
			func_149(1497516462);
			func_150(2016141805);
			func_150(1010885152);
			func_150(-502324015);
			break;
	
		case 1509509592:
			func_149(1509509592);
			func_150(405586984);
			func_150(-959357075);
			func_150(-1311865656);
			break;
	
		case 1517904467:
			func_150(1306158345);
			func_150(1952610440);
			func_150(-223469678);
			func_150(-404698347);
			func_149(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_150(439465264);
				func_149(1609506757);
			}
			else
			{
				func_150(1609506757);
				func_150(439465264);
			}
			break;
	
		case 1626481264:
			func_149(1626481264);
			func_150(-524145696);
			func_150(282809459);
			break;
	
		case 1643531967:
			func_149(1643531967);
			func_150(1453909576);
			break;
	
		case 1703426636:
			func_149(1703426636);
			func_150(-919512195);
			func_150(-1925798111);
			func_150(420709909);
			break;
	
		case 1743048395:
			func_150(1376646519);
			func_150(931649776);
			func_150(-434590080);
			func_150(449774763);
			func_149(1743048395);
			break;
	
		case 1766284049:
			func_150(280705402);
			func_150(1926308480);
			func_149(1766284049);
			break;
	
		case 1822001510:
			func_150(-1612662716);
			func_149(1822001510);
			break;
	
		case 1846061697:
			func_150(-150493654);
			func_150(-1271608261);
			func_150(-1145519186);
			func_149(1846061697);
			break;
	
		case 1926308480:
			func_150(1766284049);
			func_150(280705402);
			func_149(1926308480);
			break;
	
		case 1952610440:
			func_150(1306158345);
			func_150(-223469678);
			func_150(-404698347);
			func_150(1517904467);
			func_149(1952610440);
			break;
	
		case 2016141805:
			func_150(1497516462);
			func_149(2016141805);
			func_150(1010885152);
			func_150(-502324015);
			break;
	
		case 2019386373:
			func_150(-664252410);
			func_150(2109952320);
			func_149(2019386373);
			break;
	
		case 2051822093:
			func_149(2051822093);
			func_150(932909855);
			break;
	
		case 2109952320:
			func_150(2019386373);
			func_150(-664252410);
			func_149(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_147(iParam0))
					func_149(iParam0);
			else if (func_147(iParam0))
				func_150(iParam0);
			break;
	}

	return;
}

int func_56() // Position - 0x7FD7 Hash - 0x9193217B ^0x9193217B
{
	int i;
	int num;
	int num2;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num2 = func_153(i);
	
		if (func_39(func_154(), num2))
			num = num + 1;
	}

	return num;
}

void func_57(int iParam0) // Position - 0x8012 Hash - 0xDA84A767 ^0xDA84A767
{
	func_32(iParam0, 2);
	func_77(iParam0);
	return;
}

BOOL func_58(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8027 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_155(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

void func_59() // Position - 0x8082 Hash - 0x52001E94 ^0x52001E94
{
	int i;
	int num;

	for (i = 0; i <= 30 - 1; i = i + 1)
	{
		if (i == 0)
			num = 1;
		else if (i == 1)
			num = 2;
		else if (i == 2)
			num = 4;
		else if (i == 3)
			num = 8;
		else if (i == 4)
			num = 16;
		else if (i == 5)
			num = 32;
		else if (i == 6)
			num = 64;
		else if (i == 7)
			num = 128;
		else if (i == 8)
			num = 256;
		else if (i == 9)
			num = 512;
		else if (i == 10)
			num = 1024;
		else if (i == 11)
			num = 2048;
		else if (i == 12)
			num = 4096;
		else if (i == 13)
			num = 8192;
		else if (i == 14)
			num = 16384;
		else if (i == 15)
			num = 32768;
		else if (i == 16)
			num = 65536;
		else if (i == 17)
			num = 131072;
		else if (i == 18)
			num = 262144;
		else if (i == 19)
			num = 524288;
		else if (i == 20)
			num = 1048576;
		else if (i == 21)
			num = 2097152;
		else if (i == 22)
			num = 4194304;
		else if (i == 23)
			num = 8388608;
		else if (i == 24)
			num = 16777216;
		else if (i == 25)
			num = 33554432;
		else if (i == 26)
			num = 67108864;
		else if (i == 27)
			num = 134217728;
		else if (i == 28)
			num = 268435456;
		else if (i == 29)
			num = 536870912;
	
		func_39(Global_40.f_8863.f_151, num);
	}

	return;
}

BOOL func_60() // Position - 0x8271 Hash - 0x11DC3931 ^0x935E83F
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("sp_game_content_cross_promotion_hatchet"));
}

void func_61(var uParam0) // Position - 0x8282 Hash - 0x49584173 ^0x49584173
{
	func_156(uParam0);
	func_157(uParam0);
	return;
}

void func_62(var uParam0) // Position - 0x8296 Hash - 0x95DF5E12 ^0x72D8D973
{
	int i;

	func_158(&uLocal_66);

	if (*uParam0 == -763376358 || *uParam0 == 1801731633 || *uParam0 == 1490223565 || *uParam0 == 733338689 || *uParam0 == 1124200691 || *uParam0 == -1420566543 || *uParam0 == -1208846034 || *uParam0 == 1048086072 || *uParam0 == 939555152 || *uParam0 == 2135153015)
		iLocal_15 = func_159(uParam0);

	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		for (i = 0; i <= 4 - 1; i = i + 1)
		{
			if (!(func_160(uParam0, i) == -1))
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, i)))
					TXD::REQUEST_STREAMED_TXD(func_160(uParam0, i), false);
		}
	}

	return;
}

BOOL func_63(var uParam0) // Position - 0x8398 Hash - 0x8D9A65B ^0xBEFBDE71
{
	int i;

	if (!func_161(&uLocal_66))
		return false;

	if (*uParam0 == -763376358 || *uParam0 == 1801731633 || *uParam0 == 1490223565 || *uParam0 == 733338689 || *uParam0 == 1124200691 || *uParam0 == -1420566543 || *uParam0 == -1208846034 || *uParam0 == 1048086072 || *uParam0 == 939555152 || *uParam0 == 2135153015)
		if (!func_162(&iLocal_15))
			return false;

	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		for (i = 0; i <= 4 - 1; i = i + 1)
		{
			if (!(func_160(uParam0, i) == -1))
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, i)) && !TXD::HAS_STREAMED_TXD_LOADED(func_160(uParam0, i)))
					return false;
		}
	}

	return true;
}

BOOL func_64() // Position - 0x84B2 Hash - 0x463DA432 ^0x3948CA04
{
	return func_163(Global_1935630, 4096);
}

BOOL func_65(var uParam0) // Position - 0x84C5 Hash - 0x82D4BA91 ^0x973615E2
{
	int i;
	int num;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;

	if (*uParam0 == -1427565340 || *uParam0 == 464413478)
	{
		if (*uParam0 == 464413478)
		{
			if (func_58(Global_35, func_53(uParam0, 0), 75f, true, true))
			{
				if (func_164(uParam0, &uLocal_52[0], &uLocal_66, 0, 11))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
					{
						if (!func_67(&uLocal_66, func_53(uParam0, 1), func_66(uParam0, 1), 1))
							return false;
					
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_66[1], uLocal_66[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uLocal_66[0], "disWiskeyTreeBottle1"), 0f, 0f, -0.265f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[1]);
						
							if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]))
							{
								PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1], false);
								PLAYER::_0x6ECFC621A168424C(uLocal_66[1], uLocal_66[1], 0, 0);
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
			else
			{
				return false;
			}
		}
		else if (!func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == -1494823099)
	{
		if (func_58(Global_35, func_53(uParam0, 0), 75f, true, true))
		{
			if (func_164(uParam0, &uLocal_52[0], &uLocal_66, 0, 7))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
				{
					if (!func_39(Global_40.f_8863.f_149, 2097152))
					{
					}
					else
					{
						func_165(&uLocal_66, true, 0);
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
		else
		{
			return false;
		}
	
		if (func_58(Global_35, func_53(uParam0, 1), 75f, true, true))
		{
			if (func_164(uParam0, &uLocal_52[1], &uLocal_66, 1, 7))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					if (!func_39(Global_40.f_8863.f_149, 4194304))
					{
					}
					else
					{
						func_165(&uLocal_66, true, 1);
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
		else
		{
			return false;
		}
	}
	else if (*uParam0 == 247563739)
	{
		if (!func_39(Global_40.f_8863.f_150, 256))
			if (func_58(Global_35, func_53(uParam0, 0), 75f, true, true))
				if (func_164(uParam0, &uLocal_52[0], &uLocal_66, 0, 11))
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
						if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
							uLocal_47[0] = func_166(uLocal_66[0], func_87(uParam0, 0), 0f, 0f, 0f, 0, 0, 0, true);
					else
						return false;
				else
					return false;
			else
				return false;
	}
	else if (*uParam0 == -763376358 || *uParam0 == 1801731633 || *uParam0 == 1490223565 || *uParam0 == 733338689 || *uParam0 == 1124200691 || *uParam0 == -1420566543 || *uParam0 == -1208846034 || *uParam0 == 1048086072 || *uParam0 == 939555152 || *uParam0 == 2135153015)
	{
		if (*uParam0 == 733338689)
		{
			if (!func_39(Global_40.f_8863.f_149, 32))
				if (!func_167(uParam0, &uLocal_66))
					return false;
		
			if (!func_39(Global_40.f_8863.f_149, 64))
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
					uLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, false);
		}
		else if (*uParam0 == 2135153015)
		{
			if (!func_39(Global_40.f_8863.f_149, 1024))
				if (!func_167(uParam0, &uLocal_66))
					return false;
		
			if (!func_39(Global_40.f_8863.f_149, 2048))
			{
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
				{
					uLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, false);
				
					if (!func_39(Global_40.f_8863.f_149, 1024))
						TASK::_SET_SCENARIO_POINT_ACTIVE(uLocal_47[0], false);
				}
			
				if (!func_67(&uLocal_66, func_53(uParam0, 1), func_66(uParam0, 1), 1))
					return false;
			}
		}
		else if (!func_167(uParam0, &uLocal_66))
		{
			return false;
		}
	}
	else if (*uParam0 == -261997819 || *uParam0 == -599506500 || *uParam0 == 1424723727)
	{
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_16[0]))
		{
			func_40(&iLocal_60, 2);
			uLocal_16[0] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, uParam0->f_4), func_85(uParam0, uParam0->f_4), func_171(uParam0, uParam0->f_4), iLocal_60, -1, 0, true, 0, 0, 0, 0);
		}
	}
	else if (*uParam0 == 1187689415)
	{
		if (!func_172(uParam0, &uLocal_16, &uLocal_78, false))
			return false;
	}
	else if (*uParam0 == 513110082)
	{
		if (uParam0->f_4 == 2)
		{
			for (i = 2; i <= 7; i = i + 1)
			{
				if (!func_83(uParam0, i))
				{
					if (i == 2)
					{
						if (!OBJECT::DOES_PICKUP_EXIST(uLocal_16[0]))
						{
							func_40(&iLocal_60, 2);
							uLocal_16[0] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, 0), func_85(uParam0, 0), func_171(uParam0, 0), iLocal_60, -1, 0, true, 0, 0, 0, 0);
						}
					}
					else
					{
						if (i == 3)
							num = 0;
						else if (i == 4)
							num = 1;
						else if (i == 5)
							num = 2;
						else if (i == 6)
							num = 3;
						else if (i == 7)
							num = 4;
					
						if (!func_67(&uLocal_66, func_53(uParam0, num), func_66(uParam0, num), num))
							return false;
					}
				}
			}
		}
		else if (!func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0))
		{
			return false;
		}
	}
	else if (*uParam0 == 870958936 || *uParam0 == 2072029413)
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
			uLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, false);
	}
	else if (*uParam0 == 1284679164)
	{
	}
	else if (*uParam0 == 373034311)
	{
		if (func_39(Global_40.f_8863.f_148, 2097152))
			if (!func_67(&uLocal_66, func_53(uParam0, 0), func_66(uParam0, 0), 0))
				return false;
	}
	else if (*uParam0 == -1061274876)
	{
		for (j = 0; j <= 4; j = j + 1)
		{
			if (!func_83(uParam0, j))
				if (!func_67(&uLocal_66, func_53(uParam0, j), func_66(uParam0, j), j))
					return false;
		}
	}
	else if (*uParam0 == 118535038)
	{
		for (k = 0; k <= 2; k = k + 1)
		{
			if (!func_83(uParam0, k))
				if (!func_67(&uLocal_66, func_53(uParam0, k), func_66(uParam0, k), k))
					return false;
		}
	}
	else if (*uParam0 == -1859413640)
	{
		for (l = 0; l <= 1; l = l + 1)
		{
			if (!func_83(uParam0, l))
				if (!func_67(&uLocal_66, func_53(uParam0, l), func_66(uParam0, l), l))
					return false;
		}
	}
	else if (!func_173(uParam0, &uLocal_66))
	{
		return false;
	}

	if (*uParam0 == -1859413640 || *uParam0 == -1427565340)
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[0]))
			uLocal_47[0] = func_169(func_87(uParam0, uParam0->f_4), func_86(uParam0, uParam0->f_4), func_168(uParam0, uParam0->f_4), 0, 0, false);
	}
	else if (*uParam0 == 1284679164)
	{
		for (m = 0; m <= 4 - 1; m = m + 1)
		{
			if (!func_83(uParam0, m))
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_47[m]))
					uLocal_47[m] = func_174(uParam0, m);
		}
	}

	if (*uParam0 == 1335921989 || *uParam0 == -709811179 || *uParam0 == -780455182)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
		
			if (!(*uParam0 == -780455182))
				TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[0]);
		
			if (*uParam0 == -780455182)
				if (!(func_160(uParam0, 0) == -1))
					if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, 0)))
						OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uLocal_66[0], func_160(uParam0, 0), 0, 0);
		}
	}
	else if (*uParam0 == 513110082)
	{
		if (uParam0->f_4 == 2)
		{
			for (n = 0; n <= 4; n = n + 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[n]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[n], true);
					TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[n]);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[0]);
		}
	}
	else if (*uParam0 == 373034311)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[0]);
		}
	}
	else if (*uParam0 == -1061274876)
	{
		for (o = 0; o <= 4; o = o + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[o]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[o], true);
				TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[o]);
			}
		}
	}
	else if (*uParam0 == -763376358 || *uParam0 == 1801731633 || *uParam0 == 1490223565 || *uParam0 == 733338689 || *uParam0 == 1124200691 || *uParam0 == -1420566543 || *uParam0 == -1208846034 || *uParam0 == 1048086072 || *uParam0 == 939555152 || *uParam0 == 2135153015)
	{
		func_175(&iLocal_15);
	
		if (*uParam0 == -763376358 || *uParam0 == 1801731633 || *uParam0 == 1490223565 || *uParam0 == 733338689 || *uParam0 == 2135153015)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
			{
				if (*uParam0 == -763376358 || *uParam0 == 1801731633 || *uParam0 == 1490223565 || *uParam0 == 733338689)
					MISC::_0xF63FA29D4A9ACA86(uLocal_66[0], func_176(uParam0));
			
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			}
		
			if (*uParam0 == 2135153015)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
					TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[1]);
				}
			}
		}
	}
	else if (*uParam0 == -1427565340)
	{
		!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]);
	}
	else if (*uParam0 == -1859413640)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[0], true);
			TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[0]);
		}
	
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_66[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_66[1], true);
			TASK::_MAKE_OBJECT_CARRIABLE(uLocal_66[1]);
		}
	}

	return true;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
Vector3 func_66(var uParam0, int iParam1) // Position - 0x9044 Hash - 0xBC832975 ^0xBC832975
{
	switch (*uParam0)
	{
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1891628345:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1494823099:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 657666087:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 5f, 0f, 213f;
			
				default:
					break;
			}
			break;
	
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
			
				case 1:
					return 20f, 88.84f, -94.66f;
			
				default:
					break;
			}
			break;
	
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return -10f, 0f, 33f;
			
				default:
					break;
			}
			break;
	
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 155f;
			
				case 1:
					return 0f, 0f, 0f;
			
				case 2:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -55f;
			
				default:
					break;
			}
			break;
	
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 12f;
			
				case 1:
					return 180f, 0f, 108f;
			
				case 2:
					return 180f, 0f, 208f;
			
				case 3:
					return 0f, 0f, 30f;
			
				case 4:
					return 180f, 0f, 35f;
			
				default:
					break;
			}
			break;
	
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 65f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return 30f, 5f, 99f;
			
				default:
					break;
			}
			break;
	
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 105f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 116f;
			
				default:
					break;
			}
			break;
	
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 1.24f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				case 2:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 121.94f;
			
				default:
					break;
			}
			break;
	
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -45f;
				
					default:
						goto 0x544;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -110f;
				
					default:
						goto 0x544;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -49.418f;
				
					case 1:
						return 0f, 0f, -33.718f;
				
					case 2:
						return 0f, 0f, -26.718f;
				
					case 3:
						return 0f, 0f, -41.7187f;
				
					case 4:
						return 0f, 0f, -33.718f;
				
					default:
						break;
				}
			}
			break;
	
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -144.36f;
			
				default:
					break;
			}
			break;
	
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -35.981f;
			
				default:
					break;
			}
			break;
	
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return 25f, 0f, -75f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -90f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, -42f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return -10f, 90f, 30f;
			
				default:
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 169f;
			
				case 1:
					return 0f, 0f, 169f;
			
				case 2:
					return 0f, 0f, 169f;
			
				default:
					break;
			}
			break;
	
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -95f;
			
				default:
					break;
			}
			break;
	
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_67(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, int iParam7) // Position - 0x980C Hash - 0x2981E208 ^0x38DC5A47
{
	if (!(uParam0->f_6[iParam7] == 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[iParam7]))
		{
			uParam0->[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_6[iParam7], vParam1, true, true, false, false, true);
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}

	return true;
}

void func_68(var uParam0) // Position - 0x9886 Hash - 0x46A0187B ^0x46A0187B
{
	if (!func_48(*uParam0))
	{
		func_57(*uParam0);
		func_91(uParam0);
	}

	return;
}

void func_69(var uParam0) // Position - 0x98A6 Hash - 0x1F0879D6 ^0x87DE6140
{
	func_177(&uLocal_47);

	if (*uParam0 == 464413478)
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_66[1]) && PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]))
			PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), uLocal_66[1]);

	return;
}

BOOL func_70() // Position - 0x98EA Hash - 0x9425FDBD ^0x87E91EB6
{
	int ransackScenarioPointPedIsUsing;

	ransackScenarioPointPedIsUsing = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35);

	if (TASK::DOES_SCENARIO_POINT_EXIST(ransackScenarioPointPedIsUsing))
		return true;

	return false;
}

BOOL func_71(Hash hParam0) // Position - 0x9909 Hash - 0x2C6D6290 ^0xF2EA2FC
{
	struct<10> eventData;
	int i;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i) == -1730772208)
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					if (eventData.f_2 == hParam0 || hParam0 == 0)
						return true;
		}
	}

	return false;
}

Hash func_72(var uParam0) // Position - 0x9968 Hash - 0xD7A15E68 ^0xB8E954FB
{
	switch (*uParam0)
	{
		case -1420566543:
			return joaat("clothing_sp_scarecrow_01_hat_000_1");
	
		case -1208846034:
			return joaat("clothing_sp_scarecrow_02_hat_000_1");
	
		case -1144800837:
			return joaat("clothing_item_pz_hat_pirate_01");
	
		case -763376358:
			return joaat("clothing_item_mask_pig_001");
	
		case -739986731:
			return joaat("clothing_item_skullmask_mr1_001_1");
	
		case -657632:
			return joaat("clothing_sp_chinese_labor_hat_000_1");
	
		case 425000526:
			return joaat("clothing_sp_dead_miner_hat_000_1");
	
		case 733338689:
			return joaat("clothing_sp_viking_hat_000_1");
	
		case 939555152:
			return joaat("clothing_sp_scarecrow_04_hat_000_1");
	
		case 1048086072:
			return joaat("clothing_sp_scarecrow_03_hat_000_1");
	
		case 1124200691:
			return joaat("clothing_sp_civil_war_hat_000_1");
	
		case 1342653896:
			return joaat("clothing_sp_chinese_labor_hat_000_1");
	
		case 1490223565:
			return joaat("clothing_item_skullmask_mr1_000_1");
	
		case 1801731633:
			return joaat("clothing_item_skullmask_mr1_002_1");
	
		case 2134589549:
			return joaat("clothing_sp_conquistador_hat_000_1");
	
		case 2135153015:
			return joaat("clothing_item_sp_valsheriff_hat_000");
	
		default:
		
	}

	return 0;
}

int func_73(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x9A5A Hash - 0x11449F01 ^0x11449F01
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

	if (!func_178(hParam0, 0))
		return 0;

	if (!func_179(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_180(hParam0, &value, iParam1))
		return 0;

	func_181(hParam0, bParam2);
	lootTableKey = 0;

	if (func_182(hParam0, false, false) == 0)
	{
		if (func_183(hParam0))
		{
			hash = func_184(hParam0);
			collectableSubcategory = func_185(hash);
			num = func_186(collectableSubcategory) + 1;
			func_187(hash);
		
			if (func_188(38))
				func_189(483, false);
			else
				func_189(482, false);
		
			if (num == func_190(collectableSubcategory))
			{
				func_73(func_191(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_133() && func_192(4))
				{
					if (func_133() && func_193(38) || func_188(38))
					{
						func_195(38, func_191(collectableSubcategory), 0, 0, func_194(), false, -1, false);
						func_196(2);
					}
					else
					{
						func_195(38, func_191(collectableSubcategory), 0, 0, func_194(), false, -1, false);
						func_196(1);
					}
				}
			}
			else if (func_133() && func_192(4))
			{
				if (func_133() && func_193(38) || func_188(38))
				{
					func_195(38, 0, 0, 0, func_194(), false, -1, false);
					func_196(2);
				}
				else
				{
					func_195(38, 0, 0, 0, func_194(), false, -1, false);
					func_196(1);
				}
			}
		
			if (func_133() && func_192(4))
				if (!Global_1914319.f_17376)
					if (func_133() && func_193(38) || func_188(38))
						func_197(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_197(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_198(hParam0) == joaat("CLOTHING"))
		if (!func_199(hParam0, 866047851) && !func_199(hParam0, -1979000645) && !func_199(hParam0, 1248798204))
			flag = true;

	if (func_200(hParam0, 8388608) && !func_201(28))
		func_202(28);

	if (!flag)
	{
		if (func_199(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_203(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_205(func_204(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_106() == -1)
						func_76(ammoTypeForWeapon);
				
					if (func_206(false) && func_207(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_208(hParam0, value, hParam5);
					
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
					if (func_106() == -1)
						func_76(hParam0);
				
					if (func_206(false) && func_207(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_208(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_198(hParam0) == joaat("WEAPON"))
		{
			if (!func_209(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_198(hParam0) == joaat("AMMO") && func_210(hParam0))
		{
			if (!func_211(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_199(hParam0, 866047851))
		{
			func_212(hParam0);
		}
		else if (func_199(hParam0, 2000026003))
		{
			func_213(hParam0);
		}
		else if (func_199(hParam0, -103750053))
		{
			func_215(func_214(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_215(func_216(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_199(hParam0, -121341956) && !func_199(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_107(Global_1835011[4 /*74*/].f_1, true))
					func_189(498, false);
		
			if (func_199(hParam0, -2017733358) || func_199(hParam0, -1369131378))
				func_217(hParam0);
		}
		else if (func_199(hParam0, -136654233))
		{
			if (func_199(hParam0, -1021472396))
			{
			}
		}
		else if (func_199(hParam0, -1466706512) && func_199(hParam0, 1147021565))
		{
			func_189(484, false);
		}
		else if (func_199(hParam0, 1147021565) && func_199(hParam0, -524514947))
		{
		}
		else if (func_199(hParam0, 554195525))
		{
		}
		else if (func_199(hParam0, 589988438))
		{
			if (func_218())
			{
				func_219(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_199(hParam0, 787083290) && func_199(hParam0, 949916894))
		{
			func_220(hParam0);
		}
		else if (func_199(hParam0, -1718133314))
		{
			func_221(hParam0);
		}
		else if (func_199(hParam0, -1738650224))
		{
			func_222(hParam0);
		}
		else if (func_199(hParam0, -1112814642) && func_199(hParam0, 949916894))
		{
			func_223(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_199(hParam0, 1841149704))
		{
			func_224();
		}
		else if (func_199(hParam0, 606799272))
		{
			func_225(hParam0, iParam1);
			func_226(hParam0);
		}
		else if (func_199(hParam0, -1112814642) && func_199(hParam0, -1697809989))
		{
			func_227(hParam0, 0, false, false);
		}
		else if (func_199(hParam0, -2017733358) || func_199(hParam0, -1369131378))
		{
			func_217(hParam0);
		}
		else if (func_199(hParam0, -1921346699))
		{
			if (func_106() != -1)
				return 0;
		
			func_228(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_199(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_89(471514780, 1, false))
						func_73(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_89(526074061, 1, false))
						func_73(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_89(-967317137, 1, false))
						func_73(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_89(670273567, 1, false))
						func_73(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_89(215778062, 1, false))
						func_73(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_89(-1045488665, 1, false))
						func_73(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_199(hParam0, -839724752) && func_200(hParam0, 4))
		{
			if (!func_188(42))
				func_229(hParam0);
		}
		else if (func_199(hParam0, 1399091007))
		{
			func_230(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_199(hParam0, 1248798204))
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
				func_73(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_106() == -1)
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
					func_248(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_248(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_248(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_238(499813453, joaat("treasure_hunt_loot_01"), false);
				func_239(499813453, false);
				func_240(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_238(390004462, joaat("treasure_hunt_loot_17"), false);
				func_239(390004462, false);
				func_244(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_238(6410548, joaat("treasure_hunt_loot_23"), false);
				func_239(6410548, false);
				func_245(8);
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
				func_238(6410548, joaat("treasure_hunt_loot_22"), false);
				func_239(6410548, false);
				func_245(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_202(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_231(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_232(&hash3, false))
					func_207(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_248(594, 1934060482, true, true);
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
					func_248(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_189(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_238(6410548, joaat("treasure_hunt_loot_21"), false);
				func_239(6410548, false);
				func_245(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_189(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_73(func_249(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_73(func_250(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_248(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_238(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_239(-220219788, false);
				func_242(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_201(1))
					func_189(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_238(666607663, joaat("treasure_hunt_loot_07"), false);
				func_239(666607663, false);
				func_241(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_247(241, func_246(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_238(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_239(-220219788, false);
				func_242(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_247(242, func_246(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_189(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_247(240, func_246(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_238(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_239(-220219788, false);
				func_242(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_238(390004462, joaat("treasure_hunt_loot_16"), false);
				func_239(390004462, false);
				func_244(1);
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
				func_238(499813453, joaat("treasure_hunt_loot_03"), false);
				func_239(499813453, false);
				func_240(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_238(666607663, joaat("treasure_hunt_loot_06"), false);
				func_239(666607663, false);
				func_241(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_238(218622660, joaat("treasure_hunt_loot_14"), false);
				func_239(218622660, false);
				func_243(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_238(666607663, joaat("treasure_hunt_loot_05"), false);
				func_239(666607663, false);
				func_241(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_106() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_231(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_238(218622660, joaat("treasure_hunt_loot_13"), false);
				func_239(218622660, false);
				func_243(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_238(6410548, joaat("treasure_hunt_loot_20"), false);
				func_239(6410548, false);
				func_245(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_189(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_189(491, false);
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
				func_238(499813453, joaat("treasure_hunt_loot_02"), false);
				func_239(499813453, false);
				func_240(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_189(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_233();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_234();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_235();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_236();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_237();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_238(390004462, joaat("treasure_hunt_loot_18"), false);
				func_239(390004462, false);
				func_244(4);
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
		func_251(&hash4);
	
		if (!func_252(hash4, value, hParam5))
			return 0;
		else if (!func_206(false))
			return 1;
	
		if (func_198(hParam0) == joaat("CLOTHING"))
			func_253(hParam0);
	
		if (func_199(hParam0, -1979000645))
			func_254(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_206(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_73(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_255(lootTableKey, 0);
		}
	}

	statId = { func_256(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_257(hParam0);

	if (iParam6 > 0f)
	{
		if (func_199(hParam0, -839724752))
			func_258(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_259(hParam0, value, false, flag3, 0);
	}

	return 1;
}

Hash func_74(var uParam0, int iParam1) // Position - 0xACF2 Hash - 0xDF17EEA0 ^0x9DC3EE5E
{
	switch (*uParam0)
	{
		case -1240932004:
			return joaat("weapon_revolver_doubleaction_micah");
	
		case -599506500:
			return joaat("weapon_melee_knife_civil_war");
	
		case -261997819:
			return joaat("weapon_melee_ancient_hatchet");
	
		case 425000526:
			return joaat("weapon_melee_knife_miner");
	
		case 513110082:
			return joaat("weapon_revolver_schofield_golden");
	
		case 733338689:
			return joaat("weapon_melee_hatchet_viking");
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_melee_hatchet_double_bit");
			
				case 1:
					return joaat("weapon_melee_hatchet_hewing");
			
				case 2:
					return joaat("weapon_melee_hatchet_hunter");
			
				case 3:
					return joaat("weapon_melee_hatchet_double_bit_rusted");
			
				case 4:
					return joaat("weapon_melee_hatchet_hunter_rusted");
			
				default:
					break;
			}
			break;
	
		case 1424723727:
			return joaat("weapon_melee_broken_sword");
	
		case 2072029413:
			return joaat("weapon_thrown_tomahawk_ancient");
	
		case 2072069278:
			return joaat("weapon_melee_knife_bear");
	}

	return 0;
}

BOOL func_75(Hash hParam0) // Position - 0xADD9 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

void func_76(Hash hParam0) // Position - 0xAE01 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_260(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

void func_77(int iParam0) // Position - 0xAE3B Hash - 0xF9F788B3 ^0x8192C5D9
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		TELEMETRY::_TELEMETRY_DISCOVERABLE(iParam0);
	
		if (func_261(iParam0))
			func_215(func_262(joaat("discoverable_found")), 1);
	}

	return;
}

BOOL func_78(int iParam0) // Position - 0xAE77 Hash - 0x435A8BBD ^0x435A8BBD
{
	int num;

	if (iParam0 == 0)
		num = 1;
	else if (iParam0 == 1)
		num = 2;
	else if (iParam0 == 2)
		num = 4;
	else if (iParam0 == 3)
		num = 8;
	else if (iParam0 == 4)
		num = 16;
	else if (iParam0 == 5)
		num = 32;
	else if (iParam0 == 6)
		num = 64;
	else if (iParam0 == 7)
		num = 128;
	else if (iParam0 == 8)
		num = 256;
	else if (iParam0 == 9)
		num = 512;
	else if (iParam0 == 10)
		num = 1024;
	else if (iParam0 == 11)
		num = 2048;
	else if (iParam0 == 12)
		num = 4096;
	else if (iParam0 == 13)
		num = 8192;
	else if (iParam0 == 14)
		num = 16384;
	else if (iParam0 == 15)
		num = 32768;
	else if (iParam0 == 16)
		num = 65536;
	else if (iParam0 == 17)
		num = 131072;
	else if (iParam0 == 18)
		num = 262144;
	else if (iParam0 == 19)
		num = 524288;
	else if (iParam0 == 20)
		num = 1048576;
	else if (iParam0 == 21)
		num = 2097152;
	else if (iParam0 == 22)
		num = 4194304;
	else if (iParam0 == 23)
		num = 8388608;
	else if (iParam0 == 24)
		num = 16777216;
	else if (iParam0 == 25)
		num = 33554432;
	else if (iParam0 == 26)
		num = 67108864;
	else if (iParam0 == 27)
		num = 134217728;
	else if (iParam0 == 28)
		num = 268435456;
	else if (iParam0 == 29)
		num = 536870912;

	if (func_39(Global_40.f_8863.f_151, num))
		return true;

	return false;
}

void func_79(int iParam0) // Position - 0xB059 Hash - 0x5DD01917 ^0x5DD01917
{
	int num;

	if (iParam0 == 0)
		num = 1;
	else if (iParam0 == 1)
		num = 2;
	else if (iParam0 == 2)
		num = 4;
	else if (iParam0 == 3)
		num = 8;
	else if (iParam0 == 4)
		num = 16;
	else if (iParam0 == 5)
		num = 32;
	else if (iParam0 == 6)
		num = 64;
	else if (iParam0 == 7)
		num = 128;
	else if (iParam0 == 8)
		num = 256;
	else if (iParam0 == 9)
		num = 512;
	else if (iParam0 == 10)
		num = 1024;
	else if (iParam0 == 11)
		num = 2048;
	else if (iParam0 == 12)
		num = 4096;
	else if (iParam0 == 13)
		num = 8192;
	else if (iParam0 == 14)
		num = 16384;
	else if (iParam0 == 15)
		num = 32768;
	else if (iParam0 == 16)
		num = 65536;
	else if (iParam0 == 17)
		num = 131072;
	else if (iParam0 == 18)
		num = 262144;
	else if (iParam0 == 19)
		num = 524288;
	else if (iParam0 == 20)
		num = 1048576;
	else if (iParam0 == 21)
		num = 2097152;
	else if (iParam0 == 22)
		num = 4194304;
	else if (iParam0 == 23)
		num = 8388608;
	else if (iParam0 == 24)
		num = 16777216;
	else if (iParam0 == 25)
		num = 33554432;
	else if (iParam0 == 26)
		num = 67108864;
	else if (iParam0 == 27)
		num = 134217728;
	else if (iParam0 == 28)
		num = 268435456;
	else if (iParam0 == 29)
		num = 536870912;
	else
		return;

	if (!func_39(Global_40.f_8863.f_151, num))
		func_40(&(Global_40.f_8863.f_151), num);

	return;
}

void func_80(var uParam0) // Position - 0xB24B Hash - 0xB95AA1B7 ^0x41C70F32
{
	int i;
	int num;

	switch (*uParam0)
	{
		case -1061274876:
			func_39(Global_40.f_8863.f_149, 4096);
			func_39(Global_40.f_8863.f_149, 8192);
			func_39(Global_40.f_8863.f_149, 16384);
			func_39(Global_40.f_8863.f_149, 32768);
			func_39(Global_40.f_8863.f_149, 65536);
			break;
	
		case 118535038:
			func_39(Global_40.f_8863.f_149, 128);
			func_39(Global_40.f_8863.f_149, 256);
			func_39(Global_40.f_8863.f_149, 512);
			break;
	
		case 513110082:
			func_39(Global_40.f_8863.f_150, 1);
			func_39(Global_40.f_8863.f_150, 2);
			func_39(Global_40.f_8863.f_150, 4);
			func_39(Global_40.f_8863.f_150, 8);
			func_39(Global_40.f_8863.f_150, 16);
			func_39(Global_40.f_8863.f_150, 32);
			func_39(Global_40.f_8863.f_150, 64);
			func_39(Global_40.f_8863.f_150, 128);
			break;
	
		case 870958936:
			func_39(Global_40.f_8863.f_149, 1);
			func_39(Global_40.f_8863.f_149, 2);
			func_39(Global_40.f_8863.f_149, 4);
			func_39(Global_40.f_8863.f_149, 8);
			func_39(Global_40.f_8863.f_149, 16);
			break;
	
		case 1187689415:
			for (i = 0; i <= 30 - 1; i = i + 1)
			{
				if (i == 0)
					num = 1;
				else if (i == 1)
					num = 2;
				else if (i == 2)
					num = 4;
				else if (i == 3)
					num = 8;
				else if (i == 4)
					num = 16;
				else if (i == 5)
					num = 32;
				else if (i == 6)
					num = 64;
				else if (i == 7)
					num = 128;
				else if (i == 8)
					num = 256;
				else if (i == 9)
					num = 512;
				else if (i == 10)
					num = 1024;
				else if (i == 11)
					num = 2048;
				else if (i == 12)
					num = 4096;
				else if (i == 13)
					num = 8192;
				else if (i == 14)
					num = 16384;
				else if (i == 15)
					num = 32768;
				else if (i == 16)
					num = 65536;
				else if (i == 17)
					num = 131072;
				else if (i == 18)
					num = 262144;
				else if (i == 19)
					num = 524288;
				else if (i == 20)
					num = 1048576;
				else if (i == 21)
					num = 2097152;
				else if (i == 22)
					num = 4194304;
				else if (i == 23)
					num = 8388608;
				else if (i == 24)
					num = 16777216;
				else if (i == 25)
					num = 33554432;
				else if (i == 26)
					num = 67108864;
				else if (i == 27)
					num = 134217728;
				else if (i == 28)
					num = 268435456;
				else if (i == 29)
					num = 536870912;
			
				func_39(Global_40.f_8863.f_151, num);
			}
			break;
	
		case 1284679164:
			func_39(Global_40.f_8863.f_149, 131072);
			func_39(Global_40.f_8863.f_149, 262144);
			func_39(Global_40.f_8863.f_149, 524288);
			func_39(Global_40.f_8863.f_149, 1048576);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_81() // Position - 0xB630 Hash - 0x6ECF0CA7 ^0x6ECF0CA7
{
	int i;
	int num;

	for (i = 0; i <= 30 - 1; i = i + 1)
	{
		if (i == 0)
			num = 1;
		else if (i == 1)
			num = 2;
		else if (i == 2)
			num = 4;
		else if (i == 3)
			num = 8;
		else if (i == 4)
			num = 16;
		else if (i == 5)
			num = 32;
		else if (i == 6)
			num = 64;
		else if (i == 7)
			num = 128;
		else if (i == 8)
			num = 256;
		else if (i == 9)
			num = 512;
		else if (i == 10)
			num = 1024;
		else if (i == 11)
			num = 2048;
		else if (i == 12)
			num = 4096;
		else if (i == 13)
			num = 8192;
		else if (i == 14)
			num = 16384;
		else if (i == 15)
			num = 32768;
		else if (i == 16)
			num = 65536;
		else if (i == 17)
			num = 131072;
		else if (i == 18)
			num = 262144;
		else if (i == 19)
			num = 524288;
		else if (i == 20)
			num = 1048576;
		else if (i == 21)
			num = 2097152;
		else if (i == 22)
			num = 4194304;
		else if (i == 23)
			num = 8388608;
		else if (i == 24)
			num = 16777216;
		else if (i == 25)
			num = 33554432;
		else if (i == 26)
			num = 67108864;
		else if (i == 27)
			num = 134217728;
		else if (i == 28)
			num = 268435456;
		else if (i == 29)
			num = 536870912;
	
		if (!func_39(Global_40.f_8863.f_151, num))
			return false;
	}

	return true;
}

Hash func_82(var uParam0, int iParam1) // Position - 0xB825 Hash - 0xDF17EEA0 ^0xA303CFCC
{
	switch (*uParam0)
	{
		case -2009137002:
			return -1303435604;
	
		case -1300082860:
			return -1836692081;
	
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 1429539048;
			
				case 1:
					return 1745071749;
			
				case 2:
					return 1903214943;
			
				case 3:
					return -1644160387;
			
				case 4:
					return -1339375918;
			
				default:
					break;
			}
			break;
	
		case -780455182:
			return joaat("DOCUMENT_DISCO_GRAVE_NEWSCLIP");
	
		case -641229542:
			return 141209672;
	
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 925382142;
			
				case 1:
					return -1411632109;
			
				case 2:
					return 1596138913;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			return 1157890702;
	
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 342725892;
					
						case 1:
							return 1597450906;
					
						case 2:
							return -378242258;
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam1)
					{
						case 0:
							return 342725892;
					
						case 1:
							return 1597450906;
					
						case 2:
							return -378242258;
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam1)
					{
						case 3:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_01");
					
						case 4:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_02");
					
						case 5:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_03");
					
						case 6:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_04");
					
						case 7:
							return joaat("DOCUMENT_BARE_LADY_PHOTO_05");
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return 1172185944;
			
				case 1:
					return -11004343;
			
				case 2:
					return 1771694799;
			
				case 3:
					return -1932381889;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			return -551379044;
	
		case 1347913620:
			return joaat("document_cwfort_journal");
	
		case 1937333853:
			return -27084600;
	
		case 2135153015:
			return 1056963841;
	}

	return 0;
}

BOOL func_83(var uParam0, int iParam1) // Position - 0xBA70 Hash - 0x77E815B ^0xD73E2E7A
{
	switch (*uParam0)
	{
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 134217728))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_149, 67108864))
						return true;
					break;
			}
			break;
	
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 4096))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_149, 8192))
						return true;
					break;
			
				case 2:
					if (func_39(Global_40.f_8863.f_149, 16384))
						return true;
					break;
			
				case 3:
					if (func_39(Global_40.f_8863.f_149, 32768))
						return true;
					break;
			
				case 4:
					if (func_39(Global_40.f_8863.f_149, 65536))
						return true;
					break;
			
				default:
					break;
			}
			break;
	
		case 118535038:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 128))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_149, 256))
						return true;
					break;
			
				case 2:
					if (func_39(Global_40.f_8863.f_149, 512))
						return true;
					break;
			
				default:
					break;
			}
			break;
	
		case 513110082:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
						return true;
					break;
			
				case 2:
					if (func_39(Global_40.f_8863.f_150, 4))
						return true;
					break;
			
				case 3:
					if (func_39(Global_40.f_8863.f_150, 8))
						return true;
					break;
			
				case 4:
					if (func_39(Global_40.f_8863.f_150, 16))
						return true;
					break;
			
				case 5:
					if (func_39(Global_40.f_8863.f_150, 32))
						return true;
					break;
			
				case 6:
					if (func_39(Global_40.f_8863.f_150, 64))
						return true;
					break;
			
				case 7:
					if (func_39(Global_40.f_8863.f_150, 128))
						return true;
					break;
			}
			break;
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 1))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_149, 2))
						return true;
					break;
			
				case 2:
					if (func_39(Global_40.f_8863.f_149, 4))
						return true;
					break;
			
				case 3:
					if (func_39(Global_40.f_8863.f_149, 8))
						return true;
					break;
			
				case 4:
					if (func_39(Global_40.f_8863.f_149, 16))
						return true;
					break;
			
				default:
					break;
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_149, 131072))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_149, 262144))
						return true;
					break;
			
				case 2:
					if (func_39(Global_40.f_8863.f_149, 524288))
						return true;
					break;
			
				case 3:
					if (func_39(Global_40.f_8863.f_149, 1048576))
						return true;
					break;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return false;
}

int func_84(var uParam0, int iParam1) // Position - 0xBE32 Hash - 0xF5D57F96 ^0x7D2728EA
{
	switch (*uParam0)
	{
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 134217728))
						func_40(&(Global_40.f_8863.f_149), 134217728);
					break;
			
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 67108864))
						func_40(&(Global_40.f_8863.f_149), 67108864);
					break;
			}
			break;
	
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 4096))
						func_40(&(Global_40.f_8863.f_149), 4096);
					break;
			
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 8192))
						func_40(&(Global_40.f_8863.f_149), 8192);
					break;
			
				case 2:
					if (!func_39(Global_40.f_8863.f_149, 16384))
						func_40(&(Global_40.f_8863.f_149), 16384);
					break;
			
				case 3:
					if (!func_39(Global_40.f_8863.f_149, 32768))
						func_40(&(Global_40.f_8863.f_149), 32768);
					break;
			
				case 4:
					if (!func_39(Global_40.f_8863.f_149, 65536))
						func_40(&(Global_40.f_8863.f_149), 65536);
					break;
			
				default:
					break;
			}
			break;
	
		case 118535038:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 128))
						func_40(&(Global_40.f_8863.f_149), 128);
					break;
			
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 256))
						func_40(&(Global_40.f_8863.f_149), 256);
					break;
			
				case 2:
					if (!func_39(Global_40.f_8863.f_149, 512))
						func_40(&(Global_40.f_8863.f_149), 512);
					break;
			}
			break;
	
		case 513110082:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_150, 1))
						func_40(&(Global_40.f_8863.f_150), 1);
					break;
			
				case 1:
					if (!func_39(Global_40.f_8863.f_150, 2))
						func_40(&(Global_40.f_8863.f_150), 2);
					break;
			
				case 2:
					if (!func_39(Global_40.f_8863.f_150, 4))
						func_40(&(Global_40.f_8863.f_150), 4);
					break;
			
				case 3:
					if (!func_39(Global_40.f_8863.f_150, 8))
						func_40(&(Global_40.f_8863.f_150), 8);
					break;
			
				case 4:
					if (!func_39(Global_40.f_8863.f_150, 16))
						func_40(&(Global_40.f_8863.f_150), 16);
					break;
			
				case 5:
					if (!func_39(Global_40.f_8863.f_150, 32))
						func_40(&(Global_40.f_8863.f_150), 32);
					break;
			
				case 6:
					if (!func_39(Global_40.f_8863.f_150, 64))
						func_40(&(Global_40.f_8863.f_150), 64);
					break;
			
				case 7:
					if (!func_39(Global_40.f_8863.f_150, 128))
						func_40(&(Global_40.f_8863.f_150), 128);
					break;
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					if (!func_39(Global_40.f_8863.f_149, 131072))
						func_40(&(Global_40.f_8863.f_149), 131072);
					break;
			
				case 1:
					if (!func_39(Global_40.f_8863.f_149, 262144))
						func_40(&(Global_40.f_8863.f_149), 262144);
					break;
			
				case 2:
					if (!func_39(Global_40.f_8863.f_149, 524288))
						func_40(&(Global_40.f_8863.f_149), 524288);
					break;
			
				case 3:
					if (!func_39(Global_40.f_8863.f_149, 1048576))
						func_40(&(Global_40.f_8863.f_149), 1048576);
					break;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0;
}

Vector3 func_85(var uParam0, int iParam1) // Position - 0xC250 Hash - 0xBAE0ABDC ^0xBAE0ABDC
{
	switch (*uParam0)
	{
		case -1240932004:
			return -1498.01f, 1251.11f, 313.1f;
	
		case -599506500:
			return 2446.8f, 290.5534f, 67.249f;
	
		case -261997819:
			return -2588.29f, -93.565f, 167.61f;
	
		case 425000526:
			return -2367.267f, 124.251f, 216.25f;
	
		case 513110082:
			return -4394.59f, -2159.13f, 47.51f;
	
		case 733338689:
			return 2378.344f, 1687.092f, 95.406f;
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -1518.59f, 533.08f, 102.17f;
			
				case 1:
					return 1251.9122f, 1165.2804f, 150.05592f;
			
				case 2:
					return 2450.56f, 295.432f, 69.77f;
			
				case 3:
					return 2939.745f, 1422.05f, 45.06f;
			
				case 4:
					return 1972.995f, 1193.078f, 171.39f;
			
				default:
					break;
			}
			break;
	
		case 1187689415:
			switch (iParam1)
			{
				case 0:
					return -4587.193f, -2905.12f, -17.048f;
			
				case 1:
					return -4587.294f, -2905.708f, -17.239f;
			
				case 2:
					return -4587.391f, -2906.739f, -18.052f;
			
				case 3:
					return -4587.547f, -2907.744f, -18.05f;
			
				case 4:
					return -4587.42f, -2906.782f, -17.7f;
			
				case 5:
					return -4587.257f, -2906.639f, -18.052f;
			
				case 6:
					return -4587.304f, -2905.708f, -17.4f;
			
				case 7:
					return -4586.647f, -2910.855f, -17.212f;
			
				case 8:
					return -4585.916f, -2911.216f, -17.174f;
			
				case 9:
					return -4585.063f, -2911.622f, -17.679f;
			
				case 10:
					return -4584.339f, -2912.104f, -17.25f;
			
				case 11:
					return -4578.494f, -2906.926f, -17.843f;
			
				case 12:
					return -4578.637f, -2906.571f, -17.622f;
			
				case 13:
					return -4579.098f, -2905.573f, -17.374f;
			
				case 14:
					return -4579.32f, -2905.219f, -17.182f;
			
				case 15:
					return -4579.203f, -2905.305f, -17.263f;
			
				case 16:
					return -4579.212f, -2905.34f, -17.814f;
			
				case 17:
					return -4579.466f, -2905.34f, -17.814f;
			
				case 18:
					return -4579.286f, -2905.159f, -17.047f;
			
				case 19:
					return -4582.325f, -2902.774f, -17.303f;
			
				case 20:
					return -4582.924f, -2902.892f, -17.19f;
			
				case 21:
					return -4583.114f, -2902.857f, -17.264f;
			
				case 22:
					return -4583.964f, -2902.846f, -17.452f;
			
				case 23:
					return -4584.25f, -2902.846f, -17.452f;
			
				case 24:
					return -4584.875f, -2902.983f, -17.161f;
			
				case 25:
					return -4583.506f, -2908.181f, -18.329f;
			
				case 26:
					return -4585.07f, -2907.85f, -17.752f;
			
				case 27:
					return -4583.453f, -2905.564f, -18.192f;
			
				case 28:
					return -4582.923f, -2905.564f, -18.052f;
			
				case 29:
					return -4579.606f, -2907.844f, -17.995f;
			
				default:
					break;
			}
			break;
	
		case 1424723727:
			return 2152.9404f, -1647.5662f, 41.22f;
	
		case 2072029413:
			return 808.621f, 2299.72f, 251.43f;
	
		case 2072069278:
			return -2333.5f, 904.52f, 157.39f;
	}

	return 0f, 0f, 0f;
}

Vector3 func_86(var uParam0, int iParam1) // Position - 0xC6A6 Hash - 0xBAE0ABDC ^0xBAE0ABDC
{
	switch (*uParam0)
	{
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
	
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
	
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
	
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
	
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
	
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
			
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
			
				case 2:
					return -4394.824f, -2159.3662f, 47.3844f;
			
				default:
				
			}
			break;
	
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
			
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
			
				case 2:
					return -150.285f, 1498.717f, 114.935f;
			
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
			
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
			
				default:
				
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return 2783.1868f, 532.9774f, 70.28662f;
			
				case 1:
					return 2783.885f, 534.95013f, 70.2896f;
			
				case 2:
					return 2784.2095f, 532.76996f, 70.28524f;
			
				case 3:
					return 2782.7017f, 535.78644f, 70.28931f;
			
				default:
				
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
			
				case 1:
					return 1227.1906f, 2007.3888f, 319.3389f;
			}
			break;
	
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
	
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
	
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

Hash func_87(var uParam0, int iParam1) // Position - 0xC938 Hash - 0x233B4ECF ^0x1622A0CE
{
	switch (*uParam0)
	{
		case -2008558277:
			return joaat("world_animal_bat_hanging");
	
		case -1887999095:
			return joaat("world_player_inspect_letter_80cm_paper_w15_1_h24_foldvertical_p_cs_letter03x");
	
		case -1859413640:
			return joaat("RANSACK_VOLUME_NARROW_0m5_0m5_2m0");
	
		case -1481450947:
			return joaat("ransack_reach_over_volume_narrow_0m5_0m5_2m0");
	
		case -1427565340:
			return joaat("RANSACK_REACH_OVER_VOLUME_0m8_0m5_2m0");
	
		case -161804536:
			return joaat("ransack_volume_0m8_0m5_2m0");
	
		case -35775921:
			return joaat("RANSACK_REACH_OVER_CENTERED_GROUND_PICKUP");
	
		case 247563739:
			return joaat("prop_player_lns_floor_stash");
	
		case 513110082:
			return joaat("RANSACK_ATTACHED_CHEST_MEDIUM_OPEN_ONLY");
	
		case 733338689:
			return joaat("world_player_pickup_weapon_melee_hatchet_viking");
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("world_player_pickup_weapon_melee_hatchet_double_bit");
			
				case 1:
					return joaat("world_player_pickup_weapon_melee_hatchet_hewing");
			
				case 2:
					return joaat("world_player_pickup_weapon_melee_hatchet_hunter");
			
				case 3:
					return joaat("world_player_pickup_weapon_melee_hatchet_double_bit_rusted");
			
				case 4:
					return joaat("world_player_pickup_weapon_melee_hatchet_hunter_rusted");
			
				default:
				
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return joaat("world_player_inspect_letter_80cm_paper_w15_1_h24_foldvertical_p_cs_letter03x");
			
				default:
					break;
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return joaat("world_player_drink_witches_brew");
			
				case 1:
					return joaat("world_player_sleep_ground");
			}
			break;
	
		case 2000209669:
			return joaat("RANSACK_STRANGE_STATUES_STASH");
	
		case 2072029413:
			return joaat("world_player_pickup_weapon_thrown_tomahawk_ancient");
	
		case 2135153015:
			return joaat("RANSACK_REACH_OVER_GENERIC_LETTER_PROMPT_0m5_0m5_2m0");
	}

	return 0;
}

Hash func_88(var uParam0) // Position - 0xCAC4 Hash - 0xB6CCDECA ^0x98FF4DD2
{
	switch (*uParam0)
	{
		case 513110082:
			return joaat("ammo_revolver");
	
		case 1187689415:
			return joaat("ammo_arrow");
	
		default:
		
	}

	return 0;
}

BOOL func_89(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xCAF2 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_178(hParam0, 0))
		return false;

	num = func_198(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_263(hParam0, 1))
			return false;

	return func_182(hParam0, false, bParam2) >= iParam1;
}

int func_90(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0xCB5C Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_178(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_264(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_259(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_89(hParam0, 1, bParam4))
		return 0;

	statId = { func_256(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_182(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_182(hParam0, false, false) - iParam1 < 0)
		{
			func_90(hParam0, func_182(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_198(hParam0) == joaat("WEAPON"))
		if (!func_265(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_266(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_206(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_259(hParam0, -iParam1, flag, flag2, flag3);

	func_267(hParam0, iParam1);
	return 1;
}

void func_91(var uParam0) // Position - 0xCCD0 Hash - 0x12B095D ^0x8F05BAE7
{
	if (func_106() != -1)
		return;

	if (func_268(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_268(*uParam0)))
			MAP::_MAP_DISCOVER_REGION(func_268(*uParam0));
	
		func_32(*uParam0, 8);
	}

	return;
}

void func_92(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xCD11 Hash - 0xEF45F17F ^0x3F7EA573
{
	int value;

	if (func_58(Global_35, func_86(uParam0, uParam0->f_4), 15f, true, true))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam2->[iParam3]))
		{
			uParam2->[iParam3] = func_269(uParam1, "PrimaryItem");
		}
		else if (!DECORATOR::DECOR_EXIST_ON(uParam2->[iParam3], "letter_item"))
		{
			if (!(func_160(uParam0, iParam3) == -1))
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, iParam3)))
					OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam2->[iParam3], func_160(uParam0, iParam3), 0, 0);
		
			if (*uParam0 == 1284679164)
				if (iParam3 == 0)
					value = 1172185944;
				else if (iParam3 == 1)
					value = -11004343;
				else if (iParam3 == 2)
					value = 1771694799;
				else if (iParam3 == 3)
					value = -1932381889;
			else if (*uParam0 == -1887999095)
				value = -1072400009;
		
			DECORATOR::DECOR_SET_INT(uParam2->[iParam3], "letter_item", value);
		}
	}

	return;
}

Hash func_93(var uParam0, int iParam1) // Position - 0xCE0C Hash - 0x3F44228A ^0x7B94B702
{
	switch (*uParam0)
	{
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return joaat("consumable_whiskey");
			
				case 1:
					return joaat("consumable_apple");
			
				default:
					break;
			}
			break;
	
		case -1427565340:
			switch (iParam1)
			{
				case 1:
					return joaat("provision_disco_shrunken_head");
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return joaat("provision_disco_fertility_statue");
			
				default:
					break;
			}
			break;
	
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return joaat("provision_disco_arrowhead_02");
			
				default:
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_GOLDBAR_LARGE");
			
				case 1:
					return joaat("PROVISION_GOLDBAR_LARGE");
			
				case 2:
					return joaat("PROVISION_GOLDBAR_LARGE");
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0;
}

void func_94() // Position - 0xCEE6 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

Hash func_95(var uParam0, int iParam1) // Position - 0xCF07 Hash - 0xCD04DE92 ^0xC3B2DD69
{
	switch (*uParam0)
	{
		case -2108030724:
			return joaat("PROVISION_CATHERINES_NECKLACE");
	
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return joaat("provision_ring_platinum");
			
				case 1:
					return joaat("provision_disco_ancient_necklace");
			
				default:
					break;
			}
			break;
	
		case -1177787273:
			return joaat("provision_jewelrybag_sm");
	
		case -777592153:
		case -35775921:
			return joaat("provision_goldring");
	
		case -709811179:
		case 1673499939:
			return joaat("provision_asteroid_chunk");
	
		case -161804536:
			return joaat("provision_disco_viking_comb");
	
		case 425000526:
		case 464413478:
			return joaat("provision_gold_nugget");
	}

	return 0;
}

void func_96(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, int iParam6, Hash hParam7) // Position - 0xCFAF Hash - 0x63AC4944 ^0x63AC4944
{
	if (!bParam1)
		func_270(iParam0, sParam4, iParam5);

	func_271(iParam0, bParam1, iParam2, iParam3, hParam7);
	return;
}

void func_97(var uParam0) // Position - 0xCFD5 Hash - 0x2FC65638 ^0xB9EA0D6F
{
	int num;

	switch (*uParam0)
	{
		case 870958936:
			if (uParam0->f_4 == 0)
				num = 1;
			else if (uParam0->f_4 == 1)
				num = 2;
			else if (uParam0->f_4 == 2)
				num = 4;
			else if (uParam0->f_4 == 3)
				num = 8;
			else if (uParam0->f_4 == 4)
				num = 16;
			else
				return;
			break;
	
		default:
			break;
	}

	if (!func_39(Global_40.f_8863.f_149, num))
		func_40(&(Global_40.f_8863.f_149), num);

	return;
}

int func_98() // Position - 0xD060 Hash - 0x1767447B ^0x234018D7
{
	int i;
	int num;
	int num2;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num2 = func_153(i);
	
		if (func_39(Global_40.f_8863.f_148, num2))
			num = num + 1;
	}

	return num;
}

void func_99(int iParam0, int iParam1, int iParam2) // Position - 0xD09E Hash - 0x89941423 ^0x3E1250FE
{
	Hash hash;

	hash = func_272(iParam0);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, 0f, 0f, 0f, func_273(iParam0), func_274(iParam0), 0);

	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(0, func_275(iParam0), iParam1, iParam2));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, 0, MISC::VAR_STRING(0, func_276(iParam0), iParam1, iParam2), iParam1 == iParam2, false, false);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY(func_277(iParam0, 0)), MISC::GET_HASH_KEY(func_278(iParam0, 0)));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY(func_277(iParam0, 1)), MISC::GET_HASH_KEY(func_278(iParam0, 1)));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, 0, func_279(iParam0, 0), iParam1 == iParam2, true, false);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, 1, func_279(iParam0, 1), func_48(373034311), true, false);
	return;
}

void func_100(const char* sParam0) // Position - 0xD16E Hash - 0xAC64587 ^0x174CAD6C
{
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_272(-321841939));
	func_280(MISC::VAR_STRING(2, "DISCO_DREAM"), sParam0, joaat("hud_toasts"), joaat("toast_dreamcatcher"), joaat("player_menu"), MISC::VAR_STRING(2, "COL_CTX_PLAYER_LOG"), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_101(var uParam0, BOOL bParam1) // Position - 0xD1C1 Hash - 0xE99194B8 ^0xE99194B8
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		func_165(uParam0, bParam1, i);
	}

	return;
}

void func_102(var uParam0) // Position - 0xD1E7 Hash - 0xC78282CE ^0x38C2AC07
{
	int i;

	func_281(&uLocal_66);

	if (*uParam0 == 1284679164 || *uParam0 == -780455182)
	{
		for (i = 0; i <= 4 - 1; i = i + 1)
		{
			if (!(func_160(uParam0, i) == -1))
				if (TXD::DOES_STREAMED_TXD_EXIST(func_160(uParam0, i)))
					TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(func_160(uParam0, i));
		}
	}

	return;
}

BOOL func_103(int iParam0) // Position - 0xD24D Hash - 0x1965A61D ^0x1965A61D
{
	int num;

	num = func_104(iParam0, 1);
	return num >= 0 && num < 143;
}

int func_104(int iParam0, int iParam1) // Position - 0xD26C Hash - 0x18EDA9F0 ^0x18EDA9F0
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
	
		case -2060865802:
			return 116;
	
		case -2019711818:
			return 9;
	
		case -2009137002:
			return 34;
	
		case -2008558277:
			return 59;
	
		case -1960242214:
			return 125;
	
		case -1958832660:
			return 49;
	
		case -1923503631:
			return 117;
	
		case -1891628345:
			return 124;
	
		case -1887999095:
			return 89;
	
		case -1882503209:
			return 50;
	
		case -1859413640:
			return 28;
	
		case -1859023693:
			return 64;
	
		case -1848895400:
			return 113;
	
		case -1841331114:
			return 94;
	
		case -1829339703:
			return 141;
	
		case -1824429070:
			return 66;
	
		case -1787770845:
			return 16;
	
		case -1761578407:
			return 17;
	
		case -1761189332:
			return 115;
	
		case -1714262909:
			return 76;
	
		case -1686810506:
			return 112;
	
		case -1646022773:
			return 13;
	
		case -1636964661:
			return 10;
	
		case -1614148516:
			return 48;
	
		case -1609238411:
			return 21;
	
		case -1568839185:
			return 6;
	
		case -1505275983:
			return 31;
	
		case -1494823099:
			return 61;
	
		case -1481450947:
			return 53;
	
		case -1457751321:
			return 123;
	
		case -1427565340:
			return 47;
	
		case -1420566543:
			return 23;
	
		case -1308658310:
			return 45;
	
		case -1300082860:
			return 51;
	
		case -1287911066:
			return 2;
	
		case -1283611369:
			return 78;
	
		case -1272862985:
			return 139;
	
		case -1243267511:
			return 81;
	
		case -1240932004:
			return 140;
	
		case -1208846034:
			return 24;
	
		case -1177787273:
			return 127;
	
		case -1144800837:
			return 111;
	
		case -1109016944:
			return 15;
	
		case -1084929085:
			return 4;
	
		case -1061274876:
			return 96;
	
		case -1053108445:
			return 84;
	
		case -986176781:
			return 25;
	
		case -979575591:
			return 103;
	
		case -968854939:
			return 68;
	
		case -920971071:
			return 83;
	
		case -919236330:
			return 79;
	
		case -890175011:
			return 137;
	
		case -849582265:
			return 92;
	
		case -834293086:
			return 91;
	
		case -780455182:
			return 8;
	
		case -777592153:
			return 3;
	
		case -777150535:
			return 100;
	
		case -763376358:
			return 55;
	
		case -739986731:
			return 110;
	
		case -715636193:
			return 95;
	
		case -709811179:
			return 20;
	
		case -654238687:
			return 104;
	
		case -641229542:
			return 46;
	
		case -607940493:
			return 118;
	
		case -599506500:
			return 38;
	
		case -544327665:
			return 106;
	
		case -499529359:
			return 74;
	
		case -490142739:
			return 130;
	
		case -415839138:
			return 98;
	
		case -409986722:
			return 88;
	
		case -357364973:
			return 44;
	
		case -321841939:
			return 11;
	
		case -261997819:
			return 37;
	
		case -232974724:
			return 135;
	
		case -161804536:
			return 29;
	
		case -148407339:
			return 97;
	
		case -35775921:
			return 40;
	
		case -30872859:
			return 30;
	
		case -657632:
			return 114;
	
		case 0:
			return 143;
	
		case 58958195:
			return 72;
	
		case 74587361:
			return 35;
	
		case 118535038:
			return 101;
	
		case 149709049:
			return 67;
	
		case 173549940:
			return 22;
	
		case 221420861:
			return 132;
	
		case 230001763:
			return 107;
	
		case 233600584:
			return 54;
	
		case 247563739:
			return 52;
	
		case 308500632:
			return 136;
	
		case 330993088:
			return 131;
	
		case 373034311:
			return 0;
	
		case 397377585:
			return 87;
	
		case 404434344:
			return 18;
	
		case 425000526:
			return 75;
	
		case 429544447:
			return 93;
	
		case 435290930:
			return 60;
	
		case 464413478:
			return 128;
	
		case 503180747:
			return 19;
	
		case 513110082:
			return 121;
	
		case 657666087:
			return 70;
	
		case 677950956:
			return 142;
	
		case 683269210:
			return 134;
	
		case 733338689:
			return 32;
	
		case 870958936:
			return 1;
	
		case 918206817:
			return 82;
	
		case 921081956:
			return 108;
	
		case 939555152:
			return 27;
	
		case 949011950:
			return 109;
	
		case 1034793488:
			return 33;
	
		case 1048086072:
			return 26;
	
		case 1091556515:
			return 122;
	
		case 1120968795:
			return 105;
	
		case 1124200691:
			return 43;
	
		case 1154568952:
			return 12;
	
		case 1187689415:
			return 126;
	
		case 1187917501:
			return 71;
	
		case 1284679164:
			return 85;
	
		case 1335921989:
			return 58;
	
		case 1342653896:
			return 69;
	
		case 1347913620:
			return 5;
	
		case 1351526287:
			return 86;
	
		case 1424723727:
			return 39;
	
		case 1431862613:
			return 80;
	
		case 1464664327:
			return 129;
	
		case 1490223565:
			return 57;
	
		case 1505050944:
			return 77;
	
		case 1519228573:
			return 42;
	
		case 1519472817:
			return 63;
	
		case 1535254161:
			return 133;
	
		case 1673499939:
			return 99;
	
		case 1734766691:
			return 65;
	
		case 1801731633:
			return 56;
	
		case 1833243216:
			return 102;
	
		case 1861313914:
			return 62;
	
		case 1937333853:
			return 7;
	
		case 1982045664:
			return 90;
	
		case 1986618633:
			return 119;
	
		case 2000209669:
			return 120;
	
		case 2072029413:
			return 36;
	
		case 2072069278:
			return 73;
	
		case 2134589549:
			return 14;
	
		case 2135153015:
			return 41;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Vector3 func_105(var uParam0, int iParam1) // Position - 0xD8B5 Hash - 0xAF22EF00 ^0xAF22EF00
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
				return 827.9519f, 1925.2303f, 258.7208f;
			else if (iParam1 == 1)
				return 832.673f, 1922.2863f, 258.7208f;
			else if (iParam1 == 2)
				return 829.6969f, 1926.9872f, 258.7208f;
			else if (iParam1 == 3)
				return 832.1583f, 1926.7184f, 258.7208f;
			else if (iParam1 == 4)
				return 828.2374f, 1922.7709f, 258.7208f;
			else if (iParam1 == 5)
				return 830.3385f, 1921.4603f, 258.7208f;
			else if (iParam1 == 6)
				return 833.4829f, 1924.6263f, 258.7208f;
			else if (iParam1 == 7)
				return 830.591f, 1924.07f, 258.795f;
			else if (iParam1 == 11)
				return -160.9032f, 1599.6328f, 180.2413f;
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_106() // Position - 0xD9C6 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_107(int iParam0, BOOL bParam1) // Position - 0xD9D4 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_282(iParam0))
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

void func_108(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDA05 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_120(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_283(num);
	*uParam0 = 0;
	return;
}

void func_109(var uParam0) // Position - 0xDA59 Hash - 0x87234A3C ^0x21D7A27C
{
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	if (*uParam0 == 404434344)
	{
		vector = { 796.11584f, 1777.6525f, 281.48856f };
		vector2 = { 0f, 0f, -74.42887f };
		vector3 = { 2.5f, 3f, 5f };
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_284(uParam0));
	}
	else if (*uParam0 == -1761578407)
	{
		if (uParam0->f_4 == 0)
		{
			vector = { 796.11584f, 1777.6525f, 281.48856f };
			vector2 = { 0f, 0f, -74.42887f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 1)
		{
			vector = { -1279.2471f, 2896.2676f, 386.57596f };
			vector2 = { 0f, 0f, -21.054869f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 2)
		{
			vector = { 2576.8708f, -628.93024f, 42.2934f };
			vector2 = { 0f, 0f, -110.79236f };
			vector3 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 3)
		{
			vector = { 2578.7576f, -629.6465f, 42.2934f };
			vector2 = { 0f, 0f, -110.79236f };
			vector3 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 4)
		{
			vector = { 673.9809f, -974.8455f, 54.0894f };
			vector2 = { 0f, 0f, -23.06569f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 5)
		{
			vector = { -1305.8706f, 2468.3286f, 309.4034f };
			vector2 = { 0f, 0f, -21.05487f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 6)
		{
			vector = { 1734.5801f, -1895.353f, 45.189f };
			vector2 = { 0f, 0f, -41.82871f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 7)
		{
			vector = { 2155.717f, 794.849f, 156.1776f };
			vector2 = { 0f, 0f, 280f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 8)
		{
			vector = { 512.7686f, 1932.3792f, 199.7092f };
			vector2 = { 0f, 0f, -2.622487f };
			vector3 = { 2.5f, 3f, 5f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_284(uParam0));
	}
	else if (*uParam0 == -1243267511 || *uParam0 == 1535254161 || *uParam0 == -607940493)
	{
		if (*uParam0 == -1243267511)
		{
			vector = { -2691.41f, -407.6143f, 146.533f };
			vector2 = { 0f, 0f, 0f };
			vector3 = { 5f, 5f, 5f };
		}
		else if (*uParam0 == 1535254161)
		{
			vector = { 1503.2311f, -1819.4764f, 56.89473f };
			vector2 = { 0f, 0f, 31.762503f };
			vector3 = { 44.605457f, 27.382586f, 6f };
		}
		else if (*uParam0 == -607940493)
		{
			vector = { 2704.939f, 435.9636f, 91.37785f };
			vector2 = { 0f, 0f, -54.200283f };
			vector3 = { 3.346154f, 3.339972f, 8.648747f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			if (*uParam0 == -607940493)
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_284(uParam0));
			else
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, vector2, vector3, func_284(uParam0));
	}
	else if (*uParam0 == -890175011)
	{
		if (uParam0->f_4 == 0)
		{
			vector = { 2825.8171f, -1322.5686f, 45.7557f };
			vector2 = { 0f, 0f, -40.04137f };
			vector3 = { 1.479112f, 3.339972f, 8.648747f };
		}
		else if (uParam0->f_4 == 1)
		{
			vector = { 2736.9749f, -1340.5348f, 46.516815f };
			vector2 = { 0f, 0f, -44.913616f };
			vector3 = { 1.006241f, 1.334083f, 4.408258f };
		}
		else if (uParam0->f_4 == 3)
		{
			vector = { 2773.5535f, -1183.3451f, 48.74084f };
			vector2 = { 0f, 0f, -23.65903f };
			vector3 = { 1.282358f, 0.740535f, 5.648747f };
		}
		else if (uParam0->f_4 == 4)
		{
			vector = { 2821.3694f, -1229.3018f, 46.5088f };
			vector2 = { 0f, 0f, -34.541092f };
			vector3 = { 3.346154f, 3.339972f, 8.648747f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_284(uParam0));
	}
	else if (*uParam0 == 677950956)
	{
		if (uParam0->f_4 == 1)
		{
			vector = { -781.6985f, -1321.9182f, 42.8842f };
			vector2 = { 0f, 0f, -90.32019f };
			vector3 = { 3.080742f, 6.954088f, 8.648747f };
		}
		else if (uParam0->f_4 == 5)
		{
			vector = { -816.78595f, -1313.1086f, 44.647045f };
			vector2 = { 0f, 0f, -89.95428f };
			vector3 = { 2.607229f, 7.43211f, 4.408258f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_284(uParam0));
	}

	return;
}

BOOL func_110(int iParam0, int iParam1) // Position - 0xDFCA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_111(var uParam0, float fParam1) // Position - 0xDFD9 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_285() - fParam1;
	func_286(uParam0, 1);
	func_287(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_112(var uParam0) // Position - 0xDFFF Hash - 0x39705408 ^0x39705408
{
	return func_110(*uParam0, 2);
}

int func_113() // Position - 0xE00F Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_114(var uParam0) // Position - 0xE02D Hash - 0xD965F2AB ^0x4503AF3C
{
	switch (*uParam0)
	{
		case -1300082860:
			if (func_58(Global_35, func_53(uParam0, 0), 3f, true, true))
				return true;
			break;
	
		case -890175011:
			if (uParam0->f_4 == 0 || uParam0->f_4 == 1 || uParam0->f_4 == 3 || uParam0->f_4 == 4)
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
					return true;
			break;
	
		case 677950956:
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
					return true;
			break;
	}

	return false;
}

BOOL func_115(var uParam0, int iParam1) // Position - 0xE0FE Hash - 0x787E614B ^0xC23272A0
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (!func_288(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			return false;
	
		if (TASK::_IS_PED_DUELLING(Global_35))
			return false;
	}

	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
		return false;

	if (!func_288(iParam1, 2) && !func_289())
		return false;

	if (!func_288(iParam1, 4) && !func_290())
		return false;

	if (!func_288(iParam1, 128) && !func_291())
		return false;

	if (!func_288(iParam1, 2048) && !func_292(false))
		return false;

	if (!func_288(iParam1, 32) && !func_293(iParam1))
		return false;

	if (!func_288(iParam1, 64) && !func_294())
		return false;

	if (!func_288(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (!func_288(iParam1, 512))
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			return false;

	if (!func_288(iParam1, 1024))
		if (PED::IS_PED_IN_COVER(Global_35, false, true))
			return false;

	if (CAM::_0x1204EB53A5FBC63D())
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		return false;
	else if (func_295(Global_35, 1369124074))
		return false;
	else if (func_295(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		return false;

	return true;
}

BOOL func_116(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xE281 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > iParam4;
}

// Unhandled jump detected. Output should be considered invalid
int func_117(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0xE2C2 Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_296(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
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
		func_297(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_118(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE399 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_33(iParam0))
		return;

	num = func_120(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_119(int iParam0) // Position - 0xE3E4 Hash - 0x4FCB23E1 ^0x764A8AAB
{
	int num;

	if (!func_33(iParam0))
		return;

	num = func_120(iParam0);

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, 1710353528, 0);

	return;
}

int func_120(int iParam0) // Position - 0xE426 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_121(int iParam0, BOOL bParam1) // Position - 0xE430 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_120(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_122(int iParam0, BOOL bParam1) // Position - 0xE488 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_296(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

Hash func_123(int iParam0) // Position - 0xE4E0 Hash - 0xB8EC44B7 ^0x184A6D50
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
	
		case 1:
			return 437457038;
	
		case 2:
			return 787823186;
	
		case 3:
			return -22914651;
	
		case 4:
			return -207797345;
	
		case 5:
			return 152333965;
	
		case 6:
			return -705591224;
	
		case 7:
			return -307775564;
	
		case 8:
			return -1166159519;
	
		case 9:
			return -164804701;
	
		case 10:
			return -1562042092;
	
		case 11:
			return -1717629304;
	
		case 12:
			return -1669917636;
	
		case 13:
			return -884608551;
	
		case 14:
			return -1143188730;
	
		case 15:
			return 1856092306;
	
		case 16:
			return 1445824426;
	
		case 17:
			return -2082446577;
	
		case 18:
			return 2030128465;
	
		case 19:
			return -597126414;
	
		default:
		
	}

	return 0;
}

Hash func_124(int iParam0, int iParam1) // Position - 0xE609 Hash - 0xE1D12727 ^0x5FD78BB4
{
	switch (iParam0)
	{
		case -2009137002:
			return -440810089;
	
		case -1960242214:
			return 1747567809;
	
		case -1958832660:
			return -245016475;
	
		case -1891628345:
			return -804420153;
	
		case -1887999095:
			return -95543768;
	
		case -1787770845:
			return 422665644;
	
		case -1761189332:
			return 270899202;
	
		case -1646022773:
			return -65357919;
	
		case -1636964661:
			return 1599532233;
	
		case -1614148516:
			return -1705330644;
	
		case -1609238411:
			return 1910189712;
	
		case -1505275983:
			return 387715582;
	
		case -1300082860:
			return 1529964155;
	
		case -1287911066:
			return -617882357;
	
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 493724241;
			
				case 1:
					return 1378917331;
			
				case 2:
					return -1267048347;
			
				case 3:
					return 1840337620;
			
				default:
					break;
			}
			break;
	
		case -1243267511:
			return -1482291365;
	
		case -1109016944:
			return -1451193020;
	
		case -1053108445:
			return -1576735250;
	
		case -986176781:
			return -1896654834;
	
		case -979575591:
			return 463289412;
	
		case -849582265:
			return 2097588565;
	
		case -780455182:
			return 1614617630;
	
		case -739986731:
			return 371066;
	
		case -709811179:
			return 317656811;
	
		case -607940493:
			return 894739389;
	
		case -415839138:
			return 979428630;
	
		case -232974724:
			return -792295257;
	
		case -161804536:
			return -126421233;
	
		case -148407339:
			return -1155213091;
	
		case 58958195:
			return 712585684;
	
		case 247563739:
			return 325616917;
	
		case 308500632:
			return 1553391542;
	
		case 429544447:
			return -159963867;
	
		case 657666087:
			return -1721762433;
	
		case 921081956:
			return 731487006;
	
		case 1034793488:
			return 120200140;
	
		case 1284679164:
			return -1245190585;
	
		case 1519228573:
			return -703551507;
	
		case 1535254161:
			return -452661064;
	
		case 1673499939:
			return -720689005;
	
		case 1734766691:
			return 1292039078;
	
		case 1861313914:
			return 1067266077;
	
		case 1982045664:
			return -1173476934;
	
		case 1986618633:
			return -2113673964;
	
		case 2000209669:
			switch (iParam1)
			{
				case 11:
					return -615993722;
			
				default:
				
			}
		
			return -866955093;
	
		case 2134589549:
			return 2004715705;
	}

	return 0;
}

BOOL func_125() // Position - 0xE8F1 Hash - 0xA0319B77 ^0x14CE505F
{
	int i;
	int num;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num = func_153(i);
	
		if (!func_39(Global_40.f_8863.f_148, num))
			return false;
	}

	return true;
}

BOOL func_126() // Position - 0xE92D Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_106() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_127(int iParam0, int iParam1, int iParam2) // Position - 0xE953 Hash - 0xFCD0B11D ^0x62D50FE4
{
	if (iParam1 == true)
	{
		switch (iParam0)
		{
			case -2009137002:
				return joaat("journal_disc_face_cliff_ar");
		
			case -1960242214:
				return joaat("journal_disc_colony_ar");
		
			case -1958832660:
				return joaat("journal_disc_abandoned_church_ar");
		
			case -1891628345:
				return joaat("journal_disc_ute_wickiup");
		
			case -1887999095:
				return joaat("journal_disc_grays_secret_ar");
		
			case -1787770845:
				return joaat("journal_disc_giant_remains_ar");
		
			case -1761189332:
				return joaat("journal_disc_register_rock_ar");
		
			case -1646022773:
				return joaat("journal_disc_fossilised_man_ar");
		
			case -1636964661:
				return joaat("journal_disc_donkey_lady_ar");
		
			case -1614148516:
				return joaat("journal_disc_phonograph_ar");
		
			case -1609238411:
				return joaat("journal_disc_old_scripts_ar");
		
			case -1505275983:
				return joaat("journal_disc_warped_tree_ar");
		
			case -1300082860:
				return joaat("journal_disc_oil_well_ar");
		
			case -1287911066:
				return joaat("journal_disc_barrel_rider_ar");
		
			case -1272862985:
				if (iParam2 == 0)
					return joaat("journal_discover_trail_trees_tree_01_ar");
				else if (iParam2 == 1)
					return joaat("journal_discover_trail_trees_tree_02_ar");
				else if (iParam2 == 2)
					return joaat("journal_discover_trail_trees_tree_03_ar");
				else if (iParam2 == 3)
					return joaat("journal_discover_trail_trees_tree_04_ar");
				break;
		
			case -1243267511:
				return joaat("journal_disc_face_trees_ar");
		
			case -1109016944:
				return joaat("journal_disc_dead_town_ar");
		
			case -1053108445:
				return joaat("journal_disc_flying_machine_ar");
		
			case -986176781:
				return joaat("journal_disc_whale_bone_ar");
		
			case -979575591:
				return joaat("journal_disc_obelisk_ar");
		
			case -890175011:
				if (iParam2 == 0)
					return joaat("journal_town_secret_vamp2_ar");
				else if (iParam2 == 1)
					return joaat("journal_town_secret_vamp1_ar");
				else if (iParam2 == 2)
					return joaat("journal_town_secret_vamp5_ar");
				else if (iParam2 == 3)
					return joaat("journal_town_secret_vamp4_ar");
				else if (iParam2 == 4)
					return joaat("journal_town_secret_vamp3_ar");
				break;
		
			case -849582265:
				return joaat("journal_disc_indian_burial_ar");
		
			case -780455182:
				return joaat("journal_disc_defaced_grave_ar");
		
			case -739986731:
				return joaat("journal_disc_pagan_ritual_ar");
		
			case -709811179:
				return joaat("journal_disc_meteorite_ar");
		
			case -607940493:
				return joaat("journal_disc_serpent_mound_ar");
		
			case -415839138:
				return joaat("journal_disc_meditating_monk_ar");
		
			case -321841939:
				return joaat("journal_disc_dreamcatcher_map_ar");
		
			case -232974724:
				return joaat("journal_disc_trading_post_ar");
		
			case -161804536:
				return joaat("journal_disc_stonehenge_ar");
		
			case -148407339:
				return joaat("journal_disc_mammoth_ar");
		
			case 58958195:
				return joaat("journal_disc_crashed_airship_ar");
		
			case 247563739:
				return joaat("journal_disc_abandoned_trading_post_ar");
		
			case 308500632:
				return joaat("journal_disc_hidden_tunnel_ar");
		
			case 429544447:
				return joaat("journal_disc_jesuit_ar");
		
			case 657666087:
				return joaat("journal_disc_circus_wagons_ar");
		
			case 921081956:
				return joaat("journal_disc_one_room_church_ar");
		
			case 1034793488:
				return joaat("journal_disc_painting_cabin_ar");
		
			case 1284679164:
				return joaat("journal_disc_frankenstein_ar");
		
			case 1519228573:
				return joaat("journal_disc_hand_swamp_ar");
		
			case 1535254161:
				return joaat("journal_disc_civil_war_ar");
		
			case 1673499939:
				return joaat("journal_disc_meteor_house_ar");
		
			case 1734766691:
				return joaat("journal_disc_brush_fire_ar");
		
			case 1861313914:
				return joaat("journal_disc_braithwaite_secret_ar");
		
			case 1982045664:
				return joaat("journal_disc_hermit_woman_ar");
		
			case 1986618633:
				return joaat("journal_disc_sperm_whale_ar");
		
			case 2000209669:
				if (iParam2 == 11)
					return joaat("journal_disc_strange_statues_painting_ar");
				else
					return joaat("journal_disc_strange_statues_ar");
				break;
		
			case 2134589549:
				return joaat("journal_disc_frozen_settler_ar");
		
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -2009137002:
				return joaat("journal_disc_face_cliff_jn");
		
			case -1960242214:
				return joaat("journal_disc_colony_jn");
		
			case -1958832660:
				return joaat("journal_disc_abandoned_church_jn");
		
			case -1891628345:
				return joaat("journal_disc_ute_wickiup_jn");
		
			case -1887999095:
				return joaat("journal_disc_grays_secret_jn");
		
			case -1787770845:
				return joaat("journal_disc_giant_remains_jn");
		
			case -1761189332:
				return joaat("journal_disc_register_rock_jn");
		
			case -1646022773:
				return joaat("journal_disc_fossilised_man_jn");
		
			case -1636964661:
				return joaat("journal_disc_donkey_lady_jn");
		
			case -1614148516:
				return joaat("journal_disc_phonograph_jn");
		
			case -1609238411:
				return joaat("journal_disc_old_scripts_jn");
		
			case -1505275983:
				return joaat("journal_disc_warped_tree_jn");
		
			case -1300082860:
				return joaat("journal_disc_oil_well_jn");
		
			case -1287911066:
				return joaat("journal_disc_barrel_rider_jn");
		
			case -1272862985:
				if (iParam2 == 0)
					return joaat("journal_discover_trail_trees_tree_01_jn");
				else if (iParam2 == 1)
					return joaat("journal_discover_trail_trees_tree_02_jn");
				else if (iParam2 == 2)
					return joaat("journal_discover_trail_trees_tree_03_jn");
				else if (iParam2 == 3)
					return joaat("journal_discover_trail_trees_tree_04_jn");
				break;
		
			case -1243267511:
				return joaat("journal_disc_face_trees_jn");
		
			case -1109016944:
				return joaat("journal_disc_dead_town_jn");
		
			case -1053108445:
				return joaat("journal_disc_flying_machine_jn");
		
			case -986176781:
				return joaat("journal_disc_whale_bone_jn");
		
			case -979575591:
				return joaat("journal_disc_obelisk_jn");
		
			case -890175011:
				if (iParam2 == 0)
					return joaat("journal_town_secret_vamp2_jn");
				else if (iParam2 == 1)
					return joaat("journal_town_secret_vamp1_jn");
				else if (iParam2 == 2)
					return joaat("journal_town_secret_vamp5_jn");
				else if (iParam2 == 3)
					return joaat("journal_town_secret_vamp4_jn");
				else if (iParam2 == 4)
					return joaat("journal_town_secret_vamp3_jn");
				break;
		
			case -849582265:
				return joaat("journal_disc_indian_burial_jn");
		
			case -780455182:
				return joaat("journal_disc_defaced_grave_jn");
		
			case -739986731:
				return joaat("journal_disc_pagan_ritual_jn");
		
			case -709811179:
				return joaat("journal_disc_meteorite_jn");
		
			case -607940493:
				return joaat("journal_disc_serpent_mound_jn");
		
			case -415839138:
				return joaat("journal_disc_meditating_monk_jn");
		
			case -321841939:
				return joaat("journal_disc_dreamcatcher_map_jn");
		
			case -232974724:
				return joaat("journal_disc_trading_post_jn");
		
			case -161804536:
				return joaat("journal_disc_stonehenge_jn");
		
			case -148407339:
				return joaat("journal_disc_mammoth_jn");
		
			case 58958195:
				return joaat("journal_disc_crashed_airship_jn");
		
			case 247563739:
				return joaat("journal_disc_abandoned_trading_post_jn");
		
			case 308500632:
				return joaat("journal_disc_hidden_tunnel_jn");
		
			case 429544447:
				return joaat("journal_disc_jesuit_jn");
		
			case 657666087:
				return joaat("journal_disc_circus_wagons_jn");
		
			case 677950956:
				if (iParam2 == 0)
					return joaat("journal_town_secret_aztec_1_jn");
				else if (iParam2 == 1)
					return joaat("journal_town_secret_aztec_2_jn");
				else if (iParam2 == 2)
					return joaat("journal_town_secret_aztec_3_jn");
				else if (iParam2 == 3)
					return joaat("journal_town_secret_aztec_4_jn");
				else if (iParam2 == 4)
					return joaat("journal_town_secret_aztec_5_jn");
				else if (iParam2 == 5)
					return joaat("journal_town_secret_aztec_6_jn");
				break;
		
			case 921081956:
				return joaat("journal_disc_one_room_church_jn");
		
			case 1034793488:
				return joaat("journal_disc_painting_cabin_jn");
		
			case 1284679164:
				return joaat("journal_disc_frankenstein_jn");
		
			case 1519228573:
				return joaat("journal_disc_hand_swamp_jn");
		
			case 1535254161:
				return joaat("journal_disc_civil_war_jn");
		
			case 1673499939:
				return joaat("journal_disc_meteor_house_jn");
		
			case 1734766691:
				return joaat("journal_disc_brush_fire_jn");
		
			case 1982045664:
				return joaat("journal_disc_hermit_woman_jn");
		
			case 1986618633:
				return joaat("journal_disc_sperm_whale_jn");
		
			case 2000209669:
				if (iParam2 == 11)
					return joaat("journal_disc_strange_statues_painting_jn");
				else
					return joaat("journal_disc_strange_statues_jn");
				break;
		
			case 2134589549:
				return joaat("journal_disc_frozen_settler_jn");
		
			default:
				break;
		}
	}

	return 0;
}

int func_128(int iParam0, int iParam1) // Position - 0xF15F Hash - 0xF3B2DCFE ^0x9CB24CD5
{
	int num;

	num = func_127(iParam0, 1, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	num = func_127(iParam0, 0, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	return 0;
}

void func_129(int iParam0, int iParam1) // Position - 0xF19C Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_298(true);

	return;
}

int func_130() // Position - 0xF1B5 Hash - 0xFA45A8A9 ^0x233CB2BD
{
	int num;

	num = 0;

	if (func_39(Global_40.f_8863.f_154, 2048))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 4096))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 8192))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 16384))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 32768))
		num = num + 1;

	return num;
}

BOOL func_131() // Position - 0xF23B Hash - 0x4A33814C ^0x6E4357BF
{
	Hash item;

	if (!func_89(joaat("document_player_journal"), 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (!func_299(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_295(Global_35, 1369124074))
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_LT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_RT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_ACTION")))
		return false;

	item = joaat("document_player_journal");

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_300(false), item, false))
		return false;

	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	func_301();
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), item, 1928812891, 1, 0, -1082130432);
	return true;
}

void func_132(Hash hParam0, int iParam1) // Position - 0xF368 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_133() // Position - 0xF37B Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_134(var uParam0, int iParam1) // Position - 0xF39A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_135(var uParam0, int iParam1) // Position - 0xF3AB Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_136(Volume volParam0, var uParam1) // Position - 0xF3C0 Hash - 0x7513460B ^0x6C9F3BDD
{
	float volumeScale;
	Vector3 volumeCoords;
	var volumeRotation;
	float heading;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	uParam1->f_6 = volumeScale.f_1;
	volumeScale = { volumeScale * { 0.5f, 0.5f, 0.5f } };
	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeRotation = { VOLUME::GET_VOLUME_ROTATION(volParam0) };
	heading = volumeRotation.f_2;
	*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, heading, -volumeScale, 0f, -volumeScale.f_2) };
	uParam1->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, heading, volumeScale, 0f, volumeScale.f_2) };
	return 1;
}

Ped func_137(Ped pedParam0) // Position - 0xF440 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_138(int iParam0) // Position - 0xF44A Hash - 0xA05361F6 ^0xF8A0FD3E
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

int func_139(int iParam0) // Position - 0xF560 Hash - 0xC25EDEC0 ^0x47BF4274
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

void func_140(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0xF647 Hash - 0x9A51185A ^0x3D24AB9E
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

	num = func_302();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_303(iParam0);
	
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

	if (func_201(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_15())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_304(Global_40.f_11095.f_35, num4, num3);
	num2 = func_302();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_305(num2);
		func_307(func_306(), false, 4000);
		func_308(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_309(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_215(func_262(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_139(14))
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
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_215(func_262(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_139(4))
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
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_311(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_262(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_312(10, 1);

	return;
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0xF9EC Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

Vector3 func_142(var uParam0, int iParam1) // Position - 0xFA4B Hash - 0xABFFD40 ^0xABFFD40
{
	switch (*uParam0)
	{
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 1010.2244f, -1764.3195f, 46.4285f;
			
				default:
					break;
			}
			break;
	
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 2793.436f, 855.1691f, 71.7447f;
			
				default:
					break;
			}
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1256.9937f, 1257.913f, 171.0152f;
			
				default:
					break;
			}
			break;
	
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -5419.692f, -3655.095f, -20f;
			
				case 1:
					return -5419.692f, -3651.995f, -20f;
			
				case 2:
					return -5419.692f, -3653.495f, -20f;
			
				case 3:
					return -5419.792f, -3655.34f, -17.72f;
			
				case 4:
					return -5419.792f, -3654.34f, -17.72f;
			
				case 5:
					return -5429.492f, -3655.095f, -20f;
			
				case 6:
					return -5429.492f, -3653.61f, -20f;
			
				default:
					break;
			}
			break;
	
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
	
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return 1772.3322f, -1360.1538f, 44.1704f;
			
				default:
					break;
			}
			break;
	
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return -3714.425f, -3602.4197f, 45.4395f;
			
				case 1:
					return -3712.339f, -3602.5674f, 44.9224f;
			
				case 2:
					return -3716.8152f, -3604.6436f, 44.6678f;
			
				case 3:
					return -3716.1108f, -3602.8372f, 46.7136f;
			
				default:
					break;
			}
			break;
	
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 2518.0403f, 564.7737f, 70.937f;
			
				case 1:
					return 2519.4395f, 562.9084f, 70.9917f;
			
				default:
					break;
			}
			break;
	
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -1330.8396f, -88.9414f, 97.5094f;
			
				case 1:
					return -1332.3485f, -87.4579f, 97.4614f;
			
				case 2:
					return -1330.415f, -89.829f, 97.5879f;
			
				default:
					break;
			}
			break;
	
		case -1714262909:
			switch (iParam1)
			{
				case 0:
					return 1763.5352f, -560.0701f, 46.6156f;
			
				default:
					break;
			}
			break;
	
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return -3815.8486f, -2982.6787f, -5.7608f;
			
				default:
					break;
			}
			break;
	
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -2261.6797f, -1433.0485f, 138.7403f;
			
				case 1:
					return -2261.0876f, -1434.1469f, 138.5787f;
			
				case 2:
					return -2261.8516f, -1433.8816f, 138.6091f;
			
				case 3:
					return -2261.2437f, -1434.466f, 138.7101f;
			
				case 4:
					return -2261.0251f, -1432.5792f, 138.68f;
			
				case 5:
					return -2260.2712f, -1432.2428f, 138.9447f;
			
				case 6:
					return -2260.3787f, -1433.973f, 138.763f;
			
				case 7:
					return -2259.7717f, -1432.7788f, 138.7855f;
			
				case 8:
					return -2262.2822f, -1433.5358f, 138.7945f;
			
				case 9:
					return -2259.818f, -1433.1466f, 138.9421f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 368.6882f, -13.6098f, 108.217f;
			
				default:
					break;
			}
			break;
	
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return 546.5995f, 1794.0698f, 127.9608f;
			
				default:
					break;
			}
			break;
	
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return -1497.5576f, 1251.0742f, 313.1244f;
			
				default:
					break;
			}
			break;
	
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -4859.858f, -2421.9177f, 7.61f;
			
				case 1:
					return -4757.666f, -2424.231f, 8.0423f;
			
				case 2:
					return -4756.033f, -2420.0654f, 7.9381f;
			
				case 3:
					return -4757.72f, -2419.8633f, 7.8109f;
			
				default:
					break;
			}
			break;
	
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return 1245.7878f, 1152.984f, 151.5137f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1122.5823f, 430.9633f, 96.2455f;
			
				case 1:
					return 1123.0244f, 430.963f, 95.7573f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2905.7234f, -254.32f, 186.8714f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.2656f, -2671.2883f, 41.17608f;
			
				case 1:
					return -1411.035f, -2671.6606f, 41.17608f;
			
				case 2:
					return -1411.4077f, -2672.6343f, 41.1746f;
			
				case 3:
					return -1413.0476f, -2671.5952f, 41.1746f;
			
				case 4:
					return -1412.8229f, -2670.6716f, 41.1746f;
			
				case 5:
					return -1412.741f, -2672.306f, 41.1746f;
			
				case 6:
					return -1413.7445f, -2671.5854f, 41.1746f;
			
				case 7:
					return -1412.5579f, -2671.8035f, 41.1746f;
			
				case 8:
					return -1412.0878f, -2671.9565f, 41.1746f;
			
				case 9:
					return -1412.3375f, -2671.5173f, 41.1746f;
			
				default:
					break;
			}
			break;
	
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 1750.49f, -2091.79f, 40.94f;
			
				default:
					break;
			}
			break;
	
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 1026.0779f, 1575.4331f, 360.6882f;
			
				case 1:
					return 1080.5111f, 1659.4072f, 372.3716f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.4628f, 763.3734f, 95.371f;
			
				default:
					break;
			}
			break;
	
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return -328.35f, -147.69f, 52.62f;
			
				case 1:
					return -328.35f, -147.69f, 52.62f;
			
				default:
					break;
			}
			break;
	
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_143())
						return 792.7722f, 1776.5087f, 281.5611f;
					else if (func_144())
						return 794.3322f, 1778.0117f, 280.3784f;
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2366.9363f, 124.0762f, 216.8527f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -6314.9263f, -3466.9836f, -10.575f;
			
				default:
					break;
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1741.3395f, -1624.2451f, 89.9356f;
			
				case 1:
					return -1755.5178f, -1624.0256f, 90.635f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2339.8865f, -2176.59f, 71.4468f;
			
				case 1:
					return -2337.0237f, -2179.8538f, 71.9464f;
			
				case 2:
					return -2343.9966f, -2181.4272f, 70.977f;
			
				default:
					break;
			}
			break;
	
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return -2222.4612f, -618.8527f, 135.3655f;
			
				case 1:
					return -2222.7349f, -616.4194f, 135.0682f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3339.9531f, -2500.892f, 1.8466f;
			
				default:
					break;
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1217.047f, 2002.6802f, 319.2006f;
			
				default:
					break;
			}
			break;
	
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return 2023.15f, -1708.104f, 40.5575f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.0276f, 1996.1902f, 168.2534f;
			
				case 1:
					return 2475.0493f, 1998.0735f, 168.2685f;
			
				case 2:
					return 2474.894f, 1999.3157f, 168.2582f;
			
				default:
					break;
			}
			break;
	
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 894.7463f, -1969.9146f, 44.5785f;
			
				case 1:
					return 1047.9557f, -1880.6714f, 45.402f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.3698f, -1769.1144f, 51.5788f;
			
				default:
					break;
			}
			break;
	
		case 1982045664:
			switch (iParam1)
			{
				case 0:
					return -2532.369f, 1173.3088f, 225.1319f;
			
				default:
					break;
			}
			break;
	
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -2334.939f, 903.981f, 157.7555f;
			
				case 1:
					return -2334.179f, 904.0247f, 157.8905f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_143() // Position - 0x1059B Hash - 0x18690106 ^0x764E08E6
{
	if (func_147(932909855))
		return true;

	return false;
}

BOOL func_144() // Position - 0x105B4 Hash - 0x18690106 ^0xE41C0B15
{
	if (func_147(2051822093))
		return true;

	return false;
}

BOOL func_145(int iParam0) // Position - 0x105CD Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_313(Global_1835011[iParam0 /*74*/].f_1);
}

int func_146() // Position - 0x105F9 Hash - 0x7FD12804 ^0x76269BD
{
	return Global_0.f_7;
}

BOOL func_147(int iParam0) // Position - 0x10606 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_314(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_148(int iParam0) // Position - 0x10655 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_106() != -1)
		return false;

	if (!func_315(iParam0))
		return false;

	return func_313(Global_1347702[iParam0 /*49*/].f_15);
}

void func_149(int iParam0) // Position - 0x10685 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_314(iParam0, 1);
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

void func_150(int iParam0) // Position - 0x1071E Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_314(iParam0, 1);
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

void func_151() // Position - 0x107A4 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_150(-939420910);
	func_150(-1187950766);
	func_150(356365161);
	func_150(753127042);
	func_150(-2038424081);
	func_150(1884271742);
	func_150(459290420);
	return;
}

void func_152() // Position - 0x107EB Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_150(704802028);
	func_150(588987611);
	func_150(2008888900);
	func_150(1649996811);
	func_150(227918160);
	func_150(168171957);
	func_150(1193080109);
	func_150(-491981251);
	func_150(-639037538);
	func_150(-618620429);
	return;
}

int func_153(int iParam0) // Position - 0x1084D Hash - 0x333EB83A ^0x37C96C1F
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 4;
	
		case 2:
			return 8;
	
		case 3:
			return 16;
	
		case 4:
			return 32;
	
		case 5:
			return 64;
	
		case 6:
			return 128;
	
		case 7:
			return 256;
	
		case 8:
			return 512;
	
		case 9:
			return 1024;
	
		case 10:
			return 2048;
	
		case 11:
			return 4096;
	
		case 12:
			return 8192;
	
		case 13:
			return 16384;
	
		case 14:
			return 32768;
	
		case 15:
			return 65536;
	
		case 16:
			return 131072;
	
		case 17:
			return 262144;
	
		case 18:
			return 524288;
	
		case 19:
			return 1048576;
	
		default:
		
	}

	return 1;
}

int func_154() // Position - 0x1094B Hash - 0xC5B83CF5 ^0x3B10C28A
{
	return Global_40.f_8863.f_148;
}

float func_155(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1095B Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_156(var uParam0) // Position - 0x10979 Hash - 0x673DBE33 ^0x81B9C336
{
	Vector3 scenarioPointCoords;
	Vector3 vector;
	float num;

	vector = { 0f, 0f, 0f };

	if (*uParam0 == -1427565340 || *uParam0 == -657632 || *uParam0 == 2135153015 || *uParam0 == -709811179)
	{
		num = 2f * 2f;
		num.f_1 = 2f * 2f;
		num.f_2 = 3f;
	}
	else
	{
		num = 2f;
		num.f_1 = 2f;
		num.f_2 = 3f;
	}

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
		scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };

	if (*uParam0 == 247563739)
	{
		scenarioPointCoords = { 2449.7822f, 2098.2131f, 172.2724f };
		vector = { 0f, 0f, -45.764f };
		num = { 3.445997f, 4.034004f, 5.6249f };
	}

	if (!_IS_NULL_VECTOR(scenarioPointCoords))
		if (!VOLUME::DOES_VOLUME_EXIST(volLocal_14))
			if (*uParam0 == 247563739)
				volLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, func_316(uParam0));
			else
				volLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, func_316(uParam0));

	return;
}

void func_157(var uParam0) // Position - 0x10A90 Hash - 0xEDE0B322 ^0xF58D5D21
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		uLocal_66.f_6[i] = 0;
	}

	switch (*uParam0)
	{
		case -1859413640:
			uLocal_66.f_6[0] = joaat("s_inv_whiskey01x");
			uLocal_66.f_6[1] = joaat("p_apple01x");
			break;
	
		case -1494823099:
			uLocal_66.f_6[0] = joaat("s_jewlerybox_sm_plain01x");
			uLocal_66.f_6[1] = joaat("s_jewlerybox_lrg_plain01x");
			break;
	
		case -1481450947:
		case -1420566543:
		case -1208846034:
		case -763376358:
		case -599506500:
		case -357364973:
		case -261997819:
		case -657632:
		case 435290930:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1424723727:
		case 1490223565:
		case 1801731633:
		case 2072029413:
			break;
	
		case -1427565340:
			uLocal_66.f_6[0] = joaat("s_urndiscoverable01x");
			uLocal_66.f_6[1] = joaat("s_shrunkenhead01x");
			break;
	
		case -1061274876:
			uLocal_66.f_6[0] = joaat("p_cs_rt_envelope01x");
			uLocal_66.f_6[1] = joaat("p_cs_rt_envelope01x");
			uLocal_66.f_6[2] = joaat("p_cs_rt_envelope01x");
			uLocal_66.f_6[3] = joaat("p_cs_rt_envelope01x");
			uLocal_66.f_6[4] = joaat("p_cs_rt_envelope01x");
			break;
	
		case -780455182:
			uLocal_66.f_6[0] = joaat("p_cs_newsclip01x");
			break;
	
		case -709811179:
			uLocal_66.f_6[0] = joaat("s_meteoriteshard01x");
			break;
	
		case 118535038:
			uLocal_66.f_6[0] = joaat("p_cs_newsclip01x");
			uLocal_66.f_6[1] = joaat("p_cs_newsclip01x");
			uLocal_66.f_6[2] = joaat("p_cs_rt_envelope01x");
			break;
	
		case 247563739:
			uLocal_66.f_6[0] = joaat("p_lnnhouse_stash02");
			break;
	
		case 373034311:
			uLocal_66.f_6[0] = joaat("p_ancientarrowhead02x");
			break;
	
		case 464413478:
			uLocal_66.f_6[0] = joaat("p_diswiskeytreebottlewind01x");
			uLocal_66.f_6[1] = joaat("p_goldnugget01x");
			break;
	
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					uLocal_66.f_6[0] = joaat("p_cs_rt_envelope01x");
					break;
			
				case 1:
					uLocal_66.f_6[0] = joaat("p_cs_rt_envelope01x");
					break;
			
				case 2:
					uLocal_66.f_6[0] = joaat("p_cs_photonudie01x_4x6");
					uLocal_66.f_6[1] = joaat("p_cs_photonudie02x_4x6");
					uLocal_66.f_6[2] = joaat("p_cs_photonudie03x_4x6");
					uLocal_66.f_6[3] = joaat("p_cs_photonudie04x_4x6");
					uLocal_66.f_6[4] = joaat("p_cs_photonudie05x_4x6");
					break;
			}
			break;
	
		case 1284679164:
			uLocal_66.f_6[0] = joaat("p_cs_letter03x");
			uLocal_66.f_6[1] = joaat("p_cs_letter03x");
			uLocal_66.f_6[2] = joaat("p_cs_letter03x");
			uLocal_66.f_6[3] = joaat("p_cs_letter03x");
			break;
	
		case 1335921989:
			uLocal_66.f_6[0] = joaat("p_foldedbillssmall01x");
			break;
	
		case 2135153015:
			uLocal_66.f_6[1] = joaat("p_cs_rt_envelope01x");
			break;
	
		default:
			break;
	}

	return;
}

void func_158(var uParam0) // Position - 0x10D65 Hash - 0x9AA4BC18 ^0xA0A1D8E6
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_6[i], false);
	}

	return;
}

int func_159(var uParam0) // Position - 0x10D9C Hash - 0xD56523FB ^0x213698E0
{
	return PED::_REQUEST_META_PED_ASSET_BUNDLE(func_317(uParam0, 0), 0);
}

Hash func_160(var uParam0, int iParam1) // Position - 0x10DB0 Hash - 0x8BAC354E ^0x12DC61A1
{
	switch (*uParam0)
	{
		case -1887999095:
			return joaat("ui_letter_grbr");
	
		case -780455182:
			return joaat("ui_doc_skatenewsp");
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return joaat("ui_note_frankenstein_1");
			
				case 1:
					return joaat("ui_note_frankenstein_2");
			
				case 2:
					return joaat("ui_note_frankenstein_3");
			
				case 3:
					return joaat("ui_note_frankenstein_4");
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return -1;
}

BOOL func_161(var uParam0) // Position - 0x10E2A Hash - 0x52DB4BA7 ^0x53C69E64
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[i]))
				return false;
	}

	return true;
}

BOOL func_162(var uParam0) // Position - 0x10E69 Hash - 0xA4D794D4 ^0x7BBF13F5
{
	if (!PED::_HAS_META_PED_ASSET_LOADED(*uParam0))
		return false;

	return true;
}

BOOL func_163(int iParam0, int iParam1) // Position - 0x10E81 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_164(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x10E90 Hash - 0x805EFBB1 ^0xE854472F
{
	if (*uParam1 == 0)
	{
		*uParam1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam2->f_6[iParam3], func_53(uParam0, iParam3), iParam4);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam1) && !ENTITY::DOES_ENTITY_EXIST(uParam2->[iParam3]))
	{
		uParam2->[iParam3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(*uParam1));
		!ENTITY::IS_ENTITY_DEAD(uParam2->[iParam3]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uParam2->[iParam3]))
		return true;

	return false;
}

void func_165(var uParam0, BOOL bParam1, int iParam2) // Position - 0x10F06 Hash - 0x53896554 ^0x5BC25850
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->[iParam2]))
		if (bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uParam0->[iParam2]);
		else
			OBJECT::DELETE_OBJECT(&uParam0->[iParam2]);

	return;
}

int func_166(Entity eParam0, Hash hParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x10F37 Hash - 0xF8F97656 ^0x28F69D8F
{
	return TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(eParam0, hParam1, fParam2, iParam5, iParam6, iParam7, bParam8);
}

BOOL func_167(var uParam0, var uParam1) // Position - 0x10F53 Hash - 0x44C32D5F ^0x44C32D5F
{
	if (!func_320(uParam1, func_317(uParam0, 0), func_53(uParam0, 0), func_66(uParam0, 0), 0, func_318(uParam0), func_319(uParam0)))
		return false;

	return true;
}

float func_168(var uParam0, int iParam1) // Position - 0x10F8C Hash - 0xD3A9BFF5 ^0xD3A9BFF5
{
	switch (*uParam0)
	{
		case -1887999095:
			return 40f;
	
		case -1859413640:
			return -162.606f;
	
		case -1481450947:
			return 0f;
	
		case -1427565340:
			return -49.4f;
	
		case -161804536:
			return -160f;
	
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -173f;
			
				case 1:
					return 0f;
			
				case 2:
					return 0f;
			
				default:
				
			}
			break;
	
		case 733338689:
			return -5.848f;
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -156f;
			
				case 1:
					return -156f;
			
				case 2:
					return 20f;
			
				case 3:
					return -142.537f;
			
				case 4:
					return 30f;
			
				default:
				
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return 108.929f;
			
				case 1:
					return -98.32f;
			
				case 2:
					return -76.119f;
			
				case 3:
					return -156.164f;
			
				default:
				
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
			
				case 1:
					return 103.5514f;
			}
			break;
	
		case 2000209669:
			return -13f;
	
		case 2072029413:
			return -155.926f;
	
		case 2135153015:
			return 3.97f;
	
		default:
			break;
	}

	return 0f;
}

int func_169(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1112A Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

Hash func_170(var uParam0, int iParam1) // Position - 0x11144 Hash - 0x233B4ECF ^0x82ED8B3
{
	switch (*uParam0)
	{
		case -1240932004:
			return joaat("pickup_weapon_revolver_doubleaction_micah");
	
		case -599506500:
			return joaat("pickup_weapon_melee_knife_civil_war");
	
		case -261997819:
			return joaat("pickup_weapon_melee_ancient_hatchet");
	
		case 425000526:
			return joaat("pickup_weapon_melee_knife_miner");
	
		case 513110082:
			return joaat("pickup_weapon_revolver_schofield_golden");
	
		case 733338689:
			return joaat("pickup_weapon_melee_hatchet_viking");
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_melee_hatchet_double_bit");
			
				case 1:
					return joaat("pickup_weapon_melee_hatchet_hewing");
			
				case 2:
					return joaat("pickup_weapon_melee_hatchet_hunter");
			
				case 3:
					return joaat("pickup_weapon_melee_hatchet_double_bit_rusted");
			
				case 4:
					return joaat("pickup_weapon_melee_hatchet_hunter_rusted");
			
				default:
					break;
			}
			break;
	
		case 1187689415:
			return joaat("pickup_weapon_single_arrow");
	
		case 1424723727:
			return joaat("pickup_weapon_melee_broken_sword");
	
		case 2072029413:
			return joaat("pickup_weapon_thrown_tomahawk_ancient");
	
		case 2072069278:
			return joaat("pickup_weapon_melee_knife_bear");
	}

	return joaat("PICKUP_CUSTOM_SCRIPT");
}

Vector3 func_171(var uParam0, int iParam1) // Position - 0x1123D Hash - 0x73769500 ^0x73769500
{
	switch (*uParam0)
	{
		case -1240932004:
			return 95f, 1f, -90f;
	
		case -599506500:
			return -88.98f, 179.087f, 84.344f;
	
		case -261997819:
			return 90f, 0f, 90f;
	
		case 425000526:
			return 180f, 0f, -75f;
	
		case 513110082:
			return 85.548f, 2.5f, -213.718f;
	
		case 733338689:
			return 90f, 0f, 0f;
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return 61.619f, 90f, 0f;
			
				case 1:
					return -3.810202f, 107.64885f, -74.03042f;
			
				case 2:
					return -0.500274f, 100.848465f, -150.51974f;
			
				case 3:
					return 5.459759f, 110.12876f, -48.05038f;
			
				case 4:
					return 0f, 103f, 46.23f;
			
				default:
					break;
			}
			break;
	
		case 1187689415:
			switch (iParam1)
			{
				case 0:
					return -37.818f, 53.906f, -130.345f;
			
				case 1:
					return -8.56f, 62.259f, -105.296f;
			
				case 2:
					return -13.446f, 23.014f, -97.164f;
			
				case 3:
					return -8.56f, 62.259f, -105.296f;
			
				case 4:
					return -171.402f, 35.692f, 84.396f;
			
				case 5:
					return 4.618f, 149.374f, -73.049f;
			
				case 6:
					return -8.56f, 62.259f, -82.994f;
			
				case 7:
					return -27.425f, 53.226f, -60.111f;
			
				case 8:
					return -45.451f, 21.768f, -58.815f;
			
				case 9:
					return -56.331f, 36.756f, -80.348f;
			
				case 10:
					return -17.416f, 47.165f, -27.809f;
			
				case 11:
					return -36.161f, 44.38f, 67.587f;
			
				case 12:
					return -27.218f, 46.355f, 81.004f;
			
				case 13:
					return -27.218f, 46.355f, 81.004f;
			
				case 14:
					return -14.257f, 43.951f, 74.951f;
			
				case 15:
					return -28.903f, 48.441f, 73.874f;
			
				case 16:
					return -41.057f, 43.138f, 86.532f;
			
				case 17:
					return -8.856f, -52.929f, 131.499f;
			
				case 18:
					return -37.857f, 35.937f, 84.612f;
			
				case 19:
					return -20.811f, 40.799f, 165.466f;
			
				case 20:
					return -43.985f, 34.145f, 148.431f;
			
				case 21:
					return -56.443f, 32.913f, 146.922f;
			
				case 22:
					return -71.981f, 42.679f, 155.987f;
			
				case 23:
					return -57.427f, 33.942f, 152.594f;
			
				case 24:
					return -25.488f, 58.05f, -173.866f;
			
				case 25:
					return -56.451f, -30.396f, 106.864f;
			
				case 26:
					return -60.238f, -32.993f, 104.798f;
			
				case 27:
					return 68.817f, -141.339f, -79.397f;
			
				case 28:
					return -67.125f, 33.397f, 75.813f;
			
				case 29:
					return 15.27f, -174.558f, 87.363f;
			
				default:
					break;
			}
			break;
	
		case 1424723727:
			return 0f, -180f, -45f;
	
		case 2072029413:
			return 90f, 90f, 15f;
	
		case 2072069278:
			return 10f, 120f, -90f;
	}

	return 0f, 0f, 0f;
}

BOOL func_172(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x11673 Hash - 0x5530E4D6 ^0x6B1B76D2
{
	if (bParam3)
	{
		while (iLocal_61 < 30)
		{
			if (!func_78(iLocal_61))
			{
				if (!OBJECT::DOES_PICKUP_EXIST(uParam1->[iLocal_61]))
				{
					if (!_IS_NULL_VECTOR(func_85(uParam0, iLocal_61)))
					{
						func_40(&iLocal_60, 2);
						uParam1->[iLocal_61] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, uParam0->f_4), func_85(uParam0, iLocal_61), func_171(uParam0, iLocal_61), iLocal_60, -1, 0, true, 0, 0, 0, 0);
					}
				}
			}
		
			iLocal_61 = iLocal_61 + 1;
		}
	
		func_321(uParam2, 2);
		return true;
	}
	else
	{
		switch (*uParam2)
		{
			case 0:
				func_321(uParam2, 1);
				break;
		
			case 1:
				if (iLocal_61 < 30)
				{
					if (!func_78(iLocal_61))
					{
						if (!OBJECT::DOES_PICKUP_EXIST(uParam1->[iLocal_61]))
						{
							if (!_IS_NULL_VECTOR(func_85(uParam0, iLocal_61)))
							{
								func_40(&iLocal_60, 2);
								uParam1->[iLocal_61] = OBJECT::CREATE_PICKUP_ROTATE(func_170(uParam0, uParam0->f_4), func_85(uParam0, iLocal_61), func_171(uParam0, iLocal_61), iLocal_60, -1, 0, true, 0, 0, 0, 0);
							}
						}
					}
				
					iLocal_61 = iLocal_61 + 1;
				}
				else
				{
					func_321(uParam2, 2);
				}
				break;
		
			case 2:
				return true;
		}
	}

	return false;
}

BOOL func_173(var uParam0, var uParam1) // Position - 0x1179D Hash - 0x5406D8BC ^0x5406D8BC
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!func_67(uParam1, func_53(uParam0, i), func_66(uParam0, i), i))
			return false;
	}

	return true;
}

int func_174(var uParam0, int iParam1) // Position - 0x117DA Hash - 0x5C2800EF ^0x53AA5385
{
	int scenario;

	if (!(func_87(uParam0, iParam1) == 0))
	{
		scenario = func_169(func_87(uParam0, iParam1), func_86(uParam0, iParam1), func_168(uParam0, iParam1), 0, 0, false);
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
			return scenario;
	}

	return 0;
}

void func_175(var uParam0) // Position - 0x11820 Hash - 0xBC16CD98 ^0xD438D341
{
	if (PED::_HAS_META_PED_ASSET_LOADED(*uParam0))
		PED::_RELEASE_META_PED_ASSET_REQUEST(*uParam0);

	return;
}

char* func_176(var uParam0) // Position - 0x11839 Hash - 0x59828FF5 ^0x9A8B71C1
{
	switch (*uParam0)
	{
		case -763376358:
			return "DISCO_MASK_AM";
	
		case -739986731:
			return "DISCO_MASK_PR";
	
		case 733338689:
		case 2134589549:
			return "DISCO_HELMET";
	
		case 1490223565:
			return "DISCO_MASK_RAM";
	
		case 1801731633:
			return "DISCO_MASK_CAT";
	
		default:
			break;
	}

	return "";
}

void func_177(var uParam0) // Position - 0x1189B Hash - 0x93F963FC ^0xACA24FF2
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
			TASK::_DELETE_SCENARIO_POINT(uParam0->[i]);
	}

	return;
}

BOOL func_178(Hash hParam0, int iParam1) // Position - 0x118CE Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_179(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x118E8 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_106() == -1)
	{
		if (func_322(hParam0) && func_323(hParam0))
		{
			func_324(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_180(Hash hParam0, var uParam1, int iParam2) // Position - 0x1193F Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_325(hParam0, uParam1);
	unk = { func_326(hParam0, false, true) };
	num = func_327(hParam0, &unk, false, false);
	num2 = func_328(hParam0, false);

	if (num > 1 && !func_329() && num2 + iParam2 >= num)
		if (func_199(hParam0, -2051813666))
			func_189(583, true);
		else
			func_189(582, false);

	if (func_330(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_181(Hash hParam0, BOOL bParam1) // Position - 0x119DB Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_331(hParam0, -949239683))
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

int func_182(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11A87 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_178(hParam0, 0))
		return 0;

	num = func_198(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_264(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_332(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_300(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_183(Hash hParam0) // Position - 0x11B09 Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_106() != -1)
		return false;

	return func_184(hParam0) != 0;
}

Hash func_184(Hash hParam0) // Position - 0x11B25 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_333(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_334(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_185(Hash hParam0) // Position - 0x11B61 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_186(Hash hParam0) // Position - 0x11B6F Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_333(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_185(collectableItemHash))
			if (func_89(func_334(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_187(Hash hParam0) // Position - 0x11BBC Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_335(48);
	func_37(false, -1);
	return;
}

BOOL func_188(int iParam0) // Position - 0x11BD7 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_106() != -1)
		return false;

	return func_107(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_189(int iParam0, BOOL bParam1) // Position - 0x11BFA Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_336(iParam0, &num, &num2);

	if (!func_337(iParam0, num, num2, bParam1))
		return;

	func_338(num, num2);
	return;
}

int func_190(Hash hParam0) // Position - 0x11C27 Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_191(Hash hParam0) // Position - 0x11C3A Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_192(int iParam0) // Position - 0x11C4D Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_106() != -1)
		return false;

	return func_107(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_193(int iParam0) // Position - 0x11C70 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_106() != -1)
		return false;

	if (!func_315(iParam0))
		return false;

	return func_313(Global_1347702[iParam0 /*49*/].f_15);
}

int func_194() // Position - 0x11CA0 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_89(func_339(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_195(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x11CD5 Hash - 0x2D6CF941 ^0x7B061B15
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
		
			if (func_133() && func_193(38) || func_188(38))
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
			if (func_133() && func_193(39) || func_188(39))
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
			if (func_133() && func_193(41) || func_188(41))
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
			num = func_340(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_133() && func_193(49) || func_188(49))
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
			num = func_340(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_341(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_342(iParam0, hash, hash2);
	func_343(iParam0, hash, unk, str5, str4);
	func_344(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_345(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_346(iParam0, hash, hash2, iParam6);
	func_347(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_196(int iParam0) // Position - 0x12112 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_197(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x12129 Hash - 0xD806FABF ^0xE24D9A97
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
		
			if (func_133() && func_193(38) || func_188(38))
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
		
			if (func_133() && func_193(39) || func_188(39))
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
		
			if (func_133() && func_193(49) || func_188(49))
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
		if (func_133() && func_193(38) || func_188(38))
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
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_349(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_191(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_133() && func_193(39) || func_188(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_133() && func_193(49) || func_188(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

int func_198(Hash hParam0) // Position - 0x126D6 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_178(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_199(Hash hParam0, Hash hParam1) // Position - 0x12701 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_200(Hash hParam0, int iParam1) // Position - 0x12732 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_178(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_201(int iParam0) // Position - 0x12751 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_350(iParam0))
		return false;

	return func_351(iParam0);
}

void func_202(int iParam0) // Position - 0x1276D Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_350(iParam0))
		return;

	func_352(iParam0);
	func_353(iParam0);
	return;
}

Hash func_203(Hash hParam0) // Position - 0x1278E Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_178(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_204(Hash hParam0, BOOL bParam1) // Position - 0x127B9 Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_178(hash, 0))
		if (bParam1)
			if (func_354(hash) || func_75(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_205(Hash hParam0, BOOL bParam1) // Position - 0x1293F Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_178(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

BOOL func_206(BOOL bParam0) // Position - 0x1296B Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_106() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_300(bParam0));
}

BOOL func_207(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x12989 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_326(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_355(398 + i, 1);
		
			if (func_356(hParam0, &unk, hash, false))
			{
				if (func_357(hParam0, &unk6, hash))
				{
					unk28 = { func_358(hParam0, unk, hash, false) };
					func_359(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_206(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_208(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_360(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_208(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x12ADB Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_210(hParam0))
		return false;

	if (!func_206(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_209(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12B16 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_205(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_106() == -1)
		{
			func_76(weaponHash);
		
			if (hParam1 == 1248274121)
				func_361(weaponHash);
		}
	
		if (!func_330(hParam0, &unk, 1, false, false))
		{
			func_324(hParam0, 1, false, uParam2, hParam1);
			num = func_362(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_207(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_207(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_207(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_15())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_363(weaponHash))
				{
					func_207(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_207(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_364(Global_35, 2, false, true);
			
				if (func_260(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_201(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_260(weaponHash2) && func_201(24))
					if (!func_207(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_207(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_207(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_189(480, true);

	return true;
}

BOOL func_210(Hash hParam0) // Position - 0x12D22 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_211(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x12D30 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_210(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_260(weaponTypeFromAmmoType))
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

	if (func_89(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_247(func_365(hParam0), func_246(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_106() == -1)
			if (func_107(Global_1835011[14 /*74*/].f_1, true))
				func_189(416, false);

	if (num == 0)
		return false;

	if (func_206(false))
	{
		if (func_208(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_252(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_212(Hash hParam0) // Position - 0x12E79 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_366() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_367(Global_35, hParam0, &unk))
			func_231(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_237();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_237();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_235();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_233();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_237();
			break;
	}

	return;
}

void func_213(Hash hParam0) // Position - 0x12F80 Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_368();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_235();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_94();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_233();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_236();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_234();
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
			func_237();
			break;
	}

	return;
}

struct<2> func_214(int iParam0) // Position - 0x1316B Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_215(var uParam0, var uParam1, int iParam2) // Position - 0x1317D Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_216(int iParam0, int iParam1) // Position - 0x1318D Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_217(Hash hParam0) // Position - 0x131A3 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_199(hParam0, -2017733358);

	if (func_369() < 3)
		if (flag)
			if (func_371(func_370(hParam0), hParam0))
				func_247(79, func_246(func_370(hParam0)), true);
			else
				func_247(78, func_246(func_370(hParam0)), true);
		else
			func_247(80, func_246(func_372(hParam0)), true);

	return;
}

BOOL func_218() // Position - 0x13210 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_373(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_373(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_373(joaat("document_arthur_high_bounty_1"), 400) || func_373(joaat("document_arthur_high_bounty_2"), 400) || func_373(joaat("document_arthur_has_poster_1"), 400) || func_373(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_219(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x13286 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_374(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_270(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_271(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_220(Hash hParam0) // Position - 0x132CD Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_195(43, 0, 0, joaat("exotic_stage_01"), func_379(1), false, -1, false);
			func_380(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_195(39, 0, 0, 0, 0, false, 1, false);
			func_197(39, 0, 0, 0, 0, -1, 0);
			func_376(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_195(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_197(51, 0, 0, 0, 0, -1, 0);
			func_375(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_195(43, 0, 0, joaat("exotic_stage_02"), func_379(2), false, -1, false);
			func_380(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_195(43, 0, 0, joaat("exotic_stage_03"), func_379(4), false, -1, false);
			func_380(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_195(49, 0, 0, 0, 0, false, 1, false);
			func_197(49, 0, 0, 0, 0, -1, 0);
			func_378(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_195(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_197(51, 0, 0, 0, 0, -1, 0);
			func_375(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_195(41, 0, 0, 0, 0, false, 1, false);
			func_197(41, 0, 0, 0, 0, -1, 0);
			func_377(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_195(43, 0, 0, joaat("exotic_stage_05"), func_379(16), false, -1, false);
			func_380(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_195(43, 0, 0, joaat("exotic_stage_04"), func_379(8), false, -1, false);
			func_380(8);
			break;
	}

	return;
}

void func_221(Hash hParam0) // Position - 0x13463 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_381() == 1)
	{
		if (func_188(39))
		{
			func_189(342, false);
		}
		else
		{
			func_189(343, false);
			func_376(1);
		}
	}

	if (func_381() >= 30)
		func_189(344, false);

	func_195(39, 0, 0, 0, 0, false, -1, false);
	func_197(39, 0, 0, func_381(), 30, 1, 0);
	return;
}

void func_222(Hash hParam0) // Position - 0x134C2 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_382() == 1)
	{
		if (func_188(49))
		{
			func_189(409, false);
		}
		else
		{
			func_189(410, false);
			func_378(1);
		}
	}

	if (func_382() >= 10)
		func_189(411, false);

	func_195(49, 0, 0, 0, 0, false, -1, false);
	func_197(49, 0, 0, func_382(), 10, 1, 0);
	return;
}

void func_223(Hash hParam0) // Position - 0x13521 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_189(438, false);
			func_383(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_195(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_197(51, 0, 0, num, func_340(joaat("taxidermy_order_05"), 20), 1, 0);
			func_375(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_383(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_195(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_197(51, 0, 0, num, func_340(joaat("taxidermy_order_04"), 20), 1, 0);
			func_375(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_383(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_195(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_197(51, 0, 0, num, func_340(joaat("taxidermy_order_03"), 20), 1, 0);
			func_375(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_189(437, false);
			func_189(440, false);
			func_383(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_195(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_197(51, 0, 0, num, func_340(joaat("taxidermy_order_01"), 20), 1, 0);
			func_375(1);
			func_55(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_383(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_195(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_197(51, 0, 0, num, func_340(joaat("taxidermy_order_02"), 20), 1, 0);
			func_375(8);
			break;
	
		default:
			func_189(439, false);
			break;
	}

	return;
}

void func_224() // Position - 0x1370F Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_225(Hash hParam0, int iParam1) // Position - 0x13733 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_106() == -1)
	{
		if (!func_188(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_189(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_189(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_189(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_189(400, false);
		}
		else if (func_199(hParam0, 412399755))
		{
			func_384(joaat("exotic_stage_01"));
		
			if (func_385() == 0)
			{
				func_37(false, 10);
				num2 = func_386(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_387(hParam0) < func_388(hParam0))
					{
						func_195(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_197(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_188(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_189(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_189(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_189(401, false);
		}
		else if (func_199(hParam0, 709057512))
		{
			func_384(joaat("exotic_stage_02"));
		
			if (func_385() == 1)
			{
				func_37(false, 10);
				num2 = func_386(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_387(hParam0) < func_388(hParam0))
					{
						func_195(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_197(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_188(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_189(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_189(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_189(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_189(398, false);
		}
		else if (func_199(hParam0, -1478961327))
		{
			func_384(joaat("exotic_stage_03"));
		
			if (func_385() == 2)
			{
				func_37(false, 10);
				num2 = func_386(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_389(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_390(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_335(48);
					}
				
					if (func_387(hParam0) < func_388(hParam0))
					{
						func_195(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_197(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_387(hParam0) < func_388(hParam0))
					{
						func_195(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_197(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_188(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_189(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_189(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_189(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_189(406, false);
		}
		else if (func_199(hParam0, -1238404098))
		{
			func_384(joaat("exotic_stage_04"));
		
			if (func_385() == 3)
			{
				func_37(false, 10);
				num2 = func_386(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_387(hParam0) < func_388(hParam0))
					{
						func_195(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_197(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_188(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_189(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_189(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_189(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_189(403, false);
		}
		else if (func_199(hParam0, 1160548794))
		{
			func_384(joaat("exotic_stage_05"));
		
			if (func_385() == 4)
			{
				func_37(false, 10);
				num2 = func_386(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_387(hParam0) < func_388(hParam0))
					{
						func_195(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_197(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_226(Hash hParam0) // Position - 0x13C4C Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_389(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_390(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_335(48);
		}
	}

	return;
}

void func_227(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13C8C Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_89(func_391(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_392(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_393(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_228(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x13CEC Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_106() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_219(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_219(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_219(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_219(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_219(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_219(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_219(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_219(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_219(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_394())
				func_219(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_219(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_219(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_219(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_219(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_219(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_219(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_219(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_219(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_219(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_219(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_219(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_219(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_219(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_219(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_219(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_219(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_219(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_229(Hash hParam0) // Position - 0x140C6 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_188(41))
		func_189(363, false);
	else
		func_189(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_395(joaat("legendary_fish_02"));
			func_396(joaat("legendary_fishing_spot_02"));
			func_397(joaat("legendary_fishing_spot_02"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_395(joaat("legendary_fish_06"));
			func_396(joaat("legendary_fishing_spot_06"));
			func_397(joaat("legendary_fishing_spot_06"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_395(joaat("legendary_fish_13"));
			func_396(joaat("legendary_fishing_spot_13"));
			func_397(joaat("legendary_fishing_spot_13"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_395(joaat("legendary_fish_03"));
			func_396(joaat("legendary_fishing_spot_03"));
			func_397(joaat("legendary_fishing_spot_03"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_395(joaat("legendary_fish_08"));
			func_396(joaat("legendary_fishing_spot_08"));
			func_397(joaat("legendary_fishing_spot_08"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_395(joaat("legendary_fish_12"));
			func_396(joaat("legendary_fishing_spot_12"));
			func_397(joaat("legendary_fishing_spot_12"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_395(joaat("legendary_fish_05"));
			func_396(joaat("legendary_fishing_spot_05"));
			func_397(joaat("legendary_fishing_spot_05"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_395(joaat("legendary_fish_04"));
			func_396(joaat("legendary_fishing_spot_04"));
			func_397(joaat("legendary_fishing_spot_04"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_395(joaat("legendary_fish_14"));
			func_396(joaat("legendary_fishing_spot_14"));
			func_397(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_395(joaat("legendary_fish_09"));
			func_396(joaat("legendary_fishing_spot_09"));
			func_397(joaat("legendary_fishing_spot_09"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_395(joaat("legendary_fish_07"));
			func_396(joaat("legendary_fishing_spot_07"));
			func_397(joaat("legendary_fishing_spot_07"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_395(joaat("legendary_fish_01"));
			func_396(joaat("legendary_fishing_spot_01"));
			func_397(joaat("legendary_fishing_spot_01"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_395(joaat("legendary_fish_11"));
			func_396(joaat("legendary_fishing_spot_11"));
			func_397(joaat("legendary_fishing_spot_11"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_395(joaat("legendary_fish_10"));
			func_396(joaat("legendary_fishing_spot_10"));
			func_397(joaat("legendary_fishing_spot_10"));
			func_37(false, 10);
			break;
	}

	return;
}

void func_230(Hash hParam0, var uParam1) // Position - 0x14345 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_398(hParam0, uParam1, &unk);
	return;
}

int func_231(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x14357 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_326(hParam1, true, false) };
		iParam3 = func_399(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_401(hParam1, hParam2, func_400(iParam3, 1), bParam4, bParam9))
		return 0;

	func_402(true, func_106() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_404(32768) && hParam1 != Global_1946054.f_57[func_400(iParam3, 1) /*11*/])
			{
				func_405();
				func_403(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_400(iParam3, 1) /*11*/])
				func_403(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_403(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_406(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_403(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_407(0);
			func_408(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_403(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_232(var uParam0, BOOL bParam1) // Position - 0x144C6 Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_364(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_364(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_409("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_410(&unk, i, num, num2))
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
	
		func_411(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_233() // Position - 0x1458F Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_234() // Position - 0x145A9 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_235() // Position - 0x145DE Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_236() // Position - 0x145FA Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_237() // Position - 0x14614 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_412();
	func_413();
	func_414();
	return;
}

void func_238(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1462B Hash - 0x968DA278 ^0x672374F6
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

void func_239(int iParam0, BOOL bParam1) // Position - 0x14A03 Hash - 0x922C415B ^0xD0687435
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
	func_280(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_240(int iParam0) // Position - 0x14B19 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_241(int iParam0) // Position - 0x14B34 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_242(int iParam0) // Position - 0x14B4F Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_243(int iParam0) // Position - 0x14B6A Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_244(int iParam0) // Position - 0x14B85 Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_245(int iParam0) // Position - 0x14BA0 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_246(Hash hParam0) // Position - 0x14BBB Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_178(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_247(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x14BD4 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_336(iParam0, &num, &num2);

	if (!func_337(iParam0, num, num2, bParam2))
		return;

	if (!func_415(iParam0, 1024))
		return;

	func_338(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_248(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14C34 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_336(iParam0, &num, &num2);

	if (!func_337(iParam0, num, num2, bParam2))
		return;

	if (!func_415(iParam0, 1024))
		return;

	func_338(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_249() // Position - 0x14CAF Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_333())
		return func_250();

	endRange = func_333() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_333(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_416(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_334(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_250() // Position - 0x14D29 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_333());
	return func_334(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_251(var uParam0) // Position - 0x14D4C Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_252(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x14DA1 Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_178(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_326(hParam0, false, true) };
	unk6 = { func_358(hParam0, unk, unk.f_4, false) };
	return func_417(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_253(Hash hParam0) // Position - 0x14DF0 Hash - 0x90E372CB ^0xEE55522E
{
	int num;
	Hash hash;
	Hash hash2;

	if (func_106() != -1)
		return;

	switch (func_203(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_403(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			num = func_419(hParam0);
		
			if (func_420(num))
				func_421(num, num >= 0 && num <= 5, true);
			else
				func_403(30, hParam0, 0, 0, false);
		
			if (func_422() == -2125499975 || func_422() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_403(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_422() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_403(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_423(-525676072, false))
				if (func_424(-525676072, &hash))
					func_403(33, hash, 0, 0, false);
		
			func_403(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_418(81053684, false) <= 0)
				func_403(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_425(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_231(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_202(24);
	
		if (func_232(&hash2, false))
			func_207(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_254(Hash hParam0) // Position - 0x14FC2 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_199(hParam0, 943695443))
		func_426(0, hParam0);
	else if (func_199(hParam0, -2096528786))
		func_426(1, hParam0);
	else if (func_199(hParam0, -1094167013))
		func_426(2, hParam0);
	else if (func_199(hParam0, 1936654645))
		func_426(3, hParam0);
	else if (func_199(hParam0, 1306489306))
		func_426(4, hParam0);
	else if (func_199(hParam0, 435762317))
		func_426(5, hParam0);
	else if (func_199(hParam0, 1259363210))
		func_426(6, hParam0);
	else if (func_199(hParam0, 881398259))
		func_426(7, hParam0);
	else if (func_199(hParam0, -541549214))
		func_426(8, hParam0);
	else if (func_199(hParam0, 130796156))
		func_426(-1, hParam0);

	return;
}

int func_255(Hash hParam0, int iParam1) // Position - 0x150B8 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_427(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_428(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_256(Hash hParam0) // Position - 0x150E1 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_178(hParam0, 0))
		return unk;

	if (func_199(hParam0, -305066475))
		if (func_106() == -1)
			if (func_199(hParam0, -537818634))
				return func_262(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_262(joaat("deadeye_items"));
	else if (func_199(hParam0, -537818634))
		return func_262(joaat("medicine_items"));

	if (func_199(hParam0, 2084895747))
		return func_262(joaat("lock_breaker_items"));

	return unk3;
}

void func_257(Hash hParam0) // Position - 0x15175 Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_106() == -1)
				if (func_107(Global_1835011[4 /*74*/].f_1, true))
					func_189(109, true);
			break;
	}

	return;
}

void func_258(Hash hParam0, int iParam1) // Position - 0x151AE Hash - 0x3053C451 ^0x972745FC
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(func_429(0));
	func_311(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_431(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_259(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x151EE Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_178(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_432())
	{
		func_433(hParam0, iParam1, bParam2, bParam4);
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
		if (bParam3 || bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_200(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_198(hParam0);
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
	else if (!func_435(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_436(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_246(hParam0)), num), num5);

	if (iParam1 == 1 || func_199(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_246(hParam0));

	func_311(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

BOOL func_260(Hash hParam0) // Position - 0x15443 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_261(int iParam0) // Position - 0x1545E Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1861313914:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	}

	return false;
}

struct<2> func_262(int iParam0) // Position - 0x1558A Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

BOOL func_263(Hash hParam0, int iParam1) // Position - 0x1559A Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_178(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_264(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_409("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_410(&unk, i, num, num2))
			{
			}
			else if (!func_260(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_411(num);
				return true;
			}
		}
	
		func_411(num);
	}

	return false;
}

Hash func_264(Hash hParam0, int iParam1) // Position - 0x15642 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_178(hParam0, 0))
		return 0;

	num = func_198(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_199(hParam0, 1399091007))
	{
		func_398(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_265(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x156BC Hash - 0x17E58D7C ^0xB0311DE1
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_437(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_439(&unk, func_438(false));

	if (!func_440(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_410(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_359(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_411(num);
	num3 < iParam1;
	return true;
}

BOOL func_266(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x15787 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_178(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_326(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_441(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_358(hParam0, unk, unk.f_4, bParam4) };
	return func_359(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_267(Hash hParam0, int iParam1) // Position - 0x157F8 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_199(hParam0, 606799272))
			func_442(hParam0, iParam1);
	
		if (func_199(hParam0, -1112814642) && func_199(hParam0, -1697809989))
			func_227(hParam0, iParam1, true, false);
	}

	return;
}

Hash func_268(int iParam0) // Position - 0x1584B Hash - 0xB8EC44B7 ^0xC091C19D
{
	switch (iParam0)
	{
		case -2060865802:
			return -1988847961;
	
		case -1960242214:
			return 66159563;
	
		case -1300082860:
			return -1212881551;
	
		case -1240932004:
			return -875696111;
	
		case -1109016944:
			return -2011320133;
	
		case -920971071:
			return 1582457845;
	
		case -919236330:
			return 539572870;
	
		case -654238687:
			return 2056389698;
	
		case -232974724:
			return -942443338;
	
		case 149709049:
			return 2021420613;
	
		case 247563739:
			return 1352537560;
	
		case 683269210:
			return 993246734;
	
		case 918206817:
			return -1262808306;
	
		case 1347913620:
			return 460210291;
	
		case 1464664327:
			return 387869270;
	
		case 1673499939:
			return 1195199040;
	
		default:
		
	}

	return 0;
}

Object func_269(var uParam0, char* sParam1) // Position - 0x1593C Hash - 0x6682397D ^0x2F8F8566
{
	Object objectIndexFromEntityIndex;
	Entity propForScenarioPoint;

	if (!ENTITY::DOES_ENTITY_EXIST(objectIndexFromEntityIndex))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(*uParam0))
		{
			propForScenarioPoint = TASK::GET_PROP_FOR_SCENARIO_POINT(*uParam0, sParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(propForScenarioPoint))
				objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(propForScenarioPoint);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(objectIndexFromEntityIndex))
		return objectIndexFromEntityIndex;

	return 0;
}

void func_270(int iParam0, const char* sParam1, int iParam2) // Position - 0x15986 Hash - 0x4DF85B80 ^0x16FAA548
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_311(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_271(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x159C7 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_443())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_311(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_444(num);
			func_445(num, 0, 0);
		}
	
		func_311(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_215(func_262(joaat("CAREER_CASH")), value);
	}

	return;
}

Hash func_272(int iParam0) // Position - 0x15AA3 Hash - 0x90805A70 ^0xAEDD9943
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case -321841939:
			str = "DISCO_DREAM";
			break;
	
		default:
			break;
	}

	return MISC::GET_HASH_KEY(str);
}

Hash func_273(int iParam0) // Position - 0x15AD1 Hash - 0x5F2677C1 ^0x86151432
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_dream");
	}

	return 0;
}

Hash func_274(int iParam0) // Position - 0x15AF3 Hash - 0x5F2677C1 ^0xDA753628
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_drm_desc");
	}

	return 0;
}

 func_275(int iParam0) // Position - 0x15B15 Hash - 0x5F2677C1 ^0x603D5BDE
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_dc_found");
	}

	return 0;
}

 func_276(int iParam0) // Position - 0x15B37 Hash - 0x5F2677C1 ^0xD8AB34AE
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_drm_obj");
	}

	return 0;
}

char* func_277(int iParam0, int iParam1) // Position - 0x15B59 Hash - 0xFC08CBAB ^0x538CFB53
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "TOAST_DREAMCATCHER";
			
				case 1:
					return "MISSION_COLLECTDREAM";
			
				default:
					break;
			}
			break;
	}

	return "";
}

char* func_278(int iParam0, int iParam1) // Position - 0x15B98 Hash - 0xFC08CBAB ^0xD1F9744C
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "hud_toasts";
			
				case 1:
					return "SP_MISSIONS_13";
			
				default:
					break;
			}
			break;
	}

	return "";
}

char* func_279(int iParam0, int iParam1) // Position - 0x15BD7 Hash - 0xFC08CBAB ^0xBC735702
{
	switch (iParam0)
	{
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return "DISCO_DRM_CHECK1";
			
				case 1:
					return "DISCO_DRM_CHECK2";
			
				default:
					break;
			}
			break;
	}

	return "";
}

int func_280(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x15C16 Hash - 0x51CE9407 ^0x19439D00
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

void func_281(var uParam0) // Position - 0x15C8D Hash - 0xD92E8622 ^0xC498A336
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[i]);
	}

	return;
}

int func_282(int iParam0) // Position - 0x15CC3 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_446(iParam0))
		return -1;

	return func_447(iParam0);
}

void func_283(int iParam0) // Position - 0x15CDF Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_448(iParam0))
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

char* func_284(var uParam0) // Position - 0x15D92 Hash - 0x8601690B ^0x5BD0837C
{
	switch (*uParam0)
	{
		case -1761578407:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_GRAVE_ARTHUR_I";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_GRAVE_JENNY_I";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_GRAVE_HOSEA_I";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_GRAVE_LENNY_I";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_GRAVE_SEAN_I";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_GRAVE_DAVEY_I";
			else if (uParam0->f_4 == 6)
				return "DISC_VOL_GRAVE_KIERAN_I";
			else if (uParam0->f_4 == 7)
				return "DISC_VOL_GRAVE_SUSAN_I";
			else if (uParam0->f_4 == 8)
				return "DISC_VOL_GRAVE_EAGLE_I";
			break;
	
		case -1243267511:
			return "DISC_VOL_FACE_TREES_I";
	
		case -890175011:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_VAMP_CLUES_1_I";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_VAMP_CLUES_2_I";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_VAMP_CLUES_3_I";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_VAMP_CLUES_4_I";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_VAMP_CLUES_5_I";
			break;
	
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND_I";
	
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR_I";
	
		case 677950956:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_AZTEC_CLUES_1_I";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_AZTEC_CLUES_2_I";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_AZTEC_CLUES_3_I";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_AZTEC_CLUES_4_I";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_AZTEC_CLUES_5_I";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_AZTEC_CLUES_6_I";
			break;
	
		case 1535254161:
			return "DISC_VOL_CIV_WAR_I";
	}

	return "";
}

float func_285() // Position - 0x15F59 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_286(var uParam0, int iParam1) // Position - 0x15F8B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_287(var uParam0, int iParam1) // Position - 0x15F9C Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_288(int iParam0, int iParam1) // Position - 0x15FB1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_289() // Position - 0x15FC0 Hash - 0xD50A7FC ^0x92986A81
{
	if (PED::IS_PED_HOGTIED(Global_35))
		return false;

	if (PED::IS_PED_HOGTYING(Global_35))
		return false;

	if (PED::IS_PED_LASSOED(Global_35))
		return false;

	if (PED::IS_PED_BEING_DRAGGED(Global_35))
		return false;

	if (!(PED::_GET_LASSO_TARGET(Global_35) == 0))
		return false;

	if (PED::_IS_PED_DRAGGING(Global_35))
		return false;

	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_35))
		return false;

	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
		return false;

	return true;
}

BOOL func_290() // Position - 0x16060 Hash - 0x52218EDE ^0x68EAB229
{
	if (PED::_IS_PED_SLIDING(Global_35))
		return false;

	if (PED::IS_PED_SWIMMING(Global_35))
		return false;

	if (PED::IS_PED_CLIMBING(Global_35))
		return false;

	if (func_449(Global_35))
		return false;

	if (PED::IS_PED_FALLING(Global_35))
		return false;

	if (PED::IS_PED_FALLING_OVER(Global_35))
		return false;

	if (PED::IS_PED_RAGDOLL(Global_35))
		return false;

	if (PED::IS_PED_VAULTING(Global_35))
		return false;

	if (TASK::IS_PED_RUNNING(Global_35))
		return false;

	if (TASK::IS_PED_GETTING_UP(Global_35))
		return false;

	return true;
}

BOOL func_291() // Position - 0x160F5 Hash - 0xD14A8C13 ^0x8AD85514
{
	if (func_450(Global_35) && !Global_1392040.f_2)
		return false;

	if (func_451(Global_35) && !Global_1392040.f_2)
		return false;

	return true;
}

BOOL func_292(BOOL bParam0) // Position - 0x16132 Hash - 0x19762284 ^0x381345C0
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_452("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_293(int iParam0) // Position - 0x1616A Hash - 0xEEF44B5 ^0x85627F39
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			return false;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				return false;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				return false;
		}
	
		if (!func_288(iParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35) && VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35)
			return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_453(iParam0))
			return false;
	}

	return true;
}

BOOL func_294() // Position - 0x16242 Hash - 0xFFDF5CA4 ^0x50D2CF98
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
		return false;

	return true;
}

BOOL func_295(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x16259 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_296(int iParam0, int iParam1) // Position - 0x16282 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_297(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x162A3 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = iParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = pedParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
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
	func_122(iParam0, true);
	func_454(iParam0, true);
	func_455(iParam0, 128);
	return;
}

void func_298(BOOL bParam0) // Position - 0x16549 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_456(&(Global_40.f_12019.f_42), 1);
	else
		func_457(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_299(int iParam0) // Position - 0x16573 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_458(iParam0);
}

int func_300(BOOL bParam0) // Position - 0x16581 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_106() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_301() // Position - 0x165C2 Hash - 0x5808700A ^0x37855CE9
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_LT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_RT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_ACTION"), false);
	return;
}

int func_302() // Position - 0x16617 Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_459();

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

int func_303(int iParam0) // Position - 0x1672A Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_106() != -1)
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

int func_304(int iParam0, int iParam1, int iParam2) // Position - 0x167CF Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_305(int iParam0) // Position - 0x167F4 Hash - 0xEE599357 ^0xEE599357
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

Hash func_306() // Position - 0x168AB Hash - 0xA46C8CCA ^0x71ABACD2
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

void func_307(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x16A03 Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_461(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_462(hParam0);
	return;
}

void func_308(int iParam0) // Position - 0x16A2F Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_463(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_309(BOOL bParam0) // Position - 0x16A93 Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_464(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_465(i, &hash, &num))
			{
				if (!func_178(hash, 0))
				{
				}
				else
				{
					unlockHash = func_466(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_198(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_302() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_302() >= 160;
					else
						flag = num == func_467();
				
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

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x16B54 Hash - 0xA17D549C ^0x9436153B
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

int func_311(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x16CA0 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_468(sParam0, sParam1, hParam2);
	return num2;
}

int func_312(int iParam0, int iParam1) // Position - 0x16D03 Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_469(iParam0))
		return 0;

	if (!func_133())
		return 0;

	if (!func_470(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_313(int iParam0) // Position - 0x16D5E Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_282(iParam0);
	return num == 3 || num == 4;
}

int func_314(int iParam0, int iParam1) // Position - 0x16D7C Hash - 0x8FA0E29 ^0xC3F68E87
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

BOOL func_315(int iParam0) // Position - 0x17E95 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

char* func_316(var uParam0) // Position - 0x17EAB Hash - 0x13B4C5A8 ^0x45514017
{
	switch (*uParam0)
	{
		case -1859413640:
			return "DISC_VOL_SHRINE_FOR_WIFE";
	
		case -1494823099:
			return "DISC_VOL_BLACK_FLOWER";
	
		case -1481450947:
			return "DISC_VOL_ABANDONED_WELL";
	
		case -1427565340:
			return "DISC_VOL_ANCIENT_URN";
	
		case -1420566543:
			return "DISC_VOL_SCARECROW_1";
	
		case -1208846034:
			return "DISC_VOL_SCARECROW_2";
	
		case -1061274876:
			return "DISC_VOL_MAIL_WAGON";
	
		case -780455182:
			return "DISC_VOL_DEFACED_GRAVE";
	
		case -763376358:
			return "DISC_VOL_ANIMAL_MASK";
	
		case -709811179:
			return "DISC_VOL_METEORITE";
	
		case -599506500:
			return "DISC_VOL_CIVIL_WAR_SWORD";
	
		case -357364973:
			return "DISC_VOL_PIRATE_RUM";
	
		case -261997819:
			return "DISC_VOL_ANCIENT_CLUB";
	
		case -657632:
			return "DISC_VOL_RAILROAD_GRAVESTONE";
	
		case 118535038:
			return "DISC_VOL_MICAH_CAMP";
	
		case 247563739:
			return "DISC_VOL_ABANDON_TRADING_POST";
	
		case 373034311:
			return "DISC_VOL_ANCIENT_ARROWS";
	
		case 435290930:
			return "DISC_VOL_BIRD_NEST";
	
		case 464413478:
			return "DISC_VOL_WHISKEY_TREE";
	
		case 513110082:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_TREASURE_MAP_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_TREASURE_MAP_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_TREASURE_MAP_REWARD";
			break;
	
		case 733338689:
			return "DISC_VOL_VIKING_GEAR";
	
		case 870958936:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_AXE_IN_TREE_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_AXE_IN_TREE_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_AXE_IN_TREE_3";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_AXE_IN_TREE_4";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_AXE_IN_TREE_5";
			break;
	
		case 939555152:
			return "DISC_VOL_SCARECROW_4";
	
		case 1048086072:
			return "DISC_VOL_SCARECROW_3";
	
		case 1124200691:
			return "DISC_VOL_CIVIL_WAR_HAT";
	
		case 1187689415:
			return "DISC_VOL_WAGON_CIRCLE";
	
		case 1284679164:
			return "DISC_VOL_FRANKEN_BOOK";
	
		case 1335921989:
			return "DISC_VOL_BANK_STAGECOACH";
	
		case 1424723727:
			return "DISC_VOL_PIRATE_SWORD";
	
		case 1490223565:
			return "DISC_VOL_RAM_MASK";
	
		case 1801731633:
			return "DISC_VOL_CAT_MASK";
	
		case 2072029413:
			return "DISC_VOL_ANCIENT_TOMAHAWK";
	
		case 2135153015:
			return "DISC_VOL_BOOTS_NOTE";
	
		default:
			break;
	}

	return "";
}

Hash func_317(var uParam0, int iParam1) // Position - 0x180FB Hash - 0x5D507F15 ^0x2E0BE136
{
	switch (*uParam0)
	{
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 599826636;
			
				default:
					break;
			}
			break;
	
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1106445381;
			
				default:
					break;
			}
			break;
	
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 1472702644;
			
				default:
					break;
			}
			break;
	
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 1057717101;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -1822543706;
			
				default:
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 1325742934;
			
				default:
					break;
			}
			break;
	
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 495167306;
			
				default:
					break;
			}
			break;
	
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 614938185;
			
				default:
					break;
			}
			break;
	
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 553630040;
			
				default:
					break;
			}
			break;
	
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return -1025649252;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -431554783;
			
				default:
					break;
			}
			break;
	
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -987312756;
			
				default:
					break;
			}
			break;
	
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return -342606109;
			
				default:
					break;
			}
			break;
	
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 847068642;
			
				default:
					break;
			}
			break;
	
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 2102872632;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return -431554783;
}

BOOL func_318(var uParam0) // Position - 0x182E5 Hash - 0xC38D7DC0 ^0xC38D7DC0
{
	return 0f;
}

BOOL func_319(var uParam0) // Position - 0x182EE Hash - 0x52EB9830 ^0x52EB9830
{
	switch (*uParam0)
	{
		case 2134589549:
			return 0.6f;
	
		default:
		
	}

	return 0f;
}

BOOL func_320(var uParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, Vector3 vParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1830E Hash - 0x9311E28E ^0xB651970
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[iParam8]))
	{
		uParam0->[iParam8] = PED::_CREATE_META_PED_ASSET(hParam1, vParam2, vParam5, true, bParam9, bParam10);
	
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->[iParam8]))
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->[iParam8], vParam2, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->[iParam8], vParam5, 2, true);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->[iParam8], false);
		}
		else
		{
			return false;
		}
	}

	return true;
}

void func_321(var uParam0, int iParam1) // Position - 0x18380 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_322(Hash hParam0) // Position - 0x1838D Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_198(hParam0) == joaat("WEAPON");
}

BOOL func_323(Hash hParam0) // Position - 0x183A1 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_106() != -1)
		return false;

	if (func_200(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_330(hParam0, &unk, 1, false, false);

	return func_89(hParam0, 1, false);
}

void func_324(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x183E5 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_198(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_205(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_75(weaponHash))
	{
		if (func_106() == -1)
			func_76(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_182(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_259(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_325(Hash hParam0, var uParam1) // Position - 0x1848C Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_199(hParam0, 58855631))
	{
		func_471(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_326(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x184BA Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_472(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_198(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_475(hParam0, -1823706425))
			{
				unk = { func_358(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_475(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_358(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_474(bParam1) };
		
			switch (func_203(hParam0))
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
				unk = { func_358(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_438(bParam1) };
		
			if (bParam2 && func_473(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_356(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_356(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_357(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_476(unk, &unk28, bParam1, false))
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

int func_327(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18777 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_178(hParam0, 0))
		return 0;

	if (!func_206(false))
		bParam2 = true;

	if (bParam2 || !func_477(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_300(bParam3), hParam0);
}

int func_328(Hash hParam0, BOOL bParam1) // Position - 0x187C5 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_210(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_300(bParam1), hParam0, false);
}

BOOL func_329() // Position - 0x187EF Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_106() != -1)
		return false;

	if (!func_133())
		return false;

	if (!func_107(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[2 /*74*/].f_1, true) && func_107(Global_1347702[120 /*49*/].f_15, true) && !func_107(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[37 /*74*/].f_1, true) && !func_107(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[57 /*74*/].f_1, true) && !func_107(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[26 /*74*/].f_1, true) && !func_107(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_107(Global_1835011[62 /*74*/].f_1, true) && func_107(Global_1835011[63 /*74*/].f_1, true) && !func_107(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[75 /*74*/].f_1, true) && !func_107(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_107(Global_1835011[76 /*74*/].f_1, true) && !func_107(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[40 /*74*/].f_1, true) && func_107(Global_1835011[41 /*74*/].f_1, true) && !func_107(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[62 /*74*/].f_1, true) && func_107(Global_1835011[63 /*74*/].f_1, true) && !func_107(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_107(Global_1835011[65 /*74*/].f_1, true) && func_107(Global_1835011[66 /*74*/].f_1, true) && !func_107(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_330(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18A35 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_478(&hParam0);

	if (!func_178(hParam0, 0))
		return 0;

	if (!func_206(false))
		bParam3 = true;

	if (func_322(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_438(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_356(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_357(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_473(hParam0, true))
				if (!func_356(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_357(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_479(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_327(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_477(hParam0))
		inventoryItemCountWithItemid = func_480(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_300(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_331(Hash hParam0, int iParam1) // Position - 0x18B7A Hash - 0x7A1C2599 ^0xFF9B5634
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

int func_332(Hash hParam0, BOOL bParam1) // Position - 0x18BC4 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_437(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_439(&unk, func_438(false));

	if (!func_440(&unk, &num, &num2, false))
		return 0;

	func_411(num);
	return num2;
}

int func_333() // Position - 0x18C22 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_334(Hash hParam0) // Position - 0x18C34 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_335(int iParam0) // Position - 0x18C42 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_106() != -1)
		return;

	num = func_481(iParam0);
	value = func_482(iParam0);

	if (Global_1347477.f_117 || !func_201(31) || !func_483(num))
		return;

	if (value <= 0f)
		return;

	if (func_484(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_485(num, Global_40.f_11095.f_11[num] + value, false);
	func_311(MISC::VAR_STRING(6, func_486(iParam0), value), "itemtype_textures", func_487(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_336(int iParam0, var uParam1, var uParam2) // Position - 0x18D41 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_337(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x18D5D Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_488(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_489(iParam0))
		return false;

	if (func_490(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_415(iParam0, 1) || func_491(32768))
		if (!func_415(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_492())
		return false;

	return true;
}

void func_338(int iParam0, int iParam1) // Position - 0x18DFF Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

Hash func_339(int iParam0) // Position - 0x18E23 Hash - 0xB8EC44B7 ^0x693BD882
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

int func_340(Hash hParam0, int iParam1) // Position - 0x18EDC Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_493(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_341(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x18F0B Hash - 0xF20034E5 ^0xAE0F0538
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_194() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_494(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_495(), 12);
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
			else if (func_381() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_496(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_381(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_340(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_497(), 13);
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
			else if (func_382() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_498(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_382(), 10);
			break;
	}

	return sParam3;
}

BOOL func_342(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x191F8 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_343(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x192A5 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_344(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x192D1 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_345(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x19320 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_499(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_89(hash, 1, false) || func_501(func_500(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_499(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_499(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_381() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_502(i)), func_502(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_496() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_502(i)), func_502(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_502(i)), func_502(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_391(iParam3, func_503(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_387(hash) - iParam7 >= func_340(iParam3, func_504(i));
				else
					flag = func_387(hash) >= func_340(iParam3, func_504(i));
			else if (hParam4 == hash)
				flag = func_387(hash) + iParam7 >= func_340(iParam3, func_504(i));
			else
				flag = func_387(hash) >= func_340(iParam3, func_504(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_506(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_382() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_508(i)), func_508(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_498() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_508(i)), func_508(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_508(i)), func_508(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_391(iParam3, func_503(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_387(hash) - iParam7 >= 1;
				else
					flag = func_509(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_509(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_510(hash)), func_510(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_346(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x19695 Hash - 0x3C34F826 ^0xBC237DB8
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
		if (func_497() >= 13)
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

BOOL func_347(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x1979E Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_446(func_511(0)) && func_512(0) == 1 || func_512(0) == 8 || func_512(0) == 6)
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Hash hParam0) // Position - 0x19840 Hash - 0xA17D549C ^0xED6D9851
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

int func_349(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x198F0 Hash - 0xB88D7AA5 ^0x36259347
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

BOOL func_350(int iParam0) // Position - 0x19951 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_351(int iParam0) // Position - 0x19964 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_352(int iParam0) // Position - 0x1998E Hash - 0x48EBE6BD ^0x358C7E90
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

void func_353(int iParam0) // Position - 0x199C8 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_133() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_189(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_133() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_189(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_133() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_189(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_133() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_349("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_189(589, false);
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
			func_513(true);
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
			func_514(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_514(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_514(3);
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
		
			if (func_106() == -1)
			{
				if (!func_425(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_521(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_15())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_89(hash, 1, false))
						func_252(hash, 1, 752097756);
				
					func_231(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_515(true);
			break;
	
		case 34:
			func_516(true);
			break;
	
		case 35:
			func_517(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_518(false);
			break;
	
		case 38:
			func_519(false);
			break;
	
		case 39:
			func_520(false);
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
			func_522();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_106() == -1)
				if (!func_89(1013902307, 1, false))
					func_252(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_106() == -1)
				if (!func_89(786809402, 1, false))
					func_252(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_106() == -1)
			{
				if (!func_89(1013902307, 1, false))
					func_252(1013902307, 1, 752097756);
			
				if (!func_89(142640135, 1, false))
					func_252(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_106() == -1)
			{
				if (!func_89(786809402, 1, false))
					func_252(786809402, 1, 752097756);
			
				if (!func_89(-518019409, 1, false))
					func_252(-518019409, 1, 752097756);
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

BOOL func_354(Hash hParam0) // Position - 0x19FF0 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

Hash func_355(int iParam0, int iParam1) // Position - 0x1A018 Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_356(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x1C165 Hash - 0x4285A587 ^0x4285A587
{
	return func_480(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_357(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1C17D Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_523(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_358(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1C19E Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_178(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_300(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_359(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1C1CF Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_524(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_476(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_206(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_300(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_360(Hash hParam0, int iParam1) // Position - 0x1C25F Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_525(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_361(Hash hParam0) // Position - 0x1C2A7 Hash - 0x708BD33E ^0x8713459F
{
	char* propertyName;
	char* propertyName2;
	int value;

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
	value = func_526();
	func_527(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_362(Hash hParam0) // Position - 0x1C376 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_528(hParam0))
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

BOOL func_363(Hash hParam0) // Position - 0x1C3F2 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_364(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1C404 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_365(Hash hParam0) // Position - 0x1C42A Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_201(50))
			{
				if (!func_201(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_201(51))
			{
				if (!func_201(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_366() // Position - 0x1C496 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_367(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x1C4A7 Hash - 0x4FC4FA99 ^0x540DBE26
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

	if (!func_178(hParam1, 0))
		return false;

	if (func_198(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_106() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_203(hParam1) == -999503751)
		return true;

	num = func_529(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_199(hParam1, 866047851))
	{
		num2 = func_400(num, 1);
	
		if (func_530(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
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
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_199(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_531(1868067663, &unk))
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
			num5 = func_532(componentHash, num, metaPedType, isMP);
			num4 = func_532(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
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
			hash = func_203(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
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
			hash = func_203(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_199(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_533(Global_1946054.f_1497.f_1[num2 /*3*/]))
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

void func_368() // Position - 0x1C7B7 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	var unk;

	num = Global_40.f_11095.f_44;
	unk = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - unk);
	return;
}

int func_369() // Position - 0x1C80C Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_89(func_534(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_370(Hash hParam0) // Position - 0x1C83E Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_371(int iParam0, Hash hParam1) // Position - 0x1C8D4 Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_89(hash, 1, false) && func_89(hash2, 1, false))
		return true;

	return false;
}

Hash func_372(Hash hParam0) // Position - 0x1CA35 Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_373(Hash hParam0, int iParam1) // Position - 0x1CAFC Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_535(hParam0);

	if (num != -15)
	{
		func_527(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_536(num, true);
	}

	return false;
}

int func_374(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1CB2E Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_89(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_178(hash, 0) && func_199(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_375(int iParam0) // Position - 0x1CBF3 Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_376(int iParam0) // Position - 0x1CC0E Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_377(int iParam0) // Position - 0x1CC29 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_378(int iParam0) // Position - 0x1CC44 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_379(int iParam0) // Position - 0x1CC5F Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_387(hash);
	num3 = func_387(hash2);
	num4 = func_387(hash3);
	num6 = func_388(hash);
	num7 = func_388(hash2);
	num8 = func_388(hash3);

	if (iParam0 != 2)
	{
		num5 = func_387(hash4);
		num9 = func_388(hash4);
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

void func_380(int iParam0) // Position - 0x1CDD2 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_381() // Position - 0x1CDED Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_537(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_382() // Position - 0x1CE26 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_383(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1CE38 Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_509(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_509(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_509(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_509(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_509(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_509(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash) && func_509(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_509(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_509(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_509(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash) && func_509(hash2) && func_509(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_509(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_509(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_509(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_509(hash) && func_509(hash2) && func_509(hash3) && func_509(hash4))
			return true;
	}

	return false;
}

void func_384(Hash hParam0) // Position - 0x1D2FD Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_538(hParam0))
		func_540(func_539(hParam0));

	return;
}

int func_385() // Position - 0x1D319 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_538(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_386(Hash hParam0, int iParam1, int iParam2) // Position - 0x1D351 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_387(hash);
	num3 = func_387(hash2);
	num4 = func_387(hash3);
	num6 = func_388(hash);
	num7 = func_388(hash2);
	num8 = func_388(hash3);

	if (iParam2 != 2)
	{
		num5 = func_387(hash4);
		num9 = func_388(hash4);
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

int func_387(Hash hParam0) // Position - 0x1D564 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_89(hParam0, 1, false))
		num = func_182(hParam0, false, false);

	return num;
}

int func_388(Hash hParam0) // Position - 0x1D583 Hash - 0xEED5739D ^0xEED5739D
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

int func_389(Hash hParam0) // Position - 0x1D65C Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_390(Hash hParam0, int iParam1) // Position - 0x1D66A Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_391(Hash hParam0, int iParam1) // Position - 0x1D67A Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_493(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_392(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1D6A9 Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_391(hParam1, 5) || hParam0 == func_391(hParam1, 6) || hParam0 == func_391(hParam1, 7) || hParam0 == func_391(hParam1, 8) || hParam0 == func_391(hParam1, 9))
	{
		func_383(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_195(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_197(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_393(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1D72B Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_391(hParam1, 5) || hParam0 == func_391(hParam1, 6) || hParam0 == func_391(hParam1, 7) || hParam0 == func_391(hParam1, 8) || hParam0 == func_391(hParam1, 9))
	{
		if (func_383(hParam1, hParam0, &num, false, 0, false))
		{
			func_195(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_197(51, 0, 0, num, func_340(hParam1, 20), 1, 0);
		}
		else
		{
			func_195(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_197(51, 0, 0, num, func_340(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_394() // Position - 0x1D7EC Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_313(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_395(Hash hParam0) // Position - 0x1D815 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_396(Hash hParam0) // Position - 0x1D824 Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_541(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_397(Hash hParam0) // Position - 0x1D83D Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_398(Hash hParam0, var uParam1, var uParam2) // Position - 0x1D84C Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_399(var uParam0) // Position - 0x1DA58 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_542(i, 1);
	}

	return -358215195;
}

int func_400(int iParam0, int iParam1) // Position - 0x1DA93 Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_401(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1DC64 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_543();

	if (iParam2 == 39)
	{
		unk = { func_326(hParam0, true, false) };
		iParam2 = func_400(func_399(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_199(hParam0, 866047851) && func_530(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_404(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_544(func_542(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_545(iParam2);
	func_546(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_547(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_547(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_548(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_549(hParam0, iParam2, hParam1, func_106() != -1);

	if (bParam4)
		func_550(&(Global_1946054.f_1378), true, 3);
	else
		func_550(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_551(func_542(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_402(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1DE71 Hash - 0x5AF76643 ^0x5AF76643
{
	func_552(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_403(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x1DE8A Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_553(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_554(num);
	return;
}

BOOL func_404(BOOL bParam0) // Position - 0x1DEBC Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_405() // Position - 0x1DECD Hash - 0xB6203BF0 ^0x217DD714
{
	func_555(&(Global_1946054.f_2776));
	func_556(32768);
	func_551(1108822547, 8, 6);
	return;
}

int func_406(int iParam0) // Position - 0x1DEF4 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_400(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_407(int iParam0) // Position - 0x1DF58 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_557(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_558(num);
	return;
}

void func_408(int iParam0, int iParam1, int iParam2) // Position - 0x1DF9C Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_558(num);
	return;
}

BOOL func_409(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x1DFBC Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_300(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_410(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1DFE3 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_411(int iParam0) // Position - 0x1E01E Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

float func_412() // Position - 0x1E03F Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_559())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_560(2);

	if (Global_1347477.f_119)
		return func_560(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_561();
	num3 = func_562();
	num4 = func_563();
	num5 = func_564();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_565());
	num8 = func_560(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_566(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_567(3, num9, num9 > 100f);
	return func_568(num8, -100f, 100f);
}

float func_413() // Position - 0x1E168 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_559())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_560(1);

	if (Global_1347477.f_119)
		return func_560(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_561();
	num3 = func_562();
	num4 = func_563();
	num5 = func_564();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_565());
	num8 = func_560(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_566(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_567(2, num9, num9 > 100f);
	return func_568(num8, -100f, 100f);
}

float func_414() // Position - 0x1E291 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_559())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_560(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_569())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_570())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_560(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_561();
	num3 = func_562();
	num4 = func_563();
	num5 = func_564();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_565());
	num8 = func_560(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_566(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_567(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_560(0);

	return func_568(num8, -100f, 100f);
}

BOOL func_415(int iParam0, int iParam1) // Position - 0x1E438 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_416(Hash hParam0) // Position - 0x1E451 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_417(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x1E461 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_178(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_330(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_206(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_300(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_418(int iParam0, BOOL bParam1) // Position - 0x1E4C3 Hash - 0x6C404ADF ^0x7D516F33
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
				return func_571();
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

int func_419(Hash hParam0) // Position - 0x1E552 Hash - 0x9830D1FB ^0x9830D1FB
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

BOOL func_420(int iParam0) // Position - 0x1E965 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

void func_421(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1E984 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_420(iParam0))
		return;

	if (func_572(iParam0))
		return;

	if (!func_573(iParam0))
		func_574(iParam0, true, false);

	hash = func_575(iParam0);

	if (hash != 0 && !(iParam0 >= 0 && iParam0 <= 5))
		if (func_576(iParam0, 512))
			func_403(30, hash, 0, 0, false);

	if (!func_577() && !bParam1 && !func_578(0, false, true))
		func_452(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_579(iParam0, 6);

	if (bParam2)
		if (!func_578(0, false, true))
			func_37(true, 4);

	return;
}

int func_422() // Position - 0x1EA4A Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_423(int iParam0, BOOL bParam1) // Position - 0x1EA58 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_418(iParam0, false) < func_580(iParam0, bParam1);
}

BOOL func_424(Hash hParam0, var uParam1) // Position - 0x1EA70 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_203(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_425(int iParam0) // Position - 0x1EAB4 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_400(iParam0, 1) /*3*/] != Global_1946054.f_57[func_400(iParam0, 1) /*11*/];
}

void func_426(int iParam0, Hash hParam1) // Position - 0x1EAEC Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_199(hParam1, 130796156))
	{
		func_581(hParam1, false);
	}
	else if (func_199(hParam1, 930141731))
	{
		func_581(hParam1, true);
		func_582(iParam0);
	}

	return;
}

void func_427(var uParam0, int iParam1) // Position - 0x1EB27 Hash - 0x84556899 ^0xA18AFCFA
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

int func_428(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x1EC08 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_583(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_584(anParam2, hParam0, num);
	return 1;
}

var func_429(int iParam0) // Position - 0x1EC71 Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x1EC83 Hash - 0xA17D549C ^0xEE5D4E94
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

Hash func_431(Hash hParam0) // Position - 0x1ED5A Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_585(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_432() // Position - 0x1ED84 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_433(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1ED91 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_434(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1EDFB Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_435(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1EE12 Hash - 0x92B705D3 ^0xB783F681
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

const char* func_436(const char* sParam0, int iParam1) // Position - 0x1EF05 Hash - 0x9E99F03 ^0xE55DCC2B
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

struct<18> func_437(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1EF1F Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_438(BOOL bParam0) // Position - 0x1EFF1 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_300(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_358(923904168, func_472(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_358(923904168, func_472(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_358(923904168, func_472(bParam0), -740156546, false);
}

void func_439(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1F086 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_440(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1F0A1 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_300(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_441(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1F0C6 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_524(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_206(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_300(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

void func_442(Hash hParam0, int iParam1) // Position - 0x1F112 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_106() == -1)
	{
		if (func_188(43))
		{
			if (func_199(hParam0, 412399755))
			{
				func_384(joaat("exotic_stage_01"));
			
				if (func_385() == 0)
				{
					func_37(false, 10);
					num = func_586(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_387(hParam0) < func_388(hParam0))
							func_195(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_188(44))
		{
			if (func_199(hParam0, 709057512))
			{
				func_384(joaat("exotic_stage_02"));
			
				if (func_385() == 1)
				{
					func_37(false, 10);
					num = func_586(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_387(hParam0) < func_388(hParam0))
							func_195(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_188(45))
		{
			if (func_199(hParam0, -1478961327))
			{
				func_384(joaat("exotic_stage_03"));
			
				if (func_385() == 2)
				{
					func_37(false, 10);
					num = func_586(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_387(hParam0) < func_388(hParam0))
							func_195(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_188(46))
		{
			if (func_199(hParam0, -1238404098))
			{
				func_384(joaat("exotic_stage_04"));
			
				if (func_385() == 3)
				{
					func_37(false, 10);
					num = func_586(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_387(hParam0) < func_388(hParam0))
							func_195(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_188(47))
		{
			if (func_199(hParam0, 1160548794))
			{
				func_384(joaat("exotic_stage_05"));
			
				if (func_385() == 4)
				{
					func_37(false, 10);
					num = func_586(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_387(hParam0) < func_388(hParam0))
							func_195(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

BOOL func_443() // Position - 0x1F3F6 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_366())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_444(int iParam0) // Position - 0x1F40D Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_587(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_445(int iParam0, const char* sParam1, int iParam2) // Position - 0x1F441 Hash - 0x56940320 ^0x5E431203
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_443())
		func_311(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_311(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_446(int iParam0) // Position - 0x1F4AD Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_447(int iParam0) // Position - 0x1F4E0 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_588(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_448(int iParam0) // Position - 0x1F521 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_296(iParam0, 2);
}

BOOL func_449(Ped pedParam0) // Position - 0x1F530 Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_450(Ped pedParam0) // Position - 0x1F618 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_589(pedParam0, 4) || func_589(pedParam0, 5);
}

BOOL func_451(Ped pedParam0) // Position - 0x1F634 Hash - 0x8F7DFED5 ^0x8768F0B4
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

int func_452(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1F69E Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_453(int iParam0) // Position - 0x1F6D9 Hash - 0xCB0CD3AF ^0x98FF0773
{
	Ped mount;

	mount = PED::GET_MOUNT(Global_35);

	if (!func_590(Global_35))
		return false;

	if (!func_288(iParam0, 16) && !func_591(mount, false))
		return false;

	return true;
}

void func_454(int iParam0, BOOL bParam1) // Position - 0x1F717 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_455(int iParam0, int iParam1) // Position - 0x1F740 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_456(int iParam0, int iParam1) // Position - 0x1F768 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_457(int iParam0, int iParam1) // Position - 0x1F779 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_458(int iParam0) // Position - 0x1F78E Hash - 0xA059D395 ^0xE600C05
{
	return func_39(Global_1935496.f_27, iParam0);
}

int func_459() // Position - 0x1F7A2 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_460(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1F7B2 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_461(int iParam0, BOOL bParam1) // Position - 0x1F7C9 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_592(bParam1);

	return;
}

void func_462(Hash hParam0) // Position - 0x1F7E4 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_463(int iParam0) // Position - 0x1F7F7 Hash - 0x8FB6A40C ^0x65ACCDB3
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

BOOL func_464(var uParam0) // Position - 0x1F918 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_493(23, &unk))
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

BOOL func_465(int iParam0, var uParam1, var uParam2) // Position - 0x1F960 Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_493(23, &unk))
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

Hash func_466(Hash hParam0) // Position - 0x1F9E0 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_467() // Position - 0x1F9EA Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_302();

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

void func_468(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x1FA39 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_469(int iParam0) // Position - 0x1FA6A Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_470(int iParam0, var uParam1, var uParam2) // Position - 0x1FA89 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_469(iParam0))
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

int func_471(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x1FC58 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_178(hParam0, 0))
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

struct<4> func_472(BOOL bParam0) // Position - 0x1FCA6 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_358(joaat("character"), func_593(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_473(Hash hParam0, BOOL bParam1) // Position - 0x1FCC2 Hash - 0x62864AB ^0xBC339691
{
	if (func_203(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_201(24);
		else
			return true;

	return false;
}

struct<4> func_474(BOOL bParam0) // Position - 0x1FCFB Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_300(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_358(271701509, func_472(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_358(271701509, func_472(bParam0), 12999093, false);
}

BOOL func_475(Hash hParam0, Hash hParam1) // Position - 0x1FD5F Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_203(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_476(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1FDBE Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_300(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_477(Hash hParam0) // Position - 0x1FDEE Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_594(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_478(var uParam0) // Position - 0x1FE0A Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_178(*uParam0, 0))
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

BOOL func_479(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x1FE86 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_178(hParam0, 0))
		return false;

	unk = { func_326(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_355(398 + i, 1);
	
		if (func_356(hParam0, &unk, hash, false))
		{
			flag = func_357(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_480(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1FF1A Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_178(hParam0, 0))
		return 0;

	guid = { func_358(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_300(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_481(int iParam0) // Position - 0x1FF62 Hash - 0x92F940EE ^0x92F940EE
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

float func_482(int iParam0) // Position - 0x1FFB6 Hash - 0x899A1C9C ^0x899A1C9C
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
			return func_595(iParam0);
	
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
			return func_595(iParam0);
	
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
			return func_595(iParam0);
	
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

BOOL func_483(int iParam0) // Position - 0x202C7 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_201(18);
	
		case 1:
			return func_201(19);
	
		case 2:
			return func_201(20);
	
		default:
		
	}

	return true;
}

int func_484(int iParam0) // Position - 0x20305 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_596(Global_40.f_11095.f_11[iParam0]);
}

void func_485(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2031D Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_106() != -1)
		return;

	if (Global_1347477.f_117 || !func_201(31))
		return;

	num = func_484(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_484(iParam0);

	if (func_597(iParam0) && func_598(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_599(num2, fParam1);
		
			if (fParam1 > (float)func_600(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_189(func_601(iParam0), false);
				
					func_602(iParam0, num3, num4);
					func_603(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_486(int iParam0) // Position - 0x2041F Hash - 0xEB40D7A4 ^0x9D581B4
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_487(int iParam0) // Position - 0x2042B Hash - 0x21FAF347 ^0xAF7D8F21
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

BOOL func_488(int iParam0, int iParam1) // Position - 0x20466 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_106() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_489(int iParam0) // Position - 0x20499 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_106() != -1)
		if (func_415(iParam0, 4))
			return false;
	else if (func_415(iParam0, 2))
		return false;

	return true;
}

BOOL func_490(int iParam0) // Position - 0x204C9 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_415(iParam0, 65536) && !func_415(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_415(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_415(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_491(int iParam0) // Position - 0x20575 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_492() // Position - 0x20588 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_493(int iParam0, var uParam1) // Position - 0x20597 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_604(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_494() // Position - 0x205C4 Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_605(Global_40.f_12019);
}

int func_495() // Position - 0x205D6 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_339(i);
	
		if (func_89(hash, 1, false) || func_501(func_500(hash)))
			num = num + 1;
	}

	return num;
}

int func_496() // Position - 0x2061F Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_606(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_497() // Position - 0x20658 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_506(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_498() // Position - 0x20691 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_499(int iParam0) // Position - 0x206A3 Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_500(Hash hParam0) // Position - 0x2075C Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_501(BOOL bParam0) // Position - 0x207F2 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_502(int iParam0) // Position - 0x20805 Hash - 0x21CE226B ^0x7FAD35EF
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

int func_503(int iParam0) // Position - 0x20840 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_504(int iParam0) // Position - 0x20885 Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x208CE Hash - 0xA17D549C ^0x4753C8E2
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

BOOL func_506(Hash hParam0) // Position - 0x209DC Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Hash hParam0) // Position - 0x209EC Hash - 0xA17D549C ^0x2E2E2FEB
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

char* func_508(int iParam0) // Position - 0x20AA9 Hash - 0x21CE226B ^0xCF01A1BD
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

BOOL func_509(Hash hParam0) // Position - 0x20AE4 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_607(hParam0) && func_89(hParam0, 1, false))
		return 1;
	else if (func_608(hParam0) && func_609(hParam0))
		return 1;

	return 0;
}

char* func_510(Hash hParam0) // Position - 0x20B22 Hash - 0x9E507475 ^0x690A5801
{
	if (!func_178(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_246(hParam0));
}

int func_511(int iParam0) // Position - 0x20B46 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_512(int iParam0) // Position - 0x20B58 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_513(BOOL bParam0) // Position - 0x20B6C Hash - 0xB584A39F ^0xFC4CA802
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

void func_514(int iParam0) // Position - 0x20BAA Hash - 0x2EDDC601 ^0xD5F96979
{
	Any itemContextByIndex;

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

void func_515(BOOL bParam0) // Position - 0x20C18 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_516(BOOL bParam0) // Position - 0x20C52 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_517(BOOL bParam0) // Position - 0x20C8C Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_518(BOOL bParam0) // Position - 0x20CC6 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_519(BOOL bParam0) // Position - 0x20CE9 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_520(BOOL bParam0) // Position - 0x20D2B Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_521(int iParam0) // Position - 0x20D6D Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_400(iParam0, 1) /*3*/];
}

void func_522() // Position - 0x20D95 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_610();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_76(joaat("weapon_revolver_cattleman_john"));
		func_252(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_76(joaat("weapon_melee_knife_john"));
		func_252(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_523(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x20E0D Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_300(false);
	*panParam1 = { func_358(hParam0, func_438(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_524(Hash hParam0) // Position - 0x20E52 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_525(int iParam0, int iParam1) // Position - 0x20E68 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_526() // Position - 0x20E7E Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_527(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x20E8A Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_611(*uParam0);
	i = func_612(*uParam0);
	num2 = func_613(*uParam0);
	j = func_614(*uParam0);
	k = func_615(*uParam0);
	l = func_616(*uParam0);

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

	for (m = func_617(i, num); num2 > m; m = func_617(i, num))
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

	func_618(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_528(Hash hParam0) // Position - 0x21012 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_529(Hash hParam0) // Position - 0x21020 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_326(hParam0, true, false) };
	return func_399(unk.f_4);
}

int func_530(Hash hParam0) // Position - 0x2103C Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_199(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_199(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_199(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_199(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_199(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_199(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_531(Hash hParam0, var uParam1) // Position - 0x2118D Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_400(func_619(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_203(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_532(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x21204 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_400(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_404(524288))
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

BOOL func_533(Hash hParam0) // Position - 0x2126F Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

Hash func_534(int iParam0) // Position - 0x212B2 Hash - 0xB8EC44B7 ^0xD4FF48D5
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

int func_535(Hash hParam0) // Position - 0x2142F Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_620(hParam0, -1);
}

BOOL func_536(int iParam0, BOOL bParam1) // Position - 0x2143E Hash - 0x10DE2364 ^0x10DE2364
{
	return func_621(func_526(), iParam0, bParam1);
}

BOOL func_537(Hash hParam0) // Position - 0x21452 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_538(Hash hParam0) // Position - 0x21462 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_539(Hash hParam0) // Position - 0x21472 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_540(int iParam0) // Position - 0x214B7 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_541(Hash hParam0) // Position - 0x214D2 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_542(int iParam0, int iParam1) // Position - 0x214E2 Hash - 0xE1D12727 ^0xA46110B3
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

void func_543() // Position - 0x21731 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_544(int iParam0) // Position - 0x21778 Hash - 0x65A082AE ^0x65A082AE
{
	func_551(iParam0, 8, 6);
	return;
}

void func_545(int iParam0) // Position - 0x21789 Hash - 0x20214C72 ^0x20214C72
{
	func_622(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_546(int iParam0, int iParam1) // Position - 0x2179E Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_623(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_547(Hash hParam0, int iParam1, int iParam2) // Position - 0x217B5 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_548(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x217C8 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_203(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_624(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_546(num2, num3);
	}

	if (func_425(-1586649372) && func_624(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_546(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_625(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_625(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_546(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_546(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_546(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_533(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_199(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_546(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_546(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_546(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_203(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_546(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_533(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_203(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_546(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_625(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_625(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_546(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (uParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_546(num2, num3);
				}
			}
		
			func_625(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_199(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_546(num2, num3);
			}
			break;
	
		case 1868067663:
			func_625(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_546(num2, num3);
			}
			break;
	}

	switch (func_203(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_203(uParam0->f_1[num2 /*3*/]) || func_199(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_546(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_203(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_546(num2, num3);
			}
			break;
	}

	return;
}

Hash func_549(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x21E0C Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_626(0);

	if (hParam2 != 0 && func_627(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_628(hParam0, func_542(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_550(var uParam0, BOOL bParam1, int iParam2) // Position - 0x21E52 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_106() != -1;
	flag2 = func_626(0);

	if (func_404(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_542(num, 1);
		
			if (func_629(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_629(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_532(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_630(uParam0);

	if (num3 > 0)
	{
		if (!func_404(524288))
		{
			func_553(524288);
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
				num5 = func_542(num, 1);
			
				if (func_629(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_629(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_532(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_546(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_556(524288);

	return;
}

void func_551(int iParam0, int iParam1, int iParam2) // Position - 0x2206F Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_400(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_400(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_400(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_552(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x220AE Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_631(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_106() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_632(2, Global_26796.f_776) || Global_1946054.f_1497 != func_575(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_575(Global_40.f_7729);
				Global_1946054.f_1378 = func_575(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_633(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_634(false, true);

	return;
}

void func_553(BOOL bParam0) // Position - 0x221CD Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_554(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x221E0 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_635(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_636(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_553(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_635(iParam0))
				return;
		
			func_636(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_553(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_408(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_555(var uParam0) // Position - 0x223EC Hash - 0x7C3D914C ^0xB1998A7B
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

void func_556(BOOL bParam0) // Position - 0x2244A Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_557(int iParam0, int iParam1) // Position - 0x22462 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_558(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x22471 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_635(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_635(20))
				return;
		}
	}

	func_636(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_553(8);
	return;
}

BOOL func_559() // Position - 0x22575 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_560(int iParam0) // Position - 0x22591 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_561() // Position - 0x225A3 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_637(13);
	num2 = func_638(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_562() // Position - 0x225E6 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_563() // Position - 0x22601 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_366())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_564() // Position - 0x22620 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_565() // Position - 0x22662 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_566(int iParam0, int iParam1, BOOL bParam2) // Position - 0x22670 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_639(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_567(int iParam0, float fParam1, BOOL bParam2) // Position - 0x226BC Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_639(iParam0, 2, false, false);
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

float func_568(float fParam0, float fParam1, float fParam2) // Position - 0x22802 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_569() // Position - 0x22829 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_637(12) <= -99f;
}

BOOL func_570() // Position - 0x2283D Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_637(12) >= 99f;
}

int func_571() // Position - 0x22851 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_203(hash) == -999503751)
			if (func_640() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_572(int iParam0) // Position - 0x228A2 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_420(iParam0))
		return false;

	if (func_576(iParam0, 4))
		return true;

	return false;
}

BOOL func_573(int iParam0) // Position - 0x228C7 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_420(iParam0))
		return false;

	if (func_576(iParam0, 2))
		return true;

	return false;
}

void func_574(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x228EC Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_420(iParam0))
		return;

	if (!func_573(iParam0))
	{
		func_579(iParam0, 2);
	
		if (bParam2)
			if (!func_578(0, false, true))
				func_37(true, 4);
	
		if (!func_577() && !bParam1 && !func_578(0, false, true))
			func_452(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_641(iParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_575(int iParam0) // Position - 0x22961 Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (iParam0)
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

BOOL func_576(int iParam0, BOOL bParam1) // Position - 0x22E96 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_420(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

BOOL func_577() // Position - 0x22EBB Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_578(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x22EDB Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_642())
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
		num = func_643(Global_1898164.f_1[0 /*5*/]);
	
		if (func_315(num) && func_644(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_446(Global_1898164.f_1[0 /*5*/]))
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

void func_579(int iParam0, BOOL bParam1) // Position - 0x230DF Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_420(iParam0))
		return;

	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] || bParam1;
	return;
}

int func_580(int iParam0, BOOL bParam1) // Position - 0x2310B Hash - 0x14DDA26B ^0xFFF4A8D0
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

void func_581(Hash hParam0, BOOL bParam1) // Position - 0x231AE Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_645(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_202(50);
			else
				func_202(48);
			break;
	
		case 1:
			if (bParam1)
				func_202(51);
			else
				func_202(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_646(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_233();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_233();
			}
			break;
	
		case 3:
			func_202(24);
		
			if (bParam1)
			{
				if (!func_646(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_233();
				}
			}
			break;
	}

	return;
}

void func_582(int iParam0) // Position - 0x2328D Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_647(0))
				num = num + 1;
		
			if (func_647(2))
				num = num + 1;
		
			if (func_647(4))
				num = num + 1;
		
			if (!func_648(16))
			{
				if (num == 1)
				{
					func_649();
					func_189(456, true);
					func_650(16);
				}
			}
		
			if (!func_648(32))
			{
				if (num >= 3)
				{
					func_649();
					func_189(456, true);
					func_650(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_647(1))
				num = num + 1;
		
			if (func_647(3))
				num = num + 1;
		
			if (func_647(7))
				num = num + 1;
		
			if (!func_648(1))
			{
				if (num == 1)
				{
					func_651();
					func_189(457, true);
					func_650(1);
				}
			}
		
			if (!func_648(2))
			{
				if (num >= 3)
				{
					func_651();
					func_189(457, true);
					func_650(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_647(5))
				num = num + 1;
		
			if (func_647(6))
				num = num + 1;
		
			if (func_647(8))
				num = num + 1;
		
			if (!func_648(4))
			{
				if (num == 1)
				{
					func_652();
					func_189(455, true);
					func_650(4);
				}
			}
		
			if (!func_648(8))
			{
				if (num >= 3)
				{
					func_652();
					func_189(455, true);
					func_650(8);
				}
			}
			break;
	}

	return;
}

void func_583(var uParam0) // Position - 0x23424 Hash - 0x2CE00B72 ^0x958A4727
{
	func_427(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_427(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_427(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_584(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x2345E Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_653(anParam0))
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
BOOL func_585(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x234FF Hash - 0x92B705D3 ^0xB783F681
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

int func_586(Hash hParam0, int iParam1, int iParam2) // Position - 0x235F5 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_387(hash);
	num3 = func_387(hash2);
	num4 = func_387(hash3);

	if (iParam2 != 2)
		num5 = func_387(hash4);

	num6 = func_388(hash);
	num7 = func_388(hash2);
	num8 = func_388(hash3);

	if (iParam2 != 2)
		num9 = func_388(hash4);

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

	if (iParam2 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

void func_587(int iParam0) // Position - 0x2376E Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_262(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_588(int iParam0) // Position - 0x237A1 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_589(Ped pedParam0, int iParam1) // Position - 0x23822 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_590(Ped pedParam0) // Position - 0x23861 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_591(Ped pedParam0, BOOL bParam1) // Position - 0x2387E Hash - 0x6BE4D4B ^0xC7F6BBCD
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return false;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return true;

	return false;
}

void func_592(BOOL bParam0) // Position - 0x238D4 Hash - 0x970FE035 ^0x92589DF6
{
	func_654(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

struct<4> func_593() // Position - 0x23907 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_594(Hash hParam0, Hash hParam1) // Position - 0x23913 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_595(int iParam0) // Position - 0x2392D Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_481(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_596(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_655(num7) - func_655(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_596(float fParam0) // Position - 0x23997 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_597(int iParam0) // Position - 0x23A23 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_598(int iParam0) // Position - 0x23A5C Hash - 0xB8632262 ^0xB8632262
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

int func_599(float fParam0, float fParam1) // Position - 0x23ADB Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_596(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_655(num));
	num3 = BUILTIN::TO_FLOAT(func_655(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_600(int iParam0) // Position - 0x23B4E Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_656(iParam0, &num))
		return func_655(num);

	switch (iParam0)
	{
		case 0:
			if (func_657())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_657())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_657())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_601(int iParam0) // Position - 0x23BDA Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_602(int iParam0, int iParam1, int iParam2) // Position - 0x23C0C Hash - 0x29688DE6 ^0x9B86B43E
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

	num = num + func_658(iParam0);
	str3 = func_660(func_659(num, iParam2));
	str5 = func_661(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_662(iParam0));
	num2 = func_663(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_664(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_280(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_665(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_603(int iParam0, int iParam1) // Position - 0x23D04 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_604(int iParam0) // Position - 0x23D1D Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_605(BOOL bParam0) // Position - 0x23D33 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_606(Hash hParam0) // Position - 0x23D58 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_607(Hash hParam0) // Position - 0x23D68 Hash - 0xB8632262 ^0xB8632262
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

int func_608(Hash hParam0) // Position - 0x23E0F Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_609(Hash hParam0) // Position - 0x23E48 Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_666(&entity, 0, i, &model) && !func_666(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_667(entity, &model);
		
			if (func_178(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_610() // Position - 0x23EB4 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_668(Global_35, &unk);
	unk31 = { func_472(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_669(false);
	func_670(7);
	func_671(joaat("kit_bandana"), true, true, false);

	if (func_422() == 1160113249)
	{
		func_671(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_671(-361635024, true, true, true);
	}

	func_672(Global_35, &unk);
	return;
}

int func_611(int iParam0) // Position - 0x23F3D Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_612(int iParam0) // Position - 0x23F62 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_613(int iParam0) // Position - 0x23F75 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_614(int iParam0) // Position - 0x23F88 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_615(int iParam0) // Position - 0x23F9B Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_616(int iParam0) // Position - 0x23FAD Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_617(int iParam0, int iParam1) // Position - 0x23FBF Hash - 0x9DDA1118 ^0x9DDA1118
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

void func_618(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2408A Hash - 0xA65AB937 ^0xA65AB937
{
	func_674(uParam0, iParam6);
	func_675(uParam0, iParam5);
	func_676(uParam0, iParam4);
	func_677(uParam0, iParam3);
	func_678(uParam0, iParam2);
	func_679(uParam0, iParam1);
	return;
}

int func_619(Hash hParam0) // Position - 0x240C2 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_399(outSlotId);
}

int func_620(Hash hParam0, int iParam1) // Position - 0x240E5 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_300(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_674(&num, year);
	func_675(&num, month);
	func_676(&num, day);
	func_677(&num, hour);
	func_678(&num, minute);
	func_679(&num, second);
	return num;
}

BOOL func_621(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2414A Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_680(iParam1) || !func_680(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_622(int iParam0, int iParam1) // Position - 0x24177 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_681(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_681(&iParam0->f_2[i /*2*/], 1))
					func_682(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_623(int iParam0, int iParam1, int iParam2) // Position - 0x242A3 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_683(iParam0, 1))
		func_684(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_624(int iParam0, int iParam1) // Position - 0x242EA Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_625(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x24303 Hash - 0xE34B9CEC ^0xAFBB60FB
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

	if (uParam0->f_1[num4 /*3*/].f_1 == 1216705912 || uParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			uParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_546(num2, num);
	
		if (bParam1)
			func_546(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_546(num3, num);
	}

	return;
}

BOOL func_626(int iParam0) // Position - 0x243EF Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_422();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_627(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x24415 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_628(Hash hParam0, int iParam1, var uParam2) // Position - 0x24459 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_629(int iParam0, int iParam1) // Position - 0x2446A Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_400(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_630(var uParam0) // Position - 0x24488 Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_631(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x244D3 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_106() == -1)
		func_685(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_686(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_632(BOOL bParam0, int iParam1) // Position - 0x24549 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_106() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			return Global_26796.f_26[iParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		return Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_633(int iParam0, BOOL bParam1, int iParam2) // Position - 0x245C6 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_687(&(Global_1946054.f_1378), iParam0);
	func_688(2, iParam0, 6);

	if (bParam1)
		func_634(false, true);

	return;
}

void func_634(BOOL bParam0, BOOL bParam1) // Position - 0x245EE Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_689(0);

	if (bParam0)
	{
		func_553(8);
		func_553(512);
	}
	else
	{
		func_553(8);
		func_553(16);
	}

	return;
}

BOOL func_635(int iParam0) // Position - 0x24621 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_636(int iParam0) // Position - 0x24636 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_637(int iParam0) // Position - 0x24656 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_638(float fParam0) // Position - 0x2466A Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_639(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x24685 Hash - 0xC24B5846 ^0x37EBA800
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

Hash func_640() // Position - 0x2472E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_641(int iParam0) // Position - 0x2473D Hash - 0xCCDB3731 ^0x5389C7A9
{
	Hash hash;

	hash = func_575(iParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_510(hash);
}

BOOL func_642() // Position - 0x24760 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_643(int iParam0) // Position - 0x247B3 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_446(iParam0))
		return -1;

	return func_691(func_690(iParam0));
}

BOOL func_644(int iParam0, int iParam1) // Position - 0x247D3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_645(Hash hParam0) // Position - 0x247E2 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_692(hParam0))
		num = 0;
	else if (func_693(hParam0))
		num = 1;
	else if (func_694(hParam0))
		num = 2;
	else if (func_695(hParam0))
		num = 3;

	return num;
}

BOOL func_646(int iParam0) // Position - 0x24825 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_89(func_696(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_647(int iParam0) // Position - 0x24865 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_89(func_697(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_648(int iParam0) // Position - 0x248A4 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_649() // Position - 0x248B7 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_106() != -1)
		return;

	func_252(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_484(1);
	func_602(1, num, 0);
	return;
}

void func_650(int iParam0) // Position - 0x248E9 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_651() // Position - 0x24900 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_106() != -1)
		return;

	func_252(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_484(2);
	func_602(2, num, 0);
	return;
}

void func_652() // Position - 0x24932 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_106() != -1)
		return;

	func_252(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_484(0);
	func_602(0, num, 0);
	return;
}

BOOL func_653(Any anParam0) // Position - 0x24964 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

void func_654(BOOL bParam0) // Position - 0x2499A Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

int func_655(int iParam0) // Position - 0x249AD Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_656(int iParam0, var uParam1) // Position - 0x24A23 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_657() // Position - 0x24A2C Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_658(int iParam0) // Position - 0x24A35 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_300(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_300(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_300(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_659(int iParam0, int iParam1) // Position - 0x24A97 Hash - 0xD5391B76 ^0x6C602124
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

const char* func_660(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x24AC9 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_661(int iParam0) // Position - 0x24ADD Hash - 0x21CE226B ^0x63E4DE65
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

char* func_662(int iParam0) // Position - 0x24B18 Hash - 0x21CE226B ^0x1C7C8A67
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

int func_663(int iParam0) // Position - 0x24B53 Hash - 0x21FAF347 ^0x467E3BE5
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

int func_664(int iParam0) // Position - 0x24B8E Hash - 0x5163992 ^0x5163992
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

int func_665(int iParam0) // Position - 0x24BBD Hash - 0x21FAF347 ^0xA8C8F0DA
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

BOOL func_666(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x24BF8 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_698(iParam1) && !func_699(iParam1))
		ped = func_700(iParam1);
	else
		return false;

	func_701(uParam3);
	num = func_702(iParam2);

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

void func_667(Entity eParam0, var uParam1) // Position - 0x24C97 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_703(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_704(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_668(Ped pedParam0, Any* panParam1) // Position - 0x24CE1 Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_260(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_669(BOOL bParam0) // Position - 0x24D46 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_178(hash, 0))
			func_705(hash, false, bParam0);
	
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

void func_670(int iParam0) // Position - 0x24DDF Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_106() == -1)
	{
		func_706(352481484);
	
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
	
		if (func_203(hash) != -999503751)
			func_707(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_708(hash, false))
			func_709(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_671(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x24FCF Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_710(hParam0))
		return;

	hash = func_203(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_711(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_711(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_711(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_711(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_711(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_711(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_712(0))
	{
		func_713(hParam0, true);
	
		if (func_422() == 1160113249)
			func_713(func_712(-2125499975), false);
		else
			func_713(func_712(1160113249), false);
	}

	func_714();

	if (func_715(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_300(false), hParam0, 0);

	func_709(hParam0, bParam3);

	if (bParam2)
		func_634(false, false);

	return;
}

void func_672(Ped pedParam0, var uParam1) // Position - 0x25135 Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_75(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

var func_673(BOOL bParam0, var uParam1, var uParam2) // Position - 0x251DE Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_674(var uParam0, int iParam1) // Position - 0x251F5 Hash - 0xD05180BA ^0x39589262
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

void func_675(var uParam0, int iParam1) // Position - 0x2527B Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_676(var uParam0, int iParam1) // Position - 0x252B7 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_612(*uParam0);
	num2 = func_611(*uParam0);

	if (iParam1 < 1 || iParam1 > func_617(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_677(var uParam0, int iParam1) // Position - 0x2530A Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_678(var uParam0, int iParam1) // Position - 0x25345 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_679(var uParam0, int iParam1) // Position - 0x2537E Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_680(int iParam0) // Position - 0x253B6 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_616(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_615(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_614(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_611(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_612(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_613(iParam0);

	if (num6 < 1 || num6 > func_617(num5, num4))
		return false;

	return true;
}

BOOL func_681(var uParam0, int iParam1) // Position - 0x25492 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_682(var uParam0, int iParam1, int iParam2) // Position - 0x254A3 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_683(int iParam0, int iParam1) // Position - 0x254B6 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_684(int iParam0, int iParam1) // Position - 0x254C7 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_685(Hash hParam0, int iParam1, int iParam2) // Position - 0x254DA Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_686(Hash hParam0, int iParam1, int iParam2) // Position - 0x25535 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_687(var uParam0, int iParam1) // Position - 0x2559F Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_106() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_685(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_686(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_688(BOOL bParam0, int iParam1, int iParam2) // Position - 0x2563A Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_106() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			Global_26796.f_26[iParam1 /*120*/] = Global_26796.f_26[iParam1 /*120*/] || bParam0;
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || bParam0;

	return;
}

void func_689(int iParam0) // Position - 0x256C2 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_690(int iParam0) // Position - 0x256D3 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_691(BOOL bParam0) // Position - 0x25711 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_692(Hash hParam0) // Position - 0x25724 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_178(hParam0, 0))
		return false;

	if (func_199(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_693(Hash hParam0) // Position - 0x2574E Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_178(hParam0, 0))
		return false;

	if (func_199(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_694(Hash hParam0) // Position - 0x25778 Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_178(hParam0, 0))
		return false;

	if (func_199(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_695(Hash hParam0) // Position - 0x257A2 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_178(hParam0, 0))
		return false;

	if (func_199(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_696(int iParam0, int iParam1) // Position - 0x257CC Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_716(iParam0);
	
		case 1:
			return func_717(iParam0);
	
		case 2:
			return func_718(iParam0);
	
		case 3:
			return func_719(iParam0);
	}

	return 0;
}

Hash func_697(int iParam0, int iParam1) // Position - 0x25825 Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_720(iParam0);
	
		case 1:
			return func_721(iParam0);
	
		case 2:
			return func_722(iParam0);
	
		case 3:
			return func_723(iParam0);
	
		case 4:
			return func_724(iParam0);
	
		case 5:
			return func_725(iParam0);
	
		case 6:
			return func_726(iParam0);
	
		case 7:
			return func_727(iParam0);
	
		case 8:
			return func_728(iParam0);
	}

	return 0;
}

BOOL func_698(int iParam0) // Position - 0x258D8 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_729(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_699(int iParam0) // Position - 0x25910 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_729(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_698(iParam0))
		return false;

	ped = func_700(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_700(int iParam0) // Position - 0x25964 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_729(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_701(var uParam0) // Position - 0x25990 Hash - 0x6843C143 ^0xA531F0D1
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

int func_702(int iParam0) // Position - 0x25A37 Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_703(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x25A6F Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_704(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x25AE4 Hash - 0xF684EE16 ^0xD8F147D7
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

void func_705(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x25B0D Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_203(hParam0))
	{
		case -2061583405:
			flag = func_730(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_730(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_730(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_730(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_730(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_730(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_714();

	if (bParam1)
		func_634(false, false);

	return;
}

void func_706(int iParam0) // Position - 0x25BDA Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_437(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_440(&unk, &num, &num2, false))
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
	
		func_411(num);
	}

	return;
}

void func_707(var uParam0, Hash hParam1, int iParam2) // Position - 0x25CA4 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_731(iParam2, *uParam0);
	func_732(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_708(Hash hParam0, BOOL bParam1) // Position - 0x25CDA Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_326(hParam0, false, false) };
	guid = { func_358(hParam0, unk, unk.f_4, false) };

	if (func_480(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_300(false), &guid, bParam1);
	return true;
}

void func_709(Hash hParam0, BOOL bParam1) // Position - 0x25D26 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_326(hParam0, false, false) };
	guid = { func_358(hParam0, unk, unk.f_4, false) };

	if (func_480(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_300(false), &guid, bParam1);
	return;
}

BOOL func_710(Hash hParam0) // Position - 0x25D70 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_106() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_711(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x25D99 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_733(hash, &unk))
		return 0;

	if (bParam3 && !func_708(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_203(hParam0) != -999503751)
		func_707(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_712(int iParam0) // Position - 0x25E41 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_422();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_713(Hash hParam0, BOOL bParam1) // Position - 0x25E6C Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_326(hParam0, false, false) };
	guid = { func_358(hParam0, unk, unk.f_4, false) };

	if (func_480(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_300(false), &guid);
	return 1;
}

void func_714() // Position - 0x25EB8 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_106() == -1)
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

BOOL func_715(Hash hParam0) // Position - 0x25FEE Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_735(func_734(hParam0));
}

Hash func_716(int iParam0) // Position - 0x26000 Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_717(int iParam0) // Position - 0x2608F Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_718(int iParam0) // Position - 0x2611E Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_719(int iParam0) // Position - 0x261AD Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_720(int iParam0) // Position - 0x2623C Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_721(int iParam0) // Position - 0x26285 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_722(int iParam0) // Position - 0x262CE Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_723(int iParam0) // Position - 0x26317 Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_724(int iParam0) // Position - 0x26360 Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_725(int iParam0) // Position - 0x263A9 Hash - 0x51E02475 ^0x25F7B61
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

Hash func_726(int iParam0) // Position - 0x263F2 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_727(int iParam0) // Position - 0x2643B Hash - 0x51E02475 ^0x50FB5131
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

Hash func_728(int iParam0) // Position - 0x26484 Hash - 0x51E02475 ^0x8656D204
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

int func_729(int iParam0) // Position - 0x264CD Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_730(Hash hParam0, int iParam1) // Position - 0x264E6 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_733(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_203(hParam0) != -999503751)
			func_736(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_203(hParam0) != -999503751)
		func_736(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_708(hParam0, true);
	return 1;
}

void func_731(int iParam0, int iParam1) // Position - 0x265CC Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_732(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x265E5 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_737(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_400(func_529(hParam1), 1);
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
		func_738(uParam0);

	return;
}

BOOL func_733(Hash hParam0, var uParam1) // Position - 0x26641 Hash - 0x4A27386E ^0xBC93C855
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

int func_734(Hash hParam0) // Position - 0x26681 Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_735(int iParam0) // Position - 0x266D1 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_736(int iParam0, int iParam1, int iParam2) // Position - 0x266E9 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_739(iParam1);
	func_740(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_741(&(iParam0->f_26), num2);
	
		if (func_742(iParam0->f_26, &num))
			func_743(num, num2);
	}

	return;
}

void func_737(var uParam0) // Position - 0x26732 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_744(&(uParam0->f_3));
	return;
}

void func_738(var uParam0) // Position - 0x26750 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_745(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_739(int iParam0) // Position - 0x26771 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_740(int iParam0, int iParam1) // Position - 0x26788 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_741(var uParam0, int iParam1) // Position - 0x267D0 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_737(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_742(int iParam0, var uParam1) // Position - 0x26801 Hash - 0xE231A73F ^0x924E070C
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

void func_743(int iParam0, int iParam1) // Position - 0x26845 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_744(var uParam0) // Position - 0x2685E Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_745(var uParam0, Any anParam1, int iParam2) // Position - 0x2688A Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_746(func_422());

	if (*uParam0)
		func_744(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_106() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_746(int iParam0) // Position - 0x268C1 Hash - 0xB4860741 ^0xB4860741
{
	if (func_106() == -1)
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

