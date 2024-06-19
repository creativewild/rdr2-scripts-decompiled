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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3D0764BF ^0x14C4733C
{
	int num;
	float num2;
	BOOL flag;
	Hash itemInteractionState;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	num.f_2.f_2 = 1086324736;
	num.f_2.f_11.f_1 = 20;
	num.f_2.f_33 = 20;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!uScriptParam_0.f_3 && !num.f_180)
			func_1(false);
	
		func_2();
	}

	func_3(&uScriptParam_0, &(num.f_2));
	num.f_180 = 1;
	num2 = func_4(&num, &(uScriptParam_0.f_1));

	if (num.f_180)
		num.f_2.f_2 = 1f;
	else
		num.f_2.f_2 = 4f;

	if (!uScriptParam_0.f_3 && !num.f_180)
	{
		func_1(true);
		func_5();
	}

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (!uScriptParam_0.f_3)
		{
			if (!num.f_180)
			{
				itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
				func_6(&num);
			
				if (itemInteractionState == 1587785400 || itemInteractionState == 1183277175)
					func_7(&num);
				else if (itemInteractionState == 1342098323 || itemInteractionState == 79398913)
					func_8(&num);
			
				if (!PED::IS_PED_DEAD_OR_DYING(Global_33, true))
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_33, 1.5f);
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);
			func_9(&(num.f_2));
		}
	
		switch (num)
		{
			case 0:
				if (func_10(num.f_2, 0))
					func_11(&(num.f_2));
			
				if (uScriptParam_0.f_3)
				{
					num.f_2.f_2 = 1f;
					func_12(&num, 3);
				}
				else
				{
					func_12(&num, 1);
				}
				break;
		
			case 1:
				if (!num.f_180)
					func_13(itemInteractionState);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
				{
					num.f_2.f_1 = 1 + num.f_2.f_1;
					func_14(num2);
					func_15(&(num.f_2), (float)num.f_2.f_1 >= num.f_2.f_2);
				}
			
				if ((float)num.f_2.f_1 >= num.f_2.f_2)
				{
					func_16(num.f_2, false);
					func_12(&num, 2);
				}
			
				if (!num.f_180)
					if (MISC::GET_FRAME_COUNT() % 10 == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33) > 0.2f)
						func_12(&num, 2);
				break;
		
			case 2:
				if (!num.f_180)
				{
					if (itemInteractionState == -1493684811 || itemInteractionState == -752898125)
					{
						TASK::_0xB35370D5353995CB(Global_33, func_17(num.f_2, itemInteractionState), 1048576000);
						func_12(&num, 4);
					}
					else if (itemInteractionState == 1587785400)
					{
						if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("prop_player_dynamic_seat_chair_table"))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
							PED::_ADD_SCENARIO_TRANSITION(Global_33);
						}
						else
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("PLAYER_BARCUSTOMER_RETURN_BEER"), 3f);
							PED::_ADD_SCENARIO_TRANSITION(Global_33);
						}
					
						func_12(&num, 4);
					}
					else if (itemInteractionState != 1342098323)
					{
					}
					else
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
						PED::_ADD_SCENARIO_TRANSITION(Global_33);
						func_12(&num, 4);
					}
				}
				else
				{
					func_12(&num, 4);
				}
				break;
		
			case 3:
				func_15(&(num.f_2), true);
				func_16(num.f_2, false);
				func_12(&num, 4);
				break;
		
			case 4:
				if (uScriptParam_0.f_3)
					SCRIPTS::TERMINATE_THIS_THREAD();
				else if (!flag)
					if (func_18() == -1 && func_19(0) && func_20(num.f_2, 1490540191))
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_33))
								if (func_21(Global_33, "Player_Sick_Drinking_Cough", joaat("SPEECH_PARAMS_FORCE"), 0, 1, 0, 0, 1))
									flag = true;
					else
						flag = true;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	if (num <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && num.f_180)
	{
		if (!PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_VAULTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
		{
			func_14(num2);
			func_15(&(num.f_2), true);
			func_16(num.f_2, false);
		}
	}

	if (!uScriptParam_0.f_3 && !num.f_180)
		func_1(false);

	return;
}

void func_1(BOOL bParam0) // Position - 0x406 Hash - 0xE9E56CD8 ^0x9CD0E384
{
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 5, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 50, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 49, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 11, 0, bParam0);
	return;
}

void func_2() // Position - 0x441 Hash - 0xFE6C7A60 ^0x13E1ED48
{
	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

void func_3(var uParam0, var uParam1) // Position - 0x455 Hash - 0x4355AD91 ^0xA1D5252D
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_33;
	return;
}

float func_4(var uParam0, var uParam1) // Position - 0x473 Hash - 0xA52B9611 ^0xCA203FE6
{
	float num;
	Hash entityModel;

	switch (uParam0->f_2)
	{
		case joaat("consumable_brandy_used"):
			num = 0.1f;
			break;
	
		case joaat("consumable_whiskey_used"):
			num = 0.13f;
			break;
	
		case joaat("consumable_gin_used"):
			num = 0.1f;
			break;
	
		case -1679900928:
			num = 0.025f;
			uParam0->f_180 = 0;
			break;
	
		case joaat("consumable_carib_rum"):
			num = 0.17f;
			break;
	
		case -520953319:
			num = 0.13f;
			uParam0->f_180 = 0;
			break;
	
		case joaat("consumable_cognac"):
			num = 0.25f;
			break;
	
		case joaat("CONSUMABLE_SALOON_WHISKEY"):
			num = 0.025f;
			uParam0->f_180 = 0;
			break;
	
		case joaat("consumable_gin"):
			num = 0.17f;
			break;
	
		case joaat("consumable_londry_gin"):
		case joaat("consumable_oldtom_gin"):
			num = 0.17f;
			break;
	
		case joaat("CONSUMABLE_SALOON_BEER"):
			num = 0.025f;
			uParam0->f_180 = 0;
			break;
	
		case joaat("consumable_aged_pirate_rum"):
			num = 0.5f;
			break;
	
		case joaat("consumable_moonshine"):
			num = 0.3f;
			break;
	
		case joaat("consumable_whiskey"):
			num = 0.25f;
			break;
	
		case joaat("consumable_rum_used"):
			num = 0.1f;
			break;
	
		case joaat("consumable_brandy"):
			num = 0.17f;
			break;
	
		case joaat("consumable_tenn_whiskey"):
		case joaat("consumable_irish_whiskey"):
		case joaat("consumable_scotch_whiskey"):
			num = 0.3f;
			break;
	
		case joaat("consumable_cyprus_brandy"):
			num = 0.45f;
			break;
	
		case joaat("consumable_rum"):
			num = 0.17f;
			break;
	
		case joaat("consumable_plymouth_gin"):
			num = 0.15f;
			break;
	
		default:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(*uParam1);
			
				if (entityModel == joaat("p_bottlebeer01a"))
				{
					uParam0->f_2 = joaat("CONSUMABLE_SALOON_BEER");
					num = 0.025f;
					uParam0->f_180 = 0;
				}
				else if (entityModel == joaat("p_bottlejd01x"))
				{
					uParam0->f_2 = joaat("CONSUMABLE_SALOON_WHISKEY");
					num = 0.025f;
					uParam0->f_180 = 0;
				}
			}
			break;
	}

	return num;
}

void func_5() // Position - 0x644 Hash - 0xE6006F84 ^0xB7574460
{
	if (PED::IS_PED_MALE(Global_33))
		if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == -664271430)
			STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_BEER_TRANS_GENERIC_A"));
		else
			STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_WHISKEY_TRANS_GENERIC_A"));
	else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == -664271430)
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MP_AMB_PLAYER@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@MP_FEMALE_A@TRANS@A_BEER_TRANS_GENERIC_A"));
	else
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MP_AMB_PLAYER@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@MP_FEMALE_A@TRANS@A_WHISKEY_TRANS_GENERIC_A"));

	return;
}

void func_6(var uParam0) // Position - 0x6A1 Hash - 0xF72A69E1 ^0x20C51AF7
{
	if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 > 0.5f)
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_AWAY_PROMPT", true, 1);

	switch (uParam0->f_1)
	{
		case 0:
			if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 >= 1f / 3f)
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2089200315))
					uParam0->f_1 = 1;
			break;
	
		case 1:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_ALLOW_CHUG_B", true, 1);
		
			if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 >= 2f / 3f)
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2089200315))
					uParam0->f_1 = 2;
			break;
	
		case 2:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_ALLOW_CHUG_C", true, 1);
		
			if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 >= 1f)
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2089200315))
					uParam0->f_1 = 3;
			break;
	
		case 3:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			break;
	}

	return;
}

void func_7(var uParam0) // Position - 0x7B2 Hash - 0x1F61555B ^0xCE9A84EE
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 574156416))
	{
		PED::_ADD_SCENARIO_TRANSITION(Global_33);
		PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
	}

	return;
}

void func_8(var uParam0) // Position - 0x7E1 Hash - 0x1F61555B ^0x6D95F421
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 574156416))
	{
		PED::_ADD_SCENARIO_TRANSITION(Global_33);
		PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
	}

	return;
}

int func_9(var uParam0) // Position - 0x810 Hash - 0x11288838 ^0xE3C355F
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return 0;

	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1234314267))
		{
			func_22(uParam0);
			return 1;
		}
	}

	if (!uParam0->f_177)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1895155945))
			uParam0->f_177 = 1;

	return 0;
}

BOOL func_10(Hash hParam0, int iParam1) // Position - 0x87F Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_11(var uParam0) // Position - 0x899 Hash - 0x9FDF9381 ^0x3B8D525B
{
	int i;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[i], &uParam0->f_33[i /*7*/]);
	}

	return;
}

void func_12(var uParam0, int iParam1) // Position - 0x8D9 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_13(Hash hParam0) // Position - 0x8E6 Hash - 0xD9F8C7D0 ^0x700568E
{
	if (hParam0 == -1493684811)
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("world_human_barcustomer") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("prop_player_dynamic_seat_chair_table"))
			TASK::_0xB35370D5353995CB(Global_33, 1587785400, 1f);
	else if (hParam0 == 1587785400)
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
			TASK::_0xB35370D5353995CB(Global_33, -1493684811, 1f);
	else if (hParam0 == -752898125)
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == joaat("prop_player_dynamic_seat_chair_table"))
			TASK::_0xB35370D5353995CB(Global_33, 1342098323, 1f);
	else if (hParam0 == 1342098323)
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
			TASK::_0xB35370D5353995CB(Global_33, -752898125, 1f);

	return;
}

void func_14(float fParam0) // Position - 0x9D4 Hash - 0xB88B23F5 ^0x231A9AEE
{
	if (fParam0 > 0f)
	{
		if (func_23())
			func_24(fParam0, false);
	
		Global_1940026.f_3 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_15(var uParam0, BOOL bParam1) // Position - 0x9FB Hash - 0xD734C260 ^0xF4862D2C
{
	int i;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (func_20(*uParam0, 1573112293) || func_20(*uParam0, 672467738) || func_20(*uParam0, -550842268))
		flag3 = true;

	flag4 = func_25(*uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940085.f_26 = 0;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		switch (uParam0->f_33[i /*7*/].f_1)
		{
			case -1104847406:
				num2 = func_26(2, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_28((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, false);
				flag = true;
				break;
		
			case -943921969:
				num = func_26(0, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_27((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				flag2 = true;
				break;
		
			case -816334026:
				func_32(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_2) / uParam0->f_2, 1 == uParam0->f_1);
				break;
		
			case joaat("EFFECT_HEALTH_CORE"):
				num4 = func_30((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_31(0, num4, true, true, flag3);
				flag2 = true;
				break;
		
			case 381158954:
				num3 = func_26(1, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_29((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				break;
		
			case joaat("EFFECT_STAMINA_CORE"):
				num6 = func_30((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_31(1, num6, true, true, flag3);
				break;
		
			case joaat("EFFECT_DEADEYE_CORE"):
				num5 = func_30((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_31(2, num5, true, true, flag3);
				flag = true;
				break;
		
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[i /*7*/].f_1)
					{
						case -1240225157:
							num7 = func_33(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_34(1, num7, flag4, true);
							break;
					
						case joaat("Effect_Stamina_Core_Gold"):
							num7 = func_33(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_34(18, num7, flag4, true);
							break;
					
						case joaat("Effect_Deadeye_Core_Gold"):
							num7 = func_33(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_34(20, num7, flag4, true);
							flag = true;
							break;
					
						case 1342237631:
							num7 = func_33(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_34(2, num7, flag4, true);
							flag = true;
							break;
					
						case 1869697234:
							num7 = func_33(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_34(0, num7, flag4, true);
							flag2 = true;
							break;
					
						case joaat("Effect_Health_Core_Gold"):
							num7 = func_33(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_34(19, num7, flag4, true);
							flag2 = true;
							break;
					}
				}
				break;
		}
	}

	if (bParam1)
	{
		func_35(uParam0);
		func_36(*uParam0, flag, flag2, 562618531);
	}

	func_22(uParam0);
	uParam0->f_3 = uParam0->f_3 + num;
	uParam0->f_4 = uParam0->f_4 + num2;
	uParam0->f_5 = uParam0->f_5 + num3;
	uParam0->f_6 = uParam0->f_6 + num4;
	uParam0->f_7 = uParam0->f_7 + num5;
	uParam0->f_8 = uParam0->f_8 + num6;
	return;
}

void func_16(int iParam0, BOOL bParam1) // Position - 0xDA2 Hash - 0x68FEEC19 ^0xE7FF79EC
{
	var unk;
	var unk11;

	switch (iParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_prairie_poppy"):
			if (bParam1 || !func_46() || !PED::IS_PED_ON_FOOT(Global_33))
				return;
		
			if (iParam0 != joaat("consumable_herb_prairie_poppy") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				unk11 = { unk };
				TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_puking_item", 32);
				unk11.f_14 = 512;
				func_44(unk11, 0);
			}
			break;
	
		case -2067647508:
		case -912678731:
		case -464445204:
		case 470703221:
		case 1051259759:
		case 1324459658:
			func_38(func_37(iParam0));
			break;
	
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			unk.f_1 = iParam0;
			unk11.f_15 = 1;
			unk11 = { unk };
			TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_weight_control_item", 32);
			unk11.f_14 = 512;
			func_44(unk11, 0);
			break;
	
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_ginseng"):
		case joaat("consumable_herb_vanilla_flower"):
			func_45(joaat("STATUS_EFFECT__POISON"));
			break;
	
		case -1088257729:
			func_39(-1685270562, -2038430863, 1800);
		
			if (func_40() || func_41())
				func_43(func_42(joaat("USED"), 1001560750), 1);
			break;
	
		case -611782825:
			func_39(-813902658, -2082434331, 1800);
			break;
	
		case joaat("consumable_valerian_root"):
			break;
	
		case joaat("consumable_aged_pirate_rum"):
			break;
	
		case joaat("consumable_ginseng_elixier"):
			break;
	
		case joaat("consumable_potent_antidote"):
		case joaat("consumable_antidote"):
			if (iParam0 == joaat("consumable_antidote"))
			{
			}
			else
			{
				iParam0 == joaat("consumable_potent_antidote");
			}
		
			func_47();
			break;
	}

	return;
}

Hash func_17(Hash hParam0, Hash hParam1) // Position - 0xF6D Hash - 0xD9CF8014 ^0xED4665F1
{
	switch (func_48(hParam0, -949239683))
	{
		case -2001232688:
			return -458747598;
	
		case -476940445:
			if (hParam1 == 1587785400)
				return 1534923913;
			else
				return -2061488501;
			break;
	}

	return -2061488501;
}

int func_18() // Position - 0xFBF Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_19(int iParam0) // Position - 0xFCD Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

BOOL func_20(Hash hParam0, Hash hParam1) // Position - 0xFD6 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_10(hParam0, 0))
		return func_50(func_49(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_21(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1017 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_51(pedParam0, &str);
}

void func_22(var uParam0) // Position - 0x105E Hash - 0xA2F56449 ^0xA1F38980
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_174, 2, false);
			uParam0->f_176 = 1;
		}
	}

	return;
}

BOOL func_23() // Position - 0x1088 Hash - 0x286EE6DB ^0x286EE6DB
{
	if (func_52())
		return false;

	return true;
}

void func_24(float fParam0, BOOL bParam1) // Position - 0x109C Hash - 0xAB9EE822 ^0xDE509061
{
	func_53(Global_1940026.f_9 + fParam0, bParam1);
	return;
}

BOOL func_25(int iParam0) // Position - 0x10B3 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case joaat("provision_role_moonshiner_moonshine_flavor_tropical_punch"):
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_creek"):
		case joaat("provision_role_moonshiner_mash_medium"):
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_cobbler"):
		case joaat("provision_role_moonshiner_moonshine_flavor_poison_poppys"):
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_mint"):
		case -545779394:
		case joaat("provision_role_moonshiner_moonshine_flavor_apple_berry_crumb"):
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_cider"):
		case joaat("provision_role_moonshiner_mash_low"):
		case joaat("provision_role_moonshiner_mash_high"):
		case 1532695640:
		case joaat("provision_role_moonshiner_moonshine_flavor_spiced_island"):
		case 1847740267:
		case joaat("provision_role_moonshiner_moonshine_flavor_agarita_sunrise"):
		case joaat("provision_role_moonshiner_moonshine_flavor_evergreen"):
			return 0;
	}

	return 1;
}

float func_26(int iParam0, float fParam1) // Position - 0x112B Hash - 0x17EDCAD1 ^0xD87169C2
{
	float pedStamina;
	float pedMaxStamina;
	float num;
	float num2;

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}

	num2 = fParam1 + pedStamina;

	if (num2 > pedMaxStamina)
		num = pedMaxStamina - pedStamina;
	else
		num = num2 - pedStamina;

	return num / 2f;
}

void func_27(float fParam0) // Position - 0x11BC Hash - 0xC5B8A029 ^0xEE3B2C23
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_GET_NUM_RESERVED_HEALTH(ped));

	num = func_54(2);
	func_55(fParam0 * (float)num, 0);
	return;
}

void func_28(float fParam0, BOOL bParam1) // Position - 0x11FC Hash - 0x3C04298E ^0xB65A98E1
{
	int num;

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(10);

	num = func_56(2);
	func_57(fParam0 * (float)num, false, bParam1);
	return;
}

void func_29(float fParam0) // Position - 0x1234 Hash - 0xC5B8A029 ^0xA3577BA4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(ped));

	num = func_58(2);
	func_59(fParam0 * (float)num, 0);
	return;
}

float func_30(float fParam0, float fParam1) // Position - 0x1274 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_31(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12A2 Hash - 0xF1ADCC2F ^0xF1ADCC2F
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_60(iParam0, fParam1, true);

	func_62(iParam0, func_61(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_32(float fParam0, BOOL bParam1) // Position - 0x12DB Hash - 0xF3A2F5AE ^0x22F56C08
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_63())
		func_64(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_65(109, false);
	}

	return;
}

float func_33(float fParam0, int iParam1) // Position - 0x1333 Hash - 0x4EDD98F5 ^0x4EDD98F5
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

int func_34(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1385 Hash - 0xAC70E962 ^0x1F9746E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_66(iParam0, fParam1, bParam2, bParam3);
}

void func_35(var uParam0) // Position - 0x13A9 Hash - 0x98F103C7 ^0xDC387ECE
{
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			func_39(-1196069774, joaat("CONSUMABLE__DAILY_STEW"), 8100);
			break;
	}

	return;
}

void func_36(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x1429 Hash - 0xF84CCCD4 ^0x73109519
{
	if (bParam2 || func_20(hParam0, -537818634))
		func_43(func_67(joaat("medicine_items_used")), 1);

	if (func_20(hParam0, -1457797660))
		func_43(func_67(joaat("provision_items_used")), 1);

	if (func_20(hParam0, 1573112293))
		func_69(func_68(hParam0), 1);

	if (func_20(hParam0, 1939071949))
		func_43(func_42(joaat("USED"), joaat("tonic")), 1);

	if (func_20(hParam0, 1992556171))
		func_43(func_67(joaat("camp_stews_consumed")), 1);

	if (func_20(hParam0, 1239889275))
		func_43(func_67(joaat("antique_bottles_drunk")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_43(func_42(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_special_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
		case joaat("consumable_potent_horse_medicine"):
			func_43(func_42(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_43(func_42(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_43(func_42(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_43(func_42(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case -611782825:
			func_43(func_42(joaat("USED"), -1875859641), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_43(func_42(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_43(func_42(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_43(func_42(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_43(func_42(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_18() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_43(func_42(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam1)
		func_43(func_67(joaat("DEADEYE_ITEMS_USED")), 1);

	func_70(hParam0, iParam3);
	return;
}

int func_37(int iParam0) // Position - 0x1693 Hash - 0x9B40E1AB ^0x9B40E1AB
{
	var unk;

	if (!func_71(&unk))
		return 0;

	if (!func_72(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_72(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_72(&unk, 39, iParam0, 0, 1))
		return 0;

	return func_73(unk);
}

void func_38(int iParam0) // Position - 0x16EB Hash - 0x311DBB1C ^0x311DBB1C
{
	func_74(iParam0);
	func_75(true, true);
	return;
}

int func_39(int iParam0, int iParam1, int iParam2) // Position - 0x16FF Hash - 0xF97EDB1D ^0xF97EDB1D
{
	int num;

	if (!func_76(iParam1))
		return 0;

	if (!func_77(iParam1))
		return 0;

	if (!func_78(iParam0))
		return 0;

	if (!func_79(iParam0))
		return 0;

	if (!func_80(iParam0))
		func_81(iParam0);

	if (func_82(iParam0, iParam1))
	{
		num = func_83(iParam0);
		Global_1156111.f_47689.f_63[num /*2*/] = iParam0;
		Global_1156111.f_47689.f_63[num /*2*/].f_1 = Global_1295666.f_16 + iParam2;
		return 1;
	}

	return 0;
}

BOOL func_40() // Position - 0x1793 Hash - 0xC7A0A0FD ^0xFFB17F52
{
	if (func_84())
		return false;

	return Global_1956875.f_1431.f_96 == 0;
}

BOOL func_41() // Position - 0x17B1 Hash - 0xF0E68978 ^0x71076D6B
{
	if (func_84())
		return false;

	return Global_1956875.f_1431.f_96 == 2;
}

struct<2> func_42(int iParam0, int iParam1) // Position - 0x17CF Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_43(var uParam0, var uParam1, int iParam2) // Position - 0x17E5 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x1802 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_85(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_86(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_87(iParam16);
			return;
		}
	}

	return;
}

void func_45(int iParam0) // Position - 0x189E Hash - 0x5D78382 ^0x8F13B3A8
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int j;
	var unk;

	num2 = Global_1156111.f_47689.f_1.f_42;
	unk = 20;

	for (i = 0; i < num2; i = i + 1)
	{
		num = Global_1156111.f_47689.f_1[i /*2*/];
		num3 = func_88(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_81(num);
			Global_1156111.f_47689.f_1.f_42 = Global_1156111.f_47689.f_1.f_42 - 1;
		}
		else
		{
			unk[num4 /*2*/] = { Global_1156111.f_47689.f_1[i /*2*/] };
			num4 = num4 + 1;
		}
	}

	for (j = 0; j < num4; j = j + 1)
	{
		Global_1156111.f_47689.f_1[j /*2*/] = { unk[j /*2*/] };
	}

	return;
}

BOOL func_46() // Position - 0x196E Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_89(1);
}

void func_47() // Position - 0x197B Hash - 0xF750052 ^0xD5562B72
{
	func_45(joaat("STATUS_EFFECT__POISON"));
	func_45(joaat("STATUS_EFFECT__TRACKING"));
	return;
}

int func_48(Hash hParam0, int iParam1) // Position - 0x1995 Hash - 0x7A1C2599 ^0xFF9B5634
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

Hash func_49(Hash hParam0) // Position - 0x19DF Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_50(Hash hParam0, Hash hParam1) // Position - 0x19E9 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_90(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_51(Ped pedParam0, Any* panParam1) // Position - 0x1A1F Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_52() // Position - 0x1A2F Hash - 0x16C45944 ^0x16C45944
{
	return func_92(func_91(0));
}

void func_53(float fParam0, BOOL bParam1) // Position - 0x1A40 Hash - 0x54FDE17D ^0xA57581BE
{
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (fParam0 >= func_93())
		{
			Global_1940026.f_9 = func_93() - 0.01f;
			return;
		}
	}

	if (fParam0 < 0f)
	{
		Global_1940026.f_9 = 0f;
		PED::_SET_PED_MOTIVATION(Global_33, 10, Global_1940026.f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940026.f_14)
	{
		Global_1940026.f_9 = 0.99f;
	}
	else if (fParam0 > 1f)
	{
		Global_1940026.f_9 = 1f;
	}
	else
	{
		Global_1940026.f_9 = fParam0;
	}

	if (bParam1)
		Global_1940026.f_12 = 1;

	return;
}

int func_54(int iParam0) // Position - 0x1AE3 Hash - 0x262796A6 ^0x32C91F91
{
	if (iParam0 == 2)
		iParam0 = func_94(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546;
	
		case 1:
			return Global_1956875.f_1565.f_136;
	
		default:
		
	}

	return -1;
}

void func_55(float fParam0, Ped pedParam1) // Position - 0x1B23 Hash - 0x81B8D237 ^0xD25A4B21
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_56(int iParam0) // Position - 0x1B67 Hash - 0x3229E1B0 ^0x75954C0C
{
	if (iParam0 == 2)
		iParam0 = func_94(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_1;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_1;
	
		default:
		
	}

	return -1;
}

void func_57(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1BAB Hash - 0x5072E518 ^0x6DDAEE0A
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_95(player))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f && !bParam2)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 1);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

int func_58(int iParam0) // Position - 0x1C5C Hash - 0x3229E1B0 ^0x4F226FB4
{
	if (iParam0 == 2)
		iParam0 = func_94(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_2;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_2;
	
		default:
		
	}

	return -1;
}

void func_59(float fParam0, Ped pedParam1) // Position - 0x1CA0 Hash - 0xFCEEE112 ^0xFADF1B0E
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	PED::_CHANGE_PED_STAMINA(pedParam1, fParam0);
	return;
}

float func_60(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1CE2 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_96();
	func_97(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_98(iParam0, 2);

	if (func_100(num, func_99(iParam0, 2), true))
	{
		func_101(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_65(103, bParam2);
		return 0f;
	}

	func_102(iParam0, func_96(), 2);
	func_101(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_61(int iParam0, int iParam1) // Position - 0x1D4B Hash - 0x76523351 ^0x92907141
{
	if (iParam1 == 2)
		iParam1 = func_94(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_62(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1D97 Hash - 0x1328B2DE ^0xDA7EEDC8
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_94(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_103(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_104(iParam0, 7000, iParam5);
	
		func_105(ped, iParam0, fParam1);
		func_106(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

BOOL func_63() // Position - 0x1E11 Hash - 0x57305A7F ^0x41946F5D
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_107(Global_1956875.f_1431.f_107, false);
}

void func_64(float fParam0, int iParam1) // Position - 0x1E3A Hash - 0x6AFE3513 ^0x6AFE3513
{
	float num;
	int num2;
	int num3;

	num = func_108(13, 2);
	num2 = func_109(num);
	num = num + fParam0;
	num = func_110(num, 0f, 100f);
	num3 = func_109(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_96();
		func_111(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_112(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

void func_65(int iParam0, BOOL bParam1) // Position - 0x1EAD Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_113(iParam0, &num, &num2);

	if (!func_114(iParam0, num, num2, bParam1))
		return;

	func_115(num, num2);
	return;
}

int func_66(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1EDA Hash - 0xFF5C68E3 ^0x564C72DE
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_116(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return 0;

	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				effectName = func_117(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_118(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_117(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_45(joaat("STATUS_EFFECT__TRACKING"));
			func_119(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_117(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_120(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_121(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_45(joaat("STATUS_EFFECT__POISON"));
			func_121(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_121(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

struct<2> func_67(int iParam0) // Position - 0x2090 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_68(Hash hParam0) // Position - 0x20A0 Hash - 0x4DAA6E6F ^0x4DAA6E6F
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 27;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 29;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("provision_wldflwr_cardinal_flower"):
			return 44;
	
		case joaat("consumable_herb_sage"):
			return 35;
	
		case joaat("provision_wldflwr_creek_plum"):
			return 46;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_wldflwr_blood_flower"):
			return 43;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 32;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 52;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 21;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			return 45;
	
		case joaat("consumable_herb_yarrow"):
			return 53;
	
		case joaat("consumable_herb_wild_mint"):
			return 51;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_wldflwr_wisteria"):
			return 48;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 39;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			return 41;
	
		case joaat("consumable_herb_milkweed"):
			return 24;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 30;
	
		case joaat("consumable_herb_oregano"):
			return 28;
	
		case joaat("consumable_herb_red_raspberry"):
			return 34;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 50;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("provision_wldflwr_bitterweed"):
			return 42;
	
		case joaat("consumable_herb_wild_carrots"):
			return 49;
	
		case joaat("provision_wldflwr_agarita"):
			return 40;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			return 47;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 38;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	}

	return 0;
}

void func_69(int iParam0, int iParam1) // Position - 0x227B Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_42(joaat("eaten"), func_122(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_43(func_123(joaat("herbs_eaten")), iParam1);
	return;
}

void func_70(Hash hParam0, int iParam1) // Position - 0x22AD Hash - 0x5F9FD31D ^0xFCD5D23C
{
	int num;

	if (func_18() == 0)
	{
		num = func_48(hParam0, -949239683);
	
		if (iParam1 == -1387038764)
			return;
	
		if (func_20(hParam0, -136654233))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_CannedGoodsEaten_00"), 1);
	
		if (func_20(hParam0, 1765172170) || 1443104131 == num || -1919515848 == num)
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TobaccoSmokedChewed_00"), 1);
	
		if (func_20(hParam0, 1573112293))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_HerbsTasted_00"), 1);
	
		if (func_20(hParam0, -2085281117) && !func_20(hParam0, -1237028043))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_FreshProduceEaten_00"), 1);
	
		if (func_20(hParam0, 200705431))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_DryGoodsEaten_00"), 1);
	
		if (func_20(hParam0, joaat("ci_tag_item_meat_animal")) || func_20(hParam0, -839724752) || func_20(hParam0, 1264218912) || hParam0 == joaat("consumable_offal"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_MeatEaten_00"), 1);
	
		if (func_20(hParam0, -764700608))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TonicOilUsed_00"), 1);
	
		if (hParam0 == joaat("consumable_candy_bag") || hParam0 == joaat("consumable_chocolate_bar") || hParam0 == joaat("consumable_peppermint"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
	
		if (hParam0 == joaat("consumable_coffee"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
	}

	return;
}

BOOL func_71(Any* panParam0) // Position - 0x244E Hash - 0x6E844BA9 ^0x869AC4DA
{
	var src;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);

	if (!func_124(1))
		return false;

	*panParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

BOOL func_72(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x247D Hash - 0xE0BDD26B ^0x7E1BB2F9
{
	var unk;

	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;
	unk = panParam0->f_1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x24B6 Hash - 0x16FE2F8B ^0x16FE2F8B
{
	return func_125(&uParam0, 61, 1);
}

void func_74(int iParam0) // Position - 0x24C7 Hash - 0x241D946F ^0xA232193E
{
	int num;

	func_126(iParam0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 1, false, false);
	func_127();
	func_128(8388608);

	if (func_129(iParam0, &num))
		func_131(func_130(num));

	return;
}

void func_75(BOOL bParam0, BOOL bParam1) // Position - 0x2516 Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_132(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_134(0);
	}
	else
	{
		if (bParam1)
			func_135(0, false, 0, true);
	
		func_136(0);
		func_137(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_138(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_139(Global_1102813.f_3839, 36);
	func_140(Global_1102813.f_3878, 36);
	return;
}

BOOL func_76(int iParam0) // Position - 0x2661 Hash - 0xE114E312 ^0xE114E312
{
	int num;

	num = func_141(iParam0, 1);

	if (num >= 150 && num <= 152)
		return true;

	return false;
}

BOOL func_77(int iParam0) // Position - 0x2689 Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_141(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

BOOL func_78(int iParam0) // Position - 0x26B1 Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_88(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_79(int iParam0) // Position - 0x26D9 Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_88(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_80(int iParam0) // Position - 0x2701 Hash - 0x29DE2428 ^0x62E85AA
{
	if (!func_79(iParam0))
		return false;

	return Global_1156111.f_35859.f_919[func_88(iParam0, 1) /*12*/] == -1;
}

// Unhandled jump detected. Output should be considered invalid
int func_81(int iParam0) // Position - 0x272E Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_79(iParam0))
		return 0;

	num = func_88(iParam0, 1);

	if (!func_77(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_141(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_142(iParam0, num2))
		{
			case 0:
				func_143(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_143(num2, iParam0, i);
						func_144(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_144(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_145(num2, 1);
		func_146(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_147(num3, 0);
		
			for (k = 0; k < Global_1156111.f_35859.f_9502; k = k + 1)
			{
				if (Global_1156111.f_35859.f_9302[k] != num2)
				{
				}
				else
				{
					Global_1156111.f_35859.f_9302[k] = -1;
					Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 - 1;
					Global_1156111.f_35859.f_9302[k] = Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502];
					Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = -1;
					break;
				}
			}
		}
	}

	Global_1156111.f_35859.f_919[num /*12*/] = -1;
	func_148(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_82(int iParam0, int iParam1) // Position - 0x29BE Hash - 0x7239F0F1 ^0x156DB2F1
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;

	if (!func_79(iParam0))
		return false;

	num = func_88(iParam0, 1);

	if (!func_77(iParam1))
		return false;

	num2 = func_141(iParam1, 1);

	if (Global_1156111.f_35859.f_919[num /*12*/] == iParam1)
		return true;

	if (func_77(Global_1156111.f_35859.f_919[num /*12*/]))
		func_81(iParam0);

	Global_1156111.f_35859.f_919[num /*12*/] = iParam1;

	for (i = 0; i < Global_1156111.f_35859[num2 /*6*/].f_5; i = i + 1)
	{
		num3 = Global_1156111.f_35859[num2 /*6*/][i];
		num4 = func_145(num3, 1);
	
		switch (func_149(iParam0, num3))
		{
			case 0:
				func_150(num3, iParam0, i);
				break;
		
			case 1:
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] = num3;
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/].f_2 = i;
				Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 + 1;
				break;
		
			case 2:
				goto 0x1AB;
		}
	
		if (Global_1156111.f_35859.f_3116[num4 /*31*/].f_29 <= 0)
		{
			Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = num3;
			Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 + 1;
		}
	
		func_146(num4, 1);
	}

	return true;
}

int func_83(int iParam0) // Position - 0x2B76 Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_88(iParam0, 1);

	if (func_151(iParam0))
		return num - 2;
	else if (func_152(iParam0))
		return num - 130;
	else if (func_153(iParam0))
		return num - 166;
	else if (func_154(iParam0))
		return num - 167;
	else if (func_155(iParam0))
		return num - 172;
	else if (func_78(iParam0))
		return num - 180;
	else if (func_156(iParam0))
		return num - 150;

	return -1;
}

BOOL func_84() // Position - 0x2C10 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

BOOL func_85(int iParam0, int iParam1) // Position - 0x2C35 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_86(const char* sParam0) // Position - 0x2C44 Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939434[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_87(int iParam0) // Position - 0x2C7E Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_85(iParam0, 1))
		func_157(1);

	return;
}

int func_88(int iParam0, int iParam1) // Position - 0x2C95 Hash - 0x26934C66 ^0x26934C66
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
	
		case -2059285007:
			return 167;
	
		case -2006026692:
			return 176;
	
		case -1993903481:
			return 124;
	
		case -1970041458:
			return 142;
	
		case -1935700575:
			return 136;
	
		case -1927422497:
			return 127;
	
		case -1920464018:
			return 58;
	
		case -1919393558:
			return 27;
	
		case -1857550353:
			return 173;
	
		case -1855662261:
			return 55;
	
		case -1840995238:
			return 15;
	
		case -1835722213:
			return 88;
	
		case -1790318144:
			return 106;
	
		case -1786033368:
			return 62;
	
		case -1767968552:
			return 86;
	
		case -1767662471:
			return 32;
	
		case -1729980669:
			return 108;
	
		case -1729554078:
			return 49;
	
		case -1727526861:
			return 109;
	
		case -1722264360:
			return 18;
	
		case -1719665775:
			return 37;
	
		case -1716981503:
			return 107;
	
		case -1697567574:
			return 72;
	
		case -1685270562:
			return 181;
	
		case -1631930150:
			return 166;
	
		case -1629969648:
			return 174;
	
		case -1605880447:
			return 120;
	
		case -1575244501:
			return 61;
	
		case -1551628748:
			return 74;
	
		case -1543433893:
			return 70;
	
		case -1539337723:
			return 121;
	
		case -1525401254:
			return 64;
	
		case -1525233154:
			return 47;
	
		case -1491472827:
			return 94;
	
		case -1486927560:
			return 112;
	
		case -1480068681:
			return 50;
	
		case -1478178768:
			return 148;
	
		case -1465202595:
			return 104;
	
		case -1459368569:
			return 116;
	
		case -1431848307:
			return 76;
	
		case -1418298797:
			return 155;
	
		case -1391865428:
			return 171;
	
		case -1378468884:
			return 60;
	
		case -1291022662:
			return 117;
	
		case -1288042557:
			return 19;
	
		case -1248720641:
			return 7;
	
		case -1229834518:
			return 89;
	
		case -1223791123:
			return 79;
	
		case -1209874968:
			return 45;
	
		case -1197630873:
			return 153;
	
		case -1196069774:
			return 180;
	
		case -1181880939:
			return 80;
	
		case -1170784825:
			return 38;
	
		case -1125028284:
			return 137;
	
		case -1123356036:
			return 147;
	
		case -1100659165:
			return 6;
	
		case -1089821002:
			return 85;
	
		case -1084890102:
			return 172;
	
		case -1080696981:
			return 92;
	
		case -1010031245:
			return 39;
	
		case -992423055:
			return 157;
	
		case -979738281:
			return 77;
	
		case -931294997:
			return 111;
	
		case -920221586:
			return 110;
	
		case -900877140:
			return 30;
	
		case -885737328:
			return 114;
	
		case -885646667:
			return 67;
	
		case -837774766:
			return 78;
	
		case -813902658:
			return 182;
	
		case -799500009:
			return 145;
	
		case -751329575:
			return 139;
	
		case -711254121:
			return 132;
	
		case -660114191:
			return 31;
	
		case -649929946:
			return 53;
	
		case -636552746:
			return 123;
	
		case -587737142:
			return 71;
	
		case -546870456:
			return 159;
	
		case -521477124:
			return 82;
	
		case -481051896:
			return 135;
	
		case -425216802:
			return 17;
	
		case -415437740:
			return 103;
	
		case -415250715:
			return 144;
	
		case -392183396:
			return 90;
	
		case -343572565:
			return 21;
	
		case -340578116:
			return 169;
	
		case -286632741:
			return 8;
	
		case -267135864:
			return 138;
	
		case -233204301:
			return 105;
	
		case -203268054:
			return 143;
	
		case -161625840:
			return 177;
	
		case -126580932:
			return 0;
	
		case -117284255:
			return 122;
	
		case -60432888:
			return 44;
	
		case -56802666:
			return 102;
	
		case -47513954:
			return 99;
	
		case -46116991:
			return 163;
	
		case -35033037:
			return 133;
	
		case -33431232:
			return 12;
	
		case -29822088:
			return 40;
	
		case 0:
			return 1;
	
		case 1213703:
			return 154;
	
		case 54499763:
			return 98;
	
		case 111084081:
			return 56;
	
		case 114587291:
			return 29;
	
		case 149216078:
			return 57;
	
		case 168336706:
			return 149;
	
		case 173401469:
			return 100;
	
		case 180714777:
			return 81;
	
		case 268103762:
			return 97;
	
		case 282858309:
			return 183;
	
		case 320758674:
			return 158;
	
		case 352539363:
			return 179;
	
		case 362862598:
			return 170;
	
		case 398279342:
			return 34;
	
		case 408582472:
			return 5;
	
		case 420477860:
			return 25;
	
		case 456199285:
			return 168;
	
		case 509781427:
			return 93;
	
		case 550487527:
			return 35;
	
		case 576694808:
			return 175;
	
		case 638586808:
			return 118;
	
		case 659100749:
			return 59;
	
		case 666050502:
			return 65;
	
		case 698214003:
			return 2;
	
		case 713106899:
			return 36;
	
		case 780689752:
			return 3;
	
		case 791791441:
			return 125;
	
		case 797908556:
			return 42;
	
		case 798283666:
			return 141;
	
		case 807983049:
			return 150;
	
		case 839199173:
			return 91;
	
		case 846387993:
			return 14;
	
		case 852774198:
			return 113;
	
		case 878491929:
			return 33;
	
		case 887717126:
			return 66;
	
		case 926420921:
			return 51;
	
		case 946848176:
			return 68;
	
		case 952755846:
			return 24;
	
		case 955999834:
			return 134;
	
		case 956867472:
			return 9;
	
		case 1036630721:
			return 10;
	
		case 1037792287:
			return 140;
	
		case 1052684812:
			return 87;
	
		case 1075856357:
			return 95;
	
		case 1078589127:
			return 46;
	
		case 1095779900:
			return 22;
	
		case 1110815339:
			return 152;
	
		case 1138017610:
			return 11;
	
		case 1156950836:
			return 83;
	
		case 1195903441:
			return 52;
	
		case 1278022357:
			return 48;
	
		case 1281707602:
			return 164;
	
		case 1323028278:
			return 41;
	
		case 1374979106:
			return 28;
	
		case 1405624312:
			return 146;
	
		case 1444077748:
			return 23;
	
		case 1449867002:
			return 162;
	
		case 1498983922:
			return 84;
	
		case 1547488310:
			return 161;
	
		case 1554410187:
			return 73;
	
		case 1585362808:
			return 16;
	
		case 1636352616:
			return 151;
	
		case 1662680949:
			return 178;
	
		case 1698995037:
			return 4;
	
		case 1769731136:
			return 115;
	
		case 1801131110:
			return 75;
	
		case 1806354060:
			return 96;
	
		case 1811663962:
			return 131;
	
		case 1828803907:
			return 20;
	
		case 1829805500:
			return 54;
	
		case 1830494920:
			return 101;
	
		case 1838787462:
			return 129;
	
		case 1865781806:
			return 165;
	
		case 1899963938:
			return 63;
	
		case 1900141702:
			return 156;
	
		case 1903067887:
			return 126;
	
		case 1907663129:
			return 43;
	
		case 2040423027:
			return 128;
	
		case 2050123975:
			return 130;
	
		case 2096770678:
			return 119;
	
		case 2110112797:
			return 69;
	
		case 2119170919:
			return 160;
	
		case 2132307595:
			return 26;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_89(int iParam0) // Position - 0x3496 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_158(iParam0);
}

BOOL func_90(Hash hParam0, int iParam1) // Position - 0x34A4 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<2> func_91(int iParam0) // Position - 0x34BE Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_92(var uParam0, var uParam1) // Position - 0x34D2 Hash - 0x213CF43D ^0x213CF43D
{
	return func_159(uParam0, 1, 4);
}

float func_93() // Position - 0x34E4 Hash - 0x22FB54B8 ^0x22FB54B8
{
	return 0.75f;
}

int func_94(int iParam0) // Position - 0x34F1 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_161(func_160(iParam0));
}

BOOL func_95(Player plParam0) // Position - 0x3503 Hash - 0xD9DF34E9 ^0x1EDCC4EC
{
	float num;

	num = func_162(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

int func_96() // Position - 0x351E Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_97(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x352A Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_163(*iParam0);
	i = func_164(*iParam0);
	j = func_165(*iParam0);
	k = func_166(*iParam0);
	l = func_167(*iParam0);
	m = func_168(*iParam0);

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
	
		num3 = func_169(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_170(iParam0, m, l, k, j, i, num);
	return;
}

int func_98(int iParam0, int iParam1) // Position - 0x369D Hash - 0xAECFF2CE ^0x28AB7A26
{
	if (iParam1 == 2)
		iParam1 = func_94(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_99(int iParam0, int iParam1) // Position - 0x36ED Hash - 0xAECFF2CE ^0xA6B4AB7D
{
	if (iParam1 == 2)
		iParam1 = func_94(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_100(int iParam0, int iParam1, BOOL bParam2) // Position - 0x373F Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_171(iParam1) || !func_171(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_101(int iParam0, int iParam1, int iParam2) // Position - 0x376C Hash - 0x7E1E307C ^0xC0CC80A4
{
	if (iParam2 == 2)
		iParam2 = func_94(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_102(int iParam0, int iParam1, int iParam2) // Position - 0x37C2 Hash - 0x7E1E307C ^0x81E4DDD9
{
	if (iParam2 == 2)
		iParam2 = func_94(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_103(Ped pedParam0, int iParam1, float fParam2) // Position - 0x3818 Hash - 0xD72B3B3A ^0x22A28347
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_172(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_104(int iParam0, int iParam1, int iParam2) // Position - 0x386D Hash - 0x9FB0AAD8 ^0x433FFF3E
{
	if (iParam2 == 2)
		iParam2 = func_94(2);

	if (iParam1 > 0)
		iParam1 = iParam1 + MISC::GET_GAME_TIMER();

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_105(Ped pedParam0, int iParam1, float fParam2) // Position - 0x38CE Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_173(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_174(iParam1), fParam2, -1);

	return;
}

void func_106(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x38FA Hash - 0xD1E7435D ^0x45C01A35
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_94(2);

	num = Global_1295666.f_16;
	func_175(iParam0, fParam1, iParam3);

	if (bParam2)
		func_176(iParam0, num, iParam3);

	return;
}

BOOL func_107(int iParam0, BOOL bParam1) // Position - 0x3930 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_100(func_96(), iParam0, bParam1);
}

float func_108(int iParam0, int iParam1) // Position - 0x3944 Hash - 0x422268C7 ^0x22464E0E
{
	if (iParam1 == 2)
		iParam1 = func_94(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_26[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_26[iParam0];
	
		default:
		
	}

	return -1f;
}

int func_109(float fParam0) // Position - 0x3990 Hash - 0x991CF40A ^0x6EC613A5
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_110(float fParam0, float fParam1, float fParam2) // Position - 0x39BB Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x39E2 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_163(*iParam0);
	i = func_164(*iParam0);
	num2 = func_165(*iParam0);
	j = func_166(*iParam0);
	k = func_167(*iParam0);
	l = func_168(*iParam0);

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

	for (m = func_169(i, num); num2 > m; m = func_169(i, num))
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

	func_170(iParam0, l, k, j, num2, i, num);
	return;
}

int func_112(int iParam0, float fParam1, int iParam2) // Position - 0x3B6A Hash - 0x91D240B ^0x31A81242
{
	if (!func_177(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_94(2);

	func_178(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

void func_113(int iParam0, var uParam1, var uParam2) // Position - 0x3BBB Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_114(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x3BD7 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_179(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_180(iParam0))
		return false;

	if (func_181(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_182(iParam0, 1) || func_183(32768))
		if (!func_182(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_184())
		return false;

	return true;
}

void func_115(int iParam0, int iParam1) // Position - 0x3C79 Hash - 0x978E21B ^0xA1438975
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_116(int iParam0) // Position - 0x3C9D Hash - 0x3FEE6090 ^0x3FEE6090
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

char* func_117(int iParam0) // Position - 0x3CCC Hash - 0xF717141F ^0xF717141F
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
	
		case 1:
			return "PlayerOverpower";
	
		case 2:
			return "PlayerOverpower";
	
		default:
		
	}

	return "";
}

void func_118(int iParam0) // Position - 0x3D03 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_54(2);
	func_55(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_119(int iParam0) // Position - 0x3D40 Hash - 0x265AFF44 ^0xE695F6B4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_58(2);
	func_59(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_120(int iParam0, BOOL bParam1) // Position - 0x3D7D Hash - 0x71081FC9 ^0xE795FB69
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_56(2);
	func_57(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_121(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3DB2 Hash - 0x5C29635D ^0x5C29635D
{
	func_62(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

int func_122(int iParam0) // Position - 0x3DCC Hash - 0xBA965109 ^0xDF65C4FE
{
	switch (iParam0)
	{
		case 1:
			return joaat("herb_acunas_star_orchid");
	
		case 2:
			return joaat("herb_alaskan_ginseng");
	
		case 3:
			return joaat("herb_american_ginseng");
	
		case 4:
			return joaat("herb_bay_bolete");
	
		case 5:
			return joaat("herb_black_berry");
	
		case 6:
			return joaat("herb_black_currant");
	
		case 7:
			return joaat("herb_burdock_root");
	
		case 8:
			return joaat("herb_chanterelles");
	
		case 9:
			return joaat("herb_cigar_orchid");
	
		case 10:
			return joaat("herb_clamshell_orchid");
	
		case 11:
			return joaat("herb_common_bulrush");
	
		case 12:
			return joaat("herb_creeping_thyme");
	
		case 13:
			return joaat("herb_desert_sage");
	
		case 14:
			return joaat("herb_dragons_mouth_orchid");
	
		case 15:
			return joaat("herb_english_mace");
	
		case 16:
			return joaat("herb_evergreen_huckleberry");
	
		case 17:
			return joaat("herb_ghost_orchid");
	
		case 18:
			return joaat("herb_golden_currant");
	
		case 19:
			return 1516353659;
	
		case 20:
			return joaat("herb_hummingbird_sage");
	
		case 21:
			return joaat("herb_indian_tobacco");
	
		case 22:
			return joaat("herb_lady_of_night_orchid");
	
		case 23:
			return joaat("herb_lady_slipper_orchid");
	
		case 24:
			return joaat("herb_milkweed");
	
		case 25:
			return joaat("herb_moccasin_flower_orchid");
	
		case 26:
			return joaat("herb_night_scented_orchid");
	
		case 27:
			return joaat("herb_oleander_sage");
	
		case 28:
			return joaat("herb_oregano");
	
		case 29:
			return joaat("herb_parasol_mushroom");
	
		case 30:
			return joaat("herb_prairie_poppy");
	
		case 31:
			return joaat("herb_queens_orchid");
	
		case 32:
			return joaat("herb_rams_head");
	
		case 33:
			return joaat("herb_rat_tail_orchid");
	
		case 34:
			return joaat("herb_red_raspberry");
	
		case 35:
			return joaat("herb_red_sage");
	
		case 36:
			return joaat("herb_sparrows_egg_orchid");
	
		case 37:
			return joaat("herb_spider_orchid");
	
		case 38:
			return joaat("herb_vanilla_flower");
	
		case 39:
			return joaat("herb_violet_snowdrop");
	
		case 40:
			return joaat("herb_wild_flwr_agarita");
	
		case 41:
			return joaat("herb_wild_flwr_blue_bonnet");
	
		case 42:
			return joaat("herb_wild_flwr_bitterweed");
	
		case 43:
			return joaat("herb_wild_flwr_blood_flower");
	
		case 44:
			return joaat("herb_wild_flwr_cardinal_flower");
	
		case 45:
			return joaat("herb_wild_flwr_chocolate_daisy");
	
		case 46:
			return joaat("herb_wild_flwr_creek_plum");
	
		case 47:
			return joaat("herb_wild_flwr_rhubarb");
	
		case 48:
			return joaat("herb_wild_flwr_wisteria");
	
		case 49:
			return joaat("herb_wild_carrots");
	
		case 50:
			return joaat("herb_wild_feverfew");
	
		case 51:
			return joaat("herb_wild_mint");
	
		case 52:
			return joaat("herb_wintergreen_berry");
	
		case 53:
			return joaat("herb_yarrow");
	}

	return 0;
}

struct<2> func_123(int iParam0) // Position - 0x4164 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_124(int iParam0) // Position - 0x4176 Hash - 0x2795DEC ^0x4283DA24
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	return true;
}

var func_125(Any* panParam0, int iParam1, int iParam2) // Position - 0x41B1 Hash - 0xB208A015 ^0xE27079B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

void func_126(int iParam0) // Position - 0x41CC Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1953292.f_1 = iParam0;
	return;
}

void func_127() // Position - 0x41DC Hash - 0x644D3D21 ^0x644D3D21
{
	func_185(128);
	return;
}

void func_128(BOOL bParam0) // Position - 0x41EA Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

BOOL func_129(int iParam0, var uParam1) // Position - 0x4202 Hash - 0x5A9C5197 ^0x4A0493FD
{
	int num;

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			*uParam1 = joaat("mp_female");
			break;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			*uParam1 = joaat("mp_male");
			break;
	
		default:
			num = func_186(0, iParam0);
		
			if (num != -1)
			{
				*uParam1 = func_187(num);
			}
			else
			{
				*uParam1 = joaat("mp_male");
				return false;
			}
			break;
	}

	return true;
}

int func_130(int iParam0) // Position - 0x425F Hash - 0x339CDA33 ^0x339CDA33
{
	int randomIntInRange;
	int endRange;
	var unk;

	if (!func_71(&unk))
		return 0;

	if (!func_72(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_72(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_72(&unk, 40, iParam0, 0, 1))
		return 0;

	if (!func_72(&unk, 59, 0, 0, 1))
		return 0;

	endRange = func_188(&unk, 12);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	if (!func_72(&unk, 60, randomIntInRange, 0, 1))
		return 0;

	return func_189(unk);
}

void func_131(int iParam0) // Position - 0x42F1 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1953292.f_3 = iParam0;
	return;
}

int func_132(int iParam0) // Position - 0x4301 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x434C Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_134(int iParam0) // Position - 0x4376 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_190(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_135(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x4393 Hash - 0x79169E9C ^0xA3FE4569
{
	func_191(iParam0);

	if (!func_192(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_193(128) && !func_194(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_195() == 4)
		func_134(18);

	func_196(1024);
	return;
}

int func_136(int iParam0) // Position - 0x43F5 Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_197(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_137(var uParam0) // Position - 0x4412 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_138(var uParam0) // Position - 0x4424 Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_139(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x4436 Hash - 0x63EE9672 ^0xDAC9325D
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x448C Hash - 0x6DF4F0B2 ^0x7B946ED1
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

int func_141(int iParam0, int iParam1) // Position - 0x44B9 Hash - 0x89B5041A ^0x89B5041A
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
	
		case -2082434331:
			return 152;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
	
		case -2038430863:
			return 151;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
	
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
	
		case -1246069683:
			return 124;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
	
		case -1105699593:
			return 153;
	
		case -1047626954:
			return 118;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
	
		case -980934770:
			return 125;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
	
		case -821191074:
			return 115;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
	
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
	
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
	
		case -193167881:
			return 127;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
	
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
	
		case 130533095:
			return 126;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
	
		case 158579484:
			return 117;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
	
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
	
		case 549687162:
			return 145;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
	
		case 808176588:
			return 116;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
	
		case 1130659268:
			return 123;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
	
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_142(int iParam0, int iParam1) // Position - 0x4B70 Hash - 0x39669B5F ^0xB47C98D2
{
	int num;
	int num2;
	int num3;

	num = func_198(iParam0);
	num2 = Global_1295666;
	num3 = func_145(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num3 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (num2 == num)
				return 0;
			else
				return 2;
			break;
	
		case joaat("Duration"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
	
		default:
			if (num2 == num)
				return 1;
			break;
	}

	return 2;
}

int func_143(int iParam0, int iParam1, int iParam2) // Position - 0x4BF3 Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_79(iParam1))
		return 0;

	if (!func_199(iParam0))
		return 0;

	num = func_145(iParam0, 1);
	func_200(iParam0, iParam1, iParam2);

	if (func_201(Global_1156111.f_35859.f_3116[num /*31*/]) && func_202(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_203(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_204(num2))
			if (func_205(num2, num2.f_1, num2.f_2))
				func_206(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_207(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_207(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_144(int iParam0) // Position - 0x4CEB Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_145(int iParam0, int iParam1) // Position - 0x4D01 Hash - 0x9DD4188 ^0x9DD4188
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
	
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
	
		case -2019073637:
			return 198;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
	
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
	
		case -1394912816:
			return 199;
	
		case -1391351739:
			return 166;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
	
		case -749371485:
			return 164;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
	
		case -254950601:
			return 152;
	
		case -242870769:
			return 163;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
	
		case -124368414:
			return 197;
	
		case -106398498:
			return 153;
	
		case -97000889:
			return 86;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
	
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
	
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
	
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
	
		case 275909046:
			return 151;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
	
		case 558636891:
			return 187;
	
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
	
		case 634217179:
			return 150;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
	
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
	
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
	
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
	
		case 1256374770:
			return 165;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
	
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
	
		case 1305406380:
			return 162;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
	
		case 1462245043:
			return 154;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
	
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
	
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_146(int iParam0, int iParam1) // Position - 0x55B2 Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_147(int iParam0, int iParam1) // Position - 0x55E1 Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_148(int iParam0) // Position - 0x55FD Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

int func_149(int iParam0, int iParam1) // Position - 0x562B Hash - 0x36ABDA29 ^0x3AF62EAA
{
	int num;
	int num2;
	int num3;

	num = func_198(iParam0);
	num2 = Global_1295666;
	num3 = func_145(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num3 /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
		case -2129621195:
		case -1503245593:
		case joaat("ALLY_ENTER_DEADEYE"):
			return 1;
	
		case joaat("ON_ENABLE"):
			if (num2 == num)
				return 0;
			else
				return 2;
			break;
	
		default:
			if (num2 == num)
				return 1;
			break;
	}

	return 2;
}

int func_150(int iParam0, int iParam1, int iParam2) // Position - 0x56A6 Hash - 0x769F0B2E ^0x769F0B2E
{
	int num;
	BOOL flag;
	int num2;

	if (!func_79(iParam1))
		return 0;

	if (!func_199(iParam0))
		return 0;

	num = func_145(iParam0, 1);

	if (!func_208(iParam2))
		return 0;

	flag = func_201(Global_1156111.f_35859.f_3116[num /*31*/]);

	if (flag && func_209(Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_210(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (!func_200(num2, num2.f_1, num2.f_2))
			return 0;
	}

	if (func_205(iParam0, iParam1, iParam2))
	{
		if (flag)
			func_206(Global_1156111.f_35859.f_3116[num /*31*/].f_4, iParam0, iParam1, iParam2);
	
		return 1;
	}

	return 0;
}

BOOL func_151(int iParam0) // Position - 0x577D Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_88(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

BOOL func_152(int iParam0) // Position - 0x57A4 Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_88(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_153(int iParam0) // Position - 0x57CC Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_88(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_154(int iParam0) // Position - 0x57F4 Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_88(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_155(int iParam0) // Position - 0x581C Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_88(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_156(int iParam0) // Position - 0x5844 Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_88(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

void func_157(int iParam0) // Position - 0x586C Hash - 0xF12D7218 ^0xF1BFAB9C
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_158(int iParam0) // Position - 0x58AF Hash - 0xA059D395 ^0x8E0849E2
{
	return func_211(Global_1940085.f_38, iParam0);
}

BOOL func_159(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x58C3 Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_212(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_213(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_160(int iParam0) // Position - 0x58FE Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_214(&(Global_1956875.f_1565), iParam0, 1);
}

int func_161(BOOL bParam0) // Position - 0x5914 Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

float func_162(Player plParam0) // Position - 0x5926 Hash - 0x67CAB99C ^0xC9B69B05
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_215(2);
}

int func_163(int iParam0) // Position - 0x593C Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_164(int iParam0) // Position - 0x5961 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_165(int iParam0) // Position - 0x5974 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_166(int iParam0) // Position - 0x5987 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_167(int iParam0) // Position - 0x599A Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_168(int iParam0) // Position - 0x59AC Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_169(int iParam0, int iParam1) // Position - 0x59BE Hash - 0x893AC59E ^0x893AC59E
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

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5A58 Hash - 0xA65AB937 ^0xA65AB937
{
	func_217(iParam0, iParam6);
	func_218(iParam0, iParam5);
	func_219(iParam0, iParam4);
	func_220(iParam0, iParam3);
	func_221(iParam0, iParam2);
	func_222(iParam0, iParam1);
	return;
}

BOOL func_171(int iParam0) // Position - 0x5A90 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_168(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_167(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_166(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_163(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_164(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_165(iParam0);

	if (num6 < 1 || num6 > func_169(num5, num4))
		return false;

	return true;
}

int func_172(int iParam0) // Position - 0x5B6C Hash - 0x26AB94C2 ^0x26AB94C2
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

char* func_173(int iParam0) // Position - 0x5B9B Hash - 0x6FC38485 ^0x4F95AC9
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

char* func_174(int iParam0) // Position - 0x5BD5 Hash - 0x6FC38485 ^0x2A5BD0BE
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_175(int iParam0, float fParam1, int iParam2) // Position - 0x5C0F Hash - 0xB327C991 ^0xFEB529B
{
	if (iParam2 == 2)
		iParam2 = func_94(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_176(int iParam0, int iParam1, int iParam2) // Position - 0x5C61 Hash - 0x7E1E307C ^0x5642EBD7
{
	if (iParam2 == 2)
		iParam2 = func_94(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_177(int iParam0) // Position - 0x5CB7 Hash - 0x969D658D ^0x969D658D
{
	if (func_116(iParam0))
		return true;
	else if (func_223(iParam0))
		return true;

	return false;
}

void func_178(int iParam0, float fParam1, int iParam2) // Position - 0x5CDD Hash - 0xF69206DE ^0x1EC60A3A
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_94(1);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_26[iParam0] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_179(int iParam0, int iParam1) // Position - 0x5D39 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_180(int iParam0) // Position - 0x5D51 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_182(iParam0, 4))
		return false;

	return true;
}

BOOL func_181(int iParam0) // Position - 0x5D68 Hash - 0x7F4C96B ^0x650690F6
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_182(int iParam0, int iParam1) // Position - 0x5E34 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_183(int iParam0) // Position - 0x5E4D Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_184() // Position - 0x5E60 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_224())
		return false;

	return Global_1904402.f_8873;
}

void func_185(int iParam0) // Position - 0x5E7B Hash - 0x990D8E53 ^0x990D8E53
{
	func_225(&Global_1300385, iParam0);
	return;
}

int func_186(int iParam0, int iParam1) // Position - 0x5E8D Hash - 0x448E7F2 ^0xF699C208
{
	int num;

	num = func_226(iParam0, 0, Global_1300387.f_52.f_31, iParam1);

	if (num == -1)
		return -1;

	return func_227(iParam0, num);
}

var func_187(int iParam0) // Position - 0x5EBA Hash - 0x1B04F1B9 ^0x32573E96
{
	return Global_1300387.f_52[iParam0 /*3*/].f_1;
}

int func_188(Any anParam0, int iParam1) // Position - 0x5ECE Hash - 0xF6C122AF ^0xA6A67C2F
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

int func_189(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x5EE2 Hash - 0xC3804B17 ^0xC3804B17
{
	return func_125(&uParam0, 61, 0);
}

BOOL func_190(var uParam0, int iParam1, int iParam2) // Position - 0x5EF3 Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::CLEAR_BIT(&uParam0->[num], offset);
	return isBitSet;
}

void func_191(int iParam0) // Position - 0x5F25 Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_192(int iParam0) // Position - 0x5F37 Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_193(BOOL bParam0) // Position - 0x5F4C Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_194(int iParam0) // Position - 0x5F61 Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_195() // Position - 0x5F8F Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_196(BOOL bParam0) // Position - 0x5FC2 Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_228(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_197(var uParam0, int iParam1, int iParam2) // Position - 0x5FE9 Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

int func_198(int iParam0) // Position - 0x601C Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_151(iParam0))
		return func_83(iParam0) % 32;

	return Global_1295666;
}

BOOL func_199(int iParam0) // Position - 0x603D Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_145(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

BOOL func_200(int iParam0, int iParam1, int iParam2) // Position - 0x6065 Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_88(iParam1, 1);
	num2 = func_145(iParam0, 1);
	num3 = func_141(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_229(num4, 1);
	
		if (!func_230(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_231(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_232(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_233(num6))
		{
		}
		else
		{
			num7 = func_234(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_235(num6);
			}
		}
	}

	return true;
}

BOOL func_201(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x6256 Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_202(int iParam0, int iParam1) // Position - 0x6264 Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_199(iParam0))
		return false;

	if (!func_236(iParam1))
		return false;

	num = func_237(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_203(int iParam0) // Position - 0x62A4 Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_238(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_204(int iParam0, var uParam1, var uParam2) // Position - 0x62E0 Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_199(iParam0))
		return false;

	if (!func_79(iParam0.f_1))
		return false;

	if (!func_208(iParam0.f_2))
		return false;

	return true;
}

BOOL func_205(int iParam0, int iParam1, int iParam2) // Position - 0x6317 Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_88(iParam1, 1);
	num2 = func_145(iParam0, 1);
	num3 = func_141(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_229(num4, 1);
	
		if (!func_230(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_231(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_239(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_233(num6))
		{
		}
		else if (!func_240(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_234(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_241(num6);
			}
		}
	}

	func_242(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6545 Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_236(iParam0))
		return;

	num = func_237(iParam0, 1);

	if (!func_199(iParam1))
		return;

	if (!func_79(iParam2))
		return;

	if (!func_208(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_207(int iParam0) // Position - 0x65C4 Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_236(iParam0))
		return;

	num = func_237(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_208(int iParam0) // Position - 0x6619 Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

BOOL func_209(int iParam0) // Position - 0x6637 Hash - 0x82822340 ^0x82822340
{
	int num;

	if (!func_236(iParam0))
		return 0;

	num = func_243(iParam0);

	if (!func_199(num))
		return 0;

	return 1;
}

Vector3 func_210(int iParam0) // Position - 0x6664 Hash - 0x57721B17 ^0x45053CFB
{
	var unk;
	int num;

	if (!func_236(iParam0))
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	num = func_237(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_211(int iParam0, int iParam1) // Position - 0x66A5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_212(var uParam0, var uParam1) // Position - 0x66B4 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_244(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_245(uParam0))
		return false;

	return true;
}

int func_213(int iParam0, var uParam1) // Position - 0x66E8 Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_246(iParam0);

	return -1;
}

BOOL func_214(var uParam0, int iParam1, int iParam2) // Position - 0x6702 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_215(int iParam0) // Position - 0x6739 Hash - 0xF103C6A6 ^0xF103C6A6
{
	switch (iParam0)
	{
		case 0:
			return func_54(2) * 2;
	
		case 1:
			return func_58(2) * 2;
	
		case 2:
			return func_56(2) * 2;
	
		default:
		
	}

	return -1;
}

var func_216(BOOL bParam0, var uParam1, var uParam2) // Position - 0x677A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_217(int iParam0, int iParam1) // Position - 0x6791 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*iParam0 = *iParam0 - *iParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*iParam0 = *iParam0 | -2147483648;
	}
	else
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*iParam0 = *iParam0 - *iParam0 & -2147483648;
	}

	return;
}

void func_218(int iParam0, int iParam1) // Position - 0x6817 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_219(int iParam0, int iParam1) // Position - 0x6853 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_164(*iParam0);
	num2 = func_163(*iParam0);

	if (iParam1 < 1 || iParam1 > func_169(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_220(int iParam0, int iParam1) // Position - 0x68A6 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_221(int iParam0, int iParam1) // Position - 0x68E1 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_222(int iParam0, int iParam1) // Position - 0x691A Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_223(int iParam0) // Position - 0x6952 Hash - 0x830CD3BA ^0x830CD3BA
{
	switch (iParam0)
	{
		case 12:
			return true;
	
		case 13:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_224() // Position - 0x6977 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_225(int iParam0, int iParam1) // Position - 0x698B Hash - 0xF55E891F ^0xF55E891F
{
	func_247(iParam0, iParam1);
	return;
}

int func_226(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x699B Hash - 0xBAD48FE6 ^0x74A9B9E1
{
	int num;

	if (iParam1 > iParam2)
		return -1;

	num = (iParam1 + iParam2) / 2;

	if (iParam3 < Global_1300387.f_84[iParam0 /*21*/][num /*2*/])
		return func_226(iParam0, iParam1, num - 1, iParam3);

	if (iParam3 > Global_1300387.f_84[iParam0 /*21*/][num /*2*/])
		return func_226(iParam0, num + 1, iParam2, iParam3);

	return num;
}

int func_227(int iParam0, int iParam1) // Position - 0x6A07 Hash - 0xE827FE7F ^0x76DD3C0D
{
	return Global_1300387.f_84[iParam0 /*21*/][iParam1 /*2*/].f_1;
}

BOOL func_228(BOOL bParam0) // Position - 0x6A1F Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

int func_229(int iParam0, int iParam1) // Position - 0x6A35 Hash - 0x40BB17AB ^0x40BB17AB
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
	
		case joaat("MDEFENSE__BULLET"):
			return 49;
	
		case -1936069272:
			return 47;
	
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
	
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
	
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
	
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
	
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
	
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
	
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
	
		case -1575020444:
			return 94;
	
		case -1572802418:
			return 71;
	
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
	
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
	
		case -1349331938:
			return 43;
	
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
	
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
	
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
	
		case joaat("MHORSE__DEFENSE"):
			return 56;
	
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
	
		case joaat("MDEFENSE__RANGED"):
			return 46;
	
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
	
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
	
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
	
		case joaat("MDEFENSE__FIRE"):
			return 52;
	
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
	
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
	
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
	
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
	
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
	
		case -377364039:
			return 60;
	
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
	
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
	
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
	
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
	
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
	
		case joaat("MSKILL__PERCEPTION"):
			return 83;
	
		case -1:
			return 0;
	
		case 66478954:
			return 93;
	
		case 91687087:
			return 79;
	
		case joaat("MSKILL__DISTILLER"):
			return 90;
	
		case 194431787:
			return 61;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
	
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
	
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
	
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
	
		case joaat("MSKILL__DIVINATION"):
			return 89;
	
		case 410940916:
			return 92;
	
		case 447408404:
			return 81;
	
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
	
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
	
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
	
		case joaat("MSKILL__INTUITION"):
			return 88;
	
		case joaat("MDAMAGE__MELEE"):
			return 30;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
	
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
	
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
	
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
	
		case 874892169:
			return 95;
	
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
	
		case 920214733:
			return 91;
	
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
	
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
	
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
	
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
	
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
	
		case joaat("MDEFENSE__MELEE"):
			return 45;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
	
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
	
		case 1356998909:
			return 80;
	
		case joaat("MSKILL__FOCUS"):
			return 82;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
	
		case 1546732394:
			return 34;
	
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
	
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
	
		case joaat("MDAMAGE__BULLETS"):
			return 32;
	
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
	
		case 1727267699:
			return 69;
	
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
	
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
	
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
	
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
	
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
	
		case joaat("MDAMAGE__THROWN"):
			return 31;
	
		case joaat("MSKILL__AWARENESS"):
			return 84;
	
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
	
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
	
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
	
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
	
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
	
		case joaat("MSKILL__POTENTIAL"):
			return 87;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_230(int iParam0) // Position - 0x6E6E Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_229(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_231(int iParam0) // Position - 0x6E96 Hash - 0x134D8925 ^0x2C4046D8
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_248(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_232(int iParam0) // Position - 0x6EC5 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_230(iParam0))
		return;

	num = func_229(iParam0, 1);

	if (!func_249(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_250(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_251(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] > 0)
		return;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] != Global_1156111.f_2169[num /*205*/])
		{
		}
		else
		{
			Global_1156111.f_47561[num2 /*25*/][i] = -1;
			Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 - 1;
			Global_1156111.f_47561[num2 /*25*/][i] = Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23];
			Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = -1;
			break;
		}
	}

	return;
}

BOOL func_233(int iParam0) // Position - 0x70A4 Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_234(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_234(int iParam0, int iParam1) // Position - 0x70CC Hash - 0x49B3A5C3 ^0x49B3A5C3
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
	
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
	
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
	
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
	
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
	
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
	
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
	
		case -1730553768:
			return 3;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
	
		case -1651690657:
			return 65;
	
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
	
		case -1583192324:
			return 66;
	
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
	
		case -1486292178:
			return 67;
	
		case joaat("LASSO_IMMUNITY"):
			return 5;
	
		case joaat("DISABLE_JUMPING"):
			return 45;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
	
		case -1026481003:
			return 6;
	
		case joaat("TAGGING_IMMUNITY"):
			return 13;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
	
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
	
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
	
		case joaat("CONFUSION_EFFECT"):
			return 14;
	
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
	
		case -350459285:
			return 68;
	
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
	
		case -199042163:
			return 60;
	
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
	
		case -1:
			return 0;
	
		case joaat("TRAIL_EFFECT"):
			return 17;
	
		case joaat("POISON_EFFECT"):
			return 20;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
	
		case joaat("DISORIENT_EFFECT"):
			return 18;
	
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
	
		case joaat("WOUND_EFFECT"):
			return 15;
	
		case 718630298:
			return 56;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
	
		case joaat("NED_KELLY_BASE"):
			return 21;
	
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
	
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
	
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
	
		case 1037859088:
			return 51;
	
		case 1066450193:
			return 54;
	
		case 1159158432:
			return 62;
	
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
	
		case 1242495215:
			return 9;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS") /* collision: RCEXO_RSC2_LIJ_1 */:
			return 63;
	
		case 1341326366:
			return 58;
	
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
	
		case 1398483650:
			return 50;
	
		case joaat("PULSE_REPOST_STATE"):
			return 38;
	
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
	
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
	
		case joaat("DRAIN_EFFECT"):
			return 16;
	
		case 1898374676:
			return 49;
	
		case 2067881273:
			return 8;
	
		case joaat("DISABLE_DROWNING"):
			return 47;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_235(int iParam0) // Position - 0x73DC Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_253();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_252();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_256(func_255(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_249(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_249(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_254(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_254(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_65(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_254(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(ped, 0f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, true);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_257();
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 18);
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, -1f);
			break;
	
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(ped, 0, true);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_254(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, false);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	}

	return;
}

BOOL func_236(int iParam0) // Position - 0x75EB Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_237(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_237(int iParam0, int iParam1) // Position - 0x7612 Hash - 0xD3D45784 ^0xD3D45784
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
	
		case -1038992817:
			return 5;
	
		case -950874556:
			return 4;
	
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
	
		case 0:
			return 0;
	
		case 1938826026:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_238(int iParam0) // Position - 0x766F Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_243(iParam0);
	unk.f_3 = 1065353216;
	unk.f_5 = -1;
	unk.f_6 = 3;
	unk.f_6.f_1 = -1;
	unk.f_6.f_1.f_3 = -1;
	unk.f_6.f_1.f_3.f_3 = -1;
	unk.f_17 = 5;
	unk32.f_3 = 1065353216;
	unk32.f_5 = -1;
	unk32.f_6 = 3;
	unk32.f_6.f_1 = -1;
	unk32.f_6.f_1.f_3 = -1;
	unk32.f_6.f_1.f_3.f_3 = -1;
	unk32.f_17 = 5;
	num2 = -1;

	for (i = 0; i < Global_1156111.f_35859.f_11700; i = i + 1)
	{
		num3 = func_145(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_258(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_259(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

void func_239(int iParam0) // Position - 0x77B3 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_230(iParam0))
		return;

	num = func_229(iParam0, 1);

	if (!func_249(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_250(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_251(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] + 1;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] == Global_1156111.f_2169[num /*205*/])
			return;
	}

	Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = Global_1156111.f_2169[num /*205*/];
	Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 + 1;
	return;
}

BOOL func_240(int iParam0) // Position - 0x7908 Hash - 0x468542BC ^0x27A095F3
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_260(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_241(int iParam0) // Position - 0x7931 Hash - 0xE1E3399D ^0xAAA920BB
{
	Ped ped;
	Player player;
	int num;
	int entityBoneIndexByName;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_253();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_252();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_255(iParam0);
			func_262(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_249(16);
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_249(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_254(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_254(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_65(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_255(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_261(iParam0, 0));
			func_262(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_261(iParam0, 1));
			func_262(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_261(iParam0, 2));
			func_262(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_261(iParam0, 3));
			func_262(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_254(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "focusfire");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(ped, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, false);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_263();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_255(iParam0);
			func_262(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_254(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, true);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(player, 25);
			PLAYER::_0x263D69767F76059C(player, 2);
			break;
	}

	return;
}

void func_242(int iParam0) // Position - 0x7BCC Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_264(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_265(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

int func_243(int iParam0) // Position - 0x7C16 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_236(iParam0))
		return -1;

	num = func_237(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_244(int iParam0) // Position - 0x7C45 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_245(int iParam0) // Position - 0x7C84 Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

int func_246(var uParam0, var uParam1) // Position - 0x7D1A Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_266(uParam0, &unk))
		return unk.f_1;

	return -1;
}

void func_247(int iParam0, int iParam1) // Position - 0x7D46 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

float func_248(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x7D57 Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_267(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_249(int iParam0) // Position - 0x7D8D Hash - 0xCFB57BFC ^0xD6F1E06
{
	if (iParam0 <= -1 || iParam0 >= 21)
		return false;

	if (iParam0 == 0)
		return true;

	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156111.f_2166), iParam0))
		return true;

	if (Global_1156111.f_2165 >= 21)
		return false;

	Global_1156111.f_2143[Global_1156111.f_2165] = iParam0;
	Global_1156111.f_2165 = Global_1156111.f_2165 + 1;
	return true;
}

BOOL func_250(int iParam0) // Position - 0x7DFC Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_251(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_251(int iParam0, int iParam1) // Position - 0x7E23 Hash - 0xAF8796DC ^0xAF8796DC
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
	
		case -1016837116:
			return 5;
	
		case 0:
			return 0;
	
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
	
		case joaat("NEARBY_ALLIES"):
			return 2;
	
		case 1416591065:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_252() // Position - 0x7E80 Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_211(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_253() // Position - 0x7EE2 Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_254(int iParam0) // Position - 0x7F12 Hash - 0x4D39E200 ^0x876EA59B
{
	switch (iParam0)
	{
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
	
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
	
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
	
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
	
		default:
		
	}

	return "";
}

int func_255(int iParam0) // Position - 0x7F59 Hash - 0x21FAF347 ^0xA1AE9E4F
{
	switch (iParam0)
	{
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
	
		default:
		
	}

	return 0;
}

void func_256(int iParam0) // Position - 0x7F94 Hash - 0x2CE3A2A0 ^0xF0457356
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1203871[i /*8*/].f_5 == iParam0)
		{
			Global_1203871[i /*8*/].f_7 = 1;
			Global_1203871[i /*8*/].f_5 = 0;
		}
	}

	return;
}

void func_257() // Position - 0x7FD4 Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

BOOL func_258(int iParam0, int iParam1) // Position - 0x7FF4 Hash - 0x321DED00 ^0xFDBC3772
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;

	if (!func_199(iParam0))
		return false;

	num = func_145(iParam0, 1);
	num3 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_201(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num4 = Global_1156111.f_35859.f_9286[func_237(num3, 1) /*3*/];
		unk = { func_259(num4) };
	
		if (num4 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			num2 = func_198(iParam1);
		
			if (num2 == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			num2 = func_198(iParam1);
		
			if (num2 == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[num2]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_268())
				return false;
		
			return true;
	
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
	
		case -1503245593:
			if (!Global_1956875.f_1716[8])
				return false;
		
			num2 = func_198(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[num2]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[num2]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			num2 = func_198(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[num2]))
				return false;
		
			if (num2 != Global_1295666 && !func_270(Global_1295666.f_149[num2]))
				return false;
		
			if (!func_271(512, num2))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_268() && !func_269())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_259(int iParam0) // Position - 0x82CA Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_145(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_260(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x82EE Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_267(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_261(int iParam0, int iParam1) // Position - 0x8324 Hash - 0x29328624 ^0x1F579C6C
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
			
				case 1:
					return "CP_CHEST";
			
				case 2:
					return "CP_R_UpperArm";
			
				case 3:
					return "CP_L_UpperArm";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x837C Hash - 0x4DFFD3F3 ^0xFBF31414
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203871[i /*8*/]) && !Global_1203871[i /*8*/].f_6)
		{
			Global_1203871[i /*8*/].f_5 = iParam0;
			Global_1203871[i /*8*/].f_1 = iParam1;
			Global_1203871[i /*8*/].f_2 = iParam2;
			Global_1203871[i /*8*/].f_3 = iParam3;
			Global_1203871[i /*8*/].f_4 = iParam4;
			Global_1203871[i /*8*/].f_6 = 1;
			return;
		}
	}

	return;
}

void func_263() // Position - 0x8401 Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_264(int iParam0) // Position - 0x8426 Hash - 0xFE9586E ^0xAE4E343F
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_265(int iParam0) // Position - 0x8446 Hash - 0xFE9586E ^0xB23CD735
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_266(int iParam0, var uParam1, Any* panParam2) // Position - 0x8466 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_212(iParam0))
		return false;

	func_272(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_267(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x8571 Hash - 0xBD123D0 ^0xD5CDFAB
{
	int num;
	int num2;

	num = -178401592;
	num.f_1 = hParam0;
	num.f_2 = joaat("name");
	num.f_3 = 1;
	num.f_4 = hParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("name")))
	{
		*uParam2 = hParam0;
		uParam2->f_9 = hParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1), "", 64);
		TEXT_LABEL_APPEND_INT(&(uParam2->f_1), num2, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("TYPE"));
		uParam2->f_10.f_3 = func_273(num2);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &num, joaat("DEFAULT"));
				break;
		
			case 1:
				!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &num, joaat("DEFAULT"));
				break;
		
			case 2:
				!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &num, joaat("DEFAULT"));
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &num, joaat("min"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &num, joaat("min"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &num, joaat("min"));
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &num, joaat("max"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &num, joaat("max"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &num, joaat("max"));
				break;
		}
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		return true;
	}

	return false;
}

BOOL func_268() // Position - 0x8792 Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

BOOL func_269() // Position - 0x87A0 Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_212(func_91(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_274(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_270(Player plParam0) // Position - 0x87EB Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_275(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_276(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_271(int iParam0, int iParam1) // Position - 0x8830 Hash - 0xAF32F835 ^0x6534FA19
{
	if (iParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[iParam1 /*38*/].f_3 && iParam0 != false;
}

void func_272(Any* panParam0) // Position - 0x885C Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

int func_273(int iParam0) // Position - 0x8872 Hash - 0xF3C27EA9 ^0xF3C27EA9
{
	int num;

	switch (iParam0)
	{
		case joaat("bool"):
			num = 2;
			break;
	
		case joaat("float"):
			num = 1;
			break;
	
		case joaat("int"):
			num = 0;
			break;
	}

	return num;
}

BOOL func_274(int iParam0) // Position - 0x88A8 Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_275(Player plParam0) // Position - 0x88F0 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_276(Player plParam0) // Position - 0x890D Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_277(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_278(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

void func_277(Player plParam0) // Position - 0x8990 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_278(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_278(Player plParam0) // Position - 0x89FC Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

