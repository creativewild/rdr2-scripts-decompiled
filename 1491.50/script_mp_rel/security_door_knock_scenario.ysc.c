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
	var uLocal_19 = 0;
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
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
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
	var uLocal_52 = 4;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 3;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	Hash hLocal_72 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE11E8660 ^0xE1C2806D
{
	bLocal_13 = 1;
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

void func_1() // Position - 0x56 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x5E Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xAC Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xB4 Hash - 0x3D22DF46 ^0xED7FF9EC
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

void func_6() // Position - 0x10C Hash - 0xD2F31160 ^0x5193BFA7
{
	bLocal_13 = false;
	return;
}

void func_7() // Position - 0x253 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x25B Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x267 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_28(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x28F Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_29(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x2B7 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_30(&eventData);
	}

	return;
}

BOOL func_12(int iParam0) // Position - 0x2DF Hash - 0xE2693F54 ^0xE2693F54
{
	return bLocal_18 && iParam0 != false;
}

void func_13(int iParam0) // Position - 0x2EE Hash - 0xA35734FF ^0xA35734FF
{
	if (!func_12(iParam0))
		return;

	iParam0 = iParam0 - iParam0 && iParam0;
	return;
}

void func_14() // Position - 0x30D Hash - 0x815A523A ^0xAD6F40B1
{
	func_31(&uLocal_23);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hLocal_72, false);
	func_25(3);
	return;
}

void func_15(var uParam0) // Position - 0x33B Hash - 0x28DF00E8 ^0x28DF00E8
{
	uLocal_19 = uParam0;
	return;
}

Vector3 func_16() // Position - 0x347 Hash - 0x21158019 ^0x21158019
{
	return 2710.57f, -1291.2f, 48.63f;
}

Vector3 func_17() // Position - 0x35E Hash - 0x21158019 ^0x21158019
{
	return -290.86f, 813.36f, 118.42f;
}

Vector3 func_18() // Position - 0x375 Hash - 0x21158019 ^0x21158019
{
	return -281.07f, 815.24f, 118.42f;
}

Vector3 func_19(Entity eParam0, var uParam1, var uParam2) // Position - 0x38C Hash - 0x50F8524F ^0x50F8524F
{
	int i;
	var unk;
	float num;
	int num2;
	float num3;

	num2 = *uParam1;

	for (i = 0; i < num2; i = i + 1)
	{
		*uParam2 = i;
		num3 = func_32(eParam0, uParam1->[i /*3*/], true);
	
		if (_IS_NULL_VECTOR(uParam1->[i /*3*/]))
		{
		}
		else if (i == 0)
		{
			num = num3;
			unk = { uParam1->[i /*3*/] };
		}
		else if (num > num3)
		{
			unk = { uParam1->[i /*3*/] };
		}
	}

	return unk;
}

int func_20(int iParam0) // Position - 0x408 Hash - 0x21FAF347 ^0xD42F2588
{
	switch (iParam0)
	{
		case 0:
			return joaat("door_new_gunshop_int_back");
	
		case 1:
			return joaat("door_val_doc_back_rm");
	
		case 2:
			return joaat("door_val_doc_back");
	
		default:
		
	}

	return 0;
}

BOOL func_21(var uParam0) // Position - 0x443 Hash - 0x5001E582 ^0x5001E582
{
	return func_34(*uParam0, 1);
}

void func_22(var uParam0, BOOL bParam1) // Position - 0x453 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_21(uParam0))
		func_24(uParam0);

	return;
}

int func_23(var uParam0, float fParam1) // Position - 0x473 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_21(uParam0))
		return 0;

	if (func_35(uParam0) > fParam1)
		return 1;

	return 0;
}

void func_24(var uParam0) // Position - 0x49A Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_36(uParam0, 0f);
	return;
}

void func_25(BOOL bParam0) // Position - 0x4A9 Hash - 0xBDD9F5CB ^0xBDD9F5CB
{
	if (func_12(bParam0))
		return;

	bLocal_18 = bLocal_18 || bParam0;
	return;
}

int func_26() // Position - 0x4C4 Hash - 0xA4A1F612 ^0x922FF16E
{
	Entity entity;
	var offsetFromEntityInWorldCoords;
	var unk3;
	float num;

	if (!func_37(hLocal_72))
		return 0;

	entity = func_38(hLocal_72, 0, false);

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return 0;

	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(entity, func_39()) };

	if (_IS_NULL_VECTOR(offsetFromEntityInWorldCoords))
		return 0;

	unk3 = { func_40() };

	switch (hLocal_72)
	{
		case joaat("door_val_doc_back"):
			num = 100f;
			break;
	
		case joaat("door_new_gunshop_int_back"):
			num = 115f;
			break;
	
		case joaat("door_val_doc_back_rm"):
			num = 10f;
			break;
	}

	num = num + unk3.f_2;
	func_41(&uLocal_23, offsetFromEntityInWorldCoords, unk3, unk3.f_1, num, 35f, 20, 10, 1077936128, 1101004800, 1, 0, 0.24f, false, 0, 1044549468);
	func_25(2);
	return 1;
}

void func_27(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Any anParam5) // Position - 0x590 Hash - 0xA34D2F63 ^0xEADEBB8F
{
	float num;
	float num2;
	float num3;

	if (!CAM::DOES_CAM_EXIST(*uParam0))
		return;

	if (bParam4)
	{
		uParam0->f_29[2] = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f);
		uParam0->f_29[3] = BUILTIN::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f);
	}
	else
	{
		uParam0->f_29[2] = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_RIGHT_AXIS_X")) * 127f);
		uParam0->f_29[3] = BUILTIN::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y")) * 127f);
	}

	uParam0->f_29[2] != 0 || uParam0->f_29[3] != 0;

	if (uParam0->f_34 == uParam0->f_29[2] && uParam0->f_35 == uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = uParam0->f_29[2];
		uParam0->f_35 = uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}

	if (bParam2)
	{
		uParam0->f_13.f_2 = -(BUILTIN::TO_FLOAT(uParam0->f_29[2]) / 127f) * (float)uParam0->f_25;
		uParam0->f_13.f_1 = (-uParam0->f_13.f_2 * uParam0->f_27) / (float)uParam0->f_25;
	
		if (PAD::IS_LOOK_INVERTED())
			uParam0->f_13 = (BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * (float)uParam0->f_26;
		else
			uParam0->f_13 = -(BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127f) * (float)uParam0->f_26;
	}
	else
	{
		uParam0->f_13 = { 0f, 0f, 0f };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}

	num = 30f * BUILTIN::TIMESTEP();

	if (!func_42(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 = uParam0->f_12 + MISC::GET_FRAME_TIME();
	
		if (uParam0->f_12 > uParam0->f_11)
			uParam0->f_12 = uParam0->f_11;
	
		num2 = uParam0->f_12 / uParam0->f_11;
		uParam0->f_1 = { func_43(uParam0->f_1, uParam0->f_8, num2) };
	}

	num3 = { uParam0->f_13 + uParam0->f_16 };
	uParam0->f_19 = uParam0->f_19 + func_44((num3 - uParam0->f_19) * 0.05f * num, -3f, 3f);
	uParam0->f_19.f_1 = uParam0->f_19.f_1 + func_44((num3.f_1 - uParam0->f_19.f_1) * 0.05f * num, -3f, 3f);
	uParam0->f_19.f_2 = uParam0->f_19.f_2 + func_44((num3.f_2 - uParam0->f_19.f_2) * 0.05f * num, -3f, 3f);

	if (uParam0->f_36)
	{
		uParam0->f_19 = func_44(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = func_44(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_44(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}

	uParam0->f_22 = uParam0->f_7;

	if (bParam1)
		if (bParam3)
			if (BUILTIN::TO_FLOAT(uParam0->f_29[1]) < 0f)
				uParam0->f_22 = uParam0->f_22 + (float)BUILTIN::ROUND((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128f) * uParam0->f_24);
		else
			uParam0->f_22 = uParam0->f_22 + (float)BUILTIN::ROUND((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128f) * uParam0->f_24);

	uParam0->f_23 = uParam0->f_23 + ((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME() * (2.5f / 0.65f));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, anParam5, 0);
	return;
}

void func_28(var uParam0) // Position - 0x921 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_29(var uParam0) // Position - 0x929 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_30(var uParam0) // Position - 0x931 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_31(var uParam0) // Position - 0x939 Hash - 0x9795EF4C ^0x78847681
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			CAM::SET_CAM_ACTIVE(*uParam0, false);
	
		CAM::DESTROY_CAM(*uParam0, false);
	}

	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}

	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0f;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0f;
	return;
}

float func_32(Entity eParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x9DF Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(eParam0, false, false), vParam1, bParam4);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xA07 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_34(int iParam0, int iParam1) // Position - 0xA31 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_35(var uParam0) // Position - 0xA40 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_21(uParam0))
		return uParam0->f_1;

	if (func_45(uParam0))
		return uParam0->f_2;

	return func_46() - uParam0->f_1;
}

void func_36(var uParam0, float fParam1) // Position - 0xA75 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_46() - fParam1;
	func_47(uParam0, 1);
	func_48(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_37(Hash hParam0) // Position - 0xA9B Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

Entity func_38(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xAA7 Hash - 0x12AC5078 ^0x43862B34
{
	Entity entity;

	entity = func_49(hParam0, iParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return 0;

	if (!ENTITY::IS_ENTITY_AN_OBJECT(entity))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(entity) && !bParam2)
		return 0;

	return entity;
}

Vector3 func_39() // Position - 0xAEC Hash - 0x21158019 ^0x21158019
{
	return 0.585564f, 0.325876f, 1.6871f;
}

Vector3 func_40() // Position - 0xB03 Hash - 0x6E62356A ^0x6E62356A
{
	return -7.766f, 0f, 175.2488f;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, BOOL bParam15, int iParam16, int iParam17) // Position - 0xB16 Hash - 0x9B9CE59C ^0xA7B44C13
{
	uParam0->f_1 = { uParam1 };
	uParam0->f_4 = { uParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = iParam10;
	uParam0->f_8 = { uParam1 };
	uParam0->f_11 = 1f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = { 0f, 0f, 0f };
	uParam0->f_19 = { 0f, 0f, 0f };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = fParam7 + iParam16;
	uParam0->f_28 = iParam12;
	uParam0->f_24 = iParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);

	if (!bParam15)
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", iParam17);

	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);

	if (fParam14 > 0f)
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);

	if (uParam0->f_28)
		MAP::LOCK_MINIMAP_ANGLE(iParam13);

	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
	return;
}

BOOL func_42(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0xC17 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

Vector3 func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0xC40 Hash - 0x4C194BC9 ^0x4C194BC9
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

float func_44(float fParam0, float fParam1, float fParam2) // Position - 0xC5B Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_45(var uParam0) // Position - 0xC82 Hash - 0x39705408 ^0x39705408
{
	return func_34(*uParam0, 2);
}

float func_46() // Position - 0xC92 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_47(var uParam0, int iParam1) // Position - 0xCC4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_48(var uParam0, int iParam1) // Position - 0xCD5 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

Entity func_49(Hash hParam0, int iParam1) // Position - 0xCEA Hash - 0x3D4C4025 ^0x9DFFA56D
{
	Entity entityByDoorhash;

	func_50(hParam0, false, false);

	if (func_51(hParam0))
	{
		entityByDoorhash = ENTITY::_GET_ENTITY_BY_DOORHASH(hParam0, iParam1);
	
		if (ENTITY::DOES_ENTITY_EXIST(entityByDoorhash))
			return entityByDoorhash;
	}

	return 0;
}

Hash func_50(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD20 Hash - 0xEC5804B5 ^0xE95C34A9
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051645.f_16[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_51(Hash hParam0) // Position - 0xDC4 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_37(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

