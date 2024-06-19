void main() // Position - 0x0 Hash - 0x6D4B34F0 ^0x6D4B34F0
{
	func_1(-1);
	func_2();
	return;
}

void func_1(int iParam0) // Position - 0x11 Hash - 0xA615CB24 ^0xCD525F7D
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	return;
}

void func_2() // Position - 0x27 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

