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

int func_1() // Position - 0xF6 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
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

int func_3(var uParam0) // Position - 0x1E7 Hash - 0x4A181B5A ^0x4A181B5A
{
	return 0;
}

int func_4(var uParam0) // Position - 0x1F0 Hash - 0x1962A750 ^0x1962A750
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

BOOL func_5(var uParam0) // Position - 0x299 Hash - 0x6533E173 ^0x796D4635
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED() || !TASK::DOES_SCENARIO_POINT_EXIST(*uParam0) || func_9())
		return true;

	return false;
}

BOOL func_6(var uParam0) // Position - 0x2C5 Hash - 0x233B400 ^0x15402EC
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

BOOL func_7(var uParam0, int iParam1) // Position - 0x3F0 Hash - 0x718DD1EF ^0x4F38D2B
{
	return uParam0->f_56 && iParam1 != false;
}

BOOL func_8(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x401 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

BOOL func_9() // Position - 0x456 Hash - 0x4228A1C2 ^0x52905D8B
{
	return Global_1900460.f_67;
}

BOOL func_10(var uParam0) // Position - 0x464 Hash - 0x7FC528CA ^0xCA175051
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

void func_11(var uParam0, int iParam1) // Position - 0x6D7 Hash - 0x4F8BE4B5 ^0x91329AFB
{
	uParam0->f_57 = iParam1;
	return;
}

BOOL func_12(var uParam0) // Position - 0x6E5 Hash - 0x6D9826A6 ^0x3B24066F
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

BOOL func_13(var uParam0) // Position - 0x73F Hash - 0x864F1249 ^0xDBAC5CD2
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

BOOL func_14(var uParam0) // Position - 0x7C2 Hash - 0x9DE00DB ^0x1D9FEEA5
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

	uParam0->f_42 = func_25(uParam0->f_38, vector, uParam0->f_4 + num, false, true, 0, true, true, true, false, false);
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

BOOL func_15(int iParam0, var uParam1) // Position - 0x8EE Hash - 0xE3F60577 ^0xD8BD364
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

BOOL func_16(var uParam0) // Position - 0x95B Hash - 0x8D2C9B2D ^0x6F8F15A7
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

BOOL func_17(var uParam0) // Position - 0x9BE Hash - 0xA8F68EE3 ^0x3D64ABDA
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

void func_18(var uParam0) // Position - 0xA7A Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_19(var uParam0) // Position - 0xA90 Hash - 0xAD5CBB0F ^0xD8291BAE
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

BOOL func_20(var uParam0) // Position - 0xB11 Hash - 0x6F5CDDD9 ^0x95B8B55B
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

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_49) && PED::IS_PED_USING_THIS_SCENARIO(Global_33, uParam0->f_49))
	{
		if (!func_7(uParam0, 8))
		{
			TASK::TASK_LOOK_AT_COORD(Global_33, func_24(uParam0), -1, 0, 21, false);
			func_22(uParam0, 8);
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1900650591))
			TASK::TASK_LOOK_AT_ENTITY(Global_33, uParam0->f_42, 5000, 0, 21, 0);
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1244474073))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_43, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_42, true);
			uParam0->f_44 = OBJECT::CREATE_OBJECT(joaat("p_carcasshanglrg02x"), uParam0->f_1, false, true, false, false, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, false, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_44, Global_33, 4, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, true, true, false, false, 0, true, 1065353216, 1065353216);
			func_22(uParam0, 1);
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2118990041))
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
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 519570738))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_44, true, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_44, true, false);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_43, false, false);
			func_22(uParam0, 4);
		}
	}
	else if (func_7(uParam0, 8) && !func_7(uParam0, 16))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_33);
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

BOOL func_21(var uParam0) // Position - 0xE2D Hash - 0x6B43F354 ^0xBC204D50
{
	Entity lootingPickupTar;
	int i;
	struct<3> eventData;

	if (!func_28(&(uParam0->f_52)))
	{
		if (PED::_0x758F081DB204DDDE(Global_33))
		{
			lootingPickupTar = PED::GET_LOOTING_PICKUP_TARGET_ENTITY(Global_33);
		
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
			
				if (eventData == Global_33 && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData.f_1) == uParam0->f_42)
					if (eventData.f_2)
						return true;
					else
						return true;
				else if (eventData == 0 || eventData.f_1 == 0)
					return true;
			}
		}
	}

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_42) == 5)
		return true;

	return false;
}

void func_22(var uParam0, int iParam1) // Position - 0xF0B Hash - 0x53A96DDB ^0xEE761242
{
	uParam0->f_56 = uParam0->f_56 || iParam1;
	return;
}

int func_23(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xF1E Hash - 0x56F0811C ^0x278FB5A
{
	return func_36(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

Vector3 func_24(var uParam0) // Position - 0xF34 Hash - 0x857DB0B1 ^0x333254E
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

Ped func_25(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Position - 0xF7C Hash - 0xA67C0C52 ^0xA10AD291
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, false, false);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_37(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_26(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFBC Hash - 0xC26AC0FE ^0xFF80BBA5
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			AUDIO::DISABLE_PED_PAIN_AUDIO(pedParam0, true);
	
		if (bParam2)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 243, true);
	
		Global_33 == pedParam0;
		ENTITY::SET_ENTITY_HEALTH(pedParam0, 0, 0);
	}

	return;
}

void func_27(var uParam0, BOOL bParam1) // Position - 0xFF8 Hash - 0xCFA4E681 ^0x5EF54FF0
{
	if (bParam1)
	{
	}

	PED::SET_LOOTING_FLAG(uParam0->f_42, 0, bParam1);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_42, 7, bParam1);
	return;
}

BOOL func_28(var uParam0) // Position - 0x101E Hash - 0x5001E582 ^0x5001E582
{
	return func_38(*uParam0, 1);
}

void func_29(var uParam0) // Position - 0x102E Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_39(uParam0, 0f);
	return;
}

BOOL func_30(var uParam0, float fParam1) // Position - 0x103D Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_28(uParam0))
		return false;

	if (func_40(uParam0) > fParam1)
		return true;

	return false;
}

void func_31(var uParam0) // Position - 0x1064 Hash - 0xAF52CCF9 ^0xC1520762
{
	int pedBoneIndex;
	int pedBoneIndex2;
	int boneIndex;
	int boneIndex2;
	Vector3 worldPositionOfEntityBone;
	Vector3 worldPositionOfEntityBone2;

	pedBoneIndex = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	pedBoneIndex2 = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_51);
	boneIndex = func_41(uParam0->f_39, 0);
	boneIndex2 = func_41(uParam0->f_39, 1);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, boneIndex) };
	worldPositionOfEntityBone2 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_43, boneIndex2) };
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, pedBoneIndex, boneIndex, worldPositionOfEntityBone, -1f, true, false, 0);
	PED::_0xE1AADD0055D76603(uParam0->f_42, uParam0->f_43, pedBoneIndex2, boneIndex2, worldPositionOfEntityBone2, -1f, true, false, 0);
	return;
}

void func_32(var uParam0) // Position - 0x10EA Hash - 0xFC70352 ^0xF9517A47
{
	int pedBoneIndex;
	int num;
	var unk;
	Vector3 vector;
	Vector3 vector2;

	pedBoneIndex = PED::GET_PED_BONE_INDEX(uParam0->f_42, uParam0->f_50);
	num = func_41(uParam0->f_39, 2);
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

void func_33(var uParam0) // Position - 0x11A9 Hash - 0x45C781F2 ^0xC187DB76
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

void func_34(var uParam0) // Position - 0x1290 Hash - 0x18836F5 ^0xBFDD4C52
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

void func_35(var uParam0) // Position - 0x131C Hash - 0x41889DF3 ^0xD7B76E2A
{
	int i;

	if (Global_1960018.f_31 > 9 || Global_1960018.f_31 < 0)
		Global_1960018.f_31 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_8(Global_1960018[i /*3*/], uParam0->f_1, 0.1f, false))
			return;
	}

	Global_1960018[Global_1960018.f_31 /*3*/] = { uParam0->f_1 };
	Global_1960018.f_31 = Global_1960018.f_31 + 1;
	return;
}

int func_36(Hash hParam0) // Position - 0x139A Hash - 0x50573299 ^0x50573299
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

void func_37(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1454 Hash - 0x81861438 ^0x93C66BE8
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (bParam5)
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
			func_42(pedParam0, false, true);
	
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
			func_43(pedParam0, false);
			flag = true;
		}
	
		func_44(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0x151E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_39(var uParam0, float fParam1) // Position - 0x152D Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_45() - fParam1;
	func_46(uParam0, 1);
	func_47(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_40(var uParam0) // Position - 0x1553 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_28(uParam0))
		return uParam0->f_1;

	if (func_48(uParam0))
		return uParam0->f_2;

	return func_45() - uParam0->f_1;
}

int func_41(int iParam0, int iParam1) // Position - 0x1588 Hash - 0x69BF8849 ^0x69BF8849
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

void func_42(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x161A Hash - 0x4FE4E8A8 ^0x44655508
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (bParam1)
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HATS"), 0, true);
	else
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_43(Ped pedParam0, BOOL bParam1) // Position - 0x165F Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_44(Ped pedParam0, int iParam1) // Position - 0x16A4 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

float func_45() // Position - 0x16CB Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_46(var uParam0, int iParam1) // Position - 0x16FD Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0x170E Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_48(var uParam0) // Position - 0x1723 Hash - 0x39705408 ^0x39705408
{
	return func_38(*uParam0, 2);
}

