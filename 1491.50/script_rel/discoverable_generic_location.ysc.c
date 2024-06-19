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
	var uLocal_16 = 2;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	Entity eLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	BOOL bLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 5;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 5;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 10;
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
	var uLocal_52 = 10;
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
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	Any anLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = -1;
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
	var uLocal_91 = -1;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 2;
	var uLocal_96 = 1;
	var uLocal_97 = 1;
	var uLocal_98 = 1;
	var uLocal_99 = 0;
	var uLocal_100 = 1;
	var uLocal_101 = 2;
	var uLocal_102 = 2;
	var uLocal_103 = 3;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
	var uLocal_107 = 1;
	var uLocal_108 = 3;
	var uLocal_109 = 3;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x54A9ED6B ^0xBF64DCBB
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	anLocal_70 = anScriptParam_0;
	iLocal_71.f_1 = anScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&iLocal_71);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_1(&iLocal_71);

	while (func_2())
	{
		switch (iLocal_69)
		{
			case 0:
				if (func_3(&iLocal_71))
				{
					iLocal_69 = 1;
				
					if (iLocal_71.f_4 == -1)
						iLocal_71.f_4 = func_4(&iLocal_71);
				}
				break;
		
			case 1:
				if (func_5(&iLocal_71))
					func_6(&iLocal_71);
			
				func_7(&iLocal_71);
				func_8(&iLocal_71);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&iLocal_71);
	return;
}

void func_1(var uParam0) // Position - 0xA4 Hash - 0x24052CB4 ^0x3F2A6941
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(anLocal_70);
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

	if (iLocal_71 == 0)
	{
		scenarioPointType = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		iLocal_71 = func_10(scenarioPointType);
		return false;
	}

	if (func_11(iLocal_71, 4) || Global_40.f_8863.f_156)
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
	int num;
	int num2;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	iLocal_24 > 0 && iLocal_24 < 13;

	switch (iLocal_24)
	{
		case 0:
			if (func_39(uParam0->f_3, 1))
				func_43(&(uParam0->f_3), 1);
		
			if (*uParam0 == -544327665 || *uParam0 == 1120968795 || *uParam0 == 1519472817 || *uParam0 == -1859023693)
			{
				if (!func_20(uParam0))
					if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 40f, true, true))
						return;
				else
					return;
			}
			else if (*uParam0 == 308500632 || *uParam0 == 221420861)
			{
				if (!func_49(uParam0))
					return;
			}
			else if (*uParam0 == -1761578407)
			{
				if (uParam0->f_4 == 7)
					func_50(1);
			
				if (!func_49(uParam0))
					return;
			
				if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 40f, true, true))
					return;
			
				if (!func_20(uParam0))
					if (func_11(*uParam0, 16))
						func_51(*uParam0, 16);
			}
			else if (*uParam0 == 404434344)
			{
				if (!func_49(uParam0))
					return;
			}
			else if (*uParam0 == -890175011 || *uParam0 == 677950956)
			{
				if (!func_20(uParam0))
					if (func_11(*uParam0, 16))
						func_51(*uParam0, 16);
			
				if (!func_49(uParam0))
					return;
			}
			else if (*uParam0 == -1272862985)
			{
				if (func_20(uParam0))
					if (!func_11(*uParam0, 16))
						func_32(*uParam0, 16);
				else if (func_11(*uParam0, 16))
					func_51(*uParam0, 16);
			}
			else if (*uParam0 == -321841939)
			{
				if (!func_20(uParam0))
					if (!func_52())
						if (func_11(*uParam0, 16))
							func_51(*uParam0, 16);
			}
			else if (*uParam0 == 74587361)
			{
				if (func_53(*uParam0))
				{
					if (func_16(59))
						if (!func_54(-108307814))
							if (!func_55(-108307814))
								func_56(-108307814, true, false);
				
					func_57(&iLocal_24, 13, true);
					return;
				}
			}
			else if (*uParam0 == 1464664327 || *uParam0 == 1347913620)
			{
				if (func_53(*uParam0))
				{
					func_57(&iLocal_24, 13, true);
					return;
				}
			}
			else if (*uParam0 == 2000209669)
			{
				if (uParam0->f_4 == 11)
				{
					if (func_20(uParam0))
					{
						if (!func_11(*uParam0, 16))
							func_32(*uParam0, 16);
					
						if (!func_11(*uParam0, 32))
							func_32(*uParam0, 32);
					}
					else
					{
						if (func_11(*uParam0, 16))
							func_51(*uParam0, 16);
					
						if (func_11(*uParam0, 32))
							func_51(*uParam0, 32);
					}
				}
				else if (func_58(uParam0, true))
				{
					if (func_20(uParam0))
					{
						if (!func_11(*uParam0, 16))
							func_32(*uParam0, 16);
					
						if (!func_11(*uParam0, 32))
							func_32(*uParam0, 32);
					}
					else
					{
						if (func_11(*uParam0, 16))
							func_51(*uParam0, 16);
					
						if (func_11(*uParam0, 32))
							func_51(*uParam0, 32);
					}
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == -1308658310)
			{
				if (func_53(*uParam0))
				{
					if (!func_59(uParam0, 0))
						return;
				
					func_57(&iLocal_24, 13, true);
				}
				else
				{
					if (!func_59(uParam0, 1))
						return;
				
					if (!func_49(uParam0))
						return;
				}
			}
			else
			{
				func_53(*uParam0);
			}
		
			func_60(uParam0);
			func_57(&iLocal_24, 1, true);
			break;
	
		case 1:
			func_61(uParam0);
			func_57(&iLocal_24, 2, true);
			break;
	
		case 2:
			if (!func_62(uParam0) || func_63())
				return;
		
			func_57(&iLocal_24, 3, true);
			break;
	
		case 3:
			if (func_64(uParam0))
				func_57(&iLocal_24, 10, true);
			break;
	
		case 10:
			if (!(*uParam0 == 1535254161))
			{
				if (!func_39(uParam0->f_3, 1))
				{
					func_40(&(uParam0->f_3), 1);
				
					if (*uParam0 == -1614148516)
						Global_40.f_8863.f_146 = Global_40.f_8863.f_146 + 1;
				}
			}
		
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
				{
					if (func_67(&(iLocal_24.f_1)) >= 5f)
					{
						MISC::SET_WEATHER_TYPE(joaat("Fog"), false, true, true, 15f, false);
						fLocal_22 = 0.1f;
						GRAPHICS::USE_PARTICLE_FX_ASSET("scr_discoverables");
						iLocal_20 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_disc_whispering_trees", func_68(uParam0), 0f, 0f, 0f, 1065353216, false, false, false, false);
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
						func_57(&iLocal_24, 11, true);
					}
				}
				else
				{
					func_25(&(iLocal_24.f_1));
				}
			}
			else if (*uParam0 == 1464664327)
			{
				if (!func_11(*uParam0, 8) && VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
					func_69(uParam0);
			
				if (func_70(uParam0))
				{
					func_71(uParam0);
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			}
			else if (*uParam0 == -1308658310)
			{
				if (func_72(uParam0))
				{
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			}
			else if (*uParam0 == 2000209669)
			{
				if (uParam0->f_4 == 11)
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
						
							if (func_39(Global_40.f_8863.f_152, 2048) && func_39(Global_40.f_8863.f_152, 4096) && func_39(Global_40.f_8863.f_152, 8192) && func_39(Global_40.f_8863.f_152, 16384))
								func_71(uParam0);
							else
								func_74(*uParam0);
						}
					}
				}
				else if (!func_53(*uParam0))
				{
					if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
						func_74(*uParam0);
				
					if (func_75(uParam0))
						if (func_39(Global_40.f_8863.f_152, 2048) && func_39(Global_40.f_8863.f_152, 4096) && func_39(Global_40.f_8863.f_152, 8192) && func_39(Global_40.f_8863.f_152, 16384) && func_11(*uParam0, 16))
							func_71(uParam0);
				}
			}
			else if (*uParam0 == 1347913620)
			{
				if (!func_11(*uParam0, 8))
					if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
						func_69(uParam0);
			
				if (!func_11(*uParam0, 32))
					if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
						func_74(*uParam0);
			
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[0]))
					if (func_48(Global_35, func_76(uParam0, 0), 15f, true, true))
						TASK::_0xA6A76D666A281F2D(uLocal_28[0], func_77(uParam0, 0));
			
				if (func_78())
				{
					if (func_79(func_77(uParam0, 0)))
					{
						func_71(uParam0);
						func_66(uParam0);
						func_57(&iLocal_24, 13, true);
					}
				}
			}
			else if (*uParam0 == -834293086)
			{
				if (!func_20(uParam0))
				{
					func_73(uParam0);
					func_80(uParam0);
					func_74(*uParam0);
				}
			
				if (!func_53(*uParam0))
					if (func_39(Global_40.f_8863.f_153, 1) && func_39(Global_40.f_8863.f_153, 2) && func_39(Global_40.f_8863.f_153, 4))
						func_32(*uParam0, 2);
			
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
					if (func_48(Global_35, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true), 15f, true, true))
						if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "IsWithinHornetsVolume"))
							PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", true, -1);
					else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "IsWithinHornetsVolume"))
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", false, -1);
			}
			else if (*uParam0 == 404434344)
			{
				func_81(uParam0);
			}
			else if (*uParam0 == -1761578407)
			{
				if (uParam0->f_4 == 0 || uParam0->f_4 == 1 || uParam0->f_4 == 2 || uParam0->f_4 == 3 || uParam0->f_4 == 4 || uParam0->f_4 == 5 || uParam0->f_4 == 6 || uParam0->f_4 == 7 || uParam0->f_4 == 8)
					func_81(uParam0);
			}
			else if (*uParam0 == -890175011)
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
						
							if (func_39(Global_40.f_8863.f_154, 2048) && func_39(Global_40.f_8863.f_154, 4096) && func_39(Global_40.f_8863.f_154, 8192) && func_39(Global_40.f_8863.f_154, 16384) && func_39(Global_40.f_8863.f_154, 32768))
								func_71(uParam0);
						}
					}
				}
			}
			else if (*uParam0 == 677950956)
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
						
							if (func_39(Global_40.f_8863.f_154, 65536) && func_39(Global_40.f_8863.f_154, 131072) && func_39(Global_40.f_8863.f_154, 262144) && func_39(Global_40.f_8863.f_154, 524288) && func_39(Global_40.f_8863.f_154, 1048576) && func_39(Global_40.f_8863.f_154, 2097152))
								func_71(uParam0);
						}
					}
				}
			}
			else if (*uParam0 == -1272862985)
			{
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_73(uParam0);
							func_80(uParam0);
						
							if (func_39(Global_40.f_8863.f_152, 262144) && func_39(Global_40.f_8863.f_152, 524288) && func_39(Global_40.f_8863.f_152, 1048576) && func_39(Global_40.f_8863.f_152, 2097152))
								func_71(uParam0);
							else
								func_74(*uParam0);
						}
					}
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
			
				if (!func_53(*uParam0))
				{
					if (!func_20(uParam0))
					{
						if (func_11(*uParam0, 16))
						{
							func_83(uParam0->f_4);
							func_84(uParam0);
						
							if (func_52())
							{
								func_71(uParam0);
								func_57(&iLocal_24, 11, true);
							}
							else
							{
								num = func_85();
								func_86(-321841939, num, 20);
								func_87(MISC::VAR_STRING(2, "DISCO_DC_FOUND", num, 20));
							}
						
							PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
						}
					}
				}
			}
			else if (*uParam0 == -1614148516)
			{
				if (func_11(*uParam0, 16))
					if (!func_53(*uParam0))
						func_71(uParam0);
			
				if (func_48(Global_35, func_76(uParam0, 0), 75f, true, true))
					if (func_88(uParam0, &eLocal_19, &uLocal_28, 0, 7))
						if (ENTITY::IS_ENTITY_DEAD(uLocal_28[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_28[0], Global_35, true, true))
							if (AUDIO::IS_STREAM_PLAYING(iLocal_21))
								AUDIO::STOP_STREAM(iLocal_21);
			}
			else if (*uParam0 == -161804536)
			{
				func_89(uParam0);
			
				if (!func_11(*uParam0, 32) && func_11(*uParam0, 16))
					func_74(*uParam0);
			
				if (func_11(*uParam0, 16) && func_39(Global_40.f_8863.f_152, 131072))
					if (!func_53(*uParam0))
						func_71(uParam0);
			}
			else if (*uParam0 == 503180747)
			{
				if (func_90(uParam0))
				{
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			}
			else if (*uParam0 == -1958832660 || *uParam0 == 247563739 || *uParam0 == 1734766691 || *uParam0 == 1535254161 || *uParam0 == 58958195 || *uParam0 == 308500632 || *uParam0 == 1986618633 || *uParam0 == -986176781 || *uParam0 == -232974724 || *uParam0 == -1053108445 || *uParam0 == -979575591 || *uParam0 == -1609238411 || *uParam0 == 921081956 || *uParam0 == -148407339 || *uParam0 == -1109016944 || *uParam0 == -1646022773 || *uParam0 == -1505275983 || *uParam0 == -1761189332 || *uParam0 == -607940493 || *uParam0 == -1787770845 || *uParam0 == -1891628345 || *uParam0 == -1960242214 || *uParam0 == -1272862985 || *uParam0 == -1243267511)
			{
				if (*uParam0 == 1535254161)
					func_91(uParam0);
			
				if (*uParam0 == -1243267511)
				{
					if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
					{
						uParam0->f_4 = func_4(uParam0);
						uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
					}
				}
			
				if (*uParam0 == -1109016944 || *uParam0 == -232974724 || *uParam0 == -1960242214)
					if (!func_11(*uParam0, 8) && VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
						func_69(uParam0);
			
				if (func_11(*uParam0, 16))
					if (!func_53(*uParam0))
						func_71(uParam0);
			}
			else if (!func_53(*uParam0))
			{
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
				{
					if (*uParam0 == -544327665 || *uParam0 == 1120968795 || *uParam0 == 1519472817 || *uParam0 == -1859023693)
					{
						func_73(uParam0);
						func_80(uParam0);
						func_74(*uParam0);
					
						if (*uParam0 == -544327665)
							if (func_39(Global_40.f_8863.f_152, 1) && func_39(Global_40.f_8863.f_152, 2) && func_39(Global_40.f_8863.f_152, 4))
								func_32(*uParam0, 2);
						else if (*uParam0 == 1120968795)
							if (func_39(Global_40.f_8863.f_153, 1024) && func_39(Global_40.f_8863.f_153, 2048))
								func_32(*uParam0, 2);
						else if (*uParam0 == 1519472817)
							if (func_39(Global_40.f_8863.f_153, 8388608) && func_39(Global_40.f_8863.f_153, 16777216))
								func_32(*uParam0, 2);
						else if (*uParam0 == -1859023693)
							if (func_39(Global_40.f_8863.f_153, 4096) && func_39(Global_40.f_8863.f_153, 8192) && func_39(Global_40.f_8863.f_153, 16384) && func_39(Global_40.f_8863.f_153, 32768) && func_39(Global_40.f_8863.f_153, 65536) && func_39(Global_40.f_8863.f_153, 131072) && func_39(Global_40.f_8863.f_153, 262144) && func_39(Global_40.f_8863.f_153, 524288) && func_39(Global_40.f_8863.f_153, 1048576) && func_39(Global_40.f_8863.f_153, 2097152) && func_39(Global_40.f_8863.f_153, 4194304))
								func_32(*uParam0, 2);
					}
					else if (*uParam0 == 74587361)
					{
						if (func_16(59))
							if (!func_54(-108307814))
								func_93(-108307814, 0, 0, 7, 0);
					
						func_71(uParam0);
					}
					else
					{
						func_71(uParam0);
					}
				
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			}
			else
			{
				func_57(&iLocal_24, 13, true);
			}
			break;
	
		case 11:
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			
				if (!bLocal_23)
				{
					if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
					{
						if (fLocal_22 < 1f)
						{
							if (func_67(&(iLocal_24.f_1)) >= 1f)
							{
								fLocal_22 = fLocal_22 + 0.1f;
							
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
									GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
							
								func_25(&(iLocal_24.f_1));
							}
						}
						else
						{
							bLocal_23 = true;
							AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), true, true);
							AUDIO::_SET_AMBIENT_ZONE_POSITION(func_65(uParam0), func_68(uParam0), 0f);
						}
					}
				}
				else if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
				{
					if (func_67(&(iLocal_24.f_1)) >= 5f)
					{
						AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
						func_57(&iLocal_24, 12, true);
					}
					else
					{
						func_25(&(iLocal_24.f_1));
					}
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
			
				if (func_94())
					func_57(&iLocal_24, 12, true);
				else if (func_67(&(iLocal_24.f_1)) > 9f)
					func_57(&iLocal_24, 12, true);
			}
			break;
	
		case 12:
			if (*uParam0 == 221420861)
			{
				if (!func_49(uParam0))
				{
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			
				if (fLocal_22 > 0.1f)
				{
					if (func_67(&(iLocal_24.f_1)) >= 1f)
					{
						fLocal_22 = fLocal_22 - 0.1f;
					
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_20, "density", fLocal_22, false);
					
						func_25(&(iLocal_24.f_1));
					}
				}
				else
				{
					bLocal_23 = false;
					AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					func_71(uParam0);
					func_66(uParam0);
					func_57(&iLocal_24, 13, true);
				}
			}
			else if (*uParam0 == -321841939)
			{
				func_82(uParam0);
			
				if (!func_94())
				{
					num2 = func_85();
					func_86(-321841939, num2, 20);
					func_87(MISC::VAR_STRING(2, "DISCO_DC_FOUND", num2, 20));
					func_71(uParam0);
					func_37(true, -1);
					func_57(&iLocal_24, 13, true);
				}
			}
			break;
	
		case 13:
			break;
	
		default:
			break;
	}

	return;
}

void func_9(var uParam0) // Position - 0x1E1B Hash - 0x6F3B3A47 ^0x731D0A7B
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
		TASK::_DELETE_SCENARIO_POINT(iLocal_15);

	if (*uParam0 == 2000209669)
		func_58(uParam0, false);
	else if (*uParam0 == -834293086)
		if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "IsWithinHornetsVolume"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsWithinHornetsVolume", false, -1);
	else if (*uParam0 == 221420861)
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	else if (*uParam0 == 1535254161)
		AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);

	if (*uParam0 == 2000209669)
	{
	}
	else if (*uParam0 == -1614148516)
	{
		if (AUDIO::IS_STREAM_PLAYING(iLocal_21))
			AUDIO::STOP_STREAM(iLocal_21);
	}

	if (!(eLocal_19 == 0) && ENTITY::IS_MAP_ENTITY_PINNED(eLocal_19))
		ENTITY::_UNPIN_MAP_ENTITY(eLocal_19);

	func_66(uParam0);
	func_95(&uLocal_28, true);
	func_96(&uLocal_40, true);
	func_97(uParam0);
	return;
}

int func_10(Hash hParam0) // Position - 0x1EF3 Hash - 0xB8EC44B7 ^0xB12C5BE7
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

BOOL func_11(int iParam0, BOOL bParam1) // Position - 0x26E4 Hash - 0x92045BA6 ^0x92045BA6
{
	if (!func_98(iParam0))
		return false;

	return Global_40.f_8863[func_99(iParam0, 1)] && bParam1 != false;
}

void func_12(var uParam0) // Position - 0x270E Hash - 0xDA8817E5 ^0xAD3AC0C4
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

Vector3 func_13(var uParam0, int iParam1) // Position - 0x2BF7 Hash - 0xAF22EF00 ^0xAF22EF00
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
				return func_92(uParam0, iParam1);
			break;
	
		case -1272862985:
			return func_92(uParam0, iParam1);
	
		case -1243267511:
			return func_92(uParam0, iParam1);
	
		case -890175011:
			return func_92(uParam0, iParam1);
	
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
			return func_92(uParam0, iParam1);
	
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
			return func_92(uParam0, iParam1);
	
		case 870958936:
			return func_101(uParam0, iParam1);
	
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
			return func_92(uParam0, iParam1);
	
		case 2000209669:
			return func_100(uParam0, iParam1);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

float func_14(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x30AD Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_15() // Position - 0x30D5 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_102() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_16(int iParam0) // Position - 0x30FA Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_103(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_17(var uParam0) // Position - 0x3159 Hash - 0x700EF42A ^0x1FB24E73
{
	if (func_39(uParam0->f_3, 1))
		return true;

	return false;
}

void func_18(var uParam0) // Position - 0x3172 Hash - 0xB1BE772 ^0x50C155FC
{
	if (func_33(uParam0->f_6.f_8))
		func_104(&(uParam0->f_6.f_8), true, true);

	func_25(&(uParam0->f_6.f_5));

	if (func_39(uParam0->f_3, 2))
		func_43(&(uParam0->f_3), 2);

	return;
}

void func_19(var uParam0, int iParam1) // Position - 0x31B2 Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

BOOL func_20(var uParam0) // Position - 0x31C0 Hash - 0x52835008 ^0x3922FFAC
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

void func_21(var uParam0) // Position - 0x3E7B Hash - 0x32186C70 ^0xD26CF7E4
{
	uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
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
			func_105(uParam0);
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
			func_105(uParam0);
			break;
	
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
		
			if (uParam0->f_4 == 0 || uParam0->f_4 == 1 || uParam0->f_4 == 3 || uParam0->f_4 == 4)
				func_105(uParam0);
			break;
	
		case -607940493:
			uParam0->f_6 = 30f;
			func_105(uParam0);
			break;
	
		case -321841939:
			uParam0->f_6 = 10f;
			break;
	
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
		
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
				func_105(uParam0);
			break;
	
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			func_105(uParam0);
			break;
	
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4098 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_23(var uParam0) // Position - 0x40C2 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_24(var uParam0) // Position - 0x40D8 Hash - 0x5001E582 ^0x5001E582
{
	return func_106(*uParam0, 1);
}

void func_25(var uParam0) // Position - 0x40E8 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_107(uParam0, 0f);
	return;
}

int func_26(var uParam0) // Position - 0x40F7 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_24(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_108(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_109() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_27(var uParam0, BOOL bParam1) // Position - 0x414A Hash - 0x1ACEECAF ^0xDBC34297
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
			return true;
	
		if (func_110(uParam0))
			return true;
	
		if (!func_111(uParam0, 0))
			return true;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return true;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !func_112(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6.f_1 + 0.5f || !func_112(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_110(uParam0))
			return false;
	
		if (!func_111(uParam0, 0))
			return false;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return false;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && func_112(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) <= uParam0->f_6.f_1 && func_112(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}

	return false;
}

void func_28(var uParam0) // Position - 0x436C Hash - 0x96ECE1F9 ^0x9851507E
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (func_53(*uParam0))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_113("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			func_34(uParam0->f_6.f_8, false, true);
		}
		else
		{
			uParam0->f_6.f_8 = func_113("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
		}
	
		func_114(uParam0->f_6.f_8, 13, true, true);
		func_115(uParam0->f_6.f_8);
	}

	return;
}

char* func_29(var uParam0) // Position - 0x47BC Hash - 0x7223E95E ^0xC1105508
{
	if (*uParam0 == 404434344)
		if (func_53(*uParam0))
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

void func_30(var uParam0, int iParam1, char* sParam2, BOOL bParam3) // Position - 0x502D Hash - 0x92B8786B ^0x6992BF35
{
	int num;
	int num2;
	int num3;

	if (!func_33(iParam1))
		return;

	num = func_116(iParam1);

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

BOOL func_31(var uParam0) // Position - 0x50F8 Hash - 0x87BF472A ^0x8A3FB963
{
	if (func_117(uParam0->f_6.f_8, true))
		return true;

	return false;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0x5113 Hash - 0x54AA129E ^0x54AA129E
{
	if (!func_98(iParam0))
		return;

	Global_40.f_8863[func_99(iParam0, 1)] = Global_40.f_8863[func_99(iParam0, 1)] || bParam1;
	return;
}

BOOL func_33(int iParam0) // Position - 0x5149 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_34(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5188 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_33(iParam0))
		return;

	num = func_116(iParam0);
	func_118(num, bParam1);
	return;
}

void func_35(var uParam0) // Position - 0x51B4 Hash - 0xB093A844 ^0xA61CDF5C
{
	if (func_102() != -1)
		return;

	if (*uParam0 == -321841939)
	{
		if (func_119(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
				MAP::_MAP_DISCOVER_REGION(func_119(uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_120(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_120(*uParam0, uParam0->f_4)))
				MAP::_MAP_DISCOVER_REGION(func_120(*uParam0, uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	
		func_69(uParam0);
	}

	return;
}

void func_36(var uParam0, BOOL bParam1) // Position - 0x5242 Hash - 0x3BBAC949 ^0x751C9296
{
	int num;

	if (*uParam0 == -321841939)
		if (bParam1)
			if (func_85() < 20 - 1)
				return;
		else if (!func_52())
			return;

	if (bParam1)
		num = func_122(*uParam0, func_121(), uParam0->f_4);
	else
		num = func_123(*uParam0, uParam0->f_4);

	if (num != 0)
	{
		if (bParam1)
		{
			func_124(num, 0);
		
			if (*uParam0 == -890175011)
			{
				if (func_125() == 5 - 1)
				{
					if (func_121())
					{
						func_124(joaat("journal_town_secret_vampmap_ar"), 0);
						num = joaat("journal_town_secret_vampmap_ar");
					}
					else
					{
						func_124(joaat("journal_town_secret_vampmap_jn"), 0);
						num = joaat("journal_town_secret_vampmap_jn");
					}
				}
			}
		}
	
		if (func_126())
		{
			Global_1357518 = num;
		
			if (bParam1 == true)
				Global_1357519 = { uParam0->f_6.f_2 };
		}
	}

	return;
}

void func_37(BOOL bParam0, int iParam1) // Position - 0x5313 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_127(&Global_0, 8);

	if (!func_128() || func_102() != -1)
		return;

	func_127(&Global_0, 1);
	return;
}

float func_38(int iParam0, BOOL bParam1) // Position - 0x5359 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return 0f;

	num = func_116(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x53B1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_40(int iParam0, int iParam1) // Position - 0x53C0 Hash - 0xF55E891F ^0xF55E891F
{
	func_129(iParam0, iParam1);
	return;
}

void func_41(var uParam0) // Position - 0x53D0 Hash - 0x7DD80D7C ^0x2A3ED7AA
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_92(uParam0, uParam0->f_4) };
	return;
}

void func_42(var uParam0) // Position - 0x5417 Hash - 0xC9354E8F ^0x12F79925
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &(uParam0->f_6.f_10));

	return;
}

void func_43(int iParam0, int iParam1) // Position - 0x5437 Hash - 0xF55E891F ^0xF55E891F
{
	func_130(iParam0, iParam1);
	return;
}

void func_44(var uParam0) // Position - 0x5447 Hash - 0x90A3D13B ^0x25DA303B
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(Global_35, 6, false);

	return;
}

BOOL func_45(int iParam0) // Position - 0x5463 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_46(var uParam0) // Position - 0x54E1 Hash - 0xA77C53D8 ^0x41543EB2
{
	Vector3 vector;
	var coords;

	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		func_131(*uParam0, &vector);
	
		if (FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(-1, vector, vector.f_3, vector.f_6) == func_132(Global_35))
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

void func_47(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x556A Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_102() != -1)
		return;

	if (Global_36616 && func_133(iParam1) != false)
		return;

	num = func_134(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_135(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
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
			func_136(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_135(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

BOOL func_48(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5669 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_137(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_49(var uParam0) // Position - 0x56C4 Hash - 0x2536D815 ^0x2536D815
{
	switch (*uParam0)
	{
		case -2108030724:
			if (!func_16(26))
				return false;
			break;
	
		case -2008558277:
			if (func_142(19))
				return false;
			break;
	
		case -1887999095:
			if (!func_16(21))
				return false;
			break;
	
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!func_138() && !func_139())
				{
					!func_138();
					!func_139();
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!func_54(8924991) && !func_54(665676602))
				{
					!func_54(8924991);
					!func_54(665676602);
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!func_54(1488286867))
					return false;
			}
			else if (uParam0->f_4 == 6)
			{
				if (!func_54(651395116))
					return false;
			}
			else if (uParam0->f_4 == 7)
			{
				if (!func_54(-1241340344))
					return false;
			}
			else if (uParam0->f_4 == 8)
			{
				if (!func_54(409602249))
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
			if (func_142(11))
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
			if (func_142(29))
				return false;
			break;
	
		case 308500632:
			if (!(Global_40.f_11623[20 /*8*/] > 0))
				return false;
			break;
	
		case 404434344:
			if (!func_138() && !func_139())
			{
				!func_138();
				!func_139();
				return false;
			}
			else if (func_140(77))
			{
				return false;
			}
			else if (func_141() != 0)
			{
				return false;
			}
			break;
	
		case 677950956:
			if (!func_15())
				return false;
			break;
	
		case 1861313914:
			if (func_140(19) || func_142(4))
				return false;
			break;
	
		case 1982045664:
			if (func_140(66))
				return false;
			break;
	}

	return true;
}

void func_50(int iParam0) // Position - 0x5939 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1310750.f_16035 = Global_1310750.f_16035 || iParam0;
	return;
}

void func_51(int iParam0, BOOL bParam1) // Position - 0x5952 Hash - 0xF95652D5 ^0xF95652D5
{
	if (!func_98(iParam0))
		return;

	Global_40.f_8863[func_99(iParam0, 1)] = Global_40.f_8863[func_99(iParam0, 1)] - Global_40.f_8863[func_99(iParam0, 1)] && bParam1;
	return;
}

BOOL func_52() // Position - 0x5998 Hash - 0xA0319B77 ^0x14CE505F
{
	int i;
	int num;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num = func_143(i);
	
		if (!func_39(Global_40.f_8863.f_148, num))
			return false;
	}

	return true;
}

BOOL func_53(int iParam0) // Position - 0x59D4 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_11(iParam0, 2);
}

BOOL func_54(int iParam0) // Position - 0x59E3 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_144(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_55(int iParam0) // Position - 0x5A32 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_145(iParam0, &unk);
}

void func_56(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5A42 Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_148();
			func_146(iParam0);
			break;
	
		case -1925798111:
			func_146(-1925798111);
			func_147(-919512195);
			func_147(420709909);
			func_147(1703426636);
			break;
	
		case -1838352012:
			func_147(-1674179981);
			func_147(-1835851517);
			func_146(-1838352012);
			break;
	
		case -1835851517:
			func_147(-1674179981);
			func_147(-1838352012);
			func_146(-1835851517);
			break;
	
		case -1738165526:
			func_146(-1738165526);
			func_147(0);
			func_147(473295046);
			break;
	
		case -1717960576:
			func_147(210001842);
			func_146(-1717960576);
			break;
	
		case -1674179981:
			func_147(-1835851517);
			func_147(-1838352012);
			func_146(-1674179981);
			break;
	
		case -1612662716:
			func_147(1822001510);
			func_146(-1612662716);
			break;
	
		case -1414537028:
			func_147(38162571);
			func_147(1350391819);
			func_147(54073871);
			func_146(-1414537028);
			break;
	
		case -1311865656:
			func_146(-1311865656);
			func_147(1509509592);
			func_147(-959357075);
			func_147(405586984);
			break;
	
		case -1271608261:
			func_147(-150493654);
			func_147(1846061697);
			func_147(-1145519186);
			func_146(-1271608261);
			break;
	
		case -1223121209:
			func_146(-1223121209);
			func_147(630808005);
			break;
	
		case -1145519186:
			func_147(-150493654);
			func_147(-1271608261);
			func_147(1846061697);
			func_146(-1145519186);
			break;
	
		case -1124061431:
			func_147(198200492);
			func_146(-1124061431);
			func_147(52706132);
			func_147(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_146(-1080627546);
			else
				func_147(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_147(-538889627);
			func_147(-538880323);
			func_147(-1056767524);
			func_146(iParam0);
			break;
	
		case -959357075:
			func_146(-959357075);
			func_147(1509509592);
			func_147(405586984);
			func_147(-1311865656);
			break;
	
		case -919512195:
			func_146(-919512195);
			func_147(-1925798111);
			func_147(420709909);
			func_147(1703426636);
			break;
	
		case -664252410:
			func_147(2019386373);
			func_147(2109952320);
			func_146(-664252410);
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
			func_149();
			func_146(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_146(-524145696);
			else
				func_147(-524145696);
		
			func_147(1626481264);
			func_147(282809459);
			break;
	
		case -502324015:
			func_147(1497516462);
			func_147(2016141805);
			func_147(1010885152);
			func_146(-502324015);
			break;
	
		case -434590080:
			func_147(1376646519);
			func_147(931649776);
			func_147(1743048395);
			func_147(449774763);
			func_146(-434590080);
			break;
	
		case -404698347:
			func_147(1306158345);
			func_147(1952610440);
			func_147(-223469678);
			func_147(1517904467);
			func_146(-404698347);
			break;
	
		case -259123672:
			func_147(198200492);
			func_147(-1124061431);
			func_147(52706132);
			func_146(-259123672);
			break;
	
		case -223469678:
			func_147(1306158345);
			func_147(1952610440);
			func_147(-404698347);
			func_147(1517904467);
			func_146(-223469678);
			break;
	
		case -150493654:
			func_147(-1271608261);
			func_147(1846061697);
			func_147(-1145519186);
			func_146(-150493654);
			break;
	
		case 0:
			func_146(0);
			func_147(473295046);
			func_147(-1738165526);
			break;
	
		case 38162571:
			func_147(-1414537028);
			func_147(1350391819);
			func_147(54073871);
			func_146(38162571);
			break;
	
		case 52706132:
			func_147(198200492);
			func_147(-1124061431);
			func_146(52706132);
			func_147(-259123672);
			break;
	
		case 54073871:
			func_147(-1414537028);
			func_147(38162571);
			func_147(1350391819);
			func_146(54073871);
			break;
	
		case 198200492:
			func_146(198200492);
			func_147(-1124061431);
			func_147(52706132);
			func_147(-259123672);
			break;
	
		case 210001842:
			func_147(-1717960576);
			func_146(210001842);
			break;
	
		case 280705402:
			func_147(1766284049);
			func_147(1926308480);
			func_146(280705402);
			break;
	
		case 282809459:
			func_146(282809459);
			func_147(1626481264);
			func_147(-524145696);
			break;
	
		case 405586984:
			func_146(405586984);
			func_147(1509509592);
			func_147(-959357075);
			func_147(-1311865656);
			break;
	
		case 420709909:
			func_146(420709909);
			func_147(-919512195);
			func_147(-1925798111);
			func_147(1703426636);
			break;
	
		case 439465264:
			if (func_54(1609506757))
				if (bParam1)
					func_146(439465264);
				else
					func_147(439465264);
			break;
	
		case 449774763:
			func_147(1376646519);
			func_147(931649776);
			func_147(-434590080);
			func_147(1743048395);
			func_146(449774763);
			break;
	
		case 473295046:
			func_146(473295046);
			func_147(0);
			func_147(-1738165526);
			break;
	
		case 630808005:
			func_146(630808005);
			func_147(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_146(885203519);
			else
				func_147(885203519);
			break;
	
		case 931649776:
			func_147(1376646519);
			func_147(-434590080);
			func_147(1743048395);
			func_147(449774763);
			func_146(931649776);
			break;
	
		case 932909855:
			func_146(932909855);
			func_147(2051822093);
			break;
	
		case 1010885152:
			func_147(1497516462);
			func_147(2016141805);
			func_146(1010885152);
			func_147(-502324015);
			break;
	
		case 1306158345:
			func_147(1952610440);
			func_147(-223469678);
			func_147(-404698347);
			func_147(1517904467);
			func_146(1306158345);
			break;
	
		case 1350391819:
			func_147(-1414537028);
			func_147(38162571);
			func_147(54073871);
			func_146(1350391819);
			break;
	
		case 1376646519:
			func_147(931649776);
			func_147(-434590080);
			func_147(1743048395);
			func_147(449774763);
			func_146(1376646519);
			break;
	
		case 1453909576:
			func_146(1453909576);
			func_147(1643531967);
			break;
	
		case 1497516462:
			func_146(1497516462);
			func_147(2016141805);
			func_147(1010885152);
			func_147(-502324015);
			break;
	
		case 1509509592:
			func_146(1509509592);
			func_147(405586984);
			func_147(-959357075);
			func_147(-1311865656);
			break;
	
		case 1517904467:
			func_147(1306158345);
			func_147(1952610440);
			func_147(-223469678);
			func_147(-404698347);
			func_146(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_147(439465264);
				func_146(1609506757);
			}
			else
			{
				func_147(1609506757);
				func_147(439465264);
			}
			break;
	
		case 1626481264:
			func_146(1626481264);
			func_147(-524145696);
			func_147(282809459);
			break;
	
		case 1643531967:
			func_146(1643531967);
			func_147(1453909576);
			break;
	
		case 1703426636:
			func_146(1703426636);
			func_147(-919512195);
			func_147(-1925798111);
			func_147(420709909);
			break;
	
		case 1743048395:
			func_147(1376646519);
			func_147(931649776);
			func_147(-434590080);
			func_147(449774763);
			func_146(1743048395);
			break;
	
		case 1766284049:
			func_147(280705402);
			func_147(1926308480);
			func_146(1766284049);
			break;
	
		case 1822001510:
			func_147(-1612662716);
			func_146(1822001510);
			break;
	
		case 1846061697:
			func_147(-150493654);
			func_147(-1271608261);
			func_147(-1145519186);
			func_146(1846061697);
			break;
	
		case 1926308480:
			func_147(1766284049);
			func_147(280705402);
			func_146(1926308480);
			break;
	
		case 1952610440:
			func_147(1306158345);
			func_147(-223469678);
			func_147(-404698347);
			func_147(1517904467);
			func_146(1952610440);
			break;
	
		case 2016141805:
			func_147(1497516462);
			func_146(2016141805);
			func_147(1010885152);
			func_147(-502324015);
			break;
	
		case 2019386373:
			func_147(-664252410);
			func_147(2109952320);
			func_146(2019386373);
			break;
	
		case 2051822093:
			func_146(2051822093);
			func_147(932909855);
			break;
	
		case 2109952320:
			func_147(2019386373);
			func_147(-664252410);
			func_146(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_54(iParam0))
					func_146(iParam0);
			else if (func_54(iParam0))
				func_147(iParam0);
			break;
	}

	return;
}

void func_57(var uParam0, int iParam1, BOOL bParam2) // Position - 0x6565 Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_25(&(uParam0->f_1));

	return;
}

BOOL func_58(var uParam0, BOOL bParam1) // Position - 0x657F Hash - 0xDC267D3E ^0xDC267D3E
{
	BOOL flag;
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_150(i))
			flag = true;
		else
			flag = false;
	
		if (!func_152(func_151(i, flag), func_13(uParam0, i), bParam1) || !func_152(func_151(i, !flag), func_13(uParam0, i), !bParam1))
			return false;
	}

	return true;
}

BOOL func_59(var uParam0, int iParam1) // Position - 0x65E9 Hash - 0xFA6DA8F8 ^0xFA6DA8F8
{
	switch (iParam1)
	{
		case 0:
			if (!func_152(func_153(uParam0, 1), func_76(uParam0, 2), false) || !func_152(func_153(uParam0, 0), func_76(uParam0, 2), false))
				return false;
			break;
	
		case 1:
			if (!func_152(func_153(uParam0, 1), func_76(uParam0, 2), true) || !func_152(func_153(uParam0, 0), func_76(uParam0, 2), true))
				return false;
			break;
	
		default:
			break;
	}

	return true;
}

void func_60(var uParam0) // Position - 0x6679 Hash - 0x9CF4B2D5 ^0x4D0EF13
{
	func_154(uParam0);
	func_155(uParam0);

	if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -321841939 || *uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -1272862985)
		func_21(uParam0);

	return;
}

void func_61(var uParam0) // Position - 0x66EA Hash - 0xB7B69A46 ^0x3EDB11C1
{
	func_156(&uLocal_40);
	func_157(&uLocal_28);

	if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == 2000209669)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
				STREAMING::REQUEST_ANIM_DICT(func_158(uParam0, 0, 0, 0));

	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
		STREAMING::REQUEST_PTFX_ASSET();

	if (*uParam0 == 404434344)
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);

	return;
}

BOOL func_62(var uParam0) // Position - 0x6785 Hash - 0x62C09769 ^0xFD37826D
{
	if (!func_159(&uLocal_40) || !func_160(&uLocal_28))
		return false;

	if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == 2000209669)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
				if (!STREAMING::HAS_ANIM_DICT_LOADED(func_158(uParam0, 0, 0, 0)))
					return false;

	if (*uParam0 == 2000209669)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
			if (!AUDIO::PREPARE_SOUNDSET(func_161(uParam0), false))
				return false;
	else if (*uParam0 == -1614148516)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
			if (!AUDIO::LOAD_STREAM(func_162(uParam0, 0), func_161(uParam0)))
				return false;

	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			return false;

	if (*uParam0 == 404434344)
		if (!(PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1))
			return false;

	return true;
}

BOOL func_63() // Position - 0x68AA Hash - 0x463DA432 ^0x3948CA04
{
	return func_163(Global_1935630, 4096);
}

BOOL func_64(var uParam0) // Position - 0x68BD Hash - 0xBD5238AA ^0xEEA87D67
{
	if (*uParam0 == -1761578407 || *uParam0 == 404434344)
	{
		if (*uParam0 == 404434344)
		{
			func_166(&uLocal_40, func_164(uParam0, 0), func_165(uParam0, 0), 0, true, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_40.f_1[0]))
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_40.f_1[0], joaat("rel_player_ally"));
		}
		else if (uParam0->f_4 == 6)
		{
			iLocal_64 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(func_76(uParam0, 0), 1f, 1, -1, 0);
		}
	}
	else if (*uParam0 == 1464664327)
	{
		if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
			iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, false);
	}
	else if (*uParam0 == -161804536)
	{
		if (!func_39(Global_40.f_8863.f_152, 131072))
		{
			if (!func_171(&uLocal_28, func_76(uParam0, 1), func_170(uParam0, 1), 1))
				return false;
		
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[1]))
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_28[1], true);
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, false);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_15, false);
			}
		}
	}
	else if (*uParam0 == 2000209669)
	{
		if (!func_53(*uParam0))
			if (!func_172(uParam0))
				return false;
	}
	else if (*uParam0 == 1347913620 || *uParam0 == -1308658310)
	{
		if (!func_171(&uLocal_28, func_76(uParam0, 0), func_170(uParam0, 0), 0))
			return false;
	}
	else if (*uParam0 == -1891628345)
	{
		iLocal_64 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(func_76(uParam0, 0), 9f, 1, -1, 0);
	}
	else if (*uParam0 == -1614148516)
	{
		iLocal_21 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_162(uParam0, 0), func_161(uParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(func_76(uParam0, 0), iLocal_21);
		func_56(1221801385, true, false);
	}
	else if (*uParam0 == -321841939)
	{
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	}

	if (*uParam0 == 404434344 && func_139())
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_40.f_1[0]))
		{
			if (!PED::IS_PED_READY_TO_RENDER(uLocal_40.f_1[0]))
				return false;
		
			func_174(uLocal_40.f_1[0], func_173(uParam0, 0));
		}
	}

	return true;
}

char* func_65(var uParam0) // Position - 0x6B15 Hash - 0xD3CD4B3 ^0x4A2CACE5
{
	switch (*uParam0)
	{
		case 221420861:
			return "AZ_Whispering_Trees_Discoverable";
	
		case 1535254161:
			return "AZ_scarlett_meadows_bulger_glade_battlefield_memories_01";
	
		case 1982045664:
			return "AZ_Disco_Hermit_Woman_Shack";
	
		default:
		
	}

	return "";
}

void func_66(var uParam0) // Position - 0x6B54 Hash - 0xDF4CA967 ^0x4A76934A
{
	if (func_39(uParam0->f_3, 1))
		func_43(&(uParam0->f_3), 1);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_14))
		VOLUME::DELETE_VOLUME(volLocal_14);

	if (*uParam0 == 1464664327 || *uParam0 == 2000209669)
		if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
			TASK::_DELETE_SCENARIO_POINT(iLocal_15);
	else if (*uParam0 == -1761578407 && uParam0->f_4 == 7)
		func_175(1);

	func_104(&iLocal_63, true, true);

	if (CAM::DOES_CAM_EXIST(uLocal_16[0]))
		CAM::DESTROY_CAM(uLocal_16[0], false);

	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_20))
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_20, false);

	return;
}

float func_67(var uParam0) // Position - 0x6BF7 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_24(uParam0))
		return uParam0->f_1;

	if (func_108(uParam0))
		return uParam0->f_2;

	return func_176() - uParam0->f_1;
}

Vector3 func_68(var uParam0) // Position - 0x6C2C Hash - 0x2C0B3BEC ^0x6C3D4DCA
{
	var scenarioPointCoords;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
		return scenarioPointCoords;
	}

	return 0f, 0f, 0f;
}

void func_69(var uParam0) // Position - 0x6C59 Hash - 0x12B095D ^0x8F05BAE7
{
	if (func_102() != -1)
		return;

	if (func_177(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_177(*uParam0)))
			MAP::_MAP_DISCOVER_REGION(func_177(*uParam0));
	
		func_32(*uParam0, 8);
	}

	return;
}

BOOL func_70(var uParam0) // Position - 0x6C9A Hash - 0xA5BDA0BB ^0x1895487E
{
	int num;
	int num2;

	switch (iLocal_65)
	{
		case 0:
			func_178(1, true);
			break;
	
		case 1:
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_15) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					STREAMING::LOAD_SCENE_START_SPHERE(func_101(uParam0, 0), 20f, 0);
					func_178(2, true);
				}
			}
			break;
	
		case 2:
			if (func_67(&uLocal_66) <= 7.5f)
				if (func_67(&uLocal_66) >= 3.5f)
					if (!CAM::IS_SCREEN_FADING_OUT())
						CAM::DO_SCREEN_FADE_OUT(4000);
			else
				func_178(3, true);
			break;
	
		case 3:
			if (func_179(uParam0))
				num = 1;
		
			if (STREAMING::IS_LOAD_SCENE_LOADED())
				num2 = 1;
		
			if (num && num2 && func_67(&uLocal_66) >= 1f || func_67(&uLocal_66) >= 10f)
			{
				STREAMING::LOAD_SCENE_STOP();
				func_180(Global_35, func_101(uParam0, 1), func_168(uParam0, 1), 2, 1073741824);
				func_178(4, true);
			}
			break;
	
		case 4:
			func_181(Global_35, func_167(uParam0, 1), 3000, false, 0, -1082130432);
			func_178(6, true);
			break;
	
		case 6:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && func_67(&uLocal_66) >= 1f || func_67(&uLocal_66) >= 5f)
			{
				CAM::DO_SCREEN_FADE_IN(4000);
				func_178(12, true);
			}
			break;
	
		case 12:
			return true;
	}

	return false;
}

void func_71(var uParam0) // Position - 0x6E22 Hash - 0x46A0187B ^0x46A0187B
{
	if (!func_53(*uParam0))
	{
		func_182(*uParam0);
		func_69(uParam0);
	}

	return;
}

BOOL func_72(var uParam0) // Position - 0x6E42 Hash - 0x5264DDD6 ^0x5264DDD6
{
	if (iLocal_65 > 0 && iLocal_65 < 12)
		if (!func_49(uParam0))
			func_178(12, true);

	switch (iLocal_65)
	{
		case 0:
			func_178(1, true);
			break;
	
		case 1:
			if (func_14(Global_35, func_76(uParam0, 0), true) <= 1.6f)
			{
				func_104(&iLocal_63, true, true);
				func_178(2, true);
			}
			break;
	
		case 2:
			if (func_14(Global_35, func_76(uParam0, 0), true) > 1.6f + 1f)
			{
				func_104(&iLocal_63, true, true);
				func_178(1, true);
			}
			else if (func_183(uParam0, false))
			{
				iLocal_63 = func_113("GENERIC_USE", joaat("INPUT_CONTEXT_X"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_115(iLocal_63);
				func_178(3, true);
			}
			break;
	
		case 3:
			func_30(uParam0, iLocal_63, "PLUNGER", false);
		
			if (func_14(Global_35, func_76(uParam0, 0), true) > 1.6f + 1f)
			{
				func_104(&iLocal_63, true, true);
				func_178(1, true);
			}
			else if (func_183(uParam0, true))
			{
				func_104(&iLocal_63, true, true);
				func_178(2, true);
			}
			else if (func_33(iLocal_63) && func_117(iLocal_63, true))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -2334.5632f, 102.6577f, 221.5343f, 1f, 20000, 0.1f, 0, 164.0882f);
				func_104(&iLocal_63, true, true);
				func_178(5, true);
			}
			break;
	
		case 5:
			if (func_67(&uLocal_66) >= 1f)
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_16[0]))
				{
					uLocal_16[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2333.38f, 102.69f, 223.21f, -6.197f, -0.63f, 55.514f, 1115815936, false, 2);
					CAM::SET_CAM_FOV(uLocal_16[0], 37.84929f);
				}
			
				if (!CAM::DOES_CAM_EXIST(uLocal_16[1]))
				{
					uLocal_16[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -2334.52f, 104.21f, 223.47f, -7.584f, -0.74f, 59.195f, 1115815936, false, 2);
					CAM::SET_CAM_FOV(uLocal_16[1], 37.84929f);
				}
			
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_180(Global_35, -2334.5632f, 102.6577f, 221.5343f, 164.0882f, 2, 1073741824);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-98.7994f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-11.5912f, 1065353216);
			
				if (CAM::DOES_CAM_EXIST(uLocal_16[0]))
					CAM::SET_CAM_ACTIVE(uLocal_16[0], true);
			
				CAM::RENDER_SCRIPT_CAMS(true, false, 2000, true, false, 0);
			
				if (CAM::DOES_CAM_EXIST(uLocal_16[1]))
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_16[1], uLocal_16[0], 10000, 1, 1);
			
				func_178(7, true);
			}
			break;
	
		case 7:
			if (func_67(&uLocal_66) >= 1.2f)
			{
				FIRE::ADD_EXPLOSION_WITH_USER_VFX(func_76(uParam0, 1), 26, -1037168003, 1f, true, false, 1065353216);
			
				if (CAM::DOES_CAM_EXIST(uLocal_16[0]))
					CAM::SHAKE_CAM(uLocal_16[0], "SMALL_EXPLOSION_SHAKE", 0.5f);
			
				if (CAM::DOES_CAM_EXIST(uLocal_16[1]))
					CAM::SHAKE_CAM(uLocal_16[1], "SMALL_EXPLOSION_SHAKE", 1f);
			
				func_178(8, true);
			}
			break;
	
		case 8:
			if (func_59(uParam0, 0) && func_67(&uLocal_66) >= 1f)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_16[1]))
					CAM::SHAKE_CAM(uLocal_16[1], "SMALL_EXPLOSION_SHAKE", 0.5f);
			
				PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 1500, 150);
				func_178(9, true);
			}
			break;
	
		case 9:
			if (func_67(&uLocal_66) >= 0.5f)
				func_178(10, true);
			break;
	
		case 10:
			if (func_67(&uLocal_66) >= 0.5f)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 2000, true, false, 0);
			
				if (CAM::DOES_CAM_EXIST(uLocal_16[0]))
					CAM::SET_CAM_ACTIVE(uLocal_16[0], false);
			
				if (CAM::DOES_CAM_EXIST(uLocal_16[1]))
					CAM::SET_CAM_ACTIVE(uLocal_16[1], false);
			
				func_71(uParam0);
				func_178(12, true);
			}
			break;
	
		case 12:
			return true;
	}

	return false;
}

void func_73(var uParam0) // Position - 0x7258 Hash - 0x2FC65638 ^0xB9EA0D6F
{
	int num;
	int num2;
	int num3;

	switch (*uParam0)
	{
		case -1859023693:
			if (uParam0->f_4 == 0)
				num2 = 4096;
			else if (uParam0->f_4 == 1)
				num2 = 8192;
			else if (uParam0->f_4 == 2)
				num2 = 16384;
			else if (uParam0->f_4 == 3)
				num2 = 32768;
			else if (uParam0->f_4 == 4)
				num2 = 65536;
			else if (uParam0->f_4 == 5)
				num2 = 131072;
			else if (uParam0->f_4 == 6)
				num2 = 262144;
			else if (uParam0->f_4 == 7)
				num2 = 524288;
			else if (uParam0->f_4 == 8)
				num2 = 1048576;
			else if (uParam0->f_4 == 9)
				num2 = 2097152;
			else if (uParam0->f_4 == 10)
				num2 = 4194304;
			else
				return;
			break;
	
		case -1761578407:
			if (uParam0->f_4 == 0)
				num3 = 1;
			else if (uParam0->f_4 == 1)
				num3 = 2;
			else if (uParam0->f_4 == 2)
				num3 = 4;
			else if (uParam0->f_4 == 3)
				num3 = 8;
			else if (uParam0->f_4 == 4)
				num3 = 16;
			else if (uParam0->f_4 == 5)
				num3 = 32;
			else if (uParam0->f_4 == 6)
				num3 = 64;
			else if (uParam0->f_4 == 7)
				num3 = 128;
			else if (uParam0->f_4 == 8)
				num3 = 256;
			else if (uParam0->f_4 == 9)
				num3 = 512;
			else if (uParam0->f_4 == 10)
				num3 = 1024;
			else
				return;
			break;
	
		case -1272862985:
			if (uParam0->f_4 == 0)
				num = 262144;
			else if (uParam0->f_4 == 1)
				num = 524288;
			else if (uParam0->f_4 == 2)
				num = 1048576;
			else if (uParam0->f_4 == 3)
				num = 2097152;
			else
				return;
			break;
	
		case -890175011:
			if (uParam0->f_4 == 0)
				num3 = 2048;
			else if (uParam0->f_4 == 1)
				num3 = 4096;
			else if (uParam0->f_4 == 2)
				num3 = 8192;
			else if (uParam0->f_4 == 3)
				num3 = 16384;
			else if (uParam0->f_4 == 4)
				num3 = 32768;
			else
				return;
			break;
	
		case -834293086:
			if (uParam0->f_4 == 0)
				num2 = 1;
			else if (uParam0->f_4 == 1)
				num2 = 2;
			else if (uParam0->f_4 == 2)
				num2 = 4;
			else if (uParam0->f_4 == 3)
				num2 = 8;
			else if (uParam0->f_4 == 4)
				num2 = 16;
			else if (uParam0->f_4 == 5)
				num2 = 32;
			else if (uParam0->f_4 == 6)
				num2 = 64;
			else if (uParam0->f_4 == 7)
				num2 = 128;
			else if (uParam0->f_4 == 8)
				num2 = 256;
			else if (uParam0->f_4 == 9)
				num2 = 512;
			else
				return;
			break;
	
		case -544327665:
			if (uParam0->f_4 == 0)
				num = 1;
			else if (uParam0->f_4 == 1)
				num = 2;
			else if (uParam0->f_4 == 2)
				num = 4;
			else
				return;
			break;
	
		case 404434344:
			num3 = 1;
			break;
	
		case 677950956:
			if (uParam0->f_4 == 0)
				num3 = 65536;
			else if (uParam0->f_4 == 1)
				num3 = 131072;
			else if (uParam0->f_4 == 2)
				num3 = 262144;
			else if (uParam0->f_4 == 3)
				num3 = 524288;
			else if (uParam0->f_4 == 4)
				num3 = 1048576;
			else if (uParam0->f_4 == 5)
				num3 = 2097152;
			else
				return;
			break;
	
		case 1120968795:
			if (uParam0->f_4 == 0)
				num2 = 1024;
			else if (uParam0->f_4 == 1)
				num2 = 2048;
			else
				return;
			break;
	
		case 1519472817:
			if (uParam0->f_4 == 0)
				num2 = 8388608;
			else if (uParam0->f_4 == 1)
				num2 = 16777216;
			else
				return;
			break;
	
		case 2000209669:
			if (uParam0->f_4 == 0)
				num = 8;
			else if (uParam0->f_4 == 1)
				num = 16;
			else if (uParam0->f_4 == 2)
				num = 32;
			else if (uParam0->f_4 == 3)
				num = 64;
			else if (uParam0->f_4 == 4)
				num = 128;
			else if (uParam0->f_4 == 5)
				num = 256;
			else if (uParam0->f_4 == 6)
				num = 512;
			else if (uParam0->f_4 == 7)
				num = 1024;
			else if (uParam0->f_4 == 8)
				num = 2048;
			else if (uParam0->f_4 == 9)
				num = 4096;
			else if (uParam0->f_4 == 10)
				num = 8192;
			else if (uParam0->f_4 == 11)
				num = 16384;
			else
				return;
			break;
	
		default:
			break;
	}

	if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -890175011 || *uParam0 == 677950956)
		if (!func_39(Global_40.f_8863.f_154, num3))
			func_40(&(Global_40.f_8863.f_154), num3);
	else if (*uParam0 == -834293086 || *uParam0 == 1120968795 || *uParam0 == 1519472817 || *uParam0 == -1859023693)
		if (!func_39(Global_40.f_8863.f_153, num2))
			func_40(&(Global_40.f_8863.f_153), num2);
	else if (!func_39(Global_40.f_8863.f_152, num))
		func_40(&(Global_40.f_8863.f_152), num);

	return;
}

void func_74(int iParam0) // Position - 0x77F2 Hash - 0xF9F788B3 ^0x8192C5D9
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		TELEMETRY::_TELEMETRY_DISCOVERABLE(iParam0);
	
		if (func_184(iParam0))
			func_186(func_185(joaat("discoverable_found")), 1);
	}

	return;
}

BOOL func_75(var uParam0) // Position - 0x782E Hash - 0xC80BE94B ^0x8A87705A
{
	iLocal_65 > 0;

	switch (iLocal_65)
	{
		case 0:
			func_178(1, true);
			break;
	
		case 1:
			if (!func_39(Global_40.f_8863.f_152, 1024))
			{
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
				
					if (func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, true, true) && func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
						func_178(2, true);
				}
			}
			else
			{
				func_178(9, true);
			}
			break;
	
		case 2:
			func_104(&iLocal_63, true, true);
			uParam0->f_4 = func_4(uParam0);
		
			if (!(uParam0->f_4 == 7) && !(uParam0->f_4 == 8) && !(uParam0->f_4 == 9) && !(uParam0->f_4 == 10))
			{
				if (func_188(Global_35, func_13(uParam0, uParam0->f_4), func_187(uParam0, uParam0->f_4) + 55f, 1065353216))
				{
					bLocal_23 = false;
				
					if (func_20(uParam0))
						iLocal_63 = func_189("DISCO_PUSH", joaat("INPUT_CONTEXT_Y"), func_13(uParam0, uParam0->f_4), 2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false);
				
					func_178(4, true);
				}
				else
				{
					bLocal_23 = true;
				
					if (!func_20(uParam0))
						iLocal_63 = func_189("DISCO_PUSH", joaat("INPUT_CONTEXT_Y"), func_13(uParam0, uParam0->f_4), 2f, 2, 0, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false);
				
					func_178(3, true);
				}
			}
			break;
	
		case 3:
			if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, true, true) || !func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				func_104(&iLocal_63, true, true);
				func_178(1, true);
			}
			else if (func_188(Global_35, func_13(uParam0, uParam0->f_4), func_187(uParam0, uParam0->f_4) + 55f, 1065353216))
			{
				func_104(&iLocal_63, true, true);
				func_178(2, true);
			}
			else if (func_33(iLocal_63))
			{
				if (func_117(iLocal_63, true))
				{
					func_104(&iLocal_63, true, true);
				
					if (func_188(Global_35, func_13(uParam0, uParam0->f_4), func_187(uParam0, uParam0->f_4) + 55f, 1065353216))
						func_190(uParam0, uParam0->f_4);
					else
						func_73(uParam0);
				
					func_191(uParam0);
					func_178(5, true);
				}
			}
			break;
	
		case 4:
			if (!func_48(Global_35, func_13(uParam0, uParam0->f_4), 1.4f, true, true) || !func_112(Global_35, func_13(uParam0, uParam0->f_4), 0.5f))
			{
				func_104(&iLocal_63, true, true);
				func_178(1, true);
			}
			else if (!func_188(Global_35, func_13(uParam0, uParam0->f_4), func_187(uParam0, uParam0->f_4) + 55f, 1065353216))
			{
				func_104(&iLocal_63, true, true);
				func_178(2, true);
			}
			else if (func_33(iLocal_63))
			{
				if (func_117(iLocal_63, true))
				{
					func_104(&iLocal_63, true, true);
				
					if (func_188(Global_35, func_13(uParam0, uParam0->f_4), func_187(uParam0, uParam0->f_4) + 55f, 1065353216))
						func_190(uParam0, uParam0->f_4);
					else
						func_73(uParam0);
				
					func_191(uParam0);
					func_178(5, true);
				}
			}
			break;
	
		case 5:
			if (func_67(&uLocal_66) >= 9f)
				func_178(7, true);
			else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, SCRIPT_TASK_PERFORM_SEQUENCE, true) == 8)
				func_178(7, true);
			break;
	
		case 7:
			if (!func_39(Global_40.f_8863.f_152, 1024))
				if (func_39(Global_40.f_8863.f_152, 8) && func_39(Global_40.f_8863.f_152, 16) && !func_39(Global_40.f_8863.f_152, 32) && func_39(Global_40.f_8863.f_152, 64) && !func_39(Global_40.f_8863.f_152, 128) && func_39(Global_40.f_8863.f_152, 256) && !func_39(Global_40.f_8863.f_152, 512))
					func_40(&(Global_40.f_8863.f_152), 1024);
		
			if (func_26(&uLocal_66) >= 1000)
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION(func_162(uParam0, 0), func_100(uParam0, uParam0->f_4), func_161(uParam0), false, 0, false, 0);
				func_178(8, true);
			}
			break;
	
		case 8:
			if (func_26(&uLocal_66) >= 400)
			{
				if (func_58(uParam0, true))
				{
					if (func_39(Global_40.f_8863.f_152, 1024))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION(func_162(uParam0, 1), func_100(uParam0, 7), func_161(uParam0), false, 0, false, 0);
						func_178(9, true);
					}
					else
					{
						func_178(2, true);
					}
				}
			}
			break;
	
		case 9:
			func_192(100f);
			func_172(uParam0);
			func_178(10, true);
			break;
	
		case 10:
			if (func_39(Global_40.f_8863.f_152, 2048) && func_39(Global_40.f_8863.f_152, 4096) && func_39(Global_40.f_8863.f_152, 8192))
			{
				func_178(12, true);
			}
			else if (func_48(Global_35, func_76(uParam0, 0), 5f, true, true))
			{
				if (func_78())
				{
					if (!func_39(Global_40.f_8863.f_152, 2048))
						if (func_194(&uLocal_28[0], func_193(uParam0, 0)))
							func_40(&(Global_40.f_8863.f_152), 2048);
				
					if (!func_39(Global_40.f_8863.f_152, 4096))
						if (func_194(&uLocal_28[1], func_193(uParam0, 1)))
							func_40(&(Global_40.f_8863.f_152), 4096);
				
					if (!func_39(Global_40.f_8863.f_152, 8192))
						if (func_194(&uLocal_28[2], func_193(uParam0, 2)))
							func_40(&(Global_40.f_8863.f_152), 8192);
				}
			}
			break;
	
		case 12:
			return true;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
Vector3 func_76(var uParam0, int iParam1) // Position - 0x7E70 Hash - 0x46F929FC ^0x46F929FC
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
						goto 0x80C;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
				
					default:
						goto 0x80C;
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

Hash func_77(var uParam0, int iParam1) // Position - 0x8AFE Hash - 0xDF17EEA0 ^0xA303CFCC
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

BOOL func_78() // Position - 0x8D49 Hash - 0x9425FDBD ^0x87E91EB6
{
	int ransackScenarioPointPedIsUsing;

	ransackScenarioPointPedIsUsing = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35);

	if (TASK::DOES_SCENARIO_POINT_EXIST(ransackScenarioPointPedIsUsing))
		return true;

	return false;
}

BOOL func_79(Hash hParam0) // Position - 0x8D68 Hash - 0x2C6D6290 ^0xF2EA2FC
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

void func_80(var uParam0) // Position - 0x8DC7 Hash - 0x908060ED ^0x4A98188B
{
	switch (*uParam0)
	{
		case -1859023693:
			func_39(Global_40.f_8863.f_153, 4096);
			func_39(Global_40.f_8863.f_153, 8192);
			func_39(Global_40.f_8863.f_153, 16384);
			func_39(Global_40.f_8863.f_153, 32768);
			func_39(Global_40.f_8863.f_153, 65536);
			func_39(Global_40.f_8863.f_153, 131072);
			func_39(Global_40.f_8863.f_153, 262144);
			func_39(Global_40.f_8863.f_153, 524288);
			func_39(Global_40.f_8863.f_153, 1048576);
			func_39(Global_40.f_8863.f_153, 2097152);
			func_39(Global_40.f_8863.f_153, 4194304);
			break;
	
		case -1761578407:
			func_39(Global_40.f_8863.f_154, 1);
			func_39(Global_40.f_8863.f_154, 2);
			func_39(Global_40.f_8863.f_154, 4);
			func_39(Global_40.f_8863.f_154, 8);
			func_39(Global_40.f_8863.f_154, 16);
			func_39(Global_40.f_8863.f_154, 32);
			func_39(Global_40.f_8863.f_154, 64);
			func_39(Global_40.f_8863.f_154, 128);
			func_39(Global_40.f_8863.f_154, 256);
			func_39(Global_40.f_8863.f_154, 512);
			func_39(Global_40.f_8863.f_154, 1024);
			break;
	
		case -1272862985:
			func_39(Global_40.f_8863.f_152, 262144);
			func_39(Global_40.f_8863.f_152, 524288);
			func_39(Global_40.f_8863.f_152, 1048576);
			func_39(Global_40.f_8863.f_152, 2097152);
			break;
	
		case -890175011:
			func_39(Global_40.f_8863.f_154, 2048);
			func_39(Global_40.f_8863.f_154, 4096);
			func_39(Global_40.f_8863.f_154, 8192);
			func_39(Global_40.f_8863.f_154, 16384);
			func_39(Global_40.f_8863.f_154, 32768);
			break;
	
		case -834293086:
			func_39(Global_40.f_8863.f_153, 1);
			func_39(Global_40.f_8863.f_153, 2);
			func_39(Global_40.f_8863.f_153, 4);
			func_39(Global_40.f_8863.f_153, 8);
			func_39(Global_40.f_8863.f_153, 16);
			func_39(Global_40.f_8863.f_153, 32);
			func_39(Global_40.f_8863.f_153, 64);
			func_39(Global_40.f_8863.f_153, 128);
			func_39(Global_40.f_8863.f_153, 256);
			func_39(Global_40.f_8863.f_153, 512);
			break;
	
		case -544327665:
			func_39(Global_40.f_8863.f_152, 1);
			func_39(Global_40.f_8863.f_152, 2);
			func_39(Global_40.f_8863.f_152, 4);
			break;
	
		case 404434344:
			func_39(Global_40.f_8863.f_154, 1);
			break;
	
		case 677950956:
			func_39(Global_40.f_8863.f_154, 65536);
			func_39(Global_40.f_8863.f_154, 131072);
			func_39(Global_40.f_8863.f_154, 262144);
			func_39(Global_40.f_8863.f_154, 524288);
			func_39(Global_40.f_8863.f_154, 1048576);
			func_39(Global_40.f_8863.f_154, 1048576);
			func_39(Global_40.f_8863.f_154, 2097152);
			break;
	
		case 1120968795:
			func_39(Global_40.f_8863.f_153, 1024);
			func_39(Global_40.f_8863.f_153, 2048);
			break;
	
		case 1519472817:
			func_39(Global_40.f_8863.f_153, 8388608);
			func_39(Global_40.f_8863.f_153, 16777216);
			break;
	
		case 2000209669:
			func_39(Global_40.f_8863.f_152, 8);
			func_39(Global_40.f_8863.f_152, 16);
			func_39(Global_40.f_8863.f_152, 32);
			func_39(Global_40.f_8863.f_152, 64);
			func_39(Global_40.f_8863.f_152, 128);
			func_39(Global_40.f_8863.f_152, 256);
			func_39(Global_40.f_8863.f_152, 512);
			func_39(Global_40.f_8863.f_152, 1024);
			func_39(Global_40.f_8863.f_152, 2048);
			func_39(Global_40.f_8863.f_152, 4096);
			func_39(Global_40.f_8863.f_152, 8192);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_81(var uParam0) // Position - 0x92E8 Hash - 0x921DAF41 ^0x3244711F
{
	int taskSequenceId;
	int taskSequenceId2;
	int taskSequenceId3;

	if (iLocal_65 >= 0 && iLocal_65 <= 12)
	{
		if (*uParam0 == 404434344)
		{
			uParam0->f_4 = 0;
			uParam0->f_6.f_2 = { func_92(uParam0, 0) };
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
				{
					uParam0->f_4 = func_4(uParam0);
					uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
				
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
						VOLUME::DELETE_VOLUME(uParam0->f_6.f_9);
				
					if (uParam0->f_4 == 2)
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2576.8708f, -628.93024f, 42.2934f, 0f, 0f, -110.79236f, 2.5f, 1.61286f, 5f, func_195(uParam0));
					else if (uParam0->f_4 == 3)
						uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2578.7576f, -629.6465f, 42.2934f, 0f, 0f, -110.79236f, 2.5f, 1.61286f, 5f, func_195(uParam0));
				}
			}
		}
	}

	switch (iLocal_65)
	{
		case 0:
			if (*uParam0 == 404434344)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_40.f_1[0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_40.f_1[0]);
					ENTITY::SET_ENTITY_INVINCIBLE(uLocal_40.f_1[0], true);
					ENTITY::SET_ENTITY_PROOFS(uLocal_40.f_1[0], 6, false);
				}
			
				func_178(1, true);
			}
			else if (func_33(uParam0->f_6.f_8) && func_38(uParam0->f_6.f_8, true) <= 0f)
			{
				func_178(1, true);
			}
			break;
	
		case 1:
			if (*uParam0 == 404434344)
			{
				if (func_48(Global_35, func_164(uParam0, 0), 35f, true, true))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_40.f_1[0]) && ENTITY::IS_ENTITY_VISIBLE(uLocal_40.f_1[0]) || func_48(Global_35, func_164(uParam0, 0), 15f, true, true))
					{
						if (func_139())
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_40.f_1[0], true);
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							TASK::TASK_ANIMAL_FLEE(0, Global_35, -1);
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 200f, -1, 0, 1077936128, 0);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_40.f_1[0], taskSequenceId);
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_40.f_1[0], false);
							TASK::TASK_FLY_AWAY(uLocal_40.f_1[0], Global_35);
						}
					
						func_178(3, true);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId2);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 4f, -2f, -1, 67108880, 0, false, 65536, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId2);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId2);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId2);
				func_178(6, true);
			}
			break;
	
		case 3:
			if (*uParam0 == 404434344)
			{
				if (!bLocal_23)
				{
					if (!func_196(Global_35, uLocal_40.f_1[0], 90f, true))
					{
						bLocal_23 = true;
					
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_40.f_1[0]))
							func_197(&uLocal_40.f_1[0], true);
					}
				}
			}
		
			if (func_39(uParam0->f_3, 2))
			{
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId3);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_92(uParam0, uParam0->f_4), 1000);
				TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 4f, -2f, -1, 67108880, 0, false, 65536, false, 0, false);
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId3);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId3);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId3);
				func_178(6, true);
			}
			break;
	
		case 6:
			CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y"), true);
		
			if (!func_20(uParam0))
			{
				if (func_31(uParam0))
				{
					if (uParam0->f_4 == 2)
					{
						if (!func_39(Global_40.f_8863.f_154, 4))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else if (uParam0->f_4 == 3)
					{
						if (!func_39(Global_40.f_8863.f_154, 8))
						{
							func_73(uParam0);
							func_80(uParam0);
							func_198(uParam0, 1);
						}
					}
					else
					{
						func_73(uParam0);
						func_80(uParam0);
						func_198(uParam0, 1);
					
						if (*uParam0 == 404434344)
							if (!func_11(*uParam0, 2))
								func_32(*uParam0, 2);
					}
				
					if (func_39(Global_40.f_8863.f_154, 1) && func_39(Global_40.f_8863.f_154, 2) && func_39(Global_40.f_8863.f_154, 4) && func_39(Global_40.f_8863.f_154, 8) && func_39(Global_40.f_8863.f_154, 16) && func_39(Global_40.f_8863.f_154, 32) && func_39(Global_40.f_8863.f_154, 64) && func_39(Global_40.f_8863.f_154, 128) && func_39(Global_40.f_8863.f_154, 256))
					{
						if (*uParam0 == 404434344)
						{
							if (!func_53(-1761578407))
								func_182(-1761578407);
						}
						else
						{
							func_71(uParam0);
						
							if (!func_11(404434344, 2))
								func_32(404434344, 2);
						}
					}
				}
			}
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")))
			{
				if (!func_39(uParam0->f_3, 4))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0)) >= 0.8f)
						{
							func_40(&(uParam0->f_3), 4);
							TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 2f, -4f, -1, 67108880, 0, false, 65536, false, 0, false);
						}
					}
				}
			}
			else if (!func_20(uParam0))
			{
				if (!func_39(uParam0->f_3, 2) && func_38(uParam0->f_6.f_8, true) <= 0f)
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						CAM::STOP_GAMEPLAY_HINT(false);
				
					func_178(0, true);
				}
			}
			else if (!func_39(uParam0->f_3, 4))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0)) >= 0.8f)
					{
						func_40(&(uParam0->f_3), 4);
						TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 2f, -4f, -1, 67108880, 0, false, 65536, false, 0, false);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "loop", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "loop") >= 0.02f)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_158(uParam0, 0, 0, 0), "outro", 4f, -8f, -1, 67108880, 0, false, 65536, false, 0, false);
					func_178(7, true);
				}
			}
			break;
	
		case 7:
			if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") < 0.8f)
					PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") >= 0.98f)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					CAM::STOP_GAMEPLAY_HINT(false);
			
				if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") < 0.8f)
						PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_158(uParam0, 0, 0, 0), "outro") >= 0.98f)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						CAM::STOP_GAMEPLAY_HINT(false);
				
					if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
					{
						if (func_39(Global_40.f_8863.f_154, 4) && func_39(Global_40.f_8863.f_154, 8))
						{
							func_178(12, true);
						}
						else
						{
							if (func_11(*uParam0, 16))
								func_51(*uParam0, 16);
						
							if (func_39(uParam0->f_3, 4))
								func_43(&(uParam0->f_3), 4);
						
							func_178(0, true);
						}
					}
					else
					{
						func_178(12, true);
					}
				}
			}
			break;
	
		case 12:
			return true;
	}

	return false;
}

int func_82(var uParam0) // Position - 0x9B59 Hash - 0x16F8C525 ^0x16F8C525
{
	if (func_20(uParam0))
		return 0;

	iLocal_65 > 0 && iLocal_65 < 12;

	switch (iLocal_65)
	{
		case 0:
			func_178(1, true);
			break;
	
		case 1:
			if (func_199(&volLocal_14, &uLocal_28))
				func_178(6, true);
			break;
	
		case 6:
			if (func_46(&volLocal_14))
			{
				func_47(3, 0, 0, 0, 0, false, 1065353216, false);
				func_178(12, true);
			}
			break;
	
		case 12:
			return 1;
	}

	return 0;
}

void func_83(int iParam0) // Position - 0x9BE7 Hash - 0x457913DA ^0x457913DA
{
	int num;

	if (iParam0 == 0)
		num = 2;
	else if (iParam0 == 1)
		num = 4;
	else if (iParam0 == 2)
		num = 8;
	else if (iParam0 == 3)
		num = 16;
	else if (iParam0 == 4)
		num = 32;
	else if (iParam0 == 5)
		num = 64;
	else if (iParam0 == 6)
		num = 128;
	else if (iParam0 == 7)
		num = 256;
	else if (iParam0 == 8)
		num = 512;
	else if (iParam0 == 9)
		num = 1024;
	else if (iParam0 == 10)
		num = 2048;
	else if (iParam0 == 11)
		num = 4096;
	else if (iParam0 == 12)
		num = 8192;
	else if (iParam0 == 13)
		num = 16384;
	else if (iParam0 == 14)
		num = 32768;
	else if (iParam0 == 15)
		num = 65536;
	else if (iParam0 == 16)
		num = 131072;
	else if (iParam0 == 17)
		num = 262144;
	else if (iParam0 == 18)
		num = 524288;
	else if (iParam0 == 19)
		num = 1048576;
	else
		return;

	if (!func_39(Global_40.f_8863.f_148, num))
		func_40(&(Global_40.f_8863.f_148), num);

	return;
}

void func_84(var uParam0) // Position - 0x9D36 Hash - 0xB376934A ^0xB1E2A8CE
{
	func_39(Global_40.f_8863.f_148, 2);
	func_39(Global_40.f_8863.f_148, 4);
	func_39(Global_40.f_8863.f_148, 8);
	func_39(Global_40.f_8863.f_148, 16);
	func_39(Global_40.f_8863.f_148, 32);
	func_39(Global_40.f_8863.f_148, 64);
	func_39(Global_40.f_8863.f_148, 128);
	func_39(Global_40.f_8863.f_148, 256);
	func_39(Global_40.f_8863.f_148, 512);
	func_39(Global_40.f_8863.f_148, 1024);
	func_39(Global_40.f_8863.f_148, 2048);
	func_39(Global_40.f_8863.f_148, 4096);
	func_39(Global_40.f_8863.f_148, 8192);
	func_39(Global_40.f_8863.f_148, 16384);
	func_39(Global_40.f_8863.f_148, 32768);
	func_39(Global_40.f_8863.f_148, 65536);
	func_39(Global_40.f_8863.f_148, 131072);
	func_39(Global_40.f_8863.f_148, 262144);
	func_39(Global_40.f_8863.f_148, 524288);
	func_39(Global_40.f_8863.f_148, 1048576);
	return;
}

int func_85() // Position - 0x9EA3 Hash - 0x1767447B ^0x234018D7
{
	int i;
	int num;
	int num2;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num2 = func_143(i);
	
		if (func_39(Global_40.f_8863.f_148, num2))
			num = num + 1;
	}

	return num;
}

void func_86(int iParam0, int iParam1, int iParam2) // Position - 0x9EE1 Hash - 0x89941423 ^0x3E1250FE
{
	Hash hash;

	hash = func_200(iParam0);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, 0f, 0f, 0f, func_201(iParam0), func_202(iParam0), 0);

	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(0, func_203(iParam0), iParam1, iParam2));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, 0, MISC::VAR_STRING(0, func_204(iParam0), iParam1, iParam2), iParam1 == iParam2, false, false);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY(func_205(iParam0, 0)), MISC::GET_HASH_KEY(func_206(iParam0, 0)));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY(func_205(iParam0, 1)), MISC::GET_HASH_KEY(func_206(iParam0, 1)));
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, 0, func_207(iParam0, 0), iParam1 == iParam2, true, false);
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, 1, func_207(iParam0, 1), func_53(373034311), true, false);
	return;
}

void func_87(const char* sParam0) // Position - 0x9FB1 Hash - 0xAC64587 ^0x3BD61BA8
{
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_200(-321841939));
	func_208(MISC::VAR_STRING(2, "DISCO_DREAM"), sParam0, joaat("hud_toasts"), joaat("toast_dreamcatcher"), joaat("player_menu"), MISC::VAR_STRING(2, "COL_CTX_PLAYER_LOG"), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

BOOL func_88(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0xA004 Hash - 0x805EFBB1 ^0xE854472F
{
	if (*uParam1 == 0)
	{
		*uParam1 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam2->f_6[iParam3], func_76(uParam0, iParam3), iParam4);
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

BOOL func_89(var uParam0) // Position - 0xA07A Hash - 0xDC8868A6 ^0x774864D6
{
	switch (iLocal_65)
	{
		case 0:
			if (func_39(Global_40.f_8863.f_152, 131072))
				func_178(12, true);
			else
				func_178(1, true);
			break;
	
		case 1:
			if (func_48(Global_35, func_76(uParam0, 0), 75f, true, true))
			{
				if (!bLocal_23)
				{
					if (func_88(uParam0, &eLocal_19, &uLocal_28, 0, 7))
						bLocal_23 = true;
				}
				else if (ENTITY::IS_ENTITY_DEAD(uLocal_28[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_28[0], Global_35, true, true))
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15) && !TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_15))
						TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_15, true);
				
					func_178(2, true);
				}
			}
			break;
	
		case 2:
			if (func_78())
				if (func_79(func_209(uParam0, 0)))
					func_178(3, true);
			break;
	
		case 3:
			if (!func_78())
			{
				func_40(&(Global_40.f_8863.f_152), 131072);
				func_178(12, true);
			}
			break;
	
		case 12:
			return true;
	}

	return false;
}

BOOL func_90(var uParam0) // Position - 0xA18E Hash - 0xE5130E8A ^0xF085EBB4
{
	if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
	{
		if (!func_63())
		{
			func_210(Global_35, false, false);
			return true;
		}
	}

	return false;
}

int func_91(var uParam0) // Position - 0xA1C5 Hash - 0xEE21AF69 ^0xD99AA8F8
{
	if (VOLUME::DOES_VOLUME_EXIST(volLocal_14) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0))
	{
		uParam0->f_4 = func_4(uParam0);
		uParam0->f_6.f_2 = { func_92(uParam0, uParam0->f_4) };
	
		if (func_48(Global_35, uParam0->f_6.f_2, 10f, true, true))
			if (!func_39(uParam0->f_3, 1))
				func_40(&(uParam0->f_3), 1);
	}

	switch (iLocal_65)
	{
		case 0:
			if (!func_211(uParam0) || !func_212(uParam0) || func_213(uParam0))
				return 0;
		
			func_178(2, true);
			break;
	
		case 1:
			if (!func_211(uParam0) || !func_212(uParam0) || func_213(uParam0))
			{
				func_178(7, true);
				return 0;
			}
			break;
	
		case 2:
			AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), true, true);
			func_178(1, true);
			break;
	
		case 7:
			AUDIO::SET_AMBIENT_ZONE_STATE(func_65(uParam0), false, true);
			func_178(0, true);
			break;
	
		case 12:
			return 1;
	}

	return 0;
}

Vector3 func_92(var uParam0, int iParam1) // Position - 0xA2E9 Hash - 0xC47AB599 ^0xC47AB599
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
			return func_164(uParam0, 0);
	
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
			return func_76(uParam0, 0);
	
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
			return func_76(uParam0, 1);
	
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
			return func_76(uParam0, 0);
	
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
				return func_100(uParam0, 11);
			else
				return func_100(uParam0, 7);
			break;
	
		case 2134589549:
			return func_76(uParam0, 0);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

void func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xAC61 Hash - 0x410ACADE ^0x410ACADE
{
	int num;
	int num2;

	num = func_214();
	func_215(&num, 0, iParam1, iParam2, iParam3, iParam4, 0, false);
	num2 = -1;

	if (func_145(iParam0, &num2))
	{
		if (func_216(num2) == iParam0)
		{
			func_217(num2, iParam0);
			func_218(num2, num);
			return;
		}
	}
	else if (num2 > -1)
	{
		func_217(num2, iParam0);
		func_218(num2, num);
		return;
	}

	return;
}

BOOL func_94() // Position - 0xACCB Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1357517;
}

void func_95(var uParam0, BOOL bParam1) // Position - 0xACD7 Hash - 0xE99194B8 ^0xE99194B8
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		func_219(uParam0, bParam1, i);
	}

	return;
}

void func_96(var uParam0, BOOL bParam1) // Position - 0xACFD Hash - 0x9FC34A51 ^0x9FC34A51
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		func_220(uParam0, bParam1, i);
	}

	return;
}

void func_97(var uParam0) // Position - 0xAD24 Hash - 0xB7B69A46 ^0x3EDB11C1
{
	func_221(&uLocal_40);
	func_222(&uLocal_28);

	if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == 2000209669)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_158(uParam0, 0, 0, 0)))
			if (STREAMING::DOES_ANIM_DICT_EXIST(func_158(uParam0, 0, 0, 0)))
				STREAMING::REMOVE_ANIM_DICT(func_158(uParam0, 0, 0, 0));

	if (*uParam0 == 2000209669)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_161(uParam0)))
			AUDIO::_RELEASE_SOUNDSET(func_161(uParam0));

	if (*uParam0 == -1308658310 || *uParam0 == 221420861)
		STREAMING::REMOVE_PTFX_ASSET();

	if (*uParam0 == -1891628345 || *uParam0 == -1761578407 && uParam0->f_4 == 6)
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_64, 0);

	return;
}

BOOL func_98(int iParam0) // Position - 0xADFF Hash - 0x1965A61D ^0x1965A61D
{
	int num;

	num = func_99(iParam0, 1);
	return num >= 0 && num < 143;
}

int func_99(int iParam0, int iParam1) // Position - 0xAE1E Hash - 0x18EDA9F0 ^0x18EDA9F0
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

Vector3 func_100(var uParam0, int iParam1) // Position - 0xB467 Hash - 0xAF22EF00 ^0xAF22EF00
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

Vector3 func_101(var uParam0, int iParam1) // Position - 0xB578 Hash - 0xBAE0ABDC ^0xBAE0ABDC
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

BOOL func_102() // Position - 0xB80A Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_103(int iParam0, BOOL bParam1) // Position - 0xB818 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_223(iParam0))
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

void func_104(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB849 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_116(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_224(num);
	*uParam0 = 0;
	return;
}

void func_105(var uParam0) // Position - 0xB89D Hash - 0x87234A3C ^0x21D7A27C
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_195(uParam0));
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_195(uParam0));
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
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_195(uParam0));
			else
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, vector2, vector3, func_195(uParam0));
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_195(uParam0));
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_195(uParam0));
	}

	return;
}

BOOL func_106(int iParam0, int iParam1) // Position - 0xBE0E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_107(var uParam0, float fParam1) // Position - 0xBE1D Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_176() - fParam1;
	func_225(uParam0, 1);
	func_226(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_108(var uParam0) // Position - 0xBE43 Hash - 0x39705408 ^0x39705408
{
	return func_106(*uParam0, 2);
}

int func_109() // Position - 0xBE53 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_110(var uParam0) // Position - 0xBE71 Hash - 0xD965F2AB ^0x4503AF3C
{
	switch (*uParam0)
	{
		case -1300082860:
			if (func_48(Global_35, func_76(uParam0, 0), 3f, true, true))
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

BOOL func_111(var uParam0, int iParam1) // Position - 0xBF42 Hash - 0x787E614B ^0xC23272A0
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (!func_227(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			return false;
	
		if (TASK::_IS_PED_DUELLING(Global_35))
			return false;
	}

	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
		return false;

	if (!func_227(iParam1, 2) && !func_228())
		return false;

	if (!func_227(iParam1, 4) && !func_229())
		return false;

	if (!func_227(iParam1, 128) && !func_230())
		return false;

	if (!func_227(iParam1, 2048) && !func_231(false))
		return false;

	if (!func_227(iParam1, 32) && !func_232(iParam1))
		return false;

	if (!func_227(iParam1, 64) && !func_233())
		return false;

	if (!func_227(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (!func_227(iParam1, 512))
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			return false;

	if (!func_227(iParam1, 1024))
		if (PED::IS_PED_IN_COVER(Global_35, false, true))
			return false;

	if (CAM::_0x1204EB53A5FBC63D())
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		return false;
	else if (func_234(Global_35, 1369124074))
		return false;
	else if (func_234(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		return false;

	return true;
}

BOOL func_112(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xC0C5 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > iParam4;
}

// Unhandled jump detected. Output should be considered invalid
int func_113(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0xC106 Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_235(i, 2))
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
		func_236(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_114(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC1DD Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_33(iParam0))
		return;

	num = func_116(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_115(int iParam0) // Position - 0xC228 Hash - 0x4FCB23E1 ^0x764A8AAB
{
	int num;

	if (!func_33(iParam0))
		return;

	num = func_116(iParam0);

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, 1710353528, 0);

	return;
}

int func_116(int iParam0) // Position - 0xC26A Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_117(int iParam0, BOOL bParam1) // Position - 0xC274 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_116(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_118(int iParam0, BOOL bParam1) // Position - 0xC2CC Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_235(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

Hash func_119(int iParam0) // Position - 0xC324 Hash - 0xB8EC44B7 ^0x184A6D50
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

Hash func_120(int iParam0, int iParam1) // Position - 0xC44D Hash - 0xE1D12727 ^0x5FD78BB4
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

BOOL func_121() // Position - 0xC735 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_102() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_122(int iParam0, int iParam1, int iParam2) // Position - 0xC75B Hash - 0xFCD0B11D ^0x62D50FE4
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

int func_123(int iParam0, int iParam1) // Position - 0xCF67 Hash - 0xF3B2DCFE ^0x9CB24CD5
{
	int num;

	num = func_122(iParam0, 1, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	num = func_122(iParam0, 0, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	return 0;
}

void func_124(int iParam0, int iParam1) // Position - 0xCFA4 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_237(true);

	return;
}

int func_125() // Position - 0xCFBD Hash - 0xFA45A8A9 ^0x233CB2BD
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

BOOL func_126() // Position - 0xD043 Hash - 0x4A33814C ^0x6E4357BF
{
	Hash item;

	if (!func_238(joaat("document_player_journal"), 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (!func_239(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_234(Global_35, 1369124074))
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_LT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_RT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_ACTION")))
		return false;

	item = joaat("document_player_journal");

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_240(false), item, false))
		return false;

	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	func_241();
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), item, 1928812891, 1, 0, -1082130432);
	return true;
}

void func_127(Hash hParam0, int iParam1) // Position - 0xD170 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_128() // Position - 0xD183 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_129(var uParam0, int iParam1) // Position - 0xD1A2 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_130(var uParam0, int iParam1) // Position - 0xD1B3 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_131(Volume volParam0, var uParam1) // Position - 0xD1C8 Hash - 0x7513460B ^0x6C9F3BDD
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

Ped func_132(Ped pedParam0) // Position - 0xD248 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_133(int iParam0) // Position - 0xD252 Hash - 0xA05361F6 ^0xF8A0FD3E
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

int func_134(int iParam0) // Position - 0xD368 Hash - 0xC25EDEC0 ^0x47BF4274
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

void func_135(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0xD44F Hash - 0x9A51185A ^0x3EA71E42
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

	num = func_242();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_243(iParam0);
	
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

	if (func_244(6))
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
	Global_40.f_11095.f_35 = func_245(Global_40.f_11095.f_35, num4, num3);
	num2 = func_242();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_246(num2);
		func_248(func_247(), false, 4000);
		func_249(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_250(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_186(func_185(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_134(14))
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
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_186(func_185(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_134(4))
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
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_252(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_185(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_253(10, 1);

	return;
}

void func_136(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0xD7F4 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

float func_137(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xD853 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_138() // Position - 0xD871 Hash - 0x18690106 ^0x764E08E6
{
	if (func_54(932909855))
		return true;

	return false;
}

BOOL func_139() // Position - 0xD88A Hash - 0x18690106 ^0xE41C0B15
{
	if (func_54(2051822093))
		return true;

	return false;
}

BOOL func_140(int iParam0) // Position - 0xD8A3 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_254(Global_1835011[iParam0 /*74*/].f_1);
}

int func_141() // Position - 0xD8CF Hash - 0x7FD12804 ^0x76269BD
{
	return Global_0.f_7;
}

BOOL func_142(int iParam0) // Position - 0xD8DC Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_102() != -1)
		return false;

	if (!func_255(iParam0))
		return false;

	return func_254(Global_1347702[iParam0 /*49*/].f_15);
}

int func_143(int iParam0) // Position - 0xD90C Hash - 0x333EB83A ^0x37C96C1F
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

int func_144(int iParam0, int iParam1) // Position - 0xDA0A Hash - 0x8FA0E29 ^0xC3F68E87
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

BOOL func_145(int iParam0, var uParam1) // Position - 0xEB23 Hash - 0x190CBC66 ^0x190CBC66
{
	int i;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_216(i) == iParam0)
		{
			*uParam1 = i;
			return 1;
		}
		else if (func_216(i) == -1)
		{
			*uParam1 = i;
			return 0;
		}
		else
		{
		}
	}

	*uParam1 = -1;
	return 0;
}

void func_146(int iParam0) // Position - 0xEB73 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_144(iParam0, 1);
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

void func_147(int iParam0) // Position - 0xEC0C Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_144(iParam0, 1);
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

void func_148() // Position - 0xEC92 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_147(-939420910);
	func_147(-1187950766);
	func_147(356365161);
	func_147(753127042);
	func_147(-2038424081);
	func_147(1884271742);
	func_147(459290420);
	return;
}

void func_149() // Position - 0xECD9 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_147(704802028);
	func_147(588987611);
	func_147(2008888900);
	func_147(1649996811);
	func_147(227918160);
	func_147(168171957);
	func_147(1193080109);
	func_147(-491981251);
	func_147(-639037538);
	func_147(-618620429);
	return;
}

BOOL func_150(int iParam0) // Position - 0xED3B Hash - 0xB752BE4C ^0x9188ED3
{
	if (iParam0 == 0)
		if (func_39(Global_40.f_8863.f_152, 8))
			return true;
	else if (iParam0 == 1)
		if (func_39(Global_40.f_8863.f_152, 16))
			return true;
	else if (iParam0 == 2)
		if (func_39(Global_40.f_8863.f_152, 32))
			return true;
	else if (iParam0 == 3)
		if (func_39(Global_40.f_8863.f_152, 64))
			return true;
	else if (iParam0 == 4)
		if (func_39(Global_40.f_8863.f_152, 128))
			return true;
	else if (iParam0 == 5)
		if (func_39(Global_40.f_8863.f_152, 256))
			return true;
	else if (iParam0 == 6)
		if (func_39(Global_40.f_8863.f_152, 512))
			return true;
	else if (iParam0 == 7)
		if (func_39(Global_40.f_8863.f_152, 1024))
			return true;
	else if (iParam0 == 11)
		if (func_39(Global_40.f_8863.f_152, 16384))
			return true;

	return false;
}

char* func_151(int iParam0, BOOL bParam1) // Position - 0xEE57 Hash - 0x1201C76A ^0x90762C8B
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
				return "dis_grz_button_2_on";
			else
				return "dis_grz_button_2_off";
			break;
	
		case 1:
			if (bParam1)
				return "dis_grz_button_3_on";
			else
				return "dis_grz_button_3_off";
			break;
	
		case 2:
			if (bParam1)
				return "dis_grz_button_4_on";
			else
				return "dis_grz_button_4_off";
			break;
	
		case 3:
			if (bParam1)
				return "dis_grz_button_5_on";
			else
				return "dis_grz_button_5_off";
			break;
	
		case 4:
			if (bParam1)
				return "dis_grz_button_6_on";
			else
				return "dis_grz_button_6_off";
			break;
	
		case 5:
			if (bParam1)
				return "dis_grz_button_7_on";
			else
				return "dis_grz_button_7_off";
			break;
	
		case 6:
			if (bParam1)
				return "dis_grz_button_8_on";
			else
				return "dis_grz_button_8_off";
			break;
	
		case 7:
			if (bParam1)
				return "dis_grz_lid_open";
			else
				return "dis_grz_lid_closed";
			break;
	
		default:
			break;
	}

	return "";
}

BOOL func_152(char* sParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xEF66 Hash - 0x8A350A82 ^0x30FE8278
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

char* func_153(var uParam0, int iParam1) // Position - 0xEFAF Hash - 0x577B8755 ^0x588577BD
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

void func_154(var uParam0) // Position - 0xF012 Hash - 0x9F7BAA79 ^0xEA82FBB4
{
	Vector3 scenarioPointCoords;
	Vector3 vector;
	float num;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_14))
	{
		if (*uParam0 == -544327665 || *uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == 1519472817 || *uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -1272862985)
			scenarioPointCoords = { func_13(uParam0, uParam0->f_4) };
		else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
			scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
	
		_IS_NULL_VECTOR(scenarioPointCoords);
	
		if (*uParam0 == 1464664327 || *uParam0 == -232974724 || *uParam0 == 2000209669 || *uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -1614148516 || *uParam0 == 503180747 || *uParam0 == -409986722 || *uParam0 == -2019711818 || *uParam0 == 683269210 || *uParam0 == 1347913620 || *uParam0 == -919236330 || *uParam0 == -1272862985 || *uParam0 == -607940493 || *uParam0 == 1535254161 || *uParam0 == 230001763)
		{
			if (*uParam0 == 1464664327)
			{
				scenarioPointCoords = { 1183.8721f, 2035.4304f, 324.33377f };
				vector = { 0f, 0f, -45.764f };
				num = { 7.547398f, 4.034004f, 5.6249f };
			}
			else if (*uParam0 == -232974724)
			{
				scenarioPointCoords = { 191.21431f, -412.44968f, 86.6615f };
				vector = { 0f, 0f, -31.008644f };
				num = { 4.507977f, 5.159722f, 5f };
			}
			else if (*uParam0 == 2000209669)
			{
				scenarioPointCoords = { 830.6414f, 1924.2968f, 259.5716f };
				vector = { 0f, 0f, 0f };
				num = { 4f, 4f, 4f };
			}
			else if (*uParam0 == -1614148516)
			{
				scenarioPointCoords = { 2309.6558f, -334.2829f, 42.889038f };
				vector = { 0f, 0f, 0f };
				num = { 10.737926f, 10.125313f, 10f };
			}
			else if (*uParam0 == -409986722)
			{
				scenarioPointCoords = { 1985.9426f, -1896.1222f, 40.6398f };
				vector = { 0f, 0f, 12.509236f };
				num = { 6.360533f, 7.521983f, 10f };
			}
			else if (*uParam0 == -2019711818)
			{
				scenarioPointCoords = { 47.489697f, 1712.4355f, 127.25942f };
				vector = { 0f, 0f, 0f };
				num = { 13.812925f, 22.375694f, 19.814837f };
			}
			else if (*uParam0 == 683269210)
			{
				scenarioPointCoords = { -5576.8203f, -2583.934f, -9.5414f };
				vector = { 0f, 0f, 30.534065f };
				num = { 11.124449f, 7.156734f, 20.905561f };
			}
			else if (*uParam0 == 1347913620)
			{
				scenarioPointCoords = { 2452.9888f, 291.10526f, 69.5017f };
				vector = { 0f, 0f, 86.66475f };
				num = { 28.754242f, 25.430922f, 20.905561f };
			}
			else if (*uParam0 == -919236330)
			{
				scenarioPointCoords = { -3831.6084f, -3004.7117f, -7.892179f };
				vector = { 0f, 0f, 0f };
				num = { 25f, 25f, 6f };
			}
			else if (*uParam0 == -607940493)
			{
				scenarioPointCoords = { 2704.939f, 435.9636f, 91.37785f };
				vector = { 0f, 0f, -54.200283f };
				num = { 3.346154f, 3.339972f, 8.648747f };
			}
			else if (*uParam0 == 1535254161)
			{
				scenarioPointCoords = { 1503.2311f, -1819.4764f, 56.89473f };
				vector = { 0f, 0f, 31.762503f };
				num = { 44.605457f, 27.382586f, 6f };
			}
			else if (*uParam0 == 230001763)
			{
				scenarioPointCoords = { 2133.283f, 145.452f, 75.745f };
				vector = { 0f, 0f, 0f };
				num = { 6f, 6f, 6f };
			}
			else if (*uParam0 == -1761578407 || *uParam0 == 404434344)
			{
				if (uParam0->f_4 == 9)
				{
					scenarioPointCoords = { 895.55005f, -1968.0679f, 43.71555f };
				}
				else if (uParam0->f_4 == 10)
				{
					scenarioPointCoords = { 895.55005f, -1968.0679f, 43.71555f };
				}
				else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				{
					scenarioPointCoords = { 2577.8186f, -629.2898f, 42.2934f };
					vector = { 0f, 0f, -110.792366f };
					num = { 3.5f, 5.840896f, 5f };
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == -890175011)
			{
				vector = { 0f, 0f, 0f };
				num = { 3f, 3f, 3f };
			
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 677950956)
			{
				vector = { 0f, 0f, 0f };
				num = { 3f, 3f, 3f };
			
				if (uParam0->f_4 == 0)
				{
				}
				else if (uParam0->f_4 == 1)
				{
				}
				else if (uParam0->f_4 == 2)
				{
				}
				else if (uParam0->f_4 == 3)
				{
				}
				else if (uParam0->f_4 == 4)
				{
				}
				else if (uParam0->f_4 == 5)
				{
				}
				else
				{
					return;
				}
			}
			else if (*uParam0 == 503180747)
			{
				if (uParam0->f_4 == 0)
				{
					scenarioPointCoords = { 2325.9783f, 1070.3202f, 44.9401f };
					vector = { 0f, 0f, 0f };
					num = { 8.229425f, 7.256244f, 7.642096f };
				}
				else if (uParam0->f_4 == 1)
				{
					scenarioPointCoords = { -2698.6558f, 697.2829f, 162.88904f };
					vector = { 0f, 0f, 42.54451f };
					num = { 33.554752f, 29.027023f, 6f };
				}
			}
			else if (*uParam0 == -1272862985)
			{
				vector = { 0f, 0f, 0f };
				num = { 6f, 6f, 6f };
			}
		
			if (*uParam0 == 2000209669 || *uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == 503180747 || *uParam0 == -2019711818 || *uParam0 == -919236330 || *uParam0 == -1272862985 || *uParam0 == 1535254161 || *uParam0 == 230001763)
				volLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, func_256(uParam0));
			else
				volLocal_14 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, func_256(uParam0));
		}
		else
		{
			if (*uParam0 == -321841939)
			{
				scenarioPointCoords = { func_92(uParam0, uParam0->f_4) };
			
				if (uParam0->f_4 == 4 || uParam0->f_4 == 19)
					num = { 3f, 3f, 5f };
				else if (uParam0->f_4 == 5)
					num = { 3f, 3f, 7f };
				else
					num = { 5f, 5f, 5f };
			}
			else if (*uParam0 == -1084929085 || *uParam0 == 330993088)
			{
				num = 3f * 6f;
				num.f_1 = 3f * 6f;
				num.f_2 = 6f;
			}
			else if (*uParam0 == -1891628345 || *uParam0 == 1505050944 || *uParam0 == -1243267511)
			{
				num = 2f * 6f;
				num.f_1 = 2f * 6f;
				num.f_2 = 6f;
			}
			else if (*uParam0 == 221420861)
			{
				num = 5f * 6f;
				num.f_1 = 5f * 6f;
				num.f_2 = 5f * 6f;
			}
			else if (*uParam0 == -1109016944)
			{
				num = 10f * 6f;
				num.f_1 = 10f * 6f;
				num.f_2 = 3f * 6f;
			}
			else
			{
				num = 6f;
				num.f_1 = 6f;
				num.f_2 = 6f;
			}
		
			volLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, func_256(uParam0));
		}
	}

	return;
}

void func_155(var uParam0) // Position - 0xF862 Hash - 0xEDE0B322 ^0x8EF59AC7
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		uLocal_28.f_6[i] = 0;
	}

	switch (*uParam0)
	{
		case -1614148516:
			uLocal_28.f_6[0] = joaat("p_phonograph01x");
			break;
	
		case -1308658310:
			uLocal_28.f_6[0] = joaat("p_cs_detonator01x");
			break;
	
		case -321841939:
			uLocal_28.f_6[0] = joaat("p_disdreamcatcherwind01x");
			uLocal_28.f_6[1] = joaat("p_disdreamcatcherwind02x");
			uLocal_28.f_6[2] = joaat("p_disdreamcatcherwind03x");
			uLocal_28.f_6[3] = joaat("p_disdreamcatcherwind04x");
			uLocal_28.f_6[4] = joaat("p_disdreamcatcherwind05x");
			break;
	
		case -161804536:
			uLocal_28.f_6[0] = joaat("p_humanskull02x");
			uLocal_28.f_6[1] = joaat("s_combvikingancient01x");
			break;
	
		case 404434344:
			if (uParam0->f_4 == 0)
				if (func_138())
					uLocal_40.f_12[0] = joaat("a_c_eagle_01");
				else if (func_139())
					uLocal_40.f_12[0] = joaat("a_c_coyote_01");
			break;
	
		case 1347913620:
			uLocal_28.f_6[0] = joaat("p_cs_rt_envelope01x");
			break;
	
		case 2000209669:
			uLocal_28.f_6[0] = joaat("s_pickup_goldbar01x");
			uLocal_28.f_6[1] = joaat("s_pickup_goldbar01x");
			uLocal_28.f_6[2] = joaat("s_pickup_goldbar01x");
			break;
	
		default:
			break;
	}

	return;
}

void func_156(var uParam0) // Position - 0xF99F Hash - 0x850C362E ^0x961894A3
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (!(uParam0->f_12[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_12[i], false);
	}

	return;
}

void func_157(var uParam0) // Position - 0xF9D7 Hash - 0x9AA4BC18 ^0xA0A1D8E6
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_6[i], false);
	}

	return;
}

char* func_158(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0xFA0E Hash - 0x3C42BF0E ^0x25500820
{
	switch (*uParam0)
	{
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@braithwaitesburnedcorpse@braithwaitesburnedcorpse";
					
						case 3:
							return "pl_deadPose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@roadside_brothel@roadside_brothel";
					
						case 3:
							return "";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -2008558277:
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -654238687:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -35775921:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
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
		case 1464664327:
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
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@grayssecret@grayssecret";
					
						case 3:
							return "pl_deadPose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@lightning_alley@lightning_alley";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@wilderness_chest_3@wilderness_chest_3";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@buck_carcasses@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1761578407:
			if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 6 || iParam3 == 7 || iParam3 == 8)
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script_common@grieving@player@unarmed@upper";
						
							case 1:
								return "intro";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@donkey_lady@donkey_lady";
					
						case 3:
							return "pl_donkey_lady";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_pit@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "";
					
						case 1:
							return "";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_abandoned_oil_drill@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@barrel_rider@barrel_rider";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_micah@dead_micah";
					
						case 3:
							return "pl_micah";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@water_diviner@water_diviner";
					
						case 3:
							return "pl_water_diviner";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -920971071:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@flattened_cabin@flattened_cabin";
					
						case 3:
							return "pl_DeadCorpse";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@deadman_and_sheep@pose";
					
						case 3:
							return "pl_base";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@pagan_ritual@pagan_ritual";
					
						case 3:
							return "pl_pagan_pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -641229542:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_of_slave@dead";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -415839138:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@meditating_monk@main";
					
						case 3:
							return "pbl_base_a";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 149709049:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@burned_settlement@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 404434344:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_common@grieving@player@unarmed@upper";
					
						case 1:
							return "intro";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_miner@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@jesuit_missionary@pose";
					
						case 3:
							return "pl_jesuit_missionary";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@circuswagon@circuswagon";
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							return "mech_melee@unarmed@_male@_ambient@_healthy@_noncombat";
					
						case 1:
							return "att_sucker_punch_dist_close_v1";
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return "s_lev_des_mission";
					
						case 1:
							return "s_fortuneteller01x";
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam2)
					{
						case 2:
							return "lightrig@misc@discoverable_circus_wagon";
					
						case 3:
							return "plMain";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@overturned_hearse@overturned_hearse";
					
						case 3:
							return "pl_Overturned_Hearse";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					if (!func_53(*uParam0))
					{
						switch (iParam2)
						{
							case 2:
								return "script@beat@wilderness@discoverables@conestoga_wagon@conestoga_wagon";
						
							default:
								break;
						}
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@Conestoga_Wagon@SlideCamera";
					
						case 3:
							return "pl_ACTION";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_chinese_traveler@dead_chinese_traveler";
					
						case 3:
							return "pl_dead_chinese_traveler";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@swamp_freak@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@meteor_house@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							if (func_16(59))
								return "script@beat@wilderness@discoverables@braithwaites_secret_endless_summer@braithwaites_secret_endless_summer";
							else
								return "script@ambient@discoverables@braithwaites@secret";
							break;
					
						case 3:
							if (func_16(59))
								return "";
							else
								return "pb_intial_visit_a";
							break;
					}
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_soldier@dead_soldier";
					
						case 3:
							return "pl_Action";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_amb@discoverables@strange_statues@push_button";
					
						case 1:
							return "push_button_short";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_bear@pose";
					
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

BOOL func_159(var uParam0) // Position - 0x10382 Hash - 0xFEA95FCC ^0xFE4D4D69
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (!(uParam0->f_12[i] == 0))
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12[i]))
				return false;
	}

	return true;
}

BOOL func_160(var uParam0) // Position - 0x103C2 Hash - 0x52DB4BA7 ^0x53C69E64
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

char* func_161(var uParam0) // Position - 0x10401 Hash - 0xB0A14697 ^0xE7305FAB
{
	switch (*uParam0)
	{
		case -1614148516:
			return "inworld_music_wax_cylinder_swamp_boat";
	
		case 657666087:
			return "fortune_teller_soundset";
	
		case 2000209669:
			return "Strange_Statues_Sounds";
	
		default:
		
	}

	return "";
}

char* func_162(var uParam0, int iParam1) // Position - 0x1043D Hash - 0x825C0DB9 ^0x62B66525
{
	switch (*uParam0)
	{
		case -1614148516:
			switch (Global_40.f_8863.f_146 % 4)
			{
				case 0:
					return "1";
			
				case 1:
					return "2";
			
				case 2:
					return "3";
			
				case 3:
					return "4";
			
				default:
					break;
			}
			break;
	
		case 657666087:
			if (iParam1 == 0)
				return "fortune_teller";
		
			if (iParam1 == 1)
				return "punch_fortune_teller";
			break;
	
		case 2000209669:
			if (iParam1 == 0)
				return "button_press";
			else if (iParam1 == 1)
				return "statue_door_open";
			break;
	}

	return "";
}

BOOL func_163(int iParam0, int iParam1) // Position - 0x104E8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Vector3 func_164(var uParam0, int iParam1) // Position - 0x104F7 Hash - 0xABFFD40 ^0xABFFD40
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
					if (func_138())
						return 792.7722f, 1776.5087f, 281.5611f;
					else if (func_139())
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

float func_165(var uParam0, int iParam1) // Position - 0x11046 Hash - 0x2812C2B5 ^0x2812C2B5
{
	switch (*uParam0)
	{
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 175.4f;
			
				default:
					break;
			}
			break;
	
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 186.76f;
			
				default:
					break;
			}
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -90f;
			
				case 1:
					return -90f;
			
				case 2:
					return -90f;
			
				case 3:
					return -90f;
			
				case 4:
					return -90f;
			
				case 5:
					return 90f;
			
				case 6:
					return 90f;
			
				default:
					break;
			}
			break;
	
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
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
					return -99.19f;
			
				default:
					break;
			}
			break;
	
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return 59.57f;
			
				case 1:
					return 180f;
			
				case 2:
					return 180f;
			
				case 3:
					return -170.06f;
			
				default:
					break;
			}
			break;
	
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 142.69f;
			
				case 1:
					return 165.69f;
			
				default:
					break;
			}
			break;
	
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -2.39f;
			
				case 1:
					return -38.07f;
			
				case 2:
					return -132.4f;
			
				default:
					break;
			}
			break;
	
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return 132.16f;
			
				default:
					break;
			}
			break;
	
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -98.66f;
			
				case 1:
					return 3.79f;
			
				case 2:
					return -93.21f;
			
				case 3:
					return -72.99f;
			
				case 4:
					return 130.68f;
			
				case 5:
					return 117.29f;
			
				case 6:
					return -133f;
			
				case 7:
					return -86.34f;
			
				case 8:
					return 93.9f;
			
				case 9:
					return 110.42f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return -174f;
			
				default:
					break;
			}
			break;
	
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return -86.12f;
			
				default:
					break;
			}
			break;
	
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return 150.68f;
			
				default:
					break;
			}
			break;
	
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -167.58f;
			
				case 1:
					return 0f;
			
				case 2:
					return 117.57f;
			
				case 3:
					return 179.95f;
			
				default:
					break;
			}
			break;
	
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return -26.24f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return -12.03f;
			
				case 1:
					return -22.89f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -90.47f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -96.76f;
			
				case 1:
					return 120.75f;
			
				case 2:
					return 0f;
			
				case 3:
					return 30f;
			
				case 4:
					return 60f;
			
				case 5:
					return -15f;
			
				case 6:
					return -30f;
			
				case 7:
					return -60f;
			
				case 8:
					return -120f;
			
				case 9:
					return 15f;
			
				default:
					break;
			}
			break;
	
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 162.86f;
			
				default:
					break;
			}
			break;
	
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 175f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				case 1:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_138())
						return 275f;
					else if (func_139())
						return 275f;
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 72.28f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 180f;
			
				default:
					break;
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -115.63f;
			
				case 1:
					return 280.0316f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
			
				case 1:
					return -97.7f;
			
				case 2:
					return 130.42f;
			
				default:
					break;
			}
			break;
	
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
			
				case 1:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -90f;
			
				default:
					break;
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 349.2461f;
			
				default:
					break;
			}
			break;
	
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return -75.35f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -19.53f;
			
				case 1:
					return 133.99f;
			
				case 2:
					return -105.95f;
			
				default:
					break;
			}
			break;
	
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return -38.1f;
			
				case 1:
					return 56.97f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 43.65f;
			
				default:
					break;
			}
			break;
	
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -46.21f;
			
				case 1:
					return 135.66f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f;
}

void func_166(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x117FD Hash - 0xBBE089D0 ^0x2BB4D4C4
{
	if (!(uParam0->f_12[iParam5] == 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam5]))
		{
			uParam0->f_1[iParam5] = func_257(uParam0->f_12[iParam5], uParam1, fParam4, true, true, 0, false, false, true, false, false, false, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1[iParam5]))
			{
				if (bParam6)
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam0->f_1[iParam5], false);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_1[iParam5], -1);
			
				if (!bParam7)
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1[iParam5], false);
			
				*uParam0 = *uParam0 + 1;
			}
		}
		else
		{
			*uParam0 = *uParam0 + 1;
		}
	}
	else
	{
		*uParam0 = *uParam0 + 1;
	}

	return;
}

Hash func_167(var uParam0, int iParam1) // Position - 0x118B5 Hash - 0x233B4ECF ^0x1622A0CE
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

float func_168(var uParam0, int iParam1) // Position - 0x11A41 Hash - 0xD3A9BFF5 ^0xD3A9BFF5
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

int func_169(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x11BDF Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
Vector3 func_170(var uParam0, int iParam1) // Position - 0x11BF9 Hash - 0xBC832975 ^0xBC832975
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

BOOL func_171(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, int iParam7) // Position - 0x123C1 Hash - 0x2981E208 ^0x38DC5A47
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

BOOL func_172(var uParam0) // Position - 0x1243B Hash - 0x6F9DA1C3 ^0x4F24F1D9
{
	int i;

	if (func_39(Global_40.f_8863.f_152, 1024))
	{
		if (!func_39(Global_40.f_8863.f_152, 2048))
			if (!func_171(&uLocal_28, func_76(uParam0, 0), func_170(uParam0, 0), 0))
				return false;
	
		if (!func_39(Global_40.f_8863.f_152, 4096))
			if (!func_171(&uLocal_28, func_76(uParam0, 1), func_170(uParam0, 1), 1))
				return false;
	
		if (!func_39(Global_40.f_8863.f_152, 8192))
			if (!func_171(&uLocal_28, func_76(uParam0, 2), func_170(uParam0, 2), 2))
				return false;
	
		if (!func_39(Global_40.f_8863.f_152, 2048) || !func_39(Global_40.f_8863.f_152, 4096) || !func_39(Global_40.f_8863.f_152, 8192))
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_15))
				iLocal_15 = func_169(func_167(uParam0, 0), func_101(uParam0, 0), func_168(uParam0, 0), 0, 0, false);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_28[i]))
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_28[i], true);
		}
	}

	return true;
}

Hash func_173(var uParam0, int iParam1) // Position - 0x12581 Hash - 0x9A063F97 ^0x802DD3CF
{
	switch (*uParam0)
	{
		case 404434344:
			switch (iParam1)
			{
				case 0:
					return joaat("META_OUTFIT_ANIMAL_SPIRIT_COYOTE_A");
			
				default:
					break;
			}
			break;
	}

	return joaat("META_OUTFIT_DEFAULT");
}

void func_174(Ped pedParam0, Hash hParam1) // Position - 0x125B6 Hash - 0xEA1C858E ^0xAC6AE5EA
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_258(pedParam0, hParam1))
		{
			if (func_259(pedParam0, hParam1))
			{
				if (func_260(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_261(pedParam0);
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

void func_175(int iParam0) // Position - 0x12660 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1310750.f_16035 = Global_1310750.f_16035 - Global_1310750.f_16035 && iParam0;
	return;
}

float func_176() // Position - 0x12681 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

Hash func_177(int iParam0) // Position - 0x126B3 Hash - 0xB8EC44B7 ^0xC091C19D
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

void func_178(int iParam0, BOOL bParam1) // Position - 0x127A4 Hash - 0x3F3BB27F ^0x3F3BB27F
{
	iLocal_65 = iParam0;

	if (bParam1)
		func_25(&uLocal_66);

	return;
}

BOOL func_179(var uParam0) // Position - 0x127BB Hash - 0xD28F2745 ^0x62E0905D
{
	Ped ped;
	var unk;
	int num;

	num.f_10 = 7;
	num = 1;
	num.f_1 = 1;
	num.f_2 = 0;
	num.f_6 = { func_164(uParam0, 0) };
	num.f_9 = func_165(uParam0, 0);
	ped = func_262(&unk, &num);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		func_180(ped, func_164(uParam0, 0), func_165(uParam0, 0), 2, 1073741824);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);
		TASK::TASK_STAND_STILL(ped, -1);
		return true;
	}

	return false;
}

void func_180(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x12832 Hash - 0xF46E0F16 ^0xED4BA72A
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

	pedParam0 == func_132(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_263(pedParam0))
		if (func_264(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_39(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_180(vehiclePedIsIn, fParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_180(mount, fParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_39(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_39(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, fParam1, fParam4, true, func_39(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, fParam1, fParam4, true, func_39(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_39(iParam5, 129))
	{
		if (func_39(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(fParam1, &height))
				fParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, fParam1, func_39(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, fParam1, fParam4, true, func_39(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_39(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_263(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_39(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_39(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

void func_181(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4, int iParam5) // Position - 0x12AB4 Hash - 0x5050B938 ^0x5BDC33E5
{
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(pedParam0, hParam1, iParam2, bParam3, hParam4, iParam5, false);
	return;
}

void func_182(int iParam0) // Position - 0x12ACD Hash - 0xDA84A767 ^0xDA84A767
{
	func_32(iParam0, 2);
	func_74(iParam0);
	return;
}

BOOL func_183(var uParam0, BOOL bParam1) // Position - 0x12AE2 Hash - 0xD03A57C9 ^0x2B6B17AF
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (bParam1)
	{
		if (!func_265())
			return true;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return true;
	
		if (func_14(Global_35, func_76(uParam0, 0), true) > 1.6f + 1f || !func_112(Global_35, func_76(uParam0, 0), 0))
			return true;
	}
	else
	{
		if (!func_265())
			return false;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return false;
	
		if (func_14(Global_35, func_76(uParam0, 0), true) <= 1.6f && func_112(Global_35, func_76(uParam0, 0), 0))
			return true;
	}

	return false;
}

BOOL func_184(int iParam0) // Position - 0x12BB5 Hash - 0xE48228D0 ^0xE48228D0
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

struct<2> func_185(int iParam0) // Position - 0x12CE1 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_186(var uParam0, var uParam1, int iParam2) // Position - 0x12CF1 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

float func_187(var uParam0, int iParam1) // Position - 0x12D01 Hash - 0x774FDD2C ^0x65F3003F
{
	var unk;

	unk = { func_266(uParam0, iParam1) };
	return unk.f_2;
}

BOOL func_188(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0x12D19 Hash - 0x2A16F6D7 ^0x5622F5A8
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (func_267(vParam1, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, 0f, iParam5, 0f), ENTITY::GET_ENTITY_COORDS(pedParam0, true, false)))
		return false;

	return true;
}

int func_189(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, BOOL bParam16) // Position - 0x12D57 Hash - 0x8FE94EEE ^0x148ED6A8
{
	int i;
	int num;
	int num2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (_IS_NULL_VECTOR(uParam2))
		return 0;

	if (fParam5 <= 0f)
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_235(i, 2))
		{
			if (func_268(uParam2, Global_1945188[i /*18*/].f_6, 0.01f, true) && hParam1 == Global_1945188[i /*18*/].f_4)
			{
				num2 = i;
				return num2;
			}
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_236(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, bParam16);
		return num;
	}

	return 0;
}

void func_190(var uParam0, int iParam1) // Position - 0x12E35 Hash - 0xC93C59F1 ^0xC93C59F1
{
	int num;
	int num2;
	int num3;

	switch (*uParam0)
	{
		case -1859023693:
			if (iParam1 == 0)
				num2 = 4096;
			else if (iParam1 == 1)
				num2 = 8192;
			else if (iParam1 == 2)
				num2 = 16384;
			else if (iParam1 == 3)
				num2 = 32768;
			else if (iParam1 == 4)
				num2 = 65536;
			else if (iParam1 == 5)
				num2 = 131072;
			else if (iParam1 == 6)
				num2 = 262144;
			else if (iParam1 == 7)
				num2 = 524288;
			else if (iParam1 == 8)
				num2 = 1048576;
			else if (iParam1 == 9)
				num2 = 2097152;
			else if (iParam1 == 10)
				num2 = 4194304;
			else
				return;
			break;
	
		case -1761578407:
			if (iParam1 == 0)
				num3 = 1;
			else if (iParam1 == 1)
				num3 = 2;
			else if (uParam0->f_4 == 2)
				num3 = 4;
			else if (uParam0->f_4 == 3)
				num3 = 8;
			else if (iParam1 == 4)
				num3 = 16;
			else if (iParam1 == 5)
				num3 = 32;
			else if (iParam1 == 6)
				num3 = 64;
			else if (iParam1 == 7)
				num3 = 128;
			else if (iParam1 == 8)
				num3 = 256;
			else if (iParam1 == 9)
				num3 = 512;
			else if (iParam1 == 10)
				num3 = 1024;
			else
				return;
			break;
	
		case -1272862985:
			if (iParam1 == 0)
				num = 262144;
			else if (iParam1 == 1)
				num = 524288;
			else if (iParam1 == 2)
				num = 1048576;
			else if (iParam1 == 3)
				num = 2097152;
			else
				return;
			break;
	
		case -890175011:
			if (iParam1 == 0)
				num3 = 2048;
			else if (iParam1 == 1)
				num3 = 4096;
			else if (iParam1 == 2)
				num3 = 8192;
			else if (iParam1 == 3)
				num3 = 16384;
			else if (iParam1 == 4)
				num3 = 32768;
			else
				return;
			break;
	
		case -834293086:
			if (iParam1 == 0)
				num2 = 1;
			else if (iParam1 == 1)
				num2 = 2;
			else if (iParam1 == 2)
				num2 = 4;
			else if (iParam1 == 3)
				num2 = 8;
			else if (iParam1 == 4)
				num2 = 16;
			else if (iParam1 == 5)
				num2 = 32;
			else if (iParam1 == 6)
				num2 = 64;
			else if (iParam1 == 7)
				num2 = 128;
			else if (iParam1 == 8)
				num2 = 256;
			else if (iParam1 == 9)
				num2 = 512;
			else
				return;
			break;
	
		case -544327665:
			if (iParam1 == 0)
				num = 1;
			else if (iParam1 == 1)
				num = 2;
			else if (iParam1 == 2)
				num = 4;
			else
				return;
			break;
	
		case 677950956:
			if (iParam1 == 0)
				num3 = 65536;
			else if (iParam1 == 1)
				num3 = 131072;
			else if (iParam1 == 2)
				num3 = 262144;
			else if (iParam1 == 3)
				num3 = 524288;
			else if (iParam1 == 4)
				num3 = 1048576;
			else if (iParam1 == 5)
				num3 = 2097152;
			else
				return;
			break;
	
		case 1120968795:
			if (iParam1 == 0)
				num2 = 1024;
			else if (iParam1 == 1)
				num2 = 2048;
			else
				return;
			break;
	
		case 1519472817:
			if (iParam1 == 0)
				num2 = 8388608;
			else if (iParam1 == 1)
				num2 = 16777216;
			else
				return;
			break;
	
		case 2000209669:
			if (iParam1 == 0)
				num = 8;
			else if (iParam1 == 1)
				num = 16;
			else if (iParam1 == 2)
				num = 32;
			else if (iParam1 == 3)
				num = 64;
			else if (iParam1 == 4)
				num = 128;
			else if (iParam1 == 5)
				num = 256;
			else if (iParam1 == 6)
				num = 512;
			else if (iParam1 == 7)
				num = 1024;
			else if (iParam1 == 8)
				num = 2048;
			else if (iParam1 == 9)
				num = 4096;
			else if (iParam1 == 10)
				num = 8192;
			else
				return;
			break;
	
		default:
			break;
	}

	if (*uParam0 == -1761578407 || *uParam0 == -890175011 || *uParam0 == 677950956)
		if (func_39(Global_40.f_8863.f_154, num3))
			func_43(&(Global_40.f_8863.f_154), num3);
	else if (*uParam0 == -834293086 || *uParam0 == 1120968795 || *uParam0 == 1519472817 || *uParam0 == -1859023693)
		if (func_39(Global_40.f_8863.f_153, num2))
			func_43(&(Global_40.f_8863.f_153), num2);
	else if (func_39(Global_40.f_8863.f_152, num))
		func_43(&(Global_40.f_8863.f_152), num);

	return;
}

void func_191(var uParam0) // Position - 0x13322 Hash - 0xD4D9287B ^0x15BA03A3
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float heading;
	float num;
	int taskSequenceId;

	if (bLocal_23)
		heading = func_187(uParam0, uParam0->f_4) + 145f;
	else
		heading = func_187(uParam0, uParam0->f_4) + 325f;

	num = heading + 180f;
	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(func_13(uParam0, uParam0->f_4), heading, 0f, 0.82f, 0f) };
	TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);

	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);

	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(0, offsetFromCoordAndHeadingInWorldCoords, 1f, 20000, 0.09f, 0, num, heading + 180f);
	TASK::TASK_PLAY_ANIM(0, func_158(uParam0, 0, 0, 0), func_158(uParam0, 0, 1, 0), 8f, -8f, -1, 24, 0, false, 0, false, 0, false);
	TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, taskSequenceId);
	TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	return;
}

void func_192(float fParam0) // Position - 0x1341A Hash - 0xF70C5319 ^0xF70C5319
{
	if (func_269(1) < fParam0)
		func_270(1, fParam0, 0);

	if (func_269(2) < fParam0)
		func_270(2, fParam0, 0);

	if (func_269(0) < fParam0)
		func_270(0, fParam0, 0);

	return;
}

int func_193(var uParam0, int iParam1) // Position - 0x1345B Hash - 0x3F44228A ^0x7B94B702
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

BOOL func_194(var uParam0, int iParam1) // Position - 0x13535 Hash - 0xBBACD33B ^0x4164CA16
{
	struct<10> eventData;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i) == -1730772208)
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					if (eventData.f_2 == iParam1 && eventData.f_5 == 1 && ENTITY::DOES_ENTITY_EXIST(eventData.f_1) && eventData.f_1 == *uParam0)
						return true;
		}
	}

	return false;
}

char* func_195(var uParam0) // Position - 0x135BE Hash - 0x8601690B ^0xFDEC75B4
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

BOOL func_196(Ped pedParam0, Entity eParam1, float fParam2, BOOL bParam3) // Position - 0x13785 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(eParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

void func_197(Ped* ppedParam0, BOOL bParam1) // Position - 0x137CD Hash - 0x7E90C208 ^0xFFD66E48
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
			return;
	
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
			return;
	
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		}
		else
		{
			!ENTITY::IS_ENTITY_DEAD(*ppedParam0) && PED::IS_PED_IN_ANY_VEHICLE(*ppedParam0, true);
			PED::DELETE_PED(ppedParam0);
		}
	}

	return;
}

void func_198(var uParam0, int iParam1) // Position - 0x13827 Hash - 0xC18C25FD ^0x2BE23CD6
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_RESPECT")))
		STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_271(uParam0), iParam1);

	return;
}

BOOL func_199(var uParam0, var uParam1) // Position - 0x1384C Hash - 0xEEC78A10 ^0x89226117
{
	int num;
	int i;

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		return false;

	num = func_272(uParam1, &(uParam1->f_6), *uParam0, 5);

	if (num > 0)
	{
		for (i = 0; i <= num - 1; i = i + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->[i]))
			{
				if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), uParam1->[i]))
				{
					PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::GET_PLAYER_INDEX(), uParam1->[i], false);
					PLAYER::_0x6ECFC621A168424C(uParam1->[i], uParam1->[i], 0, 0);
				}
			}
		}
	
		return true;
	}

	return false;
}

Hash func_200(int iParam0) // Position - 0x138D4 Hash - 0x90805A70 ^0x8B132F8C
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

Hash func_201(int iParam0) // Position - 0x13902 Hash - 0x5F2677C1 ^0x86151432
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_dream");
	}

	return 0;
}

Hash func_202(int iParam0) // Position - 0x13924 Hash - 0x5F2677C1 ^0xDA753628
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_drm_desc");
	}

	return 0;
}

 func_203(int iParam0) // Position - 0x13946 Hash - 0x5F2677C1 ^0x603D5BDE
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_dc_found");
	}

	return 0;
}

 func_204(int iParam0) // Position - 0x13968 Hash - 0x5F2677C1 ^0xD8AB34AE
{
	switch (iParam0)
	{
		case -321841939:
			return joaat("disco_drm_obj");
	}

	return 0;
}

char* func_205(int iParam0, int iParam1) // Position - 0x1398A Hash - 0xFC08CBAB ^0x93E6A9CD
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

char* func_206(int iParam0, int iParam1) // Position - 0x139C9 Hash - 0xFC08CBAB ^0x1371DACC
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

char* func_207(int iParam0, int iParam1) // Position - 0x13A08 Hash - 0xFC08CBAB ^0x8268BEF6
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

int func_208(const char* sParam0, const char* sParam1, int iParam2, int iParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x13A47 Hash - 0x51CE9407 ^0x19439D00
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
	num2.f_4 = iParam2;
	num2.f_5 = iParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

Hash func_209(var uParam0, int iParam1) // Position - 0x13ABE Hash - 0xCD04DE92 ^0xC3B2DD69
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

void func_210(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13B66 Hash - 0xC26AC0FE ^0xFF80BBA5
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

BOOL func_211(var uParam0) // Position - 0x13BA2 Hash - 0xA8D562EF ^0xA8D562EF
{
	int num;
	int num2;

	num = func_214();
	num2 = func_273(num);

	switch (*uParam0)
	{
		case -415839138:
			if (num2 > 9 && num2 < 16)
				return true;
			break;
	
		case 1535254161:
			if (num2 >= 0 && num2 <= 4)
				return true;
			else if (num2 >= 23 && num2 <= 24)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_212(var uParam0) // Position - 0x13C1A Hash - 0xD6ABB357 ^0xE629F0A9
{
	Hash prevWeatherTypeHashName;
	Hash nextWeatherTypeHashName;

	prevWeatherTypeHashName = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	nextWeatherTypeHashName = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();

	if (func_274(uParam0, &prevWeatherTypeHashName))
		return true;

	return false;
}

BOOL func_213(var uParam0) // Position - 0x13C3E Hash - 0x6CD642F9 ^0x6CD642F9
{
	switch (*uParam0)
	{
		case 1535254161:
			if (func_275(127, false, true))
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

int func_214() // Position - 0x13C6B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x13C77 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_276(*uParam0);
	i = func_277(*uParam0);
	num2 = func_278(*uParam0);
	j = func_273(*uParam0);
	k = func_279(*uParam0);
	l = func_280(*uParam0);

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

	for (m = func_281(i, num); num2 > m; m = func_281(i, num))
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

	func_282(uParam0, l, k, j, num2, i, num);
	return;
}

int func_216(int iParam0) // Position - 0x13DFF Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_297[iParam0];
}

void func_217(int iParam0, int iParam1) // Position - 0x13E11 Hash - 0x32046F43 ^0x32046F43
{
	Global_40.f_297[iParam0] = iParam1;
	return;
}

void func_218(int iParam0, int iParam1) // Position - 0x13E25 Hash - 0x8B89F41D ^0x8B89F41D
{
	Global_40.f_297[iParam0 + 30] = iParam1;
	return;
}

void func_219(var uParam0, BOOL bParam1, int iParam2) // Position - 0x13E3B Hash - 0x53896554 ^0x5BC25850
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->[iParam2]))
		if (bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uParam0->[iParam2]);
		else
			OBJECT::DELETE_OBJECT(&uParam0->[iParam2]);

	return;
}

void func_220(var uParam0, BOOL bParam1, int iParam2) // Position - 0x13E6C Hash - 0xBF90281A ^0xFF588060
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam2]))
		if (bParam1)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->f_1[iParam2]);
		else
			PED::DELETE_PED(&uParam0->f_1[iParam2]);

	return;
}

void func_221(var uParam0) // Position - 0x13EA3 Hash - 0xAF91827C ^0x3697C5FA
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (!(uParam0->f_12[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12[i]);
	}

	return;
}

void func_222(var uParam0) // Position - 0x13EDA Hash - 0xD92E8622 ^0xC498A336
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[i]);
	}

	return;
}

int func_223(int iParam0) // Position - 0x13F10 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_283(iParam0))
		return -1;

	return func_284(iParam0);
}

void func_224(int iParam0) // Position - 0x13F2C Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_285(iParam0))
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

void func_225(var uParam0, int iParam1) // Position - 0x13FDF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_226(var uParam0, int iParam1) // Position - 0x13FF0 Hash - 0x932494EB ^0x932494EB
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_227(int iParam0, int iParam1) // Position - 0x14006 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_228() // Position - 0x14015 Hash - 0xD50A7FC ^0x92986A81
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

BOOL func_229() // Position - 0x140B5 Hash - 0x52218EDE ^0x68EAB229
{
	if (PED::_IS_PED_SLIDING(Global_35))
		return false;

	if (PED::IS_PED_SWIMMING(Global_35))
		return false;

	if (PED::IS_PED_CLIMBING(Global_35))
		return false;

	if (func_286(Global_35))
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

BOOL func_230() // Position - 0x1414A Hash - 0xD14A8C13 ^0x8AD85514
{
	if (func_287(Global_35) && !Global_1392040.f_2)
		return false;

	if (func_288(Global_35) && !Global_1392040.f_2)
		return false;

	return true;
}

BOOL func_231(BOOL bParam0) // Position - 0x14187 Hash - 0x19762284 ^0xD3096907
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_289("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_232(int iParam0) // Position - 0x141BF Hash - 0xEEF44B5 ^0x85627F39
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
	
		if (!func_227(iParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35) && VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35)
			return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_290(iParam0))
			return false;
	}

	return true;
}

BOOL func_233() // Position - 0x14297 Hash - 0xFFDF5CA4 ^0x50D2CF98
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
		return false;

	return true;
}

BOOL func_234(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x142AE Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_235(int iParam0, int iParam1) // Position - 0x142D7 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_236(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x142F8 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
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
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
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
	func_118(iParam0, true);
	func_291(iParam0, true);
	func_292(iParam0, 128);
	return;
}

void func_237(BOOL bParam0) // Position - 0x1459E Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_293(&(Global_40.f_12019.f_42), 1);
	else
		func_294(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_238(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x145C8 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_295(hParam0, 0))
		return false;

	num = func_296(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_297(hParam0, 1))
			return false;

	return func_298(hParam0, false, bParam2) >= iParam1;
}

BOOL func_239(int iParam0) // Position - 0x14632 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_299(iParam0);
}

int func_240(BOOL bParam0) // Position - 0x14640 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_102() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_241() // Position - 0x14681 Hash - 0x5808700A ^0x37855CE9
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

int func_242() // Position - 0x146D6 Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_300();

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

int func_243(int iParam0) // Position - 0x147E9 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_102() != -1)
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

BOOL func_244(int iParam0) // Position - 0x1488E Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_302(iParam0))
		return false;

	return func_303(iParam0);
}

int func_245(int iParam0, int iParam1, int iParam2) // Position - 0x148AA Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_246(int iParam0) // Position - 0x148CF Hash - 0xEE599357 ^0xEE599357
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

Hash func_247() // Position - 0x14986 Hash - 0xA46C8CCA ^0x71ABACD2
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

void func_248(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x14ADE Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_304(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_305(hParam0);
	return;
}

void func_249(int iParam0) // Position - 0x14B0A Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_306(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_250(BOOL bParam0) // Position - 0x14B6E Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_307(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_308(i, &hash, &num))
			{
				if (!func_295(hash, 0))
				{
				}
				else
				{
					unlockHash = func_309(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_296(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_242() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_242() >= 160;
					else
						flag = num == func_310();
				
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

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x14C2F Hash - 0xA17D549C ^0xE62DF793
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

int func_252(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x14D7B Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_311(sParam0, sParam1, hParam2);
	return num2;
}

int func_253(int iParam0, int iParam1) // Position - 0x14DDE Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_312(iParam0))
		return 0;

	if (!func_128())
		return 0;

	if (!func_313(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_254(int iParam0) // Position - 0x14E39 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_223(iParam0);
	return num == 3 || num == 4;
}

BOOL func_255(int iParam0) // Position - 0x14E57 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

char* func_256(var uParam0) // Position - 0x14E6D Hash - 0x13B4C5A8 ^0x12BD2223
{
	switch (*uParam0)
	{
		case -2019711818:
			return "DISC_VOL_DERAILED_TRAIN";
	
		case -1960242214:
			return "DISC_VOL_UTOPIAN_COLONY";
	
		case -1958832660:
			return "DISC_VOL_ABANDON_CHURCH";
	
		case -1923503631:
			return "DISC_VOL_ROPE_BRIDGE";
	
		case -1891628345:
			return "DISC_VOL_UTE_WICKIUP";
	
		case -1882503209:
			return "DISC_VOL_ABD_FURNITURE";
	
		case -1859023693:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_BROKEN_WAGON_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_BROKEN_WAGON_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_BROKEN_WAGON_3";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_BROKEN_WAGON_4";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_BROKEN_WAGON_5";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_BROKEN_WAGON_6";
			else if (uParam0->f_4 == 6)
				return "DISC_VOL_BROKEN_WAGON_7";
			else if (uParam0->f_4 == 7)
				return "DISC_VOL_BROKEN_WAGON_8";
			else if (uParam0->f_4 == 8)
				return "DISC_VOL_BROKEN_WAGON_9";
			else if (uParam0->f_4 == 9)
				return "DISC_VOL_BROKEN_WAGON_10";
			else if (uParam0->f_4 == 10)
				return "DISC_VOL_BROKEN_WAGON_11";
			break;
	
		case -1848895400:
			return "DISC_VOL_QUARRY";
	
		case -1787770845:
			return "DISC_VOL_GIANT_REMAINS";
	
		case -1761578407:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_GRAVE_ARTHUR";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_GRAVE_JENNY";
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
				return "DISC_VOL_GRAVE_HOSEA_LENNY";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_GRAVE_SEAN";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_GRAVE_DAVEY";
			else if (uParam0->f_4 == 6)
				return "DISC_VOL_GRAVE_KIERAN";
			else if (uParam0->f_4 == 7)
				return "DISC_VOL_GRAVE_SUSAN";
			else if (uParam0->f_4 == 8)
				return "DISC_VOL_GRAVE_EAGLE";
			else if (uParam0->f_4 == 9)
				return "DISC_VOL_GRAVE_1";
			else if (uParam0->f_4 == 10)
				return "DISC_VOL_GRAVE_2";
			break;
	
		case -1761189332:
			return "DISC_VOL_REGISTER_ROCK";
	
		case -1686810506:
			return "DISC_VOL_POTS_TREE";
	
		case -1646022773:
			return "DISC_VOL_FOSSIL_MAN";
	
		case -1614148516:
			return "DISC_VOL_PHONOGRAPH";
	
		case -1609238411:
			return "DISC_VOL_OLD_SCRIPT";
	
		case -1505275983:
			return "DISC_VOL_WARPED_TREE";
	
		case -1308658310:
			return "DISC_VOL_POWDER_KEG";
	
		case -1283611369:
			return "DISC_VOL_DESERT_WAGON";
	
		case -1272862985:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_TRAIL_TREES_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_TRAIL_TREES_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_TRAIL_TREES_3";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_TRAIL_TREES_4";
			break;
	
		case -1243267511:
			return "DISC_VOL_FACE_TREES";
	
		case -1109016944:
			return "DISC_VOL_GHOST_TOWN";
	
		case -1084929085:
			return "DISC_VOL_BOAT_IN_TREE";
	
		case -1053108445:
			return "DISC_VOL_FLY_MACHINE";
	
		case -986176781:
			return "DISC_VOL_WHALE_BONE";
	
		case -979575591:
			return "DISC_VOL_OBELISK";
	
		case -919236330:
			return "DISC_VOL_DESERTED_FARM";
	
		case -890175011:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_VAMPIRE_CLUE_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_VAMPIRE_CLUE_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_VAMPIRE_CLUE_3";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_VAMPIRE_CLUE_4";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_VAMPIRE_CLUE_5";
			break;
	
		case -834293086:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_HORNETS_NEST_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_HORNETS_NEST_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_HORNETS_NEST_3";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_HORNETS_NEST_4";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_HORNETS_NEST_5";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_HORNETS_NEST_6";
			else if (uParam0->f_4 == 6)
				return "DISC_VOL_HORNETS_NEST_7";
			else if (uParam0->f_4 == 7)
				return "DISC_VOL_HORNETS_NEST_8";
			else if (uParam0->f_4 == 8)
				return "DISC_VOL_HORNETS_NEST_9";
			else if (uParam0->f_4 == 9)
				return "DISC_VOL_HORNETS_NEST_10";
			break;
	
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND";
	
		case -544327665:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_OLD_FIREPIT_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_OLD_FIREPIT_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_OLD_FIREPIT_3";
			break;
	
		case -490142739:
			return "DISC_VOL_STUFFED_GORILLA";
	
		case -409986722:
			return "DISC_VOL_GRAVESTONE_TREE";
	
		case -321841939:
			if (uParam0->f_4 == 0)
				return "DISCO_DREAMCATCHERS_01";
			else if (uParam0->f_4 == 1)
				return "DISCO_DREAMCATCHERS_02";
			else if (uParam0->f_4 == 2)
				return "DISCO_DREAMCATCHERS_03";
			else if (uParam0->f_4 == 3)
				return "DISCO_DREAMCATCHERS_04";
			else if (uParam0->f_4 == 4)
				return "DISCO_DREAMCATCHERS_05";
			else if (uParam0->f_4 == 5)
				return "DISCO_DREAMCATCHERS_06";
			else if (uParam0->f_4 == 6)
				return "DISCO_DREAMCATCHERS_07";
			else if (uParam0->f_4 == 7)
				return "DISCO_DREAMCATCHERS_08";
			else if (uParam0->f_4 == 8)
				return "DISCO_DREAMCATCHERS_09";
			else if (uParam0->f_4 == 9)
				return "DISCO_DREAMCATCHERS_10";
			else if (uParam0->f_4 == 10)
				return "DISCO_DREAMCATCHERS_11";
			else if (uParam0->f_4 == 11)
				return "DISCO_DREAMCATCHERS_12";
			else if (uParam0->f_4 == 12)
				return "DISCO_DREAMCATCHERS_13";
			else if (uParam0->f_4 == 13)
				return "DISCO_DREAMCATCHERS_14";
			else if (uParam0->f_4 == 14)
				return "DISCO_DREAMCATCHERS_15";
			else if (uParam0->f_4 == 15)
				return "DISCO_DREAMCATCHERS_16";
			else if (uParam0->f_4 == 16)
				return "DISCO_DREAMCATCHERS_17";
			else if (uParam0->f_4 == 17)
				return "DISCO_DREAMCATCHERS_18";
			else if (uParam0->f_4 == 18)
				return "DISCO_DREAMCATCHERS_19";
			else if (uParam0->f_4 == 19)
				return "DISCO_DREAMCATCHERS_20";
			break;
	
		case -232974724:
			return "DISC_VOL_TRADING_POST";
	
		case -161804536:
			return "DISC_VOL_STONEHENGE";
	
		case -148407339:
			return "DISC_VOL_MAMMOTH";
	
		case -30872859:
			return "DISC_VOL_SUN_DIAL";
	
		case 58958195:
			return "DISC_VOL_CRASHED_AIRSHIP";
	
		case 74587361:
			return "DISC_VOL_LOVE_MESSAGE";
	
		case 173549940:
			return "DISC_VOL_PILE_OF_SKULLS";
	
		case 221420861:
			return "DISC_VOL_WHISPERING_TREES";
	
		case 230001763:
			return "DISC_VOL_GRAVESTONES";
	
		case 308500632:
			return "DISC_VOL_HIDDEN_TUNNEL";
	
		case 330993088:
			return "DISC_VOL_OLD_RR_CAMP";
	
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR";
	
		case 503180747:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_KILL_ZONE_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_KILL_ZONE_2";
			break;
	
		case 677950956:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_AZTEC_CLUE_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_AZTEC_CLUE_2";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_AZTEC_CLUE_3";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_AZTEC_CLUE_4";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_AZTEC_CLUE_5";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_AZTEC_CLUE_6";
			break;
	
		case 683269210:
			return "DISC_VOL_ABANDONED_MISSION";
	
		case 918206817:
			return "DISC_VOL_FIRE_TOWER";
	
		case 921081956:
			return "DISC_VOL_ONE_ROOM_CHURCH";
	
		case 1120968795:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_OLD_FIREPLACE_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_OLD_FIREPLACE_2";
			break;
	
		case 1154568952:
			return "DISC_VOL_SWAMP_FACTORY";
	
		case 1347913620:
			return "DISC_VOL_CIV_WAR_FORT";
	
		case 1431862613:
			return "DISC_VOL_EARLY_SETTLERS";
	
		case 1464664327:
			return "DISC_VOL_WITCHES_CAULDRON";
	
		case 1505050944:
			return "DISC_VOL_DESERT_SKELETONS";
	
		case 1519472817:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_BROKEN_BRIDGE_1";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_BROKEN_BRIDGE_2";
			break;
	
		case 1535254161:
			return "DISC_VOL_CIV_BATTLEFIELD";
	
		case 1734766691:
			return "DISC_VOL_BRUSH_FIRE";
	
		case 1833243216:
			return "DISC_VOL_MOUNTAIN_CLIMB";
	
		case 1986618633:
			return "DISC_VOL_SPERM_WHALE";
	
		case 2000209669:
			return "DISC_VOL_STRANGE_STATUES";
	}

	return "";
}

Ped func_257(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x156DA Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_314(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_258(Ped pedParam0, Hash hParam1) // Position - 0x1571C Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_259(Ped pedParam0, Hash hParam1) // Position - 0x1574A Hash - 0xA54F3032 ^0xB6E21443
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

BOOL func_260(Ped pedParam0, Hash hParam1) // Position - 0x1579B Hash - 0xA54F3032 ^0xB6E21443
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_258(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_261(Ped pedParam0) // Position - 0x1580D Hash - 0x446F1BDD ^0xE3169895
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

Ped func_262(var uParam0, var uParam1) // Position - 0x1582B Hash - 0x6747FB46 ^0x33F721B4
{
	BOOL flag;
	int num;
	Ped mount;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Player player;
	Ped saddleHorseForPlayer;
	var unk;
	var unk3;
	int num2;
	int idOfThisThread;

	uParam1->f_10 = func_315(uParam1->f_10);

	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}

	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}

	if (*uParam1)
		_IS_NULL_VECTOR(uParam1->f_6);

	flag = func_128();

	if (*uParam1)
	{
		if (flag && !func_103(Global_1835011[4 /*74*/].f_1, true))
		{
			if (func_316(5))
			{
				func_317(5);
				func_318(5);
				func_319(0);
				func_320(0);
			}
		}
	}

	if (func_321(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_103(Global_1835011[37 /*74*/].f_1, true) && !func_103(Global_1835011[43 /*74*/].f_1, true))
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_103(Global_1835011[43 /*74*/].f_1, true) && !func_103(Global_1835011[44 /*74*/].f_1, true))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	num = uParam1->f_10;
	mount = func_322(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_323(num))
	{
		flag2 = true;
	
		if (func_324(num))
			flag3 = true;
	
		if (func_325(num))
			flag4 = true;
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag4 && !uParam1->f_5)
			{
				func_326(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag3)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_316(0) && func_316(1))
			{
				func_327(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_328())
				func_329();
		
			func_319(0);
			func_320(0);
			func_330(uParam1->f_6);
		}
	}

	if (!func_323(uParam1->f_10))
	{
		if (*uParam1)
		{
			if (func_331(uParam1->f_10) == 0 || func_332(uParam1->f_10) == 0 || func_333(uParam1->f_10) == 0)
				func_334(uParam1->f_10);
		
			func_335(uParam1->f_10);
			func_336(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
	
		*uParam0 = 1;
		return 0;
	}

	num = uParam1->f_10;
	mount = func_322(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_323(num))
	{
		flag2 = true;
	
		if (func_324(num))
			flag3 = true;
	
		if (func_325(num))
			flag4 = true;
	}

	if (uParam1->f_2)
	{
		if (flag2)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(mount))
				ENTITY::FREEZE_ENTITY_POSITION(mount, false);
		
			if (!_IS_NULL_VECTOR(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
			}
		}
	}

	if (func_337(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}

	if (flag2)
	{
		if (flag3)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (flag2)
	{
		if (flag4 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(mount))
			{
				*uParam0 = 0;
				return 0;
			}
		
			player = PLAYER::PLAYER_ID();
			saddleHorseForPlayer = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(player);
		
			if (ENTITY::DOES_ENTITY_EXIST(saddleHorseForPlayer))
				if (saddleHorseForPlayer != mount)
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, 0);
		
			unk = { func_338(uParam1->f_10) };
			unk3 = { func_339() };
			func_340(mount, &unk, &unk3, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
			PED::SET_PED_CONFIG_FLAG(mount, 186, false);
		}
	}

	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return mount;
	}

	if (!func_341(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
		func_342(uParam1->f_10);
	
		if (uParam1->f_2 && !_IS_NULL_VECTOR(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(mount, false);
			PHYSICS::_UNHITCH_HORSE(mount);
			ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
		}
	
		*uParam0 = 2;
		return mount;
	}

	func_343(uParam1->f_10);

	if (func_341(uParam1->f_10))
	{
		num2 = func_344(uParam1->f_10);
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (num2 != idOfThisThread)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	*uParam0 = 2;
	return mount;
}

BOOL func_263(Ped pedParam0) // Position - 0x15CA0 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_264(Ped pedParam0) // Position - 0x15CD2 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_265() // Position - 0x15D14 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_239(1);
}

Vector3 func_266(var uParam0, int iParam1) // Position - 0x15D21 Hash - 0x497F8924 ^0x497F8924
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
				return 0f, 0f, 102.86f;
			else if (iParam1 == 1)
				return 0f, 0f, -102.86f;
			else if (iParam1 == 2)
				return 0f, 0f, 51.43f;
			else if (iParam1 == 3)
				return 0f, 0f, 0f;
			else if (iParam1 == 4)
				return 0f, 0f, 154.29f;
			else if (iParam1 == 5)
				return 0f, 0f, -154.29f;
			else if (iParam1 == 6)
				return 0f, 0f, -51.43f;
			else if (iParam1 == 7)
				return 0f, 0f, -135f;
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_267(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x15DD2 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

BOOL func_268(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x15DFB Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

float func_269(int iParam0) // Position - 0x15E50 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_270(int iParam0, float fParam1, int iParam2) // Position - 0x15E62 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_102() != -1)
		return;

	if (!func_244(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_345(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_346(iParam0), value);
	func_348(func_347(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_349(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_350(84, true);

	if (fParam1 <= -99.999f)
		func_350(func_351(iParam0), true);

	variableName = func_352(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

Hash func_271(var uParam0) // Position - 0x15F3B Hash - 0x168BE08D ^0x5E67F0F9
{
	switch (*uParam0)
	{
		case -1761578407:
			if (uParam0->f_4 == 0)
				return joaat("ACH_RESPECT_ARTHUR");
			else if (uParam0->f_4 == 1)
				return joaat("ACH_RESPECT_JENNY");
			else if (uParam0->f_4 == 2)
				return joaat("ACH_RESPECT_HORSEA");
			else if (uParam0->f_4 == 3)
				return joaat("ACH_RESPECT_LENNY");
			else if (uParam0->f_4 == 4)
				return joaat("ACH_RESPECT_SEAN");
			else if (uParam0->f_4 == 5)
				return joaat("ACH_RESPECT_DAVEY");
			else if (uParam0->f_4 == 6)
				return joaat("ACH_RESPECT_KIERAN");
			else if (uParam0->f_4 == 7)
				return joaat("ACH_RESPECT_SUSAN");
			else if (uParam0->f_4 == 8)
				return joaat("ACH_RESPECT_EAGLE_FLIES");
			break;
	
		case 404434344:
			return joaat("ACH_RESPECT_ARTHUR");
	
		default:
			break;
	}

	return 0;
}

int func_272(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x16016 Hash - 0xF4BE06E5 ^0x21E9A98D
{
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	ScrHandle handle;
	int num;
	int i;
	int j;
	int entitiesInVolume;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam2, itemSet, 3);
	entitiesInVolume >= iParam3;

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		handle = indexedItemInItemset;
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(handle))
		{
			for (j = 0; j < *uParam1; j = j + 1)
			{
				if (uParam1->[j] == 0)
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(handle) == uParam1->[j])
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
			}
		}
	
		if (num >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return iParam3;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

int func_273(int iParam0) // Position - 0x160D1 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_274(var uParam0, var uParam1) // Position - 0x160E4 Hash - 0x385A1BB5 ^0x385A1BB5
{
	switch (*uParam0)
	{
		case -415839138:
			switch (*uParam1)
			{
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("Misty"):
				case joaat("SUNNY"):
					return true;
			}
			break;
	
		case 397377585:
			switch (*uParam1)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("Misty"):
				case joaat("SUNNY"):
					return true;
			}
			break;
	
		case 1535254161:
			switch (*uParam1)
			{
				case joaat("THUNDER"):
				case joaat("Thunderstorm"):
					return true;
			}
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_275(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x161AA Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_353())
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
		num = func_354(Global_1898164.f_1[0 /*5*/]);
	
		if (func_255(num) && func_355(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_283(Global_1898164.f_1[0 /*5*/]))
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

int func_276(int iParam0) // Position - 0x163AE Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_277(int iParam0) // Position - 0x163D3 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_278(int iParam0) // Position - 0x163E6 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_279(int iParam0) // Position - 0x163F9 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_280(int iParam0) // Position - 0x1640B Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_281(int iParam0, int iParam1) // Position - 0x1641D Hash - 0x893AC59E ^0x893AC59E
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

void func_282(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x164B7 Hash - 0xA65AB937 ^0xA65AB937
{
	func_357(uParam0, iParam6);
	func_358(uParam0, iParam5);
	func_359(uParam0, iParam4);
	func_360(uParam0, iParam3);
	func_361(uParam0, iParam2);
	func_362(uParam0, iParam1);
	return;
}

BOOL func_283(int iParam0) // Position - 0x164EF Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_284(int iParam0) // Position - 0x16522 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_363(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_285(int iParam0) // Position - 0x16563 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_235(iParam0, 2);
}

BOOL func_286(Ped pedParam0) // Position - 0x16572 Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_287(Ped pedParam0) // Position - 0x1665A Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_364(pedParam0, 4) || func_364(pedParam0, 5);
}

BOOL func_288(Ped pedParam0) // Position - 0x16676 Hash - 0x8F7DFED5 ^0x8768F0B4
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

int func_289(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x166E0 Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_290(int iParam0) // Position - 0x1671B Hash - 0xCB0CD3AF ^0x98FF0773
{
	Ped mount;

	mount = PED::GET_MOUNT(Global_35);

	if (!func_365(Global_35))
		return false;

	if (!func_227(iParam0, 16) && !func_366(mount, false))
		return false;

	return true;
}

void func_291(int iParam0, BOOL bParam1) // Position - 0x16759 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_292(int iParam0, int iParam1) // Position - 0x16782 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_293(int iParam0, int iParam1) // Position - 0x167AA Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_294(int iParam0, int iParam1) // Position - 0x167BB Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_295(Hash hParam0, int iParam1) // Position - 0x167D0 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_296(Hash hParam0) // Position - 0x167EA Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_295(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_297(Hash hParam0, int iParam1) // Position - 0x16815 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_295(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_367(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_368("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_369(&unk, i, num, num2))
			{
			}
			else if (!func_370(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_371(num);
				return true;
			}
		}
	
		func_371(num);
	}

	return false;
}

int func_298(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x168BD Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_295(hParam0, 0))
		return 0;

	num = func_296(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_367(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_372(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_240(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_299(int iParam0) // Position - 0x1693F Hash - 0xA059D395 ^0xE600C05
{
	return func_39(Global_1935496.f_27, iParam0);
}

int func_300() // Position - 0x16953 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_301(BOOL bParam0, var uParam1, var uParam2) // Position - 0x16963 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_302(int iParam0) // Position - 0x1697A Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_303(int iParam0) // Position - 0x1698D Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_304(int iParam0, BOOL bParam1) // Position - 0x169B7 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_373(bParam1);

	return;
}

void func_305(Hash hParam0) // Position - 0x169D2 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_306(int iParam0) // Position - 0x169E5 Hash - 0x8FB6A40C ^0xF32E729F
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

BOOL func_307(var uParam0) // Position - 0x16B06 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_374(23, &unk))
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

BOOL func_308(int iParam0, var uParam1, var uParam2) // Position - 0x16B4E Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_374(23, &unk))
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

Hash func_309(Hash hParam0) // Position - 0x16BCE Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_310() // Position - 0x16BD8 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_242();

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

void func_311(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x16C27 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_312(int iParam0) // Position - 0x16C58 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_313(int iParam0, var uParam1, var uParam2) // Position - 0x16C77 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_312(iParam0))
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

void func_314(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x16E46 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_375(eptParam1))
		{
			func_174(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_376(pedParam0, 0, true);
	
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
			func_377(pedParam0, false);
			flag = true;
		}
	
		func_378(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

int func_315(int iParam0) // Position - 0x16F27 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_316(int iParam0) // Position - 0x16F40 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_333(iParam0) == 0)
		return false;

	return true;
}

void func_317(int iParam0) // Position - 0x16F73 Hash - 0xB0910AA9 ^0xD61D2BCE
{
	Player player;
	Hash entityModel;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_323(iParam0))
		return;

	player = func_322(iParam0);
	func_379(iParam0);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(player))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(player, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(player);

	if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
		if (!func_380(entityModel))
			PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	PED::DELETE_PED(&player);
	func_381(iParam0, 0);
	func_382(iParam0);
	return;
}

void func_318(int iParam0) // Position - 0x16FF7 Hash - 0x7F6EE38F ^0xB88FD5DA
{
	var unk;
	int i;
	int j;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_383(&unk);
	func_384(iParam0, unk);
	func_385(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_386(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_387(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_388(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_389(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_390(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_391(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_392(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_393(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));

	Global_1900383[iParam0 /*45*/].f_26 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));

	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
	return;
}

void func_319(int iParam0) // Position - 0x1734A Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_320(int iParam0) // Position - 0x1735D Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

int func_321(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x17372 Hash - 0x56F0811C ^0x278FB5A
{
	return func_394(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Player func_322(int iParam0) // Position - 0x17388 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_323(int iParam0) // Position - 0x173B4 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_315(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_324(int iParam0) // Position - 0x173EC Hash - 0xB5D64937 ^0xB5D64937
{
	Player player;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_323(iParam0))
		return false;

	player = func_322(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(player) || PED::IS_PED_INJURED(player))
		return true;

	return false;
}

BOOL func_325(int iParam0) // Position - 0x17440 Hash - 0xB5D64937 ^0xB5D64937
{
	Player player;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_323(iParam0))
		return false;

	player = func_322(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(player))
		return false;

	if (TASK::IS_PED_IN_WRITHE(player))
		return true;

	return false;
}

void func_326(int iParam0) // Position - 0x17495 Hash - 0x2692E663 ^0xF0DB5F3E
{
	Player player;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_323(iParam0))
		return;

	player = func_322(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(player))
		return;

	ENTITY::SET_ENTITY_HEALTH(player, 0, 0);
	return;
}

void func_327(int iParam0, int iParam1) // Position - 0x174E0 Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Player horse;
	BOOL flag;
	Player horse2;
	BOOL flag2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_395(iParam0);
	func_395(iParam0);
	func_396(iParam0, iParam1);
	func_397(iParam0, iParam1);
	func_398(iParam0, iParam1);
	horse = func_322(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		if (iParam0 == 0 || iParam0 == 1)
			func_399(horse);
	
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		}
		else if (iParam0 == 1)
		{
			flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	horse2 = func_322(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
	{
		if (iParam1 == 0 || iParam1 == 1)
			func_399(horse2);
	
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse2);
		}
		else if (iParam1 == 1)
		{
			flag2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse2);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse2)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse2)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	func_400();
	return;
}

BOOL func_328() // Position - 0x17602 Hash - 0x57592B8C ^0xB4B7573B
{
	Object* p_object;

	p_object = func_401();

	if (ENTITY::DOES_ENTITY_EXIST(p_object))
		return true;

	return false;
}

void func_329() // Position - 0x1761E Hash - 0x9A84CB87 ^0x788CD227
{
	Object* p_object;

	p_object = func_401();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, true);

	OBJECT::DELETE_OBJECT(&p_object);
	func_402(0);
	return;
}

void func_330(var uParam0, var uParam1, var uParam2) // Position - 0x17656 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

Ped func_331(int iParam0) // Position - 0x1766F Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_332(int iParam0) // Position - 0x176A2 Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_333(int iParam0) // Position - 0x176D5 Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_334(int iParam0) // Position - 0x17708 Hash - 0x728A4C05 ^0x728A4C05
{
	var unk;
	var unk2;
	var unk3;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_403(&unk, &unk2, &unk3);
	func_404(iParam0, unk);
	func_405(iParam0, unk2);
	func_406(iParam0, unk3);
	func_407(iParam0, 1);
	func_408(iParam0, 1);
	return;
}

void func_335(int iParam0) // Position - 0x1775B Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_409(iParam0, 1);
	return;
}

void func_336(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x17784 Hash - 0xFEF7EAB ^0x64576AA5
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_19 = { uParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
	return;
}

BOOL func_337(int iParam0) // Position - 0x177C2 Hash - 0xBDE1A61 ^0xBDE1A61
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return func_410(iParam0, 1);
}

struct<2> func_338(int iParam0) // Position - 0x177ED Hash - 0xC0CC9820 ^0xC0CC9820
{
	var unk;
	var unk3;
	var unk4;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	!func_411(iParam0, &unk3);
	!func_412(iParam0, &unk4);
	unk = unk3;
	unk.f_1 = unk4;
	return unk;
}

struct<6> func_339() // Position - 0x1783D Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_413(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_413(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_413(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_413(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_413(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_413(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

void func_340(Ped pedParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x178BF Hash - 0x50380B5F ^0xA5E53457
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return;

	func_414(pedParam0);
	func_415(pedParam0, uParam1);
	func_416(pedParam0);
	func_417(pedParam0, uParam2);

	if (hParam3 != 0)
		func_418(pedParam0, hParam3, false);

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, true);
	return;
}

BOOL func_341(int iParam0) // Position - 0x17933 Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_342(int iParam0) // Position - 0x17961 Hash - 0x93699D3A ^0x887A14C1
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

void func_343(int iParam0) // Position - 0x1799C Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_344(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_382(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_382(iParam0);

	return;
}

int func_344(int iParam0) // Position - 0x179EA Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

int func_345(int iParam0) // Position - 0x17A18 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_346(int iParam0) // Position - 0x17A3C Hash - 0x26AB94C2 ^0x26AB94C2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

int func_347(int iParam0) // Position - 0x17A6B Hash - 0x5163992 ^0x5163992
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

void func_348(int iParam0, float fParam1, BOOL bParam2) // Position - 0x17A9A Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_419(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_349(int iParam0) // Position - 0x17AEA Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

void func_350(int iParam0, BOOL bParam1) // Position - 0x17B0E Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_420(iParam0, &num, &num2);

	if (!func_421(iParam0, num, num2, bParam1))
		return;

	func_422(num, num2);
	return;
}

int func_351(int iParam0) // Position - 0x17B3B Hash - 0x68BC9945 ^0x68BC9945
{
	switch (iParam0)
	{
		case 0:
			return 87;
	
		case 1:
			return 85;
	
		case 2:
			return 86;
	
		default:
		
	}

	return -1;
}

char* func_352(int iParam0) // Position - 0x17B6D Hash - 0x21CE226B ^0x80F976D8
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

BOOL func_353() // Position - 0x17BA8 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_354(int iParam0) // Position - 0x17BFB Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_283(iParam0))
		return -1;

	return func_424(func_423(iParam0));
}

BOOL func_355(int iParam0, int iParam1) // Position - 0x17C1B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

var func_356(BOOL bParam0, var uParam1, var uParam2) // Position - 0x17C2A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_357(var uParam0, int iParam1) // Position - 0x17C41 Hash - 0xD05180BA ^0x39589262
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

void func_358(var uParam0, int iParam1) // Position - 0x17CC7 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_359(var uParam0, int iParam1) // Position - 0x17D03 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_277(*uParam0);
	num2 = func_276(*uParam0);

	if (iParam1 < 1 || iParam1 > func_281(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_360(var uParam0, int iParam1) // Position - 0x17D56 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_361(var uParam0, int iParam1) // Position - 0x17D91 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_362(var uParam0, int iParam1) // Position - 0x17DCA Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_363(int iParam0) // Position - 0x17E02 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_364(Ped pedParam0, int iParam1) // Position - 0x17E83 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_365(Ped pedParam0) // Position - 0x17EC2 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_366(Ped pedParam0, BOOL bParam1) // Position - 0x17EDF Hash - 0x6BE4D4B ^0xC7F6BBCD
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

Hash func_367(Hash hParam0, int iParam1) // Position - 0x17F35 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_295(hParam0, 0))
		return 0;

	num = func_296(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_425(hParam0, 1399091007))
	{
		func_426(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_368(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x17FAF Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_240(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_369(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17FD6 Hash - 0x80B1D514 ^0xEF1B4DAD
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_370(Hash hParam0) // Position - 0x18012 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_371(int iParam0) // Position - 0x1802D Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_372(Hash hParam0, BOOL bParam1) // Position - 0x1804E Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_427(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_429(&unk, func_428(false));

	if (!func_430(&unk, &num, &num2, false))
		return 0;

	func_371(num);
	return num2;
}

void func_373(BOOL bParam0) // Position - 0x180AC Hash - 0x970FE035 ^0x92589DF6
{
	func_431(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_374(int iParam0, var uParam1) // Position - 0x180DF Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_432(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

BOOL func_375(ePedType eptParam0) // Position - 0x1810C Hash - 0x5000025C ^0x5000025C
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

void func_376(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x1855F Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_377(Ped pedParam0, BOOL bParam1) // Position - 0x1858F Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_378(Ped pedParam0, int iParam1) // Position - 0x185D4 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_379(int iParam0) // Position - 0x185FB Hash - 0x5161A142 ^0x26FA799F
{
	Player player;
	int num;
	var unk;
	int i;
	Entity entity;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	player = func_322(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(player))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_433(i);
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, player, num, 0))
		{
		}
		else
		{
			entity = unk.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);
			
				ENTITY::_DELETE_CARRIABLE(&entity);
			}
		}
	}

	return;
}

BOOL func_380(Hash hParam0) // Position - 0x186A1 Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_434(hParam0))
		return false;

	if (!func_435())
		return true;

	return false;
}

void func_381(int iParam0, Player plParam1) // Position - 0x186C4 Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/] = plParam1;
	return;
}

void func_382(int iParam0) // Position - 0x186F0 Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

void func_383(var uParam0) // Position - 0x18728 Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_384(int iParam0, Hash hParam1, var uParam2) // Position - 0x18741 Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_436(iParam0, hParam1);
	!func_437(iParam0, hParam1.f_1);
	return;
}

void func_385(var uParam0) // Position - 0x1877D Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_438(&uParam0->[i /*94*/]);
	}

	return;
}

void func_386(var uParam0) // Position - 0x187A1 Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_387(var uParam0) // Position - 0x187C3 Hash - 0x92E3936E ^0xDB085754
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		uParam0->[i /*5*/] = 0;
		uParam0->[i /*5*/].f_1 = 0;
		uParam0->[i /*5*/].f_2 = 0;
		uParam0->[i /*5*/].f_3 = 0;
		uParam0->[i /*5*/].f_4 = 0;
	}

	return;
}

void func_388(int iParam0) // Position - 0x18808 Hash - 0xF98F3B32 ^0x8A036B17
{
	int i;

	iParam0->f_1 = 0f;
	*iParam0 = 0;

	for (i = 0; i < 23; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			iParam0->f_2[i] = 0f;
		}
	}

	return;
}

void func_389(int iParam0, var uParam1) // Position - 0x1883E Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*uParam1 = num;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
	return;
}

void func_390(int iParam0, var uParam1) // Position - 0x1885E Hash - 0xD41D26E5 ^0x1EE19431
{
	int num;

	num = 0;

	if (iParam0 == 2)
		num = 50;

	*uParam1 = num;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
	return;
}

void func_391(BOOL bParam0) // Position - 0x18887 Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_392(var uParam0) // Position - 0x18898 Hash - 0x5F76BB50 ^0x40F56A0B
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
	return;
}

void func_393(var uParam0) // Position - 0x188B0 Hash - 0x92BF775F ^0x1739D63E
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	return;
}

int func_394(Hash hParam0) // Position - 0x188C3 Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

void func_395(int iParam0) // Position - 0x1897D Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}

	Global_1900383[iParam0 /*45*/].f_25 = 0;
	return;
}

void func_396(int iParam0, int iParam1) // Position - 0x189CE Hash - 0x7B6D7BEE ^0xF15D524D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam1 /*436*/], &Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383.f_508), 436);
	return;
}

void func_397(int iParam0, int iParam1) // Position - 0x18A2D Hash - 0x102876F9 ^0x8EA22A40
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &Global_1900383[iParam1 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam1 /*45*/], &Global_1900383[iParam0 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam0 /*45*/], &(Global_1900383.f_463), 45);
	return;
}

int func_398(int iParam0, int iParam1) // Position - 0x18A75 Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_439(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_439(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_440(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_441(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_442(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

void func_399(Player plParam0) // Position - 0x18B08 Hash - 0xF32FB80D ^0xB662E625
{
	Player player;
	Hash entityModel;
	Hash defaultRelationshipGroupHash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(plParam0);

	if (func_443(plParam0))
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(plParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(plParam0, false, true);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(plParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, plParam0, false);
	PED::_SET_PED_PERSONALITY(plParam0, joaat("player_horse"));
	entityModel = ENTITY::GET_ENTITY_MODEL(plParam0);
	defaultRelationshipGroupHash = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(entityModel);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(plParam0, defaultRelationshipGroupHash);
	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(plParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(plParam0, false);
	PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(player, true);
	PED::REQUEST_PED_VISIBILITY_TRACKING(plParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(plParam0, false);

	if (func_444(plParam0))
	{
		num = func_445(plParam0);
	
		if (func_446(num))
			PED::SET_PED_CONFIG_FLAG(plParam0, 324, true);
	}

	PED::SET_PED_CONFIG_FLAG(plParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(plParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(plParam0, 24, false);
	return;
}

void func_400() // Position - 0x18C72 Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_323(0))
		func_447(0);

	if (func_323(1))
		func_447(1);

	if (func_323(5))
		func_447(5);

	if (func_323(6))
		func_395(6);

	return;
}

Object* func_401() // Position - 0x18CAE Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

void func_402(int iParam0) // Position - 0x18CBD Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_393 = iParam0;
	return;
}

int func_403(var uParam0, var uParam1, var uParam2) // Position - 0x18CCE Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_128())
	{
		if (func_121())
		{
			flag = false;
		
			if (!func_103(Global_1835011[15 /*74*/].f_1, true) && !func_244(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_448();
				*uParam1 = func_449();
				*uParam2 = func_450();
				return 1;
			}
			else
			{
				*uParam0 = func_451();
				*uParam1 = func_452();
				*uParam2 = func_453();
				return 1;
			}
		}
		else if (func_15())
		{
			if (!func_103(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_454();
				*uParam1 = func_455();
				*uParam2 = func_456();
				return 1;
			}
			else
			{
				*uParam0 = func_457();
				*uParam1 = func_458();
				*uParam2 = func_459();
				return 1;
			}
		}
	}
	else if (func_121())
	{
		*uParam0 = func_460();
		*uParam1 = func_461();
		*uParam2 = func_462();
		return 1;
	}
	else if (func_15())
	{
		*uParam0 = func_463();
		*uParam1 = func_464();
		*uParam2 = func_465();
		return 1;
	}

	return 0;
}

void func_404(int iParam0, var uParam1) // Position - 0x18DE8 Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
	return;
}

void func_405(int iParam0, var uParam1) // Position - 0x18E1B Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
	return;
}

void func_406(int iParam0, var uParam1) // Position - 0x18E4E Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
	return;
}

void func_407(int iParam0, int iParam1) // Position - 0x18E81 Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

void func_408(int iParam0, int iParam1) // Position - 0x18EB4 Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Player player;
	int num2;
	int attributeRank;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_331(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_403(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_466(iParam1);
	player = func_322(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(player))
		return;

	if (ENTITY::IS_ENTITY_DEAD(player) || PED::IS_PED_INJURED(player))
		return;

	num2 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(player, 7, num2);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(player, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = attributeRank;
	PED::_SET_MOUNT_BONDING_LEVEL(player, attributeRank);
	return;
}

void func_409(int iParam0, int iParam1) // Position - 0x18FB2 Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

BOOL func_410(int iParam0, int iParam1) // Position - 0x18FEB Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

BOOL func_411(int iParam0, var uParam1) // Position - 0x1901E Hash - 0x9604B47A ^0xC430D780
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_439(iParam0, &unk))
		return false;

	*uParam1 = func_467(unk, joaat("SLOTID_HORSE_MANE"), false);

	if (!func_295(*uParam1, 0))
		return false;

	return true;
}

BOOL func_412(int iParam0, var uParam1) // Position - 0x19067 Hash - 0x9604B47A ^0x406A0DCA
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_439(iParam0, &unk))
		return false;

	*uParam1 = func_467(unk, joaat("SLOTID_HORSE_TAIL"), false);

	if (!func_295(*uParam1, 0))
		return false;

	return true;
}

BOOL func_413(Hash hParam0, var uParam1) // Position - 0x190B0 Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_468(856287005, hParam0))
		return false;

	unk = { func_469() };
	*uParam1 = func_467(unk, hParam0, false);

	if (!func_295(*uParam1, 0))
		return false;

	return true;
}

void func_414(Ped pedParam0) // Position - 0x190F2 Hash - 0x4C9A12AA ^0x56351FC0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_manes"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_tails"), 0, false);
	return;
}

void func_415(Ped pedParam0, var uParam1) // Position - 0x1913C Hash - 0x6EA4BA5B ^0xEF2325EE
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_470(pedParam0, *uParam1);
	func_470(pedParam0, uParam1->f_1);
	return;
}

void func_416(Ped pedParam0) // Position - 0x1917F Hash - 0x4C9A12AA ^0x5B9D01EA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_blankets"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_horns"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_stirrups"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_bedrolls"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_saddlebags"), 0, false);
	return;
}

void func_417(Ped pedParam0, var uParam1) // Position - 0x191FD Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_470(pedParam0, *uParam1);
	func_470(pedParam0, uParam1->f_1);
	func_470(pedParam0, uParam1->f_2);
	func_470(pedParam0, uParam1->f_3);
	func_470(pedParam0, uParam1->f_4);
	func_470(pedParam0, uParam1->f_5);
	return;
}

int func_418(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x19268 Hash - 0x1A2B1EEB ^0x4DBC1D46
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return 0;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, entityModel))
		return 0;

	PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, true, true, true, true, false);

	return 1;
}

char* func_419(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x192BD Hash - 0xC24B5846 ^0x3E064626
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

void func_420(int iParam0, var uParam1, var uParam2) // Position - 0x19366 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_421(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x19382 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_472(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_473(iParam0))
		return false;

	if (func_474(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_475(iParam0, 1) || func_476(32768))
		if (!func_475(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_477())
		return false;

	return true;
}

void func_422(int iParam0, int iParam1) // Position - 0x19424 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_423(int iParam0) // Position - 0x19448 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_424(BOOL bParam0) // Position - 0x19486 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_425(Hash hParam0, Hash hParam1) // Position - 0x19499 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_426(Hash hParam0, var uParam1, var uParam2) // Position - 0x194CA Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_427(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x196D6 Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_428(BOOL bParam0) // Position - 0x197A8 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_240(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_479(923904168, func_478(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_479(923904168, func_478(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_479(923904168, func_478(bParam0), -740156546, false);
}

void func_429(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1983D Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_430(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x19858 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_240(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

void func_431(BOOL bParam0) // Position - 0x1987D Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_432(int iParam0) // Position - 0x19890 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_433(int iParam0) // Position - 0x198A6 Hash - 0x1B64DC55 ^0x1B64DC55
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

BOOL func_434(Hash hParam0) // Position - 0x198DE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_arabian_redchestnut_pc"):
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
		case joaat("a_c_horse_andalusian_perlino"):
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return true;
	}

	return false;
}

BOOL func_435() // Position - 0x19920 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_436(int iParam0, Hash hParam1) // Position - 0x19931 Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_439(iParam0, &unk))
		return false;

	unk30 = { func_479(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_480(unk30, 1);
}

BOOL func_437(int iParam0, Hash hParam1) // Position - 0x19975 Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_439(iParam0, &unk))
		return false;

	unk30 = { func_479(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_480(unk30, true);
}

void func_438(var uParam0) // Position - 0x199B9 Hash - 0x6843C143 ^0xA531F0D1
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

BOOL func_439(int iParam0, Any* panParam1) // Position - 0x19A60 Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_481(iParam0))
		return false;

	hash = func_440(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_478(false) };

	if (!func_482(unk15, hash, &unk, 0, false))
		return false;

	if (!func_483(&unk, panParam1))
		return false;

	return true;
}

Hash func_440(int iParam0) // Position - 0x19AC5 Hash - 0xBD10D1A2 ^0xE9C9558B
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
	
		case 1:
			return -832337898;
	
		case 2:
			return 1271463052;
	
		case 3:
			return 1983140194;
	
		case 4:
			return 677262775;
	}

	return 0;
}

BOOL func_441(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x19B31 Hash - 0x8FC90634 ^0x533F9AFB
{
	var unk;
	var outGuid;

	if (!func_484(bParam10))
		return func_485(uParam0, uParam4, hParam8, true, bParam9, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_486(uParam0, &unk, false, false))
		return false;

	if (func_487(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_240(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_480(outGuid, true);

	return true;
}

BOOL func_442(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x19BF5 Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_484(bParam9))
		return func_488(uParam0, uParam4, iParam8, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_487(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_486(uParam0, &unk, bParam9, true) || !func_486(uParam4, &unk15, bParam9, true))
		return false;

	if (func_487(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_240(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

BOOL func_443(Player plParam0) // Position - 0x19D1A Hash - 0xFE36340F ^0xDEFE3026
{
	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	if (func_489(ENTITY::GET_ENTITY_MODEL(plParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(plParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_444(Player plParam0) // Position - 0x19D53 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(plParam0) || PED::IS_PED_INJURED(plParam0);
	num = func_445(plParam0);

	if (num == -1)
		return false;

	return true;
}

int func_445(Player plParam0) // Position - 0x19D91 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (plParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (plParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

BOOL func_446(int iParam0) // Position - 0x19DD6 Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

void func_447(int iParam0) // Position - 0x19DF7 Hash - 0xD14C6A7D ^0x9C4D4670
{
	Ped ped;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Hash blipHash;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL isPedInWrithe;
	BOOL flag8;
	Ped ped2;
	var entityCoords;
	float num;
	BOOL flag9;
	Hash modifierHash;
	Hash modifierHash2;
	float pedRemainingRevivalTime;
	Hash modifierHash3;
	int num2;
	Hash hash;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		return;

	ped = func_322(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_410(iParam0, 64))
	{
		func_395(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_244(42);

	if (flag)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	
		if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && flag3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), ped);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("blip_saddle"), true);
				func_490(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
	
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}

	flag4 = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (Global_1935630.f_40 == ped)
			flag4 = true;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && flag4)
		func_395(iParam0);

	if (flag4)
		return;

	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
		return;

	flag5 = false;

	if (iParam0 == 0)
	{
		blipHash = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		blipHash = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		flag5 = true;
	}
	else
	{
		return;
	}

	if (flag5)
	{
		flag6 = false;
	
		if (func_491(1) < 1)
			flag6 = true;
	
		if (flag6)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		
			return;
		}
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(blipHash, ped);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_492(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_410(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_493(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_494(entityCoords, Global_36);
	flag9 = false;

	if (num > func_495(iParam0))
		flag9 = true;

	modifierHash = 0;
	modifierHash2 = 0;

	if (flag7)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			modifierHash = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (isPedInWrithe)
	{
		pedRemainingRevivalTime = PED::_GET_PED_REMAINING_REVIVAL_TIME(ped, true);
	
		if (flag9)
		{
			if (pedRemainingRevivalTime < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (pedRemainingRevivalTime < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (pedRemainingRevivalTime < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (pedRemainingRevivalTime <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (pedRemainingRevivalTime < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (pedRemainingRevivalTime < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (pedRemainingRevivalTime < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (pedRemainingRevivalTime <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (flag8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			modifierHash = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}

	if (modifierHash != 0)
	{
		func_496(Global_1900383[iParam0 /*45*/].f_26);
		func_497(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash);
	
		if (modifierHash == joaat("BLIP_MODIFIER_OBJECTIVE"))
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	}

	if (modifierHash2 != 0)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash2);

	if (PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == ped && flag3 && !isPedInWrithe)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));

	if (func_264(ped) && !isPedInWrithe)
	{
		if (blipHash == joaat("BLIP_STYLE_PLAYER_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		else if (blipHash == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
	
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash3);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}

	num2 = func_491(iParam0);
	hash = 0;

	if (iParam0 == 0)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_owned_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_owned_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_owned_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_owned_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_owned_bonding_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_temp_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_temp_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_temp_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_temp_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_temp_bonding_4");
				break;
		}
	}

	if (hash == 0)
	{
		MAP::_0x44813684F72B563C(ped, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(ped, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(ped, hash);
	}

	return;
}

int func_448() // Position - 0x1A56D Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_449() // Position - 0x1A57A Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_450() // Position - 0x1A587 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_451() // Position - 0x1A590 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_452() // Position - 0x1A59D Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_453() // Position - 0x1A5AA Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_454() // Position - 0x1A5B3 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_455() // Position - 0x1A5C0 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_456() // Position - 0x1A5CD Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_457() // Position - 0x1A5D6 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_458() // Position - 0x1A5E3 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_459() // Position - 0x1A5F0 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_460() // Position - 0x1A5F9 Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_461() // Position - 0x1A606 Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_462() // Position - 0x1A613 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_463() // Position - 0x1A61C Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_464() // Position - 0x1A629 Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_465() // Position - 0x1A636 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_466(int iParam0) // Position - 0x1A63F Hash - 0xCC180397 ^0xCC180397
{
	if (func_498() < iParam0)
		func_499(iParam0);

	return;
}

int func_467(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x1A656 Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_500(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_468(Hash hParam0, int iParam1) // Position - 0x1A684 Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_501(hParam0);
	
		if (category != 0)
		{
			num2 = func_502(hParam0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
				{
					num = outSlotId;
				
					if (num == iParam1)
						return true;
				}
			}
		}
	}

	return false;
}

struct<4> func_469() // Position - 0x1A6D8 Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_478(false) };
	return func_479(856287005, unk, -218846335, false);
}

void func_470(Ped pedParam0, Hash hParam1) // Position - 0x1A6FC Hash - 0x11B41686 ^0x947A8CD3
{
	Hash componentHash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (hParam1 == 0)
		return;

	if (hParam1 == -377364164 || hParam1 == 357708345)
		return;

	componentHash = hParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(pedParam0, componentHash, false, false, false);
	return;
}

var func_471(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1A760 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_472(int iParam0, int iParam1) // Position - 0x1A777 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_102() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_473(int iParam0) // Position - 0x1A7AA Hash - 0x3E25647A ^0x3E25647A
{
	if (func_102() != -1)
		if (func_475(iParam0, 4))
			return false;
	else if (func_475(iParam0, 2))
		return false;

	return true;
}

BOOL func_474(int iParam0) // Position - 0x1A7DA Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_475(iParam0, 65536) && !func_475(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_475(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_475(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_475(int iParam0, int iParam1) // Position - 0x1A886 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_476(int iParam0) // Position - 0x1A89F Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_477() // Position - 0x1A8B2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

struct<4> func_478(BOOL bParam0) // Position - 0x1A8C1 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_479(joaat("character"), func_503(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_479(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1A8DD Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_295(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_240(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_480(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1A90E Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_484(false))
		return func_504(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_486(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_240(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_481(int iParam0) // Position - 0x1A981 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_440(iParam0);

	if (hash == 0)
		return false;

	unk = { func_478(false) };

	if (func_505(&unk, hash, false) > 0)
		return true;

	return false;
}

BOOL func_482(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x1A9B6 Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_240(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_483(Any* panParam0, Any* panParam1) // Position - 0x1A9F0 Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_240(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_484(BOOL bParam0) // Position - 0x1AA1F Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_102() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_240(bParam0));
}

int func_485(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11) // Position - 0x1AA3D Hash - 0x657ADCCC ^0xBBA0C366
{
	var unk;
	int num;
	int itemSlotMaxCount;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_486(uParam0, &unk, true, false))
		return -1;

	if (func_487(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	num = func_506(unk.f_4, uParam4, hParam8, false);
	itemSlotMaxCount = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(unk.f_4, hParam8);

	if (itemSlotMaxCount >= 0)
	{
		if (num >= itemSlotMaxCount)
		{
			return -1;
		}
		else if (num + unk.f_11 > itemSlotMaxCount)
		{
			if (bParam11)
				return -1;
		
			unk.f_11 = itemSlotMaxCount - num;
		}
	}

	unk15 = { func_507(&unk) };
	unk15.f_4 = { uParam4 };
	unk15.f_11 = hParam8;
	unk15.f_10 = iParam10;
	num2 = func_508(1168099063, &unk15, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_486(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1AB3B Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_240(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_487(var uParam0, var uParam1) // Position - 0x1AB6B Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_488(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x1ABAC Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_487(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_486(uParam0, &unk, true, false) || !func_486(uParam4, &unk15, true, false))
		return -1;

	if (func_487(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_507(&unk) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_507(&unk15) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
		{
			if (func_509(num, 1168099063, &unk29) && func_509(num, 1168099063, &unk46))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_510(num, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		num = func_508(1168099063, &unk29, false);
		num = func_508(1168099063, &unk46, false);
	}

	return num;
}

BOOL func_489(Hash hParam0) // Position - 0x1AD56 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case joaat("a_c_horse_gang_karen"):
		case joaat("a_c_horse_gang_dutch"):
		case joaat("a_c_horse_eagleflies"):
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case joaat("a_c_horse_gang_sadie_endlesssummer"):
		case joaat("a_c_horse_gang_charles"):
		case joaat("a_c_horse_gang_uncle_endlesssummer"):
		case joaat("a_c_horse_gang_trelawney"):
		case joaat("a_c_horse_gang_kieran"):
		case joaat("a_c_horse_gang_uncle"):
		case joaat("a_c_horse_gang_charles_endlesssummer"):
			return true;
	}

	return false;
}

void func_490(Blip blParam0) // Position - 0x1ADDA Hash - 0x537CC7C9 ^0x5CD1C7C8
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_512(func_511(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_121())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_15();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

int func_491(int iParam0) // Position - 0x1AE27 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_492(Blip blParam0, BOOL bParam1) // Position - 0x1AE5B Hash - 0x74D2E5D1 ^0xBDD9B264
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_512(func_511(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_121())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_15())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

Ped func_493(int iParam0) // Position - 0x1AECD Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_494(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1AEFB Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_495(int iParam0) // Position - 0x1AF19 Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int rank;
	int defaultMaxAttributeRank;
	float num;
	Any any;
	int rank2;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;

	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_331(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_491(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_491(iParam0) + 1;
	num2 = func_513(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_514(num, any, num7);
	return num8;
}

void func_496(Blip blParam0) // Position - 0x1AFD3 Hash - 0x9892E8C ^0x28660E03
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
	return;
}

void func_497(Blip blParam0) // Position - 0x1B05F Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

int func_498() // Position - 0x1B08B Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_499(int iParam0) // Position - 0x1B09C Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

BOOL func_500(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x1B0AF Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_240(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_486(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

Hash func_501(Hash hParam0) // Position - 0x1B0F3 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_295(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_502(Hash hParam0) // Position - 0x1B11E Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_295(hParam0, 0))
		return 0;

	category = func_501(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

struct<4> func_503() // Position - 0x1B14D Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_504(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x1B159 Hash - 0x4C6CAF1 ^0xEE857D47
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk62;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_486(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_296(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_515(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_516(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_517(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_518(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_507(&unk) };
		unk62.f_10 = iParam4;
		num = func_508(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_505(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x1B250 Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_240(bParam2), panParam0, hParam1);
}

int func_506(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1B266 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_295(hParam0, 0))
		return 0;

	guid = { func_479(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_240(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<17> func_507(var uParam0) // Position - 0x1B2AE Hash - 0x4CD39800 ^0x7DC5804
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;
	return unk;
}

int func_508(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1B302 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_509(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_510(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_510(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_510(num, 1);
		return num;
	}

	return -1;
}

BOOL func_509(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1B389 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_510(int iParam0, int iParam1) // Position - 0x1B3A0 Hash - 0x18C74423 ^0xA1132A0
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[i /*9*/].f_1 = iParam1;
			}
		
			return;
		}
	}

	func_519(iParam0, iParam1);
	return;
}

const char* func_511(int iParam0) // Position - 0x1B402 Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_520(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_520(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_512(const char* sParam0, int iParam1) // Position - 0x1B4AB Hash - 0xB0CFF0C3 ^0xBD1D498D
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_521(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_513(int iParam0) // Position - 0x1B4E1 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_315(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_514(float fParam0, Any anParam1, float fParam2) // Position - 0x1B517 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

struct<29> func_515(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1B52C Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_240(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_507(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_516(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1B5C5 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_522(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_510(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_510(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_510(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_517(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1B64C Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_240(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_507(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_518(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1B6BF Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_523(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_510(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_510(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_510(num, 1);
		return num;
	}

	return -1;
}

void func_519(int iParam0, int iParam1) // Position - 0x1B746 Hash - 0x26256B16 ^0x79A35F4E
{
	int i;
	int num;

	if (iParam0 == -1)
		return;

	if (Global_1223212 < 20)
	{
		Global_1223212 = Global_1223212 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223212.f_1[i /*9*/] = { Global_1223212.f_1[i + 1 /*9*/] };
		}
	}

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;
	Global_1223212.f_1[Global_1223212 - 1 /*9*/] = { num };
	return;
}

BOOL func_520(int iParam0, int iParam1) // Position - 0x1B7C3 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_524(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_525())
		return func_524(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_524(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

const char* func_521(const char* sParam0, int iParam1) // Position - 0x1B837 Hash - 0x9E99F03 ^0x352FEB8C
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_522(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1B851 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_523(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1B868 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_524(var uParam0, int iParam1, int iParam2) // Position - 0x1B87F Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_525() // Position - 0x1B8B6 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

