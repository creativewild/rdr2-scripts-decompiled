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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 3;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = -904317931;
	var uLocal_33 = 605478457;
	var uLocal_34 = 0;
	var uLocal_35 = -1;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = -1;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = -1;
	var uLocal_45 = 0;
	var uLocal_46 = -904317931;
	var uLocal_47 = 605478457;
	var uLocal_48 = 0;
	var uLocal_49 = -1;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = -1;
	var uLocal_55 = 0;
	var uLocal_56 = -1;
	var uLocal_57 = 0;
	var uLocal_58 = -1;
	var uLocal_59 = 0;
	var uLocal_60 = -904317931;
	var uLocal_61 = 605478457;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 5;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF2DFEA48 ^0xF2DFEA48
{
	BOOL flag;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(-1);
	flag = false;

	while (!flag && iLocal_63 < 3)
	{
		if (func_2() == -1)
			flag = func_3(true);
		else
			flag = func_4(false, false);
	
		func_5(&iLocal_63, &uLocal_19);
		BUILTIN::WAIT(0);
	}

	func_6();
	return;
}

void func_1(int iParam0) // Position - 0x53 Hash - 0xA615CB24 ^0xCD525F7D
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	return;
}

int func_2() // Position - 0x69 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

BOOL func_3(BOOL bParam0) // Position - 0x77 Hash - 0xD5646B1 ^0x7FAD7A3A
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
		
			case 1:
				return 1;
		
			case 2:
				if (!bParam0)
					return 1;
				break;
		
			case 3:
				return 1;
		
			case 4:
				return 1;
		
			default:
				return 1;
		}
	}

	return 0;
}

BOOL func_4(BOOL bParam0, BOOL bParam1) // Position - 0xD3 Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return 0;

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
			return 1;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return 1;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return 1;
		
			case 1:
				return 1;
		
			case 2:
				if (!bParam0)
					return 1;
				break;
		
			case 3:
				return 1;
		
			case 4:
				return 1;
		
			default:
				return 1;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return 1;
	}

	return 0;
}

void func_5(var uParam0, var uParam1) // Position - 0x1B3 Hash - 0xA5F71FA ^0xAEFE8A10
{
	switch (*uParam0)
	{
		case 0:
			func_7(uParam0, 1);
			break;
	
		case 1:
			func_7(uParam0, 2);
			func_8(&(uParam0->f_28), 4);
			break;
	
		case 2:
			if (uParam0->f_29)
				func_7(uParam0, 3);
			break;
	
		case 3:
			break;
	}

	return;
}

void func_6() // Position - 0x20D Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_7(var uParam0, int iParam1) // Position - 0x219 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_8(var uParam0, int iParam1) // Position - 0x226 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

