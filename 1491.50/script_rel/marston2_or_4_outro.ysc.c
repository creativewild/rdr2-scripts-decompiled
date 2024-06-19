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
	var uLocal_14 = 1;
	var uLocal_15 = 0;
	int iLocal_16 = 0;
	Object obLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
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

void main() // Position - 0x0 Hash - 0xF98D1C6F ^0xF266F0D2
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
		func_1(&uLocal_19);

	func_2(&uLocal_19, &uScriptParam_0);

	while (!func_3(&uLocal_19))
	{
		func_4(&uLocal_19);
	
		switch (func_5(uLocal_19))
		{
			case 0:
				if (func_6(&uLocal_19))
					func_7(&uLocal_19, 1);
				break;
		
			case 1:
				if (func_8(&uLocal_19))
					func_7(&uLocal_19, 2);
				break;
		
			case 2:
				if (func_9(&uLocal_19))
					func_7(&uLocal_19, 3);
				break;
		
			case 3:
				func_1(&uLocal_19);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0xB1 Hash - 0x5C967931 ^0xE89D747F
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

int func_2(var uParam0, var uParam1) // Position - 0x149 Hash - 0x11824BFA ^0x305C042C
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

BOOL func_3(var uParam0) // Position - 0x196 Hash - 0xE6F09C07 ^0x349208FC
{
	if (func_20(Global_1935630, 16384))
		return true;

	if (!func_16(uParam0, 8))
		if (func_20(Global_1935630, 32768))
			return true;

	return false;
}

void func_4(var uParam0) // Position - 0x1D0 Hash - 0xCC0866FC ^0x1CE74C37
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

int func_5(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x253 Hash - 0xBE425958 ^0xBE425958
{
	return uParam0;
}

BOOL func_6(var uParam0) // Position - 0x25D Hash - 0x8F71A3D1 ^0x84F32283
{
	if (iLocal_18 != -1 && !func_21(Global_35))
		return false;

	if (func_22(5))
	{
		if (!func_23(uParam0))
			return false;
	
		if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cs_sackcorn01x")))
			return false;
	}

	return true;
}

void func_7(var uParam0, int iParam1) // Position - 0x2A5 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_8(var uParam0) // Position - 0x2B2 Hash - 0xE70F011 ^0xCE61FB0
{
	if (!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		return false;

	return func_24(uParam0);
}

BOOL func_9(var uParam0) // Position - 0x2EA Hash - 0xEDB66132 ^0xEDB66132
{
	BOOL num;

	num = 1;

	if (!func_25())
		num = 0;

	if (!func_26(uParam0))
		num = 0;

	return num;
}

void func_10() // Position - 0x30F Hash - 0xF2ADC204 ^0xF23F9A2E
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_12(i) && func_14(i))
			func_27(i, 56, true);
	}

	func_28(&(Global_1359489.f_40), true);
	return;
}

int func_11(var uParam0) // Position - 0x352 Hash - 0xC4EA69FB ^0x5353BED1
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);

	if (func_22(5))
		STREAMING::LOAD_SCENE_STOP();

	func_30(func_29(65), 0);
	func_30(func_29(66), 0);
	return 1;
}

BOOL func_12(eStackSize essParam0) // Position - 0x390 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (essParam0 <= -1 || essParam0 >= 27)
		return false;

	return true;
}

BOOL func_13(eStackSize essParam0) // Position - 0x3AF Hash - 0xDA629583 ^0xDA629583
{
	return func_31(essParam0, 16, true);
}

BOOL func_14(eStackSize essParam0) // Position - 0x3C0 Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_12(essParam0))
		return false;

	if (!func_13(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x3F4 Hash - 0xA4706F79 ^0xAF27D1D3
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
		func_27(essParam0, 56, true);
		func_28(&(Global_1359489.f_40), true);
	}

	func_32(essParam0, false);
	func_33(essParam0, 4, false);
	func_34(essParam0);
	func_35(essParam0);
	func_36(essParam0, 37, true);
	flag = func_37(Global_1360165[essParam0 /*1157*/], 0);
	persChar = func_38(essParam0, false);
	flag2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar);

	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
		PED::SET_PED_CONFIG_FLAG(Global_1360165[essParam0 /*1157*/], 503, false);

	if (func_39(essParam0, 64, true))
		func_36(essParam0, 64, true);

	if (bParam3)
	{
		func_36(essParam0, 33, true);
		func_36(essParam0, 34, true);
		func_40(essParam0, 1056964608, -1, 1061158912);
		func_41(essParam0, true, true, false);
	
		if (bParam6)
			func_27(essParam0, 30, true);
	
		if (bParam7)
		{
			func_27(essParam0, 35, true);
		
			if (bParam8)
				func_27(essParam0, 62, true);
		}
	
		if (flag)
		{
			func_42(essParam0, false);
		
			if (PED::IS_PED_IN_GROUP(Global_1360165[essParam0 /*1157*/]))
				PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[essParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[essParam0 /*1157*/], joaat("rel_gang_dutchs"));
		}
	
		if (flag2)
			PERSCHAR::_0xBB68908CD11AEBDC(persChar);
	
		func_36(essParam0, 28, true);
	}
	else
	{
		if (!flag)
			PED::SET_PED_KEEP_TASK(Global_1360165[essParam0 /*1157*/], true);
	
		func_27(essParam0, 33, true);
		func_41(essParam0, false, true, false);
	
		if (iParam4 > 0f)
		{
			Global_1360165[essParam0 /*1157*/].f_133 = iParam4;
			func_28(&(Global_1360165[essParam0 /*1157*/].f_130), true);
		}
		else
		{
			func_43(&(Global_1360165[essParam0 /*1157*/].f_130));
		}
	
		if (bParam9)
			func_27(essParam0, 34, true);
	}

	if (bParam1 || bParam2)
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
			func_44(essParam0, bParam2, bParam2, bParam2, false);
	else if (flag)
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[essParam0 /*1157*/], false);

	if (func_39(essParam0, 45, true))
		func_36(essParam0, 45, true);

	func_45(essParam0, 16, true);
	func_36(essParam0, 44, true);
	Global_1360165[essParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[essParam0 /*60*/].f_4 = 0;

	if (bParam5)
		if (func_37(func_46(essParam0), 0))
			func_47(0, essParam0, bParam3, 0, bParam2);

	return;
}

BOOL func_16(var uParam0, int iParam1) // Position - 0x6A9 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

void func_17(var uParam0, int iParam1) // Position - 0x6BA Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

void func_18(var uParam0, int iParam1) // Position - 0x6D2 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_19(var uParam0) // Position - 0x6E5 Hash - 0xC52A21D ^0xC52A21D
{
	if (func_48(65))
		func_49(0, true);
	else if (func_48(66))
		func_49(1, true);
	else if (Global_1898437 == func_29(65))
		func_49(0, true);
	else if (Global_1898437 == func_29(66))
		func_49(1, true);

	if (func_22(0) && func_50(66))
		func_49(4, true);
	else if (func_22(1) && func_50(65))
		func_49(4, true);
	else if (func_22(0))
		func_49(3, true);
	else if (func_22(1))
		func_49(2, true);

	if (func_22(4))
		func_51(&Global_1935630, 1048576);

	if (func_22(2) || func_22(3))
		func_49(5, true);

	if (func_22(3))
		iLocal_18 = 81;
	else if (func_22(2))
		iLocal_18 = 81;
	else if (func_22(4))
		iLocal_18 = 85;

	if (iLocal_18 != -1)
		func_52(Global_35, iLocal_18);

	if (func_22(5))
		STREAMING::REQUEST_MODEL(joaat("p_cs_sackcorn01x"), false);

	return;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x80D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_21(Ped pedParam0) // Position - 0x81C Hash - 0x7A49394A ^0x7A49394A
{
	return func_53(pedParam0, &(Global_1946054.f_1949));
}

BOOL func_22(int iParam0) // Position - 0x831 Hash - 0x6769E334 ^0xCD08A0F0
{
	int num;
	int value;
	BOOL flag;

	num = iParam0 / 32;
	value = iParam0 - (num * 32);
	flag = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value)));
	return uLocal_14[num] && flag == flag;
}

BOOL func_23(var uParam0) // Position - 0x866 Hash - 0x986CF6C1 ^0xF956BBCA
{
	if (!func_22(5))
		return false;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("cutscene@mar24_ptl", 0, "MAR24_PTL", false, true);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		return false;

	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_2, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
		return false;

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_2, "MAR24_PTL") && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_2, "MAR24_PTL"))
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_2, "MAR24_PTL");

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_2, "MAR24_PTL"))
		return false;

	return true;
}

BOOL func_24(var uParam0) // Position - 0x91E Hash - 0xB2E2B7A4 ^0x32486F17
{
	int i;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return 0;

	func_54(Global_35);

	if (func_22(5))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -2515.0586f, 424.7469f, 146.8438f, 90f, false, false, true);
		STREAMING::LOAD_SCENE_START_SPHERE(-2515.0586f, 424.7469f, 146.8438f, 20f, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(Global_35, func_55(67), true, false, true, true);
	}

	func_56(Global_35);

	for (i = 0; i < 11; i = i + 1)
	{
		if (i != 10)
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, i, "ALL");
	}

	PED::CLEAR_PED_ENV_DIRT(Global_35);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);

	if (func_22(5))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(obLocal_17))
		{
			obLocal_17 = OBJECT::CREATE_OBJECT(joaat("p_cs_sackcorn01x"), -2517.9f, 424.8f, 147.9f, true, true, false, false, true);
		
			if (!ENTITY::IS_ENTITY_DEAD(obLocal_17))
			{
				ENTITY::SET_ENTITY_COORDS(obLocal_17, -2517.9f, 424.8f, 147.9f, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(obLocal_17, 0f, 0f, 0f, 2, true);
			}
		}
	}

	if (func_22(2))
		CLOCK::SET_CLOCK_TIME(13, 0, 0);
	else if (func_22(3))
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	else if (func_22(4))
		CLOCK::SET_CLOCK_TIME(11, 0, 0);

	if (iLocal_18 != -1)
		func_57(Global_35, true, false);

	func_58(1, 7);
	func_59(1);
	func_60(joaat("PHR_RANCH_HAND1"));
	func_60(joaat("PHR_RANCH_HAND2"));
	func_60(joaat("PHR_RANCH_HAND3"));
	func_60(joaat("PHR_RANCH_HAND4"));
	func_60(joaat("PHR_RANCH_HAND5"));
	func_61(false);
	return 1;
}

BOOL func_25() // Position - 0xAC4 Hash - 0x9773414E ^0x9773414E
{
	BOOL num;

	num = 1;
	return num;
}

BOOL func_26(var uParam0) // Position - 0xAD1 Hash - 0x88A5FC52 ^0x88A5FC52
{
	int num;
	int num2;

	if (func_22(4))
		func_62(67, true, true);
	else if (func_22(2))
		func_62(65, true, true);
	else if (func_22(3))
		func_62(66, true, true);

	switch (iLocal_16)
	{
		case 0:
			if (func_22(5))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "JOHN", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "P_CS_SACKCORN01X", obLocal_17, 0);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_2, "MAR24_PTL", true);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
				func_63(1);
			}
			else
			{
				func_63(3);
			}
			break;
	
		case 1:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
				CAM::DO_SCREEN_FADE_IN(1000);
		
			if (CAM::IS_SCREEN_FADED_IN())
				func_63(2);
			break;
	
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_2, false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				HUD::DISPLAY_HUD(true);
				func_63(3);
			}
			break;
	
		case 3:
			if (func_22(4))
			{
				num = func_64(67);
				num2 = func_65(num);
			
				if (func_66(num))
				{
					if (func_67(num2, 128))
					{
						if (func_67(num2, 512))
						{
							func_68(num2, 512);
							CAM::DO_SCREEN_FADE_OUT(0);
						}
					
						if (func_69())
							func_63(4);
					}
				}
			}
			else if (func_22(2))
			{
				num = func_64(65);
			
				if (func_66(num))
				{
					num2 = func_65(num);
					func_68(num2, 512);
					func_63(4);
				}
			}
			else if (func_22(3))
			{
				num = func_64(66);
			
				if (func_66(num))
				{
					num2 = func_65(num);
					func_68(num2, 512);
					func_63(4);
				}
			}
			break;
	
		case 4:
			break;
	}

	return iLocal_16 == 4;
}

void func_27(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xCA2 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_70(essParam0))
			return;

	func_71(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_28(var uParam0, BOOL bParam1) // Position - 0xCDC Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_72(uParam0))
		func_73(uParam0);

	return;
}

int func_29(int iParam0) // Position - 0xCFC Hash - 0x7647021A ^0xF0097466
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_30(int iParam0, int iParam1) // Position - 0xD0E Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_74(iParam0))
		return;

	func_75(iParam0, iParam1);
	return;
}

BOOL func_31(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xD2B Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_70(essParam0))
			return false;

	return Global_40.f_4942[essParam0 /*60*/] && bParam1 != false;
}

void func_32(eStackSize essParam0, BOOL bParam1) // Position - 0xD55 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_70(essParam0))
		return;

	if (bParam1)
		if (func_76(&(Global_1360165[essParam0 /*1157*/].f_12), 1))
			func_33(essParam0, 1, false);

	func_33(essParam0, 16, bParam1);
	return;
}

void func_33(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xD97 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_70(essParam0))
		return;

	func_77(&(Global_1360165[essParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_34(eStackSize essParam0) // Position - 0xDBF Hash - 0x7895582D ^0x7895582D
{
	func_33(essParam0, 8, false);
	return;
}

void func_35(eStackSize essParam0) // Position - 0xDD0 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_27(essParam0, 36, true);
	return;
}

void func_36(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xDE1 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_70(essParam0))
			return;

	func_71(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[essParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_37(Ped pedParam0, int iParam1) // Position - 0xE1B Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	num = iParam1;

	if (num == 0)
		return 1;

	if (func_78(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_78(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_78(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_78(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_78(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_78(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_78(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_78(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

PersChar func_38(eStackSize essParam0, BOOL bParam1) // Position - 0xF1A Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_12(essParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_1))
			func_79(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_1;
}

BOOL func_39(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0xF59 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_70(essParam0))
			return false;

	func_71(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[essParam0 /*1157*/].f_58[num], offset);
}

void func_40(eStackSize essParam0, int iParam1, int iParam2, int iParam3) // Position - 0xF94 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_12(essParam0))
	{
		ped = func_80(essParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_81(essParam0);
		}
	}

	if (func_39(essParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_80(essParam0), 137, true);

	return;
}

void func_41(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFE6 Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_70(essParam0))
		return;

	if (bParam1)
	{
		func_36(essParam0, 50, true);
		func_36(essParam0, 48, true);
		func_36(essParam0, 49, true);
		func_36(essParam0, 51, true);
		func_36(essParam0, 52, true);
		func_36(essParam0, 54, true);
		func_36(essParam0, 55, true);
	}
	else
	{
		func_27(essParam0, 50, true);
		func_27(essParam0, 48, true);
		func_27(essParam0, 49, true);
		func_27(essParam0, 51, true);
	
		if (bParam3)
			func_27(essParam0, 54, true);
		else
			func_36(essParam0, 54, true);
	
		if (!bParam2)
		{
			func_27(essParam0, 52, true);
		
			if (bParam3)
				func_27(essParam0, 55, true);
		}
		else
		{
			func_36(essParam0, 52, true);
		
			if (!bParam3)
				func_36(essParam0, 55, true);
		}
	}

	return;
}

void func_42(eStackSize essParam0, BOOL bParam1) // Position - 0x10B8 Hash - 0x2F921122 ^0x884B6C77
{
	if (!func_70(essParam0))
		return;

	if (bParam1)
		PED::SET_PED_CONFIG_FLAG(func_80(essParam0), 204, true);
	else
		PED::SET_PED_CONFIG_FLAG(func_80(essParam0), 204, false);

	return;
}

void func_43(var uParam0) // Position - 0x10EF Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_44(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1105 Hash - 0x6E8FD624 ^0x6E8FD624
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

	if (func_39(essParam0, 32, true))
		if (!bParam2)
			return;

	char = func_38(essParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_80(essParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_82(essParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
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
		func_27(essParam0, 2, true);
	}
	else
	{
		func_83(essParam0);
		func_27(essParam0, 1, true);
	}

	return;
}

void func_45(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1213 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] - Global_40.f_4942[essParam0 /*60*/] && bParam1;
	return;
}

Player func_46(eStackSize essParam0) // Position - 0x124F Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_12(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/].f_70))
		Global_1360165[essParam0 /*1157*/].f_70 = 0;

	return Global_1360165[essParam0 /*1157*/].f_70;
}

void func_47(int iParam0, eStackSize essParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x128F Hash - 0xBD80856C ^0xBD80856C
{
	Player player;

	if (!func_70(essParam1))
		return;

	player = func_46(essParam1);

	if (func_84(essParam1))
		if (!func_85(essParam1))
			return;

	func_36(essParam1, 39, true);
	func_86(essParam1, 64, false);
	Global_1360165[essParam1 /*1157*/].f_70.f_11 = 0;
	func_86(essParam1, 8, false);

	if (ENTITY::DOES_ENTITY_EXIST(player))
	{
		if (!bParam2)
		{
			func_86(essParam1, 512, true);
			PED::SET_PED_KEEP_TASK(player, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(player, false);
			func_27(essParam1, 43, true);
		}
	
		if (bParam4)
			func_87(essParam1, false, true, true, true);
	}

	return;
}

BOOL func_48(int iParam0) // Position - 0x1331 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_88(Global_1835011[iParam0 /*74*/].f_1);
}

void func_49(int iParam0, BOOL bParam1) // Position - 0x135D Hash - 0x8025D1F9 ^0x8BAC5450
{
	int num;
	int value;
	BOOL flag;
	BOOL flag2;
	int num2;

	num = iParam0 / 32;
	value = iParam0 - (num * 32);
	flag = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(value)));
	flag2 = uLocal_14[num] && flag == flag;

	if (!flag2 && bParam1)
	{
		uLocal_14[num] = uLocal_14[num] || flag;
	}
	else if (flag2 && !bParam1)
	{
		num2 = -1 - flag;
		uLocal_14[num] = uLocal_14[num] && num2;
	}

	return;
}

BOOL func_50(int iParam0) // Position - 0x13D5 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_89(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_51(int iParam0, int iParam1) // Position - 0x1434 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_52(Ped pedParam0, int iParam1) // Position - 0x1445 Hash - 0xB570EE70 ^0xB570EE70
{
	return func_90(pedParam0, iParam1, &(Global_1946054.f_1949), true, 0, false);
}

BOOL func_53(Ped pedParam0, var uParam1) // Position - 0x145F Hash - 0x7F182025 ^0x8FB48246
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return true;

	if (uParam1->f_1 == 0)
		return false;

	for (i = 0; i < uParam1->f_134; i = i + 1)
	{
		if (!PED::_HAS_META_PED_ASSET_LOADED(uParam1->f_135[i /*2*/]))
			return false;
	}

	return PED::IS_PED_READY_TO_RENDER(pedParam0);
}

void func_54(Ped pedParam0) // Position - 0x14B0 Hash - 0xAC157CE0 ^0x9685A596
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			PED::_REMOVE_PED_FROM_MOUNT(pedParam0, true, false);

	return;
}

Vector3 func_55(eStackSize essParam0) // Position - 0x14D3 Hash - 0xACD6F870 ^0xDE230469
{
	if (func_91(essParam0))
		return func_92(essParam0);

	return Global_1835011[essParam0 /*74*/].f_18;
}

void func_56(Ped pedParam0) // Position - 0x14F9 Hash - 0xC848742E ^0xD171C7FA
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	PED::CLEAR_PED_BLOOD_DAMAGE(pedParam0);

	for (i = 0; i < 10; i = i + 1)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(pedParam0, i);
	}

	return;
}

int func_57(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x152F Hash - 0x340EA945 ^0x340EA945
{
	return func_93(pedParam0, &(Global_1946054.f_1949), bParam1, false, true, bParam2);
}

void func_58(int iParam0, int iParam1) // Position - 0x154A Hash - 0x7AB48EE3 ^0x7AB48EE3
{
	int i;
	int j;

	for (j = 0; j < iParam0; j = j + 1)
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (func_94(i) >= iParam1)
			{
			}
			else
			{
				func_95(i, iParam1 > 7);
			}
		}
	}

	func_96(10, 0, 0, 0, false);
	return;
}

void func_59(int iParam0) // Position - 0x1599 Hash - 0x4995DA10 ^0x4995DA10
{
	int i;

	for (i = 0; i < iParam0; i = i + 1)
	{
		func_97();
	}

	func_96(9, 0, 0, 0, false);
	return;
}

void func_60(int iParam0) // Position - 0x15C2 Hash - 0x143BF812 ^0x55117F32
{
	PersChar persChar;

	persChar = PERSCHAR::_0x112DDF56300BC6E5(iParam0);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		PERSCHAR::_0xD4B614179BCD0654(persChar);

	return;
}

void func_61(BOOL bParam0) // Position - 0x15E1 Hash - 0x6FC90683 ^0xF9E36F55
{
	int i;
	Hash weaponHash;

	if (Global_43891)
		return;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = func_98(Global_35, i, false, true);
	
		if (WEAPON::IS_WEAPON_VALID(weaponHash))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_99(weaponHash))
				if (!bParam0 || i != 7 && i != 9)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash);
	}

	return;
}

int func_62(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1653 Hash - 0x495686EB ^0x978C707D
{
	int num;

	if (!func_100(essParam0))
		return 1;

	if (func_101(32768))
		return 1;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[essParam0 /*74*/].f_16, false))
		return 1;

	num = func_65(func_64(essParam0));

	if (Global_1835011[essParam0 /*74*/].f_71)
		return 1;

	if (!func_66(func_64(essParam0)))
		func_102(essParam0, false, false, -1);

	if (func_103(num))
	{
		if (!Global_1835011[essParam0 /*74*/].f_71)
		{
			if (bParam1)
				func_104(num, 256);
		
			if (bParam2)
				func_104(num, 512);
		
			Global_1835011[essParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}

	return 0;
}

void func_63(int iParam0) // Position - 0x1709 Hash - 0x74B49122 ^0x74B49122
{
	if (iLocal_16 != iParam0)
		iLocal_16 = iParam0;

	return;
}

int func_64(eStackSize essParam0) // Position - 0x171C Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_100(essParam0))
		return 0;

	return Global_1835011[essParam0 /*74*/].f_1;
}

int func_65(int iParam0) // Position - 0x173C Hash - 0x6B3238EF ^0x6B3238EF
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

BOOL func_66(int iParam0) // Position - 0x177D Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_105(iParam0);
	}

	if (num == 1)
		return true;

	if (num == 2)
		return true;

	return false;
}

BOOL func_67(int iParam0, int iParam1) // Position - 0x17E8 Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_103(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

void func_68(int iParam0, int iParam1) // Position - 0x180A Hash - 0xD320CA35 ^0x5C62EB93
{
	if (!func_103(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 - Global_1898346[iParam0 /*6*/].f_1 && iParam1;
	return;
}

BOOL func_69() // Position - 0x1841 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

BOOL func_70(eStackSize essParam0) // Position - 0x185D Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return essParam0 > -1;
}

int func_71(int iParam0, var uParam1, var uParam2) // Position - 0x1869 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_72(var uParam0) // Position - 0x1886 Hash - 0x5001E582 ^0x5001E582
{
	return func_106(*uParam0, 1);
}

void func_73(var uParam0) // Position - 0x1896 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_107(uParam0, 0f);
	return;
}

BOOL func_74(int iParam0) // Position - 0x18A5 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_75(int iParam0, int iParam1) // Position - 0x18D8 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

BOOL func_76(int iParam0, int iParam1) // Position - 0x18F8 Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_77(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1908 Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_78(int iParam0, int iParam1) // Position - 0x192E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_79(eStackSize essParam0) // Position - 0x193D Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_70(essParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[essParam0 /*1157*/].f_1))
	{
		hash = func_108(essParam0);
	
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

Ped func_80(eStackSize essParam0) // Position - 0x19A5 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_70(essParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[essParam0 /*1157*/]))
		Global_1360165[essParam0 /*1157*/] = 0;

	return Global_1360165[essParam0 /*1157*/];
}

void func_81(eStackSize essParam0) // Position - 0x19DF Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_12(essParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_80(essParam0)))
		{
			func_109(essParam0, 67108864, true);
			func_36(essParam0, 19, true);
		}
	}

	return;
}

float func_82(eStackSize essParam0) // Position - 0x1A12 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_70(essParam0))
		return 0f;

	return Global_1360165[essParam0 /*1157*/].f_134;
}

void func_83(eStackSize essParam0) // Position - 0x1A33 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_80(essParam0);
	persChar = func_38(essParam0, false);
	func_110(essParam0, ped);

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

BOOL func_84(eStackSize essParam0) // Position - 0x1A8D Hash - 0x6410553A ^0x46627D03
{
	if (!func_70(essParam0))
		return false;

	if (Global_1360165[essParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[essParam0 /*1157*/].f_70.f_11 == Global_1360165[essParam0 /*1157*/].f_128)
		return false;

	return true;
}

BOOL func_85(eStackSize essParam0) // Position - 0x1AD9 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_70(essParam0))
		return false;

	return Global_1360165[essParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_86(eStackSize essParam0, int iParam1, BOOL bParam2) // Position - 0x1B01 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_70(essParam0))
		return;

	if (bParam2)
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[essParam0 /*1157*/].f_70.f_1 = Global_1360165[essParam0 /*1157*/].f_70.f_1 - Global_1360165[essParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

int func_87(eStackSize essParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1B66 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	Hash hash;
	PersChar persChar;

	if (!func_70(essParam0))
		return 0;

	mount = func_46(essParam0);

	if (func_37(mount, 0))
	{
		if (func_37(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_84(essParam0) || func_85(essParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_111(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				hash = func_112(essParam0, true);
			
				if (hash != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_113(essParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_114(essParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_114(essParam0, false));
					func_115(essParam0);
				}
			}
			else
			{
				if (func_31(essParam0, 32768, true))
				{
					persChar = func_114(essParam0, false);
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
		if (func_37(Global_1360165[essParam0 /*1157*/].f_124, 0))
		{
			if (func_31(essParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[essParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
			
				func_113(essParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_114(essParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_114(essParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[essParam0 /*1157*/].f_124, true, true);
				func_113(essParam0);
				PED::DELETE_PED(&(Global_1360165[essParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[essParam0 /*1157*/].f_70.f_1 = 0;
	func_116(essParam0, 0);
	return 1;
}

BOOL func_88(int iParam0) // Position - 0x1D17 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_117(iParam0);
	return num == 3 || num == 4;
}

BOOL func_89(int iParam0, BOOL bParam1) // Position - 0x1D35 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_117(iParam0))
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

BOOL func_90(Ped pedParam0, eStackSize essParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1D66 Hash - 0x4877CB97 ^0xE3BAD6D
{
	eStackSize stackSize;
	int num;
	var unk;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	stackSize = -1;

	if (essParam1 > -1 && essParam1 <= 5)
		stackSize = essParam1;

	if (iParam4 != 0)
		num = iParam4;
	else
		num = func_118(essParam1);

	if (stackSize == -1 && !func_120(num, func_119()))
		return true;

	if (uParam2->f_1 != 0 && func_121(uParam2, 1))
		if (uParam2->f_1 == num)
			if (bParam3)
				return func_122(pedParam0, uParam2);
			else
				return true;
		else if (uParam2->f_1 != num)
			func_123(uParam2);

	if (!func_121(uParam2, 1))
	{
		func_124(&(uParam2->f_1));
	
		if (!bParam5)
			if (!func_125(&(uParam2->f_1), &unk, num, stackSize, true, 0))
				return true;
	
		uParam2->f_1 = num;
		func_126(uParam2, 1);
	}

	if (!bParam3)
		return true;

	return func_122(pedParam0, uParam2);
}

BOOL func_91(eStackSize essParam0) // Position - 0x1E5A Hash - 0x67D822A ^0x67D822A
{
	switch (essParam0)
	{
		case 14:
		case 34:
			return !func_127(&Global_1835011[essParam0 /*74*/]);
	}

	return false;
}

Vector3 func_92(eStackSize essParam0) // Position - 0x1E8A Hash - 0x695A7658 ^0x6D3D4EDB
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

int func_93(Ped pedParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1EDC Hash - 0xDDBAA8A3 ^0x703BBCB4
{
	BOOL flag;
	BOOL flag2;
	eStackSize stackSize;
	var unk;
	int num;

	flag = false;
	flag2 = true;

	if (uParam1->f_1 == 0)
		return 0;

	if (!func_53(pedParam0, uParam1))
		flag2 = false;

	unk = uParam1->f_1;
	stackSize = func_128(unk);

	if (stackSize == -1)
		stackSize = 0;

	if (stackSize >= 0 && stackSize <= 5)
		flag = true;

	Global_1905941 = stackSize;
	func_129(Global_40.f_7729, 4096);
	func_130(Global_1905941, 4096);
	Global_40.f_7729 = Global_1905941;
	func_131(&(uParam1->f_1));
	num = -1;

	if (!flag)
		num = func_132(uParam1->f_1);

	func_133(&(Global_1946054.f_1497), num, false);
	func_134(unk, pedParam0, flag, true, flag2, false);
	func_135(pedParam0);

	if (bParam2)
		func_123(uParam1);

	if (bParam3)
		func_136();

	if (bParam4)
		if (bParam5)
			func_137(0);
		else
			func_137(2048);

	return 1;
}

int func_94(int iParam0) // Position - 0x1FC2 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_7731[iParam0 /*5*/];
}

void func_95(int iParam0, BOOL bParam1) // Position - 0x1FD4 Hash - 0xE3C965C1 ^0xE3C965C1
{
	int num;

	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_138(iParam0);
		return;
	}

	if (!bParam1)
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !func_139(iParam0))
			return;

	num = Global_40.f_7731[iParam0 /*5*/] + 1;
	func_140(num);
	func_141(iParam0, num, false);

	if (func_139(iParam0))
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
			func_138(iParam0);
		else
			func_142(iParam0);

	func_143();
	return;
}

void func_96(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x205F Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_144(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_145(num);
	return;
}

void func_97() // Position - 0x2091 Hash - 0xC59EE296 ^0xE43ED637
{
	int num;

	if (Global_40.f_7748.f_1 >= 9)
	{
		func_146();
		return;
	}

	num = Global_40.f_7748.f_1 + 1;
	func_147(num, false);

	if (func_148())
		if (Global_40.f_7748.f_1 >= 9)
			func_146();
		else
			func_149();

	func_150();
	return;
}

Hash func_98(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x20E3 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_99(Hash hParam0) // Position - 0x2109 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

BOOL func_100(eStackSize essParam0) // Position - 0x2117 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return essParam0 > -1 && essParam0 <= 80;
}

BOOL func_101(int iParam0) // Position - 0x212D Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

int func_102(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x2140 Hash - 0xCD2F5C8B ^0xD79ECC6F
{
	int num;

	if (!func_151(essParam0))
		return 0;

	if (func_89(Global_1347702[59 /*49*/].f_15, true) && !func_89(Global_1347702[61 /*49*/].f_15, true) && Global_40.f_9052.f_21 & 2 == 0)
		return 0;

	if (func_152(PLAYER::PLAYER_ID(), true, false))
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27) && !func_153(essParam0) && !Global_43891)
		{
			func_155(essParam0, BUILTIN::VDIST2(func_154(essParam0), Global_36), -1, true, true);
			func_156(&Global_1835011[essParam0 /*74*/], 2);
		}
	
		return 0;
	}

	if (bParam2)
	{
		if (!func_158(func_157(essParam0), func_64(essParam0), 0, Global_1835011[essParam0 /*74*/].f_21, iParam3))
			return 0;
	
		if (func_159(true) > 1)
		{
			if (Global_1835011[essParam0 /*74*/].f_73 <= 0)
				Global_1835011[essParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
		
			if (MISC::GET_GAME_TIMER() - Global_1835011[essParam0 /*74*/].f_73 < 60000)
			{
				if (func_160(essParam0, false, true))
					return 0;
			
				if (essParam0 == 15 && Global_1357549.f_1494 & 32768 != 0 && func_162(Global_35, func_161(essParam0), 50f, true, true))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[essParam0 /*74*/].f_72))
					{
						Global_1835011[essParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[essParam0 /*74*/].f_72, func_161(essParam0), 5f);
					}
				
					if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[essParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_161(essParam0), 2.5f))
						return 0;
				}
			}
		}
	}

	num = func_163(Global_1835011[essParam0 /*74*/].f_1);

	if (!func_103(num))
	{
		return 0;
	}
	else if (Global_1835011[essParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[essParam0 /*74*/].f_73 = 0;
		func_164(essParam0);
	
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[essParam0 /*74*/].f_72))
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[essParam0 /*74*/].f_72);
	}

	if (bParam1)
		func_165(Global_1835011[essParam0 /*74*/].f_1);
	else if (!Global_1879534)
		func_166(4);

	return 1;
}

BOOL func_103(int iParam0) // Position - 0x2386 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

void func_104(int iParam0, int iParam1) // Position - 0x23A5 Hash - 0xF9C34531 ^0x119C2BEA
{
	if (!func_103(iParam0))
		return;

	Global_1898346[iParam0 /*6*/].f_1 = Global_1898346[iParam0 /*6*/].f_1 || iParam1;
	return;
}

int func_105(int iParam0) // Position - 0x23D1 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_167(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_106(int iParam0, int iParam1) // Position - 0x2412 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_107(var uParam0, float fParam1) // Position - 0x2421 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_168() - fParam1;
	func_169(uParam0, 1);
	func_170(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Hash func_108(int iParam0) // Position - 0x2447 Hash - 0xBA965109 ^0xCB1D208B
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

void func_109(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2623 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_12(essParam0))
			return;

	Global_40.f_4942[essParam0 /*60*/] = Global_40.f_4942[essParam0 /*60*/] || bParam1;
	return;
}

void func_110(eStackSize essParam0, Ped pedParam1) // Position - 0x2654 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_171(pedParam1);

	return;
}

float func_111(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x266E Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_172(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_112(eStackSize essParam0, BOOL bParam1) // Position - 0x26C5 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_70(essParam0))
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
		Global_1360165[essParam0 /*1157*/].f_127 = func_173(essParam0);
		return Global_1360165[essParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_113(eStackSize essParam0) // Position - 0x280A Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_46(essParam0);

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

PersChar func_114(eStackSize essParam0, BOOL bParam1) // Position - 0x2880 Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_70(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[essParam0 /*1157*/].f_126 = func_174(essParam0);

	return Global_1360165[essParam0 /*1157*/].f_126;
}

void func_115(eStackSize essParam0) // Position - 0x28CC Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_70(essParam0))
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

void func_116(eStackSize essParam0, int iParam1) // Position - 0x291F Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_70(essParam0))
		return;

	Global_1360165[essParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

int func_117(int iParam0) // Position - 0x2943 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_74(iParam0))
		return -1;

	return func_105(iParam0);
}

int func_118(eStackSize essParam0) // Position - 0x295F Hash - 0xB8EC44B7 ^0xE877E9C4
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

int func_119() // Position - 0x2E94 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_120(int iParam0, int iParam1) // Position - 0x2EA2 Hash - 0xD3FACC08 ^0xE7B5B402
{
	int num;

	num = func_175(iParam1);
	func_176(&(Global_1946054.f_964), num, iParam0, -897569541, 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

BOOL func_121(var uParam0, int iParam1) // Position - 0x2EDF Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

BOOL func_122(Ped pedParam0, var uParam1) // Position - 0x2EEF Hash - 0x381906C2 ^0xD301AB4D
{
	int i;
	int metaPedType;

	if (uParam1->f_1 == 0)
		return false;

	if (!func_121(uParam1, 2))
	{
		metaPedType = PED::_GET_META_PED_TYPE(pedParam0);
	
		for (i = 0; i < 39; i = i + 1)
		{
			if (uParam1->f_1.f_1[i /*3*/] == Global_1946054.f_57[i /*11*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_REQUEST_META_PED_COMPONENT(metaPedType, uParam1->f_1.f_1[i /*3*/], 0, 0, 0);
				uParam1->f_135[uParam1->f_134 /*2*/].f_1 = i;
				uParam1->f_134 = uParam1->f_134 + 1;
			}
		}
	
		func_126(uParam1, 2);
	}

	return func_53(pedParam0, uParam1);
}

void func_123(var uParam0) // Position - 0x2F87 Hash - 0x182E7573 ^0x87CFDBF1
{
	int i;
	var unk;

	uParam0->f_1 = 0;

	for (i = 0; i < uParam0->f_134; i = i + 1)
	{
		if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_135[i /*2*/]))
			PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_135[i /*2*/]);
	
		uParam0->f_135[i /*2*/].f_1 = -1;
	}

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1.f_1[i /*3*/] = { unk };
	}

	func_177(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
	return;
}

void func_124(var uParam0) // Position - 0x3003 Hash - 0xA72C1C9C ^0xF572AAFB
{
	int i;

	*uParam0 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

BOOL func_125(var uParam0, var uParam1, int iParam2, eStackSize essParam3, BOOL bParam4, int iParam5) // Position - 0x3041 Hash - 0x27046CB6 ^0xE856FDF2
{
	int num;

	if (!func_178(uParam0, essParam3, iParam2) && !func_179(uParam0, iParam2, uParam1, false, bParam4, false, 0))
		return false;

	num = 10;

	if (func_180(32768))
		if (!*uParam1 || *uParam1 && uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
			func_181(1108822547);
		else
			func_182(1108822547);

	func_183(uParam0, false, 0);
	func_184(iParam5);
	return true;
}

void func_126(var uParam0, int iParam1) // Position - 0x30CB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_127(int iParam0) // Position - 0x30DC Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_185(&(iParam0->f_29), 62))
	{
		switch (func_186())
		{
			case 1:
				if (!func_185(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_185(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_185(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_185(&(iParam0->f_29), 32))
					if (func_185(&(iParam0->f_29), 2))
						if (func_188(func_187()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

int func_128(int iParam0) // Position - 0x3186 Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (iParam0)
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

void func_129(eStackSize essParam0, BOOL bParam1) // Position - 0x3599 Hash - 0x5B5DA81B ^0x5B5DA81B
{
	BOOL flag;

	if (!func_189(essParam0))
		return;

	flag = Global_40.f_7157[essParam0 /*3*/] && bParam1;
	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] - flag;
	return;
}

void func_130(eStackSize essParam0, BOOL bParam1) // Position - 0x35D4 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_189(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

void func_131(var uParam0) // Position - 0x3600 Hash - 0xA164F4FE ^0x4ACB4DBA
{
	int i;

	Global_1946054.f_1497 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1497.f_1[i /*3*/] = { uParam0->f_1[i /*3*/] };
	}

	return;
}

int func_132(int iParam0) // Position - 0x363E Hash - 0x3DE92E9D ^0x74679BDD
{
	int num;
	int num2;

	num2 = func_175(0);
	func_176(&(Global_1946054.f_964), num2, iParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
		return -1;

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &(Global_1946054.f_964), 2049745650))
		return -1;

	return func_190(num);
}

// Unhandled jump detected. Output should be considered invalid
void func_133(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x369D Hash - 0xBA3A30EB ^0xCBF87037
{
	int i;
	Hash hash;
	Hash hash2;
	int num;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_191(&hParam0->f_1[i /*3*/], 2))
		{
			num = func_192(i, 1);
		
			if (func_193(i, iParam1))
			{
				hash2 = { func_194(i, -1) };
			
				if (hash2 != Global_1946054.f_57[i /*11*/] && hash2 != 0 && hParam0->f_1[i /*3*/] != hash2 || hParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					hParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_195(num, 4))
					func_196(num, 4, 6);
			}
			else
			{
				func_197(num, 4, 6);
				goto 0xC9;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1946054.f_57[i /*11*/];
			hParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

void func_134(int iParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x3772 Hash - 0xBF38E26 ^0xBF38E26
{
	BOOL flag;
	int num;
	int num2;
	eStackSize stackSize;
	eStackSize stackSize2;

	flag = false;
	num = 0;
	num2 = iParam0;
	stackSize = -1;
	stackSize2 = func_128(iParam0);

	if (stackSize2 >= 0 && stackSize2 <= 5)
		stackSize = stackSize2;

	if (func_198() != -1)
		return;

	func_199();

	if (bParam5)
		if (!func_125(&(Global_1946054.f_1378), &flag, num2, stackSize, true, 0))
			return;

	if (func_180(32768) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
		func_200();

	func_201(stackSize, true, true, 1, true, true);
	func_96(31, 0, 0, 0, false);
	func_137(0);

	if (!bParam3)
		return;

	if (flag)
		num = 8;

	if (!bParam4)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_96(2, num, 2, 0, false);
		else
			func_96(2, num, 3, pedParam1, false);
	else
		func_202(&(Global_1946054.f_1497), pedParam1, true, -1, true, true, true);

	return;
}

void func_135(Ped pedParam0) // Position - 0x3865 Hash - 0xA4893F7A ^0x9406767
{
	PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(pedParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	return;
}

void func_136() // Position - 0x388E Hash - 0x533DB517 ^0x383CE478
{
	char* animName;

	if (PED::IS_PED_RAGDOLL(Global_35))
		return;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
		return;

	if (!func_180(true))
		return;

	animName = "outfit_change_unarmed";

	switch (Global_1946054.f_859)
	{
		case 0:
			animName = "outfit_change_offhand";
			break;
	
		case 1:
			animName = "outfit_change_longarms";
			break;
	
		case 2:
			animName = "outfit_change_unarmed";
			break;
	}

	TASK::TASK_PLAY_ANIM(Global_35, func_203(), animName, 1090519040, -1056964608, -1, 67108880, 0, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_204(true);
	STREAMING::REMOVE_ANIM_DICT(func_203());
	return;
}

void func_137(int iParam0) // Position - 0x392A Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_205(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_206(num);
	return;
}

void func_138(int iParam0) // Position - 0x396E Hash - 0x8EDF95A8 ^0x6344BF7A
{
	BOOL flag;

	flag = func_139(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;

	if (flag && !func_139(iParam0))
	{
		func_207(490, true);
		func_208(iParam0, 0);
	}

	return;
}

BOOL func_139(int iParam0) // Position - 0x39AB Hash - 0x77F2BCDC ^0x977DC5C0
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_140(int iParam0) // Position - 0x39C1 Hash - 0xF5821E74 ^0x580D0024
{
	if (iParam0 >= 7)
		func_207(489, false);

	if (iParam0 >= 4 && Global_1897952.f_41 != 8 && func_89(Global_1835011[4 /*74*/].f_1, true))
		func_207(493, false);

	return;
}

void func_141(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3A07 Hash - 0x1B9F85CC ^0x1B9F85CC
{
	int num;
	int num2;
	BOOL flag;

	if (!func_209(iParam0))
		return;

	if (!func_210(iParam1))
		return;

	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
		return;

	Global_40.f_7731[iParam0 /*5*/] = iParam1;

	if (!bParam2)
	{
		flag = Global_40.f_7731[iParam0 /*5*/] < 7 && func_139(iParam0);
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_187();
		func_211(iParam0, &num, &num2, flag);
		func_212(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

void func_142(int iParam0) // Position - 0x3A9B Hash - 0xD1347D3F ^0x8F8B63AB
{
	BOOL flag;

	flag = func_139(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = Global_40.f_7731[iParam0 /*5*/].f_4 - 1;

	if (flag && !func_139(iParam0))
	{
		func_207(490, true);
		func_208(iParam0, 0);
	}

	return;
}

void func_143() // Position - 0x3AE5 Hash - 0xFF12DDE6 ^0x3C5C2808
{
	Hash value;

	value = func_187();
	func_212(&value, 0, 0, 0, 2, 0, 0, false);

	if (func_94(0) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}

	if (func_94(1) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}

	if (func_94(2) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}

	return;
}

void func_144(BOOL bParam0) // Position - 0x3BDB Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_145(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3BEE Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_213(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_214(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_144(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_213(iParam0))
				return;
		
			func_214(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_144(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_215(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_146() // Position - 0x3DFA Hash - 0x6E14ED60 ^0xD0EE0FF7
{
	BOOL flag;

	flag = func_148();
	Global_40.f_7748.f_6 = 0;

	if (flag && !func_148())
		func_216(14);

	return;
}

void func_147(int iParam0, BOOL bParam1) // Position - 0x3E26 Hash - 0x8F59A605 ^0x3B6FDB4
{
	int num;
	int num2;
	BOOL flag;

	if (!func_217(iParam0))
		return;

	if (Global_40.f_7748.f_1 == iParam0)
		return;

	Global_40.f_7748.f_1 = iParam0;

	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_187();
		flag = Global_40.f_7748.f_1 < 9 && func_148();
		func_218(Global_40.f_7748.f_1, &num, &num2, flag);
		func_212(&(Global_40.f_7748.f_5), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

BOOL func_148() // Position - 0x3EA4 Hash - 0xC8060AD0 ^0x368DD84C
{
	return Global_40.f_7748.f_6 > 0;
}

void func_149() // Position - 0x3EB6 Hash - 0xC3449928 ^0xE0569413
{
	BOOL flag;

	flag = func_148();
	Global_40.f_7748.f_6 = Global_40.f_7748.f_6 - 1;

	if (flag && !func_148())
		func_216(14);

	return;
}

void func_150() // Position - 0x3EEB Hash - 0x648520DC ^0xDA964113
{
	Hash value;

	if (func_219() >= 7)
	{
		value = func_187();
		func_212(&value, 0, 0, 0, 2, 0, 0, false);
		DECORATOR::DECOR_SET_INT(Global_35, "hairLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}

	return;
}

BOOL func_151(eStackSize essParam0) // Position - 0x3F4E Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_220(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_152(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3F7A Hash - 0xCB9E150E ^0xCB9E150E
{
	if (func_221(plParam0, bParam1, bParam2, true))
		return true;

	return false;
}

BOOL func_153(Hash hParam0) // Position - 0x3F95 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_222(hParam0);
}

Vector3 func_154(eStackSize essParam0) // Position - 0x3FA3 Hash - 0x6099830A ^0xA6B953C5
{
	switch (essParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
	
		default:
		
	}

	return Global_1835011[essParam0 /*74*/].f_18;
}

int func_155(eStackSize essParam0, float fParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3FD7 Hash - 0x2AB406F ^0x57153F35
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	eStackSize stackSize;
	BOOL flag5;
	BOOL flag6;
	var unk;

	if (func_101(32768))
		return 0;

	flag = func_198();

	if (bParam4 && func_185(&(Global_1835011[essParam0 /*74*/].f_29), 512) && !func_185(&(Global_1835011[essParam0 /*74*/].f_29), 1024))
		if (func_223())
			return 0;

	if (Global_1835011[essParam0 /*74*/].f_71)
		return 0;

	if (!func_224(essParam0))
		return 0;

	if (flag == -1)
		if (essParam0 == 19)
			if (func_89(Global_1835011[20 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_225() <= 2000)
				return 0;
		else if (essParam0 == 20)
			if (func_89(Global_1835011[19 /*74*/].f_1, true) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1 && MISC::GET_GAME_TIMER() - func_225() <= 2000)
				return 0;
		else if (essParam0 == 14)
			if (!func_89(Global_1347702[62 /*49*/].f_15, true))
				return 0;

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27))
	{
		flag4 = Global_1835011[essParam0 /*74*/].f_70;
	
		if (func_226(essParam0, flag) && !flag4)
		{
			if (bParam3 || func_227(&Global_1835011[essParam0 /*74*/], 2))
			{
				if (func_91(essParam0))
				{
					Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_92(essParam0));
					flag3 = true;
				}
				else
				{
					Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_55(essParam0));
				}
			}
			else if (func_91(essParam0))
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(joaat("BLIP_STYLE_MISSION"), func_92(essParam0), func_228(essParam0), func_229(essParam0));
				flag3 = true;
			}
			else
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION"), func_230(essParam0), func_231(essParam0));
			}
		}
		else if (flag4)
		{
			if (!func_91(essParam0))
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_154(essParam0));
			}
			else
			{
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_92(essParam0));
				flag3 = true;
			}
		}
		else if (func_153(essParam0))
		{
			if (essParam0 == 7)
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), func_55(essParam0));
			else
				Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_55(essParam0));
		}
		else
		{
			Global_1835011[essParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_55(essParam0));
		}
	
		Global_1835011[essParam0 /*74*/].f_28 = joaat("BLIP_STYLE_MISSION");
		flag2 = true;
	
		if (iParam2 != -1)
			if (flag3 || func_91(essParam0))
				func_104(iParam2, 4194304);
			else
				func_68(iParam2, 4194304);
	
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[essParam0 /*74*/].f_27, 63, essParam0);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1835011[essParam0 /*74*/].f_27))
		return 0;

	if (flag2)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[essParam0 /*74*/].f_27, Global_1835011[essParam0 /*74*/].f_26, true);
	
		if (flag != -1)
			MAP::_SET_BLIP_NAME(Global_1835011[essParam0 /*74*/].f_27, &(Global_1835011[essParam0 /*74*/].f_39));
	
		if (!func_185(&(Global_1835011[essParam0 /*74*/].f_29), 1024) && !func_153(essParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_232(&(Global_1835011[essParam0 /*74*/].f_29), 1024);
		}
	}

	if (flag != -1)
		return 1;

	if (!func_153(essParam0))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));

	if (bParam3 || func_227(&Global_1835011[essParam0 /*74*/], 2))
		MAP::BLIP_ADD_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[essParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));

	stackSize = func_233(Global_40.f_4283);

	if (func_234(stackSize) && func_235(Global_1888801[stackSize /*35*/].f_13))
	{
		flag5 = true;
		flag6 = func_236(stackSize);
	}

	if (func_237(essParam0, flag5, stackSize))
		func_238(Global_1835011[essParam0 /*74*/].f_1, flag6, flag5, stackSize);

	if (essParam0 == 7 && !func_239(579))
		func_240(579, Global_1835011[essParam0 /*74*/].f_27, false);

	if (essParam0 == 2)
		return 1;

	if (func_185(&(Global_1835011[essParam0 /*74*/].f_29), 4096) && !func_185(&(Global_1835011[essParam0 /*74*/].f_29), 8192) && (float)func_225() >= 10f && !Global_1935630.f_12 && !Global_16 && !func_241(Global_35, joaat("prop_player_sleep_tent_a_frame")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("world_player_sleep_bedroll")))
	{
		if (!func_226(essParam0, flag) || fParam1 >= func_242(essParam0) * func_242(essParam0) && !Global_1835011[essParam0 /*74*/].f_70)
		{
			TEXT_LABEL_COPY(&unk, { Global_1835011[essParam0 /*74*/].f_8 }, 2);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 16);
			func_243(&unk, 10000, 0, 0, 0, true);
			func_232(&(Global_1835011[essParam0 /*74*/].f_29), 8192);
		}
	}

	return 1;
}

void func_156(int iParam0, int iParam1) // Position - 0x4559 Hash - 0x53A96DDB ^0x308B6379
{
	iParam0->f_63 = iParam0->f_63 || iParam1;
	return;
}

int func_157(eStackSize essParam0) // Position - 0x456C Hash - 0xE4DA9E55 ^0x3BF2293
{
	if (!func_100(essParam0))
		return 0;

	return Global_1835011[essParam0 /*74*/].f_30;
}

BOOL func_158(int iParam0, int iParam1, int iParam2, eStackSize essParam3, eStackSize essParam4) // Position - 0x458C Hash - 0x2F357F29 ^0x2F357F29
{
	eStackSize i;

	if (func_198() != -1)
		return true;

	if (iParam2 == 0 && func_244(0, true, true))
		return false;

	if (Global_1879534)
		return false;

	if (func_245(iParam0, iParam1))
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_246(i, &iParam0))
		{
			Global_40.f_4942[i /*60*/].f_59 = iParam1;
		
			if (essParam3 == essParam4)
				func_109(i, 512, true);
			else
				func_45(i, 512, true);
		}
	}

	return true;
}

int func_159(BOOL bParam0) // Position - 0x461C Hash - 0x88929B6 ^0x3BF87E4F
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
					
						if (func_247(Global_1347702[stackSize /*49*/].f_12, 1))
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
						
							if (func_100(stackSize2) && !func_222(stackSize2))
								num = num + 1;
						}
						break;
				}
			}
		}
	}

	return num;
}

BOOL func_160(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4774 Hash - 0x1C7132A3 ^0x3158884D
{
	int num;
	eStackSize i;
	Ped ped;

	if (CAM::IS_SCREEN_FADED_OUT())
		return false;

	num = func_157(essParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_246(i, &num))
		{
			ped = func_80(func_248(essParam0));
		
			if (ENTITY::IS_ENTITY_DEAD(ped))
			{
			}
			else
			{
				if (bParam1 && func_39(i, 67, true))
					return true;
			
				if (bParam2 && func_39(i, 47, true))
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

Vector3 func_161(eStackSize essParam0) // Position - 0x4811 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_55(essParam0);
}

BOOL func_162(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x481F Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_172(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

int func_163(int iParam0) // Position - 0x487A Hash - 0x8157C348 ^0x8157C348
{
	int i;
	int num;
	int num2;
	var unk;

	if (Global_1898329 == 15)
		return -1;

	if (!func_220(iParam0))
		return -1;

	if (func_198() != -1)
	{
		num2 = func_65(iParam0);
	
		if (num2 >= 0)
		{
			func_249(iParam0, true);
			return num2;
		}
		else
		{
			num = Global_1898329;
			Global_1898330[num] = iParam0;
			Global_1898346[num /*6*/] = { unk };
			func_250(num, true);
			func_249(iParam0, true);
			Global_1898329 = Global_1898329 + 1;
		
			if (Global_1898329 > 15)
				Global_1898329 = 15;
		
			return num;
		}
	}
	else
	{
		num2 = func_65(iParam0);
	
		if (num2 >= 0)
		{
			func_249(iParam0, true);
			return num2;
		}
		else
		{
			for (i = 0; i < Global_1898330; i = i + 1)
			{
				if (!func_74(Global_1898330[i]))
				{
					Global_1898330[i] = iParam0;
					Global_1898346[i /*6*/] = { unk };
					func_250(i, true);
					func_249(iParam0, true);
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

void func_164(eStackSize essParam0) // Position - 0x4996 Hash - 0x2310F0AA ^0x2CE4B7A2
{
	int num;
	eStackSize i;
	Ped ped;

	num = func_157(essParam0);

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_246(i, &num))
		{
			ped = func_80(func_248(essParam0));
		
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

void func_165(int iParam0) // Position - 0x49EB Hash - 0x646928F0 ^0x646928F0
{
	func_251(iParam0);
	return;
}

void func_166(BOOL bParam0) // Position - 0x49F9 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

int func_167(int iParam0) // Position - 0x4A0C Hash - 0x6EC15CF9 ^0xE613EBE0
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

float func_168() // Position - 0x4A8D Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_169(var uParam0, int iParam1) // Position - 0x4ABF Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_170(var uParam0, int iParam1) // Position - 0x4AD0 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_171(Ped pedParam0) // Position - 0x4AE5 Hash - 0xD0A83CF ^0x594037A
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

float func_172(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x4B4A Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_173(eStackSize essParam0) // Position - 0x4B68 Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_70(essParam0))
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

	if (!func_70(essParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = essParam0;
			Global_1360165[essParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_174(eStackSize essParam0) // Position - 0x4C49 Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_70(essParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[essParam0 /*1157*/].f_126))
	{
		persCharHash = func_112(essParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[essParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[essParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[essParam0 /*60*/].f_7);
	
		Global_1360165[essParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[essParam0 /*1157*/].f_126);
	}

	return Global_1360165[essParam0 /*1157*/].f_126;
}

int func_175(int iParam0) // Position - 0x4CE5 Hash - 0x68D06F4A ^0x14E98A5E
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_119();

	if (func_198() == -1)
		if (iParam0 == 1160113249)
			num = 1583685020;
		else
			num = -572793833;
	else
		num = -2109211296;

	return num;
}

void func_176(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5) // Position - 0x4D28 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = hParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = iParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

void func_177(var uParam0) // Position - 0x4D57 Hash - 0x7C3D914C ^0xB1998A7B
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

BOOL func_178(var uParam0, eStackSize essParam1, Hash hParam2) // Position - 0x4DB5 Hash - 0xF7A7FB9C ^0xF7A7FB9C
{
	if (essParam1 == -1)
		return false;

	if (hParam2 != 0 && func_252(essParam1) != hParam2)
		return false;

	if (func_253(2, essParam1))
	{
		func_254(uParam0, essParam1);
		return true;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_179(var uParam0, int iParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x4DF7 Hash - 0xC258D89B ^0x96AA147F
{
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;

	num3 = func_175(iParam6);
	num3.f_1 = iParam1;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num3, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 2049745650);
	*uParam2 = flag;
	Global_1946054.f_2652 = 0;

	if (!flag && !bParam3)
		func_133(uParam0, func_190(num), true);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1409451727))
		{
		}
		else
		{
			num2 = num;
			i = func_255(num2, 1);
		
			if (i < 0 || i > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, joaat("Component")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = i;
				Global_1946054.f_2652 = Global_1946054.f_2652 + 1;
				uParam0->f_1[i /*3*/] = num;
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1441384))
						uParam0->f_1[i /*3*/].f_1 = joaat("base");
					else
						goto 0x157;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1194786549))
					if (func_256(num2) && func_257(uParam0->f_1[i /*3*/], num2, &num))
						uParam0->f_1[i /*3*/].f_1 = num;
				else
					uParam0->f_1[i /*3*/].f_1 = num;
			}
		}
	}

	if (flag)
	{
		for (i = 0; i < Global_1946054.f_2652; i = i + 1)
		{
			func_258(uParam0, uParam0->f_1[Global_1946054.f_2612[i] /*3*/], Global_1946054.f_2612[i], false, false);
		}
	}

	if (bParam4)
		*uParam0 = iParam1;

	return true;
}

BOOL func_180(BOOL bParam0) // Position - 0x4FAC Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_181(int iParam0) // Position - 0x4FBD Hash - 0x65A082AE ^0x65A082AE
{
	func_196(iParam0, 8, 6);
	return;
}

void func_182(int iParam0) // Position - 0x4FCE Hash - 0x65A082AE ^0x65A082AE
{
	func_197(iParam0, 8, 6);
	return;
}

void func_183(var uParam0, BOOL bParam1, int iParam2) // Position - 0x4FDF Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int num7;

	flag = func_198() != -1;
	num6 = func_259(0);

	if (func_180(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_192(num, 1);
		
			if (func_195(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_195(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_260(uParam0->f_1[num /*3*/], num5, num6, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num7 = func_261(uParam0);

	if (num3 > 0)
	{
		if (!func_180(524288))
		{
			func_144(524288);
			num2 = num2 - num7;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_192(num, 1);
			
				if (func_195(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_195(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_260(uParam0->f_1[num /*3*/], num5, num6, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_262(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num7 < 31)
		func_204(524288);

	return;
}

void func_184(int iParam0) // Position - 0x51FC Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_185(var uParam0, int iParam1) // Position - 0x520D Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_186() // Position - 0x522D Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

Hash func_187() // Position - 0x5239 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_188(Hash hParam0) // Position - 0x5245 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

BOOL func_189(eStackSize essParam0) // Position - 0x5258 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

int func_190(int iParam0) // Position - 0x5277 Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case -2125161702:
			return 131072;
	
		case -1932005642:
			return 65536;
	
		case -1925540957:
			return 32768;
	
		case -1886898087:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 16384;
	
		case -1674046782:
			return 139376;
	
		case -1283403230:
			return 2048;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 32833;
	
		case -915377750:
			return 1024;
	
		case -884591393:
			return 96;
	
		case -663436545:
			return 112;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 4208;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
	
		case 75507907:
			return 8192;
	
		case 315750675:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 20480;
	
		case 884232794:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 4096;
	
		case 1042019528:
			return 1136;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 1481630954:
			return 262256;
	
		case 1929486675:
			return 262144;
	
		default:
		
	}

	return 0;
}

BOOL func_191(var uParam0, int iParam1) // Position - 0x53FF Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

int func_192(int iParam0, int iParam1) // Position - 0x5410 Hash - 0xE1D12727 ^0xA46110B3
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

BOOL func_193(int iParam0, int iParam1) // Position - 0x565F Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

Vector3 func_194(int iParam0, eStackSize essParam1) // Position - 0x5678 Hash - 0x6854E748 ^0xA730727C
{
	if (func_198() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		return Global_26796.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	return Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

BOOL func_195(int iParam0, int iParam1) // Position - 0x56D7 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

void func_196(int iParam0, int iParam1, int iParam2) // Position - 0x56F5 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_197(int iParam0, int iParam1, int iParam2) // Position - 0x5734 Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

BOOL func_198() // Position - 0x5761 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_199() // Position - 0x576F Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_200() // Position - 0x57B6 Hash - 0xB6203BF0 ^0x217DD714
{
	func_177(&(Global_1946054.f_2776));
	func_204(32768);
	func_196(1108822547, 8, 6);
	return;
}

void func_201(eStackSize essParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x57DD Hash - 0x733B4F28 ^0x1FF18276
{
	eStackSize stackSize;
	int num;

	num = 1;

	if (bParam2)
		if (essParam0 == -1 || essParam0 == func_263() || bParam5)
			func_264();

	if (func_198() == -1)
	{
		stackSize = Global_40.f_7729;
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
			stackSize = Global_1905941;
	
		if (bParam4 && stackSize > 5 && func_265(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				stackSize = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_118(Global_40.f_7729);
				Global_1946054.f_1378 = func_118(Global_40.f_7729);
				iParam3 = 1;
			}
		}
	
		num = func_266(stackSize);
	}

	if (iParam3 && num)
		func_267(essParam0, false, 6);

	if (bParam1)
		func_268(false, true);

	func_184(0);
	return;
}

void func_202(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x592E Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_198() != -1;
	Global_1946054.f_857 = 0;

	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(pedParam1);
	
		if (!isMp)
		{
			if (Global_1347477.f_189 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_189);
		
			if (Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 && Global_1347477.f_190 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_190);
		
			func_144(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_269(pedParam1, 29, isMp, true, 0);
			func_269(pedParam1, 31, isMp, true, 0);
			func_269(pedParam1, 30, isMp, true, 0);
			func_269(pedParam1, 22, isMp, true, 0);
			func_269(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_180(32768) && func_195(1108822547, 8) && func_193(10, iParam3))
		func_270(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_192(num, 1);
		
			if (func_195(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_193(num, iParam3))
				{
				}
				else if (func_195(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_195(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_269(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_197(num2, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if (!bParam2 && hParam0->f_1[num /*3*/] == Global_1946054.f_2456[num /*2*/] && hParam0->f_1[num /*3*/].f_1 == Global_1946054.f_2456[num /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[num /*11*/].f_1 > 1)
								func_269(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_195(num2, 1))
								func_196(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_195(num2, 1))
						func_196(num2, 1, 6);
				
					Global_1946054.f_857 = Global_1946054.f_857 + 1;
					PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
				
					if (hParam0->f_1[num /*3*/].f_1 != 0)
						PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
				}
			}
		}
	}

	if (Global_1946054.f_857 <= 0)
		return;

	if (bParam4)
	{
		PED::_0xAAB86462966168CE(pedParam1, isMp);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, bParam5);
	}

	return;
}

char* func_203() // Position - 0x5C77 Hash - 0x306ACA3A ^0x5B09306
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_204(BOOL bParam0) // Position - 0x5C83 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_205(int iParam0, int iParam1) // Position - 0x5C9B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_206(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x5CAA Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_213(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_213(20))
				return;
		}
	}

	func_214(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_144(8);
	return;
}

void func_207(int iParam0, BOOL bParam1) // Position - 0x5DAE Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_271(iParam0, &num, &num2);

	if (!func_272(iParam0, num, num2, bParam1))
		return;

	func_273(num, num2);
	return;
}

void func_208(int iParam0, int iParam1) // Position - 0x5DDB Hash - 0xA0246B1D ^0xF23F758E
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
	return;
}

BOOL func_209(int iParam0) // Position - 0x5DF1 Hash - 0x5DCECD10 ^0x5DCECD10
{
	if (iParam0 == -1)
		return false;

	return true;
}

BOOL func_210(int iParam0) // Position - 0x5E04 Hash - 0x34617548 ^0x34617548
{
	if (iParam0 <= -1 || iParam0 > 10)
		return false;

	return true;
}

void func_211(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x5E23 Hash - 0x6C4E6E52 ^0x6C4E6E52
{
	var unk;
	var unk2;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}

	if (bParam3)
		func_275(uParam1, uParam2, &unk, &unk2, false, func_274(iParam0));

	return;
}

void func_212(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x5F16 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_276(*hParam0);
	i = func_277(*hParam0);
	num2 = func_278(*hParam0);
	j = func_188(*hParam0);
	k = func_279(*hParam0);
	l = func_280(*hParam0);

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

	for (m = func_281(i, num); num2 > m; m = func_281(i, num))
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

	func_282(hParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_213(int iParam0) // Position - 0x609E Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_214(int iParam0) // Position - 0x60B3 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_215(int iParam0, var uParam1, var uParam2) // Position - 0x60D3 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_206(num);
	return;
}

void func_216(int iParam0) // Position - 0x60F3 Hash - 0x68BAC935 ^0x68CA1306
{
	Global_40.f_7748.f_4 = Global_40.f_7748.f_4 - Global_40.f_7748.f_4 && iParam0;
	return;
}

BOOL func_217(int iParam0) // Position - 0x6117 Hash - 0x71C807FE ^0x71C807FE
{
	if (iParam0 <= -1 || iParam0 > 9)
		return false;

	return true;
}

void func_218(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x6136 Hash - 0x549CBB93 ^0x549CBB93
{
	var unk;
	var unk2;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}

	if (bParam3)
		func_275(uParam1, uParam2, &unk, &unk2, false, func_283());

	return;
}

int func_219() // Position - 0x620D Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_7748.f_1;
}

BOOL func_220(int iParam0) // Position - 0x621D Hash - 0x93C8DA75 ^0x93C8DA75
{
	return func_117(iParam0) == 0;
}

BOOL func_221(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x622D Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_284(bParam1, bParam2, bParam3);

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

BOOL func_222(eStackSize essParam0) // Position - 0x6362 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

BOOL func_223() // Position - 0x6386 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_224(int iParam0) // Position - 0x63A6 Hash - 0x2CA81420 ^0xF4BC7BB7
{
	if (func_198() == false)
		return true;

	switch (iParam0)
	{
		case 18:
			return func_89(Global_1347702[21 /*49*/].f_15, true);
	
		case 44:
			return func_89(Global_1347702[83 /*49*/].f_15, true);
	}

	return true;
}

int func_225() // Position - 0x63F9 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1898438;
}

BOOL func_226(eStackSize essParam0, BOOL bParam1) // Position - 0x6405 Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (bParam1 != -1)
		return false;

	if (func_91(essParam0))
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

BOOL func_227(int iParam0, int iParam1) // Position - 0x64C9 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

Vector3 func_228(int iParam0) // Position - 0x64DA Hash - 0x92A36B48 ^0x92A36B48
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
	
		default:
		
	}

	return 5f, 5f, 5f;
}

int func_229(int iParam0) // Position - 0x6501 Hash - 0xA5C2BBC7 ^0xA5C2BBC7
{
	switch (iParam0)
	{
		case 14:
			return 19;
	
		default:
		
	}

	return 0;
}

Vector3 func_230(int iParam0) // Position - 0x651D Hash - 0xE4F42658 ^0xFC03374
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

float func_231(eStackSize essParam0) // Position - 0x65F0 Hash - 0x944FFAA0 ^0x944FFAA0
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

void func_232(var uParam0, int iParam1) // Position - 0x664B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

eStackSize func_233(eStackSize essParam0) // Position - 0x665C Hash - 0x84838E68 ^0x84838E68
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

BOOL func_234(eStackSize essParam0) // Position - 0x66DF Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_235(int iParam0) // Position - 0x66F5 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

BOOL func_236(eStackSize essParam0) // Position - 0x671E Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_285(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_286(essParam0))
			if (BUILTIN::VDIST(Global_36, func_287(essParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[essParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_287(essParam0), false) <= func_288();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[essParam0 /*35*/].f_15, false) <= func_288();
	}

	return func_289();
}

BOOL func_237(Hash hParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x67AE Hash - 0x561CE123 ^0xB84B7B4C
{
	if (hParam0 == 18)
		return false;

	if (hParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[hParam0 /*74*/].f_27) && Global_1835011[hParam0 /*74*/].f_21 == essParam2)
		return true;

	return false;
}

void func_238(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x67FB Hash - 0x436A2EB9 ^0x436A2EB9
{
	Hash hash;
	Hash hash2;
	Hash styleHash;

	if (!func_74(iParam0))
		return;

	switch (func_290(iParam0))
	{
		case 1:
			hash = func_291(iParam0);
		
			if (func_292(hash, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
				if (func_226(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_226(hash, -1) && !Global_1835011[hash /*74*/].f_70 && Global_1835011[hash /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[hash /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[hash /*74*/].f_27, styleHash);
			
				if (!func_153(hash))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_227(&Global_1835011[hash /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[hash /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[hash /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			hash2 = func_291(iParam0);
		
			if (func_293(hash2, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_294(hash2))
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
				styleHash = func_294(hash2);
			}
		
			if (Global_1347702[hash2 /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[hash2 /*49*/].f_37, styleHash);
				func_295(hash2);
				Global_1347702[hash2 /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

BOOL func_239(int iParam0) // Position - 0x69F7 Hash - 0x6F6E313E ^0xFDA66EDA
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;

	if (func_198() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[num2], offset);

	return MISC::IS_BIT_SET(Global_40.f_7832[num2], offset);
}

void func_240(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x6A3C Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_271(iParam0, &num, &num2);

	if (!func_272(iParam0, num, num2, bParam2))
		return;

	if (!func_296(iParam0, 1024))
		return;

	func_273(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
	return;
}

BOOL func_241(Ped pedParam0, Hash hParam1) // Position - 0x6A9C Hash - 0x2ACCF512 ^0x1B61D374
{
	return PED::IS_PED_USING_SCENARIO_HASH(pedParam0, hParam1);
}

float func_242(eStackSize essParam0) // Position - 0x6AAC Hash - 0x6DA75D4 ^0x6DA75D4
{
	return func_231(essParam0) / 2f;
}

int func_243(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x6ABC Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_244(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6AF7 Hash - 0xB13E2226 ^0xA63BD3BC
{
	Hash hash;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_297())
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
		hash = func_291(Global_1898164.f_1[0 /*5*/]);
	
		if (func_298(hash) && func_247(Global_1347702[hash /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_74(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_245(int iParam0, int iParam1) // Position - 0x6CFB Hash - 0x4134D2DF ^0x8D80BF31
{
	eStackSize i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_246(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_246(eStackSize essParam0, var uParam1) // Position - 0x6D4B Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_12(essParam0))
		return false;

	num = func_299(essParam0);
	return *uParam1 && num != false;
}

BOOL func_247(int iParam0, int iParam1) // Position - 0x6D71 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

eStackSize func_248(eStackSize essParam0) // Position - 0x6D80 Hash - 0x297139D9 ^0x297139D9
{
	if (!func_100(essParam0))
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

void func_249(int iParam0, BOOL bParam1) // Position - 0x6FB4 Hash - 0x3C4FA973 ^0x67C1D80B
{
	if (!func_74(iParam0))
		return;

	if (!func_220(iParam0))
		return;

	if (bParam1)
	{
		if (func_300(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_300(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_290(iParam0), func_291(iParam0), func_301(iParam0), func_300(iParam0), Global_36);
		}
	}

	func_302(iParam0, 1);
	bParam1 = bParam1;
	return;
}

void func_250(int iParam0, BOOL bParam1) // Position - 0x7025 Hash - 0x23CB6788 ^0xB008F1A1
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_303(Global_1898330[iParam0]);
		func_304(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

void func_251(int iParam0) // Position - 0x7086 Hash - 0x195570A8 ^0x195570A8
{
	if (!func_74(iParam0))
		return;

	if (!func_66(iParam0))
		return;

	func_302(iParam0, 2);
	return;
}

Hash func_252(eStackSize essParam0) // Position - 0x70AF Hash - 0x7B091E14 ^0x2ED2329F
{
	if (essParam0 == -1)
		essParam0 = func_263();

	if (func_198() == -1)
		return Global_26796.f_26[essParam0 /*120*/].f_1;

	return Global_36638.f_45.f_350.f_26[essParam0 /*120*/].f_1;
}

BOOL func_253(BOOL bParam0, eStackSize essParam1) // Position - 0x70E9 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_198() == -1)
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

void func_254(var uParam0, eStackSize essParam1) // Position - 0x7166 Hash - 0x532E3FFC ^0x8CC1CDDF
{
	int i;

	if (func_198() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		*uParam0 = Global_26796.f_26[essParam1 /*120*/].f_1;
	
		for (i = 0; i < 39; i = i + 1)
		{
			uParam0->f_1[i /*3*/] = { Global_26796.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	*uParam0 = Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1;

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1[i /*3*/] = { Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1.f_1[i /*3*/] };
	}

	return;
}

int func_255(int iParam0, int iParam1) // Position - 0x7220 Hash - 0x9D981F95 ^0x9D981F95
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

int func_256(int iParam0) // Position - 0x73F1 Hash - 0x9D8F4245 ^0x3C0C5BB1
{
	int num;
	var unk;

	Global_1946054.f_964.f_2 = 0;

	if (func_198() == -1)
		num = -380731322;
	else
		num = 1226838104;

	func_176(&(Global_1946054.f_964), num, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1946054.f_964), 1409451727))
		return 0;

	return 1;
}

int func_257(var uParam0, int iParam1, var uParam2) // Position - 0x745C Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return 1;
}

void func_258(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x746D Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	int num3;
	int num4;

	num2 = 12;
	num3 = func_305(uParam0->f_1[iParam2 /*3*/]);
	num4 = 0;

	if (bParam3)
		num4 = 3;

	if (func_193(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_262(num2, num4);
	}

	if (func_306(-1586649372) && func_193(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_262(num2, num4);
	}

	switch (num3)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_307(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_307(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_262(num2, num4);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_262(num2, num4);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_262(num2, num4);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_308(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_309(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_262(num2, num4);
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
						func_262(num2, num4);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_262(num2, num4);
				}
			
				num2 = 35;
			
				if (-923693316 == func_305(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_262(num2, num4);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_308(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_305(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_262(num2, num4);
				}
			}
			break;
	
		case -497931013:
			func_307(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_307(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_262(num2, num4);
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
						func_262(num2, num4);
				}
			}
		
			func_307(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_309(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_262(num2, num4);
			}
			break;
	
		case 1868067663:
			func_307(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_262(num2, num4);
			}
			break;
	}

	switch (func_305(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_305(uParam0->f_1[num2 /*3*/]) || func_309(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_262(num2, num4);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_305(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_262(num2, num4);
			}
			break;
	}

	return;
}

int func_259(int iParam0) // Position - 0x7AB1 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_119();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_260(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7AD7 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_255(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_180(524288))
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

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), iParam2, bParam3);
	return num;
}

int func_261(var uParam0) // Position - 0x7B42 Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_262(int iParam0, int iParam1) // Position - 0x7B8D Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_310(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

eStackSize func_263() // Position - 0x7BA4 Hash - 0x2BA7679 ^0x402F4D9C
{
	if (func_198() == -1)
		return Global_26796.f_776;

	return Global_36638.f_45.f_350.f_1011;
}

void func_264() // Position - 0x7BC8 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1497 = Global_1946054.f_1378;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1497.f_1[i /*3*/] = { Global_1946054.f_1378.f_1[i /*3*/] };
	}

	return;
}

BOOL func_265(Hash hParam0) // Position - 0x7C0F Hash - 0x3C376408 ^0xEF328608
{
	int num;
	BOOL num2;

	num = func_175(0);
	num2 = 0;
	func_176(&(Global_1946054.f_964), num, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
		return false;

	if (!DATAFILE::_PARSEDDATA_GET_BOOL(&num2, &(Global_1946054.f_964), -1516819610))
		return false;

	return num2;
}

int func_266(eStackSize essParam0) // Position - 0x7C6D Hash - 0x3D48653D ^0x3D48653D
{
	switch (essParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_267(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x7CBA Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_311(&(Global_1946054.f_1378), essParam0);
	func_312(2, essParam0, 6);

	if (bParam1)
		func_268(false, true);

	return;
}

void func_268(BOOL bParam0, BOOL bParam1) // Position - 0x7CE2 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_184(0);

	if (bParam0)
	{
		func_144(8);
		func_144(512);
	}
	else
	{
		func_144(8);
		func_144(16);
	}

	return;
}

void func_269(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x7D15 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_192(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_313(hParam4);
		else if (hParam4 != Global_1946054.f_57[iParam1 /*11*/])
			shopItemComponentCategory = PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam4, PED::_GET_META_PED_TYPE(pedParam0), bParam2);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0, bParam2);
		}
	}
	else
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_TAG_FROM_META_PED(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0);
		}
	}

	return;
}

void func_270(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7E12 Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_195(1108822547, 6))
	{
		if (bParam2)
		{
			func_269(pedParam0, num, func_198() != -1, false, 0);
			func_197(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_196(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

void func_271(int iParam0, var uParam1, var uParam2) // Position - 0x7EDA Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_272(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7EF6 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_314(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_315(iParam0))
		return false;

	if (func_316(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_296(iParam0, 1) || func_101(32768))
		if (!func_296(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_317())
		return false;

	return true;
}

void func_273(int iParam0, int iParam1) // Position - 0x7F98 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

int func_274(int iParam0) // Position - 0x7FBC Hash - 0xA5486CA1 ^0x73FE29F9
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
	
		case 2:
			return 4;
	
		case 3:
			return 8;
	
		default:
		
	}

	return 1;
}

void func_275(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x7FF6 Hash - 0xB927B96D ^0x29F8AFA1
{
	int num;
	int num2;
	int num3;
	float num4;

	num4 = BUILTIN::TO_FLOAT(iParam5);
	num = func_318(BUILTIN::TO_FLOAT(*uParam0), num4);
	num2 = func_319(BUILTIN::TO_FLOAT(*uParam1), num4);
	num3 = func_320(BUILTIN::TO_FLOAT(*uParam2), num4);
	*uParam0 = *uParam0 / iParam5;
	*uParam1 = *uParam1 / iParam5;
	*uParam2 = *uParam2 / iParam5;
	*uParam3 = *uParam3 / iParam5;
	*uParam1 = *uParam1 + num;
	*uParam2 = *uParam2 + num2;
	*uParam3 = *uParam3 + num3;

	if (bParam4)
	{
		*uParam3 = *uParam3 * -1;
		*uParam2 = *uParam2 * -1;
		*uParam1 = *uParam1 * -1;
		*uParam0 = *uParam0 * -1;
	}

	return;
}

int func_276(int iParam0) // Position - 0x809A Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_277(int iParam0) // Position - 0x80BF Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_278(int iParam0) // Position - 0x80D2 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_279(int iParam0) // Position - 0x80E5 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_280(int iParam0) // Position - 0x80F7 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_281(int iParam0, int iParam1) // Position - 0x8109 Hash - 0x893AC59E ^0x893AC59E
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

void func_282(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x81A3 Hash - 0xA65AB937 ^0xA65AB937
{
	func_322(hParam0, iParam6);
	func_323(hParam0, iParam5);
	func_324(hParam0, iParam4);
	func_325(hParam0, iParam3);
	func_326(hParam0, iParam2);
	func_327(hParam0, iParam1);
	return;
}

int func_283() // Position - 0x81DB Hash - 0x1309DFA4 ^0x1309DFA4
{
	if (func_328(8))
		return 8;
	else if (func_328(4))
		return 4;
	else if (func_328(2))
		return 2;

	return 1;
}

BOOL func_284(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8210 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_285(eStackSize essParam0) // Position - 0x82AE Hash - 0xBF3EFB31 ^0xBF3EFB31
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

BOOL func_286(int iParam0) // Position - 0x82DE Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_287(eStackSize essParam0) // Position - 0x82FC Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (essParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[essParam0 /*35*/].f_15;
}

float func_288() // Position - 0x8333 Hash - 0x97B49396 ^0x97B49396
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

BOOL func_289() // Position - 0x836F Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_290(int iParam0) // Position - 0x837F Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_74(iParam0))
		return 0;

	return func_329(func_303(iParam0));
}

Hash func_291(int iParam0) // Position - 0x839F Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_74(iParam0))
		return -1;

	return func_330(func_303(iParam0));
}

BOOL func_292(Hash hParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x83BF Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_237(hParam0, bParam2, essParam3))
		return true;

	return false;
}

BOOL func_293(Hash hParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x83E1 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_331(hParam0, bParam2, essParam3))
		return true;

	return false;
}

Blip func_294(Hash hParam0) // Position - 0x8403 Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_298(hParam0))
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

void func_295(Hash hParam0) // Position - 0x8496 Hash - 0xAC04978C ^0x82563A0D
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

BOOL func_296(int iParam0, int iParam1) // Position - 0x84ED Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_297() // Position - 0x8506 Hash - 0x2C13EB06 ^0x38F12C8A
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

BOOL func_298(Hash hParam0) // Position - 0x8559 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

int func_299(eStackSize essParam0) // Position - 0x856F Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, essParam0);
}

Hash func_300(int iParam0) // Position - 0x857E Hash - 0x2F57FA7D ^0x914B8AA9
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_5;

	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_301(int iParam0) // Position - 0x85A9 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_74(iParam0))
		return -1;

	return func_332(func_303(iParam0));
}

void func_302(int iParam0, int iParam1) // Position - 0x85C9 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_74(iParam0))
		return;

	func_333(iParam0, iParam1);
	return;
}

BOOL func_303(int iParam0) // Position - 0x85E6 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

void func_304(BOOL bParam0, eStackSize essParam1, int iParam2, int iParam3) // Position - 0x8624 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_329(bParam0);
	*essParam1 = func_330(bParam0);
	*iParam2 = func_332(bParam0);
	return;
}

int func_305(Hash hParam0) // Position - 0x8647 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_334(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_306(int iParam0) // Position - 0x8672 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_255(iParam0, 1) /*3*/] != Global_1946054.f_57[func_255(iParam0, 1) /*11*/];
}

void func_307(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x86AA Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_262(num2, num);
	
		if (bParam1)
			func_262(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_262(num3, num);
	}

	return;
}

BOOL func_308(Hash hParam0) // Position - 0x8796 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_309(Hash hParam0, Hash hParam1) // Position - 0x87D9 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_310(int iParam0, int iParam1, int iParam2) // Position - 0x880A Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_335(iParam0, 1))
		func_336(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_311(var uParam0, eStackSize essParam1) // Position - 0x8851 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_198() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_337(&uParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_338(&uParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_312(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x88EC Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_198() == -1)
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

Hash func_313(Hash hParam0) // Position - 0x8974 Hash - 0xBBE66644 ^0xEC72F4B4
{
	int num;

	num = func_305(hParam0);

	switch (num)
	{
		case -2061583405:
			return joaat("HATS");
	
		case -525676072:
			return joaat("MASKS_LARGE");
	
		default:
		
	}

	return 0;
}

BOOL func_314(int iParam0, int iParam1) // Position - 0x89A9 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_198() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_315(int iParam0) // Position - 0x89DC Hash - 0x3E25647A ^0x3E25647A
{
	if (func_198() != -1)
		if (func_296(iParam0, 4))
			return false;
	else if (func_296(iParam0, 2))
		return false;

	return true;
}

BOOL func_316(int iParam0) // Position - 0x8A0C Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_296(iParam0, 65536) && !func_296(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_296(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_296(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_317() // Position - 0x8AB8 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_318(float fParam0, float fParam1) // Position - 0x8AC7 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 24f);
}

int func_319(float fParam0, float fParam1) // Position - 0x8AEC Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

int func_320(float fParam0, float fParam1) // Position - 0x8B11 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

var func_321(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8B36 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_322(Hash hParam0, int iParam1) // Position - 0x8B4D Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*hParam0 = *hParam0 - *hParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*hParam0 = *hParam0 | -2147483648;
	}
	else
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*hParam0 = *hParam0 - *hParam0 & -2147483648;
	}

	return;
}

void func_323(Hash hParam0, int iParam1) // Position - 0x8BD3 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*hParam0 = *hParam0 - *hParam0 & 62914560;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_324(Hash hParam0, int iParam1) // Position - 0x8C0F Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_277(*hParam0);
	num2 = func_276(*hParam0);

	if (iParam1 < 1 || iParam1 > func_281(num, num2))
		return;

	*hParam0 = *hParam0 - *hParam0 & 4063232;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_325(Hash hParam0, int iParam1) // Position - 0x8C62 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*hParam0 = *hParam0 - *hParam0 & 126976;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_326(Hash hParam0, int iParam1) // Position - 0x8C9D Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 4032;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_327(Hash hParam0, int iParam1) // Position - 0x8CD6 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 63;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_328(int iParam0) // Position - 0x8D0E Hash - 0x9921E361 ^0xB910E238
{
	return Global_40.f_7748.f_4 && iParam0 != false;
}

int func_329(BOOL bParam0) // Position - 0x8D23 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_330(BOOL bParam0) // Position - 0x8D30 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_331(Hash hParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x8D43 Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37) && Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[hParam0 /*49*/].f_27 == essParam2;

	return false;
}

int func_332(BOOL bParam0) // Position - 0x8D87 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

void func_333(int iParam0, int iParam1) // Position - 0x8D9B Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_339(iParam0);
	else
		func_340(iParam0, iParam1);

	func_341();
	return;
}

BOOL func_334(Hash hParam0, int iParam1) // Position - 0x8DE3 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_335(int iParam0, int iParam1) // Position - 0x8DFD Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_336(int iParam0, int iParam1) // Position - 0x8E0E Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_337(var uParam0, int iParam1, eStackSize essParam2) // Position - 0x8E21 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_338(var uParam0, int iParam1, eStackSize essParam2) // Position - 0x8E7C Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

int func_339(int iParam0) // Position - 0x8EE6 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_167(iParam0);

	if (num < 0)
		return 0;

	return func_342(num);
}

int func_340(int iParam0, int iParam1) // Position - 0x8F06 Hash - 0xF3EA5EAF ^0xA48F5774
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
			func_343(num2);
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

void func_341() // Position - 0x9076 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_342(int iParam0) // Position - 0x9099 Hash - 0x78E19743 ^0x6ACC64F5
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

int func_343(int iParam0) // Position - 0x914D Hash - 0x6DD34799 ^0x352A62D8
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

