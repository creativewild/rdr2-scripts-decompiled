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

BOOL func_1(var uParam0, var uParam1, BOOL bParam2, var uParam3) // Position - 0x3A Hash - 0x5FBAFD9 ^0x36226411
{
	if (*uParam0 < 5)
	{
		if (func_2() || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, *uParam1) || !func_3() || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
		
			return true;
		}
		else
		{
			Global_1935496.f_127 = 1;
		}
	}

	switch (*uParam0)
	{
		case 0:
			if (bParam2)
				func_4(uParam3, false);
		
			if (func_5(uParam3) && func_6(uParam3) > 2f)
			{
				func_7(uParam0, 1);
				func_8(uParam3);
			}
			break;
	
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_7(uParam0, 2);
			break;
	
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_7(uParam0, 3);
			}
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_7(uParam0, 5);
			}
			break;
	
		case 5:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				func_7(uParam0, 0);
				return true;
			}
			break;
	}

	return false;
}

BOOL func_2() // Position - 0x18C Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_3() // Position - 0x1A8 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_9(1);
}

void func_4(var uParam0, BOOL bParam1) // Position - 0x1B5 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_5(uParam0))
		func_10(uParam0);

	return;
}

BOOL func_5(var uParam0) // Position - 0x1D5 Hash - 0x5001E582 ^0x5001E582
{
	return func_11(*uParam0, 1);
}

float func_6(var uParam0) // Position - 0x1E5 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_5(uParam0))
		return uParam0->f_1;

	if (func_12(uParam0))
		return uParam0->f_2;

	return func_13() - uParam0->f_1;
}

void func_7(var uParam0, int iParam1) // Position - 0x21A Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_8(var uParam0) // Position - 0x227 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_9(int iParam0) // Position - 0x23D Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_14(iParam0);
}

void func_10(var uParam0) // Position - 0x24B Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_15(uParam0, 0f);
	return;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0x25A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_12(var uParam0) // Position - 0x269 Hash - 0x39705408 ^0x39705408
{
	return func_11(*uParam0, 2);
}

float func_13() // Position - 0x279 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_14(int iParam0) // Position - 0x2AB Hash - 0xA059D395 ^0xE600C05
{
	return func_16(Global_1935496.f_27, iParam0);
}

void func_15(var uParam0, float fParam1) // Position - 0x2BF Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_13() - fParam1;
	func_17(uParam0, 1);
	func_18(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x2E5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x2F4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x305 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

