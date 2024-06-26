void main() // Position - 0x0 Hash - 0x7E1D6AFE ^0x6776B9EC
{
	BOOL isVideoEditorRunning;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (NETWORK::NETWORK_IS_IN_SESSION())
		NETWORK::_0xFD4272A137703449();

	MISC::GAME_FRAMEWORK_MANAGER_INIT(-1329374618);
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	REPLAY::SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM();
	BUILTIN::WAIT(1000);

	if (!REPLAY::IS_VIDEO_EDITOR_RUNNING())
	{
		if (REPLAY::OPEN_VIDEO_EDITOR())
		{
		}
	}

	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		CAM::DO_SCREEN_FADE_IN(500);
	}

	isVideoEditorRunning = true;

	if (isVideoEditorRunning)
	{
		func_1();
		func_2();
	}

	while (isVideoEditorRunning)
	{
		isVideoEditorRunning = REPLAY::IS_VIDEO_EDITOR_RUNNING();
		!isVideoEditorRunning;
	
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			isVideoEditorRunning = false;
	
		BUILTIN::WAIT(0);
	}

	func_1();
	func_2();

	if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
		REPLAY::CLOSE_VIDEO_EDITOR(1);

	MISC::_GAME_FRAMEWORK_MANAGER_SHUTDOWN();
	func_3(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0xBD Hash - 0x27DB40FB ^0x951B51F1
{
	var unk;

	if (NETWORK::NETWORK_IS_IN_SESSION())
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			return;

	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_152)))
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_152));

	unk.f_5 = 2;
	unk.f_12 = -1;
	unk.f_17 = -1;
	Global_1572887.f_152 = { unk };
	return;
}

void func_2() // Position - 0x116 Hash - 0x13A551FC ^0x28673793
{
	func_4();
	func_5(-1);
	func_6(0);
	Global_1572887.f_94.f_41 = 0;

	if (Global_1572887.f_94.f_53 == 2)
		Global_1572887.f_94.f_53 = 0;

	return;
}

void func_3(int iParam0) // Position - 0x14A Hash - 0x82A87E90 ^0x82A87E90
{
	if (iParam0 != 0)
		func_7(iParam0, -1);

	func_8(4);
	func_9(1);
	return;
}

void func_4() // Position - 0x169 Hash - 0xC7E398FF ^0xE19E192D
{
	Global_1572887.f_94.f_40 = MISC::GET_GAME_TIMER();
	return;
}

void func_5(int iParam0) // Position - 0x17D Hash - 0x42868A8 ^0x1DF1CEDD
{
	Global_1572887.f_94.f_1 = iParam0;
	return;
}

void func_6(int iParam0) // Position - 0x18F Hash - 0x29A8F290 ^0x8EFB0B73
{
	Global_1572887.f_94 = iParam0;
	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x19F Hash - 0x277DE552 ^0xA236FB53
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
	return;
}

void func_8(int iParam0) // Position - 0x1B7 Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

void func_9(int iParam0) // Position - 0x1CE Hash - 0x2BE23AD4 ^0x369A49EF
{
	if (iParam0 == 0)
		iParam0 = 1;

	Global_1572864.f_1 = iParam0;
	return;
}

