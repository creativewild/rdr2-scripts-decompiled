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
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	Any anLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = -1;
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
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 2;
	var uLocal_55 = 1;
	var uLocal_56 = 1;
	var uLocal_57 = 1;
	var uLocal_58 = 0;
	var uLocal_59 = 1;
	var uLocal_60 = 2;
	var uLocal_61 = 2;
	var uLocal_62 = 3;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 3;
	var uLocal_66 = 1;
	var uLocal_67 = 3;
	var uLocal_68 = 3;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x54A9ED6B ^0xBF64DCBB
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	anLocal_29 = anScriptParam_0;
	iLocal_30.f_1 = anScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&iLocal_30);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_1(&iLocal_30);

	while (func_2())
	{
		switch (iLocal_28)
		{
			case 0:
				if (func_3(&iLocal_30))
				{
					iLocal_28 = 1;
				
					if (iLocal_30.f_4 == -1)
						iLocal_30.f_4 = func_4(&iLocal_30);
				}
				break;
		
			case 1:
				if (func_5(&iLocal_30))
					func_6(&iLocal_30);
			
				func_7(&iLocal_30);
				func_8(&iLocal_30);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&iLocal_30);
	return;
}

void func_1(var uParam0) // Position - 0xA4 Hash - 0x24052CB4 ^0x3F2A6941
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(anLocal_29);
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

	if (iLocal_30 == 0)
	{
		scenarioPointType = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		iLocal_30 = func_10(scenarioPointType);
		return false;
	}

	if (func_11(iLocal_30, 4) || Global_40.f_8863.f_156)
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

void func_8(var uParam0) // Position - 0xA35 Hash - 0xC11C459C ^0xC11C459C
{
	int i;
	int num;
	var args;
	float num2;

	if (iLocal_14 >= 1 && iLocal_14 < 10)
		if (func_48(0, false, true))
			func_49(&iLocal_14, 9);

	switch (iLocal_14)
	{
		case 0:
			if (!func_16(43))
			{
				func_49(&iLocal_14, 9);
				return;
			}
		
			if (func_51(func_50()))
				func_49(&iLocal_14, 9);
			else
				func_49(&iLocal_14, 1);
			break;
	
		case 1:
			for (i = 0; i <= 0; i = i + 1)
			{
				if (!func_53(&iLocal_14.f_7[i], func_52(i)))
					return;
			}
		
			func_49(&iLocal_14, 2);
			break;
	
		case 2:
			if (func_48(70, false, true))
			{
				func_49(&iLocal_14, 9);
				return;
			}
		
			num = func_55(func_54());
		
			if (!func_56(num, 3, 5))
				return;
		
			if (!func_57(uParam0))
				return;
		
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::GET_PLAYER_INDEX()))
				return;
		
			if (!func_58(Global_35, iLocal_14.f_7[0], true, 0))
				return;
		
			func_49(&iLocal_14, 3);
			break;
	
		case 3:
			for (i = 0; i <= 3; i = i + 1)
			{
				STREAMING::REQUEST_MODEL(func_59(i), false);
			}
		
			func_49(&iLocal_14, 4);
			break;
	
		case 4:
			for (i = 0; i <= 3; i = i + 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(func_59(i)))
					return;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14.f_1))
				iLocal_14.f_1 = VEHICLE::_CREATE_MISSION_TRAIN(func_60(), func_61(0), true, false, true, false);
		
			if (!VEHICLE::_HAS_TRAIN_LOADED(iLocal_14.f_1))
				return;
		
			for (i = 0; i <= 3; i = i + 1)
			{
				iLocal_14.f_2[i] = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_14.f_1, i);
			
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14.f_2[i]))
				{
					return;
				}
				else
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_14.f_2[i], false, false);
					ENTITY::SET_ENTITY_ALPHA(iLocal_14.f_2[i], 0, true);
					AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_14.f_2[i], 4, true);
					AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_14.f_2[i], 5, true);
					AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_14.f_2[i], 6, true);
				}
			}
		
			func_49(&iLocal_14, 5);
			break;
	
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14.f_1) || ENTITY::IS_ENTITY_DEAD(iLocal_14.f_1))
				return;
		
			if (CAM::IS_SCREEN_FADED_OUT())
				return;
		
			VEHICLE::SET_TRAIN_SPEED(iLocal_14.f_1, 12f);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_14.f_1, 12f);
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_14.f_1, 4, true);
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_14.f_2[i], 5, true);
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iLocal_14.f_2[i], 6, true);
			func_49(&iLocal_14, 6);
			break;
	
		case 6:
			if (!func_62(&iLocal_14, 200f, 1084227584))
				return;
		
			func_49(&iLocal_14, 7);
			break;
	
		case 7:
			if (!iLocal_14.f_10)
			{
				iLocal_14.f_10 = 1;
				VEHICLE::_0x1BFBAFCC6760FF02(iLocal_14.f_1, false);
				VEHICLE::_TRIGGER_TRAIN_WHISTLE(iLocal_14.f_1, "PASSING", false, false);
			}
		
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_14.f_1))
			{
				args.f_4 = -1;
				args.f_8 = 2;
				args.f_9 = 1;
				args.f_10 = 1;
				args.f_11 = 1;
				args.f_13 = 1;
				args.f_14 = 2;
				args.f_15 = 2;
				args.f_16 = 3;
				args.f_19 = 3;
				args.f_20 = 1;
				args.f_21 = 3;
				args.f_22 = 3;
				args = { 0f, 0f, -0.5f };
				args.f_3 = iLocal_14.f_1;
				args.f_8 = 4;
				args.f_13 = 3;
				args.f_7 = 500;
				IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &args);
			
				if (!func_51(func_50()))
					func_63(func_50());
			}
		
			num2 = func_14(iLocal_14.f_1, func_64(), true);
		
			if (num2 < 1f)
				func_49(&iLocal_14, 8);
			break;
	
		case 8:
			if (!func_65(&iLocal_14, 0f, 1084227584))
				return;
		
			func_66(uParam0);
			func_49(&iLocal_14, 9);
			break;
	
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_14.f_1))
				VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_14.f_1));
		
			func_49(&iLocal_14, 10);
			break;
	
		case 10:
			break;
	}

	return;
}

void func_9(var uParam0) // Position - 0xE3A Hash - 0x3A9B855 ^0xADAB2224
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_14.f_1))
		VEHICLE::DELETE_MISSION_TRAIN(&(iLocal_14.f_1));

	if (func_24(&(iLocal_14.f_11)))
		func_23(&(iLocal_14.f_11));

	return;
}

int func_10(Hash hParam0) // Position - 0xE68 Hash - 0xB8EC44B7 ^0xB12C5BE7
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

BOOL func_11(int iParam0, BOOL bParam1) // Position - 0x1659 Hash - 0x92045BA6 ^0x92045BA6
{
	if (!func_67(iParam0))
		return false;

	return Global_40.f_8863[func_68(iParam0, 1)] && bParam1 != false;
}

void func_12(var uParam0) // Position - 0x1683 Hash - 0xDA8817E5 ^0xAD3AC0C4
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

Vector3 func_13(var uParam0, int iParam1) // Position - 0x1B68 Hash - 0xAF22EF00 ^0xAF22EF00
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
				return func_70(uParam0, iParam1);
			break;
	
		case -1272862985:
			return func_70(uParam0, iParam1);
	
		case -1243267511:
			return func_70(uParam0, iParam1);
	
		case -890175011:
			return func_70(uParam0, iParam1);
	
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
			return func_70(uParam0, iParam1);
	
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
			return func_70(uParam0, iParam1);
	
		case 870958936:
			return func_71(uParam0, iParam1);
	
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
			return func_70(uParam0, iParam1);
	
		case 2000209669:
			return func_69(uParam0, iParam1);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

float func_14(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x201E Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_15() // Position - 0x2046 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_72() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_16(int iParam0) // Position - 0x206B Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_73(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_17(var uParam0) // Position - 0x20CA Hash - 0x700EF42A ^0x1FB24E73
{
	if (func_39(uParam0->f_3, 1))
		return true;

	return false;
}

void func_18(var uParam0) // Position - 0x20E3 Hash - 0xB1BE772 ^0x50C155FC
{
	if (func_33(uParam0->f_6.f_8))
		func_74(&(uParam0->f_6.f_8), true, true);

	func_25(&(uParam0->f_6.f_5));

	if (func_39(uParam0->f_3, 2))
		func_43(&(uParam0->f_3), 2);

	return;
}

void func_19(var uParam0, int iParam1) // Position - 0x2123 Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

BOOL func_20(var uParam0) // Position - 0x2131 Hash - 0x52835008 ^0x3922FFAC
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

void func_21(var uParam0) // Position - 0x2DEC Hash - 0x32186C70 ^0xD26CF7E4
{
	uParam0->f_6.f_2 = { func_70(uParam0, uParam0->f_4) };
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
			func_75(uParam0);
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
			func_75(uParam0);
			break;
	
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
		
			if (uParam0->f_4 == 0 || uParam0->f_4 == 1 || uParam0->f_4 == 3 || uParam0->f_4 == 4)
				func_75(uParam0);
			break;
	
		case -607940493:
			uParam0->f_6 = 30f;
			func_75(uParam0);
			break;
	
		case -321841939:
			uParam0->f_6 = 10f;
			break;
	
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
		
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
				func_75(uParam0);
			break;
	
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			func_75(uParam0);
			break;
	
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x3004 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_23(var uParam0) // Position - 0x302E Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_24(var uParam0) // Position - 0x3044 Hash - 0x5001E582 ^0x5001E582
{
	return func_76(*uParam0, 1);
}

void func_25(var uParam0) // Position - 0x3054 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_77(uParam0, 0f);
	return;
}

int func_26(var uParam0) // Position - 0x3063 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_24(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_78(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_79() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_27(var uParam0, BOOL bParam1) // Position - 0x30B6 Hash - 0x1ACEECAF ^0xDBC34297
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
			return true;
	
		if (func_80(uParam0))
			return true;
	
		if (!func_81(uParam0, 0))
			return true;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return true;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !func_82(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6.f_1 + 0.5f || !func_82(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_80(uParam0))
			return false;
	
		if (!func_81(uParam0, 0))
			return false;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return false;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && func_82(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) <= uParam0->f_6.f_1 && func_82(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}

	return false;
}

void func_28(var uParam0) // Position - 0x32D8 Hash - 0xA17F78FE ^0x7EE7741E
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (func_51(*uParam0))
			{
				uParam0->f_6.f_8 = func_83("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_83("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_83("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_83("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_83("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_83("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_83("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_83("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_83("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_83("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_83("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_83("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_83("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			func_34(uParam0->f_6.f_8, false, true);
		}
		else
		{
			uParam0->f_6.f_8 = func_83("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
		}
	
		func_84(uParam0->f_6.f_8, 13, true, true);
		func_85(uParam0->f_6.f_8);
	}

	return;
}

char* func_29(var uParam0) // Position - 0x371A Hash - 0x750DC69B ^0xE17C6FA3
{
	if (*uParam0 == 404434344)
		if (func_51(*uParam0))
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

void func_30(var uParam0, int iParam1, char* sParam2, BOOL bParam3) // Position - 0x3F86 Hash - 0x92B8786B ^0x6992BF35
{
	int num;
	int num2;
	int num3;

	if (!func_33(iParam1))
		return;

	num = func_86(iParam1);

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

BOOL func_31(var uParam0) // Position - 0x4052 Hash - 0x87BF472A ^0x8A3FB963
{
	if (func_87(uParam0->f_6.f_8, true))
		return true;

	return false;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0x406D Hash - 0x54AA129E ^0x54AA129E
{
	if (!func_67(iParam0))
		return;

	Global_40.f_8863[func_68(iParam0, 1)] = Global_40.f_8863[func_68(iParam0, 1)] || bParam1;
	return;
}

BOOL func_33(int iParam0) // Position - 0x40A3 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_34(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x40E2 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_33(iParam0))
		return;

	num = func_86(iParam0);
	func_88(num, bParam1);
	return;
}

void func_35(var uParam0) // Position - 0x410E Hash - 0xB093A844 ^0xA61CDF5C
{
	if (func_72() != -1)
		return;

	if (*uParam0 == -321841939)
	{
		if (func_89(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
				MAP::_MAP_DISCOVER_REGION(func_89(uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_90(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_90(*uParam0, uParam0->f_4)))
				MAP::_MAP_DISCOVER_REGION(func_90(*uParam0, uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	
		func_91(uParam0);
	}

	return;
}

void func_36(var uParam0, BOOL bParam1) // Position - 0x419C Hash - 0x3BBAC949 ^0x751C9296
{
	int num;

	if (*uParam0 == -321841939)
		if (bParam1)
			if (func_92() < 20 - 1)
				return;
		else if (!func_93())
			return;

	if (bParam1)
		num = func_95(*uParam0, func_94(), uParam0->f_4);
	else
		num = func_96(*uParam0, uParam0->f_4);

	if (num != 0)
	{
		if (bParam1)
		{
			func_97(num, 0);
		
			if (*uParam0 == -890175011)
			{
				if (func_98() == 5 - 1)
				{
					if (func_94())
					{
						func_97(joaat("journal_town_secret_vampmap_ar"), 0);
						num = joaat("journal_town_secret_vampmap_ar");
					}
					else
					{
						func_97(joaat("journal_town_secret_vampmap_jn"), 0);
						num = joaat("journal_town_secret_vampmap_jn");
					}
				}
			}
		}
	
		if (func_99())
		{
			Global_1357518 = num;
		
			if (bParam1 == true)
				Global_1357519 = { uParam0->f_6.f_2 };
		}
	}

	return;
}

void func_37(BOOL bParam0, int iParam1) // Position - 0x426D Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_100(&Global_0, 8);

	if (!func_101() || func_72() != -1)
		return;

	func_100(&Global_0, 1);
	return;
}

float func_38(int iParam0, BOOL bParam1) // Position - 0x42B3 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return 0f;

	num = func_86(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x430B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_40(var uParam0, int iParam1) // Position - 0x431A Hash - 0xF55E891F ^0xF55E891F
{
	func_102(uParam0, iParam1);
	return;
}

void func_41(var uParam0) // Position - 0x432A Hash - 0x7DD80D7C ^0x2A3ED7AA
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_70(uParam0, uParam0->f_4) };
	return;
}

void func_42(var uParam0) // Position - 0x4371 Hash - 0xC9354E8F ^0x12F79925
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &(uParam0->f_6.f_10));

	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x4391 Hash - 0xF55E891F ^0xF55E891F
{
	func_103(uParam0, iParam1);
	return;
}

void func_44(var uParam0) // Position - 0x43A1 Hash - 0x90A3D13B ^0x25DA303B
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(Global_35, 6, false);

	return;
}

BOOL func_45(int iParam0) // Position - 0x43BD Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_46(var uParam0) // Position - 0x443B Hash - 0xA77C53D8 ^0x41543EB2
{
	Vector3 vector;
	var coords;

	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		func_104(*uParam0, &vector);
	
		if (FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(-1, vector, vector.f_3, vector.f_6) == func_105(Global_35))
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

void func_47(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x44C4 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_72() != -1)
		return;

	if (Global_36616 && func_106(iParam1) != false)
		return;

	num = func_107(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_108(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
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
			func_109(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_108(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

BOOL func_48(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x45C3 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_110())
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
		num = func_111(Global_1898164.f_1[0 /*5*/]);
	
		if (func_112(num) && func_113(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_114(Global_1898164.f_1[0 /*5*/]))
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

void func_49(var uParam0, int iParam1) // Position - 0x47C7 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_50() // Position - 0x47D4 Hash - 0x9F572D68 ^0x98E0B04
{
	return 397377585;
}

BOOL func_51(int iParam0) // Position - 0x47E1 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_11(iParam0, 2);
}

struct<11> func_52(int iParam0) // Position - 0x47F0 Hash - 0xBCA200F4 ^0xBF28A1DE
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 688.2557f, -563.7518f, 76.0512f };
			unk.f_3 = { 0f, 0f, 0f };
			unk.f_6 = { 75f, 75f, 25f };
			unk.f_9 = "GHOST_TRAIN_SPAWN";
			unk.f_10 = joaat("volCylinder");
			break;
	}

	return unk;
}

BOOL func_53(var uParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x4850 Hash - 0xC822A061 ^0xC4A17121
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vParam1.f_10, vParam1, vParam1.f_3, vParam1.f_6, vParam1.f_9);

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
		return false;

	return true;
}

int func_54() // Position - 0x4892 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_55(int iParam0) // Position - 0x489E Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_56(int iParam0, int iParam1, int iParam2) // Position - 0x48B1 Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

BOOL func_57(var uParam0) // Position - 0x495A Hash - 0xD6ABB357 ^0xE629F0A9
{
	Hash prevWeatherTypeHashName;
	Hash nextWeatherTypeHashName;

	prevWeatherTypeHashName = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	nextWeatherTypeHashName = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();

	if (func_115(uParam0, &prevWeatherTypeHashName))
		return true;

	return false;
}

BOOL func_58(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x497E Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

Hash func_59(int iParam0) // Position - 0x49B4 Hash - 0x51E02475 ^0xA13C4B2F
{
	switch (iParam0)
	{
		case 0:
			return joaat("ghosttrainsteamer");
	
		case 1:
			return joaat("ghosttraincoalcar");
	
		case 2:
			return joaat("ghosttrainpassenger");
	
		case 3:
			return joaat("ghosttraincaboose");
	
		default:
		
	}

	return 0;
}

Hash func_60() // Position - 0x49FD Hash - 0x9F572D68 ^0x4BD122C1
{
	return 241358608;
}

Vector3 func_61(int iParam0) // Position - 0x4A0A Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (iParam0)
	{
		case 0:
			return 841.39185f, -626.9301f, 73.62413f;
	
		case 1:
			return 841.39185f, -626.9301f, 73.62413f;
	
		case 2:
			return 841.39185f, -626.9301f, 73.62413f;
	
		case 3:
			return 841.39185f, -626.9301f, 73.62413f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_62(var uParam0, float fParam1, int iParam2) // Position - 0x4A7D Hash - 0x750C2821 ^0x3356849F
{
	int i;
	float num;
	float num2;

	if (!func_24(&(uParam0->f_11)))
		func_25(&(uParam0->f_11));

	num = func_116(&(uParam0->f_11));
	num2 = num / iParam2;
	uParam0->f_9 = BUILTIN::FLOOR(func_117(0f, fParam1, num2));

	if ((float)uParam0->f_9 < fParam1)
	{
		for (i = 0; i <= 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[i]))
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[i]))
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_2[i], uParam0->f_9, true);
		}
	}

	if (num >= iParam2)
	{
		func_23(&(uParam0->f_11));
		return true;
	}

	return false;
}

void func_63(int iParam0) // Position - 0x4B1C Hash - 0xDA84A767 ^0xDA84A767
{
	func_32(iParam0, 2);
	func_118(iParam0);
	return;
}

Vector3 func_64() // Position - 0x4B31 Hash - 0x21158019 ^0x21158019
{
	return 647.2307f, -514.88293f, 76.07336f;
}

BOOL func_65(var uParam0, float fParam1, int iParam2) // Position - 0x4B48 Hash - 0x14474A7E ^0xE5737F53
{
	int i;
	float num;
	float num2;
	float num3;

	if (!func_24(&(uParam0->f_11)))
		func_25(&(uParam0->f_11));

	num = func_116(&(uParam0->f_11));
	num3 = iParam2 - num;
	num2 = num3 / iParam2;
	uParam0->f_9 = BUILTIN::FLOOR(func_117(fParam1, 200f, num2));

	if ((float)uParam0->f_9 > fParam1)
	{
		for (i = 0; i <= 3; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[i]))
				ENTITY::SET_ENTITY_ALPHA(uParam0->f_2[i], uParam0->f_9, true);
		}
	}

	if (num >= iParam2)
	{
		func_23(&(uParam0->f_11));
		return true;
	}

	return false;
}

void func_66(var uParam0) // Position - 0x4BE3 Hash - 0x46A0187B ^0x46A0187B
{
	if (!func_51(*uParam0))
	{
		func_63(*uParam0);
		func_91(uParam0);
	}

	return;
}

BOOL func_67(int iParam0) // Position - 0x4C03 Hash - 0x1965A61D ^0x1965A61D
{
	int num;

	num = func_68(iParam0, 1);
	return num >= 0 && num < 143;
}

int func_68(int iParam0, int iParam1) // Position - 0x4C22 Hash - 0x18EDA9F0 ^0x18EDA9F0
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

Vector3 func_69(var uParam0, int iParam1) // Position - 0x526B Hash - 0xAF22EF00 ^0xAF22EF00
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

Vector3 func_70(var uParam0, int iParam1) // Position - 0x537C Hash - 0xC47AB599 ^0xC47AB599
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
			return func_120(uParam0, 0);
	
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
			return func_119(uParam0, 0);
	
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
			return func_119(uParam0, 1);
	
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
			return func_119(uParam0, 0);
	
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
				return func_69(uParam0, 11);
			else
				return func_69(uParam0, 7);
			break;
	
		case 2134589549:
			return func_119(uParam0, 0);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

Vector3 func_71(var uParam0, int iParam1) // Position - 0x5CF4 Hash - 0xBAE0ABDC ^0xBAE0ABDC
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

BOOL func_72() // Position - 0x5F86 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_73(int iParam0, BOOL bParam1) // Position - 0x5F94 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_121(iParam0))
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

void func_74(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5FC5 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_86(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_122(num);
	*uParam0 = 0;
	return;
}

void func_75(var uParam0) // Position - 0x6019 Hash - 0x87234A3C ^0x21D7A27C
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_123(uParam0));
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_123(uParam0));
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
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_123(uParam0));
			else
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, vector2, vector3, func_123(uParam0));
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_123(uParam0));
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
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_123(uParam0));
	}

	return;
}

BOOL func_76(int iParam0, int iParam1) // Position - 0x658A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_77(var uParam0, float fParam1) // Position - 0x6599 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_124() - fParam1;
	func_125(uParam0, 1);
	func_126(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_78(var uParam0) // Position - 0x65BF Hash - 0x39705408 ^0x39705408
{
	return func_76(*uParam0, 2);
}

int func_79() // Position - 0x65CF Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_80(var uParam0) // Position - 0x65ED Hash - 0xD965F2AB ^0x4503AF3C
{
	switch (*uParam0)
	{
		case -1300082860:
			if (func_127(Global_35, func_119(uParam0, 0), 3f, true, true))
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

BOOL func_81(var uParam0, int iParam1) // Position - 0x66BE Hash - 0x787E614B ^0xC23272A0
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (!func_128(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			return false;
	
		if (TASK::_IS_PED_DUELLING(Global_35))
			return false;
	}

	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
		return false;

	if (!func_128(iParam1, 2) && !func_129())
		return false;

	if (!func_128(iParam1, 4) && !func_130())
		return false;

	if (!func_128(iParam1, 128) && !func_131())
		return false;

	if (!func_128(iParam1, 2048) && !func_132(false))
		return false;

	if (!func_128(iParam1, 32) && !func_133(iParam1))
		return false;

	if (!func_128(iParam1, 64) && !func_134())
		return false;

	if (!func_128(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (!func_128(iParam1, 512))
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			return false;

	if (!func_128(iParam1, 1024))
		if (PED::IS_PED_IN_COVER(Global_35, false, true))
			return false;

	if (CAM::_0x1204EB53A5FBC63D())
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		return false;
	else if (func_135(Global_35, 1369124074))
		return false;
	else if (func_135(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		return false;

	return true;
}

BOOL func_82(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x6841 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > iParam4;
}

// Unhandled jump detected. Output should be considered invalid
int func_83(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x6882 Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_136(i, 2))
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
		func_137(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_84(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6959 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_33(iParam0))
		return;

	num = func_86(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_85(int iParam0) // Position - 0x69A4 Hash - 0x4FCB23E1 ^0x764A8AAB
{
	int num;

	if (!func_33(iParam0))
		return;

	num = func_86(iParam0);

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, 1710353528, 0);

	return;
}

int func_86(int iParam0) // Position - 0x69E6 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_87(int iParam0, BOOL bParam1) // Position - 0x69F0 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_86(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_88(int iParam0, BOOL bParam1) // Position - 0x6A48 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_136(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

Hash func_89(int iParam0) // Position - 0x6AA0 Hash - 0xB8EC44B7 ^0x184A6D50
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

Hash func_90(int iParam0, int iParam1) // Position - 0x6BC9 Hash - 0xE1D12727 ^0x5FD78BB4
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

void func_91(var uParam0) // Position - 0x6EB1 Hash - 0x12B095D ^0x8F05BAE7
{
	if (func_72() != -1)
		return;

	if (func_138(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_138(*uParam0)))
			MAP::_MAP_DISCOVER_REGION(func_138(*uParam0));
	
		func_32(*uParam0, 8);
	}

	return;
}

int func_92() // Position - 0x6EF2 Hash - 0x1767447B ^0x234018D7
{
	int i;
	int num;
	int num2;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num2 = func_139(i);
	
		if (func_39(Global_40.f_8863.f_148, num2))
			num = num + 1;
	}

	return num;
}

BOOL func_93() // Position - 0x6F30 Hash - 0xA0319B77 ^0x14CE505F
{
	int i;
	int num;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num = func_139(i);
	
		if (!func_39(Global_40.f_8863.f_148, num))
			return false;
	}

	return true;
}

BOOL func_94() // Position - 0x6F6C Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_72() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_95(int iParam0, int iParam1, int iParam2) // Position - 0x6F92 Hash - 0xFCD0B11D ^0x62D50FE4
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

int func_96(int iParam0, int iParam1) // Position - 0x779E Hash - 0xF3B2DCFE ^0x9CB24CD5
{
	int num;

	num = func_95(iParam0, 1, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	num = func_95(iParam0, 0, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	return 0;
}

void func_97(int iParam0, int iParam1) // Position - 0x77DB Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_140(true);

	return;
}

int func_98() // Position - 0x77F4 Hash - 0xFA45A8A9 ^0x233CB2BD
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

BOOL func_99() // Position - 0x787A Hash - 0x4A33814C ^0x6E4357BF
{
	Hash item;

	if (!func_141(joaat("document_player_journal"), 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (!func_142(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_135(Global_35, 1369124074))
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_LT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_RT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_ACTION")))
		return false;

	item = joaat("document_player_journal");

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_143(false), item, false))
		return false;

	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	func_144();
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), item, 1928812891, 1, 0, -1082130432);
	return true;
}

void func_100(Hash hParam0, int iParam1) // Position - 0x79A7 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_101() // Position - 0x79BA Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_102(var uParam0, int iParam1) // Position - 0x79D9 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_103(var uParam0, int iParam1) // Position - 0x79EA Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_104(Volume volParam0, var uParam1) // Position - 0x79FF Hash - 0x7513460B ^0x6C9F3BDD
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

Ped func_105(Ped pedParam0) // Position - 0x7A7F Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_106(int iParam0) // Position - 0x7A89 Hash - 0xA05361F6 ^0xF8A0FD3E
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

int func_107(int iParam0) // Position - 0x7B9F Hash - 0xC25EDEC0 ^0x47BF4274
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

void func_108(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x7C86 Hash - 0x9A51185A ^0xB800A462
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

	num = func_145();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_146(iParam0);
	
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

	if (func_147(6))
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
	Global_40.f_11095.f_35 = func_148(Global_40.f_11095.f_35, num4, num3);
	num2 = func_145();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_149(num2);
		func_151(func_150(), false, 4000);
		func_152(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_153(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_155(func_154(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_107(14))
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
					func_157(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_157(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_155(func_154(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_107(4))
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
					func_157(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_157(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_154(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_158(10, 1);

	return;
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x802C Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

BOOL func_110() // Position - 0x808B Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_111(int iParam0) // Position - 0x80DE Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_114(iParam0))
		return -1;

	return func_160(func_159(iParam0));
}

BOOL func_112(int iParam0) // Position - 0x80FE Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_113(int iParam0, int iParam1) // Position - 0x8114 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_114(int iParam0) // Position - 0x8123 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_115(var uParam0, var uParam1) // Position - 0x8156 Hash - 0x385A1BB5 ^0x385A1BB5
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

float func_116(var uParam0) // Position - 0x821C Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_24(uParam0))
		return uParam0->f_1;

	if (func_78(uParam0))
		return uParam0->f_2;

	return func_124() - uParam0->f_1;
}

float func_117(float fParam0, float fParam1, float fParam2) // Position - 0x8251 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}

void func_118(int iParam0) // Position - 0x8266 Hash - 0xF9F788B3 ^0x8192C5D9
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		TELEMETRY::_TELEMETRY_DISCOVERABLE(iParam0);
	
		if (func_161(iParam0))
			func_155(func_154(joaat("discoverable_found")), 1);
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
Vector3 func_119(var uParam0, int iParam1) // Position - 0x82A2 Hash - 0xE500AA03 ^0xE500AA03
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

Vector3 func_120(var uParam0, int iParam1) // Position - 0x8DA8 Hash - 0xABFFD40 ^0xABFFD40
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
					if (func_162())
						return 792.7722f, 1776.5087f, 281.5611f;
					else if (func_163())
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

int func_121(int iParam0) // Position - 0x98F7 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_114(iParam0))
		return -1;

	return func_164(iParam0);
}

void func_122(int iParam0) // Position - 0x9913 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_165(iParam0))
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

char* func_123(var uParam0) // Position - 0x99C6 Hash - 0x8601690B ^0xCAC80B52
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

float func_124() // Position - 0x9B8D Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_125(var uParam0, int iParam1) // Position - 0x9BBF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_126(var uParam0, int iParam1) // Position - 0x9BD0 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_127(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x9BE5 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_166(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x9C40 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_129() // Position - 0x9C4F Hash - 0xD50A7FC ^0x92986A81
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

BOOL func_130() // Position - 0x9CEF Hash - 0x52218EDE ^0x68EAB229
{
	if (PED::_IS_PED_SLIDING(Global_35))
		return false;

	if (PED::IS_PED_SWIMMING(Global_35))
		return false;

	if (PED::IS_PED_CLIMBING(Global_35))
		return false;

	if (func_167(Global_35))
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

BOOL func_131() // Position - 0x9D84 Hash - 0xD14A8C13 ^0x8AD85514
{
	if (func_168(Global_35) && !Global_1392040.f_2)
		return false;

	if (func_169(Global_35) && !Global_1392040.f_2)
		return false;

	return true;
}

BOOL func_132(BOOL bParam0) // Position - 0x9DC1 Hash - 0x19762284 ^0xA3A79A09
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_170("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_133(int iParam0) // Position - 0x9DF9 Hash - 0xEEF44B5 ^0x85627F39
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
	
		if (!func_128(iParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35) && VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35)
			return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_171(iParam0))
			return false;
	}

	return true;
}

BOOL func_134() // Position - 0x9ED1 Hash - 0xFFDF5CA4 ^0x50D2CF98
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
		return false;

	return true;
}

BOOL func_135(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x9EE8 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_136(int iParam0, int iParam1) // Position - 0x9F11 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_137(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x9F32 Hash - 0x1B501888 ^0x6546232B
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
	func_88(iParam0, true);
	func_172(iParam0, true);
	func_173(iParam0, 128);
	return;
}

Hash func_138(int iParam0) // Position - 0xA1D8 Hash - 0xB8EC44B7 ^0xC091C19D
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

int func_139(int iParam0) // Position - 0xA2C9 Hash - 0x333EB83A ^0x37C96C1F
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

void func_140(BOOL bParam0) // Position - 0xA3C7 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_174(&(Global_40.f_12019.f_42), 1);
	else
		func_175(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_141(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xA3F1 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_176(hParam0, 0))
		return false;

	num = func_177(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_178(hParam0, 1))
			return false;

	return func_179(hParam0, false, bParam2) >= iParam1;
}

BOOL func_142(int iParam0) // Position - 0xA45B Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_180(iParam0);
}

int func_143(BOOL bParam0) // Position - 0xA469 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_72() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_144() // Position - 0xA4AA Hash - 0x5808700A ^0x37855CE9
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

int func_145() // Position - 0xA4FF Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_181();

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

int func_146(int iParam0) // Position - 0xA612 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_72() != -1)
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

BOOL func_147(int iParam0) // Position - 0xA6B7 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_183(iParam0))
		return false;

	return func_184(iParam0);
}

int func_148(int iParam0, int iParam1, int iParam2) // Position - 0xA6D3 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_149(int iParam0) // Position - 0xA6F8 Hash - 0xEE599357 ^0xEE599357
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

Hash func_150() // Position - 0xA7AF Hash - 0xA46C8CCA ^0x71ABACD2
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

void func_151(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xA907 Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_185(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_186(hParam0);
	return;
}

void func_152(int iParam0) // Position - 0xA933 Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_187(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_153(BOOL bParam0) // Position - 0xA997 Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_188(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_189(i, &hash, &num))
			{
				if (!func_176(hash, 0))
				{
				}
				else
				{
					unlockHash = func_190(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_177(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_145() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_145() >= 160;
					else
						flag = num == func_191();
				
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

struct<2> func_154(int iParam0) // Position - 0xAA58 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_155(var uParam0, var uParam1, int iParam2) // Position - 0xAA68 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xAA78 Hash - 0xA17D549C ^0xB623A3BB
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

int func_157(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xABC4 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_192(sParam0, sParam1, hParam2);
	return num2;
}

int func_158(int iParam0, int iParam1) // Position - 0xAC27 Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_193(iParam0))
		return 0;

	if (!func_101())
		return 0;

	if (!func_194(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_159(int iParam0) // Position - 0xAC82 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_160(BOOL bParam0) // Position - 0xACC0 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_161(int iParam0) // Position - 0xACD3 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_162() // Position - 0xADFF Hash - 0x18690106 ^0x764E08E6
{
	if (func_195(932909855))
		return true;

	return false;
}

BOOL func_163() // Position - 0xAE18 Hash - 0x18690106 ^0xE41C0B15
{
	if (func_195(2051822093))
		return true;

	return false;
}

int func_164(int iParam0) // Position - 0xAE31 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_196(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_165(int iParam0) // Position - 0xAE72 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_136(iParam0, 2);
}

float func_166(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xAE81 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_167(Ped pedParam0) // Position - 0xAE9F Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_168(Ped pedParam0) // Position - 0xAF87 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_197(pedParam0, 4) || func_197(pedParam0, 5);
}

BOOL func_169(Ped pedParam0) // Position - 0xAFA3 Hash - 0x8F7DFED5 ^0x8768F0B4
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

int func_170(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xB00D Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_171(int iParam0) // Position - 0xB048 Hash - 0xCB0CD3AF ^0x98FF0773
{
	Ped mount;

	mount = PED::GET_MOUNT(Global_35);

	if (!func_198(Global_35))
		return false;

	if (!func_128(iParam0, 16) && !func_199(mount, false))
		return false;

	return true;
}

void func_172(int iParam0, BOOL bParam1) // Position - 0xB086 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_173(int iParam0, int iParam1) // Position - 0xB0AF Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_174(int iParam0, int iParam1) // Position - 0xB0D7 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_175(int iParam0, int iParam1) // Position - 0xB0E8 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_176(Hash hParam0, int iParam1) // Position - 0xB0FD Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_177(Hash hParam0) // Position - 0xB117 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_176(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_178(Hash hParam0, int iParam1) // Position - 0xB142 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_176(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_200(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_201("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_202(&unk, i, num, num2))
			{
			}
			else if (!func_203(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_204(num);
				return true;
			}
		}
	
		func_204(num);
	}

	return false;
}

int func_179(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB1EA Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_176(hParam0, 0))
		return 0;

	num = func_177(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_200(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_205(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_143(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_180(int iParam0) // Position - 0xB26C Hash - 0xA059D395 ^0xE600C05
{
	return func_39(Global_1935496.f_27, iParam0);
}

int func_181() // Position - 0xB280 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_182(BOOL bParam0, var uParam1, var uParam2) // Position - 0xB290 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_183(int iParam0) // Position - 0xB2A7 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_184(int iParam0) // Position - 0xB2BA Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_185(int iParam0, BOOL bParam1) // Position - 0xB2E4 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_206(bParam1);

	return;
}

void func_186(Hash hParam0) // Position - 0xB2FF Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_187(int iParam0) // Position - 0xB312 Hash - 0x8FB6A40C ^0x18A00465
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

BOOL func_188(var uParam0) // Position - 0xB433 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_207(23, &unk))
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

BOOL func_189(int iParam0, var uParam1, var uParam2) // Position - 0xB47B Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_207(23, &unk))
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

Hash func_190(Hash hParam0) // Position - 0xB4FB Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_191() // Position - 0xB505 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_145();

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

void func_192(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0xB554 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_193(int iParam0) // Position - 0xB585 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_194(int iParam0, var uParam1, var uParam2) // Position - 0xB5A4 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_193(iParam0))
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

BOOL func_195(int iParam0) // Position - 0xB773 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_208(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

int func_196(int iParam0) // Position - 0xB7C2 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_197(Ped pedParam0, int iParam1) // Position - 0xB843 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_198(Ped pedParam0) // Position - 0xB882 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_199(Ped pedParam0, BOOL bParam1) // Position - 0xB89F Hash - 0x6BE4D4B ^0xC7F6BBCD
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

Hash func_200(Hash hParam0, int iParam1) // Position - 0xB8F5 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_176(hParam0, 0))
		return 0;

	num = func_177(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_209(hParam0, 1399091007))
	{
		func_210(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_201(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xB96F Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_143(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_202(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xB996 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_203(Hash hParam0) // Position - 0xB9D1 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_204(int iParam0) // Position - 0xB9EC Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_205(Hash hParam0, BOOL bParam1) // Position - 0xBA0D Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_211(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_213(&unk, func_212(false));

	if (!func_214(&unk, &num, &num2, false))
		return 0;

	func_204(num);
	return num2;
}

void func_206(BOOL bParam0) // Position - 0xBA6B Hash - 0x970FE035 ^0x92589DF6
{
	func_215(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_207(int iParam0, var uParam1) // Position - 0xBA9E Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_216(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_208(int iParam0, int iParam1) // Position - 0xBACB Hash - 0xEA82FE59 ^0xEA82FE59
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

BOOL func_209(Hash hParam0, Hash hParam1) // Position - 0xD112 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_210(Hash hParam0, var uParam1, var uParam2) // Position - 0xD143 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_211(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xD34F Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_212(BOOL bParam0) // Position - 0xD421 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_143(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_218(923904168, func_217(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_218(923904168, func_217(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_218(923904168, func_217(bParam0), -740156546, false);
}

void func_213(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xD4B6 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_214(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xD4D1 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_143(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

void func_215(BOOL bParam0) // Position - 0xD4F6 Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_216(int iParam0) // Position - 0xD509 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

struct<4> func_217(BOOL bParam0) // Position - 0xD51F Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_218(joaat("character"), func_219(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_218(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xD53B Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_176(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_143(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_219() // Position - 0xD56C Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

