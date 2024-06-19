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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	ScrHandle shLocal_22 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xD2C65ACC ^0xCCAA4B8E
{
	var unk;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	unk = uScriptParam_0.f_1;

	while (!func_1(false, false) && !func_2())
	{
		func_3(&unk);
		BUILTIN::WAIT(0);
	}

	func_4(true);
	func_5();
	return;
}

BOOL func_1(BOOL bParam0, BOOL bParam1) // Position - 0x3F Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_2() // Position - 0x11F Hash - 0x2C464652 ^0x2C464652
{
	if (iLocal_16 == 9)
		return true;

	return false;
}

void func_3(var uParam0) // Position - 0x133 Hash - 0xE4980F59 ^0xA1FCD5D3
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	func_6();
	func_7(true, false, true, false);

	switch (iLocal_16)
	{
		case 0:
			func_8(1);
			WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, true, false);
			PED::SET_PED_CONFIG_FLAG(Global_33, 249, true);
			PED::SET_PED_CONFIG_FLAG(Global_33, 334, true);
		
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
				PED::_SET_PED_CROUCH_MOVEMENT(Global_33, false, 0, false);
		
			func_9(*uParam0);
			func_10(&uLocal_19, true);
			func_11(1);
			break;
	
		case 1:
			if (func_12(&uLocal_19) > 1f)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_13(iLocal_17)))
				{
					if (func_7(false, false, false, false))
						func_14(*uParam0, 8);
				
					func_11(2);
				}
			}
			break;
	
		case 2:
			if (!func_7(true, true, true, true))
			{
				shLocal_22 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("event_shocking_unconscious_ped"), Global_33, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1);
				TASK::TASK_PLAY_ANIM(Global_33, func_13(iLocal_17), func_15(iLocal_17), 4f, -4f, -1, 0, 0, false, 1, false, 0, false);
			}
		
			func_10(&uLocal_19, true);
			func_11(3);
			break;
	
		case 3:
			if (func_7(true, false, false, false))
				func_14(*uParam0, iLocal_17);
		
			if (func_12(&uLocal_19) > 2.3f)
			{
				if (!func_7(true, false, false, false))
				{
					if (!PED::IS_PED_RAGDOLL(Global_33))
						PED::SET_PED_TO_RAGDOLL(Global_33, 0, 1, 0, false, false, 0);
				
					PED::RESET_PED_RAGDOLL_TIMER(Global_33);
					CAM::DO_SCREEN_FADE_OUT(2500);
					PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(Global_33, "very_drunk");
					PED::_SET_PED_DRUNKNESS(Global_33, true, 0.6f);
					func_16(0.3f);
					func_10(&uLocal_19, true);
					func_11(4);
				}
				else
				{
					func_14(*uParam0, iLocal_17);
				}
			}
			break;
	
		case 4:
			if (func_7(true, false, false, false))
				func_14(*uParam0, iLocal_17);
			else
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
		
			if (CAM::IS_SCREEN_FADED_OUT() && func_12(&uLocal_19) > 1.5f)
			{
				if (!func_7(true, false, false, false))
				{
					func_10(&uLocal_19, true);
					func_16(0.03f);
					func_11(5);
				}
				else
				{
					func_14(*uParam0, 8);
				}
			
				func_17(uParam0);
			}
			break;
	
		case 5:
			if (func_7(true, false, false, false))
				func_14(*uParam0, iLocal_17);
			else
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
		
			if (func_12(&uLocal_19) > 1.5f)
			{
				CAM::DO_SCREEN_FADE_IN(2500);
				func_11(6);
			}
			break;
	
		case 6:
			if (func_7(true, false, false, false))
				func_14(*uParam0, iLocal_17);
			else
				PED::_SET_PED_GETUP_ANIMATION(Global_33, "NMBS_DRUNK_GETUPS", true);
		
			if (func_12(&uLocal_19) > 2.3f)
				if (!TASK::IS_PED_GETTING_UP(Global_33))
					func_11(7);
			else
				PED::RESET_PED_RAGDOLL_TIMER(Global_33);
			break;
	
		case 7:
			if (!func_7(true, false, false, true) && !PED::IS_PED_FALLING(Global_33) && !ENTITY::IS_ENTITY_IN_WATER(Global_33) && !func_18(Global_33, 12))
				TASK::TASK_PLAY_ANIM(Global_33, func_13(iLocal_18), func_15(iLocal_18), 2f, -2f, -1, 68222992, 0, false, 66048, false, 0, false);
		
			if (shLocal_22 != 0)
				EVENT::REMOVE_SHOCKING_EVENT(shLocal_22);
		
			func_19(true);
			func_10(&uLocal_19, true);
			func_11(8);
			break;
	
		case 8:
			if (func_12(&uLocal_19) > 1.75f)
			{
				PED::SET_PED_CONFIG_FLAG(Global_33, 249, false);
				PED::SET_PED_CONFIG_FLAG(Global_33, 334, false);
				func_11(9);
			}
			break;
	
		case 9:
			break;
	}

	return;
}

void func_4(BOOL bParam0) // Position - 0x4BB Hash - 0xD173DB15 ^0xC8338178
{
	CAM::_STOP_GAMEPLAY_CAM_SHAKING_WITH_NAME("DRUNK_SHAKE", false);
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("PlayerDrunk01");
	PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(Global_33);
	PED::_0x88A95BB640FC186F(Global_33);
	PED::_SET_PED_DRUNKNESS(Global_33, true, 0f);
	func_8(0);

	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_33, 249, true))
		PED::SET_PED_CONFIG_FLAG(Global_33, 249, false);

	if (bParam0 && PED::GET_PED_CONFIG_FLAG(Global_33, 334, true))
		PED::SET_PED_CONFIG_FLAG(Global_33, 334, false);

	return;
}

void func_5() // Position - 0x533 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_6() // Position - 0x53F Hash - 0xF72018A2 ^0x285387D7
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_1295666.f_3, 129, true);
	PED::SET_PED_RESET_FLAG(Global_1295666.f_3, 103, true);
	return;
}

BOOL func_7(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5A1 Hash - 0x40C8B708 ^0xB9BBC133
{
	if (PED::IS_PED_DEAD_OR_DYING(Global_33, true) || PED::IS_PED_LASSOED(Global_33) || PED::_GET_LASSOER_OF_PED(Global_33) || CAM::HAS_LETTER_BOX())
		return true;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_33) && bParam0)
		return true;

	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33) && bParam1)
		return true;

	if (PED::IS_PED_IN_COMBAT(Global_33, 0) && bParam3)
		return true;

	if (PED::IS_PED_SITTING(Global_33) || PED::GET_PED_CONFIG_FLAG(Global_33, 227, true) || func_20(Global_33) && bParam2)
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		return true;
	}

	return false;
}

void func_8(int iParam0) // Position - 0x658 Hash - 0x29A8F290 ^0x2375A750
{
	Global_1292128.f_13 = iParam0;
	return;
}

void func_9(int iParam0) // Position - 0x668 Hash - 0xCB6E936E ^0xBD69AAD7
{
	if (PED::IS_PED_MALE(Global_33))
	{
		if (iParam0 == -1004468971 || iParam0 == -1706054699)
		{
			iLocal_17 = 4;
			iLocal_18 = 5;
			STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
		}
		else
		{
			iLocal_17 = 6;
			iLocal_18 = 7;
			STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
		}
	}
	else if (iParam0 == -1004468971 || iParam0 == -1706054699)
	{
		iLocal_17 = 0;
		iLocal_18 = 1;
		STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
	}
	else
	{
		iLocal_17 = 2;
		iLocal_18 = 3;
		STREAMING::REQUEST_ANIM_DICT(func_13(iLocal_17));
	}

	return;
}

void func_10(var uParam0, BOOL bParam1) // Position - 0x6F5 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_21(uParam0))
		func_22(uParam0);

	return;
}

void func_11(int iParam0) // Position - 0x715 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_16 = iParam0;
	return;
}

float func_12(var uParam0) // Position - 0x721 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_21(uParam0))
		return uParam0->f_1;

	if (func_23(uParam0))
		return uParam0->f_2;

	return func_24() - uParam0->f_1;
}

char* func_13(int iParam0) // Position - 0x756 Hash - 0x50EC4945 ^0x50EC4945
{
	switch (iParam0)
	{
		case 0:
			return "script_mp@naturalist@player_potions@female@skinny";
	
		case 1:
			return "script_mp@naturalist@player_potions@female@skinny";
	
		case 2:
			return "script_mp@naturalist@player_potions@female@fat";
	
		case 3:
			return "script_mp@naturalist@player_potions@female@fat";
	
		case 4:
			return "script_mp@naturalist@player_potions@male@skinny";
	
		case 5:
			return "script_mp@naturalist@player_potions@male@skinny";
	
		case 6:
			return "script_mp@naturalist@player_potions@male@fat";
	
		case 7:
			return "script_mp@naturalist@player_potions@male@fat";
	
		default:
		
	}

	return "";
}

void func_14(var uParam0, int iParam1) // Position - 0x7C9 Hash - 0xC55A087A ^0xF94634D8
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		CAM::DO_SCREEN_FADE_IN(2500);

	if (iParam1 != 8)
		TASK::STOP_ANIM_TASK(Global_33, func_13(iParam1), func_15(iParam1), -4f);

	func_17(&uParam0);
	func_11(7);
	return;
}

char* func_15(int iParam0) // Position - 0x813 Hash - 0xD9CA1F8E ^0xC195EF10
{
	switch (iParam0)
	{
		case 0:
			return "passout_skinny_female";
	
		case 1:
			return "recover_skinny_upper_female";
	
		case 2:
			return "passout_fat_female";
	
		case 3:
			return "recover_fat_upper_female";
	
		case 4:
			return "passout_skinny_male";
	
		case 5:
			return "recover_skinny_upper_male";
	
		case 6:
			return "passout_fat_male";
	
		case 7:
			return "recover_fat_upper_male";
	
		case 8:
			return "";
	
		default:
		
	}

	return "";
}

void func_16(float fParam0) // Position - 0x899 Hash - 0x7F081001 ^0x7469D283
{
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 1065353216);

	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("PlayerDrunk01");

	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01");

	PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(Global_33);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(fParam0);
	GRAPHICS::_ANIMPOSTFX_SET_STRENGTH("PlayerDrunk01", fParam0);
	return;
}

void func_17(var uParam0) // Position - 0x8E4 Hash - 0xD7DD5846 ^0xB30C02BD
{
	float num;

	num = func_25(13, 2);

	if (*uParam0 == -187002287)
	{
		func_27(func_26(joaat("USED"), 340025142), 1);
	
		if (num < 25f)
			func_28(75f, 1);
		else if (num >= 25f && num < 50f)
			func_28(50f, 1);
		else
			func_28(25f, 1);
	}
	else if (*uParam0 == -1004468971)
	{
		func_27(func_26(joaat("USED"), 1644594284), 1);
	
		if (num > 75f)
			func_28(-75f, 1);
		else if (num <= 75f && num > 50f)
			func_28(-50f, 1);
		else
			func_28(-25f, 1);
	}
	else if (*uParam0 == -605086052)
	{
		func_27(func_26(joaat("USED"), 340025142), 1);
		func_28(100f, 1);
	}
	else
	{
		func_27(func_26(joaat("USED"), 1644594284), 1);
		func_28(-100f, 1);
	}

	return;
}

BOOL func_18(Ped pedParam0, int iParam1) // Position - 0xA0D Hash - 0xD0E1548F ^0x3DA2A550
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return func_29(weaponHash);
}

void func_19(BOOL bParam0) // Position - 0xA28 Hash - 0xE0714EF7 ^0xCEF94AF8
{
	Global_1913578 = !bParam0;

	if (Global_1913578)
		Global_1913578.f_1 = MISC::GET_GAME_TIMER();

	return;
}

BOOL func_20(Ped pedParam0) // Position - 0xA48 Hash - 0xA227F6AE ^0xD36B4C07
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_player_camp_fire_kneel1")) || PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_player_camp_fire_kneel2")) || PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_player_camp_fire_kneel3")) || PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("world_player_camp_fire_kneel4")))
		return true;

	return false;
}

BOOL func_21(var uParam0) // Position - 0xAA4 Hash - 0x5001E582 ^0x5001E582
{
	return func_30(*uParam0, 1);
}

void func_22(var uParam0) // Position - 0xAB4 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_31(uParam0, 0f);
	return;
}

BOOL func_23(var uParam0) // Position - 0xAC3 Hash - 0x39705408 ^0x39705408
{
	return func_30(*uParam0, 2);
}

float func_24() // Position - 0xAD3 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

float func_25(int iParam0, int iParam1) // Position - 0xB05 Hash - 0x422268C7 ^0x22464E0E
{
	if (iParam1 == 2)
		iParam1 = func_32(1);

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

struct<2> func_26(int iParam0, int iParam1) // Position - 0xB51 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_27(var uParam0, var uParam1, int iParam2) // Position - 0xB67 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_28(float fParam0, int iParam1) // Position - 0xB84 Hash - 0x6AFE3513 ^0x6AFE3513
{
	float num;
	int num2;
	int num3;

	num = func_25(13, 2);
	num2 = func_33(num);
	num = num + fParam0;
	num = func_34(num, 0f, 100f);
	num3 = func_33(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_35();
		func_36(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_37(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

BOOL func_29(Hash hParam0) // Position - 0xBF7 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_30(int iParam0, int iParam1) // Position - 0xC12 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_31(var uParam0, float fParam1) // Position - 0xC21 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_24() - fParam1;
	func_38(uParam0, 1);
	func_39(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_32(int iParam0) // Position - 0xC47 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_41(func_40(iParam0));
}

int func_33(float fParam0) // Position - 0xC59 Hash - 0x991CF40A ^0x6EC613A5
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_34(float fParam0, float fParam1, float fParam2) // Position - 0xC84 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_35() // Position - 0xCAB Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xCB7 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_42(*iParam0);
	i = func_43(*iParam0);
	num2 = func_44(*iParam0);
	j = func_45(*iParam0);
	k = func_46(*iParam0);
	l = func_47(*iParam0);

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

	for (m = func_48(i, num); num2 > m; m = func_48(i, num))
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

	func_49(iParam0, l, k, j, num2, i, num);
	return;
}

int func_37(int iParam0, float fParam1, int iParam2) // Position - 0xE3F Hash - 0x91D240B ^0x31A81242
{
	if (!func_50(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_32(2);

	func_51(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

void func_38(var uParam0, int iParam1) // Position - 0xE90 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_39(var uParam0, int iParam1) // Position - 0xEA1 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_40(int iParam0) // Position - 0xEB6 Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_52(&(Global_1956875.f_1565), iParam0, 1);
}

int func_41(BOOL bParam0) // Position - 0xECC Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

int func_42(int iParam0) // Position - 0xEDE Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_43(int iParam0) // Position - 0xF03 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_44(int iParam0) // Position - 0xF16 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_45(int iParam0) // Position - 0xF29 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_46(int iParam0) // Position - 0xF3C Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_47(int iParam0) // Position - 0xF4E Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_48(int iParam0, int iParam1) // Position - 0xF60 Hash - 0x893AC59E ^0x893AC59E
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

void func_49(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xFFA Hash - 0xA65AB937 ^0xA65AB937
{
	func_54(iParam0, iParam6);
	func_55(iParam0, iParam5);
	func_56(iParam0, iParam4);
	func_57(iParam0, iParam3);
	func_58(iParam0, iParam2);
	func_59(iParam0, iParam1);
	return;
}

BOOL func_50(int iParam0) // Position - 0x1032 Hash - 0x969D658D ^0x969D658D
{
	if (func_60(iParam0))
		return true;
	else if (func_61(iParam0))
		return true;

	return false;
}

void func_51(int iParam0, float fParam1, int iParam2) // Position - 0x1058 Hash - 0xF69206DE ^0x1EC60A3A
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_32(1);

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

BOOL func_52(var uParam0, int iParam1, int iParam2) // Position - 0x10B4 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

var func_53(BOOL bParam0, var uParam1, var uParam2) // Position - 0x10EB Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_54(int iParam0, int iParam1) // Position - 0x1102 Hash - 0xD05180BA ^0x39589262
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

void func_55(int iParam0, int iParam1) // Position - 0x1188 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_56(int iParam0, int iParam1) // Position - 0x11C4 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_43(*iParam0);
	num2 = func_42(*iParam0);

	if (iParam1 < 1 || iParam1 > func_48(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_57(int iParam0, int iParam1) // Position - 0x1217 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_58(int iParam0, int iParam1) // Position - 0x1252 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_59(int iParam0, int iParam1) // Position - 0x128B Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_60(int iParam0) // Position - 0x12C3 Hash - 0x3FEE6090 ^0x3FEE6090
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

BOOL func_61(int iParam0) // Position - 0x12F2 Hash - 0x830CD3BA ^0x830CD3BA
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

