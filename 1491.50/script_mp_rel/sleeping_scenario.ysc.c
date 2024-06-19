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
	BOOL bLocal_13 = 0;
	Hash hLocal_14 = 0;
	Any anLocal_15 = 0;
	int iLocal_16 = 0;
	Hash hLocal_17 = 0;
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	var uLocal_21 = 9;
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
	var uLocal_33 = 6;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = -1;
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
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE6EF425C ^0x54B44415
{
	bLocal_13 = 1;
	fLocal_19 = 1f;
	fLocal_20 = 1f;
	anLocal_15 = anScriptParam_0;
	iLocal_16 = anScriptParam_0.f_1;
	hLocal_17 = anScriptParam_0.f_2;
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
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
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

void func_6() // Position - 0x112 Hash - 0xEA369730 ^0xCC24259A
{
	if (PED::IS_PED_INJURED(Global_33) || func_12(Global_1940199, 262144) || SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		bLocal_13 = false;
		return;
	}

	func_13(&uLocal_21);
	return;
}

void func_7() // Position - 0x14C Hash - 0xB6265DB4 ^0x34B69FD
{
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));

	if (func_14() != 0)
	{
		if (func_15(&(uLocal_21.f_18)) || uLocal_21.f_21)
		{
			GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(15f);
			func_16(&(uLocal_21.f_18));
			uLocal_21.f_21 = 0;
		}
	}

	if (CAM::DOES_CAM_EXIST(uLocal_21.f_22))
		CAM::DESTROY_CAM(uLocal_21.f_22, false);

	if (CAM::DOES_CAM_EXIST(uLocal_21.f_23))
		CAM::DESTROY_CAM(uLocal_21.f_23, false);

	func_17(&uLocal_21);

	if (uLocal_21.f_29)
	{
		func_18(0);
		uLocal_21.f_29 = 0;
	}

	return;
}

void func_8() // Position - 0x1CF Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x1DB Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_19(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x203 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_20(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x22B Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_21(&eventData);
	}

	return;
}

BOOL func_12(int iParam0, int iParam1) // Position - 0x253 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_13(var uParam0) // Position - 0x262 Hash - 0x29EA790A ^0x907A1E07
{
	Hash activeDynamicScenario;

	if (func_22(&(uParam0->f_18), 3.5f) && uParam0->f_21)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(15f);
		uParam0->f_21 = 0;
	}

	if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, true) == iLocal_16)
	{
		func_23(32);
		func_23(64);
		func_23(131072);
	
		if (!uParam0->f_29)
		{
			func_18(1);
			uParam0->f_29 = 1;
		}
	
		if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame") && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
		{
			CAM::_FORCE_THIRD_PERSON_CAM_THIS_FRAME();
			CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-35f, 15f);
		
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
		}
	}
	else if (uParam0->f_29)
	{
		func_18(0);
		uParam0->f_29 = 0;
	}

	switch (uParam0->f_10)
	{
		case 0:
			if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
				STREAMING::_REQUEST_SCENARIO_TYPE(hLocal_17, 15, 0, 0);
		
			func_24(uParam0, 1);
			break;
	
		case 1:
			if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(hLocal_17, false))
					return;
		
			func_24(uParam0, 2);
			break;
	
		case 2:
			func_25(uParam0);
		
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && func_26(uParam0))
			{
				uParam0->[4] = func_28("SLEEP", joaat("INPUT_CONTEXT_Y"), func_27(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_29(uParam0->[4], 1057677739, 0, true);
			
				if (func_14() != 0)
				{
					if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
					{
						uParam0->[7] = func_28("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_27(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_29(uParam0->[7], 1057677739, 0, true);
					}
					else if (hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED"))
					{
						uParam0->[7] = func_28("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_27(), 1f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_29(uParam0->[7], 1057677739, 0, true);
					}
				}
			
				func_24(uParam0, 3);
			}
			else if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) == iLocal_16 && !TASK::IS_PED_EXITING_SCENARIO(Global_33, true) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
			{
				uParam0->f_12 = func_30();
				func_24(uParam0, 5);
			}
			break;
	
		case 3:
			if (!func_26(uParam0))
			{
				func_17(uParam0);
				func_24(uParam0, 2);
				return;
			}
		
			HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 1057677739, func_31(), 2);
			func_32(uParam0);
		
			if (!func_33(uParam0->[4]))
			{
				uParam0->[4] = func_28("SLEEP", joaat("INPUT_CONTEXT_Y"), func_27(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
				func_29(uParam0->[4], 1057677739, 0, true);
			}
			else if (func_34(uParam0->[4], true))
			{
				func_35(16);
				func_36(&uParam0->[4], true, true);
				func_36(&uParam0->[7], true, true);
				uParam0->[5] = func_37("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				func_29(uParam0->[5], 1323335645, 0, true);
				uParam0->f_12 = func_30();
				func_24(uParam0, 4);
				return;
			}
		
			if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame") || hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED") && func_14() != 0)
			{
				if (!func_33(uParam0->[7]))
				{
					if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
					{
						uParam0->[7] = func_28("SIT_TENT", joaat("INPUT_CONTEXT_X"), func_27(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_29(uParam0->[7], 1057677739, 0, true);
					}
					else if (hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED"))
					{
						uParam0->[7] = func_28("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), func_27(), 1.5f, 1, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), 0);
						func_29(uParam0->[7], 1057677739, 0, true);
					}
				}
				else if (func_34(uParam0->[7], true))
				{
					func_35(16);
					func_36(&uParam0->[7], true, true);
					func_36(&uParam0->[4], true, true);
					uParam0->f_12 = func_30();
				
					if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
					{
						func_38(uParam0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
						TASK::CLEAR_PED_SECONDARY_TASK(Global_33);
						WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, true);
						TASK::TASK_USE_SCENARIO_POINT(Global_33, iLocal_16, "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR", 0, true, true, hLocal_17, false, -1082130432, false);
						GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
					}
					else
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_33, iLocal_16, 0, 0, true, false, 0, false, -1082130432, false);
					}
				
					func_24(uParam0, 5);
					return;
				}
			}
		
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) == iLocal_16)
				{
					uParam0->f_12 = func_30();
					func_36(&uParam0->[4], true, true);
					func_36(&uParam0->[7], true, true);
					func_24(uParam0, 5);
				}
				else
				{
					func_36(&uParam0->[4], true, true);
					func_36(&uParam0->[7], true, true);
					func_24(uParam0, 2);
				}
			}
			break;
	
		case 4:
			func_39(uParam0, true);
			break;
	
		case 5:
			func_32(uParam0);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		
			if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
				if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_22) && CAM::IS_CAM_ACTIVE(uParam0->f_22))
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, false, false, true);
		
			if (!func_40(Global_33, -76381094) && !(TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) == iLocal_16))
			{
				func_24(uParam0, 2);
				return;
			}
		
			if (func_14() == -1)
				if (!func_41())
					HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
		
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) != iLocal_16)
			{
				func_17(uParam0);
				func_24(uParam0, 2);
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
			{
				func_42(uParam0);
				func_24(uParam0, 6);
			}
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 1, 1, 1057677739, func_31(), 0);
		
			if (func_32(uParam0))
			{
				MISC::SET_BIT(&(Global_1958634.f_1), 2);
				MISC::CLEAR_BIT(&(Global_1958634.f_1), 3);
				func_43();
			
				if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame") && !CAM::IS_GAMEPLAY_CAM_RENDERING())
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, false, false, true);
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
			activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
		
			if (activeDynamicScenario != joaat("prop_player_sleep_tent_resting_arthur") && activeDynamicScenario != joaat("world_player_sleep_bedroll_arthur") && activeDynamicScenario != joaat("WORLD_PLAYER_SLEEP_GROUND_ARM_MALE_B") && activeDynamicScenario != joaat("PROP_PLAYER_PRPTY_SAVE_GAME_MALE") && activeDynamicScenario != joaat("prop_player_seat_chair_generic") || PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33))
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
			else if (uParam0->f_28)
			{
				TASK::CLEAR_PED_TASKS(Global_33, true, false);
				uParam0->f_28 = 0;
			}
		
			if (func_14() == -1)
			{
				if (func_44(uParam0->[4], true))
				{
					func_17(uParam0);
					uParam0->[5] = func_37("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_29(uParam0->[5], 1323335645, 0, true);
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_24(uParam0, 7);
				}
				else if (func_44(uParam0->[6], true))
				{
					func_45(16);
					func_17(uParam0);
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					func_24(uParam0, 15);
				}
				else if (func_44(uParam0->[8], true))
				{
					func_17(uParam0);
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					uParam0->f_28 = 1;
				}
			}
			else if (func_44(uParam0->[4], true))
			{
				func_17(uParam0);
				uParam0->[5] = func_37("CAMP_SLEEP_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
				func_24(uParam0, 7);
			}
			else if (func_44(uParam0->[5], true))
			{
				func_17(uParam0);
				func_24(uParam0, 3);
			}
		
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) != iLocal_16)
			{
				if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) == iLocal_16)
					func_46(uParam0);
				else
					func_47(uParam0);
			
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
				uParam0->f_28 = 0;
				MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
				func_17(uParam0);
				func_24(uParam0, 2);
			}
			break;
	
		case 7:
			func_39(uParam0, false);
		
			if (func_14() == -1)
			{
				if (!func_41())
				{
					if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
					{
						MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
						func_17(uParam0);
						func_24(uParam0, 2);
					}
				}
			}
			break;
	
		case 8:
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, true) == iLocal_16 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1652513209))
				func_24(uParam0, 9);
			break;
	
		case 9:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
		
			if (func_32(uParam0))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) || ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_16, true, false) || ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_16, false) || hLocal_17 != joaat("PROP_PLAYER_SLEEP_BED"))
				{
					if (hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED"))
					{
						if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_16, false) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
						{
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_16, ENTITY::GET_ENTITY_COORDS(Global_33, true, false), ENTITY::GET_ENTITY_ROTATION(Global_33, 2), 2);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_16);
						}
						else if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -954213463))
						{
							uParam0->f_11 = 1;
							uParam0->f_13 = MISC::GET_GAME_TIMER();
						}
					
						if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_16, false) && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
						{
							uParam0->f_17 = -1;
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
							ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_14);
							func_24(uParam0, 2);
						}
					}
				
					if (MISC::GET_GAME_TIMER() - uParam0->f_13 > 500)
					{
						CAM::DO_SCREEN_FADE_OUT(500);
						AUDIO::_START_AUDIO_SCENESET("Fade_To_Black", "Sleep_Respawn_Scenes");
					}
					else
					{
						uParam0->f_11 = 1;
					}
				}
				else
				{
					uParam0->f_13 = MISC::GET_GAME_TIMER();
					uParam0->f_11 = 1;
				}
			}
		
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, true);
			
				if (hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED"))
					TASK::TASK_USE_SCENARIO_POINT(Global_33, iLocal_16, "PROP_PLAYER_SEAT_CHAIR_GENERIC", 0, false, true, 0, false, -1082130432, false);
				else if (hLocal_17 == joaat("world_player_sleep_bedroll"))
					TASK::TASK_USE_SCENARIO_POINT(Global_33, iLocal_16, "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR", 0, false, true, 0, false, -1082130432, false);
				else
					TASK::TASK_USE_SCENARIO_POINT(Global_33, iLocal_16, 0, 0, false, true, 0, false, -1082130432, false);
			
				func_24(uParam0, 10);
			}
			break;
	
		case 10:
			if (func_14() == 0)
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
			
				if (func_32(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
					{
					}
					else
					{
						uParam0->f_11 = 1;
						PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
					}
				}
			
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
				{
					func_17(uParam0);
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_24(uParam0, 2);
					return;
				}
			
				if (MISC::GET_GAME_TIMER() > uParam0->f_13 + 2500)
					func_24(uParam0, 6);
			}
			else
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			
				if (func_32(uParam0))
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
					{
						if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
							PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("RESTING_TRANS_SLEEP_W_HAT"), 3f);
					
						CAM::DO_SCREEN_FADE_OUT(2000);
					}
					else
					{
						uParam0->f_11 = 1;
					}
				}
			
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADING_IN())
						CAM::DO_SCREEN_FADE_IN(1000);
				
					MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
					func_24(uParam0, 2);
					return;
				}
			
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_49(func_48(PLAYER::PLAYER_ID()), 5000f, false, false);
					func_50(func_48(PLAYER::PLAYER_ID()), 5000f, false, false, false, false, false);
				
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
					{
						if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_15, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_15, true))
								ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_15);
						}
						else if (MISC::GET_GAME_TIMER() > uParam0->f_13 + 2500)
						{
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_15);
							AUDIO::_SET_AUDIO_SCENESET("Clouds", "Sleep_Respawn_Scenes");
							AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
							CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_12, 0, 0);
						
							if (!func_51(0, false, true))
								MISC::SET_RANDOM_WEATHER_TYPE(true, true);
						
							func_49(Global_34, 100f, false, false);
							func_43();
							PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							uParam0->f_13 = MISC::GET_GAME_TIMER();
							func_24(uParam0, 11);
						}
					}
				}
			}
			break;
	
		case 11:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_32(uParam0))
			{
				if (func_14() != 0)
				{
					PED::INSTANTLY_FILL_PED_POPULATION();
					func_52(Global_34);
					Global_38.f_9 = 0;
					func_53(false, 7);
				}
			}
		
			if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN() && MISC::GET_GAME_TIMER() - uParam0->f_13 > 250)
				CAM::DO_SCREEN_FADE_IN(500);
		
			if (func_14() != 0)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
				PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
				HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
				MISC::_0xA3A8926951471C82();
			
				if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_15, false) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_15))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					AUDIO::_STOP_AUDIO_SCENESET("Sleep_Respawn_Scenes");
					AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
				
					if (hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED"))
					{
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_14, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true) + 90f, 2);
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_14);
					}
					else if (hLocal_17 == joaat("world_player_sleep_bedroll"))
					{
						func_54(98.2971f, -4.2336f);
						HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
						PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Global_33, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), -5f, 0f, 0f));
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				
					if (hLocal_17 != joaat("world_player_sleep_bedroll"))
						func_54(0, 0);
				
					func_55(-1);
					func_56(-1, false);
					uParam0->f_13 = MISC::GET_GAME_TIMER();
					func_24(uParam0, 12);
				}
			}
			else
			{
				func_24(uParam0, 12);
			}
			break;
	
		case 12:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_14() != 0)
			{
				func_32(uParam0);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
			
				func_57(true);
			}
		
			if (CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADED_IN())
			{
				PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("SLEEP_TRANS_RESTING_W_HAT"), 6f);
				func_24(uParam0, 5);
			}
			else if (MISC::GET_GAME_TIMER() - uParam0->f_13 > 500)
			{
				if (uParam0->f_21)
					func_58(&(uParam0->f_18));
			
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			break;
	
		case 13:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
			{
				MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
				func_17(uParam0);
				func_24(uParam0, 2);
				return;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
		
			if (func_32(uParam0))
			{
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
			
				if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || activeDynamicScenario != joaat("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && hLocal_17 == joaat("world_player_sleep_bedroll"))
				{
					uParam0->f_11 = 1;
					return;
				}
				else
				{
					func_60(1259508039, false, 0, 0, true, false, false);
					return;
				}
			}
		
			if (!func_61())
			{
				PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("TRANS_STOP_USE_ITEM"), 3f);
				func_24(uParam0, 5);
			}
			break;
	
		case 14:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
			{
				MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
				func_17(uParam0);
				func_24(uParam0, 2);
				return;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
		
			if (func_32(uParam0))
			{
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
			
				if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || activeDynamicScenario != joaat("WORLD_PLAYER_SLEEP_BEDROLL_CRAFTING_ARTHUR") && hLocal_17 == joaat("world_player_sleep_bedroll"))
				{
					uParam0->f_11 = 1;
					return;
				}
				else
				{
					uParam0->f_13 = MISC::GET_GAME_TIMER();
				
					if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_59(false), joaat("document_player_journal"), false))
						INVENTORY::_INVENTORY_ENABLE_ITEM(func_59(false), joaat("document_player_journal"));
				
					func_60(joaat("document_player_journal"), false, 0, 0, true, false, false);
					return;
				}
			}
		
			if (MISC::GET_GAME_TIMER() - uParam0->f_13 > 1000)
			{
				PED::_GIVE_PED_HASH_COMMAND(PLAYER::PLAYER_PED_ID(), joaat("TRANS_STOP_USE_ITEM"), 3f);
				func_24(uParam0, 5);
			}
			break;
	
		case 15:
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) != iLocal_16)
			{
				MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
				func_17(uParam0);
				func_24(uParam0, 2);
				return;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
			break;
	
		case 16:
			if (func_32(uParam0))
			{
				if (!func_41())
					HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_14))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_14);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
			
				func_62(uParam0);
			}
			break;
	}

	return;
}

int func_14() // Position - 0x13DF Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_15(var uParam0) // Position - 0x13ED Hash - 0x5001E582 ^0x5001E582
{
	return func_63(*uParam0, 1);
}

void func_16(var uParam0) // Position - 0x13FD Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_17(var uParam0) // Position - 0x1413 Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_36(&uParam0->[i], true, true);
	}

	return;
}

void func_18(int iParam0) // Position - 0x143B Hash - 0x42868A8 ^0x351A2119
{
	Global_1940026.f_28.f_2 = iParam0;
	return;
}

void func_19(var uParam0) // Position - 0x144D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_20(var uParam0) // Position - 0x1455 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_21(var uParam0) // Position - 0x145D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_22(var uParam0, float fParam1) // Position - 0x1465 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_64(uParam0, fParam1))
	{
		func_16(uParam0);
		return true;
	}

	return false;
}

void func_23(int iParam0) // Position - 0x1483 Hash - 0x3410C012 ^0xBA50931E
{
	Global_1940085.f_39 = Global_1940085.f_39 || iParam0;
	return;
}

void func_24(var uParam0, int iParam1) // Position - 0x149A Hash - 0xE5775DAF ^0x20E13CCA
{
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 1;
	return;
}

void func_25(var uParam0) // Position - 0x14AD Hash - 0x3E80FDB9 ^0xAAB46C68
{
	if (hLocal_17 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	if (TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
		if (!uParam0->f_27)
			if (func_22(&(uParam0->f_24), 2.5f))
				func_65(uParam0);
	else if (!uParam0->f_27 && !PED::IS_PED_USING_THIS_SCENARIO(Global_33, iLocal_16))
		func_47(uParam0);

	if (uParam0->f_27)
	{
		if (func_22(&(uParam0->f_24), 2.1f))
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0, 3, false, false, true);
			CAM::DETACH_CAM(uParam0->f_22);
		}
	}

	return;
}

BOOL func_26(var uParam0) // Position - 0x1534 Hash - 0xCD15AEAA ^0xBB5BBBC7
{
	Ped pedUsingScenarioPoint;
	float num;
	Entity scenarioPointEntity;

	if (func_66())
		return false;

	if (func_67() >= 1f)
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
		return false;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return false;

	pedUsingScenarioPoint = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);

	if (!ENTITY::IS_ENTITY_DEAD(pedUsingScenarioPoint))
		if (pedUsingScenarioPoint != Global_33)
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedUsingScenarioPoint, 1))
				return false;

	if (PED::IS_PED_IN_COMBAT(Global_33, 0))
		return false;

	if (func_68(PLAYER::PLAYER_ID(), false, false, true))
		return false;

	if (func_69(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true) + { 0.5f, 0f, 0f }, 1f, 1, Global_33, 0, 0))
		return false;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_14))
	{
		if (!ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_14, false))
		{
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
			return false;
		}
	}

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false) != iLocal_16)
		return false;

	if (TASK::_IS_SCENARIO_POINT_FLAG_SET(iLocal_16, 8))
		return false;

	num = func_70(Global_33, func_27(), true);

	if (num > 1f)
		return false;

	if (!func_71(Global_33, func_27(), 0) && num > func_72())
		return false;

	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), 2f))
		return false;

	scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_16);

	if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
		if (FIRE::IS_ENTITY_ON_FIRE(scenarioPointEntity))
			return false;

	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), 1f) > 0)
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1))
		return false;

	return true;
}

Vector3 func_27() // Position - 0x16E3 Hash - 0xA8059349 ^0xA8059349
{
	Vector3 vector;

	switch (hLocal_17)
	{
		case joaat("prop_player_sleep_tent_a_frame"):
			vector = { 0.29f, 1.5f, 1f };
			break;
	
		case joaat("PROP_PLAYER_SLEEP_BED"):
			vector = { 0f, 0.5f, 0f };
			break;
	
		default:
			vector = { 0f, 0f, 0.5f };
			break;
	}

	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), vector);
}

int func_28(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, int iParam16) // Position - 0x1743 Hash - 0x8FE94EEE ^0x148ED6A8
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

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_74(i, 2))
		{
			if (func_75(uParam2, Global_1951910[i /*23*/].f_6, 0.01f, true) && hParam1 == Global_1951910[i /*23*/].f_4)
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
		func_76(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, iParam16);
		return num;
	}

	return 0;
}

void func_29(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1821 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_33(iParam0))
		return;

	num = func_77(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1951910[num /*23*/].f_3, iParam1, iParam2);
	return;
}

int func_30() // Position - 0x186C Hash - 0x79D9D06 ^0x79D9D06
{
	if (func_78(1))
		return 12;
	else if (func_78(2))
		return 18;

	return 6;
}

char* func_31() // Position - 0x1892 Hash - 0x3DD4EE11 ^0xC1E2133A
{
	switch (hLocal_17)
	{
		case joaat("prop_player_sleep_tent_a_frame"):
		case joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS"):
			return "CMP_SLP_TNT";
	
		case joaat("world_player_sleep_ground"):
		case joaat("world_player_sleep_bedroll"):
			return "CMP_SLP_GND";
	
		case joaat("PROP_PLAYER_SLEEP_BED"):
			return "CMP_SLP_BED";
	}

	return "CMP_SLP_BED";
}

BOOL func_32(var uParam0) // Position - 0x18E2 Hash - 0x8116D8F1 ^0x6C8C8175
{
	if (uParam0->f_11)
	{
		uParam0->f_11 = 0;
		return true;
	}

	return false;
}

BOOL func_33(int iParam0) // Position - 0x18FB Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

BOOL func_34(int iParam0, BOOL bParam1) // Position - 0x193A Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_77(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_35(BOOL bParam0) // Position - 0x1A34 Hash - 0x210BBB81 ^0x210BBB81
{
	if (func_79(bParam0))
		Global_1958675 = Global_1958675 - Global_1958675 && bParam0;

	return;
}

void func_36(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A55 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_77(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_80(num);
	*uParam0 = 0;
	return;
}

int func_37(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0x1AA9 Hash - 0x7D233416 ^0xA5F2EB21
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_74(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_76(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

void func_38(var uParam0) // Position - 0x1B32 Hash - 0x4C4E6711 ^0xEB7FC069
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;

	if (hLocal_17 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	if (CAM::DOES_CAM_EXIST(uParam0->f_22))
		CAM::DESTROY_CAM(uParam0->f_22, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
		CAM::DESTROY_CAM(uParam0->f_23, false);

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), 0.5f, -1.25f, 0.75f) };
	uParam0->f_22 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), 51.28f, false, 2);
	uParam0->f_23 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), 61.28f, false, 2);

	if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_23, true);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_22, uParam0->f_23, 5000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}

	return;
}

void func_39(var uParam0, BOOL bParam1) // Position - 0x1C07 Hash - 0xF9F99DE7 ^0x1D85DF66
{
	char* conditionalAnim;
	BOOL flag;
	var unk;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
	func_81(true);
	func_82(true);

	if (!TASK::_PED_IS_IN_SCENARIO_BASE(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	}

	if (func_14() == 0)
	{
		uParam0->f_13 = MISC::GET_GAME_TIMER();
	
		if (bParam1)
		{
			if (hLocal_17 == joaat("prop_player_sleep_tent_a_frame"))
			{
				func_38(uParam0);
				conditionalAnim = "PROP_PLAYER_SLEEP_TENT_RESTING_ARTHUR";
			}
		
			WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, true);
			TASK::TASK_USE_SCENARIO_POINT(Global_33, iLocal_16, conditionalAnim, 0, true, false, 0, false, -1082130432, false);
		}
	
		func_24(uParam0, 10);
	}
	else
	{
		func_83(uParam0);
		HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		flag = false;
	
		if (func_44(uParam0->[0], true))
		{
			flag = true;
			uParam0->f_12 = 6;
		}
		else if (func_44(uParam0->[1], true))
		{
			flag = true;
			uParam0->f_12 = 12;
		}
		else if (func_44(uParam0->[2], true))
		{
			flag = true;
			uParam0->f_12 = 18;
		}
		else if (func_44(uParam0->[3], true))
		{
			flag = true;
			uParam0->f_12 = 0;
		}
	
		if (flag)
		{
			uParam0->f_17 = -1;
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_15))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_15);
		
			uParam0->f_15 = ANIMSCENE::_CREATE_ANIM_SCENE(func_84(uParam0->f_12), 0, 0, false, true);
			uParam0->f_13 = MISC::GET_GAME_TIMER();
			func_17(uParam0);
		
			if (bParam1)
				if (hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED"))
					TASK::TASK_USE_SCENARIO_POINT(Global_33, iLocal_16, 0, 0, true, false, 0, false, -1082130432, false);
		
			func_85(&unk, 0, 0, 3, 0, 0, 0, false);
		
			if (hLocal_17 == joaat("PROP_PLAYER_SLEEP_BED"))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_14))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_14);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_16))
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_16);
			
				if (func_86(&Global_33) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					uParam0->f_14 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_hat_action", false, true);
				else
					uParam0->f_14 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@player_sleep_bed", 0, "pbl_no_hat_action", false, true);
			
				uParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_16, "player", Global_33, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_14);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_14, "player", Global_33, 0);
				func_24(uParam0, 9);
			}
			else
			{
				func_24(uParam0, 9);
			}
		}
		else if (func_44(uParam0->[5], true))
		{
			uParam0->f_17 = -1;
			func_17(uParam0);
		
			if (uParam0->f_10 == 7)
				func_24(uParam0, 5);
			else
				func_24(uParam0, 2);
		}
	}

	return;
}

BOOL func_40(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x1E9A Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_41() // Position - 0x1EF3 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1893611 & 2 != 0;
}

void func_42(var uParam0) // Position - 0x1F03 Hash - 0xF4F64792 ^0xFBCD0CB9
{
	if (func_14() != 0 && hLocal_17 != joaat("prop_player_prpty_save_game"))
	{
		uParam0->[4] = func_87("SLEEP", joaat("INPUT_CONTEXT_Y"), Global_33, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
		func_29(uParam0->[4], 1057677739, 0, true);
	
		if (func_79(8))
		{
			uParam0->[6] = func_87("CAMP_RECIPE", joaat("INPUT_CONTEXT_X"), Global_33, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			func_29(uParam0->[6], 1057677739, 0, true);
		}
	
		uParam0->[8] = func_87("LEAVE", joaat("INPUT_CONTEXT_B"), Global_33, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
		func_29(uParam0->[8], 1057677739, 0, true);
	}

	return;
}

void func_43() // Position - 0x1FF6 Hash - 0xB1F20FD2 ^0x5467A014
{
	func_88(joaat("weapon_melee_ancient_hatchet"));
	func_88(joaat("weapon_melee_hatchet_double_bit"));
	func_88(joaat("weapon_melee_hatchet_double_bit_rusted"));
	func_88(joaat("weapon_melee_hatchet_hewing"));
	func_88(joaat("weapon_melee_hatchet_viking"));
	func_88(joaat("weapon_melee_hatchet_hunter_rusted"));
	return;
}

BOOL func_44(int iParam0, BOOL bParam1) // Position - 0x2034 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_77(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_45(BOOL bParam0) // Position - 0x2067 Hash - 0xA895CE6F ^0xA895CE6F
{
	if (!func_79(bParam0))
		Global_1958675 = Global_1958675 || bParam0;

	return;
}

void func_46(var uParam0) // Position - 0x2084 Hash - 0xB8E593B3 ^0x488304EB
{
	if (hLocal_17 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	func_58(&(uParam0->f_24));
	uParam0->f_27 = 0;
	return;
}

void func_47(var uParam0) // Position - 0x20A6 Hash - 0xAC5825F1 ^0xCFDB2923
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
		CAM::DESTROY_CAM(uParam0->f_23, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_22))
		CAM::DESTROY_CAM(uParam0->f_22, false);

	return;
}

Vector3 func_48(Player plParam0) // Position - 0x20D6 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_49(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5) // Position - 0x20EA Hash - 0xBE6CC08C ^0x4B31B8AF
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

void func_50(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x2120 Hash - 0xDCA0A629 ^0x65C02C4D
{
	int num;

	num = 8;

	if (bParam4)
		num = num | 72;

	if (bParam5)
		num = num | 131072;

	if (bParam6)
		num = num | 24;

	if (bParam7)
		num = num | 40;

	if (bParam8)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

BOOL func_51(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2178 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_89())
			return true;
	
		if (Global_1072759.f_3 && !Global_1572887.f_10)
			if (Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1900460.f_67;
		else
			return Global_1900460.f_68;
	}

	if (iParam0 == 0 && func_91(func_90(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_92(func_90(0)))
	{
		case -1:
			return false;
	
		case 2:
			return iParam0 & 1 == 0;
	
		case 3:
			return iParam0 & 16 == 0;
	
		case 4:
			return iParam0 & 32 == 0;
	
		case 5:
			return iParam0 & 2 == 0;
	
		case 7:
			return iParam0 & 1024 == 0;
	
		default:
		
	}

	return false;
}

void func_52(var uParam0, var uParam1, var uParam2) // Position - 0x22EE Hash - 0xB20C33B1 ^0x8BCEF44A
{
	Global_38.f_9.f_7 = { uParam0 };
	return;
}

void func_53(BOOL bParam0, int iParam1) // Position - 0x2303 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_93(&Global_0, 8);

	if (!func_94() || func_14() != -1)
		return;

	func_93(&Global_0, 1);
	return;
}

void func_54(int iParam0, int iParam1) // Position - 0x2349 Hash - 0x2D5EA878 ^0x4B3C84DD
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(iParam1, 1065353216);
	return;
}

void func_55(int iParam0) // Position - 0x2367 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_95(2);
	func_96(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_56(int iParam0, BOOL bParam1) // Position - 0x23A4 Hash - 0x71081FC9 ^0xE795FB69
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_97(2);
	func_98(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_57(BOOL bParam0) // Position - 0x23D9 Hash - 0x74ADD5BD ^0xE5E4813F
{
	int num;
	Hash i;

	for (i = 0; i < Global_1878407.f_7184; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1878407.f_7185.f_1[i /*4*/], 1))
			{
				switch (Global_1878407.f_1823[Global_1878407.f_7185.f_1[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						num = Global_1878407.f_1823[Global_1878407.f_7185.f_1[i /*4*/].f_1 /*3*/].f_2;
					
						if (func_99(num))
							if (func_100(num))
								func_101(num, bParam0);
						break;
				}
			}
		}
	}

	return;
}

void func_58(var uParam0) // Position - 0x2484 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_102(uParam0, 0f);
	return;
}

int func_59(BOOL bParam0) // Position - 0x2493 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_14() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_60(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x24D4 Hash - 0xDA2A1E8C ^0x19FF9E67
{
	int num;
	var unk10;
	Hash scriptHash;
	var unk26;
	BOOL flag;
	int num2;
	BOOL flag2;
	BOOL flag3;
	Hash hash;

	if (func_103())
	{
		Global_1940252.f_11589 = hParam0;
		func_104(hParam0, 1, -142743235, 0, false);
		return 0;
	}

	if (!func_105(hParam0, bParam4))
		return 0;

	if (func_106(hParam0))
		return 0;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
		return 0;

	flag = true;
	num2 = 1;
	num.f_4 = iParam3;
	num.f_5 = 1;

	if (hParam0 == -418848773)
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");

	if (func_107(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}

	if (func_108(hParam0, -2081717885))
		func_109(hParam0, unk10, num, unk26, flag, num2);
	else if (func_108(hParam0, -1909684001))
		func_110(hParam0, unk10, num, flag, num2);
	else if (func_108(hParam0, 587975446))
		func_111(hParam0, unk10);
	else if (func_108(hParam0, 566155764))
		if (!func_112(hParam0))
			return 0;

	if (func_113(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_114(hParam0, bParam5, bParam6, bParam1))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_108(hParam0, -1227898937))
	{
		num.f_2 = hParam0;
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_115(unk10, 1);
		num2 = 0;
		flag = false;
	}
	else if (func_108(hParam0, -1472964441) || func_108(hParam0, -228153877) || func_108(hParam0, 566155764))
	{
	}
	else if (func_108(hParam0, 1919582297))
	{
		if (func_41() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true) || !PED::IS_PED_ON_FOOT(Global_33))
			return 0;
	
		switch (hParam0)
		{
			case joaat("consumable_predator_bait"):
			case joaat("consumable_potent_predator_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_predator", 32);
				break;
		
			case -252071901:
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		
			case joaat("consumable_herbivore_bait"):
			case joaat("consumable_potent_herbivore_bait"):
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "item_bait_herbivore", 32);
				break;
		}
	
		num.f_1 = hParam0;
		num.f_3 = bParam1;
		unk10 = { num };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_115(unk10, 0);
		flag = false;
	}
	else if (func_116(hParam0))
	{
		num.f_3 = 0;
		num.f_1 = hParam0;
		num.f_2 = 0;
		num = func_117(Global_1072759.f_28313.f_25.f_67);
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_115(unk10, 0);
		num2 = 1;
	}
	else if (func_118(hParam0) == joaat("CLOTHING"))
	{
		if (!func_119(hParam0))
		{
			func_120("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
			return num2;
		}
	
		hash = func_121(hParam0);
	
		switch (hash)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				flag2 = func_122();
				break;
		
			default:
				flag2 = true;
				break;
		}
	
		if (!flag2)
		{
			if (func_123(PLAYER::PLAYER_ID()))
				func_120("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
			else
				func_120("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return num2;
		}
	
		if (hash == -999503751)
		{
			if (Global_1953292.f_1676 != hParam0)
				func_124(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (hash)
			{
				case -2061583405:
					func_126(hParam0);
					func_124(35, 0, 0, 0, false);
					return 1;
			
				case -1719060085:
					if (hParam0 == Global_1953292.f_1676.f_1[23 /*3*/])
					{
						func_127(Global_33, 260271636, 0, -358215195, true, true, true, true, false, true, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_128(hParam0, false, false);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_128(hParam0, true, false);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_125(hParam0, false);
					return num2;
			
				case 119907797:
				case 1388798186:
					if (hParam0 == Global_1953292.f_1676.f_1[10 /*3*/])
					{
						func_127(Global_33, Global_1953292.f_83[10 /*12*/], 0, -358215195, true, true, true, true, false, true, true, false);
						func_128(hParam0, false, false);
						return 1;
					}
					else
					{
						func_128(hParam0, true, false);
						func_129(-2061583405, false);
					
						if (hash == 1388798186)
							func_129(119907797, false);
						else if (hash == 119907797)
							func_129(1388798186, false);
					}
					break;
			
				default:
					if (!func_108(hParam0, 160827531))
						break;
				
					func_125(hParam0, false);
					break;
			}
		
			func_127(Global_33, hParam0, 0, -358215195, true, true, true, false, false, true, true, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_144(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (func_119(joaat("kit_camp")))
				{
					if (func_136(1, 1))
					{
						func_137(2, true);
					}
					else if (func_138(1))
					{
						func_120("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
					}
					else if (func_139())
					{
						func_120("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
					}
					else
					{
						if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
							func_140();
						else
							func_120("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					
						func_141(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
				}
				else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					func_120("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					func_141(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
				}
				else if (func_139())
				{
					func_120("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
				}
				else
				{
					func_120("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
				}
				break;
		
			case joaat("kit_collectors_bag"):
				UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("Collectors"));
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("Collectors")) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "collectors_bag", 32);
					unk10.f_14 = 1024;
					func_115(unk10, 0);
				}
			
				return 1;
		
			case -1115561122:
				if (Global_1148185[PLAYER::PLAYER_ID() /*10*/].f_4)
					func_120("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, true);
				else
					func_145();
			
				return 1;
		
			case joaat("weapon_kit_camera"):
			case 332793555:
				if (func_142(Global_33, true, 0, false) != hParam0)
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_143(535, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_14() != -1)
					break;
			
				if (!func_119(hParam0))
				{
					func_120("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag2 = func_131(7, hParam0);
				flag3 = func_131(1, hParam0);
			
				if (flag3 && !flag2)
				{
					if (MAP::DOES_BLIP_EXIST(Global_17339))
						MAP::REMOVE_BLIP(&Global_17339);
				
					Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_120(MISC::VAR_STRING(0, -1680440926, Global_17339), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_132(7))
				{
					func_120("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag2)
				{
					if (func_134(Global_33, func_133(7), false))
					{
						func_120("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
							MAP::REMOVE_BLIP(&Global_17339);
					
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_120(MISC::VAR_STRING(0, -482898802, Global_17339), 10000, 0, 0, 0, true);
					}
				
					break;
				}
			
				scriptHash = joaat("player_wardrobe");
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(scriptHash) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_2 = 51499045;
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_wardrobe", 32);
					unk10.f_14 = 1024;
					unk10.f_15 = 1;
					func_115(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag = false;
				return 1;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				if (!WEAPON::_IS_WEAPON_BINOCULARS(func_142(Global_33, true, 0, false)))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case 1259508039:
				func_130(true, 0);
				break;
		
			case 1401465909:
				UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));
			
				if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("satchel_ui_event_handler"))
					UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(1976336482, 1261159557);
				else
					UIAPPS::LAUNCH_UIAPP_BY_HASH(1976336482);
			
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(698150113) > 0)
				{
				}
				else
				{
					num.f_1 = hParam0;
					num.f_3 = !(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != joaat("satchel_ui_event_handler"));
					unk10 = { num };
					TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "field_guide", 32);
					unk10.f_14 = 1024;
					func_115(unk10, 0);
				}
			
				return 1;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_135();
				break;
		
			default:
				num2 = 0;
				break;
		}
	}

	if (flag)
		HUD::_0xBFFF81E12A745A5F();

	return num2;
}

BOOL func_61() // Position - 0x2E67 Hash - 0xC24BA3AE ^0xA4363903
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

void func_62(var uParam0) // Position - 0x2E81 Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_36(&uParam0->[i], true, true);
	}

	return;
}

BOOL func_63(int iParam0, int iParam1) // Position - 0x2EA9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_64(var uParam0, float fParam1) // Position - 0x2EB8 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_15(uParam0))
		return false;

	if (func_146(uParam0) > fParam1)
		return true;

	return false;
}

void func_65(var uParam0) // Position - 0x2EDF Hash - 0x4C4E6711 ^0xEB7FC069
{
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 vector;

	if (hLocal_17 != joaat("prop_player_sleep_tent_a_frame"))
		return;

	if (CAM::DOES_CAM_EXIST(uParam0->f_22))
		CAM::DESTROY_CAM(uParam0->f_22, false);

	if (CAM::DOES_CAM_EXIST(uParam0->f_23))
		CAM::DESTROY_CAM(uParam0->f_23, false);

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, true), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true), 2f, 3.25f, 0.75f) };
	uParam0->f_22 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), offsetFromCoordAndHeadingInWorldCoords, 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, true) + 125f, 51.28f, false, 2);
	vector = { 1.1081f, 1.7384f, 0.4631f };
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_22, Global_33, vector, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_22, Global_33, -0.7722f, -0.593f, 0.2919f, true);

	if (!CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_22, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_54(130.648f, 1.3841f);
	}

	func_58(&(uParam0->f_24));
	uParam0->f_27 = 1;
	return;
}

BOOL func_66() // Position - 0x2FDD Hash - 0x4228A1C2 ^0x52905D8B
{
	return Global_1900460.f_67;
}

float func_67() // Position - 0x2FEB Hash - 0x4228A1C2 ^0x5FAFE78F
{
	return Global_1940026.f_9;
}

BOOL func_68(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2FF9 Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_147(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
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

BOOL func_69(Vector3 vParam0, var uParam1, var uParam2, float fParam3, int iParam4, Ped pedParam5, Ped pedParam6, int iParam7) // Position - 0x312E Hash - 0x78512CEE ^0xE31F8454
{
	int entitiesNearPoint;
	int i;
	ScrHandle indexedItemInItemset;
	Ped entityFromItem;

	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Global_26390))
		Global_26390 = ITEMSET::CREATE_ITEMSET(true);

	ITEMSET::_CLEAR_ITEMSET(Global_26390);
	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam0, fParam3, Global_26390, iParam4);

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, Global_26390);
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

float func_70(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x31B3 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_148(entityCoords, vParam1);
}

BOOL func_71(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x3203 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > iParam4;
}

float func_72() // Position - 0x3244 Hash - 0xF32F69D3 ^0xF32F69D3
{
	switch (hLocal_17)
	{
		case joaat("world_player_sleep_bedroll"):
			return 0.5625f;
	}

	return 0.25f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x326A Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_74(int iParam0, int iParam1) // Position - 0x3294 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

BOOL func_75(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x32B5 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_76(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x330A Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = iParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = pedParam11;
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_5 = iParam12;
	Global_1951910[iParam0 /*23*/].f_1 = 2;
	Global_1951910[iParam0 /*23*/].f_17 = -1;
	Global_1951910[iParam0 /*23*/].f_18 = iParam16;
	Global_1951910[iParam0 /*23*/].f_19 = iParam15;
	Global_1951910[iParam0 /*23*/].f_20 = bParam25;
	Global_1951910[iParam0 /*23*/].f_22 = 0f;

	if (bParam25)
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	else
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();

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
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1951910[iParam0 /*23*/].f_3 = prompt;
	func_149(iParam0, true);
	func_150(iParam0, true);
	func_151(iParam0, 128);
	return;
}

int func_77(int iParam0) // Position - 0x3624 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_78(int iParam0) // Position - 0x362E Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (iParam0 == -1)
		return true;

	if (iParam0 == 0)
		return false;

	num = func_153(func_152());

	if (func_154(iParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_154(iParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_154(iParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_154(iParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_154(iParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_154(iParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_154(iParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_154(iParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_154(iParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_154(iParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_154(iParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_154(iParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_154(iParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_154(iParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_154(iParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_154(iParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_154(iParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

BOOL func_79(BOOL bParam0) // Position - 0x3882 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1958675 && bParam0 != false;
}

void func_80(int iParam0) // Position - 0x3893 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_155(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1951910[iParam0 /*23*/].f_3);

	Global_1951910[iParam0 /*23*/].f_4 = 0;
	Global_1951910[iParam0 /*23*/] = 1;
	Global_1951910[iParam0 /*23*/].f_16 = 0;
	Global_1951910[iParam0 /*23*/].f_1 = 0;
	Global_1951910[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_9 = 0f;
	Global_1951910[iParam0 /*23*/].f_10 = 0;
	Global_1951910[iParam0 /*23*/].f_11 = 0;
	Global_1951910[iParam0 /*23*/].f_2 = 1;
	Global_1951910[iParam0 /*23*/].f_15 = -1f;
	return;
}

void func_81(BOOL bParam0) // Position - 0x3946 Hash - 0x8D596D42 ^0x6B1A1AFC
{
	if (bParam0)
		func_156(1);

	func_156(0);
	MISC::SET_BIT(&(Global_1958634.f_1), 0);
	return;
}

void func_82(BOOL bParam0) // Position - 0x3968 Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_157(4);

	func_157(2);
	MISC::SET_BIT(&(Global_1958634.f_1), 0);
	return;
}

void func_83(var uParam0) // Position - 0x398A Hash - 0xB828014C ^0xFD4426E0
{
	int clockHours;
	BOOL flag;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), false);
	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (uParam0->f_17 != clockHours)
	{
		if (uParam0->f_17 == -1)
			flag = true;
	
		uParam0->f_17 = clockHours;
	
		if (!func_158(uParam0) && flag)
			func_120("CMP_SLP_SOON", 10000, 0, 0, 0, true);
	}

	return;
}

const char* func_84(var uParam0) // Position - 0x39DE Hash - 0xDB34E427 ^0x74959DA5
{
	char* str;
	const char* str2;
	const char* str3;

	str = "script@respawn@sky@SkyTL_";
	str2 = func_162(func_161(func_159(uParam0), func_160(), true, 63));
	str3 = func_162(func_161(str, str2, true, 63));
	return str3;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x3A16 Hash - 0x898C409B ^0x898C409B
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
	j = func_153(*iParam0);
	k = func_166(*iParam0);
	l = func_167(*iParam0);

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

	for (m = func_168(i, num); num2 > m; m = func_168(i, num))
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

	func_169(iParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_86(Ped pedParam0) // Position - 0x3B9E Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_170(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_87(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x3BD7 Hash - 0xA385BF6B ^0x5950F9F
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_74(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1951910[i /*23*/].f_11 && hParam1 == Global_1951910[i /*23*/].f_4)
					if (iParam3 <= Global_1951910[i /*23*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_76(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_88(Hash hParam0) // Position - 0x3CAE Hash - 0x6F95B91E ^0x26A2583
{
	if (func_171(hParam0))
		if (!func_172(hParam0, 1))
			func_173(hParam0, 1, false, false, 0, false, 752097756, false);

	return;
}

BOOL func_89() // Position - 0x3CDC Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_91(Global_1051268) && Global_1572887.f_8 & true != 0)
		return true;

	return false;
}

struct<2> func_90(int iParam0) // Position - 0x3D34 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_91(var uParam0, var uParam1) // Position - 0x3D48 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_174(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_175(uParam0))
		return false;

	return true;
}

int func_92(var uParam0, var uParam1) // Position - 0x3D7C Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

void func_93(Hash hParam0, int iParam1) // Position - 0x3D86 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_94() // Position - 0x3D99 Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_95(int iParam0) // Position - 0x3DB8 Hash - 0x262796A6 ^0x32C91F91
{
	if (iParam0 == 2)
		iParam0 = func_176(1);

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

void func_96(float fParam0, Ped pedParam1) // Position - 0x3DF8 Hash - 0x81B8D237 ^0xD25A4B21
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

int func_97(int iParam0) // Position - 0x3E3C Hash - 0x3229E1B0 ^0x75954C0C
{
	if (iParam0 == 2)
		iParam0 = func_176(1);

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

void func_98(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3E80 Hash - 0x5072E518 ^0x6DDAEE0A
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_177(player))
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

BOOL func_99(int iParam0) // Position - 0x3F31 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL func_100(int iParam0) // Position - 0x3F47 Hash - 0x621F6AE0 ^0xC414C76D
{
	return Global_1835011[iParam0 /*72*/].f_58 & 64512 != 0;
}

void func_101(int iParam0, BOOL bParam1) // Position - 0x3F60 Hash - 0xF7F9962 ^0x9C318312
{
	BOOL flag;

	if (!func_99(iParam0))
		return;

	if (func_178(&Global_1835011[iParam0 /*72*/], 8192))
		flag = true;

	Global_1835011[iParam0 /*72*/].f_58 = 0;

	if (!bParam1 && flag)
	{
		Global_1835011[iParam0 /*72*/].f_58 = Global_1835011[iParam0 /*72*/].f_58 | 2;
		Global_1835011[iParam0 /*72*/].f_58 = Global_1835011[iParam0 /*72*/].f_58 | 8192;
	}

	return;
}

void func_102(var uParam0, float fParam1) // Position - 0x3FD0 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_179() - fParam1;
	func_180(uParam0, 1);
	func_181(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_103() // Position - 0x3FF6 Hash - 0xF0FF2168 ^0xD935009B
{
	if (Global_1940252.f_39 == 3)
		return true;

	return false;
}

BOOL func_104(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x400E Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_182(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_183(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_184(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_185(hParam0, bParam4, 0) };
	unk6 = { func_186(hParam0, unk, unk.f_4, bParam4) };
	return func_187(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_105(Hash hParam0, BOOL bParam1) // Position - 0x4086 Hash - 0xF243367B ^0xCF999DBB
{
	BOOL flag;
	int num;

	flag = func_108(hParam0, 1816455607);

	if (!func_182(hParam0, 0))
		if (!flag)
			return false;

	if (Global_1940252.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_188(hParam0);
	
		if (func_108(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_189(true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_190())
			return false;

	if (!flag && !func_172(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_106(Hash hParam0) // Position - 0x4158 Hash - 0x601AA14C ^0xEF1C7FBC
{
	if (func_116(hParam0))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_59(false), hParam0, func_191(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			func_192(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_193() != -1)
			{
				func_120(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_193()), 10000, 0, 0, 0, true);
				func_195(-1);
			}
			break;
	}

	return true;
}

BOOL func_107(Hash hParam0) // Position - 0x41D7 Hash - 0xBD978834 ^0xC8EAE0CB
{
	var unk;

	if (hParam0 == 17745825)
	{
		TEXT_LABEL_ASSIGN_STRING(&(unk.f_10), "legendary_animal_map", 32);
		unk.f_14 = 512;
		func_115(unk, 0);
		return true;
	}

	return false;
}

BOOL func_108(Hash hParam0, Hash hParam1) // Position - 0x4209 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_182(hParam0, 0))
		return func_197(func_196(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_109(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, BOOL bParam28, int iParam29) // Position - 0x424A Hash - 0x5A3F4CC0 ^0x5A3F4CC0
{
	return;
}

void func_110(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x4252 Hash - 0x3A6CFA ^0x3A6CFA
{
	return;
}

void func_111(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x425A Hash - 0x3087D828 ^0x3087D828
{
	return;
}

BOOL func_112(Hash hParam0) // Position - 0x4262 Hash - 0xCA7B09D7 ^0x9205EE93
{
	if (func_14() == 0 && func_199(func_198(hParam0), true, false) != 0)
	{
		func_120("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, true);
		return false;
	}

	return true;
}

BOOL func_113(Hash hParam0) // Position - 0x429B Hash - 0xC4C130FB ^0xC8101E3B
{
	if (func_200(hParam0, joaat("TAG_ITEM_PROPERTY")) == 1816455607)
	{
		func_201(0);
		func_203(func_202(hParam0));
		return true;
	}

	return false;
}

BOOL func_114(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x42CA Hash - 0xD49E510D ^0x2607D5E4
{
	if (func_204(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_200(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_217(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_206(hParam0);
				else
					func_211(hParam0);
			
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
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_206(hParam0);
				else
					func_214(hParam0);
			
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
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case -273840653:
			if (!bParam1)
			{
				func_208(hParam0, true);
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_215(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_206(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_218(hParam0, bParam3);
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
		
			Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
			return true;
	
		case 845883585:
			if (!bParam1)
			{
				if (!func_205())
				{
					if (func_86(&Global_33))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_120("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
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
				func_209(hParam0, true);
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				func_210(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_219(hParam0, bParam3);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_216(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_206(hParam0);
				else
					func_207(hParam0);
			
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_206(hParam0);
				else
					func_212(hParam0);
			
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_206(hParam0);
				else
					func_213(hParam0);
			
				return true;
			}
			break;
	}

	return false;
}

void func_115(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x46E4 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_220(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_221(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_222(iParam16);
			return;
		}
	}

	return;
}

BOOL func_116(Hash hParam0) // Position - 0x4780 Hash - 0xE969B321 ^0x8C585BB9
{
	if (!func_182(hParam0, 0))
		return false;

	if (func_118(hParam0) == joaat("emote"))
		return true;

	return false;
}

int func_117(var uParam0) // Position - 0x47AA Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_223(uParam0);
}

int func_118(Hash hParam0) // Position - 0x47B8 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_182(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_119(Hash hParam0) // Position - 0x47E3 Hash - 0xA0AC1BF ^0x3B7AC8C7
{
	if (hParam0 == 0)
		return false;

	if (func_118(hParam0) == joaat("CLOTHING"))
		func_121(hParam0) == -999503751;

	return true;
}

int func_120(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x4812 Hash - 0x8EBD6187 ^0x42F0F0AC
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

Hash func_121(Hash hParam0) // Position - 0x484D Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_182(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_122() // Position - 0x4878 Hash - 0x94D65CA6 ^0x4569CEBD
{
	Player player;
	Ped mountOwnedByPlayer;
	Ped playerPed;
	Vector3 entityCoords;
	Vector3 entityCoords2;

	player = PLAYER::PLAYER_ID();
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(player);
	playerPed = PLAYER::GET_PLAYER_PED(player);

	if (!ENTITY::DOES_ENTITY_EXIST(mountOwnedByPlayer))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mountOwnedByPlayer) || PED::IS_PED_INJURED(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_SWIMMING(playerPed) || PED::IS_PED_SWIMMING(mountOwnedByPlayer))
		return 0;

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) != playerPed)
			return 0;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(playerPed, false, false) };
	entityCoords2 = { ENTITY::GET_ENTITY_COORDS(mountOwnedByPlayer, false, false) };

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(playerPed, mountOwnedByPlayer))
		return 1;

	return 0;
}

BOOL func_123(Player plParam0) // Position - 0x492B Hash - 0xBF9BE0C1 ^0x883CF463
{
	Ped playerPed;
	Ped mountOwnedByPlayer;

	playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(plParam0);

	if (PED::IS_PED_ON_MOUNT(playerPed))
		if (PED::_GET_RIDER_OF_MOUNT(mountOwnedByPlayer, false) == playerPed)
			return true;

	return false;
}

void func_124(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x495D Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_224(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_225(num);
	return;
}

int func_125(Hash hParam0, BOOL bParam1) // Position - 0x498F Hash - 0x26B1C24E ^0x1E715211
{
	int num;

	if (!func_226())
		return 0;

	if (!func_227(hParam0))
		return 0;

	if (func_228(hParam0))
	{
		num = 0;
	
		if (func_121(hParam0) == 81053684 || func_108(hParam0, 160827531) && !func_108(hParam0, -1303648999))
			if (bParam1)
				func_229(&num, 2);
	
		return func_230(hParam0, num);
	}

	return 0;
}

void func_126(Hash hParam0) // Position - 0x4A06 Hash - 0x6BEB4307 ^0xF7D79B73
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1953292.f_1676.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_127(Global_33, -2065815962, 0, -358215195, true, true, true, true, false, true, true, true);
		func_128(hParam0, false, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_127(Global_33, hParam0, 0, -358215195, true, true, true, true, false, true, true, true);

	if (func_231(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_232();
		func_224(128);
		return;
	}

	if (hash == Global_1953292.f_83[num /*12*/])
	{
		func_128(hParam0, true, false);
		return;
	}

	if (func_233(-2061583405, false))
	{
		if (func_234(hash))
			func_128(hash, false, false);
		else
			func_235(hash, true, true, false, false, false);
	
		func_128(hParam0, true, false);
		return;
	}

	if (func_234(hash))
	{
		func_128(hash, false, false);
		func_128(hParam0, true, false);
	}
	else if (func_234(hParam0))
	{
		if (hParam0 != func_236(0))
		{
			func_237(hParam0, hash, false, false, false);
			func_128(hParam0, false, false);
			func_128(hash, false, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_224(128);
			func_128(hParam0, true, false);
		}
	}

	return;
}

int func_127(Ped pedParam0, Hash hParam1, Hash hParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x4B5C Hash - 0x31745379 ^0x5F342BAB
{
	var unk;
	int num;

	if (hParam3 == -358215195)
	{
		unk = { func_185(hParam1, true, 0) };
		hParam3 = func_238(unk.f_4);
	
		if (hParam3 == -358215195)
			return 0;
	}

	if (!func_240(hParam1, hParam2, func_239(hParam3, 1), bParam4, true, false, true))
		return 0;

	func_241(true, bParam5, bParam9, true, bParam11);

	if (bParam10)
		if (func_242(hParam1, false))
			func_243(Global_1953292.f_1676.f_1[func_239(hParam3, 1) /*3*/], false, false);
		else
			func_243(hParam1, true, false);

	switch (hParam3)
	{
		case 1108822547:
			if (func_231(32768))
			{
				func_232();
				func_124(21, hParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam7 && hParam1 != Global_1953292.f_83[func_239(hParam3, 1) /*12*/])
				func_124(27, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
		return 1;

	num = func_244(hParam3);

	if (bParam4)
		num = num | 2;

	if (bParam8)
		func_245(&num, 4);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_124(19, 0, num, 0, false);
	}
	else
	{
		num = num | 1;
		func_124(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_128(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4CB5 Hash - 0x9789B209 ^0xF02FDDD
{
	var unk;
	var guid;

	unk = { func_185(hParam0, bParam2, 0) };
	guid = { func_186(hParam0, unk, unk.f_4, bParam2) };

	if (func_246(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_59(bParam2), &guid, bParam1);
	return;
}

Hash func_129(Hash hParam0, BOOL bParam1) // Position - 0x4D05 Hash - 0xC283C021 ^0x9CE4FF09
{
	int i;
	Hash hash;
	Hash hash2;
	var guid;
	Hash outSlotId;
	var unk4;

	hash2 = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return 0;

	unk4 = { func_186(joaat("WARDROBE"), func_247(bParam1), joaat("SLOTID_WARDROBE"), bParam1) };

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_121(hash) == hParam0 || hParam0 == 81053684 && func_108(hash, 160827531))
		{
			guid = { func_186(hash, unk4, outSlotId, bParam1) };
		
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_59(bParam1), &guid))
			{
				hash2 = hash;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_59(bParam1), &guid, false);
			}
		}
	}

	return hash2;
}

void func_130(BOOL bParam0, int iParam1) // Position - 0x4DC0 Hash - 0xCC16269 ^0xB563FF97
{
	if (bParam0)
	{
		Global_1940252 = 1;
		Global_1940252.f_1 = iParam1;
	}
	else
	{
		Global_1940252 = 2;
	}

	return;
}

BOOL func_131(int iParam0, Hash hParam1) // Position - 0x4DE2 Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_248(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_133(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(mount))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(mount) || PED::IS_PED_INJURED(mount))
		return 0;

	if (PED::IS_PED_SWIMMING(Global_33) || PED::IS_PED_SWIMMING(mount))
		return 0;

	if (PED::IS_PED_ON_MOUNT(Global_33))
		if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_33)
			if (hParam1 == joaat("kit_wardrobe"))
				return 0;
		else
			return 0;

	if (func_249(iParam0))
		return 1;

	return 0;
}

BOOL func_132(int iParam0) // Position - 0x4E89 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_248(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_133(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_250())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

Ped func_133(int iParam0) // Position - 0x4EE2 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_248(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_134(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x4F0E Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

void func_135() // Position - 0x4F78 Hash - 0x3118984E ^0x9DD7A6C6
{
	int num;

	if (func_251())
		return;

	if (func_252(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_252(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				
					func_253(16);
				}
			
				func_254(1);
				break;
		
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					break;
			
				func_253(8);
				func_254(0);
				break;
		}
	
		return;
	}

	if (func_255())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1915656.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_256();
	}
	else
	{
		num = func_258(func_257());
	
		if (num != -1)
		{
			func_120(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num), 10000, 0, 0, 0, true);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_259(0);
			func_195(-1);
		}
	}

	return;
}

BOOL func_136(int iParam0, int iParam1) // Position - 0x506F Hash - 0x5D65A4D7 ^0x7C5646CA
{
	Any gangId;

	if (!func_260() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_261(16))
		return false;

	if (func_262())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_263())
		return false;

	if (func_264(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_265(Global_1147183.f_8, 1))
		return false;

	if (func_139())
		return false;

	return true;
}

int func_137(int iParam0, BOOL bParam1) // Position - 0x512F Hash - 0x31DB738A ^0x31DB738A
{
	if (bParam1)
		func_266();

	if (!func_267(bParam1, bParam1, !bParam1))
		return 0;

	func_268(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

BOOL func_138(int iParam0) // Position - 0x516B Hash - 0xA059D395 ^0xAFACF28D
{
	return func_265(Global_1147183.f_8, iParam0);
}

BOOL func_139() // Position - 0x517F Hash - 0x1BB0EADA ^0xDD84C79B
{
	int num;

	num = func_269(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_265(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_140() // Position - 0x51C1 Hash - 0xEA92AA44 ^0xD024142D
{
	int num;
	int num2;

	num = { func_90(0) };

	if (func_91(num))
	{
		if (num == 6)
		{
			num2 = func_270(PLAYER::PLAYER_ID(), false);
		
			if (num2 != -1)
				if (func_271(num2) == joaat("posse_versus"))
					func_120("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, true);
				else if (num2 == 1)
					func_120("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, true);
				else
					func_120("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, true);
		}
		else
		{
			func_120("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
		}
	}

	return;
}

void func_141(Any anParam0) // Position - 0x5251 Hash - 0x89B6E65 ^0xA9E218C2
{
	var unk;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_6 = anParam0;
	unk.f_4 = 56;
	func_273(unk, func_272(0, 8), false, false);
	return;
}

Hash func_142(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x5296 Hash - 0xDD2F88C2 ^0x29E97850
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

void func_143(int iParam0, BOOL bParam1) // Position - 0x52D8 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_274(iParam0, &num, &num2);

	if (!func_275(iParam0, num, num2, bParam1))
		return;

	func_276(num, num2);
	return;
}

void func_144(BOOL bParam0) // Position - 0x5305 Hash - 0x5C051E8E ^0x5C051E8E
{
	if (func_14() != -1 || !bParam0 || func_277(Global_33))
	{
		func_278();
		return;
	}

	return;
}

void func_145() // Position - 0x5333 Hash - 0x84DD5872 ^0x184C819C
{
	Player player;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-741705372))
	{
		player = PLAYER::PLAYER_ID();
		func_279(1, player);
	}

	return;
}

float func_146(var uParam0) // Position - 0x5354 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_15(uParam0))
		return uParam0->f_1;

	if (func_280(uParam0))
		return uParam0->f_2;

	return func_179() - uParam0->f_1;
}

BOOL func_147(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5389 Hash - 0xC9655EC3 ^0xE7BDB885
{
	if (Global_1940199.f_12)
		if (bParam2 || Global_1940199.f_13 > 0 || Global_1940199.f_11 > 0)
			return 1;
	else if (bParam1 && !(Global_1940199.f_9 == 1370593166))
		return 0;

	if (Global_1940199.f_14 > 0 || bParam2 && Global_1940199.f_14 > -1)
		return 1;

	if (bParam0)
		if (Global_1940199.f_7)
			if (bParam2 || Global_1940199.f_15 > 0)
				return 1;

	return 0;
}

float func_148(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x5427 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_149(int iParam0, BOOL bParam1) // Position - 0x5445 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_74(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_150(int iParam0, BOOL bParam1) // Position - 0x549D Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_151(int iParam0, int iParam1) // Position - 0x54C6 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

int func_152() // Position - 0x54EE Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

int func_153(int iParam0) // Position - 0x54FA Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_154(int iParam0, int iParam1) // Position - 0x550D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_155(int iParam0) // Position - 0x551C Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_74(iParam0, 2);
}

void func_156(int iParam0) // Position - 0x552B Hash - 0x7317FD65 ^0x733BC76
{
	int num;
	int offset;

	if (!func_281(iParam0))
		return;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_1903838.f_496[num], offset);
	return;
}

void func_157(int iParam0) // Position - 0x555F Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1902887.f_302 = Global_1902887.f_302 || iParam0;
	return;
}

BOOL func_158(var uParam0) // Position - 0x5578 Hash - 0x6019ABAF ^0x5448AC9E
{
	int i;
	int num;
	BOOL flag;
	var unk;

	for (i = 0; i <= 3; i = i + 1)
	{
		func_36(&uParam0->[i], true, true);
	}

	if (uParam0->f_17 > 3 && uParam0->f_17 <= 9)
	{
		uParam0->[1] = func_37("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[2] = func_37("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[3] = func_37("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_17 > 9 && uParam0->f_17 <= 15)
	{
		uParam0->[2] = func_37("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[3] = func_37("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[0] = func_37("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_17 > 15 && uParam0->f_17 <= 21)
	{
		uParam0->[3] = func_37("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[0] = func_37("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[1] = func_37("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_17 > 21 || uParam0->f_17 <= 3)
	{
		uParam0->[0] = func_37("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[1] = func_37("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->[2] = func_37("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}

	flag = true;
	func_85(&unk, 0, 0, 3, 0, 0, 0, false);

	if (!func_282(unk))
		flag = false;

	if (func_33(uParam0->[0]))
	{
		if (uParam0->f_17 < 6)
			num = 6 - uParam0->f_17;
		else
			num = (24 - uParam0->f_17) + 6;
	
		func_283(uParam0->[0], "CMP_SLP_MRN", num, true);
		func_29(uParam0->[0], 1323335645, 0, true);
		func_284(uParam0->[0], flag, true, true);
	}

	if (func_33(uParam0->[1]))
	{
		if (uParam0->f_17 < 12)
			num = 12 - uParam0->f_17;
		else
			num = (24 - uParam0->f_17) + 12;
	
		func_283(uParam0->[1], "CMP_SLP_NOON", num, true);
		func_29(uParam0->[1], 1323335645, 0, true);
		func_284(uParam0->[1], flag, true, true);
	}

	if (func_33(uParam0->[2]))
	{
		if (uParam0->f_17 < 18)
			num = 18 - uParam0->f_17;
		else
			num = (24 - uParam0->f_17) + 18;
	
		func_283(uParam0->[2], "CMP_SLP_EVE", num, true);
		func_29(uParam0->[2], 1323335645, 0, true);
		func_284(uParam0->[2], flag, true, true);
	}

	if (func_33(uParam0->[3]))
	{
		num = 24 - uParam0->f_17;
		func_283(uParam0->[3], "CMP_SLP_MDN", num, true);
		func_29(uParam0->[3], 1323335645, 0, true);
		func_284(uParam0->[3], flag, true, true);
	}

	return flag;
}

char* func_159(int iParam0) // Position - 0x5954 Hash - 0x62DF1F49 ^0x7A3F5F76
{
	switch (iParam0)
	{
		case 0:
			if (func_285())
				return "2100_";
			else
				return "0000_";
			break;
	
		case 6:
			if (func_285())
				return "0300_";
			else
				return "0600_";
			break;
	
		case 12:
			if (func_285())
				return "0900_";
			else
				return "1200_";
			break;
	
		case 18:
			if (func_285())
				return "1500_";
			else
				return "1800_";
			break;
	}

	return "1200_";
}

char* func_160() // Position - 0x59EC Hash - 0x99F72133 ^0x46AE6CEC
{
	int num;

	num = func_286();

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

struct<8> func_161(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0x5AA6 Hash - 0xB13D7CEF ^0x4DD40A33
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

const char* func_162(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x5B5D Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_163(int iParam0) // Position - 0x5B71 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_164(int iParam0) // Position - 0x5B96 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_165(int iParam0) // Position - 0x5BA9 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_166(int iParam0) // Position - 0x5BBC Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_167(int iParam0) // Position - 0x5BCE Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_168(int iParam0, int iParam1) // Position - 0x5BE0 Hash - 0x893AC59E ^0x893AC59E
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

void func_169(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5C7A Hash - 0xA65AB937 ^0xA65AB937
{
	func_288(uParam0, iParam6);
	func_289(uParam0, iParam5);
	func_290(uParam0, iParam4);
	func_291(uParam0, iParam3);
	func_292(uParam0, iParam2);
	func_293(uParam0, iParam1);
	return;
}

BOOL func_170(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x5CB2 Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

BOOL func_171(Hash hParam0) // Position - 0x5CD6 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_172(Hash hParam0, int iParam1) // Position - 0x5CFE Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_182(hParam0, 0))
		return false;

	num = func_118(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_295(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_294(hParam0, 1))
				return false;
			break;
	}

	return func_296(hParam0, false, false, false) >= iParam1;
}

int func_173(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x5D81 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	var unk6;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
	{
		unk = { func_185(hParam0, false, 1) };
	
		if (func_297(hParam0, &unk, unk.f_4, false, false))
		{
			unk6.f_9 = joaat("SLOTID_NONE");
		
			if (func_298(hParam0, &unk6, unk.f_4))
			{
				unk28 = { func_186(hParam0, unk, unk.f_4, false) };
				func_187(hParam0, &unk28, &unk, 1, -142743235, 1, false);
			}
		}
	}

	if (func_299(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
			return 0;
	
		func_300(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_301(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_174(int iParam0) // Position - 0x5EB1 Hash - 0x5000025C ^0x5000025C
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

int func_175(int iParam0) // Position - 0x5EF0 Hash - 0xE34A477A ^0xE34A477A
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

int func_176(int iParam0) // Position - 0x5F86 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_303(func_302(iParam0));
}

BOOL func_177(Player plParam0) // Position - 0x5F98 Hash - 0xD9DF34E9 ^0x1EDCC4EC
{
	float num;

	num = func_304(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

BOOL func_178(var uParam0, int iParam1) // Position - 0x5FB3 Hash - 0x718DD1EF ^0xBBF5E3F2
{
	return uParam0->f_58 && iParam1 != false;
}

float func_179() // Position - 0x5FC4 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_180(var uParam0, int iParam1) // Position - 0x5FF6 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_181(var uParam0, int iParam1) // Position - 0x6007 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_182(Hash hParam0, int iParam1) // Position - 0x601C Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_183(Hash hParam0, Hash hParam1) // Position - 0x6036 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_305(func_196(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_184(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x6062 Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_306(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_183(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_299(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_307(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_308(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_309(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_310(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_59(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<5> func_185(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x617A Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_247(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_118(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_314(hParam0, -1823706425))
			{
				unk = { func_186(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_314(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_186(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_186(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_314(hParam0, -1653629781))
			{
				unk = { func_186(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_313(bParam1) };
		
			switch (func_121(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_186(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_311(bParam1) };
		
			if (iParam2 && func_312(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_297(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_297(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_298(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_315(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_314(hParam0, -1653629781))
			{
				unk = { func_186(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
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

struct<4> func_186(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x64EE Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_182(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_59(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_187(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x651F Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_306(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_315(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_299(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_14() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_309(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_310(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_59(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_188(Hash hParam0) // Position - 0x663D Hash - 0x2F9A232D ^0xF8D1A587
{
	if (func_108(hParam0, 1573112293))
		return func_316(hParam0);

	if (func_108(hParam0, 1816455607))
		return func_317();

	if (func_318(hParam0))
		return func_319();

	switch (func_121(hParam0))
	{
		case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
		case 664784405:
		case joaat("CI_CATEGORY_EMOTE_GREETS"):
		case joaat("CI_CATEGORY_EMOTE_DANCES"):
			return func_328();
	
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_322();
	
		case -1823706425:
			if (hParam0 == -1115561122)
				return func_325();
			else
				return func_326();
			break;
	
		case -1520388130:
		case 1802292908:
			return func_321();
	
		case -1393202694:
		case 2041469314:
			return func_316(hParam0);
	
		case -854348463:
			return func_327();
	
		case -525676072:
			return func_322();
	
		case -77448735:
			if (func_320(hParam0))
				return func_316(hParam0);
			break;
	
		case 1779021115:
			if (hParam0 == joaat("weapon_kit_camera") || hParam0 == 332793555)
				return func_323();
		
			return func_324();
	
		default:
			if (func_182(hParam0, 0))
				if (func_108(hParam0, 1919582297))
					return func_329();
				else if (hParam0 == joaat("upgrade_upg_mortar_pestle") || hParam0 == -1448210800)
					return func_330();
				else if (hParam0 == joaat("kit_horse_brush"))
					return func_331();
				else if (func_108(hParam0, 1147021565))
					return func_332();
		
			return func_333();
	}

	return func_333();
}

BOOL func_189(BOOL bParam0, int iParam1) // Position - 0x6804 Hash - 0xDE6C34D8 ^0x4950B3D1
{
	Ped mount;

	if (Global_1940199.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (func_14() == 0)
		if (func_334(131072))
			return false;

	if (!func_154(iParam1, 1))
		if (func_334(1024))
			return false;

	if (Global_1940199.f_16)
		return false;

	if (!func_154(iParam1, 2) && func_334(32))
		return false;

	if (!func_154(iParam1, 4))
		if (func_334(4096))
			return false;

	if (!func_154(iParam1, 8) && func_334(512))
		return false;

	if (!func_154(iParam1, 512) && !func_335(bParam0))
		return false;

	if (!func_154(iParam1, 262144) && !func_336(bParam0, func_154(iParam1, 524288)))
		return false;

	if (!func_154(iParam1, 64) && !func_337(bParam0, iParam1, true))
		return false;

	if (!func_154(iParam1, 128))
	{
		if (func_40(Global_33, SCRIPT_TASK_MOUNT_ANIMAL) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
				func_120("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_154(iParam1, 16))
	{
		if (func_338(Global_33))
		{
			mount = PED::GET_MOUNT(Global_33);
		
			if (!func_339(mount, true))
			{
				if (bParam0)
					func_120("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
			
				return false;
			}
		}
	}

	if (!func_154(iParam1, 256) && func_334(8192))
		return false;

	if (!func_154(iParam1, 1024) && func_334(65536))
	{
		if (bParam0)
			func_120("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_154(iParam1, 2048))
		if (func_334(32768))
			return false;

	if (!func_154(iParam1, 4096))
		if (func_334(16384))
			return false;

	if (!func_154(iParam1, 8192))
		if (!func_334(16))
			return false;

	if (!func_154(iParam1, 67108864))
		if (!func_334(268435456))
			return false;

	if (!func_154(iParam1, 16384))
		if (func_334(256))
			return false;

	if (!func_154(iParam1, 32768))
	{
		if (func_61())
		{
			if (bParam0)
				func_120("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_154(iParam1, 131072))
		if (!func_334(524288))
			return false;

	if (!func_154(iParam1, 65536))
		if (!func_334(262144))
			return false;

	if (!func_154(iParam1, 1048576))
		if (!func_334(2097152))
			return false;

	if (!func_154(iParam1, 2097152))
		if (!func_334(8388608))
			return false;

	if (!func_154(iParam1, 4194304))
		if (!func_334(16777216))
			return false;

	if (!func_154(iParam1, 8388608))
		if (func_334(33554432))
			return false;

	if (!func_154(iParam1, 16777216))
		if (func_334(67108864))
			return false;

	if (!func_154(iParam1, 33554432))
		if (func_334(134217728))
			return false;

	if (func_334(64))
		return false;
	else if (func_334(128))
		return false;
	else if (func_334(1048576))
		return false;
	else if (func_334(4))
		return false;

	if (!func_154(iParam1, 134217728))
		if (func_79(256))
			return false;

	if (!func_154(iParam1, 268435456))
		if (func_334(536870912))
			return false;

	if (!func_154(iParam1, 536870912))
		if (func_334(1073741824))
			return false;

	return true;
}

BOOL func_190() // Position - 0x6C40 Hash - 0xC1143497 ^0x6DF3C037
{
	int scenarioPointTypePedIsUsing;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return false;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		num = scenarioPointTypePedIsUsing;
	
		if (num != joaat("world_player_dynamic_kneel") && num != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"))
			return true;
	}

	return false;
}

BOOL func_191(BOOL bParam0) // Position - 0x6C8B Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

Any func_192(int iParam0, int iParam1) // Position - 0x6CBB Hash - 0x2C0BA169 ^0xDCFC749C
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_1556.f_44.f_87);
}

int func_193() // Position - 0x6CD2 Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1915656.f_22504.f_5;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x6CE3 Hash - 0xA17D549C ^0xB297A828
{
	var unk;
	int num;

	switch (iParam0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
	
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
	
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
	
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
	
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
	
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
	
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
	
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
	
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
	
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
	
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
	
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
	
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
	
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
	
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
	
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
	
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
	
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
	
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
	
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
	
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
	
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
	
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
	
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
	
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
	
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
	
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
	
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
	
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
	
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
	
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
	
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
	
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
	
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
	
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
	
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
	
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
	
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
	
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
	
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
	
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
	
		case 46:
			unk = -1;
			unk.f_1 = -1;
			unk = { func_90(0) };
		
			if (!func_91(unk))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			num = func_340(&unk, 1);
		
			if (num == -1)
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			if (!func_341(num, 461218520, true))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			return func_343(func_342(num, 461218520));
	}

	return "";
}

void func_195(int iParam0) // Position - 0x6F7D Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1915656.f_22504.f_5 = iParam0;
	return;
}

Hash func_196(Hash hParam0) // Position - 0x6F90 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_197(Hash hParam0, Hash hParam1) // Position - 0x6F9A Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_305(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

int func_198(Hash hParam0) // Position - 0x6FD0 Hash - 0x537A51B4 ^0x537A51B4
{
	int i;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_344(i, hParam0))
			return i;
	}

	return -1;
}

int func_199(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6FFC Hash - 0x571E293 ^0x8A680264
{
	if (!func_345(iParam0))
		return 1;

	if (!func_346(iParam0))
		return 5;

	if (!bParam1 && Global_1220826.f_48[iParam0 /*21*/].f_17)
		if (bParam2 || Global_1220826.f_1.f_20 != 0)
			return 2;

	if (!bParam2 && !func_347(iParam0))
		return 3;

	if (func_348(iParam0) && !func_349())
		return 4;

	return 0;
}

int func_200(Hash hParam0, int iParam1) // Position - 0x707E Hash - 0x7A1C2599 ^0xFF9B5634
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

void func_201(int iParam0) // Position - 0x70C8 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11599 = iParam0;
	return;
}

Hash func_202(Hash hParam0) // Position - 0x70D9 Hash - 0x33F7D399 ^0x18C3F003
{
	if (!func_182(hParam0, 0))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(hParam0);
}

void func_203(Hash hParam0) // Position - 0x70F6 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11605 = hParam0;
	return;
}

BOOL func_204(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x7107 Hash - 0x5AD1F9FD ^0x14415059
{
	Hash interactionAnimHash;

	switch (func_200(hParam0, -949239683))
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
	
		case -1420737577:
			if (!bParam1)
			{
				interactionAnimHash = 2129866661;
			
				if (bParam2)
					interactionAnimHash = 1607869040;
			
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
					interactionAnimHash = -1791047090;
			
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

BOOL func_205() // Position - 0x745A Hash - 0x78092BAE ^0x48B67C15
{
	return Global_1953292.f_1676.f_1[1 /*3*/].f_1 == joaat("pomade");
}

void func_206(Hash hParam0) // Position - 0x7476 Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_350())
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
		if (func_108(hParam0, 1573112293))
			func_352(func_351(hParam0), true, 1);
	
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_207(Hash hParam0) // Position - 0x7510 Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_208(Hash hParam0, BOOL bParam1) // Position - 0x7590 Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_209(Hash hParam0, BOOL bParam1) // Position - 0x763D Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_210(Hash hParam0) // Position - 0x76EA Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_211(Hash hParam0) // Position - 0x776A Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_212(Hash hParam0) // Position - 0x77EA Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_213(Hash hParam0) // Position - 0x786A Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_214(Hash hParam0) // Position - 0x78EA Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_215(Hash hParam0) // Position - 0x796A Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_216(Hash hParam0) // Position - 0x79EA Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_217(Hash hParam0) // Position - 0x7A6A Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_350())
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
		func_353(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_218(Hash hParam0, BOOL bParam1) // Position - 0x7AEA Hash - 0x1923F90C ^0xE8AF292D
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_350())
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
		if (!func_353(Global_33, hParam0, hash, 1, 0) && bParam1)
		{
			func_354(hParam0);
			func_355(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

void func_219(Hash hParam0, BOOL bParam1) // Position - 0x7B88 Hash - 0x1923F90C ^0xB46E99E1
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_350())
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
		if (!func_353(Global_33, hParam0, hash, 1, bParam1) && bParam1)
		{
			func_354(hParam0);
			func_355(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_354(hParam0);
		func_355(hParam0, 1, false, 562618531);
	}

	return;
}

BOOL func_220(int iParam0, int iParam1) // Position - 0x7C27 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_221(const char* sParam0) // Position - 0x7C36 Hash - 0x2124511C ^0xA40AAA4F
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

void func_222(int iParam0) // Position - 0x7C70 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_220(iParam0, 1))
		func_356(1);

	return;
}

int func_223(int iParam0) // Position - 0x7C87 Hash - 0x9D41E8C7 ^0x9D41E8C7
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

void func_224(BOOL bParam0) // Position - 0x7CC4 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_225(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7CD7 Hash - 0x21CB5355 ^0x21CB5355
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
		case 23:
			if (Global_1953292.f_918 >= 25)
				return;
		
			if (func_357(iParam0))
			{
				for (i = 0; i < Global_1953292.f_918; i = i + 1)
				{
					num = (Global_1953292.f_923 + i) % 25;
				
					if (Global_1953292.f_736[num /*4*/] == iParam0 && Global_1953292.f_736[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_736[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_358(iParam0);
			Global_1953292.f_736[Global_1953292.f_924 /*4*/] = { iParam0 };
			Global_1953292.f_918 = Global_1953292.f_918 + 1;
			Global_1953292.f_924 = (Global_1953292.f_924 + 1) % 25;
			func_224(8);
			break;
	
		case 24:
		case 25:
			if (Global_1953292.f_919 >= 25)
				return;
		
			if (func_357(iParam0))
				return;
		
			func_358(iParam0);
			Global_1953292.f_635[Global_1953292.f_919 /*4*/] = { iParam0 };
			Global_1953292.f_919 = Global_1953292.f_919 + 1;
			func_224(8);
			break;
	
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953292.f_920 >= 20)
				return;
		
			if (func_357(iParam0))
			{
				for (i = 0; i < Global_1953292.f_920; i = i + 1)
				{
					num = (Global_1953292.f_921 + i) % 20;
				
					if (Global_1953292.f_837[num /*4*/] == iParam0 && Global_1953292.f_837[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_837[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			if (iParam0 == 34)
			{
				Global_1953292.f_930 = 1;
				Global_1953292.f_930.f_1 = iParam0.f_2;
				Global_1953292.f_930.f_2 = iParam0.f_3;
			}
		
			func_358(iParam0);
			Global_1953292.f_837[Global_1953292.f_922 /*4*/] = { iParam0 };
			Global_1953292.f_920 = Global_1953292.f_920 + 1;
			Global_1953292.f_922 = (Global_1953292.f_922 + 1) % 20;
			func_224(8);
			break;
	}

	return;
}

BOOL func_226() // Position - 0x7FD3 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_3502;
}

BOOL func_227(Hash hParam0) // Position - 0x7FE2 Hash - 0xEA4B1A1D ^0xCEE5D868
{
	if (func_359())
		return false;

	if (!func_182(hParam0, 0))
		return false;

	if (!func_172(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_228(Hash hParam0) // Position - 0x801A Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_360(hParam0);
}

void func_229(var uParam0, int iParam1) // Position - 0x8028 Hash - 0xF55E891F ^0xF55E891F
{
	func_361(uParam0, iParam1);
	return;
}

int func_230(Hash hParam0, int iParam1) // Position - 0x8038 Hash - 0xE35D1323 ^0x1EF44228
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_362(hParam0);

	if (func_121(hParam0) == -525676072 || func_108(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_363(&hash))
			if (flag)
				interactionAnimHash = func_364();
			else
				interactionAnimHash = func_365();
		else if (flag)
			interactionAnimHash = func_366();
		else
			interactionAnimHash = func_367();
	else if (func_368(&hash))
		if (func_108(hash, -1303648999) || func_121(hash) == -525676072)
			interactionAnimHash = func_364();
		else
			interactionAnimHash = func_365();
	else if (flag)
		interactionAnimHash = func_366();
	else
		interactionAnimHash = func_367();

	if (interactionAnimHash != 0)
	{
		Global_1953292.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_231(BOOL bParam0) // Position - 0x811F Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1953292 && bParam0 != false;
}

void func_232() // Position - 0x8130 Hash - 0x606B8FC3 ^0xEBA3545E
{
	Global_1953292.f_3485 = 0;
	Global_1953292.f_3485.f_1 = 0;
	Global_1953292.f_3485.f_8 = 0;
	Global_1953292.f_3485.f_2 = 0;
	Global_1953292.f_3485.f_3[0] = 0;
	Global_1953292.f_3485.f_3[1] = 0;
	Global_1953292.f_3485.f_3[2] = 0;
	Global_1953292.f_3485.f_3[3] = 0;
	Global_1953292.f_3485.f_9 = 0;
	Global_1953292.f_3485.f_10 = 0;
	Global_1953292.f_3485.f_11 = 0;

	if (Global_1953292.f_3485.f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953292.f_3485.f_13);

	Global_1953292.f_3485.f_12 = 0;
	func_369(32768);
	func_370(1108822547, 8, 6);
	return;
}

BOOL func_233(int iParam0, BOOL bParam1) // Position - 0x81E7 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_371(iParam0, false) < func_372(iParam0, bParam1);
}

BOOL func_234(Hash hParam0) // Position - 0x81FF Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_373(hParam0, &unk);
}

void func_235(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x820F Hash - 0x20094A26 ^0x2C3F4D15
{
	Hash hash;
	BOOL flag;

	hash = func_121(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			if (func_108(hParam0, 1584357097))
				return;
		
			flag = func_374(hParam0, &(Global_1953292.f_3352.f_28), Global_1953292.f_3352.f_33.f_1, bParam1, bParam5);
			break;
	
		case -1719060085:
			flag = func_374(hParam0, &(Global_1953292.f_3352.f_31), 1, bParam1, bParam5);
			break;
	
		case -999503751:
			flag = func_374(hParam0, &(Global_1953292.f_3352.f_27), Global_1953292.f_3352.f_33, bParam1, bParam5);
			break;
	
		case -525676072:
			flag = func_374(hParam0, &(Global_1953292.f_3352.f_29), Global_1953292.f_3352.f_33.f_2, bParam1, bParam5);
			break;
	
		case 81053684:
			flag = func_374(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	
		case 119907797:
			flag = func_374(hParam0, &(Global_1953292.f_3352.f_32), 1, bParam1, bParam5);
			break;
	
		case 1388798186:
			flag = func_374(hParam0, &(Global_1953292.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
	
		default:
			if (func_108(hParam0, 160827531))
				flag = func_374(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	}

	if (!flag)
		return;

	func_375();

	if (func_376(hash) || hash != -999503751 && func_108(hParam0, -166674229))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_59(bParam5), hParam0, 0);

	func_128(hParam0, bParam3, bParam5);

	if (bParam4)
		func_377(true, hParam0);

	if (bParam2)
		func_378(false, false);

	return;
}

Hash func_236(int iParam0) // Position - 0x83BB Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_379();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_237(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x83E6 Hash - 0x815ADAC6 ^0x815ADAC6
{
	if (func_380(hParam0, hParam1))
	{
		func_381(hParam0, hParam1, true, bParam2, bParam3, bParam4);
		return;
	}

	return;
}

Hash func_238(Hash hParam0) // Position - 0x840B Hash - 0x10AF8248 ^0x31B33E5F
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1953292.f_83[i /*12*/].f_9 == hParam0)
			return func_382(i, 1);
	}

	return -358215195;
}

int func_239(Hash hParam0, int iParam1) // Position - 0x8446 Hash - 0xFF013CB6 ^0xFF013CB6
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
	
		case 735520874:
			return 5;
	
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

BOOL func_240(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8617 Hash - 0x6F6F94C ^0x832D60DF
{
	var unk;
	int num;
	int i;

	func_383();

	if (iParam2 == 39)
	{
		unk = { func_185(hParam0, true, 0) };
		iParam2 = func_239(func_238(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_231(32768) && iParam2 == 10)
		func_384(1108822547);

	num = 0;

	if (bParam4)
		num = 3;

	if (func_242(hParam0, true))
		func_385(&(Global_1953292.f_1557), &hParam0, iParam2, bParam5);

	if (bParam6)
		func_386(iParam2);

	func_387(iParam2, num);
	func_388(&Global_1953292.f_1557.f_1[iParam2 /*3*/], 4, 6);
	func_388(&Global_1953292.f_1676.f_1[iParam2 /*3*/], 4, 6);
	func_389(&(Global_1953292.f_1557), hParam0, iParam2, true, num);

	if (hParam1 == 0)
		hParam1 = Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1;

	Global_1953292.f_1557.f_1[iParam2 /*3*/] = hParam0;
	Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1 = func_390(hParam0, iParam2, hParam1);

	if (bParam3)
	{
		for (i = 0; i < Global_1953292.f_2938; i = i + 1)
		{
			if (Global_1953292.f_2938.f_2[i /*2*/] >= 0 && Global_1953292.f_2938.f_2[i /*2*/] < 39)
			{
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/] = 0;
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_370(func_382(Global_1953292.f_2938.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_241(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x87B6 Hash - 0x28B4597A ^0x28B4597A
{
	func_391(&(Global_1953292.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
	return;
}

BOOL func_242(Hash hParam0, BOOL bParam1) // Position - 0x87D3 Hash - 0x927056E ^0xFA981333
{
	!func_182(hParam0, 0);

	if (!bParam1 && hParam0 == joaat("clothing_item_hair_none") || hParam0 == joaat("clothing_item_beard_none"))
		return false;

	if (func_108(hParam0, 265372629))
		return true;

	return false;
}

BOOL func_243(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x881E Hash - 0x59CF58B3 ^0xFDEE716A
{
	var unk;
	var unk5;
	Hash hash;

	unk5 = { func_185(hParam0, bParam2, 0) };

	if (func_242(hParam0, false))
	{
		hash = func_392(unk5, unk5.f_4, bParam2, -1);
	
		if (hash != 0)
		{
			unk5 = { func_185(hash, bParam2, 0) };
			unk = { func_186(hash, unk5, unk5.f_4, bParam2) };
			return func_393(unk, false, bParam2);
		}
	
		return true;
	}

	unk = { func_186(hParam0, unk5, unk5.f_4, bParam2) };
	return func_393(unk, bParam1, bParam2);
}

int func_244(Hash hParam0) // Position - 0x88A7 Hash - 0x6D41B005 ^0x4F13B04D
{
	int num;
	int num2;

	num = 0;
	num2 = func_239(hParam0, 1);

	switch (hParam0)
	{
		case 1108822547:
			if (Global_1953292.f_1676.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/] || Global_1953292.f_1557.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/])
				num = 48;
			break;
	}

	return num;
}

void func_245(var uParam0, int iParam1) // Position - 0x890B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_246(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x891C Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_182(hParam0, 0))
		return 0;

	if (!bParam7 && func_183(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_186(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_59(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_59(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

struct<4> func_247(BOOL bParam0) // Position - 0x899B Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_59(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_186(joaat("character"), func_394(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_186(joaat("character"), func_394(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_186(joaat("character"), func_394(), joaat("SLOTID_NONE"), bParam0);
}

int func_248(int iParam0) // Position - 0x8A3B Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_249(int iParam0) // Position - 0x8A54 Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_248(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_133(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_395(ped))
		return true;

	return false;
}

int func_250() // Position - 0x8AB5 Hash - 0x38870270 ^0x38870270
{
	return Global_38.f_289.f_3222;
}

BOOL func_251() // Position - 0x8AC6 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1915656.f_22504.f_1;
}

BOOL func_252(int iParam0) // Position - 0x8AD7 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1051832.f_3648 && iParam0 != false;
}

void func_253(int iParam0) // Position - 0x8AEB Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1051832.f_3648 = Global_1051832.f_3648 - Global_1051832.f_3648 && iParam0;
	return;
}

void func_254(int iParam0) // Position - 0x8B0C Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1051832.f_3649 = iParam0;
	return;
}

BOOL func_255() // Position - 0x8B1D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22504;
}

void func_256() // Position - 0x8B2C Hash - 0x3C6E7275 ^0x31AA3C4E
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HandheldCatalogue"));
	return;
}

BOOL func_257() // Position - 0x8B3E Hash - 0x8D9A8CC3 ^0x8D9A8CC3
{
	return func_252(4);
}

int func_258(BOOL bParam0) // Position - 0x8B4B Hash - 0x3D1D4A2D ^0x4A9294C0
{
	Player playerIndex;
	Vehicle vehiclePedIsUsing;
	Hash entityModel;
	int scenarioPointTypePedIsUsing;

	if (!func_396())
		return 3;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("pause_menu")) > 0 && Global_1051832.f_3650 == 0 && !bParam0)
		return 45;

	if (Global_1915656.f_20638)
		return 10;

	if (Global_1051832.f_3738 != 0)
		return 0;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return 12;

	if (func_397(1106247680, 0) || PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_HOGTYING(Global_33))
		return 13;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33) || PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
		
			switch (entityModel)
			{
				case joaat("breach_cannon"):
				case joaat("gatling_gun"):
				case joaat("gatlingmaxim02"):
				case joaat("hotchkiss_cannon"):
					return 14;
			}
		}
	
		return 11;
	}

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) && !Global_1915656.f_22504.f_1)
		return 16;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 17;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
		return 18;

	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
	
		if (scenarioPointTypePedIsUsing != joaat("world_player_dynamic_kneel") && scenarioPointTypePedIsUsing != joaat("prop_player_dynamic_seat_chair_table") && scenarioPointTypePedIsUsing != joaat("prop_player_seat_chair_dynamic"))
			return 19;
	}

	if (func_398(255))
		return 3;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return 44;

	if (Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6 && Global_1108965.f_775.f_28 != 8)
		if (func_399(Global_1108965.f_775.f_28))
			return 36;
		else
			return 37;

	if (PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f)
		return 22;

	if (Global_1572887.f_72.f_40 >= 11 && Global_1572887.f_72.f_40 < 15)
		return 42;

	if (PED::IS_PED_FALLING(Global_33) || PED::IS_PED_CLIMBING(Global_33) || PED::_IS_PED_SLIDING(Global_33) || PED::IS_PED_SWIMMING(Global_33))
		return 15;

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		return 21;

	if (func_400())
		return 43;

	return -1;
}

void func_259(int iParam0) // Position - 0x8DAA Hash - 0x4270B4BA ^0x4270B4BA
{
	int num;

	if (!func_257())
		func_401(true);

	Global_1051832.f_3650 = iParam0;
	num = func_258(true);

	if (num != -1)
	{
		func_195(num);
		func_402(false);
	}
	else
	{
		func_402(true);
	}

	return;
}

BOOL func_260() // Position - 0x8DE8 Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_261(int iParam0) // Position - 0x8E04 Hash - 0x4D892971 ^0xA4BF78E0
{
	return func_265(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

BOOL func_262() // Position - 0x8E1E Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_263() // Position - 0x8E32 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_261(2);
}

BOOL func_264(BOOL bParam0) // Position - 0x8E40 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && bParam0 != false;
}

BOOL func_265(BOOL bParam0, int iParam1) // Position - 0x8E61 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

void func_266() // Position - 0x8E70 Hash - 0x5281CE7E ^0x311564BB
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_267(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8E87 Hash - 0xB9500D ^0xB9500D
{
	BOOL flag;

	flag = func_404(bParam2, func_403(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_268(int iParam0) // Position - 0x8EAF Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1896762.f_365 = iParam0;
	return;
}

int func_269(Player plParam0) // Position - 0x8EC0 Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

int func_270(Player plParam0, BOOL bParam1) // Position - 0x8EF0 Hash - 0x5FD9694A ^0x8A2402F0
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 != -1 && func_405(i, 64, player))
				if (bParam1)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return Global_1205938.f_1[i /*26*/].f_1;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return Global_1205938.f_1[i /*26*/].f_1;
		}
	}

	return -1;
}

int func_271(int iParam0) // Position - 0x8F7A Hash - 0x220835E3 ^0xD3CA642C
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

var func_272(int iParam0, int iParam1) // Position - 0x8F96 Hash - 0x42C305C ^0x81DF2F42
{
	return func_406(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_273(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0x8FB4 Hash - 0x60237433 ^0x1CACDDD0
{
	var unk;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
		return;

	iParam0 = 0;
	iParam0.f_1 = PLAYER::PLAYER_ID();
	iParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();

	if (!bParam20)
	{
		if (iParam0.f_18)
		{
			if (bParam21)
			{
				unk.f_12 = -1;
				unk.f_12.f_1 = -1;
				unk.f_14 = 255;
				unk.f_15 = 255;
				unk.f_20 = -1;
				unk = { iParam0 };
				unk.f_19 = uParam19;
				unk.f_20 = iParam0.f_2;
				func_407(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_274(int iParam0, var uParam1, var uParam2) // Position - 0x904E Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_275(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x906A Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_408(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_409(iParam0))
		return false;

	if (func_410(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_411(iParam0, 1) || func_412(32768))
		if (!func_411(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_413())
		return false;

	return true;
}

void func_276(int iParam0, int iParam1) // Position - 0x910C Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_277(Ped pedParam0) // Position - 0x9130 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_278() // Position - 0x914B Hash - 0x5516EB92 ^0x96671886
{
	Global_1913634.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913634.f_1581 = 1;
	return;
}

void func_279(int iParam0, Player plParam1) // Position - 0x9166 Hash - 0xD1944A1 ^0xD3AC39CA
{
	Player player;

	player = plParam1;
	Global_1148185[player /*10*/].f_7 = Global_1148185[player /*10*/].f_7 || iParam0;
	return;
}

BOOL func_280(var uParam0) // Position - 0x9189 Hash - 0x39705408 ^0x39705408
{
	return func_63(*uParam0, 2);
}

BOOL func_281(int iParam0) // Position - 0x9199 Hash - 0x5EE14A7B ^0x5EE14A7B
{
	if (iParam0 <= -1 || iParam0 >= 117)
		return false;

	return true;
}

BOOL func_282(int iParam0) // Position - 0x91B8 Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1902569 > iParam0;
}

void func_283(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x91C7 Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_33(iParam0))
		return;

	num = func_77(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, MISC::VAR_STRING(2, sParam1, iParam2));
	return;
}

void func_284(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9217 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_33(iParam0))
		return;

	num = func_77(iParam0);

	if (bParam1)
	{
		func_414(iParam0, 4);
	
		if (bParam3)
			func_149(num, true);
	
		func_150(num, true);
	}
	else
	{
		func_151(iParam0, 4);
		func_150(num, false);
	}

	return;
}

BOOL func_285() // Position - 0x926B Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

var func_286() // Position - 0x928C Hash - 0x1372AFBD ^0xAE723118
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

var func_287(BOOL bParam0, var uParam1, var uParam2) // Position - 0x92B6 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_288(var uParam0, int iParam1) // Position - 0x92CD Hash - 0xD05180BA ^0x39589262
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

void func_289(var uParam0, int iParam1) // Position - 0x9353 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_290(var uParam0, int iParam1) // Position - 0x938F Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_164(*uParam0);
	num2 = func_163(*uParam0);

	if (iParam1 < 1 || iParam1 > func_168(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_291(var uParam0, int iParam1) // Position - 0x93E2 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_292(var uParam0, int iParam1) // Position - 0x941D Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_293(var uParam0, int iParam1) // Position - 0x9456 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_294(Hash hParam0, int iParam1) // Position - 0x948E Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_182(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_415(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_416("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_417(&unk, i, num, num2))
			{
			}
			else if (!func_418(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_419(num);
				return true;
			}
		}
	
		func_419(num);
	}

	return false;
}

BOOL func_295(Hash hParam0) // Position - 0x9536 Hash - 0x52397408 ^0x52397408
{
	int num;
	int num2;
	int num3;

	if (!func_182(hParam0, 0))
		return false;

	num = func_121(hParam0);

	switch (num)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
	
		default:
			return false;
	}

	num2 = func_420(hParam0);

	if (!(num2 == 0))
	{
		num3 = func_421(&(Global_17418.f_55.f_664.f_1354.f_5), num2);
	
		if (num3 == -1)
			return true;
	}

	num2 = func_422(hParam0);
	num3 = func_421(&(Global_17418.f_55.f_664.f_1354.f_5), num2);

	if (num3 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num3 /*17*/];
}

int func_296(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x95F2 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_182(hParam0, 0))
		return 0;

	num = func_118(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_415(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_423(hParam0, false);
	}

	if (func_183(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_59(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_424(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_59(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_297(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x96B4 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_246(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_298(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x96CF Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_425(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

BOOL func_299(BOOL bParam0) // Position - 0x96F0 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_14() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_59(bParam0));
}

int func_300(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x970E Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return 1;

	if (!func_426(hParam0))
		return 0;

	if (!func_299(false))
		return 0;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, hParam0, iParam1, hParam2);
	return 1;
}

void func_301(Hash hParam0, int iParam1) // Position - 0x9749 Hash - 0xC6BCDC43 ^0xB7300BA8
{
	int ammo;
	int ammo2;
	int ammo3;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_33, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo3 = func_427(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, hParam0, ammo3);
	
		if (WEAPON::GET_MAX_AMMO(Global_33, &ammo2, hParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, hParam0) > ammo2)
			WEAPON::SET_PED_AMMO(Global_33, hParam0, ammo2);
	}

	return;
}

BOOL func_302(int iParam0) // Position - 0x97BB Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_428(&(Global_1956875.f_1565), iParam0, 1);
}

int func_303(BOOL bParam0) // Position - 0x97D1 Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

float func_304(Player plParam0) // Position - 0x97E3 Hash - 0x67CAB99C ^0xC9B69B05
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_429(2);
}

BOOL func_305(Hash hParam0, int iParam1) // Position - 0x97F9 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_306(Hash hParam0) // Position - 0x9813 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_307(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x9829 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_183(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_430(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_308(Hash hParam0, var uParam1) // Position - 0x9896 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_186(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

int func_309(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x98E9 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_431(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_433(func_432(num, hParam0, panParam1), num, panParam1);
	else
		return func_434(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

void func_310(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x9953 Hash - 0x4EE39F09 ^0x4C62B7DF
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

struct<4> func_311(BOOL bParam0) // Position - 0x99D1 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_59(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_186(923904168, func_247(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_186(923904168, func_247(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_186(923904168, func_247(bParam0), -740156546, false);
}

int func_312(Hash hParam0, BOOL bParam1) // Position - 0x9A72 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_121(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_435();
		else
			return 1;

	return 0;
}

struct<4> func_313(BOOL bParam0) // Position - 0x9AA9 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_59(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_186(271701509, func_247(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_186(271701509, func_247(bParam0), 12999093, false);
}

BOOL func_314(Hash hParam0, Hash hParam1) // Position - 0x9B13 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_121(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_436(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_315(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x9B80 Hash - 0x113CD144 ^0x113CD144
{
	return func_437(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_316(Hash hParam0) // Position - 0x9B96 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_182(hParam0, 0))
	{
		if (func_108(hParam0, -1242251796))
		{
			if (func_108(hParam0, 2060589226))
				return func_438();
		
			return func_439();
		}
		else if (func_108(hParam0, 1919582297))
		{
			return func_329();
		}
		else if (func_108(hParam0, 1647670816))
		{
			return func_440();
		}
		else if (func_108(hParam0, 1147021565))
		{
			return func_332();
		}
	}

	if (Global_1940085.f_12)
		return func_439();
	else
		return func_332();

	return func_332();
}

int func_317() // Position - 0x9C38 Hash - 0x9F572D68 ^0x2EEFC18B
{
	return 225949718;
}

BOOL func_318(Hash hParam0) // Position - 0x9C45 Hash - 0x6FB27747 ^0x2F844672
{
	return hParam0 == 1401465909 || hParam0 == joaat("kit_collectors_bag");
}

int func_319() // Position - 0x9C63 Hash - 0x9F572D68 ^0x8D56AEC6
{
	return 1039657088;
}

BOOL func_320(Hash hParam0) // Position - 0x9C70 Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_108(hParam0, 1147021565) || func_108(hParam0, -136654233) || func_108(hParam0, -524514947) || func_108(hParam0, -1238310989) || func_108(hParam0, 1765172170) || func_108(hParam0, 1490540191) || func_108(hParam0, 1573112293) || func_108(hParam0, -1242251796) || func_108(hParam0, 1919582297) || func_108(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_321() // Position - 0x9D32 Hash - 0x9F572D68 ^0xA5345381
{
	return 1039392896;
}

int func_322() // Position - 0x9D3F Hash - 0x9F572D68 ^0x10089971
{
	return 1039645941;
}

int func_323() // Position - 0x9D4C Hash - 0x9F572D68 ^0x84B652A2
{
	return 1039907016;
}

int func_324() // Position - 0x9D59 Hash - 0x9F572D68 ^0xB45F52D0
{
	return 1039902864;
}

int func_325() // Position - 0x9D66 Hash - 0x9F572D68 ^0x32AFB64F
{
	return 955497620;
}

int func_326() // Position - 0x9D73 Hash - 0x9F572D68 ^0x62D4A844
{
	return 1022861303;
}

int func_327() // Position - 0x9D80 Hash - 0x9F572D68 ^0xCF492FF4
{
	return 1039902720;
}

int func_328() // Position - 0x9D8D Hash - 0x9F572D68 ^0x2787CCF0
{
	return 972554239;
}

int func_329() // Position - 0x9D9A Hash - 0x9F572D68 ^0x5429ED30
{
	return 905165831;
}

int func_330() // Position - 0x9DA7 Hash - 0x9F572D68 ^0x3F507FB0
{
	return 1038298244;
}

int func_331() // Position - 0x9DB4 Hash - 0x9F572D68 ^0x3C6E2171
{
	return 1037713383;
}

int func_332() // Position - 0x9DC1 Hash - 0x9F572D68 ^0x6DDEACEC
{
	return 1039645911;
}

int func_333() // Position - 0x9DCE Hash - 0x9F572D68 ^0x30183CC8
{
	return 1039655040;
}

BOOL func_334(int iParam0) // Position - 0x9DDB Hash - 0xA059D395 ^0xE5C5C571
{
	return func_265(Global_1940085.f_7, iParam0);
}

BOOL func_335(BOOL bParam0) // Position - 0x9DEF Hash - 0x4C19DF92 ^0x98E40E33
{
	Entity entity;

	if (func_334(1))
	{
		if (bParam0)
			func_120("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_334(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			entity = func_441(Global_33);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_120("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return false;
				}
			}
		
			func_120("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return false;
	}

	if (func_334(4194304))
		return false;

	return true;
}

BOOL func_336(BOOL bParam0, BOOL bParam1) // Position - 0x9E82 Hash - 0xDC513764 ^0xC4FF0532
{
	var unk;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		PED::_0x6B67320E0D57856A(Global_33, &unk, 2, false);
	
		if (bParam1)
		{
			switch (unk.f_1)
			{
				case 4:
					return true;
			
				default:
				
			}
		}
	
		if (bParam0)
			func_120("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_337(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x9ED2 Hash - 0xB3520FCB ^0xE74487EC
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
			return false;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				if (bParam0)
					func_120("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return false;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_120("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return false;
		}
	
		if (!func_154(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
			if (bParam2 || VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_33)
				return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return false;
	}

	return true;
}

BOOL func_338(Ped pedParam0) // Position - 0x9FBF Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_339(Ped pedParam0, BOOL bParam1) // Position - 0x9FDC Hash - 0x6BE4D4B ^0xC7F6BBCD
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

int func_340(var uParam0, int iParam1) // Position - 0xA032 Hash - 0x412E6219 ^0x412E6219
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!func_91(*uParam0))
		return -1;

	num = -1;
	num6 = func_442(*uParam0);

	switch (*uParam0)
	{
		case 3:
			num4 = func_445(num6);
			num5 = func_446(num4);
		
			if (num5 == -1)
			{
			}
			else
			{
				num = func_447(num5);
			}
			break;
	
		case 4:
			num3 = num6;
			num2 = func_443(num3);
		
			if (num2 == -1)
			{
			}
			else
			{
				num = func_444(num2);
			}
			break;
	
		default:
			break;
	}

	return num;
}

BOOL func_341(int iParam0, int iParam1, BOOL bParam2) // Position - 0xA0B5 Hash - 0x891BBFA0 ^0xB8158E5D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_343(func_448(iParam0, iParam1, bParam2)));
}

struct<8> func_342(int iParam0, int iParam1) // Position - 0xA0D0 Hash - 0x21337FB2 ^0x21337FB2
{
	return func_448(iParam0, iParam1, true);
}

char* func_343(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xA0E1 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_344(int iParam0, Hash hParam1) // Position - 0xA0F5 Hash - 0x516C6848 ^0x6761C278
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && Global_1220826.f_48[iParam0 /*21*/].f_18[i] == hParam1)
			return true;
	}

	return false;
}

BOOL func_345(int iParam0) // Position - 0xA141 Hash - 0x2EBFDD04 ^0x2EBFDD04
{
	return iParam0 >= 0 && iParam0 < 50;
}

BOOL func_346(int iParam0) // Position - 0xA157 Hash - 0x6642AD8B ^0xEA8BECFA
{
	float num;
	int i;
	int j;

	if (Global_17418.f_2992 == 1)
	{
		if (iParam0 == -1)
			return false;
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (Global_17418.f_2992.f_1[i /*5*/].f_4 == 0)
			{
			}
			else if (_IS_NULL_VECTOR(Global_17418.f_2992.f_1[i /*5*/].f_1))
			{
			}
			else
			{
				for (j = 0; j <= 3; j = j + 1)
				{
					if (_IS_NULL_VECTOR(Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1))
					{
					}
					else
					{
						num = func_449(Global_17418.f_2992.f_1[i /*5*/].f_1, Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1);
					
						if (num < 300f)
							return false;
					}
				}
			}
		}
	}

	if (func_450(4))
		return false;

	if (func_349())
		return true;

	if (func_451())
		return false;

	if (func_452(1, 255))
		return false;

	if (func_91(func_453()) && Global_1220826.f_1.f_20 != 3)
		return false;

	return true;
}

BOOL func_347(int iParam0) // Position - 0xA268 Hash - 0xB6416185 ^0xCE440AEC
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_172(Global_1220826.f_48[iParam0 /*21*/].f_18[i], 1))
			return true;
	}

	return false;
}

BOOL func_348(int iParam0) // Position - 0xA2B6 Hash - 0xA37D16B6 ^0x8D2EEA9D
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_454(Global_1220826.f_48[iParam0 /*21*/].f_18[i]))
			return true;
	}

	return false;
}

BOOL func_349() // Position - 0xA303 Hash - 0x16C45944 ^0x16C45944
{
	return func_455(func_90(0));
}

int func_350() // Position - 0xA314 Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_456(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_456(weaponHash) || WEAPON::_IS_WEAPON_LASSO(weaponHash))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

int func_351(Hash hParam0) // Position - 0xA407 Hash - 0x4DAA6E6F ^0x4DAA6E6F
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

void func_352(int iParam0, BOOL bParam1, int iParam2) // Position - 0xA5E2 Hash - 0xA15BFFCE ^0xA15BFFCE
{
	Hash hash;
	int num;

	hash = func_457(iParam0);
	num = func_351(hash);

	if (num != iParam0)
		func_458(num, 4);

	if (!func_459(iParam0))
		return;

	if (func_460(iParam0))
		return;

	func_458(iParam0, 4);
	func_461(iParam0, bParam1);

	if (!func_462(iParam0))
		func_463(iParam0, true, false);

	if (bParam1)
		if (!func_51(0, false, true))
			func_53(true, 6);

	return;
}

BOOL func_353(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xA658 Hash - 0x1E0E4BC8 ^0xFC328A61
{
	if (TASK::CAN_START_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3))
	{
		TASK::START_TASK_ITEM_INTERACTION(pedParam0, hParam1, hParam2, iParam3, 0, -1082130432);
		Global_1940085.f_26 = 1;
		return true;
	}

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return false;
}

void func_354(Hash hParam0) // Position - 0xA691 Hash - 0xD8F93303 ^0x277E9FFE
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
	BOOL flag2;
	BOOL flag3;

	outData.f_1 = 20;

	if (func_108(hParam0, 1573112293) || func_108(hParam0, 672467738) || func_108(hParam0, -550842268))
		flag = true;

	if (func_118(hParam0) == joaat("consumable"))
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
				health = func_464(0, outData2.f_2);
				func_55(outData2.f_2);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_464(2, outData2.f_2);
				func_56(outData2.f_2, false);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_464(1, outData2.f_2);
				func_465(outData2.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_466(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_467(0, num, true, true, flag);
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_466(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_467(2, num2, true, true, flag);
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_466(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_467(1, num3, true, true, flag);
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_468(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_469(19, num4, true, true);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_468(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_469(20, num4, true, true);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_468(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_469(18, num4, true, true);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_468(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_469(0, num4, true, true);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_468(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_469(2, num4, true, true);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_468(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_469(1, num4, true, true);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_470(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3 || func_108(hParam0, -537818634))
			func_472(func_471(joaat("medicine_items_used")), 1);
	
		if (func_108(hParam0, -1457797660))
			func_472(func_471(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_472(func_471(joaat("DEADEYE_ITEMS_USED")), 1);
	
		switch (hParam0)
		{
			case -1735850413:
			case -241345764:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_SaloonSnack_00"), 1);
				break;
		}
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

int func_355(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xA9D5 Hash - 0x6E56F3C0 ^0x23695AE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_182(hParam0, 0))
		return 0;

	if (hParam3 == -142743235)
		if (func_473(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_415(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_474(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return 0;
	}

	if (!func_172(hParam0, 1))
		return 0;

	statId = { func_475(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_296(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_296(hParam0, false, false, false) - iParam1 < 0)
		{
			func_355(hParam0, func_296(hParam0, false, false, false), bParam2, hParam3);
			return 0;
		}
	}

	if (func_118(hParam0) == joaat("WEAPON"))
	{
		if (!func_476(hParam0, iParam1, false, hParam3))
			return 0;
	}
	else if (!func_104(hParam0, iParam1, hParam3, bParam2, false))
	{
		return 0;
	}
	else
	{
		unk2 = { func_185(hParam0, false, 0) };
	
		if (func_299(false) && unk2.f_4 == joaat("SLOTID_SATCHEL"))
			func_477(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_299(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_474(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return 1;
}

void func_356(int iParam0) // Position - 0xAB87 Hash - 0xF3266748 ^0xE0F5A24F
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_357(int iParam0) // Position - 0xABCD Hash - 0xEA95855 ^0xEA95855
{
	return Global_1953292.f_595[iParam0] > 0;
}

void func_358(int iParam0) // Position - 0xABE2 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1953292.f_595[iParam0] = Global_1953292.f_595[iParam0] + 1;
	return;
}

BOOL func_359() // Position - 0xAC02 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1953292.f_3503)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1953292.f_3501) < 1250)
		return true;

	if (func_478())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		return true;

	return false;
}

BOOL func_360(Hash hParam0) // Position - 0xAC4C Hash - 0xF685E7E9 ^0xFF8FA3AF
{
	Hash hash;

	hash = func_121(hParam0);

	if (hash == 81053684 || hash == -525676072 || func_108(hParam0, 160827531) || func_108(hParam0, -1303648999))
		return 1;

	return 0;
}

void func_361(var uParam0, int iParam1) // Position - 0xAC9C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_362(Hash hParam0) // Position - 0xACAD Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_368(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_363(var uParam0) // Position - 0xACD7 Hash - 0xA1F57C1B ^0xFF498BD3
{
	if (-1829635046 == func_479(81053684))
		if (func_368(uParam0))
			return true;
	else if (func_480(-525676072, uParam0) || func_108(func_481(1742327865), -1303648999))
		if (func_368(uParam0))
			return true;

	return false;
}

Hash func_364() // Position - 0xAD34 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_350())
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

Hash func_365() // Position - 0xAD8B Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_350())
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

Hash func_366() // Position - 0xADE2 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_350())
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

Hash func_367() // Position - 0xAE39 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_350())
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

BOOL func_368(var uParam0) // Position - 0xAE90 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_480(81053684, uParam0))
		return true;

	if (func_480(-525676072, uParam0))
		return true;

	return false;
}

void func_369(BOOL bParam0) // Position - 0xAEBD Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

void func_370(int iParam0, int iParam1, int iParam2) // Position - 0xAED5 Hash - 0x8A858A95 ^0x34E316B1
{
	Global_1953292.f_83[func_239(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_239(iParam0, 1) /*12*/].f_11 - Global_1953292.f_83[func_239(iParam0, 1) /*12*/].f_11 && iParam1;
	return;
}

int func_371(int iParam0, BOOL bParam1) // Position - 0xAF14 Hash - 0x402BF0A8 ^0xF803E7D2
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1953292.f_3352.f_28;
	
		case -1719060085:
			return Global_1953292.f_3352.f_31;
	
		case -999503751:
			if (bParam1)
				return Global_1953292.f_3352.f_27;
			else
				return func_482();
			break;
	
		case -525676072:
			return Global_1953292.f_3352.f_29;
	
		case 81053684:
			return Global_1953292.f_3352.f_30;
	
		case 119907797:
			return Global_1953292.f_3352.f_32;
	
		case 1388798186:
			return Global_1953292.f_3352.f_33.f_7;
	}

	return 0;
}

int func_372(int iParam0, BOOL bParam1) // Position - 0xAFB7 Hash - 0x14DDA26B ^0x1E3E4A18
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1953292.f_3352.f_33.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1953292.f_3352.f_33;
			break;
	
		case -525676072:
			num = Global_1953292.f_3352.f_33.f_2;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		case 119907797:
			num = 1;
			break;
	
		case 1388798186:
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

BOOL func_373(Hash hParam0, var uParam1) // Position - 0xB066 Hash - 0x4A27386E ^0x953F277B
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1953292.f_3352.f_26)
	{
		if (hParam0 == Global_1953292.f_3352[*uParam1])
			return 1;
	
		*uParam1 = *uParam1 + 1;
	}

	return 0;
}

BOOL func_374(Hash hParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xB0A6 Hash - 0x1A1DEF68 ^0x4083C3B3
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1953292.f_3352.f_26 >= 25)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_373(hash, &unk))
		return 0;

	if (!func_483(hParam0, 0))
		return 0;

	if (bParam3 && !func_484(hParam0, false, bParam4))
		return 0;

	Global_1953292.f_3352[Global_1953292.f_3352.f_26] = hash;
	Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

void func_375() // Position - 0xB137 Hash - 0xC3588B6F ^0x86C68CA5
{
	int i;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		Global_17418.f_55.f_664[i] = Global_1953292.f_3352[i];
	}

	Global_17418.f_55.f_664.f_27 = Global_1953292.f_3352.f_27;
	Global_17418.f_55.f_664.f_28 = Global_1953292.f_3352.f_28;
	Global_17418.f_55.f_664.f_29 = Global_1953292.f_3352.f_29;
	Global_17418.f_55.f_664.f_30 = Global_1953292.f_3352.f_30;
	Global_17418.f_55.f_664.f_31 = Global_1953292.f_3352.f_31;
	Global_17418.f_55.f_664.f_32 = Global_1953292.f_3352.f_32;
	Global_17418.f_55.f_664.f_26 = Global_1953292.f_3352.f_26;
	return;
}

BOOL func_376(Hash hParam0) // Position - 0xB1F5 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_486(func_485(hParam0));
}

void func_377(BOOL bParam0, Hash hParam1) // Position - 0xB207 Hash - 0x147A58CF ^0x6B535141
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	int num;
	int num2;
	Hash hash;
	Hash hash2;
	const char* str5;

	if (!func_182(hParam1, 0))
		return;

	num2 = -1;

	if (!func_487(hParam1, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	if (bParam0)
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_488(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_489(4, num2))
		{
			str2 = "OUTFIT_STORED_LITERAL";
			str4 = func_343(func_490(num2));
		}
		else
		{
			hash = func_491(hParam1);
		
			if (func_182(hash, 0))
				hParam1 = hash;
		
			str2 = "ITEM_STORED";
			str4 = MISC::VAR_STRING(0, func_492(hParam1, false));
		}
	}
	else
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_488(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_489(4, num2))
		{
			str2 = "OUTFIT_REMOVED_LITERAL";
			str4 = func_343(func_490(num2));
		}
		else
		{
			hash2 = func_491(hParam1);
		
			if (func_182(hash2, 0))
				hParam1 = hash2;
		
			str2 = "ITEM_REMOVED";
			str4 = MISC::VAR_STRING(0, func_492(hParam1, false));
		}
	}

	str5 = func_493(MISC::VAR_STRING(10, str2, str4), num);
	func_494(str5, str.f_1, MISC::GET_HASH_KEY(str), 0, num, "Transaction_Feed_Sounds", str3, 0, true);
	return;
}

void func_378(BOOL bParam0, BOOL bParam1) // Position - 0xB36A Hash - 0xB768D4F2 ^0xD5E3296F
{
	if (bParam1)
		func_495();

	if (bParam0)
	{
		func_224(8);
		func_224(512);
	}
	else
	{
		func_224(8);
		func_224(16);
	}

	return;
}

int func_379() // Position - 0xB39C Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_380(Hash hParam0, Hash hParam1) // Position - 0xB3AA Hash - 0xFF44AA17 ^0xFF44AA17
{
	Hash hash;
	Hash hash2;

	hash = func_121(hParam1);
	hash2 = func_121(hParam0);

	if (hash == hash2)
		return true;

	if (func_496(hParam1) && func_496(hParam0))
		return true;

	return false;
}

void func_381(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB3E6 Hash - 0x786470E ^0x786470E
{
	func_497(hParam0, 0, 0, bParam3, bParam5);
	func_235(hParam1, true, bParam2, bParam4, bParam3, bParam5);
	return;
}

int func_382(int iParam0, int iParam1) // Position - 0xB409 Hash - 0xE1D12727 ^0xE86A8679
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
			return 735520874;
	
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

void func_383() // Position - 0xB658 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1953292.f_1557 = Global_1953292.f_1676;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1953292.f_1557.f_1[i /*3*/] = { Global_1953292.f_1676.f_1[i /*3*/] };
	}

	return;
}

void func_384(int iParam0) // Position - 0xB69F Hash - 0x65A082AE ^0x65A082AE
{
	func_370(iParam0, 8, 6);
	return;
}

void func_385(Hash hParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0xB6B0 Hash - 0xD9092964 ^0xFDAEF5
{
	int num;
	Hash hash;

	if (bParam3)
	{
		if (*uParam1 == 832230214 || *uParam1 == 30652334 || *uParam1 == 750544038)
		{
			num = 16;
		
			if (func_121(hParam0->f_1[num /*3*/]) != 1882579758)
				return;
		
			hash = func_498(hParam0->f_1[num /*3*/]);
		
			if (hash != 0 && hash != Global_1953292.f_83[iParam2 /*12*/])
			{
				*uParam1 = hash;
				return;
			}
		}
	
		if (!func_499(*uParam1, iParam2))
		{
			*uParam1 = Global_1953292.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}

	*uParam1 = Global_1953292.f_83[iParam2 /*12*/];
	return;
}

void func_386(int iParam0) // Position - 0xB75E Hash - 0x20214C72 ^0x20214C72
{
	func_500(&(Global_1953292.f_2938), iParam0);
	return;
}

void func_387(int iParam0, int iParam1) // Position - 0xB773 Hash - 0xDE0FB67D ^0xDE0FB67D
{
	if (iParam1 & 8 != 0)
		return;

	func_501(&(Global_1953292.f_2938), iParam0, iParam1);
	return;
}

void func_388(Hash hParam0, int iParam1, int iParam2) // Position - 0xB796 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_389(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xB7A9 Hash - 0xF31ECD9B ^0x1CF13D77
{
	Hash hash;
	BOOL flag;

	hash = hParam1;
	flag = func_242(hash, true);

	if (bParam3 && func_108(hParam0->f_1[iParam2 /*3*/], 343781202))
		func_502(hParam0, hParam0->f_1[iParam2 /*3*/]);

	switch (func_382(iParam2, 1))
	{
		case -1944638739:
			func_518(hParam0, flag, hash, iParam4);
			break;
	
		case -1197751823:
			func_511(hParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_503(hParam0, hash, iParam2, iParam4);
			break;
	
		case -893163968:
			func_509(hParam0, flag, hash, iParam4);
			break;
	
		case -450913544:
			func_510(hParam0, flag, hash, iParam2, iParam4);
			break;
	
		case -426430150:
			func_515(hParam0, flag, iParam4);
			break;
	
		case -338487716:
			func_505(hParam0, hash, flag, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_514(hParam0, flag, hash, iParam4);
			break;
	
		case 304805134:
			func_512(hParam0, flag, hash, iParam4);
			break;
	
		case 788010710:
			func_516(hParam0, flag, hash, iParam4);
			break;
	
		case 1108822547:
			func_506(hParam0, flag, hash, iParam4);
			break;
	
		case 1145151482:
			func_513(hParam0, flag, hash, iParam4);
			break;
	
		case 1250092473:
			func_508(hParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_504(hParam0, hash, iParam2);
			break;
	
		case 1742327865:
			func_507(hParam0, flag, hash, iParam4);
			break;
	
		case 1958421083:
			func_517(hParam0, flag, hash, iParam4);
			break;
	}

	return;
}

Hash func_390(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xB942 Hash - 0xA84BB00 ^0xFB9157AD
{
	BOOL flag;

	flag = false;

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	if (hParam2 == 289238755)
		return 289238755;

	if (hParam2 != 0 && func_519(hParam0, flag, hParam2) != -1)
		return hParam2;

	if (func_520(hParam0, func_382(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_391(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xB9A3 Hash - 0xDD68C02C ^0xDD68C02C
{
	int i;
	int num;
	BOOL flag;
	BOOL flag2;

	if (*iParam0 <= 0)
		return;

	num = -1;
	flag = false;

	if (bParam5)
	{
		num = func_521(Global_1953292.f_1676);
	
		if (bParam4)
			bParam4 = num == -1;
	}

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (func_231(4718592) && !func_522(func_121(Global_1953292.f_1557.f_1[iParam0->f_2[i /*2*/] /*3*/])))
		{
		}
		else
		{
			func_523(iParam0->f_2[i /*2*/], bParam1, bParam2, num);
			flag = true;
		}
	}

	if (!flag)
		return;

	if (bParam4)
	{
		flag2 = false;
	
		if (Global_1953292.f_1676 != 491602716 || !func_489(2, -1))
			flag2 = true;
		else if (!func_108(Global_1953292.f_1676, -166674229) && Global_1953292.f_1676 != 491602716 || !func_489(2, -1))
			flag2 = true;
	
		if (flag2)
		{
			Global_1953292.f_1676 = 491602716;
			Global_1953292.f_1557 = 491602716;
			func_524(491602716, 1, true);
			func_525(-1, false, 6);
			func_124(27, 0, 65536, 0, false);
		}
	}

	if (bParam3)
		func_378(false, true);

	return;
}

Hash func_392(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0xBAE2 Hash - 0x67107E64 ^0x67107E64
{
	return func_526(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_393(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xBAF6 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_299(false))
		return func_527(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_315(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_59(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

struct<4> func_394() // Position - 0xBB6A Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_395(Ped pedParam0) // Position - 0xBB76 Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_528(Global_33, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, pedParam0))
		return true;

	return false;
}

BOOL func_396() // Position - 0xBBAE Hash - 0xF83C2FD8 ^0xF6BA78F9
{
	int num;
	int num2;
	int num3;
	int num4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("shop_anywhere_handheld")))
	{
		func_195(2);
		return false;
	}

	if (!func_262())
	{
		func_195(9);
		return false;
	}

	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_195(3);
		return false;
	}

	num = { func_90(0) };

	if (func_91(num))
	{
		num2 = -1;
	
		switch (num)
		{
			case 3:
			case 4:
				num4 = func_340(&num, 0);
			
				if (num4 != -1)
					if (func_341(num4, 461218520, false))
						num2 = 46;
				break;
		
			case 6:
				num3 = func_270(PLAYER::PLAYER_ID(), false);
			
				if (num3 != -1)
					num2 = func_529(num3);
				break;
		}
	
		if (num2 != -1)
		{
			func_195(num2);
			return false;
		}
	}

	if (func_530())
	{
		func_195(4);
		return false;
	}

	if (func_452(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051832.f_92[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_195(5);
		return false;
	}

	if (func_531(131072, 255))
	{
		func_195(7);
		return false;
	}

	if (func_532())
	{
		func_195(8);
		return false;
	}

	return true;
}

BOOL func_397(int iParam0, int iParam1) // Position - 0xBCE2 Hash - 0x3ABC69C ^0xFF17F115
{
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || func_154(iParam1, 1024) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, iParam0, iParam1) > 0)
		return true;

	return false;
}

BOOL func_398(Player plParam0) // Position - 0xBD2D Hash - 0xF72359AA ^0x3B19EB24
{
	if (plParam0 == 255)
		return Global_1102813.f_3 & 32 != 0;

	return func_531(32, plParam0);
}

BOOL func_399(int iParam0) // Position - 0xBD52 Hash - 0x77815697 ^0x77815697
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

BOOL func_400() // Position - 0xBD7A Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_401(BOOL bParam0) // Position - 0xBD9F Hash - 0xF247C818 ^0xF247C818
{
	if (bParam0)
		func_533(4);
	else
		func_253(4);

	return;
}

void func_402(BOOL bParam0) // Position - 0xBDB9 Hash - 0x97FAFE1E ^0x34EAEBB2
{
	if (!(bParam0 && Global_1915656.f_22504))
		if (bParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"));
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"), 0);

	Global_1915656.f_22504 = bParam0;
	return;
}

BOOL func_403() // Position - 0xBDF9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20643;
}

BOOL func_404(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xBE08 Hash - 0x13FC6F30 ^0x85A59BCD
{
	Player player;
	Ped ped;
	BOOL isEntityDead;
	BOOL isPedIncapacitated;
	int num;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
		return 0;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-496459706))
		return 0;

	player = Global_1295666.f_149[Global_1295666];
	ped = Global_1295666.f_3;
	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(ped);

	if (isEntityDead || isPedIncapacitated)
	{
		if (!bParam5)
			return 0;
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
		
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
				return 0;
		}
	
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(player))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(ped, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (!bParam1)
	{
		if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
			return 0;
	
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
			return 0;
	}

	if (func_534())
		return 0;

	if (Global_15)
		return 0;

	if (!bParam2 && Global_1940085.f_10 || Global_1940085.f_11 || Global_1940085.f_12 || Global_1940085.f_13)
		return 0;

	if (!bParam3)
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (Global_1235687.f_9479 != -1)
			return 0;
	
		if (Global_1138673[num /*56*/].f_34 & 1 != 0 && Global_1138673[num /*56*/].f_34 & 2 == 0)
			return 0;
	
		if (Global_1140770.f_293)
			return 0;
	
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
			return 0;
		else if (Global_1572887.f_72.f_40 > 15)
			return 0;
	}

	if (!bParam8)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
				return 0;
		
			if (Global_1048581)
				return 0;
		
			if (Global_1048585)
				return 0;
		}
	}

	return 1;
}

BOOL func_405(int iParam0, int iParam1, Player plParam2) // Position - 0xC02F Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_265(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

var func_406(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0xC049 Hash - 0x63C3F71D ^0x3019B977
{
	var value;
	Player bitIndex;
	int i;
	BOOL flag;
	BOOL flag2;
	Player player;
	int num;
	BOOL flag3;
	Volume volume;
	BOOL flag4;
	Player player2;
	Ped playerPed;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&value);

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return value;

	if (func_535() != 0)
	{
		bitIndex = PLAYER::PLAYER_ID();
	
		if (bitIndex >= 0 && bitIndex < 32)
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, bitIndex);
	
		return value;
	}

	i = 0;
	flag = false;
	flag2 = false;
	player = Global_1295666.f_5;
	num = Global_1295666.f_10;
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_536());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_536());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_536());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_537(PLAYER::GET_PLAYER_TEAM(player));

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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295666.f_149[i]))
		{
			player2 = Global_1295666.f_149[i];
			flag = false;
			flag2 = false;
		
			if (flag4 & true != 0 && player2 == player)
				flag = true;
		
			if (func_538(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_539(i) != 1)
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
					if (GANG::NETWORK_GET_GANG_ID(player2) != num)
						flag = true;
		
			if (!flag)
				if (flag4 & 65536 != 0)
					if (!func_540(player2))
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

int func_407(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0xC3DC Hash - 0xDF93FBF9 ^0x193910B6
{
	if (!func_541(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_408(int iParam0, int iParam1) // Position - 0xC40C Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_409(int iParam0) // Position - 0xC424 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_411(iParam0, 4))
		return false;

	return true;
}

BOOL func_410(int iParam0) // Position - 0xC43B Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_411(int iParam0, int iParam1) // Position - 0xC507 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_412(int iParam0) // Position - 0xC520 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_413() // Position - 0xC533 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_262())
		return false;

	return Global_1904402.f_8873;
}

void func_414(int iParam0, int iParam1) // Position - 0xC54E Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

Hash func_415(Hash hParam0, int iParam1) // Position - 0xC581 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_182(hParam0, 0))
		return 0;

	num = func_118(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_108(hParam0, 1399091007))
	{
		func_542(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_416(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xC5FB Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_59(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_417(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC622 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_418(Hash hParam0) // Position - 0xC65D Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_419(int iParam0) // Position - 0xC678 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_420(Hash hParam0) // Position - 0xC699 Hash - 0xB8EC44B7 ^0x72487142
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_421(var uParam0, int iParam1) // Position - 0xC77C Hash - 0x6AC2726E ^0xDB215040
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*17*/].f_1 == -1)
			break;
	
		if (uParam0->[i /*17*/].f_16 == iParam1)
			return i;
	}

	return -1;
}

int func_422(Hash hParam0) // Position - 0xC7B9 Hash - 0xD114ACC1 ^0x3428F85C
{
	int num;

	num = func_121(hParam0);

	switch (num)
	{
		case -636562458:
			return -875805376;
	
		case 252325943:
			return -768760704;
	
		case 829857647:
			return -340627321;
	
		case 1115104855:
			return -2118203104;
	
		case 1216664798:
			return 1015239729;
	
		case 1341188928:
			return -2056583192;
	
		default:
		
	}

	return 0;
}

int func_423(Hash hParam0, BOOL bParam1) // Position - 0xC826 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_543(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_544(&unk, func_311(false));

	if (!func_545(&unk, &num, &num2, false))
		return 0;

	func_419(num);
	return num2;
}

struct<4> func_424(Hash hParam0, BOOL bParam1) // Position - 0xC885 Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_185(hParam0, bParam1, 0) };
	return func_186(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_425(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xC8AA Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_59(false);
	*panParam1 = { func_186(hParam0, func_311(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_426(Hash hParam0) // Position - 0xC8EF Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

int func_427(int iParam0, int iParam1) // Position - 0xC8FD Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_428(int* piParam0, int iParam1, int iParam2) // Position - 0xC913 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(piParam0->[iParam1 / 31], iParam1 % 31);
}

int func_429(int iParam0) // Position - 0xC94A Hash - 0xF103C6A6 ^0xF103C6A6
{
	switch (iParam0)
	{
		case 0:
			return func_95(2) * 2;
	
		case 1:
			return func_546(2) * 2;
	
		case 2:
			return func_97(2) * 2;
	
		default:
		
	}

	return -1;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_430(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0xC98B Hash - 0x8E6DB586 ^0xC3CF8308
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_547(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_394() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

BOOL func_431(Hash hParam0, Any* panParam1) // Position - 0xCAA2 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_548(panParam1->f_8, hParam0, num, 2048) || func_548(panParam1->f_8, hParam0, num, 32768) || func_548(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_548(panParam1->f_8, hParam0, num, 4) || func_548(panParam1->f_8, hParam0, num, 256) || func_548(panParam1->f_8, hParam0, num, 65536) || func_548(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_548(panParam1->f_8, hParam0, num, 1) || func_548(panParam1->f_8, hParam0, num, 8) || func_548(panParam1->f_8, hParam0, num, 65536) || func_548(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_548(panParam1->f_8, hParam0, num, 1) || func_548(panParam1->f_8, hParam0, num, 16) || func_548(panParam1->f_8, hParam0, num, 2) || func_548(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_548(panParam1->f_8, hParam0, num, 8) || func_548(panParam1->f_8, hParam0, num, 4096) || func_548(panParam1->f_8, hParam0, num, 256) || func_548(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_432(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xCC78 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_433(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xCC8F Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_549(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_549(iParam1, 2, 0, 0);
	return -1;
}

int func_434(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0xCCD8 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_549(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

int func_435() // Position - 0xCCF4 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_550(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_436(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0xCD11 Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_437(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xCD44 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_59(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_438() // Position - 0xCD7E Hash - 0x9F572D68 ^0xCC7CA376
{
	return 1037647863;
}

int func_439() // Position - 0xCD8B Hash - 0x9F572D68 ^0x8E00D7CB
{
	return 1037746167;
}

int func_440() // Position - 0xCD98 Hash - 0x9F572D68 ^0x32E0A00A
{
	return 1035451607;
}

Entity func_441(Ped pedParam0) // Position - 0xCDA5 Hash - 0x3D354C79 ^0x6A3F9034
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

int func_442(var uParam0, var uParam1) // Position - 0xCE05 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_551(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_443(int iParam0) // Position - 0xCE31 Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_552(&num2, iParam0))
		num = func_553() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_444(int iParam0) // Position - 0xCE5C Hash - 0xEEAE9B95 ^0xC5F953AD
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_1;
}

int func_445(int iParam0) // Position - 0xCE78 Hash - 0xB8EC44B7 ^0xE8991785
{
	switch (iParam0)
	{
		case 0:
			return 1336837986;
	
		case 1:
			return 2124631622;
	
		case 2:
			return joaat("ROBBERY_TRAIN");
	
		case 3:
			return 1443764480;
	
		case 4:
			return -668110249;
	
		case 5:
			return -1381389849;
	
		case 6:
			return 536699577;
	
		case 7:
			return 541147288;
	
		case 8:
			return 377122918;
	
		case 9:
			return 1158195437;
	
		case 10:
			return joaat("AMBUSH");
	
		case 11:
			return -621956193;
	
		case 12:
			return joaat("GANG_EVENT_SHOWDOWN");
	
		case 13:
			return joaat("GANG_EVENT_IMPROMPTU_RACE");
	
		case 14:
			return -867762478;
	
		case 15:
			return 602097925;
	
		case 16:
			return joaat("TRAIN_ESCORT");
	
		case 17:
			return joaat("IWD_1V1");
	
		case 18:
			return joaat("IWD_PVP");
	
		case 19:
			return joaat("IWD_INF");
	
		case 20:
			return joaat("IWD_PF");
	
		case 21:
			return joaat("IWD_PLF");
	
		case 22:
			return joaat("ASSASSINATION");
	
		case 23:
			return joaat("ASSASSINATION_TRACKING");
	
		case 24:
			return joaat("ASSASSINATION_PVP_PLAYER");
	
		case 25:
			return joaat("ASSASSINATION_PVP_POSSE");
	
		case 26:
			return joaat("COACH_HOLDUP_ROBBERY");
	
		case 27:
			return joaat("COACH_HOLDUP_KIDNAPPING");
	
		case 28:
			return joaat("IWD_F");
	
		case 30:
			return 1518877519;
	
		default:
		
	}

	return 0;
}

int func_446(int iParam0) // Position - 0xD02D Hash - 0x268EF4F6 ^0x268EF4F6
{
	int num;

	num = func_555(0, func_554() - 1, &iParam0);

	if (num == -1)
		return -1;

	return func_556(num);
}

int func_447(int iParam0) // Position - 0xD054 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_448(int iParam0, int iParam1, BOOL bParam2) // Position - 0xD067 Hash - 0x97F184D3 ^0xF316A8E
{
	var unk;
	var unk6;

	if (!func_557(iParam0))
		return unk6;

	if (!func_558(&unk))
		return unk6;

	if (!func_559(unk, &(unk.f_1), 13, 0, 0, 1))
		return unk6;

	if (!func_559(unk, &(unk.f_1), 14, iParam0, 0, 1))
		return unk6;

	if (!func_559(unk, &(unk.f_1), 19, 0, 0, 1))
		return unk6;

	if (!func_559(unk, &(unk.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
	
		return unk6;
	}

	return func_560(unk);
}

float func_449(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xD11A Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_450(int iParam0) // Position - 0xD138 Hash - 0xC86BC762 ^0xC86BC762
{
	return func_265(Global_1220826.f_1196, iParam0);
}

BOOL func_451() // Position - 0xD14D Hash - 0xD2F03408 ^0xD2F03408
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_452(BOOL bParam0, int iParam1) // Position - 0xD161 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && bParam0 != false;
}

struct<2> func_453() // Position - 0xD19D Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_90(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_90(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_454(Hash hParam0) // Position - 0xD1E8 Hash - 0x25F0A9E7 ^0x25F0A9E7
{
	if (func_561(hParam0) == -1)
		return false;

	return true;
}

BOOL func_455(var uParam0, var uParam1) // Position - 0xD1FF Hash - 0x213CF43D ^0x213CF43D
{
	return func_562(uParam0, 1, 4);
}

BOOL func_456(Hash hParam0) // Position - 0xD211 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

Hash func_457(int iParam0) // Position - 0xD21F Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
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
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return -241666815;
	
		case 20:
			return joaat("consumable_herb_sage");
	
		case 21:
			return joaat("consumable_herb_indian_tobacco");
	
		case 24:
			return joaat("consumable_herb_milkweed");
	
		case 27:
			return joaat("consumable_herb_oleander_sage");
	
		case 28:
			return joaat("consumable_herb_oregano");
	
		case 29:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 30:
			return joaat("consumable_herb_prairie_poppy");
	
		case 32:
			return joaat("consumable_herb_rams_head");
	
		case 34:
			return joaat("consumable_herb_red_raspberry");
	
		case 35:
			return joaat("consumable_herb_sage");
	
		case 38:
			return joaat("consumable_herb_vanilla_flower");
	
		case 39:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 40:
			return joaat("provision_wldflwr_agarita");
	
		case 41:
			return joaat("provision_wldflwr_texas_blue_bonnet");
	
		case 42:
			return joaat("provision_wldflwr_bitterweed");
	
		case 43:
			return joaat("provision_wldflwr_blood_flower");
	
		case 44:
			return joaat("provision_wldflwr_cardinal_flower");
	
		case 45:
			return joaat("provision_wldflwr_chocolate_daisy");
	
		case 46:
			return joaat("provision_wldflwr_creek_plum");
	
		case 47:
			return joaat("provision_wldflwr_wild_rhubarb");
	
		case 48:
			return joaat("provision_wldflwr_wisteria");
	
		case 49:
			return joaat("consumable_herb_wild_carrots");
	
		case 50:
			return joaat("consumable_herb_wild_feverfew");
	
		case 51:
			return joaat("consumable_herb_wild_mint");
	
		case 52:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 53:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

void func_458(int iParam0, BOOL bParam1) // Position - 0xD4DA Hash - 0xFA676C9B ^0xFA676C9B
{
	if (!func_459(iParam0))
		return;

	Global_17418[iParam0] = Global_17418[iParam0] || bParam1;
	return;
}

BOOL func_459(int iParam0) // Position - 0xD500 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_460(int iParam0) // Position - 0xD50D Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_459(iParam0))
		return false;

	return func_563(iParam0, 4, true);
}

void func_461(int iParam0, BOOL bParam1) // Position - 0xD52B Hash - 0xF33798D9 ^0x8C787B55
{
	if (!func_459(iParam0))
		return;

	if (func_564(iParam0))
		return;

	func_458(iParam0, 2);

	if (bParam1)
		if (!func_51(0, false, true))
			func_565(true, 1017438712);

	return;
}

BOOL func_462(int iParam0) // Position - 0xD56E Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_459(iParam0))
		return false;

	return func_563(iParam0, true, true);
}

void func_463(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD58C Hash - 0x65D4C438 ^0x65D4C438
{
	if (!func_459(iParam0))
		return;

	if (func_462(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_566(iParam0);

	if (!bParam1)
		func_567(iParam0);

	func_458(iParam0, true);
	func_461(iParam0, true);

	if (bParam2)
		if (!func_51(0, false, true))
			func_53(true, 6);

	return;
}

float func_464(int iParam0, int iParam1) // Position - 0xD5EE Hash - 0x882BA7B3 ^0xDE52A593
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
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
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

void func_465(int iParam0) // Position - 0xD6A3 Hash - 0x265AFF44 ^0xE695F6B4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_546(2);
	func_568(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

float func_466(float fParam0, float fParam1) // Position - 0xD6E0 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_467(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xD70E Hash - 0xF1ADCC2F ^0xF1ADCC2F
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_569(iParam0, fParam1, true);

	func_571(iParam0, func_570(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_468(float fParam0, int iParam1) // Position - 0xD747 Hash - 0x4EDD98F5 ^0x4EDD98F5
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

int func_469(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD799 Hash - 0xAC70E962 ^0x1F9746E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_572(iParam0, fParam1, bParam2, bParam3);
}

void func_470(float fParam0, BOOL bParam1) // Position - 0xD7BD Hash - 0xF3A2F5AE ^0x22F56C08
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_573())
		func_574(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_143(109, false);
	}

	return;
}

struct<2> func_471(int iParam0) // Position - 0xD815 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_472(var uParam0, var uParam1, int iParam2) // Position - 0xD825 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_473(Hash hParam0) // Position - 0xD842 Hash - 0x1B551CF7 ^0xD3BB1F31
{
	return func_118(hParam0) == joaat("consumable");
}

void func_474(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD856 Hash - 0x81C6837 ^0x21B516A3
{
	BOOL flag;
	int value;
	var unk;
	int num;
	char* str;
	int num2;
	int num3;
	Hash hash;
	int num4;
	char* str2;
	char* str3;
	int num5;
	char* str4;
	Hash hash2;
	Hash hash3;
	int value2;
	const char* str5;
	var unk7;

	if (!func_182(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_575() || bParam6)
	{
		func_576(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}

	flag = false;
	value = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (hParam0 == joaat("AMMO_MOONSHINEJUG_MP"))
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_GET_PUMP", 32);

	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, value == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		flag = true;
	}
	else if (bParam2 && func_578(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_118(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_108(hParam0, -1982291600) && !func_108(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_121(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_487(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (bParam5)
	{
		str = "ITEMTYPE_ORDERED_ITEM";
		str.f_1 = "itemtype_textures";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num4 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	str3 = "Transaction_Feed_Sounds";
	num5 = 0;

	if (flag)
	{
		num4 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num5 = 1;
	}

	if (func_108(hParam0, 474910316))
	{
		str4 = func_579(hParam0);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str4))
		{
			str2 = str4;
			str3 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_rpg_special_1");
		else
			num4 = joaat("color_yellowdark");

	if (func_108(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_580(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_492(hParam0, false);

	if (func_581(hash) && func_108(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_582(hParam0);
	}
	else if (func_118(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_491(hParam0);
	
		if (func_182(hash3, 0))
			hash2 = func_492(hash3, false);
	}

	if (func_583(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_584(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_493(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_585(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_586(hParam0, &unk7))
			str5 = func_588(func_587(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_494(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

struct<2> func_475(Hash hParam0) // Position - 0xDD31 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_182(hParam0, 0))
		return unk;

	if (func_108(hParam0, -305066475))
		if (func_14() == -1)
			if (func_108(hParam0, -537818634))
				return func_471(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_471(joaat("deadeye_items"));
	else if (func_108(hParam0, -537818634))
		return func_471(joaat("medicine_items"));

	if (func_108(hParam0, 2084895747))
		return func_471(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_476(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0xDDC5 Hash - 0x4C808C39 ^0x99CF3799
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

	unk = { func_543(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam2)
		func_544(&unk, func_311(false));

	if (!func_545(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_417(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_187(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_419(num);
	num3 < iParam1;
	return true;
}

void func_477(int iParam0, BOOL bParam1, int iParam2) // Position - 0xDE91 Hash - 0x2B098F6F ^0x2F7D859F
{
	Global_1940252.f_5 = iParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_589() && iParam2 == 0)
	{
		func_590(1);
		func_591(1);
	}

	return;
}

BOOL func_478() // Position - 0xDECB Hash - 0x7545CCE6 ^0x7545CCE6
{
	int num;

	num = Global_1953292.f_595[8];
	num = num + Global_1953292.f_595[10];
	num = num + Global_1953292.f_595[1];
	num = num + Global_1953292.f_595[2];
	num = num + Global_1953292.f_595[5];
	num = num + Global_1953292.f_595[25];
	num = num + Global_1953292.f_595[23];
	num = num + Global_1953292.f_595[18];
	num = num + Global_1953292.f_595[19];
	return num > 0;
}

int func_479(Hash hParam0) // Position - 0xDF61 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_239(func_592(hParam0), 1);

	if (num != 39)
		return Global_1953292.f_1676.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_480(Hash hParam0, var uParam1) // Position - 0xDF90 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_239(func_592(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1953292.f_1676.f_1[num /*3*/] != 0 && Global_1953292.f_1676.f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = Global_1953292.f_1676.f_1[num /*3*/];
	
		if (func_121(hash) == hParam0 || hParam0 == 81053684 && func_108(hash, 160827531))
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

Hash func_481(Hash hParam0) // Position - 0xE026 Hash - 0x90D51E83 ^0x1291FDBE
{
	return Global_1953292.f_1676.f_1[func_239(hParam0, 1) /*3*/];
}

int func_482() // Position - 0xE040 Hash - 0x16CCC184 ^0xB63B6FF6
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_121(hash) == -999503751)
			if (func_593() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_483(Hash hParam0, int iParam1) // Position - 0xE091 Hash - 0x564F798F ^0xBDC94FF5
{
	if (iParam1 == 0)
		iParam1 = func_594(false);

	if (func_121(hParam0) == -999503751 && func_488(hParam0) != -1)
		return true;

	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return func_108(hParam0, -287432114);
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return func_108(hParam0, -133342564);

	return false;
}

BOOL func_484(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE0FA Hash - 0xFC1A4C7A ^0x2FD92EB6
{
	var unk;
	var guid;

	unk = { func_185(hParam0, bParam2, 0) };
	guid = { func_186(hParam0, unk, unk.f_4, bParam2) };

	if (func_246(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_59(bParam2), &guid, bParam1);
	return true;
}

int func_485(Hash hParam0) // Position - 0xE14C Hash - 0xFFB858B2 ^0xFFB858B2
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
	
		case 81053684:
			return 8;
	
		case 119907797:
			return 32;
	
		case 1388798186:
			return 64;
	
		default:
		
	}

	return 0;
}

BOOL func_486(int iParam0) // Position - 0xE1A7 Hash - 0x8364EAF ^0x20FEFCB3
{
	return Global_1953292.f_3352.f_33.f_6 && iParam0 != false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_487(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xE1BF Hash - 0x92B705D3 ^0xB783F681
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

int func_488(Hash hParam0) // Position - 0xE2B2 Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (hParam0)
	{
		case -2011879201:
			return 5;
	
		case -1323870201:
			return 8;
	
		case -1063340820:
			return 6;
	
		case -808817534:
			return 3;
	
		case 97391779:
			return 2;
	
		case 217155793:
			return 1;
	
		case 491602716:
			return 0;
	
		case 967218463:
			return 10;
	
		case 1270922359:
			return 4;
	
		case 1632140501:
			return 9;
	
		case 2127262701:
			return 7;
	
		default:
		
	}

	return -1;
}

BOOL func_489(BOOL bParam0, int iParam1) // Position - 0xE334 Hash - 0xFE9F4A91 ^0x51AAAD17
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		return Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && bParam0 != false;

	return false;
}

struct<8> func_490(int iParam0) // Position - 0xE377 Hash - 0xAAC9C045 ^0xE6DD002E
{
	var unk;

	if (func_489(4, iParam0))
		return Global_17418.f_2645[iParam0 /*8*/];

	TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_STRING_FROM_HASH_KEY(func_595(iParam0)), 64);
	return unk;
}

Hash func_491(Hash hParam0) // Position - 0xE3AC Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_596(hParam0);

	if (num == 0)
		return 0;

	unk = { func_597(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_598(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_599(outKey))
			{
				func_600(collectionId);
				return outKey;
			}
		}
	
		func_600(collectionId);
	}

	return 0;
}

Hash func_492(Hash hParam0, BOOL bParam1) // Position - 0xE431 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_182(hParam0, 0))
		return 0;

	hash = func_601(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

const char* func_493(const char* sParam0, int iParam1) // Position - 0xE45F Hash - 0x9E99F03 ^0xDB77CEC2
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_494(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xE479 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_602(sParam0, sParam1, hParam2);
	return num2;
}

void func_495() // Position - 0xE4DC Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1953292.f_1046 = 0;
	return;
}

BOOL func_496(Hash hParam0) // Position - 0xE4EC Hash - 0xC36143B1 ^0xD0F863A4
{
	if (!func_182(hParam0, 0))
		return false;

	if (func_108(hParam0, 160827531) || func_121(hParam0) == 81053684)
		return true;

	return false;
}

void func_497(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE528 Hash - 0xB56128A7 ^0x710CD125
{
	BOOL flag;
	var unk;
	var unk120;
	int i;
	Hash hash;

	flag = false;

	switch (func_121(hParam0))
	{
		case -2061583405:
			flag = func_603(hParam0, &(Global_1953292.f_3352.f_28), bParam4);
			break;
	
		case -1719060085:
			flag = func_603(hParam0, &(Global_1953292.f_3352.f_31), bParam4);
			break;
	
		case -999503751:
			flag = func_603(hParam0, &(Global_1953292.f_3352.f_27), bParam4);
		
			if (func_108(hParam0, -166674229))
			{
				unk.f_1 = 39;
			
				if (func_604(&unk, hParam0, &unk120, false, true, false, 0, false, true, 8))
				{
					for (i = 0; i < 39; i = i + 1)
					{
						hash = unk.f_1[i /*3*/];
					
						if (func_182(hash, 0))
							func_497(hash, false, false, false, false);
					}
				}
			}
			break;
	
		case -525676072:
			flag = func_603(hParam0, &(Global_1953292.f_3352.f_29), bParam4);
			break;
	
		case 81053684:
			flag = func_603(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	
		case 119907797:
			flag = func_603(hParam0, &(Global_1953292.f_3352.f_32), bParam4);
			break;
	
		case 1388798186:
			flag = func_603(hParam0, &(Global_1953292.f_3352.f_33.f_7), bParam4);
			break;
	
		default:
			if (func_108(hParam0, 160827531))
				flag = func_603(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	}

	if (bParam3 && flag)
		func_377(false, hParam0);

	if (bParam2)
		func_375();

	if (bParam1)
		func_378(false, false);

	return;
}

Hash func_498(Hash hParam0) // Position - 0xE6AE Hash - 0xDBA8DC27 ^0x5C33F2A1
{
	int num;
	var unk;

	func_605(&unk, 9044914, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&unk);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&unk))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &unk, -1168434056))
			return 0;
	
		return num;
	}

	return 0;
}

BOOL func_499(Hash hParam0, int iParam1) // Position - 0xE6F2 Hash - 0x926B5C1A ^0xC9C8B467
{
	Hash hash;

	hash = func_121(Global_1953292.f_1676.f_1[iParam1 /*3*/]);

	if (func_121(hParam0) == hash)
		return true;
	else if (hParam0 == -992705550)
		return func_108(Global_1953292.f_1676.f_1[iParam1 /*3*/], 160827531);
	else if (hParam0 == 491480257)
		return hash == -2061583405 || hash == 2086043523;
	else if (hParam0 == -1789518572)
		return hash == -923693316;
	else if (hParam0 == -275040139)
		return hash == 1882579758;

	return false;
}

void func_500(int iParam0, int iParam1) // Position - 0xE799 Hash - 0xF4504E91 ^0x84D29029
{
	int i;
	int num;
	var unk;

	unk = 39;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_1953292.f_2938.f_35[i /*2*/] = { unk };
	
		if (i < *iParam0)
		{
			if (func_606(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_606(&iParam0->f_2[i /*2*/], 1))
					func_607(&iParam0->f_2[i /*2*/], 2, 6);
			
				Global_1953292.f_2938.f_35[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { Global_1953292.f_2938.f_35[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_501(int iParam0, int iParam1, int iParam2) // Position - 0xE896 Hash - 0x917A9738 ^0x1D68250E
{
	int i;
	int j;

	if (*iParam0 + 1 >= 16)
		return;

	if (!func_608(iParam0, 1))
		func_609(iParam0, 1);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (iParam0->f_2[i /*2*/] == iParam1)
		{
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			return;
		}
	
		if (Global_1953292.f_83[iParam0->f_2[i /*2*/] /*12*/].f_2 > Global_1953292.f_83[iParam1 /*12*/].f_2)
		{
			for (j = *iParam0; j >= i + 1; j = j + -1)
			{
				iParam0->f_2[j /*2*/] = { iParam0->f_2[j - 1 /*2*/] };
			}
		
			iParam0->f_2[i /*2*/] = iParam1;
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			*iParam0 = *iParam0 + 1;
			return;
		}
	}

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_502(Hash hParam0, var uParam1) // Position - 0xE97C Hash - 0xEEF7C6EF ^0xEFE4EF7D
{
	int num;
	int num2;
	int num3;

	num = func_610(0);
	num.f_1 = uParam1;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return;

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, 1409451727))
		{
		}
		else
		{
			num3 = func_239(num2, 1);
		
			if (num3 < 0 || num3 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("Component")))
			{
			}
			else if (hParam0->f_1[num3 /*3*/] != num2)
			{
			}
			else
			{
				hParam0->f_1[num3 /*3*/] = Global_1953292.f_83[num3 /*12*/];
				hParam0->f_1[num3 /*3*/].f_1 = 0;
				func_387(num3, 0);
			}
		}
	}

	return;
}

void func_503(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xEA2F Hash - 0x47EC47B2 ^0xCC3EAB2D
{
	int num;
	Hash hash;

	if (hParam1 == -230310728 || hParam1 == 1326838792)
		hParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (hParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		hParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	num = 10;
	hash = func_121(hParam0->f_1[num /*3*/]);

	if (hash == 119907797)
	{
		if (func_108(hParam1, 458991572))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}
	else if (hash == 2086043523)
	{
		if (func_108(hParam1, -93469181))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}
	else if (hash == -525676072)
	{
		if (func_108(hParam1, -93469181))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}

	num = 11;

	if (func_108(hParam0->f_1[num /*3*/], -1446529222) && func_108(hParam1, -93469181))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam1, -93469181) && func_108(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

void func_504(Hash hParam0, Hash hParam1, int iParam2) // Position - 0xEC04 Hash - 0xC8C81F63 ^0xED719640
{
	if (hParam1 == joaat("clothing_item_m_beard_stubble"))
		hParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (hParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		hParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	return;
}

void func_505(Hash hParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0xEC49 Hash - 0x1075AB8B ^0xF324283C
{
	int num;
	Hash hash;

	func_387(1, iParam3);

	if (bParam2)
		return;

	num = 12;
	hash = hParam0->f_1[num /*3*/];

	if (!func_242(hash, false) && func_108(hash, -180472385))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 10;
	hash = hParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_121(hash) == 2086043523 && func_108(hParam1, -93469181))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

void func_506(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xED12 Hash - 0xA81215F7 ^0xA81215F7
{
	switch (func_121(hParam2))
	{
		case -525676072:
			func_611(hParam0, bParam1, iParam3);
			break;
	
		case 2086043523:
			func_612(hParam0, bParam1, iParam3);
			break;
	}

	return;
}

void func_507(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xED4C Hash - 0x7B358321 ^0x3A779D22
{
	int num;

	num = 18;

	if (func_121(hParam0->f_1[num /*3*/]) == 912453393)
		func_387(num, iParam3);

	func_387(1, iParam3);

	if (bParam1)
		return;

	if (func_496(hParam2))
		func_613(hParam0, bParam1, iParam3);

	num = 11;

	if (func_108(hParam2, -180472385) && !func_242(hParam0->f_1[num /*3*/], false))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	if (func_108(hParam2, -1303648999))
		return;

	num = 16;

	if (hParam0->f_1[num /*3*/].f_1 == 1530758430)
	{
		hParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_387(num, iParam3);
		num = 20;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_387(num, iParam3);
	}
	else if (hParam0->f_1[num /*3*/].f_1 == 1334603721)
	{
		hParam0->f_1[num /*3*/].f_1 = -1539589426;
		func_387(num, iParam3);
		num = 20;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_387(num, iParam3);
	}

	return;
}

void func_508(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xEE8C Hash - 0x6DFFA234 ^0x160F223D
{
	int num;
	int metapedType;
	Hash hash;
	int num2;
	int num3;

	num = 12;
	metapedType = 0;

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	if (joaat("neckties") == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam0->f_1[num /*3*/], metapedType, true))
	{
		if (bParam1 || func_108(hParam2, 1872585553) || func_121(hParam2) == 1882579758)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}

	hash = hParam0->f_1[num /*3*/];

	if (!func_242(hash, false) && !func_108(hash, -1303648999) && func_108(hParam2, -1527414429))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 17;

	if (!func_242(hParam0->f_1[num /*3*/], false) && func_108(hParam2, 1467402774))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 29;

	if (!func_242(hParam0->f_1[num /*3*/], false) && func_108(hParam2, 1126863852))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 34;
	hash = hParam0->f_1[num /*3*/];

	if (func_121(hash) == 1759215194 && func_121(hParam2) == 1882579758)
	{
		hParam0->f_1[num /*3*/] = func_498(hParam2);
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}
	else if (func_614(hash, bParam1, metapedType))
	{
		hash = hParam0->f_1[18 /*3*/];
		num2 = 0;
	
		if (func_121(hash) == 912453393 && func_615(32))
			num2 = num2 | 1;
	
		if (func_108(hParam2, 525391395))
			num2 = num2 | 2;
	
		hash = func_616(Global_1953292.f_83[num /*12*/].f_9, num2);
	
		if (hash != 0)
		{
			hParam0->f_1[num /*3*/] = hash;
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
			func_516(hParam0, false, hash, iParam3);
		}
	}

	num = 21;

	if (!func_242(hParam0->f_1[num /*3*/], false) && func_108(hParam2, 196770179))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num3 = 23;

	if (!func_242(hParam0->f_1[num /*3*/], false) || hParam0->f_1[num3 /*3*/] != Global_1953292.f_83[num3 /*12*/] && func_108(hParam0->f_1[num3 /*3*/], -1655064541))
		func_617(hParam0, iParam3);

	return;
}

void func_509(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF175 Hash - 0x7E0722A ^0xAB26183C
{
	int num;

	if (bParam1)
		return;

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, 358628372))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

void func_510(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0xF1D4 Hash - 0xB459802F ^0xB459802F
{
	switch (func_121(hParam2))
	{
		case 698653232:
			func_618(hParam0, bParam1, hParam2, iParam4);
			break;
	
		case 912453393:
			func_619(hParam0, bParam1, iParam3, iParam4);
			break;
	}

	return;
}

void func_511(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF212 Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_121(hParam2))
	{
		case -1080198344:
		case 1868067663:
			func_620(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 294388917:
			func_621(hParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_512(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF256 Hash - 0x3C314B3B ^0x50027DDE
{
	int num;

	num = 18;

	if (func_121(hParam0->f_1[num /*3*/]) == 912453393)
		func_387(num, iParam3);

	if (bParam1)
		return;

	num = 23;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, 1537768121))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_617(hParam0, iParam3);

	return;
}

void func_513(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF2F2 Hash - 0xEA1EEC9C ^0x89D8E054
{
	int num;

	if (!bParam1)
	{
		num = 21;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			if (func_108(hParam0->f_1[num /*3*/], 1537768121))
			{
				hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
				hParam0->f_1[num /*3*/].f_1 = 0;
			}
		
			func_387(num, iParam3);
		}
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_108(hParam2, -1655064541))
			func_617(hParam0, iParam3);
		else
			func_387(num, iParam3 | 16);

	num = 20;

	if (hParam0->f_1[num /*3*/].f_1 != -529972961)
		return;

	hParam0->f_1[num /*3*/].f_1 = joaat("base");
	func_387(num, iParam3);
	num = 25;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_387(num, iParam3);

	num = 28;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_387(num, iParam3);

	return;
}

void func_514(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF401 Hash - 0x69302866 ^0x620ADA80
{
	int num;

	if (bParam1)
		return;

	if (func_622(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_108(hParam2, -1230785684))
	{
		num = 27;
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 32;

	if (!func_242(hParam0->f_1[num /*3*/], false) && func_108(hParam2, 1016511012))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

void func_515(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xF4A0 Hash - 0xAEDF8511 ^0x27A01C51
{
	int num;

	if (bParam1)
		return;

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam0->f_1[num /*3*/], 358628372))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	return;
}

void func_516(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF505 Hash - 0x81434F3 ^0x81434F3
{
	switch (func_121(hParam2))
	{
		case -1740828670:
			func_627(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 344283346:
			func_628(hParam0, bParam1, iParam3);
			break;
	
		case 502936876:
			func_626(hParam0, bParam1, iParam3);
			break;
	
		case 684307653:
			func_625(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1223979091:
		case 2047428024:
			func_624(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1759215194:
			func_623(hParam0, iParam3);
			break;
	}

	return;
}

void func_517(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF595 Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_121(hParam2))
	{
		case -923693316:
			func_630(hParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1769055947:
			func_629(hParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_518(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xF5D3 Hash - 0x60D806B ^0x98705F22
{
	int num;
	Hash hash;

	if (bParam1)
	{
		func_631(hParam0, iParam3, false, true);
		return;
	}

	num = 35;
	hash = hParam0->f_1[num /*3*/];

	if (func_108(hParam2, 813132419) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_121(hash) == -923693316)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	if (func_108(hParam2, -1650340550) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_121(hash) == 1769055947)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 37;

	if (func_108(hParam2, -1278198125) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

int func_519(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0xF702 Hash - 0xD6995ACD ^0x328CFE7D
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, true); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, true) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_520(Hash hParam0, Hash hParam1, var uParam2) // Position - 0xF744 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_521(Hash hParam0) // Position - 0xF755 Hash - 0x6EEB52D0 ^0x6EEB52D0
{
	int num;

	num = func_488(hParam0);

	if (num != -1)
		return num;

	return -1;
}

BOOL func_522(Hash hParam0) // Position - 0xF771 Hash - 0x1DB3839 ^0xD5C14C10
{
	return hParam0 == -1839668642 || hParam0 == -1415811768 || hParam0 == 231148558 || hParam0 == -1674363638 || hParam0 == 252325943 || hParam0 == 1216664798 || hParam0 == 1341188928 || hParam0 == 829857647 || hParam0 == -636562458 || hParam0 == 1115104855;
}

void func_523(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xF7FF Hash - 0x3079C542 ^0x5D29A697
{
	if (bParam1)
		Global_1953292.f_1676.f_1[iParam0 /*3*/] = { Global_1953292.f_1557.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (iParam3 == -1)
		iParam3 = Global_17418.f_55.f_664.f_1777;

	func_632(&Global_1953292.f_1676.f_1[iParam0 /*3*/], iParam0, iParam3);
	return;
}

BOOL func_524(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xF85B Hash - 0xECEF3502 ^0x2D53122C
{
	var unk;
	var unk6;

	unk = { func_185(hParam0, bParam2, 0) };
	unk6 = { func_186(hParam0, unk, unk.f_4, bParam2) };
	return func_393(unk6, iParam1, bParam2);
}

void func_525(int iParam0, BOOL bParam1, int iParam2) // Position - 0xF890 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_633(&(Global_1953292.f_1557), iParam0);
	func_634(2, iParam0, 6);

	if (bParam1)
		func_378(false, true);

	return;
}

int func_526(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0xF8B8 Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_635(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

int func_527(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xF8E6 Hash - 0x85BC54D5 ^0xA60D4F06
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk70;
	var unk88;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_315(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_118(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_636(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_637(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_638(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_639(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_640(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_641(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_642(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_309(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

float func_528(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFA29 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

int func_529(int iParam0) // Position - 0xFA71 Hash - 0x669CB4E1 ^0x669CB4E1
{
	switch (iParam0)
	{
		case 0:
			return 24;
	
		case 1:
			return 25;
	
		case 2:
			return 26;
	
		case 3:
			return 27;
	
		case 4:
			return 28;
	
		case 5:
			return 29;
	
		case 6:
			return 30;
	
		case 7:
			return 34;
	
		case 11:
			return 31;
	
		case 12:
			return 32;
	
		case 13:
			return 33;
	
		case 14:
			return 35;
	
		case 15:
			return 41;
	
		case 16:
			return 39;
	
		case 17:
			return 40;
	
		case 18:
			return 38;
	
		default:
		
	}

	if (func_271(iParam0) == joaat("posse_versus"))
		return 37;

	return 23;
}

BOOL func_530() // Position - 0xFB46 Hash - 0xDF34329C ^0xA25E1085
{
	if (func_89() || Global_1572887.f_72.f_40 > 10 || func_643())
		if (!func_349() && Global_265213.f_122484.f_80.f_16.f_2 != -504335712 && !func_644(Global_265213.f_122484.f_80.f_16.f_3))
			return true;

	return false;
}

BOOL func_531(int iParam0, Player plParam1) // Position - 0xFBB0 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_532() // Position - 0xFBDC Hash - 0x62AD6655 ^0x124ACCA1
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();
	return Global_1051832.f_3279 == frameCount || Global_1051832.f_3279 == frameCount - 1;
}

void func_533(int iParam0) // Position - 0xFC06 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1051832.f_3648 = Global_1051832.f_3648 || iParam0;
	return;
}

BOOL func_534() // Position - 0xFC1F Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

int func_535() // Position - 0xFC3B Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_536() // Position - 0xFC49 Hash - 0x306ACA3A ^0x61D8E392
{
	return "unnamed";
}

BOOL func_537(int iParam0) // Position - 0xFC55 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

BOOL func_538(int iParam0) // Position - 0xFCE4 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_645(36, iParam0);
}

int func_539(int iParam0) // Position - 0xFD02 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_540(Player plParam0) // Position - 0xFD4D Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_646(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_647(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_541(var uParam0) // Position - 0xFD92 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

void func_542(Hash hParam0, var uParam1, var uParam2) // Position - 0xFDA7 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_543(Hash hParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xFFB3 Hash - 0x90CCF0F4 ^0xA5F3D799
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

	if (hParam2 != 0 && hParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = hParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

void func_544(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10092 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_545(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x100AD Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_59(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_546(int iParam0) // Position - 0x100D2 Hash - 0x3229E1B0 ^0x4F226FB4
{
	if (iParam0 == 2)
		iParam0 = func_176(1);

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

BOOL func_547(Any* panParam0) // Position - 0x10116 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_648(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_548(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x10132 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_265(iParam2, iParam3))
		return true;

	return false;
}

void func_549(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1014A Hash - 0x3169A239 ^0x47E831EC
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_649(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_550(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x101E8 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_426(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_59(bParam1), hParam0, bParam3);
}

BOOL func_551(int iParam0, var uParam1, Any* panParam2) // Position - 0x1021B Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_91(iParam0))
		return false;

	func_650(panParam2);

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

BOOL func_552(Any* panParam0, int iParam1) // Position - 0x10326 Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_553() // Position - 0x1035D Hash - 0x33EB0DBC ^0xEC692AA0
{
	int numChildren;
	int num;

	numChildren = 0;
	num = Global_1245174.f_9818;
	num.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(num, num.f_1);

	return numChildren;
}

int func_554() // Position - 0x10395 Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_1110244.f_3667.f_938;
}

int func_555(int iParam0, int iParam1, var uParam2) // Position - 0x103A7 Hash - 0x4D6E9A17 ^0x4D6E9A17
{
	int num;

	if (iParam0 > iParam1)
		return -1;

	num = (iParam0 + iParam1) / 2;

	if (*uParam2 < Global_1110244.f_3667.f_729[num /*2*/])
		return func_555(iParam0, num - 1, uParam2);

	if (*uParam2 > Global_1110244.f_3667.f_729[num /*2*/])
		return func_555(num + 1, iParam1, uParam2);

	return num;
}

int func_556(int iParam0) // Position - 0x10411 Hash - 0xC69036C ^0xCCA4B427
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

BOOL func_557(int iParam0) // Position - 0x10429 Hash - 0x7EE3A984 ^0x7EE3A984
{
	return iParam0 > -1 && iParam0 < 83;
}

BOOL func_558(Any* panParam0) // Position - 0x1043F Hash - 0x5AEEE194 ^0x97DC092A
{
	int fileHandle;
	var src;

	fileHandle = func_651();

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_559(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x10478 Hash - 0x9BC890AF ^0xDF6320E0
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

struct<8> func_560(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x104A3 Hash - 0x481BF462 ^0x481BF462
{
	return func_652(uParam0, 52, 1);
}

int func_561(Hash hParam0) // Position - 0x104B6 Hash - 0x3EE73043 ^0x3EE73043
{
	switch (hParam0)
	{
		case joaat("document_abandoned_loot_map_intro_tumbleweed_2"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_1"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_4"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_3"):
		case joaat("document_abandoned_loot_map_intro_tumbleweed_5"):
			return 3;
	
		case joaat("document_abandoned_loot_map_intro_valentine_5"):
		case joaat("document_abandoned_loot_map_intro_valentine_2"):
		case joaat("document_abandoned_loot_map_intro_valentine_1"):
		case joaat("document_abandoned_loot_map_intro_valentine_4"):
		case joaat("document_abandoned_loot_map_intro_valentine_3"):
			return 1;
	
		case joaat("document_abandoned_loot_map_intro_blackwater_5"):
		case joaat("document_abandoned_loot_map_intro_blackwater_2"):
		case joaat("document_abandoned_loot_map_intro_blackwater_4"):
		case joaat("document_abandoned_loot_map_intro_blackwater_3"):
		case joaat("document_abandoned_loot_map_intro_blackwater_1"):
			return 2;
	
		case joaat("document_abandoned_loot_map_intro_rhodes_2"):
		case joaat("document_abandoned_loot_map_intro_rhodes_3"):
		case joaat("document_abandoned_loot_map_intro_rhodes_1"):
		case joaat("document_abandoned_loot_map_intro_rhodes_4"):
		case joaat("document_abandoned_loot_map_intro_rhodes_5"):
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_562(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1054F Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_91(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_653(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_563(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1058A Hash - 0x77ECC81C ^0xEFBF0FBE
{
	if (bParam2)
		if (!func_459(iParam0))
			return false;

	if (Global_1572887.f_14 != -1)
		return Global_17418[iParam0] && bParam1 != false;

	return Global_38.f_4675[iParam0] && bParam1 != false;
}

BOOL func_564(int iParam0) // Position - 0x105CD Hash - 0xE139661B ^0xE139661B
{
	if (!func_459(iParam0))
		return false;

	return func_563(iParam0, 2, true);
}

int func_565(BOOL bParam0, Hash hParam1) // Position - 0x105EB Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_654())
		return 0;

	if (!func_262())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_93(&Global_0, 8);

	func_93(&Global_0, 1);
	return 1;
}

BOOL func_566(int iParam0) // Position - 0x10641 Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
	
		default:
			return 0;
	}

	return 0;
}

void func_567(int iParam0) // Position - 0x106AE Hash - 0x3B9D9F25 ^0x3B9D9F25
{
	switch (iParam0)
	{
		case 2:
			func_143(243, false);
			break;
	
		case 3:
			func_143(244, false);
			break;
	
		case 4:
			func_143(263, false);
			break;
	
		case 5:
			func_143(239, false);
			break;
	
		case 6:
			func_143(259, false);
			break;
	
		case 7:
			func_143(256, false);
			break;
	
		case 8:
			func_143(264, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_143(267, false);
			break;
	
		case 13:
			func_143(250, false);
			break;
	
		case 15:
			func_143(246, false);
			break;
	
		case 16:
			func_143(240, false);
			break;
	
		case 18:
			func_143(258, false);
			break;
	
		case 19:
			func_143(251, false);
			break;
	
		case 20:
			func_143(252, false);
			break;
	
		case 21:
			func_143(257, false);
			break;
	
		case 24:
			func_143(247, false);
			break;
	
		case 27:
			func_143(249, false);
			break;
	
		case 28:
			func_143(268, false);
			break;
	
		case 29:
			func_143(265, false);
			break;
	
		case 30:
			func_143(260, false);
			break;
	
		case 32:
			func_143(266, false);
			break;
	
		case 34:
			func_143(241, false);
			break;
	
		case 35:
			func_143(253, false);
			break;
	
		case 38:
			func_143(248, false);
			break;
	
		case 39:
			func_143(254, false);
			break;
	
		case 49:
			func_143(261, false);
			break;
	
		case 50:
			func_143(255, false);
			break;
	
		case 51:
			func_143(269, false);
			break;
	
		case 52:
			func_143(242, false);
			break;
	
		case 53:
			func_143(245, false);
			break;
	}

	return;
}

void func_568(float fParam0, Ped pedParam1) // Position - 0x108B4 Hash - 0xFCEEE112 ^0xFADF1B0E
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

float func_569(int iParam0, float fParam1, BOOL bParam2) // Position - 0x108F6 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_152();
	func_655(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_656(iParam0, 2);

	if (func_658(num, func_657(iParam0, 2), true))
	{
		func_659(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_143(103, bParam2);
		return 0f;
	}

	func_660(iParam0, func_152(), 2);
	func_659(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_570(int iParam0, int iParam1) // Position - 0x1095F Hash - 0x76523351 ^0x92907141
{
	if (iParam1 == 2)
		iParam1 = func_176(2);

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

int func_571(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x109AB Hash - 0xF5F03980 ^0xAA5300BB
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_176(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_661(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_662(iParam0, 7000, iParam5);
	
		func_663(ped, iParam0, fParam1);
		func_664(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

int func_572(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10A29 Hash - 0xFF5C68E3 ^0x564C72DE
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_665(iParam0))
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
				effectName = func_666(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_55(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_666(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_667(joaat("STATUS_EFFECT__TRACKING"));
			func_465(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_666(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_56(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_668(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_667(joaat("STATUS_EFFECT__POISON"));
			func_668(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_668(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_573() // Position - 0x10BDF Hash - 0x57305A7F ^0x41946F5D
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_669(Global_1956875.f_1431.f_107, false);
}

void func_574(float fParam0, int iParam1) // Position - 0x10C08 Hash - 0x6AFE3513 ^0x6AFE3513
{
	float num;
	int num2;
	int num3;

	num = func_670(13, 2);
	num2 = func_671(num);
	num = num + fParam0;
	num = func_672(num, 0f, 100f);
	num3 = func_671(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_152();
		func_85(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_673(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

BOOL func_575() // Position - 0x10C7B Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_576(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x10C88 Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == bParam5)
		{
			Global_1913444.f_4[i /*6*/].f_1 = Global_1913444.f_4[i /*6*/].f_1 + iParam1;
			return;
		}
	}

	if (Global_1913444.f_3 < 19)
	{
		Global_1913444.f_4[Global_1913444.f_3 /*6*/] = hParam0;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_1 = iParam1;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_2 = bParam2;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_3 = bParam3;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_4 = bParam4;
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = bParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_577(BOOL bParam0, var uParam1, var uParam2) // Position - 0x10DAB Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_578(Hash hParam0, int iParam1) // Position - 0x10DC2 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_182(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

char* func_579(Hash hParam0) // Position - 0x10DE1 Hash - 0xFBA883FB ^0x75957D7
{
	if (func_108(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_108(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_108(hParam0, 143267379))
		return "collectible_coins";

	if (func_108(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_108(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_108(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_108(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_108(hParam0, 781094263))
		return "collectible_flowers";

	if (func_108(hParam0, -352095726) || func_108(hParam0, -2014783736) || func_108(hParam0, -545064757) || func_108(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_580(Hash hParam0) // Position - 0x10EDD Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_108(hParam0, -189374246))
		if (func_674(hParam0, -1305775593) || func_674(hParam0, 1384151091) || func_674(hParam0, 2075388272) || func_674(hParam0, -1738780413))
			return true;

	if (func_108(hParam0, -753854379) || func_108(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_581(Hash hParam0) // Position - 0x10F5C Hash - 0x339D45CE ^0x339D45CE
{
	switch (hParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
	
		default:
		
	}

	return true;
}

Hash func_582(Hash hParam0) // Position - 0x10F83 Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_182(hParam0, 0))
		return 0;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (outData.f_18[i /*2*/].f_1 == 14460646)
				if (outData.f_18[i /*2*/] != 0)
					return outData.f_18[i /*2*/];
		}
	}

	return 0;
}

BOOL func_583(Hash hParam0, Hash hParam1) // Position - 0x10FF1 Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

int func_584(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x11022 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_182(hParam0, 0) && !func_305(func_196(hParam0), 2))
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

 func_585(Hash hParam0, int iParam1) // Position - 0x11081 Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_675(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_586(Hash hParam0, char* sParam1) // Position - 0x1109F Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_182(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_676(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_677(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_678(hParam0), 128);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return false;

	TEXT_LABEL_APPEND_STRING(&unk, " - ", 128);
	lengthOfLiteralString = lengthOfLiteralString + HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);
	TEXT_LABEL_APPEND_STRING(&unk, sParam1, 128);

	if (lengthOfLiteralString >= 127)
		return false;

	*sParam1 = { unk };
	return true;
}

const char* func_587(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1111C Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_588(const char* sParam0, int iParam1) // Position - 0x11130 Hash - 0xB0CFF0C3 ^0x2AC413B
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_493(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

BOOL func_589() // Position - 0x11166 Hash - 0xA30B23E7 ^0xAB29D7A2
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_680(func_679(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_681(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_590(int iParam0) // Position - 0x111C5 Hash - 0x29A8F290 ^0x82294867
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_591(int iParam0) // Position - 0x111D5 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

Hash func_592(Hash hParam0) // Position - 0x111E5 Hash - 0xADA620BC ^0xEF3A3B3A
{
	Hash outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_238(outSlotId);
}

Hash func_593() // Position - 0x11208 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_1676;
}

int func_594(BOOL bParam0) // Position - 0x11217 Hash - 0x4F98C57 ^0x1385EECF
{
	var unk;
	int num;
	var unk15;
	Hash hash;
	int num2;
	int num3;
	var unk19;

	unk.f_9 = joaat("SLOTID_NONE");
	num = 0;
	unk15 = { func_186(joaat("WARDROBE"), func_247(true), joaat("SLOTID_WARDROBE"), true) };
	hash = func_392(unk15, 552979403, true, -1);

	if (hash != 0)
	{
		if (hash == joaat("clothing_mp_female_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		else if (hash == joaat("clothing_mp_male_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_MALE");
	
		return num;
	}

	unk19 = { func_543(0, joaat("SLOTID_NONE"), 552979403, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_545(&unk19, &num2, &num3, true))
	{
		if (num3 > 0 && func_417(&unk, 0, num2, num3))
		{
			if (unk.f_4 == joaat("clothing_mp_female_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
			}
			else if (unk.f_4 == joaat("clothing_mp_male_player_character"))
			{
				num = joaat("MPC_PLAYER_TYPE_MP_MALE");
			}
			else
			{
				func_419(num2);
				return 0;
			}
		
			if (bParam0)
				func_393(unk, true, false);
		
			func_419(num2);
			return num;
		}
	
		func_419(num2);
	}

	return 0;
}

Hash func_595(int iParam0) // Position - 0x11324 Hash - 0xB8EC44B7 ^0x7FF5C9C2
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
	
		case 2:
			return 97391779;
	
		case 3:
			return -808817534;
	
		case 4:
			return 1270922359;
	
		case 5:
			return -2011879201;
	
		case 6:
			return -1063340820;
	
		case 7:
			return 2127262701;
	
		case 8:
			return -1323870201;
	
		case 9:
			return 1632140501;
	
		case 10:
			return 967218463;
	
		default:
		
	}

	return 0;
}

int func_596(Hash hParam0) // Position - 0x113C1 Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_182(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

struct<10> func_597(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x113FB Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_598(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x114CF Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_599(Hash hParam0) // Position - 0x114F0 Hash - 0x5E6E1858 ^0xE905275C
{
	!func_182(hParam0, 0);

	if (func_108(hParam0, -393037696))
		return true;

	return false;
}

int func_600(int iParam0) // Position - 0x11516 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_601(Hash hParam0, BOOL bParam1) // Position - 0x11537 Hash - 0xBBDA5425 ^0xA1FB11AD
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

void func_602(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x115D9 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_603(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1160A Hash - 0x88E96348 ^0x46451541
{
	int i;
	BOOL flag;

	if (*iParam1 <= 0)
	{
		*iParam1 = 0;
		return false;
	}

	if (Global_1953292.f_3352.f_26 <= 1)
	{
		Global_1953292.f_3352.f_26 = 0;
		*iParam1 = 0;
		Global_1953292.f_3352[0] = 0;
		return true;
	}

	for (i = 0; i <= Global_1953292.f_3352.f_26 - 1; i = i + 1)
	{
		if (hParam0 == Global_1953292.f_3352[i])
			flag = true;
	
		if (flag && i < Global_1953292.f_3352.f_26 - 1)
			Global_1953292.f_3352[i] = Global_1953292.f_3352[i + 1];
	}

	if (flag)
	{
		Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 - 1;
		*iParam1 = *iParam1 - 1;
		Global_1953292.f_3352[Global_1953292.f_3352.f_26] = 0;
		func_484(hParam0, true, bParam2);
	}

	return flag;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_604(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0x116EA Hash - 0xF5A6EBD3 ^0xB19C08FF
{
	Hash hash;
	int num;
	BOOL flag;
	Hash hash2;
	int num2;
	int num3;

	num3 = 0;
	num2 = func_610(iParam6);
	num2.f_1 = hParam1;
	num2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num2);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num2, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 2049745650);
	*uParam2 = flag;

	if (!flag && !bParam3)
		func_683(hParam0, func_682(hash), true, true, bParam7);

	if (flag)
	{
		if (iParam9 != 8)
			func_386(-1);
	
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, -1212855483))
			num3 = func_682(hash);
	}

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1409451727))
		{
		}
		else
		{
			hash2 = hash;
			num = func_239(hash2, 1);
		
			if (num < 0 || num > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, joaat("Component")))
			{
			}
			else
			{
				hParam0->f_1[num /*3*/] = hash;
			
				if (flag)
					func_684(hash2, 16, 6);
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1441384))
						hParam0->f_1[num /*3*/].f_1 = joaat("base");
					else
						goto 0x16A;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1194786549))
					if (func_685(hash2) && func_520(hParam0->f_1[num /*3*/], hash2, &hash))
						hParam0->f_1[num /*3*/].f_1 = hash;
				else
					hParam0->f_1[num /*3*/].f_1 = hash;
			}
		}
	}

	num = 16;

	if (flag)
	{
		if (!bParam8)
			func_687(hParam0, num3, func_686(hParam1) != 0, iParam9);
	}
	else if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_686(hParam0->f_1[34 /*3*/]) == 0 && !func_231(32) && !func_231(64))
	{
		hParam0->f_1[num /*3*/] = func_616(-1293064293, 0);
		hParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_389(hParam0, hParam0->f_1[num /*3*/], num, false, iParam9);
	}

	if (bParam4)
		*hParam0 = hParam1;

	return true;
}

void func_605(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4, Hash hParam5) // Position - 0x11919 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = iParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = hParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_606(var uParam0, int iParam1) // Position - 0x11948 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_607(var uParam0, int iParam1, int iParam2) // Position - 0x11959 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_608(int iParam0, int iParam1) // Position - 0x1196C Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_609(int iParam0, int iParam1) // Position - 0x1197D Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

int func_610(int iParam0) // Position - 0x11990 Hash - 0x4840ACEF ^0x81C8BA00
{
	if (iParam0 == 0)
		iParam0 = func_379();

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return -1806335803;
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return -971050805;

	return 0;
}

void func_611(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x119CC Hash - 0x3F8569B2 ^0x210C3509
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 12;
	hash = hParam0->f_1[num /*3*/];

	if (func_108(hash, 160827531) || func_121(hash) == 81053684)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	return;
}

void func_612(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x11A2F Hash - 0x5D9C216F ^0x7A27103D
{
	int num;

	if (bParam1)
		return;

	num = 11;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam0->f_1[num /*3*/], -93469181))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	return;
}

void func_613(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x11A94 Hash - 0xD866F2E0 ^0x10CD7BBC
{
	int num;

	if (bParam1)
		return;

	num = 10;

	if (-525676072 == func_121(hParam0->f_1[num /*3*/]))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	return;
}

BOOL func_614(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x11AE1 Hash - 0x1514A216 ^0x8B5540D1
{
	Hash hash;

	hash = func_121(hParam0);

	if (iParam2 == 0)
		return hash == 1759215194 || hash == 344283346;

	return !bParam1 && hash == -1740828670 || hash == 344283346;
}

BOOL func_615(int iParam0) // Position - 0x11B2E Hash - 0xB39D195A ^0x26136171
{
	return Global_17418.f_55.f_664.f_1734 && iParam0 != false;
}

Hash func_616(Hash hParam0, int iParam1) // Position - 0x11B46 Hash - 0xD36D7E4E ^0x5FDE473
{
	int num;
	int num2;
	int num3;
	var unk;

	num3 = 0;
	unk = { func_543(0, joaat("SLOTID_NONE"), hParam0, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_545(&unk, &num, &num2, true))
	{
		if (num2 > 0)
			num3 = func_688(num, num2, iParam1);
	
		func_419(num);
	}

	return num3;
}

void func_617(Hash hParam0, int iParam1) // Position - 0x11B93 Hash - 0x91DC8CCD ^0x83C6C8B8
{
	int num;
	BOOL flag;

	num = 16;
	flag = false;

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	func_387(num, iParam1);

	if (hParam0->f_1[num /*3*/].f_1 == -1539589426 || hParam0->f_1[num /*3*/].f_1 == 1334603721)
		return;

	if (hParam0->f_1[num /*3*/].f_1 == 0 || hParam0->f_1[num /*3*/].f_1 == joaat("base"))
	{
		if (func_519(hParam0->f_1[num /*3*/], flag, -1539589426) >= 0)
		{
			hParam0->f_1[num /*3*/].f_1 = -1539589426;
			return;
		}
	}

	if (func_519(hParam0->f_1[num /*3*/], flag, 1334603721) >= 0)
		hParam0->f_1[num /*3*/].f_1 = 1334603721;

	return;
}

void func_618(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x11C59 Hash - 0x40A062A0 ^0xFAF44654
{
	int num;

	if (bParam1)
		return;

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, -1527414429) && !func_108(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/].f_1 == 1530758430 || hParam0->f_1[num /*3*/].f_1 == 1334603721 && func_108(hParam2, -985549034))
	{
		if (hParam0->f_1[num /*3*/].f_1 == 1530758430)
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_387(num, iParam3);
		}
		else if (hParam0->f_1[num /*3*/].f_1 == 1334603721)
		{
			hParam0->f_1[num /*3*/].f_1 = -1539589426;
			func_387(num, iParam3);
		}
	}

	return;
}

void func_619(Hash hParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x11D61 Hash - 0xACD9DBFF ^0x9A6E665B
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	if (hParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		num = 34;
		hash = hParam0->f_1[num /*3*/];
	
		if (func_108(hash, 1583165364))
		{
			hParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_387(iParam2, iParam3);
		}
		else
		{
			num = 35;
			hash = hParam0->f_1[num /*3*/];
		
			if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_121(hash))
			{
				hParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_387(iParam2, iParam3);
			}
		}
	}

	return;
}

void func_620(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x11E43 Hash - 0xCE5028CB ^0xB60DB9E1
{
	int num;
	Hash hash;

	num = 16;
	func_387(num, iParam3);
	num = 18;
	hash = hParam0->f_1[num /*3*/];

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_108(hParam2, 1889502862) && func_121(hash) == 698653232)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
		else if (func_108(hParam2, 449467137) && func_121(hash) == 912453393)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
		else
		{
			func_387(num, iParam3);
		}
	}

	if (bParam1)
	{
		num = 21;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			func_387(num, iParam3);
			func_512(hParam0, false, hParam0->f_1[num /*3*/], iParam3);
		}
	
		num = 17;
	
		if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && hParam0->f_1[num /*3*/].f_1 == 289238755)
		{
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	
		return;
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, 1126863852))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, -985549034))
		if (hParam0->f_1[num /*3*/].f_1 == 1530758430)
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
		else if (hParam0->f_1[num /*3*/].f_1 == 1334603721)
			hParam0->f_1[num /*3*/].f_1 = -1539589426;

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, -1527414429) && !func_108(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

void func_621(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x120B0 Hash - 0xECEB911D ^0x9A8DDBFB
{
	int num;

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_387(num, iParam3);

	if (bParam1)
		return;

	num = 12;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && !func_108(hParam0->f_1[num /*3*/], -1303648999))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 13;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 25;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, 675650051))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

BOOL func_622(int iParam0) // Position - 0x121C4 Hash - 0xF59F0C09 ^0x24088083
{
	return Global_1953292.f_1676.f_1[func_239(iParam0, 1) /*3*/] != Global_1953292.f_83[func_239(iParam0, 1) /*12*/];
}

void func_623(Hash hParam0, int iParam1) // Position - 0x121EE Hash - 0xCA6DCF0B ^0x61DC2CB2
{
	int num;

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam1);
	}

	num = 20;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_387(num, iParam1);

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_108(hParam0->f_1[num /*3*/], -928740153))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
		}
		else
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	
		func_387(num, iParam1);
	}

	return;
}

void func_624(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x122B9 Hash - 0xDFA7EB0B ^0x40890D8A
{
	int num;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (bParam1)
		return;

	flag = false;
	flag2 = false;

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_121(hParam0->f_1[18 /*3*/]) != 912453393)
		{
			hParam0->f_1[num /*3*/] = func_616(Global_1953292.f_83[num /*12*/].f_9, 0);
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}

	num = 36;
	func_387(num, iParam3);

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, -1473580422))
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_108(hash, 1469783911))
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
		}
		else if (func_519(hParam0->f_1[num /*3*/], flag2, -2081918609) != -1)
		{
			hParam0->f_1[num /*3*/].f_1 = -2081918609;
		}
		else
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && hParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_121(hash) == 912453393)
		{
			flag = true;
		
			if (func_108(hParam2, 1583165364))
			{
				hParam0->f_1[num /*3*/].f_1 = -2081918609;
				func_387(num, iParam3);
			}
		}
	}

	num = 20;
	hash = hParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/])
		if (func_121(hash) == 1868067663 && func_108(hParam2, -1016441646))
			func_689(hParam0, num, iParam3);
		else if (flag)
			func_387(num, iParam3);

	num = 34;

	if (1759215194 == func_121(hParam0->f_1[num /*3*/]))
		func_387(16, iParam3);

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, -1650340550))
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_121(hash) == 1769055947)
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}

	return;
}

void func_625(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x12561 Hash - 0xB469B457 ^0x8B431766
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_121(hParam0->f_1[18 /*3*/]) != 912453393)
		{
			hParam0->f_1[num /*3*/] = func_616(Global_1953292.f_83[num /*12*/].f_9, 0);
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_108(hParam0->f_1[num /*3*/], -2093434733))
			func_631(hParam0, iParam3, true, false);
		else if (func_108(hParam2, 1718965018))
			hParam0->f_1[num /*3*/].f_1 = joaat("base");

	func_387(num, iParam3);
	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 20;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (func_108(hash, 1090938458) && func_108(hParam2, 475297062))
			func_689(hParam0, num, iParam3);
	}

	return;
}

void func_626(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x126C2 Hash - 0xBF53216D ^0xF222A515
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	func_387(36, iParam2);
	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (hParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/])
		{
			num = 16;
			hParam0->f_1[num /*3*/] = func_616(Global_1953292.f_83[num /*12*/].f_9, 0);
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam2);
		}
	}

	num = 20;
	hash = hParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_108(hash, 353024991))
		func_689(hParam0, num, iParam2);

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_121(hParam0->f_1[num /*3*/]))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	return;
}

void func_627(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x12877 Hash - 0xA299C777 ^0x2B6FCFBA
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 20;
	hash = hParam0->f_1[num /*3*/];

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_121(hash) == 294388917)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 18;
	hash = hParam0->f_1[num /*3*/];

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_121(hash) == 912453393)
		{
			if (hParam0->f_1[num /*3*/].f_1 != joaat("base"))
			{
				hParam0->f_1[num /*3*/].f_1 = joaat("base");
				func_387(num, iParam3);
			}
		}
		else
		{
			hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			hParam0->f_1[num /*3*/].f_1 = 0;
			func_387(num, iParam3);
		}
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_108(hParam0->f_1[num /*3*/], -2093434733))
			func_631(hParam0, iParam3, true, false);
		else if (func_108(hParam2, 1718965018))
			hParam0->f_1[num /*3*/].f_1 = joaat("base");

	return;
}

void func_628(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x12AB2 Hash - 0x1E46B0A9 ^0x1BAB244E
{
	int num;

	if (bParam1)
		return;

	num = 20;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_689(hParam0, num, iParam2);

	num = 21;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 16;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 29;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 35;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_108(hParam0->f_1[num /*3*/], -2093434733))
		{
			func_631(hParam0, iParam2, true, false);
		}
		else
		{
			hParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_387(num, iParam2);
		}
	}

	return;
}

void func_629(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x12CAA Hash - 0x5B6170DC ^0xD9A8FB92
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 34;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_387(num, iParam3);
	}

	num = 36;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/].f_1 = -2081918609;
		func_387(num, iParam3);
	}

	num = 37;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_108(hParam2, -1278198125))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	num = 18;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = hParam0->f_1[num /*3*/];
	
		if (912453393 == func_121(hash) && hParam0->f_1[num /*3*/].f_1 != -2081918609)
		{
			hParam0->f_1[num /*3*/].f_1 = -2081918609;
			func_387(num, iParam3);
		}
	}

	return;
}

void func_630(Hash hParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x12DC7 Hash - 0x24AAAC6C ^0x8A4DF257
{
	int num;

	if (bParam1)
		return;

	num = 37;

	if (func_108(hParam2, -1278198125) && hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam3);
	}

	return;
}

void func_631(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12E26 Hash - 0x5D4D0F7B ^0xD4757168
{
	int num;

	num = 36;

	if (bParam2)
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam1);
	}

	num = 37;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam1);
	}

	num = 38;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam1);
	}

	num = 35;

	if (bParam3 && -923693316 == func_121(hParam0->f_1[num /*3*/]))
	{
		hParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam1);
	}

	return;
}

void func_632(Hash hParam0, int iParam1, int iParam2) // Position - 0x12F1D Hash - 0x9DADBD7B ^0xD8EA8C97
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	return;
}

void func_633(Hash hParam0, int iParam1) // Position - 0x12F41 Hash - 0x9E628A6B ^0xBF78A72D
{
	int i;

	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_632(&hParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_634(BOOL bParam0, int iParam1, int iParam2) // Position - 0x12F92 Hash - 0x2B8C80AA ^0xBEDF1A8D
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_635(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x12FDD Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_59(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_437(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

struct<29> func_636(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1302B Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_59(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_642(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_637(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x130C6 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_431(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_433(func_690(num, hParam0, panParam1), num, panParam1);
	else
		return func_434(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_638(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x13130 Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_59(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_642(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_639(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x131B3 Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_433(func_691(num, hParam0, panParam1), num, panParam1);
	else
		return func_434(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_640(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x13203 Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_59(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_642(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_641(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x13278 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_431(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_433(func_692(num, hParam0, panParam1), num, panParam1);
	else
		return func_434(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

struct<17> func_642(var uParam0, BOOL bParam1) // Position - 0x132E2 Hash - 0x76921103 ^0xA9DF955B
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

	if (bParam1)
	{
		unk.f_15 = func_183(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_394() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_643() // Position - 0x13363 Hash - 0xA584E02B ^0xA584E02B
{
	return func_91(Global_1051268);
}

BOOL func_644(int iParam0) // Position - 0x13375 Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_645(int iParam0, int iParam1) // Position - 0x133BD Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_428(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_693())
		return func_428(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_428(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_646(Player plParam0) // Position - 0x13431 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_647(Player plParam0) // Position - 0x1344E Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_694(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_695(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_648(Any* panParam0) // Position - 0x134D1 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

void func_649(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x13507 Hash - 0xBC161045 ^0xD3B33F74
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_696(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

void func_650(Any* panParam0) // Position - 0x135E3 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

int func_651() // Position - 0x135F9 Hash - 0x451321BF ^0xEF0A3B85
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_652(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x1360E Hash - 0x1A324EB1 ^0xE8AB3DDD
{
	var unk;

	uParam0.f_2 = iParam5;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &uParam0);
	return unk;
}

int func_653(int iParam0, var uParam1) // Position - 0x1362C Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_442(iParam0);

	return -1;
}

BOOL func_654() // Position - 0x13646 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

void func_655(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x13655 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_163(*uParam0);
	i = func_164(*uParam0);
	j = func_165(*uParam0);
	k = func_153(*uParam0);
	l = func_166(*uParam0);
	m = func_167(*uParam0);

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
	
		num3 = func_168(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_169(uParam0, m, l, k, j, i, num);
	return;
}

int func_656(int iParam0, int iParam1) // Position - 0x137C8 Hash - 0xAECFF2CE ^0x28AB7A26
{
	if (iParam1 == 2)
		iParam1 = func_176(2);

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

int func_657(int iParam0, int iParam1) // Position - 0x13818 Hash - 0xAECFF2CE ^0xA6B4AB7D
{
	if (iParam1 == 2)
		iParam1 = func_176(2);

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

BOOL func_658(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1386A Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_697(iParam1) || !func_697(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_659(int iParam0, int iParam1, int iParam2) // Position - 0x13897 Hash - 0x7E1E307C ^0xC0CC80A4
{
	if (iParam2 == 2)
		iParam2 = func_176(2);

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

void func_660(int iParam0, int iParam1, int iParam2) // Position - 0x138ED Hash - 0x7E1E307C ^0x81E4DDD9
{
	if (iParam2 == 2)
		iParam2 = func_176(2);

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

BOOL func_661(Ped pedParam0, int iParam1, float fParam2) // Position - 0x13943 Hash - 0xD72B3B3A ^0x22A28347
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_698(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_662(int iParam0, int iParam1, int iParam2) // Position - 0x13998 Hash - 0x9FB0AAD8 ^0x433FFF3E
{
	if (iParam2 == 2)
		iParam2 = func_176(2);

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

void func_663(Ped pedParam0, int iParam1, float fParam2) // Position - 0x139F9 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_699(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_700(iParam1), fParam2, -1);

	return;
}

void func_664(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x13A25 Hash - 0xD1E7435D ^0x45C01A35
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_176(2);

	num = Global_1295666.f_16;
	func_701(iParam0, fParam1, iParam3);

	if (bParam2)
		func_702(iParam0, num, iParam3);

	return;
}

BOOL func_665(int iParam0) // Position - 0x13A5B Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_666(int iParam0) // Position - 0x13A8A Hash - 0x21CE226B ^0xC5191BBC
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

void func_667(int iParam0) // Position - 0x13AC5 Hash - 0x5D78382 ^0x8F13B3A8
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
		num3 = func_703(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_704(num);
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

void func_668(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13B95 Hash - 0x5C29635D ^0x5C29635D
{
	func_571(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

BOOL func_669(int iParam0, BOOL bParam1) // Position - 0x13BAF Hash - 0x10DE2364 ^0x10DE2364
{
	return func_658(func_152(), iParam0, bParam1);
}

float func_670(int iParam0, int iParam1) // Position - 0x13BC3 Hash - 0x422268C7 ^0x22464E0E
{
	if (iParam1 == 2)
		iParam1 = func_176(1);

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

int func_671(float fParam0) // Position - 0x13C0F Hash - 0x991CF40A ^0x6EC613A5
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_672(float fParam0, float fParam1, float fParam2) // Position - 0x13C3A Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_673(int iParam0, float fParam1, int iParam2) // Position - 0x13C61 Hash - 0x91D240B ^0x31A81242
{
	if (!func_705(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_176(2);

	func_706(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

BOOL func_674(Hash hParam0, Hash hParam1) // Position - 0x13CB2 Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

int func_675(Hash hParam0, int iParam1) // Position - 0x13CD9 Hash - 0x193BF536 ^0xD3271214
{
	var outData;
	int num;
	int outIndex;
	int i;

	outData = 20;
	num = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
			{
				num = outData[i /*2*/];
				return num;
			}
		}
	}

	return 0;
}

char* func_676(Hash hParam0) // Position - 0x13D27 Hash - 0x40E070C8 ^0xFF889216
{
	Hash labelHash;

	if (!func_182(hParam0, 0))
		return "";

	labelHash = func_492(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_677(Hash hParam0) // Position - 0x13D5D Hash - 0xB0090776 ^0x189C4477
{
	if (func_121(hParam0) == -126813555 || func_121(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_678(Hash hParam0) // Position - 0x13D8B Hash - 0xB15BC7E7 ^0xF85BF8BC
{
	Hash labelHash;

	if (!func_182(hParam0, 0))
		return "";

	labelHash = func_582(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

Ped func_679(int iParam0) // Position - 0x13DC0 Hash - 0x829B7265 ^0xE21C4F30
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_680(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13DD0 Hash - 0x586BF778 ^0x586BF778
{
	int num;

	num = func_296(hParam1, bParam2, false, false);
	num = num + func_707(pedParam0, hParam1);

	if (bParam3)
		num = num + func_708(hParam1, bParam4);

	return num;
}

void func_681(int iParam0) // Position - 0x13E05 Hash - 0x1B4614B0 ^0x73E476F0
{
	if (!func_182(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_200(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

int func_682(int iParam0) // Position - 0x13E8A Hash - 0x34CDD129 ^0x4B6C5D
{
	switch (iParam0)
	{
		case -1932005642:
			return 131072;
	
		case -1925540957:
			return 65536;
	
		case -1886898087:
			return 32880;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 32768;
	
		case -1629261761:
			return 2049;
	
		case -1283403230:
			return 4096;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 65601;
	
		case -915377750:
			return 2048;
	
		case -884591393:
			return 96;
	
		case -803648582:
			return 128;
	
		case -663436545:
			return 112;
	
		case -597281578:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
	
		case 75507907:
			return 16384;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
	
		case 351949263:
			return 262144;
	
		case 396349281:
			return 2097152;
	
		case 465720259:
			return 1048576;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 40960;
	
		case 884232794:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 8192;
	
		case 1042019528:
			return 2160;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 2050534155:
			return 48;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_683(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1402D Hash - 0x7FE551F ^0xCF526C14
{
	int i;
	Hash hash;
	Hash hash2;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_709(&hParam0->f_1[i /*3*/], 2))
		{
			if (func_710(i, iParam1))
			{
				hash2 = { func_711(i, -1) };
			
				if (!bParam4 && hash2 != Global_1953292.f_83[i /*12*/] && hash2 != 0 && hParam0->f_1[i /*3*/] != hash2 || hParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					hParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_712(i, 4))
					func_713(i, 4, 6);
			}
			else
			{
				if (bParam3)
					func_714(i, 4, 6);
			
				goto 0xCD;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1953292.f_83[i /*12*/];
			hParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

void func_684(Hash hParam0, int iParam1, int iParam2) // Position - 0x14106 Hash - 0x10354A04 ^0x626AEEF7
{
	Global_1953292.f_83[func_239(hParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_239(hParam0, 1) /*12*/].f_11 || iParam1;
	return;
}

BOOL func_685(Hash hParam0) // Position - 0x14133 Hash - 0xA5B8FD07 ^0xA62D1647
{
	int num;
	var unk;

	Global_1953292.f_1039.f_2 = 0;
	num = 1226838104;
	func_605(&(Global_1953292.f_1039), num, -367421157, 1409451727, 1, hParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953292.f_1039));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1953292.f_1039), 1409451727))
		return false;

	return true;
}

int func_686(Hash hParam0) // Position - 0x1418C Hash - 0xE1F3DDAE ^0x5813B139
{
	var outData;
	int num;

	if (!func_182(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, 761377030, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

void func_687(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x141C6 Hash - 0x5B22F0B4 ^0xB19405C9
{
	int i;
	BOOL flag;

	if (func_108(hParam0->f_1[34 /*3*/], -166674229))
		return;

	for (i = 0; i < 39; i = i + 1)
	{
		flag = func_712(i, 16);
	
		if (flag)
			func_713(i, 16, 9);
	
		if (Global_1953292.f_83[i /*12*/].f_3[0] == joaat("MISSING") || hParam0->f_1[i /*3*/] == 0)
		{
		}
		else
		{
			if (flag)
				func_387(i, iParam3);
		
			if (!bParam2 && func_686(hParam0->f_1[i /*3*/]) != 0)
			{
			}
			else if (func_710(i, iParam1) && !flag)
			{
				hParam0->f_1[i /*3*/] = Global_1953292.f_83[i /*12*/];
				hParam0->f_1[i /*3*/].f_1 = 0;
				func_389(hParam0, hParam0->f_1[i /*3*/], i, true, iParam3);
				func_387(i, iParam3);
			}
			else if (flag && !bParam2)
			{
				func_389(hParam0, hParam0->f_1[i /*3*/], i, false, iParam3);
			}
		}
	}

	return;
}

int func_688(int iParam0, int iParam1, int iParam2) // Position - 0x142D2 Hash - 0xFE41A884 ^0x917B03C
{
	int i;
	var unk;
	Hash hash;
	int metapedType;

	unk.f_9 = joaat("SLOTID_NONE");
	metapedType = 0;

	if (func_379() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	iParam2 = iParam2 | 28;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (!func_417(&unk, i, iParam0, iParam1))
		{
		}
		else if (func_715(unk.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(unk.f_4, metapedType, true) == 0)
		{
		}
		else if (func_686(unk.f_4) != 0)
		{
		}
		else if (func_108(unk.f_4, -166674229))
		{
		}
		else if (func_108(unk.f_4, 525391395))
		{
		}
		else
		{
			hash = func_121(unk.f_4);
		
			if (func_717(iParam2, func_716(hash)))
			{
			}
			else
			{
				return unk.f_4;
			}
		}
	}

	return 0;
}

void func_689(Hash hParam0, int iParam1, int iParam2) // Position - 0x1439F Hash - 0x9F574CE5 ^0xC9B47479
{
	int num;

	if (func_108(hParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_502(hParam0, hParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		hParam0->f_1[iParam1 /*3*/] = Global_1953292.f_83[iParam1 /*12*/];
		hParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_387(iParam1, iParam2);
	}

	num = 17;

	if (hParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && hParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		hParam0->f_1[num /*3*/].f_1 = 0;
		func_387(num, iParam2);
	}

	return;
}

BOOL func_690(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x14433 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_691(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1444A Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_692(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x14461 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

int func_693() // Position - 0x14478 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_694(Player plParam0) // Position - 0x14487 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_695(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_695(Player plParam0) // Position - 0x144F3 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

void func_696(int iParam0) // Position - 0x1452E Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_718(&(iParam0->f_4));
	return;
}

BOOL func_697(int iParam0) // Position - 0x14551 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_167(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_166(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_153(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_163(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_164(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_165(iParam0);

	if (num6 < 1 || num6 > func_168(num5, num4))
		return false;

	return true;
}

int func_698(int iParam0) // Position - 0x1462D Hash - 0x26AB94C2 ^0x26AB94C2
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

char* func_699(int iParam0) // Position - 0x1465C Hash - 0x21CE226B ^0x1AF04B91
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

char* func_700(int iParam0) // Position - 0x14697 Hash - 0x21CE226B ^0xC653CA2A
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

void func_701(int iParam0, float fParam1, int iParam2) // Position - 0x146D2 Hash - 0xB327C991 ^0xFEB529B
{
	if (iParam2 == 2)
		iParam2 = func_176(2);

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

void func_702(int iParam0, int iParam1, int iParam2) // Position - 0x14724 Hash - 0x7E1E307C ^0x5642EBD7
{
	if (iParam2 == 2)
		iParam2 = func_176(2);

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

int func_703(int iParam0, int iParam1) // Position - 0x1477A Hash - 0x26934C66 ^0x26934C66
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

// Unhandled jump detected. Output should be considered invalid
int func_704(int iParam0) // Position - 0x14F7B Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_719(iParam0))
		return 0;

	num = func_703(iParam0, 1);

	if (!func_720(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_721(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_722(iParam0, num2))
		{
			case 0:
				func_723(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_723(num2, iParam0, i);
						func_724(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_724(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_725(num2, 1);
		func_726(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_727(num3, 0);
		
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
	func_728(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

BOOL func_705(int iParam0) // Position - 0x1520B Hash - 0x969D658D ^0x969D658D
{
	if (func_665(iParam0))
		return true;
	else if (func_729(iParam0))
		return true;

	return false;
}

void func_706(int iParam0, float fParam1, int iParam2) // Position - 0x15231 Hash - 0xF69206DE ^0x1EC60A3A
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_176(1);

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

int func_707(Ped pedParam0, Hash hParam1) // Position - 0x1528D Hash - 0x83F00AF7 ^0x32031FF8
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_730(hParam1))
		{
			num = 0;
		
			for (i = 0; i < 3; i = i + 1)
			{
				if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
					num = num + 1;
			}
		
			return num;
		}
		else
		{
			return func_731(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_708(Hash hParam0, BOOL bParam1) // Position - 0x152EB Hash - 0x19ACB934 ^0xDEF82372
{
	if (!bParam1 || func_732())
		return func_246(hParam0, func_247(true), -2015960939, true, true, false);

	return 0;
}

BOOL func_709(var uParam0, int iParam1) // Position - 0x1531A Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_710(int iParam0, int iParam1) // Position - 0x1532B Hash - 0xEE6DCA90 ^0xB0C7528A
{
	if (iParam0 < 0 || iParam0 >= 39)
		return false;

	return Global_1953292.f_83[iParam0 /*12*/].f_10 && iParam1 != false;
}

Vector3 func_711(int iParam0, int iParam1) // Position - 0x1535A Hash - 0xC0396140 ^0x90919964
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

BOOL func_712(int iParam0, int iParam1) // Position - 0x1538D Hash - 0xECB143B0 ^0xBA414228
{
	return Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1 != false;
}

void func_713(int iParam0, int iParam1, int iParam2) // Position - 0x153A6 Hash - 0xF59FAE7F ^0x9B3AA80E
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 - Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1;
	return;
}

void func_714(int iParam0, int iParam1, int iParam2) // Position - 0x153D6 Hash - 0x5033A276 ^0xAD3736DE
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 || iParam1;
	return;
}

BOOL func_715(Hash hParam0) // Position - 0x153F9 Hash - 0x620CA239 ^0xCC576E0
{
	return hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != -230310728 && hParam0 != 1326838792 && !func_599(hParam0);
}

int func_716(Hash hParam0) // Position - 0x1542F Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case -1740828670:
			return 8;
	
		case 344283346:
			return 16;
	
		case 502936876:
			return 1;
	
		case 684307653:
			return 2;
	
		case 1759215194:
			return 4;
	
		default:
		
	}

	return 0;
}

BOOL func_717(int iParam0, int iParam1) // Position - 0x15474 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_718(var uParam0) // Position - 0x15483 Hash - 0x58FD8C3D ^0x7E71AD66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

BOOL func_719(int iParam0) // Position - 0x154DF Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_703(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_720(int iParam0) // Position - 0x15507 Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_721(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_721(int iParam0, int iParam1) // Position - 0x1552F Hash - 0x89B5041A ^0x89B5041A
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

int func_722(int iParam0, int iParam1) // Position - 0x15BE6 Hash - 0x39669B5F ^0xB47C98D2
{
	Player player;
	Player player2;
	int num;

	player = func_733(iParam0);
	player2 = Global_1295666;
	num = func_725(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (player2 == player)
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
			if (player2 == player)
				return 1;
			break;
	}

	return 2;
}

int func_723(int iParam0, int iParam1, int iParam2) // Position - 0x15C69 Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_719(iParam1))
		return 0;

	if (!func_734(iParam0))
		return 0;

	num = func_725(iParam0, 1);
	func_735(iParam0, iParam1, iParam2);

	if (func_736(Global_1156111.f_35859.f_3116[num /*31*/]) && func_737(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_738(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_739(num2))
			if (func_740(num2, num2.f_1, num2.f_2))
				func_741(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_742(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_742(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_724(int iParam0) // Position - 0x15D61 Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_725(int iParam0, int iParam1) // Position - 0x15D77 Hash - 0x9DD4188 ^0x9DD4188
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

void func_726(int iParam0, int iParam1) // Position - 0x16628 Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_727(int iParam0, int iParam1) // Position - 0x16657 Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_728(int iParam0) // Position - 0x16673 Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

BOOL func_729(int iParam0) // Position - 0x166A1 Hash - 0x830CD3BA ^0x830CD3BA
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

BOOL func_730(Hash hParam0) // Position - 0x166C6 Hash - 0xDB8363F2 ^0xB30A7F5C
{
	if (!func_583(hParam0, 1955773996))
		return false;

	if (!func_743(hParam0, 1))
		return false;

	return true;
}

int func_731(int iParam0, Hash hParam1) // Position - 0x166F1 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_182(hParam1, 0))
		return 0;

	guid = { func_744(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_732() // Position - 0x1672F Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_745(vehicleOwnedByPlayer))
		return false;

	return true;
}

Player func_733(int iParam0) // Position - 0x1677E Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_746(iParam0))
		return func_747(iParam0) % 32;

	return Global_1295666;
}

BOOL func_734(int iParam0) // Position - 0x1679F Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_725(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_735(int iParam0, int iParam1, int iParam2) // Position - 0x167C7 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_703(iParam1, 1);
	num2 = func_725(iParam0, 1);
	num3 = func_721(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_748(num4, 1);
	
		if (!func_749(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_750(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_751(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_752(num6))
		{
		}
		else
		{
			num7 = func_753(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_754(num6);
			}
		}
	}

	return 1;
}

BOOL func_736(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x169B8 Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_737(int iParam0, int iParam1) // Position - 0x169C6 Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_734(iParam0))
		return false;

	if (!func_755(iParam1))
		return false;

	num = func_756(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_738(int iParam0) // Position - 0x16A06 Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_757(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_739(int iParam0, var uParam1, var uParam2) // Position - 0x16A42 Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_734(iParam0))
		return false;

	if (!func_719(iParam0.f_1))
		return false;

	if (!func_758(iParam0.f_2))
		return false;

	return true;
}

BOOL func_740(int iParam0, int iParam1, int iParam2) // Position - 0x16A79 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_703(iParam1, 1);
	num2 = func_725(iParam0, 1);
	num3 = func_721(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_748(num4, 1);
	
		if (!func_749(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_750(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_759(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_752(num6))
		{
		}
		else if (!func_760(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_753(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_761(num6);
			}
		}
	}

	func_762(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_741(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x16CA7 Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_755(iParam0))
		return;

	num = func_756(iParam0, 1);

	if (!func_734(iParam1))
		return;

	if (!func_719(iParam2))
		return;

	if (!func_758(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_742(int iParam0) // Position - 0x16D26 Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_755(iParam0))
		return;

	num = func_756(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_743(Hash hParam0, int iParam1) // Position - 0x16D7B Hash - 0xC9BD5171 ^0xC9BD5171
{
	int num;

	num = func_763(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

struct<4> func_744(int iParam0, Hash hParam1) // Position - 0x16D9A Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_764(iParam0) };
	return func_765(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_745(Vehicle veParam0) // Position - 0x16DBC Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_746(int iParam0) // Position - 0x16DDB Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_703(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_747(int iParam0) // Position - 0x16E02 Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_703(iParam0, 1);

	if (func_746(iParam0))
		return num - 2;
	else if (func_766(iParam0))
		return num - 130;
	else if (func_767(iParam0))
		return num - 166;
	else if (func_768(iParam0))
		return num - 167;
	else if (func_769(iParam0))
		return num - 172;
	else if (func_770(iParam0))
		return num - 180;
	else if (func_771(iParam0))
		return num - 150;

	return -1;
}

int func_748(int iParam0, int iParam1) // Position - 0x16E9C Hash - 0x40BB17AB ^0x40BB17AB
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

BOOL func_749(int iParam0) // Position - 0x172D5 Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_748(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_750(int iParam0) // Position - 0x172FD Hash - 0xB1BB29D1 ^0xBD921763
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_772(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_751(int iParam0) // Position - 0x1732D Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_749(iParam0))
		return;

	num = func_748(iParam0, 1);

	if (!func_773(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_774(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_775(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_752(int iParam0) // Position - 0x1750C Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_753(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_753(int iParam0, int iParam1) // Position - 0x17534 Hash - 0x49B3A5C3 ^0x49B3A5C3
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

void func_754(int iParam0) // Position - 0x17844 Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_777();
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
			func_776();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_780(func_779(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_773(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_773(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_778(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_778(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_143(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_778(iParam0));
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
			func_781();
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
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_778(iParam0));
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

BOOL func_755(int iParam0) // Position - 0x17A54 Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_756(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_756(int iParam0, int iParam1) // Position - 0x17A7B Hash - 0xD3D45784 ^0xD3D45784
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

int func_757(int iParam0) // Position - 0x17AD8 Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_782(iParam0);
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
		num3 = func_725(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_783(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_784(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_758(int iParam0) // Position - 0x17C1C Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_759(int iParam0) // Position - 0x17C3A Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_749(iParam0))
		return;

	num = func_748(iParam0, 1);

	if (!func_773(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_774(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_775(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_760(int iParam0) // Position - 0x17D8F Hash - 0x69745F36 ^0x4581B133
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_785(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_761(int iParam0) // Position - 0x17DB9 Hash - 0xE1E3399D ^0xAAA920BB
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
			func_777();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_776();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_779(iParam0);
			func_787(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_773(16);
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
			func_773(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_778(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_778(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_143(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_779(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_786(iParam0, 0));
			func_787(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_786(iParam0, 1));
			func_787(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_786(iParam0, 2));
			func_787(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_786(iParam0, 3));
			func_787(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_778(iParam0));
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
			func_788();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_779(iParam0);
			func_787(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_778(iParam0));
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

void func_762(int iParam0) // Position - 0x18055 Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_789(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_790(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

int func_763(Hash hParam0) // Position - 0x1809F Hash - 0x1E74E236 ^0xF004CA87
{
	int outSatchelItemSize;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	return outSatchelItemSize;
}

struct<5> func_764(int iParam0) // Position - 0x180B9 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_765(iParam0, joaat("character"), func_394(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_765(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x180E6 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_182(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

BOOL func_766(int iParam0) // Position - 0x18113 Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_703(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_767(int iParam0) // Position - 0x1813B Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_703(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_768(int iParam0) // Position - 0x18163 Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_703(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_769(int iParam0) // Position - 0x1818B Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_703(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_770(int iParam0) // Position - 0x181B3 Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_703(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_771(int iParam0) // Position - 0x181DB Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_703(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_772(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x18203 Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_791(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_773(int iParam0) // Position - 0x18239 Hash - 0xCFB57BFC ^0xD6F1E06
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

BOOL func_774(int iParam0) // Position - 0x182A8 Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_775(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_775(int iParam0, int iParam1) // Position - 0x182CF Hash - 0xAF8796DC ^0xAF8796DC
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

void func_776() // Position - 0x1832C Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_265(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_777() // Position - 0x1838E Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_778(int iParam0) // Position - 0x183BE Hash - 0xE5247562 ^0x6A86A68F
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

int func_779(int iParam0) // Position - 0x18406 Hash - 0x21FAF347 ^0xA1AE9E4F
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

void func_780(int iParam0) // Position - 0x18441 Hash - 0x2CE3A2A0 ^0xF0457356
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

void func_781() // Position - 0x18481 Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_782(int iParam0) // Position - 0x184A1 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_755(iParam0))
		return -1;

	num = func_756(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_783(int iParam0, int iParam1) // Position - 0x184D0 Hash - 0xB2431B7B ^0xEC29640E
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_734(iParam0))
		return false;

	num = func_725(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_736(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_756(num2, 1) /*3*/];
		unk = { func_784(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_733(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_733(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_792())
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
		
			player = func_733(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_733(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_540(Global_1295666.f_149[player]))
				return false;
		
			if (!func_531(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_792() && !func_793())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_784(int iParam0) // Position - 0x187A5 Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_725(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_785(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x187C9 Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_791(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_786(int iParam0, int iParam1) // Position - 0x187FF Hash - 0xD9A01784 ^0x27147D46
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

void func_787(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x18858 Hash - 0x4DFFD3F3 ^0xFBF31414
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

void func_788() // Position - 0x188DD Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_789(int iParam0) // Position - 0x18902 Hash - 0xDEB3DA4B ^0x73C3DBC0
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_790(int iParam0) // Position - 0x18923 Hash - 0xDEB3DA4B ^0x58DC9B22
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_791(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x18944 Hash - 0xBD123D0 ^0xD5CDFAB
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
		uParam2->f_10.f_3 = func_794(num2);
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

BOOL func_792() // Position - 0x18B66 Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

BOOL func_793() // Position - 0x18B74 Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_91(func_90(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_644(*Global_524288.f_39632))
		return true;

	return false;
}

int func_794(int iParam0) // Position - 0x18BBF Hash - 0xF3C27EA9 ^0xF3C27EA9
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

