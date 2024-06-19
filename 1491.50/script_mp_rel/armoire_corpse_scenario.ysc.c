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
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	int iLocal_21 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE6EF425C ^0x54B44415
{
	bLocal_13 = 1;
	fLocal_19 = 1f;
	fLocal_20 = 1f;
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

void func_1() // Position - 0x5C Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x64 Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_15);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x89 Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_14 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_14) == 0)
			return bLocal_13;
		else
			return true;

	return bLocal_13;
}

void func_4() // Position - 0xB2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xBA Hash - 0x3D22DF46 ^0xED7FF9EC
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

void func_6() // Position - 0x112 Hash - 0x78137EA ^0xBF18A75
{
	if (PED::IS_PED_INJURED(Global_33))
	{
		bLocal_13 = false;
		return;
	}

	switch (iLocal_21)
	{
		case 0:
			iLocal_21 = 1;
			break;
	
		case 1:
			iLocal_21 = 2;
			break;
	
		case 2:
			break;
	}

	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		bLocal_13 = false;
	}

	return;
}

void func_7() // Position - 0x16A Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x172 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x17E Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_12(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0x1A6 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_13(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0x1CE Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_14(&eventData);
	}

	return;
}

void func_12(var uParam0) // Position - 0x1F6 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_13(var uParam0) // Position - 0x1FE Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_14(var uParam0) // Position - 0x206 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

