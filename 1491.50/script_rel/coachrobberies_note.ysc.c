#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	char* sLocal_4 = 0;
	BOOL bLocal_5 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xB9866141 ^0xB419059C
{
	sLocal_4 = "SCRB";

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	while (true)
	{
		switch (iLocal_0)
		{
			case 0:
				HUD::TEXT_BLOCK_REQUEST(sLocal_4);
				iLocal_0 = 1;
				break;
		
			case 1:
				if (HUD::TEXT_BLOCK_IS_LOADED(sLocal_4))
				{
					func_2(&uLocal_1);
					iLocal_0 = 2;
				}
				break;
		
			case 2:
				if (func_3(&uLocal_1) > 15f)
				{
					func_1();
					iLocal_0 = 3;
				}
				else if (!bLocal_5)
				{
					func_4();
					bLocal_5 = true;
				}
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x8B Hash - 0xF8486C74 ^0x4C474B65
{
	func_5(true);
	HUD::_TEXT_BLOCK_DELETE(sLocal_4);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2(var uParam0) // Position - 0xA2 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_6(uParam0, 0f);
	return;
}

float func_3(var uParam0) // Position - 0xB1 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_7(uParam0))
		return uParam0->f_1;

	if (func_8(uParam0))
		return uParam0->f_2;

	return func_9() - uParam0->f_1;
}

void func_4() // Position - 0xE6 Hash - 0x8E1CFAAA ^0x7D182B4C
{
	int num;
	char* str;

	num = Global_40.f_9146.f_3;

	switch (num)
	{
		case 0:
			str = "CR_STR_R1";
			break;
	
		case 1:
			str = "CR_STR_R2";
			break;
	
		case 2:
			str = "CR_STR_R3";
			break;
	
		case 4:
			str = "CR_RHD_R1";
			break;
	
		case 5:
			str = "CR_RHD_R2";
			break;
	
		case 6:
			str = "CR_RHD_R3";
			break;
	
		case 13:
			str = "CR_RHD_RTL";
			break;
	}

	func_10(str, 0, 0, true);
	return;
}

void func_5(BOOL bParam0) // Position - 0x16B Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_6(var uParam0, float fParam1) // Position - 0x17B Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_9() - fParam1;
	func_11(uParam0, 1);
	func_12(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_7(var uParam0) // Position - 0x1A1 Hash - 0x5001E582 ^0x5001E582
{
	return func_13(*uParam0, 1);
}

BOOL func_8(var uParam0) // Position - 0x1B1 Hash - 0x39705408 ^0x39705408
{
	return func_13(*uParam0, 2);
}

float func_9() // Position - 0x1C1 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_10(char* sParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1F3 Hash - 0x1DB6DA90 ^0x1DB6DA90
{
	return func_14(sParam0, -1, iParam1, iParam2, 0, bParam3);
}

void func_11(var uParam0, int iParam1) // Position - 0x209 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_12(var uParam0, int iParam1) // Position - 0x21A Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_13(int iParam0, int iParam1) // Position - 0x22F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x23E Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

