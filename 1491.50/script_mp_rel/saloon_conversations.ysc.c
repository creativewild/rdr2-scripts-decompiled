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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xC26FA255 ^0x79FE007
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	iLocal_13 = iScriptParam_0;
	iLocal_13.f_1 = iScriptParam_0.f_1;

	if (func_2(iLocal_13.f_1) && func_3(iLocal_13))
	{
		while (!func_4(true) && !func_5(32768))
		{
			if (func_6(iScriptParam_0.f_2))
				break;
		
			BUILTIN::WAIT(0);
		}
	}

	func_1();
	return;
}

void func_1() // Position - 0x6B Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_2(int iParam0) // Position - 0x77 Hash - 0xBC12E9CA ^0xBC12E9CA
{
	if (iParam0 < 0 || iParam0 >= 3)
		return 0;

	return 1;
}

int func_3(int iParam0) // Position - 0x95 Hash - 0x3027E97B ^0x3027E97B
{
	if (iParam0 < 0 || iParam0 >= 9)
		return 0;

	return 1;
}

BOOL func_4(BOOL bParam0) // Position - 0xB4 Hash - 0xD5646B1 ^0x7FAD7A3A
{
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

	return false;
}

BOOL func_5(int iParam0) // Position - 0x110 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_6(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x123 Hash - 0x4E80E548 ^0x69C7DB91
{
	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (!Global_1939959.f_5[iLocal_13.f_1 /*11*/])
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam0, true) > 20f)
				return true;
	
		if (func_7(Global_1940199, 4194304))
			return true;
	}

	return false;
}

BOOL func_7(int iParam0, int iParam1) // Position - 0x175 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

