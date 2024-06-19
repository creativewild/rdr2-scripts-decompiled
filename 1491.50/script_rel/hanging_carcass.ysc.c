#region Local Var
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x3B1029A8 ^0xFE2CFFA9
{
	int idOfThisThread;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1) || func_1() != -1)
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	idOfThisThread.f_40 = joaat("p_carcasshanglrg02x");
	idOfThisThread.f_41 = joaat("p_carcasshangmed01b");
	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	idOfThisThread.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };
	idOfThisThread.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(anScriptParam_0.f_1, true);
	idOfThisThread.f_43 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(TASK::_GET_SCENARIO_POINT_ENTITY(anScriptParam_0.f_1));
	idOfThisThread.f_39 = ENTITY::GET_ENTITY_MODEL(idOfThisThread.f_43);
	TEXT_LABEL_ASSIGN_STRING(&(idOfThisThread.f_22), "Dead_Hanging", 64);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&idOfThisThread, false);
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (func_3(&idOfThisThread) || func_4(&idOfThisThread))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_5(&(anScriptParam_0.f_1)) && !func_6(&idOfThisThread))
	{
		BUILTIN::WAIT(0);
	}

	func_2(&idOfThisThread, false);
	SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1() // Position - 0xF6 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_2(var uParam0, BOOL bParam1) // Position - 0x104 Hash - 0x8D510EB6 ^0x3A21B87
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_49))
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_49);

	if (bParam1)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_44))
		OBJECT::DELETE_OBJECT(&(uParam0->f_44));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_45))
		OBJECT::DELETE_OBJECT(&(uParam0->f_45));

	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_46))
		PHYSICS::DELETE_ROPE(&(uParam0->f_46));

	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_47))
		PHYSICS::DELETE_ROPE(&(uParam0->f_47));

	if (PHYSICS::DOES_ROPE_EXIST(uParam0->f_48))
		PHYSICS::DELETE_ROPE(&(uParam0->f_48));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_42))
	{
		if (func_7(uParam0, 256))
		{
			if (!func_7(uParam0, 32))
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 10000, 20000, 0, false, true, 0);
		
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_42));
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_42));
		}
	
		PED::_UNRESERVE_AMBIENT_PEDS(1);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_43))
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_43));

	return;
}

int func_3(var uParam0) // Position - 0x1E7 Hash - 0xDDD26BB5 ^0x707C8AC0
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_8(uParam0->f_1, Global_1425196[i /*3*/], 0.1f, false))
			return 1;
	}

	return 0;
}

int func_4(var uParam0) // Position - 0x224 Hash - 0x1962A750 ^0x1962A750
{
	int i;
	var unk;

	unk = 5;
	unk[0 /*3*/] = { -2844.586f, 133.7118f, 183.6223f };
	unk[1 /*3*/] = { -1008.624f, -544.7607f, 98.21857f };
	unk[2 /*3*/] = { 2074.396f, 996.5762f, 111.6177f };
	unk[3 /*3*/] = { 2832.0718f, -1226.9121f, 46.65f };
	unk[4 /*3*/] = { -2255.234f, -1914.754f, 116.158f };

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_8(unk[i /*3*/], uParam0->f_1, 5f, true))
			return 1;
	}

	return 0;
}

BOOL func_5(var uParam0) // Position - 0x2CD Hash - 0x6533E173 ^0x796D4635
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED() || !TASK::DOES_SCENARIO_POINT_EXIST(*uParam0) || func_9())
		return true;

	return false;
}

BOOL func_6(var uParam0) // Position - 0x2F9 Hash - 0x233B400 ^0x15402EC
{
	switch (uParam0->f_57)
	{
		case 0:
			if (func_10(uParam0))
				func_11(uParam0, 1);
			break;
	
		case 1:
			if (func_12(uParam0))
				func_11(uParam0, 2);
			break;
	
		case 2:
			if (func_13(uParam0))
				func_11(uParam0, 3);
			break;
	
		case 3:
			if (func_14(uParam0))
				if (func_15(3, uParam0))
					func_11(uParam0, 5);
				else
					func_11(uParam0, 4);
			break;
	
		case 4:
			if (func_16(uParam0))
				func_11(uParam0, 5);
			break;
	
		case 5:
			if (func_17(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 6);
			}
			break;
	
		case 6:
			if (func_19(uParam0))
				func_11(uParam0, 7);
			break;
	
		case 7:
			if (func_20(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 8);
			}
			break;
	
		case 8:
			if (func_21(uParam0))
			{
				func_18(&(uParam0->f_52));
				func_11(uParam0, 9);
			}
			break;
	
		case 9:
			break;
	}

	return false;
}

BOOL func_7(var uParam0, int iParam1) // Position - 0x424 Hash - 0x718DD1EF ^0x4F38D2B
{
	return uParam0->f_56 && iParam1 != false;
}

BOOL func_8(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x435 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

BOOL func_9() // Position - 0x48A Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_10(var uParam0) // Position - 0x498 Hash - 0x7FC528CA ^0xCA175051
{
	var unk;
	var unk4;
	var unk7;
	int randomIntInRange;

	unk = { 799.362f, 1512.22f, 203.6078f };
	unk4 = { 2558f, 795f, 75f };
	unk7 = { -754f, -1284.5f, 42.75f };

	if (func_8(uParam0->f_1, unk4, 60f, true))
	{
		func_22(uParam0, 128);
		func_22(uParam0, 64);
	}

	if (func_8(uParam0->f_1, unk7, 10f, true))
		func_22(uParam0, 64);

	switch (uParam0->f_39)
	{
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangmed01x"):
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		
			if (uParam0->f_39 == joaat("p_carcasshangmed01x"))
				if (func_7(uParam0, 128))
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				else
					randomIntInRange = 1;
		
			switch (randomIntInRange)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "CREATURES_MAMMAL@FOX@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_fox_01");
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_30), "PD_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "CREATURES_MAMMAL@RABBIT@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("A_C_Rabbit_01");
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_30), "PD_Ex_Small_aged_carcass_Hvy", 64);
					uParam0->f_55 = 1;
					uParam0->f_50 = 33646;
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "CREATURES_BIRD@DUCK@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_duck_01");
					uParam0->f_55 = 1;
					uParam0->f_50 = 14285;
					break;
			}
			break;
	
		case joaat("p_carcasshanglrg01x"):
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
			switch (func_23(uParam0->f_1))
			{
				case 0:
				case 2:
				case 4:
				case 9:
				case 11:
					randomIntInRange = 0;
					break;
			}
		
			if (func_8(uParam0->f_1, unk, 10f, true))
				randomIntInRange = 1;
		
			if (func_7(uParam0, 128))
				randomIntInRange = 0;
		
			switch (randomIntInRange)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "CREATURES_MAMMAL@DEER@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_deer_01");
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_30), "PD_Deer_aged_carcass_Hvy", 64);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14), "CREATURES_MAMMAL@WOLF_MEDIUM@NORMAL@DEAD", 64);
					uParam0->f_38 = joaat("a_c_wolf_medium");
					break;
			}
		
			uParam0->f_50 = 45454;
			uParam0->f_51 = 33646;
			uParam0->f_55 = 0;
			break;
	
		case joaat("p_carcasshangfish01a"):
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
			switch (randomIntInRange)
			{
				case 0:
					uParam0->f_38 = joaat("a_c_fishrainbowtrout_01_ms");
					break;
			
				case 1:
					uParam0->f_38 = joaat("a_c_fishsalmonsockeye_01_ms");
					break;
			}
		
			uParam0->f_55 = 3;
			break;
	
		case joaat("p_carcasshangsml01x"):
			break;
	}

	return true;
}

void func_11(var uParam0, int iParam1) // Position - 0x70B Hash - 0x4F8BE4B5 ^0x91329AFB
{
	uParam0->f_57 = iParam1;
	return;
}

BOOL func_12(var uParam0) // Position - 0x719 Hash - 0x6D9826A6 ^0x3B24066F
{
	STREAMING::REQUEST_MODEL(uParam0->f_39, false);
	STREAMING::REQUEST_MODEL(uParam0->f_38, false);
	PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);

	if (func_15(0, uParam0))
		STREAMING::REQUEST_MODEL(uParam0->f_40, false);

	if (func_15(1, uParam0))
		STREAMING::REQUEST_MODEL(uParam0->f_41, false);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
		STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_14));

	return true;
}

BOOL func_13(var uParam0) // Position - 0x773 Hash - 0x864F1249 ^0xDBAC5CD2
{
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_39) || !STREAMING::HAS_MODEL_LOADED(uParam0->f_38) || !PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	if (func_15(0, uParam0))
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_40))
			return false;

	if (func_15(1, uParam0))
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_41))
			return false;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_14)))
			return false;

	return true;
}

BOOL func_14(var uParam0) // Position - 0x7F6 Hash - 0x9DE00DB ^0x1D9FEEA5
{
	float num;
	Vector3 vector;

	num = -90f;
	vector = { uParam0->f_1 };
	OBJECT::CREATE_OBJECT_SKELETON(uParam0->f_43);

	if (func_15(3, uParam0))
		vector = { func_24(uParam0) };

	if (func_15(1, uParam0))
	{
		uParam0->f_45 = OBJECT::CREATE_OBJECT(uParam0->f_41, vector, false, true, false, false, false);
		OBJECT::CREATE_OBJECT_SKELETON(uParam0->f_45);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_45, false, false);
	}

	uParam0->f_42 = func_25(uParam0->f_38, vector, uParam0->f_4 + num, false, true, 0, true, true, true, false, false, false, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_42, true);
	PED::_SET_PED_SCALE(uParam0->f_42, 1f);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 186, false);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_42, 243, true);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam0->f_42, uParam0->f_42, false);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, false, false);
	OBJECT::CREATE_OBJECT_SKELETON(uParam0->f_43);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_43, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);

	if (func_15(3, uParam0))
	{
		func_26(uParam0->f_42, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}

	if (func_7(uParam0, 128))
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_30)))
			PED::APPLY_PED_DAMAGE_PACK(uParam0->f_42, &(uParam0->f_30), 0f, 1f);

	func_27(uParam0, false);
	return true;
}

BOOL func_15(int iParam0, var uParam1) // Position - 0x924 Hash - 0xE3F60577 ^0xD8BD364
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_39 == joaat("p_carcasshanglrg01x");
	
		case 1:
			return uParam1->f_39 == joaat("p_carcasshangmed01x") || uParam1->f_39 == joaat("p_carcasshangmed01a");
	
		case 2:
			return uParam1->f_39 == joaat("p_carcasshangsml01x");
	
		case 3:
			return uParam1->f_39 == joaat("p_carcasshangfish01a");
	
		default:
		
	}

	return false;
}

BOOL func_16(var uParam0) // Position - 0x991 Hash - 0x8D2C9B2D ^0x6F8F15A7
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_14)))
	{
		TASK::TASK_PLAY_ANIM(uParam0->f_42, &(uParam0->f_14), &(uParam0->f_22), 1000f, -1000f, -1, 131072, 0, false, 0, false, 0, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, true);
	}
	else
	{
		func_26(uParam0->f_42, true, true);
	}

	if (func_15(1, uParam0))
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, true);

	return true;
}

BOOL func_17(var uParam0) // Position - 0x9F4 Hash - 0xA8F68EE3 ^0x3D64ABDA
{
	if (!func_28(&(uParam0->f_52)))
	{
		func_29(&(uParam0->f_52));
		uParam0->f_5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2f);
	}

	if (func_30(&(uParam0->f_52), uParam0->f_5))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_42))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_42, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_42, true, false);
		
			switch (uParam0->f_55)
			{
				case 0:
					func_31(uParam0);
					break;
			
				case 1:
				case 2:
				case 3:
					func_32(uParam0);
					break;
			}
		
			if (func_15(1, uParam0) || func_15(3, uParam0))
			{
				if (func_15(1, uParam0))
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_45, false);
			
				func_33(uParam0);
			}
		
			return true;
		}
	}

	return false;
}

void func_18(var uParam0) // Position - 0xAB0 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_19(var uParam0) // Position - 0xAC6 Hash - 0xAD5CBB0F ^0xD8291BAE
{
	BOOL flag;

	flag = false;

	if (func_7(uParam0, 64))
	{
		flag = true;
	}
	else if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_49))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42) || PED::_0x7020839C7302D8AC(uParam0->f_42) || PHYSICS::DOES_ROPE_EXIST(uParam0->f_46) && !PHYSICS::_IS_ROPE_BROKEN(uParam0->f_46))
		{
			func_34(uParam0);
			flag = true;
		}
	}

	if (flag)
		PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, 0);

	return flag;
}

BOOL func_20(var uParam0) // Position - 0xB47 Hash - 0x6F5CDDD9 ^0x95B8B55B
{
	if (func_15(0, uParam0))
	{
		if (!func_7(uParam0, 256))
		{
			if (PED::_HAS_PED_TAKEN_GORE_DAMAGE(uParam0->f_42, 10) || PED::_HAS_PED_TAKEN_GORE_DAMAGE(uParam0->f_42, 13))
			{
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
				PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, 0);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
				func_35(uParam0);
				func_2(uParam0, true);
				func_22(uParam0, 256);
				return true;
			}
		}
	}

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_49) && PED::IS_PED_USING_THIS_SCENARIO(Global_35, uParam0->f_49))
	{
		if (!func_7(uParam0, 8))
		{
			TASK::TASK_LOOK_AT_COORD(Global_35, func_24(uParam0), -1, 0, 21, false);
			func_22(uParam0, 8);
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1900650591))
			TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_42, 5000, 0, 21, 0);
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1244474073))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
			uParam0->f_44 = OBJECT::CREATE_OBJECT(joaat("p_carcasshanglrg02x"), uParam0->f_1, false, true, false, false, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, false, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_44, Global_35, 4, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, true, true, false, false, 0, true, 1065353216, 1065353216);
			func_22(uParam0, 1);
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2118990041))
		{
			if (func_15(1, uParam0))
				PHYSICS::_BREAK_ROPE(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.1f, 0.2f, 0.1f, -1);
			else if (func_15(3, uParam0))
				PHYSICS::_BREAK_ROPE(&(uParam0->f_46), &(uParam0->f_47), &(uParam0->f_48), 0.001f, 0.199f, 0.001f, -1);
			else
				PED::_0x5A1A929C8B729B4A(uParam0->f_42);
		
			func_22(uParam0, 4);
			return false;
		}
	
		if (func_7(uParam0, 4) && !func_7(uParam0, 32))
		{
			PED::SET_PED_TO_RAGDOLL(uParam0->f_42, 1000, 60000, 0, false, true, 0);
			func_27(uParam0, true);
			func_22(uParam0, 32);
			func_35(uParam0);
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 519570738))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_44, true, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, true, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
			func_22(uParam0, 4);
		}
	}
	else if (func_7(uParam0, 8) && !func_7(uParam0, 16))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
		func_2(uParam0, true);
		func_22(uParam0, 16);
		func_22(uParam0, 256);
		return true;
	}
	else if (!PED::_0x7020839C7302D8AC(uParam0->f_42) && !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_42) && func_15(1, uParam0) || func_15(3, uParam0) && PHYSICS::_IS_ROPE_BROKEN(uParam0->f_46))
	{
		if (func_7(uParam0, 128))
		{
			MISC::SET_PED_DECOMPOSED(uParam0->f_42, true);
			func_27(uParam0, true);
		}
	
		if (!func_7(uParam0, 64))
			func_27(uParam0, true);
	
		func_22(uParam0, 256);
		func_35(uParam0);
		func_2(uParam0, true);
		return true;
	}

	return false;
}

BOOL func_21(var uParam0) // Position - 0xE63 Hash - 0x6B43F354 ^0xBC204D50
{
	Entity lootingPickupTar;
	int i;
	struct<3> eventData;

	if (!func_28(&(uParam0->f_52)))
	{
		if (PED::_0x758F081DB204DDDE(Global_35))
		{
			lootingPickupTar = PED::GET_LOOTING_PICKUP_TARGET_ENTITY(Global_35);
		
			if (ENTITY::DOES_ENTITY_EXIST(lootingPickupTar) && ENTITY::IS_ENTITY_A_PED(lootingPickupTar) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(lootingPickupTar) == uParam0->f_42)
				func_29(&(uParam0->f_52));
		}
	}
	else
	{
		for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i) == 1376140891)
			{
				SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 3);
			
				if (eventData == Global_35 && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1) == uParam0->f_42)
				{
					if (eventData.f_2)
					{
						func_36(2, joaat("honor_event_theft"), 0, 0, 0, false, 1065353216, false);
						return true;
					}
					else
					{
						return true;
					}
				}
				else if (eventData == 0 || eventData.f_1 == 0)
				{
					return true;
				}
			}
		}
	}

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_42) == 5)
	{
		func_36(2, joaat("honor_event_theft"), 0, 0, 0, false, 1065353216, false);
		return true;
	}

	return false;
}

void func_22(var uParam0, int iParam1) // Position - 0xF69 Hash - 0x53A96DDB ^0xEE761242
{
	uParam0->f_56 = uParam0->f_56 || iParam1;
	return;
}

int func_23(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xF7C Hash - 0x56F0811C ^0x278FB5A
{
	return func_37(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Vector3 func_24(var uParam0) // Position - 0xF92 Hash - 0x857DB0B1 ^0x333254E
{
	var worldPositionOfEntityBone;
	int boneIndex;

	switch (uParam0->f_39)
	{
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangmed01x"):
		case joaat("p_carcasshangfish01a"):
			boneIndex = 4;
			break;
	
		case joaat("p_carcasshanglrg01x"):
			boneIndex = 4;
			break;
	}

	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, boneIndex) };
	return worldPositionOfEntityBone;
}

Ped func_25(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0xFDA Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_38(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_26(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x101C Hash - 0xC26AC0FE ^0xFF80BBA5
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			AUDIO::DISABLE_PED_PAIN_AUDIO(pedParam0, true);
	
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 243, true);
	
		Global_35 == pedParam0;
		ENTITY::SET_ENTITY_HEALTH(pedParam0, 0, 0);
	}

	return;
}

void func_27(var uParam0, BOOL bParam1) // Position - 0x1058 Hash - 0xCFA4E681 ^0x5EF54FF0
{
	if (bParam1)
	{
	}

	PED::SET_LOOTING_FLAG(uParam0->f_42, 0, bParam1);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_42, 7, bParam1);
	return;
}

BOOL func_28(var uParam0) // Position - 0x107E Hash - 0x5001E582 ^0x5001E582
{
	return func_39(*uParam0, 1);
}

void func_29(var uParam0) // Position - 0x108E Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_40(uParam0, 0f);
	return;
}

BOOL func_30(var uParam0, float fParam1) // Position - 0x109D Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_28(uParam0))
		return false;

	if (func_41(uParam0) > fParam1)
		return true;

	return false;
}

void func_31(var uParam0) // Position - 0x10C4 Hash - 0xAF52CCF9 ^0xC1520762
{
	int pedBoneIndex;
	int pedBoneIndex2;
	int boneIndex;
	int boneIndex2;
	Vector3 worldPositionOfEntityBone;
	Vector3 worldPositionOfEntityBone2;

	pedBoneIndex = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	pedBoneIndex2 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_51);
	boneIndex = func_42(uParam0->f_39, 0);
	boneIndex2 = func_42(uParam0->f_39, 1);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, boneIndex) };
	worldPositionOfEntityBone2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, boneIndex2) };
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, pedBoneIndex, boneIndex, worldPositionOfEntityBone, -1f, true, false, 0);
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, pedBoneIndex2, boneIndex2, worldPositionOfEntityBone2, -1f, true, false, 0);
	return;
}

void func_32(var uParam0) // Position - 0x114A Hash - 0xFC70352 ^0xF9517A47
{
	int pedBoneIndex;
	int num;
	var unk;
	Vector3 vector;
	Vector3 vector2;

	pedBoneIndex = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	num = func_42(uParam0->f_39, 2);
	unk = { 0f, 0f, 0f };
	vector = { 0f, 0f, 0f };
	vector2 = { 0f, 90f, 0f };

	switch (uParam0->f_38)
	{
		case joaat("A_C_Rabbit_01"):
			unk = { -0.0125f, 0f, -0.025f };
			vector2 = { 0f, 90f, 0f };
			break;
	
		case joaat("a_c_fox_01"):
			vector = { -0.0125f, -0.03f, 0.0125f };
			vector2 = { 90f, 0f, 90f };
			break;
	}

	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_45, uParam0->f_42, num, pedBoneIndex, vector, unk, vector2, -1f, false, true, false, false, 0, true, 1065353216, 1065353216);
	return;
}

void func_33(var uParam0) // Position - 0x1209 Hash - 0x45C781F2 ^0xC187DB76
{
	int ropeType;
	float length;

	if (func_15(3, uParam0))
	{
		ropeType = 8;
		length = 0.2f;
	}
	else
	{
		ropeType = 1;
		length = 0.3f;
	}

	uParam0->f_46 = PHYSICS::_ADD_ROPE_2(uParam0->f_1, 0f, 0f, 0f, length, ropeType, false, 1, -1082130432);

	if (func_15(3, uParam0))
		PHYSICS::_ATTACH_ENTITES_TO_ROPE_3(uParam0->f_46, uParam0->f_43, uParam0->f_42, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 32157);
	else
		PHYSICS::_ATTACH_ENTITES_TO_ROPE_3(uParam0->f_46, uParam0->f_43, uParam0->f_45, 0f, 0f, 0f, 0f, 0f, 0f, 33567, 33568);

	PHYSICS::_CREATE_ROPE_WINDING_ABILITY(uParam0->f_46, 0, 0, length, true);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_46, "ROPE_SETTINGS_DEFAULT");
	PHYSICS::_ROPE_CHANGE_VISIBILITY(&(uParam0->f_46), true);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_46, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_46, 1f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_46, true);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_46, true);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_46, 1, 1);
	AUDIO::_0x2651DDC0EA269073(uParam0->f_46, 1f);
	return;
}

void func_34(var uParam0) // Position - 0x12F0 Hash - 0x18836F5 ^0xBFDD4C52
{
	Hash scenarioHash;
	Vector3 vector;

	scenarioHash = 0;
	vector = { 0f, 0f, 0f };

	switch (uParam0->f_39)
	{
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangfish01a"):
			scenarioHash = joaat("world_player_carcass_cut_1m80");
			vector = { -0.1f, -0.61f, 0f };
			break;
	
		case joaat("p_carcasshanglrg01x"):
			scenarioHash = joaat("world_player_carcass_peg_2m15");
			vector = { 0.155f, -0.9f, 0f };
			break;
	}

	if (scenarioHash != 0)
		uParam0->f_49 = TASK::CREATE_SCENARIO_POINT_HASH(scenarioHash, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_1, uParam0->f_4, vector), uParam0->f_4, 0, 0, false);

	return;
}

void func_35(var uParam0) // Position - 0x137C Hash - 0x41889DF3 ^0xD7B76E2A
{
	int i;

	if (Global_1425196.f_31 > 9 || Global_1425196.f_31 < 0)
		Global_1425196.f_31 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_8(Global_1425196[i /*3*/], uParam0->f_1, 0.1f, false))
			return;
	}

	Global_1425196[Global_1425196.f_31 /*3*/] = { uParam0->f_1 };
	Global_1425196.f_31 = Global_1425196.f_31 + 1;
	return;
}

void func_36(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x13FA Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_1() != -1)
		return;

	if (Global_36616 && func_43(iParam1) != false)
		return;

	num = func_44(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_45(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
	}
	else
	{
		num2 = -1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (num2 < 0)
				if (Global_1347477.f_155[i /*6*/] == 0)
					num2 = i;
		}
	
		if (num2 >= 0)
			func_46(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_45(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

int func_37(Hash hParam0) // Position - 0x14F9 Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

void func_38(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x15B3 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_47(eptParam1))
		{
			func_48(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_49(pedParam0, 0, true);
	
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
			func_50(pedParam0, false);
			flag = true;
		}
	
		func_51(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x1694 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_40(var uParam0, float fParam1) // Position - 0x16A3 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_52() - fParam1;
	func_53(uParam0, 1);
	func_54(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_41(var uParam0) // Position - 0x16C9 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_28(uParam0))
		return uParam0->f_1;

	if (func_55(uParam0))
		return uParam0->f_2;

	return func_52() - uParam0->f_1;
}

int func_42(int iParam0, int iParam1) // Position - 0x16FE Hash - 0x69BF8849 ^0x69BF8849
{
	switch (iParam0)
	{
		case joaat("p_carcasshangmed01a"):
		case joaat("p_carcasshangmed01x"):
		case joaat("p_carcasshangfish01a"):
			if (iParam1 == 3)
				return 2;
		
			if (iParam1 == 2)
				return 4;
		
			if (iParam1 == 0)
				return 5;
		
			if (iParam1 == 1)
				return 6;
			break;
	
		case joaat("p_carcasshanglrg01x"):
			if (iParam1 == 0)
				return 4;
		
			if (iParam1 == 1)
				return 5;
			break;
	
		case joaat("p_carcasshangsml01x"):
			if (iParam1 == 2)
				return 6;
		
			if (iParam1 == 0)
				return 4;
		
			if (iParam1 == 1)
				return 6;
			break;
	}

	return 4;
}

BOOL func_43(int iParam0) // Position - 0x1790 Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_44(int iParam0) // Position - 0x18A6 Hash - 0xC25EDEC0 ^0x47BF4274
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return -2;
	
		case 2:
			return -5;
	
		case 3:
			return -10;
	
		case 4:
			return -20;
	
		case 5:
			return -40;
	
		case 6:
			return -160;
	
		case 7:
			return -320;
	
		case 8:
			return -480;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 5;
	
		case 13:
			return 10;
	
		case 14:
			return 20;
	
		case 15:
			return 40;
	
		case 16:
			return 160;
	
		case 17:
			return 640;
	
		case 18:
			return -640;
	
		default:
		
	}

	return 0;
}

void func_45(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x198D Hash - 0x9A51185A ^0x84DCD6A5
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;
	int num7;
	char* str;
	var statId;

	num = func_56();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_57(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(eParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(eParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(eParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_58(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_59())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_60(Global_40.f_11095.f_35, num4, num3);
	num2 = func_56();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_61(num2);
		func_63(func_62(), false, 4000);
		func_64(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_65(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_67(func_66(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_44(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_67(func_66(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_44(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_69(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_66(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_70(10, 1);

	return;
}

void func_46(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x1D32 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

BOOL func_47(ePedType eptParam0) // Position - 0x1D91 Hash - 0x5000025C ^0x5000025C
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

void func_48(Ped pedParam0, Hash hParam1) // Position - 0x21E4 Hash - 0xEA1C858E ^0xE99CD845
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_71(pedParam0, hParam1))
		{
			if (func_72(pedParam0, hParam1))
			{
				if (func_73(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_74(pedParam0);
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

void func_49(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x228E Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_50(Ped pedParam0, BOOL bParam1) // Position - 0x22BE Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_51(Ped pedParam0, int iParam1) // Position - 0x2303 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

float func_52() // Position - 0x232A Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_53(var uParam0, int iParam1) // Position - 0x235C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_54(var uParam0, int iParam1) // Position - 0x236D Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_55(var uParam0) // Position - 0x2382 Hash - 0x39705408 ^0x39705408
{
	return func_39(*uParam0, 2);
}

int func_56() // Position - 0x2392 Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_75();

	if (num <= -320)
		return -320;

	if (num <= -280)
		return -280;

	if (num <= -240)
		return -240;

	if (num <= -200)
		return -200;

	if (num <= -160)
		return -160;

	if (num <= -120)
		return -120;

	if (num <= -80)
		return -80;

	if (num <= -40)
		return -40;

	if (num >= 320)
		return 320;

	if (num >= 280)
		return 280;

	if (num >= 240)
		return 240;

	if (num >= 200)
		return 200;

	if (num >= 160)
		return 160;

	if (num >= 120)
		return 120;

	if (num >= 80)
		return 80;

	if (num >= 40)
		return 40;

	return 0;
}

int func_57(int iParam0) // Position - 0x24A5 Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_1() != -1)
		return iParam0;

	if (Global_1347477.f_2 + 120000 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}

	num = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3 = Global_1347477.f_3 + 1;

	if (Global_1347477.f_3 >= 10)
		num = 2f;
	else if (Global_1347477.f_3 >= 3)
		num = 1.5f;

	value = BUILTIN::TO_FLOAT(iParam0) * num;
	value = MISC::ABSF(value) < 1f ? value < 0f ? -1f : 1f : value;
	return BUILTIN::CEIL(value);
}

BOOL func_58(int iParam0) // Position - 0x254A Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_77(iParam0))
		return false;

	return func_78(iParam0);
}

BOOL func_59() // Position - 0x2566 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_1() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_60(int iParam0, int iParam1, int iParam2) // Position - 0x258B Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_61(int iParam0) // Position - 0x25B0 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case -320:
		case 320:
			return 8;
	
		case -280:
		case 280:
			return 7;
	
		case -240:
		case 240:
			return 6;
	
		case -200:
		case 200:
			return 5;
	
		case -160:
		case 160:
			return 4;
	
		case -120:
		case 120:
			return 3;
	
		case -80:
		case 80:
			return 2;
	
		case -40:
		case 40:
			return 1;
	
		case 0:
			return 0;
	}

	return 0;
}

Hash func_62() // Position - 0x2667 Hash - 0xA46C8CCA ^0x71ABACD2
{
	if (Global_40.f_11095.f_35 <= -320)
		return 1;
	else if (Global_40.f_11095.f_35 <= -280)
		return 2;
	else if (Global_40.f_11095.f_35 <= -240)
		return 3;
	else if (Global_40.f_11095.f_35 <= -200)
		return 4;
	else if (Global_40.f_11095.f_35 <= -160)
		return 5;
	else if (Global_40.f_11095.f_35 <= -120)
		return 6;
	else if (Global_40.f_11095.f_35 <= -80)
		return 7;
	else if (Global_40.f_11095.f_35 < 0)
		return 8;
	else if (Global_40.f_11095.f_35 <= 40)
		return 9;
	else if (Global_40.f_11095.f_35 >= 320)
		return 16;
	else if (Global_40.f_11095.f_35 >= 280)
		return 15;
	else if (Global_40.f_11095.f_35 >= 240)
		return 14;
	else if (Global_40.f_11095.f_35 >= 200)
		return 13;
	else if (Global_40.f_11095.f_35 >= 160)
		return 12;
	else if (Global_40.f_11095.f_35 >= 120)
		return 11;
	else if (Global_40.f_11095.f_35 >= 80)
		return 10;

	return 9;
}

void func_63(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x27BF Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_79(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_80(hParam0);
	return;
}

void func_64(int iParam0) // Position - 0x27EB Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_81(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_65(BOOL bParam0) // Position - 0x284F Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_82(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_83(i, &hash, &num))
			{
				if (!func_84(hash, 0))
				{
				}
				else
				{
					unlockHash = func_85(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_86(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_56() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_56() >= 160;
					else
						flag = num == func_87();
				
					if (flag)
					{
						UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
						flag = false;
					}
				}
			}
		}
	}

	return;
}

struct<2> func_66(int iParam0) // Position - 0x2910 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_67(var uParam0, var uParam1, int iParam2) // Position - 0x2920 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x2930 Hash - 0xA17D549C ^0x33A45CC3
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
	
		case joaat("honor_event_antagonize"):
			return "HONOR_EVENT_ANTAGONIZE";
	
		case joaat("honor_event_cruel_death"):
			return "HONOR_EVENT_CRUEL_DEATH";
	
		case joaat("honor_event_cheat"):
			return "HONOR_EVENT_CHEAT";
	
		case joaat("honor_event_steal_wagon"):
			return "HONOR_EVENT_STEAL_WAGON";
	
		case joaat("honor_event_trampled_innocent"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
	
		case joaat("honor_event_kill_vermin"):
			return "HONOR_EVENT_KILL_VERMIN";
	
		case joaat("honor_event_kill_farm_animal"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
	
		case joaat("honor_event_long_absence"):
			return "HONOR_EVENT_LONG_ABSENCE";
	
		case joaat("honor_event_wanted_in_camp"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
	
		case joaat("honor_event_animal_bleedout"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
	
		case joaat("honor_event_steal_mule"):
			return "HONOR_EVENT_STEAL_MULE";
	
		case joaat("honor_event_theft"):
			return "HONOR_EVENT_THEFT";
	
		case joaat("honor_event_kill_horse"):
			return "HONOR_EVENT_KILL_HORSE";
	
		case joaat("honor_event_justice_served"):
			return "HONOR_EVENT_JUSTICE_SERVED";
	
		case joaat("honor_event_steal_donkey"):
			return "HONOR_EVENT_STEAL_DONKEY";
	
		case joaat("honor_event_steal_horse"):
			return "HONOR_EVENT_STEAL_HORSE";
	
		case joaat("honor_event_ambient_kill"):
			return "HONOR_EVENT_AMBIENT_KILL";
	
		case joaat("honor_event_item_request"):
			return "HONOR_EVENT_ITEM_REQUEST";
	
		case joaat("honor_event_ambient_ko"):
			return "HONOR_EVENT_AMBIENT_KO";
	
		case joaat("honor_event_intervened"):
			return "HONOR_EVENT_INTERVENED";
	
		case joaat("honor_event_scare"):
			return "HONOR_EVENT_SCARE";
	
		case joaat("honor_event_donated_game"):
			return "HONOR_EVENT_DONATED_GAME";
	
		case joaat("honor_event_loot_innocent"):
			return "HONOR_EVENT_LOOT_INNOCENT";
	
		default:
		
	}

	return "";
}

int func_69(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x2A7C Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_88(sParam0, sParam1, hParam2);
	return num2;
}

int func_70(int iParam0, int iParam1) // Position - 0x2ADF Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_89(iParam0))
		return 0;

	if (!func_90())
		return 0;

	if (!func_91(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_71(Ped pedParam0, Hash hParam1) // Position - 0x2B3A Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_72(Ped pedParam0, Hash hParam1) // Position - 0x2B68 Hash - 0xA54F3032 ^0x6ADB02F
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

BOOL func_73(Ped pedParam0, Hash hParam1) // Position - 0x2BB9 Hash - 0xA54F3032 ^0x6ADB02F
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_71(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_74(Ped pedParam0) // Position - 0x2C2B Hash - 0x446F1BDD ^0x33B0687A
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

int func_75() // Position - 0x2C49 Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_76(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2C59 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_77(int iParam0) // Position - 0x2C70 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_78(int iParam0) // Position - 0x2C83 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_79(int iParam0, BOOL bParam1) // Position - 0x2CAD Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_92(bParam1);

	return;
}

void func_80(Hash hParam0) // Position - 0x2CC8 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_81(int iParam0) // Position - 0x2CDB Hash - 0x8FB6A40C ^0xC0EE9BEE
{
	if (iParam0 <= -320)
		return "HONOR_BAD_8";
	else if (iParam0 <= -280)
		return "HONOR_BAD_7";
	else if (iParam0 <= -240)
		return "HONOR_BAD_6";
	else if (iParam0 <= -200)
		return "HONOR_BAD_5";
	else if (iParam0 <= -160)
		return "HONOR_BAD_4";
	else if (iParam0 <= -120)
		return "HONOR_BAD_3";
	else if (iParam0 <= -80)
		return "HONOR_BAD_2";
	else if (iParam0 < 0)
		return "HONOR_BAD_1";
	else if (iParam0 <= 40)
		return "HONOR_GOOD_1";
	else if (iParam0 >= 320)
		return "HONOR_GOOD_8";
	else if (iParam0 >= 280)
		return "HONOR_GOOD_7";
	else if (iParam0 >= 240)
		return "HONOR_GOOD_6";
	else if (iParam0 >= 200)
		return "HONOR_GOOD_5";
	else if (iParam0 >= 160)
		return "HONOR_GOOD_4";
	else if (iParam0 >= 120)
		return "HONOR_GOOD_3";
	else if (iParam0 >= 80)
		return "HONOR_GOOD_2";

	return "HONOR_GOOD_1";
}

BOOL func_82(var uParam0) // Position - 0x2DFC Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_93(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -2103982008;
		*uParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
		return true;
	}

	return false;
}

BOOL func_83(int iParam0, var uParam1, var uParam2) // Position - 0x2E44 Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_93(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -57097983;
		unk.f_3 = iParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam1 = unk6;
			unk.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

BOOL func_84(Hash hParam0, int iParam1) // Position - 0x2EC4 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_85(Hash hParam0) // Position - 0x2EDE Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_86(Hash hParam0) // Position - 0x2EE8 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_84(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

int func_87() // Position - 0x2F13 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_56();

	switch (num)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
	
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
	
		default:
		
	}

	return joaat("SHOP_HONOR_AMORAL");
}

void func_88(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x2F62 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_89(int iParam0) // Position - 0x2F93 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_90() // Position - 0x2FB2 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_91(int iParam0, var uParam1, var uParam2) // Position - 0x2FD1 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_89(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

void func_92(BOOL bParam0) // Position - 0x31A0 Hash - 0x970FE035 ^0x92589DF6
{
	func_94(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_93(int iParam0, var uParam1) // Position - 0x31D3 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_95(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

void func_94(BOOL bParam0) // Position - 0x3200 Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_95(int iParam0) // Position - 0x3213 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

