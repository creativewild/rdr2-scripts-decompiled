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
	char* sLocal_14 = 0;
	char* sLocal_15 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x181BBE58 ^0x18B90492
{
	var unk;
	BOOL flag;
	float num;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "props_misc@campfires@5_logs";
	sLocal_15 = "Script_PropCampfire";
	unk = 6;
	unk.f_7 = 6;
	unk.f_26.f_29 = 1;
	unk.f_57 = 7;
	unk.f_57.f_21 = -1;
	unk.f_57.f_22 = 1;
	unk.f_57.f_23 = 1;
	unk.f_57.f_36 = 1;
	unk.f_57.f_37 = -1;
	unk.f_57.f_41 = 4;
	unk.f_57.f_46 = 4;
	unk.f_57.f_57 = 1;
	unk.f_150 = 16191;
	unk.f_151 = 131136;
	unk.f_154 = -1;
	unk.f_156 = -1;
	unk.f_162 = 18;
	unk.f_186 = 6;
	unk.f_187 = -1;
	unk.f_191 = joaat("prop_player_sleep_tent_a_frame");
	unk.f_197 = -1;
	unk.f_207 = -1;
	unk.f_208 = 1;
	unk.f_210 = joaat("p_campfire02x_combo");
	unk.f_212.f_9 = 1084227584;
	unk.f_212.f_10 = 1073741824;
	unk.f_212.f_30 = 1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_1(&unk);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_1(&unk);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	unk.f_249 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };
	unk.f_252 = TASK::_GET_SCENARIO_POINT_HEADING(anScriptParam_0.f_1, true);

	if (func_2(&unk))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_1(&unk);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	flag = false;

	while (!func_3(true) && !flag)
	{
		switch (unk.f_211)
		{
			case 0:
				num = func_4(Global_35, unk.f_249, true);
			
				if (!func_5() || num < 6400f)
				{
					func_6(&(unk.f_151), 131072);
					func_7(&unk, anScriptParam_0.f_2);
					STREAMING::REQUEST_MODEL(unk.f_210, false);
					func_8(&(unk.f_211), 1);
				}
				break;
		
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(unk.f_210))
					func_8(&(unk.f_211), 2);
				break;
		
			case 2:
				unk.f_152 = OBJECT::CREATE_OBJECT(unk.f_210, unk.f_249, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(unk.f_152, unk.f_252);
				unk.f_248 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), unk.f_249, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				func_8(&(unk.f_211), 3);
				break;
		
			case 3:
				if (func_2(&unk))
				{
					flag = true;
				}
				else
				{
					num = func_4(Global_35, unk.f_249, true);
				
					if (num < func_9() || !unk.f_212.f_34)
						func_10(&(unk.f_212), &(unk.f_152));
				
					if (!func_11(Global_1935630, 2097152))
						if (num < func_12())
							func_13(&unk, false);
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&unk);
	SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
	return;
}

void func_1(var uParam0) // Position - 0x2BC Hash - 0xEC0950E0 ^0x67F0632A
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
		OBJECT::DELETE_OBJECT(&(uParam0->f_152));

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_248))
		VOLUME::DELETE_VOLUME(uParam0->f_248);

	func_14(uParam0, true);
	return;
}

BOOL func_2(var uParam0) // Position - 0x2F1 Hash - 0xE818C4D8 ^0x2F04C3A2
{
	int gameTimer;
	int num;

	gameTimer = MISC::GET_GAME_TIMER();

	if (gameTimer - uParam0->f_253 > 1000)
	{
		num = func_15(uParam0->f_249);
	
		if (func_16(num, 8))
			return true;
	
		if (func_16(num, 1) || uParam0->f_254)
			if (func_16(uParam0->f_150, 8192))
				func_17(&(uParam0->f_150), 64);
		else if (func_16(num, 2) && !uParam0->f_254)
			if (!func_16(uParam0->f_150, 8192))
				func_17(&(uParam0->f_150), 128);
		else if (func_18(0, false, true) && !func_19())
			if (func_16(uParam0->f_150, 8192))
				func_17(&(uParam0->f_150), 64);
		else if (!uParam0->f_254)
			if (!func_16(uParam0->f_150, 8192))
				func_17(&(uParam0->f_150), 128);
	
		if (func_16(num, 32))
			func_20(uParam0, 1, 0, 0, 0, 0, 0);
		else if (func_16(num, 4))
			func_20(uParam0, 0, 1, 0, 0, 0, 0);
		else if (func_16(num, 16))
			func_20(uParam0, 0, 0, 1, 0, 0, 0);
		else if (func_16(num, 64))
			func_20(uParam0, 0, 0, 0, 1, 0, 0);
		else if (func_16(num, 128))
			func_20(uParam0, 0, 0, 0, 0, 1, 0);
		else if (func_16(num, 256))
			func_20(uParam0, 0, 0, 0, 0, 0, 1);
	
		uParam0->f_253 = gameTimer;
	}

	return false;
}

BOOL func_3(BOOL bParam0) // Position - 0x476 Hash - 0xD5646B1 ^0x7FAD7A3A
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	return false;
}

float func_4(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x4D2 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_21(entityCoords, vParam1);
}

BOOL func_5() // Position - 0x522 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_22() != -1;
}

void func_6(BOOL bParam0, int iParam1) // Position - 0x53D Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_7(var uParam0, int iParam1) // Position - 0x552 Hash - 0xE8BBB882 ^0xEB3B530B
{
	if (func_23() == -1)
	{
		if (!func_24(4))
		{
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			return;
		}
	}

	switch (iParam1)
	{
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE"):
			func_6(&(uParam0->f_150), 7435);
		
			if (func_25(joaat("upgrade_upg_coffee_kit"), 1, false))
				func_17(&(uParam0->f_150), 1);
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE_IN_TOWNS"):
			func_6(&(uParam0->f_150), 7435);
		
			if (func_25(joaat("upgrade_upg_coffee_kit"), 1, false))
				func_17(&(uParam0->f_150), 1);
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_IN_TOWNS"):
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_CARAVAN"):
			func_6(&(uParam0->f_150), 6402);
		
			if (func_25(joaat("upgrade_upg_coffee_kit"), 1, false))
				func_17(&(uParam0->f_150), 1);
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_TWOPOINT"):
			func_6(&(uParam0->f_150), 6402);
		
			if (func_25(joaat("upgrade_upg_coffee_kit"), 1, false))
				func_17(&(uParam0->f_150), 1);
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT_IN_TOWNS"):
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE"):
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_254 = 1;
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_DFLT"):
			func_6(&(uParam0->f_150), 267);
		
			if (func_25(joaat("upgrade_upg_coffee_kit"), 1, false))
				func_17(&(uParam0->f_150), 1);
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT"):
			func_6(&(uParam0->f_150), 8075);
			func_17(&(uParam0->f_150), 64);
			uParam0->f_212.f_4 = 1;
			uParam0->f_254 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_8(var uParam0, int iParam1) // Position - 0x704 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

float func_9() // Position - 0x711 Hash - 0x8E2CC967 ^0xCD9D7783
{
	if (func_11(Global_1935630, 2097152))
		return 1600f;

	if (func_5())
		if (func_22() == 5)
			return 3600f;
		else
			return 6400f;

	return 10000f;
}

void func_10(var uParam0, var uParam1) // Position - 0x757 Hash - 0xC4918888 ^0x444C63FE
{
	float value;
	float rainLevel;

	value = 0.019f;
	func_26(uParam0);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		rainLevel = MISC::GET_RAIN_LEVEL();
	
		if (rainLevel > 0f && uParam0->f_9 >= 1f && !uParam0->f_3)
			func_27(uParam0, 4);
		else if (uParam0->f_5)
			func_27(uParam0, 0);
		else if (uParam0->f_2)
			func_27(uParam0, 2);
		else if (uParam0->f_3)
			func_27(uParam0, 5);
		else if (uParam0->f_6)
			func_27(uParam0, 6);
		else if (uParam0->f_7)
			func_27(uParam0, 7);
		else if (uParam0->f_8)
			func_27(uParam0, 8);
		else if (func_29(&(uParam0->f_31), func_28()))
			func_30(uParam0);
	}

	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
		
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) == false)
				*uParam0 = *uParam1;
			else
				uParam0->f_30 = 2;
			break;
	
		case 2:
			if (uParam0->f_1)
			{
				func_27(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_14);
				STREAMING::REQUEST_MOVE_NETWORK_DEF(sLocal_15);
			}
			else
			{
				if (uParam0->f_5)
					func_27(uParam0, 0);
				else if (uParam0->f_2)
					func_27(uParam0, 2);
				else if (uParam0->f_3)
					func_27(uParam0, 5);
				else if (uParam0->f_6)
					func_27(uParam0, 6);
				else if (uParam0->f_7)
					func_27(uParam0, 7);
				else if (uParam0->f_8)
					func_27(uParam0, 8);
				else
					func_27(uParam0, 0);
			
				uParam0->f_35 = 1;
			}
		
			GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(*uParam0, 20);
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
		
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, false);
			}
		
			uParam0->f_30 = 3;
			break;
	
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_14) && STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(sLocal_15))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_15, 0f, false, sLocal_14, 128);
				uParam0->f_30 = 5;
			}
		
			func_31(&(uParam0->f_31));
			break;
	
		case 4:
			uParam0->f_34 = 1;
			break;
	
		case 5:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
	
		case 6:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
		
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
			{
				uParam0->f_34 = 1;
			
				if (uParam0->f_1 && MISC::GET_RAIN_LEVEL() <= 0f)
					if (uParam0->f_9 <= 2f)
						uParam0->f_30 = 0;
					else if (TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(*uParam0, "BurnPhase") <= 0f || TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(*uParam0, "BurnPhase") >= 1f)
						uParam0->f_30 = 8;
					else
						TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", value);
				else
					uParam0->f_30 = 0;
			}
			break;
	
		case 7:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "AddLogFinished"))
					uParam0->f_30 = 8;
			break;
	
		case 8:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam0, "CollapseLog");
					uParam0->f_24 = uParam0->f_24 + (1f / 5f);
					uParam0->f_30 = 9;
				}
			}
			break;
	
		case 9:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", value);
			
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = uParam0->f_21 - (1f / 5f);
					uParam0->f_22 = uParam0->f_22 - (0.5f / 5f);
					uParam0->f_25 = uParam0->f_25 - (1f / 5f);
					uParam0->f_26 = uParam0->f_26 - (1f / 5f);
					uParam0->f_27 = uParam0->f_27 - (1.55f / 5f);
					uParam0->f_9 = uParam0->f_9 - 1f;
				
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
				
					uParam0->f_30 = 6;
				}
			}
			break;
	
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			break;
	}

	return;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0xC4C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_12() // Position - 0xC5B Hash - 0x43D5F559 ^0x43D5F559
{
	if (func_5())
		if (func_22() == 5)
			return 400f;
		else
			return 1600f;

	return 6400f;
}

int func_13(var uParam0, BOOL bParam1) // Position - 0xC8A Hash - 0xFC7A9E0E ^0x4580FA22
{
	int num;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Hash activeDynamicScenario2;
	char* conditionalAnim;

	if (!func_32(Global_35, 0))
		return 0;

	func_33(uParam0);

	if (uParam0->f_153 > 4 && uParam0->f_153 < 13)
		func_34(false);

	if (uParam0->f_153 > 3)
	{
		if (uParam0->f_153 != 8 && uParam0->f_153 != 13 && uParam0->f_153 != 4 && uParam0->f_154 != 5)
		{
			CAM::_0x18C3DFAC458783BB();
			func_35(uParam0);
		}
	}
	else
	{
		if (uParam0->f_153 == 3)
		{
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				num = func_36(uParam0);
			
				if (num >= 0 && num <= 3)
					func_35(uParam0);
			}
			else if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_26)))
			{
				CAM::_CAM_DESTROY(&(uParam0->f_26));
			}
		}
	
		if (func_16(uParam0->f_151, 64))
		{
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			func_6(&(uParam0->f_151), 64);
		}
	}

	if (func_16(uParam0->f_151, 2097152))
	{
		if (func_37(Global_35, true, 0, false) != joaat("WEAPON_UNARMED"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("holsterweapon")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				func_6(&(uParam0->f_151), 2097152);
			}
		}
	}

	switch (uParam0->f_153)
	{
		case 0:
			if (func_38(uParam0))
				func_39(uParam0);
		
			func_40(uParam0);
			uParam0->f_57.f_31 = 1;
			uParam0->f_57.f_32 = func_16(uParam0->f_150, 8);
			func_41(uParam0, 1);
			break;
	
		case 1:
			if (func_38(uParam0))
				func_39(uParam0);
		
			if (func_42(uParam0))
				func_41(uParam0, 2);
			break;
	
		case 2:
			if (func_38(uParam0))
				func_39(uParam0);
		
			if (func_43(uParam0))
				func_41(uParam0, 3);
			break;
	
		case 3:
			if (func_38(uParam0))
			{
				AUDIO::_STOP_AUDIO_SCENESET("Player_Campfire_Scenes");
				func_44(&(uParam0->f_57), true);
				func_45(&(uParam0->f_57), 2);
				func_39(uParam0);
			}
		
			func_46(uParam0);
		
			if (bParam1)
				return 1;
		
			func_47(8388608);
		
			if (!func_16(uParam0->f_150, 8192))
				func_48(2048);
			else
				func_49(2048);
		
			if (!func_16(uParam0->f_151, 131072))
			{
				func_48(1024);
			}
			else
			{
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[5]))
				{
					if (_IS_NULL_VECTOR(uParam0->f_188))
						uParam0->f_188 = { 2.526f, 2.68f, 0f };
				
					offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), ENTITY::GET_ENTITY_HEADING(uParam0->f_152), uParam0->f_188) };
					uParam0->f_7[5 /*3*/] = { offsetFromCoordAndHeadingInWorldCoords + { 1f, 0f, 0f } };
					uParam0->[5] = TASK::FIND_SCENARIO_OF_TYPE_HASH(offsetFromCoordAndHeadingInWorldCoords, uParam0->f_191, 1.5f, 0, false);
				}
			
				func_49(1024);
			}
		
			if (MISC::GET_GAME_TIMER() - uParam0->f_194 >= 500)
			{
				if (func_51(uParam0))
					func_17(&(uParam0->f_151), 4194304);
				else
					func_6(&(uParam0->f_151), 4194304);
			
				uParam0->f_194 = MISC::GET_GAME_TIMER();
			}
		
			if (func_52(Global_35, uParam0->f_152, true) > 36f)
			{
				func_53(uParam0);
				func_54(uParam0);
				func_55(8388608);
			
				if (!func_16(uParam0->f_151, 131072))
					func_49(1024);
			
				func_41(uParam0, 4);
			
				if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_26)))
					CAM::_CAM_DESTROY(&(uParam0->f_26));
			
				return 0;
			}
		
			if (func_56(2097152) || func_16(uParam0->f_150, 64))
			{
				if (func_16(uParam0->f_150, 8192))
				{
					func_57(uParam0, false);
					func_6(&(uParam0->f_150), 8192);
				}
			
				func_55(2097152);
				func_6(&(uParam0->f_150), 64);
			}
			else if (func_56(4194304) || func_16(uParam0->f_150, 128))
			{
				if (!func_16(uParam0->f_150, 8192))
				{
					func_57(uParam0, true);
					func_17(&(uParam0->f_150), 8192);
				}
			
				func_55(4194304);
				func_6(&(uParam0->f_150), 128);
			}
		
			func_58(uParam0);
		
			if (func_16(uParam0->f_151, 1))
			{
				func_41(uParam0, 6);
				uParam0->f_157 = 10;
				func_17(&(uParam0->f_151), 64);
				HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
				break;
			}
		
			uParam0->f_154 = func_36(uParam0);
		
			if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
			{
				func_59();
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			}
		
			if (func_60(uParam0->f_154 == 4) && uParam0->f_154 != -1 || func_16(uParam0->f_151, 131072) && func_56(268435456) && func_56(16777216) && Global_1392040.f_2)
			{
				uParam0->f_155 = func_61();
				HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
				func_17(&(uParam0->f_151), 64);
				func_41(uParam0, 5);
			
				if (func_56(16777216) || func_16(uParam0->f_151, 524288) || Global_1392040.f_2)
				{
					if (func_56(268435456))
					{
						Global_1392040.f_2 = 0;
						func_55(16777216);
						func_45(&(uParam0->f_57), 2);
						func_62(uParam0, 0);
						func_41(uParam0, 10);
					}
				}
				else if (func_23() == -1)
				{
					if (func_24(4) && !func_18(0, false, true))
						func_63(99, true);
				}
			
				func_54(uParam0);
			}
			else
			{
				func_64(uParam0);
				func_65(uParam0);
			
				if (!func_66(4) && !func_56(536870912) && func_16(uParam0->f_150, 8192))
				{
					if (func_16(uParam0->f_151, 4194304) && func_52(Global_35, uParam0->f_152, true) <= 9f)
					{
						uParam0->f_185 = func_67(HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
						HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 3f, 0, 1, 1754796591, uParam0->f_185, 2);
					}
					else if (func_16(uParam0->f_151, 131072) && func_52(Global_35, uParam0->f_152, true) > 9f && func_52(Global_35, uParam0->f_152, true) < 25f)
					{
						uParam0->f_185 = func_67(0);
					
						if (!HUD::_UI_PROMPT_DOES_AMBIENT_GROUP_EXIST(1754796591))
							HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 5f, 0, 1, -523698323, uParam0->f_185, 2);
					}
				}
			
				if (func_56(16777216) && func_16(uParam0->f_151, 131072) || func_16(uParam0->f_151, 524288))
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						if (uParam0->f_197 != -1 && MISC::GET_GAME_TIMER() - uParam0->f_197 > 1000)
						{
							func_55(16777216);
							func_6(&(uParam0->f_151), 524288);
							uParam0->f_197 = -1;
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
							uParam0->f_157 = 0;
						}
						else
						{
							uParam0->f_157 = 2;
							func_68(uParam0);
							uParam0->f_197 = MISC::GET_GAME_TIMER();
						
							if (func_56(268435456))
							{
								func_55(16777216);
								func_6(&(uParam0->f_151), 524288);
								func_17(&(uParam0->f_151), 64);
								HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
								func_45(&(uParam0->f_57), 2);
								func_62(uParam0, 0);
								func_41(uParam0, 10);
							}
						}
					}
					else if (uParam0->f_157 == 2)
					{
						if (MISC::GET_GAME_TIMER() - uParam0->f_197 > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
							func_55(16777216);
							func_6(&(uParam0->f_151), 524288);
							uParam0->f_197 = -1;
							uParam0->f_157 = 0;
						}
					}
					else if (uParam0->f_154 == 5)
					{
						func_41(uParam0, 9);
					}
				}
			}
			break;
	
		case 4:
			if (func_38(uParam0))
				func_39(uParam0);
		
			if (func_52(Global_35, uParam0->f_152, true) <= 36f)
				func_41(uParam0, 3);
			break;
	
		case 5:
			if (func_38(uParam0))
			{
				AUDIO::_START_AUDIO_SCENESET("idle", "Player_Campfire_Scenes");
				func_39(uParam0);
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE"), false);
			func_69();
			func_58(uParam0);
		
			if (func_70(uParam0->f_162[17]) && func_71(uParam0->f_162[17], true) && func_72())
			{
				func_73(&Global_43907, 4);
			}
			else if (!func_60(true) || func_74(&Global_43907, 8))
			{
				func_34(false);
				uParam0->f_156 = -1;
				func_75(uParam0, 0);
			
				if (func_74(&Global_43907, 8))
				{
					func_17(&(uParam0->f_151), 262144);
					func_41(uParam0, 13);
				}
				else
				{
					func_76();
					func_41(uParam0, 3);
				}
			}
			else
			{
				if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
					func_59();
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397) || func_77() == 1)
					func_75(uParam0, false);
				else
					func_75(uParam0, true);
			
				func_78(uParam0);
			
				if (uParam0->f_157 == 1 || func_79(uParam0, false, 0, -1))
				{
					func_76();
				
					if (uParam0->f_157 != 10)
						func_75(uParam0, false);
					else
						func_53(uParam0);
				
					if (uParam0->f_157 == 2)
					{
						if (uParam0->f_154 == 5)
						{
							func_41(uParam0, 9);
						}
						else
						{
							func_45(&(uParam0->f_57), 2);
							func_62(uParam0, 0);
							func_41(uParam0, 10);
						}
					}
					else if (uParam0->f_157 == 0)
					{
						func_41(uParam0, 13);
					}
					else if (uParam0->f_157 == 12 || uParam0->f_157 == 11)
					{
						func_41(uParam0, 11);
					}
					else
					{
						if (uParam0->f_157 == 1)
							uParam0->f_57.f_84 = uParam0->f_57.f_84 - 1;
					
						func_41(uParam0, 6);
					}
				}
			}
			break;
	
		case 6:
			if (func_38(uParam0))
				func_39(uParam0);
		
			if (uParam0->f_154 != -1 && uParam0->f_154 != 5)
			{
				func_59();
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 2000 && !func_16(uParam0->f_151, 4) && uParam0->f_157 != 1)
			{
				if (func_79(uParam0, true, uParam0->f_157, uParam0->f_156))
				{
					if (uParam0->f_157 == 0)
					{
						func_41(uParam0, 13);
						func_53(uParam0);
						return 0;
					}
					else
					{
						func_75(uParam0, false);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
					}
				}
			}
		
			if (func_80(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || func_16(uParam0->f_151, 1))
			{
				if (uParam0->f_157 == 10 || func_16(uParam0->f_151, 1))
				{
					uParam0->f_156 = -1;
					AUDIO::_START_AUDIO_SCENESET("Fade_To_Black", "Sleep_Respawn_Scenes");
					func_41(uParam0, 8);
				}
				else if (uParam0->f_154 == uParam0->f_156 || uParam0->f_156 == -1 || uParam0->f_157 == 1)
				{
					if (uParam0->f_157 != 0)
						uParam0->f_155 = uParam0->f_157;
				
					if (uParam0->f_156 != -1)
						uParam0->f_154 = uParam0->f_156;
					else
						uParam0->f_154 = func_36(uParam0);
				
					uParam0->f_156 = -1;
				
					if (uParam0->f_157 == 1)
					{
						uParam0->f_157 = 6;
						uParam0->f_155 = 6;
						uParam0->f_162[8] = func_81("DRINK", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
						func_82(uParam0->f_162[8], -1067771379, 0, true);
						func_83(uParam0->f_162[8], 10, true, true);
						func_84(uParam0->f_162[8], false, true);
						func_41(uParam0, 12);
					}
					else
					{
						func_41(uParam0, 5);
					}
				}
			}
			break;
	
		case 7:
			if (func_38(uParam0))
			{
				func_39(uParam0);
			
				switch (uParam0->f_155)
				{
					case 7:
						func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
						break;
				
					case 8:
						func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
						break;
				}
			}
		
			func_94(uParam0);
			break;
	
		case 8:
			if (func_38(uParam0))
				func_39(uParam0);
		
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT() && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -954213463))
				CAM::DO_SCREEN_FADE_OUT(1000);
		
			if (func_16(uParam0->f_151, 1) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_195, false) || CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
				func_53(uParam0);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_193))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_193, true, false))
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_193, true))
							ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_193);
					}
					else
					{
						func_100(Global_36);
						Global_40.f_9 = 0;
						func_101(false, 7);
						func_6(&(uParam0->f_151), 1);
						AUDIO::_SET_AUDIO_SCENESET("Clouds", "Sleep_Respawn_Scenes");
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_193);
						AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_START");
						func_102(14, true);
						func_103();
					
						if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[5]))
							uParam0->[5] = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_7[5 /*3*/], uParam0->f_191, 1f, 0, false);
					
						if (uParam0->f_191 == joaat("prop_player_sleep_tent_a_frame"))
							conditionalAnim = "PROP_PLAYER_SLEEP_TENT_MALE_A";
						else
							conditionalAnim = "WORLD_PLAYER_SLEEP_BEDROLL_ARTHUR";
					
						func_6(&(uParam0->f_151), 4);
						TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[5], conditionalAnim, 0, false, true, 0, false, -1082130432, false);
					
						if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_26)))
							CAM::_CAM_DESTROY(&(uParam0->f_26));
					
						func_104(true);
						CLOCK::ADVANCE_CLOCK_TIME_TO(uParam0->f_186, 0, 0);
						TELEMETRY::_TELEMETRY_SLEEP(uParam0->f_186);
					
						if (!func_18(0, false, true))
							MISC::SET_RANDOM_WEATHER_TYPE(true, true);
					
						func_105(1);
						func_106(Global_36, 300f, false, false);
						func_107(-1, false, 0, false, false);
						func_108(0);
						func_109(PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::PLAYER_ID()));
						uParam0->f_156 = -1;
						func_17(&(uParam0->f_151), 1048576);
						PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
						func_41(uParam0, 3);
					}
				}
				else
				{
					func_41(uParam0, 3);
				}
			}
			break;
	
		case 9:
			if (func_38(uParam0))
				func_39(uParam0);
		
			if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (func_85(uParam0))
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
			
				CAM::DO_SCREEN_FADE_OUT(1500);
			}
		
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (uParam0->f_154 != 0)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
					TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, false, true, 0, false, -1082130432, false);
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					uParam0->f_154 = 0;
				}
				else if (MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
					func_95(77.236f, -5.6759f);
					func_45(&(uParam0->f_57), 2);
					func_62(uParam0, 0);
					func_41(uParam0, 10);
				}
			}
			break;
	
		case 10:
			if (func_38(uParam0))
				func_39(uParam0);
		
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			func_96(uParam0);
			func_59();
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		
			if (func_97(uParam0, uParam0->f_155) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_35, true) || FIRE::IS_ENTITY_ON_FIRE(Global_35) || TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_44(&(uParam0->f_57), true);
				ATTRIBUTE::STOP_ITEM_PREVIEW();
			
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_35, true) || FIRE::IS_ENTITY_ON_FIRE(Global_35) || TASK::IS_PED_EXITING_SCENARIO(Global_35, false))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
						CAM::DO_SCREEN_FADE_IN(500);
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
						OBJECT::DELETE_OBJECT(&(uParam0->f_160));
				
					if (func_98(false) && !func_16(uParam0->f_151, 1024))
					{
						if (uParam0->f_149 == 3 || uParam0->f_149 == 4 || uParam0->f_149 == 15 || uParam0->f_149 == 20 || uParam0->f_149 == 7 || uParam0->f_149 == 6 || uParam0->f_149 == 18 || uParam0->f_149 == 19)
						{
							func_99(uParam0->f_57.f_77, 1, true, true, 0);
							func_17(&(uParam0->f_151), 1024);
						}
					}
				
					if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
			
				if (uParam0->f_154 == 4)
				{
					uParam0->f_155 = 9;
					uParam0->f_157 = 9;
				}
				else
				{
					uParam0->f_155 = 6;
					uParam0->f_157 = 6;
				}
			
				func_31(&(uParam0->f_204));
				func_41(uParam0, 5);
			}
			break;
	
		case 11:
			if (func_38(uParam0))
				func_39(uParam0);
		
			activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);
		
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
			{
				if (activeDynamicScenario2 == joaat("world_player_dynamic_camp_fire_kneel_arthur") || activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a") || activeDynamicScenario2 == joaat("prop_player_seat_chair_generic"))
				{
					if (uParam0->f_157 == 12)
					{
						if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_86(false), joaat("document_player_journal"), false))
							INVENTORY::_INVENTORY_ENABLE_ITEM(func_86(false), joaat("document_player_journal"));
					
						func_87(joaat("document_player_journal"), 0, 0, 0, true, false, false);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						uParam0->f_157 = 0;
					}
					else if (uParam0->f_157 == 11)
					{
						func_87(1259508039, 0, 0, 0, true, false, false);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						uParam0->f_157 = 0;
					}
					else
					{
						uParam0->f_157 = 0;
						ATTRIBUTE::STOP_ITEM_PREVIEW();
						func_31(&(uParam0->f_204));
						func_41(uParam0, 5);
					}
				}
				else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a"))
				{
					func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
					uParam0->f_196 = MISC::GET_GAME_TIMER();
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
				{
					func_88(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
					uParam0->f_196 = MISC::GET_GAME_TIMER();
				}
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				{
					func_88(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
					uParam0->f_196 = MISC::GET_GAME_TIMER();
				}
			}
		
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_157 = 0;
				func_41(uParam0, 5);
			}
			break;
	
		case 12:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, joaat("consumable_coffee")), 1, 0, 0, 0);
			activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
			func_89(uParam0, activeDynamicScenario2);
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
			{
				if (func_90())
					func_91(1);
				else if (func_92())
					func_91(0);
			
				func_93(joaat("consumable_coffee"), 1f, true);
			}
		
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500 && activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				func_41(uParam0, 5);
		
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_157 = 0;
				func_41(uParam0, 5);
			}
			break;
	
		case 13:
			if (func_38(uParam0))
			{
				func_48(8192);
				func_39(uParam0);
			}
		
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_49(8192);
				func_44(&(uParam0->f_57), true);
				func_41(uParam0, 3);
			}
			else if (!TASK::IS_PED_EXITING_SCENARIO(Global_35, true))
			{
				func_110(uParam0);
			}
			break;
	
		case 14:
			return 1;
	}

	return 0;
}

void func_14(var uParam0, BOOL bParam1) // Position - 0x1FD4 Hash - 0xAE9A7CF ^0x625EE437
{
	func_53(uParam0);
	func_111(uParam0);
	func_112(uParam0);
	func_54(uParam0);

	if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_26)))
		CAM::_CAM_DESTROY(&(uParam0->f_26));

	if (bParam1)
		func_113(uParam0);

	uParam0->f_197 = -1;
	func_44(&(uParam0->f_57), false);
	return;
}

int func_15(var uParam0, var uParam1, var uParam2) // Position - 0x2020 Hash - 0xBA229321 ^0xD0164888
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_114(Global_1935475[i /*2*/], uParam0))
			return Global_1935475[i /*2*/].f_1;
	}

	return 0;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x205C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_17(BOOL bParam0, int iParam1) // Position - 0x206B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

BOOL func_18(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x207C Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_115())
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
		num = func_116(Global_1898164.f_1[0 /*5*/]);
	
		if (func_117(num) && func_118(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_119(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_19() // Position - 0x2280 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1911914.f_1578;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x228F Hash - 0x8417506 ^0x7C8986D8
{
	uParam0->f_212.f_5 = iParam1;
	uParam0->f_212.f_2 = iParam2;
	uParam0->f_212.f_3 = iParam3;
	uParam0->f_212.f_2 = iParam4;
	uParam0->f_212.f_2 = iParam5;
	uParam0->f_212.f_2 = iParam6;
	return;
}

float func_21(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x22C7 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

eStackSize func_22() // Position - 0x22E5 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_23() // Position - 0x22F3 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_24(int iParam0) // Position - 0x2301 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_120(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_25(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x2360 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_121(hParam0, 0))
		return false;

	num = func_122(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_123(hParam0, 1))
			return false;

	return func_124(hParam0, false, bParam2) >= iParam1;
}

void func_26(var uParam0) // Position - 0x23CA Hash - 0xCEA5AC3E ^0x6A2480E3
{
	BOOL flag;

	flag = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_SET_OBJECT_BURN_SPEED(*uParam0, 0.65f + (uParam0->f_11 * 0.35f), 0.65f + (uParam0->f_11 * 0.35f));
	
		if (flag)
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, false);
	
		if (uParam0->f_1)
		{
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, uParam0->f_12 * 0.5f);
		
			if (flag)
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, false);
		}
	}

	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
			uParam0->f_12 = uParam0->f_21;
		else
			uParam0->f_12 = ((uParam0->f_12 * 15f) + uParam0->f_21) / 16f;
	
		if (MISC::ABSF(uParam0->f_12 - uParam0->f_21) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, uParam0->f_12 * 0.5f);
		}
	}

	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
			uParam0->f_13 = uParam0->f_22;
		else
			uParam0->f_13 = ((uParam0->f_13 * 12f) + uParam0->f_22) / 13f;
	
		if (MISC::ABSF(uParam0->f_13 - uParam0->f_22) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			OBJECT::_SET_OBJECT_BURN_OPACITY(*uParam0, uParam0->f_13);
		}
	}

	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
			uParam0->f_14 = uParam0->f_23;
		else
			uParam0->f_14 = ((uParam0->f_14 * 14f) + uParam0->f_23) / 15f;
	
		if (MISC::ABSF(uParam0->f_14 - uParam0->f_23) < 0.005f && !uParam0->f_35)
			uParam0->f_14 = uParam0->f_23;
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
			OBJECT::_SET_LIGHT_INTENSITY_FOR_OBJECT(*uParam0, uParam0->f_14 * 0.33f);
	}

	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
			uParam0->f_15 = uParam0->f_24;
		else
			uParam0->f_15 = ((uParam0->f_15 * 19f) + uParam0->f_24) / 20f;
	
		if (MISC::ABSF(uParam0->f_15 - uParam0->f_24) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			OBJECT::_SET_OBJECT_BURN_LEVEL(*uParam0, (uParam0->f_15 * 0.9f) + 0.1f, true);
		}
	}

	if (uParam0->f_4)
	{
		if (flag)
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, false);
	}
	else if (uParam0->f_16 != uParam0->f_25 || uParam0->f_35 && flag)
	{
		if (uParam0->f_35)
			uParam0->f_16 = uParam0->f_25;
		else
			uParam0->f_16 = ((uParam0->f_16 * 15f) + uParam0->f_25) / 16f;
	
		if (MISC::ABSF(uParam0->f_16 - uParam0->f_25) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
		
			if (flag)
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_16, false);
		}
	}

	if (uParam0->f_4)
	{
		if (flag)
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, false);
	}
	else if (uParam0->f_17 != uParam0->f_26 || uParam0->f_35 && flag)
	{
		if (uParam0->f_35)
			uParam0->f_17 = uParam0->f_26;
		else
			uParam0->f_17 = ((uParam0->f_17 * 15f) + uParam0->f_26) / 16f;
	
		if (MISC::ABSF(uParam0->f_17 - uParam0->f_26) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
		
			if (flag)
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, false);
		}
	}

	if (uParam0->f_18 != uParam0->f_27 || uParam0->f_35 && flag)
	{
		if (uParam0->f_35)
			uParam0->f_18 = uParam0->f_27;
		else
			uParam0->f_18 = ((uParam0->f_18 * 19f) + uParam0->f_27) / 20f;
	
		if (MISC::ABSF(uParam0->f_18 - uParam0->f_27) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
		
			if (flag)
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, false);
		}
	}

	if (uParam0->f_19 != uParam0->f_28 || uParam0->f_35 && flag)
	{
		if (uParam0->f_35)
			uParam0->f_19 = uParam0->f_28;
		else
			uParam0->f_19 = ((uParam0->f_19 * 19f) + uParam0->f_28) / 20f;
	
		if (MISC::ABSF(uParam0->f_19 - uParam0->f_28) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
		
			if (flag)
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, false);
		}
	}

	if (uParam0->f_18 < 0f)
		uParam0->f_18 = 0f;

	if (uParam0->f_18 > 1f)
		uParam0->f_18 = 1f;

	if (uParam0->f_12 < 0f)
		uParam0->f_12 = 0f;

	if (uParam0->f_12 > 1f)
		uParam0->f_12 = 1f;

	if (uParam0->f_11 < 0.5f)
		uParam0->f_11 = 0.5f;

	if (uParam0->f_11 > 1f)
		uParam0->f_11 = 1f;

	if (flag)
		uParam0->f_35 = 0;

	return;
}

void func_27(var uParam0, int iParam1) // Position - 0x28C8 Hash - 0x9C85BE14 ^0xA4CB5B25
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
	
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
	
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
	
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
	
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
	
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
	
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
	
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}

	return;
}

float func_28() // Position - 0x2B7A Hash - 0xF8C377DF ^0x21D4EE87
{
	if (func_11(Global_1935630, 2097152) || func_22() == 5)
		return 1f;

	return 0.5f;
}

BOOL func_29(var uParam0, float fParam1) // Position - 0x2BA6 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_125(uParam0))
		return false;

	if (func_126(uParam0) > fParam1)
		return true;

	return false;
}

void func_30(var uParam0) // Position - 0x2BCD Hash - 0x449BF52C ^0xF453E01B
{
	int clockHours;

	if (!uParam0->f_1)
	{
		clockHours = CLOCK::GET_CLOCK_HOURS();
	
		if (clockHours >= 2 && clockHours < 4)
			func_27(uParam0, 1);
		else if (clockHours >= 4 && clockHours < 6)
			func_27(uParam0, 2);
		else if (clockHours >= 6 && clockHours < 12)
			func_27(uParam0, 3);
		else if (clockHours >= 12 && clockHours < 17)
			func_27(uParam0, 2);
		else if (clockHours >= 17 && clockHours < 19)
			func_27(uParam0, 1);
		else
			func_27(uParam0, 0);
	
		func_31(&(uParam0->f_31));
	}

	return;
}

void func_31(var uParam0) // Position - 0x2C79 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_127(uParam0, 0f);
	return;
}

BOOL func_32(Ped pedParam0, int iParam1) // Position - 0x2C88 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_128(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_128(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_128(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_128(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_128(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_128(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_128(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_128(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_33(var uParam0) // Position - 0x2D87 Hash - 0x83FCCAB1 ^0x5EB39237
{
	int num;

	if (func_56(16777216) || uParam0->f_153 == 10)
	{
		num = func_36(uParam0);
	
		if (num != -1 && num != 5)
		{
			if (!func_70(uParam0->f_162[10]))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		
			if (!func_70(uParam0->f_162[9]))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}

	return;
}

void func_34(BOOL bParam0) // Position - 0x2E0C Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_129(4);

	func_129(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

void func_35(var uParam0) // Position - 0x2E2E Hash - 0x5DE504EA ^0x21277A8E
{
	var args;
	BOOL flag;
	BOOL flag2;

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
	args.f_8 = 0;
	args.f_14 = 0;
	args.f_3 = uParam0->f_152;
	args = { 0f, 0f, 0.5f };
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &args);
	flag = false;
	flag2 = false;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
		flag2 = true;

	if (!flag2)
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			flag = true;

	if (flag2 || flag && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1206250122))
		if (CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_26)))
			if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_26)))
				CAM::_CAM_CREATE(&(uParam0->f_26));

	return;
}

int func_36(var uParam0) // Position - 0x2F12 Hash - 0x944AB73 ^0xB929DC1
{
	int scenarioPointPedIsUsing;
	int i;

	scenarioPointPedIsUsing = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenarioPointPedIsUsing) && !TASK::IS_PED_EXITING_SCENARIO(Global_35, true))
	{
		for (i = 0; i < 6; i = i + 1)
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
				if (scenarioPointPedIsUsing == uParam0->[i])
					return i;
		}
	}

	return -1;
}

int func_37(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x2F6B Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_38(var uParam0) // Position - 0x2FAD Hash - 0x44744B6C ^0x5D43271A
{
	return func_16(uParam0->f_151, 4096);
}

void func_39(var uParam0) // Position - 0x2FC0 Hash - 0x4C067613 ^0x32989C3E
{
	func_6(&(uParam0->f_151), 4096);
	return;
}

void func_40(var uParam0) // Position - 0x2FD3 Hash - 0x78239B6 ^0xD9F7893F
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_26), "restbyfire_orbit_cam", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_26.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
	return;
}

void func_41(var uParam0, int iParam1) // Position - 0x2FF1 Hash - 0xAF6CF42D ^0xC59196FE
{
	func_17(&(uParam0->f_151), 4096);
	uParam0->f_153 = iParam1;
	return;
}

BOOL func_42(var uParam0) // Position - 0x300A Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_43(var uParam0) // Position - 0x3013 Hash - 0x21D2863B ^0x53925355
{
	Vector3 offsetFromEntityInWorldCoords;
	float heading;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
	{
		if (func_16(uParam0->f_150, 512))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -0.966f, 0.203f, 0f) };
			uParam0->f_7[0 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -99.171f;
			uParam0->[0] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel1"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		if (func_16(uParam0->f_150, 1024))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -0.212f, -1.045f, 0f) };
			uParam0->f_7[1 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -11.405f;
			uParam0->[1] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel2"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		if (func_16(uParam0->f_150, 2048))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, 1.025f, 0.043f, 0f) };
			uParam0->f_7[2 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + 91.78f;
			uParam0->[2] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel3"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		if (func_16(uParam0->f_150, 4096))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, 0.249f, 1.05f, 0f) };
			uParam0->f_7[3 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + 164.29f;
			uParam0->[3] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel4"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		if (func_16(uParam0->f_150, 2))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_152, -1.534f, 0.233f, 0.5f) };
			uParam0->f_7[4 /*3*/] = { offsetFromEntityInWorldCoords + { 0.5f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_152) + -97.186f;
			uParam0->[4] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("prop_player_seat_chair_player_camp"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0->[4], 51, true);
		}
	
		if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[5]))
		{
			offsetFromEntityInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), ENTITY::GET_ENTITY_HEADING(uParam0->f_152), uParam0->f_188) };
			uParam0->f_7[5 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			uParam0->[5] = TASK::FIND_SCENARIO_OF_TYPE_HASH(offsetFromEntityInWorldCoords, uParam0->f_191, 1f, 0, false);
		}
	
		return true;
	}

	return false;
}

void func_44(var uParam0, BOOL bParam1) // Position - 0x3263 Hash - 0xF62B23DA ^0x1DEF6F4F
{
	func_130(uParam0);
	func_131(uParam0, false);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);

	if (func_132())
		func_133(false);

	if (bParam1)
	{
		func_134(uParam0);
		return;
	}

	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_17));

	if (uParam0->f_22)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_70);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_71);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_72);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));

	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1911914.f_1576 = 0;

	if (func_23() == -1)
	{
		func_45(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				func_135(uParam0->f_77, uParam0->f_78);
				func_136(uParam0->f_77, uParam0->f_20);
			}
		}
	
		uParam0->f_21 = -1;
		func_45(uParam0, 0);
	}

	return;
}

void func_45(var uParam0, int iParam1) // Position - 0x3419 Hash - 0x78EEA7AE ^0xE95C8DA9
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		func_137(uParam0);
	}

	return;
}

void func_46(var uParam0) // Position - 0x3436 Hash - 0xBB8AE480 ^0x57472B77
{
	if (!CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_26)))
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_26)))
			CAM::_LOAD_CAMERA_DATA_DICT(&(uParam0->f_26));

	return;
}

void func_47(BOOL bParam0) // Position - 0x345E Hash - 0xA895CE6F ^0xA895CE6F
{
	if (!func_56(bParam0))
		Global_1392040 = Global_1392040 || bParam0;

	return;
}

void func_48(int iParam0) // Position - 0x347B Hash - 0xB79ED875 ^0x4D9B263C
{
	if (!func_66(iParam0))
		Global_1392040.f_1 = Global_1392040.f_1 || iParam0;

	return;
}

void func_49(int iParam0) // Position - 0x349C Hash - 0x81E75DDF ^0x542F32B5
{
	if (func_66(iParam0))
		Global_1392040.f_1 = Global_1392040.f_1 - Global_1392040.f_1 && iParam0;

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x34C3 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_51(var uParam0) // Position - 0x34ED Hash - 0x7BBC2246 ^0xEB93FB10
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;

	func_6(&(uParam0->f_151), 16384);

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	
		if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
		
			if (ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex))
				func_17(&(uParam0->f_151), 16384);
			else
				return false;
		}
		else
		{
			return false;
		}
	}

	if (func_56(134217728) || !func_16(uParam0->f_150, 8192))
		return false;

	if (func_138(Global_35, 0))
		return false;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_195))
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_195, false))
			return false;

	if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "inInspectionMode"))
		return false;

	if (PED::GET_PED_CONFIG_FLAG(Global_35, 227, true))
		return false;

	if (func_139(Global_35))
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return false;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
		return false;

	if (func_140(Global_35) || func_141(Global_35) || func_142(Global_35))
		return false;

	if (!func_143(Global_35, uParam0->f_152, -0.5f))
		return false;

	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_152, true, false), 1.5f) > 2)
		return false;

	return true;
}

float func_52(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x363C Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_21(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

void func_53(var uParam0) // Position - 0x3693 Hash - 0xA0A4F5F6 ^0x2ED6F7D8
{
	int i;

	for (i = 0; i < 18; i = i + 1)
	{
		if (func_70(uParam0->f_162[i]))
			func_144(&uParam0->f_162[i], true, true);
	}

	return;
}

void func_54(var uParam0) // Position - 0x36CB Hash - 0x2286F5DC ^0xCE1C8ABD
{
	func_144(&(uParam0->f_183), true, true);
	func_144(&(uParam0->f_182), true, true);
	func_144(&(uParam0->f_181), true, true);
	return;
}

void func_55(BOOL bParam0) // Position - 0x36F1 Hash - 0x210BBB81 ^0x210BBB81
{
	if (func_56(bParam0))
		Global_1392040 = Global_1392040 - Global_1392040 && bParam0;

	return;
}

BOOL func_56(BOOL bParam0) // Position - 0x3712 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1392040 && bParam0 != false;
}

void func_57(var uParam0, BOOL bParam1) // Position - 0x3723 Hash - 0x1D454455 ^0x2F8956AA
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]) && uParam0->[i] != uParam0->[5])
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0->[i], 8, !bParam1);
	}

	return;
}

void func_58(var uParam0) // Position - 0x376A Hash - 0xE6F95F8B ^0x2A185668
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_193))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_193))
		{
			PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("SLEEP_TRANS_RESTING_W_HAT"), 3f);
			AUDIO::_STOP_AUDIO_SCENESET("Sleep_Respawn_Scenes");
			AUDIO::TRIGGER_MUSIC_EVENT("SLEEP_TRANSITION_STOP");
			CAM::DO_SCREEN_FADE_OUT(0);
			CAM::DO_SCREEN_FADE_IN(1500);
			func_145(true);
			func_146();
		
			if (TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("world_player_sleep_bedroll"))
			{
				func_95(98.2971f, -4.2336f);
				PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Global_35, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35), -5f, 0f, 0f));
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
		
			func_105(0);
			Global_1392040.f_7 = func_147();
		}
	
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_193, false))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
				CAM::DO_SCREEN_FADE_IN(500);
		
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
			func_34(false);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		}
	}

	return;
}

void func_59() // Position - 0x3850 Hash - 0x3C4FB117 ^0x5AB11B80
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
	return;
}

BOOL func_60(BOOL bParam0) // Position - 0x3879 Hash - 0xC21D209 ^0xD76B285F
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !TASK::IS_PED_EXITING_SCENARIO(Global_35, true))
			if (TASK::_PED_IS_IN_SCENARIO_BASE(Global_35) || bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "SCENARIO_POINT_TRANS_COMPLETE") || func_56(16777216) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")))
				return true;

	return false;
}

int func_61() // Position - 0x3905 Hash - 0xB1D741EE ^0x4F81B6E9
{
	Hash activeDynamicScenario2;

	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);

	switch (activeDynamicScenario2)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COFFEE_ARTHUR"):
			return 1;
	
		case joaat("world_player_dynamic_kneel_post_fire_craft"):
			return 4;
	
		case joaat("world_player_camp_fire_sit_male_a"):
			return 7;
	
		case joaat("world_player_camp_fire_squat_male_a"):
			return 8;
	
		case joaat("prop_player_seat_chair_generic"):
			return 9;
	
		case joaat("world_player_dynamic_kneel_fire_craft"):
			return 3;
	
		case joaat("world_player_dynamic_camp_fire_kneel_arthur"):
			return 6;
	
		default:
		
	}

	return 0;
}

void func_62(var uParam0, int iParam1) // Position - 0x3967 Hash - 0x4F8BE4B5 ^0x544EE346
{
	uParam0->f_149 = iParam1;
	return;
}

void func_63(int iParam0, BOOL bParam1) // Position - 0x3975 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_148(iParam0, &num, &num2);

	if (!func_149(iParam0, num, num2, bParam1))
		return;

	func_150(num, num2);
	return;
}

void func_64(var uParam0) // Position - 0x39A2 Hash - 0xEC555506 ^0xD1D30DF4
{
	if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && func_16(uParam0->f_151, 4194304) && !PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_56(4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_152))
		{
			if (!func_70(uParam0->f_181))
			{
				uParam0->f_181 = func_151("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_152, 1, 1, true, 0, 5, 9f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, false);
			}
			else if (func_152(uParam0->f_181, true))
			{
				func_68(uParam0);
				func_54(uParam0);
				func_6(&(uParam0->f_151), 4194304);
			}
		
			if (uParam0->f_57.f_84 > 0 && func_21(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->[0], true)) < 0.5625f || func_21(Global_36, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->[1], true)) < 0.5625f)
			{
				func_96(uParam0);
			
				if (!func_70(uParam0->f_183))
				{
					uParam0->f_183 = func_151("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), uParam0->f_152, 1, 1, true, 0, 5, 9f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, false);
					func_82(uParam0->f_183, 1754796591, 0, true);
				}
				else if (func_152(uParam0->f_183, true))
				{
					uParam0->f_157 = 1;
					func_68(uParam0);
					func_54(uParam0);
					func_6(&(uParam0->f_151), 4194304);
				}
			}
			else if (func_70(uParam0->f_183))
			{
				func_153(uParam0);
			}
		}
	}
	else
	{
		func_153(uParam0);
		func_154(uParam0);
	}

	if (func_70(uParam0->f_181))
		func_82(uParam0->f_181, 1754796591, 0, true);

	return;
}

void func_65(var uParam0) // Position - 0x3B56 Hash - 0x1093D907 ^0xD6703FD
{
	if (func_16(uParam0->f_151, 4194304))
	{
		if (!func_70(uParam0->f_182))
		{
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !func_56(16777216) && !func_56(4096) && !func_56(true) && !func_155() && !func_16(uParam0->f_151, 524288))
			{
				uParam0->f_182 = func_151("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, true, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, false);
				MISC::SET_BIT(&(Global_1955830.f_1), 2);
				MISC::SET_BIT(&(Global_1955830.f_1), 3);
			
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0))
					{
						func_157(uParam0->f_182, "CAMP_REC_COOK", true);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
						func_84(uParam0->f_182, false, true);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
		{
			func_54(uParam0);
			func_6(&(uParam0->f_151), 4194304);
		}
		else if (func_56(16777216) || func_16(uParam0->f_151, 524288))
		{
			func_55(16777216);
			func_17(&(uParam0->f_151), 524288);
			func_54(uParam0);
			func_6(&(uParam0->f_151), 4194304);
		}
		else
		{
			if (func_16(uParam0->f_151, 16384) != func_16(uParam0->f_151, 32768))
			{
				if (func_16(uParam0->f_151, 16384))
				{
					if (func_156(uParam0) && !func_70(Global_1935496.f_114))
					{
						func_157(uParam0->f_182, "CAMP_REC_COOK", true);
						func_84(uParam0->f_182, true, true);
						func_17(&(uParam0->f_151), 65536);
					}
					else
					{
						func_144(&(uParam0->f_182), true, true);
						uParam0->f_182 = func_151("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, true, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, false);
						func_84(uParam0->f_182, false, true);
						func_6(&(uParam0->f_151), 65536);
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1955830.f_1), 2);
					MISC::SET_BIT(&(Global_1955830.f_1), 3);
					func_144(&(uParam0->f_182), true, true);
					uParam0->f_182 = func_151("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_152, 0, 1, true, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, false);
				}
			
				if (func_16(uParam0->f_151, 16384))
					func_17(&(uParam0->f_151), 32768);
				else
					func_6(&(uParam0->f_151), 32768);
			}
		
			if (func_152(uParam0->f_182, true))
			{
				func_17(&(uParam0->f_151), 524288);
				MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
				func_54(uParam0);
				func_6(&(uParam0->f_151), 4194304);
			
				if (func_16(uParam0->f_151, 16384))
					if (func_156(uParam0))
						func_17(&(uParam0->f_151), 65536);
					else
						func_6(&(uParam0->f_151), 65536);
			
				if (func_16(uParam0->f_151, 16384) && func_16(uParam0->f_151, 65536))
					func_47(268435456);
			}
		}
	}
	else
	{
		func_144(&(uParam0->f_182), true, true);
	}

	if (func_70(uParam0->f_182))
		func_82(uParam0->f_182, 1754796591, 0, true);

	return;
}

BOOL func_66(int iParam0) // Position - 0x3E9F Hash - 0xC67CC87B ^0x88ADC254
{
	return Global_1392040.f_1 && iParam0 != false;
}

char* func_67(int iParam0) // Position - 0x3EB2 Hash - 0xEB40D7A4 ^0x318B25D6
{
	return "CAMPFIRE";
}

void func_68(var uParam0) // Position - 0x3EBE Hash - 0x2B6F7B1E ^0x23D39543
{
	float num;
	int num2;
	ItemSet itemset;
	int i;
	float num3;
	BOOL flag;

	num = 10000f;
	num2 = -1;
	itemset = ITEMSET::CREATE_ITEMSET(true);

	for (i = 0; i < 6; i = i + 1)
	{
		if (i < 5)
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
			{
				if (TASK::_GET_PED_USING_SCENARIO_POINT(uParam0->[i]) != 0)
				{
				}
				else if (!PED::_CAN_PED_USE_SCENARIO_POINT(Global_35, uParam0->[i], 0, 0, 1) && !func_56(268435456))
				{
				}
				else
				{
					ITEMSET::_CLEAR_ITEMSET(itemset);
				
					if (func_158(&itemset, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->[i], true)))
					{
					}
					else
					{
						num3 = func_21(Global_36, uParam0->f_7[i /*3*/]);
					
						if (num3 < num)
						{
							num2 = i;
							num = num3;
						}
					}
				}
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);

	if (num2 == -1)
	{
		func_55(268435456);
		func_55(16777216);
		func_6(&(uParam0->f_151), 524288);
		uParam0->f_157 = 0;
		return;
	}

	if (func_56(268435456))
	{
		func_159(Global_35, true, true);
	
		switch (num2)
		{
			case 0:
			case 3:
				uParam0->f_157 = 2;
				TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432, false);
				uParam0->f_155 = 6;
				uParam0->f_154 = 0;
				break;
		
			case 1:
			case 2:
				uParam0->f_157 = 2;
				TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432, false);
				uParam0->f_155 = 6;
				uParam0->f_154 = 1;
				break;
		
			case 4:
				uParam0->f_157 = 2;
				TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[4], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, false, true, 0, false, -1082130432, false);
				uParam0->f_155 = 9;
				uParam0->f_154 = 4;
				break;
		}
	
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (num2)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				if (func_56(16777216) || func_16(uParam0->f_151, 524288))
				{
					flag = true;
				
					if (func_160(0) || func_160(1))
						flag = false;
				
					if (flag)
						PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 3f);
				
					TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[num2], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432, false);
				}
				else if (uParam0->f_157 == 1)
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[num2], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432, false);
				}
				else if (func_161())
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[num2], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1082130432, false);
				}
				else
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[num2], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1082130432, false);
				}
				break;
		
			case 4:
				TASK::TASK_USE_SCENARIO_POINT(Global_35, uParam0->[num2], "PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP", 0, true, false, 0, false, -1082130432, false);
				break;
		}
	
		uParam0->f_154 = num2;
	}

	return;
}

void func_69() // Position - 0x4190 Hash - 0x9AAC57D8 ^0xE17F78B4
{
	if (func_121(joaat("weapon_kit_binoculars"), 0))
		func_162(32);

	if (func_121(joaat("weapon_kit_camera"), 0))
		func_162(64);

	return;
}

BOOL func_70(int iParam0) // Position - 0x41BE Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

BOOL func_71(int iParam0, BOOL bParam1) // Position - 0x41FD Hash - 0xAAB142C4 ^0x152C664A
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_163(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1945188[num /*18*/].f_3);
}

BOOL func_72() // Position - 0x4230 Hash - 0x778C6497 ^0xE39208C9
{
	return !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("player_menu")) && !Global_1898068.f_4 && !func_164() && UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(joaat("fast_travel_menu"));
}

void func_73(var uParam0, int iParam1) // Position - 0x4266 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_74(var uParam0, int iParam1) // Position - 0x4277 Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_75(var uParam0, BOOL bParam1) // Position - 0x4287 Hash - 0x1553B07 ^0xC2B6910B
{
	int i;

	for (i = 0; i < 18; i = i + 1)
	{
		if (func_70(uParam0->f_162[i]))
		{
			if (func_165(uParam0->f_162[i], false) == bParam1)
			{
			}
			else
			{
				func_84(uParam0->f_162[i], bParam1, true);
			}
		}
	}

	return;
}

void func_76() // Position - 0x42D5 Hash - 0xB6DD6CAB ^0xF578C0BC
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("fast_travel_menu")) && func_77() != 0)
		func_73(&Global_43907, 16);

	return;
}

int func_77() // Position - 0x42FD Hash - 0x21D64237 ^0x21D64237
{
	return Global_43908;
}

void func_78(var uParam0) // Position - 0x4308 Hash - 0x385E94DC ^0x338B060B
{
	Hash activeDynamicScenario2;

	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);

	if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a"))
		ENTITY::SET_ENTITY_PROOFS(Global_35, 2, false);
	else
		ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);

	if (activeDynamicScenario2 == joaat("world_player_dynamic_camp_fire_kneel_arthur"))
	{
		if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500 && !func_16(uParam0->f_151, 524288) && !func_56(16777216) && !func_166(15) && uParam0->f_157 != 1)
		{
			func_31(&(uParam0->f_204));
			func_88(joaat("KNEEL_TRANS_SQUAT"), 0.5f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a"))
	{
		if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
		{
			if (!func_125(&(uParam0->f_204)))
				func_31(&(uParam0->f_204));
		
			if (func_29(&(uParam0->f_204), 180f))
			{
				func_31(&(uParam0->f_204));
			
				if (!func_161())
				{
					func_88(joaat("SQUAT_TRANS_SIT"), 0.5f);
					uParam0->f_196 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a"))
	{
		if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
		{
			if (!func_125(&(uParam0->f_204)))
				func_31(&(uParam0->f_204));
		
			if (func_29(&(uParam0->f_204), 10f))
			{
				if (func_161())
				{
					func_31(&(uParam0->f_204));
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					func_88(joaat("SIT_TRANS_SQUAT"), 0.5f);
				}
			}
		}
	}
	else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
	{
		if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
		{
			func_88(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
	{
		if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
		{
			func_88(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

BOOL func_79(var uParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x450F Hash - 0xF1635FFE ^0x8A01F6A9
{
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_167())
	{
		if (bParam1)
		{
			num3 = iParam2;
		
			if (iParam3 != -1)
				num2 = iParam3;
			else
				num2 = uParam0->f_154;
		}
		else
		{
			num2 = uParam0->f_154;
			num3 = uParam0->f_155;
		}
	
		switch (num2)
		{
			case 0:
			case 1:
				switch (num3)
				{
					case 1:
						num = 0;
						break;
				
					case 3:
					case 4:
						num = 0;
						break;
				
					default:
						if (func_23() != false)
							num = 544882;
						else
							num = 20498;
						break;
				}
				break;
		
			case 2:
			case 3:
				if (num3 == 3 || num3 == 4 || num3 == 1)
					num = 0;
				else if (func_23() != false)
					num = 544882;
				else
					num = 20498;
				break;
		
			case 4:
				switch (num3)
				{
					case 1:
						num = 56;
						break;
				
					default:
						if (func_23() != false)
							num = 544880;
						else
							num = 20498;
						break;
				}
				break;
		}
	}

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35) || Global_1357517 || func_16(uParam0->f_151, 262144))
	{
		num = 0;
	}
	else if (func_138(Global_35, 0))
	{
		if (!func_16(uParam0->f_151, 32))
		{
			func_63(178, true);
			func_17(&(uParam0->f_151), 32);
		}
	
		num = 16;
	}

	func_168(uParam0, num);

	if (uParam0->f_157 == 2)
		func_75(uParam0, false);

	num4 = func_169(uParam0);

	if (num4 != -1)
		if (uParam0->f_156 != -1)
			uParam0->f_154 = uParam0->f_156;

	switch (num4)
	{
		case 0:
			func_130(&(uParam0->f_57));
			func_45(&(uParam0->f_57), 1);
			uParam0->f_157 = 6;
			break;
	
		case 2:
			func_53(uParam0);
			uParam0->f_157 = 1;
			break;
	
		case 3:
			func_170(uParam0, func_16(uParam0->f_151, 16));
			uParam0->f_157 = 0;
			func_53(uParam0);
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			break;
	
		case 4:
			uParam0->f_187 = -1;
			func_53(uParam0);
			func_41(uParam0, 7);
			return false;
	
		case 5:
			func_45(&(uParam0->f_57), 2);
			func_62(uParam0, 0);
			uParam0->f_57.f_35 = 1;
			uParam0->f_157 = 2;
			func_53(uParam0);
			func_41(uParam0, 10);
			break;
	
		case 9:
			func_53(uParam0);
			uParam0->f_157 = 12;
			return true;
	
		case 10:
			func_53(uParam0);
			uParam0->f_157 = 11;
			return true;
	
		case 16:
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			func_53(uParam0);
			func_17(&(uParam0->f_151), 262144);
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_80(var uParam0) // Position - 0x47C4 Hash - 0x2A031CDD ^0x623C0806
{
	if (uParam0->f_157 == 10)
	{
		return func_94(uParam0);
	}
	else
	{
		switch (uParam0->f_154)
		{
			case 0:
				return func_171(uParam0);
		
			case 1:
				return func_172(uParam0);
		
			case 2:
				return func_173(uParam0);
		
			case 3:
				return func_174(uParam0);
		
			case 4:
				return func_175(uParam0);
		}
	}

	func_53(uParam0);
	return false;
}

int func_81(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0x484C Hash - 0xBB16F284 ^0x81C5F899
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_176(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_177(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

void func_82(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x48D5 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_70(iParam0))
		return;

	num = func_163(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam1, iParam2);
	return;
}

void func_83(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4920 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_70(iParam0))
		return;

	num = func_163(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_84(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x496B Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return;

	num = func_163(iParam0);

	if (bParam1)
	{
		func_178(iParam0, 4);
		func_179(num, true);
		func_180(num, true);
	}
	else
	{
		func_181(iParam0, 4);
		func_180(num, false);
	}

	return;
}

BOOL func_85(var uParam0) // Position - 0x49BA Hash - 0x499F1BE8 ^0xB03B0D62
{
	BOOL flag;
	BOOL flag2;
	int num;

	flag = PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_35);
	flag2 = PED::_0x2DC0E8DCBD3546E9(Global_35);

	if (flag || flag2 && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
		return false;

	if (flag2 && uParam0->f_156 != -1)
	{
		num = func_36(uParam0);
	
		if (num != uParam0->f_156)
			return false;
	
		if (uParam0->f_154 != num)
		{
			uParam0->f_154 = num;
			return false;
		}
	}

	if (func_182())
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return false;

	return true;
}

int func_86(BOOL bParam0) // Position - 0x4A49 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_23() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_87(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x4A8A Hash - 0x21D8E47F ^0xF74F2523
{
	int num;
	var unk10;
	Hash scriptHash;
	int num2;
	int num3;
	int num4;
	eStackSize stackSize;
	int num5;
	BOOL flag;
	int num6;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (func_183())
	{
		Global_1935689.f_9441 = hParam0;
		func_184(hParam0, 1, -142743235, false, false);
		return 0;
	}

	if (func_185())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_186(hParam0, 0);
		func_184(func_187(), 1, -142743235, false, false);
		return 0;
	}

	if (!func_188(hParam0, bParam4))
		return 0;

	if (func_189(hParam0))
		return 0;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return 0;

	num5 = 0;
	flag = true;
	num6 = 1;
	flag2 = true;
	num.f_4 = iParam3;
	num.f_5 = 1;

	if (func_190(hParam0, -2081717885))
		func_191(hParam0, unk10, num, num4, flag, num6);
	else if (func_190(hParam0, -1909684001))
		func_192(hParam0, unk10, num, flag, num6);
	else if (func_190(hParam0, 587975446))
		func_193(hParam0, unk10);
	else if (func_190(hParam0, 566155764))
		if (!func_194(hParam0))
			return 0;

	if (func_195(hParam0, bParam5, bParam6))
	{
		Global_1911772 = hParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_190(hParam0, -1227898937))
	{
		num.f_2 = hParam0;
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_196(unk10, 1);
		num6 = 0;
		flag = false;
	}
	else if (func_190(hParam0, -1472964441) || func_190(hParam0, -228153877) || func_190(hParam0, 566155764))
	{
	}
	else if (func_190(hParam0, 1919582297))
	{
		if (func_197() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_35, true) || !PED::IS_PED_ON_FOOT(Global_35))
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
	
		num.f_1 = hParam0;
		num.f_3 = iParam1;
		unk10 = { num };
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_196(unk10, 0);
		flag = false;
	}
	else if (func_122(hParam0) == joaat("emote"))
	{
		num.f_3 = 0;
		num.f_1 = hParam0;
		num.f_2 = 0;
		num = func_198(Global_1058888.f_49051.f_4.f_31);
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_196(unk10, 0);
		num6 = 1;
	}
	else if (func_122(hParam0) == joaat("CLOTHING"))
	{
		if (func_199(hParam0) == -999503751)
		{
			if (func_23() != -1)
				return num6;
		
			if (!func_200(hParam0))
			{
				func_201("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
				return num6;
			}
		
			flag3 = func_202(7, hParam0);
			flag4 = func_202(1, hParam0);
		
			if (flag4 && !flag3)
			{
				func_201("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, true);
				return num6;
			}
		
			if (!func_203(7))
			{
				func_201("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, true);
				return num6;
			}
		
			if (!flag3)
			{
				if (func_205(Global_35, func_204(7), false))
					func_201("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
				else
					func_201("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
			
				return num6;
			}
		
			stackSize = func_206(hParam0);
		
			if (stackSize == -1)
				func_207(20, hParam0, 8, 0, false);
			else
				func_207(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (func_199(hParam0))
			{
				case -2061583405:
					func_209(hParam0);
					return 1;
			
				case -1719060085:
					if (hParam0 == Global_1946054.f_1497.f_1[23 /*3*/])
					{
						func_210(Global_35, 260271636, 0, -358215195, true, true, true, false, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipGlovesFidget", true, 15);
						func_211(hParam0, false);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipGlovesFidget", true, 15);
						func_211(hParam0, true);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_208(hParam0, false);
					return num6;
			}
		
			func_210(Global_35, hParam0, 0, -358215195, true, true, true, false, false, false);
		}
	}
	else
	{
		switch (hParam0)
		{
			case joaat("kit_shaving_kit"):
				num2 = func_222(func_22());
				num3 = func_223();
			
				if (func_224(num2))
					if (num2 == num3 && !func_225())
						flag2 = false;
			
				if (flag2)
					func_201("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, true);
				break;
		
			case joaat("upgrade_upg_mortar_pestle"):
			case -1448210800:
				func_227(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (!func_16(Global_1392040.f_1, 1) || func_16(Global_1392040.f_1, 512))
				{
					if (func_23() == -1)
					{
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
						{
						}
						else
						{
							TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "player_camp", 32);
							unk10.f_14 = 6096;
						
							if (func_214(120))
							{
								num5 = num5 | 8;
								num.f_6 = { -1407.4073f, 1508.3297f, 239f };
								num.f_6.f_3 = 260f;
							}
							else if (func_166(15))
							{
								num5 = num5 | 16;
								num.f_6 = { 1775.9026f, 1255.6472f, 189.6069f };
								num.f_6.f_3 = 90f;
							}
							else if (!func_200(hParam0) || !func_216(Global_35, func_204(7), func_215(7), true) || func_217() != 0 && !func_216(Global_35, Global_1900383.f_393, 5f, true))
							{
								num5 = num5 | 128 | 32;
							}
						
							if (func_16(num5, 128) && Global_1357522.f_10[1])
								Global_1357522.f_10[1] = false;
							else if (!func_16(num5, 128) && Global_1357522.f_10[0])
								Global_1357522.f_10[0] = false;
						
							num = num5;
							unk10 = { num };
							unk10.f_15 = 1;
							func_196(unk10, 2);
						}
					}
					else if (func_200(joaat("kit_camp")))
					{
						if (func_218(1))
						{
							func_219(2);
						}
						else if (func_220(1))
						{
							func_201("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
						}
						else
						{
							if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								func_201("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
							else
								func_201("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						
							func_221(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
					}
					else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
					{
						func_201("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
						func_221(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
					else
					{
						func_201("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
					}
				}
				else
				{
					Global_1392040.f_1 = Global_1392040.f_1 | 2;
					num6 = 1;
				}
				break;
		
			case joaat("weapon_kit_camera"):
				if (func_37(Global_35, true, 0, false) != joaat("weapon_kit_camera"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
			
				return 1;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_63(497, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_23() != -1)
					break;
			
				if (!func_200(hParam0))
				{
					func_201("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag3 = func_202(7, hParam0);
				flag4 = func_202(1, hParam0);
			
				if (flag4 && !flag3)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36559))
						MAP::REMOVE_BLIP(&Global_36559);
				
					Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_201(MISC::VAR_STRING(0, -1680440926, Global_36559), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_203(7))
				{
					func_201("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag3)
				{
					if (func_205(Global_35, func_204(7), false))
					{
						func_201("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_36559))
							MAP::REMOVE_BLIP(&Global_36559);
					
						Global_36559 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_36559, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_201(MISC::VAR_STRING(0, -482898802, Global_36559), 10000, 0, 0, 0, true);
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
					func_196(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag = false;
				return 1;
		
			case joaat("weapon_kit_binoculars"):
				if (func_37(Global_35, true, 0, false) != joaat("weapon_kit_binoculars"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_binoculars"), true, 0, false, false);
			
				return 1;
		
			case -7337301:
				num.f_2 = -7337301;
				unk10 = { num };
				TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "native_american_journal", 32);
				unk10.f_14 = 512;
				unk10.f_15 = 1;
				func_196(unk10, 0);
				num6 = 0;
				flag = false;
				break;
		
			case joaat("provision_beaus_gift_1"):
				func_226(hParam0, 1, false, 562618531, false);
				func_228(joaat("provision_beaus_gift_2"), 1, false, false, false, 752097756, 0, 0, 0, false);
				break;
		
			case 1259508039:
				func_212(true);
				break;
		
			case joaat("kit_lightning_conductor"):
				func_226(hParam0, 1, false, 562618531, false);
				break;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_213();
				break;
		
			default:
				num6 = 0;
				break;
		}
	}

	if (flag)
		HUD::_0xBFFF81E12A745A5F();

	return num6;
}

BOOL func_88(Hash hParam0, int iParam1) // Position - 0x5485 Hash - 0x5F8A3D76 ^0xE479C78A
{
	if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, hParam0))
	{
		PED::_GIVE_PED_HASH_COMMAND(Global_35, hParam0, iParam1);
		PED::_ADD_SCENARIO_TRANSITION(Global_35);
		return false;
	}

	return true;
}

int func_89(var uParam0, Hash hParam1) // Position - 0x54B4 Hash - 0x66F1979C ^0xD2957EE8
{
	if (!func_85(uParam0) || MISC::GET_GAME_TIMER() - uParam0->f_196 < 500)
		return 0;

	if (!func_70(uParam0->f_162[8]))
		return 0;

	if (!func_165(uParam0->f_162[8], false) && hParam1 == joaat("world_player_dynamic_kneel_post_fire_craft"))
		func_84(uParam0->f_162[8], true, true);

	if (func_229(uParam0->f_162[8], true))
	{
		func_88(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
		func_144(&uParam0->f_162[8], true, true);
		return 1;
	}

	return 0;
}

BOOL func_90() // Position - 0x554F Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1935436 == 2;
}

void func_91(int iParam0) // Position - 0x555D Hash - 0xA805A06D ^0x74AB3C0C
{
	if (iParam0 >= Global_1935436)
		return;

	Global_1935436.f_1 = iParam0;
	return;
}

BOOL func_92() // Position - 0x5579 Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1935436 == 1;
}

void func_93(Hash hParam0, float fParam1, BOOL bParam2) // Position - 0x5587 Hash - 0xB12B3439 ^0xDD27D66B
{
	int i;
	float health;
	float stamina;
	float deadeye;
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	var unk;
	var unk2;
	int outData;
	var unk24;
	BOOL flag2;
	BOOL flag3;

	if (func_190(hParam0, 1573112293) || func_190(hParam0, 672467738) || func_190(hParam0, -550842268))
		flag = true;

	outData.f_1 = 20;
	unk24 = 20;
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1935496.f_26 = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData))
	{
		for (i = 0; i < outData; i = i + 1)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &unk24[i /*7*/]))
			{
				if (-943921969 == unk24[i /*7*/].f_1)
				{
					health = func_230(0, (float)unk24[i /*7*/].f_2 / fParam1);
					func_231((float)unk24[i /*7*/].f_2 / fParam1, true);
					func_232(0, 7000);
					flag3 = true;
				}
				else if (-1104847406 == unk24[i /*7*/].f_1)
				{
					deadeye = func_230(2, (float)unk24[i /*7*/].f_2 / fParam1);
					func_233((float)unk24[i /*7*/].f_2 / fParam1);
					func_232(2, 7000);
					flag2 = true;
				}
				else if (381158954 == unk24[i /*7*/].f_1)
				{
					stamina = func_230(1, (float)unk24[i /*7*/].f_2 / fParam1);
					func_234((float)unk24[i /*7*/].f_2 / fParam1);
					func_232(1, 7000);
				}
				else if (joaat("EFFECT_HEALTH_CORE") == unk24[i /*7*/].f_1)
				{
					num = func_235((float)unk24[i /*7*/].f_2 / fParam1, unk24[i /*7*/].f_5 / fParam1);
				
					if (func_236(&unk, &unk2, num))
					{
						func_237(num, true, flag, true);
						func_232(0, 7000);
						flag3 = true;
					}
				}
				else if (joaat("EFFECT_DEADEYE_CORE") == unk24[i /*7*/].f_1)
				{
					num2 = func_235((float)unk24[i /*7*/].f_2 / fParam1, unk24[i /*7*/].f_5 / fParam1);
				
					if (func_236(&unk, &unk2, num2))
					{
						func_238(num2, true, flag, true);
						func_232(2, 7000);
						flag2 = true;
					}
				}
				else if (joaat("EFFECT_STAMINA_CORE") == unk24[i /*7*/].f_1)
				{
					num3 = func_235((float)unk24[i /*7*/].f_2 / fParam1, unk24[i /*7*/].f_5 / fParam1);
				
					if (func_236(&unk, &unk2, num3))
					{
						func_239(num3, true, flag, true);
						func_232(1, 7000);
					}
				}
				else if (-816334026 == unk24[i /*7*/].f_1)
				{
					func_240(BUILTIN::TO_FLOAT(unk24[i /*7*/].f_2) / fParam1, true);
				}
				else if (bParam2)
				{
					if (joaat("Effect_Health_Core_Gold") == unk24[i /*7*/].f_1)
					{
						num4 = func_241(BUILTIN::TO_FLOAT(unk24[i /*7*/].f_3), unk24[i /*7*/].f_4);
						func_242(19, num4);
						flag3 = true;
					}
					else if (joaat("Effect_Deadeye_Core_Gold") == unk24[i /*7*/].f_1)
					{
						num4 = func_241(BUILTIN::TO_FLOAT(unk24[i /*7*/].f_3), unk24[i /*7*/].f_4);
						func_242(20, num4);
						flag2 = true;
					}
					else if (joaat("Effect_Stamina_Core_Gold") == unk24[i /*7*/].f_1)
					{
						num4 = func_241(BUILTIN::TO_FLOAT(unk24[i /*7*/].f_3), unk24[i /*7*/].f_4);
						func_242(18, num4);
					}
					else if (1869697234 == unk24[i /*7*/].f_1)
					{
						num4 = func_241(BUILTIN::TO_FLOAT(unk24[i /*7*/].f_3), unk24[i /*7*/].f_4);
						func_242(0, num4);
						flag3 = true;
					}
					else if (1342237631 == unk24[i /*7*/].f_1)
					{
						num4 = func_241(BUILTIN::TO_FLOAT(unk24[i /*7*/].f_3), unk24[i /*7*/].f_4);
						func_242(2, num4);
						flag2 = true;
					}
					else if (-1240225157 == unk24[i /*7*/].f_1)
					{
						num4 = func_241(BUILTIN::TO_FLOAT(unk24[i /*7*/].f_3), unk24[i /*7*/].f_4);
						func_242(1, num4);
					}
				}
			}
		}
	
		func_243(hParam0, bParam2, flag2, flag3);
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

BOOL func_94(var uParam0) // Position - 0x5962 Hash - 0x34D34E6B ^0xA9816513
{
	BOOL flag;
	Hash hash;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), false);

	if (!func_16(uParam0->f_151, 8))
	{
		func_244(uParam0);
		HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(1323335645, "SLEEP", 1, 0, 0, 0);
		flag = false;
	
		if (func_229(uParam0->f_162[12], true))
		{
			flag = true;
			uParam0->f_186 = 6;
		}
		else if (func_229(uParam0->f_162[13], true))
		{
			flag = true;
			uParam0->f_186 = 12;
		}
		else if (func_229(uParam0->f_162[14], true))
		{
			flag = true;
			uParam0->f_186 = 18;
		}
		else if (func_229(uParam0->f_162[15], true))
		{
			flag = true;
			uParam0->f_186 = 0;
		}
	
		if (flag)
		{
			uParam0->f_187 = -1;
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[5]))
				uParam0->[5] = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_7[5 /*3*/], uParam0->f_191, 3f, 0, false);
		
			func_17(&(uParam0->f_151), 8);
			func_48(256);
		
			if (!func_16(uParam0->f_151, 1))
				if (uParam0->f_154 == 4)
					uParam0->f_195 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@sit_yawn_exit", 0, 0, false, true);
				else
					uParam0->f_195 = ANIMSCENE::_CREATE_ANIM_SCENE("scenario@MECH@CAMP_SETUP@kneel_yawn_exit", 0, 0, false, true);
		
			uParam0->f_156 = 5;
			uParam0->f_193 = ANIMSCENE::_CREATE_ANIM_SCENE(func_245(uParam0->f_186), 0, 0, false, true);
		
			if (func_56(524288))
				uParam0->f_186 = 6;
		
			if (Global_1392040.f_7 == -15)
				Global_1392040.f_7 = func_147();
		
			hash = Global_1392040.f_7;
			func_246(&hash, 0, 0, 3, 0, 0, 0, false);
		
			if (!func_247(hash))
				Global_1392040.f_8 = Global_1392040.f_8 + 1;
			else
				Global_1392040.f_8 = 0;
		
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_193);
			func_53(uParam0);
		}
		else
		{
			func_49(256);
		}
	}
	else if (func_16(uParam0->f_151, 8))
	{
		if (!func_16(uParam0->f_151, 1))
		{
			if (func_248(uParam0->f_195))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_195, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_195, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_195);
				func_6(&(uParam0->f_151), 8);
				func_49(256);
				uParam0->f_187 = -1;
				func_41(uParam0, 8);
				return 1;
			}
			else
			{
				func_248(uParam0->f_195);
				return 0;
			}
		}
	}

	if (func_229(uParam0->f_162[3], true) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		func_49(256);
		uParam0->f_187 = -1;
		func_53(uParam0);
		func_41(uParam0, 5);
		return 1;
	}

	return 0;
}

void func_95(float fParam0, float fParam1) // Position - 0x5BD7 Hash - 0x2D5EA878 ^0x4B3C84DD
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1065353216);
	return;
}

void func_96(var uParam0) // Position - 0x5BF5 Hash - 0x1F293957 ^0xD7544A13
{
	if (!func_16(uParam0->f_151, 2048))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
			uParam0->f_159 = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->[0], "p_boiler02x");
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_159, true);
			func_17(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 1;
		}
		else
		{
			func_6(&(uParam0->f_150), 1);
			uParam0->f_57.f_83 = 0;
		}
	
		func_17(&(uParam0->f_151), 2048);
	}
	else if (uParam0->f_57.f_83)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
		{
			uParam0->f_57.f_83 = 0;
			func_6(&(uParam0->f_150), 1);
			uParam0->f_57.f_84 = 0;
		}
	}

	return;
}

BOOL func_97(var uParam0, var uParam1) // Position - 0x5C9A Hash - 0x943BDA92 ^0x88D12023
{
	func_47(131072);

	if (func_249(uParam0))
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
		return true;
	}
	else
	{
		ENTITY::SET_ENTITY_PROOFS(Global_35, 2, false);
	}

	return false;
}

BOOL func_98(BOOL bParam0) // Position - 0x5CCD Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_23() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_86(bParam0));
}

void func_99(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x5CEB Hash - 0x487FABA ^0x842DF3A2
{
	Hash weaponHash;
	var statId;
	var outData;
	int num;

	if (!func_121(hParam0, 0))
		return;

	func_251(func_250(joaat("items_crafted")), iParam1);

	if (bParam3 && hParam0 != joaat("consumable_coffee"))
	{
		if (func_23() == -1)
		{
			if (func_190(hParam0, -1588156645))
			{
				weaponHash = func_253(func_252(hParam0, false), false);
			
				if (WEAPON::IS_WEAPON_VALID(weaponHash))
					func_254(weaponHash);
			}
		}
	
		if (iParam4 == 0)
			if (func_122(hParam0) == joaat("horse_equipment"))
				if (func_255(hParam0, false))
					func_256(hParam0, 1, false, true, false);
			else
				func_228(hParam0, iParam1, false, false, false, 752097756, 0, 0, 0, false);
		else
			func_257(hParam0, iParam4, iParam1);
	}

	statId = { func_258(hParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);

	if (func_259(hParam0, 0))
		statId = { func_260(joaat("made_recipe_type"), joaat("FOOD")) };
	else if (func_259(hParam0, 2))
		statId = { func_260(joaat("made_recipe_type"), joaat("AMMO")) };
	else if (func_259(hParam0, 5))
		statId = { func_260(joaat("made_recipe_type"), joaat("horse_care")) };
	else if (func_259(hParam0, 1))
		statId = { func_260(joaat("made_recipe_type"), joaat("remedies")) };
	else if (func_259(hParam0, 3))
		statId = { func_260(joaat("made_recipe_type"), joaat("WEAPONS")) };
	else if (func_259(hParam0, 4))
		statId = { func_260(joaat("made_recipe_type"), joaat("Hunting")) };

	STATS::_STAT_ID_INCREMENT_INT(&statId, 1);

	if (func_23() == false)
	{
		Global_1051039 = hParam0;
		return;
	}

	if (bParam2)
		if (func_259(hParam0, 0))
			func_261(40);
		else
			func_261(39);

	num = 0;

	if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) && outData.f_2 == joaat("CLOTHING") && func_262(Global_35, hParam0, &num))
		func_210(Global_35, hParam0, 0, -358215195, true, true, true, false, true, false);

	return;
}

void func_100(var uParam0, var uParam1, var uParam2) // Position - 0x5EE5 Hash - 0xB20C33B1 ^0x8BCEF44A
{
	Global_40.f_9.f_7 = { uParam0 };
	return;
}

void func_101(BOOL bParam0, int iParam1) // Position - 0x5EFA Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_263(&Global_0, 8);

	if (!func_264() || func_23() != -1)
		return;

	func_263(&Global_0, 1);
	return;
}

void func_102(int iParam0, BOOL bParam1) // Position - 0x5F40 Hash - 0xF2378DE2 ^0x23E69665
{
	float amount;

	amount = BUILTIN::TO_FLOAT(iParam0);

	if (Global_1347477.f_4 + 60000 > MISC::GET_GAME_TIMER())
		amount = BUILTIN::TO_FLOAT(iParam0) - Global_1347477.f_5;

	if (amount > 0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), amount, 0, 0, 0);
		Global_1347477.f_5 = BUILTIN::TO_FLOAT(iParam0);
		func_232(2, 7000);
	}

	Global_1347477.f_4 = MISC::GET_GAME_TIMER();
	func_265(false);

	if (bParam1)
		func_266(100f);

	return;
}

void func_103() // Position - 0x5FB6 Hash - 0x7734703E ^0x7734703E
{
	if (func_267(0))
	{
		func_268(0, 0, 100);
		func_268(0, 1, 100);
	}

	if (func_267(1))
	{
		func_268(1, 0, 100);
		func_268(1, 1, 100);
	}

	return;
}

void func_104(BOOL bParam0) // Position - 0x5FEE Hash - 0x6D9C7C2F ^0xEFFA22A7
{
	if (bParam0)
		Global_1935436.f_9 = 0f;

	Global_1935436.f_8 = 0f;
	Global_1935436.f_12.f_1 = 0f;
	Global_1935436.f_12 = 0f;
	Global_1935436.f_12.f_3 = 0f;
	Global_1935436.f_12.f_2 = 0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_SET_PED_MOTIVATION(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_SET_PED_DRUNKNESS(Global_35, false, 0f);
	func_269(0f);
	Global_1935436.f_11 = 1;

	if (func_270())
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	else
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
		func_271();

	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);

	return;
}

void func_105(int iParam0) // Position - 0x60A9 Hash - 0x29A8F290 ^0xB00AC4D8
{
	Global_1392040.f_6 = iParam0;
	return;
}

void func_106(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5) // Position - 0x60B9 Hash - 0xBE6CC08C ^0x4B31B8AF
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

void func_107(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x60EF Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_272() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_273(num) && !func_274(num, iParam2) && !bParam3 || !func_275(num) && !bParam4 || !func_276(num))
			if (num != iParam0)
				func_277(i);
	}

	return;
}

void func_108(int iParam0) // Position - 0x617D Hash - 0x23AE6B73 ^0x23AE6B73
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
	
		func_278(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_279(true);

	return;
}

void func_109(int iParam0) // Position - 0x61EB Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

void func_110(var uParam0) // Position - 0x6206 Hash - 0x9D2BBC5F ^0xABDC2FF1
{
	Hash activeDynamicScenario2;

	if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 250)
	{
		activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);
	
		if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
		{
			func_88(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
		else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
		{
			func_88(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && MISC::GET_FRAME_COUNT() % 2 == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
	}

	return;
}

void func_111(var uParam0) // Position - 0x6299 Hash - 0xD47D2BAE ^0x60C8039E
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
			TASK::_DELETE_SCENARIO_POINT(uParam0->[i]);
	}

	return;
}

void func_112(var uParam0) // Position - 0x62CA Hash - 0x62A9EAD6 ^0x7F126062
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_159, true))
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_159));

	return;
}

void func_113(var uParam0) // Position - 0x62F3 Hash - 0xC3F633F6 ^0x770617D1
{
	uParam0->f_153 = 0;
	uParam0->f_154 = -1;
	uParam0->f_155 = 0;
	uParam0->f_156 = -1;
	uParam0->f_157 = 0;
	uParam0->f_158 = 0;
	uParam0->f_152 = 0;
	uParam0->f_159 = 0;
	return;
}

BOOL func_114(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x6323 Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

BOOL func_115() // Position - 0x6343 Hash - 0x2C13EB06 ^0x38F12C8A
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

eStackSize func_116(int iParam0) // Position - 0x6396 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_119(iParam0))
		return -1;

	return func_281(func_280(iParam0));
}

BOOL func_117(eStackSize essParam0) // Position - 0x63B6 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

BOOL func_118(int iParam0, int iParam1) // Position - 0x63CC Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_119(int iParam0) // Position - 0x63DB Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_120(int iParam0, BOOL bParam1) // Position - 0x640E Hash - 0xAA5BFD67 ^0xAA5BFD67
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

BOOL func_121(Hash hParam0, int iParam1) // Position - 0x643F Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_122(Hash hParam0) // Position - 0x6459 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_121(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_123(Hash hParam0, int iParam1) // Position - 0x6484 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_121(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_283(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_284("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_285(&unk, i, num, num2))
			{
			}
			else if (!func_286(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_287(num);
				return true;
			}
		}
	
		func_287(num);
	}

	return false;
}

int func_124(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x652C Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_121(hParam0, 0))
		return 0;

	num = func_122(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_283(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_288(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_86(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_125(var uParam0) // Position - 0x65AE Hash - 0x5001E582 ^0x5001E582
{
	return func_289(*uParam0, 1);
}

float func_126(var uParam0) // Position - 0x65BE Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_125(uParam0))
		return uParam0->f_1;

	if (func_290(uParam0))
		return uParam0->f_2;

	return func_291() - uParam0->f_1;
}

void func_127(var uParam0, float fParam1) // Position - 0x65F3 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_291() - fParam1;
	func_292(uParam0, 1);
	func_293(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x6619 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_129(int iParam0) // Position - 0x6628 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

void func_130(var uParam0) // Position - 0x6641 Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_144(&uParam0->[i], true, true);
	}

	return;
}

void func_131(var uParam0, BOOL bParam1) // Position - 0x6669 Hash - 0x7BF8DC6E ^0xD29B6CCF
{
	func_294(0);

	if (bParam1)
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("crafting"), 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("crafting"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("crafting"));
	}

	uParam0->f_58 = 0;
	func_55(8);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

BOOL func_132() // Position - 0x66B3 Hash - 0xDC457EBB ^0xB2E9DAB
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");

	return false;
}

void func_133(BOOL bParam0) // Position - 0x66DA Hash - 0x941E7E7E ^0x7F73F605
{
	if (bParam0)
	{
	}

	Global_1911914.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
	return;
}

void func_134(var uParam0) // Position - 0x6701 Hash - 0x821EA126 ^0x3BB75305
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_69, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_70, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_71, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_72, 0);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));

	return;
}

int func_135(Hash hParam0, Hash hParam1) // Position - 0x67F6 Hash - 0xD742FBCB ^0xD742FBCB
{
	var unk;
	var unk6;
	int num;
	var unk23;
	var statId;

	if (!func_121(hParam0, 0))
		return -1;

	if (!func_295(hParam0, hParam1, false, false, 0, true))
		return -1;

	unk = { func_296(hParam0, true, false) };

	if (func_297(hParam0, &unk, 1, false, true))
		return -1;

	unk6 = { func_298(hParam0, unk, unk.f_4, 1) };
	unk6.f_13 = hParam1;
	unk6.f_12 = 1248274121;
	num = func_299(2113164098, &unk6, true);

	if (num == -1)
		return -1;

	unk23.f_1 = 1;
	func_300(num, unk23);
	statId = { func_258(hParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, 1);
	return num;
}

void func_136(Hash hParam0, int iParam1) // Position - 0x689C Hash - 0x78C9A5D2 ^0x78C9A5D2
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		func_301(11, true, 0);
	}

	if (func_259(hParam0, 0))
		func_302(40);
	else
		func_302(39);

	return;
}

void func_137(var uParam0) // Position - 0x68DB Hash - 0x86FD8689 ^0xA845F33D
{
	uParam0->f_18 = 1;
	return;
}

BOOL func_138(Ped pedParam0, Ped pedParam1) // Position - 0x68E8 Hash - 0xB1778072 ^0xDB718768
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_IN_COMBAT(pedParam0, pedParam1))
			return true;

	return false;
}

BOOL func_139(Ped pedParam0) // Position - 0x690A Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

BOOL func_140(Ped pedParam0) // Position - 0x6925 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_303(pedParam0, 4) || func_303(pedParam0, 5);
}

BOOL func_141(Ped pedParam0) // Position - 0x6941 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_303(pedParam0, 7);
}

BOOL func_142(Ped pedParam0) // Position - 0x6950 Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_303(pedParam0, 6);
}

BOOL func_143(Ped pedParam0, Entity eParam1, float fParam2) // Position - 0x695F Hash - 0x5CE04B94 ^0xEC2FA7B8
{
	return func_304(pedParam0, ENTITY::GET_ENTITY_COORDS(eParam1, false, false), fParam2);
}

void func_144(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6977 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_70(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_163(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_305(num);
	*uParam0 = 0;
	return;
}

void func_145(BOOL bParam0) // Position - 0x69CB Hash - 0x74ADD5BD ^0x6FC7AC9D
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
					
						if (func_306(stackSize))
							if (func_307(stackSize))
								func_308(stackSize, bParam0);
						break;
				}
			}
		}
	}

	return;
}

void func_146() // Position - 0x6A76 Hash - 0xC8331A29 ^0x6A812781
{
	int i;

	i = 0;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (func_117(Global_40.f_450[i]))
			if (Global_1347702[Global_40.f_450[i] /*49*/].f_14 & 2 != 0)
				func_309(Global_40.f_450[i], true, 0);
	}

	return;
}

Hash func_147() // Position - 0x6AD6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_148(int iParam0, var uParam1, var uParam2) // Position - 0x6AE2 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_149(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x6AFE Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_310(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_311(iParam0))
		return false;

	if (func_312(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_313(iParam0, 1) || func_314(32768))
		if (!func_313(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_315())
		return false;

	return true;
}

void func_150(int iParam0, int iParam1) // Position - 0x6BA0 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

// Unhandled jump detected. Output should be considered invalid
int func_151(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x6BC4 Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_176(i, 2))
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
		func_177(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

BOOL func_152(int iParam0, BOOL bParam1) // Position - 0x6C9B Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_163(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_153(var uParam0) // Position - 0x6CF3 Hash - 0xC12D782F ^0x2DA51601
{
	if (func_70(uParam0->f_183))
		func_144(&(uParam0->f_183), true, true);

	return;
}

void func_154(var uParam0) // Position - 0x6D10 Hash - 0xC12D782F ^0xC98CB341
{
	if (func_70(uParam0->f_181))
		func_144(&(uParam0->f_181), true, true);

	return;
}

BOOL func_155() // Position - 0x6D2D Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1914319.f_17369 || Global_1914319.f_18996.f_1;
}

BOOL func_156(var uParam0) // Position - 0x6D4B Hash - 0x4417A703 ^0xC982AD8A
{
	Entity firstEntityPedIsCarrying;
	Hash entityModel;
	Hash hash;

	firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);

	if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(firstEntityPedIsCarrying);
		hash = func_316(entityModel);
	
		if (func_317(hash) && !ENTITY::_IS_ENTITY_FULLY_LOOTED(firstEntityPedIsCarrying) && FLOCK::_GET_ANIMAL_RARITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying)) != 2 && !FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(firstEntityPedIsCarrying))
		{
			uParam0->f_57.f_77 = hash;
			uParam0->f_57.f_78 = -214678071;
		
			if (func_70(uParam0->f_182))
				func_82(uParam0->f_182, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(firstEntityPedIsCarrying), 0, true);
		
			return true;
		}
	}

	return false;
}

void func_157(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x6DDA Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return;

	num = func_163(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

BOOL func_158(var uParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x6E23 Hash - 0xEA9728CD ^0xE1B02384
{
	Volume volume;
	int matchingEntities;
	int i;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;
	Ped pedIndexFromEntityIndex;

	volume = VOLUME::CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, 1f, 1f, 1f);
	matchingEntities = ENTITY::GET_MATCHING_ENTITIES(volume, *uParam0, 1, 1, 0, 0);

	for (i = 0; i < matchingEntities; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
	
		if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
		
			if (pedIndexFromEntityIndex != Global_35)
			{
				if (PED::_GET_CARRIER_AS_PED(pedIndexFromEntityIndex) != Global_35)
				{
					func_318(volume);
					return true;
				}
			}
		}
	}

	func_318(volume);
	return false;
}

void func_159(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6EA9 Hash - 0xB5764F9 ^0xD00A5FAE
{
	Ped ped;
	Hash entityModel;
	var unk;
	int i;
	Hash hash;
	int outInventoryItemArray;
	int j;
	int pedDamageCleanliness;
	int num;
	int animalRarity;
	int skinningQuality;
	Hash hash2;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	ped = func_319(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (!func_98(false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(ped);
		func_320(entityModel, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped)))
	{
		unk.f_1 = 10;
		unk.f_12 = 10;
		MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped), true, true, ENTITY::GET_ENTITY_MODEL(ped), &unk, 0);
	
		for (i = 0; i < 10; i = i + 1)
		{
			hash = unk.f_1[i];
		
			if (func_121(hash, 0))
				if (!bParam1 || func_321(hash))
					func_228(hash, unk.f_12[i], bParam2, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		outInventoryItemArray = 10;
		pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped));
	
		if (func_25(joaat("provision_trinket_buck_antler"), 1, false))
		{
			if (pedDamageCleanliness < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				num = pedDamageCleanliness;
				num = num + 1;
				pedDamageCleanliness = num;
			}
		}
	
		animalRarity = FLOCK::_GET_ANIMAL_RARITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped));
		skinningQuality = func_322(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped), animalRarity);
		PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(&outInventoryItemArray, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped), pedDamageCleanliness, skinningQuality);
	
		for (j = 0; j < outInventoryItemArray; j = j + 1)
		{
			if (outInventoryItemArray[j] != 0)
				if (func_323(ped) && !func_324(outInventoryItemArray[j]))
					outInventoryItemArray[j] = 0;
				else if (!bParam1 || func_321(outInventoryItemArray[j]))
					func_228(outInventoryItemArray[j], 1, bParam2, false, false, 752097756, 0, 0, 0, false);
		}
	}

	hash2 = func_325(ped);

	if (!func_121(hash2, 0))
		hash2 = func_326(ped);

	if (func_121(hash2, 0))
		func_327(hash2, 1, true, -142743235, false);

	ENTITY::_DELETE_CARRIABLE(&ped);
	return;
}

int func_160(int iParam0) // Position - 0x708F Hash - 0xE53F5651 ^0xA0757BD
{
	Hash weaponHash;

	weaponHash = 0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, iParam0, false))
		if (func_121(weaponHash, 0))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_328(weaponHash))
				return 1;

	return 0;
}

BOOL func_161() // Position - 0x70CE Hash - 0x703B6249 ^0x4D57E175
{
	Hash prevWeatherTypeHashName;
	Hash nextWeatherTypeHashName;
	int num;

	prevWeatherTypeHashName = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();

	if (prevWeatherTypeHashName == joaat("rain") || prevWeatherTypeHashName == joaat("Shower") || prevWeatherTypeHashName == joaat("sleet") || prevWeatherTypeHashName == joaat("hurricane") || prevWeatherTypeHashName == joaat("Thunderstorm") || prevWeatherTypeHashName == joaat("THUNDER"))
		return true;

	nextWeatherTypeHashName = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();

	if (nextWeatherTypeHashName == joaat("rain") || nextWeatherTypeHashName == joaat("Shower") || nextWeatherTypeHashName == joaat("sleet") || nextWeatherTypeHashName == joaat("hurricane") || nextWeatherTypeHashName == joaat("Thunderstorm") || nextWeatherTypeHashName == joaat("THUNDER"))
		return true;

	num = func_329();

	if (num == 0 || num == 7 || num == 2 || num == 10)
		return true;

	return false;
}

void func_162(int iParam0) // Position - 0x71BD Hash - 0x3410C012 ^0xB75662EB
{
	Global_1935496.f_29 = Global_1935496.f_29 || iParam0;
	return;
}

int func_163(int iParam0) // Position - 0x71D4 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_164() // Position - 0x71DE Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

BOOL func_165(int iParam0, BOOL bParam1) // Position - 0x71EA Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_70(iParam0))
		return false;

	return !func_176(iParam0, 4);
}

BOOL func_166(int iParam0) // Position - 0x720F Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_330(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_167() // Position - 0x723B Hash - 0x35A4808D ^0x7E542F56
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_player_journal")) > 0;
}

void func_168(var uParam0, int iParam1) // Position - 0x724E Hash - 0x4F6B0B34 ^0x77FF8DDC
{
	int num;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397))
		func_17(&(uParam0->f_151), 2);
	else
		func_6(&(uParam0->f_151), 2);

	if (func_16(iParam1, 1))
	{
		if (!func_70(uParam0->f_162[0]))
		{
			uParam0->f_162[0] = func_81("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_82(uParam0->f_162[0], 1754796591, 0, true);
		}
	}
	else if (func_70(uParam0->f_162[0]))
	{
		func_144(&uParam0->f_162[0], true, true);
	}

	if (func_16(iParam1, 4096) && func_16(uParam0->f_150, 16) && !func_56(536870912) && uParam0->f_157 != 2)
	{
		MISC::SET_BIT(&(Global_1955830.f_1), 2);
		MISC::SET_BIT(&(Global_1955830.f_1), 3);
	
		if (!func_70(uParam0->f_162[5]))
		{
			uParam0->f_162[5] = func_81("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_82(uParam0->f_162[5], 1754796591, 0, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 2);
	
		if (func_70(uParam0->f_162[5]))
			func_144(&uParam0->f_162[5], true, true);
	}

	if (func_16(iParam1, 64) && func_16(uParam0->f_150, 16384))
	{
		if (!func_70(uParam0->f_162[17]))
		{
			uParam0->f_162[17] = func_81("CAMP_FT_PROMPT", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 2, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_82(uParam0->f_162[17], 1754796591, 0, true);
		}
	}
	else if (func_70(uParam0->f_162[17]))
	{
		func_144(&uParam0->f_162[17], true, true);
	}

	if (func_16(iParam1, 16384) && !func_56(536870912) && uParam0->f_157 != 2 && func_23() != false && !func_166(15))
	{
		if (!func_70(uParam0->f_162[9]) && func_25(joaat("document_player_journal"), 1, false))
		{
			uParam0->f_162[9] = func_81("JOURNAL", joaat("INPUT_OPEN_JOURNAL"), 3, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
			func_83(uParam0->f_162[9], 21, true, true);
			func_83(uParam0->f_162[9], 13, true, true);
			func_83(uParam0->f_162[9], 20, true, true);
			func_82(uParam0->f_162[9], 1754796591, 0, true);
		}
	
		if (!func_70(uParam0->f_162[10]))
		{
			uParam0->f_162[10] = func_81("CAMP_SATCHEL", joaat("INPUT_OPEN_SATCHEL_MENU"), 3, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
			func_83(uParam0->f_162[10], 21, true, true);
			func_82(uParam0->f_162[10], 1754796591, 0, true);
		}
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
	}
	else
	{
		if (uParam0->f_154 != 5)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	
		if (func_70(uParam0->f_162[9]))
			func_144(&uParam0->f_162[9], true, true);
	
		if (func_70(uParam0->f_162[10]))
			func_144(&uParam0->f_162[10], true, true);
	}

	if (func_56(134217728))
	{
		if (func_70(uParam0->f_162[9]))
			func_84(uParam0->f_162[9], false, true);
	
		if (func_70(uParam0->f_162[10]))
			func_84(uParam0->f_162[10], false, true);
	}
	else
	{
		if (func_70(uParam0->f_162[9]) && !func_165(uParam0->f_162[9], false))
			func_84(uParam0->f_162[9], true, true);
	
		if (func_70(uParam0->f_162[10]) && !func_165(uParam0->f_162[10], false))
			func_84(uParam0->f_162[10], true, true);
	}

	if (func_56(true) || func_56(134217728) || func_16(uParam0->f_151, 2) && !func_56(4096) && uParam0->f_157 != 2)
		if (func_70(uParam0->f_162[5]))
			func_84(uParam0->f_162[5], false, true);
	else if (func_70(uParam0->f_162[5]))
		func_84(uParam0->f_162[5], true, true);

	if (func_16(iParam1, 2) && func_16(uParam0->f_150, 1) && uParam0->f_57.f_84 > 0)
	{
		func_96(uParam0);
	
		if (!func_70(uParam0->f_162[2]))
		{
			uParam0->f_162[2] = func_81("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_82(uParam0->f_162[2], 1754796591, 0, true);
		}
	}
	else if (func_70(uParam0->f_162[2]))
	{
		func_144(&uParam0->f_162[2], true, true);
	}

	if (func_16(iParam1, 8) && func_16(uParam0->f_150, 2))
	{
		if (!func_70(uParam0->f_162[1]))
		{
			if (uParam0->f_154 == 4)
				uParam0->f_162[1] = func_81("PLAYER_SIT", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			else if (func_16(iParam1, 32))
				uParam0->f_162[1] = func_81("PLAYER_SIT", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			else
				uParam0->f_162[1] = func_81("PLAYER_SIT", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		
			func_82(uParam0->f_162[1], 1754796591, 0, true);
		}
	}
	else if (func_70(uParam0->f_162[1]))
	{
		func_144(&uParam0->f_162[1], true, true);
	}

	if (func_56(4) || func_16(uParam0->f_151, 2))
		if (func_70(uParam0->f_162[1]))
			func_84(uParam0->f_162[1], false, true);
	else if (func_70(uParam0->f_162[1]))
		func_84(uParam0->f_162[1], true, true);

	if (func_16(iParam1, 16) && !func_56(536870912) && uParam0->f_157 != 2)
	{
		if (!func_70(uParam0->f_162[3]))
		{
			uParam0->f_162[3] = func_81("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		
			if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
			{
				func_331(uParam0->f_162[3], false, true);
				func_83(uParam0->f_162[3], 20, true, true);
				func_83(uParam0->f_162[3], 13, true, true);
			}
		
			func_82(uParam0->f_162[3], 1754796591, 0, true);
		}
	
		if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
		{
			if (!func_70(uParam0->f_162[16]))
			{
				uParam0->f_162[16] = func_81("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
				func_83(uParam0->f_162[16], 19, true, true);
				func_83(uParam0->f_162[16], 20, true, true);
				func_83(uParam0->f_162[16], 13, true, true);
				func_332(&uParam0->f_162[16], "INPUT_PCAMP_TEARDWN");
				func_82(uParam0->f_162[16], 1754796591, 0, true);
			}
		}
		else if (func_70(uParam0->f_162[16]))
		{
			func_144(&uParam0->f_162[16], true, true);
		}
	}
	else
	{
		if (func_70(uParam0->f_162[3]))
			func_144(&uParam0->f_162[3], true, true);
	
		if (func_70(uParam0->f_162[16]))
			func_144(&uParam0->f_162[16], true, true);
	}

	if (func_56(1048576) || func_16(uParam0->f_151, 2))
	{
		if (func_70(uParam0->f_162[3]) && func_165(uParam0->f_162[3], false))
		{
			func_84(uParam0->f_162[3], false, true);
		
			if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
				func_331(uParam0->f_162[3], false, true);
		}
	}
	else if (func_70(uParam0->f_162[3]) && !func_165(uParam0->f_162[3], false))
	{
		func_84(uParam0->f_162[3], true, true);
	
		if (func_16(iParam1, 524288) && func_16(uParam0->f_151, 131072))
			func_331(uParam0->f_162[3], false, true);
	}

	if (func_56(256))
		if (func_70(uParam0->f_162[16]))
			func_84(uParam0->f_162[16], false, true);
	else if (func_70(uParam0->f_162[16]))
		func_84(uParam0->f_162[16], true, true);

	if (func_23() != false && func_16(uParam0->f_150, 256))
	{
		if (!func_56(2048) || func_16(uParam0->f_151, 2))
		{
			if (func_16(iParam1, 32) && !func_56(536870912) && uParam0->f_157 != 2 && func_333(uParam0))
			{
				if (!func_70(uParam0->f_162[4]))
				{
					uParam0->f_162[4] = func_81("SLEEP", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_82(uParam0->f_162[4], 1754796591, 0, true);
				}
			}
			else if (func_70(uParam0->f_162[4]))
			{
				func_144(&uParam0->f_162[4], true, true);
			}
		}
	}

	if (func_56(2048) || func_56(134217728) || func_16(uParam0->f_151, 2) || func_334(PLAYER::PLAYER_ID(), true, false, true))
		if (func_70(uParam0->f_162[4]))
			func_84(uParam0->f_162[4], false, true);
	else if (func_70(uParam0->f_162[4]))
		func_84(uParam0->f_162[4], true, true);

	uParam0->f_185 = func_67(HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	num = 1;

	if (!func_56(536870912))
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_152, 3f, 0, num, 1754796591, uParam0->f_185, 0);

	return;
}

int func_169(var uParam0) // Position - 0x7D2D Hash - 0x3717433E ^0x74977CF5
{
	int i;

	if (func_56(16777216) || func_16(uParam0->f_151, 524288))
	{
		func_6(&(uParam0->f_151), 524288);
		func_55(16777216);
		uParam0->f_197 = -1;
		return 5;
	}

	for (i = 0; i < 18; i = i + 1)
	{
		if (func_70(uParam0->f_162[i]))
		{
			if (i == 3)
			{
				if (func_165(uParam0->f_162[i], false))
				{
					if (func_229(uParam0->f_162[i], true))
					{
						return i;
					}
					else if (func_335())
					{
						if (!func_125(&(uParam0->f_198)))
							func_31(&(uParam0->f_198));
					
						if (func_336(&(uParam0->f_198), 0.5f))
							return i;
					}
					else if (func_125(&(uParam0->f_198)))
					{
						func_337(&(uParam0->f_198));
					}
				}
			}
			else if (i == 16 || i == 9 || i == 10)
			{
				if (func_152(uParam0->f_162[i], true))
				{
					return i;
				}
				else if (i == 16)
				{
					if (func_338(uParam0->f_162[16], true))
					{
						if (!func_125(&(uParam0->f_57.f_89)))
							func_31(&(uParam0->f_57.f_89));
						else if (func_29(&(uParam0->f_57.f_89), 0.1f))
							func_157(uParam0->f_162[16], "CAMP_TEARDOWN", true);
					}
					else
					{
						if (func_125(&(uParam0->f_57.f_89)))
							func_337(&(uParam0->f_57.f_89));
					
						func_157(uParam0->f_162[16], "LEAVE", true);
					}
				}
			}
			else if (func_229(uParam0->f_162[i], true))
			{
				if (i == 5)
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
			
				return i;
			}
		}
	}

	return -1;
}

void func_170(var uParam0, BOOL bParam1) // Position - 0x7EED Hash - 0xB95FA3E ^0xCA5DD77F
{
	if (bParam1)
		func_6(&(uParam0->f_151), 16);

	return;
}

BOOL func_171(var uParam0) // Position - 0x7F04 Hash - 0x5C1F266D ^0x1B5EF1F4
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
		return 1;

	if (!func_85(uParam0))
		return 0;

	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 6:
					if (func_340(uParam0, 0))
						if (func_88(joaat("KNEEL1_TRANS_COFFEE1"), 1f))
							return 1;
					break;
			
				case 7:
					func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_341(uParam0);
					break;
			}
			break;
	
		case 6:
			func_342(uParam0);
			break;
	
		case 9:
			uParam0->f_156 = 4;
		
			if (func_342(uParam0))
				if (func_343(Global_35, uParam0->[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL1@MALE_A@KNEEL1_TRANS_STOOL1", "KNEEL1_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1"))
					func_6(&(uParam0->f_151), 4);
			break;
	}

	return 0;
}

BOOL func_172(var uParam0) // Position - 0x7FFC Hash - 0x5C1F266D ^0x1B5EF1F4
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
		return 1;

	if (!func_85(uParam0))
		return 0;

	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 6:
					if (func_340(uParam0, 1))
					{
						func_88(joaat("KNEEL2_TRANS_COFFEE2"), 1f);
						return 1;
					}
					break;
			
				case 7:
					func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_341(uParam0);
					break;
			}
			break;
	
		case 6:
			func_344(uParam0);
			break;
	
		case 9:
			uParam0->f_156 = 4;
		
			if (func_344(uParam0))
				func_343(Global_35, uParam0->[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL2@MALE_A@KNEEL2_TRANS_STOOL1", "KNEEL2_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1");
			break;
	}

	return 0;
}

BOOL func_173(var uParam0) // Position - 0x80ED Hash - 0x5C1F266D ^0x1B5EF1F4
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
		return 1;

	if (!func_85(uParam0))
		return 0;

	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 6:
					uParam0->f_156 = 1;
				
					if (func_340(uParam0, 2))
						if (func_343(Global_35, uParam0->[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
							return 1;
					break;
			
				case 7:
					func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_341(uParam0);
					break;
			}
			break;
	
		case 9:
			func_343(Global_35, uParam0->[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_STOOL1", "KNEEL3_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1");
			break;
	}

	return 0;
}

BOOL func_174(var uParam0) // Position - 0x81D1 Hash - 0x5C1F266D ^0x1B5EF1F4
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
		return 1;

	if (!func_85(uParam0))
		return 0;

	switch (uParam0->f_157)
	{
		case 1:
			switch (uParam0->f_155)
			{
				case 6:
					uParam0->f_156 = 0;
				
					if (func_340(uParam0, 3))
						if (func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
							return 1;
					break;
			
				case 7:
					func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_341(uParam0);
					break;
			}
			break;
	
		case 9:
			uParam0->f_156 = 4;
			func_343(Global_35, uParam0->[4], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_STOOL1", "KNEEL4_TRANS_STOOL1", "PROP_PLAYER_SEAT_CHAIR_GENERIC_HUNTING1");
			break;
	}

	return 0;
}

BOOL func_175(var uParam0) // Position - 0x82BA Hash - 0xF0AF3161 ^0x77CF8025
{
	if (func_339(uParam0) && !func_16(uParam0->f_151, 4))
		return 1;

	if (!func_85(uParam0))
		return 0;

	switch (uParam0->f_157)
	{
		case 1:
			if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, -260069069))
				if (func_340(uParam0, 4))
					func_88(-260069069, 1086324736);
			break;
	
		case 6:
			uParam0->f_156 = 0;
			func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR");
			break;
	}

	return 0;
}

BOOL func_176(int iParam0, int iParam1) // Position - 0x8351 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_177(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x8372 Hash - 0x1B501888 ^0x6546232B
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
	func_179(iParam0, true);
	func_180(iParam0, true);
	func_181(iParam0, 128);
	return;
}

void func_178(int iParam0, int iParam1) // Position - 0x8618 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_179(int iParam0, BOOL bParam1) // Position - 0x864B Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_176(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_180(int iParam0, BOOL bParam1) // Position - 0x86A3 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_181(int iParam0, int iParam1) // Position - 0x86CC Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_182() // Position - 0x86F4 Hash - 0xC24BA3AE ^0xF178BF44
{
	return Global_1935689.f_1 || Global_1935689 == 1;
}

BOOL func_183() // Position - 0x870E Hash - 0x85414BC8 ^0x8421EC3E
{
	if (Global_1935689.f_17 == 3)
		return true;

	return false;
}

BOOL func_184(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8725 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_121(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_296(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_345(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_346(hParam0, unk, unk.f_4, bParam4) };
	return func_347(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_185() // Position - 0x8796 Hash - 0x776DDE2 ^0x628739AB
{
	if (func_32(Global_35, 0))
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")))
			return true;

	return false;
}

void func_186(Hash hParam0, int iParam1) // Position - 0x87BD Hash - 0xD62C91CE ^0xD62C91CE
{
	Global_1357549.f_1672 = hParam0;
	Global_1357549.f_1673 = iParam1;
	return;
}

Hash func_187() // Position - 0x87D7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1357549.f_1672;
}

BOOL func_188(Hash hParam0, BOOL bParam1) // Position - 0x87E6 Hash - 0xEA6A22E1 ^0x80E77BB7
{
	int num;
	var unk;

	if (!func_121(hParam0, 0))
		return false;

	if (Global_1935689.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_348(hParam0);
	
		if (func_190(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_349(&unk, HUD::_0x0501D52D24EA8934(1), true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_350())
			return false;

	if (!func_25(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_189(Hash hParam0) // Position - 0x88A2 Hash - 0xE1905D26 ^0xF533277C
{
	if (func_122(hParam0) == joaat("emote"))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_86(false), hParam0, func_351(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			if (!Global_1392040.f_2)
			{
				func_352(true, true);
				TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
				return true;
			}
			else
			{
				return false;
			}
			break;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			func_201(MISC::VAR_STRING(0, 163043886, Global_36559), 10000, 0, 0, 0, true);
			break;
	}

	return true;
}

BOOL func_190(Hash hParam0, Hash hParam1) // Position - 0x892F Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_191(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, BOOL bParam28, int iParam29) // Position - 0x8960 Hash - 0xED0EB3AE ^0xA8675092
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2"):
			if (func_270())
				func_353(joaat("journal_rc_mayor4_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_mayor4_ar")))
				func_353(joaat("journal_rc_mayor4b_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_MAYOR_REWARD2_JN"):
			func_353(joaat("journal_rc_mayor4a_jn"), 0);
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
			if (func_264() && !func_356(40) && !func_362(32))
			{
				func_363(4);
				func_359(39, 0, 0, 0, 0, -1, 0);
				func_360(39, 0, 0, 0, 0, false, 2, false);
				func_364(32);
			}
			break;
	
		case joaat("DOCUMENT_RCM_FMA_LETTER"):
			func_354(Global_1347702[80 /*49*/].f_15, 1);
		
			if (func_270() == true)
				func_353(joaat("journal_rc_fma5_1_ar"), 0);
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_fma5_1_ar")))
				if (func_355(77))
					func_353(joaat("journal_rc_fma5_2_jn"), 0);
				else
					func_353(joaat("journal_rc_fma5_1_jn"), 0);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			if (func_264() && !func_356(51) && !func_357(16384))
			{
				func_358(1);
				func_359(51, 0, 0, 0, 0, -1, 0);
				func_360(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 5, false);
				func_361(16384);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			if (func_264() && !func_356(50) && !func_368(32))
			{
				func_369(4);
				func_359(49, 0, 0, 0, 0, -1, 0);
				func_360(49, 0, 0, 0, 0, false, 2, false);
				func_370(32);
			
				if (!func_120(Global_1347702[50 /*49*/].f_15, true))
					if (func_270() == true)
						func_353(joaat("journal_rc_rockcarv15_ar"), 0);
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("journal_rc_rockcarv15_ar")))
						func_353(joaat("journal_rc_rockcarv15_jn"), 0);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			if (func_264() && !func_356(51) && !func_357(1048576))
			{
				func_358(2);
				func_359(51, 0, 0, 0, 0, -1, 0);
				func_360(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 2, false);
				func_361(1048576);
			}
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			if (func_264() && !func_356(42) && !func_365(16))
			{
				func_366(8);
				func_359(41, 0, 0, 0, 0, -1, 0);
				func_360(41, 0, 0, 0, 0, false, 2, false);
				func_367(16);
			}
			break;
	
		case joaat("DOCUMENT_TS_RHD_FEUD_LETTER"):
			break;
	}

	return;
}

void func_192(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x8C10 Hash - 0x9E368772 ^0x9E368772
{
	switch (hParam0)
	{
		case joaat("document_field_manual"):
			func_366(16);
			break;
	}

	return;
}

void func_193(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x8C2F Hash - 0xD1346F27 ^0x2A96F004
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

BOOL func_194(Hash hParam0) // Position - 0x8C64 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_195(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8C6D Hash - 0x3A368F62 ^0x7DB4A593
{
	if (func_371(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_372(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_387(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				func_381(hParam0);
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
				func_384(hParam0);
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
				func_377(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_385(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_388(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_389(hParam0);
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
				if (!func_374())
				{
					if (func_375(&Global_35))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_201("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
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
				func_378(hParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
					func_379(hParam0);
				else
					func_380(hParam0);
			
				return true;
			}
			break;
	
		case 1174751405:
			if (!bParam1)
			{
				func_373(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_390(hParam0);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_386(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				func_376(hParam0);
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				func_382(hParam0);
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				func_383(hParam0);
				return true;
			}
			break;
	}

	return false;
}

void func_196(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x900D Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_391(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_392(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_393(iParam16);
			return;
		}
	}

	return;
}

BOOL func_197() // Position - 0x90A9 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_198(int iParam0) // Position - 0x90B9 Hash - 0x8F8D4E05 ^0x8F8D4E05
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

Hash func_199(Hash hParam0) // Position - 0x90F2 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_121(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_200(Hash hParam0) // Position - 0x911D Hash - 0xBFDBD794 ^0x724C9162
{
	eStackSize stackSize;

	if (hParam0 == 0)
		return false;

	if (func_122(hParam0) == joaat("CLOTHING"))
	{
		if (func_199(hParam0) == -999503751)
		{
			stackSize = func_206(hParam0);
		
			if (stackSize != -1 && !func_394(stackSize) || !func_25(hParam0, 1, false))
				return false;
		}
	}

	return true;
}

int func_201(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x917A Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_202(int iParam0, Hash hParam1) // Position - 0x91B5 Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_204(iParam0);

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

	if (func_396(iParam0))
		return 1;

	return 0;
}

BOOL func_203(int iParam0) // Position - 0x925C Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_395(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_204(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_397())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

Ped func_204(int iParam0) // Position - 0x92B5 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

BOOL func_205(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x92E1 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

eStackSize func_206(Hash hParam0) // Position - 0x934B Hash - 0x9830D1FB ^0x9830D1FB
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

void func_207(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x975E Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_398(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_399(num);
	return;
}

int func_208(Hash hParam0, BOOL bParam1) // Position - 0x9790 Hash - 0xA79D5BF ^0xE827C189
{
	int num;

	if (!func_400())
		return 0;

	if (!func_401(hParam0))
		return 0;

	if (func_402(hParam0))
	{
		num = 0;
	
		if (func_199(hParam0) == 81053684)
			if (bParam1)
				func_403(&num, 2);
	
		return func_404(hParam0, num);
	}

	return 0;
}

void func_209(Hash hParam0) // Position - 0x97E4 Hash - 0x6BEB4307 ^0x27A4E8AF
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1946054.f_1497.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayUnequipHatFidget", true, 15);
		func_210(Global_35, -2065815962, 0, -358215195, true, true, true, false, true, false);
		func_211(hParam0, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayEquipHatFidget", true, 15);
	func_210(Global_35, hParam0, 0, -358215195, true, true, true, false, true, false);

	if (func_405(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_406();
		func_398(128);
		return;
	}

	if (hash == Global_1946054.f_57[num /*11*/])
	{
		func_211(hParam0, true);
		return;
	}

	if (func_407(-2061583405, false))
	{
		if (func_408(hash))
			func_211(hash, false);
		else
			func_409(hash, true, true, false);
	
		func_211(hParam0, true);
		return;
	}

	if (func_408(hash))
	{
		func_211(hash, false);
		func_211(hParam0, true);
	}
	else if (func_408(hParam0))
	{
		if (hParam0 != func_410(0))
		{
			func_411(hParam0, hash);
			func_211(hParam0, false);
			func_211(hash, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_398(128);
			func_211(hParam0, true);
		}
	}

	return;
}

int func_210(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x9928 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_296(hParam1, true, false) };
		iParam3 = func_412(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_414(hParam1, hParam2, func_413(iParam3, 1), bParam4, bParam9))
		return 0;

	func_415(true, func_23() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_405(32768) && hParam1 != Global_1946054.f_57[func_413(iParam3, 1) /*11*/])
			{
				func_406();
				func_207(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_413(iParam3, 1) /*11*/])
				func_207(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_207(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_416(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_207(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_417(0);
			func_418(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_207(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_211(Hash hParam0, BOOL bParam1) // Position - 0x9A97 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_296(hParam0, false, false) };
	guid = { func_346(hParam0, unk, unk.f_4, false) };

	if (func_419(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_86(false), &guid, bParam1);
	return;
}

void func_212(BOOL bParam0) // Position - 0x9AE1 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

void func_213() // Position - 0x9AFB Hash - 0xC6CD68D ^0xAFD0A1CE
{
	if (func_420())
		return;

	if (func_421())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1914319.f_18996.f_1 = 1;
	}
	else if (Global_1914319.f_18996.f_4 != 0)
	{
		func_201(func_422(), 10000, 0, 0, 0, true);
		Global_1914319.f_18996.f_4 = 0;
	}

	return;
}

BOOL func_214(eStackSize essParam0) // Position - 0x9B61 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_23() != -1)
		return false;

	if (!func_117(essParam0))
		return false;

	return func_330(Global_1347702[essParam0 /*49*/].f_15);
}

float func_215(int iParam0) // Position - 0x9B91 Hash - 0x9BB7FBA3 ^0xA973C68A
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

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_423(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_424(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_424(iParam0) + 1;
	num2 = func_425(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_426(num, any, num7);
	return num8;
}

BOOL func_216(Ped pedParam0, Object* pobParam1, float fParam2, BOOL bParam3) // Position - 0x9C4B Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pobParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pobParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

int func_217() // Position - 0x9C93 Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3054.f_1;
}

BOOL func_218(int iParam0) // Position - 0x9CA6 Hash - 0x14AD85AF ^0xC4DF0BF6
{
	if (!func_427(32))
		return false;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
		return false;

	if (!func_428())
		return false;

	if (func_429(16))
		return false;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1224589.f_9) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::INT_TO_PLAYERINDEX(Global_1224589)))
		return false;

	if (iParam0 == 1 && func_128(Global_1130863.f_8, 1))
		return false;

	return true;
}

int func_219(int iParam0) // Position - 0x9D27 Hash - 0x14624C3D ^0x46CC355A
{
	if (!func_430())
		return 0;

	func_431(iParam0);
	Global_1898068.f_4 = 1;
	return 1;
}

BOOL func_220(int iParam0) // Position - 0x9D49 Hash - 0xA059D395 ^0xAFACF28D
{
	return func_128(Global_1130863.f_8, iParam0);
}

void func_221(Any anParam0) // Position - 0x9D5D Hash - 0x6C95107C ^0x7F4B8292
{
	var unk;

	unk.f_12 = 255;
	unk.f_13 = 255;
	unk.f_5 = anParam0;
	unk.f_3 = 94;
	func_433(unk, func_432(0, 15), false, false);
	return;
}

int func_222(eStackSize essParam0) // Position - 0x9D94 Hash - 0x5822495 ^0x141CE12F
{
	int i;

	if (!func_434(essParam0))
		return -1;

	for (i = 0; i < 17; i = i + 1)
	{
		if (Global_1395601.f_5[i /*28*/] == essParam0)
			return i;
	}

	return -1;
}

int func_223() // Position - 0x9DD2 Hash - 0xAA084930 ^0xAA084930
{
	eStackSize stackSize;

	stackSize = func_435();

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

BOOL func_224(int iParam0) // Position - 0x9E5E Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

BOOL func_225() // Position - 0x9E74 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1395601;
}

BOOL func_226(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x9E80 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_121(hParam0, 0))
		return false;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_283(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return false;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_256(hParam0, -iParam1, flag, flag2, flag3);
	
		return false;
	}

	if (!func_25(hParam0, 1, bParam4))
		return false;

	statId = { func_436(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_124(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_124(hParam0, false, false) - iParam1 < 0)
		{
			func_226(hParam0, func_124(hParam0, false, false), bParam2, hParam3, bParam4);
			return false;
		}
	}

	if (func_122(hParam0) == joaat("WEAPON"))
		if (!func_437(hParam0, iParam1, false, hParam3))
			return false;
	else if (!func_184(hParam0, iParam1, hParam3, bParam2, bParam4))
		return false;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_98(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_256(hParam0, -iParam1, flag, flag2, flag3);

	func_438(hParam0, iParam1);
	return true;
}

void func_227(BOOL bParam0) // Position - 0x9FF4 Hash - 0x306CC386 ^0x2C16B96B
{
	if (func_23() != -1 || !bParam0 || func_139(Global_35))
	{
		func_439();
		return;
	}

	if (func_56(8388608) && !func_16(Global_1392040.f_1, 2048))
	{
		func_47(16777216);
		return;
	}

	func_439();
	return;
}

int func_228(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0xA050 Hash - 0x11449F01 ^0x11449F01
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

	if (!func_121(hParam0, 0))
		return 0;

	if (!func_440(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_441(hParam0, &value, iParam1))
		return 0;

	func_442(hParam0, bParam2);
	lootTableKey = 0;

	if (func_124(hParam0, false, false) == 0)
	{
		if (func_443(hParam0))
		{
			hash = func_444(hParam0);
			collectableSubcategory = func_445(hash);
			num = func_446(collectableSubcategory) + 1;
			func_447(hash);
		
			if (func_356(38))
				func_63(483, false);
			else
				func_63(482, false);
		
			if (num == func_448(collectableSubcategory))
			{
				func_228(func_449(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_264() && func_450(4))
				{
					if (func_264() && func_451(38) || func_356(38))
					{
						func_360(38, func_449(collectableSubcategory), 0, 0, func_452(), false, -1, false);
						func_453(2);
					}
					else
					{
						func_360(38, func_449(collectableSubcategory), 0, 0, func_452(), false, -1, false);
						func_453(1);
					}
				}
			}
			else if (func_264() && func_450(4))
			{
				if (func_264() && func_451(38) || func_356(38))
				{
					func_360(38, 0, 0, 0, func_452(), false, -1, false);
					func_453(2);
				}
				else
				{
					func_360(38, 0, 0, 0, func_452(), false, -1, false);
					func_453(1);
				}
			}
		
			if (func_264() && func_450(4))
				if (!Global_1914319.f_17376)
					if (func_264() && func_451(38) || func_356(38))
						func_359(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_359(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_122(hParam0) == joaat("CLOTHING"))
		if (!func_190(hParam0, 866047851) && !func_190(hParam0, -1979000645) && !func_190(hParam0, 1248798204))
			flag = true;

	if (func_454(hParam0, 8388608) && !func_455(28))
		func_456(28);

	if (!flag)
	{
		if (func_190(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_199(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_253(func_252(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_23() == -1)
						func_254(ammoTypeForWeapon);
				
					if (func_98(false) && func_457(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_458(hParam0, value, hParam5);
					
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
					if (func_23() == -1)
						func_254(hParam0);
				
					if (func_98(false) && func_457(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_458(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_122(hParam0) == joaat("WEAPON"))
		{
			if (!func_459(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_122(hParam0) == joaat("AMMO") && func_460(hParam0))
		{
			if (!func_461(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_190(hParam0, 866047851))
		{
			func_462(hParam0);
		}
		else if (func_190(hParam0, 2000026003))
		{
			func_463(hParam0);
		}
		else if (func_190(hParam0, -103750053))
		{
			func_251(func_250(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_251(func_260(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_190(hParam0, -121341956) && !func_190(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_120(Global_1835011[4 /*74*/].f_1, true))
					func_63(498, false);
		
			if (func_190(hParam0, -2017733358) || func_190(hParam0, -1369131378))
				func_464(hParam0);
		}
		else if (func_190(hParam0, -136654233))
		{
			if (func_190(hParam0, -1021472396))
			{
			}
		}
		else if (func_190(hParam0, -1466706512) && func_190(hParam0, 1147021565))
		{
			func_63(484, false);
		}
		else if (func_190(hParam0, 1147021565) && func_190(hParam0, -524514947))
		{
		}
		else if (func_190(hParam0, 554195525))
		{
		}
		else if (func_190(hParam0, 589988438))
		{
			if (func_465())
			{
				func_466(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_190(hParam0, 787083290) && func_190(hParam0, 949916894))
		{
			func_467(hParam0);
		}
		else if (func_190(hParam0, -1718133314))
		{
			func_468(hParam0);
		}
		else if (func_190(hParam0, -1738650224))
		{
			func_469(hParam0);
		}
		else if (func_190(hParam0, -1112814642) && func_190(hParam0, 949916894))
		{
			func_470(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_190(hParam0, 1841149704))
		{
			func_471();
		}
		else if (func_190(hParam0, 606799272))
		{
			func_472(hParam0, iParam1);
			func_473(hParam0);
		}
		else if (func_190(hParam0, -1112814642) && func_190(hParam0, -1697809989))
		{
			func_474(hParam0, 0, false, false);
		}
		else if (func_190(hParam0, -2017733358) || func_190(hParam0, -1369131378))
		{
			func_464(hParam0);
		}
		else if (func_190(hParam0, -1921346699))
		{
			if (func_23() != -1)
				return 0;
		
			func_475(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_190(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_25(471514780, 1, false))
						func_228(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_25(526074061, 1, false))
						func_228(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_25(-967317137, 1, false))
						func_228(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_25(670273567, 1, false))
						func_228(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_25(215778062, 1, false))
						func_228(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_25(-1045488665, 1, false))
						func_228(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_190(hParam0, -839724752) && func_454(hParam0, 4))
		{
			if (!func_356(42))
				func_476(hParam0);
		}
		else if (func_190(hParam0, 1399091007))
		{
			func_477(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_190(hParam0, 1248798204))
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
				func_228(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_23() == -1)
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
					func_494(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_494(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_494(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_484(499813453, joaat("treasure_hunt_loot_01"), false);
				func_485(499813453, false);
				func_486(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_484(390004462, joaat("treasure_hunt_loot_17"), false);
				func_485(390004462, false);
				func_490(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_484(6410548, joaat("treasure_hunt_loot_23"), false);
				func_485(6410548, false);
				func_491(8);
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
				func_484(6410548, joaat("treasure_hunt_loot_22"), false);
				func_485(6410548, false);
				func_491(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_456(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_210(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_478(&hash3, false))
					func_457(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_494(594, 1934060482, true, true);
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
					func_494(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_63(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_484(6410548, joaat("treasure_hunt_loot_21"), false);
				func_485(6410548, false);
				func_491(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_63(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_228(func_495(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_228(func_496(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_494(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_484(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_485(-220219788, false);
				func_488(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_455(1))
					func_63(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_484(666607663, joaat("treasure_hunt_loot_07"), false);
				func_485(666607663, false);
				func_487(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_493(241, func_492(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_484(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_485(-220219788, false);
				func_488(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_493(242, func_492(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_63(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_493(240, func_492(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_484(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_485(-220219788, false);
				func_488(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_484(390004462, joaat("treasure_hunt_loot_16"), false);
				func_485(390004462, false);
				func_490(1);
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
				func_484(499813453, joaat("treasure_hunt_loot_03"), false);
				func_485(499813453, false);
				func_486(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_484(666607663, joaat("treasure_hunt_loot_06"), false);
				func_485(666607663, false);
				func_487(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_484(218622660, joaat("treasure_hunt_loot_14"), false);
				func_485(218622660, false);
				func_489(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_484(666607663, joaat("treasure_hunt_loot_05"), false);
				func_485(666607663, false);
				func_487(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_23() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_210(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_484(218622660, joaat("treasure_hunt_loot_13"), false);
				func_485(218622660, false);
				func_489(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_484(6410548, joaat("treasure_hunt_loot_20"), false);
				func_485(6410548, false);
				func_491(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_63(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_63(491, false);
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
				func_484(499813453, joaat("treasure_hunt_loot_02"), false);
				func_485(499813453, false);
				func_486(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_63(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_479();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_480();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_481();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_482();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_483();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_484(390004462, joaat("treasure_hunt_loot_18"), false);
				func_485(390004462, false);
				func_490(4);
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
		func_497(&hash4);
	
		if (!func_498(hash4, value, hParam5))
			return 0;
		else if (!func_98(false))
			return 1;
	
		if (func_122(hParam0) == joaat("CLOTHING"))
			func_499(hParam0);
	
		if (func_190(hParam0, -1979000645))
			func_500(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_98(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_228(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_320(lootTableKey, 0);
		}
	}

	statId = { func_436(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_501(hParam0);

	if (iParam6 > 0f)
	{
		if (func_190(hParam0, -839724752))
			func_502(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_256(hParam0, value, false, flag3, 0);
	}

	return 1;
}

BOOL func_229(int iParam0, BOOL bParam1) // Position - 0xB2E8 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_163(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

float func_230(int iParam0, float fParam1) // Position - 0xB31B Hash - 0x17EDCAD1 ^0xD87169C2
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

void func_231(float fParam0, BOOL bParam1) // Position - 0xB3AC Hash - 0x6515398 ^0xDD905ACD
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

void func_232(int iParam0, int iParam1) // Position - 0xB421 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_233(float fParam0) // Position - 0xB43A Hash - 0xE6CD767E ^0x10A2850D
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), fParam0 * 14f, 0, 0, 0);
	return;
}

void func_234(float fParam0) // Position - 0xB455 Hash - 0x54A9293A ^0x6B1712EF
{
	int num;

	if (func_23() != -1)
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

float func_235(float fParam0, float fParam1) // Position - 0xB490 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_236(var uParam0, var uParam1, float fParam2) // Position - 0xB4BE Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_23() != -1)
		return true;

	if (!func_503(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_504(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_63(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_504(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_237(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB5AA Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_23() == false)
	{
		func_505(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_506(0);

	if (bParam1)
		func_507(num);

	if (num >= 100f - 1f)
		func_508();

	if (bParam2)
		fParam0 = func_509(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_511(0, func_510(fParam0, -100f, 100f), bParam1);
	return;
}

void func_238(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB61C Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_23() == false)
	{
		func_505(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_506(2);

	if (bParam1)
		func_507(num);

	if (bParam2)
		fParam0 = func_509(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_511(2, func_510(fParam0, -100f, 100f), bParam1);
	return;
}

void func_239(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB67D Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_23() == false)
	{
		func_505(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_506(1);

	if (bParam1)
		func_507(num);

	if (bParam2)
		fParam0 = func_509(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_511(1, func_510(fParam0, -100f, 100f), bParam1);
	return;
}

void func_240(float fParam0, BOOL bParam1) // Position - 0xB6DE Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_512(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_455(17))
		return;

	if (func_513())
	{
		num2 = func_514(num);
		num = num + fParam0;
		num3 = func_514(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_147();
			func_246(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_515(&num4, &num5);
		func_516(13, func_510(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_63(94, false);
	}

	return;
}

float func_241(float fParam0, int iParam1) // Position - 0xB78F Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_242(int iParam0, float fParam1) // Position - 0xB7E1 Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_517(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_518(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_519(-1);
			func_265(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_518(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_520(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_518(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_521(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_522(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_522(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_522(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_243(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB974 Hash - 0xE2FD0FF5 ^0x668B624E
{
	if (!bParam1)
		return;

	if (bParam3 || func_190(hParam0, -537818634))
		func_251(func_523(joaat("medicine_items_used")), 1);

	if (func_190(hParam0, -1457797660))
		func_251(func_523(joaat("provision_items_used")), 1);

	if (func_190(hParam0, 1573112293))
		func_525(func_524(&hParam0), 1);

	if (func_190(hParam0, 1939071949))
		func_251(func_260(joaat("USED"), joaat("tonic")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_251(func_260(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
			func_251(func_260(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_251(func_260(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_251(func_260(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_251(func_260(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_251(func_260(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_251(func_260(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_251(func_260(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			func_251(func_260(joaat("USED"), joaat("cover_scent")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_251(func_260(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_23() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_251(func_260(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam2)
		func_251(func_523(joaat("DEADEYE_ITEMS_USED")), 1);

	return;
}

void func_244(var uParam0) // Position - 0xBBA1 Hash - 0xB828014C ^0x1EAD0500
{
	int clockHours;
	BOOL flag;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), false);
	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (uParam0->f_187 != clockHours)
	{
		if (uParam0->f_187 == -1)
			flag = true;
	
		uParam0->f_187 = clockHours;
	
		if (!func_526(uParam0) && flag)
			func_201("CMP_SLP_SOON", 10000, 0, 0, 0, true);
	}

	return;
}

const char* func_245(int iParam0) // Position - 0xBBF5 Hash - 0xDB34E427 ^0x9C2760D5
{
	char* str;
	const char* str2;
	const char* str3;

	str = "script@respawn@sky@SkyTL_";
	str2 = func_530(func_529(func_527(iParam0), func_528(), true, 63));
	str3 = func_530(func_529(str, str2, true, 63));
	return str3;
}

void func_246(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xBC2D Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_531(*hParam0);
	i = func_532(*hParam0);
	num2 = func_533(*hParam0);
	j = func_534(*hParam0);
	k = func_535(*hParam0);
	l = func_536(*hParam0);

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

	for (m = func_537(i, num); num2 > m; m = func_537(i, num))
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

	func_538(hParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_247(Hash hParam0) // Position - 0xBDB5 Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1899515 > hParam0;
}

BOOL func_248(AnimScene ansParam0) // Position - 0xBDC4 Hash - 0xE43931D1 ^0xFAE8E47E
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansParam0))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansParam0, true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(ansParam0, true))
				ANIMSCENE::LOAD_ANIM_SCENE(ansParam0);
		
			return false;
		}
	}

	return true;
}

BOOL func_249(var uParam0) // Position - 0xBDF7 Hash - 0x370F088 ^0x1CA3E4EA
{
	Hash activeDynamicScenario2;
	float num;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
	func_55(1024);
	uParam0->f_57.f_35 = 1;
	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);

	if (func_56(268435456) && uParam0->f_149 < 13)
	{
		func_539(&(uParam0->f_57));
		func_540(&(uParam0->f_57));
	
		if (MISC::GET_GAME_TIMER() - uParam0->f_197 > 1000 && func_541(&(uParam0->f_57)))
		{
			func_542();
		
			if (func_85(uParam0))
			{
				if (activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a"))
				{
					func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a"))
				{
					func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
		
			if (Global_1911914.f_1577 != 0)
				uParam0->f_57.f_77 = Global_1911914.f_1577;
		
			uParam0->f_57.f_78 = -214678071;
			uParam0->f_197 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
		
			if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife"), true, 0, false, false);
				func_17(&(uParam0->f_151), 2097152);
			}
		
			func_47(16384);
			func_55(65536);
			Global_1392040.f_2 = 0;
		
			if (func_98(false))
				func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, true, false, 0);
		
			STATS::_0x378D3B1B11D9385B(uParam0->f_57.f_77);
			uParam0->f_208 = 3;
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
				OBJECT::DELETE_OBJECT(&(uParam0->f_160));
		
			uParam0->f_160 = OBJECT::CREATE_OBJECT(func_544(uParam0->f_57.f_77), Global_36, false, false, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, true))
			{
			}
		
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, false);
			OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, 0f, true);
			func_130(&(uParam0->f_57));
			func_45(&(uParam0->f_57), 2);
			uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_545(uParam0, 6, false, false);
			func_84(uParam0->f_162[6], false, true);
			func_82(uParam0->f_162[6], -1067771379, 0, true);
			uParam0->f_57.f_62 = 0;
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_57.f_39);
			func_17(&(uParam0->f_151), 16);
			func_62(uParam0, 13);
		}
	
		return false;
	}

	if (uParam0->f_149 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
	}

	if (uParam0->f_149 > 0)
		HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_57.f_77), 1, 0, 0, 0);

	if (uParam0->f_149 != 12)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
		{
			uParam0->f_209 = uParam0->f_209 + 1;
			func_93(uParam0->f_57.f_77, BUILTIN::TO_FLOAT(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
	{
		uParam0->f_209 = uParam0->f_209 + 1;
	
		if (func_90())
			func_91(1);
		else if (func_92())
			func_91(0);
	
		func_93(uParam0->f_57.f_77, BUILTIN::TO_FLOAT(uParam0->f_208), uParam0->f_209 >= uParam0->f_208);
	}

	if (func_98(false))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -936525963))
		{
			func_17(&(uParam0->f_151), 1024);
			func_99(uParam0->f_57.f_77, 1, true, true, 0);
			func_546();
		}
	}

	if (uParam0->f_149 >= 14)
		func_70(uParam0->f_162[8]) && func_229(uParam0->f_162[8], true);

	if (uParam0->f_57.f_21 != -1 && func_547(&(uParam0->f_57)) != 12)
	{
		if (func_548(uParam0->f_57.f_21))
		{
		}
		else
		{
			uParam0->f_57.f_21 = -1;
		}
	}

	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);

	switch (uParam0->f_149)
	{
		case 0:
			if (uParam0->f_154 == 4)
			{
				if (func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEEL1", "STOOL1_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
					uParam0->f_154 = 0;
			
				return false;
			}
		
			if (func_85(uParam0))
			{
				if (activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a"))
				{
					func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a"))
				{
					func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
		
			if (func_85(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")) && activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("world_player_dynamic_camp_fire_kneel_arthur") || activeDynamicScenario2 == joaat("prop_player_seat_chair_generic") || activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a") || func_547(&(uParam0->f_57)) == 12)
			{
				func_549(&(uParam0->f_57), 1);
			
				if (func_547(&(uParam0->f_57)) == 11)
				{
					if (func_317(uParam0->f_57.f_77))
					{
						func_550(uParam0);
					}
					else if (uParam0->f_57.f_80)
					{
						uParam0->f_208 = 1;
						func_47(131072);
					
						if (func_98(false))
							func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, true, func_551(), 0);
					
						func_45(&(uParam0->f_57), 0);
						func_130(&(uParam0->f_57));
						func_144(&uParam0->f_162[6], true, true);
					
						if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
						{
							uParam0->f_162[8] = func_81("POUR_COFFEE", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 6000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
							func_84(uParam0->f_162[8], false, true);
							func_82(uParam0->f_162[8], -1067771379, 0, true);
							func_552(uParam0, false);
						}
						else
						{
							uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 6000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
							func_545(uParam0, 6, false, false);
							func_84(uParam0->f_162[6], false, true);
							func_82(uParam0->f_162[6], -1067771379, 0, true);
						}
					
						func_553();
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_62(uParam0, 1);
					}
					else
					{
						func_6(&(uParam0->f_151), 4);
						func_47(131072);
					}
				}
				else if (func_547(&(uParam0->f_57)) == 0)
				{
					func_75(uParam0, true);
					func_55(131072);
					func_55(16384);
					func_47(262144);
					func_47(65536);
				
					if (func_56(8192))
					{
						func_45(&(uParam0->f_57), 0);
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_130(&(uParam0->f_57));
						func_6(&(uParam0->f_151), 512);
						return true;
					}
				}
				else if (func_547(&(uParam0->f_57)) == 1 || func_138(Global_35, 0))
				{
					func_6(&(uParam0->f_151), 4);
					uParam0->f_57.f_35 = 0;
					func_170(uParam0, uParam0->f_57.f_22);
					func_75(uParam0, true);
					func_130(&(uParam0->f_57));
					func_55(131072);
					func_55(16384);
					func_47(262144);
					func_47(65536);
				
					if (uParam0->f_154 == 4)
						uParam0->f_157 = 9;
					else
						uParam0->f_157 = 6;
				
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					func_6(&(uParam0->f_151), 512);
					return true;
				}
			}
			break;
	
		case 1:
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 250)
			{
				if (uParam0->f_154 == 4)
				{
					if (func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@STOOL1@MALE_A@STOOL1_TRANS_KNEELFIRECRAFT", "STOOL1_TRANS_KNEELFIRECRAFT", "WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT"))
					{
						uParam0->f_154 = 0;
						func_62(uParam0, 2);
					}
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
				{
					func_88(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736);
				}
				else if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
				{
					if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
					{
						if (func_88(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736))
							func_62(uParam0, 2);
					}
					else if (uParam0->f_154 == 0)
					{
						if (func_340(uParam0, 0))
						{
							func_88(joaat("KNEEL1_TRANS_BREWCOFFEE_KNEEL1"), 1f);
							func_62(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 1)
					{
						if (func_340(uParam0, 1))
						{
							func_88(joaat("KNEEL2_TRANS_BREWCOFFEE_KNEEL2"), 1f);
							func_62(uParam0, 9);
						}
					}
					else if (uParam0->f_154 == 2)
					{
						if (func_343(Global_35, uParam0->[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_KNEEL2", "KNEEL3_TRANS_KNEEL2", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
							uParam0->f_154 = 1;
					}
					else if (uParam0->f_154 == 3)
					{
						if (func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_KNEEL1", "KNEEL4_TRANS_KNEEL1", "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR"))
							uParam0->f_154 = 0;
					}
				}
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				{
					func_88(joaat("KNEELFIRECRAFTCUP_TRANS_KNEELFIRECRAFT"), 1086324736);
					func_62(uParam0, 2);
				}
				else
				{
					func_88(joaat("KNEEL1_TRANS_KNEELFIRECRAFT"), 1086324736);
					func_62(uParam0, 2);
				}
			
				uParam0->f_196 = MISC::GET_GAME_TIMER();
			}
			break;
	
		case 2:
			if (!func_165(uParam0->f_162[6], false) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_85(uParam0))
					func_84(uParam0->f_162[6], true, true);
		
			if (func_152(uParam0->f_162[6], true) || func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
			{
				if (PAD::_0x1252C029FC8EBB4D())
					PAD::_0x709BA8C08C5C008D();
			
				func_545(uParam0, 6, true, false);
				func_144(&uParam0->f_162[6], true, true);
			
				if (func_122(uParam0->f_57.f_77) == joaat("consumable") && !func_190(uParam0->f_57.f_77, -1242251796) && !func_190(uParam0->f_57.f_77, 1919582297) && !func_190(uParam0->f_57.f_77, -651046900))
				{
					uParam0->f_162[8] = func_81("USE_ITEM", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_82(uParam0->f_162[8], -1067771379, 0, true);
					func_83(uParam0->f_162[8], 10, true, true);
					uParam0->f_162[7] = func_81("STOW_ITEM", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_83(uParam0->f_162[7], 10, true, true);
					func_82(uParam0->f_162[7], -1067771379, 0, true);
					ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_57.f_77, 1);
				}
			
				if (!func_98(false))
					uParam0->f_57.f_21 = func_135(uParam0->f_57.f_77, uParam0->f_57.f_78);
			
				uParam0->f_209 = 0;
				func_31(&(uParam0->f_201));
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_6(&(uParam0->f_151), 1024);
				func_62(uParam0, 3);
			}
			else if (func_165(uParam0->f_162[6], false))
			{
				func_554(uParam0, activeDynamicScenario2);
			}
			break;
	
		case 3:
			if (func_85(uParam0))
			{
				if (func_336(&(uParam0->f_201), 0.1f))
				{
					if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"))
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_88(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 1f);
						func_31(&(uParam0->f_201));
					}
					else
					{
						uParam0->f_196 = MISC::GET_GAME_TIMER();
						func_88(joaat("KNEELFIRECRAFT_TRANS_KNEELPOSTFIRECRAFT"), 1086324736);
					}
				}
			}
		
			if (func_70(uParam0->f_162[8]))
			{
				func_232(0, 7000);
				func_232(2, 7000);
				func_232(1, 7000);
			
				if (func_165(uParam0->f_162[8], false) && func_229(uParam0->f_162[8], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CRAFTING_EAT")))
				{
					if (!func_98(false))
						func_226(uParam0->f_57.f_77, 1, true, -142743235, false);
				
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_99(uParam0->f_57.f_77, 1, true, false, 0);
					func_546();
					func_144(&uParam0->f_162[8], true, true);
					func_144(&uParam0->f_162[7], true, true);
					func_552(uParam0, true);
					func_55(131072);
					func_45(&(uParam0->f_57), 15);
					func_62(uParam0, 5);
					return false;
				}
			}
		
			if (!func_70(uParam0->f_162[8]) || func_165(uParam0->f_162[7], false) && func_555(uParam0->f_162[7], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")) || func_138(Global_35, 0))
			{
				func_144(&uParam0->f_162[8], true, true);
				func_144(&uParam0->f_162[7], true, true);
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_196 = MISC::GET_GAME_TIMER();
			
				if (func_16(uParam0->f_151, 512))
				{
					func_6(&(uParam0->f_151), 512);
					func_131(&(uParam0->f_57), false);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					func_45(&(uParam0->f_57), 1);
				}
				else
				{
					func_45(&(uParam0->f_57), 15);
				}
			
				func_552(uParam0, true);
				func_62(uParam0, 4);
				return false;
			}
			break;
	
		case 4:
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 100 || func_125(&(uParam0->f_201)))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"))
				{
					func_88(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_fire_craft"))
				{
					func_88(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
					func_88(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
				}
				else
				{
					func_88(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
				}
			
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 7);
			}
			break;
	
		case 5:
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 100 || func_125(&(uParam0->f_201)))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"))
				{
					func_88(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_fire_craft"))
				{
					func_88(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
					func_88(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
				}
				else
				{
					func_88(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
				}
			
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 6);
			}
			break;
	
		case 6:
		case 7:
		case 18:
		case 19:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")))
			{
				func_556(uParam0, true);
				func_55(32768);
				func_49(16);
			
				if (uParam0->f_149 == 18 || uParam0->f_149 == 19)
				{
					func_47(65536);
					func_62(uParam0, 16);
				}
				else
				{
					func_62(uParam0, 8);
				}
			}
			else if (MISC::GET_GAME_TIMER() - uParam0->f_196 > 750)
			{
				if (!PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_35))
				{
					if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
					{
						func_47(65536);
						func_62(uParam0, 16);
					}
					else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
					{
						func_62(uParam0, 8);
					}
					else if (uParam0->f_149 == 18)
					{
						func_62(uParam0, 17);
					}
					else if (uParam0->f_149 == 19)
					{
						func_62(uParam0, 20);
					}
					else if (uParam0->f_149 == 7)
					{
						func_62(uParam0, 4);
					}
					else if (uParam0->f_149 == 6)
					{
						func_62(uParam0, 5);
					}
				}
			}
			break;
	
		case 8:
		case 16:
			func_47(1024);
		
			if (func_66(128))
			{
				if (func_165(uParam0->f_162[11], false))
					func_84(uParam0->f_162[11], false, true);
			
				if (func_165(uParam0->f_162[3], false))
					func_84(uParam0->f_162[3], false, true);
			}
			else
			{
				func_556(uParam0, false);
			}
		
			if (func_165(uParam0->f_162[6], false))
				if (func_138(Global_35, 0))
					func_84(uParam0->f_162[6], false, true);
		
			if (func_229(uParam0->f_162[6], true))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
			
				if (uParam0->f_149 == 16)
					func_550(uParam0);
				else
					func_562(uParam0);
			}
			else if (func_229(uParam0->f_162[11], true))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_45(&(uParam0->f_57), 15);
				func_6(&(uParam0->f_151), 512);
			}
			else if (func_152(uParam0->f_162[3], true))
			{
				func_55(65536);
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_6(&(uParam0->f_151), 512);
				func_131(&(uParam0->f_57), false);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_57), 1);
				func_62(uParam0, 0);
				return false;
			}
			else if (func_338(uParam0->f_162[3], true))
			{
				if (!func_125(&(uParam0->f_57.f_89)))
					func_31(&(uParam0->f_57.f_89));
				else if (func_29(&(uParam0->f_57.f_89), 0.1f))
					func_157(uParam0->f_162[3], "CAMP_REC_QUIT", true);
			}
			else
			{
				if (func_125(&(uParam0->f_57.f_89)))
					func_337(&(uParam0->f_57.f_89));
			
				func_157(uParam0->f_162[3], "CAMP_REC_BACK", true);
			}
			break;
	
		case 9:
			if (MISC::GET_GAME_TIMER() - uParam0->f_196 > 1000)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_85(uParam0))
				{
					ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_57.f_77, 1);
					uParam0->f_57.f_84 = 2;
					func_84(uParam0->f_162[8], true, true);
					func_556(uParam0, true);
					func_62(uParam0, 10);
				}
			}
			break;
	
		case 10:
			func_232(0, 7000);
			func_232(2, 7000);
			func_232(1, 7000);
		
			if (func_70(uParam0->f_162[8]) && func_229(uParam0->f_162[8], true))
			{
				if (func_98(false))
					func_99(uParam0->f_57.f_77, 1, true, false, 0);
			
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_57.f_84 = uParam0->f_57.f_84 - 1;
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_131(&(uParam0->f_57), false);
				func_45(&(uParam0->f_57), 15);
				func_557(&(uParam0->f_162));
				uParam0->f_162[8] = func_81("DRINK", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				func_82(uParam0->f_162[8], -1067771379, 0, true);
				func_83(uParam0->f_162[8], 10, true, true);
				func_84(uParam0->f_162[8], false, true);
				func_62(uParam0, 11);
			}
		
			if (func_229(uParam0->f_162[11], true))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_45(&(uParam0->f_57), 15);
				func_6(&(uParam0->f_151), 512);
			}
			else if (func_152(uParam0->f_162[3], true))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_557(&(uParam0->f_162));
				func_62(uParam0, 0);
				func_6(&(uParam0->f_151), 512);
				func_131(&(uParam0->f_57), false);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_57), 1);
				func_62(uParam0, 0);
				return false;
			}
			else if (func_338(uParam0->f_162[3], true))
			{
				if (!func_125(&(uParam0->f_57.f_89)))
					func_31(&(uParam0->f_57.f_89));
				else if (func_29(&(uParam0->f_57.f_89), 0.1f))
					func_157(uParam0->f_162[3], "CAMP_REC_QUIT", true);
			}
			else
			{
				if (func_125(&(uParam0->f_57.f_89)))
					func_337(&(uParam0->f_57.f_89));
			
				func_157(uParam0->f_162[3], "CAMP_REC_BACK", true);
			}
			break;
	
		case 11:
			if (func_558(uParam0))
				func_62(uParam0, 12);
			break;
	
		case 12:
			func_89(uParam0, activeDynamicScenario2);
		
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500 && activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				func_62(uParam0, 0);
			break;
	
		case 13:
			if (func_85(uParam0))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
				{
					func_88(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736);
					return false;
				}
			
				func_55(268435456);
				uParam0->f_196 = MISC::GET_GAME_TIMER();
			
				if (func_16(uParam0->f_150, 8) && uParam0->f_57.f_78 == joaat("cost_crafting_grill"))
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
							{
								if (func_88(joaat("KNIFE1_TRANS_COOKGRILL_A"), 1086324736))
								{
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_88(joaat("KNEEL1_TRANS_COOKGRILL1_A"), 1086324736))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
					
						case 1:
							if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
							{
								if (func_88(joaat("KNIFE2_TRANS_COOKGRILL2_B"), 1086324736))
								{
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_88(joaat("KNEEL2_TRANS_COOKGRILL2_B"), 1086324736))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
					
						case 2:
							if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
							{
								if (func_343(Global_35, uParam0->[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE3@MALE_A@KNIFE3_TRANS_COOKGRILL2_B", "KNIFE3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
								{
									uParam0->f_154 = 1;
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_343(Global_35, uParam0->[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COOKGRILL2_B", "KNEEL3_TRANS_COOKGRILL2_B", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2"))
							{
								uParam0->f_154 = 1;
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
					
						case 3:
							if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
							{
								if (func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNIFE4@MALE_A@KNIFE4_TRANS_COOKGRILL1_A", "KNIFE4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
								{
									uParam0->f_154 = 0;
									func_47(16384);
									func_62(uParam0, 14);
								}
							}
							else if (func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COOKGRILL1_A", "KNEEL4_TRANS_COOKGRILL1_A", "WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL1"))
							{
								uParam0->f_154 = 0;
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
					
						case 4:
							if (func_88(joaat("STOOL1_TRANS_STOOLCOOKGRILL1_A"), 1086324736))
							{
								func_47(16384);
								func_62(uParam0, 14);
							}
							break;
					}
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
				{
					func_88(joaat("KNIFE1_TRANS_COOKKNIFE"), 1086324736);
					func_47(16384);
					func_62(uParam0, 14);
				}
				else
				{
					func_88(joaat("KNEEL1_TRANS_COOKKNIFE"), 1086324736);
					func_47(16384);
					func_62(uParam0, 14);
				}
			}
			break;
	
		case 14:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -560091334))
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, true);
		
			if (!func_165(uParam0->f_162[6], false) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_160, "Player_Campfire_Sounds", false, 0, 0);
					AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_84(uParam0->f_162[6], true, true);
					func_559(uParam0->f_162[6], true);
				}
			}
		
			if (func_152(uParam0->f_162[6], true))
			{
				uParam0->f_207 = -1;
				OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, 1f, true);
			
				if (PAD::_0x1252C029FC8EBB4D())
					PAD::_0x709BA8C08C5C008D();
			
				uParam0->f_162[7] = func_81("STOW_ITEM", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				uParam0->f_162[8] = func_81("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				func_83(uParam0->f_162[8], 10, true, true);
				func_83(uParam0->f_162[7], 10, true, true);
				func_82(uParam0->f_162[7], -1067771379, 0, true);
				func_82(uParam0->f_162[8], -1067771379, 0, true);
			
				if (func_560(uParam0->f_57.f_77, 1, false) || func_66(64))
				{
					func_84(uParam0->f_162[7], false, true);
					func_49(64);
				}
			
				func_144(&uParam0->f_162[6], true, true);
				func_31(&(uParam0->f_201));
				func_55(16384);
				uParam0->f_209 = 0;
			
				if (!func_98(false))
					uParam0->f_57.f_21 = func_135(uParam0->f_57.f_77, uParam0->f_57.f_78);
			
				ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_57.f_77, 1);
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_6(&(uParam0->f_151), 1024);
				func_62(uParam0, 15);
			}
			else
			{
				func_554(uParam0, activeDynamicScenario2);
			
				if (uParam0->f_207 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
						uParam0->f_207 = MISC::GET_GAME_TIMER();
				}
				else
				{
					num = func_561(uParam0->f_162[6], true);
					num = func_510(num, 0f, 1f);
					OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, 1f * num, true);
				}
			}
			break;
	
		case 15:
			func_232(0, 7000);
			func_232(2, 7000);
			func_232(1, 7000);
		
			if (func_85(uParam0))
			{
				if (func_336(&(uParam0->f_201), 0.1f))
				{
					uParam0->f_196 = MISC::GET_GAME_TIMER();
				
					if (func_16(uParam0->f_150, 8) && uParam0->f_57.f_78 == joaat("cost_crafting_grill"))
					{
						switch (uParam0->f_154)
						{
							case 0:
								if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"))
									func_88(joaat("SEARGRILL1_TRANS_BETWEEN_BITES"), 1f);
								else
									func_88(joaat("COOKGRILL1_TRANS_BETWEEN_BITES"), 1f);
								break;
						
							case 1:
								if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"))
									func_88(joaat("SEARGRILL2_TRANS_BETWEEN_BITES"), 1f);
								else
									func_88(joaat("COOKGRILL2_TRANS_BETWEEN_BITES"), 1f);
								break;
						}
					}
					else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"))
					{
						func_88(joaat("COOKKNIFE_SEAR_TRANS_BETWEEN_BITES"), 2f);
					}
					else
					{
						func_88(joaat("COOKKNIFE_TRANS_BETWEEN_BITES"), 2f);
					}
				}
			}
		
			if (func_70(uParam0->f_162[8]))
			{
				if (func_165(uParam0->f_162[8], false) && func_229(uParam0->f_162[8], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CRAFTING_EAT")))
				{
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_99(uParam0->f_57.f_77, 1, true, false, 0);
					func_546();
					func_144(&uParam0->f_162[8], true, true);
					func_144(&uParam0->f_162[7], true, true);
					func_552(uParam0, true);
					func_47(32768);
				
					if (!func_98(false))
						func_226(uParam0->f_57.f_77, 1, true, -142743235, false);
				
					uParam0->f_196 = MISC::GET_GAME_TIMER();
					func_62(uParam0, 17);
					return false;
				}
			}
		
			if (func_70(uParam0->f_162[7]))
			{
				if (func_165(uParam0->f_162[7], false) && func_229(uParam0->f_162[7], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")) || func_16(uParam0->f_151, 256) || func_138(Global_35, 0) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_35, true))
				{
					func_48(16);
					func_6(&(uParam0->f_151), 256);
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_144(&uParam0->f_162[7], true, true);
					func_144(&uParam0->f_162[8], true, true);
					func_552(uParam0, true);
					func_62(uParam0, 20);
					return false;
				}
			}
			break;
	
		case 17:
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 250 || func_125(&(uParam0->f_201)))
			{
				if (uParam0->f_57.f_32 && uParam0->f_57.f_78 == joaat("cost_crafting_grill"))
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"))
								func_88(joaat("SEARGRILL_TRANS_KNIFE1_EAT"), 1f);
							else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_cookgrill1"))
								func_88(joaat("COOKGRILL1_TRANS_KNIFE1_EAT"), 1f);
							else
								func_88(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
							break;
					
						case 1:
							if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"))
								func_88(joaat("SEARGRILL2_TRANS_KNIFE2_EAT"), 1f);
							else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_cookgrill2"))
								func_88(joaat("COOKGRILL2_TRANS_KNIFE2_EAT"), 1f);
							else
								func_88(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
							break;
					}
				}
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"))
				{
					func_88(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_EAT"), 1f);
				}
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"))
				{
					func_88(joaat("COOKKNIFE_TRANS_KNIFE1_EAT"), 1f);
				}
				else
				{
					func_88(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
				}
			
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 18);
			}
			break;
	
		case 20:
			if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 250 || func_125(&(uParam0->f_201)))
			{
				if (!func_16(uParam0->f_150, 8) || uParam0->f_57.f_78 != joaat("cost_crafting_grill"))
				{
					if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"))
						func_88(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_STOW"), 1f);
					else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"))
						func_88(joaat("COOKKNIFE_TRANS_KNIFE1_STOW"), 1f);
					else
						func_88(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
				}
				else
				{
					switch (uParam0->f_154)
					{
						case 0:
							if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"))
								func_88(joaat("SEARGRILL1_TRANS_KNIFE1_STOW"), 1f);
							else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_cookgrill1"))
								func_88(joaat("COOKGRILL_TRANS_KNIFE1_STOW"), 1f);
							else
								func_88(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
							break;
					
						case 1:
							if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"))
								func_88(joaat("SEARGRILL2_TRANS_KNIFE2_STOW"), 1f);
							else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_cookgrill2"))
								func_88(joaat("COOKGRILL2_TRANS_KNIFE2_STOW"), 1f);
							else
								func_88(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
							break;
					}
				}
			
				uParam0->f_196 = MISC::GET_GAME_TIMER();
				func_62(uParam0, 19);
			}
			break;
	}

	return false;
}

struct<2> func_250(int iParam0) // Position - 0xDABA Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_251(var uParam0, var uParam1, int iParam2) // Position - 0xDACC Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

Hash func_252(Hash hParam0, BOOL bParam1) // Position - 0xDADC Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_121(hash, 0))
		if (bParam1)
			if (func_563(hash) || func_564(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_253(Hash hParam0, BOOL bParam1) // Position - 0xDC62 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_121(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_254(Hash hParam0) // Position - 0xDC8E Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_286(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_255(Hash hParam0, BOOL bParam1) // Position - 0xDCC8 Hash - 0x148943C8 ^0x2BF2CC5F
{
	var unk;
	var unk6;
	var unk10;
	var unk11;
	var unk16;

	if (!func_121(hParam0, 0))
		return false;

	if (!func_565(hParam0, 856287005, &unk10, &unk6, &unk, true, 0))
		return false;

	unk11 = { func_566() };
	unk11.f_4 = unk10;

	if (func_567(hParam0, &unk16, &unk11, 1, 752097756, false))
	{
		if (bParam1)
			!func_568(hParam0, 1);
	
		if (func_569(hParam0))
			func_255(func_570(hParam0), true);
	
		func_571();
		return true;
	}

	return false;
}

void func_256(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xDD4B Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_121(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_572())
	{
		func_573(hParam0, iParam1, bParam2, bParam4);
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
		else if (bParam2 && func_454(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_122(hParam0);
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
	else if (!func_575(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_576(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_492(hParam0)), num), num5);

	if (iParam1 == 1 || func_190(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_492(hParam0));

	func_577(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

int func_257(Hash hParam0, int iParam1, int iParam2) // Position - 0xDFA0 Hash - 0xC758F57F ^0x801747D0
{
	int num;
	var unk;
	var unk6;

	if (!func_578(hParam0, iParam1))
		return 0;

	if (iParam1 == 1)
	{
		if (func_579(hParam0) && func_580(hParam0))
		{
			num = 0;
		
			if (func_581(hParam0, 369710026, &num))
				iParam2 = num;
		}
	}

	unk.f_4 = func_582(iParam1);
	unk = { func_583(false) };

	if (!func_567(hParam0, &unk6, &unk, iParam2, 752097756, true))
		return 0;

	return 1;
}

struct<2> func_258(Hash hParam0) // Position - 0xE017 Hash - 0x8E94575A ^0xD328884E
{
	return func_260(joaat("MADE"), hParam0);
}

BOOL func_259(Hash hParam0, int iParam1) // Position - 0xE02A Hash - 0xB51BEA17 ^0xA0420D6A
{
	int num;

	if (!func_121(hParam0, 0))
		return false;

	num = func_122(hParam0);

	switch (iParam1)
	{
		case 0:
			if (func_317(hParam0) || func_372(hParam0, -1636519629) == -701492487)
				return true;
			break;
	
		case 1:
			if (func_190(hParam0, -537818634) || func_190(hParam0, -458578204) && !func_190(hParam0, -1242251796))
				return true;
			break;
	
		case 2:
			if (num == joaat("AMMO"))
			{
				if (func_190(hParam0, -1588156645))
					return false;
			
				return true;
			}
			break;
	
		case 3:
			if (num == joaat("WEAPON"))
				return true;
			else if (num == joaat("AMMO"))
				if (func_190(hParam0, -1588156645))
					return true;
			break;
	
		case 4:
			if (func_190(hParam0, 127710288))
				return true;
			break;
	
		case 5:
			if (func_190(hParam0, -1242251796))
				return true;
			break;
	}

	return false;
}

struct<2> func_260(int iParam0, Hash hParam1) // Position - 0xE151 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

void func_261(int iParam0) // Position - 0xE167 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_23() != -1)
		return;

	num = func_584(iParam0);
	value = func_585(iParam0);

	if (Global_1347477.f_117 || !func_455(31) || !func_586(num))
		return;

	if (value <= 0f)
		return;

	if (func_587(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_588(num, Global_40.f_11095.f_11[num] + value, false);
	func_577(MISC::VAR_STRING(6, func_589(iParam0), value), "itemtype_textures", func_590(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

BOOL func_262(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0xE266 Hash - 0x4FC4FA99 ^0x540DBE26
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

	if (!func_121(hParam1, 0))
		return false;

	if (func_122(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_23() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_199(hParam1) == -999503751)
		return true;

	num = func_591(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_190(hParam1, 866047851))
	{
		num2 = func_413(num, 1);
	
		if (func_592(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
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
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_190(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_593(1868067663, &unk))
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
			num5 = func_594(componentHash, num, metaPedType, isMP);
			num4 = func_594(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
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
			hash = func_199(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
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
			hash = func_199(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_190(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_595(Global_1946054.f_1497.f_1[num2 /*3*/]))
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

void func_263(Hash hParam0, int iParam1) // Position - 0xE576 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_264() // Position - 0xE589 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_265(BOOL bParam0) // Position - 0xE5A8 Hash - 0x9114E741 ^0x8984E174
{
	if (func_23() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_63(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_63(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_596(1, bParam0, true);
	func_483();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_266(float fParam0) // Position - 0xE616 Hash - 0xF70C5319 ^0xF70C5319
{
	if (func_506(1) < fParam0)
		func_511(1, fParam0, 0);

	if (func_506(2) < fParam0)
		func_511(2, fParam0, 0);

	if (func_506(0) < fParam0)
		func_511(0, fParam0, 0);

	return;
}

BOOL func_267(int iParam0) // Position - 0xE657 Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_597(iParam0) == 0)
		return false;

	return true;
}

void func_268(int iParam0, int iParam1, int iParam2) // Position - 0xE68A Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_598(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	ped = func_204(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_600(ped, iParam1, func_599(iParam0, iParam1));
	func_601(ped, iParam1);
	return;
}

void func_269(float fParam0) // Position - 0xE70F Hash - 0xD5DAF5A7 ^0xD5DAF5A7
{
	func_516(10, fParam0);
	return;
}

BOOL func_270() // Position - 0xE71F Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_23() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

void func_271() // Position - 0xE745 Hash - 0xD8699E96 ^0xD7051C7F
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
	return;
}

int func_272() // Position - 0xE75C Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_273(int iParam0) // Position - 0xE76B Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

BOOL func_274(int iParam0, int iParam1) // Position - 0xE781 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_273(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_275(int iParam0) // Position - 0xE7A4 Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_273(iParam0))
		return false;

	if (func_602(64) && func_603(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_276(int iParam0) // Position - 0xE7DC Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_273(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_277(int iParam0) // Position - 0xE7FC Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_273(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_604(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

void func_278(int iParam0, int iParam1) // Position - 0xE865 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_279(true);

	return;
}

void func_279(BOOL bParam0) // Position - 0xE87E Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_17(&(Global_40.f_12019.f_42), 1);
	else
		func_6(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_280(int iParam0) // Position - 0xE8A8 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_281(BOOL bParam0) // Position - 0xE8E6 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_282(int iParam0) // Position - 0xE8F9 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_119(iParam0))
		return -1;

	return func_605(iParam0);
}

Hash func_283(Hash hParam0, int iParam1) // Position - 0xE915 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_121(hParam0, 0))
		return 0;

	num = func_122(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_190(hParam0, 1399091007))
	{
		func_606(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_284(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xE98F Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_86(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_285(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xE9B6 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_286(Hash hParam0) // Position - 0xE9F1 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_287(int iParam0) // Position - 0xEA0C Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_288(Hash hParam0, BOOL bParam1) // Position - 0xEA2D Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_607(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_609(&unk, func_608(false));

	if (!func_610(&unk, &num, &num2, false))
		return 0;

	func_287(num);
	return num2;
}

BOOL func_289(int iParam0, int iParam1) // Position - 0xEA8B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_290(var uParam0) // Position - 0xEA9A Hash - 0x39705408 ^0x39705408
{
	return func_289(*uParam0, 2);
}

float func_291() // Position - 0xEAAA Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_292(var uParam0, int iParam1) // Position - 0xEADC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_293(var uParam0, int iParam1) // Position - 0xEAED Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_294(int iParam0) // Position - 0xEB02 Hash - 0x407EDD13 ^0x2C8A0432
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
	return;
}

BOOL func_295(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0xEB1A Hash - 0x775608 ^0x775608
{
	var unk;
	var unk2;
	var unk3;

	return func_611(hParam0, hParam1, &unk, &unk2, &unk3, bParam2, bParam3, iParam4, bParam5);
}

struct<5> func_296(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEB38 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_583(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_122(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_616(hParam0, -1823706425))
			{
				unk = { func_346(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_616(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_346(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_615(bParam1) };
		
			switch (func_199(hParam0))
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
				unk = { func_346(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_608(bParam1) };
		
			if (bParam2 && func_612(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_613(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_613(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_614(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_617(unk, &unk28, bParam1, false))
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

BOOL func_297(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xEDF5 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_618(&hParam0);

	if (!func_121(hParam0, 0))
		return false;

	if (!func_98(false))
		bParam3 = true;

	if (func_619(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_608(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_613(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return false;
			else if (func_614(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return false;
		
			if (func_612(hParam0, true))
				if (!func_613(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return false;
				else if (func_614(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return false;
		}
		else if (!func_620(hParam0, &unk27, false))
		{
			return false;
		}
	
		return true;
	}

	num = func_621(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	if (bParam3 || !func_622(hParam0))
		inventoryItemCountWithItemid = func_419(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_86(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return true;

	return false;
}

struct<17> func_298(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6) // Position - 0xEF3A Hash - 0x2CC323E3 ^0xBABDE2C6
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_346(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;
	return unk;
}

int func_299(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xEF89 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_623(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_624(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_624(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_624(num, 1);
		return num;
	}

	return -1;
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xF010 Hash - 0xB03E660F ^0x8AE6A7CA
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == 1 || Global_1223212.f_1[i /*9*/].f_1 == 5)
				Global_1223212.f_1[i /*9*/].f_2 = { uParam1 };
		
			return;
		}
	}

	return;
}

int func_301(int iParam0, BOOL bParam1, int iParam2) // Position - 0xF082 Hash - 0x3DD75313 ^0x4F77747
{
	if (func_625(255))
		return 1;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
		return 0;

	if (!func_626(iParam0))
		return 0;

	if (!func_628(func_627(iParam0), !bParam1, iParam2, 0))
		return 0;

	return 1;
}

int func_302(int iParam0) // Position - 0xF0CF Hash - 0x27E22F13 ^0x27E22F13
{
	if (func_629())
		return 1;

	if (!func_628(func_630(iParam0), false, 255, 0))
		return 0;

	return 1;
}

BOOL func_303(Ped pedParam0, int iParam1) // Position - 0xF0F9 Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_304(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0xF138 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

void func_305(int iParam0) // Position - 0xF179 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_631(iParam0))
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

BOOL func_306(eStackSize essParam0) // Position - 0xF22C Hash - 0x77BA7B03 ^0x77BA7B03
{
	return essParam0 > -1 && essParam0 <= 80;
}

BOOL func_307(eStackSize essParam0) // Position - 0xF242 Hash - 0x621F6AE0 ^0x751E487E
{
	return Global_1835011[essParam0 /*74*/].f_63 & 64512 != 0;
}

void func_308(eStackSize essParam0, BOOL bParam1) // Position - 0xF25B Hash - 0xF7F9962 ^0x8ACA40E6
{
	BOOL flag;

	if (!func_306(essParam0))
		return;

	if (func_632(&Global_1835011[essParam0 /*74*/], 8192))
		flag = true;

	Global_1835011[essParam0 /*74*/].f_63 = 0;

	if (!bParam1 && flag)
	{
		Global_1835011[essParam0 /*74*/].f_63 = Global_1835011[essParam0 /*74*/].f_63 | 2;
		Global_1835011[essParam0 /*74*/].f_63 = Global_1835011[essParam0 /*74*/].f_63 | 8192;
	}

	return;
}

void func_309(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0xF2CB Hash - 0x98AF3B21 ^0x82D8CDEA
{
	BOOL flag;

	if (!func_117(essParam0))
		return;

	flag = true;

	if (!bParam1)
		flag = MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37);

	func_633(&(Global_1347702[essParam0 /*49*/].f_14));
	func_634(&(Global_1347702[essParam0 /*49*/].f_12), 16384);
	func_635(&(Global_1347702[essParam0 /*49*/].f_13), 4096);

	if (flag)
	{
		if (Global_1347702[essParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[essParam0 /*49*/].f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[essParam0 /*49*/].f_37));
		
			if (iParam2 == 1)
				func_637(essParam0, func_636(essParam0), false, false);
		}
		else if (Global_1347702[essParam0 /*49*/].f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[essParam0 /*49*/].f_37));
		
			if (iParam2 == 1)
				func_637(essParam0, func_638(essParam0), false, false);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
		}
	}

	return;
}

BOOL func_310(int iParam0, int iParam1) // Position - 0xF3CE Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_23() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_311(int iParam0) // Position - 0xF401 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_23() != -1)
		if (func_313(iParam0, 4))
			return false;
	else if (func_313(iParam0, 2))
		return false;

	return true;
}

BOOL func_312(int iParam0) // Position - 0xF431 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_313(iParam0, 65536) && !func_313(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_313(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_313(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_313(int iParam0, int iParam1) // Position - 0xF4DD Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_314(int iParam0) // Position - 0xF4F6 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_315() // Position - 0xF509 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

Hash func_316(Hash hParam0) // Position - 0xF518 Hash - 0xBA965109 ^0x5F77AAA4
{
	switch (hParam0)
	{
		case joaat("a_c_hawk_01"):
		case joaat("a_c_cormorant_01"):
		case joaat("a_c_songbird_01"):
		case joaat("a_c_oriole_01"):
		case joaat("a_c_robin_01"):
		case joaat("a_c_roseatespoonbill_01"):
		case joaat("a_c_sparrow_01"):
		case joaat("a_c_owl_01"):
		case joaat("a_c_raven_01"):
		case joaat("a_c_cranewhooping_01"):
		case joaat("a_c_redfootedbooby_01"):
		case joaat("a_c_cedarwaxwing_01"):
		case joaat("a_c_seagull_01"):
		case joaat("a_c_crow_01"):
		case joaat("A_C_Pigeon"):
		case joaat("a_c_loon_01"):
		case joaat("a_c_woodpecker_01"):
		case joaat("a_c_woodpecker_02"):
		case joaat("a_c_egret_01"):
		case joaat("a_c_heron_01"):
		case joaat("a_c_vulture_01"):
		case joaat("a_c_californiacondor_01"):
		case joaat("a_c_eagle_01"):
		case joaat("a_c_bluejay_01"):
		case joaat("a_c_cardinal_01"):
			return joaat("consumable_gamey_bird_cooked");
	
		case joaat("a_c_fishbluegil_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_xl"):
		case joaat("a_c_fishlongnosegar_01_lg"):
		case joaat("a_c_fishbullheadcat_01_ms"):
		case joaat("a_c_fishbullheadcat_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_lg"):
		case joaat("a_c_fishbluegil_01_ms"):
			return joaat("consumable_gritty_fish_meat_cooked");
	
		case joaat("a_c_chicken_01"):
		case joaat("a_c_turkeywild_01"):
		case joaat("a_c_turkey_01"):
		case joaat("a_c_turkey_02"):
		case joaat("a_c_goosecanada_01"):
		case joaat("a_c_rooster_01"):
		case joaat("a_c_prairiechicken_01"):
			return joaat("consumable_plump_bird_cooked");
	
		case joaat("a_c_crab_01"):
			return joaat("consumable_crustacean_meat_cooked");
	
		case joaat("a_c_elk_01"):
		case joaat("a_c_buck_01"):
		case joaat("a_c_moose_01"):
		case joaat("a_c_deer_01"):
		case joaat("a_c_pronghorn_01"):
			return joaat("consumable_mature_venison_cooked");
	
		case joaat("a_c_fishrockbass_01_ms"):
		case joaat("a_c_fishsmallmouthbass_01_lg"):
		case joaat("a_c_fishmuskie_01_lg"):
		case joaat("a_c_fishchainpickerel_01_ms"):
		case joaat("a_c_fishperch_01_ms"):
		case joaat("a_c_fishlakesturgeon_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_ms"):
		case joaat("a_c_fishrockbass_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_ms"):
		case joaat("a_c_fishchainpickerel_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_sm"):
		case joaat("a_c_fishnorthernpike_01_lg"):
		case joaat("a_c_fishperch_01_sm"):
		case joaat("a_c_fishsmallmouthbass_01_ms"):
			return joaat("consumable_flakey_fish_cooked");
	
		case joaat("a_c_alligator_01"):
		case joaat("a_c_alligator_02"):
		case joaat("a_c_alligator_03"):
		case joaat("a_c_wolf"):
		case joaat("a_c_bear_01"):
		case joaat("a_c_wolf_medium"):
		case joaat("a_c_wolf_small"):
		case joaat("a_c_cougar_01"):
		case joaat("a_c_bearblack_01"):
		case joaat("a_c_panther_01"):
			return joaat("consumable_big_game_meat_cooked");
	
		case joaat("a_c_iguana_01"):
		case joaat("a_c_turtlesea_01"):
		case joaat("a_c_frogbull_01"):
		case joaat("a_c_iguanadesert_01"):
		case joaat("a_c_turtlesnapping_01"):
		case joaat("a_c_toad_01"):
			return joaat("consumable_herptile_meat_cooked");
	
		case joaat("a_c_armadillo_01"):
		case joaat("a_c_snakeredboa_01"):
		case joaat("a_c_chipmunk_01"):
		case joaat("a_c_possum_01"):
		case joaat("a_c_skunk_01"):
		case joaat("a_c_badger_01"):
		case joaat("a_c_muskrat_01"):
		case joaat("a_c_snakewater_01"):
		case joaat("a_c_fox_01"):
		case joaat("a_c_coyote_01"):
		case joaat("a_c_snake_01"):
		case joaat("a_c_beaver_01"):
		case joaat("a_c_snakeblacktailrattle_01"):
		case joaat("a_c_rat_01"):
		case joaat("a_c_raccoon_01"):
		case joaat("a_c_snakeferdelance_01"):
		case joaat("a_c_squirrel_01"):
			return joaat("consumable_string_meat_cooked");
	
		case joaat("a_c_parrot_01"):
		case joaat("a_c_pelican_01"):
		case joaat("a_c_carolinaparakeet_01"):
			return joaat("consumable_exotic_bird_cooked");
	
		case joaat("a_c_bighornram_01"):
		case joaat("a_c_goat_01"):
		case joaat("a_c_sheep_01"):
			return joaat("consumable_gristly_mutton_cooked");
	
		case joaat("a_c_duck_01"):
		case joaat("A_C_Rabbit_01"):
		case joaat("a_c_pheasant_01"):
		case joaat("a_c_quail_01"):
			return joaat("consumable_game_meat_cooked");
	
		case joaat("A_C_Cow"):
		case joaat("a_c_bull_01"):
		case joaat("a_c_ox_01"):
		case joaat("a_c_buffalo_01"):
			return joaat("consumable_prime_beef_cooked");
	
		case joaat("a_c_fishsalmonsockeye_01_ms"):
		case joaat("a_c_fishrainbowtrout_01_lg"):
		case joaat("a_c_fishrainbowtrout_01_ms"):
		case joaat("a_c_fishsalmonsockeye_01_lg"):
			return joaat("consumable_succulent_fish_cooked");
	
		case joaat("a_c_pig_01"):
		case joaat("a_c_javelina_01"):
		case joaat("a_c_boar_01"):
			return joaat("consumable_tender_pork_cooked");
	}

	return 0;
}

BOOL func_317(Hash hParam0) // Position - 0xF87A Hash - 0xA3EEED9 ^0x97FF85C3
{
	if (func_122(hParam0) == joaat("consumable") && INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 16777216))
		return true;

	return false;
}

void func_318(Volume volParam0) // Position - 0xF8A6 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

Ped func_319(Ped pedParam0) // Position - 0xF8BD Hash - 0xC202D55A ^0x3B765787
{
	Ped ped;

	ped = func_639(pedParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && PED::IS_PED_INJURED(ped))
		return ped;

	return 0;
}

int func_320(Hash hParam0, int iParam1) // Position - 0xF8E7 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_640(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_641(hParam0, &unk5, &unk, iParam1);
}

BOOL func_321(Hash hParam0) // Position - 0xF910 Hash - 0x7A41F8FA ^0x4ED5CABB
{
	if (!func_121(hParam0, 0))
		return false;

	if (func_190(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_642(hParam0);
}

int func_322(Ped pedParam0, int iParam1) // Position - 0xF93F Hash - 0xF9E10DA3 ^0xEBBACA92
{
	int num;
	int pedQuality;

	if (iParam1 == 2)
	{
		num = 4;
	}
	else if (iParam1 == 1)
	{
		num = 3;
	}
	else
	{
		pedQuality = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (pedQuality)
		{
			case -1:
			case 2:
				num = 2;
				break;
		
			case 0:
				num = 0;
				break;
		
			case 1:
				num = 1;
				break;
		}
	}

	return num;
}

BOOL func_323(Ped pedParam0) // Position - 0xF99B Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(pedParam0))
	{
		case joaat("a_c_fishbluegil_01_sm"):
		case joaat("a_c_crab_01"):
		case joaat("a_c_fishrockbass_01_ms"):
		case joaat("a_c_songbird_01"):
		case joaat("a_c_chipmunk_01"):
		case joaat("a_c_oriole_01"):
		case joaat("a_c_robin_01"):
		case joaat("a_c_fishchainpickerel_01_ms"):
		case joaat("a_c_sparrow_01"):
		case joaat("a_c_frogbull_01"):
		case joaat("a_c_fishperch_01_ms"):
		case joaat("a_c_cedarwaxwing_01"):
		case joaat("a_c_fishredfinpickerel_01_ms"):
		case joaat("a_c_fishrockbass_01_sm"):
		case joaat("a_c_fishsalmonsockeye_01_ms"):
		case joaat("a_c_crow_01"):
		case joaat("A_C_Pigeon"):
		case joaat("a_c_fishlargemouthbass_01_ms"):
		case joaat("a_c_fishchainpickerel_01_sm"):
		case joaat("a_c_fishrainbowtrout_01_ms"):
		case joaat("a_c_woodpecker_01"):
		case joaat("a_c_fishredfinpickerel_01_sm"):
		case joaat("a_c_bat_01"):
		case joaat("a_c_fishbullheadcat_01_ms"):
		case joaat("a_c_fishperch_01_sm"):
		case joaat("a_c_woodpecker_02"):
		case joaat("a_c_rat_01"):
		case joaat("a_c_squirrel_01"):
		case joaat("a_c_fishbullheadcat_01_sm"):
		case joaat("a_c_toad_01"):
		case joaat("a_c_bluejay_01"):
		case joaat("a_c_carolinaparakeet_01"):
		case joaat("a_c_cardinal_01"):
		case joaat("a_c_fishsmallmouthbass_01_ms"):
		case joaat("a_c_fishbluegil_01_ms"):
		case joaat("a_c_quail_01"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_324(Hash hParam0) // Position - 0xFA8C Hash - 0x5E6E1858 ^0x5BD2FA9
{
	!func_121(hParam0, 0);

	if (func_190(hParam0, 1286414894))
		return true;

	return false;
}

Hash func_325(Ped pedParam0) // Position - 0xFAB2 Hash - 0xC81C18F9 ^0xACAAEE80
{
	Ped pedIndexFromEntityIndex;
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return 0;

	func_643(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);

	if (func_644(&num2, pedIndexFromEntityIndex, num, unk))
	{
	}

	return num2;
}

Hash func_326(Ped pedParam0) // Position - 0xFB0E Hash - 0x715B29E5 ^0xAF0BC29E
{
	Hash carriableFromEntity;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(pedParam0);

	if (carriableFromEntity == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			carriableFromEntity = func_645(pedIndexFromEntityIndex);
		}
	}

	return carriableFromEntity;
}

int func_327(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0xFB4D Hash - 0xD56AECBD ^0x2416076C
{
	Ped ped;

	if (!bParam4)
	{
		iParam1 = func_646(hParam0, iParam1, true, true, -142743235);
	}
	else
	{
		ped = func_647(0);
	
		if (ENTITY::DOES_ENTITY_EXIST(ped))
			func_648(&ped, hParam0, &iParam1, bParam2, hParam3);
	}

	if (iParam1 <= 0)
		return 1;

	return func_649(hParam0, iParam1, bParam2, hParam3);
}

BOOL func_328(Hash hParam0) // Position - 0xFBA4 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_329() // Position - 0xFBB2 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

BOOL func_330(int iParam0) // Position - 0xFBC0 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_282(iParam0);
	return num == 3 || num == 4;
}

void func_331(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFBDE Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return;

	num = func_163(iParam0);
	func_179(num, bParam1);
	return;
}

void func_332(var uParam0, char* sParam1) // Position - 0xFC0A Hash - 0x51CAA743 ^0xF09D0482
{
	int num;

	if (func_70(*uParam0))
	{
		num = func_163(*uParam0);
	
		if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
			HUD::_UI_PROMPT_SET_TAG(Global_1945188[num /*18*/].f_3, sParam1);
	}

	return;
}

BOOL func_333(var uParam0) // Position - 0xFC46 Hash - 0xB3BEF658 ^0x84B3F0F6
{
	Entity scenarioPointEntity;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[5]))
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->[5], true), 1.5f) > 0)
			return false;
	
		scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->[5]);
	
		if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
			if (FIRE::IS_ENTITY_ON_FIRE(scenarioPointEntity))
				return false;
	}

	return true;
}

BOOL func_334(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFC97 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_650(bParam1, bParam2, bParam3);

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

BOOL func_335() // Position - 0xFDCC Hash - 0x24B9F73C ^0xBB1667FB
{
	float disabledControlNormal;
	float disabledControlNormal2;
	float num;

	disabledControlNormal = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"));
	disabledControlNormal2 = PAD::GET_DISABLED_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"));
	num = (disabledControlNormal * disabledControlNormal) + (disabledControlNormal2 * disabledControlNormal2);

	if (num >= 0.9f * 0.9f)
		return true;

	return false;
}

BOOL func_336(var uParam0, float fParam1) // Position - 0xFE0F Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_29(uParam0, fParam1))
	{
		func_337(uParam0);
		return true;
	}

	return false;
}

void func_337(var uParam0) // Position - 0xFE2D Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_338(int iParam0, BOOL bParam1) // Position - 0xFE43 Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_163(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[num /*18*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1945188[num /*18*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[num /*18*/].f_3);
}

BOOL func_339(var uParam0) // Position - 0xFE9A Hash - 0x95087098 ^0x7EA9D417
{
	int num;

	uParam0->f_155 = func_61();
	num = func_36(uParam0);

	if (uParam0->f_156 == -1 || num == uParam0->f_156 && uParam0->f_157 == 0 || func_651(uParam0->f_155, uParam0->f_157) || uParam0->f_156 == -1 && func_651(uParam0->f_155, uParam0->f_157) && !(PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)))
	{
		uParam0->f_154 = num;
		return true;
	}

	return false;
}

BOOL func_340(var uParam0, int iParam1) // Position - 0xFF27 Hash - 0xD62756CB ^0x6EB88F26
{
	if (iParam1 != -1)
	{
		if (iParam1 != uParam0->f_158)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
			{
				uParam0->f_159 = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->[0], "p_boiler02x");
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_159, true);
			}
		
			if (uParam0->f_158 != -1)
				if (TASK::_DISASSOCIATE_PROP_FROM_SCENARIO(uParam0->[uParam0->f_158], "p_boiler02x"))
					uParam0->f_158 = -1;
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_159))
			{
				if (TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->[iParam1], uParam0->f_159, "p_boiler02x", true))
				{
					uParam0->f_158 = iParam1;
					return true;
				}
			}
		
			return false;
		}
		else
		{
			return true;
		}
	}

	return false;
}

void func_341(var uParam0) // Position - 0xFFC1 Hash - 0x7B400347 ^0x2A6787EB
{
	Hash activeDynamicScenario2;

	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);

	if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
	{
		if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
		{
			func_88(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}
	else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
	{
		if (func_85(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_196 > 500)
		{
			func_88(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_196 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

BOOL func_342(var uParam0) // Position - 0x10046 Hash - 0xE8DBE784 ^0x67EB816B
{
	if (uParam0->f_155 == 6 && func_60(true))
	{
		return true;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				func_88(joaat("COFFEE_TRANS_KNEEL"), 1086324736);
				break;
		}
	}

	return false;
}

BOOL func_343(Ped pedParam0, Any anParam1, char* sParam2, char* sParam3, char* sParam4) // Position - 0x1008B Hash - 0xF6E1DC12 ^0x9D24136
{
	PED::_ADD_SCENARIO_TRANSITION(Global_35);
	return TASK::_0x79197F7D2BB5E73A(pedParam0, anParam1, sParam2, sParam3, sParam4, 0);
}

BOOL func_344(var uParam0) // Position - 0x100A9 Hash - 0xD7916F02 ^0x6B6D9110
{
	if (uParam0->f_155 == 6 && func_60(true))
	{
		return true;
	}
	else
	{
		switch (uParam0->f_155)
		{
			case 1:
				func_88(joaat("COFFEE_TRANS_KNEEL"), 1086324736);
				break;
		
			case 7:
				func_88(joaat("SIT_TRANS_KNEEL"), 0.5f);
				break;
		
			case 8:
				func_88(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
				break;
		}
	}

	return false;
}

BOOL func_345(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1011E Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_652(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_98(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_86(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

struct<4> func_346(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1016A Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_121(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_86(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_347(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1019B Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_652(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_617(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_98(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_86(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_348(Hash hParam0) // Position - 0x1022B Hash - 0x229B2393 ^0x1B35F016
{
	if (func_190(hParam0, 1573112293))
		return func_653(hParam0);

	switch (func_199(hParam0))
	{
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_656();
	
		case -1823706425:
			return func_659();
	
		case -1393202694:
		case 2041469314:
			return func_653(hParam0);
	
		case -854348463:
			return func_660();
	
		case -525676072:
			return func_656();
	
		case -77448735:
			if (func_654(hParam0))
				return func_653(hParam0);
			break;
	
		case 1779021115:
			if (func_121(hParam0, 0))
				if (hParam0 == joaat("weapon_kit_camera"))
					return func_657();
		
			return func_658();
	
		case 1802292908:
			return func_655();
	
		default:
			if (func_121(hParam0, 0))
			{
				if (func_190(hParam0, 1192444843) || func_190(hParam0, -1540973036))
					return func_661();
				else if (func_190(hParam0, 1919582297))
					return func_662();
				else if (func_190(hParam0, 1147021565))
					return func_663();
			
				switch (hParam0)
				{
					case joaat("upgrade_upg_mortar_pestle"):
					case -1448210800:
						return func_664();
				
					case joaat("kit_horse_brush"):
						return func_665();
				}
			}
		
			return func_666();
	}

	return func_666();
}

BOOL func_349(var uParam0, Player plParam1, BOOL bParam2, int iParam3) // Position - 0x103AC Hash - 0x4D17FACB ^0x3553DA46
{
	func_667(plParam1);

	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}

	if (Global_1935630.f_12 || *uParam0)
		return false;

	if (func_23() == false)
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
			uParam0->f_2 = func_668(bParam2);
			uParam0->f_3 = 1;
		}
	
		if (!uParam0->f_2)
			return false;
	}

	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_669(bParam2);
			uParam0->f_5 = 1;
		}
	
		if (!uParam0->f_4)
			return false;
	}

	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_670(bParam2, iParam3, true);
			uParam0->f_7 = 1;
		}
	
		if (!uParam0->f_6)
			return false;
	}

	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_671(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_672(Global_35);
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
				func_201("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_671(Global_35, SCRIPT_TASK_MOUNT_ANIMAL);
			uParam0->f_11 = 1;
		}
	
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_672(Global_35);
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
			uParam0->f_8 = func_672(Global_35);
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
					uParam0->f_16 = func_673(Global_1935630.f_40, true);
					uParam0->f_17 = 1;
				}
			
				if (!uParam0->f_16)
				{
					if (bParam2)
						func_201("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
				
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
				func_201("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
		
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
			uParam0->f_18 = func_182();
			uParam0->f_19 = 1;
		}
	
		if (uParam0->f_18)
		{
			if (bParam2)
				func_201("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
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

BOOL func_350() // Position - 0x10876 Hash - 0xC43E5A88 ^0x7B6E2EFE
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

BOOL func_351(BOOL bParam0) // Position - 0x108D9 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_352(BOOL bParam0, BOOL bParam1) // Position - 0x10909 Hash - 0x81F8AB1A ^0x95114B10
{
	Ped mount;

	if (func_23() == false)
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_2439.f_28.f_19);

	if (func_674())
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_140(Global_35))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_675())
	{
		if (bParam0)
			if (func_435() != 8 && func_435() != 7)
				func_201("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, true);
			else
				func_201("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, true);
	
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
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_334(PLAYER::PLAYER_ID(), true, true, false))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
				func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (func_676(&Global_1393447, 16))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_677())
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_678(joaat("simple_crafting")) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("simple_crafting")) > 0)
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || !PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false) || PED::IS_PED_IN_ANY_BOAT(Global_35) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_18(0, true, true) && !func_679(1))
	{
		if (bParam0)
			if (func_166(15))
				func_201("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, true);
			else
				func_201("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_329() == 8)
		return false;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_680(8388608))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_56(8388608))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_681(func_22()))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_5() || func_682(func_22()) == 9 || func_683(func_22()) && !func_684())
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_685(Global_35))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_686())
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496.f_131, true) > 2f)
	{
		Global_1935496.f_128 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(Global_36) };
		Global_1935496.f_131 = { Global_36 };
	}

	if (func_687(Global_35, Global_1935496.f_128, 4f, true, true))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_688(Global_36, 5f))
	{
		if (bParam0)
			func_201("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (BUILTIN::VDIST2(Global_36, Global_1347702[74 /*49*/].f_24) < 144f && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("rcm_evelyn_miller4")) > 0)
		return false;

	return true;
}

void func_353(int iParam0, int iParam1) // Position - 0x10E24 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_278(iParam0, 0);
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
	
		func_108(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

void func_354(int iParam0, int iParam1) // Position - 0x10E7C Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_119(iParam0))
		return;

	func_689(iParam0, iParam1);
	return;
}

BOOL func_355(int iParam0) // Position - 0x10E99 Hash - 0xBF2B4762 ^0xBF2B4762
{
	return Global_40.f_490.f_402[iParam0] & true != 0;
}

BOOL func_356(int iParam0) // Position - 0x10EB2 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_23() != -1)
		return false;

	return func_120(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_357(int iParam0) // Position - 0x10ED5 Hash - 0x9921E361 ^0x80761F6A
{
	return Global_40.f_12004.f_6 && iParam0 != false;
}

void func_358(int iParam0) // Position - 0x10EEA Hash - 0x25D46568 ^0xDB7BDC37
{
	Global_40.f_12019.f_26 = Global_40.f_12019.f_26 || iParam0;
	return;
}

void func_359(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x10F05 Hash - 0xD806FABF ^0x915F22C
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
		
			if (func_264() && func_451(38) || func_356(38))
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
		
			if (func_264() && func_451(39) || func_356(39))
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
		
			if (func_264() && func_451(49) || func_356(49))
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
		if (func_264() && func_451(38) || func_356(38))
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
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_692(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_449(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_264() && func_451(39) || func_356(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_264() && func_451(49) || func_356(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

void func_360(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x114B3 Hash - 0x2D6CF941 ^0xBE55C1CF
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
		
			if (func_264() && func_451(38) || func_356(38))
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
			if (func_264() && func_451(39) || func_356(39))
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
			if (func_264() && func_451(41) || func_356(41))
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
			num = func_693(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_264() && func_451(49) || func_356(49))
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
			num = func_693(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_694(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_695(iParam0, hash, hash2);
	func_696(iParam0, hash, unk, str5, str4);
	func_697(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_698(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_699(iParam0, hash, hash2, iParam6);
	func_700(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_361(int iParam0) // Position - 0x118F0 Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

BOOL func_362(int iParam0) // Position - 0x1190B Hash - 0x9921E361 ^0x3BD1D7
{
	return Global_40.f_12004.f_1 && iParam0 != false;
}

void func_363(int iParam0) // Position - 0x11920 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12019.f_3 = Global_40.f_12019.f_3 || iParam0;
	return;
}

void func_364(int iParam0) // Position - 0x1193B Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

BOOL func_365(int iParam0) // Position - 0x11956 Hash - 0x9921E361 ^0x9A354EEF
{
	return Global_40.f_12004.f_3 && iParam0 != false;
}

void func_366(int iParam0) // Position - 0x1196B Hash - 0x25D46568 ^0xB710C32B
{
	Global_40.f_12019.f_4 = Global_40.f_12019.f_4 || iParam0;
	return;
}

void func_367(int iParam0) // Position - 0x11986 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

BOOL func_368(int iParam0) // Position - 0x119A1 Hash - 0x9921E361 ^0x59BA6F7C
{
	return Global_40.f_12004.f_5 && iParam0 != false;
}

void func_369(int iParam0) // Position - 0x119B6 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12019.f_2 = Global_40.f_12019.f_2 || iParam0;
	return;
}

void func_370(int iParam0) // Position - 0x119D1 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

BOOL func_371(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x119EC Hash - 0x5AD1F9FD ^0x42FC5FEC
{
	Hash interactionAnimHash;

	switch (func_372(hParam0, -949239683))
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

int func_372(Hash hParam0, int iParam1) // Position - 0x11D08 Hash - 0x7A1C2599 ^0xFF9B5634
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

void func_373(Hash hParam0) // Position - 0x11D52 Hash - 0x26CEB274 ^0x33203B5B
{
	Hash hash;

	hash = joaat("apply_lotion_left_hand");

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_374() // Position - 0x11DD2 Hash - 0xB6A628E2 ^0xC1A3BB0C
{
	return 1 == Global_40.f_7748.f_3;
}

BOOL func_375(Ped pedParam0) // Position - 0x11DE4 Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_704(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

void func_376(Hash hParam0) // Position - 0x11E1D Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_377(Hash hParam0, BOOL bParam1) // Position - 0x11E9D Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_378(Hash hParam0, BOOL bParam1) // Position - 0x11F4A Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_379(Hash hParam0) // Position - 0x11FF7 Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_380(Hash hParam0) // Position - 0x12077 Hash - 0x26CEB274 ^0xC6610213
{
	Hash hash;

	hash = -680642132;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_381(Hash hParam0) // Position - 0x120F7 Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_382(Hash hParam0) // Position - 0x12177 Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_383(Hash hParam0) // Position - 0x121F7 Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_384(Hash hParam0) // Position - 0x12277 Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_385(Hash hParam0) // Position - 0x122F7 Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_386(Hash hParam0) // Position - 0x12377 Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_387(Hash hParam0) // Position - 0x123F7 Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_388(Hash hParam0) // Position - 0x12477 Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_701())
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
		if (func_190(hParam0, 1573112293))
			func_705(func_524(&hParam0), true, 1);
	
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_389(Hash hParam0) // Position - 0x12511 Hash - 0x26CEB274 ^0x36AF879B
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

void func_390(Hash hParam0) // Position - 0x12591 Hash - 0x26CEB274 ^0xF38E7004
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_701())
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
		func_702(Global_35, hParam0, hash, 1);
	}
	else
	{
		func_703(hParam0, true);
		func_226(hParam0, 1, false, -142743235, false);
	}

	return;
}

BOOL func_391(int iParam0, int iParam1) // Position - 0x12611 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_392(const char* sParam0) // Position - 0x12620 Hash - 0x2124511C ^0xA40AAA4F
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

void func_393(int iParam0) // Position - 0x1265A Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_391(iParam0, 1))
		func_706(1);

	return;
}

BOOL func_394(eStackSize essParam0) // Position - 0x12671 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_707(essParam0))
		return false;

	if (func_708(essParam0, 4))
		return true;

	return false;
}

int func_395(int iParam0) // Position - 0x12696 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_396(int iParam0) // Position - 0x126AF Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_204(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_709(ped))
		return true;

	return false;
}

int func_397() // Position - 0x12710 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3054;
}

void func_398(BOOL bParam0) // Position - 0x12721 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_399(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x12734 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_710(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_711(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_398(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_710(iParam0))
				return;
		
			func_711(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_398(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_418(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_400() // Position - 0x12940 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_401(Hash hParam0) // Position - 0x1294F Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_712())
		return false;

	if (!func_121(hParam0, 0))
		return false;

	if (!func_25(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_402(Hash hParam0) // Position - 0x12986 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_713(hParam0);
}

void func_403(var uParam0, int iParam1) // Position - 0x12994 Hash - 0xF55E891F ^0xF55E891F
{
	func_714(uParam0, iParam1);
	return;
}

int func_404(Hash hParam0, int iParam1) // Position - 0x129A4 Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_715(hParam0);

	if (func_190(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_716(&hash))
			if (flag)
				interactionAnimHash = func_717();
			else
				interactionAnimHash = func_718();
		else if (func_128(iParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_719();
		else
			interactionAnimHash = func_720();
	else if (func_721(&hash))
		if (func_190(hash, -1303648999))
			interactionAnimHash = func_717();
		else
			interactionAnimHash = func_718();
	else if (flag)
		interactionAnimHash = func_719();
	else
		interactionAnimHash = func_720();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_405(BOOL bParam0) // Position - 0x12A77 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_406() // Position - 0x12A88 Hash - 0xB6203BF0 ^0x217DD714
{
	func_722(&(Global_1946054.f_2776));
	func_723(32768);
	func_724(1108822547, 8, 6);
	return;
}

BOOL func_407(int iParam0, BOOL bParam1) // Position - 0x12AAF Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_725(iParam0, false) < func_726(iParam0, bParam1);
}

BOOL func_408(Hash hParam0) // Position - 0x12AC7 Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_727(hParam0, &unk);
}

void func_409(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12AD7 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_728(hParam0))
		return;

	hash = func_199(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_729(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_729(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_729(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_729(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_729(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_729(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_410(0))
	{
		func_730(hParam0, true);
	
		if (func_731() == 1160113249)
			func_730(func_410(-2125499975), false);
		else
			func_730(func_410(1160113249), false);
	}

	func_732();

	if (func_733(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_86(false), hParam0, 0);

	func_211(hParam0, bParam3);

	if (bParam2)
		func_734(false, false);

	return;
}

Hash func_410(int iParam0) // Position - 0x12C3D Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_731();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_411(Hash hParam0, Hash hParam1) // Position - 0x12C68 Hash - 0x4EAC6B69 ^0x4EAC6B69
{
	Hash hash;

	hash = func_199(hParam1);

	if (hash != func_199(hParam0))
		return;

	func_735(hParam0, hParam1, true);
	return;
}

int func_412(var uParam0) // Position - 0x12C8F Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_736(i, 1);
	}

	return -358215195;
}

int func_413(int iParam0, int iParam1) // Position - 0x12CCA Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_414(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x12E9B Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_737();

	if (iParam2 == 39)
	{
		unk = { func_296(hParam0, true, false) };
		iParam2 = func_413(func_412(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_190(hParam0, 866047851) && func_592(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_405(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_738(func_736(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_739(iParam2);
	func_740(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_741(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_741(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_742(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_743(hParam0, iParam2, hParam1, func_23() != -1);

	if (bParam4)
		func_744(&(Global_1946054.f_1378), true, 3);
	else
		func_744(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_724(func_736(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_415(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x130A8 Hash - 0x5AF76643 ^0x5AF76643
{
	func_745(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

int func_416(int iParam0) // Position - 0x130C1 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_413(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_417(int iParam0) // Position - 0x13125 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_746(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_747(num);
	return;
}

void func_418(int iParam0, int iParam1, int iParam2) // Position - 0x13169 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_747(num);
	return;
}

int func_419(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x13189 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_121(hParam0, 0))
		return 0;

	guid = { func_346(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_86(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_420() // Position - 0x131D1 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1914319.f_18996.f_1;
}

BOOL func_421() // Position - 0x131E2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_18996;
}

char* func_422() // Position - 0x131F1 Hash - 0xC695042A ^0x2456473A
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

Ped func_423(int iParam0) // Position - 0x132DC Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_424(int iParam0) // Position - 0x1330F Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_425(int iParam0) // Position - 0x13343 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_426(float fParam0, Any anParam1, float fParam2) // Position - 0x13379 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_427(int iParam0) // Position - 0x1338E Hash - 0x4D892971 ^0xAE6B238D
{
	return func_128(Global_1128974[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/].f_58, iParam0);
}

BOOL func_428() // Position - 0x133A8 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_427(2);
}

BOOL func_429(int iParam0) // Position - 0x133B6 Hash - 0x863407EE ^0x2FA2F34D
{
	if (Global_1572887.f_12 == -1)
		return false;

	return Global_1146476.f_1 && iParam0 != false;
}

BOOL func_430() // Position - 0x133D7 Hash - 0x8A1C1656 ^0x17C26F3D
{
	if (func_351(false) && !func_748() || func_749() || Global_1935689.f_1 || func_750())
		return false;

	return true;
}

void func_431(int iParam0) // Position - 0x13416 Hash - 0x29A8F290 ^0x5B1674A8
{
	Global_1898068.f_8 = iParam0;
	return;
}

var func_432(int iParam0, int iParam1) // Position - 0x13426 Hash - 0x42C305C ^0x81DF2F42
{
	return func_751(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_433(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, BOOL bParam17, BOOL bParam18) // Position - 0x13444 Hash - 0xC0B30484 ^0xEDC09E5
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
				func_752(&(Global_1058888.f_43130), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 16, 4, &uParam16);
	return;
}

BOOL func_434(eStackSize essParam0) // Position - 0x134D2 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

eStackSize func_435() // Position - 0x134E8 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

struct<2> func_436(Hash hParam0) // Position - 0x134F6 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_121(hParam0, 0))
		return unk;

	if (func_190(hParam0, -305066475))
		if (func_23() == -1)
			if (func_190(hParam0, -537818634))
				return func_523(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_523(joaat("deadeye_items"));
	else if (func_190(hParam0, -537818634))
		return func_523(joaat("medicine_items"));

	if (func_190(hParam0, 2084895747))
		return func_523(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_437(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1358A Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_607(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_609(&unk, func_608(false));

	if (!func_610(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_285(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_347(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_287(num);
	num3 < iParam1;
	return true;
}

void func_438(Hash hParam0, int iParam1) // Position - 0x13655 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_190(hParam0, 606799272))
			func_753(hParam0, iParam1);
	
		if (func_190(hParam0, -1112814642) && func_190(hParam0, -1697809989))
			func_474(hParam0, iParam1, true, false);
	}

	return;
}

void func_439() // Position - 0x136A8 Hash - 0x5516EB92 ^0x96671886
{
	Global_1911914.f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914.f_1581 = 1;
	return;
}

BOOL func_440(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x136C3 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_23() == -1)
	{
		if (func_619(hParam0) && func_754(hParam0))
		{
			func_755(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_441(Hash hParam0, var uParam1, int iParam2) // Position - 0x1371A Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_756(hParam0, uParam1);
	unk = { func_296(hParam0, false, true) };
	num = func_621(hParam0, &unk, false, false);
	num2 = func_757(hParam0, false);

	if (num > 1 && !func_758() && num2 + iParam2 >= num)
		if (func_190(hParam0, -2051813666))
			func_63(583, true);
		else
			func_63(582, false);

	if (func_297(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_442(Hash hParam0, BOOL bParam1) // Position - 0x137B6 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_372(hParam0, -949239683))
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

BOOL func_443(Hash hParam0) // Position - 0x13862 Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_23() != -1)
		return false;

	return func_444(hParam0) != 0;
}

Hash func_444(Hash hParam0) // Position - 0x1387E Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_759(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_760(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_445(Hash hParam0) // Position - 0x138BA Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_446(Hash hParam0) // Position - 0x138C8 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_759(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_445(collectableItemHash))
			if (func_25(func_760(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_447(Hash hParam0) // Position - 0x13915 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_261(48);
	func_101(false, -1);
	return;
}

int func_448(Hash hParam0) // Position - 0x13930 Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_449(Hash hParam0) // Position - 0x13943 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_450(int iParam0) // Position - 0x13956 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_23() != -1)
		return false;

	return func_120(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_451(eStackSize essParam0) // Position - 0x13979 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_23() != -1)
		return false;

	if (!func_117(essParam0))
		return false;

	return func_330(Global_1347702[essParam0 /*49*/].f_15);
}

int func_452() // Position - 0x139A9 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_25(func_761(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_453(int iParam0) // Position - 0x139DE Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

BOOL func_454(Hash hParam0, int iParam1) // Position - 0x139F5 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_121(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_455(int iParam0) // Position - 0x13A14 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_762(iParam0))
		return false;

	return func_763(iParam0);
}

void func_456(int iParam0) // Position - 0x13A30 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_762(iParam0))
		return;

	func_764(iParam0);
	func_765(iParam0);
	return;
}

BOOL func_457(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x13A51 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_296(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_766(398 + i, 1);
		
			if (func_613(hParam0, &unk, hash, false))
			{
				if (func_614(hParam0, &unk6, hash))
				{
					unk28 = { func_346(hParam0, unk, hash, false) };
					func_347(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_98(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_458(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_767(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_458(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x13BA3 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_460(hParam0))
		return false;

	if (!func_98(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_459(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13BDE Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_253(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_23() == -1)
		{
			func_254(weaponHash);
		
			if (hParam1 == 1248274121)
				func_768(weaponHash);
		}
	
		if (!func_297(hParam0, &unk, 1, false, false))
		{
			func_755(hParam0, 1, false, uParam2, hParam1);
			num = func_769(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_457(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_457(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_457(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_770())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_771(weaponHash))
				{
					func_457(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_457(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_772(Global_35, 2, false, true);
			
				if (func_286(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_455(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_286(weaponHash2) && func_455(24))
					if (!func_457(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_457(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_457(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_63(480, true);

	return true;
}

BOOL func_460(Hash hParam0) // Position - 0x13DEA Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_461(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x13DF8 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_460(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_286(weaponTypeFromAmmoType))
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

	if (func_25(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_493(func_773(hParam0), func_492(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_23() == -1)
			if (func_120(Global_1835011[14 /*74*/].f_1, true))
				func_63(416, false);

	if (num == 0)
		return false;

	if (func_98(false))
	{
		if (func_458(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_498(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_462(Hash hParam0) // Position - 0x13F41 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_774() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_262(Global_35, hParam0, &unk))
			func_210(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_483();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_483();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_481();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_479();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_483();
			break;
	}

	return;
}

void func_463(Hash hParam0) // Position - 0x14049 Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_776();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_481();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_775();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_479();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_482();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_480();
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
			func_483();
			break;
	}

	return;
}

void func_464(Hash hParam0) // Position - 0x14234 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_190(hParam0, -2017733358);

	if (func_777() < 3)
		if (flag)
			if (func_779(func_778(hParam0), hParam0))
				func_493(79, func_492(func_778(hParam0)), true);
			else
				func_493(78, func_492(func_778(hParam0)), true);
		else
			func_493(80, func_492(func_780(hParam0)), true);

	return;
}

BOOL func_465() // Position - 0x142A1 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_781(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_781(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_781(joaat("document_arthur_high_bounty_1"), 400) || func_781(joaat("document_arthur_high_bounty_2"), 400) || func_781(joaat("document_arthur_has_poster_1"), 400) || func_781(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_466(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x14317 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_782(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_783(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_784(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_467(Hash hParam0) // Position - 0x1435E Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_360(43, 0, 0, joaat("exotic_stage_01"), func_785(1), false, -1, false);
			func_786(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_360(39, 0, 0, 0, 0, false, 1, false);
			func_359(39, 0, 0, 0, 0, -1, 0);
			func_364(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_360(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_361(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_360(43, 0, 0, joaat("exotic_stage_02"), func_785(2), false, -1, false);
			func_786(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_360(43, 0, 0, joaat("exotic_stage_03"), func_785(4), false, -1, false);
			func_786(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_360(49, 0, 0, 0, 0, false, 1, false);
			func_359(49, 0, 0, 0, 0, -1, 0);
			func_370(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_360(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_361(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_360(41, 0, 0, 0, 0, false, 1, false);
			func_359(41, 0, 0, 0, 0, -1, 0);
			func_367(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_360(43, 0, 0, joaat("exotic_stage_05"), func_785(16), false, -1, false);
			func_786(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_360(43, 0, 0, joaat("exotic_stage_04"), func_785(8), false, -1, false);
			func_786(8);
			break;
	}

	return;
}

void func_468(Hash hParam0) // Position - 0x144F4 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_787() == 1)
	{
		if (func_356(39))
		{
			func_63(342, false);
		}
		else
		{
			func_63(343, false);
			func_364(1);
		}
	}

	if (func_787() >= 30)
		func_63(344, false);

	func_360(39, 0, 0, 0, 0, false, -1, false);
	func_359(39, 0, 0, func_787(), 30, 1, 0);
	return;
}

void func_469(Hash hParam0) // Position - 0x14553 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_788() == 1)
	{
		if (func_356(49))
		{
			func_63(409, false);
		}
		else
		{
			func_63(410, false);
			func_370(1);
		}
	}

	if (func_788() >= 10)
		func_63(411, false);

	func_360(49, 0, 0, 0, 0, false, -1, false);
	func_359(49, 0, 0, func_788(), 10, 1, 0);
	return;
}

void func_470(Hash hParam0) // Position - 0x145B2 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_63(438, false);
			func_789(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_360(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_359(51, 0, 0, num, func_693(joaat("taxidermy_order_05"), 20), 1, 0);
			func_361(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_789(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_360(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_359(51, 0, 0, num, func_693(joaat("taxidermy_order_04"), 20), 1, 0);
			func_361(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_789(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_360(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_359(51, 0, 0, num, func_693(joaat("taxidermy_order_03"), 20), 1, 0);
			func_361(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_63(437, false);
			func_63(440, false);
			func_789(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_360(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_359(51, 0, 0, num, func_693(joaat("taxidermy_order_01"), 20), 1, 0);
			func_361(1);
			func_790(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_789(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_360(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_359(51, 0, 0, num, func_693(joaat("taxidermy_order_02"), 20), 1, 0);
			func_361(8);
			break;
	
		default:
			func_63(439, false);
			break;
	}

	return;
}

void func_471() // Position - 0x147A0 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_472(Hash hParam0, int iParam1) // Position - 0x147C4 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_23() == -1)
	{
		if (!func_356(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_63(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_63(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_63(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_63(400, false);
		}
		else if (func_190(hParam0, 412399755))
		{
			func_791(joaat("exotic_stage_01"));
		
			if (func_792() == 0)
			{
				func_101(false, 10);
				num2 = func_793(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_794(hParam0) < func_795(hParam0))
					{
						func_360(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_359(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_356(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_63(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_63(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_63(401, false);
		}
		else if (func_190(hParam0, 709057512))
		{
			func_791(joaat("exotic_stage_02"));
		
			if (func_792() == 1)
			{
				func_101(false, 10);
				num2 = func_793(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_794(hParam0) < func_795(hParam0))
					{
						func_360(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_359(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_356(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_63(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_63(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_63(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_63(398, false);
		}
		else if (func_190(hParam0, -1478961327))
		{
			func_791(joaat("exotic_stage_03"));
		
			if (func_792() == 2)
			{
				func_101(false, 10);
				num2 = func_793(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_796(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_797(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_261(48);
					}
				
					if (func_794(hParam0) < func_795(hParam0))
					{
						func_360(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_359(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_794(hParam0) < func_795(hParam0))
					{
						func_360(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_359(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_356(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_63(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_63(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_63(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_63(406, false);
		}
		else if (func_190(hParam0, -1238404098))
		{
			func_791(joaat("exotic_stage_04"));
		
			if (func_792() == 3)
			{
				func_101(false, 10);
				num2 = func_793(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_794(hParam0) < func_795(hParam0))
					{
						func_360(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_359(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_356(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_63(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_63(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_63(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_63(403, false);
		}
		else if (func_190(hParam0, 1160548794))
		{
			func_791(joaat("exotic_stage_05"));
		
			if (func_792() == 4)
			{
				func_101(false, 10);
				num2 = func_793(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_794(hParam0) < func_795(hParam0))
					{
						func_360(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_359(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_473(Hash hParam0) // Position - 0x14CDD Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_796(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_797(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_261(48);
		}
	}

	return;
}

void func_474(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14D1D Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_25(func_798(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_799(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_800(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_475(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x14D7D Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_23() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_466(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_466(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_466(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_466(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_466(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_466(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_466(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_466(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_466(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_801())
				func_466(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_466(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_466(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_466(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_466(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_466(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_466(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_466(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_466(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_466(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_466(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_466(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_466(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_466(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_466(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_466(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_466(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_466(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_476(Hash hParam0) // Position - 0x15155 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_356(41))
		func_63(363, false);
	else
		func_63(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_802(joaat("legendary_fish_02"));
			func_803(joaat("legendary_fishing_spot_02"));
			func_804(joaat("legendary_fishing_spot_02"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_802(joaat("legendary_fish_06"));
			func_803(joaat("legendary_fishing_spot_06"));
			func_804(joaat("legendary_fishing_spot_06"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_802(joaat("legendary_fish_13"));
			func_803(joaat("legendary_fishing_spot_13"));
			func_804(joaat("legendary_fishing_spot_13"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_802(joaat("legendary_fish_03"));
			func_803(joaat("legendary_fishing_spot_03"));
			func_804(joaat("legendary_fishing_spot_03"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_802(joaat("legendary_fish_08"));
			func_803(joaat("legendary_fishing_spot_08"));
			func_804(joaat("legendary_fishing_spot_08"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_802(joaat("legendary_fish_12"));
			func_803(joaat("legendary_fishing_spot_12"));
			func_804(joaat("legendary_fishing_spot_12"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_802(joaat("legendary_fish_05"));
			func_803(joaat("legendary_fishing_spot_05"));
			func_804(joaat("legendary_fishing_spot_05"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_802(joaat("legendary_fish_04"));
			func_803(joaat("legendary_fishing_spot_04"));
			func_804(joaat("legendary_fishing_spot_04"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_802(joaat("legendary_fish_14"));
			func_803(joaat("legendary_fishing_spot_14"));
			func_804(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_802(joaat("legendary_fish_09"));
			func_803(joaat("legendary_fishing_spot_09"));
			func_804(joaat("legendary_fishing_spot_09"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_802(joaat("legendary_fish_07"));
			func_803(joaat("legendary_fishing_spot_07"));
			func_804(joaat("legendary_fishing_spot_07"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_802(joaat("legendary_fish_01"));
			func_803(joaat("legendary_fishing_spot_01"));
			func_804(joaat("legendary_fishing_spot_01"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_802(joaat("legendary_fish_11"));
			func_803(joaat("legendary_fishing_spot_11"));
			func_804(joaat("legendary_fishing_spot_11"));
			func_101(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_802(joaat("legendary_fish_10"));
			func_803(joaat("legendary_fishing_spot_10"));
			func_804(joaat("legendary_fishing_spot_10"));
			func_101(false, 10);
			break;
	}

	return;
}

void func_477(Hash hParam0, var uParam1) // Position - 0x153D4 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_606(hParam0, uParam1, &unk);
	return;
}

BOOL func_478(var uParam0, BOOL bParam1) // Position - 0x153E6 Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_772(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_772(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_284("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_285(&unk, i, num, num2))
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
	
		func_287(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_479() // Position - 0x154AF Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_480() // Position - 0x154C9 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_481() // Position - 0x154FE Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_482() // Position - 0x1551A Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_483() // Position - 0x15534 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_805();
	func_806();
	func_807();
	return;
}

void func_484(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1554B Hash - 0x968DA278 ^0x4321BD6D
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

void func_485(int iParam0, BOOL bParam1) // Position - 0x15923 Hash - 0x922C415B ^0xF7E0B534
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
	func_690(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_486(int iParam0) // Position - 0x15A3A Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_487(int iParam0) // Position - 0x15A55 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_488(int iParam0) // Position - 0x15A70 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_489(int iParam0) // Position - 0x15A8B Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_490(int iParam0) // Position - 0x15AA6 Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_491(int iParam0) // Position - 0x15AC1 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_492(Hash hParam0) // Position - 0x15ADC Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_121(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_493(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x15AF5 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_148(iParam0, &num, &num2);

	if (!func_149(iParam0, num, num2, bParam2))
		return;

	if (!func_313(iParam0, 1024))
		return;

	func_150(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_494(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15B55 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_148(iParam0, &num, &num2);

	if (!func_149(iParam0, num, num2, bParam2))
		return;

	if (!func_313(iParam0, 1024))
		return;

	func_150(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_495() // Position - 0x15BD0 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_759())
		return func_496();

	endRange = func_759() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_759(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_808(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_760(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_496() // Position - 0x15C4A Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_759());
	return func_760(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_497(var uParam0) // Position - 0x15C6D Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_498(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x15CC2 Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_121(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_296(hParam0, false, true) };
	unk6 = { func_346(hParam0, unk, unk.f_4, false) };
	return func_567(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_499(Hash hParam0) // Position - 0x15D11 Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_23() != -1)
		return;

	switch (func_199(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_207(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_206(hParam0);
		
			if (func_707(stackSize))
				func_809(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_207(30, hParam0, 0, 0, false);
		
			if (func_731() == -2125499975 || func_731() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_207(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_731() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_207(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_407(-525676072, false))
				if (func_810(-525676072, &hash))
					func_207(33, hash, 0, 0, false);
		
			func_207(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_725(81053684, false) <= 0)
				func_207(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_811(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_210(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_456(24);
	
		if (func_478(&hash2, false))
			func_457(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_500(Hash hParam0) // Position - 0x15EE3 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_190(hParam0, 943695443))
		func_812(0, hParam0);
	else if (func_190(hParam0, -2096528786))
		func_812(1, hParam0);
	else if (func_190(hParam0, -1094167013))
		func_812(2, hParam0);
	else if (func_190(hParam0, 1936654645))
		func_812(3, hParam0);
	else if (func_190(hParam0, 1306489306))
		func_812(4, hParam0);
	else if (func_190(hParam0, 435762317))
		func_812(5, hParam0);
	else if (func_190(hParam0, 1259363210))
		func_812(6, hParam0);
	else if (func_190(hParam0, 881398259))
		func_812(7, hParam0);
	else if (func_190(hParam0, -541549214))
		func_812(8, hParam0);
	else if (func_190(hParam0, 130796156))
		func_812(-1, hParam0);

	return;
}

void func_501(Hash hParam0) // Position - 0x15FD9 Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_23() == -1)
				if (func_120(Global_1835011[4 /*74*/].f_1, true))
					func_63(109, true);
			break;
	}

	return;
}

void func_502(Hash hParam0, int iParam1) // Position - 0x16012 Hash - 0x3053C451 ^0x1D96BD31
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_813(0));
	func_577(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_815(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

BOOL func_503(int iParam0) // Position - 0x16052 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_770())
		return false;

	return func_120(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_504(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x16074 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_816(pedParam0, &str);
}

void func_505(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x160BB Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_509(iParam0, fParam1, true);

	func_818(iParam0, func_817(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_506(int iParam0) // Position - 0x160EA Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_507(float fParam0) // Position - 0x160FC Hash - 0x92695771 ^0x796FF823
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_508() // Position - 0x16130 Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_509(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1615D Hash - 0xFB55A421 ^0xFB55A421
{
	Hash hash;
	int num;

	hash = func_147();
	func_819(&hash, 0, 0, 0, 1, 0, 0);
	num = func_820(iParam0, 2);

	if (func_822(hash, func_821(iParam0, 2), true))
	{
		func_823(iParam0, 0, 2);
		num = 0;
	}

	if (num >= 2)
	{
		func_63(88, bParam2);
		return 0f;
	}

	func_824(iParam0, func_147(), 2);
	func_823(iParam0, num + 1, 2);
	return fParam1;
}

float func_510(float fParam0, float fParam1, float fParam2) // Position - 0x161C6 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_511(int iParam0, float fParam1, BOOL bParam2) // Position - 0x161ED Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_23() != -1)
		return;

	if (!func_455(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_825(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_826(iParam0), value);
	func_828(func_827(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_829(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_63(84, true);

	if (fParam1 <= -99.999f)
		func_63(func_830(iParam0), true);

	variableName = func_831(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

float func_512(int iParam0) // Position - 0x162C6 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_513() // Position - 0x162DA Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_23() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_832(Global_1347477.f_195, false);
}

int func_514(float fParam0) // Position - 0x16316 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

void func_515(var uParam0, var uParam1) // Position - 0x16331 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_264())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_516(int iParam0, float fParam1) // Position - 0x1636A Hash - 0x45CA0D9B ^0x25E677C5
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_833(1, flag, true, str);
		func_834(!flag, fParam1 < 0f, flag);
		num = func_825(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_483();
	}
	else if (iParam0 == 10)
	{
		num = func_825(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_825(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_517(int iParam0) // Position - 0x16440 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_518(int iParam0) // Position - 0x1646F Hash - 0x21CE226B ^0xC73D6CCD
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

void func_519(int iParam0) // Position - 0x164AA Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_835(2);
	func_836(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_520(int iParam0) // Position - 0x164E7 Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_837(2);
	func_838(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_521(int iParam0) // Position - 0x16523 Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_839(2);
	func_840(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_522(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16560 Hash - 0x5C29635D ^0x5C29635D
{
	func_818(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

struct<2> func_523(int iParam0) // Position - 0x1657A Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_524(var uParam0) // Position - 0x1658A Hash - 0x19D4C5AC ^0x19D4C5AC
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

void func_525(int iParam0, int iParam1) // Position - 0x167B8 Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_260(joaat("eaten"), func_841(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_251(func_250(joaat("herbs_eaten")), iParam1);
	return;
}

BOOL func_526(var uParam0) // Position - 0x167EA Hash - 0x577756EA ^0xC2E0BC7B
{
	int i;
	BOOL flag;
	int num;
	int num2;

	for (i = 12; i <= 15; i = i + 1)
	{
		func_144(&uParam0->f_162[i], true, true);
	}

	if (!func_70(uParam0->f_162[3]))
	{
		uParam0->f_162[3] = func_81("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		func_82(uParam0->f_162[3], 1323335645, 0, true);
	}

	if (func_56(524288))
	{
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_187 > 3 && uParam0->f_187 <= 9)
	{
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_187 > 9 && uParam0->f_187 <= 15)
	{
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_187 > 15 && uParam0->f_187 <= 21)
	{
		uParam0->f_162[15] = func_81("CMP_SLP_MDN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (uParam0->f_187 > 21 || uParam0->f_187 <= 3)
	{
		uParam0->f_162[12] = func_81("CMP_SLP_MRN", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[13] = func_81("CMP_SLP_NOON", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		uParam0->f_162[14] = func_81("CMP_SLP_EVE", joaat("INPUT_CONTEXT_A"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}

	flag = true;

	if (func_56(524288))
	{
		flag = true;
	}
	else
	{
		if (Global_1392040.f_7 == -15)
			Global_1392040.f_7 = func_147();
	
		num = Global_1392040.f_7;
		func_246(&num, 0, 0, 3, 0, 0, 0, false);
	
		if (!func_247(num))
			if (Global_1392040.f_8 > 1)
				flag = false;
		else
			Global_1392040.f_8 = 0;
	}

	if (func_70(uParam0->f_162[12]))
	{
		if (uParam0->f_187 < 6)
			num2 = 6 - uParam0->f_187;
		else
			num2 = (24 - uParam0->f_187) + 6;
	
		func_842(uParam0->f_162[12], "CMP_SLP_MRN", num2, true);
		func_82(uParam0->f_162[12], 1323335645, 0, true);
		func_84(uParam0->f_162[12], flag, true);
	}

	if (func_70(uParam0->f_162[13]))
	{
		if (uParam0->f_187 < 12)
			num2 = 12 - uParam0->f_187;
		else
			num2 = (24 - uParam0->f_187) + 12;
	
		func_842(uParam0->f_162[13], "CMP_SLP_NOON", num2, true);
		func_82(uParam0->f_162[13], 1323335645, 0, true);
		func_84(uParam0->f_162[13], flag, true);
	}

	if (func_70(uParam0->f_162[14]))
	{
		if (uParam0->f_187 < 18)
			num2 = 18 - uParam0->f_187;
		else
			num2 = (24 - uParam0->f_187) + 18;
	
		func_842(uParam0->f_162[14], "CMP_SLP_EVE", num2, true);
		func_82(uParam0->f_162[14], 1323335645, 0, true);
		func_84(uParam0->f_162[14], flag, true);
	}

	if (func_70(uParam0->f_162[15]))
	{
		num2 = 24 - uParam0->f_187;
		func_842(uParam0->f_162[15], "CMP_SLP_MDN", num2, true);
		func_82(uParam0->f_162[15], 1323335645, 0, true);
		func_84(uParam0->f_162[15], flag, true);
	}

	return flag;
}

char* func_527(int iParam0) // Position - 0x16CE3 Hash - 0x4FDA3529 ^0xDF60A75A
{
	if (func_56(524288))
		return "0600_";

	if (iParam0 == -1)
		if (func_843(23, 2))
			return "0000_";
		else if (func_843(2, 5))
			return "0300_";
		else if (func_843(5, 8))
			return "0600_";
		else if (func_843(8, 11))
			return "0900_";
		else if (func_843(11, 14))
			return "1200_";
		else if (func_843(14, 17))
			return "1500_";
		else if (func_843(17, 20))
			return "1800_";
		else if (func_843(20, 23))
			return "2100_";
		else
			return "1200_";

	switch (iParam0)
	{
		case 0:
			if (func_844())
				return "2100_";
			else
				return "0000_";
			break;
	
		case 6:
			if (func_844())
				return "0300_";
			else
				return "0600_";
			break;
	
		case 12:
			if (func_844())
				return "0900_";
			else
				return "1200_";
			break;
	
		case 18:
			if (func_844())
				return "1500_";
			else
				return "1800_";
			break;
	}

	return "1200_";
}

char* func_528() // Position - 0x16E39 Hash - 0xE84F6779 ^0xF9299329
{
	int num;

	num = func_845();

	if (func_56(524288))
		return "01Clear";

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

struct<8> func_529(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0x16F05 Hash - 0xB13D7CEF ^0x4DD40A33
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

const char* func_530(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x16FBC Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_531(Hash hParam0) // Position - 0x16FD0 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(hParam0, 26) & 31 * MISC::IS_BIT_SET(hParam0, 31) ? -1 : 1) + 1898;
}

int func_532(Hash hParam0) // Position - 0x16FF5 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 22) & 15;
}

int func_533(Hash hParam0) // Position - 0x17008 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 17) & 31;
}

int func_534(Hash hParam0) // Position - 0x1701B Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_535(Hash hParam0) // Position - 0x1702E Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_536(Hash hParam0) // Position - 0x17040 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 0) & 63;
}

int func_537(int iParam0, int iParam1) // Position - 0x17052 Hash - 0x893AC59E ^0x893AC59E
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

void func_538(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x170EC Hash - 0xA65AB937 ^0xA65AB937
{
	func_847(uParam0, iParam6);
	func_848(uParam0, iParam5);
	func_849(uParam0, iParam4);
	func_850(uParam0, iParam3);
	func_851(uParam0, iParam2);
	func_852(uParam0, iParam1);
	return;
}

void func_539(var uParam0) // Position - 0x17124 Hash - 0xBDC78FE9 ^0x764769A8
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_17), "CAMP", 8);
	return;
}

void func_540(var uParam0) // Position - 0x17136 Hash - 0xCD73D789 ^0xA4477423
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_17));

	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_MODEL(joaat("s_ammo_rifle"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_repeater"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_45mm"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_9mm"), false);
	STREAMING::REQUEST_MODEL(joaat("s_ammo_shotgun"), false);
	STREAMING::REQUEST_MODEL(joaat("s_cft_arrow"), false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_tomahawk01"), false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_knife05"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_rag01x"), false);
	STREAMING::REQUEST_MODEL(joaat("s_cft_molotov01"), false);
	STREAMING::REQUEST_MODEL(joaat("s_cft_molotov02"), false);
	STREAMING::REQUEST_MODEL(joaat("p_molotovempty01x"), false);
	STREAMING::REQUEST_MODEL(joaat("w_stick_dynamite01"), false);
	func_853(uParam0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);

	if (uParam0->f_31)
	{
		STREAMING::REQUEST_MODEL(joaat("p_whitefishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redfishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_whitefleshymeat01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redbirdbreast01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redefleshymeat01xb"), false);
	}

	return;
}

BOOL func_541(var uParam0) // Position - 0x17224 Hash - 0x55506063 ^0xA548A7C9
{
	if (func_854(&(uParam0->f_17)))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_17)))
			return false;

	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
		return false;

	if (!func_855(uParam0, &(uParam0->f_63)))
		return false;

	if (!func_855(uParam0, &(uParam0->f_65)))
		return false;

	if (!func_855(uParam0, &(uParam0->f_66)))
		return false;

	if (!func_855(uParam0, &(uParam0->f_67)))
		return false;

	if (!func_855(uParam0, &(uParam0->f_68)))
		return false;

	if (!func_855(uParam0, &(uParam0->f_69)))
		return false;

	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_rifle")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_repeater")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_45mm")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_9mm")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_cft_arrow")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_tomahawk01")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_knife05")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_ammo_shotgun")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("p_molotovempty01x")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_cft_molotov01")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("s_cft_molotov02")))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_stick_dynamite01")))
		return false;

	if (uParam0->f_31)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_whitefishfilet01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_redfishfilet01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_whitefleshymeat01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_redbirdbreast01xb")))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_redefleshymeat01xb")))
			return false;
	}

	return true;
}

int func_542() // Position - 0x173FC Hash - 0xF3521A6 ^0x499ADCFE
{
	Hash hash;
	int num;

	if (!func_721(&hash))
		return 0;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	num = func_591(hash);

	if (num == -358215195)
		return 0;

	func_856(Global_1946054.f_57[func_413(num, 1) /*11*/], 8);
	func_207(26, 0, 0, 0, false);
	return 1;
}

int func_543(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1745A Hash - 0xD873C269 ^0x2E97B532
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(hParam0, hParam1, 0, 1);
	return func_857(hParam0, hParam1, bParam2, bParam3, iParam4);
}

Hash func_544(Hash hParam0) // Position - 0x1747A Hash - 0x31347973 ^0xC296A1C8
{
	Hash num;

	num = func_858(hParam0);

	if (num != 0)
		return num;

	return joaat("p_redefleshymeat01xb");
}

void func_545(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1749A Hash - 0x1FA5FB8C ^0x975E1FA3
{
	int num;
	int num2;
	int num3;

	if (bParam2)
		uParam0->f_57.f_20 = uParam0->f_57.f_20 + 1;

	if (uParam0->f_57.f_37 == -1)
	{
		num = func_124(uParam0->f_57.f_77, false, false);
		num2 = func_859(uParam0->f_57.f_77, false);
		num3 = func_860(uParam0->f_57.f_77, uParam0->f_57.f_78, func_551(), false);
	
		if (num2 == -1)
			num2 = num3;
		else
			num2 = num2 - num;
	
		uParam0->f_57.f_37 = func_861(num2, num3);
	}

	if (func_317(uParam0->f_57.f_77))
		if (bParam3)
			func_157(uParam0->f_162[iParam1], "CAMP_REC_COOK_AGN", true);
		else
			func_157(uParam0->f_162[iParam1], "CAMP_REC_COOK", true);
	else if (bParam3)
		func_157(uParam0->f_162[iParam1], "CAMP_REC_MAKE_AGN", true);
	else if (func_372(uParam0->f_57.f_77, -1636519629) == -701492487)
		func_157(uParam0->f_162[iParam1], "CAMP_REC_BREW", true);
	else
		func_157(uParam0->f_162[iParam1], "CAMP_REC_MAKE", true);

	return;
}

void func_546() // Position - 0x175A2 Hash - 0xD68DA6F1 ^0xD68DA6F1
{
	if (func_675())
		func_862(1);

	return;
}

int func_547(var uParam0) // Position - 0x175B6 Hash - 0xD73B9827 ^0x8E05EC78
{
	return uParam0->f_8;
}

BOOL func_548(int iParam0) // Position - 0x175C2 Hash - 0x2597F7C7 ^0x2597F7C7
{
	int num;

	num = func_863(iParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

void func_549(var uParam0, int iParam1) // Position - 0x175E8 Hash - 0x849E01D4 ^0x1D86E997
{
	var unk;
	int num;
	Hash hash;
	int eventData;
	Hash activeDynamicScenario2;
	int num2;
	BOOL flag;
	Hash activeDynamicScenario;
	AnimScene animScene;
	AnimScene animScene2;
	AnimScene animScene3;
	Hash activeDynamicScenario2;

	unk = 1;
	unk[0] = uParam0->[1];

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		func_44(uParam0, false);

	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);

	if (func_23() != -1 && func_164() || func_167())
	{
		if (func_165(uParam0->[0], false))
		{
			func_130(uParam0);
			func_137(uParam0);
		}
	
		return;
	}

	if (uParam0->f_58)
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_CRAFTING_SEQUENCE"));

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();

	switch (func_547(uParam0))
	{
		case 0:
			if (func_132())
				func_133(false);
		
			if (func_864(uParam0))
			{
				func_130(uParam0);
				func_865(uParam0);
			}
			break;
	
		case 1:
			if (func_132())
				func_133(false);
		
			if (func_864(uParam0))
			{
				if (func_70(uParam0->[0]))
					func_84(uParam0->[0], false, true);
			
				func_865(uParam0);
			}
			break;
	
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_864(uParam0))
			{
				func_539(uParam0);
				func_540(uParam0);
				func_865(uParam0);
			}
		
			if (func_541(uParam0))
				func_45(uParam0, 3);
			break;
	
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_23() == false && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				func_130(uParam0);
				return;
			}
		
			if (func_864(uParam0))
			{
				func_130(uParam0);
				func_865(uParam0);
			
				if (func_132())
					func_133(false);
			}
		
			if (uParam0->f_34 || func_229(uParam0->[0], true) || func_56(8192) || uParam0->f_35)
				func_866(uParam0);
			break;
	
		case 4:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_867(uParam0))
			{
				uParam0->f_62 = 1;
			
				if (func_56(4096))
					uParam0->f_52 = 0;
				else if (func_56(8192))
					uParam0->f_52 = 4;
			
				func_45(uParam0, 5);
			}
			break;
	
		case 5:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_868(uParam0))
				func_45(uParam0, 6);
			break;
	
		case 6:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_869(uParam0))
				func_45(uParam0, 7);
			break;
	
		case 7:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_864(uParam0))
			{
				func_870(uParam0);
				func_865(uParam0);
				return;
			}
		
			if (func_871(uParam0, false))
				if (func_872(uParam0, false))
					func_45(uParam0, 8);
				else if (uParam0->f_31)
					func_45(uParam0, 1);
				else
					func_45(uParam0, 0);
			break;
	
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("crafting")))
				{
					Global_1911914.f_1580 = 0;
					func_45(uParam0, 10);
				}
			}
			break;
	
		case 9:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_864(uParam0))
			{
				func_870(uParam0);
				func_865(uParam0);
				return;
			}
		
			if (func_871(uParam0, true))
				func_45(uParam0, 10);
			break;
	
		case 10:
			func_874(false);
		
			if (func_23() == false && CAM::IS_INTERPOLATING_TO_SCRIPT_CAMS())
			{
				func_130(uParam0);
				return;
			}
		
			if (func_864(uParam0))
			{
				func_130(uParam0);
				func_875(uParam0, true);
				uParam0->[2] = func_81("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			
				if (func_66(32))
					func_84(uParam0->[2], false, true);
				else
					func_84(uParam0->[2], true, true);
			
				uParam0->[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			
				if (func_121(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					func_876(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
			
				if (func_317(uParam0->f_75))
					func_157(uParam0->[1], "CAMP_REC_COOK", true);
				else if (func_372(uParam0->f_75, -1636519629) == -701492487)
					func_157(uParam0->[1], "CAMP_REC_BREW", true);
				else
					func_157(uParam0->[1], "CAMP_REC_MAKE", true);
			
				uParam0->[3] = func_81(func_877(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				uParam0->[5] = func_878("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				func_879(uParam0->[5], joaat("INPUT_GAME_MENU_LEFT"));
				func_879(uParam0->[5], joaat("INPUT_GAME_MENU_RIGHT"));
			
				if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
					num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
			
				if (num > 1 && func_121(uParam0->f_77, 0))
					func_84(uParam0->[5], true, true);
				else
					func_84(uParam0->[5], false, true);
			
				uParam0->[6] = func_81("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			
				if (!uParam0->f_82)
					func_157(uParam0->[6], "INFO", true);
				else
					func_157(uParam0->[6], "INGREDIENTS", true);
			
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_40) == 0)
				{
					func_880(uParam0);
					func_84(uParam0->[6], false, true);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
				}
			
				func_881(uParam0, uParam0->f_77, uParam0->f_78);
				func_865(uParam0);
			}
		
			if (Global_1911914.f_1580)
			{
				Global_1911914.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_880(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_881(uParam0, 0, 0);
				func_84(uParam0->[5], false, true);
				func_45(uParam0, 9);
			}
			else if (func_71(uParam0->[2], true))
			{
				if (uParam0->f_34)
				{
					func_45(uParam0, 16);
				}
				else
				{
					func_131(uParam0, false);
					func_882("Exit", "SSCRFT_Sounds");
				
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						func_45(uParam0, 1);
					}
					else
					{
						func_45(uParam0, 3);
					}
				}
			}
			else if (func_229(uParam0->[1], true))
			{
				func_883(uParam0);
			}
			else if (func_229(uParam0->[3], true))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_57 = !uParam0->f_57;
				func_880(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_881(uParam0, 0, 0);
				func_84(uParam0->[5], false, true);
				func_45(uParam0, 9);
			}
			else if (func_884(uParam0->[5], 0, true))
			{
				if (uParam0->f_79)
				{
					func_882("Nav_Left", "SSCRFT_Sounds");
					func_885(uParam0, false);
				}
			}
			else if (func_884(uParam0->[5], 1, true))
			{
				if (uParam0->f_79)
				{
					func_882("Nav_Right", "SSCRFT_Sounds");
					func_885(uParam0, true);
				}
			}
			else if (func_229(uParam0->[6], true))
			{
				func_886(uParam0, true);
			}
			else
			{
				hash = joaat("crafting_menu");
			
				while (UIEVENTS::EVENTS_UI_IS_PENDING(hash))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, &eventData))
					{
						if (eventData == 703281244 || eventData == -722926211)
							func_887(uParam0);
						else if (eventData == -1740156697)
							func_888(uParam0, &eventData);
						else if (eventData == -1203660660)
							if (func_165(uParam0->[1], false))
								func_883(uParam0);
					
						UIEVENTS::EVENTS_UI_POP_MESSAGE(hash);
					}
				}
			}
			break;
	
		case 11:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_874(false);
			activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_35);
			num2 = func_372(uParam0->f_77, -1636519629);
		
			if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
			{
				if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_ADD_SCENARIO_TRANSITION(Global_35);
				}
			
				return;
			}
		
			if (num2 != -715814988)
			{
				if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife"))
				{
					if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_ADD_SCENARIO_TRANSITION(Global_35);
					}
				
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
			
				if (num2 == 414472632 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_63, true, false) || num2 == -1136843638 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_66, true, false) || uParam0->f_88 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_88) || num2 == -732326901 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_68, true, false) || num2 == 786205940 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_67, true, false) || num2 == -1141771998 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_69, true, false) || num2 == 364689687 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_70, true, false) || num2 == -842117252 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_71, true, false) || num2 == -1610298873 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_72, true, false))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_889(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_65, true, false) || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_889(uParam0);
					uParam0->f_64 = 0;
				}
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife"))
				{
					if (uParam0->f_31)
					{
						if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_35, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_35, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_ADD_SCENARIO_TRANSITION(Global_35);
						}
					
						return;
					}
				}
			}
		
			if (func_864(uParam0))
			{
				func_865(uParam0);
				func_890(uParam0, false, &unk);
				func_889(uParam0);
			
				if (func_70(uParam0->[1]))
					func_144(&uParam0->[1], true, true);
			
				if (func_891(num2))
				{
					uParam0->f_53 = 250;
					uParam0->[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_881(uParam0, uParam0->f_77, uParam0->f_78);
					func_82(uParam0->[1], -1067771379, 0, true);
					func_83(uParam0->[1], 10, true, true);
					func_83(uParam0->[1], 11, true, true);
					func_84(uParam0->[1], false, true);
				}
				else
				{
					uParam0->[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_82(uParam0->[1], -1067771379, 0, true);
					func_331(uParam0->[1], true, true);
					func_83(uParam0->[1], 10, true, true);
					func_83(uParam0->[1], 11, true, true);
					func_84(uParam0->[1], false, true);
				}
			
				return;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
		
			if (func_891(num2))
			{
				if (!uParam0->f_36)
				{
					if (func_165(uParam0->[1], false))
					{
						if (func_555(uParam0->[1], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_36 = 1;
							func_84(uParam0->[1], false, true);
							func_84(uParam0->[4], false, true);
						}
					}
				}
			
				if (num2 == -1136843638 || num2 == -732326901 || num2 == 786205940 || num2 == -1141771998 || num2 == 364689687 || num2 == -842117252 || num2 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if (uParam0->f_88 == joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463) || uParam0->f_88 != joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
								OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						
							if (func_190(uParam0->f_77, -1588156645) && num2 != -842117252)
							{
								uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(func_252(uParam0->f_77, false), 1, Global_36, true, 1065353216);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							
								if (num2 == -1610298873)
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_892(uParam0, num2), "DYNAMITE", uParam0->f_86, 0);
							}
							else
							{
								uParam0->f_86 = OBJECT::CREATE_OBJECT(uParam0->f_88, Global_36, true, true, false, false, false);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							}
						
							if (num2 == 786205940)
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							else if (num2 == -1141771998 || num2 == -1610298873)
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							else if (num2 == -842117252)
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							else
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
					
						if (num2 == -732326901 || num2 == 364689687)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, true, 1065353216);
						}
						else if (num2 == -1141771998)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_36, true, 1065353216);
						}
						else if (num2 == -842117252)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("p_molotovempty01x"), Global_36, true, true, false, false, true);
						}
						else if (num2 == -1610298873)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("w_stick_dynamite01"), Global_36, true, true, false, false, true);
						
							if (num2 == -1610298873)
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_892(uParam0, num2), "DYNAMITE", uParam0->f_86, 0);
						}
						else
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("s_cft_arrow"), Global_36, true, true, false, false, false);
						}
					
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
					
						if (num2 == 786205940)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else if (num2 == -1141771998 || num2 == -1610298873 || num2 == -842117252)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394836706))
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_87))
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, true);
				}
				else if (num2 == 414472632 || num2 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, true);
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (!func_98(false))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = func_135(uParam0->f_77, uParam0->f_78);
						
							if (uParam0->f_21 == -1)
								func_893(uParam0, num2, false);
						
							return;
						}
						else if (func_548(uParam0->f_21))
						{
							return;
						}
					
						uParam0->f_21 = -1;
					}
					else
					{
						func_543(uParam0->f_77, uParam0->f_78, true, func_551(), 0);
						func_99(uParam0->f_77, 1, false, true, 0);
					
						if (uParam0->f_31)
							func_546();
					}
				
					if (num2 == -842117252)
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				
					uParam0->f_20 = uParam0->f_20 + 1;
					uParam0->f_38 = uParam0->f_38 + 1;
				
					if (!func_295(uParam0->f_77, uParam0->f_78, false, func_551(), 0, false) || func_560(uParam0->f_77, 1, false) || uParam0->f_20 >= uParam0->f_37)
					{
						func_893(uParam0, num2, false);
						return;
					}
				}
			
				if (!uParam0->f_36)
					if (!(func_165(uParam0->[1], false) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT"))))
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("safetobreakout")))
							func_893(uParam0, num2, true);
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_20 < uParam0->f_37 - 1)
				{
					func_84(uParam0->[1], true, true);
					func_84(uParam0->[4], true, true);
					uParam0->f_36 = 0;
				}
			
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_892(uParam0, num2), "player"))
					func_893(uParam0, num2, false);
			}
			else if (func_29(&(uParam0->f_89), (float)uParam0->f_53 / 1000f))
			{
				if (!func_98(false))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = func_135(uParam0->f_77, uParam0->f_78);
					
						if (uParam0->f_21 == -1)
							func_893(uParam0, num2, false);
					
						return;
					}
					else if (func_548(uParam0->f_21))
					{
						return;
					}
				
					uParam0->f_21 = -1;
				}
				else
				{
					func_543(uParam0->f_77, uParam0->f_78, true, func_551(), 0);
					func_99(uParam0->f_77, 1, true, true, 0);
				
					if (uParam0->f_31)
						func_546();
				}
			
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				func_55(131072);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
			
				uParam0->f_55 = 0;
				flag = true;
			
				if (!func_295(uParam0->f_77, uParam0->f_78, false, func_551(), 0, false) || func_560(uParam0->f_77, 1, false))
					flag = false;
			
				func_893(uParam0, num2, flag);
			}
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_874(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
		
			if (!func_66(128))
			{
				if (!func_165(uParam0->[2], false))
				{
					func_84(uParam0->[2], true, true);
					func_331(uParam0->[2], false, true);
				}
			
				if (!func_165(uParam0->[4], false))
				{
					func_84(uParam0->[4], true, true);
					func_331(uParam0->[4], true, true);
				}
			}
		
			if (func_71(uParam0->[2], true))
			{
				func_130(uParam0);
				func_337(&(uParam0->f_89));
				func_45(uParam0, 14);
				return;
			}
			else if (func_152(uParam0->[4], true))
			{
				func_130(uParam0);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
			
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
			
				if (activeDynamicScenario != joaat("world_player_dynamic_kneel_knife"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				num2 = func_372(uParam0->f_77, -1636519629);
				animScene = func_892(uParam0, num2);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene, "player", Global_35);
				func_131(uParam0, false);
				func_882("Exit", "SSCRFT_Sounds");
			
				if (uParam0->f_31)
					func_45(uParam0, 1);
				else
					func_45(uParam0, 0);
			
				return;
			}
			else if (func_229(uParam0->[1], true))
			{
				func_84(uParam0->[4], false, true);
				func_84(uParam0->[2], false, true);
				func_84(uParam0->[1], false, true);
				num2 = func_372(uParam0->f_77, -1636519629);
				animScene2 = func_892(uParam0, num2);
			
				if (animScene2 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(animScene2, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(animScene2);
				}
			
				func_337(&(uParam0->f_89));
				uParam0->f_36 = 0;
				func_45(uParam0, 12);
				return;
			}
		
			if (func_338(uParam0->[4], true))
			{
				if (!func_125(&(uParam0->f_89)))
					func_31(&(uParam0->f_89));
				else if (func_29(&(uParam0->f_89), 0.1f))
					func_157(uParam0->[4], "CAMP_REC_QUIT", true);
			}
			else
			{
				if (func_125(&(uParam0->f_89)))
					func_337(&(uParam0->f_89));
			
				func_157(uParam0->[4], "CAMP_REC_BACK", true);
			}
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_874(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
		
			num2 = func_372(uParam0->f_77, -1636519629);
			animScene3 = func_892(uParam0, num2);
		
			if (animScene3 == 0 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene3) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(animScene3, false) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("showMenu")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
			
				activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_35);
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene3, "player", Global_35);
				func_45(uParam0, 15);
			}
			break;
	
		case 15:
			if (!uParam0->f_58)
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (!uParam0->f_62)
			{
				func_45(uParam0, 4);
				return;
			}
		
			if (func_873(uParam0))
			{
				func_872(uParam0, true);
				func_45(uParam0, 8);
			}
			break;
	
		case 16:
			if (func_132())
				func_133(false);
		
			if (func_864(uParam0))
				func_865(uParam0);
		
			func_131(uParam0, false);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
			Global_1911914.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}

	return;
}

void func_550(var uParam0) // Position - 0x18C0F Hash - 0xF3658D0E ^0x8460C4D9
{
	BOOL flag;

	if (uParam0->f_57.f_78 == joaat("cost_crafting_grill"))
		flag = true;
	else
		flag = false;

	if (flag)
		func_251(func_250(joaat("food_seasoned")), 1);

	STATS::_0x378D3B1B11D9385B(uParam0->f_57.f_77);
	func_47(16384);
	func_55(65536);
	func_49(16);

	if (func_98(false))
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, true, func_551(), 0);

	func_144(&uParam0->f_162[6], true, true);

	if (flag)
		uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 35, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	else
		uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);

	func_545(uParam0, 6, false, false);
	func_84(uParam0->f_162[6], false, true);
	func_82(uParam0->f_162[6], -1067771379, 0, true);
	uParam0->f_196 = MISC::GET_GAME_TIMER();

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_160))
		OBJECT::DELETE_OBJECT(&(uParam0->f_160));

	uParam0->f_160 = OBJECT::CREATE_OBJECT(func_544(uParam0->f_57.f_77), Global_36, false, false, false, false, true);

	if (PED::_GIVE_PED_SCENARIO_PROP(Global_35, uParam0->f_160, "p_meatChunks01x_PH_L_HAND", 0, 0, true))
	{
	}

	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_160, false);
	OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_160, 0f, true);
	uParam0->f_208 = 3;
	func_130(&(uParam0->f_57));
	func_45(&(uParam0->f_57), 0);
	func_553();
	AUDIO::_SET_AUDIO_SCENESET("cooking", "Player_Campfire_Scenes");
	func_62(uParam0, 13);
	return;
}

BOOL func_551() // Position - 0x18DA3 Hash - 0x24E38A73 ^0x7BEA4359
{
	Ped ped;
	BOOL num;

	ped = func_204(7);

	if (!PED::IS_PED_INJURED(ped))
		if (func_52(Global_35, ped, true) < 400f)
			num = 1;

	return num;
}

void func_552(var uParam0, BOOL bParam1) // Position - 0x18DD4 Hash - 0x8E5843D1 ^0x4D5E34C0
{
	if (bParam1)
	{
		uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		func_545(uParam0, 6, false, true);
		func_84(uParam0->f_162[6], false, true);
		func_82(uParam0->f_162[6], -1067771379, 0, true);
	}

	uParam0->f_162[11] = func_81("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	uParam0->f_162[3] = func_81("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
	func_332(&uParam0->f_162[3], "INPUT_PCRAFT_EXIT");
	func_331(uParam0->f_162[11], false, true);
	func_82(uParam0->f_162[11], -1067771379, 0, true);
	func_82(uParam0->f_162[3], -1067771379, 0, true);
	func_83(uParam0->f_162[3], 19, true, true);
	func_83(uParam0->f_162[3], 20, true, true);
	func_83(uParam0->f_162[3], 13, true, true);
	func_83(uParam0->f_162[11], 13, true, true);
	func_84(uParam0->f_162[11], false, true);
	func_84(uParam0->f_162[3], false, true);
	return;
}

int func_553() // Position - 0x18F25 Hash - 0x32A2B110 ^0x12FB0596
{
	Hash hash;
	int num;
	int num2;

	if (!func_400())
		return 0;

	if (!func_721(&hash))
		return 0;

	if (!func_401(hash))
		return 0;

	num = func_591(hash);

	if (num == -358215195)
		return 0;

	func_403(&num2, 1);
	return func_404(hash, num2);
}

void func_554(var uParam0, Hash hParam1) // Position - 0x18F7A Hash - 0x2170EC7A ^0x446B33F
{
	BOOL flag;

	if (func_338(uParam0->f_162[6], true))
		flag = true;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1738621174))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}

	switch (hParam1)
	{
		case joaat("world_player_dynamic_kneel_cookgrill2"):
			if (flag)
				if (func_85(uParam0))
					if (func_88(joaat("COOKGRILL2_TRANS_SEARGRILL2"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("world_player_dynamic_kneel_cookgrill1"):
			if (flag)
				if (func_85(uParam0))
					if (func_88(joaat("COOKGRILL1_TRANS_SEARGRILL1"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOKGRILL2_SEARGRILL2"):
			if (!flag)
				if (func_85(uParam0))
					if (func_88(joaat("SEARGRILL2_TRANS_COOKGRILL2"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"):
			if (!flag)
				if (func_85(uParam0))
					if (func_88(joaat("COOKKNIFE_ACTIVE_TRANS_COOKKNIFE"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"):
			if (!flag)
				if (func_85(uParam0))
					if (func_88(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("world_player_dynamic_kneel_fire_craft"):
			if (flag)
				if (func_85(uParam0))
					if (func_88(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTACTIVE"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"):
			if (flag)
				if (func_85(uParam0))
					if (func_88(joaat("COOKKNIFE_TRANS_COOKKNIFE_ACTIVE"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_SEARGRILL1"):
			if (!flag)
				if (func_85(uParam0))
					if (func_88(joaat("SEARGRILL1_TRANS_COOKGRILL1"), 0.5f))
						uParam0->f_196 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

BOOL func_555(int iParam0, BOOL bParam1) // Position - 0x1917C Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return false;

	num = func_163(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_556(var uParam0, BOOL bParam1) // Position - 0x191AF Hash - 0xCE7BD6C8 ^0x70D71FF9
{
	if (bParam1)
		if (func_70(uParam0->f_162[6]) && func_295(uParam0->f_57.f_77, uParam0->f_57.f_78, false, func_551(), 0, false) && !func_560(uParam0->f_57.f_77, 1, false))
			func_84(uParam0->f_162[6], true, true);

	if (!func_165(uParam0->f_162[11], false))
	{
		func_84(uParam0->f_162[11], true, true);
		func_331(uParam0->f_162[11], false, true);
	}

	if (!func_165(uParam0->f_162[3], false))
		func_84(uParam0->f_162[3], true, true);

	return;
}

void func_557(var uParam0) // Position - 0x1924F Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_144(&uParam0->[i], true, true);
	}

	return;
}

BOOL func_558(var uParam0) // Position - 0x19277 Hash - 0x234C6C8E ^0x4C2CDB0F
{
	if (!func_85(uParam0) || MISC::GET_GAME_TIMER() - uParam0->f_196 < 500)
		return false;

	if (uParam0->f_154 == 0)
	{
		func_88(joaat("KNEEL1_TRANS_COFFEE1"), 6f);
		uParam0->f_196 = MISC::GET_GAME_TIMER();
		return true;
	}
	else if (uParam0->f_154 == 1)
	{
		func_88(joaat("KNEEL2_TRANS_COFFEE2"), 6f);
		uParam0->f_196 = MISC::GET_GAME_TIMER();
		return true;
	}
	else if (uParam0->f_154 == 2)
	{
		if (!func_340(uParam0, 2))
			return false;
	
		if (func_343(Global_35, uParam0->[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 1;
			uParam0->f_196 = MISC::GET_GAME_TIMER();
			return true;
		}
	}
	else if (uParam0->f_154 == 3)
	{
		if (!func_340(uParam0, 3))
			return false;
	
		if (func_343(Global_35, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
		{
			uParam0->f_157 = 6;
			uParam0->f_154 = 0;
			uParam0->f_196 = MISC::GET_GAME_TIMER();
			return true;
		}
	}

	return false;
}

void func_559(int iParam0, BOOL bParam1) // Position - 0x19378 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return;

	num = func_163(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[num /*18*/].f_3);
	return;
}

BOOL func_560(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x193AA Hash - 0xA192589E ^0xA192589E
{
	var unk;

	unk = { func_296(hParam0, false, false) };
	return func_297(hParam0, &unk, iParam1, false, bParam2);
}

float func_561(int iParam0, BOOL bParam1) // Position - 0x193CB Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_70(iParam0))
		return 0f;

	num = func_163(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

void func_562(var uParam0) // Position - 0x19423 Hash - 0x17C0A4A2 ^0xEED35B22
{
	func_144(&uParam0->f_162[6], true, true);
	uParam0->f_162[6] = func_81("CRAFT_FASTER", joaat("INPUT_CONTEXT_A"), 2, 0, 0, 6, 6000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	func_545(uParam0, 6, false, false);
	func_82(uParam0->f_162[6], -1067771379, 0, true);

	if (func_98(false))
		func_543(uParam0->f_57.f_77, uParam0->f_57.f_78, true, func_551(), 0);

	func_84(uParam0->f_162[6], false, true);
	func_553();
	uParam0->f_196 = MISC::GET_GAME_TIMER();
	AUDIO::_SET_AUDIO_SCENESET("crafting", "Player_Campfire_Scenes");
	func_62(uParam0, 1);
	return;
}

BOOL func_563(Hash hParam0) // Position - 0x194CA Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_564(Hash hParam0) // Position - 0x194F2 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_565(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0x1951A Hash - 0x47A4DDC0 ^0xD98F8579
{
	int i;
	Hash category;
	Hash outSlotId;
	int hasSlotCount;
	var outInventoryItem;
	var unk16;
	int inventoryId;
	int childrenCount;
	int j;
	var unk30;
	var parentGuid;

	if (hParam0 != 0 && hParam1 != 0)
	{
		category = func_199(hParam1);
		hasSlotCount = func_894(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
				{
					*uParam4 = { func_296(hParam1, false, false) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_346(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_86(false);
			unk30 = { func_296(hParam1, false, false) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_346(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_199(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, category, outSlotId))
							{
								if (func_895(parentGuid, outInventoryItem.f_9, &unk16, false))
								{
									uParam4->f_4 = outInventoryItem.f_9;
									*uParam4 = { outInventoryItem.f_5 };
									*uParam3 = { unk16 };
									*uParam2 = outSlotId;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}

	*uParam2 = 0;
	return false;
}

struct<4> func_566() // Position - 0x19699 Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_583(false) };
	return func_346(856287005, unk, -218846335, false);
}

BOOL func_567(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x196BD Hash - 0x86E39CDA ^0xCF922D1
{
	!func_121(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_297(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_98(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_86(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_568(Hash hParam0, int iParam1) // Position - 0x1971F Hash - 0x148943C8 ^0x2BF2CC5F
{
	var unk;
	var unk6;
	Hash hash;
	var unk10;
	var unk14;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	Hash hash5;

	if (!func_121(hParam0, 0))
		return false;

	if (!func_565(hParam0, 856287005, &hash, &unk6, &unk, true, 0))
		return false;

	unk10 = { func_566() };
	unk14 = { func_346(hParam0, unk10, hash, false) };

	if (func_896(unk14, iParam1))
	{
		if (func_897(hParam0))
		{
			if (func_898(joaat("SLOTID_HORSE_HORN"), &hash2))
				func_568(hash2, 0);
		}
		else if (func_569(hParam0))
		{
			if (func_898(joaat("SLOTID_HORSE_HORN"), &hash3))
				func_568(hash3, 0);
		
			if (func_898(joaat("SLOTID_HORSE_STIRRUP"), &hash4))
				func_568(hash4, 0);
		
			hash5 = func_570(hParam0);
		
			if (func_121(hash5, 0))
				func_568(hash5, 1);
		}
	
		func_571();
		return true;
	}

	return false;
}

BOOL func_569(Hash hParam0) // Position - 0x197FA Hash - 0x1FFCC90D ^0x9E730FBF
{
	if (!func_121(hParam0, 0))
		return false;

	if (func_190(hParam0, -251515357))
		return true;

	return false;
}

Hash func_570(Hash hParam0) // Position - 0x19824 Hash - 0xBD10D1A2 ^0xB99ADD5C
{
	switch (hParam0)
	{
		case joaat("horse_equipment_western_01_special_new_saddle_000"):
			return 263080063;
	
		case joaat("horse_equipment_western_04_special_new_saddle_000"):
			return 1104489688;
	
		case joaat("horse_equipment_motherhubbard_01_special_new_saddle_000"):
			return -34331381;
	
		case joaat("horse_equipment_western_03_special_new_saddle_000"):
			return 579268144;
	
		case joaat("horse_equipment_mcclellan_01_special_new_saddle_000"):
			return -993578318;
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
int func_571() // Position - 0x1988A Hash - 0x79A7BF3 ^0x80B436A4
{
	var unk;
	var unk6;
	int i;
	Hash category;
	Hash outSlotId;
	Hash hash;
	BOOL flag;
	var unk12;
	int num;
	Hash hash2;

	unk = { func_296(856287005, false, false) };
	unk6 = { func_346(856287005, unk, unk.f_4, false) };
	category = func_199(856287005);

	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, 0, &outSlotId))
		hash = func_899(unk6, joaat("SLOTID_HORSE_SADDLE"), false);

	if (!func_121(hash, 0))
		return 0;

	flag = false;
	num = func_894(856287005);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
		{
			flag = false;
			hash2 = func_899(unk6, outSlotId, false);
		
			if (!func_121(hash2, 0))
			{
				if (outSlotId == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_569(hash) || func_897(hash))
					{
					}
					else
					{
						goto 0xDB;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_STIRRUP"))
				{
					if (func_569(hash))
					{
					}
					else
					{
						flag = true;
						goto 0x103;
					}
				}
			
				flag = true;
			}
			else if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
			{
				if (!func_569(hash) && func_900(hash2))
					flag = true;
			}
		
			if (flag)
			{
				if (func_901(outSlotId, &unk12, true))
				{
					if (!func_896(unk12, true))
					{
					}
				}
			}
		}
	}

	return 1;
}

BOOL func_572() // Position - 0x199BE Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_573(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x199CB Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_574(BOOL bParam0, var uParam1, var uParam2) // Position - 0x19A35 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_575(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x19A4C Hash - 0x92B705D3 ^0xB783F681
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

const char* func_576(const char* sParam0, int iParam1) // Position - 0x19B3F Hash - 0x9E99F03 ^0x5F6A9BEA
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_577(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x19B59 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_902(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_578(Hash hParam0, int iParam1) // Position - 0x19BBC Hash - 0xD7B4F3C5 ^0x943C8C22
{
	var unk;
	int num;
	int num2;

	if (!func_121(hParam0, 0))
		return false;

	unk.f_4 = func_582(iParam1);

	if (!func_903(hParam0, unk.f_4))
		return false;

	num = func_621(hParam0, &unk, true, false);
	num2 = func_757(hParam0, false);

	if (num >= 0 && num2 > num)
		return false;

	return true;
}

BOOL func_579(Hash hParam0) // Position - 0x19C1A Hash - 0x5E6E1858 ^0x84C97687
{
	!func_121(hParam0, 0);

	if (func_190(hParam0, 173360570))
		return true;

	return false;
}

BOOL func_580(Hash hParam0) // Position - 0x19C40 Hash - 0x33F7D399 ^0xEB534519
{
	if (!func_121(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

BOOL func_581(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x19C5D Hash - 0x49B3EF5C ^0x9505D01C
{
	var data;
	int size;
	int collectionId;
	int i;
	Hash outKey;
	var unk10;
	int num;
	int j;

	if (!func_121(hParam0, 0))
		return false;

	*uParam2 = 0;
	data = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, hParam1, 0, -1, 0, 0) };
	collectionId = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&data, &size, 1);

	if (collectionId != -1)
	{
		unk10 = 15;
	
		for (i = 0; i < size; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey))
			{
				if (func_905(outKey, hParam1, &unk10, &num, true, false))
				{
					for (j = 0; j < num; j = j + 1)
					{
						if (hParam0 == unk10[j /*2*/])
							*uParam2 = *uParam2 + unk10[j /*2*/].f_1;
					}
				}
			}
		}
	
		ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId);
	}

	return true;
}

int func_582(int iParam0) // Position - 0x19D10 Hash - 0xF3DAE918 ^0xA65130AC
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		case 2:
			return 1426626782;
	
		case 3:
			return 1227915917;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

struct<4> func_583(BOOL bParam0) // Position - 0x19D5D Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_346(joaat("character"), func_906(), joaat("SLOTID_NONE"), bParam0);
}

int func_584(int iParam0) // Position - 0x19D79 Hash - 0x92F940EE ^0x92F940EE
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

float func_585(int iParam0) // Position - 0x19DCD Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_907(iParam0);
	
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
			return func_907(iParam0);
	
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
			return func_907(iParam0);
	
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

BOOL func_586(int iParam0) // Position - 0x1A09B Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_455(18);
	
		case 1:
			return func_455(19);
	
		case 2:
			return func_455(20);
	
		default:
		
	}

	return true;
}

int func_587(int iParam0) // Position - 0x1A0D9 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_908(Global_40.f_11095.f_11[iParam0]);
}

void func_588(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1A0F1 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_23() != -1)
		return;

	if (Global_1347477.f_117 || !func_455(31))
		return;

	num = func_587(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_587(iParam0);

	if (func_909(iParam0) && func_910(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_911(num2, fParam1);
		
			if (fParam1 > (float)func_912(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_63(func_913(iParam0), false);
				
					func_914(iParam0, num3, num4);
					func_232(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_589(int iParam0) // Position - 0x1A1F3 Hash - 0xEB40D7A4 ^0xB4051D89
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_590(int iParam0) // Position - 0x1A1FF Hash - 0x21FAF347 ^0xAF7D8F21
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

int func_591(Hash hParam0) // Position - 0x1A23A Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_296(hParam0, true, false) };
	return func_412(unk.f_4);
}

int func_592(Hash hParam0) // Position - 0x1A256 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_190(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_190(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_190(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_190(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_190(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_190(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_593(Hash hParam0, var uParam1) // Position - 0x1A3A7 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_413(func_915(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_199(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_594(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A41E Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_413(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_405(524288))
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

BOOL func_595(Hash hParam0) // Position - 0x1A489 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

void func_596(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A4CC Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

int func_597(int iParam0) // Position - 0x1A4FC Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

int func_598(int iParam0, int iParam1, int iParam2) // Position - 0x1A52F Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_599(int iParam0, int iParam1) // Position - 0x1A554 Hash - 0xD30D64D ^0xA6080D3D
{
	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/];
}

void func_600(Ped pedParam0, int iParam1, int iParam2) // Position - 0x1A58C Hash - 0x498B41C8 ^0xF542C5C9
{
	int coreIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_598(iParam2, 0, 100);

	if (func_916(iParam1, &coreIndex))
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex, iParam2);

	return;
}

void func_601(Ped pedParam0, int iParam1) // Position - 0x1A5D9 Hash - 0x20F01565 ^0xAC680146
{
	int coreIndex;
	char* variableName;
	char* variableName2;
	int attributeCoreValue;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_916(iParam1, &coreIndex))
		return;

	variableName = func_917(iParam1);
	variableName2 = func_918(iParam1);

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

BOOL func_602(int iParam0) // Position - 0x1A664 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_603(int iParam0) // Position - 0x1A678 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_274(iParam0, Global_1310750.f_16072 | 64);
}

void func_604(int iParam0) // Position - 0x1A690 Hash - 0x3D0B339A ^0xB87B2B3D
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

int func_605(int iParam0) // Position - 0x1A71D Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_919(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_606(Hash hParam0, var uParam1, var uParam2) // Position - 0x1A75E Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_607(Hash hParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1A96A Hash - 0x84700F53 ^0xB9E7AA96
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

	if (hParam1 != 0 && hParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = hParam1;

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

struct<4> func_608(BOOL bParam0) // Position - 0x1AA3C Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_86(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_346(923904168, func_583(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_346(923904168, func_583(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_346(923904168, func_583(bParam0), -740156546, false);
}

void func_609(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1AAD1 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_610(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1AAEC Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_86(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_611(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x1AB11 Hash - 0x9A4CDF09 ^0x9A4CDF09
{
	var unk;

	*uParam2 = 0;
	*uParam3 = 0;

	if (!func_121(hParam0, 0))
		return 0;

	if (!Global_1911914.f_1579 && func_920(hParam0, hParam1, true) && !bParam5)
		return 0;

	if (!func_921(hParam0, 1, hParam1, &unk, uParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = unk;
		*uParam3 = unk.f_1;
		return 0;
	}

	return 1;
}

BOOL func_612(Hash hParam0, BOOL bParam1) // Position - 0x1AB7D Hash - 0x62864AB ^0xBC339691
{
	if (func_199(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_455(24);
		else
			return true;

	return false;
}

BOOL func_613(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x1ABB6 Hash - 0x4285A587 ^0x4285A587
{
	return func_419(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_614(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1ABCE Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_922(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_615(BOOL bParam0) // Position - 0x1ABEF Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_86(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_346(271701509, func_583(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_346(271701509, func_583(bParam0), 12999093, false);
}

BOOL func_616(Hash hParam0, Hash hParam1) // Position - 0x1AC53 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_199(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_617(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1ACB2 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_86(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

int func_618(var uParam0) // Position - 0x1ACE2 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_121(*uParam0, 0))
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

BOOL func_619(Hash hParam0) // Position - 0x1AD5E Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_122(hParam0) == joaat("WEAPON");
}

BOOL func_620(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x1AD72 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_121(hParam0, 0))
		return false;

	unk = { func_296(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_766(398 + i, 1);
	
		if (func_613(hParam0, &unk, hash, false))
		{
			flag = func_614(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_621(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AE06 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_121(hParam0, 0))
		return 0;

	if (!func_98(false))
		bParam2 = true;

	if (bParam2 || !func_622(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_86(bParam3), hParam0);
}

BOOL func_622(Hash hParam0) // Position - 0x1AE54 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_923(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

BOOL func_623(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1AE70 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_624(int iParam0, int iParam1) // Position - 0x1AE87 Hash - 0x18C74423 ^0xA1132A0
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

	func_924(iParam0, iParam1);
	return;
}

BOOL func_625(int iParam0) // Position - 0x1AEE9 Hash - 0xB11233B9 ^0x48EE22B7
{
	if (Global_1572887.f_12 == -1)
		return false;

	return func_925(32, iParam0);
}

BOOL func_626(int iParam0) // Position - 0x1AF07 Hash - 0x5D034E98 ^0x5D034E98
{
	if (iParam0 >= 1 && iParam0 <= 183)
		return true;

	return false;
}

int func_627(int iParam0) // Position - 0x1AF25 Hash - 0x49256A88 ^0x2B8FFDBA
{
	if (!func_626(iParam0))
		return 0;

	return Global_1131585.f_12[iParam0 /*3*/].f_2;
}

BOOL func_628(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x1AF47 Hash - 0xA90653C8 ^0xA90653C8
{
	var unk;

	return func_926(iParam0, &unk, bParam1, iParam2, iParam3);
}

BOOL func_629() // Position - 0x1AF5D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

int func_630(int iParam0) // Position - 0x1AF6C Hash - 0xB8EC44B7 ^0x10011532
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
	
		case 2:
			return -1789085602;
	
		case 3:
			return -593725333;
	
		case 4:
			return 1619211297;
	
		case 5:
			return -1448204146;
	
		case 6:
			return -1918007793;
	
		case 7:
			return -2108757294;
	
		case 8:
			return -787840584;
	
		case 9:
			return -7905424;
	
		case 10:
			return -376205482;
	
		case 11:
			return -1753179328;
	
		case 12:
			return -1876855008;
	
		case 13:
			return 550082662;
	
		case 14:
			return -1964113;
	
		case 15:
			return 196458601;
	
		case 16:
			return 22941087;
	
		case 17:
			return 2017633379;
	
		case 24:
			return 253945992;
	
		case 25:
			return -1689046118;
	
		case 26:
			return -483357612;
	
		case 27:
			return -430722038;
	
		case 28:
			return 64082831;
	
		case 35:
			return -1498321291;
	
		case 36:
			return 1654907663;
	
		case 37:
			return 1059449568;
	
		case 38:
			return 2073287291;
	
		case 39:
			return 1110270789;
	
		case 40:
			return 417802449;
	
		case 41:
			return 2136672177;
	
		case 42:
			return -1930911028;
	
		case 43:
			return -739528491;
	
		case 55:
			return 2075984360;
	
		default:
		
	}

	return 0;
}

BOOL func_631(int iParam0) // Position - 0x1B13D Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_176(iParam0, 2);
}

BOOL func_632(int iParam0, int iParam1) // Position - 0x1B14C Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

void func_633(int iParam0) // Position - 0x1B15D Hash - 0x4918B04C ^0x4918B04C
{
	*iParam0 = 0;
	return;
}

void func_634(int iParam0, int iParam1) // Position - 0x1B169 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_635(int iParam0, int iParam1) // Position - 0x1B17E Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

Vector3 func_636(eStackSize essParam0) // Position - 0x1B193 Hash - 0x563C355B ^0x563C355B
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

void func_637(eStackSize essParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1B617 Hash - 0x8D139366 ^0xCA824361
{
	eStackSize stackSize;
	BOOL flag;
	BOOL flag2;
	var unk;
	eBlipSprite sprite;

	if (!func_117(essParam0))
		return;

	if (Global_1347702[essParam0 /*49*/].f_13 & 256 != 0 && func_18(0, false, true))
		return;

	if (Global_1347702[essParam0 /*49*/].f_12 & 16 != 0)
		return;

	if (Global_1347702[essParam0 /*49*/].f_36 == BLIP_HIGHER)
		return;

	if (func_314(32768))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
		return;

	Global_1347702[essParam0 /*49*/].f_38 = func_927(essParam0);

	if (!bParam5 && func_928(essParam0))
	{
		Global_1347702[essParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[essParam0 /*49*/].f_38, func_636(essParam0), Global_1347702[essParam0 /*49*/].f_18);
	
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
		func_929(8);
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

	func_930(essParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[essParam0 /*49*/].f_37, 64, essParam0);

	if (func_23() == -1)
	{
		func_931(essParam0);
		stackSize = func_932(Global_40.f_4283);
	
		if (func_434(stackSize) && func_933(Global_1888801[stackSize /*35*/].f_13))
		{
			flag = true;
			flag2 = func_934(stackSize);
		}
	
		if (func_935(essParam0, flag, stackSize))
			func_936(Global_1347702[essParam0 /*49*/].f_15, flag2, flag, stackSize);
	}

	if (bParam4)
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
			return;

	if (Global_1347702[essParam0 /*49*/].f_13 & 1 == 0)
	{
		func_937(&(Global_1347702[essParam0 /*49*/].f_13), 1);
	
		if (!func_928(essParam0) || func_118(Global_1347702[essParam0 /*49*/].f_12, 1) || func_118(Global_1347702[essParam0 /*49*/].f_12, 512) || func_938(Global_1347702[essParam0 /*49*/].f_13, 2048))
			MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	}

	if (Global_1347702[essParam0 /*49*/].f_13 & 32768 == 0)
		if (Global_1347702[essParam0 /*49*/].f_36 == joaat("blip_rc") && Global_1347702[essParam0 /*49*/].f_12 & 1 == 0 && Global_1347702[essParam0 /*49*/].f_12 & 2 != 0)
			MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		else
			func_937(&(Global_1347702[essParam0 /*49*/].f_13), 32768);

	if (Global_1347702[essParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[essParam0] & 2 == 0)
	{
		if (func_939(essParam0))
		{
			if (essParam0 == 97)
				func_63(185, false);
			else
				func_63(186, true);
		}
		else
		{
			TEXT_LABEL_COPY(&unk, { Global_1347702[essParam0 /*49*/].f_3 }, 3);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 24);
			sprite = Global_1347702[essParam0 /*49*/].f_37;
			Global_1347702[essParam0 /*49*/].f_40 = func_201(MISC::VAR_STRING(2, &unk, sprite), 10000, 0, 0, 0, true);
		}
	
		func_940(essParam0, 2);
	}

	return;
}

Vector3 func_638(eStackSize essParam0) // Position - 0x1BA6E Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_117(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_941(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

Ped func_639(Ped pedParam0) // Position - 0x1BAB4 Hash - 0xE591CF9E ^0x5F1C7BF1
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(pedParam0);

	if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
	{
		if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
			return pedIndexFromEntityIndex;
		}
	}

	return 0;
}

void func_640(var uParam0, int iParam1) // Position - 0x1BAFF Hash - 0x84556899 ^0xA18AFCFA
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

int func_641(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x1BBE0 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_942(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_943(anParam2, hParam0, num);
	return 1;
}

BOOL func_642(Hash hParam0) // Position - 0x1BC49 Hash - 0x1FFCC90D ^0xF5D25358
{
	if (!func_121(hParam0, 0))
		return 0;

	if (func_190(hParam0, -839724752))
		return 1;

	return 0;
}

void func_643(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1BC73 Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_644(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x1BCE8 Hash - 0xF684EE16 ^0xD8F147D7
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

Hash func_645(Ped pedParam0) // Position - 0x1BD11 Hash - 0xF32C828D ^0x75879223
{
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_643(pedParam0, &unk, &unk2, &num, &unk3);
	func_644(&num2, pedParam0, num, unk);

	if (num2 != 0)
		return num2;

	switch (num)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_646(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x1BD9E Hash - 0x423274ED ^0x50A2C4A6
{
	Ped ped;

	iParam1 = func_944(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, bParam2);

	if (iParam1 <= 0)
		return iParam1;

	ped = func_647(0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		func_648(&ped, hParam0, &iParam1, bParam3, hParam4);

	return iParam1;
}

Ped func_647(int iParam0) // Position - 0x1BDE2 Hash - 0x992FCD8C ^0xAA6462C3
{
	Ped lastMount;

	if (func_945(iParam0))
	{
		if (func_23() == -1)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (!ENTITY::DOES_ENTITY_EXIST(lastMount))
				lastMount = func_204(func_395(0));
		}
		else
		{
			lastMount = PED::_GET_LAST_MOUNT(func_946());
		}
	}
	else if (func_23() == -1)
	{
		lastMount = func_204(0);
	}
	else
	{
		lastMount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}

	return lastMount;
}

int func_648(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4) // Position - 0x1BE47 Hash - 0x69EE725C ^0x4869D6F1
{
	int inventoryIdFromPed;
	int num;
	var statId;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*uParam0);
	num = func_947(inventoryIdFromPed, hParam1);

	if (func_948(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_436(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		if (func_949(hParam1))
		{
			func_950(*uParam0, hParam1, *uParam2);
		}
		else
		{
			func_950(*uParam0, hParam1, *uParam2);
			func_944(*uParam0, hParam1, *uParam2, true);
		}
	
		num2 = num - func_947(inventoryIdFromPed, hParam1);
		*uParam2 = *uParam2 - num2;
		return 1;
	}

	return 0;
}

int func_649(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1BEEF Hash - 0x5AC5E89C ^0x5AC5E89C
{
	int num;
	int num2;
	int num3;

	num = func_124(hParam0, false, false);

	if (num >= iParam1)
	{
		num2 = iParam1;
	}
	else
	{
		num2 = num;
		num3 = iParam1 - num2;
	}

	if (num2 > 0)
		if (!func_226(hParam0, num2, bParam2, hParam3, false))
			return 0;

	if (num3 > 0)
	{
		if (!func_951(hParam0, num3, bParam2, hParam3))
			return 0;
	
		if (!bParam2)
			func_201("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, true);
	}

	return 1;
}

BOOL func_650(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1BF66 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_651(int iParam0, int iParam1) // Position - 0x1C004 Hash - 0x86BBE6F0 ^0x86BBE6F0
{
	if (iParam0 == iParam1)
		return true;

	if (iParam0 == 6 && iParam1 == 4)
		return true;

	return false;
}

BOOL func_652(Hash hParam0) // Position - 0x1C02C Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_653(Hash hParam0) // Position - 0x1C042 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_121(hParam0, 0))
	{
		if (func_190(hParam0, -1242251796))
		{
			if (func_190(hParam0, 2060589226))
				return func_952();
		
			return func_953();
		}
		else if (func_190(hParam0, 1919582297))
		{
			return func_662();
		}
		else if (func_190(hParam0, 1147021565))
		{
			return func_663();
		}
	}

	if (Global_1935496.f_12)
		return func_953();
	else
		return func_663();

	return func_663();
}

BOOL func_654(Hash hParam0) // Position - 0x1C0CC Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_190(hParam0, 1147021565) || func_190(hParam0, -136654233) || func_190(hParam0, -524514947) || func_190(hParam0, -1238310989) || func_190(hParam0, 1765172170) || func_190(hParam0, 1490540191) || func_190(hParam0, 1573112293) || func_190(hParam0, -1242251796) || func_190(hParam0, 1919582297) || func_190(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_655() // Position - 0x1C18E Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

int func_656() // Position - 0x1C19B Hash - 0x9F572D68 ^0x23F8B11F
{
	return 33537269;
}

int func_657() // Position - 0x1C1A8 Hash - 0x9F572D68 ^0xB34E8DD9
{
	return 18589696;
}

int func_658() // Position - 0x1C1B5 Hash - 0x9F572D68 ^0xA13B31FE
{
	return 26978448;
}

int func_659() // Position - 0x1C1C2 Hash - 0x9F572D68 ^0x3789FFFE
{
	return 33529847;
}

int func_660() // Position - 0x1C1CF Hash - 0x9F572D68 ^0x9FEEFCEA
{
	return 26978304;
}

int func_661() // Position - 0x1C1DC Hash - 0x9F572D68 ^0xFD1849EE
{
	return 32505855;
}

int func_662() // Position - 0x1C1E9 Hash - 0x9F572D68 ^0x2ABD6E9
{
	return 26983431;
}

int func_663() // Position - 0x1C1F6 Hash - 0x9F572D68 ^0x99F2F35F
{
	return 33537239;
}

int func_664() // Position - 0x1C203 Hash - 0x9F572D68 ^0x65E83B0A
{
	return 32713860;
}

int func_665() // Position - 0x1C210 Hash - 0x3CF9FC4B ^0x73CC3DF
{
	return 16400295;
}

int func_666() // Position - 0x1C21C Hash - 0x9F572D68 ^0x6988BC7F
{
	return 33284224;
}

void func_667(Player plParam0) // Position - 0x1C229 Hash - 0xF547F6A4 ^0xBF27B96B
{
	if (func_954(32))
		return;

	func_955(32);

	if (func_140(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 1;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 1;

	if (func_685(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 2;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2;

	if (func_956(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		Global_1935496.f_7 = Global_1935496.f_7 | 4;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4;

	if (func_957(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 8;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8;

	if (func_352(false, true))
		Global_1935496.f_7 = Global_1935496.f_7 | 16;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16;

	if (!func_958(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 32;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 32;

	if (!func_959(false))
		Global_1935496.f_7 = Global_1935496.f_7 | 512;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 512;

	if (!func_960(false))
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

	if (func_23() == false && PED::IS_PED_INCAPACITATED(Global_35))
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

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_956(Global_35, 1369124074))
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

	if (func_961(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 524288;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 524288;

	if (func_962(plParam0, false))
		Global_1935496.f_7 = Global_1935496.f_7 | 262144;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 262144;

	if (func_141(Global_35))
		Global_1935496.f_7 = Global_1935496.f_7 | 4194304;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 4194304;

	if (func_963())
		Global_1935496.f_7 = Global_1935496.f_7 | 16777216;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 16777216;

	if (ENTITY::DOES_ENTITY_EXIST(plParam0))
	{
		if (func_964(plParam0))
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

	if (func_23() == -1 && func_965(32768) || func_350() || func_966() || func_967() && !func_19() || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 2097152;
	else
		Global_1935496.f_7 = Global_1935496.f_7 | 2097152;

	if (Global_1900073.f_17 && func_37(Global_35, true, 0, false) == joaat("weapon_fishingrod"))
		Global_1935496.f_7 = Global_1935496.f_7 | 8388608;
	else
		Global_1935496.f_7 = Global_1935496.f_7 - Global_1935496.f_7 & 8388608;

	return;
}

int func_668(BOOL bParam0) // Position - 0x1C926 Hash - 0x3C563FFA ^0xB72DD621
{
	Entity entity;

	if (func_968(1) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return 0;
	}

	if (func_968(2) && !Global_1392040.f_2 && MISC::GET_GAME_TIMER() >= Global_36615)
	{
		if (bParam0)
		{
			entity = func_969(Global_35);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_201("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return 0;
				}
			}
		
			func_201("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return 0;
	}

	if (func_968(4194304))
		return 0;

	return 1;
}

int func_669(BOOL bParam0) // Position - 0x1C9D1 Hash - 0x19762284 ^0xACE3E4DC
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return 0;
	}

	return 1;
}

int func_670(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x1CA09 Hash - 0xB3520FCB ^0xE74487EC
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
					func_201("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return 0;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_201("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return 0;
		}
	
		if (!func_16(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
			if (VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35 || bParam2)
				return 0;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}

	return 1;
}

int func_671(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x1CAF6 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return 1;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return 1;
		}
	}

	return 0;
}

BOOL func_672(Ped pedParam0) // Position - 0x1CB4F Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

int func_673(Ped pedParam0, BOOL bParam1) // Position - 0x1CB6C Hash - 0x6BE4D4B ^0xC7F6BBCD
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

BOOL func_674() // Position - 0x1CBC2 Hash - 0x8FB36F20 ^0x8FB36F20
{
	return Global_1894899 & 4 != 0;
}

BOOL func_675() // Position - 0x1CBD2 Hash - 0x340E4DFD ^0xEE72B432
{
	return func_970(512);
}

BOOL func_676(var uParam0, int iParam1) // Position - 0x1CBE1 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_677() // Position - 0x1CBF2 Hash - 0x8650DF77 ^0x8650DF77
{
	return Global_1310750.f_16077 != 0;
}

BOOL func_678(Hash hParam0) // Position - 0x1CC03 Hash - 0xDF6FE81 ^0xAC897192
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

BOOL func_679(int iParam0) // Position - 0x1CC3D Hash - 0xC67CC87B ^0x695B9936
{
	return Global_1914296.f_22 && iParam0 != false;
}

BOOL func_680(int iParam0) // Position - 0x1CC50 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_9419 && iParam0 != false;
}

BOOL func_681(eStackSize essParam0) // Position - 0x1CC63 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_434(essParam0))
		return false;

	return func_971(essParam0, 33554432);
}

int func_682(eStackSize essParam0) // Position - 0x1CC84 Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_434(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

BOOL func_683(eStackSize essParam0) // Position - 0x1CCA4 Hash - 0xF30C3D47 ^0xF30C3D47
{
	if (func_682(essParam0) != 5)
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

BOOL func_684() // Position - 0x1CCDF Hash - 0xD4692F94 ^0xD4692F94
{
	eStackSize stackSize;

	stackSize = func_22();

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

BOOL func_685(Ped pedParam0) // Position - 0x1CDDC Hash - 0x8F7DFED5 ^0x8768F0B4
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

BOOL func_686() // Position - 0x1CE46 Hash - 0x75C5C6BE ^0x75C5C6BE
{
	eStackSize stackSize;
	Volume volume;
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	stackSize = func_22();
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
	
		if (func_972(Global_35, volume, true, 0))
		{
			func_318(volume);
			return true;
		}
		else
		{
			func_318(volume);
			return false;
		}
	}

	return false;
}

BOOL func_687(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1CECB Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_21(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_688(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x1CF26 Hash - 0x303D641D ^0x303D641D
{
	if (func_973(uParam0, fParam3))
		return true;

	if (func_974(uParam0, fParam3))
		return true;

	return false;
}

void func_689(int iParam0, int iParam1) // Position - 0x1CF51 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

int func_690(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x1CF71 Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0x1CFE8 Hash - 0xA17D549C ^0x2F5C67
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

int func_692(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1D098 Hash - 0xB88D7AA5 ^0x36259347
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

int func_693(Hash hParam0, int iParam1) // Position - 0x1D0F9 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_975(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_694(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1D128 Hash - 0xF20034E5 ^0x5373D4CD
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_452() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_976(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_977(), 12);
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
			else if (func_787() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_978(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_787(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_693(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_979(), 13);
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
			else if (func_788() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_980(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_788(), 10);
			break;
	}

	return sParam3;
}

BOOL func_695(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x1D415 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_696(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x1D4C2 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_697(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x1D4EE Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_698(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x1D53D Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_981(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_25(hash, 1, false) || func_983(func_982(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_981(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_981(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_787() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_984(i)), func_984(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_978() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_984(i)), func_984(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_984(i)), func_984(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_798(iParam3, func_985(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_794(hash) - iParam7 >= func_693(iParam3, func_986(i));
				else
					flag = func_794(hash) >= func_693(iParam3, func_986(i));
			else if (hParam4 == hash)
				flag = func_794(hash) + iParam7 >= func_693(iParam3, func_986(i));
			else
				flag = func_794(hash) >= func_693(iParam3, func_986(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_988(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
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
				flag = func_788() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_990(i)), func_990(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_980() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_990(i)), func_990(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_990(i)), func_990(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_798(iParam3, func_985(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_794(hash) - iParam7 >= 1;
				else
					flag = func_991(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_991(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_992(hash)), func_992(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_699(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x1D8B2 Hash - 0x3C34F826 ^0x2B8E8425
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
		if (func_979() >= 13)
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

BOOL func_700(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x1D9BB Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_119(func_993(0)) && func_994(0) == 1 || func_994(0) == 8 || func_994(0) == 6)
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

int func_701() // Position - 0x1DA5D Hash - 0x6AC5469B ^0xEA730EC
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
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_328(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_328(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

void func_702(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x1DB53 Hash - 0x7DB16548 ^0xD430BAB
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

void func_703(Hash hParam0, BOOL bParam1) // Position - 0x1DB8B Hash - 0x87EB26BF ^0x55136C8F
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

	if (func_190(hParam0, 1573112293) || func_190(hParam0, 672467738) || func_190(hParam0, -550842268))
		flag = true;

	if (func_122(hParam0) == joaat("consumable"))
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
				health = func_995(0, outData2.f_2);
				func_996(outData2.f_2, true);
				func_232(0, 7000);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_995(2, outData2.f_2);
				func_109(outData2.f_2);
				func_232(2, 7000);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_995(1, outData2.f_2);
				func_997(outData2.f_2);
				func_232(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_998(outData2.f_2, outData2.f_5);
			
				if (func_236(&unk28, &unk29, num))
				{
					func_237(num, true, flag, bParam1);
					func_232(0, 7000);
				}
			
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_998(outData2.f_2, outData2.f_5);
			
				if (func_236(&unk28, &unk29, num2))
				{
					func_238(num2, true, flag, bParam1);
					func_232(2, 7000);
				}
			
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_998(outData2.f_2, outData2.f_5);
			
				if (func_236(&unk28, &unk29, num3))
				{
					func_239(num3, true, flag, bParam1);
					func_232(1, 7000);
				}
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_241(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_242(19, num4);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_241(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_242(20, num4);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_241(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_242(18, num4);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_241(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_242(0, num4);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_241(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_242(2, num4);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_241(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_242(1, num4);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_240(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3)
			if (num > 0f || health > 0f)
				flag4 = true;
	
		if (flag4 || func_190(hParam0, -537818634))
			func_251(func_523(joaat("medicine_items_used")), 1);
	
		if (func_190(hParam0, -1457797660))
			func_251(func_523(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_251(func_523(joaat("DEADEYE_ITEMS_USED")), 1);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

BOOL func_704(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x1DEFB Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

void func_705(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1DF1F Hash - 0x50964517 ^0x50964517
{
	int num;
	int num2;

	num = func_999(iParam0);
	num2 = func_524(&num);

	if (num2 != iParam0)
		func_1000(num2, 4);

	if (!func_1001(iParam0))
		return;

	if (func_1002(iParam0))
		return;

	func_1000(iParam0, 4);
	func_1003(iParam0, bParam1);

	if (!func_1004(iParam0))
		func_1005(iParam0, true, false);

	if (bParam1)
		if (!func_18(0, false, true))
			func_101(true, 6);

	return;
}

void func_706(int iParam0) // Position - 0x1DF95 Hash - 0xF3266748 ^0xDD4983BD
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_707(eStackSize essParam0) // Position - 0x1DFDB Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

BOOL func_708(eStackSize essParam0, BOOL bParam1) // Position - 0x1DFFA Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_707(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_709(Ped pedParam0) // Position - 0x1E01F Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_1006(Global_35, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, pedParam0))
		return true;

	return false;
}

BOOL func_710(int iParam0) // Position - 0x1E057 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_711(int iParam0) // Position - 0x1E06C Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

BOOL func_712() // Position - 0x1E08C Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_1007())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_713(Hash hParam0) // Position - 0x1E0D6 Hash - 0x76026CA6 ^0xF319C9CA
{
	Hash hash;

	hash = func_199(hParam0);

	if (hash == 81053684 || hash == -525676072)
		return 1;

	return 0;
}

void func_714(var uParam0, int iParam1) // Position - 0x1E104 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_715(Hash hParam0) // Position - 0x1E115 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_721(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_716(var uParam0) // Position - 0x1E13F Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_1008(81053684))
		if (func_721(uParam0))
			return true;
	else if (func_593(-525676072, uParam0))
		if (func_721(uParam0))
			return true;

	return false;
}

Hash func_717() // Position - 0x1E184 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_701())
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

Hash func_718() // Position - 0x1E1DB Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_701())
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

Hash func_719() // Position - 0x1E232 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_701())
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

Hash func_720() // Position - 0x1E289 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_701())
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

BOOL func_721(var uParam0) // Position - 0x1E2E0 Hash - 0x313F44CF ^0x6235E18A
{
	if (func_593(81053684, uParam0))
		return true;

	if (func_593(-525676072, uParam0))
		return true;

	return false;
}

void func_722(var uParam0) // Position - 0x1E30D Hash - 0x7C3D914C ^0xB1998A7B
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

void func_723(BOOL bParam0) // Position - 0x1E36B Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

void func_724(int iParam0, int iParam1, int iParam2) // Position - 0x1E383 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_413(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_413(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_413(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

int func_725(int iParam0, BOOL bParam1) // Position - 0x1E3C2 Hash - 0x6C404ADF ^0x7D516F33
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
				return func_1009();
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

int func_726(int iParam0, BOOL bParam1) // Position - 0x1E451 Hash - 0x14DDA26B ^0xFFF4A8D0
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

BOOL func_727(Hash hParam0, var uParam1) // Position - 0x1E4F4 Hash - 0x4A27386E ^0xBC93C855
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

BOOL func_728(Hash hParam0) // Position - 0x1E534 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_23() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_729(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1E55D Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_727(hash, &unk))
		return 0;

	if (bParam3 && !func_1010(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_199(hParam0) != -999503751)
		func_1011(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

int func_730(Hash hParam0, BOOL bParam1) // Position - 0x1E605 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_296(hParam0, false, false) };
	guid = { func_346(hParam0, unk, unk.f_4, false) };

	if (func_419(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_86(false), &guid);
	return 1;
}

int func_731() // Position - 0x1E651 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

void func_732() // Position - 0x1E65F Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_23() == -1)
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

BOOL func_733(Hash hParam0) // Position - 0x1E795 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_1013(func_1012(hParam0));
}

void func_734(BOOL bParam0, BOOL bParam1) // Position - 0x1E7A7 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_1014(0);

	if (bParam0)
	{
		func_398(8);
		func_398(512);
	}
	else
	{
		func_398(8);
		func_398(16);
	}

	return;
}

void func_735(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1E7DA Hash - 0x50C09208 ^0x50C09208
{
	func_1015(hParam0, false, false);
	func_409(hParam1, true, bParam2, false);
	return;
}

int func_736(int iParam0, int iParam1) // Position - 0x1E7F4 Hash - 0xE1D12727 ^0xA46110B3
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

void func_737() // Position - 0x1EA43 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_738(int iParam0) // Position - 0x1EA8A Hash - 0x65A082AE ^0x65A082AE
{
	func_724(iParam0, 8, 6);
	return;
}

void func_739(int iParam0) // Position - 0x1EA9B Hash - 0x20214C72 ^0x20214C72
{
	func_1016(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_740(int iParam0, int iParam1) // Position - 0x1EAB0 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_1017(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_741(Hash hParam0, int iParam1, int iParam2) // Position - 0x1EAC7 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_742(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1EADA Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_199(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_1018(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_740(num2, num3);
	}

	if (func_811(-1586649372) && func_1018(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_740(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_1019(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_1019(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_740(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_740(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_740(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_595(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_190(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_740(num2, num3);
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
						func_740(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_740(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_199(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_740(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_595(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_199(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_740(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_1019(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_1019(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_740(num2, num3);
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
						func_740(num2, num3);
				}
			}
		
			func_1019(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_190(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_740(num2, num3);
			}
			break;
	
		case 1868067663:
			func_1019(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_740(num2, num3);
			}
			break;
	}

	switch (func_199(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_199(uParam0->f_1[num2 /*3*/]) || func_190(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_740(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_199(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_740(num2, num3);
			}
			break;
	}

	return;
}

Hash func_743(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x1F11E Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_1020(0);

	if (hParam2 != 0 && func_1021(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_1022(hParam0, func_736(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_744(var uParam0, BOOL bParam1, int iParam2) // Position - 0x1F164 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_23() != -1;
	flag2 = func_1020(0);

	if (func_405(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_736(num, 1);
		
			if (func_1023(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_1023(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_594(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_1024(uParam0);

	if (num3 > 0)
	{
		if (!func_405(524288))
		{
			func_398(524288);
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
				num5 = func_736(num, 1);
			
				if (func_1023(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_1023(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_594(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_740(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_723(524288);

	return;
}

void func_745(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F381 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_1025(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_23() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_1026(2, Global_26796.f_776) || Global_1946054.f_1497 != func_1027(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_1027(Global_40.f_7729);
				Global_1946054.f_1378 = func_1027(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1028(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_734(false, true);

	return;
}

BOOL func_746(int iParam0, int iParam1) // Position - 0x1F4A0 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_747(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1F4AF Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_710(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_710(20))
				return;
		}
	}

	func_711(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_398(8);
	return;
}

BOOL func_748() // Position - 0x1F5B3 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1914319.f_17375;
}

BOOL func_749() // Position - 0x1F5C2 Hash - 0xF0382EDE ^0x243CDD32
{
	int ransackScenarioPointPedIsUsing;

	if (func_155())
	{
		ransackScenarioPointPedIsUsing = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		return ransackScenarioPointPedIsUsing != 0;
	}

	return false;
}

BOOL func_750() // Position - 0x1F5E3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898068;
}

var func_751(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x1F5EF Hash - 0x63C3F71D ^0x3019B977
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

	if (func_1029() != 0)
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_1030());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_1030());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_1030());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_1031(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_625(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1224589.f_49[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_1032(i) != 1)
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
					if (!func_1033(player2))
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

int func_752(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x1F97E Hash - 0xDAC4446E ^0x51EF643B
{
	if (!func_1034(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*18*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

void func_753(Hash hParam0, int iParam1) // Position - 0x1F9AE Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_23() == -1)
	{
		if (func_356(43))
		{
			if (func_190(hParam0, 412399755))
			{
				func_791(joaat("exotic_stage_01"));
			
				if (func_792() == 0)
				{
					func_101(false, 10);
					num = func_1035(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_794(hParam0) < func_795(hParam0))
							func_360(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_356(44))
		{
			if (func_190(hParam0, 709057512))
			{
				func_791(joaat("exotic_stage_02"));
			
				if (func_792() == 1)
				{
					func_101(false, 10);
					num = func_1035(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_794(hParam0) < func_795(hParam0))
							func_360(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_356(45))
		{
			if (func_190(hParam0, -1478961327))
			{
				func_791(joaat("exotic_stage_03"));
			
				if (func_792() == 2)
				{
					func_101(false, 10);
					num = func_1035(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_794(hParam0) < func_795(hParam0))
							func_360(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_356(46))
		{
			if (func_190(hParam0, -1238404098))
			{
				func_791(joaat("exotic_stage_04"));
			
				if (func_792() == 3)
				{
					func_101(false, 10);
					num = func_1035(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_794(hParam0) < func_795(hParam0))
							func_360(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_356(47))
		{
			if (func_190(hParam0, 1160548794))
			{
				func_791(joaat("exotic_stage_05"));
			
				if (func_792() == 4)
				{
					func_101(false, 10);
					num = func_1035(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_794(hParam0) < func_795(hParam0))
							func_360(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

BOOL func_754(Hash hParam0) // Position - 0x1FC92 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_23() != -1)
		return false;

	if (func_454(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_297(hParam0, &unk, 1, false, false);

	return func_25(hParam0, 1, false);
}

void func_755(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x1FCD6 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_122(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_253(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_564(weaponHash))
	{
		if (func_23() == -1)
			func_254(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_124(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_256(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_756(Hash hParam0, var uParam1) // Position - 0x1FD7D Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_190(hParam0, 58855631))
	{
		func_1036(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

int func_757(Hash hParam0, BOOL bParam1) // Position - 0x1FDAB Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_460(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_86(bParam1), hParam0, false);
}

BOOL func_758() // Position - 0x1FDD5 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_23() != -1)
		return false;

	if (!func_264())
		return false;

	if (!func_120(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[2 /*74*/].f_1, true) && func_120(Global_1347702[120 /*49*/].f_15, true) && !func_120(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[37 /*74*/].f_1, true) && !func_120(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[57 /*74*/].f_1, true) && !func_120(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[26 /*74*/].f_1, true) && !func_120(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_120(Global_1835011[62 /*74*/].f_1, true) && func_120(Global_1835011[63 /*74*/].f_1, true) && !func_120(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[75 /*74*/].f_1, true) && !func_120(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_120(Global_1835011[76 /*74*/].f_1, true) && !func_120(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[40 /*74*/].f_1, true) && func_120(Global_1835011[41 /*74*/].f_1, true) && !func_120(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[62 /*74*/].f_1, true) && func_120(Global_1835011[63 /*74*/].f_1, true) && !func_120(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_120(Global_1835011[65 /*74*/].f_1, true) && func_120(Global_1835011[66 /*74*/].f_1, true) && !func_120(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

int func_759() // Position - 0x2001C Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_760(Hash hParam0) // Position - 0x2002E Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

Hash func_761(int iParam0) // Position - 0x2003C Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_762(int iParam0) // Position - 0x200F5 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_763(int iParam0) // Position - 0x20108 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_764(int iParam0) // Position - 0x20132 Hash - 0x48EBE6BD ^0x358C7E90
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

void func_765(int iParam0) // Position - 0x2016C Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_264() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_63(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_264() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_63(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_264() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_63(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_264() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_692("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_63(589, false);
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
			func_1037(true);
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
			func_1038(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1038(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1038(3);
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
		
			if (func_23() == -1)
			{
				if (!func_811(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1045(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_770())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_25(hash, 1, false))
						func_498(hash, 1, 752097756);
				
					func_210(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_1039(true);
			break;
	
		case 34:
			func_1040(true);
			break;
	
		case 35:
			func_1041(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_1042(false);
			break;
	
		case 38:
			func_1043(false);
			break;
	
		case 39:
			func_1044(false);
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
			func_1046();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_23() == -1)
				if (!func_25(1013902307, 1, false))
					func_498(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_23() == -1)
				if (!func_25(786809402, 1, false))
					func_498(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_23() == -1)
			{
				if (!func_25(1013902307, 1, false))
					func_498(1013902307, 1, 752097756);
			
				if (!func_25(142640135, 1, false))
					func_498(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_23() == -1)
			{
				if (!func_25(786809402, 1, false))
					func_498(786809402, 1, 752097756);
			
				if (!func_25(-518019409, 1, false))
					func_498(-518019409, 1, 752097756);
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

Hash func_766(int iParam0, int iParam1) // Position - 0x20794 Hash - 0xE1D12727 ^0x71D656A6
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

void func_767(Hash hParam0, int iParam1) // Position - 0x228DE Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_861(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_768(Hash hParam0) // Position - 0x22926 Hash - 0x708BD33E ^0xE42CF235
{
	char* propertyName;
	char* propertyName2;
	Hash value;

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
	value = func_147();
	func_246(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_769(Hash hParam0) // Position - 0x229F5 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_328(hParam0))
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

BOOL func_770() // Position - 0x22A71 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_23() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_771(Hash hParam0) // Position - 0x22A96 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_772(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22AA8 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_773(Hash hParam0) // Position - 0x22ACE Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_455(50))
			{
				if (!func_455(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_455(51))
			{
				if (!func_455(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_774() // Position - 0x22B3A Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_775() // Position - 0x22B4B Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_776() // Position - 0x22B6C Hash - 0xDC6E219D ^0xBD2A18DD
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

int func_777() // Position - 0x22BC1 Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_25(func_1047(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_778(Hash hParam0) // Position - 0x22BF3 Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_779(int iParam0, Hash hParam1) // Position - 0x22C89 Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_25(hash, 1, false) && func_25(hash2, 1, false))
		return true;

	return false;
}

Hash func_780(Hash hParam0) // Position - 0x22DEA Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_781(Hash hParam0, int iParam1) // Position - 0x22EB1 Hash - 0xB78A2FC ^0x6E3EB1C7
{
	Hash hash;

	hash = func_1048(hParam0);

	if (hash != -15)
	{
		func_246(&hash, 0, iParam1, 0, 0, 0, 0, false);
		return !func_832(hash, true);
	}

	return false;
}

int func_782(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x22EE3 Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_25(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_121(hash, 0) && func_190(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_783(int iParam0, const char* sParam1, int iParam2) // Position - 0x22FA8 Hash - 0x4DF85B80 ^0x9F99EDD0
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_577(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_784(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x22FE9 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_1049())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_577(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_1050(num);
			func_1051(num, 0, 0);
		}
	
		func_577(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_251(func_523(joaat("CAREER_CASH")), value);
	}

	return;
}

int func_785(int iParam0) // Position - 0x230C5 Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_794(hash);
	num3 = func_794(hash2);
	num4 = func_794(hash3);
	num6 = func_795(hash);
	num7 = func_795(hash2);
	num8 = func_795(hash3);

	if (iParam0 != 2)
	{
		num5 = func_794(hash4);
		num9 = func_795(hash4);
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

void func_786(int iParam0) // Position - 0x23238 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_787() // Position - 0x23253 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1052(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_788() // Position - 0x2328C Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_789(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x2329E Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_991(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_991(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_991(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_991(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_991(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_991(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash) && func_991(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_991(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_991(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_991(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash) && func_991(hash2) && func_991(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_991(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_991(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_991(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_991(hash) && func_991(hash2) && func_991(hash3) && func_991(hash4))
			return true;
	}

	return false;
}

void func_790(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x23763 Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_1055();
			func_1053(iParam0);
			break;
	
		case -1925798111:
			func_1053(-1925798111);
			func_1054(-919512195);
			func_1054(420709909);
			func_1054(1703426636);
			break;
	
		case -1838352012:
			func_1054(-1674179981);
			func_1054(-1835851517);
			func_1053(-1838352012);
			break;
	
		case -1835851517:
			func_1054(-1674179981);
			func_1054(-1838352012);
			func_1053(-1835851517);
			break;
	
		case -1738165526:
			func_1053(-1738165526);
			func_1054(0);
			func_1054(473295046);
			break;
	
		case -1717960576:
			func_1054(210001842);
			func_1053(-1717960576);
			break;
	
		case -1674179981:
			func_1054(-1835851517);
			func_1054(-1838352012);
			func_1053(-1674179981);
			break;
	
		case -1612662716:
			func_1054(1822001510);
			func_1053(-1612662716);
			break;
	
		case -1414537028:
			func_1054(38162571);
			func_1054(1350391819);
			func_1054(54073871);
			func_1053(-1414537028);
			break;
	
		case -1311865656:
			func_1053(-1311865656);
			func_1054(1509509592);
			func_1054(-959357075);
			func_1054(405586984);
			break;
	
		case -1271608261:
			func_1054(-150493654);
			func_1054(1846061697);
			func_1054(-1145519186);
			func_1053(-1271608261);
			break;
	
		case -1223121209:
			func_1053(-1223121209);
			func_1054(630808005);
			break;
	
		case -1145519186:
			func_1054(-150493654);
			func_1054(-1271608261);
			func_1054(1846061697);
			func_1053(-1145519186);
			break;
	
		case -1124061431:
			func_1054(198200492);
			func_1053(-1124061431);
			func_1054(52706132);
			func_1054(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_1053(-1080627546);
			else
				func_1054(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1054(-538889627);
			func_1054(-538880323);
			func_1054(-1056767524);
			func_1053(iParam0);
			break;
	
		case -959357075:
			func_1053(-959357075);
			func_1054(1509509592);
			func_1054(405586984);
			func_1054(-1311865656);
			break;
	
		case -919512195:
			func_1053(-919512195);
			func_1054(-1925798111);
			func_1054(420709909);
			func_1054(1703426636);
			break;
	
		case -664252410:
			func_1054(2019386373);
			func_1054(2109952320);
			func_1053(-664252410);
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
			func_1056();
			func_1053(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_1053(-524145696);
			else
				func_1054(-524145696);
		
			func_1054(1626481264);
			func_1054(282809459);
			break;
	
		case -502324015:
			func_1054(1497516462);
			func_1054(2016141805);
			func_1054(1010885152);
			func_1053(-502324015);
			break;
	
		case -434590080:
			func_1054(1376646519);
			func_1054(931649776);
			func_1054(1743048395);
			func_1054(449774763);
			func_1053(-434590080);
			break;
	
		case -404698347:
			func_1054(1306158345);
			func_1054(1952610440);
			func_1054(-223469678);
			func_1054(1517904467);
			func_1053(-404698347);
			break;
	
		case -259123672:
			func_1054(198200492);
			func_1054(-1124061431);
			func_1054(52706132);
			func_1053(-259123672);
			break;
	
		case -223469678:
			func_1054(1306158345);
			func_1054(1952610440);
			func_1054(-404698347);
			func_1054(1517904467);
			func_1053(-223469678);
			break;
	
		case -150493654:
			func_1054(-1271608261);
			func_1054(1846061697);
			func_1054(-1145519186);
			func_1053(-150493654);
			break;
	
		case 0:
			func_1053(0);
			func_1054(473295046);
			func_1054(-1738165526);
			break;
	
		case 38162571:
			func_1054(-1414537028);
			func_1054(1350391819);
			func_1054(54073871);
			func_1053(38162571);
			break;
	
		case 52706132:
			func_1054(198200492);
			func_1054(-1124061431);
			func_1053(52706132);
			func_1054(-259123672);
			break;
	
		case 54073871:
			func_1054(-1414537028);
			func_1054(38162571);
			func_1054(1350391819);
			func_1053(54073871);
			break;
	
		case 198200492:
			func_1053(198200492);
			func_1054(-1124061431);
			func_1054(52706132);
			func_1054(-259123672);
			break;
	
		case 210001842:
			func_1054(-1717960576);
			func_1053(210001842);
			break;
	
		case 280705402:
			func_1054(1766284049);
			func_1054(1926308480);
			func_1053(280705402);
			break;
	
		case 282809459:
			func_1053(282809459);
			func_1054(1626481264);
			func_1054(-524145696);
			break;
	
		case 405586984:
			func_1053(405586984);
			func_1054(1509509592);
			func_1054(-959357075);
			func_1054(-1311865656);
			break;
	
		case 420709909:
			func_1053(420709909);
			func_1054(-919512195);
			func_1054(-1925798111);
			func_1054(1703426636);
			break;
	
		case 439465264:
			if (func_1057(1609506757))
				if (bParam1)
					func_1053(439465264);
				else
					func_1054(439465264);
			break;
	
		case 449774763:
			func_1054(1376646519);
			func_1054(931649776);
			func_1054(-434590080);
			func_1054(1743048395);
			func_1053(449774763);
			break;
	
		case 473295046:
			func_1053(473295046);
			func_1054(0);
			func_1054(-1738165526);
			break;
	
		case 630808005:
			func_1053(630808005);
			func_1054(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_1053(885203519);
			else
				func_1054(885203519);
			break;
	
		case 931649776:
			func_1054(1376646519);
			func_1054(-434590080);
			func_1054(1743048395);
			func_1054(449774763);
			func_1053(931649776);
			break;
	
		case 932909855:
			func_1053(932909855);
			func_1054(2051822093);
			break;
	
		case 1010885152:
			func_1054(1497516462);
			func_1054(2016141805);
			func_1053(1010885152);
			func_1054(-502324015);
			break;
	
		case 1306158345:
			func_1054(1952610440);
			func_1054(-223469678);
			func_1054(-404698347);
			func_1054(1517904467);
			func_1053(1306158345);
			break;
	
		case 1350391819:
			func_1054(-1414537028);
			func_1054(38162571);
			func_1054(54073871);
			func_1053(1350391819);
			break;
	
		case 1376646519:
			func_1054(931649776);
			func_1054(-434590080);
			func_1054(1743048395);
			func_1054(449774763);
			func_1053(1376646519);
			break;
	
		case 1453909576:
			func_1053(1453909576);
			func_1054(1643531967);
			break;
	
		case 1497516462:
			func_1053(1497516462);
			func_1054(2016141805);
			func_1054(1010885152);
			func_1054(-502324015);
			break;
	
		case 1509509592:
			func_1053(1509509592);
			func_1054(405586984);
			func_1054(-959357075);
			func_1054(-1311865656);
			break;
	
		case 1517904467:
			func_1054(1306158345);
			func_1054(1952610440);
			func_1054(-223469678);
			func_1054(-404698347);
			func_1053(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_1054(439465264);
				func_1053(1609506757);
			}
			else
			{
				func_1054(1609506757);
				func_1054(439465264);
			}
			break;
	
		case 1626481264:
			func_1053(1626481264);
			func_1054(-524145696);
			func_1054(282809459);
			break;
	
		case 1643531967:
			func_1053(1643531967);
			func_1054(1453909576);
			break;
	
		case 1703426636:
			func_1053(1703426636);
			func_1054(-919512195);
			func_1054(-1925798111);
			func_1054(420709909);
			break;
	
		case 1743048395:
			func_1054(1376646519);
			func_1054(931649776);
			func_1054(-434590080);
			func_1054(449774763);
			func_1053(1743048395);
			break;
	
		case 1766284049:
			func_1054(280705402);
			func_1054(1926308480);
			func_1053(1766284049);
			break;
	
		case 1822001510:
			func_1054(-1612662716);
			func_1053(1822001510);
			break;
	
		case 1846061697:
			func_1054(-150493654);
			func_1054(-1271608261);
			func_1054(-1145519186);
			func_1053(1846061697);
			break;
	
		case 1926308480:
			func_1054(1766284049);
			func_1054(280705402);
			func_1053(1926308480);
			break;
	
		case 1952610440:
			func_1054(1306158345);
			func_1054(-223469678);
			func_1054(-404698347);
			func_1054(1517904467);
			func_1053(1952610440);
			break;
	
		case 2016141805:
			func_1054(1497516462);
			func_1053(2016141805);
			func_1054(1010885152);
			func_1054(-502324015);
			break;
	
		case 2019386373:
			func_1054(-664252410);
			func_1054(2109952320);
			func_1053(2019386373);
			break;
	
		case 2051822093:
			func_1053(2051822093);
			func_1054(932909855);
			break;
	
		case 2109952320:
			func_1054(2019386373);
			func_1054(-664252410);
			func_1053(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_1057(iParam0))
					func_1053(iParam0);
			else if (func_1057(iParam0))
				func_1054(iParam0);
			break;
	}

	return;
}

void func_791(Hash hParam0) // Position - 0x24288 Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_1058(hParam0))
		func_1060(func_1059(hParam0));

	return;
}

int func_792() // Position - 0x242A4 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_1058(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_793(Hash hParam0, int iParam1, int iParam2) // Position - 0x242DC Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_794(hash);
	num3 = func_794(hash2);
	num4 = func_794(hash3);
	num6 = func_795(hash);
	num7 = func_795(hash2);
	num8 = func_795(hash3);

	if (iParam2 != 2)
	{
		num5 = func_794(hash4);
		num9 = func_795(hash4);
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

int func_794(Hash hParam0) // Position - 0x244EF Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_25(hParam0, 1, false))
		num = func_124(hParam0, false, false);

	return num;
}

int func_795(Hash hParam0) // Position - 0x2450E Hash - 0xEED5739D ^0xEED5739D
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

int func_796(Hash hParam0) // Position - 0x245E7 Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_797(Hash hParam0, int iParam1) // Position - 0x245F5 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_798(Hash hParam0, int iParam1) // Position - 0x24605 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_975(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_799(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x24634 Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_798(hParam1, 5) || hParam0 == func_798(hParam1, 6) || hParam0 == func_798(hParam1, 7) || hParam0 == func_798(hParam1, 8) || hParam0 == func_798(hParam1, 9))
	{
		func_789(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_360(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_359(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_800(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x246B6 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_798(hParam1, 5) || hParam0 == func_798(hParam1, 6) || hParam0 == func_798(hParam1, 7) || hParam0 == func_798(hParam1, 8) || hParam0 == func_798(hParam1, 9))
	{
		if (func_789(hParam1, hParam0, &num, false, 0, false))
		{
			func_360(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_359(51, 0, 0, num, func_693(hParam1, 20), 1, 0);
		}
		else
		{
			func_360(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_359(51, 0, 0, num, func_693(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_801() // Position - 0x24777 Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_330(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_802(Hash hParam0) // Position - 0x247A0 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_803(Hash hParam0) // Position - 0x247AF Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_1061(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_804(Hash hParam0) // Position - 0x247C8 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

float func_805() // Position - 0x247D7 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_1062())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_506(2);

	if (Global_1347477.f_119)
		return func_506(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1063();
	num3 = func_1064();
	num4 = func_1065();
	num5 = func_1066();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1067());
	num8 = func_506(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1068(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1069(3, num9, num9 > 100f);
	return func_510(num8, -100f, 100f);
}

float func_806() // Position - 0x24900 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_1062())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_506(1);

	if (Global_1347477.f_119)
		return func_506(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1063();
	num3 = func_1064();
	num4 = func_1065();
	num5 = func_1066();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1067());
	num8 = func_506(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1068(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1069(2, num9, num9 > 100f);
	return func_510(num8, -100f, 100f);
}

float func_807() // Position - 0x24A29 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_1062())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_506(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_1070())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_1071())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_506(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_1063();
	num3 = func_1064();
	num4 = func_1065();
	num5 = func_1066();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_1067());
	num8 = func_506(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_1068(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_1069(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_506(0);

	return func_510(num8, -100f, 100f);
}

BOOL func_808(Hash hParam0) // Position - 0x24BD0 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_809(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24BE0 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_707(essParam0))
		return;

	if (func_394(essParam0))
		return;

	if (!func_1072(essParam0))
		func_1073(essParam0, true, false);

	hash = func_1027(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_708(essParam0, 512))
			func_207(30, hash, 0, 0, false);

	if (!func_1074() && !bParam1 && !func_18(0, false, true))
		func_201(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_1075(essParam0, 6);

	if (bParam2)
		if (!func_18(0, false, true))
			func_101(true, 4);

	return;
}

BOOL func_810(Hash hParam0, var uParam1) // Position - 0x24CA6 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_199(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_811(int iParam0) // Position - 0x24CEA Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_413(iParam0, 1) /*3*/] != Global_1946054.f_57[func_413(iParam0, 1) /*11*/];
}

void func_812(int iParam0, Hash hParam1) // Position - 0x24D22 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_190(hParam1, 130796156))
	{
		func_1076(hParam1, false);
	}
	else if (func_190(hParam1, 930141731))
	{
		func_1076(hParam1, true);
		func_1077(iParam0);
	}

	return;
}

int func_813(int iParam0) // Position - 0x24D5D Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x24D6F Hash - 0xA17D549C ^0x981BBC97
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

Hash func_815(Hash hParam0) // Position - 0x24E46 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_1078(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_816(Ped pedParam0, Any* panParam1) // Position - 0x24E70 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

float func_817(int iParam0, int iParam1) // Position - 0x24E80 Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_1079();

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

int func_818(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x24ECB Hash - 0xB3CE93F ^0xBCF1CC1
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_1079();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_1080(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_1081(ped, iParam0, fParam1);
	func_1082(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_826(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_819(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x24F81 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_531(*uParam0);
	i = func_532(*uParam0);
	j = func_533(*uParam0);
	k = func_534(*uParam0);
	l = func_535(*uParam0);
	m = func_536(*uParam0);

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
	
		num3 = func_537(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_538(uParam0, m, l, k, j, i, num);
	return;
}

int func_820(int iParam0, int iParam1) // Position - 0x250F4 Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_1079();

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

Hash func_821(int iParam0, int iParam1) // Position - 0x25143 Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_1079();

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

BOOL func_822(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x25194 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_1083(hParam1) || !func_1083(hParam0))
			return true;

	return hParam0 > hParam1;
}

void func_823(int iParam0, int iParam1, int iParam2) // Position - 0x251C1 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_1079();

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

void func_824(int iParam0, Hash hParam1, int iParam2) // Position - 0x25216 Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_1079();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = hParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = hParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_825(int iParam0) // Position - 0x2526B Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_826(int iParam0) // Position - 0x2528F Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_827(int iParam0) // Position - 0x252BE Hash - 0x5163992 ^0x5163992
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

void func_828(int iParam0, float fParam1, BOOL bParam2) // Position - 0x252ED Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_1084(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_829(int iParam0) // Position - 0x2533D Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_830(int iParam0) // Position - 0x25361 Hash - 0x68BC9945 ^0x68BC9945
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

char* func_831(int iParam0) // Position - 0x25393 Hash - 0x21CE226B ^0xA19ADFE8
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

BOOL func_832(Hash hParam0, BOOL bParam1) // Position - 0x253CE Hash - 0x10DE2364 ^0x10DE2364
{
	return func_822(func_147(), hParam0, bParam1);
}

void func_833(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x253E2 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_834(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x25426 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_1084(0, 1, bParam0, bParam1);
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

int func_835(int iParam0) // Position - 0x2551E Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_1079();

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

void func_836(float fParam0, Ped pedParam1) // Position - 0x2555D Hash - 0x2062487E ^0xADB8AE45
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

int func_837(int iParam0) // Position - 0x2559F Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_1079();

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

void func_838(float fParam0) // Position - 0x255E2 Hash - 0xEBF0A2AB ^0x54370C29
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

int func_839(int iParam0) // Position - 0x2561C Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_1079();

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

void func_840(float fParam0, BOOL bParam1) // Position - 0x2565F Hash - 0x1FE7F29A ^0xE2FCD967
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

Hash func_841(int iParam0) // Position - 0x256F3 Hash - 0xBA965109 ^0xDF65C4FE
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

void func_842(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x259DF Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_70(iParam0))
		return;

	num = func_163(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, iParam2));
	return;
}

BOOL func_843(int iParam0, int iParam1) // Position - 0x25A2F Hash - 0x47F9E16C ^0x979A6503
{
	return func_1085(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

BOOL func_844() // Position - 0x25A43 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

var func_845() // Position - 0x25A64 Hash - 0x1372AFBD ^0xAE723118
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

var func_846(BOOL bParam0, var uParam1, var uParam2) // Position - 0x25A8E Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_847(var uParam0, int iParam1) // Position - 0x25AA5 Hash - 0xD05180BA ^0x39589262
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

void func_848(var uParam0, int iParam1) // Position - 0x25B2B Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_849(var uParam0, int iParam1) // Position - 0x25B67 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_532(*uParam0);
	num2 = func_531(*uParam0);

	if (iParam1 < 1 || iParam1 > func_537(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_850(var uParam0, int iParam1) // Position - 0x25BBA Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_851(var uParam0, int iParam1) // Position - 0x25BF5 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_852(var uParam0, int iParam1) // Position - 0x25C2E Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

void func_853(var uParam0) // Position - 0x25C66 Hash - 0x3E4C3523 ^0x8713423A
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		uParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_69);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		uParam0->f_70 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_70);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		uParam0->f_71 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_71);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		uParam0->f_72 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_72);
	}

	return;
}

BOOL func_854(const char* sParam0) // Position - 0x25DCD Hash - 0x38726239 ^0x48BDE31D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

BOOL func_855(var uParam0, var uParam1) // Position - 0x25DDC Hash - 0xCF1CBCB4 ^0xBBBBD5D9
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_853(uParam0);
		return false;
	}

	return true;
}

void func_856(Hash hParam0, int iParam1) // Position - 0x25E26 Hash - 0xBA32D184 ^0x5EA8C439
{
	int num;
	int num2;
	int num3;
	var unk;
	Hash hash;

	num = func_591(hParam0);
	num2 = func_413(num, 1);

	if (num2 == 39)
		return;

	if (func_1086(hParam0) && func_408(hParam0))
		iParam1 = iParam1 | 64;

	if (num == 1108822547 && func_405(32768) || Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && hParam0 != Global_1946054.f_1497.f_1[num2 /*3*/])
	{
		if (func_1086(Global_1946054.f_1497.f_1[num2 /*3*/]) && func_408(Global_1946054.f_1497.f_1[num2 /*3*/]))
			iParam1 = iParam1 | 32;
	
		if (Global_1946054.f_57[num2 /*11*/].f_1 > 1)
			iParam1 = iParam1 | 16;
	
		num3 = 0;
	
		switch (func_199(hParam0))
		{
			case -525676072:
				if (func_405(32768))
					func_738(func_736(num2, 1));
			
				if (func_405(32768) || func_593(-2061583405, &hash) && !func_408(hash))
					PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			
				if (func_593(81053684, &hash))
				{
					num3 = func_413(func_915(81053684), 1);
				
					if (num3 == 39)
						break;
				
					Global_1946054.f_2377[num3 /*2*/] = Global_1946054.f_57[num3 /*11*/];
				}
				break;
		
			case 81053684:
				if (func_593(-525676072, &unk))
				{
					num3 = func_413(func_915(-525676072), 1);
				
					if (num3 == 39)
						break;
				
					Global_1946054.f_2377[num3 /*2*/] = Global_1946054.f_57[num3 /*11*/];
				}
				break;
		}
	}

	Global_1946054.f_2377[num2 /*2*/] = hParam0;
	func_1087(num, iParam1, 6);
	return;
}

int func_857(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x25FF1 Hash - 0x7DBC2191 ^0x7DBC2191
{
	var unk;
	Hash hash;
	Hash hash2;
	int num;
	var unk33;
	int i;
	int num2;
	int num3;
	Hash hash3;

	if (!func_98(false))
		return 0;

	if (iParam4 != 0)
		bParam3 = false;

	unk = 15;

	if (!func_921(hParam0, 1, hParam1, &hash, &unk33, bParam3, iParam4, true))
	{
		hash2 = hash;
		return 0;
	}

	if (func_905(hParam0, hParam1, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			hash2 = unk[i /*2*/];
		
			if (func_121(hash2, 0))
			{
				if (hash2 == joaat("currency_cash"))
				{
					func_1088(unk[i /*2*/].f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (func_321(hash2) || func_642(hash2))
					{
						if (!func_25(hash2, unk[i /*2*/].f_1, false))
							num2 = func_1089(7, hash2, unk[i /*2*/].f_1);
					
						func_184(hash2, num2, 562618531, false, false);
						unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - num2;
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (!func_25(hash2, unk[i /*2*/].f_1, false))
								func_1090(hash2, unk[i /*2*/].f_1);
						
							if (func_25(hash2, unk[i /*2*/].f_1, false))
								func_226(hash2, unk[i /*2*/].f_1, bParam2, -142743235, false);
						}
					}
					else
					{
						if (func_1091(hash2) > 0)
						{
							func_1092(hash2);
							unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - 1;
						}
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (func_1093(7, hash2) > 0)
							{
								func_1094(7, hash2, unk[i /*2*/].f_1);
								unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - func_1094(7, hash2, unk[i /*2*/].f_1);
							}
						}
					
						if (unk[i /*2*/].f_1 > 0)
							func_226(hash2, unk[i /*2*/].f_1, bParam2, 562618531, false);
					}
				}
				else if (iParam4 == 0)
				{
					if (func_321(hash2) || func_642(hash2))
						if (!func_25(hash2, unk[i /*2*/].f_1, false))
							func_1090(hash2, unk[i /*2*/].f_1);
				
					func_226(hash2, unk[i /*2*/].f_1, bParam2, 562618531, false);
				}
				else
				{
					func_1095(hash2, iParam4, unk[i /*2*/].f_1, 562618531);
				}
			
				num3 = func_524(&hash2);
			
				if (func_1001(num3))
				{
					hash3 = func_841(num3);
					func_251(func_260(joaat("used_in_recipe"), hash3), unk[i /*2*/].f_1);
				}
			}
		}
	
		return 1;
	}

	return 0;
}

int func_858(Hash hParam0) // Position - 0x26271 Hash - 0x5CCC10A7 ^0x7EE6802B
{
	var outData;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_4;
}

int func_859(Hash hParam0, BOOL bParam1) // Position - 0x2628D Hash - 0x71A176E6 ^0x71A176E6
{
	var unk;

	unk = { func_296(hParam0, false, false) };
	return func_621(hParam0, &unk, false, bParam1);
}

int func_860(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x262AC Hash - 0x16BA3146 ^0x16BA3146
{
	var unk;
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_905(hParam0, hParam1, &unk, &num, bParam3, false))
		return 0;

	flag = func_98(false);
	num2 = -1;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		num3 = func_124(unk[i /*2*/], false, false);
	
		if (flag)
		{
			if (func_321(unk[i /*2*/]) || func_642(unk[i /*2*/]))
			{
				num3 = num3 + func_1096(unk[i /*2*/], 0);
			
				if (bParam2)
				{
					num4 = 0;
					num3 = num3 + func_1097(7, unk[i /*2*/], &num4);
				}
			}
			else if (bParam2)
			{
				num3 = num3 + func_1093(7, unk[i /*2*/]) + func_1091(unk[i /*2*/]);
			}
		}
	
		if (num3 < unk[i /*2*/].f_1)
			return 0;
	
		num3 = num3 / unk[i /*2*/].f_1;
	
		if (num2 == -1 || num3 < num2)
			num2 = num3;
	}

	return num2;
}

int func_861(int iParam0, int iParam1) // Position - 0x263B1 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

void func_862(int iParam0) // Position - 0x263C7 Hash - 0x78EB69E7 ^0x966F4F68
{
	if (iParam0 <= 0)
		return;

	if (!func_1098(471747275))
	{
		Global_40.f_4283.f_307.f_1 = Global_40.f_4283.f_307.f_1 + iParam0;
	
		if (Global_40.f_4283.f_307.f_1 >= 3)
			func_1099(471747275);
	}

	return;
}

int func_863(int iParam0) // Position - 0x26416 Hash - 0x84332977 ^0x8811826E
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
			return Global_1223212.f_1[i /*9*/].f_1;
	}

	return 0;
}

BOOL func_864(var uParam0) // Position - 0x2645C Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

void func_865(var uParam0) // Position - 0x26468 Hash - 0xBA5A1D5A ^0x56E80C6
{
	uParam0->f_18 = 0;
	return;
}

void func_866(var uParam0) // Position - 0x26475 Hash - 0xD45265C9 ^0xD45265C9
{
	func_133(true);
	func_45(uParam0, 4);
	return;
}

BOOL func_867(var uParam0) // Position - 0x26489 Hash - 0x98661462 ^0xA82ED6D1
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914.f_1576 = 0;
		uParam0->f_55 = 0;
		func_1100(uParam0, 600942249);
		uParam0->f_54 = uParam0->f_54 + 1;
		return false;
	}
	else if (uParam0->f_54 == 1)
	{
		func_1100(uParam0, -257768755);
		uParam0->f_54 = uParam0->f_54 + 1;
		return false;
	}
	else
	{
		func_1100(uParam0, -214678071);
		uParam0->f_54 = 0;
	}

	uParam0->f_55 = 0;
	return true;
}

BOOL func_868(var uParam0) // Position - 0x264FF Hash - 0x16A3D3E9 ^0xBA2DA937
{
	int i;
	var unk;

	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "filter", func_1101(uParam0->f_52));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterCount", 5 + 1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterIndex", uParam0->f_52);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "tipText", "");
	uParam0->f_51 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowIngredients", true);

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ingredient", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_1102(&uParam0->f_41[i], &unk, uParam0);
		TEXT_LABEL_ASSIGN_STRING(&unk, "tip", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		uParam0->f_46[i] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_39, &unk);
		TEXT_LABEL_ASSIGN_STRING(&unk, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_46[i], &unk, "");
		TEXT_LABEL_ASSIGN_STRING(&unk, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_46[i], &unk, 0);
	}

	return true;
}

BOOL func_869(var uParam0) // Position - 0x2667D Hash - 0xD901A9F7 ^0x243760EF
{
	Hash i;
	int num;
	BOOL flag;

	flag = func_551();

	for (i = uParam0->f_55; i <= Global_1911914.f_1576 - 1; i = i + 1)
	{
		if (func_121(Global_1911914[i /*9*/].f_6, 0))
		{
			func_1103(uParam0, false, i, flag, true, false);
		
			if (num >= 30)
			{
				uParam0->f_55 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_55 = 0;

	if (uParam0->f_60 == 0)
		uParam0->f_57 = 0;

	uParam0->f_56 = 0;
	return true;
}

void func_870(var uParam0) // Position - 0x266F8 Hash - 0x7B631005 ^0x32149705
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_40))
		uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes");
	else
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);

	uParam0->f_76 = 600942249;
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
	return;
}

BOOL func_871(var uParam0, BOOL bParam1) // Position - 0x2673A Hash - 0x5D096E3F ^0x7AAC5DC7
{
	Hash i;
	int num;
	BOOL flag;
	BOOL flag2;

	flag = func_551();

	for (i = uParam0->f_55; i <= Global_1911914.f_1576 - 1; i = i + 1)
	{
		if (uParam0->f_57 && Global_1911914[i /*9*/].f_2 || !uParam0->f_57)
		{
			if (Global_1911914.f_1585 != 0)
			{
				flag2 = func_190(Global_1911914[i /*9*/].f_6, Global_1911914.f_1585);
			
				if (uParam0->f_81 == flag2)
				{
				}
				else
				{
					func_1103(uParam0, true, i, flag, false, bParam1);
				
					if (num >= 50)
					{
						uParam0->f_55 = i + 1;
						return false;
					}
				
					num = num + 1;
				}
			}
		
			func_1103(uParam0, true, i, flag, false, bParam1);
		
			if (num >= 50)
			{
				uParam0->f_55 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_55 = 0;

	if (!uParam0->f_81 && Global_1911914.f_1585 != 0)
	{
		uParam0->f_81 = 1;
		return false;
	}

	uParam0->f_56 = 0;
	uParam0->f_81 = 0;
	return true;
}

BOOL func_872(var uParam0, BOOL bParam1) // Position - 0x2680A Hash - 0x377D2D9A ^0xEF9CB40F
{
	int num;

	uParam0->f_58 = 1;

	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("crafting"), 1014850361))
		{
			func_294(1);
			func_47(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		num = UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("crafting"));
	
		if (num == 0)
		{
			func_47(8);
			func_294(1);
			func_232(0, -100);
			func_232(2, -100);
			func_232(1, -100);
			return true;
		}
	}

	return false;
}

BOOL func_873(var uParam0) // Position - 0x2688D Hash - 0x1B1EEE6C ^0x4A5E63A0
{
	int i;
	int num;
	BOOL flag;

	flag = func_551();

	for (i = uParam0->f_55; i <= Global_1911914.f_1576 - 1; i = i + 1)
	{
		func_1104(uParam0, i, flag, 0, true, false, true);
	
		if (num >= 50)
		{
			uParam0->f_55 = i + 1;
			return false;
		}
	
		num = num + 1;
	}

	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return true;
}

void func_874(BOOL bParam0) // Position - 0x268EA Hash - 0xAD6A0552 ^0x4C19ACDB
{
	Ped ped;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
	ped = func_1105(Global_35);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(ped, 1f);

	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}

	return;
}

void func_875(var uParam0, BOOL bParam1) // Position - 0x269CC Hash - 0x15B6CFE3 ^0xA4EF50C1
{
	Entity scenarioPointEntity;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
		scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_9);

	if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
		ENTITY::SET_ENTITY_COLLISION(scenarioPointEntity, bParam1, false);

	return;
}

void func_876(var uParam0, var uParam1) // Position - 0x269FB Hash - 0xB6330D35 ^0x4C75622D
{
	Hash hash;
	Any any;
	Hash hash2;
	int num;
	int num2;
	int num3;
	Hash hash3;

	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	hash2 = hash;
	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (func_121(hash2, 0) && func_259(hash2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = hash2;
		uParam0->f_78 = any;
		func_144(&uParam0->[1], true, true);
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
	
		if (num > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantCount", num);
			num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			num3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
		
			if (num3 >= 0 && num3 < Global_1911914)
				hash3 = Global_1911914[num3 /*9*/].f_8;
		
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (num2 + 1) - hash3);
			uParam0->f_79 = 1;
			func_84(uParam0->[5], true, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
			uParam0->f_79 = 0;
			func_84(uParam0->[5], false, true);
		}
	
		uParam0->f_53 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_1106(uParam0->f_77), func_1107(uParam0->f_77)) * 1000f);
		uParam0->f_80 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		uParam0->[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		func_881(uParam0, uParam0->f_77, uParam0->f_78);
		func_83(uParam0->[1], 11, true, true);
	
		if (Global_1911914.f_1579 || !func_920(uParam0->f_77, uParam0->f_78, true))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_1108(hash2));
			func_886(uParam0, false);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", 0);
		}
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
			if (Global_1911914.f_1579 || !func_920(uParam0->f_77, uParam0->f_78, true))
				func_1109(uParam0);
	}

	return;
}

char* func_877(var uParam0) // Position - 0x26C14 Hash - 0x9EEF998B ^0x91E5B772
{
	if (uParam0->f_57)
		return "CAMP_REC_ALL";

	return "CAMP_REC_AVL";
}

int func_878(char* sParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x26C31 Hash - 0x82E2A46D ^0x46776D02
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_176(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_177(num, hParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, false, false, hParam2, joaat("SHORT_TIMED_EVENT"), false);
		return num;
	}

	return 0;
}

void func_879(int iParam0, Hash hParam1) // Position - 0x26CBF Hash - 0xDEF73F31 ^0x53A5E4BF
{
	int num;

	if (!func_70(iParam0))
		return;

	num = func_163(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1945188[num /*18*/].f_3, hParam1);
	return;
}

void func_880(var uParam0) // Position - 0x26D01 Hash - 0x4B96053 ^0xA405B7B1
{
	int i;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_51);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[i], "inUse", false);
	}

	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
	return;
}

void func_881(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x26D62 Hash - 0x3BD8D92F ^0x3BD8D92F
{
	var unk;
	var unk2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Entity entity;
	int num;
	int num2;
	int num3;

	if (!func_121(hParam1, 0))
	{
		if (func_70(uParam0->[1]))
			func_84(uParam0->[1], false, true);
	
		return;
	}

	flag = func_551();
	flag2 = true;
	flag3 = false;

	if (!Global_1911914.f_1579 && func_920(hParam1, hParam2, true))
	{
		flag3 = true;
		flag2 = false;
	}
	else if (!func_611(hParam1, hParam2, &unk2, &unk, &entity, false, flag, 0, true))
	{
		flag2 = false;
	}
	else if (func_23() == -1)
	{
		if (func_56(4096))
			if (func_372(hParam1, 1697966752) != 337650881)
				flag2 = false;
		else if (func_56(8192))
			if (hParam1 != joaat("consumable_potent_predator_bait"))
				flag2 = false;
	}

	if (flag2)
	{
		if (func_560(hParam1, 1, false) || !uParam0->f_83 || uParam0->f_84 > 0 && func_372(hParam1, -1636519629) == -701492487 || !uParam0->f_31 && uParam0->f_80 || hParam2 == -214678071 || hParam2 == joaat("cost_crafting_grill") || !uParam0->f_32 && hParam2 == joaat("cost_crafting_grill"))
		{
			flag2 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			num = func_124(hParam1, false, false);
			num2 = func_859(hParam1, false);
			num3 = func_860(hParam1, hParam2, flag, false);
		
			if (num2 == -1)
				num2 = num3;
			else
				num2 = num2 - num;
		
			uParam0->f_37 = func_861(num2, num3);
		}
	}

	if (func_70(uParam0->[1]))
	{
		if (func_317(hParam1))
			func_157(uParam0->[1], "CAMP_REC_COOK", true);
		else if (func_372(hParam1, -1636519629) == -701492487)
			func_157(uParam0->[1], "CAMP_REC_BREW", true);
		else
			func_157(uParam0->[1], "CAMP_REC_MAKE", true);
	
		func_84(uParam0->[1], flag2, true);
	}

	func_1110(hParam1, hParam2, uParam0, entity, flag3);

	if (func_70(uParam0->[6]))
		func_84(uParam0->[6], !flag3, true);

	return;
}

void func_882(char* sParam0, char* sParam1) // Position - 0x26F7B Hash - 0xEC3E3845 ^0x55B7F2F
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, true);
		Global_1955838[Global_1955838.f_25] = soundId;
		Global_1955838.f_25 = (Global_1955838.f_25 + 1) % 24;
	}

	return;
}

void func_883(var uParam0) // Position - 0x26FB9 Hash - 0xAA7F5F3E ^0x1BD635DF
{
	int num;
	AnimScene animScene;

	if (func_372(uParam0->f_77, -1636519629) == -701492487)
		func_131(uParam0, false);
	else
		func_131(uParam0, true);

	func_144(&uParam0->[1], true, true);
	func_144(&uParam0->[5], true, true);
	func_144(&uParam0->[6], true, true);
	func_144(&uParam0->[3], true, true);
	uParam0->f_36 = 1;

	if (!uParam0->f_80 && !func_317(uParam0->f_77))
	{
		func_47(131072);
		num = func_372(uParam0->f_77, -1636519629);
		animScene = func_892(uParam0, num);
	
		if (animScene != 0)
		{
			uParam0->f_36 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(animScene, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(animScene);
			uParam0->f_88 = 0;
		
			if (num != -1610298873)
				if (num == -842117252)
					uParam0->f_88 = joaat("s_cft_molotov01");
				else if (func_190(uParam0->f_77, -1588156645))
					uParam0->f_88 = func_858(func_252(uParam0->f_77, false));
				else if (func_190(uParam0->f_77, 457423347))
					uParam0->f_88 = joaat("s_cft_arrow_dynamite");
				else if (func_190(uParam0->f_77, -1846429632))
					uParam0->f_88 = joaat("s_cft_arrow_fire");
				else if (func_190(uParam0->f_77, -1067199465))
					uParam0->f_88 = joaat("s_cft_arrow_smallgame");
				else
					uParam0->f_88 = func_858(uParam0->f_77);
		
			if (uParam0->f_88 != 0)
				STREAMING::REQUEST_MODEL(uParam0->f_88, false);
		}
	
		func_157(uParam0->[2], "CAMP_REC_BACK", true);
		func_82(uParam0->[2], -1067771379, 0, true);
		func_84(uParam0->[2], false, true);
		func_331(uParam0->[2], false, true);
		uParam0->[4] = func_81("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
		func_332(&uParam0->[4], "INPUT_PCRAFT_EXIT");
		func_82(uParam0->[4], -1067771379, 0, true);
		func_84(uParam0->[4], false, true);
		func_83(uParam0->[4], 19, true, true);
		func_83(uParam0->[4], 20, true, true);
		func_83(uParam0->[4], 13, true, true);
		func_83(uParam0->[2], 13, true, true);
	
		if (func_70(uParam0->[2]))
			func_82(uParam0->[2], -1067771379, 0, true);
	
		func_45(uParam0, 12);
	}
	else
	{
		func_45(uParam0, 11);
	}

	return;
}

BOOL func_884(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2720C Hash - 0x312C05AC ^0xFB549D9B
{
	int num;

	if (bParam2 && !func_70(iParam0))
		return false;

	num = func_163(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3, iParam1);
}

void func_885(var uParam0, BOOL bParam1) // Position - 0x27241 Hash - 0x6787FEFE ^0xA9D2A6F
{
	int num;
	int num2;
	BOOL flag;
	int num3;
	int num4;
	var unk;
	Hash hash;
	int i;
	Hash hash2;
	int acquireCostsCount;
	Hash outData;
	int num5;
	int num6;
	Hash hash3;

	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
	{
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant");
		num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
		flag = false;
	
		if (uParam0->f_78 == -214678071 || uParam0->f_78 == joaat("cost_crafting_grill"))
		{
			if (bParam1)
				num = num + 1;
			else
				num = num - 1;
		
			if (num < 0)
				num = num2 - 1;
			else if (num >= num2)
				num = 0;
		
			unk = -1;
			unk.f_1 = -1;
			unk.f_2 = -1;
			unk.f_3 = -1;
			unk.f_4 = -1;
			unk.f_5 = -1;
			unk.f_6 = -1;
			unk.f_7 = -1;
			unk.f_8 = -1;
		
			if (num == 0)
			{
				unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, func_372(uParam0->f_77, 1697966752), 0) };
			
				if (func_1111(unk, &num3, &num4, 0))
				{
					if (num4 > 0)
					{
						uParam0->f_78 = -214678071;
						uParam0->f_77 = func_1112(0, num3);
						flag = true;
					}
				
					func_1113(num3);
				}
			}
			else
			{
				unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, func_372(uParam0->f_77, 1697966752), 0) };
			
				if (func_1111(unk, &num3, &num4, 0))
				{
					if (num4 > 0)
					{
						if (num == 1)
							hash = 2127114599;
						else if (num == 2)
							hash = -1864584831;
						else if (num == 3)
							hash = 1967571132;
					
						for (i = 0; i < num4; i = i + 1)
						{
							hash2 = func_1112(i, num3);
						
							if (func_190(hash2, hash))
							{
								uParam0->f_78 = joaat("cost_crafting_grill");
								uParam0->f_77 = hash2;
								flag = true;
								break;
							}
						}
					}
				
					func_1113(num3);
				}
			}
		}
		else
		{
			acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_77);
			outData.f_4 = 15;
			outData.f_36 = 10;
		
			while (outData.f_2 != joaat("cost_type_craft") || outData == -489628648 || !Global_1911914.f_1579 && func_920(uParam0->f_77, outData, true) && num5 < acquireCostsCount)
			{
				num5 = num5 + 1;
			
				if (bParam1)
					num = num + 1;
				else
					num = num - 1;
			
				if (num < 0)
					num = acquireCostsCount - 1;
				else if (num >= acquireCostsCount)
					num = 0;
			
				ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_77, num, &outData);
			}
		
			uParam0->f_78 = outData;
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eCost", uParam0->f_78);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eOutputItem", uParam0->f_77);
		num6 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iIndex");
	
		if (num6 >= 0 && num6 < Global_1911914)
			hash3 = Global_1911914[num6 /*9*/].f_8;
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant", num);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (num + 1) - hash3);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 1);
	
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_1108(uParam0->f_77));
		func_1104(uParam0, -1, func_551(), uParam0->f_73, false, flag, false);
		func_881(uParam0, uParam0->f_77, uParam0->f_78);
	}

	return;
}

void func_886(var uParam0, BOOL bParam1) // Position - 0x27598 Hash - 0xC48CBE99 ^0x9B4841DC
{
	int num;

	if (bParam1)
		uParam0->f_82 = !uParam0->f_82;

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", uParam0->f_82);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", !uParam0->f_82);

	if (!uParam0->f_82)
	{
		func_157(uParam0->[6], "INFO", true);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_1114(uParam0);
	}
	else
	{
		func_157(uParam0->[6], "INGREDIENTS", true);
		func_1109(uParam0);
	}

	if (uParam0->f_78 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants") <= 1 && uParam0->f_82)
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				num = func_860(uParam0->f_77, uParam0->f_78, func_551(), false);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num));
			}
		}
	}

	return;
}

void func_887(var uParam0) // Position - 0x2767E Hash - 0xE9F9A6C7 ^0x7AD1EFF7
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_1115(uParam0);
	func_880(uParam0);
	func_1114(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", false);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	func_881(uParam0, 0, 0);
	func_45(uParam0, 9);
	return;
}

void func_888(var uParam0, var uParam1) // Position - 0x276D0 Hash - 0x1003DF0E ^0x1B76BC65
{
	func_880(uParam0);
	func_1114(uParam0);
	func_876(uParam0, &(uParam1->f_3));
	return;
}

void func_889(var uParam0) // Position - 0x276EE Hash - 0xA97CE04D ^0xF774D6DC
{
	int num;
	Hash modelHash;
	Hash modelHash2;

	num = func_372(uParam0->f_77, -1636519629);

	if (num == 414472632)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			modelHash = func_1116(uParam0->f_77);
		
			if (modelHash != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(modelHash, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_63, "pl_craft", true);
	}
	else if (num == -1136843638)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "arrow" /*ARROW*/, uParam0->f_86, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_66, "pl_craft", true);
	}
	else if (num == 786205940)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_67, "pl_craft", true);
	}
	else if (num == -715814988)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			modelHash2 = func_1116(uParam0->f_77);
		
			if (modelHash2 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(modelHash2, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), func_1117(uParam0->f_77), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "bullet" /*Bullet*/, uParam0->f_85, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_65, "pl_craft", true);
	}
	else if (num == -732326901)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_68, "pl_craft", true);
	}
	else if (num == -1141771998)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_36, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (num == 364689687)
	{
		uParam0->f_53 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_36, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		{
			uParam0->f_87 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_36, true, true, false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_87, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "RAG", uParam0->f_87, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_70);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_70, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (num == -842117252)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_71, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_71);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_71, "pl_craft", true);
	}
	else if (num == -1610298873)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_72, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_72);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_1106(uParam0->f_77), func_1107(uParam0->f_77)) * 1000f);
		func_31(&(uParam0->f_89));
		TASK::TASK_PLAY_ANIM(Global_35, func_1106(uParam0->f_77), func_1107(uParam0->f_77), 1090519040, -1056964608, -1, 67108880, 0, false, 4096, false, "Satchel_Only_filter", false);
	}

	return;
}

void func_890(var uParam0, BOOL bParam1, var uParam2) // Position - 0x27B41 Hash - 0x366CDE71 ^0x366CDE71
{
	int i;
	int j;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_70(uParam0->[i]))
		{
			for (j = 0; j < *uParam2; j = j + 1)
			{
				if (func_70(uParam2->[j]))
				{
					if (uParam0->[i] == uParam2->[j])
					{
					}
				}
			}
		
			func_84(uParam0->[i], bParam1, true);
		}
	}

	return;
}

BOOL func_891(int iParam0) // Position - 0x27BAA Hash - 0x1DB3839 ^0xDB3801F4
{
	if (iParam0 == -715814988 || iParam0 == -1136843638 || iParam0 == -732326901 || iParam0 == 786205940 || iParam0 == -1141771998 || iParam0 == 364689687 || iParam0 == 414472632 || iParam0 == -842117252 || iParam0 == -1610298873)
		return true;

	return false;
}

AnimScene func_892(var uParam0, int iParam1) // Position - 0x27C32 Hash - 0x10E222E7 ^0xAFCCF99A
{
	switch (iParam1)
	{
		case -1610298873:
			return uParam0->f_72;
	
		case -1141771998:
			return uParam0->f_69;
	
		case -1136843638:
			return uParam0->f_66;
	
		case -842117252:
			return uParam0->f_71;
	
		case -732326901:
			return uParam0->f_68;
	
		case -715814988:
			return uParam0->f_65;
	
		case 364689687:
			return uParam0->f_70;
	
		case 414472632:
			return uParam0->f_63;
	
		case 786205940:
			return uParam0->f_67;
	
		default:
		
	}

	return 0;
}

void func_893(var uParam0, int iParam1, BOOL bParam2) // Position - 0x27CB8 Hash - 0xB154D6F8 ^0xC743CE28
{
	AnimScene animScene;

	uParam0->f_55 = 0;
	func_47(262144);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));

	animScene = func_892(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(animScene, "bStopLoop", true, false);

	if (!func_66(128))
	{
		func_84(uParam0->[2], true, true);
		func_84(uParam0->[4], true, true);
	}

	func_331(uParam0->[2], false, true);
	func_331(uParam0->[4], true, true);
	func_559(uParam0->[1], true);
	func_144(&uParam0->[1], true, true);
	uParam0->[1] = func_81("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	func_83(uParam0->[1], 11, true, true);
	func_83(uParam0->[1], 19, true, true);
	func_82(uParam0->[1], -1067771379, 0, true);
	func_84(uParam0->[1], bParam2, true);
	func_45(uParam0, 13);
	return;
}

int func_894(Hash hParam0) // Position - 0x27DBE Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_121(hParam0, 0))
		return 0;

	category = func_199(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_895(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x27DED Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_86(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_617(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

BOOL func_896(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x27E31 Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_98(false))
		return func_1118(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_617(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_86(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_897(Hash hParam0) // Position - 0x27EA4 Hash - 0x5E6E1858 ^0x6F4DE1DC
{
	!func_121(hParam0, 0);

	if (func_190(hParam0, 162787671))
		return true;

	return false;
}

BOOL func_898(Hash hParam0, var uParam1) // Position - 0x27ECA Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_1119(856287005, hParam0))
		return false;

	unk = { func_566() };
	*uParam1 = func_899(unk, hParam0, false);

	if (!func_121(*uParam1, 0))
		return false;

	return true;
}

Hash func_899(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x27F0C Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_895(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_900(Hash hParam0) // Position - 0x27F3A Hash - 0x37EEAC8A ^0x201FD0EE
{
	if (hParam0 == 263080063 || hParam0 == -34331381 || hParam0 == -993578318 || hParam0 == 579268144 || hParam0 == 1104489688)
		return true;

	return false;
}

BOOL func_901(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x27F8A Hash - 0x7D2A9D5F ^0xA6A7295C
{
	int num;
	int num2;
	var unk;
	var unk19;
	int i;

	if (hParam0 == 0)
		return false;

	unk = { func_607(0, hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };
	func_609(&unk, func_566());

	if (func_610(&unk, &num, &num2, false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_285(&unk19, i, num, num2))
			{
				if (func_121(unk19.f_4, 0) && !unk19.f_10)
				{
					if (bParam2 && func_900(unk19.f_4))
					{
					}
					else
					{
						*uParam1 = { unk19 };
						func_287(num);
						return true;
					}
				}
			}
		}
	
		func_287(num);
	}

	return false;
}

void func_902(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x28043 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_903(Hash hParam0, var uParam1) // Position - 0x28074 Hash - 0x6C0FFC3B ^0xB2795CB6
{
	int i;
	var outSlotId;
	var unk;
	Hash category;
	int num;

	if (hParam0 != 0)
	{
		category = func_199(hParam0);
	
		if (category != 0)
		{
			num = func_1120(hParam0);
		
			for (i = 0; i < num; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
				{
					unk = outSlotId;
				
					if (unk == uParam1)
						return true;
				}
			}
		}
	}

	return false;
}

struct<10> func_904(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x280C8 Hash - 0x440EE211 ^0xAE2816F9
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

	if (hParam4 != 0)
		num.f_4 = hParam4;

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

BOOL func_905(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2819C Hash - 0x72399051 ^0x6D1C1C66
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_121(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam5;
		return false;
	}

	!bParam5;
	*uParam3 = outData.f_3;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam5;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	if (bParam4)
		func_1121(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

struct<4> func_906() // Position - 0x28239 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

float func_907(int iParam0) // Position - 0x28245 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_584(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_908(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_1122(num7) - func_1122(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_908(float fParam0) // Position - 0x282AF Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_909(int iParam0) // Position - 0x2833B Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_910(int iParam0) // Position - 0x28374 Hash - 0xB8632262 ^0xB8632262
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

int func_911(float fParam0, float fParam1) // Position - 0x283F3 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_908(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_1122(num));
	num3 = BUILTIN::TO_FLOAT(func_1122(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_912(int iParam0) // Position - 0x28466 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_1123(iParam0, &num))
		return func_1122(num);

	switch (iParam0)
	{
		case 0:
			if (func_1124())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_1124())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_1124())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_913(int iParam0) // Position - 0x284F2 Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_914(int iParam0, int iParam1, int iParam2) // Position - 0x28524 Hash - 0x29688DE6 ^0xAF3DEA5F
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

	num = num + func_1125(iParam0);
	str3 = func_1127(func_1126(num, iParam2));
	str5 = func_1128(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_1129(iParam0));
	num2 = func_1130(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_1131(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_690(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_1132(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

int func_915(Hash hParam0) // Position - 0x2861C Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_412(outSlotId);
}

BOOL func_916(int iParam0, var uParam1) // Position - 0x2863F Hash - 0x30A0D5A8 ^0x30A0D5A8
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

char* func_917(int iParam0) // Position - 0x28671 Hash - 0x632600A ^0x8DFCBC01
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

char* func_918(int iParam0) // Position - 0x286AA Hash - 0x632600A ^0xBFB40D34
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

int func_919(int iParam0) // Position - 0x286E3 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_920(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x28764 Hash - 0xEAB06984 ^0xE37CC970
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	unk = 10;

	if (bParam2 && func_23() == false && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return false;

	if (!func_1133(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_921(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x287E3 Hash - 0xE3A6DFAD ^0xE3A6DFAD
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	Entity entity;
	int num4;
	int num5;

	unk = 15;

	if (!func_905(hParam0, hParam2, &unk, &num, bParam7, false))
		return false;

	if (func_23() == false && iParam6 != 0)
		return false;

	if (iParam6 != 0)
		bParam5 = false;

	flag = func_98(false);

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_1134(num2))
			goto 0x186;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_1135(num2))
		{
		}
		else
		{
			if (iParam6 != 0)
				num3 = func_1136(unk[i /*2*/], iParam6);
			else
				num3 = func_124(unk[i /*2*/], false, false);
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_321(unk[i /*2*/]) || func_642(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num4 = func_1097(7, unk[i /*2*/], &entity);
					
						num5 = func_1096(unk[i /*2*/], iParam6);
					
						if (num3 + num4 + num5 >= num2)
							if (num3 + num5 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x176;
					}
				
					if (bParam5 && num3 + func_1093(7, unk[i /*2*/]) + func_1091(unk[i /*2*/]) >= num2)
					{
					}
					else
					{
						*uParam3 = { unk[i /*2*/] };
						return false;
					}
				}
			
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_922(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x28976 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_86(false);
	*panParam1 = { func_346(hParam0, func_608(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

int func_923(Hash hParam0, Hash hParam1) // Position - 0x289BB Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

void func_924(int iParam0, int iParam1) // Position - 0x289D5 Hash - 0x26256B16 ^0x79A35F4E
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

BOOL func_925(int iParam0, int iParam1) // Position - 0x28A52 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_1137(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_1138())
		return func_1137(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_1137(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

BOOL func_926(int iParam0, Any anParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x28AC6 Hash - 0xF71B1012 ^0xEF7F4820
{
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	SECURE_STORE(&unk, iParam0);

	if (!NETWORK::_0x271F95E55C663B8B(&unk, anParam1))
		return 0;

	unk2.f_1 = 10;
	unk2.f_14 = 255;
	unk2.f_12 = bParam2;
	unk2.f_14 = iParam3;
	unk2.f_13 = iParam4;
	func_1139(anParam1, iParam0, unk2);
	return 1;
}

Blip func_927(eStackSize essParam0) // Position - 0x28B39 Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_117(essParam0))
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

BOOL func_928(eStackSize essParam0) // Position - 0x28BCC Hash - 0xA89AC49 ^0x69E11C5C
{
	if (func_23() != -1)
		return false;

	if (!func_117(essParam0))
		return false;

	if (Global_1347702[essParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[essParam0 /*49*/].f_13 & 2048 != 0)
		return false;

	if (Global_1347702[essParam0 /*49*/].f_18 > -1f)
		return true;

	return false;
}

void func_929(int iParam0) // Position - 0x28C2F Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_23())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 || iParam0;
			break;
	}

	return;
}

void func_930(eStackSize essParam0) // Position - 0x28C5B Hash - 0x61A76EF4 ^0x86150C0D
{
	if (!func_928(essParam0))
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
					MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			
				func_937(&(Global_1347702[essParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
		
			func_635(&(Global_1347702[essParam0 /*49*/].f_13), 32);
		}
	}

	return;
}

void func_931(eStackSize essParam0) // Position - 0x28CFE Hash - 0xAC04978C ^0x82563A0D
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

eStackSize func_932(eStackSize essParam0) // Position - 0x28D55 Hash - 0x84838E68 ^0x84838E68
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

BOOL func_933(int iParam0) // Position - 0x28DD8 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

BOOL func_934(eStackSize essParam0) // Position - 0x28E01 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_1140(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_1141(essParam0))
			if (BUILTIN::VDIST(Global_36, func_1142(essParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[essParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_1142(essParam0), false) <= func_1143();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[essParam0 /*35*/].f_15, false) <= func_1143();
	}

	return func_197();
}

BOOL func_935(eStackSize essParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x28E91 Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37) && Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[essParam0 /*49*/].f_27 == essParam2;

	return false;
}

void func_936(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x28ED5 Hash - 0x436A2EB9 ^0x436A2EB9
{
	int num;
	eStackSize stackSize;
	Hash styleHash;

	if (!func_119(iParam0))
		return;

	switch (func_1144(iParam0))
	{
		case 1:
			num = func_116(iParam0);
		
			if (func_1145(num, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
				if (func_1146(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_1146(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[num /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[num /*74*/].f_27, styleHash);
			
				if (!func_1147(num))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_632(&Global_1835011[num /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[num /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			stackSize = func_116(iParam0);
		
			if (func_1148(stackSize, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_927(stackSize))
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
				styleHash = func_927(stackSize);
			}
		
			if (Global_1347702[stackSize /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[stackSize /*49*/].f_37, styleHash);
				func_931(stackSize);
				Global_1347702[stackSize /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

void func_937(int iParam0, int iParam1) // Position - 0x290D1 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_938(int iParam0, int iParam1) // Position - 0x290E2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_939(eStackSize essParam0) // Position - 0x290F1 Hash - 0x38C3233C ^0x38C3233C
{
	if (essParam0 == 97 || essParam0 == 99 || essParam0 == 6)
		return true;

	return false;
}

void func_940(eStackSize essParam0, BOOL bParam1) // Position - 0x2911B Hash - 0xD9457448 ^0xD9457448
{
	Global_40.f_490.f_402[essParam0] = Global_40.f_490.f_402[essParam0] || bParam1;
	return;
}

BOOL func_941(eStackSize essParam0, var uParam1) // Position - 0x29140 Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_1149(Global_1347702[essParam0 /*49*/].f_15) != 0)
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

void func_942(var uParam0) // Position - 0x291D6 Hash - 0x2CE00B72 ^0x958A4727
{
	func_640(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_640(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_640(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_943(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x29210 Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_1150(anParam0))
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

int func_944(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x292B1 Hash - 0x83735129 ^0x5FB639F3
{
	Hash hash;
	ItemSet itemset;
	Ped entityFromItem;
	int i;
	int itemsetSize;
	int num;
	var unk;
	var unk2;
	var unk3;
	Ped pedIndexFromEntityIndex;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return iParam2;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (iParam2 == 0)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				func_643(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);
				func_644(&hash, pedIndexFromEntityIndex, num, unk);
			
				if (!func_121(hash, 0))
					hash = func_326(entityFromItem);
			}
			else
			{
				hash = func_326(entityFromItem);
			}
		
			if (hash == hParam1)
			{
				PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
			
				if (bParam3)
				{
					func_1151(entityFromItem);
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

BOOL func_945(BOOL bParam0) // Position - 0x29391 Hash - 0x96106777 ^0x8FA2F1AF
{
	Ped lastMount;

	if (func_23() == -1)
	{
		if (Global_1914319.f_17370 || bParam0 || Global_1914319.f_16855 == 2)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (lastMount != func_204(7))
				return true;
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			lastMount = PED::GET_MOUNT(Global_35);
		
			if (lastMount != func_204(7))
				return true;
		}
	}
	else
	{
		lastMount = PED::_GET_LAST_MOUNT(func_946());
	
		if (lastMount != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			return true;
	}

	return false;
}

Ped func_946() // Position - 0x2941C Hash - 0x14A4F660 ^0xC2F042AC
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_947(int iParam0, Hash hParam1) // Position - 0x2942A Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_121(hParam1, 0))
		return 0;

	guid = { func_1152(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_948(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x29468 Hash - 0x4239382B ^0xCA53D4CD
{
	int inventoryIdFromPed;
	int num;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);

	if (func_1153(pedParam0))
	{
		num = func_1154(pedParam0);
	
		if (func_121(hParam1, 0))
			if (func_949(hParam1))
				func_1155(num, hParam1, iParam2);
	}

	return func_1156(inventoryIdFromPed, hParam1, iParam2, bParam3, hParam4);
}

BOOL func_949(Hash hParam0) // Position - 0x294B4 Hash - 0x32CFAC25 ^0x32CFAC25
{
	int i;
	int num;
	Hash hash;

	if (!func_580(hParam0))
		return false;

	for (i = 0; i < 57; i = i + 1)
	{
		num = func_1157(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

int func_950(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x294F6 Hash - 0x40489E01 ^0xFB04AC2C
{
	int i;
	Hash peltId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return iParam2;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	peltId = hParam1;

	for (i = 2; i >= 0; i = i + -1)
	{
		if (PED::_GET_PELT_FROM_HORSE(pedParam0, i) == peltId)
		{
			PED::_CLEAR_PELT_FROM_HORSE(pedParam0, peltId);
			iParam2 = iParam2 - 1;
		}
	
		if (iParam2 <= 0)
			break;
	}

	return iParam2;
}

BOOL func_951(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x2955E Hash - 0xD12DD6C0 ^0x9850E73C
{
	var statId;

	statId = { func_436(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);

	func_1158(hParam0, iParam1);
	return func_1159(hParam0, iParam1, bParam2, hParam3);
}

int func_952() // Position - 0x29595 Hash - 0x3CF9FC4B ^0x3543A441
{
	return 16596983;
}

int func_953() // Position - 0x295A1 Hash - 0x3CF9FC4B ^0x5CAD57E5
{
	return 16662519;
}

BOOL func_954(BOOL bParam0) // Position - 0x295AD Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_955(BOOL bParam0) // Position - 0x295BD Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

BOOL func_956(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x295CE Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_957(Ped pedParam0) // Position - 0x295F7 Hash - 0xF2F988FE ^0xA63CD631
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

BOOL func_958(BOOL bParam0) // Position - 0x296DF Hash - 0xC93D526E ^0x382DF70
{
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_HOGTYING(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_LASSOED(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, true);
	
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

BOOL func_959(BOOL bParam0) // Position - 0x297BE Hash - 0xC93D526E ^0xE4D07944
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_957(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_FALLING_OVER(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_960(BOOL bParam0) // Position - 0x29902 Hash - 0x135152DF ^0xE0910569
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
			func_201("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_961(Player plParam0, BOOL bParam1) // Position - 0x2992E Hash - 0xFD261A1 ^0x4B67E558
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
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_964(animal))
	{
		if (bParam1)
			func_201("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_201("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_962(Player plParam0, BOOL bParam1) // Position - 0x299E1 Hash - 0x76B65421 ^0x4204B070
{
	Player outEntity;
	Player animal;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, false, false))
	{
		if (!func_964(outEntity))
		{
			if (bParam1)
				func_201("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_201("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (func_1161(outEntity, true, true) > 2f)
		{
			if (bParam1)
				func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity)))
		{
			if (bParam1)
				func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return false;
		}
	
		return true;
	}

	animal = plParam0;

	if (!func_964(animal))
	{
		if (bParam1)
			func_201("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (TASK::IS_PED_IN_WRITHE(animal))
	{
		if (bParam1)
			func_201("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, animal))
	{
		if (bParam1)
			func_201("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_963() // Position - 0x29B16 Hash - 0xA095694D ^0x506AFF8
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

BOOL func_964(Player plParam0) // Position - 0x29B81 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(plParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(plParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_965(int iParam0) // Position - 0x29BB3 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_23())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

BOOL func_966() // Position - 0x29BDE Hash - 0x58084EE7 ^0xBF593B34
{
	int num;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
		return false;

	num = func_1162(Global_36, false);

	if (num >= 8 && num <= 12)
		return true;

	return false;
}

BOOL func_967() // Position - 0x29C18 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_968(int iParam0) // Position - 0x29C26 Hash - 0xA059D395 ^0xE5C5C571
{
	return func_128(Global_1935496.f_7, iParam0);
}

Entity func_969(Ped pedParam0) // Position - 0x29C3A Hash - 0x3D354C79 ^0x6A3F9034
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

BOOL func_970(int iParam0) // Position - 0x29C9A Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_23())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

BOOL func_971(eStackSize essParam0, BOOL bParam1) // Position - 0x29CC5 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL func_972(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x29CF8 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

BOOL func_973(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x29D2E Hash - 0x97B2D4F4 ^0x726D5358
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_1163(i))
			if (BUILTIN::VDIST(func_1164(i), vParam0) < fParam3)
				return true;
	}

	return false;
}

BOOL func_974(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x29D6A Hash - 0x79B25540 ^0x79B25540
{
	int i;

	for (i = 0; i < Global_40.f_450; i = i + 1)
	{
		if (Global_40.f_450[i] > -1 && Global_40.f_450[i] < 200)
			if (BUILTIN::VDIST(func_1165(Global_40.f_450[i]), vParam0) < fParam3)
				return true;
		else
			break;
	}

	return false;
}

BOOL func_975(int iParam0, var uParam1) // Position - 0x29DD1 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_1166(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_976() // Position - 0x29DFE Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_1167(Global_40.f_12019);
}

int func_977() // Position - 0x29E10 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_761(i);
	
		if (func_25(hash, 1, false) || func_983(func_982(hash)))
			num = num + 1;
	}

	return num;
}

int func_978() // Position - 0x29E59 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_1168(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_979() // Position - 0x29E92 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_988(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_980() // Position - 0x29ECB Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_981(int iParam0) // Position - 0x29EDD Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_982(Hash hParam0) // Position - 0x29F96 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_983(BOOL bParam0) // Position - 0x2A02C Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_984(int iParam0) // Position - 0x2A03F Hash - 0x21CE226B ^0x234DDF58
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

int func_985(int iParam0) // Position - 0x2A07A Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_986(int iParam0) // Position - 0x2A0BF Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x2A108 Hash - 0xA17D549C ^0xC1F599DE
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

BOOL func_988(Hash hParam0) // Position - 0x2A216 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x2A226 Hash - 0xA17D549C ^0xA7861DF5
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

char* func_990(int iParam0) // Position - 0x2A2E3 Hash - 0x21CE226B ^0x2EA2CE93
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

BOOL func_991(Hash hParam0) // Position - 0x2A31E Hash - 0x5C411CF ^0x5C411CF
{
	if (func_1169(hParam0) && func_25(hParam0, 1, false))
		return 1;
	else if (func_1170(hParam0) && func_1171(hParam0))
		return 1;

	return 0;
}

char* func_992(Hash hParam0) // Position - 0x2A35C Hash - 0x9E507475 ^0x2AB528BD
{
	if (!func_121(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_492(hParam0));
}

int func_993(int iParam0) // Position - 0x2A380 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_994(int iParam0) // Position - 0x2A392 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

float func_995(int iParam0, int iParam1) // Position - 0x2A3A6 Hash - 0x882BA7B3 ^0xDE52A593
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

void func_996(int iParam0, BOOL bParam1) // Position - 0x2A45B Hash - 0x9D46840B ^0xDAAD5146
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

void func_997(int iParam0) // Position - 0x2A4CC Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_23() != -1)
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

float func_998(int iParam0, float fParam1) // Position - 0x2A509 Hash - 0xDF35DF4B ^0x834D2C65
{
	return func_235(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_999(int iParam0) // Position - 0x2A51D Hash - 0xBA965109 ^0xA132DCEE
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

void func_1000(int iParam0, BOOL bParam1) // Position - 0x2A80C Hash - 0x94511870 ^0x94511870
{
	if (!func_1001(iParam0))
		return;

	if (func_23() != -1)
	{
		Global_36638[iParam0] = Global_36638[iParam0] || bParam1;
		return;
	}

	Global_40.f_9274[iParam0] = Global_40.f_9274[iParam0] || bParam1;
	return;
}

BOOL func_1001(int iParam0) // Position - 0x2A854 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_1002(int iParam0) // Position - 0x2A861 Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_1001(iParam0))
		return false;

	return func_1172(iParam0, 4, true);
}

void func_1003(int iParam0, BOOL bParam1) // Position - 0x2A87F Hash - 0x2762FC5A ^0x2762FC5A
{
	if (!func_1001(iParam0))
		return;

	if (func_1173(iParam0))
		return;

	func_1000(iParam0, 2);

	if (bParam1)
		if (!func_18(0, false, true))
			func_101(true, 6);

	return;
}

BOOL func_1004(int iParam0) // Position - 0x2A8BD Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_1001(iParam0))
		return false;

	return func_1172(iParam0, true, true);
}

void func_1005(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2A8DB Hash - 0xD71C2102 ^0xD71C2102
{
	if (!func_1001(iParam0))
		return;

	if (func_1004(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_1174(iParam0);

	if (!bParam1)
	{
		if (func_23() != -1)
		{
		}
		else
		{
			func_1175(iParam0);
		}
	}

	func_1000(iParam0, true);

	if (func_23() == -1)
		func_1176(iParam0, func_270());

	func_1003(iParam0, true);

	if (bParam2)
		if (!func_18(0, false, true))
			func_101(true, 6);

	return;
}

float func_1006(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2A95A Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_1007() // Position - 0x2A9A2 Hash - 0xFF29F962 ^0xFF29F962
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

Hash func_1008(Hash hParam0) // Position - 0x2AA47 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_413(func_915(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

int func_1009() // Position - 0x2AA76 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_199(hash) == -999503751)
			if (func_1177() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_1010(Hash hParam0, BOOL bParam1) // Position - 0x2AAC7 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_296(hParam0, false, false) };
	guid = { func_346(hParam0, unk, unk.f_4, false) };

	if (func_419(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_86(false), &guid, bParam1);
	return true;
}

void func_1011(var uParam0, Hash hParam1, int iParam2) // Position - 0x2AB13 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_1178(iParam2, *uParam0);
	func_1179(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

int func_1012(Hash hParam0) // Position - 0x2AB49 Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_1013(int iParam0) // Position - 0x2AB99 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_1014(int iParam0) // Position - 0x2ABB1 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_1015(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2ABC2 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_199(hParam0))
	{
		case -2061583405:
			flag = func_1180(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_1180(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_1180(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_1180(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_1180(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_1180(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_732();

	if (bParam1)
		func_734(false, false);

	return;
}

void func_1016(int iParam0, int iParam1) // Position - 0x2AC8F Hash - 0x19A9221A ^0x79EEA925
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
			if (func_1181(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1181(&iParam0->f_2[i /*2*/], 1))
					func_1182(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_1017(int iParam0, int iParam1, int iParam2) // Position - 0x2ADBB Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_1183(iParam0, 1))
		func_1184(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_1018(int iParam0, int iParam1) // Position - 0x2AE02 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_1019(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2AE1B Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_740(num2, num);
	
		if (bParam1)
			func_740(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_740(num3, num);
	}

	return;
}

BOOL func_1020(int iParam0) // Position - 0x2AF07 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_731();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_1021(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x2AF2D Hash - 0x3A135443 ^0x969430D9
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

BOOL func_1022(Hash hParam0, int iParam1, var uParam2) // Position - 0x2AF71 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_1023(int iParam0, int iParam1) // Position - 0x2AF82 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_413(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_1024(var uParam0) // Position - 0x2AFA0 Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_1025(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2AFEB Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_23() == -1)
		func_1185(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_1186(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_1026(BOOL bParam0, eStackSize essParam1) // Position - 0x2B061 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_23() == -1)
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

Hash func_1027(eStackSize essParam0) // Position - 0x2B0DE Hash - 0xB8EC44B7 ^0xE877E9C4
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

void func_1028(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x2B613 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_1187(&(Global_1946054.f_1378), essParam0);
	func_1188(2, essParam0, 6);

	if (bParam1)
		func_734(false, true);

	return;
}

int func_1029() // Position - 0x2B63B Hash - 0x4228A1C2 ^0x4EB570BC
{
	return Global_1051081.f_11;
}

char* func_1030() // Position - 0x2B649 Hash - 0x306ACA3A ^0x7073365F
{
	return "unnamed";
}

BOOL func_1031(int iParam0) // Position - 0x2B655 Hash - 0xC360B8E6 ^0xCBE2AF9D
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

int func_1032(int iParam0) // Position - 0x2B6E4 Hash - 0x322F9962 ^0x249D071F
{
	if (iParam0 == 255)
		return Global_1109000.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 25;

	if (Global_1224589.f_16[iParam0])
		return Global_1108108[iParam0 /*27*/].f_1;

	return 25;
}

BOOL func_1033(Player plParam0) // Position - 0x2B72F Hash - 0x5FB1BEA6 ^0x62CB8856
{
	if (func_1189(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) != 1)
			func_1190(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, plParam0) == 1;
}

BOOL func_1034(var uParam0) // Position - 0x2B768 Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

int func_1035(Hash hParam0, int iParam1, int iParam2) // Position - 0x2B77D Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_794(hash);
	num3 = func_794(hash2);
	num4 = func_794(hash3);

	if (iParam2 != 2)
		num5 = func_794(hash4);

	num6 = func_795(hash);
	num7 = func_795(hash2);
	num8 = func_795(hash3);

	if (iParam2 != 2)
		num9 = func_795(hash4);

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

int func_1036(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x2B8F6 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_121(hParam0, 0))
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

void func_1037(BOOL bParam0) // Position - 0x2B944 Hash - 0xB584A39F ^0xFC4CA802
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

void func_1038(int iParam0) // Position - 0x2B982 Hash - 0x2EDDC601 ^0xD5F96979
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

void func_1039(BOOL bParam0) // Position - 0x2B9F0 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_1040(BOOL bParam0) // Position - 0x2BA2A Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_1041(BOOL bParam0) // Position - 0x2BA64 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_1042(BOOL bParam0) // Position - 0x2BA9E Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_1043(BOOL bParam0) // Position - 0x2BAC1 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_1044(BOOL bParam0) // Position - 0x2BB03 Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_1045(int iParam0) // Position - 0x2BB45 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_413(iParam0, 1) /*3*/];
}

void func_1046() // Position - 0x2BB6D Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1191();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_254(joaat("weapon_revolver_cattleman_john"));
		func_498(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_254(joaat("weapon_melee_knife_john"));
		func_498(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

Hash func_1047(int iParam0) // Position - 0x2BBE5 Hash - 0xB8EC44B7 ^0xD4FF48D5
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

Hash func_1048(Hash hParam0) // Position - 0x2BD62 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_1192(hParam0, -1);
}

BOOL func_1049() // Position - 0x2BD71 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_774())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_1050(int iParam0) // Position - 0x2BD88 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_1193(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_1051(int iParam0, const char* sParam1, int iParam2) // Position - 0x2BDBC Hash - 0x56940320 ^0xFE640CB2
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_1049())
		func_577(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_577(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_1052(Hash hParam0) // Position - 0x2BE28 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_1053(int iParam0) // Position - 0x2BE38 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_1194(iParam0, 1);
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

void func_1054(int iParam0) // Position - 0x2BED1 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_1194(iParam0, 1);
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

void func_1055() // Position - 0x2BF57 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_1054(-939420910);
	func_1054(-1187950766);
	func_1054(356365161);
	func_1054(753127042);
	func_1054(-2038424081);
	func_1054(1884271742);
	func_1054(459290420);
	return;
}

void func_1056() // Position - 0x2BF9E Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_1054(704802028);
	func_1054(588987611);
	func_1054(2008888900);
	func_1054(1649996811);
	func_1054(227918160);
	func_1054(168171957);
	func_1054(1193080109);
	func_1054(-491981251);
	func_1054(-639037538);
	func_1054(-618620429);
	return;
}

BOOL func_1057(int iParam0) // Position - 0x2C000 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_1194(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_1058(Hash hParam0) // Position - 0x2C04F Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_1059(Hash hParam0) // Position - 0x2C05F Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_1060(int iParam0) // Position - 0x2C0A4 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_1061(Hash hParam0) // Position - 0x2C0BF Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_1062() // Position - 0x2C0CF Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_1063() // Position - 0x2C0EB Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_512(13);
	num2 = func_514(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_1064() // Position - 0x2C12E Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_1065() // Position - 0x2C149 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_774())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_1066() // Position - 0x2C168 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_1067() // Position - 0x2C1AA Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_1068(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2C1B8 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_1084(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_1069(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2C204 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_1084(iParam0, 2, false, false);
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

BOOL func_1070() // Position - 0x2C34A Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_512(12) <= -99f;
}

BOOL func_1071() // Position - 0x2C35E Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_512(12) >= 99f;
}

BOOL func_1072(eStackSize essParam0) // Position - 0x2C372 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_707(essParam0))
		return false;

	if (func_708(essParam0, 2))
		return true;

	return false;
}

void func_1073(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2C397 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_707(essParam0))
		return;

	if (!func_1072(essParam0))
	{
		func_1075(essParam0, 2);
	
		if (bParam2)
			if (!func_18(0, false, true))
				func_101(true, 4);
	
		if (!func_1074() && !bParam1 && !func_18(0, false, true))
			func_201(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1195(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

BOOL func_1074() // Position - 0x2C40C Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_1075(eStackSize essParam0, BOOL bParam1) // Position - 0x2C42C Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_707(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

void func_1076(Hash hParam0, BOOL bParam1) // Position - 0x2C458 Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_1196(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_456(50);
			else
				func_456(48);
			break;
	
		case 1:
			if (bParam1)
				func_456(51);
			else
				func_456(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_1197(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_479();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_479();
			}
			break;
	
		case 3:
			func_456(24);
		
			if (bParam1)
			{
				if (!func_1197(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_479();
				}
			}
			break;
	}

	return;
}

void func_1077(int iParam0) // Position - 0x2C537 Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1198(0))
				num = num + 1;
		
			if (func_1198(2))
				num = num + 1;
		
			if (func_1198(4))
				num = num + 1;
		
			if (!func_1199(16))
			{
				if (num == 1)
				{
					func_1200();
					func_63(456, true);
					func_1201(16);
				}
			}
		
			if (!func_1199(32))
			{
				if (num >= 3)
				{
					func_1200();
					func_63(456, true);
					func_1201(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_1198(1))
				num = num + 1;
		
			if (func_1198(3))
				num = num + 1;
		
			if (func_1198(7))
				num = num + 1;
		
			if (!func_1199(1))
			{
				if (num == 1)
				{
					func_1202();
					func_63(457, true);
					func_1201(1);
				}
			}
		
			if (!func_1199(2))
			{
				if (num >= 3)
				{
					func_1202();
					func_63(457, true);
					func_1201(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_1198(5))
				num = num + 1;
		
			if (func_1198(6))
				num = num + 1;
		
			if (func_1198(8))
				num = num + 1;
		
			if (!func_1199(4))
			{
				if (num == 1)
				{
					func_1203();
					func_63(455, true);
					func_1201(4);
				}
			}
		
			if (!func_1199(8))
			{
				if (num >= 3)
				{
					func_1203();
					func_63(455, true);
					func_1201(8);
				}
			}
			break;
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_1078(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x2C6CE Hash - 0x92B705D3 ^0xB783F681
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

int func_1079() // Position - 0x2C7C4 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_629())
		return 1;

	return 0;
}

void func_1080(int iParam0, int iParam1, int iParam2) // Position - 0x2C7D8 Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_1079();

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

void func_1081(Ped pedParam0, int iParam1, float fParam2) // Position - 0x2C829 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_831(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_1204(iParam1), fParam2, -1);

	return;
}

void func_1082(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x2C855 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_1079();

	gameTimer = MISC::GET_GAME_TIMER();
	func_1205(iParam0, fParam1, iParam3);

	if (bParam2)
		func_1206(iParam0, gameTimer, iParam3);

	return;
}

BOOL func_1083(Hash hParam0) // Position - 0x2C888 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_536(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_535(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_534(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_531(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_532(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_533(hParam0);

	if (num6 < 1 || num6 > func_537(num5, num4))
		return false;

	return true;
}

char* func_1084(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2C964 Hash - 0xC24B5846 ^0xBC7F5E5
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

BOOL func_1085(int iParam0, int iParam1, int iParam2) // Position - 0x2CA0D Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return 0;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return 0;

	if (iParam1 == iParam2)
		return 1;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return 1;

	if (!flag)
		return 0;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return 1;

	return 0;
}

BOOL func_1086(Hash hParam0) // Position - 0x2CAB6 Hash - 0x8EDDF1C2 ^0x8EDDF1C2
{
	switch (func_199(hParam0))
	{
		case -2061583405:
			return true;
	
		case -1719060085:
			return true;
	
		case -999503751:
			return true;
	
		case -525676072:
			return true;
	
		case -413129408:
			return true;
	
		case 81053684:
			return true;
	
		default:
		
	}

	return false;
}

void func_1087(int iParam0, int iParam1, int iParam2) // Position - 0x2CB07 Hash - 0x7CD806BE ^0xAA6614A5
{
	Global_1946054.f_2377[func_413(iParam0, 1) /*2*/].f_1 = Global_1946054.f_2377[func_413(iParam0, 1) /*2*/].f_1 || iParam1;
	return;
}

void func_1088(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2CB36 Hash - 0x144F6B91 ^0x144F6B91
{
	func_1207(iParam0);

	if (bParam3)
		func_1208(iParam0, sParam1, iParam2);

	return;
}

int func_1089(int iParam0, Hash hParam1, int iParam2) // Position - 0x2CB53 Hash - 0xFBFC702 ^0xFBFC702
{
	Ped ped;
	ItemSet itemset;
	int itemsetSize;
	var unk;
	int num;
	int i;
	Ped entityFromItem;
	int j;
	Hash hash;
	Hash hash2;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_121(hParam1, 0))
		return 0;

	if (!func_1209(iParam0))
		return 0;

	ped = func_204(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_1 = 10;
	unk.f_12 = 10;
	num = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (num >= iParam2)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!func_1210(entityFromItem))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), true, true, ENTITY::GET_ENTITY_MODEL(entityFromItem), &unk, 0);
		
			for (j = 0; j < 10; j = j + 1)
			{
				hash = unk.f_1[j];
			
				if (hash == hParam1)
				{
					func_498(hParam1, 1, 752097756);
				
					if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
					{
						hash2 = func_325(entityFromItem);
					
						if (!func_121(hash2, 0))
							hash2 = func_326(entityFromItem);
					
						if (func_121(hash2, 0))
							func_327(hash2, 1, true, -142743235, false);
					
						ENTITY::_DELETE_CARRIABLE(&entityFromItem);
					}
				
					num = num + 1;
				}
			}
		}
	}

	if (ITEMSET::IS_ITEMSET_VALID(itemset))
		ITEMSET::DESTROY_ITEMSET(itemset);

	return num;
}

void func_1090(Hash hParam0, int iParam1) // Position - 0x2CCC6 Hash - 0xF788DCE ^0xB69D967B
{
	int num;
	int num2;
	var unk;
	int num3;
	Hash hash;
	int i;
	int j;

	if (iParam1 > 0)
	{
		unk = -1;
		unk.f_1 = -1;
		unk.f_2 = -1;
		unk.f_3 = -1;
		unk.f_4 = -1;
		unk.f_5 = -1;
		unk.f_6 = -1;
		unk.f_7 = -1;
		unk.f_8 = -1;
		num3 = func_372(hParam0, 1697966752);
	
		if (num3 == 0)
			return;
	
		unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num3, 0) };
	
		if (func_1111(unk, &num, &num2, 0))
		{
			for (i = 0; i < num2; i = i + 1)
			{
				if (iParam1 <= 0)
					break;
			
				hash = func_1112(i, num);
			
				if (func_121(hash, 0) && hParam0 != hash)
				{
					for (j = func_124(hash, false, false); j > 0 && iParam1 > 0; j = j - 1)
					{
						iParam1 = iParam1 - func_1211(hash, hParam0);
					}
				}
			}
		
			func_1113(num);
		}
	}

	return;
}

int func_1091(Hash hParam0) // Position - 0x2CDC2 Hash - 0x3CFC8FF5 ^0xC9DF94B0
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_121(hParam0, 0))
		return 0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			if (hParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(firstEntityPedIsCarrying))
				num = num + 1;
	}

	return num;
}

void func_1092(Hash hParam0) // Position - 0x2CE14 Hash - 0x4C927607 ^0x7C031F72
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;
	var unk;
	int num;
	int i;
	Hash hash;
	int num2;
	var unk12;
	var unk13;
	var unk14;

	!func_121(hParam0, 0);

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
		
			if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			{
				unk = 10;
				num = func_1212(pedIndexFromEntityIndex, &unk);
			
				for (i = 0; i < num; i = i + 1)
				{
					if (unk[i] == hParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
						break;
					}
				}
			}
			else
			{
				func_643(pedIndexFromEntityIndex, &unk12, &unk13, &num2, &unk14);
			
				if (func_644(&hash, pedIndexFromEntityIndex, num2, unk12) && hash == hParam0)
					ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
			}
		}
	}

	return;
}

int func_1093(int iParam0, Hash hParam1) // Position - 0x2CEBB Hash - 0x9B281D8A ^0x9B281D8A
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_121(hParam1, 0))
		return 0;

	if (!func_1209(iParam0))
		return 0;

	horse = func_204(iParam0);
	hash = hParam1;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return 0;

	if (PED::IS_PED_INJURED(horse))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(horse))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (PED::_GET_PELT_FROM_HORSE(horse, i) != hash)
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_1094(int iParam0, Hash hParam1, int iParam2) // Position - 0x2CF59 Hash - 0xFBFC702 ^0xFBFC702
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_121(hParam1, 0))
		return 0;

	if (!func_1209(iParam0))
		return 0;

	horse = func_204(iParam0);
	hash = hParam1;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return 0;

	if (PED::IS_PED_INJURED(horse))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(horse))
		return 0;

	num = 0;

	for (i = 0; i < iParam2; i = i + 1)
	{
		if (PED::_GET_PELT_FROM_HORSE(horse, i) != hash)
		{
		}
		else if (func_1159(hParam1, iParam2, true, -142743235))
		{
			num = num + 1;
		}
	}

	return num;
}

int func_1095(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x2D00F Hash - 0x4DB90AB5 ^0x4DB90AB5
{
	var unk;
	var unk6;

	if (func_23() == false)
		return 0;

	if (!func_121(hParam0, 0))
		return 0;

	if (iParam2 < 1)
		return 0;

	unk = { func_583(false) };
	unk.f_4 = func_582(iParam1);
	unk6 = { func_346(hParam0, unk, unk.f_4, false) };

	if (!func_347(hParam0, &unk6, &unk, iParam2, hParam3, false, false))
		return 0;

	return 1;
}

int func_1096(Hash hParam0, int iParam1) // Position - 0x2D07B Hash - 0x7A47071E ^0x7A47071E
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	Hash hash;
	int i;
	Hash hash2;
	int num5;

	if (!func_121(hParam0, 0))
		return 0;

	if (!func_321(hParam0) && !func_642(hParam0))
		return 0;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	num4 = func_372(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_1111(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_1112(i, num2);
		
			if (func_121(hash, 0) && hParam0 != hash)
			{
				hash2 = func_1213(hash);
			
				if (hash2 != 0)
				{
					if (iParam1 != 0)
						num5 = func_1136(hash, iParam1);
					else
						num5 = func_124(hash, false, false);
				
					if (num5 > 0)
						num = num + (num5 * func_1215(hash2, func_1214(hash), hParam0));
				}
			}
		}
	
		func_1113(num2);
	}

	return num;
}

int func_1097(int iParam0, Hash hParam1, var uParam2) // Position - 0x2D1AB Hash - 0xFBFC702 ^0xFBFC702
{
	Ped ped;
	ItemSet itemset;
	int itemsetSize;
	var unk;
	int num;
	int i;
	Entity entityFromItem;
	int j;
	Hash hash;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_121(hParam1, 0))
		return 0;

	if (!func_1209(iParam0))
		return 0;

	ped = func_204(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_1 = 10;
	unk.f_12 = 10;
	num = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!func_1210(entityFromItem))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), true, true, ENTITY::GET_ENTITY_MODEL(entityFromItem), &unk, 0);
		
			for (j = 0; j < 10; j = j + 1)
			{
				hash = unk.f_1[j];
			
				if (hash == hParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
						*uParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				
					num = num + 1;
				}
			}
		}
	}

	if (ITEMSET::IS_ITEMSET_VALID(itemset))
		ITEMSET::DESTROY_ITEMSET(itemset);

	return num;
}

BOOL func_1098(int iParam0) // Position - 0x2D2D8 Hash - 0x3FBD8F15 ^0xE5437CE8
{
	if (!func_1216(iParam0))
		return false;

	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_1217(iParam0, 1));
}

void func_1099(int iParam0) // Position - 0x2D302 Hash - 0x9F8F0F90 ^0x2EEF429D
{
	if (!func_1216(iParam0))
		return;

	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_1217(iParam0, 1));
	return;
}

int func_1100(var uParam0, Hash hParam1) // Position - 0x2D32B Hash - 0x55C2A1B3 ^0xA4CE5F7D
{
	var unk;
	int num;
	int num2;
	int i;
	Hash hash;

	unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, hParam1, 0, -1, Global_1911914.f_1584, 0) };

	if (func_1111(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_1112(i, num);
		
			if (func_121(hash, 0))
			{
				if (uParam0->f_55 >= 175)
					break;
			
				if (Global_1911914.f_1584 == 0 && func_190(hash, 302810039))
				{
					if (!(Global_1911914.f_1585 != 0 && func_190(hash, Global_1911914.f_1585)))
					{
					}
					else if (func_190(hash, 266762988))
					{
					}
					else
					{
						func_1218(uParam0, hash, hParam1);
						func_1219(uParam0, hash, hParam1);
					}
				}
			
				if (func_190(hash, 266762988))
				{
				}
				else
				{
					func_1218(uParam0, hash, hParam1);
					func_1219(uParam0, hash, hParam1);
				}
			}
		}
	
		func_1220(&num);
		return 1;
	}

	return 0;
}

Hash func_1101(int iParam0) // Position - 0x2D409 Hash - 0xD9CACD5C ^0xC5E4F827
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
	
		case 1:
			return 461149715;
	
		case 2:
			return 210507310;
	
		case 3:
			return -1182908601;
	
		case 4:
			return 1647118377;
	
		case 5:
			return -867280435;
	
		default:
		
	}

	return 0;
}

void func_1102(var uParam0, const char* sParam1, var uParam2) // Position - 0x2D46E Hash - 0xAF661474 ^0xC6A4A44A
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_39, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
	return;
}

void func_1103(var uParam0, BOOL bParam1, Hash hParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2D4D7 Hash - 0xEA985CC9 ^0x769B0F99
{
	Hash hash;

	hash = Global_1911914[hParam2 /*9*/].f_6;

	if (bParam4 || func_259(hash, uParam0->f_52))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[hParam2 /*9*/].f_1))
			{
				if (bParam5)
					func_1104(uParam0, -1, bParam3, Global_1911914[hParam2 /*9*/].f_1, true, false, true);
			
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, uParam0->f_56, joaat("crafting_list_item"), Global_1911914[hParam2 /*9*/].f_1);
			}
			else
			{
				func_1221(uParam0, hParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[hParam2 /*9*/].f_1))
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[hParam2 /*9*/].f_1);
		
			func_1221(uParam0, hParam2, false, bParam3);
		}
	
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = Global_1911914[hParam2 /*9*/].f_6;
			uParam0->f_76 = Global_1911914[hParam2 /*9*/].f_5;
			uParam0->f_74 = Global_1911914[hParam2 /*9*/].f_1;
		}
	
		uParam0->f_56 = uParam0->f_56 + 1;
	}

	return;
}

void func_1104(var uParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2D5C4 Hash - 0xCD6168C8 ^0x22E3A03C
{
	Hash entryId;
	Hash hash;
	Hash hash2;
	Hash key;
	Hash hash3;
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	BOOL flag;
	Hash hash4;
	Hash hash5;
	int num5;
	BOOL flag2;
	const char* str;
	int outData;
	BOOL flag3;
	int i;
	var outData2;
	int num6;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hParam3))
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(hParam3, "iIndex");

	entryId = Global_1911914[iParam1 /*9*/].f_1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(entryId))
		return;

	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eOutputItem");
	hash2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eCost");
	key = hash;
	hash3 = hash2;
	num = func_860(key, hash3, bParam2, false);
	num2 = func_124(key, false, false);
	num3 = func_859(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	TEXT_LABEL_APPEND_INT(&unk, func_861(num3, num), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "count", &unk);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "visible", false);

	if (func_56(4096))
		num4 = num3 > 0 && num > 0 && func_372(key, 1697966752) == 337650881 ? 1 : 0;
	else if (func_56(8192))
		num4 = num3 > 0 && num > 0 && key == joaat("consumable_potent_predator_bait") ? 1 : 0;
	else
		num4 = num3 > 0 && num > 0 ? 1 : 0;

	flag = false;

	if (num4 == 0 && func_1222(key))
	{
		if (func_1223(key, hash3, uParam0, bParam2, &hash4, &hash5, &num5))
		{
			num4 = 1;
			flag = true;
		
			if (bParam6)
			{
				key = hash4;
				hash3 = hash5;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "name", hash4);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "eOutputItem", hash4);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "eCost", hash5);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "iCurCostVariant", num5);
				bParam5 = true;
			}
		}
	}

	if (!uParam0->f_31)
		if (hash3 == -214678071 || hash3 == joaat("cost_crafting_grill") || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
			num4 = 0;
	else if (!uParam0->f_32 && hash3 == joaat("cost_crafting_grill"))
		num4 = 0;

	if (!Global_1911914.f_1579 && func_920(key, hash3, true))
	{
		num4 = 0;
		flag2 = true;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "lockVisible", flag2);

	if (num4 == 1)
	{
		if (!uParam0->f_83 || uParam0->f_84 > 0 && func_372(key, -1636519629) == -701492487)
		{
			Global_1911914[iParam1 /*9*/].f_2 = 0;
			num4 = 0;
		}
		else
		{
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (uParam0->f_57 && num4 == 0 && Global_1911914[iParam1 /*9*/].f_2 && bParam4)
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_40, entryId);
	
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}

	if (bParam5)
	{
		if (func_575(key, &str, joaat("Inventory"), 0, 0, 0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "texture", str);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "textureDictionary", str.f_1);
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "name", key);
		outData.f_1 = 20;
		flag3 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaHorseDurationCategory", 0);
	
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData))
		{
			for (i = 0; i < outData; i = i + 1)
			{
				if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
				{
					num6 = outData2.f_2;
				
					switch (outData2.f_1)
					{
						case joaat("EFFECT_HORSE_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCoreHorse", num6);
							break;
					
						case -1240225157:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "stamina" /*Stamina*/, 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaDurationCategory", outData2.f_6);
							break;
					
						case joaat("Effect_Stamina_Core_Gold"):
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreDurationCategory", outData2.f_6);
							break;
					
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeye", num6);
							break;
					
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "health", num6);
							break;
					
						case joaat("Effect_Deadeye_Core_Gold"):
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeCoreDurationCategory", outData2.f_6);
							break;
					
						case -778289619:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthHorseDurationCategory", outData2.f_6);
							break;
					
						case joaat("EFFECT_HEALTH_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCore", num6);
							break;
					
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "stamina" /*Stamina*/, num6);
							break;
					
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCoreHorse", num6);
							break;
					
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthHorse", num6);
							break;
					
						case 1136630075:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreHorseDurationCategory", outData2.f_6);
							break;
					
						case 1342237631:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "deadeyeDurationCategory", outData2.f_6);
							break;
					
						case 1365603835:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaCoreHorseDurationCategory", outData2.f_6);
							break;
					
						case 1497139093:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "staminaHorseDurationCategory", outData2.f_6);
							break;
					
						case joaat("EFFECT_STAMINA_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "staminaCore", num6);
							break;
					
						case joaat("EFFECT_DEADEYE_CORE"):
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "deadeyeCore", num6);
							break;
					
						case 1869697234:
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthDurationCategory", outData2.f_6);
							break;
					
						case joaat("Effect_Health_Core_Gold"):
							flag3 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(entryId, "healthCoreDurationCategory", outData2.f_6);
							break;
					}
				}
			}
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "overpower", flag3);
	}

	if (!uParam0->f_31)
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
			num4 = 0;

	if (flag && !bParam6)
		num4 = 0;

	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "enabled", num4);
	return;
}

Ped func_1105(Ped pedParam0) // Position - 0x2DBD2 Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

char* func_1106(var uParam0) // Position - 0x2DBEE Hash - 0xEB40D7A4 ^0x51832B2E
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_1107(var uParam0) // Position - 0x2DBFA Hash - 0xEB40D7A4 ^0x99141FE3
{
	return "craft_trans_stow";
}

Hash func_1108(Hash hParam0) // Position - 0x2DC06 Hash - 0xA730B7B8 ^0x90C575E3
{
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
		return outData.f_1;

	return 0;
}

void func_1109(var uParam0) // Position - 0x2DC31 Hash - 0xE11C13ED ^0x1E760B03
{
	if (func_190(uParam0->f_77, 1147021565) && !func_190(uParam0->f_77, 1919582297))
	{
		if (func_259(uParam0->f_77, 5))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_77, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
	}

	return;
}

BOOL func_1110(Hash hParam0, Hash hParam1, var uParam2, Entity eParam3, BOOL bParam4) // Position - 0x2DCD2 Hash - 0x61416B57 ^0xD7512144
{
	var unk;
	Hash hash;
	int num;
	int i;
	BOOL flag;
	BOOL flag2;
	const char* str;
	int num2;
	BOOL flag3;
	int num3;
	const char* str2;
	var unk34;
	int num4;
	int num5;
	int num6;
	var unk36;
	int num7;

	unk = 15;
	flag = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_51);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_51, uParam2->f_46[i]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "inUse", false);
	}

	if (!bParam4 && func_905(hParam0, hParam1, &unk, &num, true, false))
	{
		flag2 = func_551();
	
		for (i = 0; i < num; i = i + 1)
		{
			if (i >= 4)
				break;
		
			hash = unk[i /*2*/];
		
			if (func_121(hash, 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "visible", true);
			
				if (func_575(hash, &str, joaat("Inventory"), 0, 0, 0))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[i], "texture", str);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[i], "textureDictionary", str.f_1);
				}
			
				num2 = func_124(hash, false, false);
			
				if (func_321(hash) || func_642(hash))
				{
					if (flag2)
					{
						num3 = 0;
						num2 = num2 + func_1097(7, hash, &num3);
					}
				
					num2 = num2 + func_1096(hash, 0);
				}
			
				flag3 = num2 >= unk[i /*2*/].f_1;
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[i], "count", num2);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[i], "enabled", flag3 ? 1 : 0);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[i], "inUse", true);
			
				if (!flag3)
					flag = false;
			
				str2 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, unk[i /*2*/]), unk[i /*2*/].f_1);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Text", 16);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_46[i], &unk34, str2);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Enabled", 16);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_46[i], &unk34, flag3 ? 1 : 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_51, -1, joaat("crafting_recipe_line"), uParam2->f_46[i]);
			}
		}
	}

	if (flag)
	{
		if (!uParam2->f_31 && uParam2->f_80 || uParam2->f_78 == -214678071 || uParam2->f_78 == joaat("cost_crafting_grill"))
		{
			flag = false;
		
			if (func_317(hParam0))
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			else
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
		else if (!uParam2->f_32 && uParam2->f_78 == joaat("cost_crafting_grill"))
		{
			flag = false;
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
		}
		else
		{
			num4 = func_124(hParam0, false, false);
			num5 = func_859(hParam0, false);
		
			if (num5 - num4 > 0 || num5 == -1)
			{
				num6 = func_372(hParam0, -1636519629);
			
				if (!uParam2->f_83 && num6 == -701492487)
				{
					flag = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_PERC"));
				}
				else if (num6 == -701492487 && uParam2->f_84 > 0)
				{
					flag = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_PERC_FULL"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(eParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(eParam3, &unk36))));
				}
				else
				{
					num7 = func_860(hParam0, uParam2->f_78, func_551(), false);
				
					if (uParam2->f_78 == -214678071)
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_73, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_39, "ShowRpgDescription"))
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num7));
					else if (uParam2->f_78 == joaat("cost_crafting_grill"))
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num7));
					else if (num6 == -701492487)
						if (num7 == 1)
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", num7));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", num7));
					else
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", num7));
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", num4, num5, MISC::VAR_STRING(0, hParam0)));
				flag = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_31 && uParam2->f_80 || uParam2->f_78 == -214678071 || uParam2->f_78 == joaat("cost_crafting_grill"))
	{
		flag = false;
	
		if (func_317(hParam0))
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		else
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
	}
	else if (!uParam2->f_32 && uParam2->f_78 == joaat("cost_crafting_grill"))
	{
		flag = false;
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}

	return flag;
}

BOOL func_1111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x2E21D Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_1112(int iParam0, int iParam1) // Position - 0x2E23E Hash - 0x3644D28E ^0x6DB2088F
{
	int outKey;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	outKey = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &outKey))
		return 0;

	return outKey;
}

int func_1113(int iParam0) // Position - 0x2E281 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_1114(var uParam0) // Position - 0x2E2A2 Hash - 0xFC240FAD ^0xFD5376CE
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
	return;
}

void func_1115(var uParam0) // Position - 0x2E2C4 Hash - 0xB5418D4E ^0xB50A09D8
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_39, "filterIndex");
	uParam0->f_52 = any;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "filter", func_1101(uParam0->f_52));
	return;
}

Hash func_1116(Hash hParam0) // Position - 0x2E2F4 Hash - 0xC7D3E371 ^0x1A86A7E7
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_PISTOL(weaponTypeFromAmmoType))
		return joaat("s_ammo_9mm");
	else if (WEAPON::IS_WEAPON_REVOLVER(weaponTypeFromAmmoType))
		return joaat("s_ammo_45mm");
	else if (WEAPON::IS_WEAPON_RIFLE(weaponTypeFromAmmoType))
		return joaat("s_ammo_rifle");
	else if (WEAPON::IS_WEAPON_REPEATER(weaponTypeFromAmmoType))
		return joaat("s_ammo_repeater");
	else if (WEAPON::IS_WEAPON_SHOTGUN(weaponTypeFromAmmoType))
		return joaat("s_ammo_shotgun");

	return 0;
}

Vector3 func_1117(Hash hParam0) // Position - 0x2E366 Hash - 0x5EE95BA7 ^0x439E1731
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_PISTOL(weaponTypeFromAmmoType))
		return 0f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_REVOLVER(weaponTypeFromAmmoType))
		return -0.005f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_RIFLE(weaponTypeFromAmmoType))
		return -0.03f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_REPEATER(weaponTypeFromAmmoType))
		return 0.005f, 0f, 0f;
	else if (WEAPON::IS_WEAPON_SHOTGUN(weaponTypeFromAmmoType))
		return 0f, 0f, 0f;

	return 0f, 0f, 0f;
}

int func_1118(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x2E3DC Hash - 0x4C6CAF1 ^0xEE857D47
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

	if (!func_617(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_122(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_1224(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_1225(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_1226(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_1227(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_1228(&unk) };
		unk62.f_10 = iParam4;
		num = func_299(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_1119(Hash hParam0, int iParam1) // Position - 0x2E4D3 Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_199(hParam0);
	
		if (category != 0)
		{
			num2 = func_894(hParam0);
		
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

int func_1120(Hash hParam0) // Position - 0x2E527 Hash - 0xF4E671A6 ^0x338FA446
{
	Hash category;

	if (!func_121(hParam0, 0))
		return 0;

	category = func_199(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);
}

void func_1121(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x2E556 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i /*2*/] = uParam2->[i /*2*/];
		unk13[i /*2*/].f_1 = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (unk13[i /*2*/] == outData2)
							{
								unk13[i /*2*/].f_1 = unk13[i /*2*/].f_1 - outData2.f_1;
								break;
							}
						}
					}
				}
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i /*2*/].f_1 != 1f)
			uParam2->[i /*2*/].f_1 = BUILTIN::FLOOR((float)uParam2->[i /*2*/].f_1 * (unk13[i /*2*/].f_1 / 1f));
	}

	return;
}

int func_1122(int iParam0) // Position - 0x2E6BD Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_1123(int iParam0, var uParam1) // Position - 0x2E733 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_1124() // Position - 0x2E73C Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_1125(int iParam0) // Position - 0x2E745 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_86(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_86(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_86(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_1126(int iParam0, int iParam1) // Position - 0x2E7A7 Hash - 0xD5391B76 ^0x84DFDEF4
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

const char* func_1127(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x2E7D9 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1128(int iParam0) // Position - 0x2E7ED Hash - 0x21CE226B ^0x436A8077
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

char* func_1129(int iParam0) // Position - 0x2E828 Hash - 0x21CE226B ^0xCA6DBF24
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

int func_1130(int iParam0) // Position - 0x2E863 Hash - 0x21FAF347 ^0x467E3BE5
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

int func_1131(int iParam0) // Position - 0x2E89E Hash - 0x5163992 ^0x5163992
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

int func_1132(int iParam0) // Position - 0x2E8CD Hash - 0x21FAF347 ^0xA8C8F0DA
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

BOOL func_1133(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x2E908 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_121(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

BOOL func_1134(int iParam0) // Position - 0x2E97D Hash - 0x891F222E ^0x891F222E
{
	if (iParam0 < 0)
		return false;

	return iParam0 <= func_1229(1);
}

BOOL func_1135(int iParam0) // Position - 0x2E997 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

int func_1136(Hash hParam0, int iParam1) // Position - 0x2E9A0 Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_121(hParam0, 0))
		return 0;

	unk = { func_583(false) };
	unk.f_4 = func_582(iParam1);
	guid = { func_346(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_86(false), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_1137(var uParam0, int iParam1, int iParam2) // Position - 0x2E9FB Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_1138() // Position - 0x2EA32 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

void func_1139(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x2EA40 Hash - 0xA1405822 ^0xA302E777
{
	int i;
	var unk;

	if (!func_1150(anParam0))
		return;

	if (Global_1223409 < 20)
	{
		Global_1223409 = Global_1223409 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223409.f_1[i /*22*/] = { Global_1223409.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_1 = 10;
	unk.f_7.f_14 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1223409.f_1[Global_1223409 - 1 /*22*/] = { unk };
	return;
}

BOOL func_1140(eStackSize essParam0) // Position - 0x2EAE6 Hash - 0xBF3EFB31 ^0xBF3EFB31
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

BOOL func_1141(int iParam0) // Position - 0x2EB16 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_1142(eStackSize essParam0) // Position - 0x2EB34 Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (essParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[essParam0 /*35*/].f_15;
}

float func_1143() // Position - 0x2EB6B Hash - 0x97B49396 ^0x97B49396
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

int func_1144(int iParam0) // Position - 0x2EBA7 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_119(iParam0))
		return 0;

	return func_1230(func_280(iParam0));
}

BOOL func_1145(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x2EBC7 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_1231(iParam0, bParam2, essParam3))
		return true;

	return false;
}

BOOL func_1146(int iParam0, int iParam1) // Position - 0x2EBE9 Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (iParam1 != -1)
		return false;

	if (func_1232(iParam0))
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

BOOL func_1147(int iParam0) // Position - 0x2ECAD Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_1233(iParam0);
}

BOOL func_1148(eStackSize essParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x2ECBB Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_935(essParam0, bParam2, essParam3))
		return true;

	return false;
}

int func_1149(int iParam0) // Position - 0x2ECDD Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_119(iParam0))
		return -1;

	return func_1234(iParam0);
}

BOOL func_1150(Any anParam0) // Position - 0x2ECF9 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

void func_1151(Ped pedParam0) // Position - 0x2ED2F Hash - 0xC5AA53DE ^0x680DD5A
{
	Ped pedIndexFromEntityIndex;
	int num;
	eStackSize stackSize;
	var unk;
	int num2;
	int i;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	num = 878851736;
	stackSize = Global_40.f_4283;

	if (func_1235(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex), stackSize))
	{
		num = -1708424762;
	}
	else
	{
		unk = 10;
		func_1212(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), &unk);
	
		for (i = 0; i < 10; i = i + 1)
		{
			if (!func_121(unk[i], 0))
			{
			}
			else if (!func_1236(unk[i]))
			{
			}
			else
			{
				num2 = func_1237(unk[i], stackSize);
			
				if (func_1238(num2, num))
					num = num2;
			}
		}
	}

	func_1239(&num);

	if (func_1238(num, Global_1357549.f_1492))
		Global_1357549.f_1492 = num;

	return;
}

struct<4> func_1152(int iParam0, Hash hParam1) // Position - 0x2EDF9 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_1240(iParam0) };
	return func_1241(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_1153(Ped pedParam0) // Position - 0x2EE1B Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_1154(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_1154(Ped pedParam0) // Position - 0x2EE59 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

void func_1155(int iParam0, Hash hParam1, int iParam2) // Position - 0x2EE9E Hash - 0xAC28FF72 ^0xA969E0AB
{
	Hash hash;
	int num;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	hash = func_1242(hParam1);
	num = func_1243(hash, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] - iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = func_598(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num], 0, 10);
	return;
}

BOOL func_1156(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x2EF2B Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_121(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_1244(iParam0, hParam1, 1))
		return 0;

	statId = { func_436(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_947(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_947(iParam0, hParam1) - iParam2 < 0)
		{
			func_1156(iParam0, hParam1, func_124(hParam1, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_1245(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!func_98(false))
		bParam3 = true;

	if (!bParam3 && hParam1 != 1309979101)
		func_256(hParam1, -iParam2, flag, flag2, flag3);

	return 1;
}

int func_1157(int iParam0, int iParam1) // Position - 0x2F00E Hash - 0xE1D12727 ^0xC55B8D95
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_beaver_fur");
	
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
	
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
	
		case 5:
			return joaat("provision_boar_skin");
	
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 8:
			return joaat("provision_buck_fur");
	
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
	
		case 16:
			return joaat("provision_coyote_fur");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
	
		case 20:
			return joaat("provision_deer_hide");
	
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 23:
			return joaat("provision_fox_fur");
	
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
	
		case 27:
			return joaat("provision_goat_hair");
	
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 30:
			return joaat("provision_javelina_skin");
	
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 33:
			return joaat("provision_loanshark_skins");
	
		case 34:
			return joaat("provision_panther_fur");
	
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
	
		case 38:
			return joaat("provision_pig_skin");
	
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 41:
			return joaat("provision_pronghorn_fur");
	
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
	
		case 45:
			return joaat("provision_ram_hide");
	
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
	
		case 49:
			return joaat("provision_sheep_wool");
	
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 52:
			return joaat("provision_wolf_fur");
	
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
	
		case 56:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_1158(Hash hParam0, int iParam1) // Position - 0x2F347 Hash - 0xE499CB2B ^0xBF16EE8A
{
	Ped mountOwnedByPlayer;

	if (func_23() == -1)
		mountOwnedByPlayer = func_204(7);
	else
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	func_950(mountOwnedByPlayer, hParam0, iParam1);
	return;
}

BOOL func_1159(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x2F376 Hash - 0x1DFD4C48 ^0x2E953DF6
{
	var unk;
	var unk6;

	if (!func_121(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_583(false) };
	unk.f_4 = 724026534;
	unk6 = { func_346(hParam0, unk, unk.f_4, false) };
	return func_347(hParam0, &unk6, &unk, iParam1, hParam3, bParam2, false);
}

Player _INVALID_PLAYER_INDEX() // Position - 0x2F3CD Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

float func_1161(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F3D6 Hash - 0x2753566D ^0x575C60D0
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(plParam0))
		return -1f;

	return func_1006(Global_35, plParam0, bParam1, bParam2);
}

int func_1162(var uParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2F3FF Hash - 0x6C0BC7C7 ^0x6C0BC7C7
{
	int i;
	int num;
	float num2;
	float num3;

	num = -1;
	num2 = 100000000f;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!bParam3 || func_1246(i))
		{
			num3 = func_1247(i, uParam0);
		
			if (num3 < num2)
			{
				num = i;
				num2 = num3;
			}
		}
	}

	return num;
}

BOOL func_1163(int iParam0) // Position - 0x2F454 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_1248(Global_1835011[iParam0 /*74*/].f_1);
}

Vector3 func_1164(int iParam0) // Position - 0x2F480 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_1249(iParam0);
}

Vector3 func_1165(eStackSize essParam0) // Position - 0x2F48E Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_117(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_1250(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

BOOL func_1166(int iParam0) // Position - 0x2F4D4 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_1167(BOOL bParam0) // Position - 0x2F4EA Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_1168(Hash hParam0) // Position - 0x2F50F Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_1169(Hash hParam0) // Position - 0x2F51F Hash - 0xB8632262 ^0xB8632262
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

int func_1170(Hash hParam0) // Position - 0x2F5C6 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_1171(Hash hParam0) // Position - 0x2F5FF Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_1251(&entity, 0, i, &model) && !func_1251(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_1252(entity, &model);
		
			if (func_121(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

BOOL func_1172(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F66B Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_1001(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

BOOL func_1173(int iParam0) // Position - 0x2F6AE Hash - 0xE139661B ^0xE139661B
{
	if (!func_1001(iParam0))
		return false;

	return func_1172(iParam0, 2, true);
}

BOOL func_1174(int iParam0) // Position - 0x2F6CC Hash - 0xA376F75 ^0xA376F75
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

void func_1175(int iParam0) // Position - 0x2F739 Hash - 0xC5BA52D ^0xC5BA52D
{
	switch (iParam0)
	{
		case 2:
			func_63(214, false);
			break;
	
		case 3:
			func_63(215, false);
			break;
	
		case 4:
			func_63(233, false);
			break;
	
		case 5:
			func_63(210, false);
			break;
	
		case 6:
			func_63(229, false);
			break;
	
		case 7:
			func_63(226, false);
			break;
	
		case 8:
			func_63(234, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_63(237, false);
			break;
	
		case 13:
			func_63(221, false);
			break;
	
		case 15:
			func_63(217, false);
			break;
	
		case 16:
			func_63(211, false);
			break;
	
		case 18:
			func_63(228, false);
			break;
	
		case 19:
			func_63(222, false);
			break;
	
		case 20:
			func_63(227, false);
			break;
	
		case 23:
			func_63(218, false);
			break;
	
		case 26:
			func_63(220, false);
			break;
	
		case 27:
			func_63(238, false);
			break;
	
		case 28:
			func_63(235, false);
			break;
	
		case 29:
			func_63(230, false);
			break;
	
		case 31:
			func_63(236, false);
			break;
	
		case 33:
			func_63(212, false);
			break;
	
		case 34:
			func_63(223, false);
			break;
	
		case 37:
			func_63(219, false);
			break;
	
		case 38:
			func_63(224, false);
			break;
	
		case 39:
			func_63(231, false);
			break;
	
		case 40:
			func_63(225, false);
			break;
	
		case 41:
			func_63(239, false);
			break;
	
		case 42:
			func_63(213, false);
			break;
	
		case 43:
			func_63(216, false);
			break;
	}

	return;
}

void func_1176(int iParam0, BOOL bParam1) // Position - 0x2F922 Hash - 0xE05A2D67 ^0x31D6C1E4
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == true)
				func_353(joaat("journal_herb_acunas_star_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_acunas_star_orchid_jn"), 0);
			break;
	
		case 2:
			if (bParam1 == true)
				func_353(joaat("journal_herb_alaskan_ginseng_ar"), 0);
			else
				func_353(joaat("journal_herb_alaskan_ginseng_jn"), 0);
			break;
	
		case 3:
			if (bParam1 == true)
				func_353(joaat("journal_herb_american_ginseng_ar"), 0);
			else
				func_353(joaat("journal_herb_american_ginseng_jn"), 0);
			break;
	
		case 4:
			if (bParam1 == true)
				func_353(joaat("journal_herb_bay_bolete_ar"), 0);
			else
				func_353(joaat("journal_herb_bay_bolete_jn"), 0);
			break;
	
		case 5:
			if (bParam1 == true)
				func_353(joaat("journal_herb_blackberry_ar"), 0);
			else
				func_353(joaat("journal_herb_blackberry_jn"), 0);
			break;
	
		case 6:
			if (bParam1 == true)
				func_353(joaat("journal_herb_black_currant_ar"), 0);
			else
				func_353(joaat("journal_herb_black_currant_jn"), 0);
			break;
	
		case 7:
			if (bParam1 == true)
				func_353(joaat("journal_herb_burdock_root_ar"), 0);
			else
				func_353(joaat("journal_herb_burdock_root_jn"), 0);
			break;
	
		case 8:
			if (bParam1 == true)
				func_353(joaat("journal_herb_chanterelle_ar"), 0);
			else
				func_353(joaat("journal_herb_chanterelle_jn"), 0);
			break;
	
		case 9:
			if (bParam1 == true)
				func_353(joaat("journal_herb_cigar_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_cigar_orchid_jn"), 0);
			break;
	
		case 10:
			if (bParam1 == true)
				func_353(joaat("journal_herb_clamshell_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_clamshell_orchid_jn"), 0);
			break;
	
		case 11:
			if (bParam1 == true)
				func_353(joaat("journal_herb_bulrush_ar"), 0);
			else
				func_353(joaat("journal_herb_bulrush_jn"), 0);
			break;
	
		case 12:
			if (bParam1 == true)
				func_353(joaat("journal_herb_creeping_thyme_ar"), 0);
			else
				func_353(joaat("journal_herb_creeping_thyme_jn"), 0);
			break;
	
		case 13:
			if (bParam1 == true)
				func_353(joaat("journal_herb_desert_sage_ar"), 0);
			else
				func_353(joaat("journal_herb_desert_sage_jn"), 0);
			break;
	
		case 14:
			if (bParam1 == true)
				func_353(joaat("journal_herb_dragons_mouth_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_dragons_mouth_orchid_jn"), 0);
			break;
	
		case 15:
			if (bParam1 == true)
				func_353(joaat("journal_herb_english_mace_ar"), 0);
			else
				func_353(joaat("journal_herb_english_mace_jn"), 0);
			break;
	
		case 16:
			if (bParam1 == true)
				func_353(joaat("journal_herb_huckleberry_ar"), 0);
			else
				func_353(joaat("journal_herb_huckleberry_jn"), 0);
			break;
	
		case 17:
			if (bParam1 == true)
				func_353(joaat("journal_herb_ghost_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_ghost_orchid_jn"), 0);
			break;
	
		case 18:
			if (bParam1 == true)
				func_353(joaat("journal_herb_golden_currant_ar"), 0);
			else
				func_353(joaat("journal_herb_golden_currant_jn"), 0);
			break;
	
		case 19:
			if (bParam1 == true)
				func_353(joaat("journal_herb_hummingbird_sage_ar"), 0);
			else
				func_353(joaat("journal_herb_hummingbird_sage_jn"), 0);
			break;
	
		case 20:
			if (bParam1 == true)
				func_353(joaat("journal_herb_indian_tobacco_ar"), 0);
			else
				func_353(joaat("journal_herb_indian_tobacco_jn"), 0);
			break;
	
		case 21:
			if (bParam1 == true)
				func_353(joaat("journal_herb_lady_of_the_night_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_lady_of_the_night_orchid_jn"), 0);
			break;
	
		case 22:
			if (bParam1 == true)
				func_353(joaat("journal_herb_lady_slipper_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_lady_slipper_orchid_jn"), 0);
			break;
	
		case 23:
			if (bParam1 == true)
				func_353(joaat("journal_herb_milkweed_ar"), 0);
			else
				func_353(joaat("journal_herb_milkweed_jn"), 0);
			break;
	
		case 24:
			if (bParam1 == true)
				func_353(joaat("journal_herb_moccasin_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_moccasin_orchid_jn"), 0);
			break;
	
		case 25:
			if (bParam1 == true)
				func_353(joaat("journal_herb_night_scented_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_night_scented_orchid_jn"), 0);
			break;
	
		case 26:
			if (bParam1 == true)
				func_353(joaat("journal_herb_oleander_sage_ar"), 0);
			else
				func_353(joaat("journal_herb_oleander_sage_jn"), 0);
			break;
	
		case 27:
			if (bParam1 == true)
				func_353(joaat("journal_herb_oregano_ar"), 0);
			else
				func_353(joaat("journal_herb_oregano_jn"), 0);
			break;
	
		case 28:
			if (bParam1 == true)
				func_353(joaat("journal_herb_parasol_ar"), 0);
			else
				func_353(joaat("journal_herb_parasol_jn"), 0);
			break;
	
		case 29:
			if (bParam1 == true)
				func_353(joaat("journal_herb_prairie_poppy_ar"), 0);
			else
				func_353(joaat("journal_herb_prairie_poppy_jn"), 0);
			break;
	
		case 30:
			if (bParam1 == true)
				func_353(joaat("journal_herb_queens_orchids_ar"), 0);
			else
				func_353(joaat("journal_herb_queens_orchids_jn"), 0);
			break;
	
		case 31:
			if (bParam1 == true)
				func_353(joaat("journal_herb_ramshead_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_ramshead_orchid_jn"), 0);
			break;
	
		case 32:
			if (bParam1 == true)
				func_353(joaat("journal_herb_rat_tail_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_rat_tail_orchid_jn"), 0);
			break;
	
		case 33:
			if (bParam1 == true)
				func_353(joaat("journal_herb_raspberry_ar"), 0);
			else
				func_353(joaat("journal_herb_raspberry_jn"), 0);
			break;
	
		case 34:
			if (bParam1 == true)
				func_353(joaat("journal_herb_red_sage_ar"), 0);
			else
				func_353(joaat("journal_herb_red_sage_jn"), 0);
			break;
	
		case 35:
			if (bParam1 == true)
				func_353(joaat("journal_herb_sparrows_egg_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_sparrows_egg_orchid_jn"), 0);
			break;
	
		case 36:
			if (bParam1 == true)
				func_353(joaat("journal_herb_spider_orchid_ar"), 0);
			else
				func_353(joaat("journal_herb_spider_orchid_jn"), 0);
			break;
	
		case 37:
			if (bParam1 == true)
				func_353(joaat("journal_herb_vanilla_flower_ar"), 0);
			else
				func_353(joaat("journal_herb_vanilla_flower_jn"), 0);
			break;
	
		case 38:
			if (bParam1 == true)
				func_353(joaat("journal_herb_violet_snowdrop_ar"), 0);
			else
				func_353(joaat("journal_herb_violet_snowdrop_jn"), 0);
			break;
	
		case 39:
			if (bParam1 == true)
				func_353(joaat("journal_herb_carrot_ar"), 0);
			else
				func_353(joaat("journal_herb_carrot_jn"), 0);
			break;
	
		case 40:
			if (bParam1 == true)
				func_353(joaat("journal_herb_feverfew_ar"), 0);
			else
				func_353(joaat("journal_herb_feverfew_jn"), 0);
			break;
	
		case 41:
			if (bParam1 == true)
				func_353(joaat("journal_herb_mint_ar"), 0);
			else
				func_353(joaat("journal_herb_mint_jn"), 0);
			break;
	
		case 42:
			if (bParam1 == true)
				func_353(joaat("journal_herb_winterberry_ar"), 0);
			else
				func_353(joaat("journal_herb_winterberry_jn"), 0);
			break;
	
		case 43:
			if (bParam1 == true)
				func_353(joaat("journal_herb_yarrow_ar"), 0);
			else
				func_353(joaat("journal_herb_yarrow_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

Hash func_1177() // Position - 0x2FF97 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

void func_1178(int iParam0, int iParam1) // Position - 0x2FFA6 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1179(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2FFBF Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_1253(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_413(func_591(hParam1), 1);
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
		func_1254(uParam0);

	return;
}

BOOL func_1180(Hash hParam0, int iParam1) // Position - 0x3001C Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_727(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_199(hParam0) != -999503751)
			func_1255(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_199(hParam0) != -999503751)
		func_1255(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_1010(hParam0, true);
	return 1;
}

BOOL func_1181(var uParam0, int iParam1) // Position - 0x30102 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1182(var uParam0, int iParam1, int iParam2) // Position - 0x30113 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1183(int iParam0, int iParam1) // Position - 0x30126 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_1184(int iParam0, int iParam1) // Position - 0x30137 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_1185(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x3014A Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1186(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x301A5 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_1187(var uParam0, eStackSize essParam1) // Position - 0x3020F Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_23() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_1185(&uParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_1186(&uParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_1188(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x302AA Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_23() == -1)
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

BOOL func_1189(Player plParam0) // Position - 0x30332 Hash - 0x80018C76 ^0x60939258
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1058888.f_49041), plParam0))
		return true;

	return false;
}

void func_1190(Player plParam0) // Position - 0x30351 Hash - 0x3D7F326C ^0x47EF75AB
{
	Player player;

	if (func_1256() != false || func_23() != false)
		return;

	player = plParam0;

	if (!Global_1224589.f_16[player])
	{
		func_1257(plParam0);
		return;
	}

	if (Global_1058888.f_42287.f_1[player /*5*/] == 1)
		return;

	func_1258(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1058888.f_42287.f_1[player /*5*/] = 1;
	return;
}

void func_1191() // Position - 0x303BF Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_1259(Global_35, &unk);
	unk31 = { func_583(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1260(false);
	func_1261(7);
	func_409(joaat("kit_bandana"), true, true, false);

	if (func_731() == 1160113249)
	{
		func_409(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_409(-361635024, true, true, true);
	}

	func_1262(Global_35, &unk);
	return;
}

int func_1192(Hash hParam0, int iParam1) // Position - 0x30448 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_86(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_847(&num, year);
	func_848(&num, month);
	func_849(&num, day);
	func_850(&num, hour);
	func_851(&num, minute);
	func_852(&num, second);
	return num;
}

void func_1193(int iParam0) // Position - 0x304AD Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_523(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_1194(int iParam0, int iParam1) // Position - 0x304E0 Hash - 0x8FA0E29 ^0xC3F68E87
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

char* func_1195(eStackSize essParam0) // Position - 0x315F9 Hash - 0xCCDB3731 ^0xE596B48E
{
	Hash hash;

	hash = func_1027(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_992(hash);
}

int func_1196(Hash hParam0) // Position - 0x3161C Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_1263(hParam0))
		num = 0;
	else if (func_1264(hParam0))
		num = 1;
	else if (func_1265(hParam0))
		num = 2;
	else if (func_1266(hParam0))
		num = 3;

	return num;
}

BOOL func_1197(int iParam0) // Position - 0x3165F Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_25(func_1267(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_1198(int iParam0) // Position - 0x3169F Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_25(func_1268(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_1199(int iParam0) // Position - 0x316DE Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_1200() // Position - 0x316F1 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_23() != -1)
		return;

	func_498(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_587(1);
	func_914(1, num, 0);
	return;
}

void func_1201(int iParam0) // Position - 0x31723 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_1202() // Position - 0x3173A Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_23() != -1)
		return;

	func_498(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_587(2);
	func_914(2, num, 0);
	return;
}

void func_1203() // Position - 0x3176C Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_23() != -1)
		return;

	func_498(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_587(0);
	func_914(0, num, 0);
	return;
}

char* func_1204(int iParam0) // Position - 0x3179E Hash - 0x21CE226B ^0xBA9CD95D
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

void func_1205(int iParam0, float fParam1, int iParam2) // Position - 0x317D9 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_1079();

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

void func_1206(int iParam0, int iParam1, int iParam2) // Position - 0x3182A Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_1079();

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

void func_1207(int iParam0) // Position - 0x3187F Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_1229(1) < iParam0)
		iParam0 = func_1229(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_523(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_1208(int iParam0, const char* sParam1, int iParam2) // Position - 0x318BD Hash - 0xA31E0DC ^0xB9D6351F
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_577(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

BOOL func_1209(int iParam0) // Position - 0x318FE Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_395(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_1210(Ped pedParam0) // Position - 0x31936 Hash - 0xF5A7D53A ^0xBECE42FF
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);

	if (!ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex))
		return false;

	if (FLOCK::_GET_ANIMAL_RARITY(pedIndexFromEntityIndex) == 2)
		return false;

	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(pedParam0))
		return false;

	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(pedParam0))
		return false;

	return true;
}

int func_1211(Hash hParam0, Hash hParam1) // Position - 0x31999 Hash - 0xD1D2F01F ^0xAD322AEB
{
	int num;
	int num2;
	Hash hash;

	num = -1;
	num2 = 1;
	hash = 0;
	num2 = func_1214(hParam0);
	hash = func_1213(hParam0);

	if (hash != 0)
	{
		func_226(hParam0, 1, true, -142743235, false);
		num = func_1269(hash, num2, hParam0, hParam1);
	}

	return num;
}

int func_1212(Ped pedParam0, Any* panParam1) // Position - 0x319DF Hash - 0xC08B2C8D ^0x93715860
{
	int damageCleanliness;
	int skinningQuality;
	var unk;
	var unk2;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_643(pedParam0, &skinningQuality, &unk, &damageCleanliness, &unk2);
	num = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(panParam1, pedParam0, damageCleanliness, skinningQuality);
	return num;
}

Hash func_1213(Hash hParam0) // Position - 0x31A2D Hash - 0x5FB59AC3 ^0xF8EA047B
{
	int num;

	num = 0;

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			num = joaat("a_c_toad_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			num = joaat("a_c_bluejay_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			num = joaat("A_C_Pigeon");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			num = joaat("a_c_cardinal_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			num = joaat("a_c_carolinaparakeet_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			num = joaat("a_c_rat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			num = joaat("a_c_crow_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			num = joaat("a_c_crab_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			num = joaat("a_c_frogbull_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			num = joaat("a_c_sparrow_01");
			break;
	
		case joaat("provision_fish_chain_pickerel_poor"):
		case joaat("provision_fish_chain_pickerel"):
			num = joaat("a_c_fishchainpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			num = joaat("a_c_quail_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			num = joaat("a_c_chipmunk_01");
			break;
	
		case joaat("provision_fish_muskie"):
		case joaat("provision_fish_muskie_poor"):
			num = joaat("a_c_fishmuskie_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			num = joaat("a_c_oriole_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			num = joaat("a_c_bat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			num = joaat("a_c_woodpecker_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			num = joaat("a_c_cedarwaxwing_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			num = joaat("a_c_robin_01");
			break;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
		case joaat("provision_fish_smallmouth_bass"):
			num = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
	
		case joaat("provision_fish_perch_poor"):
		case joaat("provision_fish_perch"):
			num = joaat("a_c_fishperch_01_sm");
			break;
	
		case joaat("provision_fish_lake_sturgeon"):
		case joaat("provision_fish_lake_sturgeon_poor"):
			num = joaat("a_c_fishlakesturgeon_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			num = joaat("a_c_songbird_01");
			break;
	
		case joaat("provision_fish_bluegill_poor"):
		case joaat("provision_fish_bluegill"):
			num = joaat("a_c_fishbluegil_01_sm");
			break;
	
		case joaat("provision_fish_largemouth_bass"):
		case joaat("provision_fish_largemouth_bass_poor"):
			num = joaat("a_c_fishlargemouthbass_01_ms");
			break;
	
		case joaat("provision_fish_northern_pike"):
		case joaat("provision_fish_northern_pike_poor"):
			num = joaat("a_c_fishnorthernpike_01_lg");
			break;
	
		case joaat("provision_fish_bullhead_catfish"):
		case joaat("provision_fish_bullhead_catfish_poor"):
			num = joaat("a_c_fishbullheadcat_01_sm");
			break;
	
		case joaat("provision_fish_redfin_pickerel_poor"):
		case joaat("provision_fish_redfin_pickerel"):
			num = joaat("a_c_fishredfinpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			num = joaat("a_c_squirrel_01");
			break;
	
		case joaat("provision_fish_sockeye_salmon_poor"):
		case joaat("provision_fish_sockeye_salmon"):
			num = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
	
		case joaat("provision_fish_rock_bass_poor"):
		case joaat("provision_fish_rock_bass"):
			num = joaat("a_c_fishrockbass_01_sm");
			break;
	
		case joaat("provision_fish_steelhead_trout_poor"):
		case joaat("provision_fish_steelhead_trout"):
			num = joaat("a_c_fishrainbowtrout_01_ms");
			break;
	
		case joaat("provision_fish_channel_catfish_poor"):
		case joaat("provision_fish_channel_catfish"):
			num = joaat("a_c_fishchannelcatfish_01_lg");
			break;
	
		case joaat("provision_fish_longnose_gar_poor"):
		case joaat("provision_fish_longnose_gar"):
			num = joaat("a_c_fishlongnosegar_01_lg");
			break;
	}

	return num;
}

int func_1214(Hash hParam0) // Position - 0x31D9F Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_190(hParam0, 1064293907))
		return 2;
	else if (func_190(hParam0, -1218707194))
		return 1;
	else if (func_190(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_1215(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x31DE4 Hash - 0x97BDF54F ^0xE45E1733
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_121(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

BOOL func_1216(int iParam0) // Position - 0x31E38 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
	
		default:
		
	}

	return false;
}

int func_1217(int iParam0, int iParam1) // Position - 0x31E89 Hash - 0x69E301C1 ^0x69E301C1
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
	
		case -1784068921:
			return 7;
	
		case -1642438278:
			return 2;
	
		case -1349086674:
			return 8;
	
		case 310186733:
			return 5;
	
		case 456315479:
			return 9;
	
		case 471747275:
			return 3;
	
		case 1166592425:
			return 4;
	
		case 1486898918:
			return 0;
	
		case 1500419820:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_1218(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x31F10 Hash - 0xEB834D03 ^0x9E597BFA
{
	Global_1911914[uParam0->f_55 /*9*/].f_5 = hParam2;
	Global_1911914[uParam0->f_55 /*9*/].f_6 = hParam1;
	Global_1911914[uParam0->f_55 /*9*/].f_7 = 1;
	Global_1911914[uParam0->f_55 /*9*/].f_8 = 0;
	Global_1911914.f_1576 = Global_1911914.f_1576 + 1;
	uParam0->f_55 = uParam0->f_55 + 1;

	if (hParam2 == 600942249 || hParam2 == -257768755)
		func_1270(uParam0, hParam1, hParam2);
	else if (hParam2 == -214678071)
		func_1271(uParam0, hParam1);

	return;
}

void func_1219(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x31FA0 Hash - 0x8D770326 ^0x14D0BF12
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_372(hParam1, -1859264326);

	if (num3 == 0)
		return;

	unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num3, 0) };

	if (func_1111(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (uParam0->f_55 >= 175)
				break;
		
			hash = func_1112(i, num);
		
			if (func_121(hash, 0) && hash != hParam1)
				func_1218(uParam0, hash, hParam2);
		}
	
		func_1113(num);
	}

	return;
}

void func_1220(var uParam0) // Position - 0x32038 Hash - 0xF0728FFC ^0xF0728FFC
{
	func_1113(*uParam0);
	*uParam0 = -1;
	return;
}

void func_1221(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3204C Hash - 0xE8AAFAC7 ^0xC7532F5F
{
	Hash key;
	var unk;
	Hash hash;
	Hash hash2;
	int num;
	int num2;
	int num3;
	const char* str;
	BOOL flag;
	var unk7;
	Hash hash3;
	BOOL flag2;
	Hash hash4;
	Hash hash5;
	int num4;
	int outData;
	BOOL flag3;
	int i;
	var outData2;
	Hash hash6;

	key = Global_1911914[hParam1 /*9*/].f_6;
	TEXT_LABEL_ASSIGN_STRING(&unk, "r_", 32);
	TEXT_LABEL_APPEND_INT(&unk, key, 32);
	TEXT_LABEL_APPEND_INT(&unk, hParam1, 32);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[hParam1 /*9*/].f_1))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[hParam1 /*9*/].f_1);

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_40, &unk);
	Global_1911914[hParam1 /*9*/].f_1 = hash;
	hash2 = Global_1911914[hParam1 /*9*/].f_5;
	num = func_860(key, hash2, bParam3, false);
	num2 = func_124(key, false, false);
	num3 = func_859(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	if (func_575(key, &str, joaat("Inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "texture", str);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "textureDictionary", str.f_1);
	}

	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "name", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eOutputItem", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eCost", hash2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iIndex", hParam1);

	if (!Global_1911914.f_1579 && func_920(key, hash2, true))
	{
		flag = true;
		Global_1911914[hParam1 /*9*/].f_7 = 0;
	}

	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iCurCostVariant", Global_1911914[hParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iNumCostVariants", Global_1911914[hParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "bFireCrafting", hash2 == -257768755);
	TEXT_LABEL_APPEND_INT(&unk7, func_861(num3, num), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "count", &unk7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "visible", false);
	flag2 = false;

	if (func_56(4096))
		hash3 = num3 > 0 && num > 0 && func_372(key, 1697966752) == 337650881 ? 1 : 0;
	else if (func_56(8192))
		hash3 = num3 > 0 && num > 0 && key == joaat("consumable_potent_predator_bait") ? 1 : 0;
	else
		hash3 = num3 > 0 && num > 0 && !flag ? 1 : 0;

	if (hash3 == 0 && func_1222(key))
	{
		if (func_1223(key, hash2, uParam0, bParam3, &hash4, &hash5, &num4))
		{
			hash3 = 1;
			flag2 = true;
			key = hash4;
			hash2 = hash5;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "name", hash4);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hash, "eOutputItem", hash4);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hash, "eCost", hash5);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hash, "iCurCostVariant", num4);
		}
	}

	if (!uParam0->f_31)
		if (hash2 == -214678071 || hash2 == joaat("cost_crafting_grill") || hash2 == -257768755)
			hash3 = 0;
	else if (!uParam0->f_32 && hash2 == joaat("cost_crafting_grill"))
		hash3 = 0;

	if (hash3 == 1)
	{
		if (!uParam0->f_83 || uParam0->f_84 > 0 && func_372(key, -1636519629) == -701492487)
		{
			hash3 = 0;
			Global_1911914[hParam1 /*9*/].f_2 = 0;
		}
		else
		{
			uParam0->f_59 = uParam0->f_59 + 1;
		
			if (func_259(key, uParam0->f_52))
				uParam0->f_60 = uParam0->f_60 + 1;
		
			Global_1911914[hParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1911914[hParam1 /*9*/].f_2 = 0;
	}

	flag2;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "lockVisible", flag);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "enabled", hash3);
	outData.f_1 = 20;
	flag3 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "staminaHorseDurationCategory", 0);

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(key, &outData))
	{
		for (i = 0; i < outData; i = i + 1)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
			{
				hash6 = outData2.f_2;
			
				switch (outData2.f_1)
				{
					case joaat("EFFECT_HORSE_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCoreHorse", hash6);
						break;
				
					case -1240225157:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "stamina" /*Stamina*/, 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaDurationCategory", outData2.f_6);
						break;
				
					case joaat("Effect_Stamina_Core_Gold"):
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaCoreDurationCategory", outData2.f_6);
						break;
				
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeye", hash6);
						break;
				
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "health", hash6);
						break;
				
					case joaat("Effect_Deadeye_Core_Gold"):
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "deadeyeCoreDurationCategory", outData2.f_6);
						break;
				
					case -778289619:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthHorseDurationCategory", outData2.f_6);
						break;
				
					case joaat("EFFECT_HEALTH_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCore", hash6);
						break;
				
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "stamina" /*Stamina*/, hash6);
						break;
				
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCoreHorse", hash6);
						break;
				
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthHorse", hash6);
						break;
				
					case 1136630075:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthCoreHorseDurationCategory", outData2.f_6);
						break;
				
					case 1342237631:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "deadeyeDurationCategory", outData2.f_6);
						break;
				
					case 1365603835:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaCoreHorseDurationCategory", outData2.f_6);
						break;
				
					case 1497139093:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "staminaHorseDurationCategory", outData2.f_6);
						break;
				
					case joaat("EFFECT_STAMINA_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "staminaCore", hash6);
						break;
				
					case joaat("EFFECT_DEADEYE_CORE"):
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "deadeyeCore", hash6);
						break;
				
					case 1869697234:
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthDurationCategory", outData2.f_6);
						break;
				
					case joaat("Effect_Health_Core_Gold"):
						flag3 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, "healthCoreDurationCategory", outData2.f_6);
						break;
				}
			}
		}
	}

	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "overpower", flag3);

	if (bParam2)
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, -1, joaat("crafting_list_item"), hash);

	return;
}

BOOL func_1222(Hash hParam0) // Position - 0x326DC Hash - 0xC3FDD1EA ^0xE5C6403C
{
	if (func_56(4096))
		if (func_372(hParam0, 1697966752) != 337650881)
			return false;
	else if (func_56(8192))
		if (hParam0 != joaat("consumable_potent_predator_bait"))
			return false;

	return true;
}

BOOL func_1223(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, var uParam4, var uParam5, var uParam6) // Position - 0x32721 Hash - 0xBC72BCAF ^0x2D5E0DA5
{
	int num;
	int num2;
	var unk;
	int num3;
	int i;
	Hash hash;
	int j;
	Hash hash2;
	int acquireCostsCount;
	Hash outData;
	int k;

	if (!func_121(hParam0, 0))
		return false;

	if (!Global_1911914.f_1579 && func_920(hParam0, hParam1, true))
		return false;

	if (hParam1 == -214678071 || hParam1 == joaat("cost_crafting_grill"))
	{
		unk = -1;
		unk.f_1 = -1;
		unk.f_2 = -1;
		unk.f_3 = -1;
		unk.f_4 = -1;
		unk.f_5 = -1;
		unk.f_6 = -1;
		unk.f_7 = -1;
		unk.f_8 = -1;
		num3 = func_372(hParam0, 1697966752);
	
		if (num3 == 0)
			return false;
	
		if (uParam2->f_32)
		{
			unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };
		
			if (func_1111(unk, &num, &num2, 0))
			{
				for (i = 0; i < num2; i = i + 1)
				{
					hash = func_1112(i, num);
				
					if (hParam0 == hash)
					{
					}
					else if (!Global_1911914.f_1579 && func_920(hash, joaat("cost_crafting_grill"), true))
					{
					}
					else if (func_295(hash, joaat("cost_crafting_grill"), false, bParam3, 0, false) && !func_560(hash, 1, false))
					{
						func_1113(num);
						*uParam4 = hash;
						*uParam5 = joaat("cost_crafting_grill");
						*uParam6 = i;
						return true;
					}
				}
			
				func_1113(num);
			}
		}
	
		if (hParam1 == joaat("cost_crafting_grill"))
		{
			unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, num3, 0) };
		
			if (func_1111(unk, &num, &num2, 0))
			{
				for (j = 0; j < num2; j = j + 1)
				{
					hash2 = func_1112(j, num);
				
					if (hParam0 == hash2)
					{
					}
					else if (!Global_1911914.f_1579 && func_920(hash2, -214678071, true))
					{
					}
					else if (func_295(hash2, -214678071, false, bParam3, 0, false) && !func_560(hash2, 1, false))
					{
						func_1113(num);
						*uParam4 = hash2;
						*uParam5 = -214678071;
						*uParam6 = j;
						return true;
					}
				}
			
				func_1113(num);
			}
		}
	}
	else
	{
		acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam0);
		outData.f_4 = 15;
		outData.f_36 = 10;
	
		for (k = 0; k < acquireCostsCount; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam0, k, &outData))
			{
				if (outData.f_2 == joaat("cost_type_craft"))
				{
					if (outData != -489628648 && Global_1911914.f_1579 || !func_920(hParam0, outData, true))
					{
						if (func_295(hParam0, outData, false, bParam3, 0, false) && !func_560(hParam0, 1, false))
						{
							*uParam4 = hParam0;
							*uParam5 = outData;
							*uParam6 = k;
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

struct<29> func_1224(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x329E4 Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_86(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_1228(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_1225(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x32A7D Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1272(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_624(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_624(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_624(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_1226(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x32B04 Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_86(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_1228(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_1227(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x32B77 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_1273(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_624(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_624(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_624(num, 1);
		return num;
	}

	return -1;
}

struct<17> func_1228(var uParam0) // Position - 0x32BFE Hash - 0x4CD39800 ^0x7DC5804
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

int func_1229(int iParam0) // Position - 0x32C52 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_1230(BOOL bParam0) // Position - 0x32C5E Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_1231(int iParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x32C6B Hash - 0x561CE123 ^0xB84B7B4C
{
	if (iParam0 == 18)
		return false;

	if (iParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && Global_1835011[iParam0 /*74*/].f_21 == essParam2)
		return true;

	return false;
}

BOOL func_1232(int iParam0) // Position - 0x32CB8 Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1274(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

BOOL func_1233(int iParam0) // Position - 0x32CE8 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

int func_1234(int iParam0) // Position - 0x32D0C Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_1235(Hash hParam0, eStackSize essParam1) // Position - 0x32D2B Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (essParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("a_c_duck_01"):
				case joaat("A_C_Rabbit_01"):
				case joaat("a_c_pronghorn_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("a_c_buck_01"):
				case joaat("a_c_turkey_01"):
				case joaat("a_c_turkey_02"):
				case joaat("a_c_fishrainbowtrout_01_lg"):
				case joaat("a_c_fishrainbowtrout_01_ms"):
				case joaat("a_c_deer_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("a_c_alligator_01"):
				case joaat("a_c_alligator_02"):
				case joaat("a_c_alligator_03"):
				case joaat("a_c_fishlargemouthbass_01_ms"):
				case joaat("a_c_fishlargemouthbass_01_lg"):
				case joaat("a_c_carolinaparakeet_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("a_c_elk_01"):
				case joaat("a_c_fishsalmonsockeye_01_ms"):
				case joaat("a_c_fishsalmonsockeye_01_lg"):
				case joaat("a_c_fishsalmonsockeye_01_ml"):
				case joaat("a_c_quail_01"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_1236(Hash hParam0) // Position - 0x32E08 Hash - 0x6BAA9EF6 ^0x42D7C39C
{
	if (func_190(hParam0, -839724752) || func_190(hParam0, joaat("ci_tag_item_meat_animal")) || func_190(hParam0, 1286414894))
		return true;

	return false;
}

int func_1237(Hash hParam0, eStackSize essParam1) // Position - 0x32E45 Hash - 0xC5733D28 ^0xFB197C4
{
	if (!func_121(hParam0, 0))
		return 878851736;

	if (!func_1236(hParam0))
		return 878851736;

	if (func_1275(hParam0, essParam1))
		return -1708424762;
	else if (func_190(hParam0, -1690954218))
		return -1760041550;
	else if (func_190(hParam0, 1149630095))
		return -1760041550;
	else if (func_190(hParam0, 194498509))
		return 116793994;
	else if (func_190(hParam0, 43251425))
		return 1869130580;

	return 1869130580;
}

BOOL func_1238(int iParam0, int iParam1) // Position - 0x32EEE Hash - 0xD4119D7E ^0x719C18FD
{
	var unk;
	int num;
	int num2;
	int i;

	unk = 10;
	unk[0] = 878851736;
	unk[1] = 1762298001;
	unk[2] = 1869130580;
	unk[3] = 1336518004;
	unk[4] = 116793994;
	unk[5] = 515084529;
	unk[6] = -1760041550;
	unk[7] = -1977068039;
	unk[8] = -1708424762;
	unk[9] = -399865011;
	num = -1;
	num2 = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam0)
		{
			num = i;
			break;
		}
	}

	if (num == -1)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam1)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return false;

	return num > num2;
}

void func_1239(var uParam0) // Position - 0x32FCB Hash - 0x4298C46 ^0x74410755
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*uParam0)
		{
			case -1760041550:
				*uParam0 = -1977068039;
				break;
		
			case -1708424762:
				*uParam0 = -399865011;
				break;
		
			case 116793994:
				*uParam0 = 515084529;
				break;
		
			case 878851736:
				*uParam0 = 1762298001;
				break;
		
			case 1869130580:
				*uParam0 = 1336518004;
				break;
		}
	}

	return;
}

struct<5> func_1240(int iParam0) // Position - 0x3303E Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_1241(iParam0, joaat("character"), func_906(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_1241(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x3306B Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_121(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

Hash func_1242(Hash hParam0) // Position - 0x33098 Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_949(hParam0))
		return 0;

	return hParam0;
}

int func_1243(Hash hParam0, int iParam1) // Position - 0x330B0 Hash - 0x5E5FF029 ^0x5E5FF029
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 0;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
	
		case joaat("provision_deer_hide"):
			return 20;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
	
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
	
		case joaat("provision_javelina_skin"):
			return 30;
	
		case joaat("provision_sheep_wool"):
			return 49;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
	
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
	
		case joaat("provision_buck_fur"):
			return 8;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
	
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
	
		case joaat("provision_ram_hide"):
			return 45;
	
		case joaat("provision_panther_fur"):
			return 34;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
	
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
	
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
	
		case joaat("provision_pig_skin"):
			return 38;
	
		case 0:
			return 56;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
	
		case joaat("provision_fox_fur"):
			return 23;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
	
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
	
		case joaat("provision_pronghorn_fur"):
			return 41;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
	
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
	
		case joaat("provision_wolf_fur"):
			return 52;
	
		case joaat("provision_coyote_fur"):
			return 16;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
	
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
	
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
	
		case joaat("provision_goat_hair"):
			return 27;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
	
		case joaat("provision_loanshark_skins"):
			return 33;
	
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
	
		case joaat("provision_boar_skin"):
			return 5;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_1244(int iParam0, Hash hParam1, int iParam2) // Position - 0x3333C Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_121(hParam1, 0))
		return false;

	return func_947(iParam0, hParam1) >= iParam2;
}

BOOL func_1245(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x3335E Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_121(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_1240(iParam0) };
	unk6 = { func_1241(iParam0, hParam1, unk, unk.f_4) };
	return func_1276(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

BOOL func_1246(int iParam0) // Position - 0x333AD Hash - 0xE48228D0 ^0xE48228D0
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

float func_1247(int iParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x333E3 Hash - 0xA3FC3EE3 ^0xE0E564B4
{
	if (func_1277(iParam0))
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);

	return 100000000f;
}

BOOL func_1248(int iParam0) // Position - 0x33413 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_605(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

Vector3 func_1249(int iParam0) // Position - 0x3347E Hash - 0xACD6F870 ^0xDE230469
{
	if (func_1232(iParam0))
		return func_1278(iParam0);

	return Global_1835011[iParam0 /*74*/].f_18;
}

BOOL func_1250(eStackSize essParam0, var uParam1) // Position - 0x334A4 Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_1149(Global_1347702[essParam0 /*49*/].f_15) != 0)
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

BOOL func_1251(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x3353A Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_1209(iParam1) && !func_1279(iParam1))
		ped = func_204(iParam1);
	else
		return false;

	func_1280(uParam3);
	num = func_1281(iParam2);

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

void func_1252(Entity eParam0, var uParam1) // Position - 0x335D9 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_643(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_644(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_1253(var uParam0) // Position - 0x33623 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1282(&(uParam0->f_3));
	return;
}

void func_1254(var uParam0) // Position - 0x33641 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_1283(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

void func_1255(int iParam0, int iParam1, int iParam2) // Position - 0x33662 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_1284(iParam1);
	func_1285(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_1286(&(iParam0->f_26), num2);
	
		if (func_1287(iParam0->f_26, &num))
			func_1288(num, num2);
	}

	return;
}

BOOL func_1256() // Position - 0x336AB Hash - 0x4228A1C2 ^0x1EB92889
{
	return Global_1572887.f_13;
}

void func_1257(Player plParam0) // Position - 0x336B9 Hash - 0xB00E785D ^0x2BE12BE6
{
	Player player;

	if (Global_1572887.f_13 != false || Global_1572887.f_12 != false)
		return;

	player = plParam0;

	if (Global_1058888.f_42287.f_1[player /*5*/] == 0)
		return;

	func_1258(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1058888.f_42287.f_1[player /*5*/] = 0;
	return;
}

void func_1258(Player plParam0) // Position - 0x33714 Hash - 0x803C3DC4 ^0x78AECBF
{
	if (Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42287.f_1[plParam0 /*5*/].f_1 = 0;
	}

	return;
}

void func_1259(Ped pedParam0, Any* panParam1) // Position - 0x33755 Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_286(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_1260(BOOL bParam0) // Position - 0x337BA Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_121(hash, 0))
			func_1015(hash, false, bParam0);
	
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

void func_1261(int iParam0) // Position - 0x33853 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_23() == -1)
	{
		func_1289(352481484);
	
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
	
		if (func_199(hash) != -999503751)
			func_1011(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_1010(hash, false))
			func_211(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_1262(Ped pedParam0, var uParam1) // Position - 0x33A43 Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_564(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

BOOL func_1263(Hash hParam0) // Position - 0x33AEC Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_121(hParam0, 0))
		return false;

	if (func_190(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_1264(Hash hParam0) // Position - 0x33B16 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_121(hParam0, 0))
		return false;

	if (func_190(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_1265(Hash hParam0) // Position - 0x33B40 Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_121(hParam0, 0))
		return false;

	if (func_190(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_1266(Hash hParam0) // Position - 0x33B6A Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_121(hParam0, 0))
		return false;

	if (func_190(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_1267(int iParam0, int iParam1) // Position - 0x33B94 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_1290(iParam0);
	
		case 1:
			return func_1291(iParam0);
	
		case 2:
			return func_1292(iParam0);
	
		case 3:
			return func_1293(iParam0);
	}

	return 0;
}

Hash func_1268(int iParam0, int iParam1) // Position - 0x33BED Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_1294(iParam0);
	
		case 1:
			return func_1295(iParam0);
	
		case 2:
			return func_1296(iParam0);
	
		case 3:
			return func_1297(iParam0);
	
		case 4:
			return func_1298(iParam0);
	
		case 5:
			return func_1299(iParam0);
	
		case 6:
			return func_1300(iParam0);
	
		case 7:
			return func_1301(iParam0);
	
		case 8:
			return func_1302(iParam0);
	}

	return 0;
}

int func_1269(Hash hParam0, int iParam1, Hash hParam2, Hash hParam3) // Position - 0x33CA0 Hash - 0x19A1917A ^0x160C1647
{
	var unk;
	int i;
	int num;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, func_1303(hParam2));

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_121(unk[i], 0) && !func_190(unk[i], 1286414894) && !(unk[i] == hParam2))
		{
			func_228(unk[i], 1, false, false, false, 752097756, 0, 0, 0, false);
		
			if (hParam3 != 0)
				if (hParam3 == unk[i])
					num = num + 1;
			else
				num = num + 1;
		}
	}

	func_1304(func_98(false), true, 0);
	return num;
}

void func_1270(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x33D49 Hash - 0x8560B5D8 ^0x6EB0FF3E
{
	int acquireCostsCount;
	Hash outData;
	int i;

	acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam1);
	outData.f_4 = 15;
	outData.f_36 = 10;

	for (i = 0; i < acquireCostsCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam1, i, &outData))
			if (outData != hParam2)
				if (outData.f_2 == joaat("cost_type_craft") && outData != -489628648 && Global_1911914.f_1579 || !func_920(hParam1, outData, true))
					Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 = Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 + 1;
			else
				Global_1911914[uParam0->f_55 - 1 /*9*/].f_8 = i;
	}

	return;
}

void func_1271(var uParam0, Hash hParam1) // Position - 0x33DF8 Hash - 0x73D38B14 ^0x6EBCB5A9
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_372(hParam1, 1697966752);

	if (num3 == 0)
		return;

	unk = { func_904(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };

	if (func_1111(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_1112(i, num);
		
			if (func_121(hash, 0))
				if (Global_1911914.f_1579 || !func_920(hash, joaat("cost_crafting_grill"), true))
					Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 = Global_1911914[uParam0->f_55 - 1 /*9*/].f_7 + 1;
		}
	
		func_1113(num);
	}

	return;
}

BOOL func_1272(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x33EAF Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_1273(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x33EC6 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_1274(int iParam0) // Position - 0x33EDD Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_1305(&(iParam0->f_29), 62))
	{
		switch (func_1306())
		{
			case 1:
				if (!func_1305(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_1305(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_1305(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_1305(&(iParam0->f_29), 32))
					if (func_1305(&(iParam0->f_29), 2))
						if (func_534(func_147()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

BOOL func_1275(Hash hParam0, eStackSize essParam1) // Position - 0x33F87 Hash - 0x5FD96C61 ^0x5FD96C61
{
	switch (essParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
				case joaat("provision_fish_steelhead_trout_poor"):
				case joaat("provision_fish_steelhead_trout"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
				case joaat("provision_fish_largemouth_bass"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
				case joaat("provision_fish_largemouth_bass_poor"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
				case joaat("provision_fish_sockeye_salmon_poor"):
				case joaat("PROVISION_MATURE_VENISON"):
				case joaat("provision_fish_sockeye_salmon"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_1276(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x340C5 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_652(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1307(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_1277(int iParam0) // Position - 0x3413D Hash - 0x96EC57 ^0x2A07EA1A
{
	if (func_1308(iParam0))
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);

	return false;
}

Vector3 func_1278(int iParam0) // Position - 0x34161 Hash - 0x695A7658 ^0x6D3D4EDB
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

BOOL func_1279(int iParam0) // Position - 0x341B3 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_395(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_1209(iParam0))
		return false;

	ped = func_204(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

void func_1280(var uParam0) // Position - 0x34207 Hash - 0x6843C143 ^0xA531F0D1
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

int func_1281(int iParam0) // Position - 0x342AE Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_1282(var uParam0) // Position - 0x342E6 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_1283(var uParam0, Any anParam1, int iParam2) // Position - 0x34312 Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_1309(func_731());

	if (*uParam0)
		func_1282(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_23() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_1284(int iParam0) // Position - 0x34349 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1285(int iParam0, int iParam1) // Position - 0x34360 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_1286(var uParam0, int iParam1) // Position - 0x343A8 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_1253(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_1287(int iParam0, var uParam1) // Position - 0x343D9 Hash - 0xE231A73F ^0x924E070C
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

void func_1288(int iParam0, int iParam1) // Position - 0x3441D Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_1289(int iParam0) // Position - 0x34436 Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_607(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_610(&unk, &num, &num2, false))
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
	
		func_287(num);
	}

	return;
}

Hash func_1290(int iParam0) // Position - 0x34500 Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_1291(int iParam0) // Position - 0x3458F Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_1292(int iParam0) // Position - 0x3461E Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_1293(int iParam0) // Position - 0x346AD Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_1294(int iParam0) // Position - 0x3473C Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_1295(int iParam0) // Position - 0x34785 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_1296(int iParam0) // Position - 0x347CE Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_1297(int iParam0) // Position - 0x34817 Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_1298(int iParam0) // Position - 0x34860 Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_1299(int iParam0) // Position - 0x348A9 Hash - 0x51E02475 ^0x25F7B61
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

Hash func_1300(int iParam0) // Position - 0x348F2 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_1301(int iParam0) // Position - 0x3493B Hash - 0x51E02475 ^0x50FB5131
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

Hash func_1302(int iParam0) // Position - 0x34984 Hash - 0x51E02475 ^0x8656D204
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

int func_1303(Hash hParam0) // Position - 0x349CD Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_190(hParam0, 1064293907))
		return 2;
	else if (func_190(hParam0, -1218707194))
		return 1;
	else if (func_190(hParam0, 1888974372))
		return 0;

	return 1;
}

void func_1304(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x34A12 Hash - 0x26A1604D ^0x9E4BDD24
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;

	if (bParam0)
		Global_1935689.f_5 = 0;

	if (bParam1 || func_1310() && iParam2 == 0)
	{
		func_1311(1);
		func_1312(1);
	}

	return;
}

BOOL func_1305(var uParam0, int iParam1) // Position - 0x34A58 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_1306() // Position - 0x34A78 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

BOOL func_1307(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x34A84 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

BOOL func_1308(int iParam0) // Position - 0x34AB0 Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

int func_1309(int iParam0) // Position - 0x34ACF Hash - 0xB4860741 ^0xB4860741
{
	if (func_23() == -1)
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

BOOL func_1310() // Position - 0x34B26 Hash - 0x79BF13D1 ^0xA856906C
{
	if (Global_1935689.f_9445 != Global_1935689.f_19.f_203 - 1 || func_1313(func_647(0), Global_1935689.f_9440, false) > 0 || Global_1935689.f_9445 == 15)
		return true;

	return false;
}

void func_1311(int iParam0) // Position - 0x34B71 Hash - 0x29A8F290 ^0x82294867
{
	Global_1935689.f_11 = iParam0;
	return;
}

void func_1312(int iParam0) // Position - 0x34B81 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1935689.f_10 = iParam0;
	return;
}

int func_1313(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x34B91 Hash - 0x13E952EA ^0xE3E4C426
{
	int num;

	if (func_1314())
	{
		num = func_1315(hParam1, false);
	}
	else
	{
		num = func_124(hParam1, bParam2, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
			num = num + func_947(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
	}

	if (hParam1 == Global_1935689.f_1224)
		num = num + 1;

	return num;
}

BOOL func_1314() // Position - 0x34BE5 Hash - 0x41DEC386 ^0x41DEC386
{
	if (func_128(Global_1935689.f_9436, 1) || func_128(Global_1935689.f_9436, 2) || func_128(Global_1935689.f_9436, 4))
		return true;

	return false;
}

int func_1315(Hash hParam0, BOOL bParam1) // Position - 0x34C25 Hash - 0xDC5E36FA ^0x81D9138B
{
	Ped ped;
	int num;

	num = func_124(hParam0, bParam1, false);

	if (func_128(Global_1935689.f_9436, 1))
	{
		ped = func_204(func_395(0));
		num = num + func_947(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_128(Global_1935689.f_9436, 2))
	{
		ped = func_204(func_395(1));
		num = num + func_947(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_128(Global_1935689.f_9436, 4))
	{
		ped = func_204(func_395(6));
		num = num + func_947(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	return num;
}

