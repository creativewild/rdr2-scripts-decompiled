#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	BOOL bLocal_5 = 0;
	float fLocal_6 = 0f;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE11E8660 ^0xE1C2806D
{
	bLocal_0 = 1;
	anLocal_2 = anScriptParam_0;
	iLocal_3 = anScriptParam_0.f_1;
	uLocal_4 = anScriptParam_0.f_2;
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
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x83 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
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

void func_6() // Position - 0x10C Hash - 0xD6D286F6 ^0x7D4440A6
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3))
		bLocal_0 = false;

	if (bLocal_5)
		if (!ENTITY::DOES_ENTITY_EXIST(fLocal_6.f_3))
			bLocal_0 = false;
		else if (PED::IS_PED_DEAD_OR_DYING(fLocal_6.f_3, true))
			bLocal_0 = false;
		else if (!PED::IS_PED_USING_THIS_SCENARIO(fLocal_6.f_3, iLocal_3))
			bLocal_0 = false;

	if (!bLocal_0)
		return;

	switch (fLocal_6.f_7)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(fLocal_6.f_3))
			{
				fLocal_6.f_3 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
				bLocal_5 = true;
			}
			else
			{
				fLocal_6.f_7 = 1;
			}
			break;
	
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(fLocal_6.f_3, -1134697563))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(fLocal_6.f_2))
					fLocal_6.f_2 = PED::_GET_PED_REGISTER_PROP(fLocal_6.f_3, "s_meatbit_Chunck_small01x_PH_L_HAND", false);
			
				fLocal_6.f_7 = 2;
			}
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(fLocal_6.f_2))
			{
				fLocal_6.f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(fLocal_6.f_2);
				OBJECT::_SET_OBJECT_BURN_LEVEL(fLocal_6.f_1, 0f, true);
				fLocal_6.f_7 = 3;
			}
			else
			{
				bLocal_0 = false;
			}
			break;
	
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(fLocal_6.f_3, -1334721097))
			{
				if (ENTITY::DOES_ENTITY_EXIST(fLocal_6.f_2))
				{
					if (!func_12(&(fLocal_6.f_4)))
						func_13(&(fLocal_6.f_4));
				
					fLocal_6.f_7 = 4;
				}
				else
				{
					bLocal_0 = false;
				}
			}
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(fLocal_6.f_2))
			{
				fLocal_6 = func_14(&(fLocal_6.f_4));
			
				if (fLocal_6 > 0f && fLocal_6 <= 10f)
					OBJECT::_SET_OBJECT_BURN_LEVEL(fLocal_6.f_1, fLocal_6 / 10f, true);
				else
					bLocal_0 = false;
			}
			break;
	}

	return;
}

void func_7() // Position - 0x292 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x29A Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x2A6 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_15(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x2CE Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_16(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x2F6 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_17(&eventData);
	}

	return;
}

BOOL func_12(var uParam0) // Position - 0x31E Hash - 0x5001E582 ^0x5001E582
{
	return func_18(*uParam0, 1);
}

void func_13(var uParam0) // Position - 0x32E Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_19(uParam0, 0f);
	return;
}

float func_14(var uParam0) // Position - 0x33D Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_12(uParam0))
		return uParam0->f_1;

	if (func_20(uParam0))
		return uParam0->f_2;

	return func_21() - uParam0->f_1;
}

void func_15(var uParam0) // Position - 0x372 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_16(var uParam0) // Position - 0x37A Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_17(var uParam0) // Position - 0x382 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_18(int iParam0, int iParam1) // Position - 0x38A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_19(var uParam0, float fParam1) // Position - 0x399 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_21() - fParam1;
	func_22(uParam0, 1);
	func_23(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_20(var uParam0) // Position - 0x3BF Hash - 0x39705408 ^0x39705408
{
	return func_18(*uParam0, 2);
}

float func_21() // Position - 0x3CF Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_22(var uParam0, int iParam1) // Position - 0x401 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_23(var uParam0, int iParam1) // Position - 0x412 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

