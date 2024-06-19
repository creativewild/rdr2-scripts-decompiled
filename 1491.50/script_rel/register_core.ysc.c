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
	var uLocal_17 = 3;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 3;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x813C9F26 ^0xB021BB4B
{
	var entityCoords;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14.f_12 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&uLocal_14);

	if (TASK::DOES_SCENARIO_POINT_EXIST(uScriptParam_0.f_1))
	{
		uLocal_14.f_2 = uScriptParam_0.f_1;
		uLocal_14.f_1 = TASK::_GET_SCENARIO_POINT_ENTITY(uLocal_14.f_2);
	}
	else
	{
		func_1(&uLocal_14);
	}

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uLocal_14.f_1, false, false) };

	if (!func_2(entityCoords))
		func_1(&uLocal_14);

	while (true)
	{
		uLocal_14.f_13 = uLocal_14.f_13 + 1;
	
		if (uLocal_14.f_13 >= 30)
		{
			uLocal_14.f_13 = 0;
		
			if (Global_1935630.f_12)
				func_3(&uLocal_14, 5);
		}
	
		if (func_4(Global_1935630, 2097152))
			func_3(&uLocal_14, 5);
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			func_1(&uLocal_14);
	
		switch (func_5(&uLocal_14))
		{
			case 0:
				if (func_6(&uLocal_14))
				{
					func_7(&uLocal_14);
					func_8(&uLocal_14);
				}
			
				if (TASK::DOES_SCENARIO_POINT_EXIST(uLocal_14.f_2))
					if (func_9(Global_36) && func_10(&uLocal_14))
						func_3(&uLocal_14, 1);
				else
					func_3(&uLocal_14, 5);
				break;
		
			case 1:
				if (func_6(&uLocal_14))
					func_8(&uLocal_14);
			
				if (func_11(&uLocal_14))
					func_3(&uLocal_14, 2);
				break;
		
			case 2:
				if (func_6(&uLocal_14))
					func_8(&uLocal_14);
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_14.f_1))
					if (func_12(&uLocal_14))
						func_3(&uLocal_14, 3);
				break;
		
			case 3:
				if (func_6(&uLocal_14))
				{
					func_13(&uLocal_14);
					func_14(&uLocal_14);
					func_8(&uLocal_14);
				}
			
				if (func_15(uLocal_14.f_11))
					func_3(&uLocal_14, 4);
				break;
		
			case 4:
				if (func_6(&uLocal_14))
					func_8(&uLocal_14);
				break;
		
			case 5:
				func_1(&uLocal_14);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1(var uParam0) // Position - 0x1D8 Hash - 0xC68440F0 ^0x55ED671C
{
	int i;

	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);

	for (i = 0; i < uParam0->f_7; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7[i]))
			OBJECT::DELETE_OBJECT(&uParam0->f_7[i]);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_11);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(var uParam0, var uParam1, var uParam2) // Position - 0x230 Hash - 0x5512AD7A ^0x5512AD7A
{
	int i;

	for (i = 0; i < 35; i = i + 1)
	{
		if (func_16(uParam0, i))
			if (func_17(i))
				return true;
	}

	return false;
}

void func_3(var uParam0, int iParam1) // Position - 0x266 Hash - 0xBB022E17 ^0xBB022E17
{
	*uParam0 = iParam1;
	func_18(uParam0);
	return;
}

BOOL func_4(int iParam0, int iParam1) // Position - 0x279 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_5(var uParam0) // Position - 0x288 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_6(var uParam0) // Position - 0x293 Hash - 0xD73B9827 ^0x62D87830
{
	return uParam0->f_14;
}

void func_7(var uParam0) // Position - 0x29F Hash - 0x170449A7 ^0x258E139E
{
	uParam0->f_3[0] = joaat("p_cs_billsingle01bx");
	uParam0->f_3[1] = joaat("p_cs_billsingle01bx");

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11))
		uParam0->f_11 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@shoprobberies@GLOBAL@EVENT_OPEN_REGISTER@BASE", 2, 0, false, true);

	return;
}

void func_8(var uParam0) // Position - 0x2D9 Hash - 0xBA5A1D5A ^0x165C54CB
{
	uParam0->f_14 = 0;
	return;
}

int func_9(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x2E6 Hash - 0xFA2BBA1 ^0xB0883B47
{
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (INTERIOR::IS_VALID_INTERIOR(interiorFromCollision))
			return 1;
	}

	return 0;
}

int func_10(var uParam0) // Position - 0x312 Hash - 0x67C31772 ^0x4E1D9047
{
	int i;
	Hash model;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		model = uParam0->f_3[i];
	
		if (model != 0)
			STREAMING::REQUEST_MODEL(model, false);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_11) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_11, true))
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_11);

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_11, "pblMain"))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_11, "pblMain"))
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_11, "pblMain");
	
		return 0;
	}

	return 1;
}

BOOL func_11(var uParam0) // Position - 0x3A7 Hash - 0x42D21902 ^0x3858C793
{
	int i;
	Hash model;

	for (i = 0; i < uParam0->f_3; i = i + 1)
	{
		model = uParam0->f_3[i];
	
		if (model != 0)
			if (!STREAMING::HAS_MODEL_LOADED(model))
				return false;
	}

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_11, true, false))
		return false;

	return true;
}

BOOL func_12(var uParam0) // Position - 0x3F8 Hash - 0x3A855729 ^0x3F033DFE
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_1, "register_open"))
		return false;

	return DECORATOR::DECOR_GET_BOOL(uParam0->f_1, "register_open");
}

void func_13(var uParam0) // Position - 0x42E Hash - 0x8FA35723 ^0xB7E2246A
{
	Vector3 offsetFromEntityInWorldCoords;

	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, 0.074814f, -0.117756f, 0.059386f) };
	uParam0->f_7[0] = OBJECT::CREATE_OBJECT(uParam0->f_3[0], offsetFromEntityInWorldCoords, true, true, false, false, true);
	TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_2, uParam0->f_7[0], "OOXO", true);
	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1, -0.082664f, -0.117757f, 0.059386f) };
	uParam0->f_7[1] = OBJECT::CREATE_OBJECT(uParam0->f_3[1], offsetFromEntityInWorldCoords, true, true, false, false, true);
	TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam0->f_2, uParam0->f_7[1], "OXOO", true);
	return;
}

void func_14(var uParam0) // Position - 0x4CA Hash - 0x1FC3F94E ^0xA518EEE5
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_11, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_1, 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OOXO", uParam0->f_7[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "OXOO", uParam0->f_7[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_11, "REGISTER", uParam0->f_1, 0);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_11);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_11, "pblMain", true);
	return;
}

BOOL func_15(AnimScene ansParam0) // Position - 0x538 Hash - 0x1956A549 ^0x3490599A
{
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansParam0) >= 1f)
		return true;

	return false;
}

BOOL func_16(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x550 Hash - 0x72D781CD ^0x8982B3E6
{
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam3 /*446*/].f_25))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam3 /*446*/].f_25, vParam0);
}

BOOL func_17(int iParam0) // Position - 0x586 Hash - 0x5A035327 ^0x5A035327
{
	int num;

	if (iParam0 > 25)
		return false;

	num = func_20(func_19(), iParam0);

	switch (num)
	{
		case 41:
		case 82:
			return true;
	}

	switch (iParam0)
	{
		case -1:
		case 1:
		case 2:
		case 4:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return false;
	}

	return true;
}

void func_18(var uParam0) // Position - 0x642 Hash - 0x86FD8689 ^0x1A6825BC
{
	uParam0->f_14 = 1;
	return;
}

eStackSize func_19() // Position - 0x64F Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_20(eStackSize essParam0, int iParam1) // Position - 0x65D Hash - 0x8A1A59F3 ^0x8A1A59F3
{
	if (iParam1 == 11)
		return 101;
	else if (iParam1 == 32)
		return 126;
	else if (iParam1 == 34)
		return 127;

	switch (essParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
			
				case 31:
					return 118;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
			
				case 6:
					return 143;
			
				case 26:
					return 142;
			
				case 27:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 39;
			
				case 1:
					return 46;
			
				case 2:
					return 45;
			
				case 3:
					return 42;
			
				case 4:
					return 41;
			
				case 6:
					return 43;
			
				case 7:
					return 47;
			
				case 8:
					return 37;
			
				case 9:
					return 44;
			
				case 10:
					return 38;
			
				case 12:
					return 48;
			
				case 13:
					return 49;
			
				case 14:
					return 50;
			
				case 15:
					return 36;
			
				case 18:
					return 55;
			
				case 21:
					return 54;
			
				case 22:
					return 51;
			
				case 29:
					return 109;
			
				case 30:
					return 110;
			
				case 31:
					return 111;
			
				case 33:
					return 52;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
			
				case 6:
					return 147;
			
				case 19:
					return 58;
			
				case 26:
					return 146;
			
				case 27:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 24;
			
				case 2:
					return 23;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 65;
			
				case 3:
					return 61;
			
				case 9:
					return 63;
			
				case 10:
					return 60;
			
				case 20:
					return 62;
			
				case 22:
					return 64;
			
				case 29:
					return 114;
			
				case 31:
					return 115;
			
				case 33:
					return 66;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 88;
			
				case 2:
					return 89;
			
				case 3:
					return 87;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 7;
			
				case 7:
					return 17;
			
				case 8:
					return 9;
			
				case 9:
					return 13;
			
				case 10:
					return 10;
			
				case 15:
					return 6;
			
				case 21:
					return 12;
			
				case 22:
					return 16;
			
				case 29:
					return 106;
			
				case 30:
					return 107;
			
				case 31:
					return 108;
			
				case 33:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
			
				default:
					break;
			}
			break;
	
		case 69:
			switch (iParam1)
			{
				case 1:
					return 21;
			
				case 2:
					return 20;
			
				case 3:
					return 19;
			
				case 4:
					return 18;
			
				case 31:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
			
				case 6:
					return 139;
			
				case 19:
					return 56;
			
				case 26:
					return 138;
			
				case 27:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 73;
			
				case 1:
					return 78;
			
				case 2:
					return 77;
			
				case 3:
					return 74;
			
				case 6:
					return 75;
			
				case 8:
					return 69;
			
				case 9:
					return 76;
			
				case 10:
					return 72;
			
				case 15:
					return 68;
			
				case 20:
					return 79;
			
				case 22:
					return 80;
			
				case 29:
					return 102;
			
				case 30:
					return 103;
			
				case 31:
					return 104;
			
				case 33:
					return 70;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 1:
					return 3;
			
				case 2:
					return 2;
			
				case 6:
					return 0;
			
				case 22:
					return 1;
			
				case 29:
					return 120;
			
				case 31:
					return 121;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
			
				case 6:
					return 130;
			
				case 19:
					return 59;
			
				case 26:
					return 129;
			
				case 27:
					return 131;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
			
				default:
					break;
			}
			break;
	
		case 90:
		case MICRO:
			switch (iParam1)
			{
				case 18:
					return 34;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 1:
					return 85;
			
				case 2:
					return 86;
			
				case 4:
					return 82;
			
				case 9:
					return 84;
			
				case 30:
					return 116;
			
				case 31:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
			
				case 6:
					return 134;
			
				case 19:
					return 57;
			
				case 26:
					return 133;
			
				case 27:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 1:
					return 31;
			
				case 2:
					return 30;
			
				case 3:
					return 28;
			
				case 4:
					return 27;
			
				case 6:
					return 29;
			
				case 10:
					return 26;
			
				case 15:
					return 25;
			
				case 22:
					return 32;
			
				case 29:
					return 112;
			
				case 31:
					return 113;
			
				case 33:
					return 33;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 3:
					return 90;
			
				case 6:
					return 91;
			
				case 9:
					return 94;
			
				case 10:
					return 92;
			
				case 33:
					return 93;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 99;
			
				case 31:
					return 123;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 2:
					return 96;
			
				case 3:
					return 95;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

