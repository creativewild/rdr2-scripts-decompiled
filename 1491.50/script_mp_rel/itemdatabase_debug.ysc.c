#region Local Var
	BOOL bLocal_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xDEE82A55 ^0x937FEDB1
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	func_2();

	while (!func_3(true) && !bLocal_0)
	{
		func_4();
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x3B Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x43 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_3(BOOL bParam0) // Position - 0x4B Hash - 0xD5646B1 ^0x7FAD7A3A
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

void func_4() // Position - 0xA7 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

