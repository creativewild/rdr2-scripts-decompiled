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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xAE4A6BC2 ^0x24ED002
{
	BOOL flag;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(joaat("CLOSING"));

	if (Global_1572887.f_14 != 0)
		return;

	flag = false;

	while (!func_2(true, true))
	{
		flag = false;
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			flag = true;
	
		if (!Global_1915656.f_22504)
			flag = true;
	
		if (func_3())
			flag = true;
	
		if (flag)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			func_1(joaat("CLOSING"));
			break;
		}
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 407174929))
			func_4(2);
	
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1543672280))
			func_1(-1543672280);
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1441911379))
			func_1(-1441911379);
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 562684602))
			func_1(562684602);
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1275814714))
			func_1(-1275814714);
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -917343754))
			func_1(-917343754);
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1308691423))
			func_1(-1308691423);
	
		BUILTIN::WAIT(0);
	}

	func_1(joaat("CLOSING"));
	return;
}

void func_1(int iParam0) // Position - 0x137 Hash - 0xC421D95B ^0x2F16990E
{
	Global_1915656.f_22504.f_4 = iParam0;
	return;
}

BOOL func_2(BOOL bParam0, BOOL bParam1) // Position - 0x14A Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

BOOL func_3() // Position - 0x22A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3664;
}

void func_4(int iParam0) // Position - 0x239 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1051832.f_3648 = Global_1051832.f_3648 || iParam0;
	return;
}

