#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	int iLocal_3 = 0;
	Hash hLocal_4 = 0;
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
	var uLocal_19 = 10;
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
	var uLocal_32 = 6;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = -1;
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
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE6EF425C ^0x54B44415
{
	bLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	anLocal_2 = anScriptParam_0;
	iLocal_3 = anScriptParam_0.f_1;
	hLocal_4 = anScriptParam_0.f_2;
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

void func_1() // Position - 0x5C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x64 Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xB2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xBA Hash - 0x3D22DF46 ^0xED7FF9EC
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

void func_6() // Position - 0x112 Hash - 0x5D4404E7 ^0x137E0696
{
	if (PED::IS_PED_INJURED(Global_35) || SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		bLocal_0 = false;
		return;
	}

	func_12(&uLocal_19);
	return;
}

void func_7() // Position - 0x13A Hash - 0x467E6C28 ^0x8C1AE0DD
{
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));

	if (func_13())
	{
		if (func_14() == func_15())
			CAM::DO_SCREEN_FADE_IN(500);
	
		func_16(0);
	}

	if (func_17() != false)
	{
		if (func_18(&(uLocal_19.f_19)) || uLocal_19.f_22)
		{
			GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(15f);
			func_19(&(uLocal_19.f_19));
			uLocal_19.f_22 = 0;
		}
	}

	if (CAM::DOES_CAM_EXIST(uLocal_19.f_23))
		CAM::DESTROY_CAM(uLocal_19.f_23, false);

	if (CAM::DOES_CAM_EXIST(uLocal_19.f_24))
		CAM::DESTROY_CAM(uLocal_19.f_24, false);

	func_20(&uLocal_19);

	if (uLocal_19.f_30)
	{
		func_21(0);
		uLocal_19.f_30 = 0;
	}

	if (uLocal_19.f_31)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
	
		uLocal_19.f_31 = 0;
	}

	return;
}

void func_8() // Position - 0x1F9 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x205 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_22(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x22D Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_23(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x255 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_24(&eventData);
	}

	return;
}

void func_12(var uParam0) // Position - 0x27D Hash - 0xF591C7B8 ^0xA0E402F7
{
	Hash activeDynamicScenario;
	Entity scenarioPointEntity;
	float minimum;
	float maximum;
	float angle;
	eStackSize stackSize;
	int num;
	eStackSize stackSize2;
	int hour;
	int minute;
	float num2;
	char* modifierName;

	if (func_25(&(uParam0->f_19), 3.5f) && uParam0->f_22)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(15f);
		uParam0->f_22 = 0;
	}

	if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, true) == iLocal_3)
	{
		func_26(32);
		func_26(64);
	
		if (!uParam0->f_30)
		{
			func_21(1);
			uParam0->f_30 = 1;
		}
	
		if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
		{
			if (PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35) != joaat("prop_player_sleep_tent_resting_arthur") || PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 7, true);
			
				if (!uParam0->f_31)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					uParam0->f_31 = 1;
				}
			}
			else if (uParam0->f_31)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				uParam0->f_31 = 0;
			}
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
				CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
				CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-35f, 15f);
			
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
			}
		}
	}
	else
	{
		if (uParam0->f_30)
		{
			func_21(0);
			uParam0->f_30 = 0;
		}
	
		if (uParam0->f_31)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
			uParam0->f_31 = 0;
		}
	}

	switch (uParam0->f_11)
	{
		case 0:
			if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
				STREAMING::_REQUEST_SCENARIO_TYPE(hLocal_4, 15, 0, 0);
		
			func_27(uParam0, 1);
			break;
	
		case 1:
			if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(hLocal_4, false))
					return;
		
			func_27(uParam0, 2);
			break;
	
		case 2:
			func_28(uParam0);
		
			if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
			{
				scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_3);
			
				if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
				{
					switch (uParam0->f_32)
					{
						case 1:
							if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
							{
								uParam0->f_32 = 2;
								uParam0->f_33 = MISC::GET_GAME_TIMER();
							}
							break;
					
						case 2:
							MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(scenarioPointEntity), &minimum, &maximum);
							minimum.f_1 = minimum.f_1 + 0.5f;
							maximum.f_1 = maximum.f_1 - 0.5f;
							angle = maximum - minimum;
							minimum = 0f;
							maximum = 0f;
						
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(scenarioPointEntity, minimum), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(scenarioPointEntity, maximum), angle, false, true, 0))
							{
								uParam0->f_32 = 0;
							}
							else if (MISC::GET_GAME_TIMER() >= uParam0->f_33 + 10000)
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, scenarioPointEntity, true);
								uParam0->f_32 = 0;
							}
							break;
					}
				}
				else
				{
					uParam0->f_32 = 0;
				}
			}
		
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && func_29(uParam0))
			{
				uParam0->[4] = func_31("SLEEP", joaat("INPUT_CONTEXT_Y"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
				func_32(uParam0->[4], 1057677739, 0, true);
			
				if (func_17() != false)
				{
					if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
					{
						uParam0->[7] = func_31("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
						func_32(uParam0->[7], 1057677739, 0, true);
					}
					else if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && !Global_1327590.f_19736)
					{
						uParam0->[7] = func_31("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_30(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
						func_32(uParam0->[7], 1057677739, 0, true);
					}
				}
			
				if (Global_1327590.f_19683 < 2 && func_33())
				{
					func_34();
					Global_1327590.f_19683 = Global_1327590.f_19683 + 1;
				}
			
				func_27(uParam0, 3);
			}
			else if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3 && !TASK::IS_PED_EXITING_SCENARIO(Global_35, true) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				uParam0->f_13 = func_35();
				func_27(uParam0, 5);
			}
			break;
	
		case 3:
			if (!func_29(uParam0))
			{
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
		
			HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 2);
			func_37(uParam0);
		
			if (!func_38(uParam0->[4]))
			{
				uParam0->[4] = func_31("SLEEP", joaat("INPUT_CONTEXT_Y"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
				func_32(uParam0->[4], 1057677739, 0, true);
			}
			else if (func_39(uParam0->[4], true))
			{
				if (func_40(8388608))
					func_41(4);
			
				func_42(16777216);
				func_43(&uParam0->[4], true, true);
				func_43(&uParam0->[7], true, true);
				uParam0->[5] = func_44("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				func_32(uParam0->[5], 1323335645, 0, true);
				uParam0->f_13 = func_35();
				func_27(uParam0, 4);
				return;
			}
		
			if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame") || hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && func_17() != false)
			{
				if (!func_38(uParam0->[7]))
				{
					if (!Global_1327590.f_19736)
					{
						if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
						{
							uParam0->[7] = func_31("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
							func_32(uParam0->[7], 1057677739, 0, true);
						}
						else if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
						{
							uParam0->[7] = func_31("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_30(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false);
							func_32(uParam0->[7], 1057677739, 0, true);
						}
					}
				}
				else if (func_39(uParam0->[7], true))
				{
					func_42(16777216);
					func_43(&uParam0->[7], true, true);
					func_43(&uParam0->[4], true, true);
					uParam0->f_13 = func_35();
				
					if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
					{
						func_45(uParam0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
						TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR", 0, true, true, hLocal_4, false, -1082130432, false);
						GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
					}
					else
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1082130432, false);
					}
				
					func_27(uParam0, 5);
					return;
				}
			}
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3)
				{
					uParam0->f_13 = func_35();
					func_43(&uParam0->[4], true, true);
					func_43(&uParam0->[7], true, true);
					func_27(uParam0, 5);
				}
				else
				{
					func_43(&uParam0->[4], true, true);
					func_43(&uParam0->[7], true, true);
					func_27(uParam0, 2);
				}
			}
			break;
	
		case 4:
			func_46(uParam0, true);
			break;
	
		case 5:
			func_37(uParam0);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		
			if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
				if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_23) && CAM::IS_CAM_ACTIVE(uParam0->f_23))
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, false, false, true);
		
			if (!func_47(Global_35, -76381094) && !(TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3))
			{
				if (!func_48())
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			
				func_27(uParam0, 2);
				return;
			}
		
			if (func_17() == -1)
				if (!func_48())
					HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
		
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				if (!func_48())
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
			{
				func_49(uParam0);
				func_27(uParam0, 6);
			}
			break;
	
		case 6:
			if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
				if (func_50() == 8 && func_51(Global_35))
					HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 1057677739, func_36(), 0);
				else
					HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 1057677739, func_36(), 0);
		
			if (func_37(uParam0))
			{
				MISC::SET_BIT(&(Global_1955830.f_1), 2);
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 3);
			
				if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame") && !CAM::IS_GAMEPLAY_CAM_RENDERING())
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, false, false, true);
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
			activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
		
			if (activeDynamicScenario != joaat("prop_player_sleep_tent_resting_arthur") && activeDynamicScenario != joaat("world_player_sleep_bedroll_arthur") && activeDynamicScenario != joaat("WORLD_PLAYER_SLEEP_GROUND_ARM_MALE_B") && activeDynamicScenario != joaat("PROP_PLAYER_PRPTY_SAVE_GAME_MALE") && activeDynamicScenario != joaat("prop_player_seat_chair_generic") || PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_35))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			else if (uParam0->f_29)
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				uParam0->f_29 = 0;
			}
		
			if (func_17() == -1)
			{
				if (func_52(uParam0->[4], false))
					if (func_53(PLAYER::PLAYER_ID(), true, false, true) || PED::IS_PED_IN_COMBAT(Global_35, 0))
						func_54(uParam0->[4], false, true);
				else if (!func_53(PLAYER::PLAYER_ID(), true, false, true) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
					func_54(uParam0->[4], true, true);
			
				if (func_55(uParam0->[4], true))
				{
					func_56();
					func_20(uParam0);
					uParam0->[5] = func_44("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_32(uParam0->[5], 1323335645, 0, true);
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_27(uParam0, 7);
				}
				else if (func_55(uParam0->[6], true))
				{
					func_56();
					func_57(16777216);
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					func_27(uParam0, 15);
				}
				else if (func_55(uParam0->[8], true))
				{
					func_56();
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					uParam0->f_29 = 1;
				}
				else if (func_38(uParam0->[9]))
				{
					if (func_58(uParam0->[9], true) && func_59())
						func_60(&Global_43907, 4);
				
					func_54(uParam0->[8], func_61() != 1, true);
					func_54(uParam0->[9], func_61() != 1, true);
					func_54(uParam0->[6], func_61() != 1, true);
					func_54(uParam0->[4], func_61() != 1, true);
				}
			}
			else if (func_55(uParam0->[4], true))
			{
				func_20(uParam0);
				uParam0->[5] = func_44("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
				func_27(uParam0, 7);
			}
			else if (func_55(uParam0->[5], true))
			{
				func_20(uParam0);
				func_27(uParam0, 3);
			}
		
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
				{
					uParam0->f_33 = MISC::GET_GAME_TIMER();
					uParam0->f_32 = 1;
				}
			
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == iLocal_3)
					func_62(uParam0);
				else
					func_63(uParam0);
			
				func_56();
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
				uParam0->f_29 = 0;
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
			}
			break;
	
		case 7:
			func_46(uParam0, false);
		
			if (func_17() == -1)
			{
				if (!func_48())
				{
					if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
					{
						MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
						func_20(uParam0);
						func_27(uParam0, 2);
					}
				}
			}
			break;
	
		case 8:
			if (!Global_1327590.f_19737)
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, true) == iLocal_3 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1652513209))
					Global_1327590.f_19737 = 1;
			}
			else if (Global_1327590.f_19738)
			{
				uParam0->f_14 = MISC::GET_GAME_TIMER();
				func_27(uParam0, 9);
			}
			break;
	
		case 9:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
		
			if (func_37(uParam0))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_17, true, false) || ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_17, false) || hLocal_4 != joaat("PROP_PLAYER_SLEEP_BED"))
				{
					if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && !Global_1327590.f_19737)
					{
						if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_17, false) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_17, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_17);
						}
						else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
						{
							uParam0->f_12 = 1;
							uParam0->f_14 = MISC::GET_GAME_TIMER();
						}
					
						if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_17, false) && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
						{
							uParam0->f_18 = -1;
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
							func_64(4);
							func_27(uParam0, 2);
						}
					}
				
					if (MISC::GET_GAME_TIMER() - uParam0->f_14 > 500)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						AUDIO::_START_AUDIO_SCENESET("Fade_To_Black", "Sleep_Respawn_Scenes");
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					uParam0->f_12 = 1;
				}
			}
		
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1392040.f_7 == -15)
					Global_1392040.f_7 = func_65();
			
				stackSize = Global_1392040.f_7;
				func_66(&stackSize, 0, 0, 3, 0, 0, 0, false);
			
				if (!func_67(stackSize))
					Global_1392040.f_8 = Global_1392040.f_8 + 1;
				else
					Global_1392040.f_8 = 0;
			
				Global_1327590.f_19737 = 0;
				Global_1327590.f_19738 = 0;
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			
				if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, false, true, 0, false, -1082130432, false);
				else if (hLocal_4 == joaat("world_player_sleep_bedroll"))
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR", 0, false, true, 0, false, -1082130432, false);
				else
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, false, true, 0, false, -1082130432, false);
			
				func_27(uParam0, 10);
			}
			break;
	
		case 10:
			if (func_17() == false)
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
			
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
					}
					else
					{
						uParam0->f_12 = 1;
						PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
					}
				}
			
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					func_20(uParam0);
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_27(uParam0, 2);
					return;
				}
			
				if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
					func_27(uParam0, 6);
			}
			else
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			
				if (func_37(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
							PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("RESTING_TRANS_SLEEP_W_HAT"), 3f);
					
						CAM::DO_SCREEN_FADE_OUT(2000);
					}
					else
					{
						uParam0->f_12 = 1;
					}
				}
			
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADING_IN())
						CAM::DO_SCREEN_FADE_IN(1000);
				
					AUDIO::_STOP_AUDIO_SCENESET("Sleep_Respawn_Scenes");
					MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
					func_27(uParam0, 2);
					return;
				}
			
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
					{
						if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_16, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_16, true))
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_16);
						}
						else if (MISC::GET_GAME_TIMER() > uParam0->f_14 + 2500)
						{
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_16);
							func_64(4);
							AUDIO::_SET_AUDIO_SCENESET("Clouds", "Sleep_Respawn_Scenes");
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
						
							if (func_51(Global_35))
							{
								stackSize2 = func_68();
								hour = func_69(stackSize2, uParam0->f_13);
								minute = func_70(stackSize2, uParam0->f_13);
								CLOCK::ADVANCE_CLOCK_TIME_TO(hour, minute, 0);
								TELEMETRY::_TELEMETRY_SLEEP(hour);
							
								if (hour > 9 || hour <= 1)
									num = 1;
							
								if (func_71(10, 0) >= 3 && stackSize2 != 8 && stackSize2 != 7 && stackSize2 != 5)
								{
									num2 = func_72(12f, 2);
									func_73(18, num2);
								}
							}
							else
							{
								CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_13, 0, 0);
								TELEMETRY::_TELEMETRY_SLEEP(uParam0->f_13);
							
								if (!func_74(0, false, true))
									MISC::SET_RANDOM_WEATHER_TYPE(true, true);
							}
						
							func_75();
							func_76(false, num, false);
							func_77();
							func_78(-1, false, 0, false, false);
						
							if (!Global_1327590.f_19736)
								func_79();
						
							func_82(Global_36, func_80() ? 100f : 300f, false, false);
							func_83(14, true);
							func_84();
							Global_1935183.f_26 = 1;
							PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							uParam0->f_14 = MISC::GET_GAME_TIMER();
							func_27(uParam0, 11);
						}
					}
				}
			}
			break;
	
		case 11:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_37(uParam0))
			{
				if (func_17() != false)
				{
					PED::INSTANTLY_FILL_PED_POPULATION();
				
					if (!func_13())
						func_16(1);
				
					func_85(Global_36);
					Global_40.f_9 = 0;
					func_86(false, 7);
				}
			}
		
			if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN() && MISC::GET_GAME_TIMER() - uParam0->f_14 > 250)
				CAM::DO_SCREEN_FADE_IN(500);
		
			if (func_17() != false)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
				PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
				MISC::_0xA3A8926951471C82();
			
				if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_16, false) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_16))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					AUDIO::_STOP_AUDIO_SCENESET("Sleep_Respawn_Scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
					func_87(0f);
				
					if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
					{
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_15, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + 90f, 2);
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_15);
					}
					else if (hLocal_4 == joaat("world_player_sleep_bedroll"))
					{
						func_88(98.2971f, -4.2336f);
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
						PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Global_35, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), -5f, 0f, 0f));
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
				
					if (hLocal_4 != joaat("world_player_sleep_bedroll"))
						func_88(0, 0);
				
					if (func_51(Global_35))
					{
						modifierName = func_89(func_68(), uParam0->f_13);
					
						if (!MISC::IS_STRING_NULL_OR_EMPTY(modifierName))
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER(modifierName);
							uParam0->f_22 = 1;
						}
					}
				
					func_90(0, false);
					func_91(1);
					uParam0->f_14 = MISC::GET_GAME_TIMER();
					func_92(0);
					func_27(uParam0, 12);
				}
			}
			else
			{
				func_27(uParam0, 12);
			}
			break;
	
		case 12:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_17() != false)
			{
				if (func_37(uParam0))
				{
					if (func_13())
						func_16(0);
				
					Global_1392040.f_7 = func_65();
				}
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
			
				func_93(true);
				func_94();
			}
		
			if (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN())
			{
				PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("SLEEP_TRANS_RESTING_W_HAT"), 6f);
				func_27(uParam0, 5);
			}
			else if (MISC::GET_GAME_TIMER() - uParam0->f_14 > 500)
			{
				if (uParam0->f_22)
					func_95(&(uParam0->f_19));
			
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			break;
	
		case 13:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
		
			if (func_37(uParam0))
			{
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
			
				if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_35) || activeDynamicScenario != joaat("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && hLocal_4 == joaat("world_player_sleep_bedroll"))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					func_97(1259508039, 0, 0, 0, true, false, false);
					return;
				}
			}
		
			if (!func_100())
			{
				PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("TRANS_STOP_USE_ITEM"), 3f);
				func_27(uParam0, 5);
			}
			break;
	
		case 14:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
		
			if (func_37(uParam0))
			{
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
			
				if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_35) || activeDynamicScenario != joaat("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && hLocal_4 == joaat("world_player_sleep_bedroll"))
				{
					uParam0->f_12 = 1;
					return;
				}
				else
				{
					uParam0->f_14 = MISC::GET_GAME_TIMER();
				
					if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_96(false), joaat("document_player_journal"), false))
						INVENTORY::_INVENTORY_ENABLE_ITEM(func_96(false), joaat("document_player_journal"));
				
					func_97(joaat("document_player_journal"), 0, 0, 0, true, false, false);
					return;
				}
			}
		
			if (!func_98(joaat("doc_player_journal")) && !func_99() && MISC::GET_GAME_TIMER() - uParam0->f_14 > 1000)
			{
				PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("TRANS_STOP_USE_ITEM"), 3f);
				func_27(uParam0, 5);
			}
			break;
	
		case 15:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
			{
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
				func_20(uParam0);
				func_27(uParam0, 2);
				return;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
			break;
	
		case 16:
			if (func_37(uParam0))
			{
				if (!func_48())
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_17))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
			
				func_101(uParam0);
			}
			break;
	}

	return;
}

BOOL func_13() // Position - 0x18C7 Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1392040.f_6;
}

int func_14() // Position - 0x18D5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1572864;
}

int func_15() // Position - 0x18E1 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1572864.f_1;
}

void func_16(int iParam0) // Position - 0x18EF Hash - 0x29A8F290 ^0xB00AC4D8
{
	Global_1392040.f_6 = iParam0;
	return;
}

BOOL func_17() // Position - 0x18FF Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_18(var uParam0) // Position - 0x190D Hash - 0x5001E582 ^0x5001E582
{
	return func_102(*uParam0, 1);
}

void func_19(var uParam0) // Position - 0x191D Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_20(var uParam0) // Position - 0x1933 Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_43(&uParam0->[i], true, true);
	}

	return;
}

void func_21(int iParam0) // Position - 0x195B Hash - 0x42868A8 ^0x374C569E
{
	Global_1935436.f_18.f_3 = iParam0;
	return;
}

void func_22(var uParam0) // Position - 0x196D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_23(var uParam0) // Position - 0x1975 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_24(var uParam0) // Position - 0x197D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_25(var uParam0, float fParam1) // Position - 0x1985 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_103(uParam0, fParam1))
	{
		func_19(uParam0);
		return true;
	}

	return false;
}

void func_26(int iParam0) // Position - 0x19A3 Hash - 0x3410C012 ^0xB75662EB
{
	Global_1935496.f_29 = Global_1935496.f_29 || iParam0;
	return;
}

void func_27(var uParam0, int iParam1) // Position - 0x19BA Hash - 0xE5775DAF ^0x40767FB2
{
	uParam0->f_11 = iParam1;
	uParam0->f_12 = 1;
	return;
}

void func_28(var uParam0) // Position - 0x19CD Hash - 0x3E80FDB9 ^0xA36C516B
{
	if (hLocal_4 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	if (TASK::IS_PED_EXITING_SCENARIO(Global_35, true))
		if (!uParam0->f_28)
			if (func_25(&(uParam0->f_25), 2.5f))
				func_104(uParam0);
	else if (!uParam0->f_28 && !PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_3))
		func_63(uParam0);

	if (uParam0->f_28)
	{
		if (func_25(&(uParam0->f_25), 2.1f))
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, false, false, true);
			CAM::DETACH_CAM(uParam0->f_23);
		}
	}

	return;
}

BOOL func_29(var uParam0) // Position - 0x1A54 Hash - 0xA2242CCE ^0x7A45F551
{
	Ped pedUsingScenarioPoint;
	float num;
	Entity scenarioPointEntity;

	if (!func_40(128))
		if (func_105())
			return false;

	if (func_106(Global_1935630, 131072))
		return false;

	if (func_107() >= 1f)
		return false;

	if (func_40(1073741824) || func_40(16777216))
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return false;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		return false;

	pedUsingScenarioPoint = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);

	if (!ENTITY::IS_ENTITY_DEAD(pedUsingScenarioPoint))
		if (pedUsingScenarioPoint != Global_35)
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedUsingScenarioPoint, 1))
				return false;

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		return false;

	if (func_53(PLAYER::PLAYER_ID(), false, false, true))
		return false;

	if (!Global_1327590.f_19736)
		if (func_108(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) + { 0.5f, 0f, 0f }, 1f, 1, Global_35, 0, 0))
			return false;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
	{
		if (!ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_15, false))
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
			return false;
		}
	}

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) != iLocal_3)
		return false;

	if (TASK::_IS_SCENARIO_POINT_FLAG_SET(iLocal_3, 8))
		return false;

	num = func_109(Global_35, func_30(), true);

	if (num > hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && func_50() != 8 && func_51(Global_35) ? 1.5f : 1f)
		return false;

	if (!func_110(Global_35, func_30(), hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && func_51(Global_35) ? -0.25f : 0f) && num > func_111())
		return false;

	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 2f))
		return false;

	scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_3);

	if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(scenarioPointEntity))
			return false;
	
		if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(scenarioPointEntity))
			return false;
	
		if (FIRE::_0xA4454592DCF7C992(scenarioPointEntity))
			return false;
	}

	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), 1f) > 0)
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		return false;

	return true;
}

Vector3 func_30() // Position - 0x1CAA Hash - 0x8F6DEC4B ^0x72B2A4CD
{
	Vector3 vector;

	switch (hLocal_4)
	{
		case joaat("prop_player_sleep_tent_a_frame"):
			vector = { 0.29f, 1.5f, 1f };
			break;
	
		case joaat("PROP_PLAYER_SLEEP_BED"):
			if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED") && func_50() == 8 && func_51(Global_35))
				vector = { 0f, 0.15f, 0f };
			else
				vector = { 0f, 0.5f, 0f };
			break;
	
		default:
			vector = { 0f, 0f, 0.5f };
			break;
	}

	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), vector);
}

int func_31(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, BOOL bParam16) // Position - 0x1D3B Hash - 0x8FE94EEE ^0x148ED6A8
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
		if (func_113(i, 2))
		{
			if (func_114(uParam2, Global_1945188[i /*18*/].f_6, 0.01f, true) && hParam1 == Global_1945188[i /*18*/].f_4)
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
		func_115(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, bParam16);
		return num;
	}

	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1E19 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_38(iParam0))
		return;

	num = func_116(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam1, iParam2);
	return;
}

BOOL func_33() // Position - 0x1E64 Hash - 0x853011DA ^0x963EA2E0
{
	return func_117(32768);
}

void func_34() // Position - 0x1E74 Hash - 0xE79A34E6 ^0x3E1662EB
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_1327590.f_19622[i /*14*/].f_5 = 0;
	}

	return;
}

int func_35() // Position - 0x1E9C Hash - 0x79D9D06 ^0x79D9D06
{
	if (func_118(1))
		return 12;
	else if (func_118(2))
		return 18;

	return 6;
}

char* func_36() // Position - 0x1EC2 Hash - 0xC07027EE ^0x16502EE7
{
	switch (hLocal_4)
	{
		case joaat("prop_player_sleep_tent_a_frame"):
		case joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS"):
			return "CMP_SLP_TNT";
	
		case joaat("world_player_sleep_ground"):
		case joaat("world_player_sleep_bedroll"):
			if (func_119(67108864) && func_40(8388608))
				return "CMP_SLP_DIRT";
			else
				return "CMP_SLP_GND";
			break;
	
		case joaat("PROP_PLAYER_SLEEP_BED"):
			return "CMP_SLP_BED";
	}

	return "CMP_SLP_BED";
}

BOOL func_37(var uParam0) // Position - 0x1F35 Hash - 0x8116D8F1 ^0x6BC7C9EF
{
	if (uParam0->f_12)
	{
		uParam0->f_12 = 0;
		return true;
	}

	return false;
}

BOOL func_38(int iParam0) // Position - 0x1F4E Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

BOOL func_39(int iParam0, BOOL bParam1) // Position - 0x1F8D Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_38(iParam0))
		return false;

	num = func_116(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

BOOL func_40(BOOL bParam0) // Position - 0x1FE5 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1392040 && bParam0 != false;
}

void func_41(BOOL bParam0) // Position - 0x1FF6 Hash - 0xB79ED875 ^0x4D9B263C
{
	if (!func_120(bParam0))
		Global_1392040.f_1 = Global_1392040.f_1 || bParam0;

	return;
}

void func_42(BOOL bParam0) // Position - 0x2017 Hash - 0x210BBB81 ^0x210BBB81
{
	if (func_40(bParam0))
		Global_1392040 = Global_1392040 - Global_1392040 && bParam0;

	return;
}

void func_43(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2038 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_38(*uParam0))
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

	func_121(num);
	*uParam0 = 0;
	return;
}

int func_44(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0x208C Hash - 0xBB16F284 ^0x81C5F899
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_113(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_115(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

void func_45(var uParam0) // Position - 0x2115 Hash - 0x4C4E6711 ^0xEDE6E2DC
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	if (hLocal_4 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
		CAM::DESTROY_CAM(uParam0->f_23, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
		CAM::DESTROY_CAM(uParam0->f_24, false);

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 0.5f, -1.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 51.28f, false, 2);
	uParam0->f_24 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 61.28f, false, 2);

	if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_24, true);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_23, uParam0->f_24, 5000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}

	return;
}

void func_46(var uParam0, BOOL bParam1) // Position - 0x21EA Hash - 0xF9F99DE7 ^0x1D85DF66
{
	char* conditionalAnim;
	BOOL flag;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
	func_122(true);
	func_123(true);

	if (!TASK::_PED_IS_IN_SCENARIO_BASE(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	}

	if (func_17() == false)
	{
		uParam0->f_14 = MISC::GET_GAME_TIMER();
	
		if (bParam1)
		{
			if (hLocal_4 == joaat("prop_player_sleep_tent_a_frame"))
			{
				func_45(uParam0);
				conditionalAnim = "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR";
			}
		
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, conditionalAnim, 0, true, false, 0, false, -1082130432, false);
		}
	
		func_27(uParam0, 10);
	}
	else
	{
		func_124(uParam0);
		HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		flag = false;
	
		if (func_55(uParam0->[0], true))
		{
			flag = true;
			uParam0->f_13 = 6;
		}
		else if (func_55(uParam0->[1], true))
		{
			flag = true;
			uParam0->f_13 = 12;
		}
		else if (func_55(uParam0->[2], true))
		{
			flag = true;
			uParam0->f_13 = 18;
		}
		else if (func_55(uParam0->[3], true))
		{
			flag = true;
			uParam0->f_13 = 0;
		}
	
		if (flag)
		{
			uParam0->f_18 = -1;
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
		
			uParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(func_125(uParam0->f_13), 0, 0, false, true);
			uParam0->f_14 = MISC::GET_GAME_TIMER();
			func_20(uParam0);
		
			if (bParam1)
				if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
					TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1082130432, false);
		
			if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_17))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_17);
			
				if (func_126() && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_hat_action", false, true);
				else
					uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_no_hat_action", false, true);
			
				uParam0->f_17 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_17);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_17, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_15);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_15, "player", Global_35, 0);
			
				if (Global_1327590.f_19736)
				{
					if (hLocal_4 == joaat("PROP_PLAYER_SLEEP_BED"))
						if (!PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_3))
							TASK::TASK_USE_SCENARIO_POINT(Global_35, iLocal_3, 0, 0, true, false, 0, false, -1082130432, false);
				
					func_27(uParam0, 8);
				}
				else
				{
					func_27(uParam0, 9);
				}
			}
			else
			{
				func_27(uParam0, 9);
			}
		}
		else if (func_55(uParam0->[5], true) || func_53(PLAYER::PLAYER_ID(), true, false, true) || PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			uParam0->f_18 = -1;
			func_64(4);
			func_20(uParam0);
		
			if (uParam0->f_11 == 7)
				func_27(uParam0, 5);
			else
				func_27(uParam0, 2);
		}
	}

	return;
}

BOOL func_47(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x24D2 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

BOOL func_48() // Position - 0x252B Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

void func_49(var uParam0) // Position - 0x253B Hash - 0xF4F64792 ^0xFBCD0CB9
{
	if (func_17() != false && hLocal_4 != joaat("prop_player_prpty_save_game"))
	{
		uParam0->[4] = func_127("SLEEP", joaat("INPUT_CONTEXT_Y"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
		func_32(uParam0->[4], 1057677739, 0, true);
	
		if (func_40(8388608) && !func_120(1024))
		{
			uParam0->[6] = func_127("CAMP_RECIPE", joaat("INPUT_CONTEXT_X"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			func_32(uParam0->[6], 1057677739, 0, true);
		
			if (func_128())
			{
				uParam0->[9] = func_127("CAMP_FT_PROMPT", joaat("INPUT_CONTEXT_A"), Global_35, 1, 0, false, 0, 2, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_32(uParam0->[9], 1057677739, 0, true);
			}
		}
	
		uParam0->[8] = func_127("LEAVE", joaat("INPUT_CONTEXT_B"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
		func_32(uParam0->[8], 1057677739, 0, true);
	}

	return;
}

eStackSize func_50() // Position - 0x268A Hash - 0xFD016E51 ^0xFD016E51
{
	switch (func_17())
	{
		case -1:
			return Global_40.f_4283;
	}

	return -1;
}

BOOL func_51(Ped pedParam0) // Position - 0x26AF Hash - 0x385BDFDB ^0x23207B3C
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	return func_129(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
}

BOOL func_52(int iParam0, BOOL bParam1) // Position - 0x26DE Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_38(iParam0))
		return false;

	return !func_113(iParam0, 4);
}

BOOL func_53(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2703 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_130(bParam1, bParam2, bParam3);

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

void func_54(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2838 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_38(iParam0))
		return;

	num = func_116(iParam0);

	if (bParam1)
	{
		func_131(iParam0, 4);
		func_132(num, true);
		func_133(num, true);
	}
	else
	{
		func_134(iParam0, 4);
		func_133(num, false);
	}

	return;
}

BOOL func_55(int iParam0, BOOL bParam1) // Position - 0x2887 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_38(iParam0))
		return false;

	num = func_116(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_56() // Position - 0x28BA Hash - 0xB6DD6CAB ^0xF578C0BC
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("fast_travel_menu")) && func_61() != 0)
		func_60(&Global_43907, 16);

	return;
}

void func_57(BOOL bParam0) // Position - 0x28E2 Hash - 0xA895CE6F ^0xA895CE6F
{
	if (!func_40(bParam0))
		Global_1392040 = Global_1392040 || bParam0;

	return;
}

BOOL func_58(int iParam0, BOOL bParam1) // Position - 0x28FF Hash - 0xAAB142C4 ^0x152C664A
{
	int num;

	if (bParam1 && !func_38(iParam0))
		return false;

	num = func_116(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1945188[num /*18*/].f_3);
}

BOOL func_59() // Position - 0x2932 Hash - 0x778C6497 ^0xE39208C9
{
	return !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("player_menu")) && !Global_1898068.f_4 && !func_135() && UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(joaat("fast_travel_menu"));
}

void func_60(var uParam0, int iParam1) // Position - 0x2968 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_61() // Position - 0x2979 Hash - 0x21D64237 ^0x21D64237
{
	return Global_43908;
}

void func_62(var uParam0) // Position - 0x2984 Hash - 0xB8E593B3 ^0xFCBA5AF7
{
	if (hLocal_4 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	func_95(&(uParam0->f_25));
	uParam0->f_28 = 0;
	return;
}

void func_63(var uParam0) // Position - 0x29A6 Hash - 0xAC5825F1 ^0xFB6B4CE8
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
		CAM::DESTROY_CAM(uParam0->f_24, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
		CAM::DESTROY_CAM(uParam0->f_23, false);

	return;
}

void func_64(BOOL bParam0) // Position - 0x29D6 Hash - 0x81E75DDF ^0x542F32B5
{
	if (func_120(bParam0))
		Global_1392040.f_1 = Global_1392040.f_1 - Global_1392040.f_1 && bParam0;

	return;
}

eStackSize func_65() // Position - 0x29FD Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_66(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x2A09 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_136(*essParam0);
	i = func_137(*essParam0);
	num2 = func_138(*essParam0);
	j = func_139(*essParam0);
	k = func_140(*essParam0);
	l = func_141(*essParam0);

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

	for (m = func_142(i, num); num2 > m; m = func_142(i, num))
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

	func_143(essParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_67(eStackSize essParam0) // Position - 0x2B91 Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1899515 > essParam0;
}

eStackSize func_68() // Position - 0x2BA0 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

int func_69(eStackSize essParam0, int iParam1) // Position - 0x2BAE Hash - 0xC432F557 ^0xC432F557
{
	switch (essParam0)
	{
		case 4:
			switch (iParam1)
			{
				case 12:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 6:
					return 7;
			
				default:
					break;
			}
			break;
	}

	return iParam1;
}

int func_70(eStackSize essParam0, int iParam1) // Position - 0x2BF7 Hash - 0x641D4F83 ^0x641D4F83
{
	switch (essParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 6:
					return 10;
			
				case 18:
					return 45;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 6:
					return 20;
			
				case 18:
					return 30;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 30;
			
				case 6:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 6:
					return 20;
			
				case 12:
					return 50;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 18:
					return 20;
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 6:
					return 20;
			
				case 12:
					return 15;
			
				case 18:
					return 40;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_71(int iParam0, int iParam1) // Position - 0x2CF2 Hash - 0x7E0FBB6F ^0x7E0FBB6F
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
		
			default:
			
		}
	}

	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
	
		case 1:
			return Global_40.f_4283.f_316;
	
		case 2:
			return Global_40.f_4283.f_317;
	
		case 3:
			return Global_40.f_4283.f_318;
	
		case 4:
			return Global_40.f_4283.f_319;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
	
		case 12:
			return Global_40.f_4283.f_315;
	
		case 13:
			return Global_40.f_4283.f_314;
	
		case 14:
			return Global_40.f_4283.f_322;
	
		default:
		
	}

	return 1;
}

float func_72(float fParam0, int iParam1) // Position - 0x2DE9 Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_73(int iParam0, float fParam1) // Position - 0x2E3B Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_144(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_145(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_146(-1);
			func_147(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_145(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_148(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_145(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_149(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_150(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_150(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_150(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_74(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2FCE Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_151())
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
		num = func_152(Global_1898164.f_1[0 /*5*/]);
	
		if (func_153(num) && func_154(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_155(Global_1898164.f_1[0 /*5*/]))
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

void func_75() // Position - 0x31D2 Hash - 0xA4A3365D ^0xA6A3EAED
{
	int i;
	Player playerIndex;
	Ped ped1;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_156(i, true, false))
		{
			if (func_157(i))
			{
				ped1 = func_158(i);
			
				if (!ENTITY::IS_ENTITY_DEAD(ped1))
					PED::_0x97B06669AC569003(ped1, playerIndex);
			}
		}
	}

	return;
}

int func_76(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x3221 Hash - 0xC759219C ^0xC759219C
{
	int num;
	eStackSize i;

	num = 1;

	for (i = 0; i < 27; i = i + 1)
	{
		if (!func_159(i, bParam0, iParam1, bParam2))
			num = 0;
	}

	return num;
}

void func_77() // Position - 0x3254 Hash - 0x8C5749AA ^0x8C5749AA
{
	eStackSize i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_160(i) && func_161(i, true))
			func_162(i);
	}

	return;
}

void func_78(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x328A Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_163() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_164(num) && !func_165(num, iParam2) && !bParam3 || !func_166(num) && !bParam4 || !func_167(num))
			if (num != iParam0)
				func_168(i);
	}

	return;
}

void func_79() // Position - 0x3318 Hash - 0x7E7A89 ^0x7E7A89
{
	int i;

	for (i = 0; i < Global_1327590.f_19547; i = i + 1)
	{
		if (Global_1327590.f_19547[i /*5*/] != -1)
			func_169(i);
	}

	return;
}

BOOL func_80() // Position - 0x334D Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_170() != -1;
}

var func_81(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3368 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_82(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5) // Position - 0x337F Hash - 0xBE6CC08C ^0x4B31B8AF
{
	int num;

	num = 1048576;

	if (bParam4)
		num = num | 131072;

	if (bParam5)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

void func_83(int iParam0, BOOL bParam1) // Position - 0x33B5 Hash - 0xF2378DE2 ^0x23E69665
{
	float amount;

	amount = BUILTIN::TO_FLOAT(iParam0);

	if (Global_1347477.f_4 + 60000 > MISC::GET_GAME_TIMER())
		amount = BUILTIN::TO_FLOAT(iParam0) - Global_1347477.f_5;

	if (amount > 0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), amount, 0, 0, 0);
		Global_1347477.f_5 = BUILTIN::TO_FLOAT(iParam0);
		func_171(2, 7000);
	}

	Global_1347477.f_4 = MISC::GET_GAME_TIMER();
	func_147(false);

	if (bParam1)
		func_172(100f);

	return;
}

void func_84() // Position - 0x342B Hash - 0x7734703E ^0x7734703E
{
	if (func_173(0))
	{
		func_174(0, 0, 100);
		func_174(0, 1, 100);
	}

	if (func_173(1))
	{
		func_174(1, 0, 100);
		func_174(1, 1, 100);
	}

	return;
}

void func_85(var uParam0, var uParam1, var uParam2) // Position - 0x3463 Hash - 0xB20C33B1 ^0x8BCEF44A
{
	Global_40.f_9.f_7 = { uParam0 };
	return;
}

void func_86(BOOL bParam0, int iParam1) // Position - 0x3478 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_175(&Global_0, 8);

	if (!func_176() || func_17() != -1)
		return;

	func_175(&Global_0, 1);
	return;
}

void func_87(float fParam0) // Position - 0x34BE Hash - 0xC37C08B6 ^0x3A4969C
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

void func_88(int iParam0, int iParam1) // Position - 0x353A Hash - 0x2D5EA878 ^0x4B3C84DD
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(iParam1, 1065353216);
	return;
}

char* func_89(eStackSize essParam0, int iParam1) // Position - 0x3558 Hash - 0x87C59396 ^0x3C966C7F
{
	switch (essParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_colter_night";
			
				case 6:
					return "wakeUp_colter_morning";
			
				case 12:
					return "wakeUp_colter_afternoon";
			
				case 18:
					return "wakeUp_colter_evening";
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_horseshoe_night";
			
				case 6:
					return "wakeUp_horseshoe_morning";
			
				case 12:
					return "wakeUp_horseshoe_afternoon";
			
				case 18:
					return "wakeUp_horseshoe_evening";
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_clemensPoint_night";
			
				case 6:
					return "wakeUp_clemensPoint_morning";
			
				case 12:
					return "wakeUp_clemensPoint_afternoon";
			
				case 18:
					return "wakeUp_clemensPoint_evening";
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_shadyBelle_night";
			
				case 6:
					return "wakeUp_shadyBelle_morning";
			
				case 12:
					return "wakeUp_shadyBelle_afternoon";
			
				case 18:
					return "wakeUp_shadyBelle_evening";
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_guarma_night";
			
				case 6:
					return "wakeUp_guarma_morning";
			
				case 12:
					return "wakeUp_guarma_afternoon";
			
				case 18:
					return "wakeUp_guarma_evening";
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_lakay_night";
			
				case 6:
					return "wakeUp_lakay_morning";
			
				case 12:
					return "wakeUp_lakay_afternoon";
			
				case 18:
					return "wakeUp_lakay_evening";
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_beaverHollow_night";
			
				case 6:
					return "wakeUp_beaverHollow_morning";
			
				case 12:
					return "wakeUp_beaverHollow_afternoon";
			
				case 18:
					return "wakeUp_beaverHollow_evening";
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return "wakeUp_beechersHopeHouse_night";
			
				case 6:
					return "wakeUp_beechersHopeHouse_morning";
			
				case 12:
					return "wakeUp_beechersHopeHouse_afternoon";
			
				case 18:
					return "wakeUp_beechersHopeHouse_evening";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_90(int iParam0, BOOL bParam1) // Position - 0x3794 Hash - 0x9D46840B ^0xDAAD5146
{
	int value;
	int healthAmount;

	value = 50 * iParam0;
	healthAmount = value + ENTITY::GET_ENTITY_HEALTH(Global_35);

	if (bParam1 && value < 0)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(value), 0, 0);
	else if (iParam0 <= 0 || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_91(int iParam0) // Position - 0x3805 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

void func_92(int iParam0) // Position - 0x3820 Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_177(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_178(true);

	return;
}

void func_93(BOOL bParam0) // Position - 0x388E Hash - 0x74ADD5BD ^0x6FC7AC9D
{
	eStackSize stackSize;
	eStackSize i;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						stackSize = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
					
						if (func_179(stackSize))
							if (func_180(stackSize))
								func_181(stackSize, bParam0);
						break;
				}
			}
		}
	}

	return;
}

void func_94() // Position - 0x3939 Hash - 0xC8331A29 ^0x6A812781
{
	int i;

	i = 0;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (func_153(Global_40.f_450[i]))
			if (Global_1347702[Global_40.f_450[i] /*49*/].f_14 & 2 != 0)
				func_182(Global_40.f_450[i], true, 0);
	}

	return;
}

void func_95(var uParam0) // Position - 0x3999 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_183(uParam0, 0f);
	return;
}

int func_96(BOOL bParam0) // Position - 0x39A8 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_17() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_97(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x39E9 Hash - 0x21D8E47F ^0xF74F2523
{
	BOOL flag;
	var unk10;
	Hash scriptHash;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	BOOL flag3;
	int num5;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;

	if (func_184())
	{
		Global_1935689.f_9441 = hParam0;
		func_185(hParam0, 1, -142743235, 0, false);
		return 0;
	}

	if (func_186())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_187(hParam0, 0);
		func_185(func_188(), 1, -142743235, 0, false);
		return 0;
	}

	if (!func_189(hParam0, bParam4))
		return 0;

	if (func_190(hParam0))
		return 0;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return 0;

	flag2 = false;
	flag3 = true;
	num5 = 1;
	flag4 = true;
	flag.f_4 = iParam3;
	flag.f_5 = 1;

	if (func_191(hParam0, -2081717885))
		func_192(hParam0, unk10, flag, num3, flag3, num5);
	else if (func_191(hParam0, -1909684001))
		func_193(hParam0, unk10, flag, flag3, num5);
	else if (func_191(hParam0, 587975446))
		func_194(hParam0, unk10);
	else if (func_191(hParam0, 566155764))
		if (!func_195(hParam0))
			return 0;

	if (func_196(hParam0, bParam5, bParam6))
	{
		Global_1911772 = hParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_191(hParam0, -1227898937))
	{
		flag.f_2 = hParam0;
		unk10 = { flag };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_197(unk10, 1);
		num5 = 0;
		flag3 = false;
	}
	else if (func_191(hParam0, -1472964441) || func_191(hParam0, -228153877) || func_191(hParam0, 566155764))
	{
	}
	else if (func_191(hParam0, 1919582297))
	{
		if (func_48() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true) || !PED::IS_PED_ON_FOOT(Global_35))
			return 0;
	
		switch (hParam0)
		{
			case joaat("consumable_predator_bait"):
			case joaat("consumable_potent_predator_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_predator", 32);
				break;
		
			case joaat("consumable_herbivore_bait"):
			case joaat("consumable_potent_herbivore_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_herbivore", 32);
				break;
		}
	
		flag.f_1 = hParam0;
		flag.f_3 = iParam1;
		unk10 = { flag };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_197(unk10, 0);
		flag3 = false;
	}
	else if (func_198(hParam0) == joaat("emote"))
	{
		flag.f_3 = 0;
		flag.f_1 = hParam0;
		flag.f_2 = 0;
		flag = func_199(Global_1058888.f_49051.f_4.f_31);
		unk10 = { flag };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_197(unk10, 0);
		num5 = 1;
	}
	else if (func_198(hParam0) == joaat("CLOTHING"))
	{
		if (func_200(hParam0) == -999503751)
		{
			if (func_17() != -1)
				return num5;
		
			if (!func_201(hParam0))
			{
				func_202("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
				return num5;
			}
		
			flag5 = func_203(7, hParam0);
			flag6 = func_203(1, hParam0);
		
			if (flag6 && !flag5)
			{
				func_202("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, true);
				return num5;
			}
		
			if (!func_204(7))
			{
				func_202("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, true);
				return num5;
			}
		
			if (!flag5)
			{
				if (func_206(Global_35, func_205(7), false))
					func_202("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
				else
					func_202("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
			
				return num5;
			}
		
			num4 = func_207(hParam0);
		
			if (num4 == -1)
				func_208(20, hParam0, 8, 0, false);
			else
				func_208(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (func_200(hParam0))
			{
				case -2061583405:
					func_210(hParam0);
					return 1;
			
				case -1719060085:
					if (hParam0 == Global_1946054.f_1497.f_1[23 /*3*/])
					{
						func_211(Global_35, 260271636, 0, -358215195, true, true, true, false, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						func_212(hParam0, false);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						func_212(hParam0, true);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_209(hParam0, false);
					return num5;
			}
		
			func_211(Global_35, hParam0, 0, -358215195, true, true, true, false, false, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				num = func_226(func_170());
				num2 = func_227();
			
				if (func_228(num))
					if (num == num2 && !func_229())
						flag4 = false;
			
				if (flag4)
					func_202("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, true);
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_232(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (!func_215(Global_1392040.f_1, 1) || func_215(Global_1392040.f_1, 512))
				{
					if (func_17() == -1)
					{
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
						{
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_camp", 32);
							unk10.f_14 = 6096;
						
							if (func_216(120))
							{
								flag2 = flag2 | 8;
								flag.f_6 = { -1407.4073f, 1508.3297f, 239f };
								flag.f_6.f_3 = 260f;
							}
							else if (func_217(15))
							{
								flag2 = flag2 | 16;
								flag.f_6 = { 1775.9026f, 1255.6472f, 189.6069f };
								flag.f_6.f_3 = 90f;
							}
							else if (!func_201(hParam0) || !func_219(Global_35, func_205(7), func_218(7), true) || func_220() != 0 && !func_219(Global_35, Global_1900383.f_393, 5f, true))
							{
								flag2 = flag2 | 128 | 32;
							}
						
							if (func_215(flag2, 128) && Global_1357522.f_10[1])
								Global_1357522.f_10[1] = false;
							else if (!func_215(flag2, 128) && Global_1357522.f_10[0])
								Global_1357522.f_10[0] = false;
						
							flag = flag2;
							unk10 = { flag };
							unk10.f_15 = 1;
							func_197(unk10, 2);
						}
					}
					else if (func_201(joaat("kit_camp")))
					{
						if (func_221(1))
						{
							func_222(2);
						}
						else if (func_223(1))
						{
							func_202("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
						}
						else
						{
							if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								func_202("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
							else
								func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						
							func_224(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
					}
					else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
					{
						func_202("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						func_224(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
					else
					{
						func_202("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
					}
				}
				else
				{
					Global_1392040.f_1 = Global_1392040.f_1 | 2;
					num5 = 1;
				}
				break;
		
			case joaat("weapon_kit_camera"):
				if (func_225(Global_35, true, 0, false) != joaat("weapon_kit_camera"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
			
				return 1;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_231(497, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_17() != -1)
					break;
			
				if (!func_201(hParam0))
				{
					func_202("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag5 = func_203(7, hParam0);
				flag6 = func_203(1, hParam0);
			
				if (flag6 && !flag5)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36559))
						MAP::REMOVE_BLIP(&Global_36559);
				
					Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_202(MISC::VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_204(7))
				{
					func_202("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag5)
				{
					if (func_206(Global_35, func_205(7), false))
					{
						func_202("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
							MAP::REMOVE_BLIP(&Global_36559);
					
						Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_202(MISC::VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, true);
					}
				
					break;
				}
			
				scriptHash = joaat("player_wardrobe");
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
				{
				}
				else
				{
					flag.f_1 = hParam0;
					flag.f_2 = 51499045;
					unk10 = { flag };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_wardrobe", 32);
					unk10.f_14 = 1024;
					unk10.f_15 = 1;
					func_197(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag3 = false;
				return 1;
		
			case joaat("weapon_kit_binoculars"):
				if (func_225(Global_35, true, 0, false) != joaat("weapon_kit_binoculars"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
			
				return 1;
		
			case -7337301:
				flag.f_2 = -7337301;
				unk10 = { flag };
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "native_american_journal", 32);
				unk10.f_14 = 512;
				unk10.f_15 = 1;
				func_197(unk10, 0);
				num5 = 0;
				flag3 = false;
				break;
		
			case joaat("provision_beaus_gift_1"):
				func_230(hParam0, 1, false, 562618531, false);
				func_233(joaat("provision_beaus_gift_2"), 1, false, 0, 0, 752097756, 0, 0, 0, 0);
				break;
		
			case 1259508039:
				func_213(true);
				break;
		
			case joaat("kit_lightning_conductor"):
				func_230(hParam0, 1, false, 562618531, false);
				break;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_214();
				break;
		
			default:
				num5 = 0;
				break;
		}
	}

	if (flag3)
		HUD::_0xBFFF81E12A745A5F();

	return num5;
}

BOOL func_98(Hash hParam0) // Position - 0x43E4 Hash - 0xDF6FE81 ^0xAC897192
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
			return true;
	}

	return false;
}

BOOL func_99() // Position - 0x441E Hash - 0x35A4808D ^0x7E542F56
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_player_journal")) > 0;
}

BOOL func_100() // Position - 0x4431 Hash - 0xC24BA3AE ^0xF178BF44
{
	return Global_1935689.f_1 || Global_1935689 == 1;
}

void func_101(var uParam0) // Position - 0x444B Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_43(&uParam0->[i], true, true);
	}

	return;
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x4473 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_103(var uParam0, float fParam1) // Position - 0x4482 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_18(uParam0))
		return false;

	if (func_234(uParam0) > fParam1)
		return true;

	return false;
}

void func_104(var uParam0) // Position - 0x44A9 Hash - 0x4C4E6711 ^0xEDE6E2DC
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 vector;

	if (hLocal_4 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
		CAM::DESTROY_CAM(uParam0->f_23, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_24))
		CAM::DESTROY_CAM(uParam0->f_24, false);

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true), 2f, 3.25f, 0.75f) };
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) + 125f, 51.28f, false, 2);
	vector = { 1.1081f, 1.7384f, 0.4631f };
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_23, Global_35, vector, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_23, Global_35, -0.7722f, -0.593f, 0.2919f, true);

	if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_23, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_88(130.648f, 1.3841f);
	}

	func_95(&(uParam0->f_25));
	uParam0->f_28 = 1;
	return;
}

BOOL func_105() // Position - 0x45A7 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_106(int iParam0, int iParam1) // Position - 0x45B5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_107() // Position - 0x45C4 Hash - 0x4228A1C2 ^0x5FAFE78F
{
	return Global_1935436.f_9;
}

BOOL func_108(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, Ped pedParam5, Ped pedParam6, int iParam7) // Position - 0x45D2 Hash - 0x78512CEE ^0xE31F8454
{
	int entitiesNearPoint;
	int i;
	ScrHandle indexedItemInItemset;
	Ped entityFromItem;

	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Global_43617))
		Global_43617 = ITEMSET::CREATE_ITEMSET(true);

	ITEMSET::_CLEAR_ITEMSET(Global_43617);
	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam0, fParam3, Global_43617, iParam4);

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_43617);
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
	
		if (iParam7 == 1 && ENTITY::IS_ENTITY_DEAD(entityFromItem))
		{
		}
		else if (pedParam5 != entityFromItem && pedParam6 != entityFromItem)
		{
			return true;
		}
	}

	return false;
}

float func_109(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x4657 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_235(entityCoords, vParam1);
}

BOOL func_110(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x46A7 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

float func_111() // Position - 0x46E8 Hash - 0xF32F69D3 ^0xF32F69D3
{
	switch (hLocal_4)
	{
		case joaat("world_player_sleep_bedroll"):
			return 0.5625f;
	}

	return 0.25f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x470E Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_113(int iParam0, int iParam1) // Position - 0x4738 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_114(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x4759 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_115(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x47AE Hash - 0x1B501888 ^0x6546232B
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
	func_132(iParam0, true);
	func_133(iParam0, true);
	func_134(iParam0, 128);
	return;
}

int func_116(int iParam0) // Position - 0x4A54 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_117(int iParam0) // Position - 0x4A5E Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_17())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

BOOL func_118(int iParam0) // Position - 0x4A89 Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (iParam0 == -1)
		return true;

	if (iParam0 == 0)
		return false;

	num = func_139(func_65());

	if (func_215(iParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_215(iParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_215(iParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_215(iParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_215(iParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_215(iParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_215(iParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_215(iParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_215(iParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_215(iParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_215(iParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_215(iParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_215(iParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_215(iParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_215(iParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_215(iParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_215(iParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

BOOL func_119(int iParam0) // Position - 0x4CDD Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_9419 && iParam0 != false;
}

BOOL func_120(BOOL bParam0) // Position - 0x4CF0 Hash - 0xC67CC87B ^0x88ADC254
{
	return Global_1392040.f_1 && bParam0 != false;
}

void func_121(int iParam0) // Position - 0x4D03 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_236(iParam0))
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

void func_122(BOOL bParam0) // Position - 0x4DB6 Hash - 0x4549763A ^0xCE7E8317
{
	if (bParam0)
		Global_1913814.f_209[1] = true;

	Global_1913814.f_209[0] = true;
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

void func_123(BOOL bParam0) // Position - 0x4DE2 Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_237(4);

	func_237(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

void func_124(var uParam0) // Position - 0x4E04 Hash - 0xB828014C ^0x15722776
{
	int clockHours;
	BOOL flag;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), false);
	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (uParam0->f_18 != clockHours)
	{
		if (uParam0->f_18 == -1)
			flag = true;
	
		uParam0->f_18 = clockHours;
	
		if (!func_238(uParam0) && flag)
			func_202("CMP_SLP_SOON", 10000, 0, 0, 0, true);
	}

	return;
}

const char* func_125(var uParam0) // Position - 0x4E58 Hash - 0xDB34E427 ^0x8EF4B969
{
	char* str;
	const char* str2;
	const char* str3;

	str = "script@respawn@sky@SkyTL_";
	str2 = func_242(func_241(func_239(uParam0), func_240(), true, 63));
	str3 = func_242(func_241(str, str2, true, 63));
	return str3;
}

BOOL func_126() // Position - 0x4E90 Hash - 0xECB43815 ^0x11A0D70C
{
	Hash hash;

	if (!func_243(&Global_35))
		return false;

	hash = func_244(1108822547);

	switch (hash)
	{
		case joaat("clothing_hl_player_hat_054_1"):
		case joaat("clothing_hl_player_hat_002_2"):
		case joaat("clothing_item_sp_collectable_hat_mr1_008"):
		case joaat("clothing_hl_player_hat_000_001_1"):
		case joaat("clothing_hl_player_hat_000_011_1"):
		case joaat("clothing_hl_player_hat_004_1"):
		case -1669863795:
		case joaat("clothing_hl_player_hat_028_1"):
		case joaat("clothing_item_sp_valsheriff_hat_000"):
		case joaat("clothing_hl_player_hat_038_1"):
		case joaat("clothing_item_hat_pzero_000"):
		case joaat("clothing_sp_civil_war_hat_000_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_086"):
		case joaat("CLOTHING_HL_PLAYER_HAT_000_000_1"):
		case joaat("clothing_hl_player_hat_008_1"):
		case joaat("clothing_hl_player_hat_048_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_048"):
		case joaat("clothing_hl_player_hat_063_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_063_alt01"):
		case joaat("clothing_hl_player_hat_015_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_068"):
		case -1110126435:
		case joaat("clothing_sp_scarecrow_01_hat_000_1"):
		case -1012673867:
		case joaat("clothing_item_sp_collectable_hat_mr1_055"):
		case joaat("clothing_hl_player_hat_061_1"):
		case joaat("clothing_hl_player_hat_033_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_100"):
		case joaat("clothing_hl_player_hat_067_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_002_alt02"):
		case joaat("clothing_item_sp_collectable_hat_mr1_007_alt02"):
		case joaat("clothing_item_sp_collectable_hat_mr1_052"):
		case joaat("clothing_sp_chinese_labor_hat_000_1"):
		case joaat("clothing_p3_player_three_ms1_hat_000_000"):
		case -733535491:
		case joaat("clothing_p3_player_three_ms1_hat_001_000"):
		case joaat("clothing_hl_player_hat_066_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_006_alt02"):
		case joaat("clothing_item_sp_collectable_hat_mr1_017_alt02"):
		case joaat("clothing_hl_player_hat_012_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_045"):
		case joaat("clothing_hl_player_hat_070_1"):
		case joaat("clothing_hl_player_hat_064_1"):
		case joaat("clothing_hl_player_hat_041_1"):
		case joaat("clothing_hl_player_hat_010_1"):
		case joaat("clothing_sp_dead_miner_hat_000_1"):
		case joaat("clothing_hl_player_hat_034_1"):
		case joaat("clothing_hl_player_hat_030_1"):
		case -318532162:
		case joaat("clothing_item_sp_collectable_hat_mr1_047_alt02"):
		case joaat("clothing_hl_player_hat_003_1"):
		case joaat("clothing_hl_player_hat_045_1"):
		case joaat("clothing_hl_player_hat_069_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_005"):
		case joaat("clothing_item_sp_collectable_hat_mr1_093"):
		case joaat("clothing_item_sp_collectable_hat_mr1_020"):
		case joaat("clothing_hl_player_hat_046_1"):
		case joaat("clothing_hl_player_hat_073_1"):
		case joaat("clothing_hl_player_hat_053_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_004"):
		case joaat("clothing_item_sp_collectable_hat_mr1_079"):
		case joaat("clothing_item_sp_exoticcollector_hat_000"):
		case joaat("clothing_item_sp_collectable_hat_mr1_041"):
		case joaat("clothing_hl_player_hat_072_1"):
		case joaat("clothing_hl_player_hat_065_1"):
		case joaat("clothing_hl_player_hat_029_1"):
		case joaat("clothing_hl_player_hat_032_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_069"):
		case 682123523:
		case joaat("clothing_hl_player_hat_016_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_013"):
		case joaat("clothing_hl_player_hat_031_1"):
		case 833070940:
		case joaat("clothing_item_sp_collectable_hat_mr1_012"):
		case joaat("clothing_item_sp_collectable_hat_mr1_025"):
		case joaat("clothing_hl_player_hat_007_1"):
		case joaat("clothing_hl_player_hat_027_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_015"):
		case joaat("clothing_item_sp_collectable_hat_mr1_060"):
		case joaat("clothing_item_sp_collectable_hat_mr1_075"):
		case joaat("clothing_item_sp_collectable_hat_mr1_133"):
		case joaat("clothing_hl_player_hat_011_1"):
		case joaat("clothing_hl_player_hat_071_1"):
		case joaat("clothing_item_sp_fishcollector_hat_000"):
		case joaat("clothing_hl_player_hat_013_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_089"):
		case joaat("clothing_hl_player_hat_068_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_102"):
		case 1725570548:
		case 1727487721:
		case joaat("clothing_hl_player_hat_047_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_050"):
		case joaat("clothing_hl_player_hat_050_1"):
		case joaat("clothing_item_sp_collectable_hat_mr1_000"):
		case 2036219956:
		case joaat("clothing_item_sp_collectable_hat_mr1_051"):
		case joaat("clothing_hl_player_hat_009_1"):
		case 2067040192:
		case joaat("clothing_item_sp_collectable_hat_mr1_016"):
		case joaat("clothing_hl_player_hat_062_1"):
			return true;
	
		default:
		
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_127(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x5117 Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_113(i, 2))
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
		func_115(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

BOOL func_128() // Position - 0x51EE Hash - 0xAE24038 ^0x2B43CD5A
{
	var unk;

	if (ENTITY::IS_ENTITY_DEAD(func_205(7)) || TASK::IS_PED_IN_WRITHE(func_205(7)) || func_245(Global_36, ENTITY::GET_ENTITY_COORDS(func_205(7), true, false)) > func_218(7) && ENTITY::IS_ENTITY_DEAD(func_205(1)) || TASK::IS_PED_IN_WRITHE(func_205(1)) || func_245(Global_36, ENTITY::GET_ENTITY_COORDS(func_205(1), true, false)) > func_218(1))
		return false;

	if (!func_246() && !func_247(68))
		return false;

	if (func_74(0, false, true))
		if (!func_217(51))
			return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		return false;

	unk = 40;

	if (!func_248(&unk, true, true))
		return false;

	return true;
}

BOOL func_129(var uParam0, var uParam1, var uParam2) // Position - 0x52CB Hash - 0xB9CFB8A6 ^0xB9CFB8A6
{
	eStackSize stackSize;

	stackSize = func_249(uParam0, true);

	if (stackSize == func_250())
		return 1;

	return 0;
}

BOOL func_130(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x52EC Hash - 0xC9655EC3 ^0x88C9AFE1
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

void func_131(int iParam0, int iParam1) // Position - 0x538A Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_132(int iParam0, BOOL bParam1) // Position - 0x53BD Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_113(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_133(int iParam0, BOOL bParam1) // Position - 0x5415 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_134(int iParam0, int iParam1) // Position - 0x543E Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_135() // Position - 0x5466 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

int func_136(eStackSize essParam0) // Position - 0x5472 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_137(eStackSize essParam0) // Position - 0x5497 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_138(eStackSize essParam0) // Position - 0x54AA Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_139(eStackSize essParam0) // Position - 0x54BD Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_140(eStackSize essParam0) // Position - 0x54D0 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_141(eStackSize essParam0) // Position - 0x54E2 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_142(int iParam0, int iParam1) // Position - 0x54F4 Hash - 0x893AC59E ^0x893AC59E
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

void func_143(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x558E Hash - 0xA65AB937 ^0xA65AB937
{
	func_252(uParam0, iParam6);
	func_253(uParam0, iParam5);
	func_254(uParam0, iParam4);
	func_255(uParam0, iParam3);
	func_256(uParam0, iParam2);
	func_257(uParam0, iParam1);
	return;
}

BOOL func_144(int iParam0) // Position - 0x55C6 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_145(int iParam0) // Position - 0x55F5 Hash - 0x21CE226B ^0x56207FD7
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

void func_146(int iParam0) // Position - 0x5630 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_258(2);
	func_259(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_147(BOOL bParam0) // Position - 0x566D Hash - 0x9114E741 ^0x8984E174
{
	if (func_17() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_231(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_231(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_260(1, bParam0, true);
	func_261();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_148(int iParam0) // Position - 0x56DB Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_262(2);
	func_263(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_149(int iParam0) // Position - 0x5717 Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_264(2);
	func_265(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_150(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5754 Hash - 0x5C29635D ^0x5C29635D
{
	func_266(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

BOOL func_151() // Position - 0x576E Hash - 0x2C13EB06 ^0x38F12C8A
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

eStackSize func_152(int iParam0) // Position - 0x57C1 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_155(iParam0))
		return -1;

	return func_268(func_267(iParam0));
}

BOOL func_153(eStackSize essParam0) // Position - 0x57E1 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

BOOL func_154(int iParam0, int iParam1) // Position - 0x57F7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_155(int iParam0) // Position - 0x5806 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_156(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5839 Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_269(essParam0))
		return false;

	if (func_270(essParam0, 32, true))
		return false;

	if (!func_270(essParam0, 2, true))
		return false;

	if (!func_270(essParam0, 4, true))
		return false;

	if (func_271(essParam0, 33, true))
		return false;

	if (func_272(essParam0))
		return false;

	if (func_273(essParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == essParam0)
			return false;

	return true;
}

BOOL func_157(eStackSize essParam0) // Position - 0x58C6 Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_160(essParam0))
		if (func_274(Global_1360165[essParam0 /*1157*/], 0))
			return true;

	return false;
}

Ped func_158(int iParam0) // Position - 0x58ED Hash - 0xFBADD85B ^0xFBADD85B
{
	if (func_160(iParam0))
		return Global_1360165[iParam0 /*1157*/];

	return 0;
}

BOOL func_159(eStackSize essParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x590B Hash - 0xCE0148F8 ^0x79CFF653
{
	PersChar persChar;

	if (func_156(essParam0, true, false))
	{
		if (func_157(essParam0))
		{
			persChar = func_275(essParam0, false);
		
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(persChar))
					return false;
			
				if (bParam3 && !PED::IS_PED_READY_TO_RENDER(func_276(essParam0)))
					return false;
			
				if (bParam1 || !func_277(func_276(essParam0), 1116471296, -1082130432, -1082130432, -1082130432) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(persChar);
					func_278(essParam0, false);
				
					if (iParam2 && func_279(Global_1360165[essParam0 /*1157*/].f_63))
						func_280(essParam0, 65, false);
				}
				else
				{
					return false;
				}
			}
		}
	}

	return true;
}

BOOL func_160(eStackSize essParam0) // Position - 0x59CB Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_161(eStackSize essParam0, BOOL bParam1) // Position - 0x59EA Hash - 0xF6905B76 ^0x4F37D8F8
{
	Ped ped;

	ped = func_276(essParam0);

	if (bParam1)
		if (!func_274(ped, 0))
			return false;

	return PED::IS_PED_GROUP_MEMBER(ped, func_281(), true);
}

void func_162(eStackSize essParam0) // Position - 0x5A19 Hash - 0xF13081D5 ^0x7BCA5573
{
	int i;
	Ped playerPed;

	if (!func_160(essParam0))
		return;

	!func_161(essParam0, false);
	func_282(essParam0);
	Global_1359489.f_15 = func_283(true);

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489[i] == essParam0)
			Global_1359489[i] = -1;
	}

	func_284();
	func_285(essParam0, 32, true);

	if (func_274(Global_1360165[essParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[essParam0 /*1157*/], BF_0xD36BCE94, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 152, false);
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		playerPed.f_12 = 8;
		playerPed.f_3 = Global_1360165[essParam0 /*1157*/];
		playerPed.f_7 = func_170();
		playerPed.f_8 = 0;
		playerPed.f_11 = 10;
		playerPed.f_14 = Global_1360165[essParam0 /*1157*/];
		MISC::_CREATE_AI_MEMORY(&playerPed, 17);
	}

	return;
}

int func_163() // Position - 0x5B07 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_164(int iParam0) // Position - 0x5B16 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

BOOL func_165(int iParam0, int iParam1) // Position - 0x5B2C Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_164(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_166(int iParam0) // Position - 0x5B4F Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_164(iParam0))
		return false;

	if (func_286(64) && func_287(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_167(int iParam0) // Position - 0x5B87 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_164(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_168(int iParam0) // Position - 0x5BA7 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_164(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_288(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_169(int iParam0) // Position - 0x5C10 Hash - 0xC23C8821 ^0xCECF5821
{
	if (iParam0 >= 0 && iParam0 < Global_1327590.f_19547)
		Global_1327590.f_19547[iParam0 /*5*/].f_4 = 1;

	return;
}

eStackSize func_170() // Position - 0x5C3C Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

void func_171(int iParam0, int iParam1) // Position - 0x5C4A Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_172(float fParam0) // Position - 0x5C63 Hash - 0xF70C5319 ^0xF70C5319
{
	if (func_289(1) < fParam0)
		func_290(1, fParam0, 0);

	if (func_289(2) < fParam0)
		func_290(2, fParam0, 0);

	if (func_289(0) < fParam0)
		func_290(0, fParam0, 0);

	return;
}

BOOL func_173(int iParam0) // Position - 0x5CA4 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_292(iParam0) == 0)
		return false;

	return true;
}

void func_174(int iParam0, int iParam1, int iParam2) // Position - 0x5CD7 Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_293(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	ped = func_205(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_295(ped, iParam1, func_294(iParam0, iParam1));
	func_296(ped, iParam1);
	return;
}

void func_175(Hash hParam0, int iParam1) // Position - 0x5D5C Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_176() // Position - 0x5D6F Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_177(int iParam0, int iParam1) // Position - 0x5D8E Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_178(true);

	return;
}

void func_178(BOOL bParam0) // Position - 0x5DA7 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_297(&(Global_40.f_12019.f_42), 1);
	else
		func_298(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_179(eStackSize essParam0) // Position - 0x5DD1 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return essParam0 > -1 && essParam0 <= 80;
}

BOOL func_180(eStackSize essParam0) // Position - 0x5DE7 Hash - 0x621F6AE0 ^0x751E487E
{
	return Global_1835011[essParam0 /*74*/].f_63 & 64512 != 0;
}

void func_181(eStackSize essParam0, BOOL bParam1) // Position - 0x5E00 Hash - 0xF7F9962 ^0x8ACA40E6
{
	BOOL flag;

	if (!func_179(essParam0))
		return;

	if (func_299(&Global_1835011[essParam0 /*74*/], 8192))
		flag = true;

	Global_1835011[essParam0 /*74*/].f_63 = 0;

	if (!bParam1 && flag)
	{
		Global_1835011[essParam0 /*74*/].f_63 = Global_1835011[essParam0 /*74*/].f_63 | 2;
		Global_1835011[essParam0 /*74*/].f_63 = Global_1835011[essParam0 /*74*/].f_63 | 8192;
	}

	return;
}

void func_182(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x5E70 Hash - 0x98AF3B21 ^0x82D8CDEA
{
	BOOL flag;

	if (!func_153(essParam0))
		return;

	flag = true;

	if (!bParam1)
		flag = MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37);

	func_300(&(Global_1347702[essParam0 /*49*/].f_14));
	func_301(&(Global_1347702[essParam0 /*49*/].f_12), 16384);
	func_302(&(Global_1347702[essParam0 /*49*/].f_13), 4096);

	if (flag)
	{
		if (Global_1347702[essParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[essParam0 /*49*/].f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[essParam0 /*49*/].f_37));
		
			if (iParam2 == 1)
				func_304(essParam0, func_303(essParam0), false, false);
		}
		else if (Global_1347702[essParam0 /*49*/].f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[essParam0 /*49*/].f_37));
		
			if (iParam2 == 1)
				func_304(essParam0, func_305(essParam0), false, false);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
		}
	}

	return;
}

void func_183(var uParam0, float fParam1) // Position - 0x5F73 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_306() - fParam1;
	func_307(uParam0, 1);
	func_308(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_184() // Position - 0x5F99 Hash - 0x85414BC8 ^0x8421EC3E
{
	if (Global_1935689.f_17 == 3)
		return true;

	return false;
}

BOOL func_185(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5FB0 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_309(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_310(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_311(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_312(hParam0, unk, unk.f_4, bParam4) };
	return func_313(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_186() // Position - 0x6021 Hash - 0x776DDE2 ^0x628739AB
{
	if (func_274(Global_35, 0))
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")))
			return true;

	return false;
}

void func_187(Hash hParam0, int iParam1) // Position - 0x6048 Hash - 0xD62C91CE ^0xD62C91CE
{
	Global_1357549.f_1672 = hParam0;
	Global_1357549.f_1673 = iParam1;
	return;
}

Hash func_188() // Position - 0x6062 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1357549.f_1672;
}

BOOL func_189(Hash hParam0, BOOL bParam1) // Position - 0x6071 Hash - 0xEA6A22E1 ^0x80E77BB7
{
	int num;
	var unk;

	if (!func_309(hParam0, 0))
		return false;

	if (Global_1935689.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_314(hParam0);
	
		if (func_191(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_315(&unk, HUD::_0x0501D52D24EA8934(1), true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_316())
			return false;

	if (!func_317(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_190(Hash hParam0) // Position - 0x612D Hash - 0xE1905D26 ^0xF533277C
{
	if (func_198(hParam0) == joaat("emote"))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_96(false), hParam0, func_318(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			if (!Global_1392040.f_2)
			{
				func_319(true, true);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			func_202(MISC::VAR_STRING(0, 163043886, Global_36559), 10000, 0, 0, 0, true);
			break;
	}

	return true;
}

BOOL func_191(Hash hParam0, Hash hParam1) // Position - 0x61BA Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_192(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, BOOL bParam28, int iParam29) // Position - 0x61EB Hash - 0xED0EB3AE ^0xA8675092
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (func_320())
				func_321(joaat("journal_rc_mayor4_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_mayor4_ar")))
				func_321(joaat("journal_rc_mayor4b_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			func_321(joaat("journal_rc_mayor4a_jn"), 0);
			break;
	
		case joaat("DOCUMENT_TS_STR_MAYOR_LETTER"):
			break;
	
		case joaat("DOCUMENT_CATALOGUE_WMN_LETTER_01"):
			iParam27 = joaat("TP_CATALOGUE_LETTER_01");
			uParam17.f_1 = iParam27;
			TEXT_LABEL_ASSIGN_STRING(&(uParam1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			bParam28 = true;
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			if (func_176() && !func_324(40) && !func_330(32))
			{
				func_331(4);
				func_327(39, 0, 0, 0, 0, -1, 0);
				func_328(39, 0, 0, 0, 0, false, 2, false);
				func_332(32);
			}
			break;
	
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			func_322(Global_1347702[80 /*49*/].f_15, 1);
		
			if (func_320() == true)
				func_321(joaat("journal_rc_fma5_1_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_fma5_1_ar")))
				if (func_323(77))
					func_321(joaat("journal_rc_fma5_2_jn"), 0);
				else
					func_321(joaat("journal_rc_fma5_1_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if (func_176() && !func_324(51) && !func_325(16384))
			{
				func_326(1);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 5, false);
				func_329(16384);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if (func_176() && !func_324(50) && !func_336(32))
			{
				func_337(4);
				func_327(49, 0, 0, 0, 0, -1, 0);
				func_328(49, 0, 0, 0, 0, false, 2, false);
				func_338(32);
			
				if (!func_339(Global_1347702[50 /*49*/].f_15, true))
					if (func_320() == true)
						func_321(joaat("journal_rc_rockcarv15_ar"), 0);
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_rockcarv15_ar")))
						func_321(joaat("journal_rc_rockcarv15_jn"), 0);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if (func_176() && !func_324(51) && !func_325(1048576))
			{
				func_326(2);
				func_327(51, 0, 0, 0, 0, -1, 0);
				func_328(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 2, false);
				func_329(1048576);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if (func_176() && !func_324(42) && !func_333(16))
			{
				func_334(8);
				func_327(41, 0, 0, 0, 0, -1, 0);
				func_328(41, 0, 0, 0, 0, false, 2, false);
				func_335(16);
			}
			break;
	
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
	}

	return;
}

void func_193(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x649B Hash - 0x9E368772 ^0x9E368772
{
	switch (hParam0)
	{
		case joaat("document_field_manual"):
			func_334(16);
			break;
	}

	return;
}

void func_194(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x64BA Hash - 0xD1346F27 ^0x3AB7DFFD
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case -691125380:
		case -287018478:
		case 305626647:
			TEXT_LABEL_ASSIGN_STRING(&(uParam1.f_10), "gunslinger_notes", 32);
			break;
	}

	return;
}

BOOL func_195(Hash hParam0) // Position - 0x64EF Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_196(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x64F8 Hash - 0x3A368F62 ^0x7DB4A593
{
	if (func_340(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_341(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_355(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				func_349(hParam0);
				return true;
			}
			break;
	
		case -1337515701:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("pocket_watch_inspect_unholster"), 1, 0, -1082130432);
				return true;
			}
			break;
	
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1087288635, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -809056541:
			if (!bParam1)
			{
				func_352(hParam0);
				return true;
			}
			break;
	
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 136592566, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -273840653:
			if (!bParam1)
			{
				func_345(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_353(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_356(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_357(hParam0);
				return true;
			}
			break;
	
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, -1401979141, 1, 0, 0f);
			
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
		
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case 845883585:
			if (!bParam1)
			{
				if (!func_343())
				{
					if (func_243(&Global_35))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_202("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
				}
			}
			break;
	
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
	
		case 999632878:
			if (!bParam1)
			{
				func_346(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
					func_347(hParam0);
				else
					func_348(hParam0);
			
				return true;
			}
			break;
	
		case 1174751405:
			if (!bParam1)
			{
				func_342(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_358(hParam0);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_354(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				func_344(hParam0);
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				func_350(hParam0);
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				func_351(hParam0);
				return true;
			}
			break;
	}

	return false;
}

void func_197(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x6895 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_359(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_360(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_361(iParam16);
			return;
		}
	}

	return;
}

int func_198(Hash hParam0) // Position - 0x6931 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_309(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_199(int iParam0) // Position - 0x695C Hash - 0x8F8D4E05 ^0x8F8D4E05
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 0;
	
		case 3:
			return 3;
	
		default:
		
	}

	return -1;
}

Hash func_200(Hash hParam0) // Position - 0x6995 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_309(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_201(Hash hParam0) // Position - 0x69C0 Hash - 0xBFDBD794 ^0x724C9162
{
	int num;

	if (hParam0 == 0)
		return false;

	if (func_198(hParam0) == joaat("CLOTHING"))
	{
		if (func_200(hParam0) == -999503751)
		{
			num = func_207(hParam0);
		
			if (num != -1 && !func_362(num) || !func_317(hParam0, 1, false))
				return false;
		}
	}

	return true;
}

int func_202(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6A1D Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_203(int iParam0, Hash hParam1) // Position - 0x6A58 Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_205(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return 0;

	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(mount))
		return 0;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_35)
			if (hParam1 == joaat("kit_wardrobe"))
				return 0;
		else
			return 0;

	if (func_363(iParam0))
		return 1;

	return 0;
}

BOOL func_204(int iParam0) // Position - 0x6AFF Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_291(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_205(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_364())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

Ped func_205(int iParam0) // Position - 0x6B58 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_206(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x6B84 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

eStackSize func_207(Hash hParam0) // Position - 0x6BEE Hash - 0x9830D1FB ^0x9830D1FB
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

void func_208(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x7001 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_365(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_366(num);
	return;
}

int func_209(Hash hParam0, BOOL bParam1) // Position - 0x7033 Hash - 0xA79D5BF ^0xE827C189
{
	Object object;

	if (!func_367())
		return 0;

	if (!func_368(hParam0))
		return 0;

	if (func_369(hParam0))
	{
		object = 0;
	
		if (func_200(hParam0) == 81053684)
			if (bParam1)
				func_370(&object, 2);
	
		return func_371(hParam0, object);
	}

	return 0;
}

void func_210(Hash hParam0) // Position - 0x7087 Hash - 0x6BEB4307 ^0xBDD81FC5
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1946054.f_1497.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipHatFidget", true, 15);
		func_211(Global_35, -2065815962, 0, -358215195, true, true, true, false, true, false);
		func_212(hParam0, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipHatFidget", true, 15);
	func_211(Global_35, hParam0, 0, -358215195, true, true, true, false, true, false);

	if (func_372(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_373();
		func_365(128);
		return;
	}

	if (hash == Global_1946054.f_57[num /*11*/])
	{
		func_212(hParam0, true);
		return;
	}

	if (func_374(-2061583405, false))
	{
		if (func_375(hash))
			func_212(hash, false);
		else
			func_376(hash, true, true, false);
	
		func_212(hParam0, true);
		return;
	}

	if (func_375(hash))
	{
		func_212(hash, false);
		func_212(hParam0, true);
	}
	else if (func_375(hParam0))
	{
		if (hParam0 != func_377(0))
		{
			func_378(hParam0, hash);
			func_212(hParam0, false);
			func_212(hash, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_365(128);
			func_212(hParam0, true);
		}
	}

	return;
}

int func_211(Ped pedParam0, Hash hParam1, Hash hParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x71CB Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (hParam3 == -358215195)
	{
		unk = { func_310(hParam1, true, false) };
		hParam3 = func_379(unk.f_4);
	
		if (hParam3 == -358215195)
			return 0;
	}

	if (!func_381(hParam1, hParam2, func_380(hParam3, 1), bParam4, bParam9))
		return 0;

	func_382(true, func_17() == -1 && bParam5, true);

	switch (hParam3)
	{
		case 1108822547:
			if (func_372(32768) && hParam1 != Global_1946054.f_57[func_380(hParam3, 1) /*11*/])
			{
				func_373();
				func_208(22, hParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_380(hParam3, 1) /*11*/])
				func_208(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_208(22, hParam3, 0, 0, false);
	
		return 1;
	}

	num = func_383(hParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_208(19, 0, num, 0, false);
	
		if (hParam3 == 1742327865 || hParam3 == 1108822547 || hParam3 == 1145151482)
		{
			func_384(0);
			func_385(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_208(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_212(Hash hParam0, BOOL bParam1) // Position - 0x733A Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_310(hParam0, false, false) };
	guid = { func_312(hParam0, unk, unk.f_4, false) };

	if (func_386(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_96(false), &guid, bParam1);
	return;
}

void func_213(BOOL bParam0) // Position - 0x7384 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

void func_214() // Position - 0x739E Hash - 0xC6CD68D ^0xAFD0A1CE
{
	if (func_387())
		return;

	if (func_388())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1914319.f_18996.f_1 = 1;
	}
	else if (Global_1914319.f_18996.f_4 != 0)
	{
		func_202(func_389(), 10000, 0, 0, 0, true);
		Global_1914319.f_18996.f_4 = 0;
	}

	return;
}

BOOL func_215(BOOL bParam0, int iParam1) // Position - 0x7404 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

BOOL func_216(eStackSize essParam0) // Position - 0x7413 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_17() != -1)
		return false;

	if (!func_153(essParam0))
		return false;

	return func_390(Global_1347702[essParam0 /*49*/].f_15);
}

BOOL func_217(int iParam0) // Position - 0x7443 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_390(Global_1835011[iParam0 /*74*/].f_1);
}

float func_218(int iParam0) // Position - 0x746F Hash - 0x9BB7FBA3 ^0xA973C68A
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

	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_391(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_392(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_392(iParam0) + 1;
	num2 = func_393(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_394(num, any, num7);
	return num8;
}

BOOL func_219(Ped pedParam0, Object* pobParam1, float fParam2, BOOL bParam3) // Position - 0x7529 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pobParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pobParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

int func_220() // Position - 0x7571 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3054.f_1;
}

BOOL func_221(int iParam0) // Position - 0x7584 Hash - 0x14AD85AF ^0xC4DF0BF6
{
	if (!func_395(32))
		return false;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		return false;

	if (!func_396())
		return false;

	if (func_397(16))
		return false;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1224589.f_9) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::INT_TO_PLAYERINDEX(Global_1224589)))
		return false;

	if (iParam0 == 1 && func_398(Global_1130863.f_8, 1))
		return false;

	return true;
}

int func_222(int iParam0) // Position - 0x7605 Hash - 0x14624C3D ^0x46CC355A
{
	if (!func_399())
		return 0;

	func_400(iParam0);
	Global_1898068.f_4 = 1;
	return 1;
}

BOOL func_223(int iParam0) // Position - 0x7627 Hash - 0xA059D395 ^0xAFACF28D
{
	return func_398(Global_1130863.f_8, iParam0);
}

void func_224(Any anParam0) // Position - 0x763B Hash - 0x6C95107C ^0x7F4B8292
{
	var unk;

	unk.f_12 = 255;
	unk.f_13 = 255;
	unk.f_5 = anParam0;
	unk.f_3 = 94;
	func_402(unk, func_401(0, 15), false, false);
	return;
}

int func_225(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x7672 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

int func_226(eStackSize essParam0) // Position - 0x76B4 Hash - 0x5822495 ^0x141CE12F
{
	int i;

	if (!func_403(essParam0))
		return -1;

	for (i = 0; i < 17; i = i + 1)
	{
		if (Global_1395601.f_5[i /*28*/] == essParam0)
			return i;
	}

	return -1;
}

int func_227() // Position - 0x76F2 Hash - 0xAA084930 ^0xAA084930
{
	eStackSize stackSize;

	stackSize = func_68();

	switch (stackSize)
	{
		case 0:
			return 1;
	
		case 1:
			return 4;
	
		case 2:
			return 2;
	
		case 3:
			return 6;
	
		case 4:
			return 3;
	
		case 5:
			return 5;
	
		case 6:
			return 0;
	
		case 7:
			return 7;
	
		case 8:
			return -1;
	}

	return -1;
}

BOOL func_228(int iParam0) // Position - 0x777E Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_229() // Position - 0x7794 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1395601;
}

int func_230(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x77A0 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_309(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_404(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_405(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_317(hParam0, 1, bParam4))
		return 0;

	statId = { func_406(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_407(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_407(hParam0, false, false) - iParam1 < 0)
		{
			func_230(hParam0, func_407(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_198(hParam0) == joaat("WEAPON"))
		if (!func_408(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_185(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_409(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_405(hParam0, -iParam1, flag, flag2, flag3);

	func_410(hParam0, iParam1);
	return 1;
}

void func_231(int iParam0, BOOL bParam1) // Position - 0x7914 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_411(iParam0, &num, &num2);

	if (!func_412(iParam0, num, num2, bParam1))
		return;

	func_413(num, num2);
	return;
}

void func_232(BOOL bParam0) // Position - 0x7941 Hash - 0x306CC386 ^0x2C16B96B
{
	if (func_17() != -1 || !bParam0 || func_414(Global_35))
	{
		func_415();
		return;
	}

	if (func_40(8388608) && !func_215(Global_1392040.f_1, 2048))
	{
		func_57(16777216);
		return;
	}

	func_415();
	return;
}

int func_233(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x799D Hash - 0x11449F01 ^0x11449F01
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

	if (!func_309(hParam0, 0))
		return 0;

	if (!func_416(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_417(hParam0, &value, iParam1))
		return 0;

	func_418(hParam0, bParam2);
	lootTableKey = 0;

	if (func_407(hParam0, false, false) == 0)
	{
		if (func_419(hParam0))
		{
			hash = func_420(hParam0);
			collectableSubcategory = func_421(hash);
			num = func_422(collectableSubcategory) + 1;
			func_423(hash);
		
			if (func_324(38))
				func_231(483, false);
			else
				func_231(482, false);
		
			if (num == func_424(collectableSubcategory))
			{
				func_233(func_425(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_176() && func_426(4))
				{
					if (func_176() && func_427(38) || func_324(38))
					{
						func_328(38, func_425(collectableSubcategory), 0, 0, func_428(), false, -1, false);
						func_429(2);
					}
					else
					{
						func_328(38, func_425(collectableSubcategory), 0, 0, func_428(), false, -1, false);
						func_429(1);
					}
				}
			}
			else if (func_176() && func_426(4))
			{
				if (func_176() && func_427(38) || func_324(38))
				{
					func_328(38, 0, 0, 0, func_428(), false, -1, false);
					func_429(2);
				}
				else
				{
					func_328(38, 0, 0, 0, func_428(), false, -1, false);
					func_429(1);
				}
			}
		
			if (func_176() && func_426(4))
				if (!Global_1914319.f_17376)
					if (func_176() && func_427(38) || func_324(38))
						func_327(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_327(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_198(hParam0) == joaat("CLOTHING"))
		if (!func_191(hParam0, 866047851) && !func_191(hParam0, -1979000645) && !func_191(hParam0, 1248798204))
			flag = true;

	if (func_430(hParam0, 8388608) && !func_431(28))
		func_432(28);

	if (!flag)
	{
		if (func_191(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_200(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_434(func_433(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_17() == -1)
						func_435(ammoTypeForWeapon);
				
					if (func_409(false) && func_436(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_437(hParam0, value, hParam5);
					
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
					if (func_17() == -1)
						func_435(hParam0);
				
					if (func_409(false) && func_436(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_437(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_198(hParam0) == joaat("WEAPON"))
		{
			if (!func_438(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_198(hParam0) == joaat("AMMO") && func_439(hParam0))
		{
			if (!func_440(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_191(hParam0, 866047851))
		{
			func_441(hParam0);
		}
		else if (func_191(hParam0, 2000026003))
		{
			func_442(hParam0);
		}
		else if (func_191(hParam0, -103750053))
		{
			func_444(func_443(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_444(func_445(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_191(hParam0, -121341956) && !func_191(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_339(Global_1835011[4 /*74*/].f_1, true))
					func_231(498, false);
		
			if (func_191(hParam0, -2017733358) || func_191(hParam0, -1369131378))
				func_446(hParam0);
		}
		else if (func_191(hParam0, -136654233))
		{
			if (func_191(hParam0, -1021472396))
			{
			}
		}
		else if (func_191(hParam0, -1466706512) && func_191(hParam0, 1147021565))
		{
			func_231(484, false);
		}
		else if (func_191(hParam0, 1147021565) && func_191(hParam0, -524514947))
		{
		}
		else if (func_191(hParam0, 554195525))
		{
		}
		else if (func_191(hParam0, 589988438))
		{
			if (func_447())
			{
				func_448(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_191(hParam0, 787083290) && func_191(hParam0, 949916894))
		{
			func_449(hParam0);
		}
		else if (func_191(hParam0, -1718133314))
		{
			func_450(hParam0);
		}
		else if (func_191(hParam0, -1738650224))
		{
			func_451(hParam0);
		}
		else if (func_191(hParam0, -1112814642) && func_191(hParam0, 949916894))
		{
			func_452(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_191(hParam0, 1841149704))
		{
			func_453();
		}
		else if (func_191(hParam0, 606799272))
		{
			func_454(hParam0, iParam1);
			func_455(hParam0);
		}
		else if (func_191(hParam0, -1112814642) && func_191(hParam0, -1697809989))
		{
			func_456(hParam0, 0, false, false);
		}
		else if (func_191(hParam0, -2017733358) || func_191(hParam0, -1369131378))
		{
			func_446(hParam0);
		}
		else if (func_191(hParam0, -1921346699))
		{
			if (func_17() != -1)
				return 0;
		
			func_457(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_191(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_317(471514780, 1, false))
						func_233(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_317(526074061, 1, false))
						func_233(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_317(-967317137, 1, false))
						func_233(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_317(670273567, 1, false))
						func_233(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_317(215778062, 1, false))
						func_233(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_317(-1045488665, 1, false))
						func_233(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_191(hParam0, -839724752) && func_430(hParam0, 4))
		{
			if (!func_324(42))
				func_458(hParam0);
		}
		else if (func_191(hParam0, 1399091007))
		{
			func_459(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_191(hParam0, 1248798204))
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
				func_233(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_17() == -1)
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
					func_475(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_475(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_475(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_465(499813453, joaat("treasure_hunt_loot_01"), false);
				func_466(499813453, false);
				func_467(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_465(390004462, joaat("treasure_hunt_loot_17"), false);
				func_466(390004462, false);
				func_471(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_465(6410548, joaat("treasure_hunt_loot_23"), false);
				func_466(6410548, false);
				func_472(8);
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
				func_465(6410548, joaat("treasure_hunt_loot_22"), false);
				func_466(6410548, false);
				func_472(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_432(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_211(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_460(&hash3, false))
					func_436(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_475(594, 1934060482, true, true);
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
					func_475(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_231(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_465(6410548, joaat("treasure_hunt_loot_21"), false);
				func_466(6410548, false);
				func_472(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_231(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_233(func_476(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_233(func_477(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_475(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_465(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_466(-220219788, false);
				func_469(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_431(1))
					func_231(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_465(666607663, joaat("treasure_hunt_loot_07"), false);
				func_466(666607663, false);
				func_468(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_474(241, func_473(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_465(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_466(-220219788, false);
				func_469(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_474(242, func_473(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_231(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_474(240, func_473(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_465(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_466(-220219788, false);
				func_469(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_465(390004462, joaat("treasure_hunt_loot_16"), false);
				func_466(390004462, false);
				func_471(1);
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
				func_465(499813453, joaat("treasure_hunt_loot_03"), false);
				func_466(499813453, false);
				func_467(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_465(666607663, joaat("treasure_hunt_loot_06"), false);
				func_466(666607663, false);
				func_468(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_465(218622660, joaat("treasure_hunt_loot_14"), false);
				func_466(218622660, false);
				func_470(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_465(666607663, joaat("treasure_hunt_loot_05"), false);
				func_466(666607663, false);
				func_468(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_17() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_211(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_465(218622660, joaat("treasure_hunt_loot_13"), false);
				func_466(218622660, false);
				func_470(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_465(6410548, joaat("treasure_hunt_loot_20"), false);
				func_466(6410548, false);
				func_472(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_231(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_231(491, false);
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
				func_465(499813453, joaat("treasure_hunt_loot_02"), false);
				func_466(499813453, false);
				func_467(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_231(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_461();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_462();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_463();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_464();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_261();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_465(390004462, joaat("treasure_hunt_loot_18"), false);
				func_466(390004462, false);
				func_471(4);
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
		func_478(&hash4);
	
		if (!func_479(hash4, value, hParam5))
			return 0;
		else if (!func_409(false))
			return 1;
	
		if (func_198(hParam0) == joaat("CLOTHING"))
			func_480(hParam0);
	
		if (func_191(hParam0, -1979000645))
			func_481(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_409(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_233(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_482(lootTableKey, 0);
		}
	}

	statId = { func_406(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_483(hParam0);

	if (iParam6 > 0f)
	{
		if (func_191(hParam0, -839724752))
			func_484(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_405(hParam0, value, false, flag3, false);
	}

	return 1;
}

float func_234(var uParam0) // Position - 0x8C35 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_18(uParam0))
		return uParam0->f_1;

	if (func_485(uParam0))
		return uParam0->f_2;

	return func_306() - uParam0->f_1;
}

float func_235(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x8C6A Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_236(int iParam0) // Position - 0x8C88 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_113(iParam0, 2);
}

void func_237(int iParam0) // Position - 0x8C97 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

BOOL func_238(var uParam0) // Position - 0x8CB0 Hash - 0x6019ABAF ^0x84B5A74A
{
	int i;
	int num;
	BOOL flag;
	Hash hash;

	for (i = 0; i <= 3; i = i + 1)
	{
		func_43(&uParam0->[i], true, true);
	}

	if (uParam0->f_18 > 3 && uParam0->f_18 <= 9)
	{
		uParam0->[1] = func_44("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[2] = func_44("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[3] = func_44("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_18 > 9 && uParam0->f_18 <= 15)
	{
		uParam0->[2] = func_44("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[3] = func_44("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[0] = func_44("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_18 > 15 && uParam0->f_18 <= 21)
	{
		uParam0->[3] = func_44("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[0] = func_44("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[1] = func_44("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_18 > 21 || uParam0->f_18 <= 3)
	{
		uParam0->[0] = func_44("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[1] = func_44("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[2] = func_44("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}

	flag = true;

	if (Global_1392040.f_7 == -15)
		Global_1392040.f_7 = func_65();

	hash = Global_1392040.f_7;
	func_66(&hash, 0, 0, 3, 0, 0, 0, false);

	if (!func_67(hash))
		if (Global_1392040.f_8 > 1)
			flag = false;
	else
		Global_1392040.f_8 = 0;

	if (func_53(PLAYER::PLAYER_ID(), true, false, true) || PED::IS_PED_IN_COMBAT(Global_35, 0))
		flag = false;

	if (func_38(uParam0->[0]))
	{
		if (uParam0->f_18 < 6)
			num = 6 - uParam0->f_18;
		else
			num = (24 - uParam0->f_18) + 6;
	
		func_486(uParam0->[0], "CMP_SLP_MRN", num, true);
		func_32(uParam0->[0], 1323335645, 0, true);
		func_54(uParam0->[0], flag, true);
	}

	if (func_38(uParam0->[1]))
	{
		if (uParam0->f_18 < 12)
			num = 12 - uParam0->f_18;
		else
			num = (24 - uParam0->f_18) + 12;
	
		func_486(uParam0->[1], "CMP_SLP_NOON", num, true);
		func_32(uParam0->[1], 1323335645, 0, true);
		func_54(uParam0->[1], flag, true);
	}

	if (func_38(uParam0->[2]))
	{
		if (uParam0->f_18 < 18)
			num = 18 - uParam0->f_18;
		else
			num = (24 - uParam0->f_18) + 18;
	
		func_486(uParam0->[2], "CMP_SLP_EVE", num, true);
		func_32(uParam0->[2], 1323335645, 0, true);
		func_54(uParam0->[2], flag, true);
	}

	if (func_38(uParam0->[3]))
	{
		num = 24 - uParam0->f_18;
		func_486(uParam0->[3], "CMP_SLP_MDN", num, true);
		func_32(uParam0->[3], 1323335645, 0, true);
		func_54(uParam0->[3], flag, true);
	}

	return flag;
}

char* func_239(int iParam0) // Position - 0x90D9 Hash - 0x62DF1F49 ^0x744B6A8
{
	switch (iParam0)
	{
		case 0:
			if (func_487())
				return "2100_";
			else
				return "0000_";
			break;
	
		case 6:
			if (func_487())
				return "0300_";
			else
				return "0600_";
			break;
	
		case 12:
			if (func_487())
				return "0900_";
			else
				return "1200_";
			break;
	
		case 18:
			if (func_487())
				return "1500_";
			else
				return "1800_";
			break;
	}

	return "1200_";
}

char* func_240() // Position - 0x9171 Hash - 0x99F72133 ^0x7A384FEF
{
	int num;

	num = func_488();

	switch (num)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("Fog"):
		case joaat("Shower"):
		case joaat("snow"):
		case joaat("sleet"):
		case joaat("SNOWLIGHT"):
			return "03Clouds";
	
		case joaat("sandstorm"):
		case joaat("overcastdark"):
		case joaat("BLIZZARD"):
		case joaat("whiteout"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
		case joaat("groundblizzard"):
			return "04Storm";
	
		case joaat("highpressure"):
		case joaat("clouds"):
		case joaat("Misty"):
		case joaat("SUNNY"):
		case joaat("snowclearing"):
			return "01Clear";
	
		default:
		
	}

	return "01Clear";
}

struct<8> func_241(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0x922B Hash - 0xB13D7CEF ^0x4DD40A33
{
	int lengthOfLiteralString;
	int lengthOfLiteralString2;
	var unk;
	var unk9;
	var unk17;

	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (lengthOfLiteralString >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_0x806862E5D266CF38(sParam0, lengthOfLiteralString - iParam3, lengthOfLiteralString), 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);

	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);

	if (lengthOfLiteralString2 >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk9, HUD::_0x806862E5D266CF38(sParam1, lengthOfLiteralString2 - iParam3, lengthOfLiteralString2), 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk9, sParam1, 64);

	lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&unk9);

	if (bParam2)
		if (lengthOfLiteralString + lengthOfLiteralString2 >= iParam3)
			TEXT_LABEL_ASSIGN_STRING(&unk9, HUD::_0x806862E5D266CF38(&unk9, lengthOfLiteralString, lengthOfLiteralString2), 64);
	else if (lengthOfLiteralString + lengthOfLiteralString2 >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_0x806862E5D266CF38(&unk, lengthOfLiteralString2, lengthOfLiteralString), 64);

	unk17 = { unk };
	TEXT_LABEL_APPEND_STRING(&unk17, &unk9, 64);
	return unk17;
}

const char* func_242(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x92E2 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_243(Ped pedParam0) // Position - 0x92F6 Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_489(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

Hash func_244(int iParam0) // Position - 0x932F Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_380(iParam0, 1) /*3*/];
}

float func_245(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x9357 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_246() // Position - 0x9375 Hash - 0x142F9BD0 ^0x142F9BD0
{
	return func_71(10, 0) >= 3;
}

BOOL func_247(int iParam0) // Position - 0x9386 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_17() != -1)
		return false;

	if (!func_153(iParam0))
		return false;

	return func_339(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_248(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x93B7 Hash - 0x35C984F9 ^0x56C013BB
{
	eStackSize i;
	int j;
	int num;

	for (j = 0; j < *uParam0; j = j + 1)
	{
		uParam0->[j /*7*/] = -1;
		uParam0->[j /*7*/].f_3 = 0;
		uParam0->[j /*7*/].f_4 = 99999999;
		uParam0->[j /*7*/].f_5 = 0f;
		uParam0->[j /*7*/].f_6 = 0;
	}

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_490(i))
			if (func_491(i, bParam2))
				if (bParam1)
					func_492(uParam0, i);
				else
					func_493(uParam0, i);
	}

	num = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i /*7*/].f_3)
		{
			if (func_403(uParam0->[i /*7*/]))
			{
				num = num + 1;
				uParam0->[i /*7*/].f_5 = func_494(uParam0->[i /*7*/].f_4);
			}
		}
	}

	return num > 0;
}

eStackSize func_249(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x9494 Hash - 0x25DFFF2C ^0x74CE6365
{
	eStackSize stackSize;

	stackSize = func_170();

	if (func_403(stackSize))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[stackSize /*35*/].f_3, vParam0))
			return stackSize;

	return func_495(vParam0, bParam3);
}

eStackSize func_250() // Position - 0x94CF Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

var func_251(BOOL bParam0, var uParam1, var uParam2) // Position - 0x94DF Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_252(var uParam0, int iParam1) // Position - 0x94F6 Hash - 0xD05180BA ^0x39589262
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

void func_253(var uParam0, int iParam1) // Position - 0x957C Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_254(var uParam0, int iParam1) // Position - 0x95B8 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_137(*uParam0);
	num2 = func_136(*uParam0);

	if (iParam1 < 1 || iParam1 > func_142(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_255(var uParam0, int iParam1) // Position - 0x960B Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_256(var uParam0, int iParam1) // Position - 0x9646 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_257(var uParam0, int iParam1) // Position - 0x967F Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_258(int iParam0) // Position - 0x96B7 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_496();

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

void func_259(float fParam0, Ped pedParam1) // Position - 0x96F6 Hash - 0x2062487E ^0xADB8AE45
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

void func_260(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9738 Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_261() // Position - 0x9768 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_497();
	func_498();
	func_499();
	return;
}

int func_262(int iParam0) // Position - 0x977F Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_496();

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

void func_263(float fParam0) // Position - 0x97C2 Hash - 0xEBF0A2AB ^0x54370C29
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

int func_264(int iParam0) // Position - 0x97FC Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_496();

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

void func_265(float fParam0, BOOL bParam1) // Position - 0x983F Hash - 0x1FE7F29A ^0xE2FCD967
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

int func_266(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x98D3 Hash - 0xB3CE93F ^0x7EB87888
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_496();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_500(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_501(ped, iParam0, fParam1);
	func_502(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_503(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

BOOL func_267(int iParam0) // Position - 0x9989 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_268(BOOL bParam0) // Position - 0x99C7 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_269(eStackSize essParam0) // Position - 0x99DA Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

BOOL func_270(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x99E6 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_269(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

BOOL func_271(int iParam0, int iParam1, BOOL bParam2) // Position - 0x9A10 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_269(iParam0))
			return false;

	func_504(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

BOOL func_272(int iParam0) // Position - 0x9A4B Hash - 0xDA629583 ^0xDA629583
{
	return func_270(iParam0, 16, true);
}

BOOL func_273(int iParam0) // Position - 0x9A5C Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

BOOL func_274(Ped pedParam0, int iParam1) // Position - 0x9A79 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_398(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_398(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_398(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_398(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_398(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_398(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_398(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_398(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

PersChar func_275(eStackSize essParam0, BOOL bParam1) // Position - 0x9B78 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_160(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_505(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

Ped func_276(eStackSize essParam0) // Position - 0x9BB7 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_269(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

BOOL func_277(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x9BF1 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_506(pedParam0, Global_36, true);

	if (iParam2 > 0f)
		if (num < iParam2)
			return true;

	if (num < iParam1)
		if (PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
			if (iParam4 > 0f)
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedParam0, iParam4))
					return true;
			else if (PED::IS_TRACKED_PED_VISIBLE(pedParam0))
				return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
				return true;

	return false;
}

void func_278(eStackSize essParam0, BOOL bParam1) // Position - 0x9C7A Hash - 0xEE7E9DBB ^0x37FB2562
{
	Any any;

	if (PERSCHAR::_0xA8120EBEAF290C7A(func_275(essParam0, false)))
	{
		any = PERSCHAR::_0x69786495C92A3044(func_275(essParam0, false));
	
		if (any != Global_1360165[essParam0 /*1157*/].f_47 || bParam1)
		{
			Global_1360165[essParam0 /*1157*/].f_47 = any;
			TEXT_LABEL_ASSIGN_STRING(&(Global_1360165[essParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(func_275(essParam0, false), Global_1360165[essParam0 /*1157*/].f_47), 64);
			Global_1360165[essParam0 /*1157*/].f_56 = 1;
		}
	}

	return;
}

int func_279(int iParam0) // Position - 0x9CF2 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_280(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x9D1F Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_269(essParam0))
			return;

	func_504(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

int func_281() // Position - 0x9D59 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_282(eStackSize essParam0) // Position - 0x9D69 Hash - 0xF69B99CF ^0x21CDC007
{
	Ped ped;

	ped = Global_1360165[essParam0 /*1157*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_160(essParam0))
		return;

	if (!PED::IS_PED_IN_GROUP(ped))
		return;

	if (PED::GET_PED_GROUP_INDEX(ped) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
		return;

	if (PED::_IS_PED_LEADING_ANY_GROUP(ped))
		COMPANION::_0xD747979C053EFA7A(func_281());

	PED::SET_PED_CONFIG_FLAG(ped, 279, false);
	PED::REMOVE_PED_FROM_GROUP(ped);
	func_507(essParam0, false, 0);
	return;
}

eStackSize func_283(BOOL bParam0) // Position - 0x9DEC Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_508(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_281(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_281(), i);
	
		if (func_509(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

void func_284() // Position - 0x9E4C Hash - 0xC0695FEA ^0xC0695FEA
{
	eStackSize i;
	eStackSize stackSize;
	eStackSize stackSize2;

	for (i = 0; i < 2; i = i + 1)
	{
		stackSize = func_510(i);
		stackSize2 = func_510(i + 1);
	
		if (!func_160(stackSize))
		{
			if (func_160(stackSize2))
			{
				Global_1359489[i] = stackSize2;
				Global_1359489[i + 1] = -1;
			}
		}
	}

	return;
}

void func_285(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x9EA0 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_269(essParam0))
			return;

	func_504(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_286(int iParam0) // Position - 0x9EDA Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_287(int iParam0) // Position - 0x9EEE Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_165(iParam0, Global_1310750.f_16072 | 64);
}

void func_288(int iParam0) // Position - 0x9F06 Hash - 0x3D0B339A ^0xB87B2B3D
{
	int i;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;

	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[i] = -1881652455;
	}

	return;
}

float func_289(int iParam0) // Position - 0x9F93 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_290(int iParam0, float fParam1, BOOL bParam2) // Position - 0x9FA5 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_17() != -1)
		return;

	if (!func_431(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_511(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_503(iParam0), value);
	func_513(func_512(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_514(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_231(84, true);

	if (fParam1 <= -99.999f)
		func_231(func_515(iParam0), true);

	variableName = func_516(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

int func_291(int iParam0) // Position - 0xA07E Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

int func_292(int iParam0) // Position - 0xA097 Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

int func_293(int iParam0, int iParam1, int iParam2) // Position - 0xA0CA Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_294(int iParam0, int iParam1) // Position - 0xA0EF Hash - 0xD30D64D ^0xA6080D3D
{
	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/];
}

void func_295(Ped pedParam0, int iParam1, int iParam2) // Position - 0xA127 Hash - 0x498B41C8 ^0xF542C5C9
{
	int coreIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_293(iParam2, 0, 100);

	if (func_517(iParam1, &coreIndex))
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex, iParam2);

	return;
}

void func_296(Ped pedParam0, int iParam1) // Position - 0xA174 Hash - 0x20F01565 ^0xAC680146
{
	int coreIndex;
	char* variableName;
	char* variableName2;
	int attributeCoreValue;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_517(iParam1, &coreIndex))
		return;

	variableName = func_518(iParam1);
	variableName2 = func_519(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
	{
		attributeCoreValue = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, variableName, BUILTIN::TO_FLOAT(attributeCoreValue), -1);
	
		if (attributeCoreValue <= 20)
			PED::_SET_PED_BLACKBOARD_BOOL(pedParam0, variableName2, true, -1);
		else
			PED::_REMOVE_PED_BLACKBOARD_BOOL(pedParam0, variableName2);
	}

	return;
}

void func_297(BOOL bParam0, int iParam1) // Position - 0xA1FF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_298(BOOL bParam0, int iParam1) // Position - 0xA210 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_299(int iParam0, int iParam1) // Position - 0xA225 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

void func_300(int iParam0) // Position - 0xA236 Hash - 0x4918B04C ^0x4918B04C
{
	*iParam0 = 0;
	return;
}

void func_301(int iParam0, int iParam1) // Position - 0xA242 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_302(int iParam0, int iParam1) // Position - 0xA257 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

Vector3 func_303(eStackSize essParam0) // Position - 0xA26C Hash - 0x563C355B ^0x563C355B
{
	switch (essParam0)
	{
		case 4:
			return 1794.0404f, -1314.7915f, 43.0923f;
	
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
	
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
	
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
	
		case 33:
			return 905.92f, -421.19f, 88.23f;
	
		case 36:
			return -2476.07f, 832.13f, 141.25f;
	
		case 38:
			return -329.32f, -366.6f, 87f;
	
		case 39:
			return 97.4f, -212.47f, 111.6f;
	
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
	
		case 43:
			return 2586.4937f, -1009.1538f, 43.24f;
	
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
	
		case 51:
			return -1709.38f, -335.07f, 176.95f;
	
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
	
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
	
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
	
		case 65:
			return -2095.11f, 656.32f, 119.87f;
	
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
	
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
	
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
	
		case 78:
			return 2734.3586f, -1207.6818f, 48.6752f;
	
		case 80:
			return 2740.808f, -1312.8052f, 46.648f;
	
		case 81:
			return 2503.7546f, -1164.5312f, 48.1928f;
	
		case 84:
			return -73.18f, -392.3f, 70.84f;
	
		case 88:
			return 2480.53f, -399.62f, 41.42f;
	
		case 89:
			return 1576.261f, -251.85f, 79.21f;
	
		case 91:
			return 1496.3479f, -1083.2855f, 54.1105f;
	
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
	
		case 94:
			return 1414.4f, 248.2f, 88.85f;
	
		case 101:
			return -1378.6558f, -735.3399f, 90.8243f;
	
		case 102:
			return -1666.59f, 610.82f, 124.03f;
	
		case 103:
			return 1356.44f, 533.95f, 86.12f;
	
		case 104:
			return 2407f, -585.32f, 40.66f;
	
		case 105:
			return -219.25f, 212.93f, 94.15f;
	
		case 116:
			return 211.99f, 512.98f, 126.54f;
	
		case 117:
			return -329.2f, 797.9f, 116.89f;
	
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
	
		case 119:
			return -1043.9886f, 434.5095f, 53.6802f;
	
		case 121:
			return 2520.88f, 421.94f, 65.91f;
	
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
	
		case 133:
			return 2688.4268f, -1121.7657f, 49.6782f;
	
		case 135:
			return -576.08f, 524.9f, 97.86f;
	
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
	
		case 143:
			return 2954.45f, 523.05f, 44.47f;
	
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
	
		case 146:
			return -585.6761f, -347.21603f, 81.28532f;
	
		case 151:
			return 556.271f, 172.08f, 133.34348f;
	
		case 152:
			return 556.271f, 172.08f, 133.34348f;
	
		default:
		
	}

	return Global_1347702[essParam0 /*49*/].f_24;
}

void func_304(eStackSize essParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xA6F0 Hash - 0x8D139366 ^0xCA824361
{
	eStackSize stackSize;
	BOOL flag;
	BOOL flag2;
	var unk;
	eBlipSprite sprite;

	if (!func_153(essParam0))
		return;

	if (Global_1347702[essParam0 /*49*/].f_13 & 256 != 0 && func_74(0, false, true))
		return;

	if (Global_1347702[essParam0 /*49*/].f_12 & 16 != 0)
		return;

	if (Global_1347702[essParam0 /*49*/].f_36 == BLIP_HIGHER)
		return;

	if (func_520(32768))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
		return;

	Global_1347702[essParam0 /*49*/].f_38 = func_521(essParam0);

	if (!bParam5 && func_522(essParam0))
	{
		Global_1347702[essParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[essParam0 /*49*/].f_38, func_303(essParam0), Global_1347702[essParam0 /*49*/].f_18);
	
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
			return;
	
		MAP::SET_BLIP_SPRITE(Global_1347702[essParam0 /*49*/].f_37, Global_1347702[essParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[essParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[essParam0 /*49*/].f_38, vParam1);
	
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
			return;
	
		MAP::SET_BLIP_SPRITE(Global_1347702[essParam0 /*49*/].f_37, Global_1347702[essParam0 /*49*/].f_36, true);
	}

	if (essParam0 == 61)
	{
		func_523(8);
	}
	else if (essParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (essParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_SEAN"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (essParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (essParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (essParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if (essParam0 == 44 || essParam0 == 45 || essParam0 == 46 || essParam0 == 47 || essParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCEXO");
	}

	func_524(essParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[essParam0 /*49*/].f_37, 64, essParam0);

	if (func_17() == -1)
	{
		func_525(essParam0);
		stackSize = func_526(Global_40.f_4283);
	
		if (func_403(stackSize) && func_527(Global_1888801[stackSize /*35*/].f_13))
		{
			flag = true;
			flag2 = func_528(stackSize);
		}
	
		if (func_529(essParam0, flag, stackSize))
			func_530(Global_1347702[essParam0 /*49*/].f_15, flag2, flag, stackSize);
	}

	if (bParam4)
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
			return;

	if (Global_1347702[essParam0 /*49*/].f_13 & 1 == 0)
	{
		func_531(&(Global_1347702[essParam0 /*49*/].f_13), 1);
	
		if (!func_522(essParam0) || func_154(Global_1347702[essParam0 /*49*/].f_12, 1) || func_154(Global_1347702[essParam0 /*49*/].f_12, 512) || func_532(Global_1347702[essParam0 /*49*/].f_13, 2048))
			MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	}

	if (Global_1347702[essParam0 /*49*/].f_13 & 32768 == 0)
		if (Global_1347702[essParam0 /*49*/].f_36 == joaat("blip_rc") && Global_1347702[essParam0 /*49*/].f_12 & 1 == 0 && Global_1347702[essParam0 /*49*/].f_12 & 2 != 0)
			MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		else
			func_531(&(Global_1347702[essParam0 /*49*/].f_13), 32768);

	if (Global_1347702[essParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[essParam0] & 2 == 0)
	{
		if (func_533(essParam0))
		{
			if (essParam0 == 97)
				func_231(185, false);
			else
				func_231(186, true);
		}
		else
		{
			TEXT_LABEL_COPY(&unk, { Global_1347702[essParam0 /*49*/].f_3 }, 3);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 24);
			sprite = Global_1347702[essParam0 /*49*/].f_37;
			Global_1347702[essParam0 /*49*/].f_40 = func_202(MISC::VAR_STRING(2, &unk, sprite), 10000, 0, 0, 0, true);
		}
	
		func_534(essParam0, 2);
	}

	return;
}

Vector3 func_305(eStackSize essParam0) // Position - 0xAB47 Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_153(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_535(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

float func_306() // Position - 0xAB8D Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_307(var uParam0, int iParam1) // Position - 0xABBF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_308(var uParam0, int iParam1) // Position - 0xABD0 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_309(Hash hParam0, int iParam1) // Position - 0xABE5 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

struct<5> func_310(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xABFF Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_536(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_198(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_542(hParam0, -1823706425))
			{
				unk = { func_312(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_542(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_312(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_541(bParam1) };
		
			switch (func_200(hParam0))
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
				unk = { func_312(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_537(bParam1) };
		
			if (bParam2 && func_538(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_539(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_539(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_540(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_543(unk, &unk28, bParam1, false))
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

BOOL func_311(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xAEBC Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_544(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_409(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_96(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

struct<4> func_312(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xAF08 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_309(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_96(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_313(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xAF39 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_544(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_543(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_409(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_96(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_314(Hash hParam0) // Position - 0xAFC9 Hash - 0x229B2393 ^0x1B35F016
{
	if (func_191(hParam0, 1573112293))
		return func_545(hParam0);

	switch (func_200(hParam0))
	{
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_548();
	
		case -1823706425:
			return func_551();
	
		case -1393202694:
		case 2041469314:
			return func_545(hParam0);
	
		case -854348463:
			return func_552();
	
		case -525676072:
			return func_548();
	
		case -77448735:
			if (func_546(hParam0))
				return func_545(hParam0);
			break;
	
		case 1779021115:
			if (func_309(hParam0, 0))
				if (hParam0 == joaat("weapon_kit_camera"))
					return func_549();
		
			return func_550();
	
		case 1802292908:
			return func_547();
	
		default:
			if (func_309(hParam0, 0))
			{
				if (func_191(hParam0, 1192444843) || func_191(hParam0, -1540973036))
					return func_553();
				else if (func_191(hParam0, 1919582297))
					return func_554();
				else if (func_191(hParam0, 1147021565))
					return func_555();
			
				switch (hParam0)
				{
					case joaat("upgrade_upg_mortar_pestle"):
					case -1448210800:
						return func_556();
				
					case joaat("kit_horse_brush"):
						return func_557();
				}
			}
		
			return func_558();
	}

	return func_558();
}

BOOL func_315(var uParam0, Player plParam1, BOOL bParam2, int iParam3) // Position - 0xB14A Hash - 0x4D17FACB ^0x3553DA46
{
	func_559(plParam1);

	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}

	if (Global_1935630.f_12 || *uParam0)
		return false;

	if (func_17() == false)
		if (Global_1935496.f_7 & 131072 != 0)
			return false;

	if (iParam3 & 1 == 0)
		if (Global_1935496.f_7 & 1024 != 0)
			return false;

	if (Global_1935630.f_22)
		return false;

	if (iParam3 & 2 == 0)
		if (Global_1935496.f_7 & 32 != 0)
			return false;

	if (iParam3 & 4 == 0)
		if (Global_1935496.f_7 & 4096 != 0)
			return false;

	if (iParam3 & 8 == 0)
		if (Global_1935496.f_7 & 512 != 0)
			return false;

	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_560(bParam2);
			uParam0->f_3 = 1;
		}
	
		if (!uParam0->f_2)
			return false;
	}

	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_561(bParam2);
			uParam0->f_5 = 1;
		}
	
		if (!uParam0->f_4)
			return false;
	}

	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_562(bParam2, iParam3, true);
			uParam0->f_7 = 1;
		}
	
		if (!uParam0->f_6)
			return false;
	}

	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_47(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
	
		if (uParam0->f_10 || uParam0->f_12 || uParam0->f_8)
		{
			if (bParam2)
				func_202("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_47(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630.f_40);
				uParam0->f_15 = 1;
			}
		
			if (uParam0->f_14)
				return false;
		}
	}

	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_563(Global_35);
			uParam0->f_9 = 1;
		}
	
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40);
			uParam0->f_13 = 1;
		}
	
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_564(Global_1935630.f_40, true);
					uParam0->f_17 = 1;
				}
			
				if (!uParam0->f_16)
				{
					if (bParam2)
						func_202("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
				
					return false;
				}
			}
		}
	}

	if (iParam3 & 256 == 0)
		if (Global_1935496.f_7 & 8192 != 0)
			return false;

	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496.f_7 & 65536 != 0)
		{
			if (bParam2)
				func_202("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 2048 == 0)
		if (Global_1935496.f_7 & 32768 != 0)
			return false;

	if (iParam3 & 4096 == 0)
		if (Global_1935496.f_7 & 16384 != 0)
			return false;

	if (iParam3 & 8192 == 0)
		if (Global_1935496.f_7 & 16 == 0)
			return false;

	if (iParam3 & 16384 == 0)
		if (Global_1935496.f_7 & 256 != 0)
			return false;

	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_100();
			uParam0->f_19 = 1;
		}
	
		if (uParam0->f_18)
		{
			if (bParam2)
				func_202("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 131072 == 0)
		if (Global_1935496.f_7 & 524288 == 0)
			return false;

	if (iParam3 & 65536 == 0)
		if (Global_1935496.f_7 & 262144 == 0)
			return false;

	if (iParam3 & 524288 == 0)
		if (Global_1935496.f_7 & 2097152 == 0)
			return false;

	if (iParam3 & 1048576 == 0)
		if (Global_1935496.f_7 & 8388608 == 0)
			return false;

	if (iParam3 & 2097152 == 0)
		if (Global_1935496.f_7 & 33554432 != 0)
			return false;

	if (iParam3 & 4194304 == 0)
		if (Global_1935496.f_7 & 67108864 != 0)
			return false;

	if (iParam3 & 16777216 == 0)
		if (Global_1935496.f_7 & 134217728 == 0)
			return false;

	if (Global_1935496.f_7 & 17825988 != 0)
		return false;

	return true;
}

BOOL func_316() // Position - 0xB614 Hash - 0xC43E5A88 ^0x7B6E2EFE
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("world_player_camp_fire_kneel1") && num != joaat("world_player_camp_fire_kneel2") && num != joaat("world_player_camp_fire_kneel3") && num != joaat("world_player_camp_fire_kneel4"))
			return true;
	}

	return false;
}

BOOL func_317(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xB677 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_309(hParam0, 0))
		return false;

	num = func_198(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_565(hParam0, 1))
			return false;

	return func_407(hParam0, false, bParam2) >= iParam1;
}

BOOL func_318(BOOL bParam0) // Position - 0xB6E1 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_319(BOOL bParam0, BOOL bParam1) // Position - 0xB711 Hash - 0x81F8AB1A ^0x128D489C
{
	Ped mount;

	if (func_17() == false)
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_2439.f_28.f_19);

	if (func_566())
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_567(Global_35))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_568())
	{
		if (bParam0)
			if (func_68() != 8 && func_68() != 7)
				func_202("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, true);
			else
				func_202("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		mount = PED::GET_MOUNT(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(mount))
			if (!ENTITY::IS_ENTITY_DEAD(mount))
				if (ENTITY::IS_ENTITY_IN_AIR(mount, 1) || PED::IS_PED_SWIMMING(mount))
					return false;
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}

	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_53(PLAYER::PLAYER_ID(), true, true, false))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
				func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (func_569(&Global_1393447, 16))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_570())
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_98(joaat("simple_crafting")) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0)
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false) || PED::IS_PED_IN_ANY_BOAT(Global_35) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_74(0, true, true) && !func_571(1))
	{
		if (bParam0)
			if (func_217(15))
				func_202("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, true);
			else
				func_202("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_572() == 8)
		return false;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_119(8388608))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_40(8388608))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_573(func_170()))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_80() || func_574(func_170()) == 9 || func_575(func_170()) && !func_576())
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_577(Global_35))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_578())
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496.f_131, true) > 2f)
	{
		Global_1935496.f_128 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
		Global_1935496.f_131 = { Global_36 };
	}

	if (func_579(Global_35, Global_1935496.f_128, 4f, true, true))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_580(Global_36, 5f))
	{
		if (bParam0)
			func_202("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (BUILTIN::VDIST2(Global_36, Global_1347702[74 /*49*/].f_24) < 144f && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rcm_evelyn_miller4")) > 0)
		return false;

	return true;
}

BOOL func_320() // Position - 0xBC2C Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_17() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_321(int iParam0, int iParam1) // Position - 0xBC52 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_177(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_92(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

void func_322(int iParam0, int iParam1) // Position - 0xBCAA Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_155(iParam0))
		return;

	func_581(iParam0, iParam1);
	return;
}

BOOL func_323(int iParam0) // Position - 0xBCC7 Hash - 0xBF2B4762 ^0xBF2B4762
{
	return Global_40.f_490.f_402[iParam0] & true != 0;
}

BOOL func_324(int iParam0) // Position - 0xBCE0 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_17() != -1)
		return false;

	return func_339(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_325(int iParam0) // Position - 0xBD03 Hash - 0x9921E361 ^0x80761F6A
{
	return Global_40.f_12004.f_6 && iParam0 != false;
}

void func_326(int iParam0) // Position - 0xBD18 Hash - 0x25D46568 ^0xDB7BDC37
{
	Global_40.f_12019.f_26 = Global_40.f_12019.f_26 || iParam0;
	return;
}

void func_327(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0xBD33 Hash - 0xD806FABF ^0xDD199C8E
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
		
			if (func_176() && func_427(38) || func_324(38))
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
		
			if (func_176() && func_427(39) || func_324(39))
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
		
			if (func_176() && func_427(49) || func_324(49))
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
		if (func_176() && func_427(38) || func_324(38))
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
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_584(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_425(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_176() && func_427(39) || func_324(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_176() && func_427(49) || func_324(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

void func_328(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0xC2E2 Hash - 0x2D6CF941 ^0xD33D3B78
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
		
			if (func_176() && func_427(38) || func_324(38))
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
			if (func_176() && func_427(39) || func_324(39))
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
			if (func_176() && func_427(41) || func_324(41))
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
			num = func_585(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_176() && func_427(49) || func_324(49))
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
			num = func_585(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_586(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_587(iParam0, hash, hash2);
	func_588(iParam0, hash, unk, str5, str4);
	func_589(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_590(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_591(iParam0, hash, hash2, iParam6);
	func_592(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_329(int iParam0) // Position - 0xC71F Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

BOOL func_330(int iParam0) // Position - 0xC73A Hash - 0x9921E361 ^0x3BD1D7
{
	return Global_40.f_12004.f_1 && iParam0 != false;
}

void func_331(int iParam0) // Position - 0xC74F Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12019.f_3 = Global_40.f_12019.f_3 || iParam0;
	return;
}

void func_332(int iParam0) // Position - 0xC76A Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

BOOL func_333(int iParam0) // Position - 0xC785 Hash - 0x9921E361 ^0x9A354EEF
{
	return Global_40.f_12004.f_3 && iParam0 != false;
}

void func_334(int iParam0) // Position - 0xC79A Hash - 0x25D46568 ^0xB710C32B
{
	Global_40.f_12019.f_4 = Global_40.f_12019.f_4 || iParam0;
	return;
}

void func_335(int iParam0) // Position - 0xC7B5 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

BOOL func_336(int iParam0) // Position - 0xC7D0 Hash - 0x9921E361 ^0x59BA6F7C
{
	return Global_40.f_12004.f_5 && iParam0 != false;
}

void func_337(int iParam0) // Position - 0xC7E5 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12019.f_2 = Global_40.f_12019.f_2 || iParam0;
	return;
}

void func_338(int iParam0) // Position - 0xC800 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

BOOL func_339(int iParam0, BOOL bParam1) // Position - 0xC81B Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_593(iParam0))
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

BOOL func_340(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0xC84C Hash - 0x5AD1F9FD ^0x42FC5FEC
{
	Hash interactionAnimHash;

	switch (func_341(hParam0, -949239683))
	{
		case -1565009253:
			if (!bParam1)
			{
				interactionAnimHash = 1254219723;
			
				if (bParam2)
					interactionAnimHash = -2077441721;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1273369295:
			if (!bParam1)
			{
				interactionAnimHash = -27851152;
			
				if (bParam2)
					interactionAnimHash = -1340223099;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1229959999:
			if (!bParam1)
			{
				interactionAnimHash = 1159762194;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -1050374492:
			if (!bParam1)
			{
				interactionAnimHash = 343713021;
			
				if (bParam2)
					interactionAnimHash = 760057945;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -873135685:
			if (!bParam1)
			{
				interactionAnimHash = -1418730365;
			
				if (bParam2)
					interactionAnimHash = -1570312122;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case -164980960:
			if (!bParam1)
			{
				interactionAnimHash = -138141811;
			
				if (bParam2)
					interactionAnimHash = 2000759837;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 10252101:
			if (!bParam1)
			{
				interactionAnimHash = -1246302402;
			
				if (bParam2)
					interactionAnimHash = -487508500;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 24248412:
			if (!bParam1)
			{
				interactionAnimHash = 1014486005;
			
				if (bParam2)
					interactionAnimHash = 416212934;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 82200319:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 733893097:
			if (!bParam1)
			{
				interactionAnimHash = 436157482;
			
				if (bParam2)
					interactionAnimHash = 1972630951;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 871191033:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1513351077:
			if (!bParam1)
			{
				interactionAnimHash = 889797228;
			
				if (bParam2)
					interactionAnimHash = -1043439814;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1712126263:
			if (!bParam1)
			{
				interactionAnimHash = 1589555562;
			
				if (bParam2)
					interactionAnimHash = -1424266966;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	
		case 1894156335:
			if (!bParam1)
			{
				interactionAnimHash = 1801769345;
			
				if (bParam2)
					interactionAnimHash = 374699583;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, iParam4);
				return true;
			}
			break;
	}

	return false;
}

int func_341(Hash hParam0, int iParam1) // Position - 0xCB68 Hash - 0x7A1C2599 ^0xFF9B5634
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

void func_342(Hash hParam0) // Position - 0xCBB2 Hash - 0x26CEB274 ^0x33203B5B
{
	Hash hash;

	hash = joaat("apply_lotion_left_hand");

	switch (func_594())
	{
		case 0:
			hash = joaat("apply_lotion_left_hand");
			break;
	
		case 1:
			hash = joaat("apply_lotion_both_hands");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("apply_lotion_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_343() // Position - 0xCC32 Hash - 0xB6A628E2 ^0xC1A3BB0C
{
	return 1 == Global_40.f_7748.f_3;
}

void func_344(Hash hParam0) // Position - 0xCC44 Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_594())
	{
		case 0:
			hash = 16939881;
			break;
	
		case 1:
			hash = -1165614444;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 968591133;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_345(Hash hParam0, BOOL bParam1) // Position - 0xCCC4 Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_594())
	{
		case 0:
			if (bParam1)
				hash = -2137817968;
			else
				hash = -45077177;
			break;
	
		case 1:
			if (bParam1)
				hash = -1947358597;
			else
				hash = 36807409;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = -750686877;
			else
				hash = 1293288723;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_346(Hash hParam0, BOOL bParam1) // Position - 0xCD71 Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_594())
	{
		case 0:
			if (bParam1)
				hash = -447623645;
			else
				hash = 1700817728;
			break;
	
		case 1:
			if (bParam1)
				hash = 1880532390;
			else
				hash = -480771797;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			if (bParam1)
				hash = 468890170;
			else
				hash = 764367205;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_347(Hash hParam0) // Position - 0xCE1E Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_594())
	{
		case 0:
			hash = joaat("use_large_bottle_combat_left_hand");
			break;
	
		case 1:
			hash = joaat("use_large_bottle_combat_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_large_bottle_combat_rifle");
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_348(Hash hParam0) // Position - 0xCE9E Hash - 0x26CEB274 ^0xC6610213
{
	Hash hash;

	hash = -680642132;

	switch (func_594())
	{
		case 0:
			hash = -680642132;
			break;
	
		case 1:
			hash = -267849149;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 1759003815;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_349(Hash hParam0) // Position - 0xCF1E Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_594())
	{
		case 0:
			hash = 2105609037;
			break;
	
		case 1:
			hash = -1595716047;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -457187977;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_350(Hash hParam0) // Position - 0xCF9E Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_594())
	{
		case 0:
			hash = 1964324114;
			break;
	
		case 1:
			hash = 1826089606;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -654111932;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_351(Hash hParam0) // Position - 0xD01E Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_594())
	{
		case 0:
			hash = -1530144981;
			break;
	
		case 1:
			hash = -312546963;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = -389189374;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_352(Hash hParam0) // Position - 0xD09E Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_594())
	{
		case 0:
			hash = -1074475556;
			break;
	
		case 1:
			hash = -1846586910;
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = 392506445;
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_353(Hash hParam0) // Position - 0xD11E Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_594())
	{
		case 0:
			hash = joaat("use_stimulant_injection_quick_left_hand");
			break;
	
		case 1:
			hash = joaat("use_stimulant_injection_quick_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_stimulant_injection_quick_left_hand_rifle");
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_354(Hash hParam0) // Position - 0xD19E Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_594())
	{
		case 0:
			hash = joaat("quick_smoke_cigarette_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigarette_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigarette_rifle");
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_355(Hash hParam0) // Position - 0xD21E Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_594())
	{
		case 0:
			hash = joaat("quick_smoke_cigar_left_hand");
			break;
	
		case 1:
			hash = joaat("quick_smoke_cigar_right_hand");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("quick_smoke_cigar_rifle");
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_356(Hash hParam0) // Position - 0xD29E Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_594())
	{
		case 0:
			hash = joaat("use_handfull_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_handfull_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_handfull_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		if (func_191(hParam0, 1573112293))
			func_598(func_597(&hParam0), true, 1);
	
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_357(Hash hParam0) // Position - 0xD338 Hash - 0x26CEB274 ^0x36AF879B
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_594())
	{
		case 0:
			hash = joaat("use_tonic_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_358(Hash hParam0) // Position - 0xD3B8 Hash - 0x26CEB274 ^0xF38E7004
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_594())
	{
		case 0:
			hash = joaat("use_tonic_potent_satchel_left_hand_quick");
			break;
	
		case 1:
			hash = joaat("use_tonic_potent_satchel_unarmed_quick");
			break;
	
		case 2:
			hash = 0;
			break;
	
		case 3:
			hash = joaat("use_tonic_potent_satchel_rifle_quick");
			break;
	}

	if (hash != 0)
	{
		func_595(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_596(hParam0, true);
		func_230(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_359(int iParam0, int iParam1) // Position - 0xD438 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_360(const char* sParam0) // Position - 0xD447 Hash - 0x2124511C ^0xA40AAA4F
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

void func_361(int iParam0) // Position - 0xD481 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_359(iParam0, 1))
		func_599(1);

	return;
}

BOOL func_362(eStackSize essParam0) // Position - 0xD498 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_600(essParam0))
		return false;

	if (func_601(essParam0, 4))
		return true;

	return false;
}

BOOL func_363(int iParam0) // Position - 0xD4BD Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_205(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_602(ped))
		return true;

	return false;
}

int func_364() // Position - 0xD51E Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3054;
}

void func_365(BOOL bParam0) // Position - 0xD52F Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_366(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xD542 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_603(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_604(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_365(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_603(iParam0))
				return;
		
			func_604(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_365(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_385(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_367() // Position - 0xD74E Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_368(Hash hParam0) // Position - 0xD75D Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_605())
		return false;

	if (!func_309(hParam0, 0))
		return false;

	if (!func_317(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_369(Hash hParam0) // Position - 0xD794 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_606(hParam0);
}

void func_370(var uParam0, int iParam1) // Position - 0xD7A2 Hash - 0xF55E891F ^0xF55E891F
{
	func_607(uParam0, iParam1);
	return;
}

int func_371(Hash hParam0, Object obParam1) // Position - 0xD7B2 Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_608(hParam0);

	if (func_191(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_609(&hash))
			if (flag)
				interactionAnimHash = func_610();
			else
				interactionAnimHash = func_611();
		else if (func_398(obParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_612();
		else
			interactionAnimHash = func_613();
	else if (func_614(&hash))
		if (func_191(hash, -1303648999))
			interactionAnimHash = func_610();
		else
			interactionAnimHash = func_611();
	else if (flag)
		interactionAnimHash = func_612();
	else
		interactionAnimHash = func_613();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, obParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_372(BOOL bParam0) // Position - 0xD885 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_373() // Position - 0xD896 Hash - 0xB6203BF0 ^0x217DD714
{
	func_615(&(Global_1946054.f_2776));
	func_616(32768);
	func_617(1108822547, 8, 6);
	return;
}

BOOL func_374(int iParam0, BOOL bParam1) // Position - 0xD8BD Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_618(iParam0, false) < func_619(iParam0, bParam1);
}

BOOL func_375(Hash hParam0) // Position - 0xD8D5 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_620(hParam0, &unk);
}

void func_376(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD8E5 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_621(hParam0))
		return;

	hash = func_200(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_622(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_622(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_622(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_622(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_622(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_622(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_377(0))
	{
		func_623(hParam0, true);
	
		if (func_624() == 1160113249)
			func_623(func_377(-2125499975), false);
		else
			func_623(func_377(1160113249), false);
	}

	func_625();

	if (func_626(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_96(false), hParam0, 0);

	func_212(hParam0, bParam3);

	if (bParam2)
		func_627(false, false);

	return;
}

Hash func_377(int iParam0) // Position - 0xDA4B Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_624();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_378(Hash hParam0, Hash hParam1) // Position - 0xDA76 Hash - 0x4EAC6B69 ^0x4EAC6B69
{
	Hash hash;

	hash = func_200(hParam1);

	if (hash != func_200(hParam0))
		return;

	func_628(hParam0, hParam1, true);
	return;
}

Hash func_379(var uParam0) // Position - 0xDA9D Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_629(i, 1);
	}

	return -358215195;
}

int func_380(Hash hParam0, int iParam1) // Position - 0xDAD8 Hash - 0x9D981F95 ^0x9D981F95
{
	switch (hParam0)
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

BOOL func_381(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDCA9 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_630();

	if (iParam2 == 39)
	{
		unk = { func_310(hParam0, true, false) };
		iParam2 = func_380(func_379(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_191(hParam0, 866047851) && func_631(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_372(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_632(func_629(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_633(iParam2);
	func_634(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_635(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_635(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_636(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_637(hParam0, iParam2, hParam1, func_17() != -1);

	if (bParam4)
		func_638(&(Global_1946054.f_1378), true, 3);
	else
		func_638(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_617(func_629(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_382(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDEB6 Hash - 0x5AF76643 ^0x5AF76643
{
	func_639(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

int func_383(Hash hParam0) // Position - 0xDECF Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_380(hParam0, 1);

	switch (hParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_384(int iParam0) // Position - 0xDF33 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_640(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_641(num);
	return;
}

void func_385(int iParam0, int iParam1, int iParam2) // Position - 0xDF77 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_641(num);
	return;
}

int func_386(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xDF97 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_309(hParam0, 0))
		return 0;

	guid = { func_312(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_96(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_387() // Position - 0xDFDF Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1914319.f_18996.f_1;
}

BOOL func_388() // Position - 0xDFF0 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_18996;
}

char* func_389() // Position - 0xDFFF Hash - 0xC695042A ^0x6E7B2786
{
	switch (Global_1914319.f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
	
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
	
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
	
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
	
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
	
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
	
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
	
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
	
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
	
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
	
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
	
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
	
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
	
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
	
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
	
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
	
		default:
		
	}

	return "";
}

BOOL func_390(int iParam0) // Position - 0xE0EA Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_593(iParam0);
	return num == 3 || num == 4;
}

Ped func_391(int iParam0) // Position - 0xE108 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_392(int iParam0) // Position - 0xE13B Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_393(int iParam0) // Position - 0xE16F Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_394(float fParam0, Any anParam1, float fParam2) // Position - 0xE1A5 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_395(int iParam0) // Position - 0xE1BA Hash - 0x4D892971 ^0xAE6B238D
{
	return func_398(Global_1128974[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/].f_58, iParam0);
}

BOOL func_396() // Position - 0xE1D4 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_395(2);
}

BOOL func_397(int iParam0) // Position - 0xE1E2 Hash - 0x863407EE ^0x2FA2F34D
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1146476.f_1 && iParam0 != false;
}

BOOL func_398(Object obParam0, int iParam1) // Position - 0xE203 Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && iParam1 != false;
}

BOOL func_399() // Position - 0xE212 Hash - 0x8A1C1656 ^0x17C26F3D
{
	if (func_318(false) && !func_642() || func_643() || Global_1935689.f_1 || func_644())
		return false;

	return true;
}

void func_400(int iParam0) // Position - 0xE251 Hash - 0x29A8F290 ^0x5B1674A8
{
	Global_1898068.f_8 = iParam0;
	return;
}

var func_401(int iParam0, int iParam1) // Position - 0xE261 Hash - 0x42C305C ^0x81DF2F42
{
	return func_645(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_402(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, BOOL bParam17, BOOL bParam18) // Position - 0xE27F Hash - 0xC0B30484 ^0xEDC09E5
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam16))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam17)
	{
		if (iParam0.f_15)
		{
			if (bParam18)
			{
				unk.f_12 = 255;
				unk.f_13 = 255;
				unk.f_17 = -1;
				unk = { iParam0 };
				unk.f_16 = uParam16;
				unk.f_17 = iParam0.f_2;
				func_646(&(Global_1058888.f_43130), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 16, 4, &uParam16);
	return;
}

BOOL func_403(eStackSize essParam0) // Position - 0xE30D Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

Hash func_404(Hash hParam0, int iParam1) // Position - 0xE323 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_309(hParam0, 0))
		return 0;

	num = func_198(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_191(hParam0, 1399091007))
	{
		func_647(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_405(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE39D Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_309(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_648())
	{
		func_649(hParam0, iParam1, bParam2, bParam4);
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
		else if (bParam2 && func_430(hParam0, 2097152))
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
	else if (!func_651(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_652(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_473(hParam0)), num), num5);

	if (iParam1 == 1 || func_191(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_473(hParam0));

	func_653(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

struct<2> func_406(Hash hParam0) // Position - 0xE5F2 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_309(hParam0, 0))
		return unk;

	if (func_191(hParam0, -305066475))
		if (func_17() == -1)
			if (func_191(hParam0, -537818634))
				return func_654(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_654(joaat("deadeye_items"));
	else if (func_191(hParam0, -537818634))
		return func_654(joaat("medicine_items"));

	if (func_191(hParam0, 2084895747))
		return func_654(joaat("lock_breaker_items"));

	return unk3;
}

int func_407(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE686 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_309(hParam0, 0))
		return 0;

	num = func_198(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_404(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_655(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_96(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_408(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xE708 Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_656(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_657(&unk, func_537(false));

	if (!func_658(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_659(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_313(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_660(num);
	num3 < iParam1;
	return true;
}

BOOL func_409(BOOL bParam0) // Position - 0xE7D3 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_17() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_96(bParam0));
}

void func_410(Hash hParam0, int iParam1) // Position - 0xE7F1 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_191(hParam0, 606799272))
			func_661(hParam0, iParam1);
	
		if (func_191(hParam0, -1112814642) && func_191(hParam0, -1697809989))
			func_456(hParam0, iParam1, true, false);
	}

	return;
}

void func_411(int iParam0, var uParam1, var uParam2) // Position - 0xE844 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_412(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xE860 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_662(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_663(iParam0))
		return false;

	if (func_664(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_665(iParam0, 1) || func_520(32768))
		if (!func_665(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_666())
		return false;

	return true;
}

void func_413(int iParam0, int iParam1) // Position - 0xE902 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_414(Ped pedParam0) // Position - 0xE926 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_415() // Position - 0xE941 Hash - 0x5516EB92 ^0x96671886
{
	Global_1911914.f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914.f_1581 = 1;
	return;
}

BOOL func_416(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xE95C Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_17() == -1)
	{
		if (func_667(hParam0) && func_668(hParam0))
		{
			func_669(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_417(Hash hParam0, var uParam1, int iParam2) // Position - 0xE9B3 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_670(hParam0, uParam1);
	unk = { func_310(hParam0, false, true) };
	num = func_671(hParam0, &unk, false, false);
	num2 = func_672(hParam0, false);

	if (num > 1 && !func_673() && num2 + iParam2 >= num)
		if (func_191(hParam0, -2051813666))
			func_231(583, true);
		else
			func_231(582, false);

	if (func_674(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_418(Hash hParam0, BOOL bParam1) // Position - 0xEA4F Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_341(hParam0, -949239683))
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

BOOL func_419(Hash hParam0) // Position - 0xEAFB Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_17() != -1)
		return false;

	return func_420(hParam0) != 0;
}

Hash func_420(Hash hParam0) // Position - 0xEB17 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_675(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_676(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_421(Hash hParam0) // Position - 0xEB53 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_422(Hash hParam0) // Position - 0xEB61 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_675(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_421(collectableItemHash))
			if (func_317(func_676(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_423(Hash hParam0) // Position - 0xEBAE Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_677(48);
	func_86(false, -1);
	return;
}

int func_424(Hash hParam0) // Position - 0xEBC9 Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_425(Hash hParam0) // Position - 0xEBDC Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_426(int iParam0) // Position - 0xEBEF Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_17() != -1)
		return false;

	return func_339(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_427(eStackSize essParam0) // Position - 0xEC12 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_17() != -1)
		return false;

	if (!func_153(essParam0))
		return false;

	return func_390(Global_1347702[essParam0 /*49*/].f_15);
}

int func_428() // Position - 0xEC42 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_317(func_678(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_429(int iParam0) // Position - 0xEC77 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

BOOL func_430(Hash hParam0, int iParam1) // Position - 0xEC8E Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_309(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_431(int iParam0) // Position - 0xECAD Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_679(iParam0))
		return false;

	return func_680(iParam0);
}

void func_432(int iParam0) // Position - 0xECC9 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_679(iParam0))
		return;

	func_681(iParam0);
	func_682(iParam0);
	return;
}

Hash func_433(Hash hParam0, BOOL bParam1) // Position - 0xECEA Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_309(hash, 0))
		if (bParam1)
			if (func_683(hash) || func_684(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_434(Hash hParam0, BOOL bParam1) // Position - 0xEE70 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_309(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_435(Hash hParam0) // Position - 0xEE9C Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_685(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_436(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0xEED6 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_310(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_686(398 + i, 1);
		
			if (func_539(hParam0, &unk, hash, false))
			{
				if (func_540(hParam0, &unk6, hash))
				{
					unk28 = { func_312(hParam0, unk, hash, false) };
					func_313(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_409(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_437(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_687(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_437(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xF028 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_439(hParam0))
		return false;

	if (!func_409(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_438(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF063 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_434(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_17() == -1)
		{
			func_435(weaponHash);
		
			if (hParam1 == 1248274121)
				func_688(weaponHash);
		}
	
		if (!func_674(hParam0, &unk, 1, false, false))
		{
			func_669(hParam0, 1, false, uParam2, hParam1);
			num = func_689(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_436(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_436(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_436(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_690())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_691(weaponHash))
				{
					func_436(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_436(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_692(Global_35, 2, false, true);
			
				if (func_685(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_431(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_685(weaponHash2) && func_431(24))
					if (!func_436(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_436(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_436(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_231(480, true);

	return true;
}

BOOL func_439(Hash hParam0) // Position - 0xF26F Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_440(Hash hParam0, var uParam1, Hash hParam2) // Position - 0xF27D Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_439(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_685(weaponTypeFromAmmoType))
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

	if (func_317(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_474(func_693(hParam0), func_473(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_17() == -1)
			if (func_339(Global_1835011[14 /*74*/].f_1, true))
				func_231(416, false);

	if (num == 0)
		return false;

	if (func_409(false))
	{
		if (func_437(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_479(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_441(Hash hParam0) // Position - 0xF3C6 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_694() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_695(Global_35, hParam0, &unk))
			func_211(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_261();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_261();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_463();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_461();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_261();
			break;
	}

	return;
}

void func_442(Hash hParam0) // Position - 0xF4CD Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_697();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_463();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_696();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_461();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_464();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_462();
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
			func_261();
			break;
	}

	return;
}

struct<2> func_443(int iParam0) // Position - 0xF6B8 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_444(var uParam0, var uParam1, int iParam2) // Position - 0xF6CA Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_445(int iParam0, int iParam1) // Position - 0xF6DA Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_446(Hash hParam0) // Position - 0xF6F0 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_191(hParam0, -2017733358);

	if (func_698() < 3)
		if (flag)
			if (func_700(func_699(hParam0), hParam0))
				func_474(79, func_473(func_699(hParam0)), true);
			else
				func_474(78, func_473(func_699(hParam0)), true);
		else
			func_474(80, func_473(func_701(hParam0)), true);

	return;
}

BOOL func_447() // Position - 0xF75D Hash - 0x452521BB ^0x7FA3002C
{
	if (func_702(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_702(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_702(joaat("document_arthur_high_bounty_1"), 400) || func_702(joaat("document_arthur_high_bounty_2"), 400) || func_702(joaat("document_arthur_has_poster_1"), 400) || func_702(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_448(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0xF7D3 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_703(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_704(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_705(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_449(Hash hParam0) // Position - 0xF81A Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_328(43, 0, 0, joaat("exotic_stage_01"), func_706(1), false, -1, false);
			func_707(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_328(39, 0, 0, 0, 0, false, 1, false);
			func_327(39, 0, 0, 0, 0, -1, 0);
			func_332(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_328(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_328(43, 0, 0, joaat("exotic_stage_02"), func_706(2), false, -1, false);
			func_707(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_328(43, 0, 0, joaat("exotic_stage_03"), func_706(4), false, -1, false);
			func_707(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_328(49, 0, 0, 0, 0, false, 1, false);
			func_327(49, 0, 0, 0, 0, -1, 0);
			func_338(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_328(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_327(51, 0, 0, 0, 0, -1, 0);
			func_329(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_328(41, 0, 0, 0, 0, false, 1, false);
			func_327(41, 0, 0, 0, 0, -1, 0);
			func_335(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_328(43, 0, 0, joaat("exotic_stage_05"), func_706(16), false, -1, false);
			func_707(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_328(43, 0, 0, joaat("exotic_stage_04"), func_706(8), false, -1, false);
			func_707(8);
			break;
	}

	return;
}

void func_450(Hash hParam0) // Position - 0xF9B0 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_708() == 1)
	{
		if (func_324(39))
		{
			func_231(342, false);
		}
		else
		{
			func_231(343, false);
			func_332(1);
		}
	}

	if (func_708() >= 30)
		func_231(344, false);

	func_328(39, 0, 0, 0, 0, false, -1, false);
	func_327(39, 0, 0, func_708(), 30, 1, 0);
	return;
}

void func_451(Hash hParam0) // Position - 0xFA0F Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_709() == 1)
	{
		if (func_324(49))
		{
			func_231(409, false);
		}
		else
		{
			func_231(410, false);
			func_338(1);
		}
	}

	if (func_709() >= 10)
		func_231(411, false);

	func_328(49, 0, 0, 0, 0, false, -1, false);
	func_327(49, 0, 0, func_709(), 10, 1, 0);
	return;
}

void func_452(Hash hParam0) // Position - 0xFA6E Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_231(438, false);
			func_710(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_328(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_327(51, 0, 0, num, func_585(joaat("taxidermy_order_05"), 20), 1, 0);
			func_329(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_710(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_328(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_327(51, 0, 0, num, func_585(joaat("taxidermy_order_04"), 20), 1, 0);
			func_329(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_710(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_328(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_327(51, 0, 0, num, func_585(joaat("taxidermy_order_03"), 20), 1, 0);
			func_329(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_231(437, false);
			func_231(440, false);
			func_710(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_328(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_327(51, 0, 0, num, func_585(joaat("taxidermy_order_01"), 20), 1, 0);
			func_329(1);
			func_711(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_710(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_328(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_327(51, 0, 0, num, func_585(joaat("taxidermy_order_02"), 20), 1, 0);
			func_329(8);
			break;
	
		default:
			func_231(439, false);
			break;
	}

	return;
}

void func_453() // Position - 0xFC5C Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_454(Hash hParam0, int iParam1) // Position - 0xFC80 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_17() == -1)
	{
		if (!func_324(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_231(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_231(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_231(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_231(400, false);
		}
		else if (func_191(hParam0, 412399755))
		{
			func_712(joaat("exotic_stage_01"));
		
			if (func_713() == 0)
			{
				func_86(false, 10);
				num2 = func_714(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_715(hParam0) < func_716(hParam0))
					{
						func_328(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_327(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_324(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_231(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_231(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_231(401, false);
		}
		else if (func_191(hParam0, 709057512))
		{
			func_712(joaat("exotic_stage_02"));
		
			if (func_713() == 1)
			{
				func_86(false, 10);
				num2 = func_714(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_715(hParam0) < func_716(hParam0))
					{
						func_328(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_327(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_324(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_231(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_231(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_231(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_231(398, false);
		}
		else if (func_191(hParam0, -1478961327))
		{
			func_712(joaat("exotic_stage_03"));
		
			if (func_713() == 2)
			{
				func_86(false, 10);
				num2 = func_714(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_717(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_718(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_677(48);
					}
				
					if (func_715(hParam0) < func_716(hParam0))
					{
						func_328(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_327(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_715(hParam0) < func_716(hParam0))
					{
						func_328(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_327(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_324(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_231(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_231(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_231(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_231(406, false);
		}
		else if (func_191(hParam0, -1238404098))
		{
			func_712(joaat("exotic_stage_04"));
		
			if (func_713() == 3)
			{
				func_86(false, 10);
				num2 = func_714(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_715(hParam0) < func_716(hParam0))
					{
						func_328(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_327(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_324(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_231(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_231(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_231(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_231(403, false);
		}
		else if (func_191(hParam0, 1160548794))
		{
			func_712(joaat("exotic_stage_05"));
		
			if (func_713() == 4)
			{
				func_86(false, 10);
				num2 = func_714(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_715(hParam0) < func_716(hParam0))
					{
						func_328(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_327(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_455(Hash hParam0) // Position - 0x1019C Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_717(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_718(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_677(48);
		}
	}

	return;
}

void func_456(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x101DC Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_317(func_719(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_720(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_721(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_457(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x1023C Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_17() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_448(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_448(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_448(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_448(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_448(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_448(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_448(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_448(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_448(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_722())
				func_448(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_448(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_448(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_448(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_448(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_448(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_448(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_448(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_448(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_448(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_448(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_448(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_448(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_448(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_448(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_448(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_448(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_448(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_458(Hash hParam0) // Position - 0x10614 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_324(41))
		func_231(363, false);
	else
		func_231(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_723(joaat("legendary_fish_02"));
			func_724(joaat("legendary_fishing_spot_02"));
			func_725(joaat("legendary_fishing_spot_02"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_723(joaat("legendary_fish_06"));
			func_724(joaat("legendary_fishing_spot_06"));
			func_725(joaat("legendary_fishing_spot_06"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_723(joaat("legendary_fish_13"));
			func_724(joaat("legendary_fishing_spot_13"));
			func_725(joaat("legendary_fishing_spot_13"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_723(joaat("legendary_fish_03"));
			func_724(joaat("legendary_fishing_spot_03"));
			func_725(joaat("legendary_fishing_spot_03"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_723(joaat("legendary_fish_08"));
			func_724(joaat("legendary_fishing_spot_08"));
			func_725(joaat("legendary_fishing_spot_08"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_723(joaat("legendary_fish_12"));
			func_724(joaat("legendary_fishing_spot_12"));
			func_725(joaat("legendary_fishing_spot_12"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_723(joaat("legendary_fish_05"));
			func_724(joaat("legendary_fishing_spot_05"));
			func_725(joaat("legendary_fishing_spot_05"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_723(joaat("legendary_fish_04"));
			func_724(joaat("legendary_fishing_spot_04"));
			func_725(joaat("legendary_fishing_spot_04"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_723(joaat("legendary_fish_14"));
			func_724(joaat("legendary_fishing_spot_14"));
			func_725(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_723(joaat("legendary_fish_09"));
			func_724(joaat("legendary_fishing_spot_09"));
			func_725(joaat("legendary_fishing_spot_09"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_723(joaat("legendary_fish_07"));
			func_724(joaat("legendary_fishing_spot_07"));
			func_725(joaat("legendary_fishing_spot_07"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_723(joaat("legendary_fish_01"));
			func_724(joaat("legendary_fishing_spot_01"));
			func_725(joaat("legendary_fishing_spot_01"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_723(joaat("legendary_fish_11"));
			func_724(joaat("legendary_fishing_spot_11"));
			func_725(joaat("legendary_fishing_spot_11"));
			func_86(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_723(joaat("legendary_fish_10"));
			func_724(joaat("legendary_fishing_spot_10"));
			func_725(joaat("legendary_fishing_spot_10"));
			func_86(false, 10);
			break;
	}

	return;
}

void func_459(Hash hParam0, var uParam1) // Position - 0x10893 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_647(hParam0, uParam1, &unk);
	return;
}

BOOL func_460(var uParam0, BOOL bParam1) // Position - 0x108A5 Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_692(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_692(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_726("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_659(&unk, i, num, num2))
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
	
		func_660(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_461() // Position - 0x1096E Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_462() // Position - 0x10988 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_463() // Position - 0x109BD Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_464() // Position - 0x109D9 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_465(int iParam0, int iParam1, BOOL bParam2) // Position - 0x109F3 Hash - 0x968DA278 ^0x279CF176
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

void func_466(int iParam0, BOOL bParam1) // Position - 0x10DCB Hash - 0x922C415B ^0xD02B57AA
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
	func_582(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_467(int iParam0) // Position - 0x10EE2 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_468(int iParam0) // Position - 0x10EFD Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_469(int iParam0) // Position - 0x10F18 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_470(int iParam0) // Position - 0x10F33 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_471(int iParam0) // Position - 0x10F4E Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_472(int iParam0) // Position - 0x10F69 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_473(Hash hParam0) // Position - 0x10F84 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_309(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_474(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x10F9D Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_411(iParam0, &num, &num2);

	if (!func_412(iParam0, num, num2, bParam2))
		return;

	if (!func_665(iParam0, 1024))
		return;

	func_413(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_475(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10FFD Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_411(iParam0, &num, &num2);

	if (!func_412(iParam0, num, num2, bParam2))
		return;

	if (!func_665(iParam0, 1024))
		return;

	func_413(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_476() // Position - 0x11078 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_675())
		return func_477();

	endRange = func_675() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_675(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_727(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_676(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_477() // Position - 0x110F2 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_675());
	return func_676(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_478(var uParam0) // Position - 0x11115 Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_479(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1116A Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_309(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_310(hParam0, false, true) };
	unk6 = { func_312(hParam0, unk, unk.f_4, false) };
	return func_728(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_480(Hash hParam0) // Position - 0x111B9 Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_17() != -1)
		return;

	switch (func_200(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_208(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_207(hParam0);
		
			if (func_600(stackSize))
				func_729(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_208(30, hParam0, 0, 0, false);
		
			if (func_624() == -2125499975 || func_624() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_208(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_624() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_208(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_374(-525676072, false))
				if (func_730(-525676072, &hash))
					func_208(33, hash, 0, 0, false);
		
			func_208(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_618(81053684, false) <= 0)
				func_208(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_731(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_211(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_432(24);
	
		if (func_460(&hash2, false))
			func_436(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_481(Hash hParam0) // Position - 0x1138B Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_191(hParam0, 943695443))
		func_732(0, hParam0);
	else if (func_191(hParam0, -2096528786))
		func_732(1, hParam0);
	else if (func_191(hParam0, -1094167013))
		func_732(2, hParam0);
	else if (func_191(hParam0, 1936654645))
		func_732(3, hParam0);
	else if (func_191(hParam0, 1306489306))
		func_732(4, hParam0);
	else if (func_191(hParam0, 435762317))
		func_732(5, hParam0);
	else if (func_191(hParam0, 1259363210))
		func_732(6, hParam0);
	else if (func_191(hParam0, 881398259))
		func_732(7, hParam0);
	else if (func_191(hParam0, -541549214))
		func_732(8, hParam0);
	else if (func_191(hParam0, 130796156))
		func_732(-1, hParam0);

	return;
}

int func_482(Hash hParam0, int iParam1) // Position - 0x11481 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_733(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_734(hParam0, &unk5, &unk, iParam1);
}

void func_483(Hash hParam0) // Position - 0x114AA Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_17() == -1)
				if (func_339(Global_1835011[4 /*74*/].f_1, true))
					func_231(109, true);
			break;
	}

	return;
}

void func_484(Hash hParam0, int iParam1) // Position - 0x114E3 Hash - 0x3053C451 ^0x56C2A142
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_735(0));
	func_653(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_737(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

BOOL func_485(var uParam0) // Position - 0x11523 Hash - 0x39705408 ^0x39705408
{
	return func_102(*uParam0, 2);
}

void func_486(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x11533 Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_38(iParam0))
		return;

	num = func_116(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, iParam2));
	return;
}

BOOL func_487() // Position - 0x11583 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

var func_488() // Position - 0x115A4 Hash - 0x1372AFBD ^0xAE723118
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	return unk;
}

BOOL func_489(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x115CE Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

BOOL func_490(eStackSize essParam0) // Position - 0x115F2 Hash - 0x6E01F166 ^0xF2FCCC2
{
	return STREAMING::_0x8D56BDA343D9519F(func_738(essParam0));
}

BOOL func_491(eStackSize essParam0, BOOL bParam1) // Position - 0x11604 Hash - 0x61D8A607 ^0xDE9C13BF
{
	if (!func_176())
		return true;

	if (func_739(essParam0))
	{
		if (essParam0 == func_170())
			return false;
	
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("Player_Zero"))
			if (essParam0 == 22 || essParam0 == 38 || essParam0 == 37 || essParam0 == 117 || essParam0 == 127 || essParam0 == 115 || essParam0 == 110 || essParam0 == 120 || essParam0 == 126)
				return false;
		else if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("player_three"))
			if (essParam0 == 37 && !func_247(9))
				return false;
	
		switch (essParam0)
		{
			case 4:
			case 9:
			case 71:
			case 79:
			case 98:
				if (!bParam1)
					return false;
			
				if (func_250() != essParam0)
					return false;
				break;
		
			case 43:
				if (!bParam1)
					return false;
				break;
		}
	
		if (func_572() == 8)
			if (func_740(essParam0, 1))
				return true;
			else
				return false;
	
		return true;
	}

	return false;
}

void func_492(var uParam0, eStackSize essParam1) // Position - 0x11740 Hash - 0xACFA7FAA ^0x828E3D0
{
	int num;
	Hash labelHash;
	int num2;
	var str1;
	var str2;
	int num3;
	eStackSize stackSize;
	eStackSize stackSize2;
	int num4;
	Hash hash;
	int num5;
	Hash hash2;

	num = func_741(essParam1);
	labelHash = func_742(essParam1);
	num2 = 0;
	TEXT_LABEL_ASSIGN_STRING(&str1, HUD::GET_STRING_FROM_HASH_KEY(uParam0->[num2 /*7*/].f_6), 64);
	TEXT_LABEL_ASSIGN_STRING(&str2, HUD::GET_STRING_FROM_HASH_KEY(labelHash), 64);

	while (uParam0->[num2 /*7*/].f_3 && MISC::COMPARE_STRINGS(&str1, &str2, false, -1) <= 0)
	{
		num2 = num2 + 1;
		TEXT_LABEL_ASSIGN_STRING(&str1, HUD::GET_STRING_FROM_HASH_KEY(uParam0->[num2 /*7*/].f_6), 64);
	}

	num3 = num2;
	stackSize = essParam1;
	num4 = num;
	hash = labelHash;

	while (uParam0->[num3 /*7*/].f_3 && num3 < *uParam0 - 1)
	{
		stackSize == essParam1;
		num5 = uParam0->[num3 /*7*/].f_4;
		stackSize2 = uParam0->[num3 /*7*/];
		hash2 = uParam0->[num3 /*7*/].f_6;
		uParam0->[num3 /*7*/].f_4 = num4;
		uParam0->[num3 /*7*/] = stackSize;
		uParam0->[num3 /*7*/].f_3 = 1;
		uParam0->[num3 /*7*/].f_6 = hash;
		func_743(&uParam0->[num3 /*7*/], uParam0->[num3 /*7*/]);
		num4 = num5;
		stackSize = stackSize2;
		hash = hash2;
		num3 = num3 + 1;
	}

	if (!uParam0->[num3 /*7*/].f_3)
	{
		uParam0->[num3 /*7*/].f_4 = num4;
		uParam0->[num3 /*7*/] = stackSize;
		uParam0->[num3 /*7*/].f_3 = 1;
		uParam0->[num3 /*7*/].f_6 = hash;
	}

	return;
}

void func_493(var uParam0, eStackSize essParam1) // Position - 0x11871 Hash - 0xFBDA9D82 ^0xD5E078F2
{
	int num;
	Hash hash;
	int i;
	int num2;
	eStackSize stackSize;
	eStackSize stackSize2;
	int num3;
	Hash hash2;
	int num4;
	Hash hash3;

	num = func_741(essParam1);
	hash = func_742(essParam1);

	if (essParam1 == func_250())
	{
		uParam0->[0 /*7*/].f_4 = num;
		uParam0->[0 /*7*/] = essParam1;
		uParam0->[0 /*7*/].f_3 = 1;
		uParam0->[0 /*7*/].f_6 = hash;
		return;
	}

	for (i = 1; uParam0->[i /*7*/].f_4 < num && i < *uParam0 - 1 && uParam0->[i /*7*/].f_3; i = i + 1)
	{
	}

	num2 = i;
	stackSize = essParam1;
	num3 = num;
	hash2 = hash;

	while (uParam0->[num2 /*7*/].f_3 && num2 < *uParam0 - 1)
	{
		stackSize == essParam1;
		num4 = uParam0->[num2 /*7*/].f_4;
		stackSize2 = uParam0->[num2 /*7*/];
		hash3 = uParam0->[num2 /*7*/].f_6;
		uParam0->[num2 /*7*/].f_4 = num3;
		uParam0->[num2 /*7*/] = stackSize;
		uParam0->[num2 /*7*/].f_3 = 1;
		uParam0->[num2 /*7*/].f_6 = hash2;
		func_743(&uParam0->[num2 /*7*/], uParam0->[num2 /*7*/]);
		num3 = num4;
		stackSize = stackSize2;
		hash2 = hash3;
		num2 = num2 + 1;
	}

	if (!uParam0->[num2 /*7*/].f_3)
	{
		uParam0->[num2 /*7*/].f_4 = num3;
		uParam0->[num2 /*7*/] = stackSize;
		uParam0->[num2 /*7*/].f_3 = 1;
		uParam0->[num2 /*7*/].f_6 = hash2;
	}

	return;
}

float func_494(int iParam0) // Position - 0x119B1 Hash - 0xBAE914A9 ^0xF86958D8
{
	int num;
	float num2;

	num = 1;
	num2 = ((float)num * 0.33f * BUILTIN::POW((float)iParam0 * 0.01f, 0.75f)) / 2f;

	if (func_17() != -1)
		num2 = num2 + (float)func_744();

	return func_745(num2, 2, true);
}

eStackSize func_495(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x119F6 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_746(vParam0);
	num2 = -1;

	if (Global_1894882[num] > 0)
	{
		num3 = Global_1894882[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1894065[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[num4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[num4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

int func_496() // Position - 0x11AAD Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_747())
		return 1;

	return 0;
}

float func_497() // Position - 0x11AC1 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_748())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_289(2);

	if (Global_1347477.f_119)
		return func_289(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_749();
	num3 = func_750();
	num4 = func_751();
	num5 = func_752();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_753());
	num8 = func_289(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_754(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_755(3, num9, num9 > 100f);
	return func_756(num8, -100f, 100f);
}

float func_498() // Position - 0x11BEA Hash - 0x951B1CCC ^0x7B312694
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

	if (func_748())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_289(1);

	if (Global_1347477.f_119)
		return func_289(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_749();
	num3 = func_750();
	num4 = func_751();
	num5 = func_752();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_753());
	num8 = func_289(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_754(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_755(2, num9, num9 > 100f);
	return func_756(num8, -100f, 100f);
}

float func_499() // Position - 0x11D13 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_748())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_289(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_757())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_758())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_289(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_749();
	num3 = func_750();
	num4 = func_751();
	num5 = func_752();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_753());
	num8 = func_289(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_754(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_755(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_289(0);

	return func_756(num8, -100f, 100f);
}

void func_500(int iParam0, int iParam1, int iParam2) // Position - 0x11EBA Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_496();

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

void func_501(Ped pedParam0, int iParam1, float fParam2) // Position - 0x11F0B Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_516(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_759(iParam1), fParam2, -1);

	return;
}

void func_502(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x11F37 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_496();

	gameTimer = MISC::GET_GAME_TIMER();
	func_760(iParam0, fParam1, iParam3);

	if (bParam2)
		func_761(iParam0, gameTimer, iParam3);

	return;
}

int func_503(int iParam0) // Position - 0x11F6A Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_504(int iParam0, var uParam1, var uParam2) // Position - 0x11F99 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_505(eStackSize essParam0) // Position - 0x11FB6 Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_269(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_762(essParam0);
	
		if (hash != 0)
		{
			Global_1360165[essParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(hash);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[essParam0 /*1157*/].f_1 = 0;
		}
	}

	return;
}

int func_506(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x1201E Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_507(eStackSize essParam0, BOOL bParam1, Ped pedParam2) // Position - 0x12046 Hash - 0xD8E274A1 ^0xE4E6335F
{
	Ped ped;

	if (!func_160(essParam0))
		return;

	if (!func_157(essParam0))
		return;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (bParam1 && ENTITY::IS_ENTITY_DEAD(pedParam2))
		return;

	ped = func_276(essParam0);

	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(pedParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, true);
	}

	PED::SET_PED_CONFIG_FLAG(ped, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_0x07A6E531, bParam1);

	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(ped, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(essParam0));
		PED::_SET_PED_COMBAT_BEHAVIOUR(ped, -1972074710);
		PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(ped);
	
		if (!func_764())
			PED::_0x9A4AC116CC1EEE14(Global_35);
	}

	return;
}

int func_508(BOOL bParam0) // Position - 0x12128 Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_765(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

BOOL func_509(Ped pedParam0) // Position - 0x12168 Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_17() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

eStackSize func_510(eStackSize essParam0) // Position - 0x121C1 Hash - 0xD45AC883 ^0xD45AC883
{
	if (!func_269(essParam0))
		return -1;

	if (essParam0 >= func_283(true))
		return -1;

	if (essParam0 >= 3 || essParam0 < 0)
		return -1;

	return Global_1359489[essParam0];
}

int func_511(int iParam0) // Position - 0x12202 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_512(int iParam0) // Position - 0x12226 Hash - 0x5163992 ^0x5163992
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

void func_513(int iParam0, float fParam1, BOOL bParam2) // Position - 0x12255 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_766(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_514(int iParam0) // Position - 0x122A5 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_515(int iParam0) // Position - 0x122C9 Hash - 0x68BC9945 ^0x68BC9945
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

char* func_516(int iParam0) // Position - 0x122FB Hash - 0x21CE226B ^0xD76ECD2C
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

BOOL func_517(int iParam0, var uParam1) // Position - 0x12336 Hash - 0x30A0D5A8 ^0x30A0D5A8
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
	
		case 1:
			*uParam1 = 1;
			break;
	
		default:
			return false;
	}

	return true;
}

char* func_518(int iParam0) // Position - 0x12368 Hash - 0x632600A ^0x6D7DCD18
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "HealthCoreValue";
			break;
	
		case 1:
			str = "StaminaCoreValue";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_519(int iParam0) // Position - 0x123A1 Hash - 0x632600A ^0x9095A8AD
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "isLowHealthCoreActive";
			break;
	
		case 1:
			str = "isLowStaminaCoreActive";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

BOOL func_520(int iParam0) // Position - 0x123DA Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

Blip func_521(eStackSize essParam0) // Position - 0x123ED Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_153(essParam0))
		return num;

	if (Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
		num = joaat("BLIP_STYLE_MISSION");
	else if (Global_1347702[essParam0 /*49*/].f_12 & 512 != 0)
		if (Global_40.f_1093 == Global_1347702[essParam0 /*49*/])
			num = joaat("BLIP_STYLE_RCM_TRACKED");
		else
			num = joaat("BLIP_STYLE_RCM");
	else if (Global_40.f_1093 == Global_1347702[essParam0 /*49*/])
		num = joaat("BLIP_STYLE_RCM_TRACKED");
	else
		num = joaat("BLIP_STYLE_RCM");

	return num;
}

BOOL func_522(eStackSize essParam0) // Position - 0x12480 Hash - 0xA89AC49 ^0x69E11C5C
{
	if (func_17() != -1)
		return false;

	if (!func_153(essParam0))
		return false;

	if (Global_1347702[essParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[essParam0 /*49*/].f_13 & 2048 != 0)
		return false;

	if (Global_1347702[essParam0 /*49*/].f_18 > -1f)
		return true;

	return false;
}

void func_523(int iParam0) // Position - 0x124E3 Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_17())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 || iParam0;
			break;
	}

	return;
}

void func_524(eStackSize essParam0) // Position - 0x1250F Hash - 0x61A76EF4 ^0x86150C0D
{
	if (!func_522(essParam0))
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
					MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			
				func_531(&(Global_1347702[essParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
		
			func_302(&(Global_1347702[essParam0 /*49*/].f_13), 32);
		}
	}

	return;
}

void func_525(eStackSize essParam0) // Position - 0x125B2 Hash - 0xAC04978C ^0x82563A0D
{
	if (Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
	
		switch (essParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}

	return;
}

eStackSize func_526(eStackSize essParam0) // Position - 0x12609 Hash - 0x84838E68 ^0x84838E68
{
	switch (essParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 43;
	
		case 1:
			return 71;
	
		case 2:
			return 98;
	
		case 3:
			return 9;
	
		case 4:
			return 58;
	
		case 5:
			return 4;
	
		case 6:
			return 79;
	
		case 7:
			return 22;
	
		case 8:
			return 37;
	
		default:
		
	}

	essParam0 != -1;
	return -1;
}

BOOL func_527(Hash hParam0) // Position - 0x1268C Hash - 0xC62F3EC7 ^0x941BF203
{
	if (hParam0 >= 0 && hParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[hParam0]);

	return false;
}

BOOL func_528(eStackSize essParam0) // Position - 0x126B5 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_767(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_768(essParam0))
			if (BUILTIN::VDIST(Global_36, func_769(essParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[essParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_769(essParam0), false) <= func_770();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[essParam0 /*35*/].f_15, false) <= func_770();
	}

	return func_48();
}

BOOL func_529(eStackSize essParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x12745 Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37) && Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[essParam0 /*49*/].f_27 == essParam2;

	return false;
}

void func_530(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x12789 Hash - 0x436A2EB9 ^0x436A2EB9
{
	int num;
	eStackSize stackSize;
	Hash styleHash;

	if (!func_155(iParam0))
		return;

	switch (func_771(iParam0))
	{
		case 1:
			num = func_152(iParam0);
		
			if (func_772(num, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
				if (func_773(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_773(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[num /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[num /*74*/].f_27, styleHash);
			
				if (!func_774(num))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_299(&Global_1835011[num /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[num /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			stackSize = func_152(iParam0);
		
			if (func_775(stackSize, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_521(stackSize))
				{
					case joaat("BLIP_STYLE_RCM_BOUNTY"):
						styleHash = joaat("BLIP_STYLE_RCM_BOUNTY_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM"):
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_MISSION"):
						styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM_TRACKED"):
						styleHash = joaat("BLIP_STYLE_RCM_TRACKED_HIDDEN");
						break;
				
					default:
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				}
			}
			else
			{
				styleHash = func_521(stackSize);
			}
		
			if (Global_1347702[stackSize /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[stackSize /*49*/].f_37, styleHash);
				func_525(stackSize);
				Global_1347702[stackSize /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

void func_531(int iParam0, int iParam1) // Position - 0x12985 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_532(int iParam0, int iParam1) // Position - 0x12996 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_533(eStackSize essParam0) // Position - 0x129A5 Hash - 0x38C3233C ^0x38C3233C
{
	if (essParam0 == 97 || essParam0 == 99 || essParam0 == 6)
		return true;

	return false;
}

void func_534(eStackSize essParam0, BOOL bParam1) // Position - 0x129CF Hash - 0xD9457448 ^0xD9457448
{
	Global_40.f_490.f_402[essParam0] = Global_40.f_490.f_402[essParam0] || bParam1;
	return;
}

BOOL func_535(eStackSize essParam0, var uParam1) // Position - 0x129F4 Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_776(Global_1347702[essParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[essParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.1127f, 159.72952f, 103.01753f };
			return true;
		}
	}
	else if (essParam0 == 96)
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.7104f, -1338.3771f, 82.0174f };
			return true;
		}
	}

	return false;
}

struct<4> func_536(BOOL bParam0) // Position - 0x12A8A Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_312(joaat("character"), func_777(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_537(BOOL bParam0) // Position - 0x12AA6 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_96(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_312(923904168, func_536(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_312(923904168, func_536(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_312(923904168, func_536(bParam0), -740156546, false);
}

BOOL func_538(Hash hParam0, BOOL bParam1) // Position - 0x12B3B Hash - 0x62864AB ^0xBC339691
{
	if (func_200(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_431(24);
		else
			return true;

	return false;
}

BOOL func_539(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x12B74 Hash - 0x4285A587 ^0x4285A587
{
	return func_386(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_540(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x12B8C Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_778(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_541(BOOL bParam0) // Position - 0x12BAD Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_96(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_312(271701509, func_536(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_312(271701509, func_536(bParam0), 12999093, false);
}

BOOL func_542(Hash hParam0, Hash hParam1) // Position - 0x12C11 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_200(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_543(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x12C70 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_96(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_544(Hash hParam0) // Position - 0x12CA0 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_545(Hash hParam0) // Position - 0x12CB6 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_309(hParam0, 0))
	{
		if (func_191(hParam0, -1242251796))
		{
			if (func_191(hParam0, 2060589226))
				return func_779();
		
			return func_780();
		}
		else if (func_191(hParam0, 1919582297))
		{
			return func_554();
		}
		else if (func_191(hParam0, 1147021565))
		{
			return func_555();
		}
	}

	if (Global_1935496.f_12)
		return func_780();
	else
		return func_555();

	return func_555();
}

BOOL func_546(Hash hParam0) // Position - 0x12D40 Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_191(hParam0, 1147021565) || func_191(hParam0, -136654233) || func_191(hParam0, -524514947) || func_191(hParam0, -1238310989) || func_191(hParam0, 1765172170) || func_191(hParam0, 1490540191) || func_191(hParam0, 1573112293) || func_191(hParam0, -1242251796) || func_191(hParam0, 1919582297) || func_191(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_547() // Position - 0x12E02 Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

int func_548() // Position - 0x12E0F Hash - 0x9F572D68 ^0x23F8B11F
{
	return 33537269;
}

int func_549() // Position - 0x12E1C Hash - 0x9F572D68 ^0xB34E8DD9
{
	return 18589696;
}

int func_550() // Position - 0x12E29 Hash - 0x9F572D68 ^0xA13B31FE
{
	return 26978448;
}

int func_551() // Position - 0x12E36 Hash - 0x9F572D68 ^0x3789FFFE
{
	return 33529847;
}

int func_552() // Position - 0x12E43 Hash - 0x9F572D68 ^0x9FEEFCEA
{
	return 26978304;
}

int func_553() // Position - 0x12E50 Hash - 0x9F572D68 ^0xFD1849EE
{
	return 32505855;
}

int func_554() // Position - 0x12E5D Hash - 0x9F572D68 ^0x2ABD6E9
{
	return 26983431;
}

int func_555() // Position - 0x12E6A Hash - 0x9F572D68 ^0x99F2F35F
{
	return 33537239;
}

int func_556() // Position - 0x12E77 Hash - 0x9F572D68 ^0x65E83B0A
{
	return 32713860;
}

int func_557() // Position - 0x12E84 Hash - 0x3CF9FC4B ^0x73CC3DF
{
	return 16400295;
}

int func_558() // Position - 0x12E90 Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

void func_559(Player plParam0) // Position - 0x12E9D Hash - 0xF547F6A4 ^0xBF27B96B
{
	if (func_781(32))
		return;

	func_782(32);

	if (func_567(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1;

	if (func_577(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 2;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2;

	if (func_783(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		Global_1935496.f_7 = Global_1935496.f_7 | 4;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4;

	if (func_784(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 8;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8;

	if (func_319(false, true))
		Global_1935496.f_7 = Global_1935496.f_7 | 16;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16;

	if (!func_785(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 32;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 32;

	if (!func_786(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 512;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 512;

	if (!func_787(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 8192;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8192;

	if (PED::IS_PED_IN_COVER(Global_35, false, true))
		Global_1935496.f_7 = Global_1935496.f_7 | 16384;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16384;

	if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 32768;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 32768;

	if (func_17() == false && PED::IS_PED_INCAPACITATED(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 131072;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 131072;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		Global_1935496.f_7 = Global_1935496.f_7 | 256;
	else if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 256;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 256;

	if (Global_1935630.f_24 || TASK::_IS_PED_DUELLING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1024;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1024;

	if (TASK::IS_PED_RUNNING(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 4096;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4096;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_783(Global_35, 1369124074))
		Global_1935496.f_7 = Global_1935496.f_7 | 128;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 128;

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496.f_7 = Global_1935496.f_7 | 33554432;
	
		if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("world_player_dynamic_kneel"))
			Global_1935496.f_7 = Global_1935496.f_7 | 67108864;
		else
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 67108864;
	}
	else
	{
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 67108864;
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 33554432;
	}

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		Global_1935496.f_7 = Global_1935496.f_7 | 65536;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 65536;

	if (CAM::_0x1204EB53A5FBC63D())
		Global_1935496.f_7 = Global_1935496.f_7 | 64;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 64;

	if (TASK::IS_PED_GETTING_UP(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1048576;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1048576;

	if (func_788(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 524288;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 524288;

	if (func_789(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 262144;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 262144;

	if (func_790(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 4194304;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4194304;

	if (func_791())
		Global_1935496.f_7 = Global_1935496.f_7 | 16777216;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16777216;

	if (ENTITY::DOES_ENTITY_EXIST(plParam0))
	{
		if (func_792(plParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(plParam0))
			{
				case joaat("a_c_horsemule_01"):
				case joaat("a_c_horsemulepainted_01"):
				case joaat("a_c_donkey_01"):
					Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
					break;
			
				default:
					Global_1935496.f_7 = Global_1935496.f_7 | 134217728;
					break;
			}
		}
	
		if (PED::_IS_META_PED_USING_COMPONENT(plParam0, 149557334))
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	
		if (PED::IS_PED_ON_VEHICLE(plParam0, false))
			Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	}
	else
	{
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 134217728;
	}

	if (func_17() == -1 && func_117(32768) || func_316() || func_793() || func_105() && !func_794() || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2097152;
	else
		Global_1935496.f_7 = Global_1935496.f_7 | 2097152;

	if (Global_1900073.f_17 && func_225(Global_35, true, 0, false) == joaat("weapon_fishingrod"))
		Global_1935496.f_7 = Global_1935496.f_7 | 8388608;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8388608;

	return;
}

int func_560(BOOL bParam0) // Position - 0x1359A Hash - 0x3C563FFA ^0x59980C0F
{
	Entity entity;

	if (func_795(1) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return 0;
	}

	if (func_795(2) && !Global_1392040.f_2 && MISC::GET_GAME_TIMER() >= Global_36615)
	{
		if (bParam0)
		{
			entity = func_796(Global_35);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_202("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return 0;
				}
			}
		
			func_202("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return 0;
	}

	if (func_795(4194304))
		return 0;

	return 1;
}

int func_561(BOOL bParam0) // Position - 0x13645 Hash - 0x19762284 ^0x22BC4F97
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return 0;
	}

	return 1;
}

int func_562(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x1367D Hash - 0xB3520FCB ^0xE74487EC
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			return 0;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
					func_202("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return 0;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_202("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return 0;
		}
	
		if (!func_215(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35 || bParam2)
				return 0;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}

	return 1;
}

BOOL func_563(Ped pedParam0) // Position - 0x1376A Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

int func_564(Ped pedParam0, BOOL bParam1) // Position - 0x13787 Hash - 0x6BE4D4B ^0xC7F6BBCD
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return 0;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return 0;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return 1;

	return 0;
}

BOOL func_565(Hash hParam0, int iParam1) // Position - 0x137DD Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_309(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_404(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_726("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_659(&unk, i, num, num2))
			{
			}
			else if (!func_685(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_660(num);
				return true;
			}
		}
	
		func_660(num);
	}

	return false;
}

BOOL func_566() // Position - 0x13885 Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

BOOL func_567(Ped pedParam0) // Position - 0x13895 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_797(pedParam0, 4) || func_797(pedParam0, 5);
}

BOOL func_568() // Position - 0x138B1 Hash - 0x340E4DFD ^0xEE72B432
{
	return func_798(512);
}

BOOL func_569(int iParam0, int iParam1) // Position - 0x138C0 Hash - 0x718DD1EF ^0xD9260236
{
	return iParam0->f_2 && iParam1 != false;
}

BOOL func_570() // Position - 0x138D1 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_571(int iParam0) // Position - 0x138E2 Hash - 0xC67CC87B ^0x695B9936
{
	return Global_1914296.f_22 && iParam0 != false;
}

int func_572() // Position - 0x138F5 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_573(eStackSize essParam0) // Position - 0x13903 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_403(essParam0))
		return false;

	return func_799(essParam0, 33554432);
}

int func_574(eStackSize essParam0) // Position - 0x13924 Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_403(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

BOOL func_575(eStackSize essParam0) // Position - 0x13944 Hash - 0xF30C3D47 ^0xF30C3D47
{
	if (func_574(essParam0) != 5)
		return false;

	switch (essParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_576() // Position - 0x1397F Hash - 0xD4692F94 ^0xD4692F94
{
	eStackSize stackSize;

	stackSize = func_170();

	switch (stackSize)
	{
		case 0:
			return true;
	
		case 3:
			return true;
	
		case 7:
			return true;
	
		case 18:
			return true;
	
		case 24:
			return true;
	
		case 41:
			return true;
	
		case 44:
			return true;
	
		case 46:
			return true;
	
		case 47:
			return true;
	
		case 51:
			return true;
	
		case 53:
			return true;
	
		case 63:
			return true;
	
		case 73:
			return true;
	
		case 80:
			return true;
	
		case 82:
			return true;
	
		case 84:
			return true;
	
		case 85:
			return true;
	
		case 103:
			return true;
	
		case 106:
			return true;
	
		case 107:
			return true;
	
		case 108:
			return true;
	
		case 110:
			return true;
	
		case 120:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_577(Ped pedParam0) // Position - 0x13A7C Hash - 0x8F7DFED5 ^0x8768F0B4
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

BOOL func_578() // Position - 0x13AE6 Hash - 0x75C5C6BE ^0x75C5C6BE
{
	eStackSize stackSize;
	Volume volume;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	stackSize = func_170();
	vector = { -3685.4233f, -2597.155f, -10f };
	vector2 = { 0f, 0f, -24.789701f };
	vector3 = { 116.63651f, 76.68949f, 15f };

	if (stackSize != 120)
	{
		return false;
	}
	else
	{
		volume = VOLUME::CREATE_VOLUME_CYLINDER(vector, vector2, vector3);
	
		if (func_800(Global_35, volume, true, 0))
		{
			func_801(volume);
			return true;
		}
		else
		{
			func_801(volume);
			return false;
		}
	}

	return false;
}

BOOL func_579(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x13B6B Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_235(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_580(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x13BC6 Hash - 0x303D641D ^0x303D641D
{
	if (func_802(uParam0, fParam3))
		return true;

	if (func_803(uParam0, fParam3))
		return true;

	return false;
}

void func_581(int iParam0, int iParam1) // Position - 0x13BF1 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

int func_582(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x13C11 Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x13C88 Hash - 0xA17D549C ^0x172E639C
{
	switch (iParam0)
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

int func_584(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x13D38 Hash - 0xB88D7AA5 ^0x36259347
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

int func_585(Hash hParam0, int iParam1) // Position - 0x13D99 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_804(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_586(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x13DC8 Hash - 0xF20034E5 ^0x7CF0A38A
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_428() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_805(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_806(), 12);
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
			else if (func_708() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_807(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_708(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_585(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_808(), 13);
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
			else if (func_709() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_809(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_709(), 10);
			break;
	}

	return sParam3;
}

BOOL func_587(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x140B7 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_588(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x14164 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_589(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x14190 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_590(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x141DF Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_810(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_317(hash, 1, false) || func_812(func_811(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_810(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_810(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_708() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_813(i)), func_813(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_807() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_813(i)), func_813(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_813(i)), func_813(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_719(iParam3, func_814(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_715(hash) - iParam7 >= func_585(iParam3, func_815(i));
				else
					flag = func_715(hash) >= func_585(iParam3, func_815(i));
			else if (hParam4 == hash)
				flag = func_715(hash) + iParam7 >= func_585(iParam3, func_815(i));
			else
				flag = func_715(hash) >= func_585(iParam3, func_815(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_817(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
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
				flag = func_709() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_819(i)), func_819(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_809() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_819(i)), func_819(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_819(i)), func_819(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_719(iParam3, func_814(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_715(hash) - iParam7 >= 1;
				else
					flag = func_820(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_820(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_821(hash)), func_821(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_591(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x14554 Hash - 0x3C34F826 ^0x6C2591CA
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
		if (func_808() >= 13)
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

BOOL func_592(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x1465D Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_155(func_822(0)) && func_823(0) == 1 || func_823(0) == 8 || func_823(0) == 6)
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

int func_593(int iParam0) // Position - 0x146FF Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_155(iParam0))
		return -1;

	return func_824(iParam0);
}

int func_594() // Position - 0x1471B Hash - 0x6AC5469B ^0xEA730EC
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
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_825(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_825(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

void func_595(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x14811 Hash - 0x7DB16548 ^0xD430BAB
{
	if (!TASK::CAN_START_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3))
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	else
	{
		TASK::START_TASK_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3, 0, -1082130432);
		Global_1935496.f_26 = 1;
	}

	return;
}

void func_596(Hash hParam0, BOOL bParam1) // Position - 0x14849 Hash - 0x87EB26BF ^0x55136C8F
{
	int outData;
	var outData2;
	int i;
	float health;
	float deadeye;
	float stamina;
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	var unk28;
	var unk29;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	outData.f_1 = 20;

	if (func_191(hParam0, 1573112293) || func_191(hParam0, 672467738) || func_191(hParam0, -550842268))
		flag = true;

	if (func_198(hParam0) == joaat("consumable"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	
		for (i = 0; i < outData; i = i + 1)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
			{
			}
			else if (-943921969 == outData2.f_1)
			{
				health = func_826(0, outData2.f_2);
				func_90(outData2.f_2, true);
				func_171(0, 7000);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_826(2, outData2.f_2);
				func_91(outData2.f_2);
				func_171(2, 7000);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_826(1, outData2.f_2);
				func_827(outData2.f_2);
				func_171(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_828(outData2.f_2, outData2.f_5);
			
				if (func_829(&unk28, &unk29, num))
				{
					func_830(num, true, flag, bParam1);
					func_171(0, 7000);
				}
			
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_828(outData2.f_2, outData2.f_5);
			
				if (func_829(&unk28, &unk29, num2))
				{
					func_831(num2, true, flag, bParam1);
					func_171(2, 7000);
				}
			
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_828(outData2.f_2, outData2.f_5);
			
				if (func_829(&unk28, &unk29, num3))
				{
					func_832(num3, true, flag, bParam1);
					func_171(1, 7000);
				}
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_72(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_73(19, num4);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_72(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_73(20, num4);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_72(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_73(18, num4);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_72(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_73(0, num4);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_72(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_73(2, num4);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_72(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_73(1, num4);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_833(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3)
			if (num > 0f || health > 0f)
				flag4 = true;
	
		if (flag4 || func_191(hParam0, -537818634))
			func_444(func_654(joaat("medicine_items_used")), 1);
	
		if (func_191(hParam0, -1457797660))
			func_444(func_654(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_444(func_654(joaat("DEADEYE_ITEMS_USED")), 1);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

int func_597(var uParam0) // Position - 0x14BB9 Hash - 0x19D4C5AC ^0x19D4C5AC
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

void func_598(int iParam0, BOOL bParam1, int iParam2) // Position - 0x14DE7 Hash - 0x50964517 ^0x50964517
{
	int num;
	int num2;

	num = func_834(iParam0);
	num2 = func_597(&num);

	if (num2 != iParam0)
		func_835(num2, 4);

	if (!func_836(iParam0))
		return;

	if (func_837(iParam0))
		return;

	func_835(iParam0, 4);
	func_838(iParam0, bParam1);

	if (!func_839(iParam0))
		func_840(iParam0, true, false);

	if (bParam1)
		if (!func_74(0, false, true))
			func_86(true, 6);

	return;
}

void func_599(int iParam0) // Position - 0x14E5D Hash - 0xF3266748 ^0xCC537731
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_600(eStackSize essParam0) // Position - 0x14EA3 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

BOOL func_601(eStackSize essParam0, BOOL bParam1) // Position - 0x14EC2 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_600(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_602(Ped pedParam0) // Position - 0x14EE7 Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_841(Global_35, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, pedParam0))
		return true;

	return false;
}

BOOL func_603(int iParam0) // Position - 0x14F1F Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_604(int iParam0) // Position - 0x14F34 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

BOOL func_605() // Position - 0x14F54 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_842())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_606(Hash hParam0) // Position - 0x14F9E Hash - 0x76026CA6 ^0xF319C9CA
{
	Hash hash;

	hash = func_200(hParam0);

	if (hash == 81053684 || hash == -525676072)
		return 1;

	return 0;
}

void func_607(var uParam0, int iParam1) // Position - 0x14FCC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_608(Hash hParam0) // Position - 0x14FDD Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_614(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_609(var uParam0) // Position - 0x15007 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_843(81053684))
		if (func_614(uParam0))
			return true;
	else if (func_844(-525676072, uParam0))
		if (func_614(uParam0))
			return true;

	return false;
}

Hash func_610() // Position - 0x1504C Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_594())
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

Hash func_611() // Position - 0x150A3 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_594())
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

Hash func_612() // Position - 0x150FA Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_594())
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

Hash func_613() // Position - 0x15151 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_594())
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

BOOL func_614(var uParam0) // Position - 0x151A8 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_844(81053684, uParam0))
		return true;

	if (func_844(-525676072, uParam0))
		return true;

	return false;
}

void func_615(var uParam0) // Position - 0x151D5 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_616(BOOL bParam0) // Position - 0x15233 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

void func_617(int iParam0, int iParam1, int iParam2) // Position - 0x1524B Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_380(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_380(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_380(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

int func_618(int iParam0, BOOL bParam1) // Position - 0x1528A Hash - 0x6C404ADF ^0x7D516F33
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
				return func_845();
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

int func_619(int iParam0, BOOL bParam1) // Position - 0x15319 Hash - 0x14DDA26B ^0xFFF4A8D0
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

BOOL func_620(Hash hParam0, var uParam1) // Position - 0x153BC Hash - 0x4A27386E ^0xBC93C855
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

BOOL func_621(Hash hParam0) // Position - 0x153FC Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_17() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_622(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x15425 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_620(hash, &unk))
		return 0;

	if (bParam3 && !func_846(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_200(hParam0) != -999503751)
		func_847(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

int func_623(Hash hParam0, BOOL bParam1) // Position - 0x154CD Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_310(hParam0, false, false) };
	guid = { func_312(hParam0, unk, unk.f_4, false) };

	if (func_386(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_96(false), &guid);
	return 1;
}

int func_624() // Position - 0x15519 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_625() // Position - 0x15527 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_17() == -1)
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

BOOL func_626(Hash hParam0) // Position - 0x1565D Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_849(func_848(hParam0));
}

void func_627(BOOL bParam0, BOOL bParam1) // Position - 0x1566F Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_850(0);

	if (bParam0)
	{
		func_365(8);
		func_365(512);
	}
	else
	{
		func_365(8);
		func_365(16);
	}

	return;
}

void func_628(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x156A2 Hash - 0x50C09208 ^0x50C09208
{
	func_851(hParam0, false, false);
	func_376(hParam1, true, bParam2, false);
	return;
}

int func_629(int iParam0, int iParam1) // Position - 0x156BC Hash - 0xE1D12727 ^0xA46110B3
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

void func_630() // Position - 0x1590B Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

int func_631(Hash hParam0) // Position - 0x15952 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_191(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_191(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_191(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_191(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_191(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_191(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

void func_632(int iParam0) // Position - 0x15AA3 Hash - 0x65A082AE ^0x65A082AE
{
	func_617(iParam0, 8, 6);
	return;
}

void func_633(int iParam0) // Position - 0x15AB4 Hash - 0x20214C72 ^0x20214C72
{
	func_852(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_634(int iParam0, int iParam1) // Position - 0x15AC9 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_853(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_635(Hash hParam0, int iParam1, int iParam2) // Position - 0x15AE0 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_636(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x15AF3 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_200(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_854(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_634(num2, num3);
	}

	if (func_731(-1586649372) && func_854(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_634(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_855(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_855(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_634(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_634(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_634(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_856(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_191(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_634(num2, num3);
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
						func_634(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_634(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_200(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_634(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_856(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_200(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_634(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_855(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_855(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_634(num2, num3);
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
						func_634(num2, num3);
				}
			}
		
			func_855(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_191(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_634(num2, num3);
			}
			break;
	
		case 1868067663:
			func_855(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_634(num2, num3);
			}
			break;
	}

	switch (func_200(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_200(hParam0->f_1[num2 /*3*/]) || func_191(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_634(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_200(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_634(num2, num3);
			}
			break;
	}

	return;
}

Hash func_637(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x16137 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_857(0);

	if (hParam2 != 0 && func_858(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_859(hParam0, func_629(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_638(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1617D Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_17() != -1;
	flag2 = func_857(0);

	if (func_372(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_629(num, 1);
		
			if (func_860(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_860(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_861(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_862(hParam0);

	if (num3 > 0)
	{
		if (!func_372(524288))
		{
			func_365(524288);
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
				num5 = func_629(num, 1);
			
				if (func_860(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_860(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_861(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_634(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_616(524288);

	return;
}

void func_639(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1639A Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_863(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_17() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_864(2, Global_26796.f_776) || Global_1946054.f_1497 != func_865(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_865(Global_40.f_7729);
				Global_1946054.f_1378 = func_865(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_866(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_627(false, true);

	return;
}

BOOL func_640(int iParam0, int iParam1) // Position - 0x164B9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_641(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x164C8 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_603(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_603(20))
				return;
		}
	}

	func_604(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_365(8);
	return;
}

BOOL func_642() // Position - 0x165CC Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_17375;
}

BOOL func_643() // Position - 0x165DB Hash - 0xF0382EDE ^0x243CDD32
{
	int ransackScenarioPointPedIsUsing;

	if (func_867())
	{
		ransackScenarioPointPedIsUsing = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		return ransackScenarioPointPedIsUsing != 0;
	}

	return false;
}

BOOL func_644() // Position - 0x165FC Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

var func_645(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x16608 Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	Any any;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_868() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1224589.f_5;
	any = Global_1224589.f_9;
	flag3 = true;
	flag4 = bParam10;

	if (BUILTIN::VMAG2(fParam6) < 1f)
	{
		flag3 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("volBox"):
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_869());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_869());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_869());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_870(PLAYER::GET_PLAYER_TEAM(player));

	if (flag4 & 8 != 0 && flag4 & 32768 != 0)
	{
		flag4 = flag4 | 65536;
		flag4 = flag4 - flag4 & 40952;
	}

	if (flag4 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			flag4 = flag4 - flag4 & 4;
			flag4 = flag4 | false;
		}
	}

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1224589.f_16[i])
		{
			player2 = Global_1224589.f_115[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_871(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1224589.f_49[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_872(i) != 1)
					flag = true;
		
			if (!flag)
				if (flag4 & 16384 != 0 && PED::IS_PED_INCAPACITATED(playerPed))
					flag = true;
		
			if (!flag)
				if (flag4 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(player2))
					flag = true;
		
			if (!flag)
			{
				if (flag4 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(player2))
					{
						case -1:
							if (flag4 & 16 != 0)
								flag2 = true;
							break;
					
						case 0:
							if (flag4 & 32 != 0)
								flag2 = true;
							break;
					
						case 1:
							if (flag4 & 64 != 0)
								flag2 = true;
							break;
					
						case 2:
							if (flag4 & 128 != 0)
								flag2 = true;
							break;
					
						case 3:
							if (flag4 & 256 != 0)
								flag2 = true;
							break;
					
						case 4:
							if (flag4 & 512 != 0)
								flag2 = true;
							break;
					
						case 5:
							if (flag4 & 1024 != 0)
								flag2 = true;
							break;
					
						case 6:
							if (flag4 & 2048 != 0)
								flag2 = true;
							break;
					
						case 8:
							if (flag4 & 4096 != 0)
								flag2 = true;
							break;
					}
				
					if (!flag2)
						flag = true;
				}
			}
		
			if (!flag)
				if (flag4 & 32768 != 0)
					if (GANG::NETWORK_GET_GANG_ID(player2) != any)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_873(player2))
						flag = true;
		
			if (!flag && flag3)
				if (!VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(playerPed, false, false)))
					flag = true;
		
			if (!flag)
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
		}
	}

	if (flag3)
		VOLUME::DELETE_VOLUME(volume);

	return value;
}

int func_646(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x16997 Hash - 0xDAC4446E ^0x51EF643B
{
	if (!func_874(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*18*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_647(Hash hParam0, var uParam1, var uParam2) // Position - 0x169C7 Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_648() // Position - 0x16BD3 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_649(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x16BE0 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_650(BOOL bParam0, var uParam1, var uParam2) // Position - 0x16C4A Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_651(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x16C61 Hash - 0x92B705D3 ^0xB783F681
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

const char* func_652(const char* sParam0, int iParam1) // Position - 0x16D54 Hash - 0x9E99F03 ^0x90805A76
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_653(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x16D6E Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_875(sParam0, sParam1, hParam2);
	return num2;
}

struct<2> func_654(int iParam0) // Position - 0x16DD1 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_655(Hash hParam0, BOOL bParam1) // Position - 0x16DE1 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_656(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_657(&unk, func_537(false));

	if (!func_658(&unk, &num, &num2, false))
		return 0;

	func_660(num);
	return num2;
}

struct<18> func_656(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x16E3F Hash - 0x84700F53 ^0xB9E7AA96
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

void func_657(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x16F11 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_658(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x16F2C Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_96(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_659(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16F51 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_660(int iParam0) // Position - 0x16F8C Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_661(Hash hParam0, int iParam1) // Position - 0x16FAD Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_17() == -1)
	{
		if (func_324(43))
		{
			if (func_191(hParam0, 412399755))
			{
				func_712(joaat("exotic_stage_01"));
			
				if (func_713() == 0)
				{
					func_86(false, 10);
					num = func_876(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_715(hParam0) < func_716(hParam0))
							func_328(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_324(44))
		{
			if (func_191(hParam0, 709057512))
			{
				func_712(joaat("exotic_stage_02"));
			
				if (func_713() == 1)
				{
					func_86(false, 10);
					num = func_876(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_715(hParam0) < func_716(hParam0))
							func_328(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_324(45))
		{
			if (func_191(hParam0, -1478961327))
			{
				func_712(joaat("exotic_stage_03"));
			
				if (func_713() == 2)
				{
					func_86(false, 10);
					num = func_876(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_715(hParam0) < func_716(hParam0))
							func_328(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_324(46))
		{
			if (func_191(hParam0, -1238404098))
			{
				func_712(joaat("exotic_stage_04"));
			
				if (func_713() == 3)
				{
					func_86(false, 10);
					num = func_876(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_715(hParam0) < func_716(hParam0))
							func_328(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_324(47))
		{
			if (func_191(hParam0, 1160548794))
			{
				func_712(joaat("exotic_stage_05"));
			
				if (func_713() == 4)
				{
					func_86(false, 10);
					num = func_876(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_715(hParam0) < func_716(hParam0))
							func_328(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

BOOL func_662(int iParam0, int iParam1) // Position - 0x17291 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_17() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_663(int iParam0) // Position - 0x172C4 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_17() != -1)
		if (func_665(iParam0, 4))
			return false;
	else if (func_665(iParam0, 2))
		return false;

	return true;
}

BOOL func_664(int iParam0) // Position - 0x172F4 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_665(iParam0, 65536) && !func_665(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_665(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_665(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_665(int iParam0, int iParam1) // Position - 0x173A0 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_666() // Position - 0x173B9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_667(Hash hParam0) // Position - 0x173C8 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_198(hParam0) == joaat("WEAPON");
}

BOOL func_668(Hash hParam0) // Position - 0x173DC Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_17() != -1)
		return false;

	if (func_430(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_674(hParam0, &unk, 1, false, false);

	return func_317(hParam0, 1, false);
}

void func_669(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x17420 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_198(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_434(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_684(weaponHash))
	{
		if (func_17() == -1)
			func_435(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_407(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_405(hParam0, iParam1, false, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_670(Hash hParam0, var uParam1) // Position - 0x174C7 Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_191(hParam0, 58855631))
	{
		func_877(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

int func_671(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x174F5 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_309(hParam0, 0))
		return 0;

	if (!func_409(false))
		bParam2 = true;

	if (bParam2 || !func_878(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_96(bParam3), hParam0);
}

int func_672(Hash hParam0, BOOL bParam1) // Position - 0x17543 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_439(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_96(bParam1), hParam0, false);
}

BOOL func_673() // Position - 0x1756D Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_17() != -1)
		return false;

	if (!func_176())
		return false;

	if (!func_339(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[2 /*74*/].f_1, true) && func_339(Global_1347702[120 /*49*/].f_15, true) && !func_339(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[37 /*74*/].f_1, true) && !func_339(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[57 /*74*/].f_1, true) && !func_339(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[26 /*74*/].f_1, true) && !func_339(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_339(Global_1835011[62 /*74*/].f_1, true) && func_339(Global_1835011[63 /*74*/].f_1, true) && !func_339(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[75 /*74*/].f_1, true) && !func_339(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_339(Global_1835011[76 /*74*/].f_1, true) && !func_339(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[40 /*74*/].f_1, true) && func_339(Global_1835011[41 /*74*/].f_1, true) && !func_339(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[62 /*74*/].f_1, true) && func_339(Global_1835011[63 /*74*/].f_1, true) && !func_339(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_339(Global_1835011[65 /*74*/].f_1, true) && func_339(Global_1835011[66 /*74*/].f_1, true) && !func_339(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_674(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x177B3 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_879(&hParam0);

	if (!func_309(hParam0, 0))
		return 0;

	if (!func_409(false))
		bParam3 = true;

	if (func_667(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_537(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_539(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_540(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_538(hParam0, true))
				if (!func_539(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_540(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_880(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_671(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_878(hParam0))
		inventoryItemCountWithItemid = func_386(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_96(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_675() // Position - 0x178F8 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_676(Hash hParam0) // Position - 0x1790A Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_677(int iParam0) // Position - 0x17918 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_17() != -1)
		return;

	num = func_881(iParam0);
	value = func_882(iParam0);

	if (Global_1347477.f_117 || !func_431(31) || !func_883(num))
		return;

	if (value <= 0f)
		return;

	if (func_884(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_885(num, Global_40.f_11095.f_11[num] + value, false);
	func_653(MISC::VAR_STRING(6, func_886(iParam0), value), "itemtype_textures", func_887(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

Hash func_678(int iParam0) // Position - 0x17A17 Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_679(int iParam0) // Position - 0x17AD0 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_680(int iParam0) // Position - 0x17AE3 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_681(int iParam0) // Position - 0x17B0D Hash - 0x48EBE6BD ^0x358C7E90
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

void func_682(int iParam0) // Position - 0x17B47 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_176() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_231(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_176() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_231(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_176() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_231(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_176() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_584("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_231(589, false);
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
			func_888(true);
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
			func_889(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_889(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_889(3);
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
		
			if (func_17() == -1)
			{
				if (!func_731(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_244(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_690())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_317(hash, 1, false))
						func_479(hash, 1, 752097756);
				
					func_211(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_890(true);
			break;
	
		case 34:
			func_891(true);
			break;
	
		case 35:
			func_892(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_893(false);
			break;
	
		case 38:
			func_894(false);
			break;
	
		case 39:
			func_895(false);
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
			func_896();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_17() == -1)
				if (!func_317(1013902307, 1, false))
					func_479(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_17() == -1)
				if (!func_317(786809402, 1, false))
					func_479(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_17() == -1)
			{
				if (!func_317(1013902307, 1, false))
					func_479(1013902307, 1, 752097756);
			
				if (!func_317(142640135, 1, false))
					func_479(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_17() == -1)
			{
				if (!func_317(786809402, 1, false))
					func_479(786809402, 1, 752097756);
			
				if (!func_317(-518019409, 1, false))
					func_479(-518019409, 1, 752097756);
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

BOOL func_683(Hash hParam0) // Position - 0x1816F Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_684(Hash hParam0) // Position - 0x18197 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_685(Hash hParam0) // Position - 0x181BF Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_686(int iParam0, int iParam1) // Position - 0x181DA Hash - 0xE1D12727 ^0x71D656A6
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

void func_687(Hash hParam0, int iParam1) // Position - 0x1A324 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_897(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_688(Hash hParam0) // Position - 0x1A36C Hash - 0x708BD33E ^0x7DCA6D4C
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
	value = func_65();
	func_66(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_689(Hash hParam0) // Position - 0x1A43B Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_825(hParam0))
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

BOOL func_690() // Position - 0x1A4B7 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_17() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_691(Hash hParam0) // Position - 0x1A4DC Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_692(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A4EE Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_693(Hash hParam0) // Position - 0x1A514 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_431(50))
			{
				if (!func_431(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_431(51))
			{
				if (!func_431(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_694() // Position - 0x1A580 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_695(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x1A591 Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	Hash hash2;
	int num;
	int num2;
	BOOL flag;
	Hash componentHash;
	int num3;
	int num4;
	int numComponentsInPed;

	if (!func_309(hParam1, 0))
		return false;

	if (func_198(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_17() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_200(hParam1) == -999503751)
		return true;

	hash2 = func_898(hParam1);

	if (hash2 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_191(hParam1, 866047851))
	{
		num = func_380(hash2, 1);
	
		if (func_631(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (hash2)
	{
		case -1944638739:
			num = 35;
		
			if (Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/] && func_191(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_844(1868067663, &unk))
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
			num4 = func_861(componentHash, hash2, metaPedType, isMP);
			num3 = func_861(Global_1946054.f_1497.f_1[num /*3*/], hash2, metaPedType, isMP);
		
			if ((numComponentsInPed + num4) - num3 > 31)
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
		
			num = 10;
			hash = func_200(Global_1946054.f_1497.f_1[num /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num = 36;
		
			if (Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
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
			hash = func_200(hParam1);
			num = 36;
			num2 = 35;
		
			if (hParam1 != Global_1946054.f_57[num2 /*11*/] && func_191(Global_1946054.f_1497.f_1[num /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num2 /*11*/] && func_856(Global_1946054.f_1497.f_1[num /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

void func_696() // Position - 0x1A8A1 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_697() // Position - 0x1A8C2 Hash - 0xDC6E219D ^0xBD2A18DD
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

int func_698() // Position - 0x1A917 Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_317(func_899(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_699(Hash hParam0) // Position - 0x1A949 Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_700(int iParam0, Hash hParam1) // Position - 0x1A9DF Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_317(hash, 1, false) && func_317(hash2, 1, false))
		return true;

	return false;
}

Hash func_701(Hash hParam0) // Position - 0x1AB40 Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_702(Hash hParam0, int iParam1) // Position - 0x1AC07 Hash - 0xB78A2FC ^0x6E3EB1C7
{
	eStackSize stackSize;

	stackSize = func_900(hParam0);

	if (stackSize != -15)
	{
		func_66(&stackSize, 0, iParam1, 0, 0, 0, 0, false);
		return !func_901(stackSize, true);
	}

	return false;
}

int func_703(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1AC39 Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_317(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_309(hash, 0) && func_191(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_704(int iParam0, const char* sParam1, int iParam2) // Position - 0x1ACFE Hash - 0x4DF85B80 ^0x8FDAB7F9
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_705(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x1AD3F Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_902())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_653(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_903(num);
			func_904(num, 0, 0);
		}
	
		func_653(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_444(func_654(joaat("CAREER_CASH")), value);
	}

	return;
}

int func_706(int iParam0) // Position - 0x1AE1B Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_715(hash);
	num3 = func_715(hash2);
	num4 = func_715(hash3);
	num6 = func_716(hash);
	num7 = func_716(hash2);
	num8 = func_716(hash3);

	if (iParam0 != 2)
	{
		num5 = func_715(hash4);
		num9 = func_716(hash4);
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

void func_707(int iParam0) // Position - 0x1AF8E Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_708() // Position - 0x1AFA9 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_905(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_709() // Position - 0x1AFE2 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_710(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1AFF4 Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_820(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_820(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_820(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_820(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_820(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_820(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash) && func_820(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_820(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_820(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_820(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash) && func_820(hash2) && func_820(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_820(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_820(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_820(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_820(hash) && func_820(hash2) && func_820(hash3) && func_820(hash4))
			return true;
	}

	return false;
}

void func_711(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B4B9 Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_908();
			func_906(iParam0);
			break;
	
		case -1925798111:
			func_906(-1925798111);
			func_907(-919512195);
			func_907(420709909);
			func_907(1703426636);
			break;
	
		case -1838352012:
			func_907(-1674179981);
			func_907(-1835851517);
			func_906(-1838352012);
			break;
	
		case -1835851517:
			func_907(-1674179981);
			func_907(-1838352012);
			func_906(-1835851517);
			break;
	
		case -1738165526:
			func_906(-1738165526);
			func_907(0);
			func_907(473295046);
			break;
	
		case -1717960576:
			func_907(210001842);
			func_906(-1717960576);
			break;
	
		case -1674179981:
			func_907(-1835851517);
			func_907(-1838352012);
			func_906(-1674179981);
			break;
	
		case -1612662716:
			func_907(1822001510);
			func_906(-1612662716);
			break;
	
		case -1414537028:
			func_907(38162571);
			func_907(1350391819);
			func_907(54073871);
			func_906(-1414537028);
			break;
	
		case -1311865656:
			func_906(-1311865656);
			func_907(1509509592);
			func_907(-959357075);
			func_907(405586984);
			break;
	
		case -1271608261:
			func_907(-150493654);
			func_907(1846061697);
			func_907(-1145519186);
			func_906(-1271608261);
			break;
	
		case -1223121209:
			func_906(-1223121209);
			func_907(630808005);
			break;
	
		case -1145519186:
			func_907(-150493654);
			func_907(-1271608261);
			func_907(1846061697);
			func_906(-1145519186);
			break;
	
		case -1124061431:
			func_907(198200492);
			func_906(-1124061431);
			func_907(52706132);
			func_907(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_906(-1080627546);
			else
				func_907(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_907(-538889627);
			func_907(-538880323);
			func_907(-1056767524);
			func_906(iParam0);
			break;
	
		case -959357075:
			func_906(-959357075);
			func_907(1509509592);
			func_907(405586984);
			func_907(-1311865656);
			break;
	
		case -919512195:
			func_906(-919512195);
			func_907(-1925798111);
			func_907(420709909);
			func_907(1703426636);
			break;
	
		case -664252410:
			func_907(2019386373);
			func_907(2109952320);
			func_906(-664252410);
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
			func_909();
			func_906(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_906(-524145696);
			else
				func_907(-524145696);
		
			func_907(1626481264);
			func_907(282809459);
			break;
	
		case -502324015:
			func_907(1497516462);
			func_907(2016141805);
			func_907(1010885152);
			func_906(-502324015);
			break;
	
		case -434590080:
			func_907(1376646519);
			func_907(931649776);
			func_907(1743048395);
			func_907(449774763);
			func_906(-434590080);
			break;
	
		case -404698347:
			func_907(1306158345);
			func_907(1952610440);
			func_907(-223469678);
			func_907(1517904467);
			func_906(-404698347);
			break;
	
		case -259123672:
			func_907(198200492);
			func_907(-1124061431);
			func_907(52706132);
			func_906(-259123672);
			break;
	
		case -223469678:
			func_907(1306158345);
			func_907(1952610440);
			func_907(-404698347);
			func_907(1517904467);
			func_906(-223469678);
			break;
	
		case -150493654:
			func_907(-1271608261);
			func_907(1846061697);
			func_907(-1145519186);
			func_906(-150493654);
			break;
	
		case 0:
			func_906(0);
			func_907(473295046);
			func_907(-1738165526);
			break;
	
		case 38162571:
			func_907(-1414537028);
			func_907(1350391819);
			func_907(54073871);
			func_906(38162571);
			break;
	
		case 52706132:
			func_907(198200492);
			func_907(-1124061431);
			func_906(52706132);
			func_907(-259123672);
			break;
	
		case 54073871:
			func_907(-1414537028);
			func_907(38162571);
			func_907(1350391819);
			func_906(54073871);
			break;
	
		case 198200492:
			func_906(198200492);
			func_907(-1124061431);
			func_907(52706132);
			func_907(-259123672);
			break;
	
		case 210001842:
			func_907(-1717960576);
			func_906(210001842);
			break;
	
		case 280705402:
			func_907(1766284049);
			func_907(1926308480);
			func_906(280705402);
			break;
	
		case 282809459:
			func_906(282809459);
			func_907(1626481264);
			func_907(-524145696);
			break;
	
		case 405586984:
			func_906(405586984);
			func_907(1509509592);
			func_907(-959357075);
			func_907(-1311865656);
			break;
	
		case 420709909:
			func_906(420709909);
			func_907(-919512195);
			func_907(-1925798111);
			func_907(1703426636);
			break;
	
		case 439465264:
			if (func_910(1609506757))
				if (bParam1)
					func_906(439465264);
				else
					func_907(439465264);
			break;
	
		case 449774763:
			func_907(1376646519);
			func_907(931649776);
			func_907(-434590080);
			func_907(1743048395);
			func_906(449774763);
			break;
	
		case 473295046:
			func_906(473295046);
			func_907(0);
			func_907(-1738165526);
			break;
	
		case 630808005:
			func_906(630808005);
			func_907(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_906(885203519);
			else
				func_907(885203519);
			break;
	
		case 931649776:
			func_907(1376646519);
			func_907(-434590080);
			func_907(1743048395);
			func_907(449774763);
			func_906(931649776);
			break;
	
		case 932909855:
			func_906(932909855);
			func_907(2051822093);
			break;
	
		case 1010885152:
			func_907(1497516462);
			func_907(2016141805);
			func_906(1010885152);
			func_907(-502324015);
			break;
	
		case 1306158345:
			func_907(1952610440);
			func_907(-223469678);
			func_907(-404698347);
			func_907(1517904467);
			func_906(1306158345);
			break;
	
		case 1350391819:
			func_907(-1414537028);
			func_907(38162571);
			func_907(54073871);
			func_906(1350391819);
			break;
	
		case 1376646519:
			func_907(931649776);
			func_907(-434590080);
			func_907(1743048395);
			func_907(449774763);
			func_906(1376646519);
			break;
	
		case 1453909576:
			func_906(1453909576);
			func_907(1643531967);
			break;
	
		case 1497516462:
			func_906(1497516462);
			func_907(2016141805);
			func_907(1010885152);
			func_907(-502324015);
			break;
	
		case 1509509592:
			func_906(1509509592);
			func_907(405586984);
			func_907(-959357075);
			func_907(-1311865656);
			break;
	
		case 1517904467:
			func_907(1306158345);
			func_907(1952610440);
			func_907(-223469678);
			func_907(-404698347);
			func_906(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_907(439465264);
				func_906(1609506757);
			}
			else
			{
				func_907(1609506757);
				func_907(439465264);
			}
			break;
	
		case 1626481264:
			func_906(1626481264);
			func_907(-524145696);
			func_907(282809459);
			break;
	
		case 1643531967:
			func_906(1643531967);
			func_907(1453909576);
			break;
	
		case 1703426636:
			func_906(1703426636);
			func_907(-919512195);
			func_907(-1925798111);
			func_907(420709909);
			break;
	
		case 1743048395:
			func_907(1376646519);
			func_907(931649776);
			func_907(-434590080);
			func_907(449774763);
			func_906(1743048395);
			break;
	
		case 1766284049:
			func_907(280705402);
			func_907(1926308480);
			func_906(1766284049);
			break;
	
		case 1822001510:
			func_907(-1612662716);
			func_906(1822001510);
			break;
	
		case 1846061697:
			func_907(-150493654);
			func_907(-1271608261);
			func_907(-1145519186);
			func_906(1846061697);
			break;
	
		case 1926308480:
			func_907(1766284049);
			func_907(280705402);
			func_906(1926308480);
			break;
	
		case 1952610440:
			func_907(1306158345);
			func_907(-223469678);
			func_907(-404698347);
			func_907(1517904467);
			func_906(1952610440);
			break;
	
		case 2016141805:
			func_907(1497516462);
			func_906(2016141805);
			func_907(1010885152);
			func_907(-502324015);
			break;
	
		case 2019386373:
			func_907(-664252410);
			func_907(2109952320);
			func_906(2019386373);
			break;
	
		case 2051822093:
			func_906(2051822093);
			func_907(932909855);
			break;
	
		case 2109952320:
			func_907(2019386373);
			func_907(-664252410);
			func_906(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_910(iParam0))
					func_906(iParam0);
			else if (func_910(iParam0))
				func_907(iParam0);
			break;
	}

	return;
}

void func_712(Hash hParam0) // Position - 0x1BFDC Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_911(hParam0))
		func_913(func_912(hParam0));

	return;
}

int func_713() // Position - 0x1BFF8 Hash - 0x65DBB0F2 ^0xCAF23386
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_911(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_714(Hash hParam0, int iParam1, int iParam2) // Position - 0x1C032 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_715(hash);
	num3 = func_715(hash2);
	num4 = func_715(hash3);
	num6 = func_716(hash);
	num7 = func_716(hash2);
	num8 = func_716(hash3);

	if (iParam2 != 2)
	{
		num5 = func_715(hash4);
		num9 = func_716(hash4);
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

int func_715(Hash hParam0) // Position - 0x1C245 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_317(hParam0, 1, false))
		num = func_407(hParam0, false, false);

	return num;
}

int func_716(Hash hParam0) // Position - 0x1C264 Hash - 0xEED5739D ^0xEED5739D
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

int func_717(Hash hParam0) // Position - 0x1C33D Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_718(Hash hParam0, int iParam1) // Position - 0x1C34B Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_719(Hash hParam0, int iParam1) // Position - 0x1C35B Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_804(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_720(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1C38A Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_719(hParam1, 5) || hParam0 == func_719(hParam1, 6) || hParam0 == func_719(hParam1, 7) || hParam0 == func_719(hParam1, 8) || hParam0 == func_719(hParam1, 9))
	{
		func_710(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_328(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_327(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_721(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1C40C Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_719(hParam1, 5) || hParam0 == func_719(hParam1, 6) || hParam0 == func_719(hParam1, 7) || hParam0 == func_719(hParam1, 8) || hParam0 == func_719(hParam1, 9))
	{
		if (func_710(hParam1, hParam0, &num, false, 0, false))
		{
			func_328(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_327(51, 0, 0, num, func_585(hParam1, 20), 1, 0);
		}
		else
		{
			func_328(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_327(51, 0, 0, num, func_585(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_722() // Position - 0x1C4CD Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_390(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_723(Hash hParam0) // Position - 0x1C4F6 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_724(Hash hParam0) // Position - 0x1C505 Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_914(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_725(Hash hParam0) // Position - 0x1C51E Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

BOOL func_726(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x1C52D Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_96(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_727(Hash hParam0) // Position - 0x1C554 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_728(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x1C564 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_309(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_674(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_409(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_96(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_729(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C5C6 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_600(essParam0))
		return;

	if (func_362(essParam0))
		return;

	if (!func_915(essParam0))
		func_916(essParam0, true, false);

	hash = func_865(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_601(essParam0, 512))
			func_208(30, hash, 0, 0, false);

	if (!func_917() && !bParam1 && !func_74(0, false, true))
		func_202(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_918(essParam0, 6);

	if (bParam2)
		if (!func_74(0, false, true))
			func_86(true, 4);

	return;
}

BOOL func_730(Hash hParam0, var uParam1) // Position - 0x1C68C Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_200(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_731(int iParam0) // Position - 0x1C6D0 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_380(iParam0, 1) /*3*/] != Global_1946054.f_57[func_380(iParam0, 1) /*11*/];
}

void func_732(int iParam0, Hash hParam1) // Position - 0x1C708 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_191(hParam1, 130796156))
	{
		func_919(hParam1, false);
	}
	else if (func_191(hParam1, 930141731))
	{
		func_919(hParam1, true);
		func_920(iParam0);
	}

	return;
}

void func_733(var uParam0, int iParam1) // Position - 0x1C743 Hash - 0x84556899 ^0xA18AFCFA
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

int func_734(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x1C824 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_921(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_922(anParam2, hParam0, num);
	return 1;
}

int func_735(int iParam0) // Position - 0x1C88D Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x1C89F Hash - 0xA17D549C ^0x4653E041
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

Hash func_737(Hash hParam0) // Position - 0x1C976 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_923(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_738(int iParam0) // Position - 0x1C9A0 Hash - 0xB8EC44B7 ^0x6E73F165
{
	switch (iParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_watsonscabin");
	
		case 30:
			return joaat("region_blu_canebreak_manor");
	
		case 31:
			return joaat("region_blu_copperhead");
	
		case 32:
			return joaat("region_blu_sisika");
	
		case 33:
			return joaat("region_cml_bacchusbridge");
	
		case 34:
			return joaat("region_cml_dino_lady");
	
		case 35:
			return joaat("region_cml_oldfortwallace");
	
		case 36:
			return joaat("region_cml_sixpointcabin");
	
		case 37:
			return joaat("region_grt_beechers");
	
		case 38:
			return joaat("region_grt_blackwater");
	
		case 39:
			return joaat("region_grt_quakers_cove");
	
		case 40:
			return joaat("region_grz_adlerranch");
	
		case 41:
			return joaat("region_grz_dead_rival");
	
		case 42:
			return joaat("region_grz_chezporter");
	
		case 43:
			return joaat("region_grz_colter");
	
		case 44:
			return joaat("region_grz_frozen_explorer");
	
		case 45:
			return joaat("region_grz_millesani_claim");
	
		case 46:
			return joaat("region_grz_mountain_man");
	
		case 47:
			return joaat("region_grz_starving_children");
	
		case 48:
			return joaat("region_grz_tempest_rim");
	
		case 49:
			return joaat("region_grz_wintermining_town");
	
		case 50:
			return joaat("region_grz_calumetravine");
	
		case 51:
			return joaat("region_gre_civil_war_bride");
	
		case 52:
			return joaat("region_grz_cohutta");
	
		case 53:
			return joaat("region_grz_gunfight");
	
		case 54:
			return joaat("region_grz_theloft");
	
		case 55:
			return joaat("region_gre_veteran");
	
		case 56:
			return joaat("region_grz_wapiti");
	
		case 57:
			return joaat("region_gua_aguasdulces");
	
		case 58:
			return joaat("region_gua_camp");
	
		case 59:
			return joaat("region_gua_cincotorres");
	
		case 60:
			return joaat("region_gua_lacapilla");
	
		case 61:
			return joaat("region_gua_manicato");
	
		case 62:
			return joaat("region_hrt_abandoned_mill");
	
		case 63:
			return joaat("region_roa_beechers_c");
	
		case 64:
			return joaat("region_hrt_carmodydell");
	
		case 65:
			return joaat("region_hrt_cornwallkerosene");
	
		case 66:
			return joaat("region_hrt_crop_farm");
	
		case 67:
			return joaat("region_hrt_cumberlandfalls");
	
		case 68:
			return joaat("region_hrt_downsranch");
	
		case 69:
			return joaat("region_hrt_emeraldranch");
	
		case 70:
			return joaat("region_hrt_grangers_hoggery");
	
		case 71:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 72:
			return joaat("region_hrt_larnedsod");
	
		case 73:
			return joaat("region_hrt_loony_cult");
	
		case 74:
			return joaat("region_hrt_luckyscabin");
	
		case 75:
			return joaat("region_hrt_swansons_station");
	
		case 76:
			return joaat("region_hrt_valentine");
	
		case 77:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 78:
			return joaat("region_roa_annesburg");
	
		case 79:
			return joaat("region_roa_beaverhollow");
	
		case 80:
			return joaat("region_roa_black_balsam_rise");
	
		case 81:
			return joaat("region_roa_brandywine_drop");
	
		case 82:
			return joaat("region_roa_butchercreek");
	
		case 83:
			return joaat("region_roa_doverhill");
	
		case 84:
			return joaat("region_roa_happy_family");
	
		case 85:
			return joaat("region_roa_isolationist");
	
		case 86:
			return joaat("region_roa_macleanshouse");
	
		case 87:
			return joaat("region_roa_mossy_flats");
	
		case 88:
			return joaat("region_roa_roanoke_valley");
	
		case 89:
			return joaat("region_roa_rockyseven");
	
		case 90:
			return joaat("region_roa_trapper");
	
		case 91:
			return joaat("region_roa_vanhornmansion");
	
		case 92:
			return joaat("region_roa_vanhornpost");
	
		case 93:
			return joaat("region_scm_braithwaitemanor");
	
		case 94:
			return joaat("region_scm_bulgerglade");
	
		case 95:
			return joaat("region_scm_caligahall");
	
		case 96:
			return joaat("region_scm_catfishjacksons");
	
		case 97:
			return joaat("region_scm_clemenscove");
	
		case 98:
			return joaat("region_scm_clemenspoint");
	
		case 99:
			return joaat("region_scm_compsons_stead");
	
		case 100:
			return joaat("region_scm_dairy_farm");
	
		case 101:
			return joaat("region_scm_horse_shop");
	
		case 102:
			return joaat("region_scm_lonniesshack");
	
		case 103:
			return joaat("region_scm_love_triangle");
	
		case 104:
			return joaat("region_scm_radleys_pasture");
	
		case 105:
			return joaat("region_scm_rhodes");
	
		case 106:
			return joaat("region_scm_slave_pen");
	
		case 107:
			return joaat("region_tal_aurora_basin");
	
		case 108:
			return joaat("region_tal_dead_settler");
	
		case 109:
			return joaat("region_tal_cochinay");
	
		case 110:
			return joaat("region_tal_manzanitapost");
	
		case 111:
			return joaat("region_tal_pacificunionrr");
	
		case 112:
			return joaat("region_tal_tannersreach");
	
		case 113:
			return joaat("region_tal_trapper");
	
		case 114:
			return joaat("region_gap_gaptooth_breach");
	
		case 115:
			return joaat("region_gap_tumbleweed");
	
		case 116:
			return joaat("region_gap_rathskeller_fork");
	
		case 117:
			return joaat("region_rio_benedict_point");
	
		case 118:
			return joaat("region_rio_fort_mercer");
	
		case 119:
			return joaat("region_rio_plain_view");
	
		case 120:
			return joaat("region_cho_armadillo");
	
		case 121:
			return joaat("region_cho_coots_chapel");
	
		case 122:
			return joaat("region_cho_don_julio_house");
	
		case 123:
			return joaat("region_cho_rileys_charge");
	
		case 124:
			return joaat("region_cho_ridgewood_farm");
	
		case 125:
			return joaat("region_cho_twin_rocks");
	
		case 126:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 127:
			return joaat("region_hen_thieves_landing");
	
		case 128:
			return joaat("region_centralunionrr");
	
		case 129:
			return joaat("region_gap_solomons_folly");
	
		default:
		
	}

	return 0;
}

BOOL func_739(eStackSize essParam0) // Position - 0x1D0CC Hash - 0x14DDF3C9 ^0xAD14D790
{
	if (!(essParam0 >= 0 && essParam0 <= 150))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] & 32 != 0;

	return Global_1058888.f_40545[essParam0 /*11*/] & 32 != 0;
}

BOOL func_740(eStackSize essParam0, int iParam1) // Position - 0x1D115 Hash - 0xA98B69C6 ^0xAD9FDA10
{
	if (essParam0 < 0 || essParam0 >= 150)
		return false;

	return Global_1888801[essParam0 /*35*/].f_21 && iParam1 != false;
}

int func_741(eStackSize essParam0) // Position - 0x1D142 Hash - 0x66F40DEB ^0x66F40DEB
{
	var unk;

	unk = { func_924(essParam0) };
	return func_925(unk);
}

Hash func_742(eStackSize essParam0) // Position - 0x1D15C Hash - 0xE4DA9E55 ^0x3BF2293
{
	if (!func_403(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_30;
}

int func_743(var uParam0, int iParam1) // Position - 0x1D17C Hash - 0x6A570A13 ^0x38852254
{
	int num;
	int num2;

	func_926(uParam0);

	if (iParam1 == -1)
		return 0;

	num = func_738(iParam1);

	if (num == 0)
		return 0;

	num2 = 0;
	num2 = STREAMING::_0xD6E39DC5D46DF4AB(num);

	if (num2 <= 0)
		return 0;

	*uParam0 = iParam1;
	uParam0->f_1 = num;
	uParam0->f_2 = num2;
	return 1;
}

int func_744() // Position - 0x1D1CD Hash - 0x7DAD806F ^0x718A48D1
{
	int bounty;

	bounty = LAW::GET_BOUNTY(PLAYER::PLAYER_ID());
	return bounty;
}

float func_745(float fParam0, int iParam1, BOOL bParam2) // Position - 0x1D1E1 Hash - 0x83CCF02C ^0xC4876452
{
	BOOL flag;
	int num;
	float value;
	float num2;

	flag = fParam0 >= 0f;
	num = BUILTIN::FLOOR(BUILTIN::POW(10f, BUILTIN::TO_FLOAT(iParam1)));
	value = fParam0 * (float)num;

	if (bParam2)
		value = BUILTIN::TO_FLOAT(BUILTIN::CEIL(value));
	else
		value = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(value));

	num2 = value / (float)num;

	if (num2 < 0f && flag)
		num2 = num2 * -1f;

	return num2;
}

int func_746(var uParam0, var uParam1, var uParam2) // Position - 0x1D24A Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_927(uParam0, 0f, 0f, 0, 2);
	return func_927(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

BOOL func_747() // Position - 0x1D285 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

BOOL func_748() // Position - 0x1D294 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_749() // Position - 0x1D2B0 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_928(13);
	num2 = func_929(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_750() // Position - 0x1D2F3 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_751() // Position - 0x1D30E Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_694())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_752() // Position - 0x1D32D Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_753() // Position - 0x1D36F Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_754(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1D37D Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_766(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_755(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1D3C9 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_766(iParam0, 2, false, false);
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

float func_756(float fParam0, float fParam1, float fParam2) // Position - 0x1D50F Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_757() // Position - 0x1D536 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_928(12) <= -99f;
}

BOOL func_758() // Position - 0x1D54A Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_928(12) >= 99f;
}

char* func_759(int iParam0) // Position - 0x1D55E Hash - 0x21CE226B ^0xB5D1158A
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

void func_760(int iParam0, float fParam1, int iParam2) // Position - 0x1D599 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_496();

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

void func_761(int iParam0, int iParam1, int iParam2) // Position - 0x1D5EA Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_496();

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

Hash func_762(eStackSize essParam0) // Position - 0x1D63F Hash - 0xBA965109 ^0xCB1D208B
{
	switch (essParam0)
	{
		case 0:
			return joaat("perschar_comp_dutch");
	
		case 1:
			return joaat("perschar_comp_john");
	
		case 2:
			return joaat("perschar_comp_javier");
	
		case 3:
			return joaat("perschar_comp_bill");
	
		case 4:
			return joaat("perschar_comp_uncle");
	
		case 5:
			return joaat("perschar_comp_hosea");
	
		case 6:
			return joaat("perschar_comp_micah");
	
		case 7:
			return joaat("perschar_comp_charles");
	
		case 8:
			return joaat("perschar_comp_sean");
	
		case 9:
			return joaat("perschar_comp_lenny");
	
		case 10:
			return joaat("perschar_comp_kieran");
	
		case 11:
			return joaat("PERSCHAR_COMP_sadie");
	
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	
		case 13:
			return joaat("perschar_comp_abigail");
	
		case 14:
			return joaat("perschar_comp_jack");
	
		case 15:
			return joaat("perschar_comp_marybeth");
	
		case 16:
			return joaat("perschar_comp_molly");
	
		case 17:
			return joaat("perschar_comp_pearson");
	
		case 18:
			return joaat("perschar_comp_strauss");
	
		case 19:
			return joaat("perschar_comp_grimshaw");
	
		case 20:
			return joaat("perschar_comp_karen");
	
		case 21:
			return joaat("perschar_comp_swanson");
	
		case 22:
			return joaat("perschar_comp_tilly");
	
		case 23:
			return joaat("perschar_comp_trelawny");
	
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
	
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
	
		case 26:
			return joaat("perschar_comp_eagleflies");
	}

	return 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(eStackSize essParam0) // Position - 0x1D81B Hash - 0xA17D549C ^0x7F1612D7
{
	switch (essParam0)
	{
		case 0:
			return "DUTCH";
	
		case 1:
			return "JOHN";
	
		case 2:
			return "JAVIER";
	
		case 3:
			return "BILL";
	
		case 4:
			return "UNCLE";
	
		case 5:
			return "HOSEA";
	
		case 6:
			return "MICAH";
	
		case 7:
			return "CHARLES";
	
		case 8:
			return "SEAN";
	
		case 9:
			return "LENNY";
	
		case 10:
			return "KIERAN";
	
		case 11:
			return "SADIE";
	
		case 12:
			return "DOG";
	
		case 13:
			return "ABIGAIL";
	
		case 14:
			return "JACK";
	
		case 15:
			return "MARYBETH";
	
		case 16:
			return "MOLLY";
	
		case 17:
			return "PEARSON";
	
		case 18:
			return "STRAUSS";
	
		case 19:
			return "GRIMSHAW";
	
		case 20:
			return "KAREN";
	
		case 21:
			return "SWANSON";
	
		case 22:
			return "TILLY";
	
		case 23:
			return "TRELAWNY";
	
		case 24:
			return "CLEET";
	
		case 25:
			return "JOE";
	
		case 26:
			return "EAGLEFLIES";
	
		default:
		
	}

	return "Companion unknown";
}

BOOL func_764() // Position - 0x1D98E Hash - 0x1C71B0F ^0x1C71B0F
{
	if (func_17() != -1)
		return false;

	return func_283(true) > 0;
}

void func_765(var uParam0, int iParam1) // Position - 0x1D9A9 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

char* func_766(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D9BE Hash - 0xC24B5846 ^0x8773F6D4
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

BOOL func_767(eStackSize essParam0) // Position - 0x1DA67 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (essParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}

	return true;
}

BOOL func_768(eStackSize essParam0) // Position - 0x1DA97 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_769(eStackSize essParam0) // Position - 0x1DAB5 Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (essParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[essParam0 /*35*/].f_15;
}

float func_770() // Position - 0x1DAEC Hash - 0x97B49396 ^0x97B49396
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}

	return 25f;
}

int func_771(int iParam0) // Position - 0x1DB28 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_155(iParam0))
		return 0;

	return func_930(func_267(iParam0));
}

BOOL func_772(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x1DB48 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_931(iParam0, bParam2, essParam3))
		return true;

	return false;
}

BOOL func_773(int iParam0, int iParam1) // Position - 0x1DB6A Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (iParam1 != -1)
		return false;

	if (func_932(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}

	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}

	return false;
}

BOOL func_774(int iParam0) // Position - 0x1DC2E Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_933(iParam0);
}

BOOL func_775(eStackSize essParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x1DC3C Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_529(essParam0, bParam2, essParam3))
		return true;

	return false;
}

int func_776(int iParam0) // Position - 0x1DC5E Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_155(iParam0))
		return -1;

	return func_934(iParam0);
}

struct<4> func_777() // Position - 0x1DC7A Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_778(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1DC86 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_96(false);
	*panParam1 = { func_312(hParam0, func_537(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

int func_779() // Position - 0x1DCCB Hash - 0x3CF9FC4B ^0x3543A441
{
	return 16596983;
}

int func_780() // Position - 0x1DCD7 Hash - 0x3CF9FC4B ^0x5CAD57E5
{
	return 16662519;
}

BOOL func_781(BOOL bParam0) // Position - 0x1DCE3 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_782(BOOL bParam0) // Position - 0x1DCF3 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_783(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x1DD04 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_784(Ped pedParam0) // Position - 0x1DD2D Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_785(BOOL bParam0) // Position - 0x1DE15 Hash - 0xC93D526E ^0x4B50E528
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, true);
	
		return false;
	}

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

BOOL func_786(BOOL bParam0) // Position - 0x1DEF4 Hash - 0xC93D526E ^0x74C8EAD2
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_784(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_787(BOOL bParam0) // Position - 0x1E038 Hash - 0x135152DF ^0x6861D7EA
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
			func_202("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_788(Player plParam0, BOOL bParam1) // Position - 0x1E064 Hash - 0xFD261A1 ^0x9C91E75
{
	Player animal;

	animal = _INVALID_PLAYER_INDEX();

	if (TASK::_0x756C7B4C43DF0422(1))
		animal = TASK::_0x351F74ED6177EBE7();
	else
		animal = plParam0;

	if (!ENTITY::DOES_ENTITY_EXIST(animal))
	{
		if (bParam1)
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_792(animal))
	{
		if (bParam1)
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_202("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_789(Player plParam0, BOOL bParam1) // Position - 0x1E117 Hash - 0x76B65421 ^0x6E27F802
{
	Player outEntity;
	Player animal;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, false, false))
	{
		if (!func_792(outEntity))
		{
			if (bParam1)
				func_202("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (func_936(outEntity, true, true) > 2f)
		{
			if (bParam1)
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		return true;
	}

	animal = plParam0;

	if (!func_792(animal))
	{
		if (bParam1)
			func_202("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_202("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_202("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_790(Ped pedParam0) // Position - 0x1E24C Hash - 0xE0409C42 ^0xE0409C42
{
	return func_797(pedParam0, 7);
}

BOOL func_791() // Position - 0x1E25B Hash - 0xA095694D ^0x506AFF8
{
	Ped ped;
	Ped ledHorseFromPed;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ped, true))
		return false;

	if (!TASK::_IS_PED_LEADING_HORSE(ped))
		return false;

	ledHorseFromPed = TASK::_GET_LED_HORSE_FROM_PED(ped);

	if (!ENTITY::DOES_ENTITY_EXIST(ledHorseFromPed))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ledHorseFromPed, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(ledHorseFromPed))
		return false;

	return true;
}

BOOL func_792(Player plParam0) // Position - 0x1E2C6 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(plParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(plParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_793() // Position - 0x1E2F8 Hash - 0x58084EE7 ^0xBF593B34
{
	int num;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
		return false;

	num = func_937(Global_36, false);

	if (num >= 8 && num <= 12)
		return true;

	return false;
}

BOOL func_794() // Position - 0x1E332 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1911914.f_1578;
}

BOOL func_795(int iParam0) // Position - 0x1E341 Hash - 0xA059D395 ^0xE5C5C571
{
	return func_398(Global_1935496.f_7, iParam0);
}

Entity func_796(Ped pedParam0) // Position - 0x1E355 Hash - 0x3D354C79 ^0x6A3F9034
{
	int lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 0) != 0)
		return lootTarget;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 0) != 0)
		return lootTarget;

	return 0;
}

BOOL func_797(Ped pedParam0, int iParam1) // Position - 0x1E3B5 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_798(int iParam0) // Position - 0x1E3F4 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_17())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

BOOL func_799(eStackSize essParam0, BOOL bParam1) // Position - 0x1E41F Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL func_800(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x1E452 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

void func_801(Volume volParam0) // Position - 0x1E488 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_802(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x1E49F Hash - 0x97B2D4F4 ^0x726D5358
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_938(i))
			if (BUILTIN::VDIST(func_939(i), vParam0) < fParam3)
				return true;
	}

	return false;
}

BOOL func_803(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x1E4DB Hash - 0x79B25540 ^0x79B25540
{
	int i;

	for (i = 0; i < Global_40.f_450; i = i + 1)
	{
		if (Global_40.f_450[i] > -1 && Global_40.f_450[i] < 200)
			if (BUILTIN::VDIST(func_940(Global_40.f_450[i]), vParam0) < fParam3)
				return true;
		else
			break;
	}

	return false;
}

BOOL func_804(int iParam0, var uParam1) // Position - 0x1E542 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_941(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_805() // Position - 0x1E56F Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_942(Global_40.f_12019);
}

int func_806() // Position - 0x1E581 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_678(i);
	
		if (func_317(hash, 1, false) || func_812(func_811(hash)))
			num = num + 1;
	}

	return num;
}

int func_807() // Position - 0x1E5CA Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_943(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_808() // Position - 0x1E603 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_817(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_809() // Position - 0x1E63C Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_810(int iParam0) // Position - 0x1E64E Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_811(Hash hParam0) // Position - 0x1E707 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_812(BOOL bParam0) // Position - 0x1E79D Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_813(int iParam0) // Position - 0x1E7B0 Hash - 0x21CE226B ^0x890A27A6
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

int func_814(int iParam0) // Position - 0x1E7EB Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_815(int iParam0) // Position - 0x1E830 Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x1E879 Hash - 0xA17D549C ^0xC15B0A0D
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

BOOL func_817(Hash hParam0) // Position - 0x1E987 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Hash hParam0) // Position - 0x1E997 Hash - 0xA17D549C ^0xE1BA5BF3
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

char* func_819(int iParam0) // Position - 0x1EA54 Hash - 0x21CE226B ^0xE8BEC2CE
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

BOOL func_820(Hash hParam0) // Position - 0x1EA8F Hash - 0x5C411CF ^0x5C411CF
{
	if (func_944(hParam0) && func_317(hParam0, 1, false))
		return 1;
	else if (func_945(hParam0) && func_946(hParam0))
		return 1;

	return 0;
}

char* func_821(Hash hParam0) // Position - 0x1EACD Hash - 0x9E507475 ^0x7E9AFD98
{
	if (!func_309(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_473(hParam0));
}

int func_822(int iParam0) // Position - 0x1EAF1 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_823(int iParam0) // Position - 0x1EB03 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_824(int iParam0) // Position - 0x1EB17 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_947(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_825(Hash hParam0) // Position - 0x1EB58 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

float func_826(int iParam0, int iParam1) // Position - 0x1EB66 Hash - 0x882BA7B3 ^0xDE52A593
{
	int num;
	float pedStamina;
	float pedMaxStamina;
	float num2;
	float num3;

	if (iParam1 == -1)
	{
		num2 = pedMaxStamina - pedStamina;
		return num2 / 2f;
	}

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_35);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_35);
			num = 8;
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			num = 14;
			break;
	}

	num3 = (float)num * iParam1 + pedStamina;

	if (num3 > pedMaxStamina)
		num2 = pedMaxStamina - pedStamina;
	else
		num2 = num3 - pedStamina;

	return num2 / 2f;
}

void func_827(int iParam0) // Position - 0x1EC1B Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_17() != -1)
		return;

	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT(iParam0 * num));
	}

	return;
}

float func_828(int iParam0, float fParam1) // Position - 0x1EC58 Hash - 0xDF35DF4B ^0x834D2C65
{
	return func_948(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

BOOL func_829(var uParam0, var uParam1, float fParam2) // Position - 0x1EC6C Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_17() != -1)
		return true;

	if (!func_949(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_950(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_231(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_950(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_830(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1ED58 Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_17() == false)
	{
		func_951(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_289(0);

	if (bParam1)
		func_952(num);

	if (num >= 100f - 1f)
		func_953();

	if (bParam2)
		fParam0 = func_954(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_290(0, func_756(fParam0, -100f, 100f), bParam1);
	return;
}

void func_831(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1EDCA Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_17() == false)
	{
		func_951(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_289(2);

	if (bParam1)
		func_952(num);

	if (bParam2)
		fParam0 = func_954(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_290(2, func_756(fParam0, -100f, 100f), bParam1);
	return;
}

void func_832(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1EE2B Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_17() == false)
	{
		func_951(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_289(1);

	if (bParam1)
		func_952(num);

	if (bParam2)
		fParam0 = func_954(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_290(1, func_756(fParam0, -100f, 100f), bParam1);
	return;
}

void func_833(float fParam0, BOOL bParam1) // Position - 0x1EE8C Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_928(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_431(17))
		return;

	if (func_955())
	{
		num2 = func_929(num);
		num = num + fParam0;
		num3 = func_929(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_65();
			func_66(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_956(&num4, &num5);
		func_957(13, func_756(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_231(94, false);
	}

	return;
}

int func_834(int iParam0) // Position - 0x1EF3D Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
		case 1:
			return joaat("provision_ro_flower_acunas_star");
	
		case 2:
			return joaat("consumable_herb_ginseng");
	
		case 3:
			return joaat("consumable_herb_ginseng");
	
		case 4:
			return joaat("consumable_herb_bay_bolete");
	
		case 5:
			return joaat("consumable_herb_black_berry");
	
		case 6:
			return joaat("consumable_herb_currant");
	
		case 7:
			return joaat("consumable_herb_burdock_root");
	
		case 8:
			return joaat("consumable_herb_chanterelles");
	
		case 9:
			return joaat("provision_ro_flower_cigar");
	
		case 10:
			return joaat("provision_ro_flower_clamshell");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 14:
			return joaat("provision_ro_flower_dragons");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 17:
			return joaat("provision_ro_flower_ghost");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return joaat("consumable_herb_sage");
	
		case 20:
			return joaat("consumable_herb_indian_tobacco");
	
		case 21:
			return joaat("provision_ro_flower_lady_of_night");
	
		case 22:
			return joaat("provision_ro_flower_lady_slipper");
	
		case 23:
			return joaat("consumable_herb_milkweed");
	
		case 24:
			return joaat("provision_ro_flower_moccasin");
	
		case 25:
			return joaat("provision_ro_flower_night_scented");
	
		case 26:
			return joaat("consumable_herb_oleander_sage");
	
		case 27:
			return joaat("consumable_herb_oregano");
	
		case 28:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 29:
			return joaat("consumable_herb_prairie_poppy");
	
		case 30:
			return joaat("provision_ro_flower_queens");
	
		case 31:
			return joaat("consumable_herb_rams_head");
	
		case 32:
			return joaat("provision_ro_flower_rat_tail");
	
		case 33:
			return joaat("consumable_herb_red_raspberry");
	
		case 34:
			return joaat("consumable_herb_sage");
	
		case 35:
			return joaat("provision_ro_flower_sparrows");
	
		case 36:
			return joaat("provision_ro_flower_spider");
	
		case 37:
			return joaat("consumable_herb_vanilla_flower");
	
		case 38:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 39:
			return joaat("consumable_herb_wild_carrots");
	
		case 40:
			return joaat("consumable_herb_wild_feverfew");
	
		case 41:
			return joaat("consumable_herb_wild_mint");
	
		case 42:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 43:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_835(int iParam0, BOOL bParam1) // Position - 0x1F22C Hash - 0x94511870 ^0x94511870
{
	if (!func_836(iParam0))
		return;

	if (func_17() != -1)
	{
		Global_36638[iParam0] = Global_36638[iParam0] || bParam1;
		return;
	}

	Global_40.f_9274[iParam0] = Global_40.f_9274[iParam0] || bParam1;
	return;
}

BOOL func_836(int iParam0) // Position - 0x1F274 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_837(int iParam0) // Position - 0x1F281 Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_836(iParam0))
		return false;

	return func_958(iParam0, 4, true);
}

void func_838(int iParam0, BOOL bParam1) // Position - 0x1F29F Hash - 0x2762FC5A ^0x2762FC5A
{
	if (!func_836(iParam0))
		return;

	if (func_959(iParam0))
		return;

	func_835(iParam0, 2);

	if (bParam1)
		if (!func_74(0, false, true))
			func_86(true, 6);

	return;
}

BOOL func_839(int iParam0) // Position - 0x1F2DD Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_836(iParam0))
		return false;

	return func_958(iParam0, true, true);
}

void func_840(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F2FB Hash - 0xD71C2102 ^0xD71C2102
{
	if (!func_836(iParam0))
		return;

	if (func_839(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_960(iParam0);

	if (!bParam1)
	{
		if (func_17() != -1)
		{
		}
		else
		{
			func_961(iParam0);
		}
	}

	func_835(iParam0, true);

	if (func_17() == -1)
		func_962(iParam0, func_320());

	func_838(iParam0, true);

	if (bParam2)
		if (!func_74(0, false, true))
			func_86(true, 6);

	return;
}

float func_841(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F37A Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_842() // Position - 0x1F3C2 Hash - 0xFF29F962 ^0xFF29F962
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

Hash func_843(Hash hParam0) // Position - 0x1F467 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_380(func_963(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_844(Hash hParam0, var uParam1) // Position - 0x1F496 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_380(func_963(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_200(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_845() // Position - 0x1F50D Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_200(hash) == -999503751)
			if (func_964() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_846(Hash hParam0, BOOL bParam1) // Position - 0x1F55E Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_310(hParam0, false, false) };
	guid = { func_312(hParam0, unk, unk.f_4, false) };

	if (func_386(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_96(false), &guid, bParam1);
	return true;
}

void func_847(var uParam0, Hash hParam1, int iParam2) // Position - 0x1F5AA Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_965(iParam2, *uParam0);
	func_966(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

int func_848(Hash hParam0) // Position - 0x1F5E0 Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_849(int iParam0) // Position - 0x1F630 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_850(int iParam0) // Position - 0x1F648 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_851(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F659 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_200(hParam0))
	{
		case -2061583405:
			flag = func_967(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_967(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_967(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_967(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_967(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_967(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_625();

	if (bParam1)
		func_627(false, false);

	return;
}

void func_852(int iParam0, int iParam1) // Position - 0x1F726 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_968(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_968(&iParam0->f_2[i /*2*/], 1))
					func_969(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_853(int iParam0, int iParam1, int iParam2) // Position - 0x1F852 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_970(iParam0, 1))
		func_971(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_854(int iParam0, Hash hParam1) // Position - 0x1F899 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_855(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1F8B2 Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_634(num2, num);
	
		if (bParam1)
			func_634(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_634(num3, num);
	}

	return;
}

BOOL func_856(Hash hParam0) // Position - 0x1F99E Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_857(int iParam0) // Position - 0x1F9E1 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_624();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_858(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x1FA07 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_859(Hash hParam0, int iParam1, var uParam2) // Position - 0x1FA4B Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_860(int iParam0, int iParam1) // Position - 0x1FA5C Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_380(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_861(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1FA7A Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_380(hParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_372(524288))
	{
		switch (hParam1)
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

int func_862(Hash hParam0) // Position - 0x1FAE5 Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_863(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1FB30 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_17() == -1)
		func_972(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_973(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_864(BOOL bParam0, eStackSize essParam1) // Position - 0x1FBA6 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_17() == -1)
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

Hash func_865(eStackSize essParam0) // Position - 0x1FC23 Hash - 0xB8EC44B7 ^0xE877E9C4
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

void func_866(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x2015C Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_974(&(Global_1946054.f_1378), essParam0);
	func_975(2, essParam0, 6);

	if (bParam1)
		func_627(false, true);

	return;
}

BOOL func_867() // Position - 0x20184 Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1914319.f_17369 || Global_1914319.f_18996.f_1;
}

int func_868() // Position - 0x201A2 Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1051081.f_11;
}

char* func_869() // Position - 0x201B0 Hash - 0x306ACA3A ^0xA0595A73
{
	return "unnamed";
}

BOOL func_870(int iParam0) // Position - 0x201BC Hash - 0xC360B8E6 ^0xCBE2AF9D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -1:
			num = 16;
			break;
	
		case 0:
			num = 32;
			break;
	
		case 1:
			num = 64;
			break;
	
		case 2:
			num = 128;
			break;
	
		case 3:
			num = 256;
			break;
	
		case 4:
			num = 512;
			break;
	
		case 5:
			num = 1024;
			break;
	
		case 6:
			num = 2048;
			break;
	
		case 8:
			num = 4096;
			break;
	}

	return num;
}

BOOL func_871(int iParam0) // Position - 0x2024B Hash - 0xB11233B9 ^0x48EE22B7
{
	if (Global_1572887.f_12 == -1)
		return false;

	return func_976(32, iParam0);
}

int func_872(int iParam0) // Position - 0x20269 Hash - 0x322F9962 ^0x249D071F
{
	if (iParam0 == 255)
		return Global_1109000.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 25;

	if (Global_1224589.f_16[iParam0])
		return Global_1108108[iParam0 /*27*/].f_1;

	return 25;
}

BOOL func_873(Player plParam0) // Position - 0x202B4 Hash - 0x5FB1BEA6 ^0x62CB8856
{
	if (func_977(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) != 1)
			func_978(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) == 1;
}

BOOL func_874(var uParam0) // Position - 0x202ED Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

void func_875(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x20302 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_876(Hash hParam0, int iParam1, int iParam2) // Position - 0x20333 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_715(hash);
	num3 = func_715(hash2);
	num4 = func_715(hash3);

	if (iParam2 != 2)
		num5 = func_715(hash4);

	num6 = func_716(hash);
	num7 = func_716(hash2);
	num8 = func_716(hash3);

	if (iParam2 != 2)
		num9 = func_716(hash4);

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

int func_877(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x204AC Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_309(hParam0, 0))
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

BOOL func_878(Hash hParam0) // Position - 0x204FA Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_979(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_879(var uParam0) // Position - 0x20516 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_309(*uParam0, 0))
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

BOOL func_880(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x20592 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_309(hParam0, 0))
		return false;

	unk = { func_310(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_686(398 + i, 1);
	
		if (func_539(hParam0, &unk, hash, false))
		{
			flag = func_540(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_881(int iParam0) // Position - 0x20626 Hash - 0x92F940EE ^0x92F940EE
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

float func_882(int iParam0) // Position - 0x2067A Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_980(iParam0);
	
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
			return func_980(iParam0);
	
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
			return func_980(iParam0);
	
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

BOOL func_883(int iParam0) // Position - 0x20948 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_431(18);
	
		case 1:
			return func_431(19);
	
		case 2:
			return func_431(20);
	
		default:
		
	}

	return true;
}

int func_884(int iParam0) // Position - 0x20986 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_981(Global_40.f_11095.f_11[iParam0]);
}

void func_885(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2099E Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_17() != -1)
		return;

	if (Global_1347477.f_117 || !func_431(31))
		return;

	num = func_884(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_884(iParam0);

	if (func_982(iParam0) && func_983(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_984(num2, fParam1);
		
			if (fParam1 > (float)func_985(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_231(func_986(iParam0), false);
				
					func_987(iParam0, num3, num4);
					func_171(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_886(int iParam0) // Position - 0x20AA0 Hash - 0xEB40D7A4 ^0x778D734B
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_887(int iParam0) // Position - 0x20AAC Hash - 0x21FAF347 ^0xAF7D8F21
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

void func_888(BOOL bParam0) // Position - 0x20AE7 Hash - 0xB584A39F ^0xFC4CA802
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

void func_889(int iParam0) // Position - 0x20B25 Hash - 0x2EDDC601 ^0xD5F96979
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

void func_890(BOOL bParam0) // Position - 0x20B93 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_891(BOOL bParam0) // Position - 0x20BCD Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_892(BOOL bParam0) // Position - 0x20C07 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_893(BOOL bParam0) // Position - 0x20C41 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_894(BOOL bParam0) // Position - 0x20C64 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_895(BOOL bParam0) // Position - 0x20CA6 Hash - 0xBAD014C9 ^0x3FDE3E28
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

void func_896() // Position - 0x20CE8 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_988();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_435(joaat("weapon_revolver_cattleman_john"));
		func_479(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_435(joaat("weapon_melee_knife_john"));
		func_479(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

int func_897(int iParam0, int iParam1) // Position - 0x20D60 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

Hash func_898(Hash hParam0) // Position - 0x20D76 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_310(hParam0, true, false) };
	return func_379(unk.f_4);
}

Hash func_899(int iParam0) // Position - 0x20D92 Hash - 0xB8EC44B7 ^0xD4FF48D5
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

eStackSize func_900(Hash hParam0) // Position - 0x20F0F Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_989(hParam0, -1);
}

BOOL func_901(eStackSize essParam0, BOOL bParam1) // Position - 0x20F1E Hash - 0x10DE2364 ^0x10DE2364
{
	return func_990(func_65(), essParam0, bParam1);
}

BOOL func_902() // Position - 0x20F32 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_694())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_903(int iParam0) // Position - 0x20F49 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_991(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_904(int iParam0, const char* sParam1, int iParam2) // Position - 0x20F7D Hash - 0x56940320 ^0x4000229C
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_902())
		func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_905(Hash hParam0) // Position - 0x20FE9 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_906(int iParam0) // Position - 0x20FF9 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_992(iParam0, 1);
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

void func_907(int iParam0) // Position - 0x21092 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_992(iParam0, 1);
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

void func_908() // Position - 0x21118 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_907(-939420910);
	func_907(-1187950766);
	func_907(356365161);
	func_907(753127042);
	func_907(-2038424081);
	func_907(1884271742);
	func_907(459290420);
	return;
}

void func_909() // Position - 0x2115F Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_907(704802028);
	func_907(588987611);
	func_907(2008888900);
	func_907(1649996811);
	func_907(227918160);
	func_907(168171957);
	func_907(1193080109);
	func_907(-491981251);
	func_907(-639037538);
	func_907(-618620429);
	return;
}

BOOL func_910(int iParam0) // Position - 0x211C1 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_992(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_911(Hash hParam0) // Position - 0x21210 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_912(Hash hParam0) // Position - 0x21220 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_913(int iParam0) // Position - 0x21265 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_914(Hash hParam0) // Position - 0x21280 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_915(eStackSize essParam0) // Position - 0x21290 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_600(essParam0))
		return false;

	if (func_601(essParam0, 2))
		return true;

	return false;
}

void func_916(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x212B5 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_600(essParam0))
		return;

	if (!func_915(essParam0))
	{
		func_918(essParam0, 2);
	
		if (bParam2)
			if (!func_74(0, false, true))
				func_86(true, 4);
	
		if (!func_917() && !bParam1 && !func_74(0, false, true))
			func_202(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_993(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

BOOL func_917() // Position - 0x2132A Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_918(eStackSize essParam0, BOOL bParam1) // Position - 0x2134A Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_600(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

void func_919(Hash hParam0, BOOL bParam1) // Position - 0x21376 Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_994(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_432(50);
			else
				func_432(48);
			break;
	
		case 1:
			if (bParam1)
				func_432(51);
			else
				func_432(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_995(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_461();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_461();
			}
			break;
	
		case 3:
			func_432(24);
		
			if (bParam1)
			{
				if (!func_995(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_461();
				}
			}
			break;
	}

	return;
}

void func_920(int iParam0) // Position - 0x21455 Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_996(0))
				num = num + 1;
		
			if (func_996(2))
				num = num + 1;
		
			if (func_996(4))
				num = num + 1;
		
			if (!func_997(16))
			{
				if (num == 1)
				{
					func_998();
					func_231(456, true);
					func_999(16);
				}
			}
		
			if (!func_997(32))
			{
				if (num >= 3)
				{
					func_998();
					func_231(456, true);
					func_999(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_996(1))
				num = num + 1;
		
			if (func_996(3))
				num = num + 1;
		
			if (func_996(7))
				num = num + 1;
		
			if (!func_997(1))
			{
				if (num == 1)
				{
					func_1000();
					func_231(457, true);
					func_999(1);
				}
			}
		
			if (!func_997(2))
			{
				if (num >= 3)
				{
					func_1000();
					func_231(457, true);
					func_999(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_996(5))
				num = num + 1;
		
			if (func_996(6))
				num = num + 1;
		
			if (func_996(8))
				num = num + 1;
		
			if (!func_997(4))
			{
				if (num == 1)
				{
					func_1001();
					func_231(455, true);
					func_999(4);
				}
			}
		
			if (!func_997(8))
			{
				if (num >= 3)
				{
					func_1001();
					func_231(455, true);
					func_999(8);
				}
			}
			break;
	}

	return;
}

void func_921(var uParam0) // Position - 0x215EC Hash - 0x2CE00B72 ^0x958A4727
{
	func_733(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_733(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_733(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_922(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x21626 Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_1002(anParam0))
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
BOOL func_923(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x216C7 Hash - 0x92B705D3 ^0xB783F681
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

Vector3 func_924(eStackSize essParam0) // Position - 0x217BD Hash - 0xCDF3C459 ^0xB2CFA2F
{
	return VOLUME::GET_VOLUME_COORDS(Global_1888801[essParam0 /*35*/].f_3);
}

int func_925(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x217D3 Hash - 0x7C5A7478 ^0xB1FEA325
{
	return BUILTIN::ROUND(BUILTIN::VDIST(Global_36, vParam0));
}

void func_926(var uParam0) // Position - 0x217EC Hash - 0xA48990DD ^0xFE037495
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
	return;
}

int func_927(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x217FD Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

float func_928(int iParam0) // Position - 0x21845 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_929(float fParam0) // Position - 0x21859 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

int func_930(BOOL bParam0) // Position - 0x21874 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_931(int iParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x21881 Hash - 0x561CE123 ^0xB84B7B4C
{
	if (iParam0 == 18)
		return false;

	if (iParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && Global_1835011[iParam0 /*74*/].f_21 == essParam2)
		return true;

	return false;
}

BOOL func_932(int iParam0) // Position - 0x218CE Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1003(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

BOOL func_933(int iParam0) // Position - 0x218FE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

int func_934(int iParam0) // Position - 0x21922 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x21941 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

float func_936(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2194A Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(plParam0))
		return -1f;

	return func_841(Global_35, plParam0, bParam1, bParam2);
}

int func_937(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x21973 Hash - 0x6C0BC7C7 ^0x6C0BC7C7
{
	int i;
	int num;
	float num2;
	float num3;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!bParam3 || func_1004(i))
		{
			num3 = func_1005(i, uParam0);
		
			if (num3 < num2)
			{
				num = i;
				num2 = num3;
			}
		}
	}

	return num;
}

BOOL func_938(int iParam0) // Position - 0x219C8 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_1006(Global_1835011[iParam0 /*74*/].f_1);
}

Vector3 func_939(int iParam0) // Position - 0x219F4 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_1007(iParam0);
}

Vector3 func_940(eStackSize essParam0) // Position - 0x21A02 Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_153(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_1008(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

BOOL func_941(int iParam0) // Position - 0x21A48 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_942(BOOL bParam0) // Position - 0x21A5E Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_943(Hash hParam0) // Position - 0x21A83 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_944(Hash hParam0) // Position - 0x21A93 Hash - 0xB8632262 ^0xB8632262
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

int func_945(Hash hParam0) // Position - 0x21B3A Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_946(Hash hParam0) // Position - 0x21B73 Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_1009(&entity, 0, i, &model) && !func_1009(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_1010(entity, &model);
		
			if (func_309(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

int func_947(int iParam0) // Position - 0x21BDF Hash - 0x6EC15CF9 ^0xE613EBE0
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

float func_948(float fParam0, float fParam1) // Position - 0x21C60 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_949(int iParam0) // Position - 0x21C8E Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_690())
		return false;

	return func_339(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_950(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x21CB0 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_1011(pedParam0, &str);
}

void func_951(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x21CF7 Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_954(iParam0, fParam1, true);

	func_266(iParam0, func_1012(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_952(float fParam0) // Position - 0x21D26 Hash - 0x92695771 ^0x4360C848
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_953() // Position - 0x21D5A Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_954(int iParam0, float fParam1, BOOL bParam2) // Position - 0x21D87 Hash - 0xFB55A421 ^0xFB55A421
{
	eStackSize stackSize;
	int num;

	stackSize = func_65();
	func_1013(&stackSize, 0, 0, 0, 1, 0, 0);
	num = func_1014(iParam0, 2);

	if (func_990(stackSize, func_1015(iParam0, 2), true))
	{
		func_1016(iParam0, 0, 2);
		num = 0;
	}

	if (num >= 2)
	{
		func_231(88, bParam2);
		return 0f;
	}

	func_1017(iParam0, func_65(), 2);
	func_1016(iParam0, num + 1, 2);
	return fParam1;
}

BOOL func_955() // Position - 0x21DF0 Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_17() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_901(Global_1347477.f_195, false);
}

void func_956(var uParam0, var uParam1) // Position - 0x21E2C Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_176())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_957(int iParam0, float fParam1) // Position - 0x21E65 Hash - 0x45CA0D9B ^0x42CA9E73
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_1018(1, flag, true, str);
		func_1019(!flag, fParam1 < 0f, flag);
		num = func_511(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_261();
	}
	else if (iParam0 == 10)
	{
		num = func_511(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_511(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_958(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21F3B Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_836(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

BOOL func_959(int iParam0) // Position - 0x21F7E Hash - 0xE139661B ^0xE139661B
{
	if (!func_836(iParam0))
		return false;

	return func_958(iParam0, 2, true);
}

BOOL func_960(int iParam0) // Position - 0x21F9C Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
	
		default:
			return 0;
	}

	return 0;
}

void func_961(int iParam0) // Position - 0x22009 Hash - 0xC5BA52D ^0xC5BA52D
{
	switch (iParam0)
	{
		case 2:
			func_231(214, false);
			break;
	
		case 3:
			func_231(215, false);
			break;
	
		case 4:
			func_231(233, false);
			break;
	
		case 5:
			func_231(210, false);
			break;
	
		case 6:
			func_231(229, false);
			break;
	
		case 7:
			func_231(226, false);
			break;
	
		case 8:
			func_231(234, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_231(237, false);
			break;
	
		case 13:
			func_231(221, false);
			break;
	
		case 15:
			func_231(217, false);
			break;
	
		case 16:
			func_231(211, false);
			break;
	
		case 18:
			func_231(228, false);
			break;
	
		case 19:
			func_231(222, false);
			break;
	
		case 20:
			func_231(227, false);
			break;
	
		case 23:
			func_231(218, false);
			break;
	
		case 26:
			func_231(220, false);
			break;
	
		case 27:
			func_231(238, false);
			break;
	
		case 28:
			func_231(235, false);
			break;
	
		case 29:
			func_231(230, false);
			break;
	
		case 31:
			func_231(236, false);
			break;
	
		case 33:
			func_231(212, false);
			break;
	
		case 34:
			func_231(223, false);
			break;
	
		case 37:
			func_231(219, false);
			break;
	
		case 38:
			func_231(224, false);
			break;
	
		case 39:
			func_231(231, false);
			break;
	
		case 40:
			func_231(225, false);
			break;
	
		case 41:
			func_231(239, false);
			break;
	
		case 42:
			func_231(213, false);
			break;
	
		case 43:
			func_231(216, false);
			break;
	}

	return;
}

void func_962(int iParam0, BOOL bParam1) // Position - 0x221F2 Hash - 0xE05A2D67 ^0x31D6C1E4
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == true)
				func_321(joaat("journal_herb_acunas_star_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_acunas_star_orchid_jn"), 0);
			break;
	
		case 2:
			if (bParam1 == true)
				func_321(joaat("journal_herb_alaskan_ginseng_ar"), 0);
			else
				func_321(joaat("journal_herb_alaskan_ginseng_jn"), 0);
			break;
	
		case 3:
			if (bParam1 == true)
				func_321(joaat("journal_herb_american_ginseng_ar"), 0);
			else
				func_321(joaat("journal_herb_american_ginseng_jn"), 0);
			break;
	
		case 4:
			if (bParam1 == true)
				func_321(joaat("journal_herb_bay_bolete_ar"), 0);
			else
				func_321(joaat("journal_herb_bay_bolete_jn"), 0);
			break;
	
		case 5:
			if (bParam1 == true)
				func_321(joaat("journal_herb_blackberry_ar"), 0);
			else
				func_321(joaat("journal_herb_blackberry_jn"), 0);
			break;
	
		case 6:
			if (bParam1 == true)
				func_321(joaat("journal_herb_black_currant_ar"), 0);
			else
				func_321(joaat("journal_herb_black_currant_jn"), 0);
			break;
	
		case 7:
			if (bParam1 == true)
				func_321(joaat("journal_herb_burdock_root_ar"), 0);
			else
				func_321(joaat("journal_herb_burdock_root_jn"), 0);
			break;
	
		case 8:
			if (bParam1 == true)
				func_321(joaat("journal_herb_chanterelle_ar"), 0);
			else
				func_321(joaat("journal_herb_chanterelle_jn"), 0);
			break;
	
		case 9:
			if (bParam1 == true)
				func_321(joaat("journal_herb_cigar_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_cigar_orchid_jn"), 0);
			break;
	
		case 10:
			if (bParam1 == true)
				func_321(joaat("journal_herb_clamshell_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_clamshell_orchid_jn"), 0);
			break;
	
		case 11:
			if (bParam1 == true)
				func_321(joaat("journal_herb_bulrush_ar"), 0);
			else
				func_321(joaat("journal_herb_bulrush_jn"), 0);
			break;
	
		case 12:
			if (bParam1 == true)
				func_321(joaat("journal_herb_creeping_thyme_ar"), 0);
			else
				func_321(joaat("journal_herb_creeping_thyme_jn"), 0);
			break;
	
		case 13:
			if (bParam1 == true)
				func_321(joaat("journal_herb_desert_sage_ar"), 0);
			else
				func_321(joaat("journal_herb_desert_sage_jn"), 0);
			break;
	
		case 14:
			if (bParam1 == true)
				func_321(joaat("journal_herb_dragons_mouth_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_dragons_mouth_orchid_jn"), 0);
			break;
	
		case 15:
			if (bParam1 == true)
				func_321(joaat("journal_herb_english_mace_ar"), 0);
			else
				func_321(joaat("journal_herb_english_mace_jn"), 0);
			break;
	
		case 16:
			if (bParam1 == true)
				func_321(joaat("journal_herb_huckleberry_ar"), 0);
			else
				func_321(joaat("journal_herb_huckleberry_jn"), 0);
			break;
	
		case 17:
			if (bParam1 == true)
				func_321(joaat("journal_herb_ghost_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_ghost_orchid_jn"), 0);
			break;
	
		case 18:
			if (bParam1 == true)
				func_321(joaat("journal_herb_golden_currant_ar"), 0);
			else
				func_321(joaat("journal_herb_golden_currant_jn"), 0);
			break;
	
		case 19:
			if (bParam1 == true)
				func_321(joaat("journal_herb_hummingbird_sage_ar"), 0);
			else
				func_321(joaat("journal_herb_hummingbird_sage_jn"), 0);
			break;
	
		case 20:
			if (bParam1 == true)
				func_321(joaat("journal_herb_indian_tobacco_ar"), 0);
			else
				func_321(joaat("journal_herb_indian_tobacco_jn"), 0);
			break;
	
		case 21:
			if (bParam1 == true)
				func_321(joaat("journal_herb_lady_of_the_night_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_lady_of_the_night_orchid_jn"), 0);
			break;
	
		case 22:
			if (bParam1 == true)
				func_321(joaat("journal_herb_lady_slipper_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_lady_slipper_orchid_jn"), 0);
			break;
	
		case 23:
			if (bParam1 == true)
				func_321(joaat("journal_herb_milkweed_ar"), 0);
			else
				func_321(joaat("journal_herb_milkweed_jn"), 0);
			break;
	
		case 24:
			if (bParam1 == true)
				func_321(joaat("journal_herb_moccasin_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_moccasin_orchid_jn"), 0);
			break;
	
		case 25:
			if (bParam1 == true)
				func_321(joaat("journal_herb_night_scented_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_night_scented_orchid_jn"), 0);
			break;
	
		case 26:
			if (bParam1 == true)
				func_321(joaat("journal_herb_oleander_sage_ar"), 0);
			else
				func_321(joaat("journal_herb_oleander_sage_jn"), 0);
			break;
	
		case 27:
			if (bParam1 == true)
				func_321(joaat("journal_herb_oregano_ar"), 0);
			else
				func_321(joaat("journal_herb_oregano_jn"), 0);
			break;
	
		case 28:
			if (bParam1 == true)
				func_321(joaat("journal_herb_parasol_ar"), 0);
			else
				func_321(joaat("journal_herb_parasol_jn"), 0);
			break;
	
		case 29:
			if (bParam1 == true)
				func_321(joaat("journal_herb_prairie_poppy_ar"), 0);
			else
				func_321(joaat("journal_herb_prairie_poppy_jn"), 0);
			break;
	
		case 30:
			if (bParam1 == true)
				func_321(joaat("journal_herb_queens_orchids_ar"), 0);
			else
				func_321(joaat("journal_herb_queens_orchids_jn"), 0);
			break;
	
		case 31:
			if (bParam1 == true)
				func_321(joaat("journal_herb_ramshead_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_ramshead_orchid_jn"), 0);
			break;
	
		case 32:
			if (bParam1 == true)
				func_321(joaat("journal_herb_rat_tail_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_rat_tail_orchid_jn"), 0);
			break;
	
		case 33:
			if (bParam1 == true)
				func_321(joaat("journal_herb_raspberry_ar"), 0);
			else
				func_321(joaat("journal_herb_raspberry_jn"), 0);
			break;
	
		case 34:
			if (bParam1 == true)
				func_321(joaat("journal_herb_red_sage_ar"), 0);
			else
				func_321(joaat("journal_herb_red_sage_jn"), 0);
			break;
	
		case 35:
			if (bParam1 == true)
				func_321(joaat("journal_herb_sparrows_egg_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_sparrows_egg_orchid_jn"), 0);
			break;
	
		case 36:
			if (bParam1 == true)
				func_321(joaat("journal_herb_spider_orchid_ar"), 0);
			else
				func_321(joaat("journal_herb_spider_orchid_jn"), 0);
			break;
	
		case 37:
			if (bParam1 == true)
				func_321(joaat("journal_herb_vanilla_flower_ar"), 0);
			else
				func_321(joaat("journal_herb_vanilla_flower_jn"), 0);
			break;
	
		case 38:
			if (bParam1 == true)
				func_321(joaat("journal_herb_violet_snowdrop_ar"), 0);
			else
				func_321(joaat("journal_herb_violet_snowdrop_jn"), 0);
			break;
	
		case 39:
			if (bParam1 == true)
				func_321(joaat("journal_herb_carrot_ar"), 0);
			else
				func_321(joaat("journal_herb_carrot_jn"), 0);
			break;
	
		case 40:
			if (bParam1 == true)
				func_321(joaat("journal_herb_feverfew_ar"), 0);
			else
				func_321(joaat("journal_herb_feverfew_jn"), 0);
			break;
	
		case 41:
			if (bParam1 == true)
				func_321(joaat("journal_herb_mint_ar"), 0);
			else
				func_321(joaat("journal_herb_mint_jn"), 0);
			break;
	
		case 42:
			if (bParam1 == true)
				func_321(joaat("journal_herb_winterberry_ar"), 0);
			else
				func_321(joaat("journal_herb_winterberry_jn"), 0);
			break;
	
		case 43:
			if (bParam1 == true)
				func_321(joaat("journal_herb_yarrow_ar"), 0);
			else
				func_321(joaat("journal_herb_yarrow_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

Hash func_963(Hash hParam0) // Position - 0x22867 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_379(outSlotId);
}

Hash func_964() // Position - 0x2288A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

void func_965(int iParam0, int iParam1) // Position - 0x22899 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_966(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x228B2 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_1020(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_380(func_898(hParam1), 1);
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
		func_1021(uParam0);

	return;
}

BOOL func_967(Hash hParam0, int iParam1) // Position - 0x2290E Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_620(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_200(hParam0) != -999503751)
			func_1022(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_200(hParam0) != -999503751)
		func_1022(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_846(hParam0, true);
	return 1;
}

BOOL func_968(var uParam0, int iParam1) // Position - 0x229F4 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_969(var uParam0, int iParam1, int iParam2) // Position - 0x22A05 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_970(int iParam0, int iParam1) // Position - 0x22A18 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_971(int iParam0, int iParam1) // Position - 0x22A29 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_972(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x22A3C Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_973(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x22A97 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_974(Hash hParam0, eStackSize essParam1) // Position - 0x22B01 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_17() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_972(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_973(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_975(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x22B9C Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_17() == -1)
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

BOOL func_976(int iParam0, int iParam1) // Position - 0x22C24 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_1023(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_1024())
		return func_1023(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_1023(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

BOOL func_977(Player plParam0) // Position - 0x22C98 Hash - 0x80018C76 ^0x60939258
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1058888.f_49041), plParam0))
		return true;

	return false;
}

void func_978(Player plParam0) // Position - 0x22CB7 Hash - 0x3D7F326C ^0x47EF75AB
{
	Player player;

	if (func_1025() != false || func_17() != false)
		return;

	player = plParam0;

	if (!Global_1224589.f_16[player])
	{
		func_1026(plParam0);
		return;
	}

	if (Global_1058888.f_42287.f_1[player /*5*/] == 1)
		return;

	func_1027(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1058888.f_42287.f_1[player /*5*/] = 1;
	return;
}

int func_979(Hash hParam0, Hash hParam1) // Position - 0x22D25 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_980(int iParam0) // Position - 0x22D3F Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_881(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_981(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_1028(num7) - func_1028(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_981(float fParam0) // Position - 0x22DA9 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_982(int iParam0) // Position - 0x22E35 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_983(int iParam0) // Position - 0x22E6E Hash - 0xB8632262 ^0xB8632262
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

int func_984(float fParam0, float fParam1) // Position - 0x22EED Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_981(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_1028(num));
	num3 = BUILTIN::TO_FLOAT(func_1028(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_985(int iParam0) // Position - 0x22F60 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_1029(iParam0, &num))
		return func_1028(num);

	switch (iParam0)
	{
		case 0:
			if (func_1030())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_1030())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_1030())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_986(int iParam0) // Position - 0x22FEC Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_987(int iParam0, int iParam1, int iParam2) // Position - 0x2301E Hash - 0x29688DE6 ^0x9ABFB378
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	Hash hash;
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

	num = num + func_1031(iParam0);
	str3 = func_1033(func_1032(num, iParam2));
	str5 = func_1034(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_1035(iParam0));
	hash = func_1036(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = hash;
		data.f_4 = 1;
		data.f_5 = func_1037(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_582(str6, str2, hash, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_1038(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_988() // Position - 0x23116 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_1039(Global_35, &unk);
	unk31 = { func_536(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1040(false);
	func_1041(7);
	func_376(joaat("kit_bandana"), true, true, false);

	if (func_624() == 1160113249)
	{
		func_376(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_376(-361635024, true, true, true);
	}

	func_1042(Global_35, &unk);
	return;
}

int func_989(Hash hParam0, int iParam1) // Position - 0x2319F Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_96(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_252(&num, year);
	func_253(&num, month);
	func_254(&num, day);
	func_255(&num, hour);
	func_256(&num, minute);
	func_257(&num, second);
	return num;
}

BOOL func_990(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x23204 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_1043(essParam1) || !func_1043(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_991(int iParam0) // Position - 0x23231 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_654(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_992(int iParam0, int iParam1) // Position - 0x23264 Hash - 0x8FA0E29 ^0xC3F68E87
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

char* func_993(eStackSize essParam0) // Position - 0x2437F Hash - 0xCCDB3731 ^0x9C4A47F0
{
	Hash hash;

	hash = func_865(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_821(hash);
}

int func_994(Hash hParam0) // Position - 0x243A2 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_1044(hParam0))
		num = 0;
	else if (func_1045(hParam0))
		num = 1;
	else if (func_1046(hParam0))
		num = 2;
	else if (func_1047(hParam0))
		num = 3;

	return num;
}

BOOL func_995(int iParam0) // Position - 0x243E5 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_317(func_1048(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_996(int iParam0) // Position - 0x24425 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_317(func_1049(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_997(int iParam0) // Position - 0x24464 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_998() // Position - 0x24477 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_17() != -1)
		return;

	func_479(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_884(1);
	func_987(1, num, 0);
	return;
}

void func_999(int iParam0) // Position - 0x244A9 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_1000() // Position - 0x244C0 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_17() != -1)
		return;

	func_479(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_884(2);
	func_987(2, num, 0);
	return;
}

void func_1001() // Position - 0x244F2 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_17() != -1)
		return;

	func_479(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_884(0);
	func_987(0, num, 0);
	return;
}

BOOL func_1002(Any anParam0) // Position - 0x24524 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_1003(int iParam0) // Position - 0x2455A Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_1050(&(iParam0->f_29), 62))
	{
		switch (func_1051())
		{
			case 1:
				if (!func_1050(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_1050(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_1050(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_1050(&(iParam0->f_29), 32))
					if (func_1050(&(iParam0->f_29), 2))
						if (func_139(func_65()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

BOOL func_1004(int iParam0) // Position - 0x24604 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}

	return false;
}

float func_1005(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x2463A Hash - 0xA3FC3EE3 ^0xE0E564B4
{
	if (func_1052(iParam0))
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);

	return 100000000f;
}

BOOL func_1006(int iParam0) // Position - 0x2466A Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_824(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

Vector3 func_1007(int iParam0) // Position - 0x246D5 Hash - 0xACD6F870 ^0xDE230469
{
	if (func_932(iParam0))
		return func_1053(iParam0);

	return Global_1835011[iParam0 /*74*/].f_18;
}

BOOL func_1008(eStackSize essParam0, var uParam1) // Position - 0x246FB Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_776(Global_1347702[essParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[essParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.1127f, 159.72952f, 103.01753f };
			return true;
		}
	}
	else if (essParam0 == 96)
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.7104f, -1338.3771f, 82.0174f };
			return true;
		}
	}

	return false;
}

BOOL func_1009(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x24791 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_1054(iParam1) && !func_1055(iParam1))
		ped = func_205(iParam1);
	else
		return false;

	func_1056(uParam3);
	num = func_1057(iParam2);

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

void func_1010(Entity eParam0, var uParam1) // Position - 0x24830 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_1058(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_1059(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

BOOL func_1011(Ped pedParam0, Any* panParam1) // Position - 0x2487A Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

float func_1012(int iParam0, int iParam1) // Position - 0x2488A Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_496();

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

void func_1013(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x248D5 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_136(*uParam0);
	i = func_137(*uParam0);
	j = func_138(*uParam0);
	k = func_139(*uParam0);
	l = func_140(*uParam0);
	m = func_141(*uParam0);

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
	
		num3 = func_142(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_143(uParam0, m, l, k, j, i, num);
	return;
}

int func_1014(int iParam0, int iParam1) // Position - 0x24A48 Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_496();

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

eStackSize func_1015(int iParam0, int iParam1) // Position - 0x24A97 Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_496();

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

void func_1016(int iParam0, int iParam1, int iParam2) // Position - 0x24AE8 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_496();

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

void func_1017(int iParam0, eStackSize essParam1, int iParam2) // Position - 0x24B3D Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_496();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = essParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = essParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_1018(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x24B92 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_1019(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24BD6 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_766(0, 1, bParam0, bParam1);
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

void func_1020(var uParam0) // Position - 0x24CCE Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1060(&(uParam0->f_3));
	return;
}

void func_1021(var uParam0) // Position - 0x24CEC Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_1061(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

void func_1022(int iParam0, int iParam1, int iParam2) // Position - 0x24D0D Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_1062(iParam1);
	func_1063(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_1064(&(iParam0->f_26), num2);
	
		if (func_1065(iParam0->f_26, &num))
			func_1066(num, num2);
	}

	return;
}

BOOL func_1023(var uParam0, int iParam1, int iParam2) // Position - 0x24D56 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_1024() // Position - 0x24D8D Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

BOOL func_1025() // Position - 0x24D9B Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1572887.f_13;
}

void func_1026(Player plParam0) // Position - 0x24DA9 Hash - 0xB00E785D ^0x2BE12BE6
{
	Player player;

	if (Global_1572887.f_13 != false || Global_1572887.f_12 != false)
		return;

	player = plParam0;

	if (Global_1058888.f_42287.f_1[player /*5*/] == 0)
		return;

	func_1027(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1058888.f_42287.f_1[player /*5*/] = 0;
	return;
}

void func_1027(Player plParam0) // Position - 0x24E04 Hash - 0x803C3DC4 ^0x78AECBF
{
	if (Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 = 0;
	}

	return;
}

int func_1028(int iParam0) // Position - 0x24E45 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_1029(int iParam0, var uParam1) // Position - 0x24EBB Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_1030() // Position - 0x24EC4 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_1031(int iParam0) // Position - 0x24ECD Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_96(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_96(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_96(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_1032(int iParam0, int iParam1) // Position - 0x24F2F Hash - 0xD5391B76 ^0x15FC8F51
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

const char* func_1033(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x24F61 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1034(int iParam0) // Position - 0x24F75 Hash - 0x21CE226B ^0x32236170
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

char* func_1035(int iParam0) // Position - 0x24FB0 Hash - 0x21CE226B ^0x56EC66D0
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

int func_1036(int iParam0) // Position - 0x24FEB Hash - 0x21FAF347 ^0x467E3BE5
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

int func_1037(int iParam0) // Position - 0x25026 Hash - 0x5163992 ^0x5163992
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

int func_1038(int iParam0) // Position - 0x25055 Hash - 0x21FAF347 ^0xA8C8F0DA
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

void func_1039(Ped pedParam0, Any* panParam1) // Position - 0x25090 Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_685(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_1040(BOOL bParam0) // Position - 0x250F5 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_309(hash, 0))
			func_851(hash, false, bParam0);
	
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

void func_1041(int iParam0) // Position - 0x2518E Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_17() == -1)
	{
		func_1067(352481484);
	
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
	
		if (func_200(hash) != -999503751)
			func_847(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_846(hash, false))
			func_212(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_1042(Ped pedParam0, var uParam1) // Position - 0x2537E Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_684(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

BOOL func_1043(eStackSize essParam0) // Position - 0x25427 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_141(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_140(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_139(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_136(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_137(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_138(essParam0);

	if (num6 < 1 || num6 > func_142(num5, num4))
		return false;

	return true;
}

BOOL func_1044(Hash hParam0) // Position - 0x25503 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_309(hParam0, 0))
		return false;

	if (func_191(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_1045(Hash hParam0) // Position - 0x2552D Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_309(hParam0, 0))
		return false;

	if (func_191(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_1046(Hash hParam0) // Position - 0x25557 Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_309(hParam0, 0))
		return false;

	if (func_191(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_1047(Hash hParam0) // Position - 0x25581 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_309(hParam0, 0))
		return false;

	if (func_191(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_1048(int iParam0, int iParam1) // Position - 0x255AB Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_1068(iParam0);
	
		case 1:
			return func_1069(iParam0);
	
		case 2:
			return func_1070(iParam0);
	
		case 3:
			return func_1071(iParam0);
	}

	return 0;
}

Hash func_1049(int iParam0, int iParam1) // Position - 0x25604 Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_1072(iParam0);
	
		case 1:
			return func_1073(iParam0);
	
		case 2:
			return func_1074(iParam0);
	
		case 3:
			return func_1075(iParam0);
	
		case 4:
			return func_1076(iParam0);
	
		case 5:
			return func_1077(iParam0);
	
		case 6:
			return func_1078(iParam0);
	
		case 7:
			return func_1079(iParam0);
	
		case 8:
			return func_1080(iParam0);
	}

	return 0;
}

BOOL func_1050(var uParam0, int iParam1) // Position - 0x256B7 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_1051() // Position - 0x256D7 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

BOOL func_1052(int iParam0) // Position - 0x256E3 Hash - 0x96EC57 ^0x2A07EA1A
{
	if (func_1081(iParam0))
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);

	return false;
}

Vector3 func_1053(int iParam0) // Position - 0x25707 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[iParam0 /*74*/].f_18;
}

BOOL func_1054(int iParam0) // Position - 0x25759 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_291(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_1055(int iParam0) // Position - 0x25791 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_291(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_1054(iParam0))
		return false;

	ped = func_205(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

void func_1056(var uParam0) // Position - 0x257E5 Hash - 0x6843C143 ^0xA531F0D1
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

int func_1057(int iParam0) // Position - 0x2588C Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_1058(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x258C4 Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_1059(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x25939 Hash - 0xF684EE16 ^0xD8F147D7
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

void func_1060(var uParam0) // Position - 0x25962 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_1061(var uParam0, Any anParam1, int iParam2) // Position - 0x2598E Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_1082(func_624());

	if (*uParam0)
		func_1060(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_17() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_1062(int iParam0) // Position - 0x259C5 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1063(int iParam0, int iParam1) // Position - 0x259DC Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_1064(var uParam0, int iParam1) // Position - 0x25A24 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_1020(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_1065(int iParam0, var uParam1) // Position - 0x25A55 Hash - 0xE231A73F ^0x924E070C
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

void func_1066(int iParam0, int iParam1) // Position - 0x25A99 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1067(int iParam0) // Position - 0x25AB2 Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_656(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_658(&unk, &num, &num2, false))
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
	
		func_660(num);
	}

	return;
}

Hash func_1068(int iParam0) // Position - 0x25B7C Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_1069(int iParam0) // Position - 0x25C0B Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_1070(int iParam0) // Position - 0x25C9A Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_1071(int iParam0) // Position - 0x25D29 Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_1072(int iParam0) // Position - 0x25DB8 Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_1073(int iParam0) // Position - 0x25E01 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_1074(int iParam0) // Position - 0x25E4A Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_1075(int iParam0) // Position - 0x25E93 Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_1076(int iParam0) // Position - 0x25EDC Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_1077(int iParam0) // Position - 0x25F25 Hash - 0x51E02475 ^0x25F7B61
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

Hash func_1078(int iParam0) // Position - 0x25F6E Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_1079(int iParam0) // Position - 0x25FB7 Hash - 0x51E02475 ^0x50FB5131
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

Hash func_1080(int iParam0) // Position - 0x26000 Hash - 0x51E02475 ^0x8656D204
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

BOOL func_1081(int iParam0) // Position - 0x26049 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

int func_1082(int iParam0) // Position - 0x26068 Hash - 0xB4860741 ^0xB4860741
{
	if (func_17() == -1)
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

