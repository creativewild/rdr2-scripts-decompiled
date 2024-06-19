#region Local Var
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x1B28A202 ^0xD8CB55E0
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	switch (iScriptParam_0)
	{
		case 2:
			if (iScriptParam_0.f_1 == joaat("launchMp") || iScriptParam_0.f_1 == joaat("SwitchToFreemode"))
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
					return;
			
				CAM::DO_SCREEN_FADE_OUT(0);
				func_1(false);
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (iScriptParam_0.f_1 == joaat("launchMpPrivate") || iScriptParam_0.f_1 == joaat("SwitchToPrivate"))
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
					return;
			
				func_1(true);
				CAM::DO_SCREEN_FADE_OUT(0);
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (iScriptParam_0.f_1 == joaat("launchSp"))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_2();
				HUD::SET_FRONTEND_ACTIVE(false);
			}
			else if (iScriptParam_0.f_1 == joaat("LaunchMissionCreator"))
			{
				if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
					return;
			
				if (func_3())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					HUD::SET_FRONTEND_ACTIVE(false);
				}
			}
			break;
	
		default:
			break;
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(BOOL bParam0) // Position - 0xDD Hash - 0xF286D811 ^0x84953998
{
	func_4(68);

	if (bParam0)
		func_5(joaat("freeroam"), 16);
	else
		func_5(joaat("freeroam"), 0);

	func_6(3);
	return;
}

void func_2() // Position - 0x10D Hash - 0xCC3DADD5 ^0x8B46061D
{
	func_4(4);
	func_6(2);

	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_7(joaat("benchmark"))))
		Global_43893 = true;

	func_5(joaat("single_player"), 0);
	return;
}

BOOL func_3() // Position - 0x140 Hash - 0x8F905B15 ^0xFAAACB38
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
		{
			NETWORK::NETWORK_SHOW_PSN_UGC_RESTRICTION();
			return false;
		}
	}

	func_4(68);
	func_5(joaat("MISSION_CREATOR"), 2);
	func_6(3);
	return true;
}

void func_4(int iParam0) // Position - 0x176 Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_5(int iParam0, int iParam1) // Position - 0x18D Hash - 0x8BA690B0 ^0x81A84DFE
{
	Global_1572887.f_182 = iParam0;
	Global_1572887.f_182.f_1 = iParam1;
	func_8(28);
	return;
}

void func_6(int iParam0) // Position - 0x1AD Hash - 0x2BE23AD4 ^0x369A49EF
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

char* func_7(int iParam0) // Position - 0x1C6 Hash - 0xD4CD69EE ^0xD4CD69EE
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case joaat("follow_invite"):
			str = "follow_invite";
			break;
	
		case joaat("PRIVATE"):
			str = "private";
			break;
	
		case joaat("last_region"):
			str = "last_region";
			break;
	
		case joaat("benchmark"):
			str = "benchmark";
			break;
	
		case joaat("Handheld"):
			str = "handheld";
			break;
	
		case joaat("open_posse"):
			str = "open_posse";
			break;
	
		case joaat("NEW_GAME"):
			str = "new_game";
			break;
	
		case joaat("demo"):
			str = "demo";
			break;
	
		case joaat("last_location"):
			str = "last_location";
			break;
	
		case joaat("random_region"):
			str = "random_region";
			break;
	
		case 0:
			str = "";
			break;
	
		case joaat("Friendly"):
			str = "friendly";
			break;
	
		case joaat("hardcore"):
			str = "hardcore";
			break;
	
		case joaat("intro_not_done"):
			str = "intro_not_done";
			break;
	
		case joaat("spawn_location"):
			str = "spawn_location";
			break;
	
		case joaat("shift_f"):
			str = "shift_f";
			break;
	
		case joaat("near_posse"):
			str = "near_posse";
			break;
	
		case joaat("camp"):
			str = "camp";
			break;
	
		case joaat("random_posse"):
			str = "random_posse";
			break;
	}

	return str;
}

void func_8(int iParam0) // Position - 0x2E4 Hash - 0x1569494B ^0xCCC341E5
{
	Hash address;
	int i;

	address = Global_1572887.f_182.f_1;
	i = 0;

	for (i = 0; i <= 15; i = i + 1)
	{
		MISC::IS_BIT_SET(address, i);
	}

	Global_1572887.f_182.f_2 != -1;
	Global_1572887.f_182.f_3 != -1;
	Global_1572887.f_182.f_4 != -1;
	Global_1572887.f_182.f_5 != -1;
	Global_1572887.f_182.f_6 != -1;
	Global_1572887.f_182.f_8 != 0;
	return;
}

