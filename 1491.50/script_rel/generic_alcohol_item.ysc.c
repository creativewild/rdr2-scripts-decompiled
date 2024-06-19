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

	fLocal_7 = 1f;
	fLocal_8 = 1f;
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
				itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_35);
				func_6(&num);
			
				if (itemInteractionState == 1587785400 || itemInteractionState == 1183277175)
					func_7(&num);
				else if (itemInteractionState == 1342098323 || itemInteractionState == 79398913)
					func_8(&num);
			
				if (!PED::IS_PED_DEAD_OR_DYING(Global_35, true))
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
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
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
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
					if (MISC::GET_FRAME_COUNT() % 10 == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
						func_12(&num, 2);
				break;
		
			case 2:
				if (!num.f_180)
				{
					if (itemInteractionState == -1493684811 || itemInteractionState == -752898125)
					{
						TASK::_0xB35370D5353995CB(Global_35, func_17(num.f_2, itemInteractionState), 1048576000);
						func_12(&num, 4);
					}
					else if (itemInteractionState == 1587785400)
					{
						if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("prop_player_dynamic_seat_chair_table"))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
							PED::_ADD_SCENARIO_TRANSITION(Global_35);
						}
						else
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("PLAYER_BARCUSTOMER_RETURN_BEER"), 3f);
							PED::_ADD_SCENARIO_TRANSITION(Global_35);
						}
					
						func_12(&num, 4);
					}
					else if (itemInteractionState != 1342098323)
					{
					}
					else
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
						PED::_ADD_SCENARIO_TRANSITION(Global_35);
						func_12(&num, 4);
					}
				}
				else
				{
					func_12(&num, 4);
				}
				break;
		
			case 3:
				func_14(num2);
				func_15(&(num.f_2), true);
				func_16(num.f_2, false);
				func_12(&num, 4);
				break;
		
			case 4:
				if (uScriptParam_0.f_3)
					SCRIPTS::TERMINATE_THIS_THREAD();
				else if (!flag)
					if (func_18() == -1 && func_19(0) && func_20(num.f_2, 1490540191))
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
								if (func_21(Global_35, "Player_Sick_Drinking_Cough", joaat("SPEECH_PARAMS_FORCE"), 0, 1, 0, 0, 1))
									flag = true;
					else
						flag = true;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	if (num <= 1)
	{
		func_15(&(num.f_2), true);
		func_16(num.f_2, false);
	}

	if (!uScriptParam_0.f_3 && !num.f_180)
		func_1(false);

	return;
}

void func_1(BOOL bParam0) // Position - 0x3C6 Hash - 0xE9E56CD8 ^0x9CD0E384
{
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 5, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 50, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 49, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 11, 0, bParam0);
	return;
}

void func_2() // Position - 0x401 Hash - 0xFE6C7A60 ^0x13E1ED48
{
	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

void func_3(var uParam0, var uParam1) // Position - 0x415 Hash - 0x4355AD91 ^0xA1D5252D
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_35;
	return;
}

float func_4(var uParam0, var uParam1) // Position - 0x433 Hash - 0xA52B9611 ^0xCA203FE6
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
			num = 0.25f;
			break;
	
		case -520953319:
			num = 0.13f;
			break;
	
		case joaat("CONSUMABLE_SALOON_WHISKEY"):
			num = 0.1f;
			uParam0->f_180 = 0;
			break;
	
		case joaat("consumable_gin"):
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
	
		case joaat("consumable_rum"):
			num = 0.17f;
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
					num = 0.1f;
					uParam0->f_180 = 0;
				}
			}
			break;
	}

	if (func_22(joaat("provision_trinket_wolf_heart"), 1, false))
		num = num * 0.5f;

	return num;
}

void func_5() // Position - 0x5A0 Hash - 0x72FD1DAC ^0xAEF29142
{
	if (TASK::GET_ITEM_INTERACTION_STATE(Global_35) == -664271430)
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_BEER_TRANS_GENERIC_A"));
	else
		STREAMING::_REQUEST_CLIP_SET_BY_HASH(joaat("MECH_DYNAMIC@PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE@ARTHUR@TRANS@A_WHISKEY_TRANS_GENERIC_A"));

	return;
}

void func_6(var uParam0) // Position - 0x5CC Hash - 0xF72A69E1 ^0x20C51AF7
{
	if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 > 0.5f)
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_AWAY_PROMPT", true, 1);

	switch (uParam0->f_1)
	{
		case 0:
			if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 >= 1f / 3f)
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
					uParam0->f_1 = 1;
			break;
	
		case 1:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_B", true, 1);
		
			if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 >= 2f / 3f)
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
					uParam0->f_1 = 2;
			break;
	
		case 2:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_C", true, 1);
		
			if ((float)uParam0->f_2.f_1 / uParam0->f_2.f_2 >= 1f)
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
					uParam0->f_1 = 3;
			break;
	
		case 3:
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			break;
	}

	return;
}

void func_7(var uParam0) // Position - 0x6DD Hash - 0x1F61555B ^0xCE9A84EE
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_ADD_SCENARIO_TRANSITION(Global_35);
		PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("A_BEER_TRANS_GENERIC_A"), 1.5f);
	}

	return;
}

void func_8(var uParam0) // Position - 0x70C Hash - 0x1F61555B ^0x6D95F421
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_ADD_SCENARIO_TRANSITION(Global_35);
		PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("A_WHISKEY_TRANS_GENERIC_A"), 1.5f);
	}

	return;
}

int func_9(var uParam0) // Position - 0x73B Hash - 0xAD6E5C1 ^0xDD044968
{
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1234314267))
		{
			func_23(uParam0);
			return 1;
		}
	}

	if (!uParam0->f_177)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1895155945))
			uParam0->f_177 = 1;

	return 0;
}

BOOL func_10(Hash hParam0, int iParam1) // Position - 0x79C Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_11(var uParam0) // Position - 0x7B6 Hash - 0x9FDF9381 ^0x3B8D525B
{
	int i;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[i], &uParam0->f_33[i /*7*/]);
	}

	return;
}

void func_12(var uParam0, int iParam1) // Position - 0x7F6 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_13(Hash hParam0) // Position - 0x803 Hash - 0xD9F8C7D0 ^0x700568E
{
	if (hParam0 == -1493684811)
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("world_human_barcustomer") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("prop_player_dynamic_seat_chair_table"))
			TASK::_0xB35370D5353995CB(Global_35, 1587785400, 1f);
	else if (hParam0 == 1587785400)
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
			TASK::_0xB35370D5353995CB(Global_35, -1493684811, 1f);
	else if (hParam0 == -752898125)
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("prop_player_dynamic_seat_chair_table"))
			TASK::_0xB35370D5353995CB(Global_35, 1342098323, 1f);
	else if (hParam0 == 1342098323)
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
			TASK::_0xB35370D5353995CB(Global_35, -752898125, 1f);

	return;
}

void func_14(float fParam0) // Position - 0x8F1 Hash - 0xE037869B ^0x368857FC
{
	if (fParam0 > 0f)
	{
		if (func_24())
			func_25(fParam0);
	
		Global_1935436.f_3 = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_15(var uParam0, BOOL bParam1) // Position - 0x917 Hash - 0xCD22ACC2 ^0x7500490B
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
		flag = true;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1935496.f_26 = 0;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		if (-943921969 == uParam0->f_33[i /*7*/].f_1)
		{
			num = func_26(0, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_27((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, true);
			func_28(0, 7000);
			flag3 = true;
		}
		else if (-1104847406 == uParam0->f_33[i /*7*/].f_1)
		{
			num2 = func_26(2, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_29((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_28(2, 7000);
			flag2 = true;
		}
		else if (381158954 == uParam0->f_33[i /*7*/].f_1)
		{
			num3 = func_26(1, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_30((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_28(1, 7000);
		}
		else if (joaat("EFFECT_HEALTH_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num4 = func_31((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_32(&(uParam0->f_9), &(uParam0->f_10), num4))
			{
				func_33(num4, true, flag, true);
				func_28(0, 7000);
			}
		
			flag3 = true;
		}
		else if (joaat("EFFECT_DEADEYE_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num5 = func_31((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_32(&(uParam0->f_9), &(uParam0->f_10), num5))
			{
				func_34(num5, true, flag, true);
				func_28(2, 7000);
				flag2 = true;
			}
		}
		else if (joaat("EFFECT_STAMINA_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num6 = func_31((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_32(&(uParam0->f_9), &(uParam0->f_10), num6))
			{
				func_35(num6, true, flag, true);
				func_28(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[i /*7*/].f_1)
		{
			func_36(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_2) / uParam0->f_2, 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (joaat("Effect_Health_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_38(19, num7);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_38(20, num7);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_38(18, num7);
			}
			else if (1869697234 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_38(0, num7);
				flag3 = true;
			}
			else if (1342237631 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_38(2, num7);
				flag2 = true;
			}
			else if (-1240225157 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_37(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_38(1, num7);
			}
		}
	}

	if (flag3)
		if (num4 > 0f || num > 0f)
			flag4 = true;

	func_39(*uParam0, bParam1, flag2, flag4);
	func_23(uParam0);
	uParam0->f_3 = uParam0->f_3 + num;
	uParam0->f_4 = uParam0->f_4 + num2;
	uParam0->f_5 = uParam0->f_5 + num3;
	uParam0->f_6 = uParam0->f_6 + num4;
	uParam0->f_7 = uParam0->f_7 + num5;
	uParam0->f_8 = uParam0->f_8 + num6;
	return;
}

void func_16(int iParam0, BOOL bParam1) // Position - 0xD7E Hash - 0xA08AEF0B ^0x94FD53ED
{
	float scent;
	var unk;
	var unk11;

	switch (iParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_prairie_poppy"):
			if (bParam1 || !func_47() || !PED::IS_PED_ON_FOOT(Global_35))
				return;
		
			if (iParam0 != joaat("consumable_herb_prairie_poppy") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				unk11 = { unk };
				TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_puking_item", 32);
				unk11.f_14 = 512;
				func_48(unk11, 0);
			}
			break;
	
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_ginseng"):
		case joaat("consumable_herb_vanilla_flower"):
			func_46(false);
			break;
	
		case joaat("consumable_valerian_root"):
			if (func_40(2) >= 7)
				func_42(243, func_41(joaat("consumable_valerian_root")), true);
		
			func_43(50);
			break;
	
		case joaat("consumable_aged_pirate_rum"):
			if (func_40(1) >= 7)
				func_42(245, func_41(joaat("consumable_aged_pirate_rum")), true);
		
			func_43(30);
			break;
	
		case joaat("consumable_ginseng_elixier"):
			if (func_40(0) >= 7)
				func_42(244, func_41(joaat("consumable_ginseng_elixier")), true);
		
			func_43(19);
			break;
	
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			if (iParam0 == joaat("CONSUMABLE_COVER_SCENT"))
			{
				func_44(0, 60000);
				scent = 0.25f;
			}
			else if (iParam0 == joaat("CONSUMABLE_COVER_SCENT_USED"))
			{
				func_44(0, 30000);
				scent = 0.5f;
			}
		
			func_45(580, true);
			PED::_SET_PED_SCENT(Global_35, scent);
			break;
	
		case joaat("consumable_potent_antidote"):
		case joaat("consumable_antidote"):
			if (iParam0 == joaat("consumable_antidote"))
				MISC::SET_BIT(&Global_1051038, 0);
			else if (iParam0 == joaat("consumable_potent_antidote"))
				MISC::SET_BIT(&Global_1051038, 1);
			break;
	}

	return;
}

Hash func_17(Hash hParam0, Hash hParam1) // Position - 0xF31 Hash - 0xD9CF8014 ^0xED4665F1
{
	switch (func_49(hParam0, -949239683))
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

BOOL func_18() // Position - 0xF83 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_19(int iParam0) // Position - 0xF91 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_50())
		return false;

	return func_51(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_20(Hash hParam0, Hash hParam1) // Position - 0xFB3 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_21(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xFE4 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_52(pedParam0, &str);
}

BOOL func_22(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x102B Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_10(hParam0, 0))
		return false;

	num = func_53(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_54(hParam0, 1))
			return false;

	return func_55(hParam0, false, bParam2) >= iParam1;
}

void func_23(var uParam0) // Position - 0x1095 Hash - 0xA2F56449 ^0xA1F38980
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

BOOL func_24() // Position - 0x10BF Hash - 0xEE4ABD19 ^0xBDF67442
{
	if (func_56(0, false, true))
	{
		switch (func_57(0))
		{
			case 1:
			case 6:
			case 8:
			case 10:
				return false;
		
			default:
			
		}
	
		if (func_18() == -1)
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("homeinvasion")) > 0)
				return false;
	}

	return true;
}

void func_25(float fParam0) // Position - 0x1112 Hash - 0x895BC02 ^0x9AB71896
{
	func_58(Global_1935436.f_9 + fParam0);
	return;
}

float func_26(int iParam0, float fParam1) // Position - 0x1127 Hash - 0x17EDCAD1 ^0xD87169C2
{
	float pedStamina;
	float pedMaxStamina;
	float num;
	float num2;

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_35);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_35);
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

void func_27(float fParam0, BOOL bParam1) // Position - 0x11B8 Hash - 0x6515398 ^0xDD905ACD
{
	float amount;
	int healthAmount;

	amount = 50f * fParam0;
	healthAmount = BUILTIN::ROUND(amount + (float)ENTITY::GET_ENTITY_HEALTH(Global_35));

	if (bParam1 && amount < 0f)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, amount, 0, 0);
	else if (fParam0 <= 0f || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_28(int iParam0, int iParam1) // Position - 0x122D Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_29(float fParam0) // Position - 0x1246 Hash - 0xE6CD767E ^0x10A2850D
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), fParam0 * 14f, 0, 0, 0);
	return;
}

void func_30(float fParam0) // Position - 0x1261 Hash - 0x54A9293A ^0x6B1712EF
{
	int num;

	if (func_18() != -1)
		return;

	if (fParam0 == -1f)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, fParam0 * (float)num);
	}

	return;
}

float func_31(float fParam0, float fParam1) // Position - 0x129C Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_32(var uParam0, var uParam1, float fParam2) // Position - 0x12CA Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_18() != -1)
		return true;

	if (!func_19(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_21(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_45(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_21(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_33(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13B4 Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_18() == false)
	{
		func_59(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_60(0);

	if (bParam1)
		func_61(num);

	if (num >= 100f - 1f)
		func_62();

	if (bParam2)
		fParam0 = func_63(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_65(0, func_64(fParam0, -100f, 100f), bParam1);
	return;
}

void func_34(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1426 Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_18() == false)
	{
		func_59(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_60(2);

	if (bParam1)
		func_61(num);

	if (bParam2)
		fParam0 = func_63(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_65(2, func_64(fParam0, -100f, 100f), bParam1);
	return;
}

void func_35(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1487 Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_18() == false)
	{
		func_59(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_60(1);

	if (bParam1)
		func_61(num);

	if (bParam2)
		fParam0 = func_63(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_65(1, func_64(fParam0, -100f, 100f), bParam1);
	return;
}

void func_36(float fParam0, BOOL bParam1) // Position - 0x14E8 Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_66(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_67(17))
		return;

	if (func_68())
	{
		num2 = func_69(num);
		num = num + fParam0;
		num3 = func_69(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_70();
			func_71(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_72(&num4, &num5);
		func_73(13, func_64(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_45(94, false);
	}

	return;
}

float func_37(float fParam0, int iParam1) // Position - 0x1599 Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_38(int iParam0, float fParam1) // Position - 0x15EB Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_74(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_75(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_76(-1);
			func_46(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_75(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_77(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_75(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_78(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_79(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_79(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_79(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_39(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x177E Hash - 0xE2FD0FF5 ^0x668B624E
{
	if (!bParam1)
		return;

	if (bParam3 || func_20(hParam0, -537818634))
		func_81(func_80(joaat("medicine_items_used")), 1);

	if (func_20(hParam0, -1457797660))
		func_81(func_80(joaat("provision_items_used")), 1);

	if (func_20(hParam0, 1573112293))
		func_83(func_82(&hParam0), 1);

	if (func_20(hParam0, 1939071949))
		func_81(func_84(joaat("USED"), joaat("tonic")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_81(func_84(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
			func_81(func_84(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_81(func_84(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_81(func_84(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_81(func_84(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_81(func_84(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_81(func_84(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_81(func_84(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			func_81(func_84(joaat("USED"), joaat("cover_scent")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_81(func_84(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_18() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_81(func_84(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam2)
		func_81(func_80(joaat("DEADEYE_ITEMS_USED")), 1);

	return;
}

int func_40(int iParam0) // Position - 0x19AB Hash - 0xBCE241D5 ^0x339AC097
{
	return func_85(Global_40.f_11095.f_11[iParam0]);
}

eBlipSprite func_41(Hash hParam0) // Position - 0x19C3 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_10(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_42(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x19DC Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_86(iParam0, &num, &num2);

	if (!func_87(iParam0, num, num2, bParam2))
		return;

	if (!func_88(iParam0, 1024))
		return;

	func_89(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_43(int iParam0) // Position - 0x1A3C Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_18() != -1)
		return;

	num = func_90(iParam0);
	value = func_91(iParam0);

	if (Global_1347477.f_117 || !func_67(31) || !func_92(num))
		return;

	if (value <= 0f)
		return;

	if (func_40(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_93(num, Global_40.f_11095.f_11[num] + value, false);
	func_96(MISC::VAR_STRING(6, func_94(iParam0), value), "itemtype_textures", func_95(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_44(int iParam0, int iParam1) // Position - 0x1B38 Hash - 0xA473403D ^0x12FD9A15
{
	Global_1911859[iParam0 /*3*/] = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
	Global_1911859[iParam0 /*3*/].f_1 = iParam1;
	Global_1911859[iParam0 /*3*/].f_2 = 1;
	return;
}

void func_45(int iParam0, BOOL bParam1) // Position - 0x1B63 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_86(iParam0, &num, &num2);

	if (!func_87(iParam0, num, num2, bParam1))
		return;

	func_89(num, num2);
	return;
}

void func_46(BOOL bParam0) // Position - 0x1B90 Hash - 0x9114E741 ^0x8984E174
{
	if (func_18() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_45(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_45(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_97(1, bParam0, true);
	func_98();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

BOOL func_47() // Position - 0x1BFE Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_99(1);
}

void func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x1C0B Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_100(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_101(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_102(iParam16);
			return;
		}
	}

	return;
}

int func_49(Hash hParam0, int iParam1) // Position - 0x1CA7 Hash - 0x7A1C2599 ^0xFF9B5634
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

BOOL func_50() // Position - 0x1CF1 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_18() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_51(int iParam0, BOOL bParam1) // Position - 0x1D16 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_103(iParam0))
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

BOOL func_52(Ped pedParam0, Any* panParam1) // Position - 0x1D47 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

int func_53(Hash hParam0) // Position - 0x1D57 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_10(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_54(Hash hParam0, int iParam1) // Position - 0x1D82 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_10(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_104(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_105("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_106(&unk, i, num, num2))
			{
			}
			else if (!func_107(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_108(num);
				return true;
			}
		}
	
		func_108(num);
	}

	return false;
}

int func_55(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1E2A Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_10(hParam0, 0))
		return 0;

	num = func_53(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_104(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_109(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_110(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_56(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1EAC Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_111())
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
		num = func_112(Global_1898164.f_1[0 /*5*/]);
	
		if (func_113(num) && func_114(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_115(Global_1898164.f_1[0 /*5*/]))
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

int func_57(int iParam0) // Position - 0x20B0 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_58(float fParam0) // Position - 0x20C4 Hash - 0xC37C08B6 ^0x3A4969C
{
	if (Global_1357549.f_1495 & 512 != 0 || PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (fParam0 >= 0.75f)
		{
			Global_1935436.f_9 = 0.75f - 0.01f;
			return;
		}
	}

	if (fParam0 < 0f)
		Global_1935436.f_9 = 0f;
	else if (fParam0 > 1f)
		Global_1935436.f_9 = 1f;
	else
		Global_1935436.f_9 = fParam0;

	return;
}

void func_59(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2140 Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_63(iParam0, fParam1, true);

	func_117(iParam0, func_116(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_60(int iParam0) // Position - 0x216F Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_61(float fParam0) // Position - 0x2181 Hash - 0x92695771 ^0x78E8D5C6
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_62() // Position - 0x21B5 Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_63(int iParam0, float fParam1, BOOL bParam2) // Position - 0x21E2 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_70();
	func_118(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_119(iParam0, 2);

	if (func_121(num, func_120(iParam0, 2), true))
	{
		func_122(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_45(88, bParam2);
		return 0f;
	}

	func_123(iParam0, func_70(), 2);
	func_122(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_64(float fParam0, float fParam1, float fParam2) // Position - 0x224B Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_65(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2272 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_18() != -1)
		return;

	if (!func_67(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_124(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_125(iParam0), value);
	func_127(func_126(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_128(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_45(84, true);

	if (fParam1 <= -99.999f)
		func_45(func_129(iParam0), true);

	variableName = func_130(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

float func_66(int iParam0) // Position - 0x234B Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_67(int iParam0) // Position - 0x235F Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_131(iParam0))
		return false;

	return func_132(iParam0);
}

BOOL func_68() // Position - 0x237B Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_18() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_133(Global_1347477.f_195, false);
}

int func_69(float fParam0) // Position - 0x23B7 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

int func_70() // Position - 0x23D2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x23DE Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_134(*iParam0);
	i = func_135(*iParam0);
	num2 = func_136(*iParam0);
	j = func_137(*iParam0);
	k = func_138(*iParam0);
	l = func_139(*iParam0);

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

	for (m = func_140(i, num); num2 > m; m = func_140(i, num))
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

	func_141(iParam0, l, k, j, num2, i, num);
	return;
}

void func_72(var uParam0, var uParam1) // Position - 0x2566 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_142())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_73(int iParam0, float fParam1) // Position - 0x259F Hash - 0x45CA0D9B ^0x167BF59B
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_144(1, flag, true, str);
		func_145(!flag, fParam1 < 0f, flag);
		num = func_124(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_98();
	}
	else if (iParam0 == 10)
	{
		num = func_124(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_124(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_74(int iParam0) // Position - 0x2675 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_75(int iParam0) // Position - 0x26A4 Hash - 0x21CE226B ^0x95F8EC5
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

void func_76(int iParam0) // Position - 0x26DF Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_146(2);
	func_147(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_77(int iParam0) // Position - 0x271C Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_148(2);
	func_149(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_78(int iParam0) // Position - 0x2758 Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_150(2);
	func_151(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_79(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2795 Hash - 0x5C29635D ^0x5C29635D
{
	func_117(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

struct<2> func_80(int iParam0) // Position - 0x27AF Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_81(var uParam0, var uParam1, int iParam2) // Position - 0x27BF Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_82(var uParam0) // Position - 0x27CF Hash - 0x19D4C5AC ^0x19D4C5AC
{
	switch (*uParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 26;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 28;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("consumable_herb_sage"):
			return 34;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_ro_flower_clamshell"):
			return 10;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 31;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 1;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 42;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 20;
	
		case joaat("consumable_herb_yarrow"):
			return 43;
	
		case joaat("consumable_herb_wild_mint"):
			return 41;
	
		case joaat("provision_ro_flower_cigar"):
			return 9;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 32;
	
		case joaat("provision_ro_flower_night_scented"):
			return 25;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 38;
	
		case joaat("consumable_herb_milkweed"):
			return 23;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 29;
	
		case joaat("consumable_herb_oregano"):
			return 27;
	
		case joaat("consumable_herb_red_raspberry"):
			return 33;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 21;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 40;
	
		case joaat("provision_ro_flower_sparrows"):
			return 35;
	
		case joaat("provision_ro_flower_queens"):
			return 30;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("consumable_herb_wild_carrots"):
			return 39;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_ro_flower_spider"):
			return 36;
	
		case joaat("provision_ro_flower_dragons"):
			return 14;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 22;
	
		case joaat("provision_ro_flower_moccasin"):
			return 24;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 37;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	
		case joaat("provision_ro_flower_ghost"):
			return 17;
	}

	return 0;
}

void func_83(int iParam0, int iParam1) // Position - 0x29FD Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_84(joaat("eaten"), func_152(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_81(func_153(joaat("herbs_eaten")), iParam1);
	return;
}

struct<2> func_84(int iParam0, int iParam1) // Position - 0x2A2F Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

int func_85(float fParam0) // Position - 0x2A45 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

void func_86(int iParam0, var uParam1, var uParam2) // Position - 0x2AD1 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_87(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2AED Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_154(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_155(iParam0))
		return false;

	if (func_156(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_88(iParam0, 1) || func_157(32768))
		if (!func_88(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_158())
		return false;

	return true;
}

BOOL func_88(int iParam0, int iParam1) // Position - 0x2B8F Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_89(int iParam0, int iParam1) // Position - 0x2BA8 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

int func_90(int iParam0) // Position - 0x2BCC Hash - 0x92F940EE ^0x92F940EE
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

float func_91(int iParam0) // Position - 0x2C20 Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_159(iParam0);
	
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
			return func_159(iParam0);
	
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
			return func_159(iParam0);
	
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

BOOL func_92(int iParam0) // Position - 0x2EEE Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_67(18);
	
		case 1:
			return func_67(19);
	
		case 2:
			return func_67(20);
	
		default:
		
	}

	return true;
}

void func_93(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2F2C Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_18() != -1)
		return;

	if (Global_1347477.f_117 || !func_67(31))
		return;

	num = func_40(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_40(iParam0);

	if (func_160(iParam0) && func_161(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_162(num2, fParam1);
		
			if (fParam1 > (float)func_163(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_45(func_164(iParam0), false);
				
					func_165(iParam0, num3, num4);
					func_28(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_94(int iParam0) // Position - 0x302E Hash - 0xEB40D7A4 ^0x2F691199
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_95(int iParam0) // Position - 0x303A Hash - 0x21FAF347 ^0xAF7D8F21
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

int func_96(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x3075 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_166(sParam0, sParam1, hParam2);
	return num2;
}

void func_97(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x30D8 Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_98() // Position - 0x3108 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_167();
	func_168();
	func_169();
	return;
}

BOOL func_99(int iParam0) // Position - 0x311F Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_170(iParam0);
}

BOOL func_100(int iParam0, int iParam1) // Position - 0x312D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_101(const char* sParam0) // Position - 0x313C Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_102(int iParam0) // Position - 0x3176 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_100(iParam0, 1))
		func_171(1);

	return;
}

int func_103(int iParam0) // Position - 0x318D Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_115(iParam0))
		return -1;

	return func_172(iParam0);
}

Hash func_104(Hash hParam0, int iParam1) // Position - 0x31A9 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_10(hParam0, 0))
		return 0;

	num = func_53(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_20(hParam0, 1399091007))
	{
		func_173(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_105(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x3223 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_110(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_106(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x324A Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_107(Hash hParam0) // Position - 0x3285 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_108(int iParam0) // Position - 0x32A0 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_109(Hash hParam0, BOOL bParam1) // Position - 0x32C1 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_174(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_176(&unk, func_175(false));

	if (!func_177(&unk, &num, &num2, false))
		return 0;

	func_108(num);
	return num2;
}

int func_110(BOOL bParam0) // Position - 0x331F Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_18() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_111() // Position - 0x3360 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_112(int iParam0) // Position - 0x33B3 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_115(iParam0))
		return -1;

	return func_179(func_178(iParam0));
}

BOOL func_113(int iParam0) // Position - 0x33D3 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_114(int iParam0, int iParam1) // Position - 0x33E9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_115(int iParam0) // Position - 0x33F8 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

float func_116(int iParam0, int iParam1) // Position - 0x342B Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_180();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_117(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x3476 Hash - 0xB3CE93F ^0x4BE3ECC8
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_180();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_181(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_182(ped, iParam0, fParam1);
	func_183(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_125(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_118(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x352C Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_134(*uParam0);
	i = func_135(*uParam0);
	j = func_136(*uParam0);
	k = func_137(*uParam0);
	l = func_138(*uParam0);
	m = func_139(*uParam0);

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
	
		num3 = func_140(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_141(uParam0, m, l, k, j, i, num);
	return;
}

int func_119(int iParam0, int iParam1) // Position - 0x369F Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_180();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_120(int iParam0, int iParam1) // Position - 0x36EE Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_180();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_121(int iParam0, int iParam1, BOOL bParam2) // Position - 0x373F Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_184(iParam1) || !func_184(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_122(int iParam0, int iParam1, int iParam2) // Position - 0x376C Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_180();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_123(int iParam0, int iParam1, int iParam2) // Position - 0x37C1 Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_180();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_124(int iParam0) // Position - 0x3816 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_125(int iParam0) // Position - 0x383A Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_126(int iParam0) // Position - 0x3869 Hash - 0x5163992 ^0x5163992
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

void func_127(int iParam0, float fParam1, BOOL bParam2) // Position - 0x3898 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_185(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_128(int iParam0) // Position - 0x38E8 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_129(int iParam0) // Position - 0x390C Hash - 0x68BC9945 ^0x68BC9945
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

char* func_130(int iParam0) // Position - 0x393E Hash - 0x21CE226B ^0x86DF4AEA
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

BOOL func_131(int iParam0) // Position - 0x3979 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_132(int iParam0) // Position - 0x398C Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_133(int iParam0, BOOL bParam1) // Position - 0x39B6 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_121(func_70(), iParam0, bParam1);
}

int func_134(int iParam0) // Position - 0x39CA Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_135(int iParam0) // Position - 0x39EF Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_136(int iParam0) // Position - 0x3A02 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_137(int iParam0) // Position - 0x3A15 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_138(int iParam0) // Position - 0x3A28 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_139(int iParam0) // Position - 0x3A3A Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_140(int iParam0, int iParam1) // Position - 0x3A4C Hash - 0x893AC59E ^0x893AC59E
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

void func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3AE6 Hash - 0xA65AB937 ^0xA65AB937
{
	func_187(iParam0, iParam6);
	func_188(iParam0, iParam5);
	func_189(iParam0, iParam4);
	func_190(iParam0, iParam3);
	func_191(iParam0, iParam2);
	func_192(iParam0, iParam1);
	return;
}

BOOL func_142() // Position - 0x3B1E Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

var func_143(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3B3D Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_144(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x3B54 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_145(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3B98 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_185(0, 1, bParam0, bParam1);
	str = MISC::VAR_STRING(2, str);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);

	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}

	return;
}

int func_146(int iParam0) // Position - 0x3C90 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_180();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
	
		case 1:
			return Global_1954819.f_866.f_115;
	
		default:
		
	}

	return -1;
}

void func_147(float fParam0, Ped pedParam1) // Position - 0x3CCF Hash - 0x2062487E ^0xADB8AE45
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_148(int iParam0) // Position - 0x3D11 Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_180();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
	
		case 1:
			return Global_1954819.f_866.f_115.f_2;
	
		default:
		
	}

	return -1;
}

void func_149(float fParam0) // Position - 0x3D54 Hash - 0xEBF0A2AB ^0x54370C29
{
	Ped ped;

	if (fParam0 == 0f)
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::_CHANGE_PED_STAMINA(ped, fParam0);
	return;
}

int func_150(int iParam0) // Position - 0x3D8E Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_180();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
	
		case 1:
			return Global_1954819.f_866.f_115.f_1;
	
		default:
		
	}

	return -1;
}

void func_151(float fParam0, BOOL bParam1) // Position - 0x3DD1 Hash - 0x1FE7F29A ^0xE2FCD967
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 0);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

int func_152(int iParam0) // Position - 0x3E65 Hash - 0xBA965109 ^0xDF65C4FE
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
			return joaat("herb_hummingbird_sage");
	
		case 20:
			return joaat("herb_indian_tobacco");
	
		case 21:
			return joaat("herb_lady_of_night_orchid");
	
		case 22:
			return joaat("herb_lady_slipper_orchid");
	
		case 23:
			return joaat("herb_milkweed");
	
		case 24:
			return joaat("herb_moccasin_flower_orchid");
	
		case 25:
			return joaat("herb_night_scented_orchid");
	
		case 26:
			return joaat("herb_oleander_sage");
	
		case 27:
			return joaat("herb_oregano");
	
		case 28:
			return joaat("herb_parasol_mushroom");
	
		case 29:
			return joaat("herb_prairie_poppy");
	
		case 30:
			return joaat("herb_queens_orchid");
	
		case 31:
			return joaat("herb_rams_head");
	
		case 32:
			return joaat("herb_rat_tail_orchid");
	
		case 33:
			return joaat("herb_red_raspberry");
	
		case 34:
			return joaat("herb_red_sage");
	
		case 35:
			return joaat("herb_sparrows_egg_orchid");
	
		case 36:
			return joaat("herb_spider_orchid");
	
		case 37:
			return joaat("herb_vanilla_flower");
	
		case 38:
			return joaat("herb_violet_snowdrop");
	
		case 39:
			return joaat("herb_wild_carrots");
	
		case 40:
			return joaat("herb_wild_feverfew");
	
		case 41:
			return joaat("herb_wild_mint");
	
		case 42:
			return joaat("herb_wintergreen_berry");
	
		case 43:
			return joaat("herb_yarrow");
	}

	return 0;
}

struct<2> func_153(int iParam0) // Position - 0x4151 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_154(int iParam0, int iParam1) // Position - 0x4163 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_18() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_155(int iParam0) // Position - 0x4196 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_18() != -1)
		if (func_88(iParam0, 4))
			return false;
	else if (func_88(iParam0, 2))
		return false;

	return true;
}

BOOL func_156(int iParam0) // Position - 0x41C6 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_88(iParam0, 65536) && !func_88(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_88(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_88(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_157(int iParam0) // Position - 0x4272 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_158() // Position - 0x4285 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

float func_159(int iParam0) // Position - 0x4294 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_90(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_85(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_193(num7) - func_193(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_160(int iParam0) // Position - 0x42FE Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_161(int iParam0) // Position - 0x4337 Hash - 0xB8632262 ^0xB8632262
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

int func_162(float fParam0, float fParam1) // Position - 0x43B6 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_85(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_193(num));
	num3 = BUILTIN::TO_FLOAT(func_193(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_163(int iParam0) // Position - 0x4429 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_194(iParam0, &num))
		return func_193(num);

	switch (iParam0)
	{
		case 0:
			if (func_195())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_195())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_195())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_164(int iParam0) // Position - 0x44B5 Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_165(int iParam0, int iParam1, int iParam2) // Position - 0x44E7 Hash - 0x29688DE6 ^0x98432A28
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

	num = num + func_196(iParam0);
	str3 = func_198(func_197(num, iParam2));
	str5 = func_199(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_200(iParam0));
	num2 = func_201(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_202(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_204(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_203(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_166(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x45DF Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

float func_167() // Position - 0x4610 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_205())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_60(2);

	if (Global_1347477.f_119)
		return func_60(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_206();
	num3 = func_207();
	num4 = func_208();
	num5 = func_209();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_210());
	num8 = func_60(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_211(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_212(3, num9, num9 > 100f);
	return func_64(num8, -100f, 100f);
}

float func_168() // Position - 0x4739 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_205())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_60(1);

	if (Global_1347477.f_119)
		return func_60(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_206();
	num3 = func_207();
	num4 = func_208();
	num5 = func_209();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_210());
	num8 = func_60(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_211(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_212(2, num9, num9 > 100f);
	return func_64(num8, -100f, 100f);
}

float func_169() // Position - 0x4862 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_205())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_60(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_213())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_214())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_60(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_206();
	num3 = func_207();
	num4 = func_208();
	num5 = func_209();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_210());
	num8 = func_60(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_211(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_212(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_60(0);

	return func_64(num8, -100f, 100f);
}

BOOL func_170(int iParam0) // Position - 0x4A09 Hash - 0xA059D395 ^0xE600C05
{
	return func_215(Global_1935496.f_27, iParam0);
}

void func_171(int iParam0) // Position - 0x4A1D Hash - 0xF3266748 ^0xB6D9317D
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

int func_172(int iParam0) // Position - 0x4A63 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_216(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_173(Hash hParam0, var uParam1, var uParam2) // Position - 0x4AA4 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_174(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x4CB0 Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_175(BOOL bParam0) // Position - 0x4D82 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_110(bParam0);

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

void func_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4E17 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_177(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x4E32 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_110(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_178(int iParam0) // Position - 0x4E57 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_179(BOOL bParam0) // Position - 0x4E95 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_180() // Position - 0x4EA8 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_219())
		return 1;

	return 0;
}

void func_181(int iParam0, int iParam1, int iParam2) // Position - 0x4EBC Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_180();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_182(Ped pedParam0, int iParam1, float fParam2) // Position - 0x4F0D Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_130(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_220(iParam1), fParam2, -1);

	return;
}

void func_183(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x4F39 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_180();

	gameTimer = MISC::GET_GAME_TIMER();
	func_221(iParam0, fParam1, iParam3);

	if (bParam2)
		func_222(iParam0, gameTimer, iParam3);

	return;
}

BOOL func_184(int iParam0) // Position - 0x4F6C Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_139(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_138(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_137(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_134(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_135(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_136(iParam0);

	if (num6 < 1 || num6 > func_140(num5, num4))
		return false;

	return true;
}

char* func_185(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5048 Hash - 0xC24B5846 ^0x535ACBA0
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

var func_186(BOOL bParam0, var uParam1, var uParam2) // Position - 0x50F1 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_187(var uParam0, int iParam1) // Position - 0x5108 Hash - 0xD05180BA ^0x39589262
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

void func_188(var uParam0, int iParam1) // Position - 0x518E Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_189(var uParam0, int iParam1) // Position - 0x51CA Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_135(*uParam0);
	num2 = func_134(*uParam0);

	if (iParam1 < 1 || iParam1 > func_140(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_190(var uParam0, int iParam1) // Position - 0x521D Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_191(var uParam0, int iParam1) // Position - 0x5258 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_192(var uParam0, int iParam1) // Position - 0x5291 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_193(int iParam0) // Position - 0x52C9 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_194(int iParam0, var uParam1) // Position - 0x533F Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_195() // Position - 0x5348 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_196(int iParam0) // Position - 0x5351 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_110(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_110(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_110(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_197(int iParam0, int iParam1) // Position - 0x53B3 Hash - 0xD5391B76 ^0xABA1EFFD
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

const char* func_198(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x53E5 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_199(int iParam0) // Position - 0x53F9 Hash - 0x21CE226B ^0xEF10B445
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

char* func_200(int iParam0) // Position - 0x5434 Hash - 0x21CE226B ^0xDEEFEA72
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

int func_201(int iParam0) // Position - 0x546F Hash - 0x21FAF347 ^0x467E3BE5
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

int func_202(int iParam0) // Position - 0x54AA Hash - 0x5163992 ^0x5163992
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

int func_203(int iParam0) // Position - 0x54D9 Hash - 0x21FAF347 ^0xA8C8F0DA
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

int func_204(const char* sParam0, const char* sParam1, int iParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x5514 Hash - 0x51CE9407 ^0x19439D00
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
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

BOOL func_205() // Position - 0x558B Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_206() // Position - 0x55A7 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_66(13);
	num2 = func_69(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_207() // Position - 0x55EA Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_208() // Position - 0x5605 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_223())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_209() // Position - 0x5624 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_210() // Position - 0x5666 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_211(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5674 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_185(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_212(int iParam0, float fParam1, BOOL bParam2) // Position - 0x56C0 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_185(iParam0, 2, false, false);
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

BOOL func_213() // Position - 0x5806 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_66(12) <= -99f;
}

BOOL func_214() // Position - 0x581A Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_66(12) >= 99f;
}

BOOL func_215(int iParam0, int iParam1) // Position - 0x582E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_216(int iParam0) // Position - 0x583D Hash - 0x6EC15CF9 ^0xE613EBE0
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

struct<4> func_217(BOOL bParam0) // Position - 0x58BE Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_218(joaat("character"), func_224(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_218(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x58DA Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_10(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_110(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_219() // Position - 0x590B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_220(int iParam0) // Position - 0x591A Hash - 0x21CE226B ^0x4BC65B9C
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

void func_221(int iParam0, float fParam1, int iParam2) // Position - 0x5955 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_180();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_222(int iParam0, int iParam1, int iParam2) // Position - 0x59A6 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_180();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_223() // Position - 0x59FB Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

struct<4> func_224() // Position - 0x5A0C Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

