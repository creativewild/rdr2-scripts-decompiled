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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	BOOL bLocal_18 = 0;
	int iLocal_19 = 0;
	Cam caLocal_20 = 0;
	Cam caLocal_21 = 0;
	var uLocal_22 = 4;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	BOOL bLocal_48 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x7CA0A800 ^0x7CA0A800
{
	bLocal_13 = 1;
	iLocal_29 = 20;
	iLocal_30 = 10;
	iLocal_31 = 3;
	uLocal_32 = { -287.356f, 818.9039f, 119.8698f };
	uLocal_35 = { -13.3335f, 0.0591f, -170.8708f };
	anLocal_15 = anScriptParam_0;
	uLocal_16 = anScriptParam_0.f_1;
	uLocal_17 = anScriptParam_0.f_2;
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

void func_1() // Position - 0x87 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x8F Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0xB4 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xDD Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xE5 Hash - 0x3D22DF46 ^0xED7FF9EC
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

void func_6() // Position - 0x13D Hash - 0x84E891 ^0x2A6406E4
{
	if (PED::IS_PED_INJURED(Global_33))
	{
		bLocal_13 = false;
		return;
	}

	if (func_12(1))
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, joaat("INPUT_FOCUS_CAM")) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, joaat("INPUT_FOCUS_CAM")))
			if (!func_12(2))
				func_13();

	func_14();

	switch (iLocal_19)
	{
		case 0:
			caLocal_20 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -287.0813f, 818.8734f, 119.85f, -11.269f, 0f, -171.0697f, 50f, false, 2);
			func_15(true);
			func_16(1);
			break;
	
		case 1:
			if (ENTITY::GET_ENTITY_SPEED(Global_33) > 0f)
				return;
		
			CAM::SET_CAM_ACTIVE(caLocal_20, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, 4000, true, false, 0);
			func_16(2);
			break;
	
		case 2:
			if (CAM::IS_CAM_INTERPOLATING(caLocal_20))
				return;
		
			caLocal_21 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uLocal_32, uLocal_35, 40f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_21, caLocal_20, 4000, 3, 1);
			CAM::DESTROY_CAM(caLocal_20, false);
			func_16(3);
			break;
	
		case 3:
			if (CAM::IS_CAM_INTERPOLATING(caLocal_21))
				return;
		
			func_16(4);
			break;
	
		case 4:
			if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
				if (!TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
					func_17(&caLocal_21, true);
				else
					func_16(5);
			break;
	
		case 5:
			break;
	}

	return;
}

void func_7() // Position - 0x29B Hash - 0xFCA33F6F ^0x42B47160
{
	CAM::DESTROY_CAM(caLocal_20, false);
	CAM::DESTROY_CAM(caLocal_21, false);
	return;
}

void func_8() // Position - 0x2B1 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x2BD Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_18(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x2E5 Hash - 0x5A8C3AF6 ^0xD29C94E1
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

void func_11(int iParam0) // Position - 0x30D Hash - 0x5A8C3AF6 ^0xD29C94E1
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

BOOL func_12(int iParam0) // Position - 0x335 Hash - 0xE2693F54 ^0xE2693F54
{
	return bLocal_18 && iParam0 != false;
}

void func_13() // Position - 0x344 Hash - 0xACA10E8B ^0xF2D568B3
{
	if (func_12(2))
		return;

	func_21();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	func_22(0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
	CAM::DESTROY_CAM(caLocal_21, false);
	func_15(2);
	return;
}

void func_14() // Position - 0x37E Hash - 0xC34D4435 ^0xB85CA145
{
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		if (TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
			func_13();
	
		return;
	}

	if (!func_12(2))
	{
		func_13();
	}
	else if (CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
	{
		func_21();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		bLocal_13 = false;
	}

	return;
}

void func_15(BOOL bParam0) // Position - 0x3D1 Hash - 0xBDD9F5CB ^0xBDD9F5CB
{
	if (func_12(bParam0))
		return;

	bLocal_18 = bLocal_18 || bParam0;
	return;
}

void func_16(int iParam0) // Position - 0x3EC Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_19 = iParam0;
	return;
}

void func_17(var uParam0, BOOL bParam1) // Position - 0x3F8 Hash - 0xCF387F2E ^0x439AB96A
{
	float num;
	float num2;

	func_23(&uLocal_22[0], &uLocal_22[1], &uLocal_22[2], &uLocal_22[3], joaat("INPUT_SCRIPT_LEFT_AXIS_X"), joaat("INPUT_SCRIPT_LEFT_AXIS_Y"), joaat("INPUT_SCRIPT_RIGHT_AXIS_X"), joaat("INPUT_SCRIPT_RIGHT_AXIS_Y"), FRONTEND_CONTROL);

	if (iLocal_27 == uLocal_22[2] && iLocal_28 == uLocal_22[3])
	{
		if (iLocal_38 < MISC::GET_GAME_TIMER())
		{
			iLocal_27 = 0;
			iLocal_28 = 0;
		}
	}
	else
	{
		iLocal_27 = uLocal_22[2];
		iLocal_28 = uLocal_22[3];
		iLocal_38 = MISC::GET_GAME_TIMER() + 4000;
	}

	if (bParam1)
	{
		fLocal_39.f_2 = -(BUILTIN::TO_FLOAT(uLocal_22[2]) / 127f) * (float)iLocal_29;
		fLocal_39.f_1 = (-fLocal_39.f_2 * (float)iLocal_31) / (float)iLocal_29;
	
		if (PAD::IS_LOOK_INVERTED())
			fLocal_39 = (BUILTIN::TO_FLOAT(uLocal_22[3]) / 127f) * (float)iLocal_30;
		else
			fLocal_39 = -(BUILTIN::TO_FLOAT(uLocal_22[3]) / 127f) * (float)iLocal_30;
	}
	else
	{
		fLocal_39 = { 0f, 0f, 0f };
		iLocal_27 = 0;
		iLocal_28 = 0;
	}

	num = 30f * BUILTIN::TIMESTEP();
	num2 = { fLocal_39 + uLocal_45 };
	fLocal_42 = fLocal_42 + func_24((num2 - fLocal_42) * 0.05f * num, -3f, 3f);
	fLocal_42.f_1 = fLocal_42.f_1 + func_24((num2.f_1 - fLocal_42.f_1) * 0.05f * num, -3f, 3f);
	fLocal_42.f_2 = fLocal_42.f_2 + func_24((num2.f_2 - fLocal_42.f_2) * 0.05f * num, -3f, 3f);

	if (bLocal_48)
	{
		fLocal_42 = func_24(fLocal_42, BUILTIN::TO_FLOAT(-iLocal_30), BUILTIN::TO_FLOAT(iLocal_30));
		fLocal_42.f_1 = func_24(fLocal_42.f_1, BUILTIN::TO_FLOAT(-iLocal_31), BUILTIN::TO_FLOAT(iLocal_31));
		fLocal_42.f_2 = func_24(fLocal_42.f_2, BUILTIN::TO_FLOAT(-iLocal_29), BUILTIN::TO_FLOAT(iLocal_29));
	}

	CAM::SET_CAM_PARAMS(*uParam0, uLocal_32, uLocal_35 + fLocal_42, 40f, 0, 1, 1, 2, 1, 0);
	return;
}

void func_18(var uParam0) // Position - 0x5CC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_19(var uParam0) // Position - 0x5D4 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_20(var uParam0) // Position - 0x5DC Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_21() // Position - 0x5E4 Hash - 0xEB282DFE ^0x51A8A616
{
	PAD::DISABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(CAMERA_CONTROL, joaat("INPUT_LOOK_UD"), false);
	return;
}

void func_22(int iParam0, int iParam1) // Position - 0x602 Hash - 0x2D5EA878 ^0x4B3C84DD
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(iParam1, 1065353216);
	return;
}

void func_23(var uParam0, var uParam1, var uParam2, var uParam3, eControlAction ecaParam4, eControlAction ecaParam5, eControlAction ecaParam6, eControlAction ecaParam7, eControlType ectParam8) // Position - 0x620 Hash - 0x7ED6699F ^0x27C677F1
{
	*uParam0 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(ectParam8, ecaParam4) * 127f);
	*uParam1 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(ectParam8, ecaParam5) * 127f);
	*uParam2 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(ectParam8, ecaParam6) * 127f);
	*uParam3 = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(ectParam8, ecaParam7) * 127f);
	return;
}

float func_24(float fParam0, float fParam1, float fParam2) // Position - 0x67C Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

