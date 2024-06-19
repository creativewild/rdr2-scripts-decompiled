#region Local Var
	int iLocal_0 = 0;
	Cam caLocal_1 = 0;
	BOOL bLocal_2 = 0;
	BOOL bLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x6D7FE16A ^0x32C5C118
{
	bLocal_3 = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
	{
		SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!func_1(anScriptParam_0))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::_0xE7282390542F570D(anScriptParam_0);
	return;
}

BOOL func_1(var uParam0, var uParam1, var uParam2) // Position - 0x64 Hash - 0xC4028CE3 ^0xD3238D52
{
	switch (iLocal_10)
	{
		case 0:
			if (func_2() && STREAMING::IS_IPL_ACTIVE_BY_HASH(204868257))
			{
				iLocal_0 = func_3("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), TASK::_GET_SCENARIO_POINT_COORDS(uParam0.f_1, true), 4f, 1, 1, 0, 3, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false);
				caLocal_1 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2511.9072f, -1160.0243f, 52.5668f, -3.9115f, 0f, -90.0969f, 51.282f, false, 2);
				iLocal_10 = 1;
			}
			break;
	
		case 1:
			if (!bLocal_2)
			{
				if (func_4(iLocal_0, true))
				{
					CAM::SET_CAM_ACTIVE(caLocal_1, true);
					ENTITY::_0x80FDEB3A9E9AA578(Global_35, false);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					bLocal_2 = true;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				
					if (bLocal_3 && func_5(93, 0) == 0)
					{
						bLocal_3 = false;
						func_6(&uLocal_4);
						func_6(&uLocal_7);
						func_7(93, 0, 1);
					}
				}
			}
			else if (!func_4(iLocal_0, true) && func_8(&uLocal_4, 2f) || !func_9(&uLocal_4))
			{
				CAM::SET_CAM_ACTIVE(caLocal_1, false);
				bLocal_2 = false;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			else
			{
				ENTITY::_0x80FDEB3A9E9AA578(Global_35, false);
			}
		
			if (func_10(&uLocal_7, 1f))
				func_11(Global_35, "RE_FND_STD_V1_JOHN_FINDS", -417894478, 0, 1, 0, 0, 1);
			break;
	}

	return false;
}

BOOL func_2() // Position - 0x1C3 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_12() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_3(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, BOOL bParam16) // Position - 0x1E8 Hash - 0x8FE94EEE ^0x148ED6A8
{
	int i;
	int num;
	int num2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (_IS_NULL_VECTOR(uParam2))
		return 0;

	if (fParam5 <= 0f)
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_14(i, 2))
		{
			if (func_15(uParam2, Global_1945188[i /*18*/].f_6, 0.01f, true) && hParam1 == Global_1945188[i /*18*/].f_4)
			{
				num2 = i;
				return num2;
			}
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_16(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, bParam16);
		return num;
	}

	return 0;
}

BOOL func_4(int iParam0, BOOL bParam1) // Position - 0x2C6 Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_17(iParam0))
		return false;

	num = func_18(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[num /*18*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1945188[num /*18*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[num /*18*/].f_3);
}

int func_5(int iParam0, int iParam1) // Position - 0x31D Hash - 0x6553AF7 ^0xD4E9B96B
{
	int num;

	num = func_19(iParam0, iParam1);

	if (num != -1)
		return Global_17504.f_1003[num /*6*/].f_1;

	return 0;
}

void func_6(var uParam0) // Position - 0x345 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_20(uParam0, 0f);
	return;
}

void func_7(int iParam0, int iParam1, int iParam2) // Position - 0x354 Hash - 0xB458AB6F ^0xD4DBC17E
{
	int num;

	num = func_21(iParam0, iParam1);
	Global_17504.f_1003[num /*6*/].f_1 = iParam2;
	return;
}

BOOL func_8(var uParam0, float fParam1) // Position - 0x374 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_9(uParam0))
		return false;

	if (func_22(uParam0) > fParam1)
		return true;

	return false;
}

BOOL func_9(var uParam0) // Position - 0x39B Hash - 0x5001E582 ^0x5001E582
{
	return func_23(*uParam0, 1);
}

BOOL func_10(var uParam0, float fParam1) // Position - 0x3AB Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_8(uParam0, fParam1))
	{
		func_24(uParam0);
		return true;
	}

	return false;
}

BOOL func_11(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x3C9 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = iParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_25(pedParam0, &str);
}

BOOL func_12() // Position - 0x410 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x41E Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x448 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

BOOL func_15(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x469 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_16(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x4BE Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = volParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1945188[iParam0 /*18*/].f_3 = prompt;
	func_26(iParam0, true);
	func_27(iParam0, true);
	func_28(iParam0, 128);
	return;
}

BOOL func_17(int iParam0) // Position - 0x764 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

int func_18(int iParam0) // Position - 0x7A3 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

int func_19(int iParam0, int iParam1) // Position - 0x7AD Hash - 0xEE99B1EA ^0xEE99B1EA
{
	int i;
	int num;

	num = func_29(iParam0, iParam1);

	for (i = 0; i < Global_17504.f_1003; i = i + 1)
	{
		if (Global_17504.f_1003[i /*6*/] == num)
			return i;
	}

	return -1;
}

void func_20(var uParam0, float fParam1) // Position - 0x7EB Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_30() - fParam1;
	func_31(uParam0, 1);
	func_32(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_21(int iParam0, int iParam1) // Position - 0x811 Hash - 0x992397AB ^0x992397AB
{
	int i;
	int num;

	num = func_29(iParam0, iParam1);

	for (i = 0; i < Global_17504.f_1003; i = i + 1)
	{
		if (Global_17504.f_1003[i /*6*/] == num || Global_17504.f_1003[i /*6*/] == -1)
		{
			Global_17504.f_1003[i /*6*/] = num;
			return i;
		}
	}

	return -1;
}

float func_22(var uParam0) // Position - 0x86E Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_9(uParam0))
		return uParam0->f_1;

	if (func_33(uParam0))
		return uParam0->f_2;

	return func_30() - uParam0->f_1;
}

BOOL func_23(int iParam0, int iParam1) // Position - 0x8A3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_24(var uParam0) // Position - 0x8B2 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_25(Ped pedParam0, Any* panParam1) // Position - 0x8C8 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

void func_26(int iParam0, BOOL bParam1) // Position - 0x8D8 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_14(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_27(int iParam0, BOOL bParam1) // Position - 0x930 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_28(int iParam0, int iParam1) // Position - 0x959 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

int func_29(int iParam0, int iParam1) // Position - 0x981 Hash - 0x706CAB3F ^0x706CAB3F
{
	if (!func_34(iParam0))
		return -1;

	return iParam0 + (120 * iParam1);
}

float func_30() // Position - 0x99F Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_31(var uParam0, int iParam1) // Position - 0x9D1 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_32(var uParam0, int iParam1) // Position - 0x9E2 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_33(var uParam0) // Position - 0x9F7 Hash - 0x39705408 ^0x39705408
{
	return func_23(*uParam0, 2);
}

BOOL func_34(int iParam0) // Position - 0xA07 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

