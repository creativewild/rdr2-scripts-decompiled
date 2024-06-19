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
	Ped pedLocal_18 = 0;
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
	var uLocal_42 = 1;
	var uLocal_43 = 0;
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

void func_6() // Position - 0x10C Hash - 0xF5D79F7A ^0x7CC89664
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_18))
		return;

	if (PED::IS_PED_INJURED(pedLocal_18))
	{
		bLocal_13 = false;
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(pedLocal_18.f_18)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(pedLocal_18.f_18)))
			if (func_12())
				func_13(0);
	
		return;
	}

	switch (func_14())
	{
		case 0:
			if (func_15())
			{
				pedLocal_18.f_7 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedLocal_18);
			
				if (pedLocal_18.f_7 == -630818830)
				{
					TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_1), "WANTED_BOUNTY_POSTER_CHAIN_GANG", 32);
					TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_18), "doc_bounty_poster_chain_gang", 32);
					pedLocal_18.f_8.f_2 = 0;
				}
				else if (pedLocal_18.f_7 == -1325774943)
				{
					TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_18), "doc_bounty_poster_player", 32);
					pedLocal_18.f_8.f_2 = 0;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					TEXT_LABEL_ASSIGN_STRING(&(pedLocal_18.f_18), "doc_bounty_poster", 32);
					pedLocal_18.f_8.f_2 = 0;
				}
			
				pedLocal_18.f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(pedLocal_18, false);
				pedLocal_18.f_5 = TASK::GET_PROP_FOR_SCENARIO_POINT(pedLocal_18.f_6, &(pedLocal_18.f_1));
				pedLocal_18.f_8.f_1 = pedLocal_18.f_6;
				pedLocal_18.f_8 = pedLocal_18.f_5;
				pedLocal_18.f_8.f_3 = 1;
				pedLocal_18.f_22 = 1024;
				func_16();
			}
		
			func_17(1);
			break;
	
		case 1:
			if (func_15())
			{
				SCRIPTS::REQUEST_SCRIPT(&(pedLocal_18.f_18));
				func_13(1);
				func_16();
			}
		
			func_17(2);
			break;
	
		case 2:
			if (func_15())
				func_16();
		
			if (SCRIPTS::HAS_SCRIPT_LOADED(&(pedLocal_18.f_18)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_18, 0))
			{
				pedLocal_18.f_23 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(pedLocal_18.f_18), &(pedLocal_18.f_8), 10, pedLocal_18.f_22);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(pedLocal_18.f_18));
				func_17(3);
			}
			break;
	
		case 3:
			if (func_15())
				func_16();
		
			if (!PED::IS_PED_USING_ANY_SCENARIO(pedLocal_18) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_bounty_poster_chain_gang")) == 0 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_bounty_poster")) == 0)
				bLocal_13 = false;
			break;
	}

	return;
}

void func_7() // Position - 0x2DB Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_8() // Position - 0x2E3 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0x2EF Hash - 0x5A8C3AF6 ^0xD29C94E1
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

void func_10(int iParam0) // Position - 0x317 Hash - 0x5A8C3AF6 ^0xD29C94E1
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

void func_11(int iParam0) // Position - 0x33F Hash - 0x5A8C3AF6 ^0xD29C94E1
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

BOOL func_12() // Position - 0x367 Hash - 0xBA0B7E94 ^0x198E4494
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return true;

	return false;
}

void func_13(int iParam0) // Position - 0x38B Hash - 0x6BA9AF79 ^0x4BD2343C
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

int func_14() // Position - 0x3CE Hash - 0x345AD124 ^0xD1D31302
{
	return pedLocal_18.f_25;
}

BOOL func_15() // Position - 0x3DA Hash - 0x345AD124 ^0x6A4A9415
{
	return pedLocal_18.f_24;
}

void func_16() // Position - 0x3E6 Hash - 0xC4FD9D65 ^0x28D50E52
{
	pedLocal_18.f_24 = 0;
	return;
}

void func_17(int iParam0) // Position - 0x3F3 Hash - 0x7B99D1DD ^0xC51CE663
{
	pedLocal_18.f_25 = iParam0;
	func_21();
	return;
}

void func_18(var uParam0) // Position - 0x405 Hash - 0x880617B1 ^0x9C6E4E0B
{
	pedLocal_18 = uParam0->f_1;
	return;
}

void func_19(var uParam0) // Position - 0x413 Hash - 0x70BBD24E ^0x2C9B0A38
{
	if (pedLocal_18.f_25 >= 3 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_bounty_poster_chain_gang")) == 0 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("doc_bounty_poster")) == 0)
		bLocal_13 = false;

	return;
}

void func_20(var uParam0) // Position - 0x447 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_21() // Position - 0x44F Hash - 0xF9E49D28 ^0x97681338
{
	pedLocal_18.f_24 = 1;
	return;
}

