#region Local Var
	Hash hScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xA2C33BE5 ^0xE267A038
{
	int eventData;

	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		func_1();

	while (true)
	{
		while (UIEVENTS::EVENTS_UI_IS_PENDING(hScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hScriptParam_0, &eventData))
			{
				switch (eventData)
				{
					case -493190640:
						if (eventData.f_2 == joaat("SAVE_COMPLETE"))
							Global_17 = true;
						break;
				}
			
				UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
			}
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x6B Hash - 0xDEDA35C7 ^0x4CED6991
{
	NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

