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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	char* sLocal_20 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xBDF6E70A ^0x46A98574
{
	var unk;
	BOOL flag;
	float num;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	unk = 4;
	unk.f_5 = 4;
	unk.f_18.f_29 = 1;
	unk.f_49 = 192;
	unk.f_49.f_1 = 9;
	unk.f_49.f_24 = -1;
	unk.f_49.f_27 = -1;
	unk.f_49.f_31 = 4;
	unk.f_49.f_36 = 4;
	unk.f_127 = 15933;
	unk.f_128 = 8192;
	unk.f_131 = -1;
	unk.f_133 = -1;
	unk.f_137 = 11;
	unk.f_154 = -1;
	unk.f_164 = -1;
	unk.f_165 = 1;
	unk.f_167 = joaat("p_campfire02x_combo");
	unk.f_169.f_9 = 1084227584;
	unk.f_169.f_10 = 1073741824;
	unk.f_169.f_30 = 1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_1(&unk);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (func_2(false, false) || !TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_1(&unk);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	unk.f_206 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };
	unk.f_209 = TASK::_GET_SCENARIO_POINT_HEADING(anScriptParam_0.f_1, true);

	if (func_3(&unk))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		func_1(&unk);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	flag = false;

	while (!func_2(false, false) && !flag)
	{
		switch (unk.f_168)
		{
			case 0:
				num = func_4(Global_33, unk.f_206, true);
			
				if (!func_5() || num < 6400f)
				{
					func_6(&(unk.f_128), 8192);
					func_7(&unk, anScriptParam_0.f_2);
					STREAMING::REQUEST_MODEL(unk.f_167, false);
					func_8(&(unk.f_168), 1);
				}
				break;
		
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(unk.f_167))
					func_8(&(unk.f_168), 2);
				break;
		
			case 2:
				unk.f_129 = OBJECT::CREATE_OBJECT(unk.f_167, unk.f_206, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(unk.f_129, unk.f_209);
			
				if (Global_1940063.f_21)
					unk.f_205 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), unk.f_206, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
			
				func_8(&(unk.f_168), 3);
				break;
		
			case 3:
				if (func_3(&unk))
				{
					flag = true;
				}
				else
				{
					num = func_4(Global_33, unk.f_206, true);
				
					if (num < func_9() || !unk.f_169.f_34)
						func_10(&(unk.f_169), &(unk.f_129));
				
					if (!func_11(Global_1940199, 4194304))
						if (num < func_12() || unk.f_130 == 7)
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

void func_1(var uParam0) // Position - 0x2AE Hash - 0xEC0950E0 ^0xEA7C0C5E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_129))
		OBJECT::DELETE_OBJECT(&(uParam0->f_129));

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_205))
		VOLUME::DELETE_VOLUME(uParam0->f_205);

	func_14(uParam0, true);
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x2E3 Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

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

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

BOOL func_3(var uParam0) // Position - 0x3C3 Hash - 0xE818C4D8 ^0x920774D8
{
	int gameTimer;
	int num;

	gameTimer = MISC::GET_GAME_TIMER();

	if (gameTimer - uParam0->f_210 > 1000)
	{
		num = func_15(uParam0->f_206);
	
		if (func_16(num, 8))
			return true;
	
		if (func_16(num, 1) || uParam0->f_211)
			if (func_16(uParam0->f_127, 8192))
				func_17(&(uParam0->f_127), 64);
		else if (func_16(num, 2) && !uParam0->f_211)
			if (!func_16(uParam0->f_127, 8192))
				func_17(&(uParam0->f_127), 128);
		else if (func_18(0, false, true) && !func_19())
			if (func_16(uParam0->f_127, 8192))
				func_17(&(uParam0->f_127), 64);
		else if (!uParam0->f_211)
			if (!func_16(uParam0->f_127, 8192))
				func_17(&(uParam0->f_127), 128);
	
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
	
		uParam0->f_210 = gameTimer;
	}

	return false;
}

float func_4(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x548 Hash - 0x1A58F423 ^0x2317B76D
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

BOOL func_5() // Position - 0x598 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1893611 & true != 0 && func_22() != -1;
}

void func_6(var uParam0, int iParam1) // Position - 0x5B3 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_7(var uParam0, int iParam1) // Position - 0x5C8 Hash - 0xBC9F04F5 ^0x9AB81A22
{
	uParam0->f_49.f_12 = -1711536035;

	switch (iParam1)
	{
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE"):
			func_6(&(uParam0->f_127), 7177);
		
			if (func_23(joaat("upgrade_upg_coffee_kit"), 1))
				func_17(&(uParam0->f_127), 1);
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_FIREPLACE_IN_TOWNS"):
			func_6(&(uParam0->f_127), 7177);
		
			if (func_23(joaat("upgrade_upg_coffee_kit"), 1))
				func_17(&(uParam0->f_127), 1);
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_MP_TWOPOINT"):
			func_6(&(uParam0->f_127), 6144);
		
			if (func_23(joaat("upgrade_upg_coffee_kit"), 1))
				func_17(&(uParam0->f_127), 1);
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_IN_TOWNS"):
			func_6(&(uParam0->f_127), 7817);
			func_17(&(uParam0->f_127), 64);
			uParam0->f_211 = 1;
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_CARAVAN"):
			func_6(&(uParam0->f_127), 6144);
		
			if (func_23(joaat("upgrade_upg_coffee_kit"), 1))
				func_17(&(uParam0->f_127), 1);
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_TWOPOINT"):
			func_6(&(uParam0->f_127), 6144);
		
			if (func_23(joaat("upgrade_upg_coffee_kit"), 1))
				func_17(&(uParam0->f_127), 1);
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT_IN_TOWNS"):
			func_6(&(uParam0->f_127), 7817);
			func_17(&(uParam0->f_127), 64);
			uParam0->f_169.f_4 = 1;
			uParam0->f_211 = 1;
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE"):
			func_6(&(uParam0->f_127), 7817);
			func_17(&(uParam0->f_127), 64);
			uParam0->f_211 = 1;
			break;
	
		case joaat("WB_INTERACTIVE_CAMPFIRE_DFLT"):
			func_6(&(uParam0->f_127), 9);
		
			if (func_23(joaat("upgrade_upg_coffee_kit"), 1))
				func_17(&(uParam0->f_127), 1);
			break;
	
		case joaat("WB_NON_INTERACTIVE_CAMPFIRE_UNDERPOT"):
			func_6(&(uParam0->f_127), 7817);
			func_17(&(uParam0->f_127), 64);
			uParam0->f_169.f_4 = 1;
			uParam0->f_211 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_8(var uParam0, int iParam1) // Position - 0x77B Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

float func_9() // Position - 0x788 Hash - 0x8E2CC967 ^0x4E3A5520
{
	if (func_11(Global_1940199, 4194304))
		return 1600f;

	if (func_5())
		if (func_22() == 5)
			return 3600f;
		else
			return 6400f;

	return 10000f;
}

void func_10(var uParam0, var uParam1) // Position - 0x7CE Hash - 0xC4918888 ^0x444C63FE
{
	float value;
	float rainLevel;

	value = 0.019f;
	func_24(uParam0);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		rainLevel = MISC::GET_RAIN_LEVEL();
	
		if (rainLevel > 0f && uParam0->f_9 >= 1f && !uParam0->f_3)
			func_25(uParam0, 4);
		else if (uParam0->f_5)
			func_25(uParam0, 0);
		else if (uParam0->f_2)
			func_25(uParam0, 2);
		else if (uParam0->f_3)
			func_25(uParam0, 5);
		else if (uParam0->f_6)
			func_25(uParam0, 6);
		else if (uParam0->f_7)
			func_25(uParam0, 7);
		else if (uParam0->f_8)
			func_25(uParam0, 8);
		else if (func_27(&(uParam0->f_31), func_26()))
			func_28(uParam0);
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
				func_25(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_19);
				STREAMING::REQUEST_MOVE_NETWORK_DEF(sLocal_20);
			}
			else
			{
				if (uParam0->f_5)
					func_25(uParam0, 0);
				else if (uParam0->f_2)
					func_25(uParam0, 2);
				else if (uParam0->f_3)
					func_25(uParam0, 5);
				else if (uParam0->f_6)
					func_25(uParam0, 6);
				else if (uParam0->f_7)
					func_25(uParam0, 7);
				else if (uParam0->f_8)
					func_25(uParam0, 8);
				else
					func_25(uParam0, 0);
			
				uParam0->f_35 = 1;
			}
		
			GRAPHICS::_SET_LIGHTS_TYPE_FOR_ENTITY(*uParam0, 20);
			GRAPHICS::_SET_LIGHTS_COLOR_FOR_ENTITY(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
		
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, true);
			}
		
			uParam0->f_30 = 3;
			break;
	
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_19) && STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(sLocal_20))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_20, 0f, false, sLocal_19, 128);
				uParam0->f_30 = 5;
			}
		
			func_29(&(uParam0->f_31));
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

BOOL func_11(int iParam0, int iParam1) // Position - 0xCC3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_12() // Position - 0xCD2 Hash - 0x43D5F559 ^0x43D5F559
{
	if (func_5())
		if (func_22() == 5)
			return 400f;
		else
			return 1600f;

	return 6400f;
}

int func_13(var uParam0, BOOL bParam1) // Position - 0xD01 Hash - 0x8C25A717 ^0xBEFFD03A
{
	int num;
	ItemSet itemset;
	Hash activeDynamicScenario2;

	func_30(&(uParam0->f_49));

	if (!func_31(Global_33, 0))
		return 0;

	func_32(uParam0);

	if (uParam0->f_130 > 4 && uParam0->f_130 < 10)
		func_33(false);

	if (uParam0->f_130 > 3)
	{
		if (uParam0->f_130 != 10 && uParam0->f_130 != 4)
		{
			CAM::_0x18C3DFAC458783BB();
			func_34(uParam0);
		}
	}
	else if (uParam0->f_130 == 3)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
		{
			num = func_35(uParam0);
		
			if (num >= 0 && num <= 3)
				func_34(uParam0);
		}
		else if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_18));
		}
	}

	if (func_16(uParam0->f_128, 65536))
	{
		if (func_36(Global_33, true, 0, false) != joaat("WEAPON_UNARMED"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("holsterweapon")))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
				func_6(&(uParam0->f_128), 65536);
			}
		}
	}

	switch (uParam0->f_130)
	{
		case 0:
			if (func_37(uParam0))
				func_38(uParam0);
		
			func_39(uParam0);
			func_40(&(uParam0->f_49), 4);
			func_41(uParam0, 1);
			break;
	
		case 1:
			if (func_37(uParam0))
				func_38(uParam0);
		
			if (func_42(uParam0))
				func_41(uParam0, 2);
			break;
	
		case 2:
			if (func_37(uParam0))
				func_38(uParam0);
		
			if (func_43(uParam0))
				func_41(uParam0, 3);
			break;
	
		case 3:
			if (func_37(uParam0))
			{
				AUDIO::_STOP_AUDIO_SCENESET("Player_Campfire_Scenes");
				func_44(&(uParam0->f_49), true, TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) != joaat("WORLD_PLAYER_MP_STEW_POT_DONATION"));
				func_45(&(uParam0->f_49), 2);
				func_6(&(uParam0->f_128), 32768);
				func_38(uParam0);
			}
		
			func_46(uParam0);
		
			if (bParam1)
				return 1;
		
			func_47(8);
		
			if (MISC::GET_GAME_TIMER() - uParam0->f_152 >= 500)
			{
				if (func_48(uParam0))
					func_17(&(uParam0->f_128), 131072);
				else
					func_6(&(uParam0->f_128), 131072);
			
				uParam0->f_152 = MISC::GET_GAME_TIMER();
			}
		
			if (func_49(Global_33, uParam0->f_129, true) > 36f)
			{
				func_50(uParam0);
				func_51(uParam0);
				func_52(8);
				func_41(uParam0, 4);
			
				if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
					CAM::_CAM_DESTROY(&(uParam0->f_18));
			
				return 0;
			}
		
			if (func_16(uParam0->f_127, 64))
			{
				if (func_16(uParam0->f_127, 8192))
				{
					func_53(uParam0, false);
					func_6(&(uParam0->f_127), 8192);
				}
			
				func_6(&(uParam0->f_127), 64);
			}
			else if (func_16(uParam0->f_127, 128))
			{
				if (!func_16(uParam0->f_127, 8192))
				{
					func_53(uParam0, true);
					func_17(&(uParam0->f_127), 8192);
				}
			
				func_6(&(uParam0->f_127), 128);
			}
		
			uParam0->f_131 = func_35(uParam0);
		
			if (uParam0->f_131 != -1)
			{
				func_54();
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
				itemset = ITEMSET::CREATE_ITEMSET(true);
			
				if (func_55(&itemset, uParam0->f_5[uParam0->f_131 /*3*/], 0.75f) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
				{
					if (func_16(uParam0->f_128, 32768) || func_56(16))
					{
						func_52(16);
						func_6(&(uParam0->f_128), 32768);
					}
				
					TASK::CLEAR_PED_TASKS(Global_33, true, false);
				}
			
				ITEMSET::DESTROY_ITEMSET(itemset);
			}
		
			if (func_57(false) && uParam0->f_131 != -1)
			{
				uParam0->f_132 = func_58();
				func_41(uParam0, 5);
			
				if (func_56(16) || func_16(uParam0->f_128, 32768))
				{
					if (func_56(64))
					{
						func_52(16);
						func_45(&(uParam0->f_49), 2);
						func_59(uParam0, 0);
						func_41(uParam0, 7);
					}
				}
			
				func_51(uParam0);
			}
			else
			{
				func_60(uParam0);
				func_61(uParam0);
			
				if (!func_56(128) && func_16(uParam0->f_127, 8192))
				{
					if (func_16(uParam0->f_128, 131072) && func_49(Global_33, uParam0->f_129, true) <= 9f)
					{
						uParam0->f_151 = func_62(HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
						HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_129, func_16(uParam0->f_127, 16384) ? 1.75f : 3f, 1, 1, 1754796591, uParam0->f_151, 2);
					}
				}
			
				if (func_56(16) && func_16(uParam0->f_128, 8192) || func_16(uParam0->f_128, 32768))
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
					{
						if (uParam0->f_154 != -1 && MISC::GET_GAME_TIMER() - uParam0->f_154 > 1000)
						{
							func_52(16);
							func_6(&(uParam0->f_128), 32768);
							uParam0->f_154 = -1;
							TASK::CLEAR_PED_TASKS(Global_33, true, false);
							uParam0->f_134 = 0;
						}
						else
						{
							uParam0->f_134 = 2;
							func_64(uParam0);
							uParam0->f_154 = MISC::GET_GAME_TIMER();
						
							if (func_56(64))
							{
								func_52(16);
								func_6(&(uParam0->f_128), 32768);
								func_45(&(uParam0->f_49), 2);
								func_59(uParam0, 0);
								func_41(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_134 == 2)
					{
						if (MISC::GET_GAME_TIMER() - uParam0->f_154 > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_33, true, false);
							func_52(16);
							func_6(&(uParam0->f_128), 32768);
							uParam0->f_154 = -1;
							uParam0->f_134 = 0;
						}
					}
				}
			}
			break;
	
		case 4:
			if (func_37(uParam0))
				func_38(uParam0);
		
			if (func_49(Global_33, uParam0->f_129, true) <= 36f)
				func_41(uParam0, 3);
			break;
	
		case 5:
			if (func_37(uParam0))
			{
				AUDIO::_START_AUDIO_SCENESET("idle", "Player_Campfire_Scenes");
				func_38(uParam0);
			}
		
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_PLAYER_CAMP"));
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE"), false);
			func_65();
		
			if (!func_57(true))
			{
				func_33(false);
				uParam0->f_133 = -1;
				func_66(uParam0, 0);
				TASK::_0xFDECCA06E8B81346(Global_33);
				func_41(uParam0, 3);
			}
			else
			{
				if (uParam0->f_131 != -1)
					func_54();
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -996707397))
					func_66(uParam0, false);
				else
					func_66(uParam0, true);
			
				func_67(uParam0);
			
				if (func_68(uParam0, false, 0, -1))
				{
					func_66(uParam0, false);
				
					if (uParam0->f_134 == 2)
					{
						func_45(&(uParam0->f_49), 2);
						func_59(uParam0, 0);
						func_41(uParam0, 7);
					}
					else if (uParam0->f_134 == 0)
					{
						func_41(uParam0, 10);
					}
					else if (uParam0->f_134 == 11 || uParam0->f_134 == 10)
					{
						func_41(uParam0, 9);
					}
					else if (uParam0->f_134 == 12)
					{
						func_41(uParam0, 8);
					}
					else
					{
						func_41(uParam0, 6);
					}
				}
			}
			break;
	
		case 6:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_PLAYER_CAMP"));
		
			if (func_37(uParam0))
				func_38(uParam0);
		
			if (uParam0->f_131 != -1)
			{
				func_54();
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1070143458) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 2000 && !func_16(uParam0->f_128, 4) && uParam0->f_134 != 1)
			{
				if (func_68(uParam0, true, uParam0->f_134, uParam0->f_133))
				{
					if (uParam0->f_134 == 0)
					{
						func_41(uParam0, 10);
						func_50(uParam0);
						return 0;
					}
					else
					{
						func_66(uParam0, false);
						uParam0->f_153 = MISC::GET_GAME_TIMER();
					}
				}
			}
		
			if (func_69(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
			{
				if (uParam0->f_131 == uParam0->f_133 || uParam0->f_133 == -1 || uParam0->f_134 == 1)
				{
					if (uParam0->f_134 != 0)
						uParam0->f_132 = uParam0->f_134;
				
					if (uParam0->f_133 != -1)
						uParam0->f_131 = uParam0->f_133;
					else
						uParam0->f_131 = func_35(uParam0);
				
					uParam0->f_133 = -1;
					func_41(uParam0, 5);
				}
			}
			break;
	
		case 7:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_PLAYER_CAMP"));
		
			if (func_37(uParam0))
			{
				func_74(joaat("consumable_coffee"), 1, true, -142743235);
				func_38(uParam0);
			}
		
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			func_54();
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		
			if (func_75(uParam0, uParam0->f_132) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_33, true) || FIRE::IS_ENTITY_ON_FIRE(Global_33) || TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
			{
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_74(joaat("consumable_coffee"), 1, true, -142743235);
				func_44(&(uParam0->f_49), true, true);
				ATTRIBUTE::STOP_ITEM_PREVIEW();
			
				if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_33, true) || FIRE::IS_ENTITY_ON_FIRE(Global_33) || TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
						CAM::DO_SCREEN_FADE_IN(500);
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
						OBJECT::DELETE_OBJECT(&(uParam0->f_135));
				
					if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
				}
			
				uParam0->f_132 = 6;
				uParam0->f_134 = 6;
				func_29(&(uParam0->f_161));
				func_41(uParam0, 5);
			}
			break;
	
		case 8:
			uParam0->f_134 = 0;
			func_50(uParam0);
		
			if (Global_1148185[Global_1295666 /*10*/].f_9)
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
					CAM::DO_SCREEN_FADE_OUT(1500);
			
				func_41(uParam0, 10);
			}
			else
			{
				func_41(uParam0, 5);
			}
			break;
	
		case 9:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_PLAYER_CAMP"));
		
			if (func_37(uParam0))
				func_38(uParam0);
		
			activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
		
			if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
			{
				if (activeDynamicScenario2 == joaat("world_player_dynamic_camp_fire_kneel_arthur") || activeDynamicScenario2 == joaat("world_player_dynamic_camp_fire_kneel_mp_female_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_squat_female_a"))
				{
					if (uParam0->f_134 == 11)
					{
						if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_71(false), joaat("document_player_journal"), false))
							INVENTORY::_INVENTORY_ENABLE_ITEM(func_71(false), joaat("document_player_journal"));
					
						func_72(joaat("document_player_journal"), false, 0, 0, true, false, false);
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						uParam0->f_134 = 0;
					}
					else if (uParam0->f_134 == 10)
					{
						func_72(1259508039, false, 0, 0, true, false, false);
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						uParam0->f_134 = 0;
					}
					else
					{
						uParam0->f_134 = 0;
						ATTRIBUTE::STOP_ITEM_PREVIEW();
						func_29(&(uParam0->f_161));
						func_41(uParam0, 5);
					}
				}
				else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_sit_female_a"))
				{
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					func_73(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
			}
		
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_134 = 0;
				func_41(uParam0, 5);
			}
			break;
	
		case 10:
			if (func_37(uParam0))
				func_38(uParam0);
		
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_44(&(uParam0->f_49), true, true);
				func_41(uParam0, 3);
			}
			else if (!TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
			{
				func_76(uParam0);
			}
			break;
	
		case 11:
			return 1;
	}

	return 0;
}

void func_14(var uParam0, BOOL bParam1) // Position - 0x18BD Hash - 0xAE9A7CF ^0x460E1DCB
{
	func_50(uParam0);
	func_77(uParam0);
	func_78(uParam0);
	func_51(uParam0);

	if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
		CAM::_CAM_DESTROY(&(uParam0->f_18));

	if (bParam1)
		func_79(uParam0);

	uParam0->f_154 = -1;
	func_6(&(uParam0->f_128), 32768);
	func_44(&(uParam0->f_49), false, true);
	return;
}

int func_15(var uParam0, var uParam1, var uParam2) // Position - 0x1916 Hash - 0xBA229321 ^0xD0164888
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_80(Global_1940063[i /*2*/], uParam0))
			return Global_1940063[i /*2*/].f_1;
	}

	return 0;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x1952 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x1961 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_18(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1972 Hash - 0xB13E2226 ^0x3E0E04BA
{
	if (Global_1572887.f_14 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1900460.f_67;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1900460.f_68;
	
		if (func_81())
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

	if (iParam0 == 0 && func_83(func_82(0)))
		return true;

	if (Global_1940199 && 81919 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1900595)
			return true;

	switch (func_84(func_82(0)))
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

BOOL func_19() // Position - 0x1AE8 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1913634.f_1578;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1AF7 Hash - 0x8417506 ^0x84E0AE81
{
	uParam0->f_169.f_5 = iParam1;
	uParam0->f_169.f_2 = iParam2;
	uParam0->f_169.f_3 = iParam3;
	uParam0->f_169.f_2 = iParam4;
	uParam0->f_169.f_2 = iParam5;
	uParam0->f_169.f_2 = iParam6;
	return;
}

float func_21(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1B2F Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_22() // Position - 0x1B4D Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_23(Hash hParam0, int iParam1) // Position - 0x1B5B Hash - 0x764CD05F ^0xC5F6D4B8
{
	int num;

	if (!func_85(hParam0, 0))
		return false;

	num = func_86(hParam0);

	switch (num)
	{
		case joaat("CLOTHING"):
			if (func_88(hParam0))
				return true;
			break;
	
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
				return true;
			else
				return false;
			break;
	
		case joaat("AMMO"):
			if (!func_87(hParam0, 1))
				return false;
			break;
	}

	return func_89(hParam0, false, false, false) >= iParam1;
}

void func_24(var uParam0) // Position - 0x1BDE Hash - 0xCEA5AC3E ^0x6A2480E3
{
	BOOL flag;

	flag = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_SET_OBJECT_BURN_SPEED(*uParam0, 0.65f + (uParam0->f_11 * 0.35f), 0.65f + (uParam0->f_11 * 0.35f));
	
		if (flag)
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
	
		if (uParam0->f_1)
		{
			OBJECT::_SET_OBJECT_BURN_INTENSITY(*uParam0, uParam0->f_12 * 0.5f);
		
			if (flag)
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
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
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, true);
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
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, true);
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
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
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
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
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
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, true);
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

void func_25(var uParam0, int iParam1) // Position - 0x20D8 Hash - 0x9C85BE14 ^0xA4CB5B25
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

float func_26() // Position - 0x238A Hash - 0xF8C377DF ^0xFED2356E
{
	if (func_11(Global_1940199, 4194304) || func_22() == 5)
		return 1f;

	return 0.5f;
}

BOOL func_27(var uParam0, float fParam1) // Position - 0x23B6 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_90(uParam0))
		return false;

	if (func_91(uParam0) > fParam1)
		return true;

	return false;
}

void func_28(var uParam0) // Position - 0x23DD Hash - 0x449BF52C ^0xF453E01B
{
	int clockHours;

	if (!uParam0->f_1)
	{
		clockHours = CLOCK::GET_CLOCK_HOURS();
	
		if (clockHours >= 2 && clockHours < 4)
			func_25(uParam0, 1);
		else if (clockHours >= 4 && clockHours < 6)
			func_25(uParam0, 2);
		else if (clockHours >= 6 && clockHours < 12)
			func_25(uParam0, 3);
		else if (clockHours >= 12 && clockHours < 17)
			func_25(uParam0, 2);
		else if (clockHours >= 17 && clockHours < 19)
			func_25(uParam0, 1);
		else
			func_25(uParam0, 0);
	
		func_29(&(uParam0->f_31));
	}

	return;
}

void func_29(var uParam0) // Position - 0x2489 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_92(uParam0, 0f);
	return;
}

void func_30(var uParam0) // Position - 0x2498 Hash - 0x79CFFC22 ^0x38269F87
{
	if (uParam0->f_65)
		if (func_93(&(uParam0->f_64), &(uParam0->f_65)))
			uParam0->f_65 = 0;

	if (uParam0->f_67)
		if (func_93(&(uParam0->f_66), &(uParam0->f_67)))
			uParam0->f_67 = 0;

	if (uParam0->f_69)
		if (func_93(&(uParam0->f_68), &(uParam0->f_69)))
			uParam0->f_69 = 0;

	return;
}

BOOL func_31(Ped pedParam0, int iParam1) // Position - 0x24F1 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_94(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_94(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_94(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_94(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_94(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_94(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_94(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_94(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_32(var uParam0) // Position - 0x25F0 Hash - 0x370DB4F8 ^0x23787747
{
	int num;

	if (func_56(16) || uParam0->f_130 == 7)
	{
		num = func_35(uParam0);
	
		if (num != -1)
		{
			if (!func_95(uParam0->f_137[6]))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}

	return;
}

void func_33(BOOL bParam0) // Position - 0x2656 Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_96(4);

	func_96(2);
	MISC::SET_BIT(&(Global_1958634.f_1), 0);
	return;
}

void func_34(var uParam0) // Position - 0x2678 Hash - 0x5DE504EA ^0x21277A8E
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
	args.f_3 = uParam0->f_129;
	args = { 0f, 0f, 0.5f };
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_33, &args);
	flag = false;
	flag2 = false;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
		flag2 = true;

	if (!flag2)
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
			flag = true;

	if (flag2 || flag && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1206250122))
		if (CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_18)))
			if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_18)))
				CAM::_CAM_CREATE(&(uParam0->f_18));

	return;
}

int func_35(var uParam0) // Position - 0x275C Hash - 0xF29C27C3 ^0x17A94483
{
	int scenarioPointPedIsUsing;
	int i;

	scenarioPointPedIsUsing = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenarioPointPedIsUsing) && !TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
	{
		for (i = 0; i < 4; i = i + 1)
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
				if (scenarioPointPedIsUsing == uParam0->[i])
					return i;
		}
	}

	return -1;
}

Hash func_36(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x27B5 Hash - 0xDD2F88C2 ^0x29E97850
{
	Hash weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_37(var uParam0) // Position - 0x27F7 Hash - 0x44744B6C ^0x8ECCE973
{
	return func_16(uParam0->f_128, 512);
}

void func_38(var uParam0) // Position - 0x280A Hash - 0x4C067613 ^0x6790078B
{
	func_6(&(uParam0->f_128), 512);
	return;
}

void func_39(var uParam0) // Position - 0x281D Hash - 0x78239B6 ^0x3D494A9
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
	return;
}

void func_40(var uParam0, int iParam1) // Position - 0x283B Hash - 0xF55E891F ^0xF55E891F
{
	func_17(uParam0, iParam1);
	return;
}

void func_41(var uParam0, int iParam1) // Position - 0x284B Hash - 0xAF6CF42D ^0xAFD7BE34
{
	func_17(&(uParam0->f_128), 512);
	uParam0->f_130 = iParam1;
	return;
}

BOOL func_42(var uParam0) // Position - 0x2864 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_43(var uParam0) // Position - 0x286D Hash - 0xEAE3AB65 ^0x617630FE
{
	Vector3 offsetFromEntityInWorldCoords;
	float heading;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_129))
	{
		if (func_16(uParam0->f_127, 512))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, -0.966f, 0.203f, 0.5f) };
			uParam0->f_5[0 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + -99.171f;
			func_97(&offsetFromEntityInWorldCoords, 1, 10, false, false);
			uParam0->[0] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel1"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		if (func_16(uParam0->f_127, 1024))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, -0.212f, -1.045f, 0.5f) };
			uParam0->f_5[1 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + -11.405f;
			func_97(&offsetFromEntityInWorldCoords, 1, 10, false, false);
			uParam0->[1] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel2"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		if (func_16(uParam0->f_127, 2048))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, 1.025f, 0.043f, 0.5f) };
			uParam0->f_5[2 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + 91.78f;
			func_97(&offsetFromEntityInWorldCoords, 1, 10, false, false);
			uParam0->[2] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel3"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		if (func_16(uParam0->f_127, 4096))
		{
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_129, 0.249f, 1.05f, 0.5f) };
			uParam0->f_5[3 /*3*/] = { offsetFromEntityInWorldCoords + { 1f, 0f, 0f } };
			heading = ENTITY::GET_ENTITY_HEADING(uParam0->f_129) + 164.29f;
			func_97(&offsetFromEntityInWorldCoords, 1, 10, false, false);
			uParam0->[3] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("world_player_camp_fire_kneel4"), offsetFromEntityInWorldCoords, heading, 0, 0, false);
		}
	
		return true;
	}

	return false;
}

void func_44(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2A3C Hash - 0xBD6378D ^0x3A96DB60
{
	func_98(uParam0);

	if (bParam2)
	{
		func_99(uParam0, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
	}

	if (func_100())
		func_101(false);

	if (bParam1)
	{
		func_102(uParam0);
		return;
	}

	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_21));

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_49);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_50);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_51);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_52);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_53);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_54);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_55);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_56);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_57);

	func_93(&(uParam0->f_64), &(uParam0->f_65));
	func_93(&(uParam0->f_66), &(uParam0->f_67));
	func_93(&(uParam0->f_68), &(uParam0->f_69));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913634.f_1576 = 0;

	if (func_103(uParam0, 2))
		TASK::CLEAR_PED_TASKS(Global_33, true, false);

	if (func_104() == -1)
	{
		func_45(uParam0, 18);
	}
	else
	{
		if (uParam0->f_11 == 11)
		{
			if (uParam0->f_24 == -1)
			{
				func_105(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_106(uParam0->f_62, uParam0->f_23);
			}
		}
	
		if (!func_107(false) || func_108())
		{
			if (uParam0->f_28 > 0 && func_85(uParam0->f_62, 0))
			{
				uParam0->f_24 = func_105(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
			
				if (uParam0->f_12 == 2133510819)
					func_110(func_109(joaat("MADE"), -444296448), uParam0->f_28);
			
				uParam0->f_28 = 0;
			}
		}
	
		uParam0->f_24 = -1;
		func_45(uParam0, 0);
	}

	return;
}

void func_45(var uParam0, int iParam1) // Position - 0x2C37 Hash - 0x78EEA7AE ^0xF814F543
{
	if (uParam0->f_11 != iParam1)
	{
		uParam0->f_11 = iParam1;
		func_111(uParam0);
	}

	return;
}

void func_46(var uParam0) // Position - 0x2C54 Hash - 0xBB8AE480 ^0xD761F4FE
{
	if (!CAM::_IS_CAM_DATA_DICT_LOADED(&(uParam0->f_18)))
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_18)))
			CAM::_LOAD_CAMERA_DATA_DICT(&(uParam0->f_18));

	return;
}

void func_47(BOOL bParam0) // Position - 0x2C7C Hash - 0xA895CE6F ^0xA895CE6F
{
	if (!func_56(bParam0))
		Global_1958675 = Global_1958675 || bParam0;

	return;
}

BOOL func_48(var uParam0) // Position - 0x2C99 Hash - 0x7BBC2246 ^0x60E2AA3A
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;

	func_6(&(uParam0->f_128), 1024);

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
		
			if (ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex))
				func_17(&(uParam0->f_128), 1024);
			else
				return false;
		}
		else
		{
			return false;
		}
	}

	if (func_56(32) || !func_16(uParam0->f_127, 8192))
		return false;

	if (func_112(Global_33, 0))
		return false;

	if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
		return false;

	if (PED::GET_PED_CONFIG_FLAG(Global_33, 227, true))
		return false;

	if (func_113(Global_33))
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		return false;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
		return false;

	if (func_114(Global_33) || func_115(Global_33) || func_116(Global_33))
		return false;

	if (!func_117(Global_33, uParam0->f_129, -0.5f))
		return false;

	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_129, true, false), 1.5f) > 2)
		return false;

	if (func_104() == -1)
		if (func_118())
			return false;
	else if (func_118() && !(Global_1915656.f_20241 == 28 || Global_1915656.f_20241 == 27 || Global_1915656.f_20241 == 29))
		return false;

	if (func_119(uParam0) == -1)
		return false;

	return true;
}

float func_49(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x2E29 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));

	return func_21(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false));
}

void func_50(var uParam0) // Position - 0x2E80 Hash - 0xB206FC30 ^0xA23AC0E
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (func_95(uParam0->f_137[i]))
			func_120(&uParam0->f_137[i], true, true);
	}

	return;
}

void func_51(var uParam0) // Position - 0x2EB8 Hash - 0x93025714 ^0x9B089633
{
	func_120(&(uParam0->f_150), true, true);
	func_120(&(uParam0->f_149), true, true);
	return;
}

void func_52(BOOL bParam0) // Position - 0x2ED4 Hash - 0x210BBB81 ^0x210BBB81
{
	if (func_56(bParam0))
		Global_1958675 = Global_1958675 - Global_1958675 && bParam0;

	return;
}

void func_53(var uParam0, BOOL bParam1) // Position - 0x2EF5 Hash - 0xB1384C92 ^0xF7936BD1
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0->[i], 8, !bParam1);
	}

	return;
}

void func_54() // Position - 0x2F2B Hash - 0x3C4FB117 ^0x5AB11B80
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
	return;
}

BOOL func_55(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x2F54 Hash - 0xE7188A39 ^0x4A1164B3
{
	Volume volume;
	int matchingEntities;
	int i;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;
	Ped pedIndexFromEntityIndex;

	volume = VOLUME::CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, iParam4, iParam4, 1f);

	if (func_121(&vParam1, 1073741824))
	{
		func_122(volume);
		return true;
	}

	matchingEntities = ENTITY::GET_MATCHING_ENTITIES(volume, *uParam0, 1, 1, 0, 0);

	for (i = 0; i < matchingEntities; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
	
		if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
		
			if (pedIndexFromEntityIndex != Global_33)
			{
				if (PED::_GET_CARRIER_AS_PED(pedIndexFromEntityIndex) != Global_33)
				{
					func_122(volume);
					return true;
				}
			}
		}
	}

	func_122(volume);
	return false;
}

BOOL func_56(int iParam0) // Position - 0x2FF4 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1958675 && iParam0 != false;
}

BOOL func_57(BOOL bParam0) // Position - 0x3005 Hash - 0xC21D209 ^0xD76B285F
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && !TASK::IS_PED_EXITING_SCENARIO(Global_33, true))
			if (TASK::_PED_IS_IN_SCENARIO_BASE(Global_33) || bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) || TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_33) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_33, "SCENARIO_POINT_TRANS_COMPLETE") || func_56(16) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")))
				return true;

	return false;
}

int func_58() // Position - 0x308E Hash - 0x282964D2 ^0x331DF962
{
	Hash activeDynamicScenario2;

	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);

	switch (activeDynamicScenario2)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COFFEE_ARTHUR"):
			return 1;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT_MP_FEMALE_A"):
		case joaat("world_player_dynamic_kneel_post_fire_craft"):
			return 4;
	
		case joaat("world_player_camp_fire_sit_male_a"):
		case joaat("world_player_camp_fire_sit_female_a"):
			return 7;
	
		case joaat("world_player_camp_fire_squat_male_a"):
		case joaat("world_player_camp_fire_squat_female_a"):
			return 8;
	
		case joaat("world_player_dynamic_kneel_fire_craft"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			return 3;
	
		case joaat("world_player_dynamic_camp_fire_kneel_arthur"):
		case joaat("world_player_dynamic_camp_fire_kneel_mp_female_a"):
			return 6;
	
		default:
		
	}

	return 0;
}

void func_59(var uParam0, int iParam1) // Position - 0x3103 Hash - 0x4F8BE4B5 ^0xA476C647
{
	uParam0->f_125 = iParam1;
	return;
}

void func_60(var uParam0) // Position - 0x3111 Hash - 0x93B6D240 ^0xD59CEA40
{
	if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && func_16(uParam0->f_128, 131072) && !PED::IS_PED_CARRYING_SOMETHING(Global_33) && !WEAPON::_0x0DE0944ECCB3DF5D(Global_33))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_129))
		{
			if (!func_95(uParam0->f_149))
			{
				uParam0->f_149 = func_123("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_129, 1, 1, true, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, 0);
			}
			else if (func_124(uParam0->f_149, true))
			{
				func_64(uParam0);
				func_51(uParam0);
				func_6(&(uParam0->f_128), 131072);
			}
		}
	}
	else
	{
		func_125(uParam0);
	}

	if (func_95(uParam0->f_149))
		func_126(uParam0->f_149, 1754796591, 0, true);

	return;
}

void func_61(var uParam0) // Position - 0x31E0 Hash - 0xC4FE0C4D ^0xF8002F85
{
	if (func_16(uParam0->f_128, 131072))
	{
		if (!func_95(uParam0->f_150))
		{
			if (func_127(uParam0))
			{
				uParam0->f_150 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_129, 1, 1, true, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, 0);
				MISC::SET_BIT(&(Global_1958634.f_1), 2);
				MISC::SET_BIT(&(Global_1958634.f_1), 3);
			
				if (func_16(uParam0->f_128, 1024))
				{
					if (func_128(uParam0))
					{
						func_129(uParam0->f_150, "CAMP_REC_COOK", true);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
						func_130(uParam0->f_150, false, true, true);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) || WEAPON::_0x0DE0944ECCB3DF5D(Global_33) || func_131(872480335) || func_131(joaat("camera_item")) || func_132() || Global_1940199.f_38 == 332793555)
		{
			func_51(uParam0);
			func_6(&(uParam0->f_128), 131072);
		}
		else if (func_56(16) || func_16(uParam0->f_128, 32768))
		{
			func_52(16);
			func_17(&(uParam0->f_128), 32768);
			func_51(uParam0);
			func_6(&(uParam0->f_128), 131072);
		}
		else
		{
			if (func_16(uParam0->f_128, 1024) != func_16(uParam0->f_128, 2048))
			{
				if (func_16(uParam0->f_128, 1024))
				{
					if (func_128(uParam0) && !func_95(Global_1940085.f_85))
					{
						func_129(uParam0->f_150, "CAMP_REC_COOK", true);
						func_130(uParam0->f_150, true, true, true);
						func_17(&(uParam0->f_128), 4096);
					}
					else
					{
						func_120(&(uParam0->f_150), true, true);
						uParam0->f_150 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_129, 0, 1, true, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, 0);
						func_130(uParam0->f_150, false, true, true);
						func_6(&(uParam0->f_128), 4096);
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1958634.f_1), 2);
					MISC::SET_BIT(&(Global_1958634.f_1), 3);
					func_120(&(uParam0->f_150), true, true);
					uParam0->f_150 = func_123("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_129, 0, 1, true, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, joaat("MEDIUM_TIMED_EVENT"), false, 0);
				}
			
				if (func_16(uParam0->f_128, 1024))
					func_17(&(uParam0->f_128), 2048);
				else
					func_6(&(uParam0->f_128), 2048);
			}
		
			if (func_124(uParam0->f_150, true))
			{
				func_17(&(uParam0->f_128), 32768);
				MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
				func_51(uParam0);
				func_6(&(uParam0->f_128), 131072);
			
				if (func_16(uParam0->f_128, 1024))
					if (func_128(uParam0))
						func_17(&(uParam0->f_128), 4096);
					else
						func_6(&(uParam0->f_128), 4096);
			
				if (func_16(uParam0->f_128, 1024) && func_16(uParam0->f_128, 4096))
					func_47(64);
			}
		}
	}
	else
	{
		func_120(&(uParam0->f_150), true, true);
	}

	if (func_95(uParam0->f_150))
		func_126(uParam0->f_150, 1754796591, 0, true);

	return;
}

char* func_62(int iParam0) // Position - 0x351D Hash - 0xEB40D7A4 ^0x8A912124
{
	return "CAMPFIRE";
}

var func_63(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3529 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_64(var uParam0) // Position - 0x3540 Hash - 0xC041CF44 ^0x84A39F5
{
	int num;
	int num2;
	BOOL flag;

	num = func_119(uParam0);

	if (num == -1)
	{
		func_52(64);
		func_52(16);
		func_6(&(uParam0->f_128), 32768);
		uParam0->f_134 = 0;
		return;
	}

	if (func_56(64))
	{
		func_133(Global_33, true, true);
	
		switch (num)
		{
			case 0:
			case 3:
				uParam0->f_134 = 2;
				TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432, false);
				uParam0->f_132 = 6;
				uParam0->f_131 = 0;
				break;
		
			case 1:
			case 2:
				uParam0->f_134 = 2;
				TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432, false);
				uParam0->f_132 = 6;
				uParam0->f_131 = 1;
				break;
		}
	
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (num)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				num2 = 0;
			
				if (func_56(16) || func_16(uParam0->f_128, 32768) || func_134(684307653, &num2) || func_134(562107429, &num2))
				{
					flag = true;
				
					if (func_135(0) || func_135(1))
						flag = false;
				
					if (flag)
						PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 3f);
				
					if (PED::IS_PED_MALE(Global_33))
						TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432, false);
					else
						TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1082130432, false);
				}
				else if (uParam0->f_134 == 1)
				{
					if (PED::IS_PED_MALE(Global_33))
						TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432, false);
					else
						TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1082130432, false);
				}
				else if (func_136())
				{
					if (PED::IS_PED_MALE(Global_33))
						TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1082130432, false);
					else
						TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1082130432, false);
				}
				else if (PED::IS_PED_MALE(Global_33))
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1082130432, false);
				}
				else
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_33, uParam0->[num], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1082130432, false);
				}
				break;
		}
	
		uParam0->f_131 = num;
	}

	return;
}

void func_65() // Position - 0x37CA Hash - 0x85CA3607 ^0x701C8A8F
{
	if (func_85(joaat("weapon_kit_binoculars"), 0))
		func_137(32);

	if (func_85(joaat("weapon_kit_binoculars_improved"), 0))
		func_137(32);

	if (func_85(joaat("weapon_kit_camera"), 0))
		func_137(64);

	if (func_85(332793555, 0))
		func_137(131072);

	return;
}

void func_66(var uParam0, BOOL bParam1) // Position - 0x3820 Hash - 0xD306285E ^0x70997722
{
	int i;

	for (i = 0; i < 11; i = i + 1)
	{
		if (func_95(uParam0->f_137[i]))
		{
			if (func_138(uParam0->f_137[i], false) == bParam1)
			{
			}
			else
			{
				func_130(uParam0->f_137[i], bParam1, true, true);
			}
		}
	}

	return;
}

void func_67(var uParam0) // Position - 0x386F Hash - 0x129344C1 ^0xA6B0ED79
{
	Hash activeDynamicScenario2;
	int num;

	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
	num = 0;

	if (activeDynamicScenario2 == joaat("world_player_dynamic_camp_fire_kneel_arthur") || activeDynamicScenario2 == joaat("world_player_dynamic_camp_fire_kneel_mp_female_a"))
	{
		if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500 && !func_16(uParam0->f_128, 32768) && !func_56(16) && uParam0->f_134 != 1 && !func_134(684307653, &num) && !func_134(562107429, &num))
		{
			func_29(&(uParam0->f_161));
			func_73(joaat("KNEEL_TRANS_SQUAT"), 0.5f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
	else if (activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_squat_female_a"))
	{
		if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
		{
			if (!func_90(&(uParam0->f_161)))
				func_29(&(uParam0->f_161));
		
			if (func_27(&(uParam0->f_161), 180f))
			{
				func_29(&(uParam0->f_161));
			
				if (!func_136())
				{
					func_73(joaat("SQUAT_TRANS_SIT"), 0.5f);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_sit_female_a"))
	{
		if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
		{
			if (!func_90(&(uParam0->f_161)))
				func_29(&(uParam0->f_161));
		
			if (func_27(&(uParam0->f_161), 10f))
			{
				if (func_136())
				{
					func_29(&(uParam0->f_161));
					uParam0->f_153 = MISC::GET_GAME_TIMER();
					func_73(joaat("SIT_TRANS_SQUAT"), 0.5f);
				}
			}
		}
	}
	else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
		{
			func_73(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
	else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
		{
			func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

BOOL func_68(var uParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x3AB8 Hash - 0x682ADE01 ^0x70375CF5
{
	int num;
	int num2;
	int num3;
	int num4;

	if (bParam1)
	{
		num3 = iParam2;
	
		if (iParam3 != -1)
			num2 = iParam3;
		else
			num2 = uParam0->f_131;
	}
	else
	{
		num2 = uParam0->f_131;
		num3 = uParam0->f_132;
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
			
				case 12:
					num = 0;
					break;
			
				default:
					if (func_104() != 0 || func_16(uParam0->f_128, 64))
						num = 1593362;
					else
						num = 20498;
					break;
			}
			break;
	
		case 2:
		case 3:
			if (num3 == 3 || num3 == 4 || num3 == 1 || num3 == 12)
				num = 0;
			else if (func_104() != 0 || func_16(uParam0->f_128, 64))
				num = 1593362;
			else
				num = 20498;
			break;
	}

	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) || func_16(uParam0->f_128, 16384))
	{
		num = 0;
	}
	else if (func_112(Global_33, 0) || WEAPON::_0x0DE0944ECCB3DF5D(Global_33))
	{
		if (!func_16(uParam0->f_128, 32))
		{
			func_139(207, true);
			func_17(&(uParam0->f_128), 32);
		}
	
		num = 16;
	}

	func_140(uParam0, num);
	num4 = func_141(uParam0);

	if (uParam0->f_134 == 2)
		if (num4 == 2)
			func_66(uParam0, false);
		else
			uParam0->f_134 = 0;

	if (num4 != -1)
		if (uParam0->f_133 != -1)
			uParam0->f_131 = uParam0->f_133;

	switch (num4)
	{
		case 0:
			func_98(&(uParam0->f_49));
			func_45(&(uParam0->f_49), 1);
			uParam0->f_134 = 6;
			break;
	
		case 1:
			uParam0->f_134 = 0;
			func_50(uParam0);
			break;
	
		case 2:
			func_45(&(uParam0->f_49), 2);
			func_59(uParam0, 0);
			func_40(&(uParam0->f_49), 32);
			uParam0->f_134 = 2;
			func_50(uParam0);
			func_41(uParam0, 7);
			break;
	
		case 6:
			func_50(uParam0);
			uParam0->f_134 = 10;
			return true;
	
		case 8:
			func_50(uParam0);
			func_17(&(uParam0->f_128), 16384);
			break;
	
		case 10:
			Global_1148185[Global_1295666 /*10*/].f_8 = 1;
			func_50(uParam0);
			func_41(uParam0, 8);
			uParam0->f_134 = 12;
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_69(var uParam0) // Position - 0x3D34 Hash - 0x7DABFF90 ^0x3F17565
{
	switch (uParam0->f_131)
	{
		case 0:
			return func_142(uParam0);
	
		case 1:
			return func_143(uParam0);
	
		case 2:
			return func_144(uParam0);
	
		case 3:
			return func_145(uParam0);
	}

	func_50(uParam0);
	return false;
}

BOOL func_70(var uParam0) // Position - 0x3D95 Hash - 0x499F1BE8 ^0x3CD6670C
{
	BOOL flag;
	BOOL flag2;
	int num;

	flag = PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33);
	flag2 = PED::_0x2DC0E8DCBD3546E9(Global_33);

	if (flag || flag2 && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1944546609))
		return false;

	if (flag2 && uParam0->f_133 != -1)
	{
		num = func_35(uParam0);
	
		if (num != uParam0->f_133)
			return false;
	
		if (uParam0->f_131 != num)
		{
			uParam0->f_131 = num;
			return false;
		}
	}

	if (func_146())
		return false;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		return false;

	return true;
}

int func_71(BOOL bParam0) // Position - 0x3E24 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_104() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_72(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3E65 Hash - 0xDA2A1E8C ^0x19FF9E67
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

	if (func_147())
	{
		Global_1940252.f_11589 = hParam0;
		func_148(hParam0, 1, -142743235, false, false);
		return 0;
	}

	if (!func_149(hParam0, bParam4))
		return 0;

	if (func_150(hParam0))
		return 0;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 108107462))
		return 0;

	flag = true;
	num2 = 1;
	num.f_4 = iParam3;
	num.f_5 = 1;

	if (hParam0 == -418848773)
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");

	if (func_151(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}

	if (func_152(hParam0, -2081717885))
		func_153(hParam0, unk10, num, unk26, flag, num2);
	else if (func_152(hParam0, -1909684001))
		func_154(hParam0, unk10, num, flag, num2);
	else if (func_152(hParam0, 587975446))
		func_155(hParam0, unk10);
	else if (func_152(hParam0, 566155764))
		if (!func_156(hParam0))
			return 0;

	if (func_157(hParam0))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_158(hParam0, bParam5, bParam6, bParam1))
	{
		Global_1913442 = hParam0;
		Global_1913633 = MISC::GET_GAME_TIMER();
		return 1;
	}

	if (func_152(hParam0, -1227898937))
	{
		num.f_2 = hParam0;
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "doc_newspaper", 32);
		unk10.f_14 = 1024;
		unk10.f_15 = 1;
		func_159(unk10, 1);
		num2 = 0;
		flag = false;
	}
	else if (func_152(hParam0, -1472964441) || func_152(hParam0, -228153877) || func_152(hParam0, 566155764))
	{
	}
	else if (func_152(hParam0, 1919582297))
	{
		if (func_160() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true) || !PED::IS_PED_ON_FOOT(Global_33))
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
		func_159(unk10, 0);
		flag = false;
	}
	else if (func_161(hParam0))
	{
		num.f_3 = 0;
		num.f_1 = hParam0;
		num.f_2 = 0;
		num = func_162(Global_1072759.f_28313.f_25.f_67);
		unk10 = { num };
		TEXT_LABEL_ASSIGN_STRING(&(unk10.f_10), "net_player_wheel_item_use", 32);
		unk10.f_14 = 512;
		unk10.f_15 = 1;
		func_159(unk10, 0);
		num2 = 1;
	}
	else if (func_86(hParam0) == joaat("CLOTHING"))
	{
		if (!func_163(hParam0))
		{
			func_164("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, true);
			return num2;
		}
	
		hash = func_165(hParam0);
	
		switch (hash)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				flag2 = func_166();
				break;
		
			default:
				flag2 = true;
				break;
		}
	
		if (!flag2)
		{
			if (func_167(PLAYER::PLAYER_ID()))
				func_164("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, true);
			else
				func_164("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, true);
		
			return num2;
		}
	
		if (hash == -999503751)
		{
			if (Global_1953292.f_1676 != hParam0)
				func_168(20, hParam0, 0, 0, false);
		}
		else
		{
			switch (hash)
			{
				case -2061583405:
					func_170(hParam0);
					func_168(35, 0, 0, 0, false);
					return 1;
			
				case -1719060085:
					if (hParam0 == Global_1953292.f_1676.f_1[23 /*3*/])
					{
						func_171(Global_33, 260271636, 0, -358215195, true, true, true, true, false, true, true, false);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_172(hParam0, false, false);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_172(hParam0, true, false);
					}
					break;
			
				case -525676072:
				case -68128151:
				case 81053684:
					func_169(hParam0, false);
					return num2;
			
				case 119907797:
				case 1388798186:
					if (hParam0 == Global_1953292.f_1676.f_1[10 /*3*/])
					{
						func_171(Global_33, Global_1953292.f_83[10 /*12*/], 0, -358215195, true, true, true, true, false, true, true, false);
						func_172(hParam0, false, false);
						return 1;
					}
					else
					{
						func_172(hParam0, true, false);
						func_173(-2061583405, false);
					
						if (hash == 1388798186)
							func_173(119907797, false);
						else if (hash == 119907797)
							func_173(1388798186, false);
					}
					break;
			
				default:
					if (!func_152(hParam0, 160827531))
						break;
				
					func_169(hParam0, false);
					break;
			}
		
			func_171(Global_33, hParam0, 0, -358215195, true, true, true, false, false, true, true, false);
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
				func_186(true);
				break;
		
			case joaat("kit_camp"):
			case joaat("kit_camp_simple"):
				if (func_163(joaat("kit_camp")))
				{
					if (func_180(1, 1))
					{
						func_181(2, true);
					}
					else if (func_182(1))
					{
						func_164("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, true);
					}
					else if (func_183())
					{
						func_164("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
					}
					else
					{
						if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
							func_184();
						else
							func_164("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					
						func_185(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
					}
				}
				else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					func_164("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, true);
					func_185(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
				}
				else if (func_183())
				{
					func_164("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, true);
				}
				else
				{
					func_164("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, true);
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
					func_159(unk10, 0);
				}
			
				return 1;
		
			case -1115561122:
				if (Global_1148185[PLAYER::PLAYER_ID() /*10*/].f_4)
					func_164("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, true);
				else
					func_187();
			
				return 1;
		
			case joaat("weapon_kit_camera"):
			case 332793555:
				if (func_36(Global_33, true, 0, false) != hParam0)
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case joaat("kit_gun_oil"):
			case joaat("upgrade_upg_coffee_kit"):
				func_139(535, true);
				break;
		
			case joaat("kit_wardrobe"):
				if (func_104() != -1)
					break;
			
				if (!func_163(hParam0))
				{
					func_164("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, true);
					break;
				}
			
				flag2 = func_175(7, hParam0);
				flag3 = func_175(1, hParam0);
			
				if (flag3 && !flag2)
				{
					if (MAP::DOES_BLIP_EXIST(Global_17339))
						MAP::REMOVE_BLIP(&Global_17339);
				
					Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
					MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
					func_164(MISC::VAR_STRING(0, -1680440926, Global_17339), 10000, 0, 0, 0, true);
					break;
				}
			
				if (!func_176(7))
				{
					func_164("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, true);
					break;
				}
			
				if (!flag2)
				{
					if (func_178(Global_33, func_177(7), false))
					{
						func_164("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, true);
					}
					else
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
							MAP::REMOVE_BLIP(&Global_17339);
					
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
						MAP::BLIP_ADD_MODIFIER(Global_17339, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
						func_164(MISC::VAR_STRING(0, -482898802, Global_17339), 10000, 0, 0, 0, true);
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
					func_159(unk10, 0);
				}
				break;
		
			case joaat("document_player_journal"):
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("document_player_journal"), 1928812891, 1, 0, -1082130432);
				flag = false;
				return 1;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				if (!WEAPON::_IS_WEAPON_BINOCULARS(func_36(Global_33, true, 0, false)))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, hParam0, false, 0, false, false);
			
				return 1;
		
			case 1259508039:
				func_174(true, 0);
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
					func_159(unk10, 0);
				}
			
				return 1;
		
			case joaat("KIT_HANDHELD_CATALOG"):
				func_179();
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

BOOL func_73(Hash hParam0, int iParam1) // Position - 0x47FA Hash - 0x5F8A3D76 ^0xE479C78A
{
	if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, hParam0))
	{
		PED::_GIVE_PED_HASH_COMMAND(Global_33, hParam0, iParam1);
		PED::_ADD_SCENARIO_TRANSITION(Global_33);
		return false;
	}

	return true;
}

BOOL func_74(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x4829 Hash - 0x6E56F3C0 ^0x23695AE
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;
	var unk2;

	if (!func_85(hParam0, 0))
		return false;

	if (hParam3 == -142743235)
		if (func_188(hParam0))
			hParam3 = 562618531;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_189(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return false;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_190(hParam0, -iParam1, flag, flag2, flag3, false, false);
	
		return false;
	}

	if (!func_23(hParam0, 1))
		return false;

	statId = { func_191(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_89(hParam0, false, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_89(hParam0, false, false, false) - iParam1 < 0)
		{
			func_74(hParam0, func_89(hParam0, false, false, false), bParam2, hParam3);
			return false;
		}
	}

	if (func_86(hParam0) == joaat("WEAPON"))
	{
		if (!func_192(hParam0, iParam1, false, hParam3))
			return false;
	}
	else if (!func_148(hParam0, iParam1, hParam3, bParam2, false))
	{
		return false;
	}
	else
	{
		unk2 = { func_193(hParam0, false, 0) };
	
		if (func_107(false) && unk2.f_4 == joaat("SLOTID_SATCHEL"))
			func_194(1, false, 0);
	}

	if (hParam0 == joaat("document_player_journal"))
		Global_1940085.f_21 = 0;

	if (!func_107(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_190(hParam0, -iParam1, flag, flag2, flag3, false, false);

	return true;
}

BOOL func_75(var uParam0, var uParam1) // Position - 0x49DB Hash - 0xCC43139 ^0xCC43139
{
	if (func_195(uParam0))
		return true;

	return false;
}

void func_76(var uParam0) // Position - 0x49F1 Hash - 0xDBBE3F06 ^0xAB9F39D6
{
	Hash activeDynamicScenario2;

	if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 250)
	{
		activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
	
		if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
		{
			func_73(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
		else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
		{
			func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33) && MISC::GET_FRAME_COUNT() % 2 == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
		}
	}

	return;
}

void func_77(var uParam0) // Position - 0x4AA2 Hash - 0xDC8A866B ^0xDE8832FE
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
			TASK::_DELETE_SCENARIO_POINT(uParam0->[i]);
	}

	return;
}

void func_78(var uParam0) // Position - 0x4AD3 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_79(var uParam0) // Position - 0x4ADB Hash - 0x9E031D4F ^0x978C731F
{
	uParam0->f_130 = 0;
	uParam0->f_131 = -1;
	uParam0->f_132 = 0;
	uParam0->f_133 = -1;
	uParam0->f_134 = 0;
	uParam0->f_129 = 0;
	return;
}

BOOL func_80(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x4B01 Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

BOOL func_81() // Position - 0x4B21 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_83(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

struct<2> func_82(int iParam0) // Position - 0x4B79 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_83(var uParam0, var uParam1) // Position - 0x4B8D Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_196(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_197(uParam0))
		return false;

	return true;
}

int func_84(var uParam0, var uParam1) // Position - 0x4BC1 Hash - 0x72C53F65 ^0x72C53F65
{
	return uParam0;
}

BOOL func_85(Hash hParam0, int iParam1) // Position - 0x4BCB Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_86(Hash hParam0) // Position - 0x4BE5 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_85(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_87(Hash hParam0, int iParam1) // Position - 0x4C10 Hash - 0x2A2D0794 ^0xC823165
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_85(hParam0, 0))
		return false;

	if (Global_1940199.f_6)
		return false;

	hash = func_189(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_198("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_199(&unk, i, num, num2))
			{
			}
			else if (!func_200(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_201(num);
				return true;
			}
		}
	
		func_201(num);
	}

	return false;
}

BOOL func_88(Hash hParam0) // Position - 0x4CB8 Hash - 0x52397408 ^0x52397408
{
	Hash hash;
	int num;
	int num2;

	if (!func_85(hParam0, 0))
		return false;

	hash = func_165(hParam0);

	switch (hash)
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

	num = func_202(hParam0);

	if (!(num == 0))
	{
		num2 = func_203(&(Global_17418.f_55.f_664.f_1354.f_5), num);
	
		if (num2 == -1)
			return true;
	}

	num = func_204(hParam0);
	num2 = func_203(&(Global_17418.f_55.f_664.f_1354.f_5), num);

	if (num2 == -1)
		return false;

	return hParam0 == Global_17418.f_55.f_664.f_1354.f_5[num2 /*17*/];
}

int func_89(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4D74 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_85(hParam0, 0))
		return 0;

	num = func_86(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_189(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_205(hParam0, false);
	}

	if (func_206(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_71(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_207(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_71(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_90(var uParam0) // Position - 0x4E36 Hash - 0x5001E582 ^0x5001E582
{
	return func_208(*uParam0, 1);
}

float func_91(var uParam0) // Position - 0x4E46 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_90(uParam0))
		return uParam0->f_1;

	if (func_209(uParam0))
		return uParam0->f_2;

	return func_210() - uParam0->f_1;
}

void func_92(var uParam0, float fParam1) // Position - 0x4E7B Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_210() - fParam1;
	func_211(uParam0, 1);
	func_212(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_93(Object* pobParam0, var uParam1) // Position - 0x4EA1 Hash - 0x42F592B1 ^0x52A7812A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pobParam0))
		return true;

	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*pobParam0))
	{
		OBJECT::DELETE_OBJECT(pobParam0);
		return true;
	}

	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*pobParam0);
	return false;
}

BOOL func_94(int iParam0, int iParam1) // Position - 0x4ED9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_95(int iParam0) // Position - 0x4EE8 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_96(int iParam0) // Position - 0x4F27 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1902887.f_302 = Global_1902887.f_302 || iParam0;
	return;
}

int func_97(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4F40 Hash - 0x19DF3458 ^0x19DF3458
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_213(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (bParam4)
		vector = { *uParam0 };

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

void func_98(var uParam0) // Position - 0x5044 Hash - 0xFABF32AB ^0x5BDBDAC7
{
	int i;

	for (i = 0; i < uParam0->f_1; i = i + 1)
	{
		func_120(&uParam0->f_1[i], true, true);
	}

	return;
}

void func_99(var uParam0, BOOL bParam1) // Position - 0x506F Hash - 0x85722DF4 ^0xE7F8C758
{
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

	func_214(uParam0, 256);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return;
}

BOOL func_100() // Position - 0x50B2 Hash - 0xDC457EBB ^0x4539C1A8
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");

	return false;
}

void func_101(BOOL bParam0) // Position - 0x50D9 Hash - 0x941E7E7E ^0x93F64486
{
	if (bParam0)
	{
	}

	Global_1913634.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_33, "player_crafting_active", bParam0);
	return;
}

void func_102(var uParam0) // Position - 0x5100 Hash - 0x821EA126 ^0xAC01B85F
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_49, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_50, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_51, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_52, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_53, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_54, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_55, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_56, 0);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_57, 0);

	func_93(&(uParam0->f_64), &(uParam0->f_65));
	func_93(&(uParam0->f_66), &(uParam0->f_67));
	func_93(&(uParam0->f_68), &(uParam0->f_69));
	return;
}

BOOL func_103(var uParam0, int iParam1) // Position - 0x51E3 Hash - 0x320397CF ^0x320397CF
{
	return func_16(*uParam0, iParam1);
}

int func_104() // Position - 0x51F4 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

int func_105(Hash hParam0, Hash hParam1, int iParam2, Any anParam3) // Position - 0x5202 Hash - 0x2B91DAE0 ^0x2B91DAE0
{
	var unk;
	var unk3;
	int num;
	Hash hash;
	var unk8;
	var unk18;
	var unk36;
	var unk53;

	if (!func_85(hParam0, 0))
		return -1;

	if (func_215(hParam0))
		if (!func_217(func_216(hParam0), hParam1, &unk, false, false))
			return -1;
	else if (func_218(hParam0, hParam1, false, false) < iParam2)
		return -1;

	unk3 = { func_193(hParam0, true, 0) };

	if (func_219(hParam0, &unk3, iParam2, false, true, -1, false))
		return -1;

	num = -1;
	hash = func_165(hParam0);

	if (hash == 1388422710)
	{
		num = func_220(hParam0, "SPEND STEW FEE", 1, true, false, hParam1);
	}
	else
	{
		unk8 = -1;
		unk8.f_1 = -1;
	
		if (func_215(hParam0))
		{
			unk18.f_9 = 1;
			unk18.f_11 = joaat("SLOTID_NONE");
		
			if (!func_221(&unk8, func_216(hParam0), &unk18, true, hParam1, -1, false, false))
				return -1;
		}
		else
		{
			unk36.f_9 = 1;
			unk36.f_11 = joaat("SLOTID_NONE");
		
			if (!func_222(&unk8, hParam0, unk3, unk3.f_4, iParam2, &unk36, true, hParam1, -1, true))
				return -1;
		}
	
		num = unk8.f_1;
	}

	if (num == -1)
		return -1;

	unk53.f_7 = -142743235;
	unk53.f_16 = -1;
	unk53.f_1 = 1;

	if (hParam0 == -1283929968)
		unk53.f_1 = 0;

	if (func_215(hParam0))
		if (func_223(func_216(hParam0), hParam1) == 1400824947)
			unk53.f_1 = 0;
	else if (func_224(hParam0, hParam1) == 1400824947)
		unk53.f_1 = 0;

	func_225(num, unk53);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(hParam0, hParam1, anParam3, iParam2);
	return num;
}

void func_106(Hash hParam0, int iParam1) // Position - 0x53A2 Hash - 0x78C9A5D2 ^0x78C9A5D2
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		func_226(11, true, 0);
	}

	if (func_227(hParam0, 0))
		func_228(40);
	else
		func_228(39);

	return;
}

BOOL func_107(BOOL bParam0) // Position - 0x53E1 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_104() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_71(bParam0));
}

BOOL func_108() // Position - 0x53FF Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

struct<2> func_109(int iParam0, Hash hParam1) // Position - 0x541B Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

void func_110(var uParam0, var uParam1, int iParam2) // Position - 0x5431 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_111(var uParam0) // Position - 0x544E Hash - 0x7A1F391A ^0x7A1F391A
{
	func_40(uParam0, 1);
	return;
}

BOOL func_112(Ped pedParam0, Ped pedParam1) // Position - 0x545D Hash - 0xB1778072 ^0xDB718768
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_IN_COMBAT(pedParam0, pedParam1))
			return true;

	return false;
}

BOOL func_113(Ped pedParam0) // Position - 0x547F Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

BOOL func_114(Ped pedParam0) // Position - 0x549A Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_229(pedParam0, 4) || func_229(pedParam0, 5);
}

BOOL func_115(Ped pedParam0) // Position - 0x54B6 Hash - 0xE0409C42 ^0xE0409C42
{
	return func_229(pedParam0, 7);
}

BOOL func_116(Ped pedParam0) // Position - 0x54C5 Hash - 0xC9A2E10A ^0xC9A2E10A
{
	return func_229(pedParam0, 6);
}

BOOL func_117(Ped pedParam0, Entity eParam1, float fParam2) // Position - 0x54D4 Hash - 0x5CE04B94 ^0xEC2FA7B8
{
	return func_230(pedParam0, ENTITY::GET_ENTITY_COORDS(eParam1, false, false), fParam2);
}

BOOL func_118() // Position - 0x54EC Hash - 0x7AD82543 ^0x1E438C72
{
	return Global_1915656.f_20637 || Global_1915656.f_22504.f_1;
}

int func_119(var uParam0) // Position - 0x550A Hash - 0xCC32B946 ^0x9830CE05
{
	float num;
	int num2;
	ItemSet itemset;
	int i;
	float num3;

	num = 10000f;
	num2 = -1;
	itemset = ITEMSET::CREATE_ITEMSET(true);

	for (i = 0; i < 4; i = i + 1)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->[i]))
		{
			if (TASK::_GET_PED_USING_SCENARIO_POINT(uParam0->[i]) != 0)
			{
			}
			else if (!PED::_CAN_PED_USE_SCENARIO_POINT(Global_33, uParam0->[i], 0, 0, 1) && !func_56(64))
			{
			}
			else
			{
				ITEMSET::_CLEAR_ITEMSET(itemset);
			
				if (func_55(&itemset, TASK::_GET_SCENARIO_POINT_COORDS(uParam0->[i], true), 1065353216))
				{
				}
				else
				{
					num3 = func_21(Global_34, uParam0->f_5[i /*3*/]);
				
					if (num3 < num)
					{
						num2 = i;
						num = num3;
					}
				}
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return num2;
}

void func_120(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x55C5 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_95(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_231(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_232(num);
	*uParam0 = 0;
	return;
}

BOOL func_121(var uParam0, int iParam1) // Position - 0x5619 Hash - 0x2DB3CA48 ^0x505D5AAF
{
	Volume volume;

	volume = VOLUME::CREATE_VOLUME_CYLINDER(*uParam0, 0f, 0f, 0f, iParam1, iParam1, 1f);

	if (PED::_0xA1FBAC56D38563E2(volume))
	{
		func_122(volume);
		return true;
	}

	if (func_233(&volume))
	{
		func_122(volume);
		return true;
	}

	func_122(volume);
	return false;
}

void func_122(Volume volParam0) // Position - 0x5660 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

// Unhandled jump detected. Output should be considered invalid
int func_123(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, int iParam16) // Position - 0x5677 Hash - 0xA385BF6B ^0x5950F9F
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
		if (func_234(i, 2))
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
		func_235(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, iParam16);
		return num;
	}

	return 0;
}

BOOL func_124(int iParam0, BOOL bParam1) // Position - 0x574E Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_95(iParam0))
		return false;

	num = func_231(iParam0);

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

void func_125(var uParam0) // Position - 0x5848 Hash - 0xC12D782F ^0x940C82D
{
	if (func_95(uParam0->f_149))
		func_120(&(uParam0->f_149), true, true);

	return;
}

void func_126(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5865 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_95(iParam0))
		return;

	num = func_231(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1951910[num /*23*/].f_3, iParam1, iParam2);
	return;
}

BOOL func_127(var uParam0) // Position - 0x58B0 Hash - 0x8752B3D4 ^0x4BC24093
{
	if (WEAPON::_0x0DE0944ECCB3DF5D(Global_33))
		return false;

	if (func_16(uParam0->f_128, 32768))
		return false;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
		return false;

	if (func_56(16))
		return false;

	return true;
}

BOOL func_128(var uParam0) // Position - 0x58F5 Hash - 0x4417A703 ^0xC982AD8A
{
	Entity firstEntityPedIsCarrying;
	Hash entityModel;
	Hash hash;

	firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);

	if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(firstEntityPedIsCarrying);
		hash = func_236(entityModel);
	
		if (func_237(hash) && !ENTITY::_IS_ENTITY_FULLY_LOOTED(firstEntityPedIsCarrying) && FLOCK::_GET_ANIMAL_RARITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying)) != 2 && !FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(firstEntityPedIsCarrying))
		{
			uParam0->f_49.f_62 = hash;
			uParam0->f_49.f_63 = -214678071;
		
			if (func_95(uParam0->f_150))
				func_126(uParam0->f_150, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(firstEntityPedIsCarrying), 0, true);
		
			return true;
		}
	}

	return false;
}

void func_129(int iParam0, char* sParam1, BOOL bParam2) // Position - 0x5984 Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_95(iParam0))
		return;

	num = func_231(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, sParam1);
	return;
}

void func_130(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x59CD Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_95(iParam0))
		return;

	num = func_231(iParam0);

	if (bParam1)
	{
		func_238(iParam0, 4);
	
		if (bParam3)
			func_239(num, true);
	
		func_240(num, true);
	}
	else
	{
		func_241(iParam0, 4);
		func_240(num, false);
	}

	return;
}

BOOL func_131(Hash hParam0) // Position - 0x5A21 Hash - 0xDF6FE81 ^0xAC897192
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1939434[i /*16*/].f_10)))
			return true;
	}

	return false;
}

BOOL func_132() // Position - 0x5A5B Hash - 0xD6298B8D ^0xA8AC551C
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0)
		return true;

	return false;
}

void func_133(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5A86 Hash - 0xA17327C0 ^0x3D11A072
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

	ped = func_242(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (!func_107(false) || func_108())
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(ped);
		func_243(entityModel, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped)))
	{
		unk.f_1 = 10;
		unk.f_12 = 10;
		MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped), true, true, ENTITY::GET_ENTITY_MODEL(ped), &unk, 0);
	
		for (i = 0; i < 10; i = i + 1)
		{
			hash = unk.f_1[i];
		
			if (func_85(hash, 0))
				if (!bParam1 || func_244(hash))
					func_245(hash, unk.f_12[i], bParam2, false, false, 752097756, 0, 0, 0, false);
		}
	}
	else
	{
		outInventoryItemArray = 10;
		pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped));
	
		if (func_23(joaat("provision_trinket_buck_antler"), 1))
		{
			if (pedDamageCleanliness < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				num = pedDamageCleanliness;
				num = num + 1;
				pedDamageCleanliness = num;
			}
		}
	
		animalRarity = FLOCK::_GET_ANIMAL_RARITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped));
		skinningQuality = func_246(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped), animalRarity);
		PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(&outInventoryItemArray, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(ped), pedDamageCleanliness, skinningQuality);
	
		for (j = 0; j < outInventoryItemArray; j = j + 1)
		{
			if (outInventoryItemArray[j] != 0)
				if (func_247(ped) && !func_248(outInventoryItemArray[j]))
					outInventoryItemArray[j] = 0;
				else if (!bParam1 || func_244(outInventoryItemArray[j]))
					func_245(outInventoryItemArray[j], 1, bParam2, false, false, 752097756, 0, 0, 0, false);
		}
	}

	hash2 = func_249(&ped);

	if (!func_85(hash2, 0))
		hash2 = func_250(ped);

	if (func_85(hash2, 0))
		func_251(hash2, 1, pedParam0, true, -142743235);

	ENTITY::_DELETE_CARRIABLE(&ped);
	return;
}

BOOL func_134(Hash hParam0, var uParam1) // Position - 0x5C76 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_253(func_252(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1953292.f_1676.f_1[num /*3*/] != 0 && Global_1953292.f_1676.f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = Global_1953292.f_1676.f_1[num /*3*/];
	
		if (func_165(hash) == hParam0 || hParam0 == 81053684 && func_152(hash, 160827531))
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_135(int iParam0) // Position - 0x5D0C Hash - 0xE53F5651 ^0xA0757BD
{
	Hash weaponHash;

	weaponHash = 0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &weaponHash, true, iParam0, false))
		if (func_85(weaponHash, 0))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_254(weaponHash))
				return 1;

	return 0;
}

BOOL func_136() // Position - 0x5D4B Hash - 0x703B6249 ^0x4D57E175
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

	num = func_255();

	if (num == 0 || num == 7 || num == 2 || num == 10)
		return true;

	return false;
}

void func_137(int iParam0) // Position - 0x5E3A Hash - 0x3410C012 ^0xBA50931E
{
	Global_1940085.f_39 = Global_1940085.f_39 || iParam0;
	return;
}

BOOL func_138(int iParam0, BOOL bParam1) // Position - 0x5E51 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_95(iParam0))
		return false;

	return !func_234(iParam0, 4);
}

void func_139(int iParam0, BOOL bParam1) // Position - 0x5E76 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_256(iParam0, &num, &num2);

	if (!func_257(iParam0, num, num2, bParam1))
		return;

	func_258(num, num2);
	return;
}

void func_140(var uParam0, int iParam1) // Position - 0x5EA3 Hash - 0x4F6B0B34 ^0x45FA5E0D
{
	int num;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -996707397))
		func_17(&(uParam0->f_128), 2);
	else
		func_6(&(uParam0->f_128), 2);

	if (func_16(iParam1, 1))
	{
		if (!func_95(uParam0->f_137[0]))
		{
			uParam0->f_137[0] = func_259("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_126(uParam0->f_137[0], 1754796591, 0, true);
		}
	}
	else if (func_95(uParam0->f_137[0]))
	{
		func_120(&uParam0->f_137[0], true, true);
	}

	if (func_16(iParam1, 4096) && func_16(uParam0->f_127, 16) && !func_56(128) && uParam0->f_134 != 2)
	{
		MISC::SET_BIT(&(Global_1958634.f_1), 2);
		MISC::SET_BIT(&(Global_1958634.f_1), 3);
	
		if (!func_95(uParam0->f_137[2]))
		{
			uParam0->f_137[2] = func_259("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_126(uParam0->f_137[2], 1754796591, 0, true);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1958634.f_1), 2);
	
		if (func_95(uParam0->f_137[2]))
			func_120(&uParam0->f_137[2], true, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);

	if (func_95(uParam0->f_137[6]))
		func_120(&uParam0->f_137[6], true, true);

	if (func_56(32))
		if (func_95(uParam0->f_137[6]))
			func_130(uParam0->f_137[6], false, true, true);
	else if (func_95(uParam0->f_137[6]) && !func_138(uParam0->f_137[6], false))
		func_130(uParam0->f_137[6], true, true, true);

	if (func_56(32) || func_16(uParam0->f_128, 2) && uParam0->f_134 != 2)
		if (func_95(uParam0->f_137[2]))
			func_130(uParam0->f_137[2], false, true, true);
	else if (func_95(uParam0->f_137[2]))
		func_130(uParam0->f_137[2], true, true, true);

	if (func_16(iParam1, 16) && !func_56(128) && uParam0->f_134 != 2)
	{
		if (!func_95(uParam0->f_137[1]))
		{
			uParam0->f_137[1] = func_259("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		
			if (func_16(iParam1, 524288) && func_16(uParam0->f_128, 8192))
			{
				func_260(uParam0->f_137[1], false, true);
				func_261(uParam0->f_137[1], 20, true, true);
				func_261(uParam0->f_137[1], 13, true, true);
			}
		
			func_126(uParam0->f_137[1], 1754796591, 0, true);
		}
	
		if (func_16(iParam1, 524288) && func_16(uParam0->f_128, 8192))
		{
			if (!func_95(uParam0->f_137[8]))
			{
				uParam0->f_137[8] = func_259("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
				func_261(uParam0->f_137[8], 19, true, true);
				func_261(uParam0->f_137[8], 20, true, true);
				func_261(uParam0->f_137[8], 13, true, true);
				func_262(&uParam0->f_137[8], "INPUT_PCAMP_TEARDWN");
				func_126(uParam0->f_137[8], 1754796591, 0, true);
			}
		}
		else if (func_95(uParam0->f_137[8]))
		{
			func_120(&uParam0->f_137[8], true, true);
		}
	}
	else
	{
		if (func_95(uParam0->f_137[1]))
			func_120(&uParam0->f_137[1], true, true);
	
		if (func_95(uParam0->f_137[8]))
			func_120(&uParam0->f_137[8], true, true);
	}

	if (func_16(uParam0->f_128, 2))
	{
		if (func_95(uParam0->f_137[1]) && func_138(uParam0->f_137[1], false))
		{
			func_130(uParam0->f_137[1], false, true, true);
		
			if (func_16(iParam1, 524288) && func_16(uParam0->f_128, 8192))
				func_260(uParam0->f_137[1], false, true);
		}
	}
	else if (func_95(uParam0->f_137[1]) && !func_138(uParam0->f_137[1], false))
	{
		func_130(uParam0->f_137[1], true, true, true);
	
		if (func_16(iParam1, 524288) && func_16(uParam0->f_128, 8192))
			func_260(uParam0->f_137[1], false, true);
	}

	if (func_16(iParam1, 1048576) && !func_56(128) && uParam0->f_134 != 12 && func_23(-1993676214, 1))
	{
		if (!func_95(uParam0->f_137[10]))
		{
			uParam0->f_137[10] = func_259("CAMP_FAST_TRAVEL", joaat("INPUT_CONTEXT_Y"), 2, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_126(uParam0->f_137[10], 1754796591, 0, true);
		}
	}
	else if (func_95(uParam0->f_137[10]))
	{
		func_120(&uParam0->f_137[10], true, true);
	}

	uParam0->f_151 = func_62(HUD::_UI_PROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	num = 1;

	if (!func_56(128))
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_129, 3f, 1, num, 1754796591, uParam0->f_151, 0);

	return;
}

int func_141(var uParam0) // Position - 0x644E Hash - 0xDA01099D ^0x1F2CA69B
{
	int i;

	if (func_56(16) || func_16(uParam0->f_128, 32768))
	{
		func_6(&(uParam0->f_128), 32768);
		func_52(16);
		uParam0->f_154 = -1;
		return 2;
	}

	for (i = 0; i < 11; i = i + 1)
	{
		if (func_95(uParam0->f_137[i]))
		{
			if (i == 1)
			{
				if (func_138(uParam0->f_137[i], false))
				{
					if (func_263(uParam0->f_137[i], true))
					{
						return i;
					}
					else if (func_264())
					{
						if (!func_90(&(uParam0->f_155)))
							func_29(&(uParam0->f_155));
					
						if (func_265(&(uParam0->f_155), 0.5f))
							return i;
					}
					else if (func_90(&(uParam0->f_155)))
					{
						func_266(&(uParam0->f_155));
					}
				}
			}
			else if (i == 8 || i == 6)
			{
				if (func_124(uParam0->f_137[i], true))
				{
					return i;
				}
				else if (i == 8)
				{
					if (func_267(uParam0->f_137[8], true))
					{
						if (!func_90(&(uParam0->f_49.f_71)))
							func_29(&(uParam0->f_49.f_71));
						else if (func_27(&(uParam0->f_49.f_71), 0.1f))
							func_129(uParam0->f_137[8], "CAMP_TEARDOWN", true);
					}
					else
					{
						if (func_90(&(uParam0->f_49.f_71)))
							func_266(&(uParam0->f_49.f_71));
					
						func_129(uParam0->f_137[8], "LEAVE", true);
					}
				}
			}
			else if (func_263(uParam0->f_137[i], true))
			{
				if (i == 2)
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
			
				return i;
			}
		}
	}

	return -1;
}

BOOL func_142(var uParam0) // Position - 0x65FC Hash - 0x5C1F266D ^0x7BB2DCC2
{
	if (func_268(uParam0) && !func_16(uParam0->f_128, 4))
		return 1;

	if (!func_70(uParam0))
		return 0;

	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 6:
					if (func_73(joaat("KNEEL1_TRANS_COFFEE1"), 1f))
						return 1;
					break;
			
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_269(uParam0);
					break;
			}
			break;
	
		case 6:
			func_270(uParam0);
			break;
	}

	return 0;
}

BOOL func_143(var uParam0) // Position - 0x66AF Hash - 0x5C1F266D ^0x7BB2DCC2
{
	if (func_268(uParam0) && !func_16(uParam0->f_128, 4))
		return 1;

	if (!func_70(uParam0))
		return 0;

	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 6:
					func_73(joaat("KNEEL2_TRANS_COFFEE2"), 1f);
					return 1;
			
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_269(uParam0);
					break;
			}
			break;
	
		case 6:
			func_271(uParam0);
			break;
	}

	return 0;
}

BOOL func_144(var uParam0) // Position - 0x6760 Hash - 0x5C1F266D ^0x7BB2DCC2
{
	if (func_268(uParam0) && !func_16(uParam0->f_128, 4))
		return 1;

	if (!func_70(uParam0))
		return 0;

	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 6:
					uParam0->f_133 = 1;
				
					if (func_272(Global_33, uParam0->[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						return 1;
					break;
			
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_269(uParam0);
					break;
			}
			break;
	}

	return 0;
}

BOOL func_145(var uParam0) // Position - 0x6816 Hash - 0x5C1F266D ^0x7BB2DCC2
{
	if (func_268(uParam0) && !func_16(uParam0->f_128, 4))
		return 1;

	if (!func_70(uParam0))
		return 0;

	switch (uParam0->f_134)
	{
		case 1:
			switch (uParam0->f_132)
			{
				case 6:
					uParam0->f_133 = 0;
				
					if (func_272(Global_33, uParam0->[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
						return 1;
					break;
			
				case 7:
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					break;
			
				case 8:
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					break;
			
				default:
					func_269(uParam0);
					break;
			}
			break;
	}

	return 0;
}

BOOL func_146() // Position - 0x68CC Hash - 0xC24BA3AE ^0xA4363903
{
	return Global_1940252.f_2 || Global_1940252 == 1;
}

BOOL func_147() // Position - 0x68E6 Hash - 0x85414BC8 ^0x5EF38AB5
{
	if (Global_1940252.f_39 == 3)
		return true;

	return false;
}

BOOL func_148(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x68FD Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_85(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_206(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_273(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk = { func_193(hParam0, bParam4, 0) };
	unk6 = { func_274(hParam0, unk, unk.f_4, bParam4) };
	return func_275(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_149(Hash hParam0, BOOL bParam1) // Position - 0x6975 Hash - 0xF243367B ^0xCF999DBB
{
	BOOL flag;
	int num;

	flag = func_152(hParam0, 1816455607);

	if (!func_85(hParam0, 0))
		if (!flag)
			return false;

	if (Global_1940252.f_8)
		return false;

	if (hParam0 != 1259508039 && hParam0 != joaat("kit_camp") && hParam0 != joaat("kit_camp_simple") && bParam1)
	{
		num = func_276(hParam0);
	
		if (func_152(hParam0, 1147021565))
			num = num | 64;
	
		if (!func_277(true, num))
			return false;
	}

	if (hParam0 == -1448210800 || hParam0 == joaat("upgrade_upg_mortar_pestle"))
		if (func_278())
			return false;

	if (!flag && !func_23(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_150(Hash hParam0) // Position - 0x6A47 Hash - 0x601AA14C ^0xEF1C7FBC
{
	if (func_161(hParam0))
		return false;

	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_71(false), hParam0, func_279(false)))
		return false;

	switch (hParam0)
	{
		case joaat("kit_camp"):
		case joaat("kit_camp_simple"):
			func_280(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
	
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_281() != -1)
			{
				func_164(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_281()), 10000, 0, 0, 0, true);
				func_283(-1);
			}
			break;
	}

	return true;
}

BOOL func_151(Hash hParam0) // Position - 0x6AC6 Hash - 0xBD978834 ^0x7AFB22C
{
	var unk;

	if (hParam0 == 17745825)
	{
		TEXT_LABEL_ASSIGN_STRING(&(unk.f_10), "legendary_animal_map", 32);
		unk.f_14 = 512;
		func_159(unk, 0);
		return true;
	}

	return false;
}

BOOL func_152(Hash hParam0, Hash hParam1) // Position - 0x6AF8 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_85(hParam0, 0))
		return func_285(func_284(hParam0), hParam1);

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_153(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, BOOL bParam28, int iParam29) // Position - 0x6B39 Hash - 0x5A3F4CC0 ^0x5A3F4CC0
{
	return;
}

void func_154(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, BOOL bParam27, int iParam28) // Position - 0x6B41 Hash - 0x3A6CFA ^0x3A6CFA
{
	return;
}

void func_155(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x6B49 Hash - 0x3087D828 ^0x3087D828
{
	return;
}

BOOL func_156(Hash hParam0) // Position - 0x6B51 Hash - 0xCA7B09D7 ^0xE1CC92D5
{
	if (func_104() == 0 && func_287(func_286(hParam0), true, false) != 0)
	{
		func_164("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, true);
		return false;
	}

	return true;
}

BOOL func_157(Hash hParam0) // Position - 0x6B8A Hash - 0xC4C130FB ^0xC8101E3B
{
	if (func_288(hParam0, joaat("TAG_ITEM_PROPERTY")) == 1816455607)
	{
		func_289(0);
		func_291(func_290(hParam0));
		return true;
	}

	return false;
}

BOOL func_158(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6BB9 Hash - 0xD49E510D ^0x2607D5E4
{
	if (func_292(hParam0, bParam1, false, 0, -1082130432))
	{
		Global_1913443 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}

	switch (func_288(hParam0, -949239683))
	{
		case -1919515848:
			if (!bParam1)
			{
				func_306(hParam0);
				return true;
			}
			break;
	
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_295(hParam0);
				else
					func_300(hParam0);
			
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
					func_295(hParam0);
				else
					func_303(hParam0);
			
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
				func_297(hParam0, true);
				return true;
			}
			break;
	
		case -262371497:
			if (!bParam1)
			{
				func_304(hParam0);
				return true;
			}
			break;
	
		case 89124942:
			if (!bParam1)
			{
				func_295(hParam0);
				return true;
			}
			break;
	
		case 238865292:
			if (!bParam1)
			{
				func_307(hParam0, bParam3);
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
				if (!func_293())
				{
					if (func_294(&Global_33))
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_hat"), 1, 0, -1082130432);
					else
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, joaat("apply_pomade_with_no_hat"), 1, 0, -1082130432);
				
					return true;
				}
				else
				{
					func_164("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, true);
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
				func_298(hParam0, true);
				return true;
			}
			break;
	
		case 1130235258:
			if (!bParam1)
			{
				func_299(hParam0);
				return true;
			}
			break;
	
		case 1177617310:
			if (!bParam1)
			{
				func_308(hParam0, bParam3);
				return true;
			}
			break;
	
		case 1443104131:
			if (!bParam1)
			{
				func_305(hParam0);
				return true;
			}
			break;
	
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_295(hParam0);
				else
					func_296(hParam0);
			
				return true;
			}
			break;
	
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_295(hParam0);
				else
					func_301(hParam0);
			
				return true;
			}
			break;
	
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
					func_295(hParam0);
				else
					func_302(hParam0);
			
				return true;
			}
			break;
	}

	return false;
}

void func_159(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x6FD6 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_309(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_310(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_311(iParam16);
			return;
		}
	}

	return;
}

BOOL func_160() // Position - 0x7072 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1893611 & 2 != 0;
}

BOOL func_161(Hash hParam0) // Position - 0x7082 Hash - 0xE969B321 ^0x8C585BB9
{
	if (!func_85(hParam0, 0))
		return false;

	if (func_86(hParam0) == joaat("emote"))
		return true;

	return false;
}

int func_162(var uParam0) // Position - 0x70AC Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_312(uParam0);
}

BOOL func_163(Hash hParam0) // Position - 0x70BA Hash - 0xA0AC1BF ^0x3B7AC8C7
{
	if (hParam0 == 0)
		return false;

	if (func_86(hParam0) == joaat("CLOTHING"))
		func_165(hParam0) == -999503751;

	return true;
}

int func_164(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x70E9 Hash - 0x8EBD6187 ^0x42F0F0AC
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

Hash func_165(Hash hParam0) // Position - 0x7124 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_85(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_166() // Position - 0x714F Hash - 0x94D65CA6 ^0x4569CEBD
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

BOOL func_167(Player plParam0) // Position - 0x7202 Hash - 0xBF9BE0C1 ^0x883CF463
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

void func_168(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x7234 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_313(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_314(num);
	return;
}

int func_169(Hash hParam0, BOOL bParam1) // Position - 0x7266 Hash - 0x26B1C24E ^0x1E715211
{
	int num;

	if (!func_315())
		return 0;

	if (!func_316(hParam0))
		return 0;

	if (func_317(hParam0))
	{
		num = 0;
	
		if (func_165(hParam0) == 81053684 || func_152(hParam0, 160827531) && !func_152(hParam0, -1303648999))
			if (bParam1)
				func_318(&num, 2);
	
		return func_319(hParam0, num);
	}

	return 0;
}

void func_170(Hash hParam0) // Position - 0x72DD Hash - 0x6BEB4307 ^0xE6687E36
{
	int num;
	Hash hash;

	num = 10;
	hash = Global_1953292.f_1676.f_1[num /*3*/];

	if (hash == hParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_171(Global_33, -2065815962, 0, -358215195, true, true, true, true, false, true, true, true);
		func_172(hParam0, false, false);
		return;
	}

	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_171(Global_33, hParam0, 0, -358215195, true, true, true, true, false, true, true, true);

	if (func_320(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_321();
		func_313(128);
		return;
	}

	if (hash == Global_1953292.f_83[num /*12*/])
	{
		func_172(hParam0, true, false);
		return;
	}

	if (func_322(-2061583405, false))
	{
		if (func_323(hash))
			func_172(hash, false, false);
		else
			func_324(hash, true, true, false, false, false);
	
		func_172(hParam0, true, false);
		return;
	}

	if (func_323(hash))
	{
		func_172(hash, false, false);
		func_172(hParam0, true, false);
	}
	else if (func_323(hParam0))
	{
		if (hParam0 != func_325(0))
		{
			func_326(hParam0, hash, false, false, false);
			func_172(hParam0, false, false);
			func_172(hash, false, false);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_313(128);
			func_172(hParam0, true, false);
		}
	}

	return;
}

int func_171(Ped pedParam0, Hash hParam1, Hash hParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x7433 Hash - 0x31745379 ^0x5F342BAB
{
	var unk;
	int num;

	if (hParam3 == -358215195)
	{
		unk = { func_193(hParam1, true, 0) };
		hParam3 = func_327(unk.f_4);
	
		if (hParam3 == -358215195)
			return 0;
	}

	if (!func_328(hParam1, hParam2, func_253(hParam3, 1), bParam4, true, false, true))
		return 0;

	func_329(true, bParam5, bParam9, true, bParam11);

	if (bParam10)
		if (func_330(hParam1, false))
			func_331(Global_1953292.f_1676.f_1[func_253(hParam3, 1) /*3*/], false, false);
		else
			func_331(hParam1, true, false);

	switch (hParam3)
	{
		case 1108822547:
			if (func_320(32768))
			{
				func_321();
				func_168(21, hParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam7 && hParam1 != Global_1953292.f_83[func_253(hParam3, 1) /*12*/])
				func_168(27, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
		return 1;

	num = func_332(hParam3);

	if (bParam4)
		num = num | 2;

	if (bParam8)
		func_333(&num, 4);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_168(19, 0, num, 0, false);
	}
	else
	{
		num = num | 1;
		func_168(19, 0, num, pedParam0, false);
	}

	return 1;
}

void func_172(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x758C Hash - 0x9789B209 ^0xF02FDDD
{
	var unk;
	var guid;

	unk = { func_193(hParam0, bParam2, 0) };
	guid = { func_274(hParam0, unk, unk.f_4, bParam2) };

	if (func_334(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_71(bParam2), &guid, bParam1);
	return;
}

Hash func_173(Hash hParam0, BOOL bParam1) // Position - 0x75DC Hash - 0xC283C021 ^0x9CE4FF09
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

	unk4 = { func_274(joaat("WARDROBE"), func_335(bParam1), joaat("SLOTID_WARDROBE"), bParam1) };

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_165(hash) == hParam0 || hParam0 == 81053684 && func_152(hash, 160827531))
		{
			guid = { func_274(hash, unk4, outSlotId, bParam1) };
		
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_71(bParam1), &guid))
			{
				hash2 = hash;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_71(bParam1), &guid, false);
			}
		}
	}

	return hash2;
}

void func_174(BOOL bParam0, int iParam1) // Position - 0x7697 Hash - 0xCC16269 ^0xB563FF97
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

BOOL func_175(int iParam0, Hash hParam1) // Position - 0x76B9 Hash - 0xC8DEF152 ^0xBE9C015A
{
	Ped mount;

	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	mount = func_177(iParam0);

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

	if (func_337(iParam0))
		return 1;

	return 0;
}

BOOL func_176(int iParam0) // Position - 0x7760 Hash - 0x9F2526C ^0x74A3693D
{
	Ped ped;

	iParam0 = func_336(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_177(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (iParam0 == func_338())
			return true;
	
		return false;
	}

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

Ped func_177(int iParam0) // Position - 0x77B9 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_178(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x77E5 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

void func_179() // Position - 0x784F Hash - 0x3118984E ^0x9DD7A6C6
{
	int num;

	if (func_339())
		return;

	if (func_340(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_340(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
				
					func_341(16);
				}
			
				func_342(1);
				break;
		
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					break;
			
				func_341(8);
				func_342(0);
				break;
		}
	
		return;
	}

	if (func_343())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), joaat("KIT_HANDHELD_CATALOG"), joaat("MP_CATALOGUE_UNHOLSTER_S1"), 1, 0, -1082130432);
		Global_1915656.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_344();
	}
	else
	{
		num = func_346(func_345());
	
		if (num != -1)
		{
			func_164(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num), 10000, 0, 0, 0, true);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_347(0);
			func_283(-1);
		}
	}

	return;
}

BOOL func_180(int iParam0, int iParam1) // Position - 0x7946 Hash - 0x5D65A4D7 ^0x7C5646CA
{
	Any gangId;

	if (!func_348() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
		return false;

	if (!func_349(16))
		return false;

	if (func_350())
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
			return false;

	if (!func_351())
		return false;

	if (func_352(16))
		return false;

	gangId = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());

	if (iParam1 == 1 && !GANG::NETWORK_IS_GANG_ID_VALID(gangId) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		return false;

	if (iParam0 == 1 && func_94(Global_1147183.f_8, 1))
		return false;

	if (func_183())
		return false;

	return true;
}

int func_181(int iParam0, BOOL bParam1) // Position - 0x7A06 Hash - 0x31DB738A ^0x31DB738A
{
	if (bParam1)
		func_353();

	if (!func_354(bParam1, bParam1, !bParam1))
		return 0;

	func_355(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

BOOL func_182(int iParam0) // Position - 0x7A42 Hash - 0xA059D395 ^0xAFACF28D
{
	return func_94(Global_1147183.f_8, iParam0);
}

BOOL func_183() // Position - 0x7A56 Hash - 0x1BB0EADA ^0xDD84C79B
{
	int num;

	num = func_356(PLAYER::PLAYER_ID());

	if (num != -1)
		if (Global_1141332[num /*27*/].f_18.f_1 != 0 && func_94(Global_1141332[num /*27*/].f_18, 1))
			return true;

	return false;
}

void func_184() // Position - 0x7A98 Hash - 0xEA92AA44 ^0xD024142D
{
	int num;
	int num2;

	num = { func_82(0) };

	if (func_83(num))
	{
		if (num == 6)
		{
			num2 = func_357(PLAYER::PLAYER_ID(), false);
		
			if (num2 != -1)
				if (func_358(num2) == joaat("posse_versus"))
					func_164("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, true);
				else if (num2 == 1)
					func_164("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, true);
				else
					func_164("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, true);
		}
		else
		{
			func_164("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, true);
		}
	}

	return;
}

void func_185(Any anParam0) // Position - 0x7B28 Hash - 0x89B6E65 ^0xA9E218C2
{
	var unk;

	unk.f_12 = -1;
	unk.f_12.f_1 = -1;
	unk.f_14 = 255;
	unk.f_15 = 255;
	unk.f_6 = anParam0;
	unk.f_4 = 56;
	func_360(unk, func_359(0, 8), false, false);
	return;
}

void func_186(BOOL bParam0) // Position - 0x7B6D Hash - 0x5C051E8E ^0x5C051E8E
{
	if (func_104() != -1 || !bParam0 || func_113(Global_33))
	{
		func_361();
		return;
	}

	return;
}

void func_187() // Position - 0x7B9B Hash - 0x84DD5872 ^0x184C819C
{
	Player player;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-741705372))
	{
		player = PLAYER::PLAYER_ID();
		func_362(1, player);
	}

	return;
}

BOOL func_188(Hash hParam0) // Position - 0x7BBC Hash - 0x1B551CF7 ^0xD3BB1F31
{
	return func_86(hParam0) == joaat("consumable");
}

Hash func_189(Hash hParam0, int iParam1) // Position - 0x7BD0 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_85(hParam0, 0))
		return 0;

	num = func_86(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_152(hParam0, 1399091007))
	{
		func_363(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_190(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x7C4A Hash - 0x81C6837 ^0x21B516A3
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

	if (!func_85(hParam0, 0))
		return;
	else if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;
	else if (iParam1 == 0)
		return;

	if (!func_364() || bParam6)
	{
		func_365(hParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
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
	else if (bParam2 && func_367(hParam0, 2097152))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		flag = true;
	}

	num = func_86(hParam0);
	num2 = 0;
	num3 = joaat("Inventory");

	if (num == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver") && hParam0 != joaat("ammo_hatchet_hunter") && hParam0 != joaat("ammo_tomahawk_ancient") && hParam0 != joaat("ammo_poisonbottle") && hParam0 != joaat("AMMO_MOONSHINEJUG_MP") && !func_152(hParam0, -1982291600) && !func_152(hParam0, 137764179))
	{
		num2 = joaat("ammo_types");
		num3 = joaat("ammo_types");
	}

	hash = func_165(hParam0);

	if (num == joaat("weapon_mod") || num == joaat("weapon_decoration") || hash == -1674363638 || hash == 252325943 || hash == 829857647 || hash == -636562458 || hash == 1341188928 || hash == 1216664798)
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_368(hParam0, &str, num3, num2, 0, joaat("ui_itemviewer")))
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

	if (func_152(hParam0, 474910316))
	{
		str4 = func_369(hParam0);
	
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

	if (func_152(hParam0, 1816585950))
		num4 = joaat("color_objective");

	if (func_370(hParam0))
		if (!flag && !bParam2)
			num4 = joaat("color_yellow");
		else
			num4 = joaat("color_yellowdark");

	hash2 = func_371(hParam0, false);

	if (func_372(hash) && func_152(hParam0, -306684263) && hash2 != 0)
	{
		hash2 = func_373(hParam0);
	}
	else if (func_86(hParam0) == joaat("CLOTHING"))
	{
		hash3 = func_374(hParam0);
	
		if (func_85(hash3, 0))
			hash2 = func_371(hash3, false);
	}

	if (func_375(hParam0, 1443104131) && bParam3)
	{
		value2 = 1;
		func_376(hParam0, -915411861, &value2, false);
		value = BUILTIN::CEIL(BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(value2));
		iParam1 = BUILTIN::CEIL(BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(value2));
	}

	str5 = func_377(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, hash2), value), num4);

	if (iParam1 == 1)
		str5 = MISC::VAR_STRING(0, hash2);

	if (hash == -1839668642 && hParam0 != joaat("clothing_item_hair_none") && hParam0 != 1326838792 && hParam0 != -230310728 || hash == 231148558 && hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != joaat("clothing_item_beard_none") || hash == 252325943 && hParam0 != joaat("clothing_blend_lipstick_none") || hash == -636562458 && hParam0 != joaat("clothing_blend_eyeshadow_none"))
		str5 = MISC::VAR_STRING(0, func_378(hParam0, -442898163));

	if (hash == -126813555 || hash == 1946043663)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk7, "", 128);
	
		if (func_379(hParam0, &unk7))
			str5 = func_381(func_380(unk7), joaat("COLOR_PURE_WHITE"));
	}

	func_382(str5, str.f_1, MISC::GET_HASH_KEY(str), num5, num4, str3, str2, 0, true);
	return;
}

struct<2> func_191(Hash hParam0) // Position - 0x8126 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_85(hParam0, 0))
		return unk;

	if (func_152(hParam0, -305066475))
		if (func_104() == -1)
			if (func_152(hParam0, -537818634))
				return func_383(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_383(joaat("deadeye_items"));
	else if (func_152(hParam0, -537818634))
		return func_383(joaat("medicine_items"));

	if (func_152(hParam0, 2084895747))
		return func_383(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_192(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x81BA Hash - 0x4C808C39 ^0x99CF3799
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

	unk = { func_384(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam2)
		func_386(&unk, func_385(false));

	if (!func_387(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_199(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_275(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_201(num);
	num3 < iParam1;
	return true;
}

struct<5> func_193(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x8286 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_335(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_86(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_392(hParam0, -1823706425))
			{
				unk = { func_274(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_392(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_274(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_274(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_392(hParam0, -1653629781))
			{
				unk = { func_274(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_391(bParam1) };
		
			switch (func_165(hParam0))
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
			unk = { func_274(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_385(bParam1) };
		
			if (iParam2 && func_388(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_389(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_389(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_390(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_393(unk, &unk28, bParam1, false, -1))
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
			else if (func_392(hParam0, -1653629781))
			{
				unk = { func_274(1384535894, unk, 1784584921, bParam1) };
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

void func_194(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x85FA Hash - 0x2B098F6F ^0x2F7D859F
{
	Global_1940252.f_5 = bParam0;
	Global_1940252.f_37 = iParam2;

	if (bParam1 || func_394() && iParam2 == 0)
	{
		func_395(1);
		func_396(1);
	}

	return;
}

BOOL func_195(var uParam0) // Position - 0x8634 Hash - 0x3A93B1F8 ^0xACCA9F35
{
	Hash activeDynamicScenario2;
	int num;
	int num2;
	int num3;
	int i;
	int j;
	float num4;

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
	func_40(&(uParam0->f_49), 32);
	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);

	if (func_56(64) && uParam0->f_125 < 9)
	{
		func_397(&(uParam0->f_49));
		func_398(&(uParam0->f_49));
	
		if (MISC::GET_GAME_TIMER() - uParam0->f_154 > 1000 && func_399(&(uParam0->f_49)))
		{
			func_400();
		
			if (func_70(uParam0))
			{
				if (activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_squat_female_a"))
				{
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_sit_female_a"))
				{
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
		
			if (Global_1913634.f_1577 != 0)
				uParam0->f_49.f_62 = Global_1913634.f_1577;
		
			uParam0->f_49.f_63 = -214678071;
			uParam0->f_154 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
		
			if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("weapon_melee_knife"), true, 0, false, false);
				func_17(&(uParam0->f_128), 65536);
			}
		
			func_47(2);
			uParam0->f_165 = 3;
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
				OBJECT::DELETE_OBJECT(&(uParam0->f_135));
		
			uParam0->f_135 = OBJECT::CREATE_OBJECT(func_401(uParam0->f_49.f_62), Global_34, false, false, false, false, true);
		
			if (PED::_GIVE_PED_SCENARIO_PROP(Global_33, uParam0->f_135, "p_meatChunks01x_PH_L_HAND", 0, 0, true))
			{
			}
		
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_135, false);
			OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, 0f, true);
			func_98(&(uParam0->f_49));
			func_45(&(uParam0->f_49), 2);
			uParam0->f_137[3] = func_259("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_402(uParam0, 3, false, false, false);
			func_130(uParam0->f_137[3], false, true, true);
			func_126(uParam0->f_137[3], -1067771379, 0, true);
			func_214(&(uParam0->f_49), 1024);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_49.f_29);
			func_59(uParam0, 9);
		}
	
		return false;
	}

	if (uParam0->f_125 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"), true);
	}

	if (uParam0->f_125 > 0)
		HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_49.f_62), 1, 0, 0, 0);

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
	{
		uParam0->f_166 = uParam0->f_166 + 1;
	
		if (uParam0->f_49.f_62 == joaat("consumable_coffee"))
			if (func_403())
				func_404(1);
			else if (func_405())
				func_404(0);
	
		func_406(uParam0->f_49.f_62, BUILTIN::TO_FLOAT(uParam0->f_165), uParam0->f_166 >= uParam0->f_165);
	}

	if (uParam0->f_49.f_24 != -1 && func_407(&(uParam0->f_49)) != 12)
	{
		if (func_408(uParam0->f_49.f_24))
		{
		}
		else
		{
			uParam0->f_49.f_24 = -1;
		}
	}

	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_33, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_33, 0, 1);

	switch (uParam0->f_125)
	{
		case 0:
			if (func_70(uParam0))
			{
				if (activeDynamicScenario2 == joaat("world_player_camp_fire_squat_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_squat_female_a"))
				{
					func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
					return false;
				}
				else if (activeDynamicScenario2 == joaat("world_player_camp_fire_sit_male_a") || activeDynamicScenario2 == joaat("world_player_camp_fire_sit_female_a"))
				{
					func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
					return false;
				}
			}
		
			if (func_70(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")) && func_409(activeDynamicScenario2) || func_407(&(uParam0->f_49)) == 12)
			{
				func_410(&(uParam0->f_49), 1);
			
				if (func_407(&(uParam0->f_49)) == 11)
				{
					if (func_237(uParam0->f_49.f_62))
					{
						func_411(uParam0);
					}
					else if (func_103(&(uParam0->f_49), 8192))
					{
						uParam0->f_165 = 1;
						func_45(&(uParam0->f_49), 0);
						func_98(&(uParam0->f_49));
						func_120(&uParam0->f_137[3], true, true);
						num = 6000;
						num2 = 10000;
					
						if (func_16(uParam0->f_127, 16384))
						{
							num = BUILTIN::ROUND((float)num * 0.8f);
							num2 = BUILTIN::ROUND((float)num2 * 0.8f);
						}
					
						uParam0->f_137[3] = func_259("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, num, num2, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
						func_402(uParam0, 3, false, false, false);
						func_130(uParam0->f_137[3], false, true, true);
						func_126(uParam0->f_137[3], -1067771379, 0, true);
						func_412();
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						func_59(uParam0, 1);
					}
					else
					{
						func_6(&(uParam0->f_128), 4);
					}
				}
				else if (func_407(&(uParam0->f_49)) == 0)
				{
					func_66(uParam0, true);
					func_52(2);
				}
				else if (func_407(&(uParam0->f_49)) == 1 || func_112(Global_33, 0))
				{
					func_6(&(uParam0->f_128), 4);
					func_214(&(uParam0->f_49), 32);
					func_66(uParam0, true);
					func_98(&(uParam0->f_49));
					func_52(2);
					uParam0->f_134 = 6;
					uParam0->f_153 = MISC::GET_GAME_TIMER();
					func_6(&(uParam0->f_128), 128);
					return true;
				}
			}
			break;
	
		case 1:
			if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 250)
			{
				if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					func_73(joaat("KNIFE1_TRANS_KNEEL1"), 1086324736);
				}
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEELFIRECRAFT"), 1086324736);
					func_59(uParam0, 2);
				}
				else
				{
					func_73(joaat("KNEEL1_TRANS_KNEELFIRECRAFT"), 1086324736);
					func_59(uParam0, 2);
				}
			
				uParam0->f_153 = MISC::GET_GAME_TIMER();
			}
			break;
	
		case 2:
			if (!func_138(uParam0->f_137[3], false) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1070143458) || func_70(uParam0))
					func_130(uParam0->f_137[3], true, true, true);
		
			if (func_124(uParam0->f_137[3], true))
			{
				if (PAD::_0x1252C029FC8EBB4D())
					PAD::_0x709BA8C08C5C008D();
			
				func_402(uParam0, 3, true, false, false);
				func_120(&uParam0->f_137[3], true, true);
			
				if (func_86(uParam0->f_49.f_62) == joaat("consumable") && !func_152(uParam0->f_49.f_62, -1242251796) && !func_152(uParam0->f_49.f_62, 1919582297) && !func_152(uParam0->f_49.f_62, -651046900) && !func_152(uParam0->f_49.f_62, 127710288))
				{
					uParam0->f_137[5] = func_259("USE_ITEM", joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_126(uParam0->f_137[5], -1067771379, 0, true);
					func_261(uParam0->f_137[5], 10, true, true);
					uParam0->f_137[4] = func_259("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_261(uParam0->f_137[4], 10, true, true);
					func_126(uParam0->f_137[4], -1067771379, 0, true);
				
					if (func_288(uParam0->f_49.f_62, -1636519629) == -701492487)
					{
						func_129(uParam0->f_137[5], "DRINK", true);
						func_130(uParam0->f_137[4], false, true, true);
					}
				
					if (!func_413(2))
						func_130(uParam0->f_137[5], false, true, true);
				
					ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_49.f_62, 1);
				}
			
				if (!func_107(false) || func_108())
				{
					uParam0->f_49.f_24 = func_105(uParam0->f_49.f_62, uParam0->f_49.f_63, 1, uParam0->f_49.f_12);
				
					if (func_95(uParam0->f_137[5]))
						func_130(uParam0->f_137[5], false, true, true);
				}
				else
				{
					func_415(uParam0->f_49.f_62, uParam0->f_49.f_63, true, func_414(), uParam0->f_49.f_12);
					func_416(uParam0->f_49.f_62, 1, 1, true, 0);
				}
			
				uParam0->f_166 = 0;
				func_29(&(uParam0->f_158));
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_6(&(uParam0->f_128), 256);
				func_59(uParam0, 3);
			}
			else if (func_138(uParam0->f_137[3], false))
			{
				func_417(uParam0, activeDynamicScenario2);
			}
			break;
	
		case 3:
			if (func_70(uParam0))
			{
				if (func_265(&(uParam0->f_158), 0.1f))
				{
					if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 1f);
						func_29(&(uParam0->f_158));
					}
					else
					{
						uParam0->f_153 = MISC::GET_GAME_TIMER();
						func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELPOSTFIRECRAFT"), 1086324736);
					}
				}
			}
		
			func_418(uParam0);
		
			if (func_95(uParam0->f_137[5]))
			{
				if (func_138(uParam0->f_137[5], false) && func_263(uParam0->f_137[5], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CRAFTING_EAT")))
				{
					func_74(uParam0->f_49.f_62, 1, false, -142743235);
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_416(uParam0->f_49.f_62, 1, 1, false, 0);
					func_120(&uParam0->f_137[5], true, true);
					func_120(&uParam0->f_137[4], true, true);
					func_419(uParam0, true, false);
					func_45(&(uParam0->f_49), 15);
					func_59(uParam0, 5);
					return false;
				}
			}
		
			if (!func_95(uParam0->f_137[5]) || func_138(uParam0->f_137[4], false) && func_420(uParam0->f_137[4], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_OPTION")) || func_112(Global_33, 0))
			{
				func_120(&uParam0->f_137[5], true, true);
				func_120(&uParam0->f_137[4], true, true);
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_153 = MISC::GET_GAME_TIMER();
			
				if (func_16(uParam0->f_128, 128))
				{
					func_6(&(uParam0->f_128), 128);
					func_99(&(uParam0->f_49), false);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					func_45(&(uParam0->f_49), 1);
				}
				else
				{
					func_45(&(uParam0->f_49), 15);
				}
			
				func_419(uParam0, true, false);
				func_59(uParam0, 4);
				return false;
			}
			break;
	
		case 4:
			if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 100 || func_90(&(uParam0->f_158)))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_fire_craft") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
				}
				else
				{
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_STOW"), 1086324736);
				}
			
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 7);
			}
			break;
	
		case 5:
			func_421();
		
			if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 100 || func_90(&(uParam0->f_158)))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
				}
				else if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_fire_craft") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
				}
				else
				{
					func_73(joaat("KNEELPOSTFIRECRAFT_TRANS_KNEELFIRECRAFTCUP_CONSUME"), 1086324736);
				}
			
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 6);
			}
			break;
	
		case 6:
		case 7:
		case 14:
		case 15:
			PAD::_SET_CONTROL_CONTEXT(5, 417620729);
		
			if (uParam0->f_125 == 14 || uParam0->f_125 == 6)
				func_421();
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")))
			{
				func_429(uParam0, true);
			
				if (uParam0->f_125 == 14 || uParam0->f_125 == 15)
				{
					if (func_56(256))
						func_110(func_109(joaat("cooked"), -444296448), 1);
				
					func_59(uParam0, 12);
				}
				else
				{
					if (func_56(256))
						func_110(func_109(joaat("MADE"), -444296448), 1);
				
					func_59(uParam0, 8);
				}
			}
			else if (MISC::GET_GAME_TIMER() - uParam0->f_153 > 750)
			{
				if (!PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33))
					if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
						func_59(uParam0, 12);
					else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
						func_59(uParam0, 8);
					else if (uParam0->f_125 == 14)
						func_59(uParam0, 13);
					else if (uParam0->f_125 == 15)
						func_59(uParam0, 16);
					else if (uParam0->f_125 == 7)
						func_59(uParam0, 4);
					else if (uParam0->f_125 == 6)
						func_59(uParam0, 5);
			}
			break;
	
		case 8:
		case 12:
			PAD::_SET_CONTROL_CONTEXT(5, 417620729);
		
			if (func_138(uParam0->f_137[3], false))
				if (func_112(Global_33, 0))
					func_130(uParam0->f_137[3], false, true, true);
		
			if (func_95(uParam0->f_137[9]))
			{
				if (func_263(uParam0->f_137[9], true))
				{
					if (func_103(&(uParam0->f_49), 131072))
					{
						func_214(&(uParam0->f_49), 131072);
						func_402(uParam0, 3, false, true, false);
					}
					else
					{
						func_40(&(uParam0->f_49), 131072);
						func_402(uParam0, 3, false, true, false);
					}
				}
			}
		
			if (func_263(uParam0->f_137[3], true))
			{
				func_430(&(uParam0->f_137));
			
				if (uParam0->f_125 == 12)
					func_411(uParam0);
				else
					func_431(uParam0);
			}
			else if (func_263(uParam0->f_137[7], true))
			{
				func_430(&(uParam0->f_137));
				func_59(uParam0, 0);
				func_45(&(uParam0->f_49), 15);
				func_6(&(uParam0->f_128), 128);
			}
			else if (func_124(uParam0->f_137[1], true))
			{
				func_430(&(uParam0->f_137));
				func_59(uParam0, 0);
				func_6(&(uParam0->f_128), 128);
				func_99(&(uParam0->f_49), false);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				func_45(&(uParam0->f_49), 1);
				func_59(uParam0, 0);
				return false;
			}
			else if (func_267(uParam0->f_137[1], true))
			{
				if (!func_90(&(uParam0->f_49.f_71)))
					func_29(&(uParam0->f_49.f_71));
				else if (func_27(&(uParam0->f_49.f_71), 0.1f))
					func_129(uParam0->f_137[1], "CAMP_REC_QUIT", true);
			}
			else
			{
				if (func_90(&(uParam0->f_49.f_71)))
					func_266(&(uParam0->f_49.f_71));
			
				if (func_95(uParam0->f_137[1]))
					func_129(uParam0->f_137[1], "CAMP_REC_BACK", true);
			}
			break;
	
		case 9:
			if (func_70(uParam0))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
				{
					func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 1086324736);
					return false;
				}
			
				func_52(64);
				uParam0->f_153 = MISC::GET_GAME_TIMER();
			
				if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					func_73(joaat("KNIFE1_TRANS_COOKKNIFE"), 1086324736);
					func_47(2);
					func_59(uParam0, 10);
				}
				else
				{
					func_73(joaat("KNEEL1_TRANS_COOKKNIFE"), 1086324736);
					func_47(2);
					func_59(uParam0, 10);
				}
			}
			break;
	
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -560091334))
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_135, true);
		
			if (!func_138(uParam0->f_137[3], false) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1070143458))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("cook_meat_sizzle_loop", uParam0->f_135, "Player_Campfire_Sounds", false, 0, 0);
					AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_130(uParam0->f_137[3], true, true, true);
					func_422(uParam0->f_137[3], true);
				}
			}
		
			if (func_124(uParam0->f_137[3], true))
			{
				uParam0->f_164 = -1;
				OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, 1f, true);
			
				if (PAD::_0x1252C029FC8EBB4D())
					PAD::_0x709BA8C08C5C008D();
			
				uParam0->f_137[4] = func_259("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				uParam0->f_137[5] = func_259("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
				func_261(uParam0->f_137[5], 10, true, true);
				func_261(uParam0->f_137[4], 10, true, true);
				func_126(uParam0->f_137[4], -1067771379, 0, true);
				func_126(uParam0->f_137[5], -1067771379, 0, true);
			
				if (func_423(uParam0->f_49.f_62, 1, false))
					func_130(uParam0->f_137[4], false, true, true);
				else if (!func_413(2))
					func_130(uParam0->f_137[5], false, true, true);
			
				func_120(&uParam0->f_137[3], true, true);
				func_29(&(uParam0->f_158));
				func_52(2);
				uParam0->f_166 = 0;
				num3 = 1;
			
				if (!func_107(false) || func_108())
				{
					num3 = func_103(&(uParam0->f_49), 131072) ? func_424(3, uParam0->f_49.f_27) : 1;
					uParam0->f_49.f_24 = func_105(uParam0->f_49.f_62, uParam0->f_49.f_63, num3, uParam0->f_49.f_12);
					func_130(uParam0->f_137[5], false, true, true);
					func_130(uParam0->f_137[4], false, true, true);
				}
				else
				{
					num3 = func_103(&(uParam0->f_49), 131072) ? func_424(3, uParam0->f_49.f_27) : 1;
				
					for (i = 0; i < num3; i = i + 1)
					{
						func_415(uParam0->f_49.f_62, uParam0->f_49.f_63, true, func_414(), uParam0->f_49.f_12);
					}
				
					func_416(uParam0->f_49.f_62, num3, 1, true, 0);
				}
			
				for (j = 0; j < num3; j = j + 1)
				{
					STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_62);
				}
			
				ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_49.f_62, 1);
				AUDIO::_STOP_SOUND_WITH_NAME("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_6(&(uParam0->f_128), 256);
				func_59(uParam0, 11);
			}
			else
			{
				func_417(uParam0, activeDynamicScenario2);
			
				if (uParam0->f_164 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1070143458))
						uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else
				{
					num4 = func_426(uParam0->f_137[3], true);
					num4 = func_427(num4, 0f, 1f);
					OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, 1f * num4, true);
				}
			}
			break;
	
		case 11:
			if (func_70(uParam0))
			{
				if (func_265(&(uParam0->f_158), 0.1f))
				{
					uParam0->f_153 = MISC::GET_GAME_TIMER();
				
					if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
						func_73(joaat("COOKKNIFE_SEAR_TRANS_BETWEEN_BITES"), 2f);
					else
						func_73(joaat("COOKKNIFE_TRANS_BETWEEN_BITES"), 2f);
				}
			}
		
			func_418(uParam0);
			func_428(uParam0);
		
			if (func_95(uParam0->f_137[5]))
			{
				if (func_138(uParam0->f_137[5], false) && func_263(uParam0->f_137[5], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CRAFTING_EAT")))
				{
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_120(&uParam0->f_137[5], true, true);
					func_120(&uParam0->f_137[4], true, true);
					func_120(&uParam0->f_137[9], true, true);
					func_419(uParam0, true, true);
					PAD::_SET_CONTROL_CONTEXT(5, 417620729);
					func_74(uParam0->f_49.f_62, 1, false, -142743235);
					uParam0->f_153 = MISC::GET_GAME_TIMER();
					func_59(uParam0, 13);
					return false;
				}
			}
		
			if (func_95(uParam0->f_137[4]))
			{
				if (func_138(uParam0->f_137[4], false) && func_263(uParam0->f_137[4], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_OPTION")) || func_112(Global_33, 0) || TASK::IS_PED_SCENARIO_REACT_LOOKING(Global_33, true))
				{
					ATTRIBUTE::STOP_ITEM_PREVIEW();
					func_120(&uParam0->f_137[4], true, true);
					func_120(&uParam0->f_137[5], true, true);
					func_120(&uParam0->f_137[9], true, true);
					func_419(uParam0, true, false);
					PAD::_SET_CONTROL_CONTEXT(5, 417620729);
					func_59(uParam0, 16);
					return false;
				}
			}
			break;
	
		case 13:
			PAD::_SET_CONTROL_CONTEXT(5, 417620729);
			func_421();
		
			if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 250 || func_90(&(uParam0->f_158)))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
					func_73(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_EAT"), 1f);
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"))
					func_73(joaat("COOKKNIFE_TRANS_KNIFE1_EAT"), 1f);
				else
					func_73(joaat("BETWEEN_BITES_TRANS_KNIFE1_EAT"), 2f);
			
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 14);
			}
			break;
	
		case 16:
			PAD::_SET_CONTROL_CONTEXT(5, 417620729);
		
			if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 250 || func_90(&(uParam0->f_158)))
			{
				if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"))
					func_73(joaat("COOKKNIFE_SEAR_TRANS_KNIFE1_STOW"), 1f);
				else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"))
					func_73(joaat("COOKKNIFE_TRANS_KNIFE1_STOW"), 1f);
				else
					func_73(joaat("BETWEEN_BITES_TRANS_KNIFE1_STOW"), 1f);
			
				uParam0->f_153 = MISC::GET_GAME_TIMER();
				func_59(uParam0, 15);
			}
			break;
	}

	return false;
}

BOOL func_196(int iParam0) // Position - 0x9BDF Hash - 0x5000025C ^0x5000025C
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

int func_197(int iParam0) // Position - 0x9C1E Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_198(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x9CB4 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_71(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_199(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9CDB Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_200(Hash hParam0) // Position - 0x9D16 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_201(int iParam0) // Position - 0x9D31 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_202(Hash hParam0) // Position - 0x9D52 Hash - 0xB8EC44B7 ^0x72487142
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

int func_203(var uParam0, int iParam1) // Position - 0x9E35 Hash - 0x6AC2726E ^0xDB215040
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

int func_204(Hash hParam0) // Position - 0x9E72 Hash - 0xD114ACC1 ^0x3428F85C
{
	Hash hash;

	hash = func_165(hParam0);

	switch (hash)
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

int func_205(Hash hParam0, BOOL bParam1) // Position - 0x9EDF Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_384(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_386(&unk, func_385(false));

	if (!func_387(&unk, &num, &num2, false))
		return 0;

	func_201(num);
	return num2;
}

int func_206(Hash hParam0, Hash hParam1) // Position - 0x9F3E Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_432(func_284(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

struct<4> func_207(Hash hParam0, BOOL bParam1) // Position - 0x9F6A Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_193(hParam0, bParam1, false) };
	return func_274(hParam0, unk, unk.f_4, bParam1);
}

BOOL func_208(int iParam0, int iParam1) // Position - 0x9F8F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_209(var uParam0) // Position - 0x9F9E Hash - 0x39705408 ^0x39705408
{
	return func_208(*uParam0, 2);
}

float func_210() // Position - 0x9FAE Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_211(var uParam0, int iParam1) // Position - 0x9FE0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_212(var uParam0, int iParam1) // Position - 0x9FF1 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_213(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0xA006 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_214(var uParam0, int iParam1) // Position - 0xA02F Hash - 0xF55E891F ^0xF55E891F
{
	func_6(uParam0, iParam1);
	return;
}

BOOL func_215(Hash hParam0) // Position - 0xA03F Hash - 0x6942A5C5 ^0xFA5CB2EF
{
	return func_433(hParam0) && func_152(hParam0, 1584357097);
}

Hash func_216(Hash hParam0) // Position - 0xA05D Hash - 0xDDBFAC08 ^0x5ECDEB23
{
	if (!func_215(hParam0))
		return 0;

	switch (hParam0)
	{
		case -2109461640:
			return -1533903180;
	
		case -2050900874:
			return -856521084;
	
		case -2027203194:
			return 2081091619;
	
		case -1975194892:
			return 73453226;
	
		case -1894668475:
			return 1957000738;
	
		case -1815586685:
			return -412238982;
	
		case -1806184545:
			return 1874334976;
	
		case -1617589234:
			return -431273312;
	
		case -1617179117:
			return 862573726;
	
		case -1615607679:
			return 1686296029;
	
		case -1593520704:
			return -769187178;
	
		case -1382149068:
			return -240893062;
	
		case -1278925815:
			return 1640403026;
	
		case -1179959034:
			return -146516808;
	
		case -1085571851:
			return 1934791288;
	
		case -1053842899:
			return -2015093177;
	
		case -1042952050:
			return -1111852673;
	
		case -1029170414:
			return 1651235889;
	
		case -997271222:
			return 1353200767;
	
		case -878058438:
			return -668553641;
	
		case -873142887:
			return -337101316;
	
		case -862677113:
			return -1633818354;
	
		case -840486512:
			return -526428006;
	
		case -831411723:
			return -882484202;
	
		case -781656240:
			return -2040374903;
	
		case -755677768:
			return -1841483015;
	
		case -609641686:
			return 516107635;
	
		case -533360838:
			return 1220617347;
	
		case -464283790:
			return -553725692;
	
		case -452048774:
			return 974561281;
	
		case -429434400:
			return 1973137538;
	
		case -320325540:
			return 1029354793;
	
		case -297375678:
			return 2100623539;
	
		case -260985198:
			return -354862110;
	
		case -188079477:
			return -547676440;
	
		case -186533746:
			return -1123513064;
	
		case -142781743:
			return -99130340;
	
		case -131203731:
			return -1830556910;
	
		case -80071950:
			return -1229833684;
	
		case -51500315:
			return -260158053;
	
		case -28339930:
			return -2035393948;
	
		case 154924622:
			return 207980728;
	
		case 245915270:
			return 518337236;
	
		case 507515628:
			return -284580868;
	
		case 525029001:
			return 463034341;
	
		case 532885562:
			return 1728467402;
	
		case 538640747:
			return 677332424;
	
		case 550403966:
			return -1219424121;
	
		case 560856018:
			return 9691481;
	
		case 731907282:
			return 195889874;
	
		case 767294276:
			return -600422706;
	
		case 844146134:
			return 966617156;
	
		case 856007660:
			return 1019812717;
	
		case 919634467:
			return -1729036567;
	
		case 948647349:
			return -1058723344;
	
		case 1034120186:
			return 2091613460;
	
		case 1103717282:
			return 1767482612;
	
		case 1156363443:
			return 387193715;
	
		case 1254834984:
			return -311177636;
	
		case 1260724738:
			return -1889559288;
	
		case 1311814185:
			return -229245945;
	
		case 1332088703:
			return 1366042262;
	
		case 1348094862:
			return 863949896;
	
		case 1386939749:
			return 2105724242;
	
		case 1464921218:
			return -979751655;
	
		case 1502511939:
			return 1942551232;
	
		case 1561454517:
			return 465087209;
	
		case 1578729681:
			return 526083803;
	
		case 1646522145:
			return 1693169437;
	
		case 1701653225:
			return -1303234828;
	
		case 1717296181:
			return 149336704;
	
		case 1784374159:
			return 1100771587;
	
		case 1800445393:
			return 596295460;
	
		case 1809065934:
			return 518344954;
	
		case 1829957287:
			return 857944907;
	
		case 1864875333:
			return 1682604808;
	
		case 1879581870:
			return -1364982418;
	
		case 1890828381:
			return -1707282708;
	
		case 1894117705:
			return 1146825064;
	
		case 1952092069:
			return -1816797957;
	
		case 2039957913:
			return 329215271;
	
		case 2047228732:
			return 290265769;
	
		case 2081818376:
			return 1455922005;
	
		case 2095710966:
			return 1656345167;
	
		default:
		
	}

	return 0;
}

BOOL func_217(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xA513 Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_434(hParam0, hParam1, &unk, &num, false, true))
		return false;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_435(unk[i /*2*/].f_1))
				return false;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_436(unk[i /*2*/].f_1))
				return false;
		}
		else
		{
			num2 = func_437(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_438(unk[i /*2*/], num2);
			else
				num4 = func_89(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

int func_218(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA61A Hash - 0xEC7BE68C ^0xEC7BE68C
{
	var unk;
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	unk = 15;

	if (!func_439(hParam0, hParam1, &unk, &num, true, false))
		return 0;

	flag = !bParam3 && func_107(false) && !func_108();
	num2 = -1;
	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		num4 = func_437(num3, unk[i /*2*/]);
	
		if (num4 != 0)
		{
			bParam2 = false;
			num5 = func_438(unk[i /*2*/], num4);
		}
		else
		{
			num5 = func_89(unk[i /*2*/], false, !flag, true);
		}
	
		if (flag)
		{
			if (func_244(unk[i /*2*/]) || func_440(unk[i /*2*/]))
			{
				num5 = num5 + func_441(unk[i /*2*/], 0);
			
				if (bParam2)
				{
					num6 = 0;
					num5 = num5 + func_442(7, unk[i /*2*/], &num6);
				}
			}
			else if (bParam2)
			{
				num5 = num5 + func_443(7, unk[i /*2*/]) + func_444(unk[i /*2*/]);
			}
		}
	
		if (num5 < unk[i /*2*/].f_1)
			return 0;
	
		num5 = num5 / unk[i /*2*/].f_1;
	
		if (num2 == -1 || num5 < num2)
			num2 = num5;
	}

	return num2;
}

BOOL func_219(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0xA771 Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_445(&hParam0);

	if (!func_85(hParam0, 0) && !func_432(func_284(hParam0), 2))
		return false;

	if (!bParam3 && func_206(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_446(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_385(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_389(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return false;
		else if (func_390(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return false;
	
		if (func_388(hParam0, true))
			if (!func_389(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return false;
			else if (func_390(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return false;
	
		return true;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_447(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	num2 = func_334(hParam0, *panParam1, panParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return true;

	return false;
}

int func_220(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0xA8A5 Hash - 0x8994BB7F ^0xDE1269F5
{
	int cashBalance;
	int goldBarBalance;
	var unk;
	int num;
	int num2;
	int i;
	var unk32;
	int num3;
	var unk49;

	if (!func_85(hParam0, 0))
		return -1;

	if (func_86(hParam0) != joaat("fee"))
		return -1;

	if (func_108())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_448(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_448(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_439(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_89(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_107(false))
	{
		if (cashBalance > 0)
		{
			func_148(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_148(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_449(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_148(unk[i /*2*/], num2, -142743235, 0, false);
			}
		}
	
		return -1;
	}

	unk32.f_9 = 1;
	unk32.f_11 = joaat("SLOTID_NONE");
	unk32.f_8 = hParam0;
	unk32.f_9 = iParam2;
	unk32.f_13 = hParam5;
	unk32.f_12 = -142743235;
	num3 = func_450(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_225(num3, unk49);
	}

	return num3;
}

BOOL func_221(int* piParam0, Hash hParam1, Any* panParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xAA95 Hash - 0xB79F2DE9 ^0xB79F2DE9
{
	Hash hash;

	if (!func_451(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_452(hParam1, 0, true, iParam5, bParam6);

	if (!func_453(hParam1, hParam4, iParam5))
		return false;

	panParam2->f_17 = hParam1;
	panParam2->f_8 = hParam1;
	panParam2->f_9 = 1;
	panParam2->f_13 = hParam4;
	panParam2->f_12 = 1248274121;
	hash = 541670136;

	if (bParam7)
		hash = joaat("batch");

	if (!func_454(piParam0, panParam2, hash, hParam4, bParam3))
		return false;

	return true;
}

BOOL func_222(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, BOOL bParam12) // Position - 0xAB1C Hash - 0xB722E8D ^0xB722E8D
{
	var unk;

	if (!func_451(piParam0, false))
		return false;

	if (!func_455(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, iParam11, bParam12))
		return false;

	unk = { func_456(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (!func_457(piParam0, &unk, 2113164098, bParam9, iParam11))
		return false;

	return true;
}

int func_223(Hash hParam0, Hash hParam1) // Position - 0xAB99 Hash - 0x19C351C8 ^0x40F6A58B
{
	Hash outData;
	int awardAcquireCostCount;
	int i;

	outData.f_4 = 15;
	outData.f_36 = 10;
	awardAcquireCostCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT(hParam0);

	if (awardAcquireCostCount == 0)
		return 0;

	for (i = 0; i < awardAcquireCostCount; i = i + 1)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(hParam0, i, &outData) && outData == hParam1)
			return outData.f_2;
	}

	return 0;
}

int func_224(Hash hParam0, Hash hParam1) // Position - 0xABF6 Hash - 0x3A2C8450 ^0x3C621176
{
	var outData;

	if (func_458(hParam0) || func_152(hParam0, 1077060302))
		return func_223(func_459(hParam0, true), hParam1);

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return 0;

	return outData.f_2;
}

void func_225(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0xAC4F Hash - 0x4EE39F09 ^0x4C62B7DF
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

int func_226(int iParam0, BOOL bParam1, int iParam2) // Position - 0xACCD Hash - 0x3DD75313 ^0x4F77747
{
	if (func_460(255))
		return 1;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
		return 0;

	if (!func_461(iParam0))
		return 0;

	if (!func_463(func_462(iParam0), !bParam1, iParam2, 0, false))
		return 0;

	return 1;
}

BOOL func_227(Hash hParam0, int iParam1) // Position - 0xAD1B Hash - 0xB51BEA17 ^0xA0420D6A
{
	int num;

	if (!func_85(hParam0, 0))
		return false;

	num = func_86(hParam0);

	switch (iParam1)
	{
		case 0:
			if (func_237(hParam0) || func_288(hParam0, -1636519629) == -701492487 || hParam0 == joaat("provision_moonshine_poison"))
				return true;
			break;
	
		case 1:
			if (func_152(hParam0, -537818634) || func_152(hParam0, -458578204) && !func_152(hParam0, -1242251796) && !func_152(hParam0, 127710288))
				return true;
			break;
	
		case 2:
			if (num == joaat("AMMO"))
			{
				if (func_152(hParam0, -1588156645))
					return false;
			
				return true;
			}
			break;
	
		case 3:
			if (num == joaat("WEAPON"))
				return true;
			else if (num == joaat("AMMO"))
				if (func_152(hParam0, -1588156645))
					return true;
			break;
	
		case 4:
			if (func_152(hParam0, 127710288))
				return true;
			break;
	
		case 5:
			if (func_152(hParam0, -1242251796))
				return true;
			break;
	}

	return false;
}

int func_228(int iParam0) // Position - 0xAE61 Hash - 0xCC8E274D ^0x5A12C894
{
	int num;
	int num2;

	if (func_464())
		return 0;

	if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return 0;

	if (func_465())
		return 0;

	num = func_466(iParam0);
	num2 = func_467(num, 2);

	if (num2 >= 5)
		return 0;

	if (!func_463(func_468(iParam0), false, 255, 0, false))
		return 0;

	return 1;
}

BOOL func_229(Ped pedParam0, int iParam1) // Position - 0xAEBE Hash - 0x25D0971D ^0xF7D4E234
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

BOOL func_230(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0xAEFD Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

int func_231(int iParam0) // Position - 0xAF3E Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_232(int iParam0) // Position - 0xAF48 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_469(iParam0))
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

BOOL func_233(var uParam0) // Position - 0xAFFB Hash - 0x3473862B ^0x5F5AB45D
{
	ItemSet itemSet;
	int matchingEntities;
	int i;
	ScrHandle indexedItemInItemset;
	Entity entityFromItem;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	matchingEntities = ENTITY::GET_MATCHING_ENTITIES(*uParam0, itemSet, 1, 1, 0, 0);

	for (i = 0; i < matchingEntities; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
	
		if (ENTITY::IS_ENTITY_DEAD(entityFromItem))
		{
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return true;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return false;
}

BOOL func_234(int iParam0, int iParam1) // Position - 0xB058 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_235(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0xB079 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { fParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
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
	func_239(iParam0, true);
	func_240(iParam0, true);
	func_241(iParam0, 128);
	return;
}

Hash func_236(Hash hParam0) // Position - 0xB393 Hash - 0xBA965109 ^0x5F77AAA4
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

BOOL func_237(Hash hParam0) // Position - 0xB6F5 Hash - 0xA3EEED9 ^0x97FF85C3
{
	if (func_86(hParam0) == joaat("consumable") && INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, 16777216))
		return true;

	return false;
}

void func_238(int iParam0, int iParam1) // Position - 0xB721 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_239(int iParam0, BOOL bParam1) // Position - 0xB754 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_234(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_240(int iParam0, BOOL bParam1) // Position - 0xB7AC Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_241(int iParam0, int iParam1) // Position - 0xB7D5 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

Ped func_242(Ped pedParam0) // Position - 0xB7FD Hash - 0xC202D55A ^0x3B765787
{
	Ped ped;

	ped = func_470(pedParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && PED::IS_PED_INJURED(ped))
		return ped;

	return 0;
}

int func_243(Hash hParam0, int iParam1) // Position - 0xB827 Hash - 0x10BA6DD6 ^0xD79E06BF
{
	var unk;
	var unk5;

	if (0 == hParam0)
		return 0;

	unk5.f_1 = 10;
	func_471(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_472(hParam0, &unk5, &unk, iParam1, 0);
}

BOOL func_244(Hash hParam0) // Position - 0xB85B Hash - 0x7A41F8FA ^0x4ED5CABB
{
	if (!func_85(hParam0, 0))
		return false;

	if (func_152(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_440(hParam0);
}

int func_245(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0xB88A Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash weaponHash;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	int num;
	int i;
	var statId;
	BOOL flag3;

	if (!func_85(hParam0, 0))
		return 0;

	if (!func_473(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_474(hParam0, &value, iParam1))
		return 0;

	func_475(hParam0, bParam2);
	lootTableKey = 0;

	if (func_86(hParam0) == joaat("CLOTHING"))
		if (!func_152(hParam0, 866047851) && !func_152(hParam0, -1979000645))
			flag = true;

	if (func_367(hParam0, 8388608) && !func_476(27))
		func_477(27);

	func_478(hParam0);

	if (!flag)
	{
		if (func_152(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
			weaponHash = func_480(func_479(hParam0, true), false);
		
			if (WEAPON::IS_WEAPON_VALID(weaponHash))
			{
				if (func_104() == -1)
					func_481(weaponHash);
			
				if (func_107(false) && func_482(weaponHash, 0, false, true, 0, false, hParam5, false))
				{
					func_483(hParam0, value, hParam5);
				
					if (!bParam9)
						bParam2 = false;
				}
				else
				{
					func_484(hParam0, value, hParam5);
				}
			}
		}
		else if (func_86(hParam0) == joaat("WEAPON"))
		{
			if (!func_485(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_86(hParam0) == joaat("AMMO") && func_486(hParam0))
		{
			if (!func_487(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_152(hParam0, -103750053))
		{
			func_110(func_488(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_110(func_109(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_152(hParam0, -121341956) && !func_152(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector"))
				func_139(536, false);
		
			func_152(hParam0, -2017733358) || func_152(hParam0, -1369131378);
		}
		else if (func_152(hParam0, -136654233))
		{
			if (func_152(hParam0, -1021472396))
			{
			}
		}
		else if (func_152(hParam0, -1466706512) && func_152(hParam0, 1147021565))
		{
			func_139(519, false);
		}
		else if (func_152(hParam0, 1147021565) && func_152(hParam0, -524514947))
		{
		}
		else if (func_152(hParam0, 554195525))
		{
		}
		else if (func_152(hParam0, 589988438))
		{
			if (func_489())
			{
				func_490(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_152(hParam0, 787083290) && func_152(hParam0, 949916894))
		{
			func_491(hParam0);
		}
		else if (func_152(hParam0, -1718133314))
		{
			func_492(hParam0);
		}
		else if (func_152(hParam0, -1738650224))
		{
			func_493(hParam0);
		}
		else if (func_152(hParam0, -1112814642) && func_152(hParam0, 949916894))
		{
			func_494(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1940085.f_21 = 0;
		}
		else if (func_152(hParam0, 1841149704))
		{
			func_495();
		}
		else if (func_152(hParam0, -1979000645))
		{
		}
		else if (func_152(hParam0, 606799272))
		{
		}
		else if (func_152(hParam0, -1112814642) && func_152(hParam0, -1697809989))
		{
		}
		else if (func_152(hParam0, -2017733358) || func_152(hParam0, -1369131378))
		{
		}
		else if (func_152(hParam0, -1921346699))
		{
			return 0;
		}
		else if (func_152(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_23(471514780, 1))
						func_245(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_23(526074061, 1))
						func_245(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_23(-967317137, 1))
						func_245(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_23(670273567, 1))
						func_245(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_23(215778062, 1))
						func_245(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_23(-1045488665, 1))
						func_245(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_152(hParam0, -839724752) && func_367(hParam0, 4))
		{
		}
		else if (func_152(hParam0, 1399091007))
		{
			func_496(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_104() == -1)
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_498(&func_1, -103579, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_498(&func_1, -1531530025, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_498(685, -1228016946, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_498(685, 1934060482, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_498(685, 1110018439, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_139(521, false);
				break;
		
			case joaat("consumable_cigarette_box"):
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
				if (MISC::GET_GAME_TIMER() >= Global_1940252.f_11598 + 60000)
				{
					func_498(685, 1408511260, true, true);
					Global_1940252.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_476(1))
					func_139(522, false);
				break;
		
			case joaat("consumable_valerian_root"):
				func_497(271, func_371(joaat("consumable_valerian_root"), false), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
			case joaat("weapon_kit_binoculars_improved"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_497(272, func_371(joaat("consumable_aged_pirate_rum"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_139(526, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_497(270, func_371(joaat("consumable_ginseng_elixier"), false), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
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
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("reward_abandoned_loot_male");
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_139(534, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_139(529, false);
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
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash = hParam0;
		func_499(&hash);
	
		if (!func_484(hash, value, hParam5))
			return 0;
		else if (!func_107(false))
			return 1;
	
		if (func_86(hParam0) == joaat("CLOTHING"))
			func_500(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_107(false) && !func_108())
		{
			num.f_1 = 10;
			num.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, lootTableKey, &num, 0);
		
			for (i = 0; i < num; i = i + 1)
			{
				func_245(num.f_1[i], num.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_243(lootTableKey, 0);
		}
	}

	statId = { func_191(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_501(hParam0);

	if (iParam6 > 0f)
	{
		if (func_152(hParam0, -839724752))
			func_502(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_190(hParam0, value, false, flag3, 0, false, false);
	}

	return 1;
}

int func_246(Ped pedParam0, int iParam1) // Position - 0xC340 Hash - 0xF9E10DA3 ^0xEBBACA92
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

BOOL func_247(Ped pedParam0) // Position - 0xC39C Hash - 0xDEF9F967 ^0x717FC3F4
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

BOOL func_248(Hash hParam0) // Position - 0xC48D Hash - 0x5E6E1858 ^0x5BD2FA9
{
	!func_85(hParam0, 0);

	if (func_152(hParam0, 1286414894))
		return true;

	return false;
}

Hash func_249(var uParam0) // Position - 0xC4B3 Hash - 0xDAEBAE6 ^0xFAD9C5D0
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0);
	return func_503(pedIndexFromEntityIndex);
}

Hash func_250(Ped pedParam0) // Position - 0xC4D9 Hash - 0xB3A7ACD3 ^0xEF2020CA
{
	Hash carriableFromEntity;

	carriableFromEntity = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_A_PED(pedParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(pedParam0);

	if (carriableFromEntity == 0)
		if (ENTITY::IS_ENTITY_A_PED(pedParam0))
			carriableFromEntity = func_503(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0));

	return carriableFromEntity;
}

int func_251(Hash hParam0, int iParam1, Ped pedParam2, BOOL bParam3, Hash hParam4) // Position - 0xC537 Hash - 0x789B46BC ^0x72B9E423
{
	iParam1 = func_504(hParam0, iParam1, pedParam2, true, true, -142743235, 0, 1);

	if (iParam1 <= 0)
		return 1;

	return func_505(hParam0, iParam1, bParam3, hParam4);
}

int func_252(Hash hParam0) // Position - 0xC56A Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_327(outSlotId);
}

int func_253(Hash hParam0, int iParam1) // Position - 0xC58D Hash - 0xFF013CB6 ^0xFF013CB6
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

BOOL func_254(Hash hParam0) // Position - 0xC75E Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_255() // Position - 0xC76C Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1896646.f_41;
}

void func_256(int iParam0, var uParam1, var uParam2) // Position - 0xC77A Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_257(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xC796 Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_506(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_507(iParam0))
		return false;

	if (func_508(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_509(iParam0, 1) || func_510(32768))
		if (!func_509(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_511())
		return false;

	return true;
}

void func_258(int iParam0, int iParam1) // Position - 0xC838 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

int func_259(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, Hash hParam10, BOOL bParam11) // Position - 0xC85C Hash - 0x7D233416 ^0xA5F2EB21
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_234(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_235(num, hParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, false, false, 0, hParam10, bParam11);
		return num;
	}

	return 0;
}

void func_260(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC8E5 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_95(iParam0))
		return;

	num = func_231(iParam0);
	func_239(num, bParam1);
	return;
}

void func_261(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC911 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_95(iParam0))
		return;

	num = func_231(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951910[num /*23*/].f_3, iParam1, bParam2);
	return;
}

void func_262(var uParam0, char* sParam1) // Position - 0xC95C Hash - 0x51CAA743 ^0xF09D0482
{
	int num;

	if (func_95(*uParam0))
	{
		num = func_231(*uParam0);
	
		if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
			HUD::_UI_PROMPT_SET_TAG(Global_1951910[num /*23*/].f_3, sParam1);
	}

	return;
}

BOOL func_263(int iParam0, BOOL bParam1) // Position - 0xC998 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_95(iParam0))
		return false;

	num = func_231(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951910[num /*23*/].f_3);
}

BOOL func_264() // Position - 0xC9CB Hash - 0x24B9F73C ^0xBB1667FB
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

BOOL func_265(var uParam0, float fParam1) // Position - 0xCA0E Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_27(uParam0, fParam1))
	{
		func_266(uParam0);
		return true;
	}

	return false;
}

void func_266(var uParam0) // Position - 0xCA2C Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_267(int iParam0, BOOL bParam1) // Position - 0xCA42 Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_95(iParam0))
		return false;

	num = func_231(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1951910[num /*23*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1951910[num /*23*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1951910[num /*23*/].f_3);
}

BOOL func_268(var uParam0) // Position - 0xCA99 Hash - 0x95087098 ^0x1F9786C9
{
	int num;

	uParam0->f_132 = func_58();
	num = func_35(uParam0);

	if (uParam0->f_133 == -1 || num == uParam0->f_133 && uParam0->f_134 == 0 || func_512(uParam0->f_132, uParam0->f_134) || uParam0->f_133 == -1 && func_512(uParam0->f_132, uParam0->f_134) && !(PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33)))
	{
		uParam0->f_131 = num;
		return true;
	}

	return false;
}

void func_269(var uParam0) // Position - 0xCB26 Hash - 0x1CC96AA7 ^0x4589C24
{
	Hash activeDynamicScenario2;

	activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);

	if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
		{
			func_73(joaat("KNIFE1_TRANS_KNEEL1"), 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}
	else if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
	{
		if (func_70(uParam0) && MISC::GET_GAME_TIMER() - uParam0->f_153 > 500)
		{
			func_73(joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 2f);
			uParam0->f_153 = MISC::GET_GAME_TIMER();
		}
	}

	return;
}

int func_270(var uParam0) // Position - 0xCBC8 Hash - 0xE8DBE784 ^0xB1091F30
{
	if (uParam0->f_132 == 6 && func_57(true))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_132)
		{
			case 1:
				func_73(joaat("COFFEE_TRANS_KNEEL"), 1086324736);
				break;
		}
	}

	return 0;
}

int func_271(var uParam0) // Position - 0xCC0D Hash - 0xD7916F02 ^0xDED0E46A
{
	if (uParam0->f_132 == 6 && func_57(true))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_132)
		{
			case 1:
				func_73(joaat("COFFEE_TRANS_KNEEL"), 1086324736);
				break;
		
			case 7:
				func_73(joaat("SIT_TRANS_KNEEL"), 0.5f);
				break;
		
			case 8:
				func_73(joaat("SQUAT_TRANS_KNEEL"), 0.5f);
				break;
		}
	}

	return 0;
}

BOOL func_272(Ped pedParam0, Any anParam1, char* sParam2, char* sParam3, char* sParam4) // Position - 0xCC82 Hash - 0x386F1FC5 ^0x173878
{
	PED::_ADD_SCENARIO_TRANSITION(pedParam0);
	return TASK::_0x79197F7D2BB5E73A(pedParam0, anParam1, sParam2, sParam3, sParam4, 0);
}

BOOL func_273(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xCC9F Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_513(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_206(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_107(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_514(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_515(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_450(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_225(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_71(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

struct<4> func_274(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xCDB7 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_85(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_71(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_275(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0xCDE8 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_513(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_393(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_107(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_104() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_450(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = bParam5;
				num2.f_7 = hParam4;
				func_225(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_71(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_276(Hash hParam0) // Position - 0xCF06 Hash - 0x2F9A232D ^0xF8D1A587
{
	if (func_152(hParam0, 1573112293))
		return func_516(hParam0);

	if (func_152(hParam0, 1816455607))
		return func_517();

	if (func_518(hParam0))
		return func_519();

	switch (func_165(hParam0))
	{
		case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
		case 664784405:
		case joaat("CI_CATEGORY_EMOTE_GREETS"):
		case joaat("CI_CATEGORY_EMOTE_DANCES"):
			return func_528();
	
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_522();
	
		case -1823706425:
			if (hParam0 == -1115561122)
				return func_525();
			else
				return func_526();
			break;
	
		case -1520388130:
		case 1802292908:
			return func_521();
	
		case -1393202694:
		case 2041469314:
			return func_516(hParam0);
	
		case -854348463:
			return func_527();
	
		case -525676072:
			return func_522();
	
		case -77448735:
			if (func_520(hParam0))
				return func_516(hParam0);
			break;
	
		case 1779021115:
			if (hParam0 == joaat("weapon_kit_camera") || hParam0 == 332793555)
				return func_523();
		
			return func_524();
	
		default:
			if (func_85(hParam0, 0))
				if (func_152(hParam0, 1919582297))
					return func_529();
				else if (hParam0 == joaat("upgrade_upg_mortar_pestle") || hParam0 == -1448210800)
					return func_530();
				else if (hParam0 == joaat("kit_horse_brush"))
					return func_531();
				else if (func_152(hParam0, 1147021565))
					return func_532();
		
			return func_533();
	}

	return func_533();
}

BOOL func_277(BOOL bParam0, int iParam1) // Position - 0xD0CD Hash - 0xDE6C34D8 ^0x4950B3D1
{
	Ped mount;

	if (Global_1940199.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true) || ENTITY::IS_ENTITY_DEAD(Global_33))
		return false;

	if (func_104() == 0)
		if (func_534(131072))
			return false;

	if (!func_16(iParam1, 1))
		if (func_534(1024))
			return false;

	if (Global_1940199.f_16)
		return false;

	if (!func_16(iParam1, 2) && func_534(32))
		return false;

	if (!func_16(iParam1, 4))
		if (func_534(4096))
			return false;

	if (!func_16(iParam1, 8) && func_534(512))
		return false;

	if (!func_16(iParam1, 512) && !func_535(bParam0))
		return false;

	if (!func_16(iParam1, 262144) && !func_536(bParam0, func_16(iParam1, 524288)))
		return false;

	if (!func_16(iParam1, 64) && !func_537(bParam0, iParam1, true))
		return false;

	if (!func_16(iParam1, 128))
	{
		if (func_538(Global_33, SCRIPT_TASK_MOUNT_ANIMAL) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
				func_164("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_16(iParam1, 16))
	{
		if (func_539(Global_33))
		{
			mount = PED::GET_MOUNT(Global_33);
		
			if (!func_540(mount, true))
			{
				if (bParam0)
					func_164("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, true);
			
				return false;
			}
		}
	}

	if (!func_16(iParam1, 256) && func_534(8192))
		return false;

	if (!func_16(iParam1, 1024) && func_534(65536))
	{
		if (bParam0)
			func_164("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (!func_16(iParam1, 2048))
		if (func_534(32768))
			return false;

	if (!func_16(iParam1, 4096))
		if (func_534(16384))
			return false;

	if (!func_16(iParam1, 8192))
		if (!func_534(16))
			return false;

	if (!func_16(iParam1, 67108864))
		if (!func_534(268435456))
			return false;

	if (!func_16(iParam1, 16384))
		if (func_534(256))
			return false;

	if (!func_16(iParam1, 32768))
	{
		if (func_146())
		{
			if (bParam0)
				func_164("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, true);
		
			return false;
		}
	}

	if (!func_16(iParam1, 131072))
		if (!func_534(524288))
			return false;

	if (!func_16(iParam1, 65536))
		if (!func_534(262144))
			return false;

	if (!func_16(iParam1, 1048576))
		if (!func_534(2097152))
			return false;

	if (!func_16(iParam1, 2097152))
		if (!func_534(8388608))
			return false;

	if (!func_16(iParam1, 4194304))
		if (!func_534(16777216))
			return false;

	if (!func_16(iParam1, 8388608))
		if (func_534(33554432))
			return false;

	if (!func_16(iParam1, 16777216))
		if (func_534(67108864))
			return false;

	if (!func_16(iParam1, 33554432))
		if (func_534(134217728))
			return false;

	if (func_534(64))
		return false;
	else if (func_534(128))
		return false;
	else if (func_534(1048576))
		return false;
	else if (func_534(4))
		return false;

	if (!func_16(iParam1, 134217728))
		if (func_56(256))
			return false;

	if (!func_16(iParam1, 268435456))
		if (func_534(536870912))
			return false;

	if (!func_16(iParam1, 536870912))
		if (func_534(1073741824))
			return false;

	return true;
}

BOOL func_278() // Position - 0xD509 Hash - 0xC1143497 ^0x6DF3C037
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

BOOL func_279(BOOL bParam0) // Position - 0xD554 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

Any func_280(int iParam0, int iParam1) // Position - 0xD584 Hash - 0x2C0BA169 ^0xDCFC749C
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940252.f_1556.f_44.f_87);
}

int func_281() // Position - 0xD59B Hash - 0x8190E5D8 ^0xF593603
{
	return Global_1915656.f_22504.f_5;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0xD5AC Hash - 0xA17D549C ^0xC174DD6E
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
			unk = { func_82(0) };
		
			if (!func_83(unk))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			num = func_541(&unk, 1);
		
			if (num == -1)
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			if (!func_542(num, 461218520, true))
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
			return func_544(func_543(num, 461218520));
	}

	return "";
}

void func_283(int iParam0) // Position - 0xD846 Hash - 0xC421D95B ^0xE7B505B3
{
	Global_1915656.f_22504.f_5 = iParam0;
	return;
}

Hash func_284(Hash hParam0) // Position - 0xD859 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_285(Hash hParam0, Hash hParam1) // Position - 0xD863 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_432(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

int func_286(Hash hParam0) // Position - 0xD899 Hash - 0x537A51B4 ^0x537A51B4
{
	int i;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (func_545(i, hParam0))
			return i;
	}

	return -1;
}

int func_287(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD8C5 Hash - 0x571E293 ^0x8A680264
{
	if (!func_546(iParam0))
		return 1;

	if (!func_547(iParam0))
		return 5;

	if (!bParam1 && Global_1220826.f_48[iParam0 /*21*/].f_17)
		if (bParam2 || Global_1220826.f_1.f_20 != 0)
			return 2;

	if (!bParam2 && !func_548(iParam0))
		return 3;

	if (func_549(iParam0) && !func_550())
		return 4;

	return 0;
}

int func_288(Hash hParam0, int iParam1) // Position - 0xD947 Hash - 0x7A1C2599 ^0xFF9B5634
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

void func_289(int iParam0) // Position - 0xD991 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11599 = iParam0;
	return;
}

Hash func_290(Hash hParam0) // Position - 0xD9A2 Hash - 0x33F7D399 ^0x18C3F003
{
	if (!func_85(hParam0, 0))
		return 0;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(hParam0);
}

void func_291(Hash hParam0) // Position - 0xD9BF Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1940252.f_11605 = hParam0;
	return;
}

BOOL func_292(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0xD9D0 Hash - 0x5AD1F9FD ^0x14415059
{
	Hash interactionAnimHash;

	switch (func_288(hParam0, -949239683))
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

BOOL func_293() // Position - 0xDD23 Hash - 0x78092BAE ^0x48B67C15
{
	return Global_1953292.f_1676.f_1[1 /*3*/].f_1 == joaat("pomade");
}

BOOL func_294(Ped pedParam0) // Position - 0xDD3F Hash - 0x224EC90C ^0x807A7E5C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*pedParam0) || ENTITY::IS_ENTITY_DEAD(*pedParam0))
		return false;

	if (func_551(*pedParam0, joaat("HATS"), false))
		return true;

	return false;
}

void func_295(Hash hParam0) // Position - 0xDD78 Hash - 0xA69012EC ^0xD86A3DAD
{
	Hash hash;

	hash = joaat("use_handfull_satchel_left_hand_quick");

	switch (func_552())
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
		if (func_152(hParam0, 1573112293))
			func_554(func_553(hParam0), true, 1);
	
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_296(Hash hParam0) // Position - 0xDE12 Hash - 0x26CEB274 ^0x13CF482F
{
	Hash hash;

	hash = 16939881;

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_297(Hash hParam0, BOOL bParam1) // Position - 0xDE92 Hash - 0xE800B03C ^0x3799F51A
{
	Hash hash;

	hash = -45077177;

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_298(Hash hParam0, BOOL bParam1) // Position - 0xDF3F Hash - 0xE800B03C ^0xCB090F44
{
	Hash hash;

	hash = 1700817728;

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_299(Hash hParam0) // Position - 0xDFEC Hash - 0x26CEB274 ^0x4A49C80C
{
	Hash hash;

	hash = joaat("use_large_bottle_combat_left_hand");

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_300(Hash hParam0) // Position - 0xE06C Hash - 0x26CEB274 ^0x806B3C6E
{
	Hash hash;

	hash = 2105609037;

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_301(Hash hParam0) // Position - 0xE0EC Hash - 0x26CEB274 ^0x76FE185
{
	Hash hash;

	hash = 1964324114;

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_302(Hash hParam0) // Position - 0xE16C Hash - 0x26CEB274 ^0x271E98F3
{
	Hash hash;

	hash = -1530144981;

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_303(Hash hParam0) // Position - 0xE1EC Hash - 0x26CEB274 ^0x8287AC45
{
	Hash hash;

	hash = -1074475556;

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_304(Hash hParam0) // Position - 0xE26C Hash - 0x26CEB274 ^0x26B03C92
{
	Hash hash;

	hash = joaat("use_stimulant_injection_quick_left_hand");

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_305(Hash hParam0) // Position - 0xE2EC Hash - 0x26CEB274 ^0x5D3C7B2A
{
	Hash hash;

	hash = joaat("quick_smoke_cigarette_left_hand");

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, false);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_306(Hash hParam0) // Position - 0xE36C Hash - 0x26CEB274 ^0xBFBE1D88
{
	Hash hash;

	hash = joaat("quick_smoke_cigar_left_hand");

	switch (func_552())
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
		func_555(Global_33, hParam0, hash, 1, 0);
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_307(Hash hParam0, BOOL bParam1) // Position - 0xE3EC Hash - 0x1923F90C ^0xE8AF292D
{
	Hash hash;

	hash = joaat("use_tonic_satchel_left_hand_quick");

	switch (func_552())
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
		if (!func_555(Global_33, hParam0, hash, 1, 0) && bParam1)
		{
			func_556(hParam0);
			func_74(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

void func_308(Hash hParam0, BOOL bParam1) // Position - 0xE48A Hash - 0x1923F90C ^0xB46E99E1
{
	Hash hash;

	hash = joaat("use_tonic_potent_satchel_left_hand_quick");

	switch (func_552())
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
		if (!func_555(Global_33, hParam0, hash, 1, bParam1) && bParam1)
		{
			func_556(hParam0);
			func_74(hParam0, 1, false, 562618531);
		}
	}
	else
	{
		func_556(hParam0);
		func_74(hParam0, 1, false, 562618531);
	}

	return;
}

BOOL func_309(int iParam0, int iParam1) // Position - 0xE529 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_310(const char* sParam0) // Position - 0xE538 Hash - 0x2124511C ^0xA40AAA4F
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

void func_311(int iParam0) // Position - 0xE572 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_309(iParam0, 1))
		func_557(1);

	return;
}

int func_312(int iParam0) // Position - 0xE589 Hash - 0x9D41E8C7 ^0x9D41E8C7
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

void func_313(BOOL bParam0) // Position - 0xE5C6 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_314(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xE5D9 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_558(iParam0))
			{
				for (i = 0; i < Global_1953292.f_918; i = i + 1)
				{
					num = (Global_1953292.f_923 + i) % 25;
				
					if (Global_1953292.f_736[num /*4*/] == iParam0 && Global_1953292.f_736[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_736[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_559(iParam0);
			Global_1953292.f_736[Global_1953292.f_924 /*4*/] = { iParam0 };
			Global_1953292.f_918 = Global_1953292.f_918 + 1;
			Global_1953292.f_924 = (Global_1953292.f_924 + 1) % 25;
			func_313(8);
			break;
	
		case 24:
		case 25:
			if (Global_1953292.f_919 >= 25)
				return;
		
			if (func_558(iParam0))
				return;
		
			func_559(iParam0);
			Global_1953292.f_635[Global_1953292.f_919 /*4*/] = { iParam0 };
			Global_1953292.f_919 = Global_1953292.f_919 + 1;
			func_313(8);
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
		
			if (func_558(iParam0))
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
		
			func_559(iParam0);
			Global_1953292.f_837[Global_1953292.f_922 /*4*/] = { iParam0 };
			Global_1953292.f_920 = Global_1953292.f_920 + 1;
			Global_1953292.f_922 = (Global_1953292.f_922 + 1) % 20;
			func_313(8);
			break;
	}

	return;
}

BOOL func_315() // Position - 0xE8D5 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_3502;
}

BOOL func_316(Hash hParam0) // Position - 0xE8E4 Hash - 0x99FE2AE6 ^0xF1FAFBED
{
	if (func_560())
		return false;

	if (!func_85(hParam0, 0))
		return false;

	if (!func_23(hParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

BOOL func_317(Hash hParam0) // Position - 0xE91A Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_561(hParam0);
}

void func_318(var uParam0, int iParam1) // Position - 0xE928 Hash - 0xF55E891F ^0xF55E891F
{
	func_562(uParam0, iParam1);
	return;
}

int func_319(Hash hParam0, int iParam1) // Position - 0xE938 Hash - 0xE35D1323 ^0x1EF44228
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_563(hParam0);

	if (func_165(hParam0) == -525676072 || func_152(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_564(&hash))
			if (flag)
				interactionAnimHash = func_565();
			else
				interactionAnimHash = func_566();
		else if (flag)
			interactionAnimHash = func_567();
		else
			interactionAnimHash = func_568();
	else if (func_569(&hash))
		if (func_152(hash, -1303648999) || func_165(hash) == -525676072)
			interactionAnimHash = func_565();
		else
			interactionAnimHash = func_566();
	else if (flag)
		interactionAnimHash = func_567();
	else
		interactionAnimHash = func_568();

	if (interactionAnimHash != 0)
	{
		Global_1953292.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, hParam0, interactionAnimHash, 1, iParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_320(BOOL bParam0) // Position - 0xEA1F Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1953292 && bParam0 != false;
}

void func_321() // Position - 0xEA30 Hash - 0x606B8FC3 ^0xEBA3545E
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
	func_570(32768);
	func_571(1108822547, 8, 6);
	return;
}

BOOL func_322(int iParam0, BOOL bParam1) // Position - 0xEAE7 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_572(iParam0, false) < func_573(iParam0, bParam1);
}

BOOL func_323(Hash hParam0) // Position - 0xEAFF Hash - 0x4F6A761A ^0x4F6A761A
{
	var unk;

	return func_574(hParam0, &unk);
}

void func_324(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xEB0F Hash - 0x20094A26 ^0x2C3F4D15
{
	Hash hash;
	BOOL flag;

	hash = func_165(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			if (func_152(hParam0, 1584357097))
				return;
		
			flag = func_575(hParam0, &(Global_1953292.f_3352.f_28), Global_1953292.f_3352.f_33.f_1, bParam1, bParam5);
			break;
	
		case -1719060085:
			flag = func_575(hParam0, &(Global_1953292.f_3352.f_31), 1, bParam1, bParam5);
			break;
	
		case -999503751:
			flag = func_575(hParam0, &(Global_1953292.f_3352.f_27), Global_1953292.f_3352.f_33, bParam1, bParam5);
			break;
	
		case -525676072:
			flag = func_575(hParam0, &(Global_1953292.f_3352.f_29), Global_1953292.f_3352.f_33.f_2, bParam1, bParam5);
			break;
	
		case 81053684:
			flag = func_575(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	
		case 119907797:
			flag = func_575(hParam0, &(Global_1953292.f_3352.f_32), 1, bParam1, bParam5);
			break;
	
		case 1388798186:
			flag = func_575(hParam0, &(Global_1953292.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
	
		default:
			if (func_152(hParam0, 160827531))
				flag = func_575(hParam0, &(Global_1953292.f_3352.f_30), 1, bParam1, bParam5);
			break;
	}

	if (!flag)
		return;

	func_576();

	if (func_577(hash) || hash != -999503751 && func_152(hParam0, -166674229))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_71(bParam5), hParam0, 0);

	func_172(hParam0, bParam3, bParam5);

	if (bParam4)
		func_578(true, hParam0);

	if (bParam2)
		func_579(false, false);

	return;
}

Hash func_325(int iParam0) // Position - 0xECBB Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_580();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

void func_326(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xECE6 Hash - 0x815ADAC6 ^0x815ADAC6
{
	if (func_581(hParam0, hParam1))
	{
		func_582(hParam0, hParam1, true, bParam2, bParam3, bParam4);
		return;
	}

	return;
}

int func_327(int iParam0) // Position - 0xED0B Hash - 0x10AF8248 ^0x31B33E5F
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1953292.f_83[i /*12*/].f_9 == iParam0)
			return func_583(i, 1);
	}

	return -358215195;
}

BOOL func_328(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xED46 Hash - 0x6F6F94C ^0x832D60DF
{
	var unk;
	int num;
	int i;

	func_584();

	if (iParam2 == 39)
	{
		unk = { func_193(hParam0, true, 0) };
		iParam2 = func_253(func_327(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_320(32768) && iParam2 == 10)
		func_585(1108822547);

	num = 0;

	if (bParam4)
		num = 3;

	if (func_330(hParam0, true))
		func_586(&(Global_1953292.f_1557), &hParam0, iParam2, bParam5);

	if (bParam6)
		func_587(iParam2);

	func_588(iParam2, num);
	func_589(&Global_1953292.f_1557.f_1[iParam2 /*3*/], 4, 6);
	func_589(&Global_1953292.f_1676.f_1[iParam2 /*3*/], 4, 6);
	func_590(&(Global_1953292.f_1557), hParam0, iParam2, true, num);

	if (hParam1 == 0)
		hParam1 = Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1;

	Global_1953292.f_1557.f_1[iParam2 /*3*/] = hParam0;
	Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1 = func_591(hParam0, iParam2, hParam1);

	if (bParam3)
	{
		for (i = 0; i < Global_1953292.f_2938; i = i + 1)
		{
			if (Global_1953292.f_2938.f_2[i /*2*/] >= 0 && Global_1953292.f_2938.f_2[i /*2*/] < 39)
			{
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/] = 0;
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_571(func_583(Global_1953292.f_2938.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_329(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xEEE5 Hash - 0x28B4597A ^0x28B4597A
{
	func_592(&(Global_1953292.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
	return;
}

BOOL func_330(Hash hParam0, BOOL bParam1) // Position - 0xEF02 Hash - 0x927056E ^0xFA981333
{
	!func_85(hParam0, 0);

	if (!bParam1 && hParam0 == joaat("clothing_item_hair_none") || hParam0 == joaat("clothing_item_beard_none"))
		return false;

	if (func_152(hParam0, 265372629))
		return true;

	return false;
}

BOOL func_331(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xEF4D Hash - 0x59CF58B3 ^0xFDEE716A
{
	var unk;
	var unk5;
	Hash hash;

	unk5 = { func_193(hParam0, bParam2, 0) };

	if (func_330(hParam0, false))
	{
		hash = func_593(unk5, unk5.f_4, bParam2, -1);
	
		if (hash != 0)
		{
			unk5 = { func_193(hash, bParam2, 0) };
			unk = { func_274(hash, unk5, unk5.f_4, bParam2) };
			return func_594(unk, false, bParam2);
		}
	
		return true;
	}

	unk = { func_274(hParam0, unk5, unk5.f_4, bParam2) };
	return func_594(unk, bParam1, bParam2);
}

int func_332(Hash hParam0) // Position - 0xEFD6 Hash - 0x6D41B005 ^0x4F13B04D
{
	int num;
	int num2;

	num = 0;
	num2 = func_253(hParam0, 1);

	switch (hParam0)
	{
		case 1108822547:
			if (Global_1953292.f_1676.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/] || Global_1953292.f_1557.f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/])
				num = 48;
			break;
	}

	return num;
}

void func_333(var uParam0, int iParam1) // Position - 0xF03A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

int func_334(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xF04B Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_85(hParam0, 0))
		return 0;

	if (!bParam7 && func_206(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_274(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_71(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_71(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

struct<4> func_335(BOOL bParam0) // Position - 0xF0CA Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_71(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_274(joaat("character"), func_595(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_274(joaat("character"), func_595(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_274(joaat("character"), func_595(), joaat("SLOTID_NONE"), bParam0);
}

int func_336(int iParam0) // Position - 0xF16A Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_337(int iParam0) // Position - 0xF183 Hash - 0x11215AF ^0x23164775
{
	Ped ped;

	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	ped = func_177(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return false;

	if (func_596(ped))
		return true;

	return false;
}

int func_338() // Position - 0xF1E4 Hash - 0x38870270 ^0x38870270
{
	return Global_38.f_289.f_3222;
}

BOOL func_339() // Position - 0xF1F5 Hash - 0x8190E5D8 ^0x44030827
{
	return Global_1915656.f_22504.f_1;
}

BOOL func_340(int iParam0) // Position - 0xF206 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1051832.f_3648 && iParam0 != false;
}

void func_341(int iParam0) // Position - 0xF21A Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1051832.f_3648 = Global_1051832.f_3648 - Global_1051832.f_3648 && iParam0;
	return;
}

void func_342(int iParam0) // Position - 0xF23B Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1051832.f_3649 = iParam0;
	return;
}

BOOL func_343() // Position - 0xF24C Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22504;
}

void func_344() // Position - 0xF25B Hash - 0x3C6E7275 ^0x31AA3C4E
{
	PAD::_SET_CONTROL_CONTEXT(4, joaat("HandheldCatalogue"));
	return;
}

BOOL func_345() // Position - 0xF26D Hash - 0x8D9A8CC3 ^0x8D9A8CC3
{
	return func_340(4);
}

int func_346(BOOL bParam0) // Position - 0xF27A Hash - 0x3D1D4A2D ^0x4A9294C0
{
	Player playerIndex;
	Vehicle vehiclePedIsUsing;
	Hash entityModel;
	int scenarioPointTypePedIsUsing;

	if (!func_597())
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

	if (func_598(1106247680, 0) || PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_HOGTYING(Global_33))
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

	if (func_599(255))
		return 3;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return 44;

	if (Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6 && Global_1108965.f_775.f_28 != 8)
		if (func_600(Global_1108965.f_775.f_28))
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

	if (func_465())
		return 43;

	return -1;
}

void func_347(int iParam0) // Position - 0xF4D9 Hash - 0x4270B4BA ^0x4270B4BA
{
	int num;

	if (!func_345())
		func_601(true);

	Global_1051832.f_3650 = iParam0;
	num = func_346(true);

	if (num != -1)
	{
		func_283(num);
		func_602(false);
	}
	else
	{
		func_602(true);
	}

	return;
}

BOOL func_348() // Position - 0xF517 Hash - 0x2C6DE8F6 ^0xEC7C4E93
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1072759.f_3;
}

BOOL func_349(int iParam0) // Position - 0xF533 Hash - 0x4D892971 ^0xA4BF78E0
{
	return func_94(Global_1144526[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

BOOL func_350() // Position - 0xF54D Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

BOOL func_351() // Position - 0xF561 Hash - 0x4B44C4C9 ^0x4B44C4C9
{
	return !func_349(2);
}

BOOL func_352(int iParam0) // Position - 0xF56F Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

void func_353() // Position - 0xF590 Hash - 0x5281CE7E ^0x311564BB
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_354(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF5A7 Hash - 0xB9500D ^0xB9500D
{
	BOOL flag;

	flag = func_604(bParam2, func_603(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_355(int iParam0) // Position - 0xF5CF Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1896762.f_365 = iParam0;
	return;
}

int func_356(Player plParam0) // Position - 0xF5E0 Hash - 0xA7E5BCA7 ^0x9018D80B
{
	Player player;

	player = plParam0;

	if (player >= 0 && player < 32)
		return Global_1144526[player /*83*/].f_38.f_3;

	return -1;
}

int func_357(Player plParam0, BOOL bParam1) // Position - 0xF610 Hash - 0x5FD9694A ^0x8A2402F0
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		player = plParam0;
	
		for (i = 0; i <= 7; i = i + 1)
		{
			if (Global_1205938.f_1[i /*26*/].f_1 != -1 && func_605(i, 64, player))
				if (bParam1)
					if (Global_1206497.f_78[i /*20*/] >= 2)
						return Global_1205938.f_1[i /*26*/].f_1;
				else if (Global_1206497.f_78[i /*20*/] >= 5)
					return Global_1205938.f_1[i /*26*/].f_1;
		}
	}

	return -1;
}

int func_358(int iParam0) // Position - 0xF69A Hash - 0x220835E3 ^0xD3CA642C
{
	if (iParam0 == -1)
		return 0;

	return Global_1206497.f_1[iParam0 /*4*/];
}

var func_359(int iParam0, int iParam1) // Position - 0xF6B6 Hash - 0x42C305C ^0x81DF2F42
{
	return func_606(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("volCylinder"), iParam0, iParam1);
}

void func_360(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, BOOL bParam20, BOOL bParam21) // Position - 0xF6D4 Hash - 0x60237433 ^0x1CACDDD0
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
				func_607(&(Global_1072759.f_22981), unk);
				return;
			}
		}
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam0, 19, 5, &uParam19);
	return;
}

void func_361() // Position - 0xF76E Hash - 0x5516EB92 ^0x96671886
{
	Global_1913634.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913634.f_1581 = 1;
	return;
}

void func_362(int iParam0, Player plParam1) // Position - 0xF789 Hash - 0xD1944A1 ^0xD3AC39CA
{
	Player player;

	player = plParam1;
	Global_1148185[player /*10*/].f_7 = Global_1148185[player /*10*/].f_7 || iParam0;
	return;
}

void func_363(Hash hParam0, var uParam1, var uParam2) // Position - 0xF7AC Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_364() // Position - 0xF9B8 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1913444;
}

void func_365(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xF9C5 Hash - 0x3B7A5BE9 ^0xEE7A100D
{
	int i;

	for (i = 0; i < Global_1913444.f_3; i = i + 1)
	{
		if (Global_1913444.f_4[i /*6*/] == hParam0 && Global_1913444.f_4[i /*6*/].f_2 == bParam2 && Global_1913444.f_4[i /*6*/].f_3 == bParam3 && Global_1913444.f_4[i /*6*/].f_4 == bParam4 && Global_1913444.f_4[i /*6*/].f_5 == iParam5)
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
		Global_1913444.f_4[Global_1913444.f_3 /*6*/].f_5 = iParam5;
		Global_1913444.f_3 = Global_1913444.f_3 + 1;
	}

	return;
}

var func_366(BOOL bParam0, var uParam1, var uParam2) // Position - 0xFAE8 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_367(Hash hParam0, int iParam1) // Position - 0xFAFF Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_85(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_368(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xFB1E Hash - 0x92B705D3 ^0xB783F681
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

char* func_369(Hash hParam0) // Position - 0xFC11 Hash - 0xFBA883FB ^0xAF5425AE
{
	if (func_152(hParam0, -1995062316))
		return "collectible_arrowheads";

	if (func_152(hParam0, 1239889275))
		return "collectible_liquor_bottles";

	if (func_152(hParam0, 143267379))
		return "collectible_coins";

	if (func_152(hParam0, -944041124))
		return "colectible_heirlooms";

	if (func_152(hParam0, 1562621600))
		return "collectible_jewelry";

	if (func_152(hParam0, -149719013))
		return "collectible_bird_eggs";

	if (func_152(hParam0, 1940829793))
		return "collectible_tarot_cards";

	if (func_152(hParam0, 781094263))
		return "collectible_flowers";

	if (func_152(hParam0, -352095726) || func_152(hParam0, -2014783736) || func_152(hParam0, -545064757) || func_152(hParam0, 679186220))
		return "collectible_found_fossil";

	return "";
}

BOOL func_370(Hash hParam0) // Position - 0xFD0D Hash - 0x12CDDB68 ^0xF31C74A7
{
	if (func_152(hParam0, -189374246))
		if (func_608(hParam0, -1305775593) || func_608(hParam0, 1384151091) || func_608(hParam0, 2075388272) || func_608(hParam0, -1738780413))
			return true;

	if (func_152(hParam0, -753854379) || func_152(hParam0, 173360570))
		return true;

	return false;
}

Hash func_371(Hash hParam0, BOOL bParam1) // Position - 0xFD8C Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_85(hParam0, 0))
		return 0;

	hash = func_609(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

BOOL func_372(Hash hParam0) // Position - 0xFDBA Hash - 0x339D45CE ^0x339D45CE
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

Hash func_373(Hash hParam0) // Position - 0xFDE1 Hash - 0x9C7FC6B8 ^0x60951C4B
{
	var outData;
	int i;

	if (!func_85(hParam0, 0))
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

Hash func_374(Hash hParam0) // Position - 0xFE4F Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_610(hParam0);

	if (num == 0)
		return 0;

	unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_612(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_613(outKey))
			{
				func_614(collectionId);
				return outKey;
			}
		}
	
		func_614(collectionId);
	}

	return 0;
}

BOOL func_375(Hash hParam0, Hash hParam1) // Position - 0xFED4 Hash - 0x34B85114 ^0x6986CE99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, -949239683))
		return true;

	return false;
}

BOOL func_376(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0xFF05 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_85(hParam0, 0) && !func_432(func_284(hParam0), 2))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return false;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return true;
}

const char* func_377(const char* sParam0, int iParam1) // Position - 0xFF64 Hash - 0x9E99F03 ^0x1A11D118
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

 func_378(Hash hParam0, int iParam1) // Position - 0xFF7E Hash - 0x7C967237 ^0x7C967237
{
	 num;

	num = func_615(hParam0, iParam1);

	if (num == 0)
		return 0;

	return num;
}

BOOL func_379(Hash hParam0, char* sParam1) // Position - 0xFF9C Hash - 0xE779657E ^0x44FD4FF7
{
	int lengthOfLiteralString;
	var unk;

	if (!func_85(hParam0, 0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(sParam1, func_616(hParam0), 128);
	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (!func_617(hParam0))
		return false;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_618(hParam0), 128);

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

const char* func_380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1001B Hash - 0xE80420B9 ^0x2740E778
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_381(const char* sParam0, int iParam1) // Position - 0x1002F Hash - 0xB0CFF0C3 ^0x23CFE245
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_377(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_382(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x10065 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_619(sParam0, sParam1, hParam2);
	return num2;
}

struct<2> func_383(int iParam0) // Position - 0x100C8 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

struct<18> func_384(Hash hParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x100D8 Hash - 0x90CCF0F4 ^0xA5F3D799
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

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

struct<4> func_385(BOOL bParam0) // Position - 0x101B6 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_71(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_274(923904168, func_335(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_274(923904168, func_335(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_274(923904168, func_335(bParam0), -740156546, false);
}

void func_386(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x10257 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_387(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x10272 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_71(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_388(Hash hParam0, BOOL bParam1) // Position - 0x10297 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_165(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_620();
		else
			return 1;

	return 0;
}

BOOL func_389(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x102CE Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_334(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_390(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x102E9 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_621(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_391(BOOL bParam0) // Position - 0x1030A Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_71(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_274(271701509, func_335(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_274(271701509, func_335(bParam0), 12999093, false);
}

BOOL func_392(Hash hParam0, Hash hParam1) // Position - 0x10374 Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_165(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_622(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_393(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x103E1 Hash - 0x113CD144 ^0x113CD144
{
	return func_623(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

BOOL func_394() // Position - 0x103F7 Hash - 0xA30B23E7 ^0xAB29D7A2
{
	if (Global_1940252.f_11596 != Global_1940252.f_41.f_203 - 1 || func_625(func_624(0), Global_1940252.f_11588, false, true, true) > 0 || Global_1940252.f_11596 == 15)
		return true;

	func_626(0);

	if (Global_1940252.f_7)
		return true;

	return false;
}

void func_395(int iParam0) // Position - 0x10456 Hash - 0x29A8F290 ^0x82294867
{
	Global_1940252.f_11 = iParam0;
	return;
}

void func_396(int iParam0) // Position - 0x10466 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1940252.f_10 = iParam0;
	return;
}

void func_397(var uParam0) // Position - 0x10476 Hash - 0xBDC78FE9 ^0xFC64FFFF
{
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_21), "CAMP", 8);
	return;
}

void func_398(var uParam0) // Position - 0x10488 Hash - 0x45AA5A3B ^0x5CCEC1C5
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_21));

	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);

	if (func_103(uParam0, 2))
		return;

	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
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
	STREAMING::REQUEST_MODEL(400517539, false);
	STREAMING::REQUEST_MODEL(joaat("mp006_s_cft_poisonbottle01"), false);
	func_627(uParam0);

	if (func_103(uParam0, 4))
	{
		STREAMING::REQUEST_MODEL(joaat("p_whitefishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redfishfilet01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_whitefleshymeat01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redbirdbreast01xb"), false);
		STREAMING::REQUEST_MODEL(joaat("p_redefleshymeat01xb"), false);
	}

	return;
}

BOOL func_399(var uParam0) // Position - 0x105A2 Hash - 0x464AF90E ^0xAB4CD9A6
{
	if (func_628(&(uParam0->f_21)))
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_21)))
			return false;

	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
		return false;

	if (func_103(uParam0, 2))
		return true;

	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
		return false;

	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
		return false;

	if (!func_629(uParam0, &(uParam0->f_49)))
		return false;

	if (!func_629(uParam0, &(uParam0->f_50)))
		return false;

	if (!func_629(uParam0, &(uParam0->f_51)))
		return false;

	if (!func_629(uParam0, &(uParam0->f_52)))
		return false;

	if (!func_629(uParam0, &(uParam0->f_53)))
		return false;

	if (!func_629(uParam0, &(uParam0->f_54)))
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

	if (!STREAMING::HAS_MODEL_LOADED(400517539))
		return false;

	if (!STREAMING::HAS_MODEL_LOADED(joaat("mp006_s_cft_poisonbottle01")))
		return false;

	if (func_103(uParam0, 4))
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

int func_400() // Position - 0x107BD Hash - 0xF3521A6 ^0x499ADCFE
{
	Hash hash;
	int num;

	if (!func_569(&hash))
		return 0;

	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_33, false, false);
	PED::_0xC494C76A34266E82(Global_33, 13);
	num = func_630(hash);

	if (num == -358215195)
		return 0;

	func_631(Global_1953292.f_83[func_253(num, 1) /*12*/], 8);
	func_168(23, 0, 0, 0, false);
	return 1;
}

Hash func_401(Hash hParam0) // Position - 0x1081B Hash - 0x31347973 ^0xC296A1C8
{
	Hash num;

	num = func_632(hParam0);

	if (num != 0)
		return num;

	return joaat("p_redefleshymeat01xb");
}

void func_402(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1083B Hash - 0xE69D0476 ^0x39BC4F2D
{
	if (bParam2)
		uParam0->f_49.f_23 = uParam0->f_49.f_23 + 1;

	func_633(uParam0, true, bParam4);

	if (func_237(uParam0->f_49.f_62))
		if (func_634() && func_103(&(uParam0->f_49), 131072) && uParam0->f_49.f_27 > 1)
			func_635(uParam0->f_137[iParam1], "CAMP_REC_COOK_MLT", func_424(3, uParam0->f_49.f_27), true);
		else if (bParam3)
			func_129(uParam0->f_137[iParam1], "CAMP_REC_COOK_AGN", true);
		else
			func_129(uParam0->f_137[iParam1], "CAMP_REC_COOK", true);
	else if (bParam3)
		if (func_288(uParam0->f_49.f_62, -1636519629) == -701492487)
			func_129(uParam0->f_137[iParam1], "CAMP_REC_BREW_AGN", true);
		else
			func_129(uParam0->f_137[iParam1], "CAMP_REC_MAKE_AGN", true);
	else if (func_288(uParam0->f_49.f_62, -1636519629) == -701492487)
		func_129(uParam0->f_137[iParam1], "CAMP_REC_BREW", true);
	else
		func_129(uParam0->f_137[iParam1], "CAMP_REC_MAKE", true);

	return;
}

BOOL func_403() // Position - 0x1095D Hash - 0x893CA78F ^0x893CA78F
{
	return Global_1940026 == 2;
}

void func_404(int iParam0) // Position - 0x1096B Hash - 0xA805A06D ^0x74AB3C0C
{
	if (iParam0 >= Global_1940026)
		return;

	Global_1940026.f_1 = iParam0;
	return;
}

BOOL func_405() // Position - 0x10987 Hash - 0xEBB05467 ^0xEBB05467
{
	return Global_1940026 == 1;
}

void func_406(Hash hParam0, float fParam1, BOOL bParam2) // Position - 0x10995 Hash - 0x27411B3A ^0x232DBC28
{
	int i;
	float health;
	float stamina;
	float deadeye;
	float value;
	float value2;
	float value3;
	float num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	int outData;
	var unk22;

	if (func_152(hParam0, 1573112293) || func_152(hParam0, 672467738) || func_152(hParam0, -550842268))
		flag3 = true;

	outData.f_1 = 20;
	unk22 = 20;
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940085.f_26 = 0;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData))
	{
		for (i = 0; i < outData; i = i + 1)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &unk22[i /*7*/]))
			{
				switch (unk22[i /*7*/].f_1)
				{
					case -1104847406:
						deadeye = func_636(2, (float)unk22[i /*7*/].f_2 / fParam1);
						func_638((float)unk22[i /*7*/].f_2 / fParam1, false);
						flag = true;
						break;
				
					case -943921969:
						health = func_636(0, (float)unk22[i /*7*/].f_2 / fParam1);
						func_637((float)unk22[i /*7*/].f_2 / fParam1);
						flag2 = true;
						break;
				
					case -816334026:
						func_642(BUILTIN::TO_FLOAT(unk22[i /*7*/].f_2) / fParam1, true);
						break;
				
					case joaat("EFFECT_HEALTH_CORE"):
						value = func_640((float)unk22[i /*7*/].f_2 / fParam1, unk22[i /*7*/].f_5 / fParam1);
						func_641(0, value, true, true, flag3);
						flag2 = true;
						break;
				
					case 381158954:
						stamina = func_636(1, (float)unk22[i /*7*/].f_2 / fParam1);
						func_639((float)unk22[i /*7*/].f_2 / fParam1);
						break;
				
					case joaat("EFFECT_STAMINA_CORE"):
						value3 = func_640((float)unk22[i /*7*/].f_2 / fParam1, unk22[i /*7*/].f_5 / fParam1);
						func_641(1, value3, true, true, flag3);
						break;
				
					case joaat("EFFECT_DEADEYE_CORE"):
						value2 = func_640((float)unk22[i /*7*/].f_2 / fParam1, unk22[i /*7*/].f_5 / fParam1);
						func_641(2, value2, true, true, flag3);
						flag = true;
						break;
				
					default:
						if (bParam2)
						{
							switch (unk22[i /*7*/].f_1)
							{
								case -1240225157:
									num = func_643(BUILTIN::TO_FLOAT(unk22[i /*7*/].f_3), unk22[i /*7*/].f_4);
									func_644(1, num, true, true);
									break;
							
								case joaat("Effect_Stamina_Core_Gold"):
									num = func_643(BUILTIN::TO_FLOAT(unk22[i /*7*/].f_3), unk22[i /*7*/].f_4);
									func_644(18, num, true, true);
									break;
							
								case joaat("Effect_Deadeye_Core_Gold"):
									num = func_643(BUILTIN::TO_FLOAT(unk22[i /*7*/].f_3), unk22[i /*7*/].f_4);
									func_644(20, num, true, true);
									flag = true;
									break;
							
								case 1342237631:
									num = func_643(BUILTIN::TO_FLOAT(unk22[i /*7*/].f_3), unk22[i /*7*/].f_4);
									func_644(2, num, true, true);
									flag = true;
									break;
							
								case 1869697234:
									num = func_643(BUILTIN::TO_FLOAT(unk22[i /*7*/].f_3), unk22[i /*7*/].f_4);
									func_644(0, num, true, true);
									flag2 = true;
									break;
							
								case joaat("Effect_Health_Core_Gold"):
									num = func_643(BUILTIN::TO_FLOAT(unk22[i /*7*/].f_3), unk22[i /*7*/].f_4);
									func_644(19, num, true, true);
									flag2 = true;
									break;
							}
						}
						break;
				}
			}
		}
	
		if (bParam2)
			func_645(hParam0, flag, flag2, 562618531);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(value), BUILTIN::ROUND(value3), BUILTIN::ROUND(value2));
	}

	return;
}

int func_407(var uParam0) // Position - 0x10CD0 Hash - 0xD73B9827 ^0xB0CA2F10
{
	return uParam0->f_11;
}

BOOL func_408(int iParam0) // Position - 0x10CDC Hash - 0x2597F7C7 ^0x2597F7C7
{
	int num;

	num = func_646(iParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_409(Hash hParam0) // Position - 0x10D02 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"):
		case joaat("world_player_camp_fire_sit_male_a"):
		case joaat("world_player_camp_fire_squat_male_a"):
		case joaat("world_player_dynamic_kneel_knife"):
		case joaat("world_player_camp_fire_squat_female_a"):
		case joaat("world_player_dynamic_camp_fire_kneel_arthur"):
		case joaat("world_player_camp_fire_sit_female_a"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"):
		case joaat("world_player_dynamic_camp_fire_kneel_mp_female_a"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"):
			return true;
	
		default:
		
	}

	return false;
}

void func_410(var uParam0, int iParam1) // Position - 0x10D53 Hash - 0x89621294 ^0xD9508B3B
{
	var unk;
	Hash hash;
	int eventData;
	Hash activeDynamicScenario2;
	int num;
	BOOL flag;
	Hash activeDynamicScenario;
	AnimScene animScene;
	AnimScene animScene2;
	AnimScene animScene3;
	Hash activeDynamicScenario2;
	Player player;

	unk = 1;
	unk[0] = uParam0->f_1[1];

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940199.f_6)
		func_44(uParam0, false, true);

	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_33, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_33, 0, 1);

	if (func_104() != -1 && func_647())
	{
		if (func_138(uParam0->f_1[0], false))
		{
			func_98(uParam0);
			func_111(uParam0);
		}
	
		return;
	}

	if (func_103(uParam0, 256))
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_CRAFTING_SEQUENCE"));

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();

	switch (func_407(uParam0))
	{
		case 0:
			if (func_100())
				func_101(false);
		
			if (func_648(uParam0))
			{
				func_98(uParam0);
				func_649(uParam0);
			}
			break;
	
		case 1:
			if (func_100())
				func_101(false);
		
			if (func_648(uParam0))
			{
				if (func_95(uParam0->f_1[0]))
					func_130(uParam0->f_1[0], false, true, true);
			
				func_649(uParam0);
			}
			break;
	
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_648(uParam0))
			{
				func_397(uParam0);
				func_398(uParam0);
				func_649(uParam0);
			}
		
			if (func_399(uParam0))
				func_45(uParam0, 3);
			break;
	
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_104() == 0 && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				func_98(uParam0);
				return;
			}
		
			if (func_648(uParam0))
			{
				func_98(uParam0);
				func_649(uParam0);
			
				if (func_100())
					func_101(false);
			}
		
			if (func_103(uParam0, 16) || func_263(uParam0->f_1[0], true) || func_103(uParam0, 32))
				func_650(uParam0);
			break;
	
		case 4:
			if (!func_103(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_651(uParam0))
			{
				func_40(uParam0, 1024);
				func_45(uParam0, 5);
			}
			break;
	
		case 5:
			if (!func_103(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_652(uParam0))
				func_45(uParam0, 6);
			break;
	
		case 6:
			if (!func_103(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_653(uParam0))
				func_45(uParam0, 7);
			break;
	
		case 7:
			if (!func_103(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (func_648(uParam0))
			{
				func_654(uParam0);
				func_649(uParam0);
				return;
			}
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
				return;
		
			if (func_655(uParam0, false))
			{
				if (func_656(uParam0, func_103(uParam0, 65536)) || func_103(uParam0, 2) || func_103(uParam0, 65536) && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
				{
					func_214(uParam0, 65536);
					func_45(uParam0, 8);
				}
				else if (func_103(uParam0, 4))
				{
					func_45(uParam0, 1);
				}
				else
				{
					func_45(uParam0, 0);
				}
			}
			break;
	
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("crafting")))
				{
					Global_1913634.f_1580 = 0;
					func_45(uParam0, 10);
				}
			}
			break;
	
		case 9:
			if (!func_103(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
				return;
		
			if (func_648(uParam0))
			{
				func_654(uParam0);
				func_649(uParam0);
				return;
			}
		
			if (func_655(uParam0, true))
				func_45(uParam0, 10);
			break;
	
		case 10:
			func_658(false);
		
			if (func_648(uParam0))
			{
				func_659(uParam0);
				func_649(uParam0);
			}
		
			if (func_660(uParam0) || func_661(uParam0))
				return;
		
			if (Global_1913634.f_1580)
			{
				Global_1913634.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_662(uParam0);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_663(uParam0, 0, 0);
				func_130(uParam0->f_1[5], false, true, true);
				func_45(uParam0, 9);
			}
			else if (func_664(uParam0->f_1[2], true) || !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("crafting")))
			{
				if (func_103(uParam0, 16))
				{
					func_45(uParam0, 18);
				}
				else
				{
					func_99(uParam0, false);
					func_665("Exit", "SSCRFT_Sounds", true);
				
					if (func_103(uParam0, 32))
					{
						func_214(uParam0, 32);
						func_45(uParam0, 1);
					}
					else
					{
						func_45(uParam0, 3);
					}
				}
			}
			else if (func_263(uParam0->f_1[7], true))
			{
				func_666(uParam0);
			}
			else if (func_263(uParam0->f_1[1], true))
			{
				func_667(uParam0);
			}
			else if (func_263(uParam0->f_1[3], true))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
			
				if (func_103(uParam0, 128))
					func_214(uParam0, 128);
				else
					func_40(uParam0, 128);
			
				func_662(uParam0);
				func_665("toggle_craftable_all", "SSCRFT_Sounds", true);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_663(uParam0, 0, 0);
				func_130(uParam0->f_1[5], false, true, true);
				func_45(uParam0, 9);
			}
			else if (func_668(uParam0->f_1[5], 0, true))
			{
				if (func_103(uParam0, 4096))
				{
					func_665("Nav_Left", "SSCRFT_Sounds", true);
					func_669(uParam0, false);
				}
			}
			else if (func_668(uParam0->f_1[5], 1, true))
			{
				if (func_103(uParam0, 4096))
				{
					func_665("Nav_Right", "SSCRFT_Sounds", true);
					func_669(uParam0, true);
				}
			}
			else if (func_664(uParam0->f_1[6], true))
			{
				func_665("toggle_ingredients_effects", "SSCRFT_Sounds", true);
				func_670(uParam0, true);
			}
			else if (func_263(uParam0->f_1[8], true))
			{
				func_665("toggle_craftable_all", "SSCRFT_Sounds", true);
			
				if (func_103(uParam0, 131072))
					func_214(uParam0, 131072);
				else
					func_40(uParam0, 131072);
			
				func_663(uParam0, uParam0->f_62, uParam0->f_63);
			}
			else
			{
				hash = joaat("crafting_menu");
			
				while (UIEVENTS::EVENTS_UI_IS_PENDING(hash))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hash, &eventData))
					{
						if (eventData == 703281244 || eventData == -722926211)
							func_671(uParam0);
						else if (eventData == -1740156697)
							func_672(uParam0, &eventData);
						else if (eventData == -1203660660)
							if (eventData.f_2 == -2127505795)
								func_667(uParam0);
					
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
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_658(false);
			activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
			num = func_288(uParam0->f_62, -1636519629);
		
			if (activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP_MP_FEMALE_A"))
			{
				if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_ADD_SCENARIO_TRANSITION(Global_33);
				}
			
				return;
			}
		
			if (num != -715814988)
			{
				if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1944546609))
					return;
			
				if (activeDynamicScenario2 == joaat("world_player_dynamic_kneel_knife") || activeDynamicScenario2 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_ADD_SCENARIO_TRANSITION(Global_33);
					}
				
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
				}
			
				if (num == 414472632 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_49, true, false) || num == -1136843638 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_51, true, false) || uParam0->f_70 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_70) || num == -732326901 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_53, true, false) || num == 786205940 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_52, true, false) || num == -1141771998 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_54, true, false) || num == 364689687 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_55, true, false) || num == -842117252 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_56, true, false) || num == -1610298873 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_57, true, false))
				{
					return;
				}
				else if (func_103(uParam0, 2048))
				{
					func_673(uParam0);
					func_214(uParam0, 2048);
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_50, true, false) || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0))
				{
					return;
				}
				else if (func_103(uParam0, 2048))
				{
					func_673(uParam0);
					func_214(uParam0, 2048);
				}
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife") && activeDynamicScenario2 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
				{
					if (func_103(uParam0, 4))
					{
						if (PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1944546609))
							return;
					
						if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_ADD_SCENARIO_TRANSITION(Global_33);
						}
					
						return;
					}
				}
			}
		
			if (func_648(uParam0))
			{
				func_649(uParam0);
				func_674(uParam0, false, &unk);
				func_673(uParam0);
			
				if (func_95(uParam0->f_1[1]))
					func_120(&uParam0->f_1[1], true, true);
			
				if (func_675(num))
				{
					uParam0->f_43 = 250;
					uParam0->f_1[1] = func_259("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_663(uParam0, uParam0->f_62, uParam0->f_63);
					func_126(uParam0->f_1[1], -1067771379, 0, true);
					func_261(uParam0->f_1[1], 10, true, true);
					func_261(uParam0->f_1[1], 11, true, true);
					func_130(uParam0->f_1[1], false, true, true);
				}
				else
				{
					uParam0->f_1[1] = func_259("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
					func_126(uParam0->f_1[1], -1067771379, 0, true);
					func_260(uParam0->f_1[1], true, true);
					func_261(uParam0->f_1[1], 10, true, true);
					func_261(uParam0->f_1[1], 11, true, true);
					func_130(uParam0->f_1[1], false, true, true);
				}
			
				return;
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -563455375))
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
		
			if (func_675(num))
			{
				if (!func_103(uParam0, 64))
				{
					if (func_138(uParam0->f_1[1], false))
					{
						if (func_420(uParam0->f_1[1], true) || PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							func_40(uParam0, 64);
							func_130(uParam0->f_1[1], false, true, true);
							func_130(uParam0->f_1[4], false, true, true);
						}
					}
				}
			
				if (num == -1136843638 || num == -732326901 || num == 786205940 || num == -1141771998 || num == 364689687 || num == -842117252 || num == -1610298873)
				{
					if (uParam0->f_70 != 0)
					{
						if (uParam0->f_70 == joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1011038463) || uParam0->f_70 != joaat("s_cft_arrow_smallgame") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2024314131))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
									OBJECT::DELETE_OBJECT(&(uParam0->f_66));
								else
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
						
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							{
								if (func_152(uParam0->f_62, -1588156645) && num != -842117252)
								{
									uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(func_479(uParam0->f_62, false), 1, Global_34, true, 1065353216);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
								
									if (num == -1610298873)
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_676(uParam0, num), "DYNAMITE", uParam0->f_66, 0);
								}
								else
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(uParam0->f_70, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
								}
							
								if (num == 786205940)
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else if (num == -1141771998 || num == -1610298873)
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else if (num == -842117252)
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else if (num == -1136843638 && !PED::IS_PED_MALE(Global_33))
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								else
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
						}
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
								OBJECT::DELETE_OBJECT(&(uParam0->f_66));
							else
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
					
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							if (num == -732326901 || num == 364689687)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_34, true, 1065353216);
							}
							else if (num == -1141771998)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_34, true, 1065353216);
							}
							else if (num == -842117252)
							{
								if (uParam0->f_62 == joaat("ammo_poisonbottle"))
									uParam0->f_66 = OBJECT::CREATE_OBJECT(400517539, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								else
									uParam0->f_66 = OBJECT::CREATE_OBJECT(joaat("p_molotovempty01x"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
							}
							else if (num == -1610298873)
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(joaat("w_stick_dynamite01"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
							
								if (num == -1610298873)
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_676(uParam0, num), "DYNAMITE", uParam0->f_66, 0);
							}
							else
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(joaat("s_cft_arrow"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
							}
						}
					
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
					
						if (num == 786205940)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else if (num == -1141771998 || num == -1610298873 || num == -842117252)
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else if (num == -1136843638 && !PED::IS_PED_MALE(Global_33))
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						else
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
					}
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1394836706))
						func_93(&(uParam0->f_66), &(uParam0->f_67));
				
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1471149551))
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_68))
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, true);
				}
				else if (num == 414472632 || num == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 966057053))
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, true);
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -61921192))
				{
					if (func_107(false) && !func_108())
					{
						func_415(uParam0->f_62, uParam0->f_63, true, func_414(), uParam0->f_12);
						func_416(uParam0->f_62, 1, 0, true, 0);
					}
				
					if (num == -842117252)
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							func_93(&(uParam0->f_66), &(uParam0->f_67));
				
					uParam0->f_23 = uParam0->f_23 + 1;
					uParam0->f_28 = uParam0->f_28 + 1;
				
					if (!func_677(uParam0->f_62, uParam0->f_63, false, func_414(), false) || func_423(uParam0->f_62, 1, false) || uParam0->f_23 >= uParam0->f_27)
					{
						if (!func_107(false) || func_108())
						{
							uParam0->f_24 = func_105(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
						
							if (uParam0->f_12 == 2133510819)
								func_110(func_109(joaat("MADE"), -444296448), uParam0->f_28);
						
							uParam0->f_28 = 0;
						}
					
						func_678(uParam0, num, false);
						return;
					}
				}
			
				if (!func_103(uParam0, 64))
				{
					if (!(func_138(uParam0->f_1[1], false) && PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("safetobreakout")))
						{
							if (!func_107(false) || func_108())
							{
								uParam0->f_24 = func_105(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
							
								if (uParam0->f_12 == 2133510819)
									func_110(func_109(joaat("MADE"), -444296448), uParam0->f_28);
							
								uParam0->f_28 = 0;
							}
						
							func_678(uParam0, num, true);
						}
					}
				}
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1290366555) && uParam0->f_23 < uParam0->f_27 - 1)
				{
					func_130(uParam0->f_1[1], true, true, true);
					func_130(uParam0->f_1[4], true, true, true);
					func_214(uParam0, 64);
				}
			
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_676(uParam0, num), "player"))
				{
					if (!func_107(false) || func_108())
					{
						uParam0->f_24 = func_105(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
					
						if (uParam0->f_12 == 2133510819)
							func_110(func_109(joaat("MADE"), -444296448), uParam0->f_28);
					
						uParam0->f_28 = 0;
					}
				
					func_678(uParam0, num, false);
				}
			}
			else if (func_27(&(uParam0->f_71), (float)uParam0->f_43 / 1000f))
			{
				if (!func_107(false) || func_108())
				{
					if (uParam0->f_24 == -1)
					{
						uParam0->f_24 = func_105(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
					
						if (uParam0->f_12 == 2133510819)
							func_110(func_109(joaat("MADE"), -444296448), 1);
					
						if (uParam0->f_24 == -1)
							func_678(uParam0, num, false);
					}
					else
					{
						func_408(uParam0->f_24);
					}
				
					uParam0->f_24 = -1;
				}
				else
				{
					func_415(uParam0->f_62, uParam0->f_63, true, func_414(), uParam0->f_12);
					func_416(uParam0->f_62, 1, 1, true, 0);
				}
			
				uParam0->f_27 = -1;
				uParam0->f_28 = 0;
				func_93(&(uParam0->f_66), &(uParam0->f_67));
				uParam0->f_45 = 0;
				flag = true;
			
				if (!func_677(uParam0->f_62, uParam0->f_63, false, func_414(), false) || func_423(uParam0->f_62, 1, false))
					flag = false;
			
				func_678(uParam0, num, flag);
			}
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_658(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2015667492))
					func_93(&(uParam0->f_68), &(uParam0->f_69));
		
			if (!func_138(uParam0->f_1[2], false))
			{
				func_130(uParam0->f_1[2], true, true, true);
				func_260(uParam0->f_1[2], false, true);
			}
		
			if (!func_138(uParam0->f_1[4], false))
			{
				func_130(uParam0->f_1[4], true, true, true);
				func_260(uParam0->f_1[4], true, true);
			}
		
			if (func_664(uParam0->f_1[2], true))
			{
				func_98(uParam0);
				func_266(&(uParam0->f_71));
				func_45(uParam0, 14);
				return;
			}
			else if (func_124(uParam0->f_1[4], true))
			{
				func_98(uParam0);
				func_93(&(uParam0->f_66), &(uParam0->f_67));
				func_93(&(uParam0->f_64), &(uParam0->f_65));
				func_93(&(uParam0->f_68), &(uParam0->f_69));
				activeDynamicScenario = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
			
				if (activeDynamicScenario != joaat("world_player_dynamic_kneel_knife") && activeDynamicScenario != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				num = func_288(uParam0->f_62, -1636519629);
				animScene = func_676(uParam0, num);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene, "player", Global_33);
				func_99(uParam0, false);
				func_665("Exit", "SSCRFT_Sounds", true);
			
				if (func_103(uParam0, 4))
					func_45(uParam0, 1);
				else
					func_45(uParam0, 0);
			
				return;
			}
			else if (func_263(uParam0->f_1[1], true))
			{
				func_130(uParam0->f_1[4], false, true, true);
				func_130(uParam0->f_1[2], false, true, true);
				func_130(uParam0->f_1[1], false, true, true);
				num = func_288(uParam0->f_62, -1636519629);
				animScene2 = func_676(uParam0, num);
			
				if (animScene2 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(animScene2, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(animScene2);
				}
			
				func_266(&(uParam0->f_71));
				func_214(uParam0, 64);
				func_45(uParam0, 12);
				return;
			}
		
			if (func_267(uParam0->f_1[4], true))
			{
				if (!func_90(&(uParam0->f_71)))
					func_29(&(uParam0->f_71));
				else if (func_27(&(uParam0->f_71), 0.1f))
					func_129(uParam0->f_1[4], "CAMP_REC_QUIT", true);
			}
			else
			{
				if (func_90(&(uParam0->f_71)))
					func_266(&(uParam0->f_71));
			
				func_129(uParam0->f_1[4], "CAMP_REC_BACK", true);
			}
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_658(false);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2015667492))
					func_93(&(uParam0->f_68), &(uParam0->f_69));
		
			num = func_288(uParam0->f_62, -1636519629);
			animScene3 = func_676(uParam0, num);
		
			if (animScene3 == 0 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene3) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(animScene3, false) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("showMenu")))
			{
				func_93(&(uParam0->f_66), &(uParam0->f_67));
				func_93(&(uParam0->f_64), &(uParam0->f_65));
				func_93(&(uParam0->f_68), &(uParam0->f_69));
				activeDynamicScenario2 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
			
				if (activeDynamicScenario2 != joaat("world_player_dynamic_kneel_knife") && activeDynamicScenario2 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE_MP_FEMALE_A"))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), true, 0, false, false);
			
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(animScene3, "player", Global_33);
			
				if (!func_661(uParam0))
					func_45(uParam0, 15);
			}
			break;
	
		case 15:
			if (!func_103(uParam0, 256))
				PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
		
			if (!func_103(uParam0, 1024))
			{
				func_45(uParam0, 4);
				return;
			}
		
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")))
				return;
		
			if (func_657(uParam0))
			{
				func_656(uParam0, true);
				func_45(uParam0, 8);
			}
			break;
	
		case 16:
			player = func_679();
		
			if (player == PLAYER::PLAYER_ID())
			{
				uParam0->f_24 = func_105(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_45(uParam0, 17);
			}
			else if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			{
				func_45(uParam0, 10);
			}
			else if (func_27(&(uParam0->f_71), 5f))
			{
				func_266(&(uParam0->f_71));
				func_45(uParam0, 10);
			}
			break;
	
		case 17:
			if (!func_408(uParam0->f_24) && func_680(true))
			{
				if (func_646(uParam0->f_24) != 3)
				{
					func_681(false);
				}
				else
				{
					func_682(uParam0->f_62);
					PED::_GIVE_PED_HASH_COMMAND(Global_33, joaat("STEWPOT_ACTION"), 1f);
					func_683(uParam0->f_62, 1);
					func_684(uParam0);
				
					if (func_152(uParam0->f_62, -2011345500))
						func_463(-1266356243, false, 255, 0, false);
				
					uParam0->f_26 = uParam0->f_62;
				}
			
				func_45(uParam0, 15);
			}
			else
			{
				func_685(1);
				HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(FRONTEND_CONTROL);
			}
			break;
	
		case 18:
			if (func_100())
				func_101(false);
		
			if (func_648(uParam0))
				func_649(uParam0);
		
			if (func_103(uParam0, 2))
				TASK::CLEAR_PED_TASKS(Global_33, true, false);
		
			func_99(uParam0, false);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
			Global_1913634.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}

	return;
}

void func_411(var uParam0) // Position - 0x126DA Hash - 0x172F7A81 ^0xB10BE96F
{
	BOOL flag;
	int num;
	int num2;

	if (uParam0->f_49.f_63 == joaat("cost_crafting_grill"))
		flag = true;
	else
		flag = false;

	if (flag)
		func_110(func_488(joaat("food_seasoned")), func_103(&(uParam0->f_49), 131072) ? func_424(3, uParam0->f_49.f_27) : 1);

	func_47(2);
	func_120(&uParam0->f_137[3], true, true);

	if (flag)
	{
		num = 7000;
		num2 = 10000;
	
		if (func_16(uParam0->f_127, 16384))
		{
			num = BUILTIN::ROUND((float)num * 0.8f);
			num2 = BUILTIN::ROUND((float)num2 * 0.8f);
		}
	
		uParam0->f_137[3] = func_259("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, num, num2, 35, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else
	{
		num = 7000;
		num2 = 10000;
	
		if (func_16(uParam0->f_127, 16384))
		{
			num = BUILTIN::ROUND((float)num * 0.8f);
			num2 = BUILTIN::ROUND((float)num2 * 0.8f);
		}
	
		uParam0->f_137[3] = func_259("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, num, num2, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}

	func_402(uParam0, 3, false, false, false);
	func_130(uParam0->f_137[3], false, true, true);
	func_126(uParam0->f_137[3], -1067771379, 0, true);
	uParam0->f_153 = MISC::GET_GAME_TIMER();

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_135))
		OBJECT::DELETE_OBJECT(&(uParam0->f_135));

	uParam0->f_135 = OBJECT::CREATE_OBJECT(func_401(uParam0->f_49.f_62), Global_34, false, false, false, false, true);

	if (PED::_GIVE_PED_SCENARIO_PROP(Global_33, uParam0->f_135, "p_meatChunks01x_PH_L_HAND", 0, 0, true))
	{
	}

	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_135, false);
	OBJECT::_SET_OBJECT_BURN_LEVEL(uParam0->f_135, 0f, true);
	uParam0->f_165 = 3;
	func_98(&(uParam0->f_49));
	func_45(&(uParam0->f_49), 0);
	func_412();
	AUDIO::_SET_AUDIO_SCENESET("cooking", "Player_Campfire_Scenes");
	func_59(uParam0, 9);
	return;
}

int func_412() // Position - 0x128BA Hash - 0x32A2B110 ^0x12FB0596
{
	Hash hash;
	int num;
	int num2;

	if (!func_315())
		return 0;

	if (!func_569(&hash))
		return 0;

	if (!func_316(hash))
		return 0;

	num = func_630(hash);

	if (num == -358215195)
		return 0;

	func_318(&num2, 1);
	return func_319(hash, num2);
}

BOOL func_413(int iParam0) // Position - 0x1290F Hash - 0xA059D395 ^0x8E0849E2
{
	return func_94(Global_1940085.f_38, iParam0);
}

BOOL func_414() // Position - 0x12923 Hash - 0x24E38A73 ^0x7BEA4359
{
	Ped ped;
	BOOL num;

	ped = func_177(7);

	if (!PED::IS_PED_INJURED(ped))
		if (func_49(Global_33, ped, true) < 400f)
			num = 1;

	return num;
}

int func_415(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, Any anParam4) // Position - 0x12954 Hash - 0xD7816F68 ^0xCFBA9562
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(hParam0, hParam1, anParam4, 1);
	return func_686(hParam0, hParam1, bParam2, bParam3);
}

void func_416(Hash hParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x12973 Hash - 0x6437DE94 ^0x86BCBBAD
{
	Hash weaponHash;

	if (!func_107(false) || func_108())
		return;

	if (!func_85(hParam0, 0))
		return;

	func_110(func_488(joaat("items_crafted")), iParam1);

	if (bParam3)
	{
		if (func_104() == -1)
		{
			if (func_152(hParam0, -1588156645))
			{
				weaponHash = func_480(func_479(hParam0, false), false);
			
				if (WEAPON::IS_WEAPON_VALID(weaponHash))
					func_481(weaponHash);
			}
		}
	
		if (iParam4 == 0)
			if (func_86(hParam0) == joaat("horse_equipment"))
				if (func_687(hParam0, false))
					func_190(hParam0, 1, false, true, false, false, false);
			else
				func_245(hParam0, iParam1, false, false, false, 752097756, 0, 0, 0, false);
		else
			func_688(hParam0, iParam4, iParam1);
	}

	func_683(hParam0, iParam1);
	Global_1051188 = hParam0;
	return;
}

void func_417(var uParam0, Hash hParam1) // Position - 0x12A44 Hash - 0xBE86DC58 ^0x9A18D3D8
{
	BOOL flag;

	if (func_267(uParam0->f_137[3], true))
		flag = true;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1738621174))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}

	switch (hParam1)
	{
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_MP_FEMALE_A"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ACTIVE_ARTHUR"):
			if (!flag)
				if (func_70(uParam0))
					if (func_73(joaat("COOKKNIFE_ACTIVE_TRANS_COOKKNIFE"), 0.5f))
						uParam0->f_153 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_ACTIVE_MP_FEMALE_A"):
			if (!flag)
				if (func_70(uParam0))
					if (func_73(joaat("KNEELFIRECRAFTACTIVE_TRANS_KNEELFIRECRAFT"), 0.5f))
						uParam0->f_153 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("world_player_dynamic_kneel_fire_craft"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_MP_FEMALE_A"):
			if (flag)
				if (func_70(uParam0))
					if (func_73(joaat("KNEELFIRECRAFT_TRANS_KNEELFIRECRAFTACTIVE"), 0.5f))
						uParam0->f_153 = MISC::GET_GAME_TIMER();
			break;
	
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_ARTHUR"):
		case joaat("WORLD_PLAYER_DYNAMIC_KNEEL_COOK_KNIFE_MP_FEMALE_A"):
			if (flag)
				if (func_70(uParam0))
					if (func_73(joaat("COOKKNIFE_TRANS_COOKKNIFE_ACTIVE"), 0.5f))
						uParam0->f_153 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

void func_418(var uParam0) // Position - 0x12B98 Hash - 0x2CFDE265 ^0x17FDBDF
{
	if (!func_95(uParam0->f_137[5]))
		return;

	if (!func_413(2))
	{
		func_130(uParam0->f_137[5], false, true, true);
		return;
	}

	if (func_408(uParam0->f_49.f_24))
	{
		func_130(uParam0->f_137[5], false, true, true);
		return;
	}

	func_421();
	func_130(uParam0->f_137[5], true, true, true);
	return;
}

void func_419(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x12BFC Hash - 0x8CBFF892 ^0x53C2DC75
{
	if (bParam1)
	{
		uParam0->f_137[3] = func_259("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		func_402(uParam0, 3, false, true, bParam2);
		func_130(uParam0->f_137[3], false, true, true);
		func_126(uParam0->f_137[3], -1067771379, 0, true);
	
		if (func_634() && func_689(&(uParam0->f_49), uParam0->f_49.f_62) && uParam0->f_49.f_27 > 1)
		{
			uParam0->f_137[9] = func_259("CAMP_REC_BATCH", joaat("INPUT_GAME_MENU_LS"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
			func_126(uParam0->f_137[9], -1067771379, 0, true);
			func_130(uParam0->f_137[9], false, true, true);
		}
	}

	uParam0->f_137[7] = func_259("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	uParam0->f_137[1] = func_259("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
	func_262(&uParam0->f_137[1], "INPUT_PCRAFT_EXIT");
	func_260(uParam0->f_137[7], false, true);
	func_126(uParam0->f_137[7], -1067771379, 0, true);
	func_126(uParam0->f_137[1], -1067771379, 0, true);
	func_261(uParam0->f_137[1], 19, true, true);
	func_261(uParam0->f_137[1], 20, true, true);
	func_261(uParam0->f_137[1], 13, true, true);
	func_261(uParam0->f_137[7], 13, true, true);
	func_130(uParam0->f_137[7], false, true, true);
	func_130(uParam0->f_137[1], false, true, true);
	return;
}

BOOL func_420(int iParam0, BOOL bParam1) // Position - 0x12DC2 Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_95(iParam0))
		return false;

	num = func_231(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951910[num /*23*/].f_3);
}

void func_421() // Position - 0x12DF5 Hash - 0xDDB1A5EF ^0xB5FBE7A3
{
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_690(2));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_690(0));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_690(1));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_691(2));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_691(0));
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(func_691(1));
	return;
}

void func_422(int iParam0, BOOL bParam1) // Position - 0x12E33 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_95(iParam0))
		return;

	num = func_231(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1951910[num /*23*/].f_3);
	return;
}

BOOL func_423(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x12E65 Hash - 0x6E9628EE ^0x6E9628EE
{
	var unk;

	unk = { func_193(hParam0, false, 0) };
	return func_219(hParam0, &unk, iParam1, false, bParam2, -1, false);
}

int func_424(int iParam0, int iParam1) // Position - 0x12E88 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

var func_425(BOOL bParam0, var uParam1, var uParam2) // Position - 0x12E9E Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

float func_426(int iParam0, BOOL bParam1) // Position - 0x12EB5 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_95(iParam0))
		return 0f;

	num = func_231(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
}

float func_427(float fParam0, float fParam1, float fParam2) // Position - 0x12F0D Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_428(var uParam0) // Position - 0x12F34 Hash - 0xBEC4B6B7 ^0xB0FD1F44
{
	if (!func_95(uParam0->f_137[4]))
		return;

	if (func_408(uParam0->f_49.f_24))
	{
		func_130(uParam0->f_137[4], false, true, true);
		return;
	}

	func_130(uParam0->f_137[4], true, true, true);
	return;
}

void func_429(var uParam0, BOOL bParam1) // Position - 0x12F7A Hash - 0xA5289C53 ^0xF66D7E60
{
	func_633(uParam0, true, false);

	if (bParam1)
		if (!func_138(uParam0->f_137[3], false))
			if (func_95(uParam0->f_137[3]) && uParam0->f_49.f_62 == joaat("consumable_coffee") || !func_423(uParam0->f_49.f_62, 1, false) && !func_408(uParam0->f_49.f_24) && uParam0->f_49.f_27 > 0)
				func_130(uParam0->f_137[3], true, true, true);

	if (!func_138(uParam0->f_137[7], false))
	{
		func_130(uParam0->f_137[7], true, true, true);
		func_260(uParam0->f_137[7], false, true);
	}

	if (!func_138(uParam0->f_137[1], false))
		func_130(uParam0->f_137[1], true, true, true);

	if (func_95(uParam0->f_137[9]))
		if (!func_138(uParam0->f_137[9], false) && uParam0->f_49.f_27 > 0)
			func_130(uParam0->f_137[9], true, true, true);
		else
			func_130(uParam0->f_137[9], false, true, true);

	return;
}

void func_430(var uParam0) // Position - 0x13093 Hash - 0xB8190D6C ^0xB8190D6C
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_120(&uParam0->[i], true, true);
	}

	return;
}

void func_431(var uParam0) // Position - 0x130BB Hash - 0xD217C8AB ^0xE9C909B
{
	int num;
	int num2;

	func_120(&uParam0->f_137[3], true, true);
	num = 6000;
	num2 = 10000;

	if (func_16(uParam0->f_127, 16384))
	{
		num = BUILTIN::ROUND((float)num * 0.8f);
		num2 = BUILTIN::ROUND((float)num2 * 0.8f);
	}

	uParam0->f_137[3] = func_259("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, num, num2, 25, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	func_402(uParam0, 3, false, false, false);
	func_126(uParam0->f_137[3], -1067771379, 0, true);
	func_130(uParam0->f_137[3], false, true, true);
	func_412();
	uParam0->f_153 = MISC::GET_GAME_TIMER();
	AUDIO::_SET_AUDIO_SCENESET("crafting", "Player_Campfire_Scenes");
	func_59(uParam0, 1);
	return;
}

BOOL func_432(Hash hParam0, int iParam1) // Position - 0x13179 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_433(Hash hParam0) // Position - 0x13193 Hash - 0x1B551CF7 ^0x61950700
{
	return func_165(hParam0) == 1868067663;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_434(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x131A7 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_692(hParam0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_693(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_435(int iParam0) // Position - 0x13236 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_104() == 0)
		return func_694(iParam0);

	return iParam0 <= func_695();
}

BOOL func_436(int iParam0) // Position - 0x13263 Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_437(int iParam0, Hash hParam1) // Position - 0x13286 Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_152(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_438(Hash hParam0, int iParam1) // Position - 0x132AB Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_85(hParam0, 0))
		return 0;

	unk = { func_335(false) };
	unk.f_4 = func_696(iParam1);
	guid = { func_274(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_71(false), &guid, false);
	return inventoryItemCountWithGuid;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_439(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x13306 Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_85(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_697(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_440(Hash hParam0) // Position - 0x13396 Hash - 0x1FFCC90D ^0xF5D25358
{
	if (!func_85(hParam0, 0))
		return 0;

	if (func_152(hParam0, -839724752))
		return 1;

	return 0;
}

int func_441(Hash hParam0, int iParam1) // Position - 0x133C0 Hash - 0x7A47071E ^0x7A47071E
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

	if (!func_85(hParam0, 0))
		return 0;

	if (!func_244(hParam0) && !func_440(hParam0))
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
	num4 = func_288(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_612(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_698(i, num2);
		
			if (func_85(hash, 0) && hParam0 != hash)
			{
				hash2 = func_699(hash);
			
				if (hash2 != 0)
				{
					num5 = func_438(hash, iParam1);
				
					if (num5 > 0)
						num = num + (num5 * func_701(hash2, func_700(hash), hParam0));
				}
			}
		}
	
		func_614(num2);
	}

	return num;
}

int func_442(int iParam0, Hash hParam1, var uParam2) // Position - 0x134DD Hash - 0xFBFC702 ^0xFBFC702
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

	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_85(hParam1, 0))
		return 0;

	if (!func_702(iParam0))
		return 0;

	ped = func_177(iParam0);

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
	
		if (!func_703(entityFromItem))
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

int func_443(int iParam0, Hash hParam1) // Position - 0x1360A Hash - 0x9B281D8A ^0x9B281D8A
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_85(hParam1, 0))
		return 0;

	if (!func_702(iParam0))
		return 0;

	horse = func_177(iParam0);
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

int func_444(Hash hParam0) // Position - 0x136A8 Hash - 0x3CFC8FF5 ^0xC9DF94B0
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_85(hParam0, 0))
		return 0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			if (hParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(firstEntityPedIsCarrying))
				num = num + 1;
	}

	return num;
}

int func_445(var uParam0) // Position - 0x136FA Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_85(*uParam0, 0))
		return 0;

	if (!func_704(*uParam0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_446(Hash hParam0) // Position - 0x13784 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_86(hParam0) == joaat("WEAPON");
}

int func_447(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13798 Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_85(hParam0, 0))
	{
		if (func_432(func_284(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_86(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_206(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_71(bParam3), hParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_448(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1380C Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_705(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_458(hParam0) || func_152(hParam0, 1077060302))
		return func_706(func_459(hParam0, false), hParam1, bParam3, true);

	if (!func_439(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_449(Hash hParam0) // Position - 0x138FC Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_450(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x13929 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_707(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_709(func_708(num, hParam0, panParam1), num, panParam1);
	else
		return func_710(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

BOOL func_451(int* piParam0, BOOL bParam1) // Position - 0x13993 Hash - 0x7D3BA1EA ^0x8B940399
{
	if (!bParam1)
		if (func_711(piParam0))
			return false;

	if (func_712(&(piParam0->f_6)))
		if (NETWORK::_0xE10F2D7715ABABEC(&(piParam0->f_6)))
			return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("Sell")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
		return false;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return false;

	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
		return false;

	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
		return false;

	return true;
}

Hash func_452(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x13A2F Hash - 0x6E5FA253 ^0x344F4256
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_692(hParam0))
		return 0;

	flag = func_16(iParam3, 2);
	flag2 = func_713(hParam0, -570078785, flag);
	flag3 = func_713(hParam0, -915411861, flag);

	if (func_713(hParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_714(hParam0, &num) || func_715(hParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_716())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_717(15) && func_713(hParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_453(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x13B34 Hash - 0x67DCAB3C ^0x67DCAB3C
{
	if (hParam0 == 0)
		return false;

	if (!func_713(hParam0, hParam1, false))
		return false;

	if (func_16(iParam2, 2))
		if (func_718(hParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return false;

	if (func_16(iParam2, 8))
		return func_719(hParam0, hParam1);

	return true;
}

BOOL func_454(int* piParam0, Any* panParam1, Hash hParam2, Hash hParam3, BOOL bParam4) // Position - 0x13B94 Hash - 0xF0597DAC ^0x3CBF97D5
{
	var unk;
	int num;

	unk = 15;

	if (!func_434(panParam1->f_17, hParam3, &unk, &num, false, true))
		return false;

	switch (num)
	{
		case 1:
			return func_720(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 2:
			return func_721(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 3:
			return func_722(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 4:
			return func_723(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 5:
			return func_724(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 6:
			return func_725(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 7:
			return func_726(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 8:
			return func_727(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 9:
			return func_728(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 10:
			return func_729(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 11:
			return func_730(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 12:
			return func_731(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 13:
			return func_732(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 14:
			return func_733(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 15:
			return func_734(piParam0, panParam1, hParam2, &unk, bParam4);
	
		default:
		
	}

	return false;
}

BOOL func_455(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x13D1C Hash - 0xCDB04DC0 ^0xCDB04DC0
{
	Hash hash;

	if (func_735(hParam1))
	{
		hash = func_284(hParam1);
		return func_736(piParam0, hash, hParam7, iParam8, iParam9);
	}

	if (func_16(iParam9, 32))
		if (!func_737(hParam1, uParam2, hParam6))
			return false;

	if (!func_738(hParam1, hParam7, iParam9))
		return false;

	if (func_16(iParam9, 4))
		if (!func_739(piParam0, hParam1, uParam2, hParam6, hParam7, iParam8, false, bParam10))
			return false;

	if (func_16(iParam9, 8))
		return func_740(piParam0, hParam1, hParam7, iParam8);

	return true;
}

struct<17> func_456(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x13DB9 Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_274(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_206(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_595() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_457(int* piParam0, Any* panParam1, Hash hParam2, BOOL bParam3, int iParam4) // Position - 0x13E33 Hash - 0x3AC44E6C ^0xC544632E
{
	var unk;
	int num;

	unk = 15;

	if (!func_439(panParam1->f_8, panParam1->f_13, &unk, &num, true, false))
		return false;

	switch (num)
	{
		case 1:
			return func_741(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 2:
			return func_742(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 3:
			return func_743(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 4:
			return func_744(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 5:
			return func_745(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 6:
			return func_746(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 7:
			return func_747(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 8:
			return func_748(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 9:
			return func_749(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 10:
			return func_750(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 11:
			return func_751(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 12:
			return func_752(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 13:
			return func_753(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 14:
			return func_754(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 15:
			return func_755(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		default:
		
	}

	return false;
}

BOOL func_458(Hash hParam0) // Position - 0x13FDB Hash - 0x672E565C ^0xD531C7FC
{
	if (func_152(hParam0, 75135761))
		return true;

	return false;
}

Hash func_459(Hash hParam0, BOOL bParam1) // Position - 0x13FF6 Hash - 0xD0C628C8 ^0x72C5664A
{
	var outData;

	if (!func_85(hParam0, 0))
		return func_756(func_284(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

BOOL func_460(int iParam0) // Position - 0x14050 Hash - 0x38220669 ^0xFB404699
{
	if (Global_1572887.f_14 == -1)
		return false;

	return func_757(36, iParam0);
}

BOOL func_461(int iParam0) // Position - 0x1406E Hash - 0x1B64C3A9 ^0x1B64C3A9
{
	if (iParam0 >= 1 && iParam0 <= 184)
		return true;

	return false;
}

int func_462(int iParam0) // Position - 0x1408C Hash - 0x49256A88 ^0x727DF76F
{
	if (!func_461(iParam0))
		return 0;

	return Global_1149432.f_11[iParam0 /*3*/].f_2;
}

BOOL func_463(int iParam0, BOOL bParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x140AE Hash - 0xC51EFF01 ^0xD252B7CC
{
	var unk;
	var unk13;
	var unk26;

	unk.f_1 = 10;
	unk13.f_1 = 11;
	return func_758(iParam0, &unk26, &unk13, &unk, bParam1, iParam2, iParam3, bParam4);
}

BOOL func_464() // Position - 0x140DE Hash - 0xCD6F2F82 ^0xCD6F2F82
{
	return func_759(0) && func_759(1);
}

BOOL func_465() // Position - 0x140F5 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

int func_466(int iParam0) // Position - 0x1411A Hash - 0x92F940EE ^0x92F940EE
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

int func_467(int iParam0, int iParam1) // Position - 0x1416E Hash - 0x933F71D8 ^0xFEF70CA7
{
	if (iParam1 == 2)
		iParam1 = func_760(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_50[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_50[iParam0];
	
		default:
		
	}

	return 1;
}

int func_468(int iParam0) // Position - 0x141BA Hash - 0xB8EC44B7 ^0x10011532
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

BOOL func_469(int iParam0) // Position - 0x1438B Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_234(iParam0, 2);
}

Ped func_470(Ped pedParam0) // Position - 0x1439A Hash - 0xE591CF9E ^0x5F1C7BF1
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

void func_471(var uParam0, int iParam1) // Position - 0x143E5 Hash - 0x624BD2B7 ^0x9DA59487
{
	BOOL flag;
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		switch (iParam1)
		{
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if (uParam0->f_1[i] == joaat("FISHING_RESULT_NORMAL") || uParam0->f_1[i] == joaat("FISHING_RESULT_RUINED") || uParam0->f_1[i] == joaat("FISHING_RESULT_LEGENDARY"))
					flag = true;
				break;
		
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE"))
					flag = true;
				break;
		
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL") || uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING"))
					flag = true;
				break;
		}
	
		if (flag)
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

BOOL func_472(Hash hParam0, var uParam1, Any anParam2, int iParam3, int iParam4) // Position - 0x14511 Hash - 0x4F430DA4 ^0x658D22B6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_761(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_3.f_1 = 10;
	num = iParam3;
	num.f_3 = { *uParam1 };
	num.f_2 = iParam4;
	func_762(anParam2, hParam0, num);
	return 1;
}

BOOL func_473(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x14580 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_104() == -1)
	{
		if (func_446(hParam0) && func_763(hParam0))
		{
			func_764(hParam0, iParam1, true, &bParam2, hParam3);
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

BOOL func_474(Hash hParam0, var uParam1, int iParam2) // Position - 0x145D7 Hash - 0x8ABA0690 ^0x8ABA0690
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_765(hParam0, uParam1);
	unk = { func_193(hParam0, false, 1) };
	num = func_447(hParam0, &unk, false, false);
	num2 = func_766(hParam0, false, false, false);

	if (num > 1 && num2 + iParam2 >= num)
		if (func_152(hParam0, -2051813666))
			func_139(674, true);
		else if (func_104() == -1)
			func_139(673, false);

	if (func_219(hParam0, &unk, *uParam1, false, false, -1, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_475(Hash hParam0, BOOL bParam1) // Position - 0x14675 Hash - 0x86DCB18E ^0x6098B664
{
	if (bParam1)
		return;

	if (!func_767())
		return;

	switch (func_288(hParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940085.f_70.f_5 = 1;
			Global_1940085.f_70.f_6 = 0;
			Global_1940085.f_70.f_1 = hParam0;
			break;
	}

	return;
}

BOOL func_476(int iParam0) // Position - 0x14726 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_768(iParam0))
		return false;

	return func_769(iParam0);
}

void func_477(int iParam0) // Position - 0x14742 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_768(iParam0))
		return;

	func_770(iParam0);
	func_771(iParam0);
	return;
}

void func_478(Hash hParam0) // Position - 0x14763 Hash - 0xB0B39801 ^0xC789CDD0
{
	if (func_152(hParam0, -1522723129))
		func_463(-848633709, false, 255, 0, false);
	else if (func_152(hParam0, -283942357))
		func_463(-981153234, false, 255, 0, false);
	else if (func_152(hParam0, 683680997))
		func_463(-756350192, false, 255, 0, false);
	else if (func_152(hParam0, 1307628809))
		func_463(603094518, false, 255, 0, false);

	return;
}

Hash func_479(Hash hParam0, BOOL bParam1) // Position - 0x147E8 Hash - 0x27CC99BE ^0xBF8437DD
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
	
		case joaat("ammo_throwing_knives_confuse"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_wound"):
			hash = joaat("weapon_thrown_throwing_knives");
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
	
		case joaat("ammo_bolas"):
			hash = joaat("weapon_thrown_bolas");
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
	
		case joaat("ammo_poisonbottle"):
			hash = joaat("weapon_thrown_poisonbottle");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_throwing_knives_trail"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives_disorient"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_drain"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_85(hash, 0))
		if (bParam1)
			if (func_772(hash) || func_773(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_480(Hash hParam0, BOOL bParam1) // Position - 0x149DE Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_85(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_481(Hash hParam0) // Position - 0x14A0A Hash - 0x6D90E810 ^0x1F802071
{
	Hash weaponUnlock;

	if (Global_1572887.f_14 != -1)
		return;

	if (!func_200(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_482(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x14A44 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_193(hParam0, false, 1) };
	
		if (func_389(hParam0, &unk, unk.f_4, false, false))
		{
			unk6.f_9 = joaat("SLOTID_NONE");
		
			if (func_390(hParam0, &unk6, unk.f_4))
			{
				unk28 = { func_274(hParam0, unk, unk.f_4, false) };
				func_275(hParam0, &unk28, &unk, 1, -142743235, 1, false);
			}
		}
	}

	if (func_107(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
			return 0;
	
		func_483(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_774(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_483(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x14B74 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_486(hParam0))
		return false;

	if (!func_107(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_484(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x14BAF Hash - 0x452D8154 ^0x10C1EA46
{
	int num;
	var unk;
	var unk6;

	if (!func_85(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_206(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_775(hParam0, iParam1, hParam2);

	unk = { func_193(hParam0, false, 1) };
	unk6 = { func_274(hParam0, unk, unk.f_4, false) };
	return func_776(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

BOOL func_485(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x14C1E Hash - 0xF555C517 ^0x702518D6
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;

	weaponHash = func_480(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_104() == -1)
		{
			func_481(weaponHash);
		
			if (hParam1 == 1248274121)
				func_777(weaponHash);
		}
	
		if (!func_219(hParam0, &unk, 1, false, false, -1, false))
		{
			func_764(hParam0, 1, false, uParam2, hParam1);
			num = func_778(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_482(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			{
				func_482(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
			{
				func_482(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_779())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_780(weaponHash))
				{
					func_482(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_482(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_781(Global_33, 2, false, true);
			
				if (func_200(weaponHash2) && !Global_26688 && weaponHash2 != weaponHash && !func_23(joaat("upgrade_offhand_holster"), 1) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, weaponHash2);
			
				if (func_200(weaponHash2) && func_23(joaat("upgrade_offhand_holster"), 1))
					if (!func_482(weaponHash, num, bParam3, bParam4, 3, true, hParam1, false))
						return false;
				else if (!func_482(weaponHash, num, bParam3, bParam4, 0, true, hParam1, false))
					return false;
			}
			else if (!func_482(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_139(515, true);

	return true;
}

BOOL func_486(Hash hParam0) // Position - 0x14E2C Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_487(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x14E3A Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_486(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	if (func_200(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_33, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

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
		func_497(func_782(hParam0), func_371(hParam0, false), true);
		return false;
	}

	ammo == pedAmmoByType + num;

	if (num == 0)
		return false;

	if (func_107(false))
	{
		if (func_483(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_484(hParam0, *uParam1, hParam2);
	}

	return false;
}

struct<2> func_488(int iParam0) // Position - 0x14F38 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_489() // Position - 0x14F4A Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_490(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x14F53 Hash - 0x6AA1931B ^0x6AA1931B
{
	int num;

	if (func_104() == 0)
	{
		func_243(hParam0, 0);
		return 0;
	}

	num = func_783(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_784(num, sParam4, iParam5, false);

	func_785(num, bParam1, iParam2, iParam3);
	return num;
}

void func_491(Hash hParam0) // Position - 0x14F9A Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_492(Hash hParam0) // Position - 0x14FA2 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_493(Hash hParam0) // Position - 0x14FAA Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_494(Hash hParam0) // Position - 0x14FB2 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_495() // Position - 0x14FBA Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_496(Hash hParam0, var uParam1) // Position - 0x14FDE Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_363(hParam0, uParam1, &unk);
	return;
}

void func_497(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x14FF0 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_256(iParam0, &num, &num2);

	if (!func_257(iParam0, num, num2, bParam2))
		return;

	if (!func_509(iParam0, 1024))
		return;

	func_258(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_498(int iParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15050 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_256(iParam0, &num, &num2);

	if (!func_257(iParam0, num, num2, bParam2))
		return;

	if (!func_509(iParam0, 1024))
		return;

	func_258(num, num2);
	Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/] = hParam1;

	if (!bParam3)
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1904402.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

void func_499(var uParam0) // Position - 0x150CB Hash - 0xE1DD92C1 ^0x7C7DCFDC
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

void func_500(Hash hParam0) // Position - 0x1510F Hash - 0xC34F92EA ^0xC34F92EA
{
	if (func_104() != -1)
		return;

	return;
}

void func_501(Hash hParam0) // Position - 0x15122 Hash - 0xD6BB2A12 ^0xD6BB2A12
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			break;
	}

	return;
}

void func_502(Hash hParam0, int iParam1) // Position - 0x1513B Hash - 0x81B514EF ^0xBAF47B25
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_1902822.f_37);
	func_382(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_787(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

Hash func_503(Ped pedParam0) // Position - 0x1517C Hash - 0x159F0730 ^0x5BA63351
{
	Ped pedAttached;
	int pedDamageCleanliness;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	pedAttached = pedParam0;
	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedAttached);
	num = func_788(pedAttached);

	if (!ENTITY::DOES_ENTITY_EXIST(pedAttached))
		return 0;

	if (TASK::_0x7CB99FADDE73CD1B(pedAttached))
		return 0;

	num2 = pedDamageCleanliness;
	num3 = num;

	if (num3 < num2)
		pedDamageCleanliness = num3;

	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&num4, pedAttached, pedDamageCleanliness))
		return 0;

	if (num4 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedAttached, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(pedAttached))
		{
			num5 = func_789(num4);
			return num5;
		}
	
		return num4;
	}

	switch (pedDamageCleanliness)
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

int func_504(Hash hParam0, int iParam1, Ped pedParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7) // Position - 0x1524F Hash - 0xBFFE30FD ^0x69B34B6A
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
	{
		num = func_790(pedParam2, hParam0);
	
		if (num > 0)
		{
			if (iParam1 < num)
				num = iParam1;
		
			iParam1 = iParam1 - num;
			func_791(&pedParam2, hParam0, &num, bParam4, hParam5, iParam6);
			iParam1 = iParam1 + num;
		}
	}

	iParam1 = func_792(PLAYER::PLAYER_PED_ID(), hParam0, iParam1, bParam3, iParam6);

	if (iParam1 <= 0)
		return iParam1;

	return iParam1;
}

int func_505(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x152B9 Hash - 0xE0E24551 ^0xE0E24551
{
	int num;
	int num2;
	int num3;

	num = func_89(hParam0, false, false, false);

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
		if (!func_74(hParam0, num2, bParam2, hParam3))
			return 0;
		else
			func_793(hParam0, num2, false);

	if (num3 > 0)
	{
		if (!func_794(hParam0, num3, bParam2, hParam3))
			return 0;
		else
			func_793(hParam0, num2, false);
	
		if (!bParam2)
			func_164("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, true);
	}

	return 1;
}

BOOL func_506(int iParam0, int iParam1) // Position - 0x15348 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_507(int iParam0) // Position - 0x15360 Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_509(iParam0, 4))
		return false;

	return true;
}

BOOL func_508(int iParam0) // Position - 0x15377 Hash - 0x7F4C96B ^0x650690F6
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

BOOL func_509(int iParam0, int iParam1) // Position - 0x15443 Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_510(int iParam0) // Position - 0x1545C Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_511() // Position - 0x1546F Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_350())
		return false;

	return Global_1904402.f_8873;
}

BOOL func_512(int iParam0, int iParam1) // Position - 0x1548A Hash - 0x86BBE6F0 ^0x86BBE6F0
{
	if (iParam0 == iParam1)
		return true;

	if (iParam0 == 6 && iParam1 == 4)
		return true;

	return false;
}

BOOL func_513(Hash hParam0) // Position - 0x154B2 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_514(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x154C8 Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_206(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_795(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_515(Hash hParam0, var uParam1) // Position - 0x15535 Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_274(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

int func_516(Hash hParam0) // Position - 0x15588 Hash - 0x5FC245A8 ^0x222CF07D
{
	if (func_85(hParam0, 0))
	{
		if (func_152(hParam0, -1242251796))
		{
			if (func_152(hParam0, 2060589226))
				return func_796();
		
			return func_797();
		}
		else if (func_152(hParam0, 1919582297))
		{
			return func_529();
		}
		else if (func_152(hParam0, 1647670816))
		{
			return func_798();
		}
		else if (func_152(hParam0, 1147021565))
		{
			return func_532();
		}
	}

	if (Global_1940085.f_12)
		return func_797();
	else
		return func_532();

	return func_532();
}

int func_517() // Position - 0x1562A Hash - 0x9F572D68 ^0x2EEFC18B
{
	return 225949718;
}

BOOL func_518(Hash hParam0) // Position - 0x15637 Hash - 0x6FB27747 ^0x2F844672
{
	return hParam0 == 1401465909 || hParam0 == joaat("kit_collectors_bag");
}

int func_519() // Position - 0x15655 Hash - 0x9F572D68 ^0x8D56AEC6
{
	return 1039657088;
}

BOOL func_520(Hash hParam0) // Position - 0x15662 Hash - 0xE3FE29A5 ^0x72E17A42
{
	if (func_152(hParam0, 1147021565) || func_152(hParam0, -136654233) || func_152(hParam0, -524514947) || func_152(hParam0, -1238310989) || func_152(hParam0, 1765172170) || func_152(hParam0, 1490540191) || func_152(hParam0, 1573112293) || func_152(hParam0, -1242251796) || func_152(hParam0, 1919582297) || func_152(hParam0, -2085281117) || hParam0 == joaat("consumable_offal"))
		return true;

	return false;
}

int func_521() // Position - 0x15724 Hash - 0x9F572D68 ^0xA5345381
{
	return 1039392896;
}

int func_522() // Position - 0x15731 Hash - 0x9F572D68 ^0x10089971
{
	return 1039645941;
}

int func_523() // Position - 0x1573E Hash - 0x9F572D68 ^0x84B652A2
{
	return 1039907016;
}

int func_524() // Position - 0x1574B Hash - 0x9F572D68 ^0xB45F52D0
{
	return 1039902864;
}

int func_525() // Position - 0x15758 Hash - 0x9F572D68 ^0x32AFB64F
{
	return 955497620;
}

int func_526() // Position - 0x15765 Hash - 0x9F572D68 ^0x62D4A844
{
	return 1022861303;
}

int func_527() // Position - 0x15772 Hash - 0x9F572D68 ^0xCF492FF4
{
	return 1039902720;
}

int func_528() // Position - 0x1577F Hash - 0x9F572D68 ^0x2787CCF0
{
	return 972554239;
}

int func_529() // Position - 0x1578C Hash - 0x9F572D68 ^0x5429ED30
{
	return 905165831;
}

int func_530() // Position - 0x15799 Hash - 0x9F572D68 ^0x3F507FB0
{
	return 1038298244;
}

int func_531() // Position - 0x157A6 Hash - 0x9F572D68 ^0x3C6E2171
{
	return 1037713383;
}

int func_532() // Position - 0x157B3 Hash - 0x9F572D68 ^0x6DDEACEC
{
	return 1039645911;
}

int func_533() // Position - 0x157C0 Hash - 0x9F572D68 ^0x30183CC8
{
	return 1039655040;
}

BOOL func_534(int iParam0) // Position - 0x157CD Hash - 0xA059D395 ^0xE5C5C571
{
	return func_94(Global_1940085.f_7, iParam0);
}

BOOL func_535(BOOL bParam0) // Position - 0x157E1 Hash - 0x4C19DF92 ^0xC15E2431
{
	Entity entity;

	if (func_534(1))
	{
		if (bParam0)
			func_164("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, true);
	
		return false;
	}

	if (func_534(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			entity = func_799(Global_33);
		
			if (entity != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(entity))
				{
					func_164("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, true);
					return false;
				}
			}
		
			func_164("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, true);
		}
	
		return false;
	}

	if (func_534(4194304))
		return false;

	return true;
}

BOOL func_536(BOOL bParam0, BOOL bParam1) // Position - 0x15874 Hash - 0xDC513764 ^0x69479BB6
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
			func_164("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_537(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x158C4 Hash - 0xB3520FCB ^0xE74487EC
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
					func_164("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, true);
			
				return false;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				if (bParam0)
					func_164("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, true);
			
				return false;
		}
	
		if (!func_16(iParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
			if (bParam2 || VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_33)
				return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return false;
	}

	return true;
}

BOOL func_538(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x159B1 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_539(Ped pedParam0) // Position - 0x15A0A Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_540(Ped pedParam0, BOOL bParam1) // Position - 0x15A27 Hash - 0x6BE4D4B ^0xC7F6BBCD
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

int func_541(var uParam0, int iParam1) // Position - 0x15A7D Hash - 0x412E6219 ^0x412E6219
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!func_83(*uParam0))
		return -1;

	num = -1;
	num6 = func_800(*uParam0);

	switch (*uParam0)
	{
		case 3:
			num4 = func_803(num6);
			num5 = func_804(num4);
		
			if (num5 == -1)
			{
			}
			else
			{
				num = func_805(num5);
			}
			break;
	
		case 4:
			num3 = num6;
			num2 = func_801(num3);
		
			if (num2 == -1)
			{
			}
			else
			{
				num = func_802(num2);
			}
			break;
	
		default:
			break;
	}

	return num;
}

BOOL func_542(int iParam0, int iParam1, BOOL bParam2) // Position - 0x15B00 Hash - 0x891BBFA0 ^0xB8158E5D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_544(func_806(iParam0, iParam1, bParam2)));
}

struct<8> func_543(int iParam0, int iParam1) // Position - 0x15B1B Hash - 0x21337FB2 ^0x21337FB2
{
	return func_806(iParam0, iParam1, true);
}

char* func_544(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x15B2C Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_545(int iParam0, Hash hParam1) // Position - 0x15B40 Hash - 0x516C6848 ^0x6761C278
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && Global_1220826.f_48[iParam0 /*21*/].f_18[i] == hParam1)
			return true;
	}

	return false;
}

BOOL func_546(int iParam0) // Position - 0x15B8C Hash - 0x2EBFDD04 ^0x2EBFDD04
{
	return iParam0 >= 0 && iParam0 < 50;
}

BOOL func_547(int iParam0) // Position - 0x15BA2 Hash - 0x6642AD8B ^0xEA8BECFA
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
						num = func_808(Global_17418.f_2992.f_1[i /*5*/].f_1, Global_1220826.f_48[iParam0 /*21*/][j /*4*/].f_1);
					
						if (num < 300f)
							return false;
					}
				}
			}
		}
	}

	if (func_809(4))
		return false;

	if (func_550())
		return true;

	if (func_810())
		return false;

	if (func_811(1, 255))
		return false;

	if (func_83(func_812()) && Global_1220826.f_1.f_20 != 3)
		return false;

	return true;
}

BOOL func_548(int iParam0) // Position - 0x15CB3 Hash - 0xB6416185 ^0xCE440AEC
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_23(Global_1220826.f_48[iParam0 /*21*/].f_18[i], 1))
			return true;
	}

	return false;
}

BOOL func_549(int iParam0) // Position - 0x15D01 Hash - 0xA37D16B6 ^0x8D2EEA9D
{
	int i;

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_1220826.f_48[iParam0 /*21*/].f_18[i] != 0 && func_813(Global_1220826.f_48[iParam0 /*21*/].f_18[i]))
			return true;
	}

	return false;
}

BOOL func_550() // Position - 0x15D4E Hash - 0x16C45944 ^0x16C45944
{
	return func_814(func_82(0));
}

BOOL func_551(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x15D5F Hash - 0xC5F24F4E ^0x107F90DC
{
	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;

	return PED::_IS_META_PED_USING_COMPONENT(pedParam0, hParam1);
}

int func_552() // Position - 0x15D83 Hash - 0x6AC5469B ^0xEA730EC
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
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_254(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (WEAPON::_IS_WEAPON_BINOCULARS(weaponHash))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_254(weaponHash) || WEAPON::_IS_WEAPON_LASSO(weaponHash))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

int func_553(Hash hParam0) // Position - 0x15E76 Hash - 0x4DAA6E6F ^0x4DAA6E6F
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

void func_554(int iParam0, BOOL bParam1, int iParam2) // Position - 0x16051 Hash - 0xA15BFFCE ^0xA15BFFCE
{
	Hash hash;
	int num;

	hash = func_815(iParam0);
	num = func_553(hash);

	if (num != iParam0)
		func_816(num, 4);

	if (!func_817(iParam0))
		return;

	if (func_818(iParam0))
		return;

	func_816(iParam0, 4);
	func_819(iParam0, bParam1);

	if (!func_820(iParam0))
		func_821(iParam0, true, false);

	if (bParam1)
		if (!func_18(0, false, true))
			func_822(true, 6);

	return;
}

BOOL func_555(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x160C7 Hash - 0x1E0E4BC8 ^0xFC328A61
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

void func_556(Hash hParam0) // Position - 0x16100 Hash - 0xD8F93303 ^0x277E9FFE
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

	if (func_152(hParam0, 1573112293) || func_152(hParam0, 672467738) || func_152(hParam0, -550842268))
		flag = true;

	if (func_86(hParam0) == joaat("consumable"))
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
				health = func_823(0, outData2.f_2);
				func_824(outData2.f_2);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_823(2, outData2.f_2);
				func_825(outData2.f_2, false);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_823(1, outData2.f_2);
				func_826(outData2.f_2);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_640(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_641(0, num, true, true, flag);
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_640(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_641(2, num2, true, true, flag);
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_640(BUILTIN::TO_FLOAT(outData2.f_2), outData2.f_5);
				func_641(1, num3, true, true, flag);
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_643(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_644(19, num4, true, true);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_643(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_644(20, num4, true, true);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_643(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_644(18, num4, true, true);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_643(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_644(0, num4, true, true);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_643(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_644(2, num4, true, true);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_643(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_644(1, num4, true, true);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_642(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3 || func_152(hParam0, -537818634))
			func_110(func_383(joaat("medicine_items_used")), 1);
	
		if (func_152(hParam0, -1457797660))
			func_110(func_383(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_110(func_383(joaat("DEADEYE_ITEMS_USED")), 1);
	
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

void func_557(int iParam0) // Position - 0x16444 Hash - 0xF3266748 ^0x24159BE1
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_558(int iParam0) // Position - 0x1648A Hash - 0xEA95855 ^0xEA95855
{
	return Global_1953292.f_595[iParam0] > 0;
}

void func_559(int iParam0) // Position - 0x1649F Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1953292.f_595[iParam0] = Global_1953292.f_595[iParam0] + 1;
	return;
}

BOOL func_560() // Position - 0x164BF Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1953292.f_3503)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1953292.f_3501) < 1250)
		return true;

	if (func_827())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		return true;

	return false;
}

BOOL func_561(Hash hParam0) // Position - 0x16509 Hash - 0xF685E7E9 ^0xFF8FA3AF
{
	Hash hash;

	hash = func_165(hParam0);

	if (hash == 81053684 || hash == -525676072 || func_152(hParam0, 160827531) || func_152(hParam0, -1303648999))
		return 1;

	return 0;
}

void func_562(var uParam0, int iParam1) // Position - 0x16559 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_563(Hash hParam0) // Position - 0x1656A Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_569(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

BOOL func_564(var uParam0) // Position - 0x16594 Hash - 0xA1F57C1B ^0xFF498BD3
{
	if (-1829635046 == func_828(81053684))
		if (func_569(uParam0))
			return true;
	else if (func_134(-525676072, uParam0) || func_152(func_829(1742327865), -1303648999))
		if (func_569(uParam0))
			return true;

	return false;
}

Hash func_565() // Position - 0x165F1 Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_552())
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

Hash func_566() // Position - 0x16648 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_552())
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

Hash func_567() // Position - 0x1669F Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_552())
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

Hash func_568() // Position - 0x166F6 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_552())
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

BOOL func_569(var uParam0) // Position - 0x1674D Hash - 0x313F44CF ^0x6235E18A
{
	if (func_134(81053684, uParam0))
		return true;

	if (func_134(-525676072, uParam0))
		return true;

	return false;
}

void func_570(BOOL bParam0) // Position - 0x1677A Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

void func_571(int iParam0, int iParam1, int iParam2) // Position - 0x16792 Hash - 0x8A858A95 ^0x34E316B1
{
	Global_1953292.f_83[func_253(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_253(iParam0, 1) /*12*/].f_11 - Global_1953292.f_83[func_253(iParam0, 1) /*12*/].f_11 && iParam1;
	return;
}

int func_572(int iParam0, BOOL bParam1) // Position - 0x167D1 Hash - 0x402BF0A8 ^0xF803E7D2
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
				return func_830();
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

int func_573(int iParam0, BOOL bParam1) // Position - 0x16874 Hash - 0x14DDA26B ^0x1E3E4A18
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

BOOL func_574(Hash hParam0, var uParam1) // Position - 0x16923 Hash - 0x4A27386E ^0x953F277B
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

BOOL func_575(Hash hParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x16963 Hash - 0x1A1DEF68 ^0x4083C3B3
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1953292.f_3352.f_26 >= 25)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_574(hash, &unk))
		return 0;

	if (!func_831(hParam0, 0))
		return 0;

	if (bParam3 && !func_832(hParam0, false, bParam4))
		return 0;

	Global_1953292.f_3352[Global_1953292.f_3352.f_26] = hash;
	Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

void func_576() // Position - 0x169F4 Hash - 0xC3588B6F ^0x86C68CA5
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

BOOL func_577(Hash hParam0) // Position - 0x16AB2 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_834(func_833(hParam0));
}

void func_578(BOOL bParam0, Hash hParam1) // Position - 0x16AC4 Hash - 0x147A58CF ^0xF412F49B
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

	if (!func_85(hParam1, 0))
		return;

	num2 = -1;

	if (!func_368(hParam1, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
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
		num2 = func_835(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_836(4, num2))
		{
			str2 = "OUTFIT_STORED_LITERAL";
			str4 = func_544(func_837(num2));
		}
		else
		{
			hash = func_374(hParam1);
		
			if (func_85(hash, 0))
				hParam1 = hash;
		
			str2 = "ITEM_STORED";
			str4 = MISC::VAR_STRING(0, func_371(hParam1, false));
		}
	}
	else
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_835(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_836(4, num2))
		{
			str2 = "OUTFIT_REMOVED_LITERAL";
			str4 = func_544(func_837(num2));
		}
		else
		{
			hash2 = func_374(hParam1);
		
			if (func_85(hash2, 0))
				hParam1 = hash2;
		
			str2 = "ITEM_REMOVED";
			str4 = MISC::VAR_STRING(0, func_371(hParam1, false));
		}
	}

	str5 = func_377(MISC::VAR_STRING(10, str2, str4), num);
	func_382(str5, str.f_1, MISC::GET_HASH_KEY(str), 0, num, "Transaction_Feed_Sounds", str3, 0, true);
	return;
}

void func_579(BOOL bParam0, BOOL bParam1) // Position - 0x16C27 Hash - 0xB768D4F2 ^0xD5E3296F
{
	if (bParam1)
		func_838();

	if (bParam0)
	{
		func_313(8);
		func_313(512);
	}
	else
	{
		func_313(8);
		func_313(16);
	}

	return;
}

int func_580() // Position - 0x16C59 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

BOOL func_581(Hash hParam0, Hash hParam1) // Position - 0x16C67 Hash - 0xFF44AA17 ^0xFF44AA17
{
	Hash hash;
	Hash hash2;

	hash = func_165(hParam1);
	hash2 = func_165(hParam0);

	if (hash == hash2)
		return true;

	if (func_839(hParam1) && func_839(hParam0))
		return true;

	return false;
}

void func_582(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x16CA3 Hash - 0x786470E ^0x786470E
{
	func_840(hParam0, 0, 0, bParam3, bParam5);
	func_324(hParam1, true, bParam2, bParam4, bParam3, bParam5);
	return;
}

int func_583(int iParam0, int iParam1) // Position - 0x16CC6 Hash - 0xE1D12727 ^0xE86A8679
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

void func_584() // Position - 0x16F15 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1953292.f_1557 = Global_1953292.f_1676;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1953292.f_1557.f_1[i /*3*/] = { Global_1953292.f_1676.f_1[i /*3*/] };
	}

	return;
}

void func_585(int iParam0) // Position - 0x16F5C Hash - 0x65A082AE ^0x65A082AE
{
	func_571(iParam0, 8, 6);
	return;
}

void func_586(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x16F6D Hash - 0xD9092964 ^0xFDAEF5
{
	int num;
	Hash hash;

	if (bParam3)
	{
		if (*uParam1 == 832230214 || *uParam1 == 30652334 || *uParam1 == 750544038)
		{
			num = 16;
		
			if (func_165(uParam0->f_1[num /*3*/]) != 1882579758)
				return;
		
			hash = func_841(uParam0->f_1[num /*3*/]);
		
			if (hash != 0 && hash != Global_1953292.f_83[iParam2 /*12*/])
			{
				*uParam1 = hash;
				return;
			}
		}
	
		if (!func_842(*uParam1, iParam2))
		{
			*uParam1 = Global_1953292.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}

	*uParam1 = Global_1953292.f_83[iParam2 /*12*/];
	return;
}

void func_587(int iParam0) // Position - 0x1701B Hash - 0x20214C72 ^0x20214C72
{
	func_843(&(Global_1953292.f_2938), iParam0);
	return;
}

void func_588(int iParam0, int iParam1) // Position - 0x17030 Hash - 0xDE0FB67D ^0xDE0FB67D
{
	if (iParam1 & 8 != 0)
		return;

	func_844(&(Global_1953292.f_2938), iParam0, iParam1);
	return;
}

void func_589(Hash hParam0, int iParam1, int iParam2) // Position - 0x17053 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_590(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x17066 Hash - 0xF31ECD9B ^0x1CF13D77
{
	Hash hash;
	BOOL flag;

	hash = hParam1;
	flag = func_330(hash, true);

	if (bParam3 && func_152(uParam0->f_1[iParam2 /*3*/], 343781202))
		func_845(uParam0, uParam0->f_1[iParam2 /*3*/]);

	switch (func_583(iParam2, 1))
	{
		case -1944638739:
			func_861(uParam0, flag, hash, iParam4);
			break;
	
		case -1197751823:
			func_854(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_846(uParam0, hash, iParam2, iParam4);
			break;
	
		case -893163968:
			func_852(uParam0, flag, hash, iParam4);
			break;
	
		case -450913544:
			func_853(uParam0, flag, hash, iParam2, iParam4);
			break;
	
		case -426430150:
			func_858(uParam0, flag, iParam4);
			break;
	
		case -338487716:
			func_848(uParam0, hash, flag, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_857(uParam0, flag, hash, iParam4);
			break;
	
		case 304805134:
			func_855(uParam0, flag, hash, iParam4);
			break;
	
		case 788010710:
			func_859(uParam0, flag, hash, iParam4);
			break;
	
		case 1108822547:
			func_849(uParam0, flag, hash, iParam4);
			break;
	
		case 1145151482:
			func_856(uParam0, flag, hash, iParam4);
			break;
	
		case 1250092473:
			func_851(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_847(uParam0, hash, iParam2);
			break;
	
		case 1742327865:
			func_850(uParam0, flag, hash, iParam4);
			break;
	
		case 1958421083:
			func_860(uParam0, flag, hash, iParam4);
			break;
	}

	return;
}

Hash func_591(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x171FF Hash - 0xA84BB00 ^0xFB9157AD
{
	BOOL flag;

	flag = false;

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	if (hParam2 == 289238755)
		return 289238755;

	if (hParam2 != 0 && func_862(hParam0, flag, hParam2) != -1)
		return hParam2;

	if (func_863(hParam0, func_583(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_592(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x17260 Hash - 0xDD68C02C ^0xDD68C02C
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
		num = func_864(Global_1953292.f_1676);
	
		if (bParam4)
			bParam4 = num == -1;
	}

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (func_320(4718592) && !func_865(func_165(Global_1953292.f_1557.f_1[iParam0->f_2[i /*2*/] /*3*/])))
		{
		}
		else
		{
			func_866(iParam0->f_2[i /*2*/], bParam1, bParam2, num);
			flag = true;
		}
	}

	if (!flag)
		return;

	if (bParam4)
	{
		flag2 = false;
	
		if (Global_1953292.f_1676 != 491602716 || !func_836(2, -1))
			flag2 = true;
		else if (!func_152(Global_1953292.f_1676, -166674229) && Global_1953292.f_1676 != 491602716 || !func_836(2, -1))
			flag2 = true;
	
		if (flag2)
		{
			Global_1953292.f_1676 = 491602716;
			Global_1953292.f_1557 = 491602716;
			func_867(491602716, true, true);
			func_868(-1, false, 6);
			func_168(27, 0, 65536, 0, false);
		}
	}

	if (bParam3)
		func_579(false, true);

	return;
}

Hash func_593(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0x1739F Hash - 0x67107E64 ^0x67107E64
{
	return func_869(&uParam0, hParam4, bParam5, iParam6);
}

BOOL func_594(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x173B3 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_107(false))
		return func_870(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_393(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_71(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

struct<4> func_595() // Position - 0x17427 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_596(Ped pedParam0) // Position - 0x17433 Hash - 0xD9604B15 ^0x3B7B69F4
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (func_871(Global_33, pedParam0, false, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, pedParam0))
		return true;

	return false;
}

BOOL func_597() // Position - 0x1746B Hash - 0xF83C2FD8 ^0xF6BA78F9
{
	int num;
	int num2;
	int num3;
	int num4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("shop_anywhere_handheld")))
	{
		func_283(2);
		return false;
	}

	if (!func_350())
	{
		func_283(9);
		return false;
	}

	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_283(3);
		return false;
	}

	num = { func_82(0) };

	if (func_83(num))
	{
		num2 = -1;
	
		switch (num)
		{
			case 3:
			case 4:
				num4 = func_541(&num, 0);
			
				if (num4 != -1)
					if (func_542(num4, 461218520, false))
						num2 = 46;
				break;
		
			case 6:
				num3 = func_357(PLAYER::PLAYER_ID(), false);
			
				if (num3 != -1)
					num2 = func_872(num3);
				break;
		}
	
		if (num2 != -1)
		{
			func_283(num2);
			return false;
		}
	}

	if (func_873())
	{
		func_283(4);
		return false;
	}

	if (func_811(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && Global_1051832.f_92[34 /*75*/].f_49 & 1073741824 == 0)
	{
		func_283(5);
		return false;
	}

	if (func_874(131072, 255))
	{
		func_283(7);
		return false;
	}

	if (func_875())
	{
		func_283(8);
		return false;
	}

	return true;
}

BOOL func_598(int iParam0, int iParam1) // Position - 0x1759F Hash - 0x3ABC69C ^0xFF17F115
{
	if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33) || func_16(iParam1, 1024) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, iParam0, iParam1) > 0)
		return true;

	return false;
}

BOOL func_599(Player plParam0) // Position - 0x175EA Hash - 0xF72359AA ^0x3B19EB24
{
	if (plParam0 == 255)
		return Global_1102813.f_3 & 32 != 0;

	return func_874(32, plParam0);
}

BOOL func_600(int iParam0) // Position - 0x1760F Hash - 0x77815697 ^0x77815697
{
	if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return true;

	return false;
}

void func_601(BOOL bParam0) // Position - 0x17637 Hash - 0xF247C818 ^0xF247C818
{
	if (bParam0)
		func_876(4);
	else
		func_341(4);

	return;
}

void func_602(BOOL bParam0) // Position - 0x17651 Hash - 0x97FAFE1E ^0x34EAEBB2
{
	if (!(bParam0 && Global_1915656.f_22504))
		if (bParam0)
			INVENTORY::_INVENTORY_ENABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"));
		else
			INVENTORY::_INVENTORY_DISABLE_ITEM(2, joaat("KIT_HANDHELD_CATALOG"), 0);

	Global_1915656.f_22504 = bParam0;
	return;
}

BOOL func_603() // Position - 0x17691 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20643;
}

BOOL func_604(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x176A0 Hash - 0x13FC6F30 ^0x85A59BCD
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

	if (func_877())
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

BOOL func_605(int iParam0, int iParam1, Player plParam2) // Position - 0x178C6 Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_94(Global_1206166[plParam2 /*10*/][iParam0], iParam1);
}

var func_606(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, BOOL bParam10, int iParam11) // Position - 0x178E0 Hash - 0x63C3F71D ^0x3019B977
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

	if (func_878() != 0)
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
	any = Global_1295666.f_10;
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
				volume = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_879());
				break;
		
			case joaat("volSphere"):
				volume = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_879());
				break;
		
			case joaat("volCylinder"):
				volume = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(fParam0, fParam3, fParam6, func_879());
				break;
		}
	}

	if (flag4 & 8 != 0)
		flag4 = flag4 || func_880(PLAYER::GET_PLAYER_TEAM(player));

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
		
			if (func_460(i))
				flag = true;
		
			playerPed = PLAYER::GET_PLAYER_PED(player2);
		
			if (!flag)
				if (flag4 & 2 != 0)
					if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
						flag = true;
					else if (Global_1295666.f_83[i])
						flag = true;
		
			if (!flag)
				if (flag4 & 8192 != 0 && func_881(i) != 1)
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
					if (!func_882(player2))
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

int func_607(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21) // Position - 0x17C73 Hash - 0xDF93FBF9 ^0x193910B6
{
	if (!func_883(uParam0))
		return 0;

	uParam0->f_2[*uParam0 /*21*/] = { uParam1 };
	*uParam0 = *uParam0 + 1;
	return 1;
}

BOOL func_608(Hash hParam0, Hash hParam1) // Position - 0x17CA3 Hash - 0xCB56AA2F ^0x760BB648
{
	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, 1224357681))
		return true;

	return false;
}

Hash func_609(Hash hParam0, BOOL bParam1) // Position - 0x17CCA Hash - 0xBBDA5425 ^0xC9F4FC94
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

int func_610(Hash hParam0) // Position - 0x17D6C Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_85(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

struct<10> func_611(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x17DA6 Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_612(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x17E7A Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_613(Hash hParam0) // Position - 0x17E9B Hash - 0x5E6E1858 ^0xE905275C
{
	!func_85(hParam0, 0);

	if (func_152(hParam0, -393037696))
		return true;

	return false;
}

int func_614(int iParam0) // Position - 0x17EC1 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_615(Hash hParam0, int iParam1) // Position - 0x17EE2 Hash - 0x193BF536 ^0xD3271214
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

char* func_616(Hash hParam0) // Position - 0x17F30 Hash - 0x40E070C8 ^0x3AB260D2
{
	Hash labelHash;

	if (!func_85(hParam0, 0))
		return "";

	labelHash = func_371(hParam0, false);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

BOOL func_617(Hash hParam0) // Position - 0x17F66 Hash - 0xB0090776 ^0x189C4477
{
	if (func_165(hParam0) == -126813555 || func_165(hParam0) == 1946043663)
		return true;

	return false;
}

char* func_618(Hash hParam0) // Position - 0x17F94 Hash - 0xB15BC7E7 ^0xAE59A967
{
	Hash labelHash;

	if (!func_85(hParam0, 0))
		return "";

	labelHash = func_373(hParam0);

	if (labelHash == 0)
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(labelHash);
}

void func_619(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x17FC9 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_620() // Position - 0x17FFA Hash - 0x20D56EAA ^0x3767E32F
{
	if (func_766(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_621(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x18018 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_71(false);
	*panParam1 = { func_274(hParam0, func_385(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_622(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x1805D Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_623(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x18090 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_71(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

Ped func_624(int iParam0) // Position - 0x180CA Hash - 0x829B7265 ^0xE21C4F30
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_625(Ped pedParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x180DA Hash - 0x586BF778 ^0x586BF778
{
	int num;

	num = func_89(hParam1, bParam2, false, false);
	num = num + func_884(pedParam0, hParam1);

	if (bParam3)
		num = num + func_885(hParam1, bParam4);

	return num;
}

void func_626(int iParam0) // Position - 0x1810F Hash - 0x1B4614B0 ^0x73E476F0
{
	if (!func_85(Global_1940252.f_11588, 0))
		Global_1940252.f_7 = iParam0;
	else if (func_288(Global_1940252.f_11588, 1224357681) != 0 && Global_1940252.f_11587 != 0 && Global_1940252.f_11587 != -2074770370 && !Global_1915656.f_20638 && !Global_1915656.f_22504.f_1)
		Global_1940252.f_7 = 1;
	else
		Global_1940252.f_7 = 0;

	return;
}

void func_627(var uParam0) // Position - 0x18194 Hash - 0x2352E9F9 ^0x354C565A
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		else
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_49);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		else
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_50);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		else
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_51);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		else
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_52);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		else
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_53);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		else
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_54);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		else
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_55);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		else
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_56);
	}

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		if (PED::IS_PED_MALE(Global_33))
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		else
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_57);
	}

	return;
}

BOOL func_628(const char* sParam0) // Position - 0x1841B Hash - 0x38726239 ^0x48BDE31D
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

BOOL func_629(var uParam0, var uParam1) // Position - 0x1842A Hash - 0xCF1CBCB4 ^0xBBBBD5D9
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
		func_627(uParam0);
		return false;
	}

	return true;
}

int func_630(Hash hParam0) // Position - 0x18474 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_193(hParam0, true, 0) };
	return func_327(unk.f_4);
}

void func_631(Hash hParam0, int iParam1) // Position - 0x18490 Hash - 0x9C57AE83 ^0x7A656C3
{
	var unk;
	int num;
	int num2;
	int num3;
	var unk2;

	num = func_630(hParam0);
	num2 = func_253(num, 1);

	if (num2 == 39)
		return;

	if (func_886(hParam0) && func_323(hParam0))
		iParam1 = iParam1 | 64;

	if (num == 1108822547 && func_320(32768) || hParam0 != Global_1953292.f_1676.f_1[num2 /*3*/])
	{
		if (func_886(Global_1953292.f_1676.f_1[num2 /*3*/]) && func_323(Global_1953292.f_1676.f_1[num2 /*3*/]))
			iParam1 = iParam1 | 32;
	
		if (Global_1953292.f_83[num2 /*12*/].f_1 > 1)
			iParam1 = iParam1 | 16;
	
		num3 = 0;
	
		switch (func_165(hParam0))
		{
			case -525676072:
				if (func_320(32768))
					func_585(func_583(num2, 1));
			
				if (func_134(81053684, &unk2))
				{
					num3 = func_253(func_252(81053684), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
				break;
		
			case 81053684:
				if (func_134(-525676072, &unk))
				{
					num3 = func_253(func_252(-525676072), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
			
				if (func_152(hParam0, -180472385) && func_134(1024667707, &unk))
				{
					num3 = func_253(func_252(1024667707), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
				break;
		
			default:
				if (!func_152(hParam0, 160827531))
					break;
			
				if (func_134(-525676072, &unk))
				{
					num3 = func_253(func_252(-525676072), 1);
				
					if (num3 == 39)
						break;
				
					Global_1953292.f_2686[num3 /*2*/] = Global_1953292.f_83[num3 /*12*/];
				}
				break;
		}
	}

	Global_1953292.f_2686[num2 /*2*/] = hParam0;
	func_887(num, iParam1, 6);
	return;
}

int func_632(Hash hParam0) // Position - 0x186AA Hash - 0x5CCC10A7 ^0x7EE6802B
{
	var outData;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_4;
}

void func_633(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x186C6 Hash - 0x7B0111BF ^0x34A3D5C9
{
	int num;
	int num2;
	int num3;

	if (uParam0->f_49.f_27 != -1 && !bParam1)
		return;

	num = func_89(uParam0->f_49.f_62, false, false, false);

	if (bParam2)
		num = num - 1;

	num2 = func_888(uParam0->f_49.f_62, false);
	num3 = func_218(uParam0->f_49.f_62, uParam0->f_49.f_63, func_414(), false);

	if (num2 == -1)
		num2 = num3;
	else
		num2 = num2 - num;

	uParam0->f_49.f_27 = func_424(num2, num3);
	return;
}

BOOL func_634() // Position - 0x18744 Hash - 0x11DC3931 ^0xD7F905DE
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-768274665);
}

void func_635(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x18755 Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_95(iParam0))
		return;

	num = func_231(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1951910[num /*23*/].f_3, MISC::VAR_STRING(2, sParam1, iParam2));
	return;
}

float func_636(int iParam0, float fParam1) // Position - 0x187A5 Hash - 0x17EDCAD1 ^0xD87169C2
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

void func_637(float fParam0) // Position - 0x18836 Hash - 0xC5B8A029 ^0xEE3B2C23
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_GET_NUM_RESERVED_HEALTH(ped));

	num = func_889(2);
	func_890(fParam0 * (float)num, 0);
	return;
}

void func_638(float fParam0, BOOL bParam1) // Position - 0x18876 Hash - 0x3C04298E ^0xB65A98E1
{
	int num;

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(10);

	num = func_891(2);
	func_892(fParam0 * (float)num, false, bParam1);
	return;
}

void func_639(float fParam0) // Position - 0x188AE Hash - 0xC5B8A029 ^0xA3577BA4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(ped));

	num = func_893(2);
	func_894(fParam0 * (float)num, 0);
	return;
}

float func_640(float fParam0, float fParam1) // Position - 0x188EE Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_641(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1891C Hash - 0xF1ADCC2F ^0xF1ADCC2F
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_895(iParam0, fParam1, true);

	func_897(iParam0, func_896(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_642(float fParam0, BOOL bParam1) // Position - 0x18955 Hash - 0xF3A2F5AE ^0x22F56C08
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_898())
		func_899(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_139(109, false);
	}

	return;
}

float func_643(float fParam0, int iParam1) // Position - 0x189AD Hash - 0x4EDD98F5 ^0x4EDD98F5
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

int func_644(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x189FF Hash - 0xAC70E962 ^0x1F9746E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_900(iParam0, fParam1, bParam2, bParam3);
}

void func_645(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x18A23 Hash - 0xF84CCCD4 ^0x73109519
{
	if (bParam2 || func_152(hParam0, -537818634))
		func_110(func_383(joaat("medicine_items_used")), 1);

	if (func_152(hParam0, -1457797660))
		func_110(func_383(joaat("provision_items_used")), 1);

	if (func_152(hParam0, 1573112293))
		func_901(func_553(hParam0), 1);

	if (func_152(hParam0, 1939071949))
		func_110(func_109(joaat("USED"), joaat("tonic")), 1);

	if (func_152(hParam0, 1992556171))
		func_110(func_383(joaat("camp_stews_consumed")), 1);

	if (func_152(hParam0, 1239889275))
		func_110(func_383(joaat("antique_bottles_drunk")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_110(func_109(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_special_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
		case joaat("consumable_potent_horse_medicine"):
			func_110(func_109(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_110(func_109(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_110(func_109(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_110(func_109(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case -611782825:
			func_110(func_109(joaat("USED"), -1875859641), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_110(func_109(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_110(func_109(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_110(func_109(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_110(func_109(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_104() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_110(func_109(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam1)
		func_110(func_383(joaat("DEADEYE_ITEMS_USED")), 1);

	func_902(hParam0, iParam3);
	return;
}

int func_646(int iParam0) // Position - 0x18C8D Hash - 0xD52E0195 ^0x6C5F51BC
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

BOOL func_647() // Position - 0x18CD9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

BOOL func_648(var uParam0) // Position - 0x18CE8 Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_103(uParam0, 1);
}

void func_649(var uParam0) // Position - 0x18CF7 Hash - 0x7A1F391A ^0x7A1F391A
{
	func_214(uParam0, 1);
	return;
}

void func_650(var uParam0) // Position - 0x18D06 Hash - 0xD45265C9 ^0xD45265C9
{
	func_101(true);
	func_45(uParam0, 4);
	return;
}

BOOL func_651(var uParam0) // Position - 0x18D1A Hash - 0x17468415 ^0x64173575
{
	Player gangLeader;

	uParam0->f_75 = Global_1913634.f_1584;
	uParam0->f_74 = Global_1913634.f_1585;

	if (func_103(uParam0, 2))
	{
		Global_1913634.f_1576 = 0;
		uParam0->f_45 = 0;
		gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[0 /*9*/].f_1))
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913634[0 /*9*/].f_1);
	
		uParam0->f_25 = func_903(gangLeader);
		uParam0->f_26 = func_904(gangLeader);
		func_905(uParam0, uParam0->f_25, 1472825031);
		func_905(uParam0, -1171462349, 1472825031);
		func_905(uParam0, 1689071181, 1472825031);
		func_905(uParam0, -1612693182, 1472825031);
		func_905(uParam0, 1856073229, 1472825031);
		return true;
	}

	if (uParam0->f_44 == 0)
	{
		Global_1913634.f_1576 = 0;
		uParam0->f_45 = 0;
		func_906(uParam0, 600942249);
		uParam0->f_44 = uParam0->f_44 + 1;
		return false;
	}
	else if (uParam0->f_44 == 1)
	{
		func_906(uParam0, -257768755);
		uParam0->f_44 = uParam0->f_44 + 1;
		return false;
	}
	else
	{
		func_906(uParam0, -214678071);
		uParam0->f_44 = 0;
	}

	uParam0->f_45 = 0;
	return true;
}

BOOL func_652(var uParam0) // Position - 0x18E4F Hash - 0x96BFA256 ^0x4B45CED2
{
	int i;
	var unk;

	uParam0->f_47 = 0;
	uParam0->f_48 = 0;

	if (func_103(uParam0, 2) || func_103(uParam0, 65536) && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_29))
		return true;

	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "filter", func_103(uParam0, 2) ? joaat("recipes") : func_907(uParam0->f_42));

	if (func_103(uParam0, 2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", uParam0->f_42);
	}

	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "tipText", "");
	uParam0->f_41 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowIngredients", true);

	for (i = 0; i < 4; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ingredient", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		func_908(&uParam0->f_31[i], &unk, uParam0);
		TEXT_LABEL_ASSIGN_STRING(&unk, "tip", 16);
		TEXT_LABEL_APPEND_INT(&unk, i, 16);
		uParam0->f_36[i] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, &unk);
		TEXT_LABEL_ASSIGN_STRING(&unk, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_36[i], &unk, "");
		TEXT_LABEL_ASSIGN_STRING(&unk, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_36[i], &unk, 0);
	}

	return true;
}

BOOL func_653(var uParam0) // Position - 0x19043 Hash - 0xD901A9F7 ^0xCC3AE599
{
	Hash i;
	int num;
	BOOL flag;

	flag = func_414();

	for (i = uParam0->f_45; i <= Global_1913634.f_1576 - 1; i = i + 1)
	{
		if (func_85(Global_1913634[i /*9*/].f_6, 0))
		{
			func_909(uParam0, false, i, flag, true, false);
		
			if (num >= 10)
			{
				uParam0->f_45 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_45 = 0;

	if (uParam0->f_48 == 0)
		func_214(uParam0, 128);

	uParam0->f_46 = 0;
	return true;
}

void func_654(var uParam0) // Position - 0x190C1 Hash - 0x7B631005 ^0x16400597
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_30))
		uParam0->f_30 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes");
	else
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_30);

	uParam0->f_61 = 600942249;
	uParam0->f_60 = 0;
	uParam0->f_59 = 0;
	return;
}

BOOL func_655(var uParam0, BOOL bParam1) // Position - 0x19103 Hash - 0x3DFFDEF2 ^0x43709C1C
{
	Hash i;
	int num;
	BOOL flag;
	BOOL flag2;

	flag = func_414();

	for (i = uParam0->f_45; i <= Global_1913634.f_1576 - 1; i = i + 1)
	{
		if (func_103(uParam0, 128) && Global_1913634[i /*9*/].f_2 || !func_103(uParam0, 128))
		{
			if (Global_1913634.f_1585 != 0)
			{
				uParam0->f_74 = Global_1913634.f_1585;
				flag2 = func_152(Global_1913634[i /*9*/].f_6, Global_1913634.f_1585);
			
				if (func_103(uParam0, 16384) == flag2)
				{
				}
				else
				{
					func_909(uParam0, true, i, flag, false, bParam1);
				
					if (num >= 50)
					{
						uParam0->f_45 = i + 1;
						return false;
					}
				
					num = num + 1;
				}
			}
		
			func_909(uParam0, true, i, flag, false, bParam1);
		
			if (num >= 50)
			{
				uParam0->f_45 = i + 1;
				return false;
			}
		
			num = num + 1;
		}
	}

	uParam0->f_45 = 0;

	if (!func_103(uParam0, 16384) && Global_1913634.f_1585 != 0)
	{
		func_40(uParam0, 16384);
		return false;
	}

	uParam0->f_46 = 0;
	func_214(uParam0, 16384);
	return true;
}

BOOL func_656(var uParam0, BOOL bParam1) // Position - 0x191F8 Hash - 0xCE3BFA7B ^0xD0E044D5
{
	int num;

	func_40(uParam0, 256);

	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("crafting")))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("crafting"), 1014850361))
			return true;
		else
			return false;
	}
	else
	{
		num = UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("crafting"));
	
		if (num == 0)
			return true;
	}

	return false;
}

BOOL func_657(var uParam0) // Position - 0x19251 Hash - 0x1B1EEE6C ^0xCDB945B6
{
	int i;
	int num;
	BOOL flag;

	flag = func_414();

	for (i = uParam0->f_45; i <= Global_1913634.f_1576 - 1; i = i + 1)
	{
		func_910(uParam0, i, flag, 0, true, false, true);
	
		if (num >= 50)
		{
			uParam0->f_45 = i + 1;
			return false;
		}
	
		num = num + 1;
	}

	func_214(uParam0, 512);
	uParam0->f_45 = 0;
	return true;
}

void func_658(BOOL bParam0) // Position - 0x192B2 Hash - 0xAD6A0552 ^0x4C19ACDB
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
	ped = func_911(Global_33);

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

void func_659(var uParam0) // Position - 0x19394 Hash - 0x5D3A8B0D ^0xFA367D13
{
	int num;

	func_98(uParam0);
	func_912(uParam0, true);
	uParam0->f_1[2] = func_259("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	func_130(uParam0->f_1[2], true, true, true);
	uParam0->f_1[1] = func_259("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);

	if (!func_103(uParam0, 2))
	{
		if (func_85(uParam0->f_60, 0))
		{
			uParam0->f_62 = uParam0->f_60;
			uParam0->f_63 = uParam0->f_61;
			func_913(uParam0, &(uParam0->f_59));
		}
		else
		{
			uParam0->f_62 = 0;
		}
	
		if (func_85(uParam0->f_60, 0))
			if (func_237(uParam0->f_60))
				func_129(uParam0->f_1[1], "CAMP_REC_COOK", true);
			else if (func_288(uParam0->f_60, -1636519629) == -701492487)
				func_129(uParam0->f_1[1], "CAMP_REC_BREW", true);
			else
				func_129(uParam0->f_1[1], "CAMP_REC_MAKE", true);
	
		uParam0->f_1[3] = func_259(func_914(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}
	else
	{
		uParam0->f_1[7] = func_259("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	}

	uParam0->f_1[5] = func_915("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	func_916(uParam0->f_1[5], joaat("INPUT_GAME_MENU_LEFT"));
	func_916(uParam0->f_1[5], joaat("INPUT_GAME_MENU_RIGHT"));

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");

	if (num > 1 && func_85(uParam0->f_62, 0))
		func_130(uParam0->f_1[5], true, true, true);
	else
		func_130(uParam0->f_1[5], false, true, true);

	uParam0->f_1[6] = func_259("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);

	if (!func_103(uParam0, 32768))
		func_129(uParam0->f_1[6], "INFO", true);
	else
		func_129(uParam0->f_1[6], "INGREDIENTS", true);

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_30) == 0)
	{
		func_662(uParam0);
		func_130(uParam0->f_1[6], false, true, true);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}

	func_663(uParam0, uParam0->f_62, uParam0->f_63);
	return;
}

BOOL func_660(var uParam0) // Position - 0x19629 Hash - 0x8F324979 ^0xAAE5528D
{
	Player gangLeader;

	if (!func_103(uParam0, 2))
		return false;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (uParam0->f_26 != func_904(gangLeader))
	{
		uParam0->f_26 = func_904(gangLeader);
		func_45(uParam0, 15);
		return true;
	}

	if (uParam0->f_25 != func_903(gangLeader))
	{
		func_45(uParam0, 4);
		return true;
	}

	return false;
}

BOOL func_661(var uParam0) // Position - 0x1968A Hash - 0xBF68E3F2 ^0x6D27E536
{
	if (Global_1913634.f_1584 != uParam0->f_75 || Global_1913634.f_1585 != uParam0->f_74)
	{
		uParam0->f_75 = Global_1913634.f_1584;
		uParam0->f_74 = Global_1913634.f_1585;
		func_40(uParam0, 65536);
		func_45(uParam0, 4);
		return 1;
	}

	return 0;
}

void func_662(var uParam0) // Position - 0x196DF Hash - 0x4B96053 ^0xA749A970
{
	int i;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_41);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[i], "inUse", false);
	}

	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
	return;
}

void func_663(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x19740 Hash - 0xEB524898 ^0xCF253B2A
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

	if (!func_85(hParam1, 0))
	{
		if (func_95(uParam0->f_1[1]))
			func_130(uParam0->f_1[1], false, true, true);
	
		return;
	}

	flag = func_414();
	flag2 = true;
	flag3 = false;

	if (!Global_1913634.f_1579 && func_917(hParam1, hParam2, true))
	{
		flag3 = true;
		flag2 = false;
	}
	else if (!func_918(hParam1, hParam2, &unk2, &unk, &entity, false, flag, false) || func_408(uParam0->f_24))
	{
		flag2 = false;
	}
	else if (func_103(uParam0, 2) && !func_919(hParam1))
	{
		flag2 = false;
	}

	if (flag2)
	{
		if (hParam1 != joaat("consumable_coffee") && func_423(hParam1, 1, false) || !func_103(uParam0, 4) && func_103(uParam0, 8192) || hParam2 == -214678071 || hParam2 == joaat("cost_crafting_grill"))
		{
			flag2 = false;
		}
		else if (!func_413(2) && func_288(hParam1, -1636519629) == -701492487)
		{
			flag2 = false;
		}
		else if (uParam0->f_27 == -1)
		{
			num = func_89(hParam1, false, false, false);
			num2 = func_888(hParam1, false);
			num3 = func_218(hParam1, hParam2, flag, false);
		
			if (num2 == -1)
				num2 = num3;
			else
				num2 = num2 - num;
		
			uParam0->f_27 = func_424(num2, num3);
		}
	}

	if (func_689(uParam0, hParam1) && uParam0->f_27 > 1)
		if (!func_95(uParam0->f_1[8]))
			uParam0->f_1[8] = func_259("CAMP_REC_BATCH", joaat("INPUT_GAME_MENU_LS"), 1, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	else if (func_95(uParam0->f_1[8]))
		func_120(&uParam0->f_1[8], true, true);

	if (func_95(uParam0->f_1[1]))
	{
		if (func_103(uParam0, 2))
			func_129(uParam0->f_1[1], "DONATE_ING", true);
		else if (func_237(hParam1))
			if (func_103(uParam0, 131072) && uParam0->f_27 > 1)
				func_129(uParam0->f_1[1], MISC::VAR_STRING(2, "CAMP_REC_COOK_MLT", func_424(uParam0->f_27, 3)), true);
			else
				func_129(uParam0->f_1[1], "CAMP_REC_COOK", true);
		else if (func_288(hParam1, -1636519629) == -701492487)
			func_129(uParam0->f_1[1], "CAMP_REC_BREW", true);
		else
			func_129(uParam0->f_1[1], "CAMP_REC_MAKE", true);
	
		func_130(uParam0->f_1[1], flag2, true, true);
	}

	func_920(hParam1, hParam2, uParam0, entity, flag3);

	if (func_95(uParam0->f_1[6]))
		func_130(uParam0->f_1[6], !flag3, true, true);

	func_921(uParam0);
	return;
}

BOOL func_664(int iParam0, BOOL bParam1) // Position - 0x19A16 Hash - 0xAAB142C4 ^0x152C664A
{
	int num;

	if (bParam1 && !func_95(iParam0))
		return false;

	num = func_231(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1951910[num /*23*/].f_3);
}

void func_665(char* sParam0, char* sParam1, BOOL bParam2) // Position - 0x19A49 Hash - 0xC649C280 ^0xBF0E7B5A
{
	int soundId;

	soundId = AUDIO::GET_SOUND_ID();

	if (soundId != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(soundId, sParam0, sParam1, bParam2);
		Global_1958642[Global_1958642.f_25] = soundId;
		Global_1958642.f_25 = (Global_1958642.f_25 + 1) % 24;
	}

	return;
}

void func_666(var uParam0) // Position - 0x19A88 Hash - 0xC3940CF9 ^0x36B231BB
{
	int num;
	var unk;
	int num2;
	int i;
	Hash hash;
	const char* str;
	int num3;
	BOOL flag;
	Hash icon;
	const char* str2;

	if (func_85(uParam0->f_62, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(7, uParam0->f_62))
			return;
	
		UILOG::_UILOG_ADD_ENTRY_HASH(7, uParam0->f_62, Global_34, uParam0->f_62, -2136842124, 0);
		unk = 15;
		func_439(uParam0->f_62, uParam0->f_63, &unk, &num, true, false);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
	
		for (i = 0; i < num; i = i + 1)
		{
			if (i >= 4)
				break;
		
			hash = unk[i /*2*/];
		
			if (func_85(hash, 0))
			{
				num3 = func_89(hash, false, false, false);
				str = MISC::VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", num3, unk[i /*2*/].f_1, MISC::VAR_STRING(0, hash));
				flag = func_23(hash, unk[i /*2*/].f_1);
			
				if (flag)
					num2 = num2 + 1;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, hash, str, flag, true, true);
			}
		}
	
		if (func_922(uParam0->f_62, &icon, joaat("Inventory"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(7, uParam0->f_62, icon, icon.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(7, uParam0->f_62, icon, icon.f_1);
		}
	
		Global_1147183.f_339.f_16 = uParam0->f_62;
		Global_1147183.f_339.f_17 = uParam0->f_63;
		str2 = MISC::VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", num2, num);
		UILOG::_0x763637F9B838B0A7(7, uParam0->f_62, str2);
		AUDIO::PLAY_SOUND_FRONTEND("add_to_log", "SSCRFT_Sounds", true, 0);
	}

	func_921(uParam0);
	return;
}

void func_667(var uParam0) // Position - 0x19BEA Hash - 0x55260421 ^0x61A1B350
{
	int num;
	AnimScene animScene;

	if (!func_138(uParam0->f_1[1], false))
		return;

	if (func_103(uParam0, 2))
	{
		if (func_85(uParam0->f_62, 0))
		{
			func_681(true);
			func_29(&(uParam0->f_71));
			func_45(uParam0, 16);
		}
	
		return;
	}

	func_99(uParam0, true);
	func_120(&uParam0->f_1[1], true, true);
	func_120(&uParam0->f_1[5], true, true);
	func_120(&uParam0->f_1[6], true, true);
	func_120(&uParam0->f_1[3], true, true);
	func_120(&uParam0->f_1[7], true, true);
	func_40(uParam0, 64);

	if (!func_103(uParam0, 8192) && !func_237(uParam0->f_62))
	{
		num = func_288(uParam0->f_62, -1636519629);
		animScene = func_676(uParam0, num);
	
		if (animScene != 0)
		{
			func_214(uParam0, 64);
			ANIMSCENE::RESET_ANIM_SCENE(animScene, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(animScene);
			uParam0->f_70 = 0;
		
			if (num != -1610298873)
				if (num == -842117252)
					if (uParam0->f_62 == joaat("ammo_poisonbottle"))
						uParam0->f_70 = joaat("mp006_s_cft_poisonbottle01");
					else
						uParam0->f_70 = joaat("s_cft_molotov01");
				else if (func_152(uParam0->f_62, -1588156645))
					uParam0->f_70 = func_632(func_479(uParam0->f_62, false));
				else if (func_152(uParam0->f_62, 457423347))
					uParam0->f_70 = joaat("s_cft_arrow_dynamite");
				else if (func_152(uParam0->f_62, -1846429632))
					uParam0->f_70 = joaat("s_cft_arrow_fire");
				else if (func_152(uParam0->f_62, -1067199465))
					uParam0->f_70 = joaat("s_cft_arrow_smallgame");
				else
					uParam0->f_70 = func_632(uParam0->f_62);
		
			if (uParam0->f_70 != 0)
				STREAMING::REQUEST_MODEL(uParam0->f_70, false);
		}
	
		func_129(uParam0->f_1[2], "CAMP_REC_BACK", true);
		func_126(uParam0->f_1[2], -1067771379, 0, true);
		func_130(uParam0->f_1[2], false, true, true);
		func_260(uParam0->f_1[2], false, true);
		uParam0->f_1[4] = func_259("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824, joaat("MEDIUM_TIMED_EVENT"), false);
		func_262(&uParam0->f_1[4], "INPUT_PCRAFT_EXIT");
		func_126(uParam0->f_1[4], -1067771379, 0, true);
		func_130(uParam0->f_1[4], false, true, true);
		func_261(uParam0->f_1[4], 19, true, true);
		func_261(uParam0->f_1[4], 20, true, true);
		func_261(uParam0->f_1[4], 13, true, true);
		func_261(uParam0->f_1[2], 13, true, true);
	
		if (func_95(uParam0->f_1[2]))
			func_126(uParam0->f_1[2], -1067771379, 0, true);
	
		uParam0->f_28 = 0;
		func_45(uParam0, 12);
	}
	else
	{
		func_45(uParam0, 11);
	}

	return;
}

BOOL func_668(int iParam0, int iParam1, BOOL bParam2) // Position - 0x19EB2 Hash - 0x312C05AC ^0xFB549D9B
{
	int num;

	if (bParam2 && !func_95(iParam0))
		return false;

	num = func_231(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3, iParam1);
}

void func_669(var uParam0, BOOL bParam1) // Position - 0x19EE7 Hash - 0x6787FEFE ^0x7C3674EE
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

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
	{
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant");
		num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");
		flag = false;
	
		if (uParam0->f_63 == -214678071 || uParam0->f_63 == joaat("cost_crafting_grill"))
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
				unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, func_288(uParam0->f_62, 1697966752), 0) };
			
				if (func_612(unk, &num3, &num4, 0))
				{
					if (num4 > 0)
					{
						uParam0->f_63 = -214678071;
						uParam0->f_62 = func_698(0, num3);
						flag = true;
					}
				
					func_614(num3);
				}
			}
			else
			{
				unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, func_288(uParam0->f_62, 1697966752), 0) };
			
				if (func_612(unk, &num3, &num4, 0))
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
							hash2 = func_698(i, num3);
						
							if (func_152(hash2, hash))
							{
								uParam0->f_63 = joaat("cost_crafting_grill");
								uParam0->f_62 = hash2;
								flag = true;
								break;
							}
						}
					}
				
					func_614(num3);
				}
			}
		}
		else
		{
			acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_62);
			outData.f_4 = 15;
			outData.f_36 = 10;
		
			while (outData.f_2 != joaat("cost_type_craft") || outData == -489628648 || outData == -2141192156 || !Global_1913634.f_1579 && func_917(uParam0->f_62, outData, true) && num5 < acquireCostsCount)
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
			
				ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_62, num, &outData);
			}
		
			uParam0->f_63 = outData;
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eCost", uParam0->f_63);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eOutputItem", uParam0->f_62);
		num6 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iIndex");
	
		if (num6 >= 0 && num6 < Global_1913634)
			hash3 = Global_1913634[num6 /*9*/].f_8;
	
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant", num);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (num + 1) - hash3);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
	
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_923(uParam0->f_62));
		func_910(uParam0, -1, func_414(), uParam0->f_58, false, flag, false);
		func_663(uParam0, uParam0->f_62, uParam0->f_63);
	}

	return;
}

void func_670(var uParam0, BOOL bParam1) // Position - 0x1A24C Hash - 0x20C736CE ^0xF419A615
{
	int num;

	if (bParam1)
		if (func_103(uParam0, 32768))
			func_214(uParam0, 32768);
		else
			func_40(uParam0, 32768);

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", func_103(uParam0, 32768));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", !func_103(uParam0, 32768));

	if (!func_103(uParam0, 32768))
	{
		if (func_95(uParam0->f_1[6]))
			func_129(uParam0->f_1[6], "INFO", true);
	
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_924(uParam0);
	}
	else
	{
		if (func_95(uParam0->f_1[6]))
			func_129(uParam0->f_1[6], "INGREDIENTS", true);
	
		func_925(uParam0);
	}

	if (uParam0->f_63 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants") <= 1 && func_103(uParam0, 32768))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				num = func_218(uParam0->f_62, uParam0->f_63, func_414(), false);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num));
			}
		}
	}

	return;
}

void func_671(var uParam0) // Position - 0x1A385 Hash - 0x52B53C70 ^0x9B623823
{
	if (func_103(uParam0, 2))
		return;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_926(uParam0);
	func_662(uParam0);
	func_924(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", false);
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	func_663(uParam0, 0, 0);
	func_45(uParam0, 9);
	return;
}

void func_672(var uParam0, var uParam1) // Position - 0x1A3E4 Hash - 0x1003DF0E ^0x1B76BC65
{
	func_662(uParam0);
	func_924(uParam0);
	func_913(uParam0, &(uParam1->f_3));
	return;
}

void func_673(var uParam0) // Position - 0x1A402 Hash - 0xA97CE04D ^0xF99DFED3
{
	int num;
	Hash modelHash;
	Hash modelHash2;

	num = func_288(uParam0->f_62, -1636519629);

	if (num == 414472632)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			modelHash = func_927(uParam0->f_62);
		
			if (modelHash != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(modelHash, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_49);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_49, "pl_craft", true);
	}
	else if (num == -1136843638)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "arrow" /*ARROW*/, uParam0->f_66, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_51);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_51, "pl_craft", true);
	}
	else if (num == 786205940)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_52, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_52);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_52, "pl_craft", true);
	}
	else if (num == -715814988)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "player", Global_33, 0);
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			modelHash2 = func_927(uParam0->f_62);
		
			if (modelHash2 != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(modelHash2, Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), func_928(uParam0->f_62), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "bullet" /*Bullet*/, uParam0->f_64, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_50);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_50, "pl_craft", true);
	}
	else if (num == -732326901)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_34, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_53, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_53);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_53, "pl_craft", true);
	}
	else if (num == -1141771998)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_tomahawk"), 1, Global_34, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_54);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (num == 364689687)
	{
		uParam0->f_43 = 250;
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("weapon_thrown_throwing_knives"), 1, Global_34, true, 1065353216);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
		{
			uParam0->f_68 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_34, true, NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_68, false, false);
		}
	
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "RAG", uParam0->f_68, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_55);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_55, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (num == -842117252)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_56, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_56);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_56, "pl_craft", true);
	}
	else if (num == -1610298873)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_57, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_57);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_57, "pl_craft", true);
	}
	else
	{
		uParam0->f_43 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_929(uParam0->f_62), func_930(uParam0->f_62)) * 1000f);
		func_29(&(uParam0->f_71));
		TASK::TASK_PLAY_ANIM(Global_33, func_929(uParam0->f_62), func_930(uParam0->f_62), 1090519040, -1056964608, -1, 67108880, 0, false, 4096, false, "Satchel_Only_filter", false);
	}

	return;
}

void func_674(var uParam0, BOOL bParam1, var uParam2) // Position - 0x1A879 Hash - 0x52322DA2 ^0x387413C5
{
	int i;
	int j;

	for (i = 0; i < uParam0->f_1; i = i + 1)
	{
		if (func_95(uParam0->f_1[i]))
		{
			for (j = 0; j < *uParam2; j = j + 1)
			{
				if (func_95(uParam2->[j]))
				{
					if (uParam0->f_1[i] == uParam2->[j])
					{
					}
				}
			}
		
			func_130(uParam0->f_1[i], bParam1, true, true);
		}
	}

	return;
}

BOOL func_675(int iParam0) // Position - 0x1A8EA Hash - 0x1DB3839 ^0xDB3801F4
{
	if (iParam0 == -715814988 || iParam0 == -1136843638 || iParam0 == -732326901 || iParam0 == 786205940 || iParam0 == -1141771998 || iParam0 == 364689687 || iParam0 == 414472632 || iParam0 == -842117252 || iParam0 == -1610298873)
		return true;

	return false;
}

AnimScene func_676(var uParam0, int iParam1) // Position - 0x1A972 Hash - 0x10E222E7 ^0xE426B9D6
{
	switch (iParam1)
	{
		case -1610298873:
			return uParam0->f_57;
	
		case -1141771998:
			return uParam0->f_54;
	
		case -1136843638:
			return uParam0->f_51;
	
		case -842117252:
			return uParam0->f_56;
	
		case -732326901:
			return uParam0->f_53;
	
		case -715814988:
			return uParam0->f_50;
	
		case 364689687:
			return uParam0->f_55;
	
		case 414472632:
			return uParam0->f_49;
	
		case 786205940:
			return uParam0->f_52;
	
		default:
		
	}

	return 0;
}

BOOL func_677(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1A9F8 Hash - 0xD005D684 ^0xD005D684
{
	var unk;
	var unk2;
	var unk3;

	return func_918(hParam0, hParam1, &unk, &unk2, &unk3, bParam2, bParam3, bParam4);
}

void func_678(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1AA14 Hash - 0xC93993C6 ^0x3C8F9ED3
{
	AnimScene animScene;

	uParam0->f_45 = 0;
	func_93(&(uParam0->f_66), &(uParam0->f_67));
	func_93(&(uParam0->f_64), &(uParam0->f_65));
	animScene = func_676(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(animScene, "bStopLoop", true, false);
	func_130(uParam0->f_1[2], true, true, true);
	func_130(uParam0->f_1[4], true, true, true);
	func_260(uParam0->f_1[2], false, true);
	func_260(uParam0->f_1[4], true, true);
	func_422(uParam0->f_1[1], true);
	func_120(&uParam0->f_1[1], true, true);
	uParam0->f_1[1] = func_259("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	func_261(uParam0->f_1[1], 11, true, true);
	func_261(uParam0->f_1[1], 19, true, true);
	func_126(uParam0->f_1[1], -1067771379, 0, true);
	func_130(uParam0->f_1[1], bParam2, true, true);
	func_45(uParam0, 13);
	return;
}

Player func_679() // Position - 0x1AB15 Hash - 0xC931529D ^0x9BAFB5AF
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
		return Global_1144526[gangLeader /*83*/].f_38.f_28.f_2;

	return 255;
}

BOOL func_680(BOOL bParam0) // Position - 0x1AB47 Hash - 0x337008A1 ^0x237E825
{
	if (bParam0)
		if (Global_1142424.f_2050 == 0 || MISC::GET_SYSTEM_TIME() - Global_1142424.f_2050 >= 1000)
			return true;
		else
			return false;

	if (Global_1142424.f_2050 == 0)
		Global_1142424.f_2050 = MISC::GET_SYSTEM_TIME();
	else if (MISC::GET_SYSTEM_TIME() - Global_1142424.f_2050 >= 1000)
		Global_1142424.f_2050 = MISC::GET_SYSTEM_TIME();
	else
		return false;

	return true;
}

void func_681(BOOL bParam0) // Position - 0x1ABBF Hash - 0xA350DB9E ^0xFA414598
{
	var unk;
	int num;

	if (bParam0)
		num = 14;
	else
		num = 15;

	func_932(num, unk, func_931(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
	return;
}

void func_682(var uParam0) // Position - 0x1ABF2 Hash - 0x42939312 ^0xADF284F1
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (gangLeader == PLAYER::PLAYER_ID())
	{
		func_933(gangLeader, true);
		func_934(gangLeader, uParam0);
		func_936(func_935(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_937(uParam0);
	}

	return;
}

void func_683(Hash hParam0, int iParam1) // Position - 0x1AC3B Hash - 0x31149EC0 ^0x2BE47449
{
	var statId;

	statId = { func_938(hParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);

	if (!func_152(hParam0, 1714518167))
	{
		statId = { func_939(hParam0) };
	
		if (statId.f_1 != 0)
			STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	}

	return;
}

void func_684(var uParam0) // Position - 0x1AC81 Hash - 0xAC9AC15F ^0x57C1DD49
{
	var requestId;
	var unk4;
	int num;
	BOOL flag;
	int num2;
	var unk7;

	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(uParam0->f_24, &requestId))
	{
		unk4 = { func_940(Global_1295666) };
		num = 0;
		flag = func_152(uParam0->f_62, -2011345500);
	
		if (!flag)
		{
			unk7 = 15;
		
			if (func_439(uParam0->f_62, uParam0->f_63, &unk7, &num2, true, false) && num2 > 0)
				num = unk7[0 /*2*/];
		}
	
		TELEMETRY::TELEMETRY_CAMP_DONATE(&requestId, num, unk4.f_2, 0, 1, joaat("SLOTID_SATCHEL"), joaat("stew_pot"), uParam0->f_62, flag);
	}

	return;
}

void func_685(int iParam0) // Position - 0x1AD03 Hash - 0xF3562505 ^0x47CA22E2
{
	if (Global_1940085.f_105.f_2 >= iParam0)
		return;

	Global_1940085.f_105.f_2 = iParam0;
	return;
}

int func_686(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AD25 Hash - 0x8B4B8FA8 ^0x8B4B8FA8
{
	int num;
	var unk;
	Hash hash;
	Hash hash2;
	int num2;
	var unk33;
	int num3;
	int i;
	int num4;
	int num5;
	int num6;

	if (!func_107(false))
		return 0;
	else if (func_108())
		return 0;

	num = -1;

	if (Global_1915656.f_20638)
		num = Global_1915656.f_20241;

	unk = 15;

	if (!func_941(hParam0, 1, hParam1, &hash, &unk33, bParam3, false, false))
	{
		hash2 = hash;
		return 0;
	}

	if (func_439(hParam0, hParam1, &unk, &num2, true, false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash2 = unk[i /*2*/];
			num3 = func_437(num, hash2);
		
			if (num3 != 0)
				bParam3 = false;
		
			if (func_85(hash2, 0))
			{
				if (hash2 == joaat("currency_cash"))
				{
					func_942(unk[i /*2*/].f_1, 0, 0, bParam2, false);
				}
				else if (bParam3)
				{
					if (func_244(hash2) || func_440(hash2))
					{
						if (!func_23(hash2, unk[i /*2*/].f_1))
							num4 = func_943(7, hash2, unk[i /*2*/].f_1);
					
						func_148(hash2, num4, 562618531, false, false);
						unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - num4;
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (!func_23(hash2, unk[i /*2*/].f_1))
								func_944(hash2, unk[i /*2*/].f_1);
						
							if (func_23(hash2, unk[i /*2*/].f_1))
								func_74(hash2, unk[i /*2*/].f_1, bParam2, -142743235);
						}
					}
					else
					{
						if (func_444(hash2) > 0)
						{
							func_945(hash2);
							unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - 1;
						}
					
						if (unk[i /*2*/].f_1 > 0)
						{
							if (func_443(7, hash2) > 0)
							{
								func_946(7, hash2, unk[i /*2*/].f_1);
								unk[i /*2*/].f_1 = unk[i /*2*/].f_1 - func_946(7, hash2, unk[i /*2*/].f_1);
							}
						}
					
						if (unk[i /*2*/].f_1 > 0)
							func_74(hash2, unk[i /*2*/].f_1, bParam2, 562618531);
					}
				}
				else if (num3 == 0)
				{
					if (func_244(hash2) || func_440(hash2))
						if (!func_23(hash2, unk[i /*2*/].f_1))
							func_944(hash2, unk[i /*2*/].f_1);
				
					func_74(hash2, unk[i /*2*/].f_1, bParam2, 562618531);
				}
				else
				{
					func_947(hash2, num3, unk[i /*2*/].f_1, 562618531);
				}
			
				num5 = func_553(hash2);
			
				if (func_817(num5))
				{
					num6 = func_948(num5);
					func_110(func_109(joaat("used_in_recipe"), num6), unk[i /*2*/].f_1);
				}
			}
		}
	
		return 1;
	}

	return 0;
}

BOOL func_687(Hash hParam0, BOOL bParam1) // Position - 0x1AFCB Hash - 0x148943C8 ^0x2BF2CC5F
{
	var unk;
	var unk6;
	var unk10;
	var unk11;
	var unk16;

	if (!func_85(hParam0, 0))
		return false;

	if (!func_949(hParam0, 856287005, &unk10, &unk6, &unk, true, 0))
		return false;

	unk11 = { func_950() };
	unk11.f_4 = unk10;

	if (func_776(hParam0, &unk16, &unk11, 1, 752097756, false))
	{
		if (bParam1)
			!func_951(hParam0, 1);
	
		if (func_952(hParam0))
			func_687(func_953(hParam0), true);
	
		func_954();
		return true;
	}

	return false;
}

int func_688(Hash hParam0, int iParam1, int iParam2) // Position - 0x1B04E Hash - 0x27DE9B28 ^0x198DA06
{
	var unk;
	var unk6;

	if (!func_955(hParam0, iParam1))
		return 0;

	unk.f_4 = func_696(iParam1);
	unk = { func_335(false) };

	if (!func_776(hParam0, &unk6, &unk, iParam2, 752097756, true))
		return 0;

	return 1;
}

BOOL func_689(var uParam0, Hash hParam1) // Position - 0x1B094 Hash - 0x836526C3 ^0x836526C3
{
	if (!func_103(uParam0, 4))
		return false;

	if (func_237(hParam1) && func_634())
		return true;

	return false;
}

Hash func_690(int iParam0) // Position - 0x1B0C2 Hash - 0xED5EF93F ^0xA4FACA91
{
	switch (iParam0)
	{
		case 0:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH_CORE");
	
		case 1:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_STAMINA_CORE");
	
		case 2:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_DEADEYE_CORE");
	
		default:
		
	}

	return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH_CORE");
}

Hash func_691(int iParam0) // Position - 0x1B101 Hash - 0xED5EF93F ^0x1D36C138
{
	switch (iParam0)
	{
		case 0:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH");
	
		case 1:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_STAMINA");
	
		case 2:
			return joaat("HUD_CTX_ITEM_CONSUMPTION_DEADEYE");
	
		default:
		
	}

	return joaat("HUD_CTX_ITEM_CONSUMPTION_HEALTH");
}

BOOL func_692(Hash hParam0) // Position - 0x1B140 Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

void func_693(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x1B158 Hash - 0x7EFAC478 ^0x4E4217E0
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

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
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
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_165(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_694(int iParam0) // Position - 0x1B32E Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_695() // Position - 0x1B351 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_104() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_696(int iParam0) // Position - 0x1B36C Hash - 0xF00685F3 ^0x39EB3A7D
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

void func_697(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x1B39D Hash - 0x7EFAC478 ^0x4E4217E0
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
		unk13[i] = 1f;
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
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_165(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

Hash func_698(int iParam0, int iParam1) // Position - 0x1B573 Hash - 0x3644D28E ^0x6DB2088F
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

Hash func_699(Hash hParam0) // Position - 0x1B5B6 Hash - 0x5FB59AC3 ^0xF8EA047B
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

int func_700(Hash hParam0) // Position - 0x1B928 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_152(hParam0, 1064293907))
		return 2;
	else if (func_152(hParam0, -1218707194))
		return 1;
	else if (func_152(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_701(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1B96D Hash - 0x97BDF54F ^0xE45E1733
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_85(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

BOOL func_702(int iParam0) // Position - 0x1B9C1 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_336(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

BOOL func_703(Ped pedParam0) // Position - 0x1B9F9 Hash - 0xF5A7D53A ^0xBECE42FF
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

BOOL func_704(Hash hParam0) // Position - 0x1BA5C Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_152(hParam0, 1279601681);
}

BOOL func_705(Hash hParam0, Hash hParam1) // Position - 0x1BA6F Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_85(hParam0, 0))
		return false;

	if (func_458(hParam0) || func_152(hParam0, 1077060302))
		return func_713(func_459(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

int func_706(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1BABB Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_434(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

BOOL func_707(Hash hParam0, Any* panParam1) // Position - 0x1BB4F Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_956(panParam1->f_8, hParam0, num, 2048) || func_956(panParam1->f_8, hParam0, num, 32768) || func_956(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_956(panParam1->f_8, hParam0, num, 4) || func_956(panParam1->f_8, hParam0, num, 256) || func_956(panParam1->f_8, hParam0, num, 65536) || func_956(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_956(panParam1->f_8, hParam0, num, 1) || func_956(panParam1->f_8, hParam0, num, 8) || func_956(panParam1->f_8, hParam0, num, 65536) || func_956(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_956(panParam1->f_8, hParam0, num, 1) || func_956(panParam1->f_8, hParam0, num, 16) || func_956(panParam1->f_8, hParam0, num, 2) || func_956(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_956(panParam1->f_8, hParam0, num, 8) || func_956(panParam1->f_8, hParam0, num, 4096) || func_956(panParam1->f_8, hParam0, num, 256) || func_956(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_708(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1BD25 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_709(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x1BD3C Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_957(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_957(iParam1, 2, 0, 0);
	return -1;
}

int func_710(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x1BD85 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_957(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_711(int* piParam0) // Position - 0x1BDA1 Hash - 0xF95E1119 ^0x322602AD
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_958(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_712(Any anParam0) // Position - 0x1BDD3 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 || anParam0->f_1 == -889271554 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_713(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1BE19 Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_692(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_718(hParam0, hParam1);

	return true;
}

BOOL func_714(Hash hParam0, var uParam1) // Position - 0x1BE51 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_959(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_715(Hash hParam0, var uParam1) // Position - 0x1BE68 Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_960(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_716() // Position - 0x1BE80 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22477;
}

BOOL func_717(int iParam0) // Position - 0x1BE8F Hash - 0x16518DC6 ^0xD6363784
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_279(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_718(Hash hParam0, Hash hParam1) // Position - 0x1BECA Hash - 0x86D562BB ^0xB258F193
{
	var outData;
	int outUnk;
	Hash unlockHash;
	int num;
	int i;
	int j;

	outData = 10;
	outData.f_1.f_4 = 15;
	outData.f_1.f_36 = 10;
	outData.f_1.f_47.f_4 = 15;
	outData.f_1.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(hParam0, &outData, &outUnk, 10) || outUnk == 0)
		return false;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == hParam1)
		{
			num = outData[i /*47*/].f_35;
		
			for (j = 0; j < num; j = j + 1)
			{
				unlockHash = outData[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_719(Hash hParam0, Hash hParam1) // Position - 0x1C015 Hash - 0xB71B0B73 ^0x8A8F70C7
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_706(hParam0, -570078785, false, true);
		num == 0;
	
		if (!func_436(num))
		{
			if (Global_1915656.f_20644)
				func_962(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_961(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_706(hParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_435(num2))
		{
			if (Global_1915656.f_20644)
				func_962("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_217(hParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_720(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C0CF Hash - 0x4801AC33 ^0x977B4A54
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4);
}

BOOL func_721(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C0FB Hash - 0x79BD6891 ^0x6EEFD0DD
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_722(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C130 Hash - 0x50B8B41C ^0x57F7DD8D
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_723(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C16E Hash - 0x95B6482C ^0xD86BD1B3
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_724(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C1B5 Hash - 0xA71C5094 ^0xD7710400
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_725(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C205 Hash - 0xA70AFF4C ^0x87A14E1A
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_726(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C25E Hash - 0x9D241613 ^0x5206EC63
{
	int num;

	num = 7;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_727(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C2C0 Hash - 0xD3D82136 ^0x2BD9FD92
{
	int num;

	num = 8;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_728(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C32C Hash - 0xB89E9756 ^0xC7E4B9B7
{
	int num;

	num = 9;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_729(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C3A1 Hash - 0xAF93960A ^0x4FD34C17
{
	int num;

	num = 10;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_730(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C41F Hash - 0xA7BE52A0 ^0x83098350
{
	int num;

	num = 11;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_731(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C4A6 Hash - 0x78A25486 ^0xE1D6F33B
{
	int num;

	num = 12;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_732(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C536 Hash - 0x41DDF9C2 ^0x5DB4EE85
{
	int num;

	num = 13;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_733(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C5CF Hash - 0x69651352 ^0x3F210A96
{
	int num;

	num = 14;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_734(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x1C671 Hash - 0xD2B02045 ^0xF05687F5
{
	int num;

	num = 15;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_963(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_735(Hash hParam0) // Position - 0x1C71C Hash - 0xA7C375F ^0xA7C375F
{
	Hash hash;

	hash = func_284(hParam0);

	if (func_432(hash, 2))
		return true;

	return false;
}

BOOL func_736(int* piParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x1C73B Hash - 0x48FFE57F ^0x48FFE57F
{
	int num;
	var unk;
	var unk2;
	int i;
	var unk4;
	Hash hash;
	var unk85;
	var unk89;

	if (!func_432(hParam1, 2))
		return 0;

	unk2 = 1;
	unk4 = 16;
	func_964(hParam1, &unk2, &unk, &unk4, &num);

	if (func_16(iParam4, 8) && !func_965(hParam1, hParam2, iParam3))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk4[i /*5*/].f_1 == joaat("SLOTID_NONE"))
		{
			hash = unk4[i /*5*/];
		
			if (func_16(iParam4, 4))
				if (!func_739(piParam0, hash, unk85, unk89, hParam2, iParam3 * unk4[i /*5*/].f_4, true, true))
					return 0;
		}
	}

	return 1;
}

BOOL func_737(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x1C7E6 Hash - 0x7947EF49 ^0x975F946
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_393(uParam1, &unk, true, false, -1))
		return false;

	if (!func_622(hParam0, func_165(unk.f_4), hParam5))
		return false;

	return true;
}

BOOL func_738(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x1C837 Hash - 0xAE4FAB93 ^0xAE4FAB93
{
	if (func_16(iParam2, 1))
		if (!func_966(hParam0))
			return false;

	if (func_16(iParam2, 2))
		if (func_917(hParam0, hParam1, true))
			return false;

	return true;
}

BOOL func_739(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1C872 Hash - 0xFE04F182 ^0x2B0693EE
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2))
		return false;

	unk.f_4 = hParam6;
	unk = { uParam2 };
	num = func_334(hParam1, uParam2, hParam6, true, !bParam10, false);
	num2 = func_447(hParam1, &unk, !bParam10, true);

	if (bParam9)
		num3 = 1;
	else
		func_376(hParam1, hParam7, &num3, false);

	num4 = func_967(piParam0, hParam1) * num3;
	num4 > 0;

	if (num2 >= 0)
	{
		num5 = num2 - (num + num4);
		num6 = iParam8 * num3;
	
		if (num6 > num2)
			num6 = num2;
	
		if (num5 <= 0)
			return false;
		else if (num6 - num5 >= num3)
			return false;
	}

	return true;
}

BOOL func_740(int* piParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x1C929 Hash - 0xB3A38359 ^0xDDBCD7C8
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;
	var unk3;

	if (func_968(hParam1, true) && !func_969(hParam1, true))
	{
		if (Global_1915656.f_20644)
			func_962(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
	
		return 0;
	}

	if (hParam2 == -570078785)
	{
		num = func_448(hParam1, -570078785, true, false, true, 0);
		num == 0;
		num2 = num * iParam3;
	
		if (!func_436(num2 + func_970(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_962(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", num2 / 100));
		
			return 0;
		}
	}
	else if (hParam2 == -915411861)
	{
		num3 = func_448(hParam1, -915411861, true, false, true, 0);
		num3 == 0;
		num4 = num3 * iParam3;
	
		if (!func_435(num4 + func_970(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_962("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam2 == 997808187)
	{
		return 1;
	}

	if (func_432(func_284(hParam1), 2))
		if (!func_971(func_284(hParam1), iParam3, hParam2, &unk, true))
			return 0;
	else if (func_85(hParam1, 0))
		if (!func_941(hParam1, iParam3, hParam2, &unk, &unk3, false, true, false))
			return 0;

	return 1;
}

BOOL func_741(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CA71 Hash - 0x6C19C4AE ^0xD83B353E
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4, iParam5);
}

BOOL func_742(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CA9F Hash - 0x8B27BE2E ^0xAADA8B60
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_743(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CAD6 Hash - 0xD4CDEBBB ^0xBF2724AE
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_744(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CB16 Hash - 0xD685F3D ^0x43E0AB59
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_745(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CB5F Hash - 0xDF565364 ^0x91E17214
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_746(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CBB1 Hash - 0x34514D80 ^0x4B6EF0F8
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_747(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CC0C Hash - 0xCAE539AC ^0xECCA6C83
{
	int num;

	num = 7;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_748(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CC70 Hash - 0x56AD96CC ^0x971EFE86
{
	int num;

	num = 8;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_749(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CCDE Hash - 0x1B3CBC5E ^0x508721F5
{
	int num;

	num = 9;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_750(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CD55 Hash - 0xA29DCDA ^0xEDD5D2BE
{
	int num;

	num = 10;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_751(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CDD5 Hash - 0x4B3D6141 ^0xF7C4BBFB
{
	int num;

	num = 11;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_752(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CE5E Hash - 0xCE26321D ^0xE0369832
{
	int num;

	num = 12;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_753(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CEF0 Hash - 0x72FA62DD ^0x50977A79
{
	int num;

	num = 13;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_754(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1CF8B Hash - 0xCE2A63CA ^0x257C4997
{
	int num;

	num = 14;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_755(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x1D02F Hash - 0x9E474A42 ^0x2D85E611
{
	int num;

	num = 15;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_972(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

Hash func_756(Hash hParam0, BOOL bParam1) // Position - 0x1D0DC Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_432(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

BOOL func_757(int iParam0, int iParam1) // Position - 0x1D115 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_973(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_974())
		return func_973(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_973(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

BOOL func_758(int iParam0, Any anParam1, int iParam2, var uParam3, BOOL bParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1D189 Hash - 0x72C1A759 ^0xD848AFAA
{
	BOOL flag;
	int num;
	var unk;
	var unk2;

	if (iParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
		return 1;

	if (bParam7)
	{
		flag = GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		bParam7 = flag;
	}

	POSSE::_0xC08AFF658B2E51DA(&num);

	if (num != 0)
		func_975(iParam2, -372840566);

	SECURE_STORE(&unk, iParam0);

	if (!bParam7)
		if (!NETWORK::_0x64A36BA85CE01A81(&unk, &(uParam3->f_1), &(iParam2->f_1), anParam1))
			return 0;
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&unk, &(iParam2->f_1), anParam1))
		return 0;

	unk2.f_1 = 11;
	unk2.f_16 = 255;
	unk2.f_13 = bParam4;
	unk2.f_16 = iParam5;
	unk2.f_14 = iParam6;
	unk2 = { *iParam2 };
	func_976(anParam1, iParam0, unk2);
	return 1;
}

BOOL func_759(int iParam0) // Position - 0x1D26A Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_973(&(Global_1956875.f_1565), iParam0, 1);
}

int func_760(int iParam0) // Position - 0x1D280 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_977(func_759(iParam0));
}

void func_761(var uParam0) // Position - 0x1D292 Hash - 0x333BC7D4 ^0xCB2892E1
{
	func_471(uParam0, joaat("MULTIPLAYER_GAME"));

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_471(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_471(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_762(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16) // Position - 0x1D2CA Hash - 0x15598973 ^0x15598973
{
	int i;
	var unk;

	if (!func_712(anParam0))
		return;

	if (Global_1292143.f_2539 < 20)
	{
		Global_1292143.f_2539 = Global_1292143.f_2539 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2539.f_1[i /*22*/] = { Global_1292143.f_2539.f_1[i + 1 /*22*/] };
		}
	}

	unk.f_7.f_3.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1292143.f_2539.f_1[Global_1292143.f_2539 - 1 /*22*/] = { unk };
	return;
}

BOOL func_763(Hash hParam0) // Position - 0x1D380 Hash - 0xCD05DF70 ^0x86E370D6
{
	var unk;

	if (func_104() != -1)
		return false;

	if (func_367(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_219(hParam0, &unk, 1, false, false, -1, false);

	return func_23(hParam0, 1);
}

void func_764(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x1D3C5 Hash - 0x4ACBF8C5 ^0x4A0F082E
{
	Hash weaponHash;

	if (func_86(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_480(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_773(weaponHash))
	{
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_33, weaponHash, 0, false) && func_89(hParam0, false, false, false) == 0)
		{
			if (func_104() == -1)
				func_481(weaponHash);
		
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_190(hParam0, iParam1, false, 0, 0, false, false);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_765(Hash hParam0, var uParam1) // Position - 0x1D46F Hash - 0xE8F09939 ^0xD0796490
{
	if (func_152(hParam0, 58855631))
		func_376(hParam0, -915411861, uParam1, true);

	return;
}

int func_766(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D494 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_486(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_71(bParam1), hParam0, bParam3);
}

BOOL func_767() // Position - 0x1D4C7 Hash - 0xB8876D40 ^0xFAD3D5CE
{
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !func_978(Global_33, 1369124074) && !func_978(Global_33, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		return true;

	return false;
}

BOOL func_768(int iParam0) // Position - 0x1D52C Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_769(int iParam0) // Position - 0x1D53F Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_770(int iParam0) // Position - 0x1D569 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_38.f_3651[num2];
	MISC::SET_BIT(&address, offset);
	Global_38.f_3651[num2] = address;
	return;
}

void func_771(int iParam0) // Position - 0x1D5A3 Hash - 0xB25DF9C2 ^0xF6204414
{
	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (func_987() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_988("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_139(677, false);
			break;
	
		case 3:
			if (func_987() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_988("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_139(678, false);
			break;
	
		case 4:
			if (func_987() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_988("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_139(679, false);
			break;
	
		case 5:
			if (func_987() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_988("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, 8000, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_139(680, false);
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
			func_979(true);
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
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_980(1);
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_980(2);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_980(3);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
	
		case 24:
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
			func_981(true);
			break;
	
		case 33:
			func_982(true);
			break;
	
		case 34:
			func_983(true);
			break;
	
		case 35:
			break;
	
		case 36:
			func_984(false);
			break;
	
		case 37:
			func_985(false);
			break;
	
		case 38:
			func_986(false);
			break;
	
		case 39:
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
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1940199.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 45:
			break;
	
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 47:
			if (func_104() == -1)
				if (!func_23(1013902307, 1))
					func_484(1013902307, 1, 752097756);
			break;
	
		case 48:
			if (func_104() == -1)
				if (!func_23(786809402, 1))
					func_484(786809402, 1, 752097756);
			break;
	
		case 49:
			if (func_104() == -1)
			{
				if (!func_23(1013902307, 1))
					func_484(1013902307, 1, 752097756);
			
				if (!func_23(142640135, 1))
					func_484(142640135, 1, 752097756);
			}
			break;
	
		case 50:
			if (func_104() == -1)
			{
				if (!func_23(786809402, 1))
					func_484(786809402, 1, 752097756);
			
				if (!func_23(-518019409, 1))
					func_484(-518019409, 1, 752097756);
			}
			break;
	
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_772(Hash hParam0) // Position - 0x1DB1F Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_773(Hash hParam0) // Position - 0x1DB47 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

void func_774(Hash hParam0, int iParam1) // Position - 0x1DB6F Hash - 0xC6BCDC43 ^0xB7300BA8
{
	int ammo;
	int ammo2;
	int ammo3;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_33, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo3 = func_424(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, hParam0, ammo3);
	
		if (WEAPON::GET_MAX_AMMO(Global_33, &ammo2, hParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, hParam0) > ammo2)
			WEAPON::SET_PED_AMMO(Global_33, hParam0, ammo2);
	}

	return;
}

BOOL func_775(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x1DBE1 Hash - 0x8DB88FC7 ^0xD6CAC1F
{
	int num;
	var guid2;
	var guid1;

	if (!func_85(hParam0, 0))
		return 0;

	num = func_206(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	guid2 = { func_193(hParam0, false, 0) };

	if (func_219(hParam0, &guid2, iParam1, false, false, -1, false))
		return 0;

	if (!func_107(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_71(false), &guid1, &guid2, hParam0, guid2.f_4, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_776(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x1DC5D Hash - 0x740B8A62 ^0x5C694353
{
	if (!func_85(hParam0, 0))
		return 0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_219(hParam0, panParam2, iParam3, bParam5, false, -1, false))
		return 0;

	if (!func_107(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_71(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

void func_777(Hash hParam0) // Position - 0x1DCC5 Hash - 0x708BD33E ^0xFF2E1F6D
{
	char* propertyName;
	char* propertyName2;
	int value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940199.f_6)
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

	DECORATOR::DECOR_SET_INT(Global_33, propertyName, hParam0);
	value = func_989();
	func_990(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_33, propertyName2, value);
	return;
}

int func_778(Hash hParam0) // Position - 0x1DD94 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_254(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, joaat("ammo_arrow")) <= 0)
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
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_779() // Position - 0x1DE10 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_780(Hash hParam0) // Position - 0x1DE19 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_781(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1DE2B Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_782(Hash hParam0) // Position - 0x1DE51 Hash - 0xBA04765D ^0x454D110B
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_476(49))
			{
				if (!func_476(47))
					return 149;
			
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_476(50))
			{
				if (!func_476(48))
					return 150;
			
				return 152;
			}
		}
	}

	return 153;
}

int func_783(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1DEBD Hash - 0x88B97E84 ^0x896726CB
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (func_104() == 0)
		return 0;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_23(joaat("provision_trinket_elk_antler"), 1))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_85(hash, 0) && func_152(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_784(int iParam0, const char* sParam1, int iParam2, BOOL bParam3) // Position - 0x1DF8D Hash - 0x6EA86F5A ^0x89EF3E83
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_991(iParam0, 1000);
			return;
		}
	
		sParam1 = "FEED_MONEY_EARN";
	}

	func_382(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_785(int iParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x1DFDF Hash - 0x7435A573 ^0x3E04C000
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
	
		if (func_992() || func_993())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_382(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
		num > 0;
		func_382(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, 752097756);
		func_110(func_383(joaat("CAREER_CASH")), value);
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x1E0BA Hash - 0xA17D549C ^0xB22FED65
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

Hash func_787(Hash hParam0) // Position - 0x1E191 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_922(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_788(Ped pedParam0) // Position - 0x1E1BB Hash - 0x32EB82AB ^0x786A6EFC
{
	int num;
	int pedQuality;

	num = 2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return num;

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

	return num;
}

int func_789(int iParam0) // Position - 0x1E211 Hash - 0xB8EC44B7 ^0x162CC37E
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT");
	
		case -2092697195:
			return 777641606;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT");
	
		case -2043601589:
			return 1815502722;
	
		case -2040849706:
			return -375348364;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR");
	
		case -1821314478:
			return 1135507073;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR");
	
		case -1638839614:
			return 213936563;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT");
	
		case -1434083213:
			return -1671125008;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR");
	
		case -1378208045:
			return 1586020612;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY");
	
		case -1282621313:
			return 1718756614;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case -885592109:
			return -132069363;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case -827518870:
			return -2115566177;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR");
	
		case -229670230:
			return -352805801;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case -70954328:
			return 616254818;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT");
	
		case 546758456:
			return 1491466288;
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY");
	
		case 1367447057:
			return -1886936864;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR");
	
		case 1450608653:
			return 1892902297;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT");
	
		case 1493601140:
			return -438328437;
	
		case 1527400190:
			return 1020297399;
	
		case 1543592331:
			return 1920759986;
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR");
	
		case 1705186999:
			return 897866285;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case 1758585485:
			return 1518910503;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR");
	
		case 1842740532:
			return 1683741809;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT");
	
		case 1888419655:
			return -1066678466;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR");
	
		case 2004357248:
			return 403588059;
	
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR");
	
		case 2014346813:
			return -101301217;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR");
	
		default:
		
	}

	return 0;
}

int func_790(Ped pedParam0, Hash hParam1) // Position - 0x1EC4E Hash - 0x91F3FA3F ^0xBD14110A
{
	int i;
	int num;

	if (func_994(hParam1))
	{
		num = 0;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1903838.f_113[i /*96*/].f_1 == hParam1)
				if (ENTITY::DOES_ENTITY_EXIST(Global_1290271.f_1171.f_245[i /*4*/].f_3))
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290271.f_1171.f_245[i /*4*/].f_3))
						num = num + 1;
		}
	
		return num;
	}

	return func_884(pedParam0, hParam1);
}

int func_791(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4, int iParam5) // Position - 0x1ECC4 Hash - 0x8377688 ^0x33238043
{
	var statId;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	if (func_995(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_191(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		*uParam2 = func_792(*uParam0, hParam1, *uParam2, true, iParam5);
	
		if (*uParam2 > 0)
		{
			if (func_996(hParam1))
			{
				!func_997(0, hParam1, *uParam2);
			
				if (func_998(PLAYER::PLAYER_ID(), 1, false))
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 32, true);
				else
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 32, false);
			
				*uParam2 = func_999(*uParam0, hParam1, *uParam2);
			}
		}
	
		if (*uParam2 > 0)
		{
			num = func_1000(*uParam0, hParam1);
		
			if (*uParam2 > num)
				*uParam2 = num;
		}
	
		func_194(1, false, 0);
		return 1;
	}

	return 0;
}

int func_792(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1ED98 Hash - 0xF5FF74D2 ^0xE44EB8D1
{
	Hash hash;
	ItemSet itemset;
	Ped entityFromItem;
	int i;
	int itemsetSize;
	int j;
	var unk;
	var unk97;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return iParam2;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_10 = 10;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (iParam2 == 0)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityFromItem))
		{
		}
		else
		{
			hash = func_1001(entityFromItem);
		
			if (!func_1002(hash, &unk97))
			{
				if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
				{
					if (iParam4 == 2 && ENTITY::_IS_ENTITY_FULLY_LOOTED(entityFromItem) || iParam4 == 1 && !ENTITY::_IS_ENTITY_FULLY_LOOTED(entityFromItem))
					{
					}
					else if (hash == hParam1)
					{
						if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
						{
							for (j = 0; j < 3; j = j + 1)
							{
								if (Global_1290271.f_1171.f_245[j /*4*/].f_3 == entityFromItem)
								{
									func_1003(&unk, &Global_1903838.f_113[j /*96*/]);
									break;
								}
							}
						}
					
						if (bParam3)
						{
							if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
							{
								if (Global_1915656.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(entityFromItem))
								{
									if (func_152(hash, -753854379) || func_152(hash, 173360570))
										PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), 2);
								
									STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem));
								}
							
								if (pedParam0 == PLAYER::PLAYER_PED_ID())
									func_190(hash, -1, false, true, false, false, false);
							}
						
							ENTITY::_DELETE_CARRIABLE(&entityFromItem);
						}
						else
						{
							PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
						}
					
						iParam2 = iParam2 - 1;
					}
				}
			}
		
			if (hash == hParam1)
			{
				if (pedParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
				{
					j = 0;
				
					if (j < 3)
						if (Global_1290271.f_1171.f_245[j /*4*/].f_3 == entityFromItem)
							func_1003(&unk, &Global_1903838.f_113[j /*96*/]);
						else
							j = j + 1;
				}
			
				if (bParam3)
				{
					if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
					{
						if (Global_1915656.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(entityFromItem))
						{
							if (func_152(hash, -753854379) || func_152(hash, 173360570))
								PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), 2);
						
							STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem));
						}
					
						if (pedParam0 == PLAYER::PLAYER_PED_ID())
							func_190(hash, -1, false, true, false, false, false);
					}
				
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
				else
				{
					PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

void func_793(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1EF4A Hash - 0xB1DBEA4A ^0xB1DBEA4A
{
	int i;
	int slot;

	if (Global_1915656.f_20637)
	{
		if (Global_1915656.f_20241 == 29)
		{
			if (func_248(hParam0))
			{
				slot = 0;
			
				if (bParam2)
				{
					switch (func_1004(hParam0))
					{
						case 2:
							slot = 1;
							break;
					
						case 4:
							slot = 3;
							break;
					
						case 8:
							slot = 4;
							break;
					}
				}
			
				for (i = 0; i <= iParam1 - 1; i = i + 1)
				{
					STATS::_STAT_DONATE_INCREMENT_ITEM(func_1005(hParam0), slot, func_152(hParam0, 1064293907), 0);
				}
			}
		}
	}

	return;
}

BOOL func_794(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1EFD6 Hash - 0xD12DD6C0 ^0x9850E73C
{
	var statId;

	statId = { func_191(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);

	func_1006(hParam0, iParam1);
	return func_1007(hParam0, iParam1, bParam2, hParam3);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_795(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x1F00D Hash - 0x8E6DB586 ^0xC3CF8308
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
	
		if (func_1008(&anParam0->[i /*6*/]))
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
				anParam0->[i /*6*/] = { func_595() };
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

int func_796() // Position - 0x1F124 Hash - 0x9F572D68 ^0xCC7CA376
{
	return 1037647863;
}

int func_797() // Position - 0x1F131 Hash - 0x9F572D68 ^0x8E00D7CB
{
	return 1037746167;
}

int func_798() // Position - 0x1F13E Hash - 0x9F572D68 ^0x32E0A00A
{
	return 1035451607;
}

Entity func_799(Ped pedParam0) // Position - 0x1F14B Hash - 0x3D354C79 ^0x6A3F9034
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

int func_800(var uParam0, var uParam1) // Position - 0x1F1AB Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_1009(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_801(int iParam0) // Position - 0x1F1D7 Hash - 0x7569022C ^0xD5B8EAC7
{
	int num;
	int num2;

	num = -1;

	if (func_1010(&num2, iParam0))
		num = func_1011() - DATAFILE::_0xE13634BB6BAF0734(num2, num2.f_1) - 1;

	return num;
}

int func_802(int iParam0) // Position - 0x1F202 Hash - 0xEEAE9B95 ^0xC5F953AD
{
	if (iParam0 == -1)
		return -1;

	return Global_1245174[iParam0 /*5*/].f_1;
}

int func_803(int iParam0) // Position - 0x1F21E Hash - 0xB8EC44B7 ^0xE8991785
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

int func_804(int iParam0) // Position - 0x1F3D3 Hash - 0x268EF4F6 ^0x268EF4F6
{
	int num;

	num = func_1013(0, func_1012() - 1, &iParam0);

	if (num == -1)
		return -1;

	return func_1014(num);
}

int func_805(int iParam0) // Position - 0x1F3FA Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_806(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1F40D Hash - 0x97F184D3 ^0xF316A8E
{
	var unk;
	var unk6;

	if (!func_1015(iParam0))
		return unk6;

	if (!func_1016(&unk))
		return unk6;

	if (!func_1017(unk, &(unk.f_1), 13, 0, 0, 1))
		return unk6;

	if (!func_1017(unk, &(unk.f_1), 14, iParam0, 0, 1))
		return unk6;

	if (!func_1017(unk, &(unk.f_1), 19, 0, 0, 1))
		return unk6;

	if (!func_1017(unk, &(unk.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
	
		return unk6;
	}

	return func_1018(unk);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1F4C0 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

float func_808(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1F4EA Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

BOOL func_809(int iParam0) // Position - 0x1F508 Hash - 0xC86BC762 ^0xC86BC762
{
	return func_94(Global_1220826.f_1196, iParam0);
}

BOOL func_810() // Position - 0x1F51D Hash - 0xD2F03408 ^0xD2F03408
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_811(int iParam0, int iParam1) // Position - 0x1F531 Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

struct<2> func_812() // Position - 0x1F56D Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_82(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_82(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_813(Hash hParam0) // Position - 0x1F5B8 Hash - 0x25F0A9E7 ^0x25F0A9E7
{
	if (func_1019(hParam0) == -1)
		return false;

	return true;
}

BOOL func_814(var uParam0, var uParam1) // Position - 0x1F5CF Hash - 0x213CF43D ^0x213CF43D
{
	return func_1020(uParam0, 1, 4);
}

Hash func_815(int iParam0) // Position - 0x1F5E1 Hash - 0xBA965109 ^0xA132DCEE
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

void func_816(int iParam0, BOOL bParam1) // Position - 0x1F89C Hash - 0xFA676C9B ^0xFA676C9B
{
	if (!func_817(iParam0))
		return;

	Global_17418[iParam0] = Global_17418[iParam0] || bParam1;
	return;
}

BOOL func_817(int iParam0) // Position - 0x1F8C2 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_818(int iParam0) // Position - 0x1F8CF Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_817(iParam0))
		return false;

	return func_1021(iParam0, 4, true);
}

void func_819(int iParam0, BOOL bParam1) // Position - 0x1F8ED Hash - 0xF33798D9 ^0x8C787B55
{
	if (!func_817(iParam0))
		return;

	if (func_1022(iParam0))
		return;

	func_816(iParam0, 2);

	if (bParam1)
		if (!func_18(0, false, true))
			func_1023(true, 1017438712);

	return;
}

BOOL func_820(int iParam0) // Position - 0x1F930 Hash - 0x94F42F3F ^0x94F42F3F
{
	if (!func_817(iParam0))
		return false;

	return func_1021(iParam0, true, true);
}

void func_821(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F94E Hash - 0x65D4C438 ^0x65D4C438
{
	if (!func_817(iParam0))
		return;

	if (func_820(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_1024(iParam0);

	if (!bParam1)
		func_1025(iParam0);

	func_816(iParam0, true);
	func_819(iParam0, true);

	if (bParam2)
		if (!func_18(0, false, true))
			func_822(true, 6);

	return;
}

void func_822(BOOL bParam0, int iParam1) // Position - 0x1F9B0 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_1026(&Global_0, 8);

	if (!func_987() || func_104() != -1)
		return;

	func_1026(&Global_0, 1);
	return;
}

float func_823(int iParam0, int iParam1) // Position - 0x1F9F6 Hash - 0x882BA7B3 ^0xDE52A593
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

void func_824(int iParam0) // Position - 0x1FAAB Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_889(2);
	func_890(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_825(int iParam0, BOOL bParam1) // Position - 0x1FAE8 Hash - 0x71081FC9 ^0xE795FB69
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_891(2);
	func_892(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_826(int iParam0) // Position - 0x1FB1D Hash - 0x265AFF44 ^0xE695F6B4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_893(2);
	func_894(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

BOOL func_827() // Position - 0x1FB5A Hash - 0x7545CCE6 ^0x7545CCE6
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

int func_828(Hash hParam0) // Position - 0x1FBF0 Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_253(func_252(hParam0), 1);

	if (num != 39)
		return Global_1953292.f_1676.f_1[num /*3*/].f_1;

	return 0;
}

Hash func_829(int iParam0) // Position - 0x1FC1F Hash - 0x90D51E83 ^0x1291FDBE
{
	return Global_1953292.f_1676.f_1[func_253(iParam0, 1) /*3*/];
}

int func_830() // Position - 0x1FC39 Hash - 0x16CCC184 ^0xB63B6FF6
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_165(hash) == -999503751)
			if (func_1027() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_831(Hash hParam0, int iParam1) // Position - 0x1FC8A Hash - 0x564F798F ^0xBDC94FF5
{
	if (iParam1 == 0)
		iParam1 = func_1028(false);

	if (func_165(hParam0) == -999503751 && func_835(hParam0) != -1)
		return true;

	if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return func_152(hParam0, -287432114);
	else if (iParam1 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return func_152(hParam0, -133342564);

	return false;
}

BOOL func_832(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1FCF3 Hash - 0xFC1A4C7A ^0x2FD92EB6
{
	var unk;
	var guid;

	unk = { func_193(hParam0, bParam2, 0) };
	guid = { func_274(hParam0, unk, unk.f_4, bParam2) };

	if (func_334(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_71(bParam2), &guid, bParam1);
	return true;
}

int func_833(Hash hParam0) // Position - 0x1FD45 Hash - 0xFFB858B2 ^0xFFB858B2
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

BOOL func_834(int iParam0) // Position - 0x1FDA0 Hash - 0x8364EAF ^0x20FEFCB3
{
	return Global_1953292.f_3352.f_33.f_6 && iParam0 != false;
}

int func_835(Hash hParam0) // Position - 0x1FDB8 Hash - 0xAFBAC931 ^0xAFBAC931
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

BOOL func_836(BOOL bParam0, int iParam1) // Position - 0x1FE3A Hash - 0xFE9F4A91 ^0x51AAAD17
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		return Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && bParam0 != false;

	return false;
}

struct<8> func_837(int iParam0) // Position - 0x1FE7D Hash - 0xAAC9C045 ^0xE6DD002E
{
	var unk;

	if (func_836(4, iParam0))
		return Global_17418.f_2645[iParam0 /*8*/];

	TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_STRING_FROM_HASH_KEY(func_1029(iParam0)), 64);
	return unk;
}

void func_838() // Position - 0x1FEB2 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1953292.f_1046 = 0;
	return;
}

BOOL func_839(Hash hParam0) // Position - 0x1FEC2 Hash - 0xC36143B1 ^0xD0F863A4
{
	if (!func_85(hParam0, 0))
		return false;

	if (func_152(hParam0, 160827531) || func_165(hParam0) == 81053684)
		return true;

	return false;
}

void func_840(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1FEFE Hash - 0xB56128A7 ^0x710CD125
{
	BOOL flag;
	var unk;
	var unk120;
	int i;
	Hash hash;

	flag = false;

	switch (func_165(hParam0))
	{
		case -2061583405:
			flag = func_1030(hParam0, &(Global_1953292.f_3352.f_28), bParam4);
			break;
	
		case -1719060085:
			flag = func_1030(hParam0, &(Global_1953292.f_3352.f_31), bParam4);
			break;
	
		case -999503751:
			flag = func_1030(hParam0, &(Global_1953292.f_3352.f_27), bParam4);
		
			if (func_152(hParam0, -166674229))
			{
				unk.f_1 = 39;
			
				if (func_1031(&unk, hParam0, &unk120, false, true, false, 0, false, true, 8))
				{
					for (i = 0; i < 39; i = i + 1)
					{
						hash = unk.f_1[i /*3*/];
					
						if (func_85(hash, 0))
							func_840(hash, false, false, false, false);
					}
				}
			}
			break;
	
		case -525676072:
			flag = func_1030(hParam0, &(Global_1953292.f_3352.f_29), bParam4);
			break;
	
		case 81053684:
			flag = func_1030(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	
		case 119907797:
			flag = func_1030(hParam0, &(Global_1953292.f_3352.f_32), bParam4);
			break;
	
		case 1388798186:
			flag = func_1030(hParam0, &(Global_1953292.f_3352.f_33.f_7), bParam4);
			break;
	
		default:
			if (func_152(hParam0, 160827531))
				flag = func_1030(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	}

	if (bParam3 && flag)
		func_578(false, hParam0);

	if (bParam2)
		func_576();

	if (bParam1)
		func_579(false, false);

	return;
}

Hash func_841(Hash hParam0) // Position - 0x20085 Hash - 0xDBA8DC27 ^0x5C33F2A1
{
	int num;
	var unk;

	func_1032(&unk, 9044914, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&unk);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&unk))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &unk, -1168434056))
			return 0;
	
		return num;
	}

	return 0;
}

BOOL func_842(Hash hParam0, int iParam1) // Position - 0x200C9 Hash - 0x926B5C1A ^0xC9C8B467
{
	Hash hash;

	hash = func_165(Global_1953292.f_1676.f_1[iParam1 /*3*/]);

	if (func_165(hParam0) == hash)
		return true;
	else if (hParam0 == -992705550)
		return func_152(Global_1953292.f_1676.f_1[iParam1 /*3*/], 160827531);
	else if (hParam0 == 491480257)
		return hash == -2061583405 || hash == 2086043523;
	else if (hParam0 == -1789518572)
		return hash == -923693316;
	else if (hParam0 == -275040139)
		return hash == 1882579758;

	return false;
}

void func_843(int iParam0, int iParam1) // Position - 0x20170 Hash - 0xF4504E91 ^0x84D29029
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
			if (func_1033(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_1033(&iParam0->f_2[i /*2*/], 1))
					func_1034(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_844(int iParam0, int iParam1, int iParam2) // Position - 0x2026D Hash - 0x917A9738 ^0x1D68250E
{
	int i;
	int j;

	if (*iParam0 + 1 >= 16)
		return;

	if (!func_1035(iParam0, 1))
		func_1036(iParam0, 1);

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

void func_845(var uParam0, var uParam1) // Position - 0x20353 Hash - 0xEEF7C6EF ^0xEFE4EF7D
{
	int num;
	int num2;
	int num3;

	num = func_1037(0);
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
			num3 = func_253(num2, 1);
		
			if (num3 < 0 || num3 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("Component")))
			{
			}
			else if (uParam0->f_1[num3 /*3*/] != num2)
			{
			}
			else
			{
				uParam0->f_1[num3 /*3*/] = Global_1953292.f_83[num3 /*12*/];
				uParam0->f_1[num3 /*3*/].f_1 = 0;
				func_588(num3, 0);
			}
		}
	}

	return;
}

void func_846(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x20406 Hash - 0x47EC47B2 ^0xCC3EAB2D
{
	int num;
	Hash hash;

	if (hParam1 == -230310728 || hParam1 == 1326838792)
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	num = 10;
	hash = func_165(uParam0->f_1[num /*3*/]);

	if (hash == 119907797)
	{
		if (func_152(hParam1, 458991572))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}
	else if (hash == 2086043523)
	{
		if (func_152(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}
	else if (hash == -525676072)
	{
		if (func_152(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}

	num = 11;

	if (func_152(uParam0->f_1[num /*3*/], -1446529222) && func_152(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam1, -93469181) && func_152(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

void func_847(var uParam0, Hash hParam1, int iParam2) // Position - 0x205DB Hash - 0xC8C81F63 ^0xED719640
{
	if (hParam1 == joaat("clothing_item_m_beard_stubble"))
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	return;
}

void func_848(var uParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x20620 Hash - 0x1075AB8B ^0xF324283C
{
	int num;
	Hash hash;

	func_588(1, iParam3);

	if (bParam2)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (!func_330(hash, false) && func_152(hash, -180472385))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 10;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_165(hash) == 2086043523 && func_152(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

void func_849(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x206E9 Hash - 0xA81215F7 ^0xA81215F7
{
	switch (func_165(hParam2))
	{
		case -525676072:
			func_1038(uParam0, bParam1, iParam3);
			break;
	
		case 2086043523:
			func_1039(uParam0, bParam1, iParam3);
			break;
	}

	return;
}

void func_850(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20723 Hash - 0x7B358321 ^0x3A779D22
{
	int num;

	num = 18;

	if (func_165(uParam0->f_1[num /*3*/]) == 912453393)
		func_588(num, iParam3);

	func_588(1, iParam3);

	if (bParam1)
		return;

	if (func_839(hParam2))
		func_1040(uParam0, bParam1, iParam3);

	num = 11;

	if (func_152(hParam2, -180472385) && !func_330(uParam0->f_1[num /*3*/], false))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	if (func_152(hParam2, -1303648999))
		return;

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_588(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_588(num, iParam3);
	}
	else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[num /*3*/].f_1 = -1539589426;
		func_588(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_588(num, iParam3);
	}

	return;
}

void func_851(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20863 Hash - 0x6DFFA234 ^0x160F223D
{
	int num;
	int metapedType;
	Hash hash;
	int num2;
	int num3;

	num = 12;
	metapedType = 0;

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	if (joaat("neckties") == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[num /*3*/], metapedType, true))
	{
		if (bParam1 || func_152(hParam2, 1872585553) || func_165(hParam2) == 1882579758)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}

	hash = uParam0->f_1[num /*3*/];

	if (!func_330(hash, false) && !func_152(hash, -1303648999) && func_152(hParam2, -1527414429))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 17;

	if (!func_330(uParam0->f_1[num /*3*/], false) && func_152(hParam2, 1467402774))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 29;

	if (!func_330(uParam0->f_1[num /*3*/], false) && func_152(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 34;
	hash = uParam0->f_1[num /*3*/];

	if (func_165(hash) == 1759215194 && func_165(hParam2) == 1882579758)
	{
		uParam0->f_1[num /*3*/] = func_841(hParam2);
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}
	else if (func_1041(hash, bParam1, metapedType))
	{
		hash = uParam0->f_1[18 /*3*/];
		num2 = 0;
	
		if (func_165(hash) == 912453393 && func_1042(32))
			num2 = num2 | 1;
	
		if (func_152(hParam2, 525391395))
			num2 = num2 | 2;
	
		hash = func_1043(Global_1953292.f_83[num /*12*/].f_9, num2);
	
		if (hash != 0)
		{
			uParam0->f_1[num /*3*/] = hash;
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
			func_859(uParam0, false, hash, iParam3);
		}
	}

	num = 21;

	if (!func_330(uParam0->f_1[num /*3*/], false) && func_152(hParam2, 196770179))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num3 = 23;

	if (!func_330(uParam0->f_1[num /*3*/], false) || uParam0->f_1[num3 /*3*/] != Global_1953292.f_83[num3 /*12*/] && func_152(uParam0->f_1[num3 /*3*/], -1655064541))
		func_1044(uParam0, iParam3);

	return;
}

void func_852(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20B4C Hash - 0x7E0722A ^0xAB26183C
{
	int num;

	if (bParam1)
		return;

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

void func_853(var uParam0, BOOL bParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x20BAB Hash - 0xB459802F ^0xB459802F
{
	switch (func_165(hParam2))
	{
		case 698653232:
			func_1045(uParam0, bParam1, hParam2, iParam4);
			break;
	
		case 912453393:
			func_1046(uParam0, bParam1, iParam3, iParam4);
			break;
	}

	return;
}

void func_854(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20BE9 Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_165(hParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1047(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 294388917:
			func_1048(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_855(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20C2D Hash - 0x3C314B3B ^0x50027DDE
{
	int num;

	num = 18;

	if (func_165(uParam0->f_1[num /*3*/]) == 912453393)
		func_588(num, iParam3);

	if (bParam1)
		return;

	num = 23;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, 1537768121))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_1044(uParam0, iParam3);

	return;
}

void func_856(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20CC9 Hash - 0xEA1EEC9C ^0x89D8E054
{
	int num;

	if (!bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			if (func_152(uParam0->f_1[num /*3*/], 1537768121))
			{
				uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
				uParam0->f_1[num /*3*/].f_1 = 0;
			}
		
			func_588(num, iParam3);
		}
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_152(hParam2, -1655064541))
			func_1044(uParam0, iParam3);
		else
			func_588(num, iParam3 | 16);

	num = 20;

	if (uParam0->f_1[num /*3*/].f_1 != -529972961)
		return;

	uParam0->f_1[num /*3*/].f_1 = joaat("base");
	func_588(num, iParam3);
	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_588(num, iParam3);

	num = 28;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_588(num, iParam3);

	return;
}

void func_857(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20DD8 Hash - 0x69302866 ^0x620ADA80
{
	int num;

	if (bParam1)
		return;

	if (func_1049(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_152(hParam2, -1230785684))
	{
		num = 27;
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 32;

	if (!func_330(uParam0->f_1[num /*3*/], false) && func_152(hParam2, 1016511012))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

void func_858(var uParam0, BOOL bParam1, int iParam2) // Position - 0x20E77 Hash - 0xAEDF8511 ^0x27A01C51
{
	int num;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(uParam0->f_1[num /*3*/], 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	return;
}

void func_859(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20EDC Hash - 0x81434F3 ^0x81434F3
{
	switch (func_165(hParam2))
	{
		case -1740828670:
			func_1054(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 344283346:
			func_1055(uParam0, bParam1, iParam3);
			break;
	
		case 502936876:
			func_1053(uParam0, bParam1, iParam3);
			break;
	
		case 684307653:
			func_1052(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1223979091:
		case 2047428024:
			func_1051(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1759215194:
			func_1050(uParam0, iParam3);
			break;
	}

	return;
}

void func_860(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20F6C Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_165(hParam2))
	{
		case -923693316:
			func_1057(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1769055947:
			func_1056(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_861(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x20FAA Hash - 0x60D806B ^0x98705F22
{
	int num;
	Hash hash;

	if (bParam1)
	{
		func_1058(uParam0, iParam3, false, true);
		return;
	}

	num = 35;
	hash = uParam0->f_1[num /*3*/];

	if (func_152(hParam2, 813132419) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_165(hash) == -923693316)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	if (func_152(hParam2, -1650340550) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_165(hash) == 1769055947)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 37;

	if (func_152(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

int func_862(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0x210D9 Hash - 0xD6995ACD ^0x328CFE7D
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

BOOL func_863(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x2111B Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

int func_864(Hash hParam0) // Position - 0x2112C Hash - 0x6EEB52D0 ^0x6EEB52D0
{
	int num;

	num = func_835(hParam0);

	if (num != -1)
		return num;

	return -1;
}

BOOL func_865(Hash hParam0) // Position - 0x21148 Hash - 0x1DB3839 ^0xD5C14C10
{
	return hParam0 == -1839668642 || hParam0 == -1415811768 || hParam0 == 231148558 || hParam0 == -1674363638 || hParam0 == 252325943 || hParam0 == 1216664798 || hParam0 == 1341188928 || hParam0 == 829857647 || hParam0 == -636562458 || hParam0 == 1115104855;
}

void func_866(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x211D6 Hash - 0x3079C542 ^0x5D29A697
{
	if (bParam1)
		Global_1953292.f_1676.f_1[iParam0 /*3*/] = { Global_1953292.f_1557.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (iParam3 == -1)
		iParam3 = Global_17418.f_55.f_664.f_1777;

	func_1059(&Global_1953292.f_1676.f_1[iParam0 /*3*/], iParam0, iParam3);
	return;
}

BOOL func_867(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21232 Hash - 0xECEF3502 ^0x2D53122C
{
	var unk;
	var unk6;

	unk = { func_193(hParam0, bParam2, 0) };
	unk6 = { func_274(hParam0, unk, unk.f_4, bParam2) };
	return func_594(unk6, bParam1, bParam2);
}

void func_868(int iParam0, BOOL bParam1, int iParam2) // Position - 0x21267 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_1060(&(Global_1953292.f_1557), iParam0);
	func_1061(2, iParam0, 6);

	if (bParam1)
		func_579(false, true);

	return;
}

int func_869(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x2128F Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_1062(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

int func_870(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0x212BD Hash - 0x85BC54D5 ^0xA60D4F06
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

	if (!func_393(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_86(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_1063(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_1064(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_1065(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_1066(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_1067(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_1068(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_1069(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_450(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

float func_871(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x21400 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

int func_872(int iParam0) // Position - 0x21448 Hash - 0x669CB4E1 ^0x669CB4E1
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

	if (func_358(iParam0) == joaat("posse_versus"))
		return 37;

	return 23;
}

BOOL func_873() // Position - 0x2151D Hash - 0xDF34329C ^0xA25E1085
{
	if (func_81() || Global_1572887.f_72.f_40 > 10 || func_1070())
		if (!func_550() && Global_265213.f_122484.f_80.f_16.f_2 != -504335712 && !func_1071(Global_265213.f_122484.f_80.f_16.f_3))
			return true;

	return false;
}

BOOL func_874(int iParam0, Player plParam1) // Position - 0x21587 Hash - 0xAF32F835 ^0x6534FA19
{
	if (plParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[plParam1 /*38*/].f_3 && iParam0 != false;
}

BOOL func_875() // Position - 0x215B3 Hash - 0x62AD6655 ^0x124ACCA1
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();
	return Global_1051832.f_3279 == frameCount || Global_1051832.f_3279 == frameCount - 1;
}

void func_876(int iParam0) // Position - 0x215DD Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1051832.f_3648 = Global_1051832.f_3648 || iParam0;
	return;
}

BOOL func_877() // Position - 0x215F6 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

int func_878() // Position - 0x21612 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1051645.f_12;
}

char* func_879() // Position - 0x21620 Hash - 0x306ACA3A ^0x6A3D505A
{
	return "unnamed";
}

BOOL func_880(int iParam0) // Position - 0x2162C Hash - 0xC360B8E6 ^0xCBE2AF9D
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

int func_881(int iParam0) // Position - 0x216BB Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL func_882(Player plParam0) // Position - 0x21706 Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_1072(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_1073(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_883(var uParam0) // Position - 0x2174B Hash - 0xEF8B385D ^0xEF8B385D
{
	if (*uParam0 >= 40)
		return false;

	return true;
}

int func_884(Ped pedParam0, Hash hParam1) // Position - 0x21760 Hash - 0x83F00AF7 ^0x32031FF8
{
	int num;
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (func_994(hParam1))
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
			return func_1074(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
		}
	}

	return 0;
}

int func_885(Hash hParam0, BOOL bParam1) // Position - 0x217BE Hash - 0x19ACB934 ^0xDEF82372
{
	if (!bParam1 || func_1075())
		return func_334(hParam0, func_335(true), -2015960939, true, true, false);

	return 0;
}

BOOL func_886(Hash hParam0) // Position - 0x217ED Hash - 0x3E3F2A98 ^0x812CF3DC
{
	switch (func_165(hParam0))
	{
		case -2061583405:
			return true;
	
		case -1719060085:
			return true;
	
		case -999503751:
			return true;
	
		case -525676072:
			return true;
	
		case 81053684:
			return true;
	
		case 119907797:
			return true;
	
		case 1388798186:
			return true;
	
		default:
		
	}

	if (func_152(hParam0, 160827531))
		return true;

	return false;
}

void func_887(int iParam0, int iParam1, int iParam2) // Position - 0x2185A Hash - 0x7CD806BE ^0xAA6614A5
{
	Global_1953292.f_2686[func_253(iParam0, 1) /*2*/].f_1 = Global_1953292.f_2686[func_253(iParam0, 1) /*2*/].f_1 || iParam1;
	return;
}

int func_888(Hash hParam0, BOOL bParam1) // Position - 0x21889 Hash - 0x71A176E6 ^0x71A176E6
{
	var unk;

	unk = { func_193(hParam0, false, 0) };
	return func_447(hParam0, &unk, false, bParam1);
}

int func_889(int iParam0) // Position - 0x218A8 Hash - 0x262796A6 ^0x32C91F91
{
	if (iParam0 == 2)
		iParam0 = func_760(1);

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

void func_890(float fParam0, Ped pedParam1) // Position - 0x218E8 Hash - 0x81B8D237 ^0xD25A4B21
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

int func_891(int iParam0) // Position - 0x2192C Hash - 0x3229E1B0 ^0x75954C0C
{
	if (iParam0 == 2)
		iParam0 = func_760(1);

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

void func_892(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21970 Hash - 0x5072E518 ^0x6DDAEE0A
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_1076(player))
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

int func_893(int iParam0) // Position - 0x21A21 Hash - 0x3229E1B0 ^0x4F226FB4
{
	if (iParam0 == 2)
		iParam0 = func_760(1);

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

void func_894(float fParam0, Ped pedParam1) // Position - 0x21A65 Hash - 0xFCEEE112 ^0xFADF1B0E
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

float func_895(int iParam0, float fParam1, BOOL bParam2) // Position - 0x21AA7 Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_989();
	func_1077(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_1078(iParam0, 2);

	if (func_1080(num, func_1079(iParam0, 2), true))
	{
		func_1081(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_139(103, bParam2);
		return 0f;
	}

	func_1082(iParam0, func_989(), 2);
	func_1081(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_896(int iParam0, int iParam1) // Position - 0x21B10 Hash - 0x76523351 ^0x92907141
{
	if (iParam1 == 2)
		iParam1 = func_760(2);

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

int func_897(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x21B5C Hash - 0xF5F03980 ^0x215D91AE
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_760(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_1083(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_1084(iParam0, 7000, iParam5);
	
		func_1085(ped, iParam0, fParam1);
		func_1086(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

BOOL func_898() // Position - 0x21BDA Hash - 0x57305A7F ^0x41946F5D
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_1087(Global_1956875.f_1431.f_107, false);
}

void func_899(float fParam0, int iParam1) // Position - 0x21C03 Hash - 0x6AFE3513 ^0x6AFE3513
{
	float num;
	int num2;
	int num3;

	num = func_1088(13, 2);
	num2 = func_1089(num);
	num = num + fParam0;
	num = func_427(num, 0f, 100f);
	num3 = func_1089(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_989();
		func_990(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_1090(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

int func_900(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x21C76 Hash - 0xFF5C68E3 ^0x564C72DE
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_1091(iParam0))
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
				effectName = func_1092(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_824(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_1092(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_1093(joaat("STATUS_EFFECT__TRACKING"));
			func_826(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_1092(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_825(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_1094(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_1093(joaat("STATUS_EFFECT__POISON"));
			func_1094(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_1094(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

void func_901(int iParam0, int iParam1) // Position - 0x21E2C Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_109(joaat("eaten"), func_948(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_110(func_488(joaat("herbs_eaten")), iParam1);
	return;
}

void func_902(Hash hParam0, int iParam1) // Position - 0x21E5E Hash - 0x5F9FD31D ^0xFCD5D23C
{
	int num;

	if (func_104() == 0)
	{
		num = func_288(hParam0, -949239683);
	
		if (iParam1 == -1387038764)
			return;
	
		if (func_152(hParam0, -136654233))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_CannedGoodsEaten_00"), 1);
	
		if (func_152(hParam0, 1765172170) || 1443104131 == num || -1919515848 == num)
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TobaccoSmokedChewed_00"), 1);
	
		if (func_152(hParam0, 1573112293))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_HerbsTasted_00"), 1);
	
		if (func_152(hParam0, -2085281117) && !func_152(hParam0, -1237028043))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_FreshProduceEaten_00"), 1);
	
		if (func_152(hParam0, 200705431))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_DryGoodsEaten_00"), 1);
	
		if (func_152(hParam0, joaat("ci_tag_item_meat_animal")) || func_152(hParam0, -839724752) || func_152(hParam0, 1264218912) || hParam0 == joaat("consumable_offal"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_MeatEaten_00"), 1);
	
		if (func_152(hParam0, -764700608))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TonicOilUsed_00"), 1);
	
		if (hParam0 == joaat("consumable_candy_bag") || hParam0 == joaat("consumable_chocolate_bar") || hParam0 == joaat("consumable_peppermint"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
	
		if (hParam0 == joaat("consumable_coffee"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
	}

	return;
}

int func_903(Player plParam0) // Position - 0x21FFF Hash - 0x444BF7D7 ^0x8FDBB14C
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1144526[plParam0 /*83*/].f_38.f_28;
}

int func_904(Player plParam0) // Position - 0x22029 Hash - 0xA9CB276 ^0xD5300595
{
	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	return Global_1144526[plParam0 /*83*/].f_38.f_28.f_1;
}

void func_905(var uParam0, Hash hParam1, int iParam2) // Position - 0x22055 Hash - 0xEB834D03 ^0xCC686083
{
	Global_1913634[uParam0->f_45 /*9*/].f_5 = iParam2;
	Global_1913634[uParam0->f_45 /*9*/].f_6 = hParam1;
	Global_1913634[uParam0->f_45 /*9*/].f_7 = 1;
	Global_1913634[uParam0->f_45 /*9*/].f_8 = 0;
	Global_1913634.f_1576 = Global_1913634.f_1576 + 1;
	uParam0->f_45 = uParam0->f_45 + 1;

	if (iParam2 == 600942249 || iParam2 == -257768755 || iParam2 == 1472825031)
		func_1095(uParam0, hParam1, iParam2);
	else if (iParam2 == -214678071)
		func_1096(uParam0, hParam1);

	return;
}

int func_906(var uParam0, int iParam1) // Position - 0x220F3 Hash - 0x55C2A1B3 ^0xA4CE5F7D
{
	var unk;
	int num;
	int num2;
	int i;
	Hash hash;

	unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, iParam1, 0, -1, Global_1913634.f_1584, 0) };

	if (func_612(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_698(i, num);
		
			if (func_85(hash, 0))
			{
				if (uParam0->f_45 >= 175)
					break;
			
				if (Global_1913634.f_1584 == 0 && func_152(hash, 302810039))
				{
					if (!(Global_1913634.f_1585 != 0 && func_152(hash, Global_1913634.f_1585)))
					{
					}
					else if (func_152(hash, 266762988))
					{
					}
					else
					{
						func_905(uParam0, hash, iParam1);
						func_1097(uParam0, hash, iParam1);
					}
				}
			
				if (func_152(hash, 266762988))
				{
				}
				else
				{
					func_905(uParam0, hash, iParam1);
					func_1097(uParam0, hash, iParam1);
				}
			}
		}
	
		func_1098(&num);
		return 1;
	}

	return 0;
}

Hash func_907(int iParam0) // Position - 0x221D1 Hash - 0xD9CACD5C ^0xC5E4F827
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

void func_908(var uParam0, const char* sParam1, var uParam2) // Position - 0x22236 Hash - 0xAF661474 ^0x77CFD5D0
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_29, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
	return;
}

void func_909(var uParam0, BOOL bParam1, Hash hParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2229F Hash - 0x7DBDF2D6 ^0xA8FCA29D
{
	Hash hash;

	hash = Global_1913634[hParam2 /*9*/].f_6;

	if (bParam4 || func_103(uParam0, 2) || func_227(hash, uParam0->f_42))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[hParam2 /*9*/].f_1))
			{
				if (bParam5)
					func_910(uParam0, -1, bParam3, Global_1913634[hParam2 /*9*/].f_1, true, false, true);
			
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, uParam0->f_46, joaat("crafting_list_item"), Global_1913634[hParam2 /*9*/].f_1);
			}
			else
			{
				func_1099(uParam0, hParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[hParam2 /*9*/].f_1))
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913634[hParam2 /*9*/].f_1);
		
			func_1099(uParam0, hParam2, false, bParam3);
		}
	
		if (uParam0->f_46 == 0)
		{
			uParam0->f_60 = Global_1913634[hParam2 /*9*/].f_6;
			uParam0->f_61 = Global_1913634[hParam2 /*9*/].f_5;
			uParam0->f_59 = Global_1913634[hParam2 /*9*/].f_1;
		}
	
		uParam0->f_46 = uParam0->f_46 + 1;
	}

	return;
}

void func_910(var uParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x22399 Hash - 0xCD6168C8 ^0xB97121AD
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

	entryId = Global_1913634[iParam1 /*9*/].f_1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(entryId))
		return;

	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eOutputItem");
	hash2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(entryId, "eCost");
	key = hash;
	hash3 = hash2;
	num = func_218(key, hash3, bParam2, false);
	num2 = func_89(key, false, false, false);
	num3 = func_888(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	TEXT_LABEL_APPEND_INT(&unk, func_424(num3, num), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(entryId, "count", &unk);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "visible", false);

	if (func_103(uParam0, 2))
		num4 = num > 0 && func_919(key) ? 1 : 0;
	else
		num4 = num3 > 0 && num > 0 ? 1 : 0;

	flag = false;

	if (num4 == 0 && func_1100(key))
	{
		if (func_1101(key, hash3, uParam0, bParam2, &hash4, &hash5, &num5))
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

	if (!func_103(uParam0, 4))
		if (hash3 == -214678071 || hash3 == joaat("cost_crafting_grill") || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
			num4 = 0;

	if (!Global_1913634.f_1579 && func_917(key, hash3, true))
	{
		num4 = 0;
		flag2 = true;
	}

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(entryId, "lockVisible", flag2);

	if (num4 == 1)
	{
		if (!func_413(2) && func_288(key, -1636519629) == -701492487)
		{
			Global_1913634[iParam1 /*9*/].f_2 = 0;
			num4 = 0;
		}
		else
		{
			Global_1913634[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (func_103(uParam0, 128) && num4 == 0 && Global_1913634[iParam1 /*9*/].f_2 && bParam4)
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_30, entryId);
	
		Global_1913634[iParam1 /*9*/].f_2 = 0;
	}

	if (bParam5)
	{
		if (func_368(key, &str, joaat("Inventory"), 0, 0, 0))
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

	if (!func_103(uParam0, 4) && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(entryId, "bFireCrafting"))
		num4 = 0;

	if (flag && !bParam6)
		num4 = 0;

	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(entryId, "enabled", num4);
	return;
}

Ped func_911(Ped pedParam0) // Position - 0x2294B Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

void func_912(var uParam0, BOOL bParam1) // Position - 0x22967 Hash - 0x15B6CFE3 ^0xB622BAFB
{
	Entity scenarioPointEntity;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_13))
		scenarioPointEntity = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_13);

	if (ENTITY::DOES_ENTITY_EXIST(scenarioPointEntity))
		ENTITY::SET_ENTITY_COLLISION(scenarioPointEntity, bParam1, false);

	return;
}

void func_913(var uParam0, var uParam1) // Position - 0x22996 Hash - 0x4B041FA7 ^0x376896C0
{
	Hash hash;
	Any any;
	Hash hash2;
	int num;
	int num2;
	int num3;
	Hash hash3;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	hash = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	hash2 = hash;
	ATTRIBUTE::STOP_ITEM_PREVIEW();

	if (func_85(hash2, 0) && func_103(uParam0, 2) || func_227(hash2, uParam0->f_42))
	{
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
		uParam0->f_62 = hash2;
		uParam0->f_63 = any;
		func_120(&uParam0->f_1[1], true, true);
		num = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
	
		if (num > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantCount", num);
			num2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			num3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
		
			if (num3 >= 0 && num3 < Global_1913634)
				hash3 = Global_1913634[num3 /*9*/].f_8;
		
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (num2 + 1) - hash3);
			func_40(uParam0, 4096);
		
			if (func_95(uParam0->f_1[5]))
				func_130(uParam0->f_1[5], true, true, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
			func_214(uParam0, 4096);
		
			if (func_95(uParam0->f_1[5]))
				func_130(uParam0->f_1[5], false, true, true);
		}
	
		if (!func_103(uParam0, 2))
			uParam0->f_43 = BUILTIN::ROUND(ENTITY::GET_ANIM_DURATION(func_929(uParam0->f_62), func_930(uParam0->f_62)) * 1000f);
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting"))
			func_40(uParam0, 8192);
		else
			func_214(uParam0, 8192);
	
		uParam0->f_58 = *uParam1;
		uParam0->f_1[1] = func_259("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
		func_663(uParam0, uParam0->f_62, uParam0->f_63);
		func_261(uParam0->f_1[1], 11, true, true);
	
		if (Global_1913634.f_1579 || !func_917(uParam0->f_62, uParam0->f_63, true))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_923(hash2));
			func_670(uParam0, false);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", 0);
		}
	
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
			if (Global_1913634.f_1579 || !func_917(uParam0->f_62, uParam0->f_63, true))
				func_925(uParam0);
	}

	return;
}

char* func_914(var uParam0) // Position - 0x22C0F Hash - 0xE9AA7646 ^0x425467B2
{
	if (func_103(uParam0, 128))
		return "CAMP_REC_ALL";

	return "CAMP_REC_AVL";
}

int func_915(char* sParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x22C30 Hash - 0xF0D966D6 ^0xB09CFACC
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_234(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_235(num, hParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, false, false, hParam2, joaat("SHORT_TIMED_EVENT"), false);
		return num;
	}

	return 0;
}

void func_916(int iParam0, Hash hParam1) // Position - 0x22CBE Hash - 0xDEF73F31 ^0x53A5E4BF
{
	int num;

	if (!func_95(iParam0))
		return;

	num = func_231(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951910[num /*23*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951910[num /*23*/].f_3, hParam1);
	return;
}

BOOL func_917(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x22D00 Hash - 0x1244E24C ^0xA4727049
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_85(hParam0, 0))
		return func_1102(func_284(hParam0), hParam1, bParam2);

	if (func_458(hParam0) || func_152(hParam0, 1077060302))
		return func_718(func_459(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_104() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_1103(hParam0, hParam1, &unk, &num) || num < 1)
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

BOOL func_918(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x22DC5 Hash - 0xA25BE96 ^0xA25BE96
{
	var unk;

	*uParam2 = 0;
	*uParam3 = 0;

	if (!func_85(hParam0, 0))
		return 0;

	if (!Global_1913634.f_1579 && !bParam5)
		if (func_215(hParam0))
			if (func_718(func_216(hParam0), hParam1))
				return 0;
		else if (func_917(hParam0, hParam1, true))
			return 0;

	if (func_215(hParam0))
		if (func_217(func_216(hParam0), hParam1, &unk, false, bParam7))
			return 1;
	else if (func_941(hParam0, 1, hParam1, &unk, uParam4, bParam6, false, bParam7))
		return 1;

	*uParam2 = unk;
	*uParam3 = unk.f_1;
	return 0;
}

BOOL func_919(Hash hParam0) // Position - 0x22E70 Hash - 0x881DF5F7 ^0x881DF5F7
{
	int num;
	int num2;

	num = func_1105(func_1104());
	num2 = func_1105(hParam0);
	return num2 > num;
}

BOOL func_920(Hash hParam0, Hash hParam1, var uParam2, Entity eParam3, BOOL bParam4) // Position - 0x22E8F Hash - 0x61416B57 ^0x29193E9F
{
	var unk;
	Hash hash;
	int num;
	int i;
	BOOL flag;
	const char* str;
	int num2;
	BOOL flag2;
	const char* str2;
	var unk34;
	int num3;
	int num4;
	Hash hash2;
	int num5;
	var unk36;
	int num6;
	Hash hash3;

	unk = 15;
	flag = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_41);

	for (i = 0; i < 4; i = i + 1)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_41, uParam2->f_36[i]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "inUse", false);
	}

	if (!bParam4 && func_439(hParam0, hParam1, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			if (i >= 4)
				break;
		
			hash = unk[i /*2*/];
		
			if (func_85(hash, 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "visible", true);
			
				if (func_368(hash, &str, joaat("Inventory"), 0, 0, 0))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[i], "texture", str);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[i], "textureDictionary", str.f_1);
				}
			
				num2 = func_89(hash, false, false, false);
				flag2 = num2 >= unk[i /*2*/].f_1;
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[i], "count", num2);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[i], "enabled", flag2 ? 1 : 0);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[i], "inUse", true);
			
				if (!flag2)
					flag = false;
			
				str2 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, unk[i /*2*/]), func_103(uParam2, 131072) && uParam2->f_27 > 1 ? func_424(3, uParam2->f_27) : unk[i /*2*/].f_1);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Text", 16);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_36[i], &unk34, str2);
				TEXT_LABEL_ASSIGN_STRING(&unk34, "Enabled", 16);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_36[i], &unk34, flag2 ? 1 : 0);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_41, -1, joaat("crafting_recipe_line"), uParam2->f_36[i]);
			}
		}
	}

	if (flag)
	{
		if (!func_103(uParam2, 4) && func_103(uParam2, 8192) || uParam2->f_63 == -214678071 || uParam2->f_63 == joaat("cost_crafting_grill"))
		{
			flag = false;
		
			if (func_237(hParam0))
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			else
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
		else
		{
			num3 = func_89(hParam0, false, false, false);
			num4 = func_888(hParam0, false);
		
			if (func_103(uParam2, 2) && !func_919(hParam0))
			{
				flag = false;
				hash2 = func_1104();
			
				if (hParam0 == hash2)
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
				else
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
			}
			else if (num4 - num3 > 0 || num4 == -1)
			{
				num5 = func_288(hParam0, -1636519629);
			
				if (!func_413(2) && num5 == -701492487)
				{
					flag = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(eParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(eParam3, &unk36))));
				}
				else
				{
					num6 = func_218(hParam0, uParam2->f_63, func_414(), false);
				
					if (func_103(uParam2, 2))
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, func_1106(hParam0)));
					else if (uParam2->f_63 == -214678071)
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_58, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_29, "ShowRpgDescription"))
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num6));
					else if (uParam2->f_63 == joaat("cost_crafting_grill"))
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", num6));
					else if (num5 == -701492487)
						if (num6 == 1)
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", num6));
						else
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", num6));
					else
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", num6));
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", num3, num4, MISC::VAR_STRING(0, hParam0)));
				flag = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!func_103(uParam2, 4) && func_103(uParam2, 8192) || uParam2->f_63 == -214678071 || uParam2->f_63 == joaat("cost_crafting_grill"))
	{
		flag = false;
	
		if (func_237(hParam0))
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		else
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
	}
	else if (func_103(uParam2, 2) && !func_919(hParam0))
	{
		hash3 = func_1104();
	
		if (hParam0 == hash3)
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
		else
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}

	return flag;
}

void func_921(var uParam0) // Position - 0x2340A Hash - 0xB87F3DDE ^0x80B38484
{
	if (func_103(uParam0, 2))
	{
		if (!func_152(uParam0->f_62, -2011345500))
		{
			func_120(&uParam0->f_1[7], true, true);
			return;
		}
	
		if (!func_95(uParam0->f_1[7]))
			uParam0->f_1[7] = func_259("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824, joaat("SHORT_TIMED_EVENT"), false);
	
		if (uParam0->f_27 > 0 || uParam0->f_62 == Global_1147183.f_339.f_16 || !func_919(uParam0->f_62))
			func_130(uParam0->f_1[7], false, true, true);
		else
			func_130(uParam0->f_1[7], true, true, true);
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_922(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x234C2 Hash - 0x92B705D3 ^0xB783F681
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

Hash func_923(Hash hParam0) // Position - 0x235B8 Hash - 0xA730B7B8 ^0x90C575E3
{
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
		return outData.f_1;

	return 0;
}

void func_924(var uParam0) // Position - 0x235E3 Hash - 0xFC240FAD ^0xF4E45286
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
	return;
}

void func_925(var uParam0) // Position - 0x23605 Hash - 0xCE961D48 ^0xD0DB4109
{
	if (func_152(uParam0->f_62, 1147021565) || func_103(uParam0, 2) && !func_152(uParam0->f_62, 1919582297))
	{
		if (func_227(uParam0->f_62, 5))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
	}

	return;
}

void func_926(var uParam0) // Position - 0x236B3 Hash - 0xB5418D4E ^0x1017B90D
{
	Any any;

	any = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_29, "filterIndex");
	uParam0->f_42 = any;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "filter", func_907(uParam0->f_42));
	return;
}

Hash func_927(Hash hParam0) // Position - 0x236E3 Hash - 0xC7D3E371 ^0x1A86A7E7
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

Vector3 func_928(Hash hParam0) // Position - 0x23755 Hash - 0x5EE95BA7 ^0x439E1731
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

char* func_929(var uParam0) // Position - 0x237CB Hash - 0x815C061 ^0x63BD3A84
{
	if (PED::IS_PED_MALE(Global_33))
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";

	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_930(var uParam0) // Position - 0x237EB Hash - 0xEB40D7A4 ^0x4BA206F1
{
	return "craft_trans_stow";
}

var func_931(Player plParam0) // Position - 0x237F7 Hash - 0x76D96CB1 ^0x9EF34143
{
	var value;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, plParam0);
	return value;
}

void func_932(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x23809 Hash - 0xE9C78D03 ^0xA59196A5
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam15))
		return;

	if (!func_680(false))
		return;

	iParam1 = 10;
	iParam1.f_1 = PLAYER::PLAYER_ID();
	iParam1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iParam1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &iParam1, 14, 13, &uParam15);
	return;
}

void func_933(Player plParam0, BOOL bParam1) // Position - 0x23851 Hash - 0x62CDA5 ^0x8AD58E5C
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(gangLeader))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1144526[gangLeader /*83*/].f_38.f_28.f_2) || Global_1144526[gangLeader /*83*/].f_38.f_28.f_2 == plParam0 || bParam1)
		{
			Global_1144526[gangLeader /*83*/].f_38.f_28.f_2 = 255;
			Global_1144526[gangLeader /*83*/].f_38.f_28.f_3 = -1;
		}
	}

	return;
}

void func_934(Player plParam0, var uParam1) // Position - 0x238C4 Hash - 0xF061BB09 ^0x6B4176C0
{
	var outTime;
	var timeToAdd;

	if (plParam0 < 0 || plParam0 >= 32)
		return;

	CLOCK::_GET_POSIX_TIME_STRUCT(&outTime);
	timeToAdd.f_3 = 2;
	timeToAdd.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&outTime, &timeToAdd, &outTime);
	Global_1144526[plParam0 /*83*/].f_38.f_28.f_1 = uParam1;
	Global_1147183.f_339.f_1 = uParam1;
	Global_1147183.f_339.f_9 = { outTime };
	return;
}

int func_935(Any anParam0) // Position - 0x23926 Hash - 0x76E7BE82 ^0xFEC3730C
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(anParam0))
		return -1;

	if (anParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
		return func_356(PLAYER::PLAYER_ID());

	return func_1107(GANG::NETWORK_GET_GANG_LEADER(anParam0));
}

void func_936(int iParam0, var uParam1) // Position - 0x2395E Hash - 0x1ECBEB44 ^0xB5190F6A
{
	var unk;

	unk.f_8 = iParam0;
	unk.f_12 = uParam1;
	func_932(17, unk, func_359(0, 8));
	return;
}

void func_937(var uParam0) // Position - 0x23983 Hash - 0x5ED6FAF7 ^0xC8098BF4
{
	var unk;

	unk.f_12 = uParam0;
	func_932(13, unk, func_931(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
	return;
}

struct<2> func_938(Hash hParam0) // Position - 0x239AB Hash - 0x8E94575A ^0xD328884E
{
	return func_109(joaat("MADE"), hParam0);
}

struct<2> func_939(Hash hParam0) // Position - 0x239BE Hash - 0x1A31B43B ^0x46504F07
{
	var unk;

	if (func_227(hParam0, 0))
		unk = { func_109(joaat("made_recipe_type"), joaat("FOOD")) };
	else if (func_227(hParam0, 2))
		unk = { func_109(joaat("made_recipe_type"), joaat("AMMO")) };
	else if (func_227(hParam0, 5))
		unk = { func_109(joaat("made_recipe_type"), joaat("horse_care")) };
	else if (func_227(hParam0, 1))
		unk = { func_109(joaat("made_recipe_type"), joaat("remedies")) };
	else if (func_227(hParam0, 3))
		unk = { func_109(joaat("made_recipe_type"), joaat("WEAPONS")) };
	else if (func_227(hParam0, 4))
		unk = { func_109(joaat("made_recipe_type"), joaat("Hunting")) };

	return unk;
}

Vector3 func_940(Player plParam0) // Position - 0x23A81 Hash - 0x4168FF99 ^0xE3960051
{
	if (plParam0 == 255)
		return Global_1144526[func_974() /*83*/].f_38;

	return Global_1144526[plParam0 /*83*/].f_38;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_941(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x23AAD Hash - 0x9BC46265 ^0xEE2DD19E
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	int num4;
	int num5;
	Entity entity;
	int num6;
	int num7;

	if (func_458(hParam0) || func_152(hParam0, 1077060302))
		return func_217(func_459(hParam0, true), hParam2, uParam3, true, false);

	unk = 15;

	if (!func_439(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam6 && func_107(false) && !func_108();
	num5 = -1;

	if (Global_1915656.f_20638)
		num5 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && bParam7 || func_435(num2))
			goto 0x1F3;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && bParam7 || func_436(num2))
		{
		}
		else
		{
			num4 = func_437(num5, unk[i /*2*/]);
		
			if (num4 != 0)
			{
				bParam5 = false;
				num3 = func_438(unk[i /*2*/], num4);
			}
			else
			{
				num3 = func_89(unk[i /*2*/], false, !flag, true);
			}
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_244(unk[i /*2*/]) || func_440(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num6 = func_442(7, unk[i /*2*/], &entity);
					
						num7 = func_441(unk[i /*2*/], num4);
					
						if (num3 + num6 + num7 >= num2)
							if (num3 + num7 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x1E3;
					}
				
					if (bParam5 && num3 + func_443(7, unk[i /*2*/]) + func_444(unk[i /*2*/]) >= num2)
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

void func_942(int iParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x23CAD Hash - 0x21661D27 ^0x8D9AE15F
{
	int num;

	if (func_104() == 0)
	{
		num = func_695();
	
		if (num < iParam0)
			iParam0 = num;
	
		func_1108(iParam0, sParam1, -142743235, bParam4);
	}
	else
	{
		func_1109(iParam0);
	
		if (bParam3)
			func_1110(iParam0, sParam1, iParam2);
	}

	return;
}

int func_943(int iParam0, Hash hParam1, int iParam2) // Position - 0x23CF6 Hash - 0xFBFC702 ^0xFBFC702
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

	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_85(hParam1, 0))
		return 0;

	if (!func_702(iParam0))
		return 0;

	ped = func_177(iParam0);

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
	
		if (!func_703(entityFromItem))
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
					func_484(hParam1, 1, 752097756);
				
					if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
					{
						hash2 = func_249(&entityFromItem);
					
						if (!func_85(hash2, 0))
							hash2 = func_250(entityFromItem);
					
						if (func_85(hash2, 0))
							func_251(hash2, 1, ped, true, -142743235);
					
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

void func_944(Hash hParam0, int iParam1) // Position - 0x23E6A Hash - 0xF788DCE ^0xB69D967B
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
		num3 = func_288(hParam0, 1697966752);
	
		if (num3 == 0)
			return;
	
		unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num3, 0) };
	
		if (func_612(unk, &num, &num2, 0))
		{
			for (i = 0; i < num2; i = i + 1)
			{
				if (iParam1 <= 0)
					break;
			
				hash = func_698(i, num);
			
				if (func_85(hash, 0) && hParam0 != hash)
				{
					for (j = func_89(hash, false, false, false); j > 0 && iParam1 > 0; j = j - 1)
					{
						iParam1 = iParam1 - func_1111(hash, hParam0, false);
					}
				}
			}
		
			func_614(num);
		}
	}

	return;
}

void func_945(Hash hParam0) // Position - 0x23F68 Hash - 0x4C927607 ^0x7C031F72
{
	Entity firstEntityPedIsCarrying;
	Ped pedIndexFromEntityIndex;
	var unk;
	int num;
	int i;
	Hash hash;

	!func_85(hParam0, 0);

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(firstEntityPedIsCarrying);
		
			if (ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			{
				unk = 10;
				num = func_1112(pedIndexFromEntityIndex, &unk);
			
				for (i = 0; i < num; i = i + 1)
				{
					if (unk[i] == hParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
						break;
					}
				}
			}
			else if (PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&hash, pedIndexFromEntityIndex, PED::_GET_PED_DAMAGE_CLEANLINESS(pedIndexFromEntityIndex)) && hash == hParam0)
			{
				ENTITY::_DELETE_CARRIABLE(&firstEntityPedIsCarrying);
			}
		}
	}

	return;
}

int func_946(int iParam0, Hash hParam1, int iParam2) // Position - 0x24007 Hash - 0xFBFC702 ^0xFBFC702
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_85(hParam1, 0))
		return 0;

	if (!func_702(iParam0))
		return 0;

	horse = func_177(iParam0);
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
		else if (func_1007(hParam1, iParam2, true, -142743235))
		{
			num = num + 1;
		}
	}

	return num;
}

int func_947(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x240BD Hash - 0x4DB90AB5 ^0x4DB90AB5
{
	var unk;
	var unk6;

	if (func_104() == 0)
		return 0;

	if (!func_85(hParam0, 0))
		return 0;

	if (iParam2 < 1)
		return 0;

	unk = { func_335(false) };
	unk.f_4 = func_696(iParam1);
	unk6 = { func_274(hParam0, unk, unk.f_4, false) };

	if (!func_275(hParam0, &unk6, &unk, iParam2, hParam3, false, false))
		return 0;

	return 1;
}

int func_948(int iParam0) // Position - 0x24129 Hash - 0xBA965109 ^0xDF65C4FE
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

BOOL func_949(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, int iParam6) // Position - 0x244BF Hash - 0x47A4DDC0 ^0xD98F8579
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
		category = func_165(hParam1);
		hasSlotCount = func_1113(hParam1);
	
		for (i = 0; i < hasSlotCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
			{
				if (func_622(hParam0, category, outSlotId))
				{
					*uParam4 = { func_193(hParam1, false, 0) };
				
					if (iParam6 != 0)
						uParam4->f_4 = iParam6;
				
					*uParam3 = { func_274(hParam1, *uParam4, uParam4->f_4, false) };
					*uParam2 = outSlotId;
					return true;
				}
			}
		}
	
		if (bParam5)
		{
			outInventoryItem.f_9 = joaat("SLOTID_NONE");
			unk16.f_9 = joaat("SLOTID_NONE");
			inventoryId = func_71(false);
			unk30 = { func_193(hParam1, false, 0) };
		
			if (iParam6 != 0)
				unk30.f_4 = iParam6;
		
			parentGuid = { func_274(hParam1, unk30, unk30.f_4, false) };
			childrenCount = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(inventoryId, &parentGuid);
		
			for (j = 0; j < childrenCount; j = j + 1)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(inventoryId, &parentGuid, j, &outInventoryItem))
				{
					category = func_165(outInventoryItem.f_4);
					hasSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
				
					for (i = 0; i < hasSlotCount; i = i + 1)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
						{
							if (func_622(hParam0, category, outSlotId))
							{
								if (func_1114(parentGuid, outInventoryItem.f_9, &unk16, false, -1))
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

struct<4> func_950() // Position - 0x2463F Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_335(false) };
	return func_274(856287005, unk, -218846335, false);
}

BOOL func_951(Hash hParam0, int iParam1) // Position - 0x24663 Hash - 0x148943C8 ^0x2BF2CC5F
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
	Hash hash6;
	Hash hash7;
	Hash hash8;
	Hash hash9;
	Hash hash10;
	Hash hash11;
	Hash hash12;
	Hash hash13;
	Hash hash14;
	Hash hash15;

	if (!func_85(hParam0, 0))
		return false;

	if (!func_949(hParam0, 856287005, &hash, &unk6, &unk, true, 0))
		return false;

	unk10 = { func_950() };
	unk14 = { func_274(hParam0, unk10, hash, false) };

	if (func_594(unk14, iParam1, false))
	{
		if (func_1115(hParam0))
		{
			if (func_1116(joaat("SLOTID_HORSE_HORN"), &hash2))
				func_951(hash2, 0);
		}
		else if (func_1117(hParam0))
		{
			if (func_1116(joaat("SLOTID_HORSE_HORN"), &hash3))
				func_951(hash3, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_BLANKET"), &hash4))
				func_951(hash4, 0);
		}
		else if (func_1118(hParam0))
		{
			if (func_1116(joaat("SLOTID_HORSE_HORN"), &hash5))
				func_951(hash5, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_BLANKET"), &hash6))
				func_951(hash6, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_BEDROLL"), &hash7))
				func_951(hash7, 0);
		}
		else if (func_1119(hParam0))
		{
			if (func_1116(joaat("SLOTID_HORSE_HORN"), &hash8))
				func_951(hash8, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_BLANKET"), &hash9))
				func_951(hash9, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_BEDROLL"), &hash10))
				func_951(hash10, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_STIRRUP"), &hash11))
				func_951(hash11, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_SADDLEBAG"), &hash12))
				func_951(hash12, 0);
		}
		else if (func_952(hParam0))
		{
			if (func_1116(joaat("SLOTID_HORSE_HORN"), &hash13))
				func_951(hash13, 0);
		
			if (func_1116(joaat("SLOTID_HORSE_STIRRUP"), &hash14))
				func_951(hash14, 0);
		
			hash15 = func_953(hParam0);
		
			if (func_85(hash15, 0))
				func_951(hash15, 1);
		}
	
		func_954();
		return true;
	}

	return false;
}

BOOL func_952(Hash hParam0) // Position - 0x24853 Hash - 0x1FFCC90D ^0x9E730FBF
{
	if (!func_85(hParam0, 0))
		return false;

	if (func_152(hParam0, -251515357))
		return true;

	return false;
}

Hash func_953(Hash hParam0) // Position - 0x2487D Hash - 0xBD10D1A2 ^0xB99ADD5C
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
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
int func_954() // Position - 0x248E3 Hash - 0x79A7BF3 ^0x80B436A4
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

	unk = { func_193(856287005, false, 0) };
	unk6 = { func_274(856287005, unk, unk.f_4, false) };
	category = func_165(856287005);

	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, 0, &outSlotId))
		hash = func_593(unk6, joaat("SLOTID_HORSE_SADDLE"), false, -1);

	if (!func_85(hash, 0))
		return 0;

	flag = false;
	num = func_1113(856287005);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
		{
			flag = false;
			hash2 = func_593(unk6, outSlotId, false, -1);
		
			if (!func_85(hash2, 0))
			{
				if (outSlotId == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_952(hash) || func_1115(hash) || func_1117(hash) || func_1118(hash) || func_1119(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
				{
					if (func_1117(hash) || func_1118(hash) || func_1119(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_BEDROLL"))
				{
					if (func_1118(hash) || func_1119(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_STIRRUP"))
				{
					if (func_952(hash) || func_1119(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_BEDROLL"))
				{
					if (func_1119(hash))
					{
					}
					else
					{
						goto 0x195;
					}
				}
			
				if (outSlotId == joaat("SLOTID_HORSE_SADDLEBAG"))
				{
					if (func_1119(hash))
					{
					}
					else
					{
						flag = true;
						goto 0x1BD;
					}
				}
			
				flag = true;
			}
			else if (outSlotId == joaat("SLOTID_HORSE_BLANKET"))
			{
				if (!func_952(hash) && func_1120(hash2))
					flag = true;
			}
		
			if (flag)
			{
				if (func_1121(outSlotId, &unk12, true))
				{
					if (!func_594(unk12, true, false))
					{
					}
				}
			}
		}
	}

	return 1;
}

BOOL func_955(Hash hParam0, int iParam1) // Position - 0x24AD2 Hash - 0xA5C34C52 ^0x329DB4E0
{
	var unk;
	int num;
	int num2;

	if (!func_85(hParam0, 0))
		return false;

	unk.f_4 = func_696(iParam1);

	if (!func_1122(hParam0, unk.f_4))
		return false;

	num = func_447(hParam0, &unk, false, false);
	num2 = func_766(hParam0, false, false, false);

	if (num >= 0 && num2 > num)
		return false;

	return true;
}

BOOL func_956(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x24B32 Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_94(iParam2, iParam3))
		return true;

	return false;
}

void func_957(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x24B4A Hash - 0x3169A239 ^0x47E831EC
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

	func_1123(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_958(int* piParam0) // Position - 0x24BE8 Hash - 0xAC4ACAD7 ^0x53A8C861
{
	return func_1124(piParam0->f_1);
}

Hash func_959(Hash hParam0, BOOL bParam1) // Position - 0x24BF8 Hash - 0x73CC7FFA ^0x73CC7FFA
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_1125(i, true, false);
	
		if (!func_434(hParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_1126(unk[j /*2*/]))
				{
					if (!bParam1 || func_89(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_960(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24C8B Hash - 0x2596799 ^0x2596799
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_1125(i, false, true);
	
		if (!func_434(hParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_1127(unk3[j /*2*/]))
				{
					if (!bParam1 || func_89(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

int func_961(int iParam0) // Position - 0x24DEA Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

void func_962(const char* sParam0) // Position - 0x24DF7 Hash - 0x6D26E8EF ^0x36AA660D
{
	Global_1915656.f_22470 = func_164(sParam0, 10000, 0, 0, 0, true);
	return;
}

BOOL func_963(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6) // Position - 0x24E13 Hash - 0x131A2EB4 ^0xBB62EC7B
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_1128(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1, &panParam5->[i /*42*/]))
			return false;
	}

	return func_1129(piParam0, panParam1, panParam5, hParam2, bParam6);
}

int func_964(Hash hParam0, Any anParam1, var uParam2, var uParam3, var uParam4) // Position - 0x24E89 Hash - 0xBDBB6885 ^0xBDBB6885
{
	Hash key;
	Hash outData;
	int i;
	int j;
	int num;

	if (!func_432(hParam0, 2))
		return 0;

	if (*uParam2 > *anParam1)
		return 0;

	for (i = 0; i < *anParam1; i = i + 1)
	{
	}

	num = ITEMDATABASE::_0x799FCD53358ED5FA(hParam0, anParam1);

	for (j = 0; j < num; j = j + 1)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(hParam0, anParam1, j, &key))
		{
			if (anParam1->[0] == 0)
			{
				anParam1->[0] = key;
			}
			else
			{
				*uParam2 = *uParam2 + 1;
				anParam1->[*uParam2] = key;
			}
		
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(key, &outData))
			{
				if (func_85(outData, 0))
				{
					if (*uParam4 >= 0 && *uParam4 < *uParam3)
					{
						uParam3->[*uParam4 /*5*/] = { key };
						*uParam4 = *uParam4 + 1;
					}
					else
					{
						return 0;
					}
				}
			}
		
			anParam1->[*uParam2] = 0;
		
			if (*uParam2 > 0)
				*uParam2 = *uParam2 - 1;
		}
	}

	return 1;
}

BOOL func_965(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x24F6E Hash - 0x35FADD37 ^0x52F2BABB
{
	var unk;
	var unk48;

	unk.f_4 = 15;
	unk.f_36 = 10;
	func_1130(hParam0, hParam1, &unk);

	if (hParam1 == -570078785)
	{
		unk.f_3 == 0;
	
		if (!func_436(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_962(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_961(unk.f_3 * iParam2)));
		
			return false;
		}
	}
	else if (hParam1 == -915411861)
	{
		unk.f_3 == 0;
	
		if (!func_435(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_962("SHOP_H_TOO_POOR");
		
			return false;
		}
	}
	else if (hParam1 == 997808187)
	{
		return true;
	}

	if (!func_971(hParam0, iParam2, hParam1, &unk48, true))
		return false;

	return true;
}

BOOL func_966(Hash hParam0) // Position - 0x2503A Hash - 0xBF9BC979 ^0x2C23A458
{
	BOOL flag;
	Hash weaponUnlock;

	if (hParam0 == 0)
		return false;

	flag = false;

	if (func_104() == -1)
	{
		if (func_446(hParam0))
		{
			weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);
			flag = UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock);
		}
		else
		{
			return true;
		}
	}
	else
	{
		flag = UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	}

	return flag;
}

int func_967(int* piParam0, Hash hParam1) // Position - 0x25084 Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (itemInfo.f_8 != hParam1)
			{
			}
			else
			{
				num = num + itemInfo.f_9;
			}
		}
	}

	return num;
}

BOOL func_968(Hash hParam0, BOOL bParam1) // Position - 0x250EE Hash - 0xAB149130 ^0xE03110FF
{
	if (!func_152(hParam0, 947377998))
		return false;

	if (bParam1)
	{
		if (func_152(hParam0, -1090933859))
			return func_459(hParam0, true) != 0;
	
		if (func_917(hParam0, -915411861, false) || func_917(hParam0, 600942249, false) || func_917(hParam0, -570078785, false))
			return true;
		else
			return false;
	}

	return true;
}

BOOL func_969(Hash hParam0, BOOL bParam1) // Position - 0x25167 Hash - 0x40576C2F ^0xED1B83AA
{
	Hash hash;
	var unk;

	hash = func_1131(hParam0, true);

	if (hash == 0)
		return false;

	if (func_718(hash, -2141192156))
		return false;

	if (bParam1)
		if (!func_217(hash, -2141192156, &unk, false, false))
			return false;

	return true;
}

int func_970(int* piParam0, Hash hParam1) // Position - 0x251B1 Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (hParam1 != itemInfo.f_13)
			{
			}
			else
			{
				num = num + (func_448(itemInfo.f_8, hParam1, true, false, true, 0) * itemInfo.f_9);
			}
		}
	}

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_971(Hash hParam0, int iParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x2522A Hash - 0xC79E0D58 ^0xC79E0D58
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;

	unk = 15;

	if (!func_1132(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam4 && func_107(false) && !func_108();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_435(num2))
			goto 0xD9;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_436(num2))
		{
		}
		else
		{
			num3 = func_89(unk[i /*2*/], false, !flag, false);
		
			if (num3 >= num2)
			{
			}
			else
			{
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_972(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x25310 Hash - 0x40864787 ^0xC8FD8850
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_1128(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1 * panParam1->f_9, &panParam5->[i /*42*/]))
			return false;
	}

	return func_1133(piParam0, panParam1, panParam5, hParam2, bParam6, iParam7);
}

BOOL func_973(Any* panParam0, int iParam1, int iParam2) // Position - 0x2538D Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(panParam0->[iParam1 / 31], iParam1 % 31);
}

int func_974() // Position - 0x253C4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_975(int iParam0, int iParam1) // Position - 0x253D3 Hash - 0xC00BEAB5 ^0x728D99B1
{
	if (iParam1 == 0)
		return;

	if (SECURE_LOAD(&iParam0) >= 11)
		return;

	SECURE_STORE(&iParam0->f_1[SECURE_LOAD(&iParam0)], iParam1);
	SECURE_STORE(&iParam0, SECURE_LOAD(&iParam0) + 1);
	return;
}

void func_976(Any anParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18) // Position - 0x25403 Hash - 0xE040F56 ^0xE040F56
{
	int i;
	var unk;

	if (!func_712(anParam0))
		return;

	if (Global_1292143.f_2012 < 20)
	{
		Global_1292143.f_2012 = Global_1292143.f_2012 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_2012.f_1[i /*24*/] = { Global_1292143.f_2012.f_1[i + 1 /*24*/] };
		}
	}

	unk.f_7.f_1 = 11;
	unk.f_7.f_16 = 255;
	unk = { *anParam0 };
	unk.f_4 = iParam1;
	unk.f_7 = { uParam2 };
	unk.f_6 = 1;
	Global_1292143.f_2012.f_1[Global_1292143.f_2012 - 1 /*24*/] = { unk };
	return;
}

int func_977(BOOL bParam0) // Position - 0x254BE Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

BOOL func_978(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x254D0 Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

void func_979(BOOL bParam0) // Position - 0x254F9 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
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

void func_980(int iParam0) // Position - 0x25537 Hash - 0x2EDDC601 ^0x8923AAAC
{
	Any itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956875.f_5.f_7))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956875.f_5.f_7) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956875.f_5.f_7, iParam0);
	
		if (itemContextByIndex == Global_1956875.f_5.f_14[iParam0 /*102*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956875.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956875.f_5.f_14[iParam0 /*102*/]);
	return;
}

void func_981(BOOL bParam0) // Position - 0x255A5 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
	return;
}

void func_982(BOOL bParam0) // Position - 0x255DF Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
	return;
}

void func_983(BOOL bParam0) // Position - 0x25619 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33);
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
	return;
}

void func_984(BOOL bParam0) // Position - 0x25653 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_985(BOOL bParam0) // Position - 0x25676 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_986(BOOL bParam0) // Position - 0x256B8 Hash - 0xBAD014C9 ^0x3FDE3E28
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

BOOL func_987() // Position - 0x256FA Hash - 0x65674CA9 ^0xC0D8F466
{
	return true;
}

int func_988(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x25719 Hash - 0xB88D7AA5 ^0x36259347
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
	num2.f_4 = iParam2;
	num2.f_5 = iParam3;
	num2.f_7 = 1;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

int func_989() // Position - 0x2577F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_990(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x2578B Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_1134(*iParam0);
	i = func_1135(*iParam0);
	num2 = func_1136(*iParam0);
	j = func_1137(*iParam0);
	k = func_1138(*iParam0);
	l = func_1139(*iParam0);

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

	for (m = func_1140(i, num); num2 > m; m = func_1140(i, num))
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

	func_1141(iParam0, l, k, j, num2, i, num);
	return;
}

void func_991(int iParam0, int iParam1) // Position - 0x25913 Hash - 0x74C9983D ^0x6478FDCA
{
	if (iParam0 <= 0)
		return;

	if (func_1142())
	{
		Global_1913444.f_125 = MISC::GET_GAME_TIMER();
		Global_1913444.f_126 = iParam1;
	}

	Global_1913444.f_127 = Global_1913444.f_127 + iParam0;
	return;
}

BOOL func_992() // Position - 0x2594F Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_993() // Position - 0x25960 Hash - 0x11DC3931 ^0xA685465E
{
	return DLC::IS_DLC_PRESENT(joaat("dlc_ultimateedition"));
}

BOOL func_994(Hash hParam0) // Position - 0x25971 Hash - 0xDB8363F2 ^0xB30A7F5C
{
	if (!func_375(hParam0, 1955773996))
		return false;

	if (!func_1143(hParam0, 1))
		return false;

	return true;
}

BOOL func_995(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x2599C Hash - 0xCC673625 ^0x5E579BC1
{
	return func_1144(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1, iParam2, bParam3, hParam4);
}

BOOL func_996(Hash hParam0) // Position - 0x259B6 Hash - 0x6AEB7416 ^0x6AEB7416
{
	int i;
	int num;
	Hash hash;

	if (!func_1145(hParam0))
		return false;

	for (i = 0; i < 77; i = i + 1)
	{
		num = func_1146(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

BOOL func_997(int iParam0, Hash hParam1, int iParam2) // Position - 0x259F8 Hash - 0x7AC6FD0E ^0x7AC6FD0E
{
	Hash hash;
	int num;
	int num2;
	int num3;

	iParam0 = func_336(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	hash = func_1147(hParam1);

	if (hash != 0)
	{
		num = func_1148(hash, 1);
	
		if (num > -1)
		{
			num2 = Global_1903838.f_402[num];
		
			if (num2 > 0)
			{
				num3 = iParam2;
			
				if (num3 > num2)
					num3 = num2;
			
				if (!func_1149(num3, false))
				{
				}
			
				Global_1903838.f_402[num] = Global_1903838.f_402[num] - num3;
				return true;
			}
		}
	}

	return false;
}

BOOL func_998(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x25A90 Hash - 0x682F0821 ^0x8850637E
{
	Player player;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return bParam1;

	player = plParam0;

	if (player < 0 || player >= 32)
		return bParam1;

	return func_1150(player, bParam2) >= func_1151(bParam2);
}

int func_999(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x25AD1 Hash - 0xD1389191 ^0xB4D3B5D7
{
	int i;
	Hash peltFromHorse;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return iParam2;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);

	for (i = 2; i >= 0; i = i + -1)
	{
		if (pedParam0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		{
			peltFromHorse = PED::_GET_PELT_FROM_HORSE(pedParam0, i);
		
			if (peltFromHorse == hParam1)
			{
				PED::_CLEAR_PELT_FROM_HORSE(pedParam0, hParam1);
				iParam2 = iParam2 - 1;
			}
		}
		else
		{
			peltFromHorse = Global_1289643[PLAYER::PLAYER_ID() /*19*/].f_15[i];
		
			if (peltFromHorse == hParam1)
			{
				Global_1289643[PLAYER::PLAYER_ID() /*19*/].f_15[i] = 0;
				iParam2 = iParam2 - 1;
			}
		}
	
		if (iParam2 <= 0)
			break;
	}

	return iParam2;
}

int func_1000(Ped pedParam0, Hash hParam1) // Position - 0x25B83 Hash - 0x1B707959 ^0x4034662C
{
	int num;
	ItemSet itemset;
	int itemsetSize;
	int i;
	Ped entityFromItem;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return 0;

	num = 0;
	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	i = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (ENTITY::DOES_ENTITY_EXIST(entityFromItem) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(entityFromItem) && hParam1 == func_1001(entityFromItem))
			num = num + 1;
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return num;
}

Hash func_1001(Ped pedParam0) // Position - 0x25C21 Hash - 0xCBDF2AE2 ^0xCD5FF04E
{
	Hash hash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::GET_IS_ANIMAL(pedParam0) || ENTITY::_GET_IS_BIRD(pedParam0))
	{
		hash = func_249(&pedParam0);
	
		if (!func_85(hash, 0))
			hash = func_250(pedParam0);
	}
	else
	{
		hash = func_250(pedParam0);
	}

	return hash;
}

BOOL func_1002(Hash hParam0, var uParam1) // Position - 0x25C74 Hash - 0xC0DD27FA ^0xC0DD27FA
{
	*uParam1 = func_1152(hParam0);
	return *uParam1 != 0;
}

void func_1003(Any* panParam0, Any* panParam1) // Position - 0x25C8A Hash - 0xBFEF95EB ^0x45C41A3B
{
	MISC::COPY_SCRIPT_STRUCT(panParam1, panParam0, 96);
	return;
}

int func_1004(Hash hParam0) // Position - 0x25C9C Hash - 0x1C37ACD7 ^0x22120269
{
	int outSatchelItemSize;
	Hash hash;

	if (func_1002(hParam0, &hash))
		hParam0 = hash;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	switch (outSatchelItemSize)
	{
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 4;
	
		case 4:
			return 8;
	
		default:
		
	}

	return -1;
}

int func_1005(Hash hParam0) // Position - 0x25CF5 Hash - 0xB8EC44B7 ^0xD7A1073F
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return joaat("at_chicken");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return joaat("at_toad");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return joaat("at_bluejay");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("at_snake_copper_north");
	
		case -2047339431:
			return 1029100628;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return joaat("at_pheasant");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("at_californiacondor");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return joaat("at_skunk");
	
		case -2012326752:
			return -557726619;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return joaat("at_pigeon");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return joaat("at_crayfish");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return joaat("at_cardinal");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return joaat("at_carolinaparakeet");
	
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return joaat("at_pronghorn");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return joaat("at_rat");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return joaat("at_crow");
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return joaat("at_crab");
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return joaat("at_bullfrog");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return joaat("at_sparrow");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return joaat("at_rabbit");
	
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("at_muskrat");
	
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return joaat("at_deer");
	
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("at_turkey");
	
		case joaat("provision_fish_chain_pickerel_poor"):
			return joaat("at_fchainpickerel");
	
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return joaat("at_redfootedbooby");
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("at_ram_desert");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("at_possum");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("at_coyote");
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return joaat("at_quail");
	
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return joaat("at_cougar");
	
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return joaat("at_sheep");
	
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return joaat("at_owl");
	
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return joaat("at_gator");
	
		default:
		
	}

	return joaat("small_animals");
}

void func_1006(Hash hParam0, int iParam1) // Position - 0x26806 Hash - 0xE499CB2B ^0xBF16EE8A
{
	Ped mountOwnedByPlayer;

	if (func_104() == -1)
		mountOwnedByPlayer = func_177(7);
	else
		mountOwnedByPlayer = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	func_999(mountOwnedByPlayer, hParam0, iParam1);
	return;
}

BOOL func_1007(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x26835 Hash - 0x1DFD4C48 ^0x2E953DF6
{
	var unk;
	var unk6;

	if (!func_85(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_335(false) };
	unk.f_4 = 724026534;
	unk6 = { func_274(hParam0, unk, unk.f_4, false) };
	return func_275(hParam0, &unk6, &unk, iParam1, hParam3, bParam2, false);
}

BOOL func_1008(Any* panParam0) // Position - 0x2688C Hash - 0x7865E948 ^0x92258F24
{
	if (!func_1153(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

BOOL func_1009(int iParam0, var uParam1, Any* panParam2) // Position - 0x268A8 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_83(iParam0))
		return false;

	func_1154(panParam2);

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

BOOL func_1010(Any* panParam0, int iParam1) // Position - 0x269B3 Hash - 0x34992178 ^0x98B18966
{
	*panParam0 = Global_1245174.f_9818;
	panParam0->f_2 = 423895568;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(*panParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_1011() // Position - 0x269EA Hash - 0x33EB0DBC ^0xEC692AA0
{
	int numChildren;
	Any any;

	numChildren = 0;
	any = Global_1245174.f_9818;
	any.f_2 = -1041770777;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);

	return numChildren;
}

int func_1012() // Position - 0x26A22 Hash - 0x1B9090CC ^0x1B9090CC
{
	return Global_1110244.f_3667.f_938;
}

int func_1013(int iParam0, int iParam1, var uParam2) // Position - 0x26A34 Hash - 0x4D6E9A17 ^0x4D6E9A17
{
	int num;

	if (iParam0 > iParam1)
		return -1;

	num = (iParam0 + iParam1) / 2;

	if (*uParam2 < Global_1110244.f_3667.f_729[num /*2*/])
		return func_1013(iParam0, num - 1, uParam2);

	if (*uParam2 > Global_1110244.f_3667.f_729[num /*2*/])
		return func_1013(num + 1, iParam1, uParam2);

	return num;
}

int func_1014(int iParam0) // Position - 0x26A9E Hash - 0xC69036C ^0xCCA4B427
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

BOOL func_1015(int iParam0) // Position - 0x26AB6 Hash - 0x7EE3A984 ^0x7EE3A984
{
	return iParam0 > -1 && iParam0 < 83;
}

BOOL func_1016(Any* panParam0) // Position - 0x26ACC Hash - 0x5AEEE194 ^0x97DC092A
{
	int fileHandle;
	var src;

	fileHandle = func_1155();

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_1017(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int* piParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x26B05 Hash - 0x9BC890AF ^0xDF6320E0
{
	uParam0.f_2 = iParam6;
	uParam0.f_3 = iParam7;
	uParam0.f_4 = iParam8;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(piParam5, &uParam0))
		return false;

	return true;
}

struct<8> func_1018(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x26B30 Hash - 0x481BF462 ^0x481BF462
{
	return func_1156(uParam0, 52, 1);
}

int func_1019(Hash hParam0) // Position - 0x26B43 Hash - 0x3EE73043 ^0x3EE73043
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

BOOL func_1020(int iParam0, var uParam1, int iParam2, int iParam3) // Position - 0x26BDC Hash - 0x9EA53184 ^0x9EA53184
{
	int num;

	if (!func_83(iParam0))
		return false;

	if (iParam0 != 2)
		return false;

	num = func_1157(iParam0);
	return num >= iParam2 && num <= iParam3;
}

BOOL func_1021(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26C17 Hash - 0x77ECC81C ^0xEFBF0FBE
{
	if (bParam2)
		if (!func_817(iParam0))
			return false;

	if (Global_1572887.f_14 != -1)
		return Global_17418[iParam0] && bParam1 != false;

	return Global_38.f_4675[iParam0] && bParam1 != false;
}

BOOL func_1022(int iParam0) // Position - 0x26C5A Hash - 0xE139661B ^0xE139661B
{
	if (!func_817(iParam0))
		return false;

	return func_1021(iParam0, 2, true);
}

int func_1023(BOOL bParam0, Hash hParam1) // Position - 0x26C78 Hash - 0x5F8C62F0 ^0x14871F2
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return 0;

	if (!Global_1102813.f_16)
		return 0;

	if (!func_1158())
		return 0;

	if (!func_350())
		return 0;

	Global_0 = hParam1;

	if (bParam0)
		func_1026(&Global_0, 8);

	func_1026(&Global_0, 1);
	return 1;
}

BOOL func_1024(int iParam0) // Position - 0x26CCE Hash - 0xA376F75 ^0xA376F75
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

void func_1025(int iParam0) // Position - 0x26D3B Hash - 0x3B9D9F25 ^0x3B9D9F25
{
	switch (iParam0)
	{
		case 2:
			func_139(243, false);
			break;
	
		case 3:
			func_139(244, false);
			break;
	
		case 4:
			func_139(263, false);
			break;
	
		case 5:
			func_139(239, false);
			break;
	
		case 6:
			func_139(259, false);
			break;
	
		case 7:
			func_139(256, false);
			break;
	
		case 8:
			func_139(264, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_139(267, false);
			break;
	
		case 13:
			func_139(250, false);
			break;
	
		case 15:
			func_139(246, false);
			break;
	
		case 16:
			func_139(240, false);
			break;
	
		case 18:
			func_139(258, false);
			break;
	
		case 19:
			func_139(251, false);
			break;
	
		case 20:
			func_139(252, false);
			break;
	
		case 21:
			func_139(257, false);
			break;
	
		case 24:
			func_139(247, false);
			break;
	
		case 27:
			func_139(249, false);
			break;
	
		case 28:
			func_139(268, false);
			break;
	
		case 29:
			func_139(265, false);
			break;
	
		case 30:
			func_139(260, false);
			break;
	
		case 32:
			func_139(266, false);
			break;
	
		case 34:
			func_139(241, false);
			break;
	
		case 35:
			func_139(253, false);
			break;
	
		case 38:
			func_139(248, false);
			break;
	
		case 39:
			func_139(254, false);
			break;
	
		case 49:
			func_139(261, false);
			break;
	
		case 50:
			func_139(255, false);
			break;
	
		case 51:
			func_139(269, false);
			break;
	
		case 52:
			func_139(242, false);
			break;
	
		case 53:
			func_139(245, false);
			break;
	}

	return;
}

void func_1026(Hash hParam0, int iParam1) // Position - 0x26F41 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

Hash func_1027() // Position - 0x26F54 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_1676;
}

int func_1028(BOOL bParam0) // Position - 0x26F63 Hash - 0x4F98C57 ^0x1385EECF
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
	unk15 = { func_274(joaat("WARDROBE"), func_335(true), joaat("SLOTID_WARDROBE"), true) };
	hash = func_593(unk15, 552979403, true, -1);

	if (hash != 0)
	{
		if (hash == joaat("clothing_mp_female_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_FEMALE");
		else if (hash == joaat("clothing_mp_male_player_character"))
			num = joaat("MPC_PLAYER_TYPE_MP_MALE");
	
		return num;
	}

	unk19 = { func_384(0, joaat("SLOTID_NONE"), 552979403, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_387(&unk19, &num2, &num3, true))
	{
		if (num3 > 0 && func_199(&unk, 0, num2, num3))
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
				func_201(num2);
				return 0;
			}
		
			if (bParam0)
				func_594(unk, true, false);
		
			func_201(num2);
			return num;
		}
	
		func_201(num2);
	}

	return 0;
}

Hash func_1029(int iParam0) // Position - 0x27070 Hash - 0xB8EC44B7 ^0x7FF5C9C2
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

BOOL func_1030(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x2710D Hash - 0x88E96348 ^0x46451541
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
		func_832(hParam0, true, bParam2);
	}

	return flag;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_1031(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0x271ED Hash - 0xF5A6EBD3 ^0xB19C08FF
{
	Hash hash;
	int num;
	BOOL flag;
	Hash hash2;
	int num2;
	int num3;

	num3 = 0;
	num2 = func_1037(iParam6);
	num2.f_1 = hParam1;
	num2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num2);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num2, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 2049745650);
	*uParam2 = flag;

	if (!flag && !bParam3)
		func_1160(uParam0, func_1159(hash), true, true, bParam7);

	if (flag)
	{
		if (iParam9 != 8)
			func_587(-1);
	
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, -1212855483))
			num3 = func_1159(hash);
	}

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1409451727))
		{
		}
		else
		{
			hash2 = hash;
			num = func_253(hash2, 1);
		
			if (num < 0 || num > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, joaat("Component")))
			{
			}
			else
			{
				uParam0->f_1[num /*3*/] = hash;
			
				if (flag)
					func_1161(hash2, 16, 6);
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1441384))
						uParam0->f_1[num /*3*/].f_1 = joaat("base");
					else
						goto 0x16A;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&hash, &num2, 1194786549))
					if (func_1162(hash2) && func_863(uParam0->f_1[num /*3*/], hash2, &hash))
						uParam0->f_1[num /*3*/].f_1 = hash;
				else
					uParam0->f_1[num /*3*/].f_1 = hash;
			}
		}
	}

	num = 16;

	if (flag)
	{
		if (!bParam8)
			func_1164(uParam0, num3, func_1163(hParam1) != 0, iParam9);
	}
	else if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_1163(uParam0->f_1[34 /*3*/]) == 0 && !func_320(32) && !func_320(64))
	{
		uParam0->f_1[num /*3*/] = func_1043(-1293064293, 0);
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_590(uParam0, uParam0->f_1[num /*3*/], num, false, iParam9);
	}

	if (bParam4)
		*uParam0 = hParam1;

	return true;
}

void func_1032(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4, Hash hParam5) // Position - 0x2741C Hash - 0x2E9AB941 ^0x44CE1BA8
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

BOOL func_1033(var uParam0, int iParam1) // Position - 0x2744B Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_1034(var uParam0, int iParam1, int iParam2) // Position - 0x2745C Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_1035(int iParam0, int iParam1) // Position - 0x2746F Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_1036(int iParam0, int iParam1) // Position - 0x27480 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

int func_1037(int iParam0) // Position - 0x27493 Hash - 0x4840ACEF ^0x81C8BA00
{
	if (iParam0 == 0)
		iParam0 = func_580();

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return -1806335803;
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return -971050805;

	return 0;
}

void func_1038(var uParam0, BOOL bParam1, int iParam2) // Position - 0x274CF Hash - 0x3F8569B2 ^0x210C3509
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (func_152(hash, 160827531) || func_165(hash) == 81053684)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	return;
}

void func_1039(var uParam0, BOOL bParam1, int iParam2) // Position - 0x27532 Hash - 0x5D9C216F ^0x7A27103D
{
	int num;

	if (bParam1)
		return;

	num = 11;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(uParam0->f_1[num /*3*/], -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	return;
}

void func_1040(var uParam0, BOOL bParam1, int iParam2) // Position - 0x27597 Hash - 0xD866F2E0 ^0x10CD7BBC
{
	int num;

	if (bParam1)
		return;

	num = 10;

	if (-525676072 == func_165(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	return;
}

BOOL func_1041(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x275E4 Hash - 0x1514A216 ^0x8B5540D1
{
	Hash hash;

	hash = func_165(hParam0);

	if (iParam2 == 0)
		return hash == 1759215194 || hash == 344283346;

	return !bParam1 && hash == -1740828670 || hash == 344283346;
}

BOOL func_1042(int iParam0) // Position - 0x27631 Hash - 0xB39D195A ^0x26136171
{
	return Global_17418.f_55.f_664.f_1734 && iParam0 != false;
}

Hash func_1043(int iParam0, int iParam1) // Position - 0x27649 Hash - 0xD36D7E4E ^0x5FDE473
{
	int num;
	int num2;
	int num3;
	var unk;

	num3 = 0;
	unk = { func_384(0, joaat("SLOTID_NONE"), iParam0, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_387(&unk, &num, &num2, true))
	{
		if (num2 > 0)
			num3 = func_1165(num, num2, iParam1);
	
		func_201(num);
	}

	return num3;
}

void func_1044(var uParam0, int iParam1) // Position - 0x27696 Hash - 0x91DC8CCD ^0x83C6C8B8
{
	int num;
	BOOL flag;

	num = 16;
	flag = false;

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	func_588(num, iParam1);

	if (uParam0->f_1[num /*3*/].f_1 == -1539589426 || uParam0->f_1[num /*3*/].f_1 == 1334603721)
		return;

	if (uParam0->f_1[num /*3*/].f_1 == 0 || uParam0->f_1[num /*3*/].f_1 == joaat("base"))
	{
		if (func_862(uParam0->f_1[num /*3*/], flag, -1539589426) >= 0)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			return;
		}
	}

	if (func_862(uParam0->f_1[num /*3*/], flag, 1334603721) >= 0)
		uParam0->f_1[num /*3*/].f_1 = 1334603721;

	return;
}

void func_1045(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x2775C Hash - 0x40A062A0 ^0xFAF44654
{
	int num;

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, -1527414429) && !func_152(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430 || uParam0->f_1[num /*3*/].f_1 == 1334603721 && func_152(hParam2, -985549034))
	{
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_588(num, iParam3);
		}
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			func_588(num, iParam3);
		}
	}

	return;
}

void func_1046(var uParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0x27864 Hash - 0xACD9DBFF ^0x9A6E665B
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		num = 34;
		hash = uParam0->f_1[num /*3*/];
	
		if (func_152(hash, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_588(iParam2, iParam3);
		}
		else
		{
			num = 35;
			hash = uParam0->f_1[num /*3*/];
		
			if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_165(hash))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_588(iParam2, iParam3);
			}
		}
	}

	return;
}

void func_1047(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x27946 Hash - 0xCE5028CB ^0xB60DB9E1
{
	int num;
	Hash hash;

	num = 16;
	func_588(num, iParam3);
	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_152(hParam2, 1889502862) && func_165(hash) == 698653232)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
		else if (func_152(hParam2, 449467137) && func_165(hash) == 912453393)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
		else
		{
			func_588(num, iParam3);
		}
	}

	if (bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			func_588(num, iParam3);
			func_855(uParam0, false, uParam0->f_1[num /*3*/], iParam3);
		}
	
		num = 17;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
		{
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	
		return;
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, -985549034))
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
			uParam0->f_1[num /*3*/].f_1 = -1539589426;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, -1527414429) && !func_152(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

void func_1048(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x27BB3 Hash - 0xECEB911D ^0x9A8DDBFB
{
	int num;

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_588(num, iParam3);

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && !func_152(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 13;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, 675650051))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

BOOL func_1049(int iParam0) // Position - 0x27CC7 Hash - 0xF59F0C09 ^0x24088083
{
	return Global_1953292.f_1676.f_1[func_253(iParam0, 1) /*3*/] != Global_1953292.f_83[func_253(iParam0, 1) /*12*/];
}

void func_1050(var uParam0, int iParam1) // Position - 0x27CF1 Hash - 0xCA6DCF0B ^0x61DC2CB2
{
	int num;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam1);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_588(num, iParam1);

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_152(uParam0->f_1[num /*3*/], -928740153))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	
		func_588(num, iParam1);
	}

	return;
}

void func_1051(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x27DBC Hash - 0xDFA7EB0B ^0x40890D8A
{
	int num;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (bParam1)
		return;

	flag = false;
	flag2 = false;

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_165(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_1043(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}

	num = 36;
	func_588(num, iParam3);

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, -1473580422))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_152(hash, 1469783911))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else if (func_862(uParam0->f_1[num /*3*/], flag2, -2081918609) != -1)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_165(hash) == 912453393)
		{
			flag = true;
		
			if (func_152(hParam2, 1583165364))
			{
				uParam0->f_1[num /*3*/].f_1 = -2081918609;
				func_588(num, iParam3);
			}
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/])
		if (func_165(hash) == 1868067663 && func_152(hParam2, -1016441646))
			func_1166(uParam0, num, iParam3);
		else if (flag)
			func_588(num, iParam3);

	num = 34;

	if (1759215194 == func_165(uParam0->f_1[num /*3*/]))
		func_588(16, iParam3);

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, -1650340550))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_165(hash) == 1769055947)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}

	return;
}

void func_1052(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x28066 Hash - 0xB469B457 ^0x8B431766
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_165(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_1043(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_152(uParam0->f_1[num /*3*/], -2093434733))
			func_1058(uParam0, iParam3, true, false);
		else if (func_152(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	func_588(num, iParam3);
	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_152(hash, 1090938458) && func_152(hParam2, 475297062))
			func_1166(uParam0, num, iParam3);
	}

	return;
}

void func_1053(var uParam0, BOOL bParam1, int iParam2) // Position - 0x281C7 Hash - 0xBF53216D ^0xF222A515
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	func_588(36, iParam2);
	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/])
		{
			num = 16;
			uParam0->f_1[num /*3*/] = func_1043(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam2);
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_152(hash, 353024991))
		func_1166(uParam0, num, iParam2);

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_165(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	return;
}

void func_1054(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x2837C Hash - 0xA299C777 ^0x2B6FCFBA
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_165(hash) == 294388917)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_165(hash) == 912453393)
		{
			if (uParam0->f_1[num /*3*/].f_1 != joaat("base"))
			{
				uParam0->f_1[num /*3*/].f_1 = joaat("base");
				func_588(num, iParam3);
			}
		}
		else
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_588(num, iParam3);
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_152(uParam0->f_1[num /*3*/], -2093434733))
			func_1058(uParam0, iParam3, true, false);
		else if (func_152(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	return;
}

void func_1055(var uParam0, BOOL bParam1, int iParam2) // Position - 0x285B7 Hash - 0x1E46B0A9 ^0x1BAB244E
{
	int num;

	if (bParam1)
		return;

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_1166(uParam0, num, iParam2);

	num = 21;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_152(uParam0->f_1[num /*3*/], -2093434733))
		{
			func_1058(uParam0, iParam2, true, false);
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_588(num, iParam2);
		}
	}

	return;
}

void func_1056(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x287AF Hash - 0x5B6170DC ^0xD9A8FB92
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 34;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_588(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = -2081918609;
		func_588(num, iParam3);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_152(hParam2, -1278198125))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (912453393 == func_165(hash) && uParam0->f_1[num /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
			func_588(num, iParam3);
		}
	}

	return;
}

void func_1057(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0x288CC Hash - 0x24AAAC6C ^0x8A4DF257
{
	int num;

	if (bParam1)
		return;

	num = 37;

	if (func_152(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam3);
	}

	return;
}

void func_1058(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2892B Hash - 0x5D4D0F7B ^0xD4757168
{
	int num;

	num = 36;

	if (bParam2)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam1);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam1);
	}

	num = 38;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam1);
	}

	num = 35;

	if (bParam3 && -923693316 == func_165(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam1);
	}

	return;
}

void func_1059(Hash hParam0, int iParam1, int iParam2) // Position - 0x28A22 Hash - 0x9DADBD7B ^0xD8EA8C97
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	return;
}

void func_1060(var uParam0, int iParam1) // Position - 0x28A46 Hash - 0x9E628A6B ^0xBF78A72D
{
	int i;

	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_1059(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_1061(BOOL bParam0, int iParam1, int iParam2) // Position - 0x28A97 Hash - 0x2B8C80AA ^0xBEDF1A8D
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_1062(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0x28AE2 Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_71(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return 0;

	if (!func_623(&outGuid, panParam2, bParam3, false, iParam4))
		return 0;

	return 1;
}

struct<29> func_1063(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x28B30 Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_71(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_1069(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_1064(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x28BCB Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_707(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_709(func_1167(num, hParam0, panParam1), num, panParam1);
	else
		return func_710(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_1065(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x28C35 Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_71(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_1069(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_1066(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x28CB8 Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_709(func_1168(num, hParam0, panParam1), num, panParam1);
	else
		return func_710(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

struct<18> func_1067(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x28D08 Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_71(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_1069(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_1068(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x28D7D Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_707(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_709(func_1169(num, hParam0, panParam1), num, panParam1);
	else
		return func_710(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

struct<17> func_1069(var uParam0, BOOL bParam1) // Position - 0x28DE7 Hash - 0x76921103 ^0xA9DF955B
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
		unk.f_15 = func_206(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_595() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_1070() // Position - 0x28E68 Hash - 0xA584E02B ^0xA584E02B
{
	return func_83(Global_1051268);
}

BOOL func_1071(int iParam0) // Position - 0x28E7A Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_1072(Player plParam0) // Position - 0x28EC2 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_1073(Player plParam0) // Position - 0x28EDF Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_1170(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_1171(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

int func_1074(int iParam0, Hash hParam1) // Position - 0x28F62 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_85(hParam1, 0))
		return 0;

	guid = { func_1172(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_1075() // Position - 0x28FA0 Hash - 0xC82BB3B3 ^0x6740E474
{
	Vehicle vehicleOwnedByPlayer;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		return false;

	vehicleOwnedByPlayer = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());

	if (!ENTITY::DOES_ENTITY_EXIST(vehicleOwnedByPlayer))
		return false;

	if (!func_1173(vehicleOwnedByPlayer))
		return false;

	return true;
}

BOOL func_1076(Player plParam0) // Position - 0x28FEF Hash - 0xD9DF34E9 ^0x1EDCC4EC
{
	float num;

	num = func_1174(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

void func_1077(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2900A Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_1134(*uParam0);
	i = func_1135(*uParam0);
	j = func_1136(*uParam0);
	k = func_1137(*uParam0);
	l = func_1138(*uParam0);
	m = func_1139(*uParam0);

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
	
		num3 = func_1140(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_1141(uParam0, m, l, k, j, i, num);
	return;
}

int func_1078(int iParam0, int iParam1) // Position - 0x2917D Hash - 0xAECFF2CE ^0x28AB7A26
{
	if (iParam1 == 2)
		iParam1 = func_760(2);

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

int func_1079(int iParam0, int iParam1) // Position - 0x291CD Hash - 0xAECFF2CE ^0xA6B4AB7D
{
	if (iParam1 == 2)
		iParam1 = func_760(2);

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

BOOL func_1080(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2921F Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_1175(iParam1) || !func_1175(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_1081(int iParam0, int iParam1, int iParam2) // Position - 0x2924C Hash - 0x7E1E307C ^0xC0CC80A4
{
	if (iParam2 == 2)
		iParam2 = func_760(2);

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

void func_1082(int iParam0, int iParam1, int iParam2) // Position - 0x292A2 Hash - 0x7E1E307C ^0x81E4DDD9
{
	if (iParam2 == 2)
		iParam2 = func_760(2);

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

BOOL func_1083(Ped pedParam0, int iParam1, float fParam2) // Position - 0x292F8 Hash - 0xD72B3B3A ^0x22A28347
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_1176(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_1084(int iParam0, int iParam1, int iParam2) // Position - 0x2934D Hash - 0x9FB0AAD8 ^0x433FFF3E
{
	if (iParam2 == 2)
		iParam2 = func_760(2);

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

void func_1085(Ped pedParam0, int iParam1, float fParam2) // Position - 0x293AE Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_1177(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_1178(iParam1), fParam2, -1);

	return;
}

void func_1086(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x293DA Hash - 0xD1E7435D ^0x45C01A35
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_760(2);

	num = Global_1295666.f_16;
	func_1179(iParam0, fParam1, iParam3);

	if (bParam2)
		func_1180(iParam0, num, iParam3);

	return;
}

BOOL func_1087(int iParam0, BOOL bParam1) // Position - 0x29410 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_1080(func_989(), iParam0, bParam1);
}

float func_1088(int iParam0, int iParam1) // Position - 0x29424 Hash - 0x422268C7 ^0x22464E0E
{
	if (iParam1 == 2)
		iParam1 = func_760(1);

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

int func_1089(float fParam0) // Position - 0x29470 Hash - 0x991CF40A ^0x6EC613A5
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

int func_1090(int iParam0, float fParam1, int iParam2) // Position - 0x2949B Hash - 0x91D240B ^0x31A81242
{
	if (!func_1181(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_760(2);

	func_1182(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

BOOL func_1091(int iParam0) // Position - 0x294EC Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_1092(int iParam0) // Position - 0x2951B Hash - 0x21CE226B ^0xD425A44
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

void func_1093(int iParam0) // Position - 0x29556 Hash - 0x5D78382 ^0x8F13B3A8
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
		num3 = func_1183(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_1184(num);
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

void func_1094(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29626 Hash - 0x5C29635D ^0x5C29635D
{
	func_897(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

void func_1095(var uParam0, Hash hParam1, Hash hParam2) // Position - 0x29640 Hash - 0x8560B5D8 ^0x6EB0FF3E
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
				if (outData.f_2 == joaat("cost_type_craft") && outData != -489628648 && outData != -2141192156 && Global_1913634.f_1579 || !func_917(hParam1, outData, true))
					Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 = Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 + 1;
			else
				Global_1913634[uParam0->f_45 - 1 /*9*/].f_8 = i;
	}

	return;
}

void func_1096(var uParam0, Hash hParam1) // Position - 0x296FC Hash - 0x73D38B14 ^0x6EBCB5A9
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_288(hParam1, 1697966752);

	if (num3 == 0)
		return;

	unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };

	if (func_612(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			hash = func_698(i, num);
		
			if (func_85(hash, 0))
				if (Global_1913634.f_1579 || !func_917(hash, joaat("cost_crafting_grill"), true))
					Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 = Global_1913634[uParam0->f_45 - 1 /*9*/].f_7 + 1;
		}
	
		func_614(num);
	}

	return;
}

void func_1097(var uParam0, Hash hParam1, int iParam2) // Position - 0x297B3 Hash - 0x8D770326 ^0x14D0BF12
{
	int num;
	int num2;
	int num3;
	var unk;
	int i;
	Hash hash;

	num3 = func_288(hParam1, -1859264326);

	if (num3 == 0)
		return;

	unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num3, 0) };

	if (func_612(unk, &num, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (uParam0->f_45 >= 175)
				break;
		
			hash = func_698(i, num);
		
			if (func_85(hash, 0) && hash != hParam1)
				func_905(uParam0, hash, iParam2);
		}
	
		func_614(num);
	}

	return;
}

void func_1098(var uParam0) // Position - 0x2984B Hash - 0xF0728FFC ^0xF0728FFC
{
	func_614(*uParam0);
	*uParam0 = -1;
	return;
}

void func_1099(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2985F Hash - 0xE8AAFAC7 ^0xFC8A8321
{
	Hash key;
	var unk;
	Hash hash;
	Hash hash2;
	int num;
	int num2;
	int num3;
	BOOL flag;
	var unk5;
	Hash hash3;
	BOOL flag2;
	Hash hash4;
	Hash hash5;
	int num4;
	const char* str;
	int outData;
	BOOL flag3;
	int i;
	var outData2;
	Hash hash6;

	key = Global_1913634[hParam1 /*9*/].f_6;
	TEXT_LABEL_ASSIGN_STRING(&unk, "r_", 32);
	TEXT_LABEL_APPEND_INT(&unk, key, 32);
	TEXT_LABEL_APPEND_INT(&unk, hParam1, 32);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913634[hParam1 /*9*/].f_1))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913634[hParam1 /*9*/].f_1);

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_30, &unk);
	Global_1913634[hParam1 /*9*/].f_1 = hash;
	hash2 = Global_1913634[hParam1 /*9*/].f_5;
	num = func_218(key, hash2, bParam3, false);
	num2 = func_89(key, false, false, false);
	num3 = func_888(key, false);

	if (num3 != -1)
		num3 = num3 - num2;
	else
		num3 = num;

	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "name", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eOutputItem", key);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "eCost", hash2);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iIndex", hParam1);

	if (!Global_1913634.f_1579 && func_917(key, hash2, true))
	{
		flag = true;
		Global_1913634[hParam1 /*9*/].f_7 = 0;
	}

	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iCurCostVariant", Global_1913634[hParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, "iNumCostVariants", Global_1913634[hParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "bFireCrafting", hash2 == -257768755);
	TEXT_LABEL_APPEND_INT(&unk5, func_424(num3, num), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "count", &unk5);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "visible", false);
	flag2 = false;

	if (func_103(uParam0, 2))
		hash3 = num > 0 && func_919(key) && !flag ? 1 : 0;
	else
		hash3 = num3 > 0 && num > 0 && !flag ? 1 : 0;

	if (hash3 == 0 && func_1100(key))
	{
		if (func_1101(key, hash2, uParam0, bParam3, &hash4, &hash5, &num4))
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

	if (func_368(key, &str, joaat("Inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "texture", str);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "textureDictionary", str.f_1);
	}

	if (!func_103(uParam0, 4))
		if (hash2 == -214678071 || hash2 == joaat("cost_crafting_grill") || hash2 == -257768755)
			hash3 = 0;

	if (hash3 == 1)
	{
		if (!func_413(2) && func_288(key, -1636519629) == -701492487)
		{
			Global_1913634[hParam1 /*9*/].f_2 = 0;
			hash3 = 0;
		}
		else
		{
			uParam0->f_47 = uParam0->f_47 + 1;
		
			if (func_227(key, uParam0->f_42))
				uParam0->f_48 = uParam0->f_48 + 1;
		
			Global_1913634[hParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1913634[hParam1 /*9*/].f_2 = 0;
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
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, -1, joaat("crafting_list_item"), hash);

	return;
}

BOOL func_1100(Hash hParam0) // Position - 0x29E92 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

BOOL func_1101(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, var uParam4, var uParam5, var uParam6) // Position - 0x29E9B Hash - 0x2B10BFBA ^0x2B10BFBA
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

	if (!func_85(hParam0, 0))
		return false;

	if (!Global_1913634.f_1579 && func_917(hParam0, hParam1, true))
		return false;

	if (func_103(uParam2, 2) && !func_919(hParam0))
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
		num3 = func_288(hParam0, 1697966752);
	
		if (num3 == 0)
			return false;
	
		unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, joaat("cost_crafting_grill"), 0, -1, num3, 0) };
	
		if (func_612(unk, &num, &num2, 0))
		{
			for (i = 0; i < num2; i = i + 1)
			{
				hash = func_698(i, num);
			
				if (hParam0 == hash)
				{
				}
				else if (!Global_1913634.f_1579 && func_917(hash, joaat("cost_crafting_grill"), true))
				{
				}
				else if (func_677(hash, joaat("cost_crafting_grill"), false, bParam3, false) && !func_423(hash, 1, false))
				{
					func_614(num);
					*uParam4 = hash;
					*uParam5 = joaat("cost_crafting_grill");
					*uParam6 = i;
				
					if (func_152(*uParam4, 2127114599))
						*uParam6 = 1;
					else if (func_152(*uParam4, -1864584831))
						*uParam6 = 2;
					else if (func_152(*uParam4, 1967571132))
						*uParam6 = 3;
				
					return true;
				}
			}
		
			func_614(num);
		}
	
		if (hParam1 == joaat("cost_crafting_grill"))
		{
			unk = { func_611(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, -214678071, 0, -1, num3, 0) };
		
			if (func_612(unk, &num, &num2, 0))
			{
				for (j = 0; j < num2; j = j + 1)
				{
					hash2 = func_698(j, num);
				
					if (hParam0 == hash2)
					{
					}
					else if (!Global_1913634.f_1579 && func_917(hash2, -214678071, true))
					{
					}
					else if (func_677(hash2, -214678071, false, bParam3, false) && !func_423(hash2, 1, false))
					{
						func_614(num);
						*uParam4 = hash2;
						*uParam5 = -214678071;
						*uParam6 = j;
						return true;
					}
				}
			
				func_614(num);
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
					if (outData != -489628648 && outData != -2141192156 && Global_1913634.f_1579 || !func_917(hParam0, outData, true))
					{
						if (func_677(hParam0, outData, false, bParam3, false) && !func_423(hParam0, 1, false))
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

BOOL func_1102(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x2A1BA Hash - 0x5E278D9E ^0x9ED660B8
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_432(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_104() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_1185(hParam0, hParam1, &unk, &num) || num < 1)
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return 1;
		}
	}

	return 0;
}

BOOL func_1103(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x2A248 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_85(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	if (outData.f_35 > 10)
		outData.f_35 = 10;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

int func_1104() // Position - 0x2A2CC Hash - 0x974F0551 ^0x57E78BB0
{
	Player gangLeader;

	gangLeader = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	return func_904(gangLeader);
}

int func_1105(Hash hParam0) // Position - 0x2A2E8 Hash - 0x72F100A6 ^0xB841B60C
{
	switch (hParam0)
	{
		case -1612693182:
			return 2;
	
		case -1171462349:
			return 4;
	
		case 1046181202:
			return 0;
	
		case 1689071181:
			return 3;
	
		case 1856073229:
			return 1;
	
		default:
		
	}

	if (func_152(hParam0, -2011345500))
		return 5;

	return 0;
}

char* func_1106(Hash hParam0) // Position - 0x2A340 Hash - 0x33FCA2DF ^0xC8C0A125
{
	switch (func_1105(hParam0))
	{
		case 1:
			return "STEW_TIP_LOW";
	
		case 2:
			return "STEW_TIP_MED";
	
		case 3:
			return "STEW_TIP_HIGH";
	
		case 4:
			return "STEW_TIP_BEST";
	
		case 5:
			return "STEW_TIP_DAILY";
	
		default:
		
	}

	return "STEW_TIP_LOW";
}

int func_1107(Player plParam0) // Position - 0x2A399 Hash - 0xC91C7790 ^0xF91500D
{
	int i;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return -1;

	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141332.f_1091), plParam0))
		return -1;

	for (i = 0; i < 32; i = i + 1)
	{
		if (Global_1141332[i /*27*/].f_9 == plParam0 && Global_1141332[i /*27*/] != 3)
			return i;
	}

	return -1;
}

int func_1108(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x2A3FC Hash - 0x269D15B1 ^0x92B12EEC
{
	int num;
	var unk;
	var unk6;
	var unk23;

	num = -1;
	unk = { func_193(joaat("currency_cash"), true, 0) };
	unk6 = { func_1186(joaat("currency_cash"), unk, unk.f_4, iParam0, true) };
	unk6.f_12 = iParam2;
	num = func_450(joaat("use"), &unk6, bParam3);

	if (num == -1)
	{
	}
	else
	{
		unk23.f_7 = -142743235;
		unk23.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk23.f_12), sParam1, 32);
		func_225(num, unk23);
	}

	return num;
}

void func_1109(int iParam0) // Position - 0x2A475 Hash - 0xB563B4BE ^0xBC9B33CC
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_695() < iParam0)
		iParam0 = func_695();

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_383(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_1110(int iParam0, char* sParam1, int iParam2) // Position - 0x2A4B1 Hash - 0xA31E0DC ^0x4B55F20A
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_382(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

int func_1111(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x2A4F2 Hash - 0xC397F4D3 ^0xB04EEF70
{
	int num;
	int num2;
	Hash hash;
	var unk;
	var unk6;
	int num3;
	int num4;

	num = -1;
	num2 = func_700(hParam0);
	hash = func_699(hParam0);

	if (hash != 0)
	{
		if (!func_107(false) || func_108())
		{
			if (bParam2)
			{
				func_110(func_109(joaat("broken_down"), joaat("small_animals")), 1);
				return func_1187(hash, num2, hParam0, hParam1);
			}
		
			unk = { func_193(hParam0, true, 0) };
			unk6 = { func_274(hParam0, unk, unk.f_4, true) };
			num3 = func_1188(hParam0, &unk6, 1, -142743235, false, true);
		
			if (num3 != -1)
			{
				num4.f_7 = -142743235;
				num4.f_16 = -1;
				num4 = 1;
				num4.f_3 = 1;
				func_225(num3, num4);
			}
		
			return 0;
		}
	
		if (func_74(hParam0, 1, true, -142743235))
			num = func_1187(hash, num2, hParam0, hParam1);
	}

	return num;
}

int func_1112(Ped pedParam0, Any* panParam1) // Position - 0x2A5CE Hash - 0xBB5BB774 ^0xFE621BC6
{
	int pedDamageCleanliness;
	int animalRarity;
	int skinningQuality;
	int pedQuality;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	pedDamageCleanliness = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	animalRarity = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (animalRarity == 2)
	{
		skinningQuality = 4;
	}
	else if (animalRarity == 1)
	{
		skinningQuality = 3;
	}
	else
	{
		pedQuality = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (pedQuality)
		{
			case -1:
			case 2:
				skinningQuality = 2;
				break;
		
			case 0:
				skinningQuality = 0;
				break;
		
			case 1:
				skinningQuality = 1;
				break;
		}
	}

	if (Global_17340.f_2 != 3)
		animalRarity = Global_17340.f_2;

	num = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(panParam1, pedParam0, pedDamageCleanliness, skinningQuality);
	return num;
}

int func_1113(Hash hParam0) // Position - 0x2A680 Hash - 0xF4E671A6 ^0x4954A67D
{
	Hash category;

	if (!func_85(hParam0, 0))
		return 0;

	category = func_165(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_1114(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0x2A6AF Hash - 0x113CD144 ^0x113CD144
{
	return func_1062(&uParam0, hParam4, panParam5, bParam6, iParam7);
}

BOOL func_1115(Hash hParam0) // Position - 0x2A6C5 Hash - 0x5E6E1858 ^0x6F4DE1DC
{
	!func_85(hParam0, 0);

	if (func_152(hParam0, 162787671))
		return true;

	return false;
}

BOOL func_1116(Hash hParam0, var uParam1) // Position - 0x2A6EB Hash - 0x5707A863 ^0xE95FAC31
{
	var unk;

	if (!func_1189(856287005, hParam0))
		return false;

	unk = { func_950() };
	*uParam1 = func_593(unk, hParam0, false, -1);

	if (!func_85(*uParam1, 0))
		return false;

	return true;
}

BOOL func_1117(Hash hParam0) // Position - 0x2A72E Hash - 0xFE7E2AF0 ^0xD9E8AFF
{
	!func_85(hParam0, 0);
	return hParam0 == 1362183957 || hParam0 == 563996796 || hParam0 == joaat("horse_equipment_moonshinersaddle_001_improved_new_saddle_000");
}

BOOL func_1118(Hash hParam0) // Position - 0x2A765 Hash - 0xE73A5858 ^0x53D14ED5
{
	!func_85(hParam0, 0);
	return hParam0 == 2031387366 || hParam0 == 1270980548;
}

BOOL func_1119(Hash hParam0) // Position - 0x2A78E Hash - 0x1814AD50 ^0xEA253034
{
	!func_85(hParam0, 0);
	return hParam0 == -1731781873;
}

BOOL func_1120(Hash hParam0) // Position - 0x2A7A9 Hash - 0x37EEAC8A ^0x201FD0EE
{
	if (hParam0 == 263080063 || hParam0 == -34331381 || hParam0 == -993578318 || hParam0 == 579268144 || hParam0 == 1104489688)
		return true;

	return false;
}

BOOL func_1121(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x2A7F9 Hash - 0x73B59486 ^0xBF979BF0
{
	int num;
	int num2;
	var unk;
	var unk19;
	int i;

	if (hParam0 == 0)
		return false;

	unk = { func_384(0, hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };
	func_386(&unk, func_950());

	if (func_387(&unk, &num, &num2, false))
	{
		unk19.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_199(&unk19, i, num, num2))
			{
				if (func_85(unk19.f_4, 0) && !unk19.f_10)
				{
					if (bParam2 && func_1120(unk19.f_4))
					{
					}
					else
					{
						*uParam1 = { unk19 };
						func_201(num);
						return true;
					}
				}
			}
		}
	
		func_201(num);
	}

	return false;
}

BOOL func_1122(Hash hParam0, var uParam1) // Position - 0x2A8B1 Hash - 0x6C0FFC3B ^0xB2795CB6
{
	int i;
	var outSlotId;
	var unk;
	Hash category;
	int num;

	if (hParam0 != 0)
	{
		category = func_165(hParam0);
	
		if (category != 0)
		{
			num = func_1190(hParam0);
		
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

void func_1123(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2A905 Hash - 0xBC161045 ^0xD3B33F74
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

	func_1191(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_1124(int iParam0) // Position - 0x2A9E1 Hash - 0xA7E21081 ^0xBD28E742
{
	int num;
	int status;

	num = func_646(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_957(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_957(iParam0, 4, 0, 0);
		}
	}

	return num;
}

Hash func_1125(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2AA6B Hash - 0xC67FD48A ^0x72A5971A
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_1126(Hash hParam0) // Position - 0x2AB07 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_165(hParam0) == 1946043663;
}

BOOL func_1127(Hash hParam0) // Position - 0x2AB1B Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_165(hParam0) == -126813555;
}

BOOL func_1128(Hash hParam0, int iParam1, var uParam2) // Position - 0x2AB2F Hash - 0x373A2E12 ^0xF0869689
{
	var unk;
	int num;
	int num2;
	var unk6;
	int num3;
	int i;

	*uParam2 = hParam0;

	if (func_279(false))
	{
		num = func_437(func_1192(), hParam0);
	
		if (num != 0)
		{
			unk = { func_335(true) };
			unk.f_4 = func_696(num);
			uParam2->f_1[0 /*4*/] = { func_274(hParam0, unk, unk.f_4, true) };
		
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
				return true;
		}
	}

	num2 = func_206(hParam0, joaat("DEFAULT"));

	if (num2 != 0)
	{
		unk6 = 10;
	
		if (!func_514(&unk6, &num3, hParam0, num2, iParam1, true) || num3 < 1)
			return false;
	
		for (i = 0; i < num3; i = i + 1)
		{
			uParam2->f_1[i /*4*/] = { func_274(hParam0, unk6[i /*6*/], unk6[i /*6*/].f_4, true) };
		
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[i /*4*/]))
				return false;
		}
	
		return true;
	}

	unk = { func_193(hParam0, true, 0) };
	uParam2->f_1[0 /*4*/] = { func_274(hParam0, unk, unk.f_4, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
		return false;

	return true;
}

BOOL func_1129(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4) // Position - 0x2AC51 Hash - 0xB36012C8 ^0xBC48CAED
{
	if (hParam3 != 541670136 && hParam3 != joaat("batch"))
		return false;

	if (!func_1193(*panParam1))
		return false;

	if (!func_1194(piParam0, hParam3))
		return false;

	if (NETSHOPPING::_0xA3B8D31C13CB4239(*piParam0, 541670136, panParam1, 18, panParam2, *panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_1195(piParam0, bParam4);
}

BOOL func_1130(Hash hParam0, Hash hParam1, Any anParam2) // Position - 0x2ACBD Hash - 0x29542237 ^0x85ED2DB5
{
	int i;
	int num;

	num = ITEMDATABASE::_0x7A35A72A692BE9DB(hParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(hParam0, i, anParam2) && *anParam2 == hParam1)
			return true;
	}

	return false;
}

Hash func_1131(Hash hParam0, BOOL bParam1) // Position - 0x2ACFD Hash - 0xA9E35D6B ^0xBA3EB97
{
	if (!func_968(hParam0, bParam1))
		return 0;

	if (hParam0 == joaat("document_pamphlet_tracking_arrow"))
		return func_459(joaat("ammo_arrow_tracking"), true);
	else if (hParam0 == joaat("document_pamphlet_poison_bottle"))
		return func_459(joaat("ammo_poisonbottle"), true);
	else if (hParam0 == 318000298)
		return func_459(-1939515319, true);
	else if (hParam0 == -1771777013)
		return func_459(-1903059161, true);
	else if (hParam0 == 375366730)
		return func_459(-252071901, true);
	else if (hParam0 == -1309887827)
		return func_459(-611782825, true);

	return func_459(hParam0, true);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_1132(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2ADB5 Hash - 0x583856CF ^0xF105F8D9
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_432(hParam0, 2))
		return false;

	*uParam3 = ITEMDATABASE::_0x388088BFF3681189(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_1196(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_1133(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4, int iParam5) // Position - 0x2AE45 Hash - 0xA8760DB6 ^0xC89F5487
{
	if (hParam3 != 2113164098 && hParam3 != joaat("Sell") && hParam3 != joaat("use"))
		return false;

	if (!func_1197(hParam3, panParam1, iParam5))
		return false;

	if (!func_1194(piParam0, hParam3))
		return false;

	if (func_1198(*piParam0, hParam3, panParam1, panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_1195(piParam0, bParam4);
}

int func_1134(int iParam0) // Position - 0x2AEB7 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_1135(int iParam0) // Position - 0x2AEDC Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1136(int iParam0) // Position - 0x2AEEF Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1137(int iParam0) // Position - 0x2AF02 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1138(int iParam0) // Position - 0x2AF15 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1139(int iParam0) // Position - 0x2AF27 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1140(int iParam0, int iParam1) // Position - 0x2AF39 Hash - 0x893AC59E ^0x893AC59E
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

void func_1141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2AFD3 Hash - 0xA65AB937 ^0xA65AB937
{
	func_1199(uParam0, iParam6);
	func_1200(uParam0, iParam5);
	func_1201(uParam0, iParam4);
	func_1202(uParam0, iParam3);
	func_1203(uParam0, iParam2);
	func_1204(uParam0, iParam1);
	return;
}

BOOL func_1142() // Position - 0x2B00B Hash - 0x977C1DDD ^0x1581CA55
{
	return Global_1913444.f_127 == 0;
}

BOOL func_1143(Hash hParam0, int iParam1) // Position - 0x2B01B Hash - 0xC9BD5171 ^0xC9BD5171
{
	int num;

	num = func_1205(hParam0);

	if (num == -1)
		return false;

	return num > iParam1;
}

BOOL func_1144(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x2B03A Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_85(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_1206(iParam0, hParam1, 1))
		return 0;

	statId = { func_191(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_1074(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_1074(iParam0, hParam1) - iParam2 < 0)
		{
			func_1144(iParam0, hParam1, func_89(hParam1, false, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_1207(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!bParam3 && hParam1 != 1309979101)
		func_190(hParam1, -iParam2, flag, flag2, flag3, false, false);

	return 1;
}

BOOL func_1145(Hash hParam0) // Position - 0x2B114 Hash - 0x8740500B ^0x17CABE34
{
	if (!func_85(hParam0, 0))
		return false;

	return func_152(hParam0, 1686880204) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_1146(int iParam0, int iParam1) // Position - 0x2B142 Hash - 0xE1D12727 ^0xAE678AE7
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_alligator_skin");
	
		case 1:
			return joaat("PROVISION_ALLIGATOR_SKIN_POOR");
	
		case 2:
			return joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE");
	
		case 3:
			return joaat("provision_beaver_fur");
	
		case 4:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 5:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 6:
			return joaat("provision_boar_skin");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 8:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 9:
			return joaat("provision_buck_fur");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 11:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("provision_coyote_fur");
	
		case 16:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 18:
			return joaat("provision_deer_hide");
	
		case 19:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 20:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 21:
			return joaat("provision_fox_fur");
	
		case 22:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 23:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 24:
			return joaat("provision_goat_hair");
	
		case 25:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 26:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 27:
			return joaat("provision_javelina_skin");
	
		case 28:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 29:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 30:
			return joaat("provision_loanshark_skins");
	
		case 31:
			return joaat("provision_panther_fur");
	
		case 32:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 33:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 34:
			return joaat("provision_pig_skin");
	
		case 35:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 36:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 37:
			return joaat("provision_pronghorn_fur");
	
		case 38:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 39:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 40:
			return joaat("provision_ram_hide");
	
		case 41:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 42:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 43:
			return joaat("provision_sheep_wool");
	
		case 44:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 45:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 46:
			return joaat("provision_wolf_fur");
	
		case 47:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 48:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 49:
			return 121494806;
	
		case 50:
			return -251416414;
	
		case 51:
			return -1787430524;
	
		case 52:
			return -1572330336;
	
		case 53:
			return -1249752300;
	
		case 54:
			return -940052481;
	
		case 55:
			return -308200059;
	
		case 56:
			return -1218522879;
	
		case 57:
			return 923422806;
	
		case 58:
			return 832214437;
	
		case 59:
			return 397926876;
	
		case 60:
			return 219794592;
	
		case 61:
			return -1061362634;
	
		case 62:
			return 1728819413;
	
		case 63:
			return 1009802015;
	
		case 64:
			return 1276143905;
	
		case 65:
			return -1262044528;
	
		case 66:
			return -963027403;
	
		case 67:
			return 2088901891;
	
		case 68:
			return 836208559;
	
		case 69:
			return 1600479946;
	
		case 70:
			return -675142890;
	
		case 71:
			return -906131571;
	
		case 72:
			return -591844128;
	
		case 73:
			return -1946740647;
	
		case 74:
			return -1548204069;
	
		case 75:
			return -907373381;
	
		case 76:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

Hash func_1147(Hash hParam0) // Position - 0x2B593 Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_996(hParam0))
		return 0;

	return hParam0;
}

int func_1148(Hash hParam0, int iParam1) // Position - 0x2B5AB Hash - 0x9271BD12 ^0x9271BD12
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 3;
	
		case -1946740647:
			return 73;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
	
		case joaat("provision_deer_hide"):
			return 18;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case -1787430524:
			return 51;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
	
		case -1572330336:
			return 52;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
	
		case -1548204069:
			return 74;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
	
		case joaat("provision_javelina_skin"):
			return 27;
	
		case joaat("provision_sheep_wool"):
			return 43;
	
		case -1262044528:
			return 65;
	
		case -1249752300:
			return 53;
	
		case -1218522879:
			return 56;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
	
		case -1061362634:
			return 61;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
	
		case -963027403:
			return 66;
	
		case -940052481:
			return 54;
	
		case -907373381:
			return 75;
	
		case -906131571:
			return 71;
	
		case joaat("provision_buck_fur"):
			return 9;
	
		case joaat("provision_alligator_skin"):
			return 0;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
	
		case -675142890:
			return 70;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
	
		case -591844128:
			return 72;
	
		case joaat("provision_ram_hide"):
			return 40;
	
		case joaat("provision_panther_fur"):
			return 31;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
	
		case -308200059:
			return 55;
	
		case -251416414:
			return 50;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
	
		case joaat("provision_pig_skin"):
			return 34;
	
		case 0:
			return 76;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
	
		case 121494806:
			return 49;
	
		case 219794592:
			return 60;
	
		case joaat("provision_fox_fur"):
			return 21;
	
		case 397926876:
			return 59;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
	
		case joaat("provision_pronghorn_fur"):
			return 37;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
	
		case 832214437:
			return 58;
	
		case 836208559:
			return 68;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
	
		case 923422806:
			return 57;
	
		case 1009802015:
			return 63;
	
		case joaat("provision_wolf_fur"):
			return 46;
	
		case joaat("provision_coyote_fur"):
			return 15;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
	
		case 1276143905:
			return 64;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
	
		case 1600479946:
			return 69;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
	
		case joaat("provision_goat_hair"):
			return 24;
	
		case 1728819413:
			return 62;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
	
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
	
		case joaat("provision_loanshark_skins"):
			return 30;
	
		case 2088901891:
			return 67;
	
		case joaat("provision_boar_skin"):
			return 6;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_1149(int iParam0, BOOL bParam1) // Position - 0x2B913 Hash - 0x7B65B858 ^0xB5F74795
{
	Player player;
	Player player2;
	int num;

	player = PLAYER::PLAYER_ID();

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		return false;

	player2 = player;

	if (player2 < 0 || player2 >= 32)
		return false;

	if (func_1150(player2, bParam1) == 0)
		return false;

	num = iParam0;

	if (num > func_1150(player2, bParam1))
		num = func_1150(player2, bParam1);

	if (!bParam1)
		Global_1289643[player2 /*19*/] = Global_1289643[player2 /*19*/] - num;
	else
		Global_1289643[player2 /*19*/].f_1 = Global_1289643[player2 /*19*/].f_1 - num;

	if (func_1150(player2, bParam1) < 0)
		if (!bParam1)
			Global_1289643[player2 /*19*/] = 0;
		else
			Global_1289643[player2 /*19*/].f_1 = 0;
	else if (func_1150(player2, bParam1) > func_1151(bParam1))
		if (!bParam1)
			Global_1289643[player2 /*19*/] = func_1151(bParam1);
		else
			Global_1289643[player2 /*19*/].f_1 = func_1151(bParam1);

	return true;
}

int func_1150(Player plParam0, BOOL bParam1) // Position - 0x2BA0C Hash - 0x5A8EAA13 ^0xC5357BF7
{
	return bParam1 ? Global_1289643[plParam0 /*19*/].f_1 : Global_1289643[plParam0 /*19*/];
}

int func_1151(BOOL bParam0) // Position - 0x2BA2C Hash - 0x929DFA50 ^0x5A58BCD2
{
	return bParam0 ? Global_1901671.f_701.f_30 : Global_1901671.f_701.f_29;
}

int func_1152(Hash hParam0) // Position - 0x2BA4C Hash - 0xB8EC44B7 ^0x34C82EA7
{
	switch (hParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR");
	
		case -2115566177:
			return -827518870;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR");
	
		case -1886936864:
			return 1367447057;
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY");
	
		case -1671125008:
			return -1434083213;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY");
	
		case -1066678466:
			return 1888419655;
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR");
	
		case -438328437:
			return 1493601140;
	
		case -375348364:
			return -2040849706;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY");
	
		case -352805801:
			return -229670230;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY");
	
		case -132069363:
			return -885592109;
	
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR");
	
		case -101301217:
			return 2014346813;
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY");
	
		case 213936563:
			return -1638839614;
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY");
	
		case 403588059:
			return 2004357248;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY");
	
		case 616254818:
			return -70954328;
	
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY");
	
		case 777641606:
			return -2092697195;
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
	
		case 897866285:
			return 1705186999;
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY");
	
		case 1020297399:
			return 1527400190;
	
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY");
	
		case 1135507073:
			return -1821314478;
	
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY");
	
		case 1491466288:
			return 546758456;
	
		case 1518910503:
			return 1758585485;
	
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT");
	
		case 1586020612:
			return -1378208045;
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR");
	
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY");
	
		case 1683741809:
			return 1842740532;
	
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY");
	
		case 1718756614:
			return -1282621313;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT");
	
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY");
	
		case 1815502722:
			return -2043601589;
	
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR");
	
		case 1892902297:
			return 1450608653;
	
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY");
	
		case 1920759986:
			return 1543592331;
	
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY");
	
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT");
	
		default:
		
	}

	return 0;
}

BOOL func_1153(Any* panParam0) // Position - 0x2C48B Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

void func_1154(Any* panParam0) // Position - 0x2C4C1 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

int func_1155() // Position - 0x2C4D7 Hash - 0x451321BF ^0xEF0A3B85
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_1156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x2C4EC Hash - 0x1A324EB1 ^0xE8AB3DDD
{
	var unk;

	uParam0.f_2 = iParam5;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &uParam0);
	return unk;
}

int func_1157(int iParam0, var uParam1) // Position - 0x2C50A Hash - 0x9C3ED8B4 ^0x9C3ED8B4
{
	if (iParam0 == 2)
		return func_800(iParam0);

	return -1;
}

BOOL func_1158() // Position - 0x2C524 Hash - 0xE9D1625C ^0xC9A64AD
{
	return !Global_1572887.f_10;
}

int func_1159(int iParam0) // Position - 0x2C533 Hash - 0x34CDD129 ^0x4B6C5D
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
void func_1160(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2C6D4 Hash - 0x7FE551F ^0xCF526C14
{
	int i;
	Hash hash;
	Hash hash2;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_1208(&uParam0->f_1[i /*3*/], 2))
		{
			if (func_1209(i, iParam1))
			{
				hash2 = { func_1210(i, -1) };
			
				if (!bParam4 && hash2 != Global_1953292.f_83[i /*12*/] && hash2 != 0 && uParam0->f_1[i /*3*/] != hash2 || uParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					uParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_1211(i, 4))
					func_1212(i, 4, 6);
			}
			else
			{
				if (bParam3)
					func_1213(i, 4, 6);
			
				goto 0xCD;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1953292.f_83[i /*12*/];
			uParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

void func_1161(Hash hParam0, int iParam1, int iParam2) // Position - 0x2C7AD Hash - 0x10354A04 ^0x626AEEF7
{
	Global_1953292.f_83[func_253(hParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_253(hParam0, 1) /*12*/].f_11 || iParam1;
	return;
}

BOOL func_1162(Hash hParam0) // Position - 0x2C7DA Hash - 0xA5B8FD07 ^0xA62D1647
{
	int num;
	var unk;

	Global_1953292.f_1039.f_2 = 0;
	num = 1226838104;
	func_1032(&(Global_1953292.f_1039), num, -367421157, 1409451727, 1, hParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953292.f_1039));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1953292.f_1039), 1409451727))
		return false;

	return true;
}

int func_1163(Hash hParam0) // Position - 0x2C833 Hash - 0xE1F3DDAE ^0x5813B139
{
	var outData;
	int num;

	if (!func_85(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, 761377030, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

void func_1164(var uParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x2C86D Hash - 0x5B22F0B4 ^0xB19405C9
{
	int i;
	BOOL flag;

	if (func_152(uParam0->f_1[34 /*3*/], -166674229))
		return;

	for (i = 0; i < 39; i = i + 1)
	{
		flag = func_1211(i, 16);
	
		if (flag)
			func_1212(i, 16, 9);
	
		if (Global_1953292.f_83[i /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[i /*3*/] == 0)
		{
		}
		else
		{
			if (flag)
				func_588(i, iParam3);
		
			if (!bParam2 && func_1163(uParam0->f_1[i /*3*/]) != 0)
			{
			}
			else if (func_1209(i, iParam1) && !flag)
			{
				uParam0->f_1[i /*3*/] = Global_1953292.f_83[i /*12*/];
				uParam0->f_1[i /*3*/].f_1 = 0;
				func_590(uParam0, uParam0->f_1[i /*3*/], i, true, iParam3);
				func_588(i, iParam3);
			}
			else if (flag && !bParam2)
			{
				func_590(uParam0, uParam0->f_1[i /*3*/], i, false, iParam3);
			}
		}
	}

	return;
}

int func_1165(int iParam0, int iParam1, int iParam2) // Position - 0x2C979 Hash - 0xFE41A884 ^0x917B03C
{
	int i;
	var unk;
	Hash hash;
	int metapedType;

	unk.f_9 = joaat("SLOTID_NONE");
	metapedType = 0;

	if (func_580() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	iParam2 = iParam2 | 28;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (!func_199(&unk, i, iParam0, iParam1))
		{
		}
		else if (func_1214(unk.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(unk.f_4, metapedType, true) == 0)
		{
		}
		else if (func_1163(unk.f_4) != 0)
		{
		}
		else if (func_152(unk.f_4, -166674229))
		{
		}
		else if (func_152(unk.f_4, 525391395))
		{
		}
		else
		{
			hash = func_165(unk.f_4);
		
			if (func_1216(iParam2, func_1215(hash)))
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

void func_1166(var uParam0, int iParam1, int iParam2) // Position - 0x2CA46 Hash - 0x9F574CE5 ^0xC9B47479
{
	int num;

	if (func_152(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_845(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953292.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_588(iParam1, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_588(num, iParam2);
	}

	return;
}

BOOL func_1167(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x2CADA Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_1168(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x2CAF1 Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_1169(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x2CB08 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

void func_1170(Player plParam0) // Position - 0x2CB1F Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_1171(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_1171(Player plParam0) // Position - 0x2CB8B Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

struct<4> func_1172(int iParam0, Hash hParam1) // Position - 0x2CBC6 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_1217(iParam0) };
	return func_1218(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_1173(Vehicle veParam0) // Position - 0x2CBE8 Hash - 0xDEF9F967 ^0x717FC3F4
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("huntercart01"):
			return true;
	
		default:
		
	}

	return false;
}

float func_1174(Player plParam0) // Position - 0x2CC07 Hash - 0x67CAB99C ^0xC9B69B05
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_1219(2);
}

BOOL func_1175(int iParam0) // Position - 0x2CC1D Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_1139(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_1138(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_1137(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_1134(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_1135(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_1136(iParam0);

	if (num6 < 1 || num6 > func_1140(num5, num4))
		return false;

	return true;
}

int func_1176(int iParam0) // Position - 0x2CCF9 Hash - 0x26AB94C2 ^0x26AB94C2
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

char* func_1177(int iParam0) // Position - 0x2CD28 Hash - 0x21CE226B ^0x60B87E8
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

char* func_1178(int iParam0) // Position - 0x2CD63 Hash - 0x21CE226B ^0xA37E19D9
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

void func_1179(int iParam0, float fParam1, int iParam2) // Position - 0x2CD9E Hash - 0xB327C991 ^0xFEB529B
{
	if (iParam2 == 2)
		iParam2 = func_760(2);

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

void func_1180(int iParam0, int iParam1, int iParam2) // Position - 0x2CDF0 Hash - 0x7E1E307C ^0x5642EBD7
{
	if (iParam2 == 2)
		iParam2 = func_760(2);

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

BOOL func_1181(int iParam0) // Position - 0x2CE46 Hash - 0x969D658D ^0x969D658D
{
	if (func_1091(iParam0))
		return true;
	else if (func_1220(iParam0))
		return true;

	return false;
}

void func_1182(int iParam0, float fParam1, int iParam2) // Position - 0x2CE6C Hash - 0xF69206DE ^0x1EC60A3A
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_760(1);

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

int func_1183(int iParam0, int iParam1) // Position - 0x2CEC8 Hash - 0x26934C66 ^0x26934C66
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
int func_1184(int iParam0) // Position - 0x2D6C9 Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_1221(iParam0))
		return 0;

	num = func_1183(iParam0, 1);

	if (!func_1222(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_1223(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_1224(iParam0, num2))
		{
			case 0:
				func_1225(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1225(num2, iParam0, i);
						func_1226(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_1226(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_1227(num2, 1);
		func_1228(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_1229(num3, 0);
		
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
	func_1230(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

BOOL func_1185(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x2D959 Hash - 0x8EAA10FC ^0x9E3F883B
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_432(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_1130(hParam0, hParam1, &unk))
		return false;

	if (unk.f_35 > 10)
		unk.f_35 = 10;

	*uParam3 = unk.f_35;

	for (i = 0; i < unk.f_35; i = i + 1)
	{
		uParam2->[i] = unk.f_36[i];
	}

	return true;
}

struct<17> func_1186(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x2D9DD Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_274(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_206(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_595() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_1187(Hash hParam0, int iParam1, Hash hParam2, Hash hParam3) // Position - 0x2DA57 Hash - 0xB286F3DC ^0xFA2F06E4
{
	Hash hash;
	var unk;
	var unk13;
	int i;
	int num;

	if (!func_107(false) || func_108())
	{
		hash = hParam0;
		unk.f_1 = 10;
		func_1232(iParam1, func_1231(hParam2), &unk, true);
		func_1233(hash, &unk, 0, 0);
		func_139(501, false);
		return 0;
	}

	unk13 = 15;
	PED::_0xB29C553BA582D09E(&unk13, hParam0, iParam1, func_1231(hParam2));

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_85(unk13[i], 0) && !func_152(unk13[i], 1286414894) && !(unk13[i] == hParam2))
		{
			func_245(unk13[i], 1, false, false, false, 752097756, 0, 0, 0, false);
		
			if (hParam3 != 0)
				if (hParam3 == unk13[i])
					num = num + 1;
			else
				num = num + 1;
		}
	}

	func_194(func_107(false), false, 0);
	return num;
}

int func_1188(Hash hParam0, Any* panParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2DB55 Hash - 0xCB093BA8 ^0x12CB551
{
	var unk;
	var unk15;
	int num;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return -1;

	if (func_513(hParam0))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_393(*panParam1, &unk, true, false, -1))
		return -1;

	if (unk.f_13)
		return -1;

	if (iParam2 < 0)
		iParam2 = unk.f_11;
	else if (iParam2 > unk.f_11)
		iParam2 = unk.f_11;

	unk15 = { func_1069(&unk, false) };
	unk15.f_9 = iParam2;
	unk15.f_12 = iParam3;
	num = -1;
	num = func_450(joaat("use"), &unk15, bParam5);

	if (bParam4 && num != -1)
	{
		num2.f_7 = -142743235;
		num2.f_16 = -1;
		num2 = 1;
		func_225(num, num2);
	}

	return num;
}

BOOL func_1189(Hash hParam0, int iParam1) // Position - 0x2DC1E Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_165(hParam0);
	
		if (category != 0)
		{
			num2 = func_1113(hParam0);
		
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

int func_1190(Hash hParam0) // Position - 0x2DC72 Hash - 0xF4E671A6 ^0x338FA446
{
	Hash category;

	if (!func_85(hParam0, 0))
		return 0;

	category = func_165(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);
}

void func_1191(int iParam0) // Position - 0x2DCA1 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_1234(&(iParam0->f_4));
	return;
}

int func_1192() // Position - 0x2DCC4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20241;
}

BOOL func_1193(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x2DCD3 Hash - 0x195DA727 ^0x43C01C6A
{
	if (!func_692(uParam0.f_17))
		return false;

	return true;
}

BOOL func_1194(int* piParam0, Hash hParam1) // Position - 0x2DCEC Hash - 0x8DE7BD5B ^0x83B9042B
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_1235(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_1236(piParam0))
			return false;
	
		if (!func_1235(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_1195(int* piParam0, BOOL bParam1) // Position - 0x2DD4F Hash - 0x5B4FA9A9 ^0x92224A48
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_1236(piParam0);

	return true;
}

void func_1196(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x2DD70 Hash - 0x7EFAC478 ^0x4E4217E0
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

	if (!ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ACQUIRE_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
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
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_165(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_1197(Hash hParam0, Any* panParam1, int iParam2) // Position - 0x2DF46 Hash - 0xF56A9866 ^0x83AC84D6
{
	if (panParam1->f_9 < 1)
		return false;

	if (!func_85(panParam1->f_8, 0) && !func_432(func_284(panParam1->f_8), 2))
		return false;

	if (func_16(iParam2, 128))
		if (!func_432(func_284(panParam1->f_8), 2))
			if (func_165(panParam1->f_8) == 0)
				return false;

	if (func_16(iParam2, 16))
		if (!func_707(hParam0, panParam1))
			return false;

	return true;
}

BOOL func_1198(int iParam0, Hash hParam1, Any* panParam2, Any* panParam3) // Position - 0x2DFC6 Hash - 0xA2FF6405 ^0x9144FDD7
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam3, *panParam3);
}

void func_1199(var uParam0, int iParam1) // Position - 0x2DFDF Hash - 0xD05180BA ^0x39589262
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

void func_1200(var uParam0, int iParam1) // Position - 0x2E065 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_1201(var uParam0, int iParam1) // Position - 0x2E0A1 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_1135(*uParam0);
	num2 = func_1134(*uParam0);

	if (iParam1 < 1 || iParam1 > func_1140(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_1202(var uParam0, int iParam1) // Position - 0x2E0F4 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_1203(var uParam0, int iParam1) // Position - 0x2E12F Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_1204(var uParam0, int iParam1) // Position - 0x2E168 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_1205(Hash hParam0) // Position - 0x2E1A0 Hash - 0x1E74E236 ^0xF004CA87
{
	int outSatchelItemSize;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(hParam0, &outSatchelItemSize))
		return -1;

	return outSatchelItemSize;
}

BOOL func_1206(int iParam0, Hash hParam1, int iParam2) // Position - 0x2E1BA Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_85(hParam1, 0))
		return false;

	return func_1074(iParam0, hParam1) >= iParam2;
}

BOOL func_1207(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x2E1DC Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_85(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_1217(iParam0) };
	unk6 = { func_1218(iParam0, hParam1, unk, unk.f_4) };
	return func_1237(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

BOOL func_1208(var uParam0, int iParam1) // Position - 0x2E22B Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_1209(int iParam0, int iParam1) // Position - 0x2E23C Hash - 0xEE6DCA90 ^0xB0C7528A
{
	if (iParam0 < 0 || iParam0 >= 39)
		return false;

	return Global_1953292.f_83[iParam0 /*12*/].f_10 && iParam1 != false;
}

Vector3 func_1210(int iParam0, int iParam1) // Position - 0x2E26B Hash - 0xC0396140 ^0x90919964
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

BOOL func_1211(int iParam0, int iParam1) // Position - 0x2E29E Hash - 0xECB143B0 ^0xBA414228
{
	return Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1 != false;
}

void func_1212(int iParam0, int iParam1, int iParam2) // Position - 0x2E2B7 Hash - 0xF59FAE7F ^0x9B3AA80E
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 - Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1;
	return;
}

void func_1213(int iParam0, int iParam1, int iParam2) // Position - 0x2E2E7 Hash - 0x5033A276 ^0xAD3736DE
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 || iParam1;
	return;
}

BOOL func_1214(Hash hParam0) // Position - 0x2E30A Hash - 0x620CA239 ^0xCC576E0
{
	return hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != -230310728 && hParam0 != 1326838792 && !func_613(hParam0);
}

int func_1215(Hash hParam0) // Position - 0x2E340 Hash - 0xEAAB2463 ^0xEAAB2463
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

BOOL func_1216(int iParam0, int iParam1) // Position - 0x2E385 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

struct<5> func_1217(int iParam0) // Position - 0x2E394 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_1218(iParam0, joaat("character"), func_595(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_1218(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x2E3C1 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_85(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

int func_1219(int iParam0) // Position - 0x2E3EE Hash - 0xF103C6A6 ^0xF103C6A6
{
	switch (iParam0)
	{
		case 0:
			return func_889(2) * 2;
	
		case 1:
			return func_893(2) * 2;
	
		case 2:
			return func_891(2) * 2;
	
		default:
		
	}

	return -1;
}

BOOL func_1220(int iParam0) // Position - 0x2E42F Hash - 0x830CD3BA ^0x830CD3BA
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

BOOL func_1221(int iParam0) // Position - 0x2E454 Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_1183(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_1222(int iParam0) // Position - 0x2E47C Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_1223(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

int func_1223(int iParam0, int iParam1) // Position - 0x2E4A4 Hash - 0x89B5041A ^0x89B5041A
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

int func_1224(int iParam0, int iParam1) // Position - 0x2EB5B Hash - 0x39669B5F ^0xB47C98D2
{
	Player player;
	Player player2;
	int num;

	player = func_1238(iParam0);
	player2 = Global_1295666;
	num = func_1227(iParam1, 1);

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

int func_1225(int iParam0, int iParam1, int iParam2) // Position - 0x2EBDE Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_1221(iParam1))
		return 0;

	if (!func_1239(iParam0))
		return 0;

	num = func_1227(iParam0, 1);
	func_1240(iParam0, iParam1, iParam2);

	if (func_1241(Global_1156111.f_35859.f_3116[num /*31*/]) && func_1242(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_1243(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_1244(num2))
			if (func_1245(num2, num2.f_1, num2.f_2))
				func_1246(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_1247(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_1247(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_1226(int iParam0) // Position - 0x2ECD6 Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_1227(int iParam0, int iParam1) // Position - 0x2ECEC Hash - 0x9DD4188 ^0x9DD4188
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

void func_1228(int iParam0, int iParam1) // Position - 0x2F59D Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_1229(int iParam0, int iParam1) // Position - 0x2F5CC Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_1230(int iParam0) // Position - 0x2F5E8 Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

int func_1231(Hash hParam0) // Position - 0x2F616 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_152(hParam0, 1064293907))
		return 2;
	else if (func_152(hParam0, -1218707194))
		return 1;
	else if (func_152(hParam0, 1888974372))
		return 0;

	return 1;
}

struct<12> func_1232(int iParam0, int iParam1, var uParam2, BOOL bParam3) // Position - 0x2F65B Hash - 0x1EEB145B ^0xCC3D6D4D
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_POOR_QUALITY_LEGENDARY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_GOOD_QUALITY_LEGENDARY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_POOR");
					break;
			
				case 1:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_GOOD");
					break;
			
				case 2:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_PERFECT");
					break;
			
				case 3:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_RARE");
					break;
			
				case 4:
					num = joaat("SKINNING_DAMAGE_PERFECT_QUALITY_LEGENDARY");
					break;
			}
			break;
	}

	if (bParam3)
		func_471(uParam2, joaat("LOOT_TYPE_BREAKDOWN"));
	else
		func_471(uParam2, joaat("LOOT_TYPE_SKINNING"));

	func_471(uParam2, num);
	return *uParam2;
}

BOOL func_1233(Hash hParam0, var uParam1, int iParam2, int iParam3) // Position - 0x2F7BC Hash - 0xDE9FAFE8 ^0xDE9FAFE8
{
	var unk;

	if (0 == hParam0)
		return false;

	return func_472(hParam0, uParam1, &unk, iParam2, iParam3);
}

void func_1234(var uParam0) // Position - 0x2F7DC Hash - 0x58FD8C3D ^0x7E71AD66
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

BOOL func_1235(int* piParam0, Hash hParam1) // Position - 0x2F838 Hash - 0x8927A1A4 ^0x3C5C8B8F
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_1236(int* piParam0) // Position - 0x2F856 Hash - 0x7EABA512 ^0xD3B85449
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_957(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_957(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_957(*piParam0, 2, 0, 0);
		return false;
	}

	func_957(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

BOOL func_1237(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x2F8F3 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_513(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_1248(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

Player func_1238(int iParam0) // Position - 0x2F96B Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_1249(iParam0))
		return func_1250(iParam0) % 32;

	return Global_1295666;
}

BOOL func_1239(int iParam0) // Position - 0x2F98C Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_1227(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

int func_1240(int iParam0, int iParam1, int iParam2) // Position - 0x2F9B4 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_1183(iParam1, 1);
	num2 = func_1227(iParam0, 1);
	num3 = func_1223(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return 0;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return 1;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_1251(num4, 1);
	
		if (!func_1252(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_1253(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_1254(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_1255(num6))
		{
		}
		else
		{
			num7 = func_1256(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_1257(num6);
			}
		}
	}

	return 1;
}

BOOL func_1241(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x2FBA5 Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_1242(int iParam0, int iParam1) // Position - 0x2FBB3 Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_1239(iParam0))
		return false;

	if (!func_1258(iParam1))
		return false;

	num = func_1259(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_1243(int iParam0) // Position - 0x2FBF3 Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_1260(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_1244(int iParam0, var uParam1, var uParam2) // Position - 0x2FC2F Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_1239(iParam0))
		return false;

	if (!func_1221(iParam0.f_1))
		return false;

	if (!func_1261(iParam0.f_2))
		return false;

	return true;
}

BOOL func_1245(int iParam0, int iParam1, int iParam2) // Position - 0x2FC66 Hash - 0xAE2CC17B ^0x2CD7F4CE
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

	num = func_1183(iParam1, 1);
	num2 = func_1227(iParam0, 1);
	num3 = func_1223(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_1251(num4, 1);
	
		if (!func_1252(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_1253(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_1262(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_1255(num6))
		{
		}
		else if (!func_1263(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_1256(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_1264(num6);
			}
		}
	}

	func_1265(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_1246(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2FE94 Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_1258(iParam0))
		return;

	num = func_1259(iParam0, 1);

	if (!func_1239(iParam1))
		return;

	if (!func_1221(iParam2))
		return;

	if (!func_1261(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_1247(int iParam0) // Position - 0x2FF13 Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_1258(iParam0))
		return;

	num = func_1259(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_1248(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x2FF68 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

BOOL func_1249(int iParam0) // Position - 0x2FF94 Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_1183(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

int func_1250(int iParam0) // Position - 0x2FFBB Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_1183(iParam0, 1);

	if (func_1249(iParam0))
		return num - 2;
	else if (func_1266(iParam0))
		return num - 130;
	else if (func_1267(iParam0))
		return num - 166;
	else if (func_1268(iParam0))
		return num - 167;
	else if (func_1269(iParam0))
		return num - 172;
	else if (func_1270(iParam0))
		return num - 180;
	else if (func_1271(iParam0))
		return num - 150;

	return -1;
}

int func_1251(int iParam0, int iParam1) // Position - 0x30057 Hash - 0x40BB17AB ^0x40BB17AB
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

BOOL func_1252(int iParam0) // Position - 0x30490 Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_1251(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_1253(int iParam0) // Position - 0x304B8 Hash - 0xB1BB29D1 ^0x41A20899
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_1272(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_1254(int iParam0) // Position - 0x304E8 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_1252(iParam0))
		return;

	num = func_1251(iParam0, 1);

	if (!func_1273(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_1274(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_1275(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_1255(int iParam0) // Position - 0x306C7 Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_1256(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_1256(int iParam0, int iParam1) // Position - 0x306EF Hash - 0x49B3A5C3 ^0x49B3A5C3
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

void func_1257(int iParam0) // Position - 0x309FF Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_1277();
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
			func_1276();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1280(func_1279(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1273(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1273(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1278(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1278(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_139(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1278(iParam0));
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
			func_1281();
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
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1278(iParam0));
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

BOOL func_1258(int iParam0) // Position - 0x30C0F Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_1259(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_1259(int iParam0, int iParam1) // Position - 0x30C36 Hash - 0xD3D45784 ^0xD3D45784
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

int func_1260(int iParam0) // Position - 0x30C93 Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_1282(iParam0);
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
		num3 = func_1227(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_1283(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_1284(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

BOOL func_1261(int iParam0) // Position - 0x30DD7 Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

void func_1262(int iParam0) // Position - 0x30DF5 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_1252(iParam0))
		return;

	num = func_1251(iParam0, 1);

	if (!func_1273(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_1274(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_1275(Global_1156111.f_2169[num /*205*/].f_203, 1);
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

BOOL func_1263(int iParam0) // Position - 0x30F4A Hash - 0x69745F36 ^0xB7513540
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_1285(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_1264(int iParam0) // Position - 0x30F74 Hash - 0xE1E3399D ^0xAAA920BB
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
			func_1277();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1276();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_1279(iParam0);
			func_1287(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1273(16);
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
			func_1273(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1278(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1278(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_139(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_1279(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1286(iParam0, 0));
			func_1287(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1286(iParam0, 1));
			func_1287(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1286(iParam0, 2));
			func_1287(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_1286(iParam0, 3));
			func_1287(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1278(iParam0));
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
			func_1288();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_1279(iParam0);
			func_1287(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1278(iParam0));
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

void func_1265(int iParam0) // Position - 0x3120F Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_1289(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_1290(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

BOOL func_1266(int iParam0) // Position - 0x31259 Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_1183(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_1267(int iParam0) // Position - 0x31281 Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_1183(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_1268(int iParam0) // Position - 0x312A9 Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_1183(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_1269(int iParam0) // Position - 0x312D1 Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_1183(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_1270(int iParam0) // Position - 0x312F9 Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_1183(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_1271(int iParam0) // Position - 0x31321 Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_1183(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

float func_1272(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0x31349 Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_1291(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_1273(int iParam0) // Position - 0x3137F Hash - 0xCFB57BFC ^0xD6F1E06
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

BOOL func_1274(int iParam0) // Position - 0x313EE Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_1275(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_1275(int iParam0, int iParam1) // Position - 0x31415 Hash - 0xAF8796DC ^0xAF8796DC
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

void func_1276() // Position - 0x31472 Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_94(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_1277() // Position - 0x314D4 Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_1278(int iParam0) // Position - 0x31504 Hash - 0xE5247562 ^0xD070568
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

int func_1279(int iParam0) // Position - 0x3154C Hash - 0x21FAF347 ^0xA1AE9E4F
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

void func_1280(int iParam0) // Position - 0x31587 Hash - 0x2CE3A2A0 ^0xF0457356
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

void func_1281() // Position - 0x315C7 Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

int func_1282(int iParam0) // Position - 0x315E7 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_1258(iParam0))
		return -1;

	num = func_1259(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_1283(int iParam0, int iParam1) // Position - 0x31616 Hash - 0xB2431B7B ^0xEC29640E
{
	int num;
	Player player;
	int num2;
	int num3;
	var unk;

	if (!func_1239(iParam0))
		return false;

	num = func_1227(iParam0, 1);
	num2 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_1241(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num3 = Global_1156111.f_35859.f_9286[func_1259(num2, 1) /*3*/];
		unk = { func_1284(num3) };
	
		if (num3 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			player = func_1238(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			player = func_1238(iParam1);
		
			if (player == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_1292())
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
		
			player = func_1238(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[player]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			player = func_1238(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[player]))
				return false;
		
			if (player != Global_1295666 && !func_882(Global_1295666.f_149[player]))
				return false;
		
			if (!func_874(512, player))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_1292() && !func_1293())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_1284(int iParam0) // Position - 0x318EB Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_1227(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_1285(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0x3190F Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_1291(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_1286(int iParam0, int iParam1) // Position - 0x31945 Hash - 0xD9A01784 ^0x4AB64683
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

void func_1287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x3199E Hash - 0x4DFFD3F3 ^0xFBF31414
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

void func_1288() // Position - 0x31A23 Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_1289(int iParam0) // Position - 0x31A48 Hash - 0xDEB3DA4B ^0xE24F849D
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_1290(int iParam0) // Position - 0x31A69 Hash - 0xDEB3DA4B ^0x70A59AC2
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_1291(Hash hParam0, Hash hParam1, var uParam2) // Position - 0x31A8A Hash - 0xBD123D0 ^0xD5CDFAB
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
		uParam2->f_10.f_3 = func_1294(num2);
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

BOOL func_1292() // Position - 0x31CAC Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

BOOL func_1293() // Position - 0x31CBA Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_83(func_82(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_1071(*Global_524288.f_39632))
		return true;

	return false;
}

int func_1294(int iParam0) // Position - 0x31D05 Hash - 0xF3C27EA9 ^0xF3C27EA9
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

