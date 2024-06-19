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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 2;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	Volume volLocal_27 = 0;
	Volume volLocal_28 = 0;
	Volume volLocal_29 = 0;
	Volume volLocal_30 = 0;
	Vehicle veLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	BOOL bLocal_39 = 0;
	BOOL bLocal_40 = 0;
	BOOL bLocal_41 = 0;
	var uLocal_42 = 9;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	ePedType eptLocal_53 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_54 = PED_TYPE_PLAYER_0;
	ePedType eptLocal_55 = PED_TYPE_PLAYER_0;
	BOOL bLocal_56 = 0;
	BOOL bLocal_57 = 0;
	BOOL bLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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

void main() // Position - 0x0 Hash - 0xC733902D ^0x67B1751
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_32 = { 920.4003f, -6726.304f, 35.7346f };
	uLocal_35 = { 18.4472f, 24.1111f, 177.789f };
	iLocal_38 = -1;
	eptLocal_53 = joaat("a_c_songbird_01");
	eptLocal_54 = joaat("s_m_m_fussarhenchman_01");
	eptLocal_55 = joaat("cs_hercule");

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_59);

	func_2(&uLocal_59, &uScriptParam_0);

	while (!func_3(&uLocal_59))
	{
		func_4(&uLocal_59);
	
		switch (func_5(uLocal_59))
		{
			case 0:
				if (func_6(&uLocal_59))
					func_7(&uLocal_59, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_59))
					func_7(&uLocal_59, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_59))
					func_7(&uLocal_59, 3);
				break;
		
			case 3:
				func_1(&uLocal_59);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_59);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xEF Hash - 0x5C967931 ^0xE89D747F
{
	eStackSize i;
	eStackSize stackSize;
	Ped ped;

	func_10();
	func_11(uParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		stackSize = i;
	
		if (func_12(stackSize) && func_13(stackSize))
		{
			ped = Global_1360165[i /*1157*/];
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
				if (func_14(stackSize))
					func_15(stackSize, false, 0, true, -1082130432, true, true, false, false, false, false);
		}
	}

	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_2(var uParam0, var uParam1) // Position - 0x187 Hash - 0x11824BFA ^0x305C042C
{
	uParam0->f_1 = uParam1->f_1;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}

	if (uParam1->f_3)
		func_18(uParam0, 2);

	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

BOOL func_3(var uParam0) // Position - 0x1D4 Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x20E Hash - 0xCC0866FC ^0x1CE74C37
{
	if (!func_16(uParam0, 4))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1955830.f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}

	return;
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x291 Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x29B Hash - 0xD427CDF0 ^0x424544FC
{
	BOOL flag;

	bLocal_57 = true;
	flag = true;

	if (!STREAMING::HAS_MODEL_LOADED(eptLocal_53))
		flag = false;

	if (!STREAMING::HAS_MODEL_LOADED(eptLocal_54))
		flag = false;

	if (!STREAMING::HAS_MODEL_LOADED(eptLocal_55))
		flag = false;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_21(true)))
		flag = false;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(1)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(2)))
		flag = false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_23[0], true, false))
		flag = false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_23[1], true, false))
		flag = false;

	if (!CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED(func_23()))
		flag = false;

	if (!STREAMING::IS_SRL_LOADED())
		flag = false;

	if (!HUD::TEXT_BLOCK_IS_LOADED(func_24()))
		flag = false;

	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);

	if (!flag)
		return false;

	if (bLocal_56)
		bLocal_56 = false;

	if (!func_25(3, eptLocal_54, 984.3f, -6777.9f, 49.5f, -27.3f))
		bLocal_57 = false;

	if (!func_25(4, eptLocal_54, 982.5f, -6781.3f, 49.5f, 158.8f))
		bLocal_57 = false;

	if (!func_25(5, eptLocal_54, 981.6f, -6784.6f, 49.4f, -105.7f))
		bLocal_57 = false;

	if (!func_25(6, eptLocal_54, 981.7f, -6791.9f, 49.5f, 28.1f))
		bLocal_57 = false;

	if (!func_25(7, eptLocal_54, 984.7f, -6784.1f, 49.6f, 28.1f))
		bLocal_57 = false;

	if (!func_25(8, eptLocal_54, 982.5f, -6782.7f, 50.4f, 161f))
		bLocal_57 = false;

	if (!bLocal_57)
		flag = false;

	if (!flag)
		return false;

	func_26(3);
	func_26(4);
	func_26(5);
	func_26(6);
	func_26(7);
	func_26(8);
	GRAPHICS::_ADD_BLOOD_POOL(983.9f, -6777.3f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(984.7f, -6779.5f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(983.4f, -6781.5f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(982.2f, -6788.4f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(982.3f, -6789.4f, 49.2f, true);
	GRAPHICS::_ADD_BLOOD_POOL(984.1f, -6786.1f, 49f, true);
	GRAPHICS::_ADD_BLOOD_POOL(979.8f, -6791.7f, 49.2f, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_23[0], "ARTHUR", Global_35, 0);
	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x515 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x522 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_27(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x55A Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_28())
		num = 0;

	if (!func_29(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x57F Hash - 0xF2ADC204 ^0xF23F9A2E
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_12(i) && func_14(i))
			func_30(i, 56, true);
	}

	func_31(&(Global_1359489.f_40), true);
	return;
}

int func_11(var uParam0) // Position - 0x5C2 Hash - 0x2AADC853 ^0x1777B6DB
{
	int i;

	for (i = 0; i <= 8; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_42[i]))
			PED::DELETE_PED(&uLocal_42[i]);
	}

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	AUDIO::_0x43037ABFE214A851();
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(2), false, 1065353216, 1f, true);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
		VEHICLE::DELETE_VEHICLE(&veLocal_31);

	func_32(volLocal_28);
	func_32(volLocal_27);
	func_32(volLocal_29);
	func_32(volLocal_30);
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(0));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(1));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(2));
	ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_23[0]);
	CAM::_UNLOAD_CINEMATIC_CAMERA_LOCATION(func_23());
	HUD::_TEXT_BLOCK_DELETE(func_24());
	func_33(0);
	return 1;
}

BOOL func_12(eStackSize essParam0) // Position - 0x675 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x694 Hash - 0xDA629583 ^0xDA629583
{
	return func_34(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x6A5 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x6D9 Hash - 0xA4706F79 ^0xAF27D1D3
{
	BOOL flag;
	PersChar persChar;
	BOOL flag2;

	if (!func_12(essParam0))
		return;

	if (func_13(essParam0))
		if (Global_1360165[essParam0 /*1157*/].f_129 != 0 && Global_1360165[essParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			return;

	if (bParam10)
	{
		func_30(essParam0, 56, true);
		func_31(&(Global_1359489.f_40), true);
	}

	func_35(essParam0, false);
	func_36(essParam0, 4, false);
	func_37(essParam0);
	func_38(essParam0);
	func_39(essParam0, 37, true);
	flag = func_40(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_41(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_42(essParam0, 64, true))
		func_39(essParam0, 64, true);

	if (bParam3)
	{
		func_39(essParam0, 33, true);
		func_39(essParam0, 34, true);
		func_43(essParam0, 1056964608, -1, 1061158912);
		func_44(essParam0, true, true, false);
	
		if (bParam6)
			func_30(essParam0, 30, true);
	
		if (bParam7)
		{
			func_30(essParam0, 35, true);
		
			if (bParam8)
				func_30(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_45(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_39(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_30(essParam0, 33, true);
		func_44(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_31(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_46(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_30(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_47(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_42(essParam0, 45, true))
		func_39(essParam0, 45, true);

	func_48(essParam0, 16, true);
	func_39(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_40(func_49(essParam0), 0))
			func_50(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x98E Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x99F Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x9B7 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x9CA Hash - 0x25093E76 ^0xEA11D27
{
	func_51(&Global_1935630, 1048576);
	uLocal_23[0] = uLocal_23[0];
	PED::_RESERVE_AMBIENT_PEDS(9);
	STREAMING::REQUEST_MODEL(eptLocal_53, false);
	STREAMING::REQUEST_MODEL(eptLocal_54, false);
	STREAMING::REQUEST_MODEL(eptLocal_55, false);
	STREAMING::REQUEST_ANIM_DICT(func_21(true));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(0));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(1));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(2));

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		uLocal_23[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(0, true), 0, func_52(0, false), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uLocal_23[0]);
	}
	else
	{
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		uLocal_23[0] = uParam0->f_2;
	}

	uLocal_23[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(1, true), 2, func_52(1, false), false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(uLocal_23[1]);
	CAM::_LOAD_CINEMATIC_CAM_LOCATION(func_23());
	STREAMING::END_SRL();
	STREAMING::PREFETCH_SRL(func_53(0));
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
	func_18(uParam0, 8);
	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0xAB1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

char* func_21(BOOL bParam0) // Position - 0xAC0 Hash - 0x822A368 ^0x822A368
{
	if (bParam0)
		return "script_shows@cancandance@p1";

	return "cancandance_fem0";
}

char* func_22(int iParam0) // Position - 0xAD8 Hash - 0x103A92E6 ^0x103A92E6
{
	switch (iParam0)
	{
		case 0:
			return "smg2_cme1";
	
		case 1:
			return "smg2_cme2";
	
		case 2:
			return "smg2_cme3";
	}

	return "";
}

char* func_23() // Position - 0xB18 Hash - 0x11AAE34F ^0x11AAE34F
{
	return "script@story@Smuggler2@beach_walk";
}

char* func_24() // Position - 0xB23 Hash - 0xB54550C0 ^0xB54550C0
{
	return "SMG2";
}

BOOL func_25(int iParam0, ePedType eptParam1, float fParam2, float fParam3, float fParam4, float fParam5) // Position - 0xB2E Hash - 0x142BB21D ^0x82189E7F
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_42[iParam0]))
		return true;

	if (bLocal_56)
		return false;

	num = 1;

	if (iParam0 == 1)
		num = 2;

	uLocal_42[iParam0] = func_54(eptParam1, fParam2, fParam5, true, true, num, true, true, true, false, false, false, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_42[iParam0], true);

	if (eptParam1 == eptLocal_54)
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_42[iParam0], Global_35, false);

	bLocal_56 = true;
	return true;
}

void func_26(int iParam0) // Position - 0xB9D Hash - 0x6D752AC3 ^0xF52AF1C
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_42[iParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_42[iParam0]))
		{
			AUDIO::STOP_PED_SPEAKING(uLocal_42[iParam0], true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_42[iParam0], true, true);
			GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(uLocal_42[iParam0], true, false), true);
			ENTITY::SET_ENTITY_HEALTH(uLocal_42[iParam0], 0, 0);
		}
	}

	return;
}

BOOL func_27(var uParam0) // Position - 0xBF4 Hash - 0x3969B7DE ^0xD5CADAD2
{
	func_55();
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
	CAM::_DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2();
	func_56(0);
	Global_16 = true;
	func_33(true);
	func_57(false);
	Global_43838 = 0;
	func_58();
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	return 1;
}

BOOL func_28() // Position - 0xC43 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_29(var uParam0) // Position - 0xC50 Hash - 0xE48374FE ^0x732F2747
{
	int num;
	Vector3 vector;
	int num2;
	int num3;
	var matrix;

	func_55();
	CAM::_DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2();

	if (bLocal_56)
		bLocal_56 = false;

	func_59(43, true, true);
	func_58();
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_31) && !ENTITY::IS_ENTITY_DEAD(veLocal_31))
	{
		if (!_IS_NULL_VECTOR(uLocal_32))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veLocal_31, uLocal_32, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(veLocal_31, uLocal_35, 2, true);
			ENTITY::SET_ENTITY_COLLISION(veLocal_31, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_31, true);
		}
	}

	if (!bLocal_39)
		bLocal_39 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");

	switch (iLocal_26)
	{
		case 0:
			MISC::_0x1096603B519C905F("SMG2");
			MISC::SET_WEATHER_TYPE(joaat("Fog"), true, true, true, 60f, false);
			CLOCK::PAUSE_CLOCK(true, 0);
			volLocal_27 = VOLUME::CREATE_VOLUME_BOX(984.2063f, -6781.2925f, 49.910652f, 0f, 0f, -19.999998f, 5f, 30f, 4f);
			volLocal_28 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), 987.43854f, -6772.322f, 49.940964f, 0f, 0f, -19.999998f, 8f, 5f, 2f);
			volLocal_29 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), 985.28705f, -6785.0093f, 49.768192f, 0f, 0f, -19.999992f, 1f, 30f, 4f);
			volLocal_30 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volBox"), 981.19763f, -6783.5225f, 49.768192f, 0f, 0f, -19.999992f, 1f, 30f, 4f);
			CAM::DO_SCREEN_FADE_IN(1000);
		
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uLocal_23[0], false))
				ANIMSCENE::START_ANIM_SCENE(uLocal_23[0]);
		
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(1));
			func_56(1);
			[[fallthrough]];
	
		case 1:
			bLocal_57 = true;
		
			if (!func_25(0, eptLocal_53, 984f, -6769.4f, 54.4f, 175f))
				bLocal_57 = false;
		
			if (!func_25(1, eptLocal_53, 984f, -6769.4f, 54.4f, 175f))
				bLocal_57 = false;
		
			if (!func_25(2, eptLocal_55, 988f, -6771f, 50f, -130f))
				bLocal_57 = false;
		
			bLocal_57 = bLocal_57;
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_31))
			{
				veLocal_31 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uLocal_23[0], "Warship", false);
			
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_31))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_31, true, true);
			}
		
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uLocal_23[0], "ARTHUR"))
			{
				ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uLocal_23[0], "Warship", &matrix, false, 0, 2);
				uLocal_32 = { matrix.f_6 };
				uLocal_35 = { matrix.f_9 };
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uLocal_23[0], "Warship", veLocal_31);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(veLocal_31, uLocal_32, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(veLocal_31, uLocal_35, 2, true);
				ENTITY::SET_ENTITY_COLLISION(veLocal_31, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_31, true);
				func_31(&uLocal_20, false);
				func_56(2);
			}
			break;
	
		case 2:
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), true, 1065353216, 1f, true);
			TASK::TASK_FLY_TO_COORD(uLocal_42[0], 2f, 983.9f, -6775.8f, 50f, true, true);
			TASK::TASK_FLY_TO_COORD(uLocal_42[1], 2f, 984f, -6775.6f, 50f, true, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uLocal_42[2], false);
			TASK::TASK_PLAY_ANIM(uLocal_42[2], func_21(true), func_21(false), 1000f, -1000f, -1, 132, 0.474f, false, 0, false, 0, false);
			func_56(3);
			break;
	
		case 3:
			if (!bLocal_58)
			{
				if (func_61(Global_35, 983.2f, -6785.1f, 49.5f, 2f, true, true))
				{
					TASK::TASK_FLY_TO_COORD(uLocal_42[0], 2f, 975.7f, -6819.1f, 51f, true, true);
					TASK::TASK_FLY_TO_COORD(uLocal_42[1], 2f, 975.7f, -6819.1f, 51f, true, true);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_42[8], 5000, SLF_WIDEST_YAW_LIMIT | 32, 51, 1);
					func_62(Global_35, "COUGH_SICK_SMALL", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
					bLocal_58 = true;
				}
			}
		
			func_63(0);
		
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_42[2], func_21(true), func_21(false), 1))
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_42[2], func_21(true), func_21(false)) >= 0.75f)
					ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(uLocal_42[2], func_21(true), func_21(false), 0.474f);
		
			vector = { func_64(1) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_27, true, 0))
				func_56(4);
			break;
	
		case 4:
			if (func_65(iLocal_52))
				func_66(&iLocal_52, true, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_42[2]))
				PED::DELETE_PED(&uLocal_42[2]);
		
			vector = { func_64(1) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			func_67(1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vector, vector.f_3, true, false, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_35, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(1), 0, 4194304, -1, false, 0, -1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MotionState_Walk"), false, 0, false);
			AUDIO::_0x5E3CCF03995388B5(MISC::GET_HASH_KEY(func_68(1)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
			CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(func_23(), func_69(1), 5);
			func_31(&uLocal_14, true);
			CLOCK::SET_CLOCK_TIME(19, 40, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), false, 1065353216, 1f, true);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(2));
			func_56(5);
			break;
	
		case 5:
			vector = { func_64(2) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			num = func_70(1) - func_71(&uLocal_14);
		
			if (func_73(2, func_72(2), num))
				func_56(6);
			break;
	
		case 6:
			vector = { func_64(2) };
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			func_67(2);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vector, vector.f_3, true, false, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_35, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(2), 0, 4194304, -1, false, 0, -1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MotionState_Walk"), false, 0, false);
			CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(func_23(), func_69(2), 5);
			func_31(&uLocal_14, true);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			STREAMING::END_SRL();
			func_74(-664252410);
			func_74(2109952320);
			func_75(2019386373);
			func_76(-217646849);
			func_76(-694809996);
			func_76(-2053475031);
			func_77(-279703229);
			func_77(-623091266);
			Global_43838 = 1;
			func_56(7);
			break;
	
		case 7:
			num = func_70(1) - func_71(&uLocal_14) - BUILTIN::FLOOR(1.6f * 1000f);
		
			if (func_73(3, func_72(2), num))
			{
				if (func_65(iLocal_52))
					func_66(&iLocal_52, true, true);
			
				ANIMSCENE::START_ANIM_SCENE(uLocal_23[1]);
			
				if (bLocal_39)
				{
					iLocal_38 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
					AUDIO::PLAY_STREAM_FRONTEND(iLocal_38);
				}
			
				AUDIO::_START_AUDIO_SCENESET("Clouds", "Death_Fail_Respawn_Scenes");
				func_56(8);
			}
			break;
	
		case 8:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_23[1]) >= 1.6f)
			{
				AUDIO::_0x43037ABFE214A851();
				ENTITY::SET_ENTITY_COORDS(Global_35, 1303.8f, -6845.3f, 42.8f, true, false, true, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_56(9);
			}
			break;
	
		case 9:
			num2 = func_78(43);
			num3 = func_79(num2);
		
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_23[1]) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(uLocal_23[1]) - 1.6f && func_80(num2) && func_81(num3, 128))
			{
				if (func_81(num3, 512))
					func_82(num3, 512);
			
				MISC::_0x1096603B519C905F("");
				func_56(10);
			}
			break;
	
		case 10:
			if (func_83())
			{
				func_56(11);
			
				if (iLocal_38 != -1)
				{
					AUDIO::STOP_STREAM(iLocal_38);
					iLocal_38 = -1;
				}
			
				AUDIO::_STOP_AUDIO_SCENESET("Death_Fail_Respawn_Scenes");
			}
			break;
	
		case 11:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_23[1]) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(uLocal_23[1]))
				return true;
			break;
	}

	return false;
}

void func_30(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x140D Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_84(essParam0))
			return;

	func_85(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_31(var uParam0, BOOL bParam1) // Position - 0x1447 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_86(uParam0))
		func_87(uParam0);

	return;
}

void func_32(Volume volParam0) // Position - 0x1467 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_33(BOOL bParam0) // Position - 0x147E Hash - 0x834FADE6 ^0x8471AEC3
{
	Global_1955834 = bParam0;

	if (bParam0)
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(false, 0);
	else
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);

	return;
}

BOOL func_34(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x14A0 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_84(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_35(eStackSize essParam0, BOOL bParam1) // Position - 0x14CA Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_84(essParam0))
		return;

	if (bParam1)
		if (func_88(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_36(essParam0, 1, false);

	func_36(essParam0, 16, bParam1);
	return;
}

void func_36(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x150C Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_84(essParam0))
		return;

	func_89(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_37(eStackSize essParam0) // Position - 0x1534 Hash - 0x7895582D ^0x7895582D
{
	func_36(essParam0, 8, false);
	return;
}

void func_38(eStackSize essParam0) // Position - 0x1545 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_30(essParam0, 36, true);
	return;
}

void func_39(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1556 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_84(essParam0))
			return;

	func_85(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_40(Ped pedParam0, int iParam1) // Position - 0x1590 Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_90(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_90(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_90(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_90(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_90(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_90(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_90(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_90(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_41(eStackSize essParam0, BOOL bParam1) // Position - 0x168F Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_91(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_42(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x16CE Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_84(essParam0))
			return false;

	func_85(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_43(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1709 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_92(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_93(essParam0);
		}
	}

	if (func_42(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_92(essParam0), 137, true);

	return;
}

void func_44(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x175B Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_84(essParam0))
		return;

	if (bParam1)
	{
		func_39(essParam0, 50, true);
		func_39(essParam0, 48, true);
		func_39(essParam0, 49, true);
		func_39(essParam0, 51, true);
		func_39(essParam0, 52, true);
		func_39(essParam0, 54, true);
		func_39(essParam0, 55, true);
	}
	else
	{
		func_30(essParam0, 50, true);
		func_30(essParam0, 48, true);
		func_30(essParam0, 49, true);
		func_30(essParam0, 51, true);
	
		if (bParam3)
			func_30(essParam0, 54, true);
		else
			func_39(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_30(essParam0, 52, true);
		
			if (bParam3)
				func_30(essParam0, 55, true);
		}
		else
		{
			func_39(essParam0, 52, true);
		
			if (!bParam3)
				func_39(essParam0, 55, true);
		}
	}

	return;
}

void func_45(eStackSize essParam0, BOOL bParam1) // Position - 0x182D Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_84(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_92(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_92(essParam0), 204, false);

	return;
}

void func_46(var uParam0) // Position - 0x1864 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_47(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x187A Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_12(essParam0))
		return;

	if (func_13(essParam0))
	{
		if (!func_14(essParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_42(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_41(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_92(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_94(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(ped) && ENTITY::IS_ENTITY_ATTACHED(ped))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(ped, 1) || TASK::IS_PED_EXITING_SCENARIO(ped, true) || PED::IS_PED_ON_MOUNT(ped) || PED::IS_PED_IN_ANY_VEHICLE(ped, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, true, true);
		}
	
		ENTITY::DETACH_ENTITY(ped, true, true);
	}

	if (bParam4)
	{
		func_30(essParam0, 2, true);
	}
	else
	{
		func_95(essParam0);
		func_30(essParam0, 1, true);
	}

	return;
}

void func_48(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1988 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_49(eStackSize essParam0) // Position - 0x19C4 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_50(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x1A04 Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_84(essParam1))
		return;

	player = func_49(essParam1);

	if (func_96(essParam1))
		if (!func_97(essParam1))
			return;

	func_39(essParam1, 39, true);
	func_98(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_98(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_98(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_30(essParam1, 43, true);
		}
	
		if (bParam4)
			func_99(essParam1, false, true, true, true);
	}

	return;
}

void func_51(int iParam0, int iParam1) // Position - 0x1AA6 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

char* func_52(int iParam0, BOOL bParam1) // Position - 0x1AB7 Hash - 0xFC61414B ^0x479C49FE
{
	switch (iParam0)
	{
		case 0:
			return bParam1 ? "script@story@SMG2@IG@IG_CME_Start@smuggler2_cme" : "";
	
		case 1:
			return bParam1 ? "script@timelapse@sad3_ext_timelapse" : "";
	}

	return "";
}

char* func_53(int iParam0) // Position - 0x1AFB Hash - 0xE6BC3F ^0x88512369
{
	switch (iParam0)
	{
		case 0:
			return "script@cme@SMG2_CME_SHOT1_srl";
	
		case 1:
			return "script@cme@SMG2_CME_SHOT2_srl";
	
		case 2:
			return "script@cme@SMG2_CME_SHOT3_srl";
	}

	return "";
}

Ped func_54(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1B3E Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_101(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_55() // Position - 0x1B80 Hash - 0x92C2AC43 ^0x92C2AC43
{
	Global_1905944.f_5695 = 1;
	return;
}

void func_56(int iParam0) // Position - 0x1B90 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_26 = iParam0;
	return;
}

void func_57(BOOL bParam0) // Position - 0x1B9C Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_102(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_51(&Global_1935630, 4194304);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

void func_58() // Position - 0x1C3F Hash - 0x5808700A ^0x37733FF6
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_PLAYER_MENU"), false);
	return;
}

int func_59(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CF7 Hash - 0x495686EB ^0x978C707D
{
	int num;

	if (!func_103(essParam0))
		return 1;

	if (func_104(32768))
		return 1;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[essParam0 /*74*/].f_16, false))
		return 1;

	num = func_79(func_78(essParam0));

	if (Global_1835011[essParam0 /*74*/].f_71)
		return 1;

	if (!func_80(func_78(essParam0)))
		func_105(essParam0, false, false, -1);

	if (func_106(num))
	{
		if (!Global_1835011[essParam0 /*74*/].f_71)
		{
			if (bParam1)
				func_107(num, 256);
		
			if (bParam2)
				func_107(num, 512);
		
			Global_1835011[essParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}

	return 0;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1DAD Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_61(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1DD7 Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
			return true;
	else if (func_108(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), fParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_62(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x1E32 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_109(pedParam0, &str);
}

void func_63(int iParam0) // Position - 0x1E79 Hash - 0xE9F0B13E ^0xA00CB084
{
	BOOL flag;
	int points;
	int num;
	int point;
	var unk;
	var coord;

	func_31(&uLocal_17, false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);

	if (!(PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_LR")) == 0f) || !(PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_RIGHT_ONLY")) == 0f) || !(PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_UP_ONLY")) == 0f) || !(PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_DOWN_ONLY")) == 0f))
		flag = true;

	if (!flag)
		if (func_65(iLocal_52) && func_110(iLocal_52, true))
			flag = true;

	if (flag)
	{
		func_87(&uLocal_20);
	
		if (func_65(iLocal_52))
			func_66(&iLocal_52, true, true);
	
		if (func_71(&uLocal_17) >= 60)
		{
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_22(iParam0), &points);
			num = func_111(Global_35, func_22(iParam0), &unk);
			point = func_112(num + 2, 0, points - 1);
			TASK::WAYPOINT_RECORDING_GET_COORD(func_22(iParam0), point, &coord);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 60, func_113(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), coord), false, true);
			func_87(&uLocal_17);
		}
	}
	else if (!func_65(iLocal_52))
	{
		if (func_114(&uLocal_20) >= 5f)
		{
			if (!bLocal_40)
			{
				HUD::TEXT_BLOCK_REQUEST(func_24());
				bLocal_40 = true;
			}
			else if (!bLocal_41)
			{
				if (HUD::TEXT_BLOCK_IS_LOADED(func_24()))
					bLocal_41 = true;
			}
			else
			{
				iLocal_52 = func_115("SMG2_O_HLP_WALK", joaat("INPUT_MOVE_UD"), joaat("INPUT_MOVE_LR"), 16);
				func_116(iLocal_52, 10, true, true);
				func_116(iLocal_52, 11, true, true);
				func_116(iLocal_52, 14, true, true);
			}
		}
	}

	return;
}

struct<4> func_64(int iParam0) // Position - 0x1FFC Hash - 0x74E44354 ^0xD77A88E4
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 986.7128f, -6775.7607f, 49.9186f };
			unk.f_3 = 167.688f;
			break;
	
		case 1:
			unk = { 998.3f, -6913.8f, 41.6f };
			unk.f_3 = -154.6f;
			break;
	
		case 2:
			unk = { 1008.8f, -6948.5f, 41.9f };
			unk.f_3 = -160f;
			break;
	
		default:
			break;
	}

	return unk;
}

BOOL func_65(int iParam0) // Position - 0x2082 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_66(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x20C1 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_65(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_117(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_118(num);
	*uParam0 = 0;
	return;
}

void func_67(int iParam0) // Position - 0x2115 Hash - 0xBC78352E ^0xFD693DBD
{
	Vector3 vector;

	vector = { func_64(iParam0) };
	MISC::CLEAR_AREA(vector, 10f, 1131016);
	return;
}

char* func_68(int iParam0) // Position - 0x2138 Hash - 0x1EC87C2F ^0x5F267A18
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1_CAM";
	
		case 2:
			return "3_BEACH_2_CAM";
	}

	return "";
}

char* func_69(int iParam0) // Position - 0x216B Hash - 0x1EC87C2F ^0x1731BBB8
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1";
	
		case 2:
			return "3_BEACH_2";
	}

	return "";
}

int func_70(int iParam0) // Position - 0x219E Hash - 0x9C31FE76 ^0xCD5D77C0
{
	int any;

	any = CAM::_0xEA113BF9B0C0C5D7(func_23(), func_69(iParam0), 5);
	return any;
}

int func_71(var uParam0) // Position - 0x21B9 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_86(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_119(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_120() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

Vector3 func_72(int iParam0) // Position - 0x220C Hash - 0x10D617B3 ^0x10D617B3
{
	var unk;

	unk = { func_64(iParam0) };

	switch (iParam0)
	{
		case 1:
			return unk;
	
		case 2:
			return unk;
	}

	return 0f, 0f, 0f;
}

BOOL func_73(int iParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x2249 Hash - 0x4A9513C ^0x39FB9F5B
{
	Hash hashKey;
	Any any;
	BOOL any2;

	if (!(iParam0 == 3))
	{
		hashKey = MISC::GET_HASH_KEY(func_68(iParam0));
		any = CAM::_0x465F04F68AD38197(func_23(), func_69(iParam0), 5);
	}
	else
	{
		any = CAM::_0x465F04F68AD38197(func_23(), func_69(2), 5);
	}

	any2 = AUDIO::_0xFFE9C53DEEA3DB0B(iParam4, hashKey, vParam1, STREAMING::IS_SRL_LOADED(), any);
	return any2;
}

void func_74(int iParam0) // Position - 0x229F Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_121(iParam0, 1);
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

void func_75(int iParam0) // Position - 0x2325 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_121(iParam0, 1);
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

void func_76(Hash hParam0) // Position - 0x23BE Hash - 0x7DD010A2 ^0xA0826F55
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REMOVE_IPL_HASH(hParam0);

	return;
}

void func_77(Hash hParam0) // Position - 0x23D5 Hash - 0x78302BA0 ^0x558F2DE9
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REQUEST_IPL_HASH(hParam0);

	return;
}

int func_78(eStackSize essParam0) // Position - 0x23ED Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_103(essParam0))
		return 0;

	return Global_1835011[essParam0 /*74*/].f_1;
}

int func_79(int iParam0) // Position - 0x240D Hash - 0x6B3238EF ^0x6B3238EF
{
	int i;

	if (Global_1898329 <= 0)
		return -1;

	i = 0;

	for (i = 0; i <= Global_1898329 - 1; i = i + 1)
	{
		if (Global_1898330[i] == iParam0)
			return i;
	}

	return -1;
}

BOOL func_80(int iParam0) // Position - 0x244E Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return false;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return false;
	
		num = func_122(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

BOOL func_81(int iParam0, int iParam1) // Position - 0x24B9 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_106(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

void func_82(int iParam0, int iParam1) // Position - 0x24DB Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_106(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 - Global_1898346[iParam0 /*6*/].f_1 && iParam1;
	return;
}

BOOL func_83() // Position - 0x2512 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_84(eStackSize essParam0) // Position - 0x252E Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_85(int iParam0, var uParam1, var uParam2) // Position - 0x253A Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_86(var uParam0) // Position - 0x2557 Hash - 0x5001E582 ^0x5001E582
{
	return func_123(*uParam0, 1);
}

void func_87(var uParam0) // Position - 0x2567 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_124(uParam0, 0f);
	return;
}

BOOL func_88(int iParam0, int iParam1) // Position - 0x2576 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_89(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2586 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_90(int iParam0, int iParam1) // Position - 0x25AC Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_91(eStackSize essParam0) // Position - 0x25BB Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_84(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_125(essParam0);
	
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

Ped func_92(eStackSize essParam0) // Position - 0x2623 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_84(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_93(eStackSize essParam0) // Position - 0x265D Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_92(essParam0)))
		{
			func_126(essParam0, 67108864, true);
			func_39(essParam0, 19, true);
		}
	}

	return;
}

float func_94(eStackSize essParam0) // Position - 0x2690 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_84(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_95(eStackSize essParam0) // Position - 0x26B1 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_92(essParam0);
	persChar = func_41(essParam0, false);
	func_127(essParam0, ped);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			flag = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
		}
	
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		if (flag)
			PED::_UNRESERVE_AMBIENT_PEDS(1);
	}

	PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
	return;
}

BOOL func_96(eStackSize essParam0) // Position - 0x270B Hash - 0x6410553A ^0x46627D03
{
	if (!func_84(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_97(eStackSize essParam0) // Position - 0x2757 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_84(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_98(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x277F Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_84(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_99(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x27E4 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_84(essParam0))
		return 0;

	mount = func_49(essParam0);

	if (func_40(mount, 0))
	{
		if (func_40(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_96(essParam0) || func_97(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_128(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_129(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_130(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_131(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(essParam0, false));
					func_132(essParam0);
				}
			}
			else
			{
				if (func_34(essParam0, 32768, true))
				{
					persChar = func_131(essParam0, false);
					PERSCHAR::_0xB65E7F733956CF25(persChar);
					PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&mount);
				}
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(mount, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_40(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_34(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_130(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_131(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_130(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_133(essParam0, 0);
	return 1;
}

var func_100(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2995 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_101(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x29AC Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_134(eptParam1))
		{
			func_135(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_136(pedParam0, 0, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_137(pedParam0, false);
			flag = true;
		}
	
		func_138(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_102(int iParam0, int iParam1) // Position - 0x2A8D Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_103(eStackSize essParam0) // Position - 0x2AA2 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return essParam0 > -1 && essParam0 <= 80;
}

BOOL func_104(int iParam0) // Position - 0x2AB8 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_105(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x2ACB Hash - 0xCD2F5C8B ^0xD79ECC6F
{
	int num;

	if (!func_139(essParam0))
		return 0;

	if (func_140(Global_1347702[59 /*49*/].f_15, true) && !func_140(Global_1347702[61 /*49*/].f_15, true) && Global_40.f_9052.f_21 & 2 == 0)
		return 0;

	if (func_141(PLAYER::PLAYER_ID(), true, false))
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27) && !func_142(essParam0) && !Global_43891)
		{
			func_144(essParam0, BUILTIN::VDIST2(func_143(essParam0), Global_36), -1, true, true);
			func_145(&Global_1835011[essParam0 /*74*/], 2);
		}
	
		return 0;
	}

	if (bParam2)
	{
		if (!func_147(func_146(essParam0), func_78(essParam0), 0, Global_1835011[essParam0 /*74*/].f_21, iParam3))
			return 0;
	
		if (func_148(true) > 1)
		{
			if (Global_1835011[essParam0 /*74*/].f_73 <= 0)
				Global_1835011[essParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
		
			if (MISC::GET_GAME_TIMER() - Global_1835011[essParam0 /*74*/].f_73 < 60000)
			{
				if (func_149(essParam0, false, true))
					return 0;
			
				if (essParam0 == 15 && Global_1357549.f_1494 & 32768 != 0 && func_61(Global_35, func_150(essParam0), 50f, true, true))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[essParam0 /*74*/].f_72))
					{
						Global_1835011[essParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[essParam0 /*74*/].f_72, func_150(essParam0), 5f);
					}
				
					if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[essParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_150(essParam0), 2.5f))
						return 0;
				}
			}
		}
	}

	num = func_151(Global_1835011[essParam0 /*74*/].f_1);

	if (!func_106(num))
	{
		return 0;
	}
	else if (Global_1835011[essParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[essParam0 /*74*/].f_73 = 0;
		func_152(essParam0);
	
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[essParam0 /*74*/].f_72))
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[essParam0 /*74*/].f_72);
	}

	if (bParam1)
		func_153(Global_1835011[essParam0 /*74*/].f_1);
	else if (!Global_1879534)
		func_154(4);

	return 1;
}

BOOL func_106(int iParam0) // Position - 0x2D11 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

void func_107(int iParam0, int iParam1) // Position - 0x2D30 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_106(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

float func_108(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x2D5C Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_109(Ped pedParam0, Any* panParam1) // Position - 0x2D7A Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_110(int iParam0, BOOL bParam1) // Position - 0x2D8A Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_65(iParam0))
		return false;

	num = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

int func_111(Ped pedParam0, char* sParam1, Vector3* pvParam2) // Position - 0x2DBD Hash - 0xE0DA54FD ^0xCA92C89A
{
	int point;
	BOOL alive;
	Vector3 entityCoords;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(pedParam0))
			alive = false;
		else
			alive = true;
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, alive, false) };
	
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, entityCoords, &point))
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, point, pvParam2))
				return point;
	}

	return point;
}

int func_112(int iParam0, int iParam1, int iParam2) // Position - 0x2E1B Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

float func_113(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x2E40 Hash - 0x34651BCB ^0x51745601
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

float func_114(var uParam0) // Position - 0x2E5A Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_86(uParam0))
		return uParam0->f_1;

	if (func_119(uParam0))
		return uParam0->f_2;

	return func_155() - uParam0->f_1;
}

int func_115(char* sParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x2E8F Hash - 0x82E2A46D ^0x46776D02
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_156(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_157(num, hParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824, 0, 1065353216, false, false, hParam2, joaat("SHORT_TIMED_EVENT"), false);
		return num;
	}

	return 0;
}

void func_116(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2F1D Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_65(iParam0))
		return;

	num = func_117(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

int func_117(int iParam0) // Position - 0x2F68 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_118(int iParam0) // Position - 0x2F72 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_158(iParam0))
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

BOOL func_119(var uParam0) // Position - 0x3025 Hash - 0x39705408 ^0x39705408
{
	return func_123(*uParam0, 2);
}

int func_120() // Position - 0x3035 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

int func_121(int iParam0, int iParam1) // Position - 0x3053 Hash - 0x8FA0E29 ^0xC3F68E87
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

int func_122(int iParam0) // Position - 0x416E Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_159(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_123(int iParam0, int iParam1) // Position - 0x41AF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_124(var uParam0, float fParam1) // Position - 0x41BE Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_155() - fParam1;
	func_160(uParam0, 1);
	func_161(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Hash func_125(int iParam0) // Position - 0x41E4 Hash - 0xBA965109 ^0xCB1D208B
{
	switch (iParam0)
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

void func_126(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x43C0 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_127(eStackSize essParam0, Ped pedParam1) // Position - 0x43F1 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_162(pedParam1);

	return;
}

float func_128(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x440B Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_108(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_129(eStackSize essParam0, BOOL bParam1) // Position - 0x4462 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_84(essParam0))
		return 0;

	if (Global_1360165[essParam0 /*1157*/].f_127 != 0)
		return Global_1360165[essParam0 /*1157*/].f_127;

	switch (essParam0)
	{
		case 0:
			return joaat("perschar_comp_horse_dutch");
	
		case 1:
			return joaat("perschar_comp_horse_john");
	
		case 2:
			return joaat("perschar_comp_horse_javier");
	
		case 3:
			return joaat("perschar_comp_horse_bill");
	
		case 4:
			return joaat("perschar_comp_horse_uncle");
	
		case 5:
			return joaat("perschar_comp_horse_hosea");
	
		case 6:
			return joaat("perschar_comp_horse_micah");
	
		case 7:
			return joaat("perschar_comp_horse_charles");
	
		case 8:
			return joaat("perschar_comp_horse_sean");
	
		case 9:
			return joaat("perschar_comp_horse_lenny");
	
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
	
		case 11:
			return joaat("perschar_comp_horse_sadie");
	
		case 12:
		case 14:
			return 0;
	
		case 20:
			return joaat("perschar_comp_horse_karen");
	
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
	
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
	
		default:
		
	}

	if (bParam1)
	{
		Global_1360165[essParam0 /*1157*/].f_127 = func_163(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_130(eStackSize essParam0) // Position - 0x45A7 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_49(essParam0);

	if (!PED::IS_PED_CARRYING_SOMETHING(player))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(player, itemset);

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entityFromItem))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
		
			ENTITY::_DELETE_CARRIABLE(&entityFromItem);
		}
	}

	return;
}

PersChar func_131(eStackSize essParam0, BOOL bParam1) // Position - 0x461D Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_84(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_164(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_132(eStackSize essParam0) // Position - 0x4669 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_84(essParam0))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/].f_1 == essParam0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = -1;
			Global_1360165[essParam0 /*1157*/].f_127 = 0;
		}
	}

	return;
}

void func_133(eStackSize essParam0, int iParam1) // Position - 0x46BC Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_84(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

BOOL func_134(ePedType eptParam0) // Position - 0x46E0 Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_135(Ped pedParam0, Hash hParam1) // Position - 0x4B33 Hash - 0xEA1C858E ^0x2672C4
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_165(pedParam0, hParam1))
		{
			if (func_166(pedParam0, hParam1))
			{
				if (func_167(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_168(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

void func_136(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x4BDD Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_137(Ped pedParam0, BOOL bParam1) // Position - 0x4C0D Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_138(Ped pedParam0, int iParam1) // Position - 0x4C52 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_139(eStackSize essParam0) // Position - 0x4C79 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_169(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_140(int iParam0, BOOL bParam1) // Position - 0x4CA5 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_170(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

BOOL func_141(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4CD6 Hash - 0xCB9E150E ^0xCB9E150E
{
	if (func_171(plParam0, bParam1, bParam2, true))
		return true;

	return false;
}

BOOL func_142(Hash hParam0) // Position - 0x4CF1 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_172(hParam0);
}

Vector3 func_143(eStackSize essParam0) // Position - 0x4CFF Hash - 0x6099830A ^0xA6B953C5
{
	switch (essParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
	
		default:
		
	}

	return Global_1835011[essParam0 /*74*/].f_18;
}

int func_144(eStackSize essParam0, float fParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4D33 Hash - 0xFE346E5F ^0x940BCCCD
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	eStackSize stackSize;
	BOOL flag5;
	BOOL flag6;
	var unk;

	if (func_104(32768))
		return 0;

	flag = func_173();

	if (bParam4 && func_174(&(Global_1835011[essParam0 /*74*/].f_29), 512) && !func_174(&(Global_1835011[essParam0 /*74*/].f_29), 1024))
		if (func_175())
			return 0;

	if (Global_1835011[essParam0 /*74*/].f_71)
		return 0;

	if (!func_176(essParam0))
		return 0;

	if (flag == -1)
		if (essParam0 == 19)
			if (func_140(Global_1835011[20 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_177() <= 2000)
				return 0;
		else if (essParam0 == 20)
			if (func_140(Global_1835011[19 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_177() <= 2000)
				return 0;
		else if (essParam0 == 14)
			if (!func_140(Global_1347702[62 /*49*/].f_15, true))
				return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27))
	{
		flag4 = Global_1835011[essParam0 /*74*/].f_70;
	
		if (func_178(essParam0, flag) && !flag4)
		{
			if (bParam3 || func_179(&Global_1835011[essParam0 /*74*/], 2))
			{
				if (func_180(essParam0))
				{
					Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_181(essParam0));
					flag3 = true;
				}
				else
				{
					Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_182(essParam0));
				}
			}
			else if (func_180(essParam0))
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(joaat("BLIP_STYLE_MISSION"), func_181(essParam0), func_183(essParam0), func_184(essParam0));
				flag3 = true;
			}
			else
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION"), func_185(essParam0), func_186(essParam0));
			}
		}
		else if (flag4)
		{
			if (!func_180(essParam0))
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_143(essParam0));
			}
			else
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_181(essParam0));
				flag3 = true;
			}
		}
		else if (func_142(essParam0))
		{
			if (essParam0 == 7)
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), func_182(essParam0));
			else
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_182(essParam0));
		}
		else
		{
			Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_182(essParam0));
		}
	
		Global_1835011[essParam0 /*74*/].f_28 = joaat("BLIP_STYLE_MISSION");
		flag2 = true;
	
		if (iParam2 != -1)
			if (flag3 || func_180(essParam0))
				func_107(iParam2, 4194304);
			else
				func_82(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[essParam0 /*74*/].f_27, 63, essParam0);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27))
		return 0;

	if (flag2)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[essParam0 /*74*/].f_27, Global_1835011[essParam0 /*74*/].f_26, true);
	
		if (flag != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[essParam0 /*74*/].f_27, &(Global_1835011[essParam0 /*74*/].f_39));
	
		if (!func_174(&(Global_1835011[essParam0 /*74*/].f_29), 1024) && !func_142(essParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_187(&(Global_1835011[essParam0 /*74*/].f_29), 1024);
		}
	}

	if (flag != -1)
		return 1;

	if (!func_142(essParam0))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));

	if (bParam3 || func_179(&Global_1835011[essParam0 /*74*/], 2))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));

	stackSize = func_188(Global_40.f_4283);

	if (func_189(stackSize) && func_190(Global_1888801[stackSize /*35*/].f_13))
	{
		flag5 = true;
		flag6 = func_191(stackSize);
	}

	if (func_192(essParam0, flag5, stackSize))
		func_193(Global_1835011[essParam0 /*74*/].f_1, flag6, flag5, stackSize);

	if (essParam0 == 7 && !func_194(579))
		func_195(579, Global_1835011[essParam0 /*74*/].f_27, false);

	if (essParam0 == 2)
		return 1;

	if (func_174(&(Global_1835011[essParam0 /*74*/].f_29), 4096) && !func_174(&(Global_1835011[essParam0 /*74*/].f_29), 8192) && (float)func_177() >= 10f && !Global_1935630.f_12 && !Global_16 && !func_196(Global_35, joaat("prop_player_sleep_tent_a_frame")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("world_player_sleep_bedroll")))
	{
		if (!func_178(essParam0, flag) || fParam1 >= func_197(essParam0) * func_197(essParam0) && !Global_1835011[essParam0 /*74*/].f_70)
		{
			TEXT_LABEL_COPY(&unk, { Global_1835011[essParam0 /*74*/].f_8 }, 2);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 16);
			func_198(&unk, 10000, 0, 0, 0, true);
			func_187(&(Global_1835011[essParam0 /*74*/].f_29), 8192);
		}
	}

	return 1;
}

void func_145(int iParam0, int iParam1) // Position - 0x52B5 Hash - 0x53A96DDB ^0x308B6379
{
	iParam0->f_63 = iParam0->f_63 || iParam1;
	return;
}

int func_146(eStackSize essParam0) // Position - 0x52C8 Hash - 0xE4DA9E55 ^0x3BF2293
{
	if (!func_103(essParam0))
		return 0;

	return Global_1835011[essParam0 /*74*/].f_30;
}

BOOL func_147(int iParam0, int iParam1, int iParam2, eStackSize essParam3, eStackSize essParam4) // Position - 0x52E8 Hash - 0x2F357F29 ^0x2F357F29
{
	eStackSize i;

	if (func_173() != -1)
		return true;

	if (iParam2 == 0 && func_199(0, true, true))
		return false;

	if (Global_1879534)
		return false;

	if (func_200(iParam0, iParam1))
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_201(i, &iParam0))
		{
			Global_40.f_4942[i /*60*/].f_59 = iParam1;
		
			if (essParam3 == essParam4)
				func_126(i, 512, true);
			else
				func_48(i, 512, true);
		}
	}

	return true;
}

int func_148(BOOL bParam0) // Position - 0x5378 Hash - 0x88929B6 ^0x3BF87E4F
{
	int num;
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize i;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case 987244216:
						stackSize = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
					
						if (func_202(Global_1347702[stackSize /*49*/].f_12, 1))
							num = num + 1;
						break;
				}
			}
		}
	}

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							num = num + 1;
						}
						else
						{
							stackSize2 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
						
							if (func_103(stackSize2) && !func_172(stackSize2))
								num = num + 1;
						}
						break;
				}
			}
		}
	}

	return num;
}

BOOL func_149(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x54D0 Hash - 0x1C7132A3 ^0x3158884D
{
	int num;
	eStackSize i;
	Ped ped;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	num = func_146(essParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_201(i, &num))
		{
			ped = func_92(func_203(essParam0));
		
			if (ENTITY::IS_ENTITY_DEAD(ped))
			{
			}
			else
			{
				if (bParam1 && func_42(i, 67, true))
					return true;
			
				if (bParam2 && func_42(i, 47, true))
					return true;
			
				if (!PED::_IS_PED_VISIBILITY_TRACKED(ped))
					PED::REQUEST_PED_VISIBILITY_TRACKING(ped);
			
				if (PED::IS_TRACKED_PED_VISIBLE(ped))
					return true;
			}
		}
	}

	return false;
}

Vector3 func_150(eStackSize essParam0) // Position - 0x556D Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_182(essParam0);
}

int func_151(int iParam0) // Position - 0x557B Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_169(iParam0))
		return -1;

	if (func_173() != -1)
	{
		num2 = func_79(iParam0);
	
		if (num2 >= 0)
		{
			func_204(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_205(num, true);
			func_204(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_79(iParam0);
	
		if (num2 >= 0)
		{
			func_204(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_206(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_205(i, true);
					func_204(iParam0, true);
					Global_1898329 = Global_1898329 + 1;
				
					if (Global_1898329 > 15)
						Global_1898329 = 15;
				
					return i;
				}
			}
		}
	}

	return -1;
}

void func_152(eStackSize essParam0) // Position - 0x5697 Hash - 0x2310F0AA ^0x2CE4B7A2
{
	int num;
	eStackSize i;
	Ped ped;

	num = func_146(essParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_201(i, &num))
		{
			ped = func_92(func_203(essParam0));
		
			if (ENTITY::IS_ENTITY_DEAD(ped))
			{
			}
			else if (PED::_IS_PED_VISIBILITY_TRACKED(ped))
			{
				PED::RELEASE_PED_VISIBILITY_TRACKING(ped);
			}
		}
	}

	return;
}

void func_153(int iParam0) // Position - 0x56EC Hash - 0x646928F0 ^0x646928F0
{
	func_207(iParam0);
	return;
}

void func_154(BOOL bParam0) // Position - 0x56FA Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

float func_155() // Position - 0x570D Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_156(int iParam0, int iParam1) // Position - 0x573F Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_157(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x5760 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = volParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
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
	func_208(iParam0, true);
	func_209(iParam0, true);
	func_210(iParam0, 128);
	return;
}

BOOL func_158(int iParam0) // Position - 0x5A06 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_156(iParam0, 2);
}

int func_159(int iParam0) // Position - 0x5A15 Hash - 0x6EC15CF9 ^0xE613EBE0
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

void func_160(var uParam0, int iParam1) // Position - 0x5A96 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_161(var uParam0, int iParam1) // Position - 0x5AA7 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_162(Ped pedParam0) // Position - 0x5ABC Hash - 0xE7050FE7 ^0x826B9E4
{
	int _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");

	if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(_int))
		PED::_RELEASE_META_PED_OUTFIT_REQUEST(_int);

	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

Hash func_163(eStackSize essParam0) // Position - 0x5B24 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_84(essParam0))
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1357549.f_1675[i /*5*/].f_1 == essParam0)
			{
				Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
				return Global_1357549.f_1675[i /*5*/];
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/] != 0 && Global_1357549.f_1675[i /*5*/].f_1 == -1)
		{
			hash = Global_1357549.f_1675[i /*5*/];
			break;
		}
	}

	if (!func_84(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_164(eStackSize essParam0) // Position - 0x5C05 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_84(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_129(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

BOOL func_165(Ped pedParam0, Hash hParam1) // Position - 0x5CA1 Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_166(Ped pedParam0, Hash hParam1) // Position - 0x5CCF Hash - 0xA54F3032 ^0x1217D7F6
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_167(Ped pedParam0, Hash hParam1) // Position - 0x5D20 Hash - 0xA54F3032 ^0x1217D7F6
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_165(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_168(Ped pedParam0) // Position - 0x5D92 Hash - 0x446F1BDD ^0x4203B5F4
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_169(int iParam0) // Position - 0x5DB0 Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_170(iParam0) == 0;
}

int func_170(int iParam0) // Position - 0x5DC0 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_206(iParam0))
		return -1;

	return func_122(iParam0);
}

BOOL func_171(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5DDC Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_211(bParam1, bParam2, bParam3);

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

BOOL func_172(eStackSize essParam0) // Position - 0x5F11 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

BOOL func_173() // Position - 0x5F35 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_174(var uParam0, int iParam1) // Position - 0x5F43 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return 1;

	return 0;
}

BOOL func_175() // Position - 0x5F63 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_176(int iParam0) // Position - 0x5F83 Hash - 0x2CA81420 ^0xF4BC7BB7
{
	if (func_173() == false)
		return true;

	switch (iParam0)
	{
		case 18:
			return func_140(Global_1347702[21 /*49*/].f_15, true);
	
		case 44:
			return func_140(Global_1347702[83 /*49*/].f_15, true);
	}

	return true;
}

int func_177() // Position - 0x5FD6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898438;
}

BOOL func_178(eStackSize essParam0, BOOL bParam1) // Position - 0x5FE2 Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (bParam1 != -1)
		return false;

	if (func_180(essParam0))
	{
		switch (essParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}

	switch (essParam0)
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

BOOL func_179(int iParam0, int iParam1) // Position - 0x60A6 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

BOOL func_180(eStackSize essParam0) // Position - 0x60B7 Hash - 0x67D822A ^0x67D822A
{
	switch (essParam0)
	{
		case 14:
		case 34:
			return !func_212(&Global_1835011[essParam0 /*74*/]);
	}

	return false;
}

Vector3 func_181(eStackSize essParam0) // Position - 0x60E7 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (essParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[essParam0 /*74*/].f_18;
}

Vector3 func_182(eStackSize essParam0) // Position - 0x6139 Hash - 0xACD6F870 ^0xDE230469
{
	if (func_180(essParam0))
		return func_181(essParam0);

	return Global_1835011[essParam0 /*74*/].f_18;
}

Vector3 func_183(int iParam0) // Position - 0x615F Hash - 0x92A36B48 ^0x92A36B48
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
	
		default:
		
	}

	return 5f, 5f, 5f;
}

int func_184(int iParam0) // Position - 0x6186 Hash - 0xA5C2BBC7 ^0xA5C2BBC7
{
	switch (iParam0)
	{
		case 14:
			return 19;
	
		default:
		
	}

	return 0;
}

Vector3 func_185(int iParam0) // Position - 0x61A2 Hash - 0xE4F42658 ^0xFC03374
{
	switch (iParam0)
	{
		case 8:
			return 891.27f, 1279.39f, 234.14f;
	
		case 12:
			return -1541.14f, -305.74f, Global_1835011[iParam0 /*74*/].f_18.f_2;
	
		case 27:
			return 2604.7424f, -1212.2946f, 52.3389f;
	
		case 29:
			return 2715.245f, -1356.5518f, Global_1835011[iParam0 /*74*/].f_18.f_2;
	
		case 39:
			return 4432.49f, -3404.77f, Global_1835011[iParam0 /*74*/].f_18.f_2;
	
		case 41:
			return 1332.6323f, -7248.313f, 55.5522f;
	}

	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_186(eStackSize essParam0) // Position - 0x6275 Hash - 0x944FFAA0 ^0x944FFAA0
{
	switch (essParam0)
	{
		case 8:
			return 54f;
	
		case 12:
			return 45f;
	
		case 27:
			return 35f;
	
		case 41:
			return 50f;
	
		case 54:
			return 17.5f;
	
		default:
		
	}

	return 25f;
}

void func_187(var uParam0, int iParam1) // Position - 0x62D0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

eStackSize func_188(eStackSize essParam0) // Position - 0x62E1 Hash - 0x84838E68 ^0x84838E68
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

BOOL func_189(eStackSize essParam0) // Position - 0x6364 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_190(Hash hParam0) // Position - 0x637A Hash - 0xC62F3EC7 ^0x941BF203
{
	if (hParam0 >= 0 && hParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[hParam0]);

	return false;
}

BOOL func_191(eStackSize essParam0) // Position - 0x63A3 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_213(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_214(essParam0))
			if (BUILTIN::VDIST(Global_36, func_215(essParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[essParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_215(essParam0), false) <= func_216();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[essParam0 /*35*/].f_15, false) <= func_216();
	}

	return func_217();
}

BOOL func_192(Hash hParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x6433 Hash - 0x561CE123 ^0xB84B7B4C
{
	if (hParam0 == 18)
		return false;

	if (hParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27) && Global_1835011[hParam0 /*74*/].f_21 == essParam2)
		return true;

	return false;
}

void func_193(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x6480 Hash - 0x436A2EB9 ^0x436A2EB9
{
	Hash hash;
	Hash hash2;
	Hash styleHash;

	if (!func_206(iParam0))
		return;

	switch (func_218(iParam0))
	{
		case 1:
			hash = func_219(iParam0);
		
			if (func_220(hash, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
				if (func_178(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_178(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[hash /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[hash /*74*/].f_27, styleHash);
			
				if (!func_142(hash))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_179(&Global_1835011[hash /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[hash /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			hash2 = func_219(iParam0);
		
			if (func_221(hash2, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_222(hash2))
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
				styleHash = func_222(hash2);
			}
		
			if (Global_1347702[hash2 /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[hash2 /*49*/].f_37, styleHash);
				func_223(hash2);
				Global_1347702[hash2 /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

BOOL func_194(int iParam0) // Position - 0x667C Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_173() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_195(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x66C1 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_224(iParam0, &num, &num2);

	if (!func_225(iParam0, num, num2, bParam2))
		return;

	if (!func_226(iParam0, 1024))
		return;

	func_227(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	return;
}

BOOL func_196(Ped pedParam0, Hash hParam1) // Position - 0x6721 Hash - 0x2ACCF512 ^0x1B61D374
{
	return PED::IS_PED_USING_SCENARIO_HASH(pedParam0, hParam1);
}

float func_197(eStackSize essParam0) // Position - 0x6731 Hash - 0x6DA75D4 ^0x6DA75D4
{
	return func_186(essParam0) / 2f;
}

int func_198(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6741 Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = uParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

BOOL func_199(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x677C Hash - 0xB13E2226 ^0xA63BD3BC
{
	Hash hash;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_228())
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
		hash = func_219(Global_1898164.f_1[0 /*5*/]);
	
		if (func_229(hash) && func_202(Global_1347702[hash /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_206(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_200(int iParam0, int iParam1) // Position - 0x6980 Hash - 0x4134D2DF ^0x8D80BF31
{
	eStackSize i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_201(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_201(eStackSize essParam0, var uParam1) // Position - 0x69D0 Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_12(essParam0))
		return false;

	num = func_230(essParam0);
	return *uParam1 && num != false;
}

BOOL func_202(int iParam0, int iParam1) // Position - 0x69F6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

eStackSize func_203(eStackSize essParam0) // Position - 0x6A05 Hash - 0x297139D9 ^0x297139D9
{
	if (!func_103(essParam0))
		return 1;

	switch (essParam0)
	{
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
	
		case 1:
		case 5:
		case 13:
			return 2;
	
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
	
		case 4:
		case 15:
		case 18:
			return 5;
	
		case 6:
			return 4;
	
		case 10:
			return 21;
	
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
	
		case 14:
			return 1;
	
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
	
		case 20:
			return 8;
	
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
	
		case 25:
			return 8;
	
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
	
		case 34:
			return 23;
	
		case 35:
			return 19;
	
		case 60:
		case 77:
			return 13;
	
		case 65:
			return 14;
	
		case 70:
			return 4;
	
		case 71:
			return 13;
	
		default:
			return 1;
	}

	return -1;
}

void func_204(int iParam0, BOOL bParam1) // Position - 0x6C39 Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_206(iParam0))
		return;

	if (!func_169(iParam0))
		return;

	if (bParam1)
	{
		if (func_231(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_231(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_218(iParam0), func_219(iParam0), func_232(iParam0), func_231(iParam0), Global_36);
		}
	}

	func_233(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_205(int iParam0, BOOL bParam1) // Position - 0x6CAA Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_234(Global_1898330[iParam0]);
		func_235(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

BOOL func_206(int iParam0) // Position - 0x6D0B Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_207(int iParam0) // Position - 0x6D3E Hash - 0x195570A8 ^0x195570A8
{
	if (!func_206(iParam0))
		return;

	if (!func_80(iParam0))
		return;

	func_233(iParam0, 2);
	return;
}

void func_208(int iParam0, BOOL bParam1) // Position - 0x6D67 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_156(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_209(int iParam0, BOOL bParam1) // Position - 0x6DBF Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_210(int iParam0, int iParam1) // Position - 0x6DE8 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_211(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6E10 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_212(int iParam0) // Position - 0x6EAE Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_174(&(iParam0->f_29), 62))
	{
		switch (func_236())
		{
			case 1:
				if (!func_174(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_174(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_174(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_174(&(iParam0->f_29), 32))
					if (func_174(&(iParam0->f_29), 2))
						if (func_238(func_237()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

BOOL func_213(eStackSize essParam0) // Position - 0x6F58 Hash - 0xBF3EFB31 ^0xBF3EFB31
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

BOOL func_214(int iParam0) // Position - 0x6F88 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_215(eStackSize essParam0) // Position - 0x6FA6 Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (essParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[essParam0 /*35*/].f_15;
}

float func_216() // Position - 0x6FDD Hash - 0x97B49396 ^0x97B49396
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

BOOL func_217() // Position - 0x7019 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_218(int iParam0) // Position - 0x7029 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_206(iParam0))
		return 0;

	return func_239(func_234(iParam0));
}

Hash func_219(int iParam0) // Position - 0x7049 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_206(iParam0))
		return -1;

	return func_240(func_234(iParam0));
}

BOOL func_220(Hash hParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x7069 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_192(hParam0, bParam2, essParam3))
		return true;

	return false;
}

BOOL func_221(Hash hParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x708B Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_241(hParam0, bParam2, essParam3))
		return true;

	return false;
}

Blip func_222(Hash hParam0) // Position - 0x70AD Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_229(hParam0))
		return num;

	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		num = joaat("BLIP_STYLE_MISSION");
	else if (Global_1347702[hParam0 /*49*/].f_12 & 512 != 0)
		if (Global_40.f_1093 == Global_1347702[hParam0 /*49*/])
			num = joaat("BLIP_STYLE_RCM_TRACKED");
		else
			num = joaat("BLIP_STYLE_RCM");
	else if (Global_40.f_1093 == Global_1347702[hParam0 /*49*/])
		num = joaat("BLIP_STYLE_RCM_TRACKED");
	else
		num = joaat("BLIP_STYLE_RCM");

	return num;
}

void func_223(Hash hParam0) // Position - 0x7140 Hash - 0xAC04978C ^0x82563A0D
{
	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
	
		switch (hParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}

	return;
}

void func_224(int iParam0, var uParam1, var uParam2) // Position - 0x7197 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_225(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x71B3 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_242(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_243(iParam0))
		return false;

	if (func_244(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_226(iParam0, 1) || func_104(32768))
		if (!func_226(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_245())
		return false;

	return true;
}

BOOL func_226(int iParam0, int iParam1) // Position - 0x7255 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_227(int iParam0, int iParam1) // Position - 0x726E Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_228() // Position - 0x7292 Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_229(Hash hParam0) // Position - 0x72E5 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

int func_230(eStackSize essParam0) // Position - 0x72FB Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, essParam0);
}

Hash func_231(int iParam0) // Position - 0x730A Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_232(int iParam0) // Position - 0x7335 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_206(iParam0))
		return -1;

	return func_246(func_234(iParam0));
}

void func_233(int iParam0, int iParam1) // Position - 0x7355 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_206(iParam0))
		return;

	func_247(iParam0, iParam1);
	return;
}

BOOL func_234(int iParam0) // Position - 0x7372 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

void func_235(BOOL bParam0, eStackSize essParam1, int iParam2, int iParam3) // Position - 0x73B0 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_239(bParam0);
	*essParam1 = func_240(bParam0);
	*iParam2 = func_246(bParam0);
	return;
}

int func_236() // Position - 0x73D3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

eStackSize func_237() // Position - 0x73DF Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_238(eStackSize essParam0) // Position - 0x73EB Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_239(BOOL bParam0) // Position - 0x73FE Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_240(BOOL bParam0) // Position - 0x740B Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_241(Hash hParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x741E Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37) && Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[hParam0 /*49*/].f_27 == essParam2;

	return false;
}

BOOL func_242(int iParam0, int iParam1) // Position - 0x7462 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_173() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_243(int iParam0) // Position - 0x7495 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_173() != -1)
		if (func_226(iParam0, 4))
			return false;
	else if (func_226(iParam0, 2))
		return false;

	return true;
}

BOOL func_244(int iParam0) // Position - 0x74C5 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_226(iParam0, 65536) && !func_226(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_226(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_226(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_245() // Position - 0x7571 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_246(BOOL bParam0) // Position - 0x7580 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

void func_247(int iParam0, int iParam1) // Position - 0x7594 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_248(iParam0);
	else
		func_249(iParam0, iParam1);

	func_250();
	return;
}

int func_248(int iParam0) // Position - 0x75DC Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_159(iParam0);

	if (num < 0)
		return 0;

	return func_251(num);
}

int func_249(int iParam0, int iParam1) // Position - 0x75FC Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_252(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_250() // Position - 0x776C Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_251(int iParam0) // Position - 0x778F Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_252(int iParam0) // Position - 0x7843 Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

