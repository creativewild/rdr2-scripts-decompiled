#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE6C82B92 ^0xE6F687AC
{
	func_1(iScriptParam_0);
	uLocal_0 = uLocal_0;

	while (func_2())
	{
		BUILTIN::WAIT(0);
		uLocal_1 = uLocal_1;
	}

	func_3(iScriptParam_0);
	return;
}

void func_1(int iParam0) // Position - 0x2B Hash - 0xA21FC6AB ^0xB57DA58E
{
	iParam0 = iParam0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3(iParam0);
		NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT();
	}

	return;
}

BOOL func_2() // Position - 0x66 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_3(int iParam0) // Position - 0x6F Hash - 0x722166D5 ^0xE440C49B
{
	func_4(iParam0, 4);
	func_4(iParam0, 8);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_5();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

void func_4(int iParam0, BOOL bParam1) // Position - 0x98 Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = Global_23118[iParam0 /*11*/] - Global_23118[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[iParam0 /*11*/] = Global_1058888.f_40545[iParam0 /*11*/] - Global_1058888.f_40545[iParam0 /*11*/] && bParam1;
	return;
}

void func_5() // Position - 0xF1 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

