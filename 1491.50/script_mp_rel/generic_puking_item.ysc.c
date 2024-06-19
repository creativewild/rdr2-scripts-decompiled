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
#endregion

void main() // Position - 0x0 Hash - 0xD9E8E615 ^0x970C5AB9
{
	var unk;
	int num;
	var unk4;

	PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523);
	num = 0;

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (func_1(&num, &unk4, true, &unk))
			break;
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1(var uParam0, var uParam1, BOOL bParam2, var uParam3) // Position - 0x3A Hash - 0xD464EBB4 ^0x13FBF46
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ENTER"), false);

	switch (*uParam0)
	{
		case 0:
			if (bParam2)
			{
				func_2(uParam3, false);
				bParam2 = false;
			}
		
			if (func_3(uParam3) && func_4(uParam3) > 2f)
			{
				func_5(uParam0, 1);
				func_6(uParam3);
			}
			break;
	
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@MPSTORY@MP_PoisonHerb@IG@IG1_CommonBullrush@IG1_CommonBullrush", 0, "Herb_PL", true, false);
			func_5(uParam0, 2);
			break;
	
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_5(uParam0, 3);
			}
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(*uParam1, false))
			{
				if (PED::IS_PED_MALE(Global_33))
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_33, 0);
				else
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_33, 0);
			
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_5(uParam0, 5);
			}
			break;
	
		case 5:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false) || PED::IS_PED_FALLING(Global_33) || ENTITY::IS_ENTITY_IN_WATER(Global_33))
			{
				if (PED::IS_PED_MALE(Global_33))
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Male", Global_33);
				else
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "MP_Female", Global_33);
			
				func_5(uParam0, 0);
				return true;
			}
			break;
	}

	return false;
}

void func_2(var uParam0, BOOL bParam1) // Position - 0x192 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_3(uParam0))
		func_7(uParam0);

	return;
}

BOOL func_3(var uParam0) // Position - 0x1B2 Hash - 0x5001E582 ^0x5001E582
{
	return func_8(*uParam0, 1);
}

float func_4(var uParam0) // Position - 0x1C2 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_3(uParam0))
		return uParam0->f_1;

	if (func_9(uParam0))
		return uParam0->f_2;

	return func_10() - uParam0->f_1;
}

void func_5(var uParam0, int iParam1) // Position - 0x1F7 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_6(var uParam0) // Position - 0x204 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_7(var uParam0) // Position - 0x21A Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_11(uParam0, 0f);
	return;
}

BOOL func_8(int iParam0, int iParam1) // Position - 0x229 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_9(var uParam0) // Position - 0x238 Hash - 0x39705408 ^0x39705408
{
	return func_8(*uParam0, 2);
}

float func_10() // Position - 0x248 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_11(var uParam0, float fParam1) // Position - 0x27A Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_10() - fParam1;
	func_12(uParam0, 1);
	func_13(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_12(var uParam0, int iParam1) // Position - 0x2A0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_13(var uParam0, int iParam1) // Position - 0x2B1 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

