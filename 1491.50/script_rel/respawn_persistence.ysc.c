#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	char* sLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xE4C5ECD1 ^0xC70986EE
{
	int num;
	int gameTimer;
	var unk;
	struct<10> args;
	struct<69> args2;
	struct<61> args3;
	BOOL flag;
	var unk154;
	float groundZ;
	int num2;
	int num3;
	int num4;
	int num5;
	BOOL flag2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	args2.f_5 = 8;
	args2.f_14 = -1;
	args2.f_22 = -1082130432;
	args2.f_23 = -1;
	args2.f_34 = 6;
	args2.f_54.f_4 = 1;
	args2.f_54.f_5 = 1;
	args3.f_40 = 10000;
	args3.f_58 = 1;
	args3.f_59 = 34;
	flag = true;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_1();

	if (Global_1347343 != -1 && Global_1347343 != 4 || func_2(2) || func_3(Global_1347343.f_2))
	{
		func_4();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (flag)
	{
		BUILTIN::WAIT(0);
	
		if (!PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	
		flag = !Global_1310720.f_8;
	
		switch (func_5())
		{
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					MISC::PAUSE_DEATH_ARREST_RESTART(true);
					func_6(2);
				}
			
				if (Global_1934266.f_59)
				{
					SCRIPTS::REQUEST_SCRIPT("law_arrest");
					AUDIO::_START_AUDIO_SCENESET("Title_Screen", "Arrest_Fail_Respawn_Scenes");
				}
			
				Global_1310720.f_11 = 1;
				break;
		
			case 2:
				if (Global_1934266.f_59)
				{
					Global_1934266.f_62 = func_7();
					Global_1934266.f_63 = func_9(func_8());
					func_10(Global_1934266.f_62, &(Global_40.f_9.f_7));
					func_11(Global_1934266.f_62, &args3);
					Global_40.f_9.f_7 = { args3.f_6 };
					Global_40.f_9.f_13 = 0f;
					Global_40.f_9.f_15 = func_12(Global_40.f_9.f_7, true);
					STREAMING::SET_FOCUS_POS_AND_VEL(Global_40.f_9.f_7, 0f, 0f, 0f);
					STREAMING::LOAD_SCENE_START(Global_40.f_9.f_7, 0f, 0f, 0f, 10f, 0);
					MISC::PAUSE_DEATH_ARREST_RESTART(false);
					MISC::IGNORE_NEXT_RESTART(true);
					LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
				}
				else
				{
					LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
					Global_40.f_11956 = 0;
					unk154 = { Global_36 };
					func_13(unk154, 200f, true, false, false, false, false);
				}
			
				Global_1310720.f_5 = MISC::GET_GAME_TIMER();
				func_14(false);
				func_6(3);
				break;
		
			case 3:
				func_6(4);
				break;
		
			case 4:
				if (Global_1934266.f_59)
				{
					func_6(5);
				}
				else
				{
					AUDIO::_SET_AUDIO_SCENESET("TITLE_SCREEN", "DEATH_FAIL_RESPAWN_SCENES");
					func_6(5);
				}
				break;
		
			case 5:
				if (!Global_1934266.f_59)
				{
					if (Global_1310720.f_7)
					{
						sLocal_14.f_1 = "TITLE_SCREEN_ENTER_OFF_MISSION";
						sLocal_14 = "DEATH_FAIL_RESPAWN_SOUNDS";
						Global_1935630.f_3 = func_15(&sLocal_14, "ALERT_PLAYER_DEAD", 0, true);
					}
				
					CAM::DO_SCREEN_FADE_OUT(0);
					LAW::CLEAR_WANTED_SCORE(PLAYER::PLAYER_ID());
					func_16();
					func_6(6);
				}
				else
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_6(6);
				}
				break;
		
			case 6:
				Global_40.f_9.f_15 = func_12(Global_40.f_9.f_7, true);
				func_6(7);
				break;
		
			case 7:
				PED::IS_PED_INJURED(Global_35);
				groundZ = 0f;
			
				if (BUILTIN::VDIST(Global_40.f_9.f_7, 0f, 0f, 0f) > 1f)
				{
					Global_40.f_9.f_7.f_2 = Global_40.f_9.f_7.f_2 + 1f;
				
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_40.f_9.f_7, &groundZ, false))
						Global_40.f_9.f_7.f_2 = groundZ;
				
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_40.f_9.f_7, false, true, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Global_40.f_9.f_13);
				}
			
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				Global_35 = PLAYER::PLAYER_PED_ID();
				Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
				STREAMING::CLEAR_FOCUS();
				STREAMING::LOAD_SCENE_STOP();
				PED::INSTANTLY_FILL_PED_POPULATION();
				VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
				func_17();
				func_18(false);
				func_19();
				func_20();
				func_6(8);
				break;
		
			case 8:
				num2 = func_21();
				num3 = 0;
			
				if (10000 + Global_1310720.f_4 < MISC::GET_GAME_TIMER())
					num3 = 1;
			
				if (num2 || num3)
					func_6(9);
				break;
		
			case 9:
				if (func_22())
				{
					gameTimer = -1;
					func_6(10);
				}
				else if (Global_1310720)
				{
					func_6(11);
				}
				else if (Global_1934266.f_59)
				{
					Global_1934266.f_65 = 0;
					func_6(13);
				}
				else
				{
					func_6(14);
				}
				break;
		
			case 10:
				if (func_23(Global_40.f_9.f_15))
				{
					num = func_24(Global_40.f_9.f_15);
				
					if (gameTimer == -1)
						gameTimer = MISC::GET_GAME_TIMER();
				
					if (num != -1)
					{
						if (VOLUME::DOES_VOLUME_EXIST(Global_1395601.f_5[num /*28*/].f_23))
						{
							if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1395601.f_5[num /*28*/].f_24, false))
							{
								SCRIPTS::REQUEST_SCRIPT("property_use_core");
							
								if (SCRIPTS::HAS_SCRIPT_LOADED("property_use_core"))
								{
									args2.f_2 = Global_1395601.f_5[num /*28*/].f_23;
									args2.f_15 = 1;
									Global_1395601.f_5[num /*28*/].f_24 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("property_use_core", &args2, 69, 6096);
									SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("property_use_core");
									func_6(15);
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > 20000 + gameTimer)
						{
							func_6(14);
						}
					}
					else
					{
						func_6(14);
					}
				}
				break;
		
			case 11:
				if (func_23(Global_40.f_9.f_15))
				{
					SCRIPTS::REQUEST_SCRIPT("player_camp");
				
					if (SCRIPTS::HAS_SCRIPT_LOADED("player_camp"))
					{
						args = 1;
						Global_1934266.f_58 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("player_camp", &args, 10, 6096);
						SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_camp");
						func_6(15);
						Global_1310720 = false;
					}
				}
				break;
		
			case 13:
				if (func_23(Global_40.f_9.f_15))
				{
					if (!Global_1934266.f_65)
					{
						if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
						{
							STREAMING::LOAD_SCENE_START(Global_40.f_9.f_7, BUILTIN::COS(Global_40.f_9.f_13 + 90f), BUILTIN::SIN(Global_40.f_9.f_13 + 90f), 0f, 10f, 0);
							Global_1934266.f_64 = MISC::GET_GAME_TIMER();
						}
					}
				
					Global_1934266.f_65 = 1;
				
					if (!STREAMING::IS_LOAD_SCENE_ACTIVE() || STREAMING::IS_LOAD_SCENE_LOADED() || MISC::GET_GAME_TIMER() >= 30000 + Global_1934266.f_64)
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934266.f_58, false))
						{
							SCRIPTS::REQUEST_SCRIPT("law_arrest");
						
							if (SCRIPTS::HAS_SCRIPT_LOADED("law_arrest"))
							{
								Global_1934266.f_59 = 0;
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
							
								if (STREAMING::IS_LOAD_SCENE_ACTIVE())
								{
									STREAMING::CLEAR_FOCUS();
									STREAMING::LOAD_SCENE_STOP();
								}
							
								AUDIO::_STOP_AUDIO_SCENESET("Arrest_Fail_Respawn_Scenes");
								CAM::DO_SCREEN_FADE_OUT(0);
								Global_1934266.f_58 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("law_arrest", &args3, 61, 10000);
								SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("law_arrest");
								func_6(15);
							}
						}
					}
				}
				break;
		
			case 14:
				if (Global_1310720.f_7 && !CAM::IS_SCREEN_FADED_IN() && UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(Global_1935630.f_3) >= 3)
					CAM::DO_SCREEN_FADE_IN(0);
			
				flag2 = true;
				num4 = 0;
				num5 = 0;
			
				if (!_IS_NULL_VECTOR(unk154))
				{
					Global_1310720.f_18 = { unk154 };
					Global_1310720.f_21 = func_12(unk154, false);
				}
			
				if (Global_40.f_9.f_11 >= 0)
					flag2 = false;
			
				if (func_26(15) && func_27(65536))
				{
					if (func_23(Global_40.f_9.f_15) || Global_1310720.f_4 + 10000 < MISC::GET_GAME_TIMER())
					{
						if (Global_40.f_9.f_10 >= 0)
						{
							args = Global_40.f_9.f_10;
							Global_40.f_9.f_10 = -1;
						}
						else
						{
							func_28(Global_40.f_9.f_7, &num4, &num5, flag2, true, false, false, 10f, 50f);
							args = num4;
							Global_40.f_9.f_11 = num5;
						}
					
						unk = { args };
						TEXT_LABEL_ASSIGN_STRING(&(unk.f_10), "respawn_dump_body", 32);
						unk.f_14 = 1024;
						unk.f_15 = 1;
						func_29(unk, 0);
						func_6(15);
					}
				}
				break;
		
			case 15:
				break;
		}
	}

	func_1();
	return;
}

void func_1() // Position - 0x777 Hash - 0x94986482 ^0xC23B0B53
{
	func_30();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(int iParam0) // Position - 0x787 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_3(int iParam0) // Position - 0x79A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_4() // Position - 0x7CD Hash - 0x241F6BCB ^0xED915CC7
{
	func_31(&Global_1935630, 4096);
	Global_40.f_9.f_15 = -1;
	func_6(0);
	Global_40.f_9.f_12 = 0;
	Global_1310720.f_4 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	func_32(0);
	return;
}

int func_5() // Position - 0x852 Hash - 0x4228A1C2 ^0xE93D75E0
{
	return Global_1572864.f_21;
}

void func_6(int iParam0) // Position - 0x860 Hash - 0x33B51C79 ^0xD9769E91
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
	return;
}

int func_7() // Position - 0x87A Hash - 0x601AA5FF ^0xB6AD89D6
{
	int num;
	int num2;

	num = func_8();

	switch (num)
	{
		case 0:
		case 2:
			num2 = 5;
			break;
	
		case 1:
			if (func_34(11) || func_35(Global_1835011[11 /*74*/].f_1) || func_36(Global_1835011[11 /*74*/].f_1) || func_33(26))
				num2 = 76;
			else
				num2 = 26;
			break;
	
		case 3:
		case 5:
		case 6:
		case 7:
		case 9:
			if (func_33(76))
				num2 = 78;
			else
				num2 = 76;
			break;
	
		case 4:
		case 12:
			if (!func_37() || Global_1934266.f_56 == true || func_38(Global_1835011[58 /*74*/].f_1, true))
				num2 = 38;
			else if (func_34(11) || func_35(Global_1835011[11 /*74*/].f_1) || func_36(Global_1835011[11 /*74*/].f_1) || func_33(26))
				num2 = 76;
			else
				num2 = 26;
			break;
	
		case 8:
			num2 = 57;
			break;
	
		case 10:
			num2 = 78;
			break;
	
		case 11:
			if (Global_1894899.f_187 || func_33(105))
				num2 = 5;
			else
				num2 = 105;
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			num2 = 115;
			break;
	
		default:
			num2 = -1;
			break;
	}

	return num2;
}

int func_8() // Position - 0xA1A Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

int func_9(int iParam0) // Position - 0xA28 Hash - 0xA08D7C4E ^0xA08D7C4E
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

int func_10(int iParam0, var uParam1) // Position - 0xAE3 Hash - 0xFC1DBBFC ^0xFC1DBBFC
{
	switch (iParam0)
	{
		case 5:
			*uParam1 = { 2503.7415f, -1307.1354f, 47.9537f };
			return 1;
	
		case 26:
			*uParam1 = { -1810.2618f, -351.5755f, 160.4386f };
			return 1;
	
		case 38:
			*uParam1 = { -766.9637f, -1264.285f, 42.9484f };
			return 1;
	
		case 57:
			*uParam1 = { 2903.6655f, 1315.805f, 44.3104f };
			return 1;
	
		case 76:
			*uParam1 = { -272.4204f, 811.132f, 118.3688f };
			return 1;
	
		case 78:
			*uParam1 = { 2903.6655f, 1315.805f, 44.3104f };
			return 1;
	
		case 105:
			*uParam1 = { 1355.763f, -1301.3607f, 76.7643f };
			return 1;
	
		case 115:
			*uParam1 = { -5529.573f, -2927.6167f, -0.6848f };
			break;
	
		default:
			*uParam1 = { 2903.6655f, 1315.805f, 44.3104f };
			return 1;
	}

	return 0;
}

int func_11(int iParam0, var uParam1) // Position - 0xC0A Hash - 0xB774B15 ^0x2271078E
{
	BOOL flag;

	uParam1->f_58 = 1;
	uParam1->f_59 = 34;

	if (func_39(16) && !func_39(21))
		flag = true;
	else
		flag = false;

	switch (iParam0)
	{
		case 5:
			uParam1->f_3 = { 2503.7415f, -1307.1354f, 47.9537f };
			uParam1->f_6 = { 2503.7415f, -1307.1354f, 47.9537f };
			uParam1->f_9 = { 2502.7302f, -1309.8429f, 50.6283f };
			uParam1->f_12 = { -11.6079f, 0f, -14.2586f };
			uParam1->f_15 = { 2505.3884f, -1309.63f, 50.6283f };
			uParam1->f_18 = { -11.6079f, 0f, 21.707f };
			uParam1->f_21 = { 2517.8447f, -1306.583f, 47.9532f };
			uParam1->f_24 = { -26.7304f, 0f, 25.2209f };
		
			if (!func_33(5))
			{
				uParam1->f_27 = { 2517.8447f, -1306.583f, 47.9532f };
				uParam1->f_30 = { 2517.8447f, -1306.583f, 47.9532f };
				uParam1->f_33 = 275.7476f;
			}
			else
			{
				uParam1->f_27 = { 2158.2073f, -1334.8241f, 41.852f };
				uParam1->f_30 = { 2153.072f, -1332.934f, 42.0877f };
				uParam1->f_33 = 63.3853f;
			}
		
			uParam1->f_34 = { 2517.8447f, -1306.583f, 47.9532f };
			uParam1->f_37 = { 2517.8447f, -1306.583f, 47.9532f };
			uParam1->f_2 = -1;
			uParam1->f_60 = 5;
			return 1;
	
		case 26:
			if (!func_33(26))
			{
				uParam1->f_3 = { -1810.2618f, -351.5755f, 160.4386f };
				uParam1->f_6 = { -1810.2618f, -351.5755f, 160.4386f };
				uParam1->f_9 = { -1810.5986f, -353.7559f, 162.963f };
				uParam1->f_12 = { -28.1011f, 0f, -8.544f };
				uParam1->f_15 = { -1812.1763f, -352.5742f, 162.963f };
				uParam1->f_18 = { -28.2679f, 0f, -55.9402f };
				uParam1->f_21 = { -1801.6088f, -346.8549f, 165.8972f };
				uParam1->f_24 = { -6.9047f, 0f, 128.5486f };
				uParam1->f_27 = { -1803.986f, -351.9818f, 163.1167f };
				uParam1->f_30 = { -1801.5292f, -353.1572f, 163.0777f };
				uParam1->f_33 = 243.1584f;
				uParam1->f_34 = { -1809.8505f, -349.1629f, 163.6478f };
				uParam1->f_37 = { -1805.275f, -352.656f, 163.1386f };
				uParam1->f_2 = 472;
				uParam1->f_60 = 26;
			}
			else
			{
				uParam1->f_3 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_6 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_9 = { -273.5943f, 810.2109f, 120.875f };
				uParam1->f_12 = { -33.6383f, 0f, -50.2445f };
				uParam1->f_15 = { -273.971f, 811.4304f, 120.875f };
				uParam1->f_18 = { -33.6383f, 0f, -91.7191f };
				uParam1->f_21 = { -271.6968f, 801.6126f, 120.311f };
				uParam1->f_24 = { -6.6603f, 0f, 84.6681f };
				uParam1->f_27 = { -275.209f, 797.9658f, 117.9365f };
				uParam1->f_30 = { -275.0261f, 795.0437f, 117.7023f };
				uParam1->f_33 = 182.3676f;
				uParam1->f_34 = { -275.8173f, 805.5717f, 118.3864f };
				uParam1->f_37 = { -276.4383f, 800.1778f, 118.4085f };
				uParam1->f_2 = 3;
				uParam1->f_60 = 76;
			}
		
			return 1;
	
		case 38:
			uParam1->f_3 = { -766.9637f, -1264.285f, 42.9484f };
			uParam1->f_6 = { -766.9637f, -1264.285f, 42.9484f };
			uParam1->f_9 = { -767.8228f, -1265.6139f, 45.4401f };
			uParam1->f_12 = { -40.1575f, 0f, -28.7499f };
			uParam1->f_15 = { -766.1311f, -1265.5538f, 45.4401f };
			uParam1->f_18 = { -40.1575f, 0f, 31.4592f };
			uParam1->f_21 = { -756.7747f, -1270.0374f, 45.4809f };
			uParam1->f_24 = { -19.0657f, 0f, -96.9653f };
		
			if (!func_33(38))
			{
				uParam1->f_27 = { -754.2406f, -1269.9553f, 43.0754f };
				uParam1->f_30 = { -751.5127f, -1270.1647f, 42.449f };
				uParam1->f_33 = 265.8834f;
			}
			else
			{
				uParam1->f_27 = { -1058.057f, -1216.4243f, 62.3631f };
				uParam1->f_30 = { -1061.8849f, -1216.4902f, 62.6087f };
				uParam1->f_33 = 96.0826f;
			}
		
			uParam1->f_34 = { -756.3996f, -1272.2018f, 43.1796f };
			uParam1->f_37 = { -754.8086f, -1272.2612f, 43.1187f };
			uParam1->f_2 = 509;
			uParam1->f_60 = 38;
			return 1;
	
		case 57:
			uParam1->f_3 = { 2903.6655f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.6655f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.5776f, 1316.0834f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.9988f, 1314.9847f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.8324f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
		
			if (!func_33(57))
			{
				uParam1->f_27 = { 2912.5466f, 1310.1227f, 43.6438f };
				uParam1->f_30 = { 2914.9678f, 1309.1846f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.2997f, 47.8403f };
				uParam1->f_30 = { 2818.8652f, 1135.5194f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
		
			uParam1->f_34 = { 2955.7158f, 1357.4952f, 44.1385f };
			uParam1->f_37 = { 2951.7524f, 1359.7113f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
	
		case 76:
			if (!func_33(76))
			{
				uParam1->f_3 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_6 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_9 = { -273.5943f, 810.2109f, 120.875f };
				uParam1->f_12 = { -33.6383f, 0f, -50.2445f };
				uParam1->f_15 = { -273.971f, 811.4304f, 120.875f };
				uParam1->f_18 = { -33.6383f, 0f, -91.7191f };
				uParam1->f_21 = { -271.6968f, 801.6126f, 120.311f };
				uParam1->f_24 = { -6.6603f, 0f, 84.6681f };
				uParam1->f_27 = { -275.209f, 797.9658f, 117.9365f };
				uParam1->f_30 = { -275.0261f, 795.0437f, 117.7023f };
				uParam1->f_33 = 182.3676f;
				uParam1->f_34 = { -275.8173f, 805.5717f, 118.3864f };
				uParam1->f_37 = { -276.4383f, 800.1778f, 118.4085f };
				uParam1->f_2 = 3;
				uParam1->f_60 = 76;
			}
			else
			{
				uParam1->f_3 = { 2903.6655f, 1315.805f, 44.3104f };
				uParam1->f_6 = { 2903.6655f, 1315.805f, 44.3104f };
				uParam1->f_9 = { 2904.5776f, 1316.0834f, 45.674f };
				uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
				uParam1->f_15 = { 2903.9988f, 1314.9847f, 45.674f };
				uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
				uParam1->f_21 = { 2950.544f, 1354.8324f, 46.5247f };
				uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
				uParam1->f_27 = { 2912.5466f, 1310.1227f, 43.6438f };
				uParam1->f_30 = { 2914.9678f, 1309.1846f, 43.4608f };
				uParam1->f_33 = 246.9621f;
				uParam1->f_34 = { 2955.7158f, 1357.4952f, 44.1385f };
				uParam1->f_37 = { 2951.7524f, 1359.7113f, 44.1435f };
				uParam1->f_2 = 382;
				uParam1->f_60 = 78;
			}
		
			return 1;
	
		case 78:
			uParam1->f_3 = { 2903.6655f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.6655f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.5776f, 1316.0834f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.9988f, 1314.9847f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.8324f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
		
			if (!func_33(78))
			{
				uParam1->f_27 = { 2912.5466f, 1310.1227f, 43.6438f };
				uParam1->f_30 = { 2914.9678f, 1309.1846f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.2997f, 47.8403f };
				uParam1->f_30 = { 2818.8652f, 1135.5194f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
		
			uParam1->f_34 = { 2955.7158f, 1357.4952f, 44.1385f };
			uParam1->f_37 = { 2951.7524f, 1359.7113f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
	
		case 105:
			if (!func_33(105) && !flag)
			{
				uParam1->f_3 = { 1355.763f, -1301.3607f, 76.7643f };
				uParam1->f_6 = { 1355.763f, -1301.3607f, 76.7643f };
				uParam1->f_9 = { 1357.6364f, -1301.202f, 78.6542f };
				uParam1->f_12 = { -28.2134f, 0f, 80.8091f };
				uParam1->f_15 = { 1356.3505f, -1303.3783f, 78.6542f };
				uParam1->f_18 = { -28.2134f, 0f, 32.6023f };
				uParam1->f_21 = { 1358.5975f, -1307.626f, 78.7945f };
				uParam1->f_24 = { -26.9284f, 0f, 160.3281f };
				uParam1->f_27 = { 1356.9276f, -1310.3575f, 75.9901f };
				uParam1->f_30 = { 1356.3121f, -1311.9492f, 75.8727f };
				uParam1->f_33 = 157.5328f;
				uParam1->f_34 = { 1340.875f, -1297.5869f, 76.3625f };
				uParam1->f_37 = { 1339.9131f, -1303.0038f, 76.3098f };
				uParam1->f_2 = 70;
				uParam1->f_60 = 105;
			}
			else
			{
				uParam1->f_3 = { 2503.7415f, -1307.1354f, 47.9537f };
				uParam1->f_6 = { 2503.7415f, -1307.1354f, 47.9537f };
				uParam1->f_9 = { 2502.7302f, -1309.8429f, 50.6283f };
				uParam1->f_12 = { -11.6079f, 0f, -14.2586f };
				uParam1->f_15 = { 2505.3884f, -1309.63f, 50.6283f };
				uParam1->f_18 = { -11.6079f, 0f, 21.707f };
				uParam1->f_21 = { 2517.8447f, -1306.583f, 47.9532f };
				uParam1->f_24 = { -26.7304f, 0f, 25.2209f };
				uParam1->f_27 = { 2517.8447f, -1306.583f, 47.9532f };
				uParam1->f_30 = { 2517.8447f, -1306.583f, 47.9532f };
				uParam1->f_33 = 275.7476f;
				uParam1->f_34 = { 2517.8447f, -1306.583f, 47.9532f };
				uParam1->f_37 = { 2517.8447f, -1306.583f, 47.9532f };
				uParam1->f_2 = 256;
				uParam1->f_60 = 5;
			}
		
			return 1;
	
		case 115:
			uParam1->f_3 = { -5532.6333f, -2924.589f, -0.8993f };
			uParam1->f_6 = { -5529.573f, -2927.6167f, -0.6848f };
			uParam1->f_9 = { -5529.9f, -2926.97f, -1.19f };
			uParam1->f_12 = { -2.25f, 0f, -45.756f };
			uParam1->f_15 = { -5529.9f, -2926.97f, -1.19f };
			uParam1->f_18 = { -2.25f, 0f, -45.756f };
			uParam1->f_21 = { -5530.5f, -2941.74f, 0.39f };
			uParam1->f_24 = { -6.155f, 0f, 32.786f };
			uParam1->f_34 = { -5528.508f, -2930.2578f, -1.3609f };
			uParam1->f_37 = { -5526.9985f, -2933.4246f, -1.9664f };
			uParam1->f_27 = { -5526.2397f, -2934.0474f, -1.9674f };
			uParam1->f_33 = -147.66f;
			uParam1->f_2 = 348;
			uParam1->f_60 = 115;
			return 1;
	
		default:
			uParam1->f_3 = { 2903.6655f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.6655f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.5776f, 1316.0834f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.9988f, 1314.9847f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.8324f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
		
			if (!func_33(78))
			{
				uParam1->f_27 = { 2912.5466f, 1310.1227f, 43.6438f };
				uParam1->f_30 = { 2914.9678f, 1309.1846f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.2997f, 47.8403f };
				uParam1->f_30 = { 2818.8652f, 1135.5194f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
		
			uParam1->f_34 = { 2955.7158f, 1357.4952f, 44.1385f };
			uParam1->f_37 = { 2951.7524f, 1359.7113f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
	}

	return 0;
}

eStackSize func_12(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x1A4B Hash - 0x25DFFF2C ^0x74CE6365
{
	eStackSize stackSize;

	stackSize = func_40();

	if (func_41(stackSize))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[stackSize /*35*/].f_3, vParam0))
			return stackSize;

	return func_42(vParam0, bParam3);
}

void func_13(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1A86 Hash - 0x5BA5D77C ^0xF663B46C
{
	int num;

	num = 3490746;

	if (bParam4)
		num = num | 1;

	if (bParam5)
		num = num | 72;

	if (bParam6)
		num = num | 6;

	if (bParam7)
		num = num | 524288;

	if (bParam8)
		num = num | 131072;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

void func_14(BOOL bParam0) // Position - 0x1ADE Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_31(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_43(&Global_1935630, 4194304);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

int func_15(Any* panParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x1B81 Hash - 0x6F6844BD ^0xDEBB765D
{
	int num;
	int num2;

	num = iParam2;
	num.f_1 = sParam1;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE(panParam0, &num, bParam3);
	return num2;
}

void func_16() // Position - 0x1BA1 Hash - 0x975142F2 ^0x77EE5EFF
{
	int i;

	VOLUME::_0x748C5F51A18CB8F0(false);

	for (i = 0; i < 6; i = i + 1)
	{
		if (func_44(i))
			func_45(i);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

void func_17() // Position - 0x1BD4 Hash - 0xDDCCD05A ^0xDDCCD05A
{
	int i;

	for (i = 0; i < func_46(); i = i + 1)
	{
		if (func_47(i) == 3)
		{
			if (func_48(i) == 1)
			{
				func_49(i, 0);
				func_50(1);
			}
			else
			{
				func_49(i, 0);
				func_50(true);
			}
		}
	}

	return;
}

void func_18(BOOL bParam0) // Position - 0x1C20 Hash - 0x204A672F ^0x204A672F
{
	if (!func_38(func_51(4), true) || func_36(func_51(33)) || func_36(func_51(34)))
		return;

	func_52(bParam0);
	func_53(bParam0);
	func_54(false);
	return;
}

void func_19() // Position - 0x1C6A Hash - 0xF24D6F22 ^0x32704255
{
	BOOL flag;
	BOOL flag2;
	int i;
	BOOL flag3;
	BOOL flag4;
	int num;

	flag = func_37();
	flag2 = false;

	if (flag && !func_38(Global_1835011[4 /*74*/].f_1, true))
		flag2 = true;

	if (flag2)
	{
		if (func_55(5))
		{
			func_56(5, 0);
			func_57(0, 0);
			func_58(0, 1);
		
			if (func_59() == 5)
			{
				func_60(0);
				func_61(0);
			}
		
			func_62(5);
			return;
		}
	}

	if (!Global_1310720.f_7)
		return;

	for (i = 0; i < 7; i = i + 1)
	{
		func_63(i);
		func_64(i);
		func_65(i);
	}

	i = -1;

	for (i = 0; i < 7; i = i + 1)
	{
		flag3 = false;
	
		if (i == 0 || i == 1)
			flag3 = true;
	
		if (!flag3)
		{
		}
		else
		{
			flag4 = false;
		
			if (i == 0)
				flag4 = true;
			else if (i == 1 && func_66(0) == 0 && func_66(5) == 0)
				flag4 = true;
		
			if (func_67(i))
			{
				num = func_68(i);
			
				if (num + 10000 > Global_1310720.f_16)
				{
					func_69(i, 0);
					func_70(i, -1f);
					func_71(i, 0);
					func_72(i);
				}
				else
				{
					func_73(i);
					func_74(i);
				
					if (flag4)
					{
						func_75(5, 0);
						func_76(5, -15);
						func_72(5);
					}
				}
			}
		
			if (func_66(i) == 0 && func_66(5) == 1 && func_77(5) == 1)
			{
				if (func_78(5) + 10000 > Global_1310720.f_16)
				{
					func_56(5, i);
					func_58(i, 1);
				
					if (i == 0 && func_59() == 5)
					{
						func_60(0);
						func_61(0);
					}
				
					func_62(5);
				}
			}
		}
	}

	return;
}

void func_20() // Position - 0x1E2B Hash - 0x3C2549CA ^0x3C2549CA
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < 7; i = i + 1)
	{
		flag = false;
	
		if (i == 6)
			flag = true;
	
		func_79(i, flag);
	}

	if (func_80())
		func_81();

	return;
}

int func_21() // Position - 0x1E67 Hash - 0x286EE6DB ^0x286EE6DB
{
	if (func_82())
		return 0;

	return 1;
}

BOOL func_22() // Position - 0x1E7B Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_23(eStackSize essParam0) // Position - 0x1E84 Hash - 0xBE1E37D3 ^0x9A01F42C
{
	if (!func_41(essParam0))
		return true;

	if (!VOLUME::IS_POINT_IN_VOLUME(Global_1888801[essParam0 /*35*/].f_3, Global_36))
		return true;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[essParam0 /*35*/].f_23)))
		return true;

	if (func_83(essParam0) != -1)
		if (func_84() != essParam0)
			return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("generic_ghosttown")) > 0)
		return true;

	return func_85(essParam0);
}

int func_24(eStackSize essParam0) // Position - 0x1EF8 Hash - 0x5822495 ^0x141CE12F
{
	int i;

	if (!func_41(essParam0))
		return -1;

	for (i = 0; i < 17; i = i + 1)
	{
		if (Global_1395601.f_5[i /*28*/] == essParam0)
			return i;
	}

	return -1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1F36 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_26(int iParam0) // Position - 0x1F60 Hash - 0x49BFDFE0 ^0x49BFDFE0
{
	if (!func_86(iParam0))
		return false;

	return Global_1914270[iParam0] != 0;
}

BOOL func_27(BOOL bParam0) // Position - 0x1F80 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_21 && bParam0 != false;
}

Vector3 func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, float fParam9, float fParam10) // Position - 0x1F90 Hash - 0x79E6A966 ^0x5DD05354
{
	var unk;

	unk = { func_87(uParam0, uParam3, uParam4, bParam5, bParam6, true, bParam7, bParam8, fParam9, fParam10, -1, 1103626240) };

	if (_IS_NULL_VECTOR(unk))
		unk = { func_87(uParam0, uParam3, uParam4, false, true, true, bParam7, bParam8, 0, 0, -1, 1103626240) };

	return unk;
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x1FE9 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_88(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_89(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_90(iParam16);
			return;
		}
	}

	return;
}

void func_30() // Position - 0x2085 Hash - 0x12FD943F ^0x7714E643
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}

	return;
}

void func_31(int iParam0, int iParam1) // Position - 0x20A8 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_32(int iParam0) // Position - 0x20BD Hash - 0x29A8F290 ^0x870EAF89
{
	Global_1310720.f_9 = iParam0;
	return;
}

BOOL func_33(eStackSize essParam0) // Position - 0x20CD Hash - 0x6430C01F ^0xD1700991
{
	if (!func_41(essParam0))
		return false;

	return func_91(essParam0, 16777216);
}

int func_34(eStackSize essParam0) // Position - 0x20EE Hash - 0x1D38F5CA ^0xC923C5D1
{
	eStackSize i;

	if (!func_92(essParam0))
		return 0;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2 == essParam0)
							return 1;
						break;
				}
			}
		}
	}

	return 0;
}

int func_35(int iParam0) // Position - 0x2192 Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_47(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_36(int iParam0) // Position - 0x21FD Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_93(iParam0);
	return num == 3 || num == 4;
}

BOOL func_37() // Position - 0x221B Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_38(int iParam0, BOOL bParam1) // Position - 0x223A Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_93(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

BOOL func_39(int iParam0) // Position - 0x226B Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_38(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

eStackSize func_40() // Position - 0x22CA Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_41(eStackSize essParam0) // Position - 0x22D8 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

eStackSize func_42(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x22EE Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_94(vParam0);
	num2 = -1;

	if (Global_1894882[num] > 0)
	{
		num3 = Global_1894882[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1894065[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[num4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[num4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

void func_43(int iParam0, int iParam1) // Position - 0x23A5 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_44(int iParam0) // Position - 0x23B6 Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

void func_45(int iParam0) // Position - 0x23CB Hash - 0xE1F6E7F0 ^0xF6BF71B1
{
	eStackSize i;
	int j;

	VOLUME::_0x748C5F51A18CB8F0(false);

	if (!func_44(iParam0))
		return;

	func_95(iParam0, false);

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_41(i))
		{
			if (func_97(func_96(i, true, true)) == iParam0)
			{
				func_98(i, false);
				func_99(i, false, 350);
			}
		}
	}

	for (j = 0; j < 17; j = j + 1)
	{
		if (func_100(j))
			if (func_9(j) == iParam0)
				func_101(j, false);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

int func_46() // Position - 0x245D Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

int func_47(int iParam0) // Position - 0x2478 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_102(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_48(int iParam0) // Position - 0x24B9 Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_3(iParam0))
		return 0;

	return func_104(func_103(iParam0));
}

void func_49(int iParam0, int iParam1) // Position - 0x24D9 Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_105(iParam0);
	else
		func_106(iParam0, iParam1);

	func_107();
	return;
}

void func_50(BOOL bParam0) // Position - 0x2521 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1898164 = Global_1898164 || bParam0;
	return;
}

int func_51(int iParam0) // Position - 0x2534 Hash - 0x7647021A ^0xF0097466
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_52(BOOL bParam0) // Position - 0x2546 Hash - 0xE27B706 ^0xD6B7B175
{
	BOOL flag;

	if (Global_40.f_7748.f_1 < 9)
	{
		if (func_108(Global_40.f_7748.f_5, true))
		{
			if (Global_40.f_7748.f_1 <= 9)
				if (Global_40.f_7748.f_1 < 9)
					flag = true;
				else if (func_109())
					flag = true;
		
			if (flag)
				if (bParam0)
					func_110();
				else
					func_111();
		}
	}

	if (flag)
		func_112(9, 0, 0, 0, false);

	return;
}

void func_53(BOOL bParam0) // Position - 0x25BC Hash - 0xE7AD0766 ^0x65CF9B3F
{
	int i;
	BOOL flag;
	BOOL flag2;

	for (i = 0; i < Global_40.f_7731; i = i + 1)
	{
		if (Global_40.f_7731[i /*5*/] < 10)
		{
			if (func_108(Global_40.f_7731[i /*5*/].f_3, true))
			{
				if (Global_40.f_7731[i /*5*/] <= 10)
					if (Global_40.f_7731[i /*5*/] < 7)
						flag = true;
					else if (func_113(i))
						flag = true;
					else
						flag = false;
			
				if (flag)
				{
					if (bParam0)
						func_114(i);
					else
						func_115(i, false);
				
					flag2 = true;
				}
			}
		}
	}

	if (flag2)
	{
		func_112(10, 0, 0, 0, false);
		func_112(7, 0, 0, 0, false);
	}

	return;
}

void func_54(BOOL bParam0) // Position - 0x266B Hash - 0x9993FB0 ^0x7A2BBD9F
{
	if (func_116() && bParam0 || func_108(Global_40.f_7748, true))
	{
		Global_40.f_7748.f_3 = 0;
	
		if (bParam0)
			Global_40.f_7748 = func_117();
		else
			func_118(492, true);
	
		func_112(9, 0, 0, 0, false);
	}

	return;
}

BOOL func_55(int iParam0) // Position - 0x26BF Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_77(iParam0) == 0)
		return false;

	return true;
}

void func_56(int iParam0, int iParam1) // Position - 0x26F2 Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	Ped horse2;
	BOOL flag2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_120(iParam0);
	func_120(iParam0);
	func_121(iParam0, iParam1);
	func_122(iParam0, iParam1);
	func_123(iParam0, iParam1);
	horse = func_124(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		if (iParam0 == 0 || iParam0 == 1)
			func_125(horse);
	
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse);
		}
		else if (iParam0 == 1)
		{
			flag = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	horse2 = func_124(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
	{
		if (iParam1 == 0 || iParam1 == 1)
			func_125(horse2);
	
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, horse2);
		}
		else if (iParam1 == 1)
		{
			flag2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, horse2);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == horse2)
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);
		
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == horse2)
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);
		}
	}

	func_126();
	return;
}

void func_57(int iParam0, int iParam1) // Position - 0x2814 Hash - 0x42DB579F ^0xB4972906
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = iParam1;
	return;
}

void func_58(int iParam0, int iParam1) // Position - 0x2847 Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

int func_59() // Position - 0x287A Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3054;
}

void func_60(int iParam0) // Position - 0x288B Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_61(int iParam0) // Position - 0x289E Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

void func_62(int iParam0) // Position - 0x28B3 Hash - 0xBF25D4D5 ^0xC0CECB59
{
	var unk;
	int i;
	int j;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	TEXT_LABEL_ASSIGN_STRING(&Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_127(&unk);
	func_128(iParam0, unk);
	func_129(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_130(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_131(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_132(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_133(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_134(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_135(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_136(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_137(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));

	Global_1900383[iParam0 /*45*/].f_26 = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));

	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
	return;
}

void func_63(int iParam0) // Position - 0x2C05 Hash - 0xF2ABA360 ^0x8F810744
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_129(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	return;
}

void func_64(int iParam0) // Position - 0x2C3A Hash - 0xB8889113 ^0xCF69E357
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_130(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	return;
}

void func_65(int iParam0) // Position - 0x2C70 Hash - 0xB8889113 ^0xCF69E357
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_131(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	return;
}

int func_66(int iParam0) // Position - 0x2CA6 Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

BOOL func_67(int iParam0) // Position - 0x2CD9 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_138(iParam0))
		return false;

	ped = func_124(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return true;

	return false;
}

int func_68(int iParam0) // Position - 0x2D2E Hash - 0x8CE2C9DC ^0xC2CEF3D7
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_1900383[iParam0 /*45*/].f_41;
}

void func_69(int iParam0, int iParam1) // Position - 0x2D5C Hash - 0xA8C13CC2 ^0x5A312A36
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_420 = iParam1;
	return;
}

void func_70(int iParam0, float fParam1) // Position - 0x2D90 Hash - 0x378678AB ^0xB2BC5FB8
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1 = fParam1;
	return;
}

void func_71(int iParam0, int iParam1) // Position - 0x2DC6 Hash - 0xDE428423 ^0xD55781B1
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_41 = iParam1;
	return;
}

void func_72(int iParam0) // Position - 0x2DF4 Hash - 0x44423EC0 ^0x30E46FC4
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_42 = 0;
	return;
}

void func_73(int iParam0) // Position - 0x2E21 Hash - 0x2692E663 ^0xF0DB5F3E
{
	Ped ped;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_138(iParam0))
		return;

	ped = func_124(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
	return;
}

void func_74(int iParam0) // Position - 0x2E6C Hash - 0xBFB1CF9D ^0x3BD5A611
{
	Player player;
	BOOL flag;

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);
	func_120(iParam0);

	if (func_139(56))
		func_140(56);

	if (func_141(56))
		func_142(56);

	if (func_139(57))
		func_140(57);

	if (func_141(57))
		func_142(57);

	flag = false;

	if (iParam0 == 0)
		flag = true;
	else if (iParam0 == 1 && func_66(0) == 0 && func_66(5) == 0)
		flag = true;

	if (flag)
		func_143(iParam0, 1);
	else
		func_144(iParam0, false);

	return;
}

void func_75(int iParam0, int iParam1) // Position - 0x2F1E Hash - 0x42DB579F ^0x1BA2C8C6
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = iParam1;
	return;
}

void func_76(int iParam0, int iParam1) // Position - 0x2F51 Hash - 0x42DB579F ^0x697A7CA1
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = iParam1;
	return;
}

int func_77(int iParam0) // Position - 0x2F84 Hash - 0xACA56E21 ^0x54175BD8
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_11;
}

int func_78(int iParam0) // Position - 0x2FB7 Hash - 0xC8ABD8E2 ^0xDD3DF7D0
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_12;
}

void func_79(int iParam0, BOOL bParam1) // Position - 0x2FEA Hash - 0xE2A96183 ^0x7447BC30
{
	int idOfThisThread;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_145(iParam0);
	func_120(iParam0);
	func_146(iParam0);
	func_147(iParam0);

	if (func_148(iParam0))
	{
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (func_149(iParam0) != idOfThisThread)
			return;
	}

	func_150(iParam0, 4);

	if (bParam1)
		func_150(iParam0, 16);

	return;
}

BOOL func_80() // Position - 0x3055 Hash - 0x57592B8C ^0xB4B7573B
{
	Object* p_object;

	p_object = func_151();

	if (ENTITY::DOES_ENTITY_EXIST(p_object))
		return true;

	return false;
}

void func_81() // Position - 0x3071 Hash - 0x9A84CB87 ^0x788CD227
{
	Object* p_object;

	p_object = func_151();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, true);

	OBJECT::DELETE_OBJECT(&p_object);
	func_152(0);
	return;
}

BOOL func_82() // Position - 0x30A9 Hash - 0x2F3FC5BE ^0x2F3FC5BE
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_153(i))
			return true;
	}

	return false;
}

int func_83(eStackSize essParam0) // Position - 0x30D1 Hash - 0xFE841B01 ^0xFE841B01
{
	switch (essParam0)
	{
		case -1:
			return -1;
	
		case 4:
			return 5;
	
		case 9:
			return 3;
	
		case 22:
			return 7;
	
		case 37:
			return 8;
	
		case 43:
			return 0;
	
		case 58:
			return 4;
	
		case 71:
			return 1;
	
		case 79:
			return 6;
	
		case 98:
			return 2;
	
		default:
		
	}

	return -1;
}

eStackSize func_84() // Position - 0x3147 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_85(eStackSize essParam0) // Position - 0x3157 Hash - 0xEECF70F1 ^0xEECF70F1
{
	if (!func_41(essParam0))
		return false;

	return func_91(essParam0, 8);
}

BOOL func_86(int iParam0) // Position - 0x3175 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

Vector3 func_87(Vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x318B Hash - 0x733D4CA6 ^0x733D4CA6
{
	int num;
	int num2;
	float num3;
	float num4;
	var unk;
	Vector3 vector;
	Volume volume;
	BOOL flag;
	BOOL flag2;
	var unk6;
	BOOL flag3;
	Any any;
	Any any2;
	Any any3;
	Any any4;

	num3 = 9999999f;
	func_154(&flag2, &unk6);
	flag3 = false;

	if (flag2)
		if (func_59() == 0 && !func_155(0))
			flag3 = true;

	if (!func_156(15, &any))
		return 0f, 0f, 0f;

	VOLUME::_0x748C5F51A18CB8F0(false);
	any2 = { any };

	if (bParam7)
	{
		volume = func_157();
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
		{
		}
	}

	if (!func_158(Global_1310720.f_21))
		iParam10 = iParam11;

	any.f_2 = 723128514;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&any3, &any);

	while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any3) > num)
	{
		num2 = 0;
		any2.f_2 = -1148748386;
		any2.f_3 = num;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&any4, &any2);
	
		while (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any2, any4) > num2)
		{
			vector = { func_159(num, num2) };
			flag = func_160(num, num2);
			num4 = BUILTIN::VDIST(vParam0, vector);
		
			if (num4 < num3 && num4 > iParam10 && !_IS_NULL_VECTOR(vector) && func_161(num, bParam8, iParam12) && !func_162(num) || flag)
			{
				if (func_163(vector, num, num2, bParam5, bParam6, flag3, volume, bParam9, iParam13))
				{
					unk = { vector };
					num3 = BUILTIN::VDIST(vParam0, vector);
					*uParam3 = num;
					*uParam4 = num2;
				
					if (flag)
						break;
				}
			}
		
			num2 = num2 + 1;
		}
	
		num = num + 1;
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return unk;
}

BOOL func_88(int iParam0, int iParam1) // Position - 0x3319 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_89(const char* sParam0) // Position - 0x3328 Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_90(int iParam0) // Position - 0x3362 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_88(iParam0, 1))
		func_164(1);

	return;
}

BOOL func_91(eStackSize essParam0, BOOL bParam1) // Position - 0x3379 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

BOOL func_92(int iParam0) // Position - 0x33AC Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

int func_93(int iParam0) // Position - 0x33C2 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_3(iParam0))
		return -1;

	return func_47(iParam0);
}

int func_94(var uParam0, var uParam1, var uParam2) // Position - 0x33DE Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_165(uParam0, 0f, 0f, 0, 2);
	return func_165(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

void func_95(int iParam0, BOOL bParam1) // Position - 0x3419 Hash - 0xB1C1C6D6 ^0xB1C1C6D6
{
	int i;

	if (!func_44(iParam0))
		return;

	if (func_166(iParam0, 2) && !bParam1)
		return;

	if (bParam1)
		func_167(iParam0, 1);
	else
		func_168(iParam0, 1);

	func_169(iParam0, bParam1);

	for (i = 0; i < 17; i = i + 1)
	{
		if (func_9(i) == iParam0)
			func_101(i, false);
	}

	return;
}

int func_96(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3486 Hash - 0x460680B1 ^0xEA5BF9A6
{
	int num;

	switch (essParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (essParam0 == func_84())
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			break;
	
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
	
		case 22:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_PRONGHORN_RANCH");
		
			if (func_38(Global_1835011[59 /*74*/].f_1, true))
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			else
				return joaat("LAW_REGION_BIG_VALLEY");
			break;
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 32:
			return joaat("LAW_REGION_SISIKA");
	
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 37:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_BEECHERS_HOPE");
		
			if (func_38(Global_1347702[9 /*49*/].f_15, true))
				return joaat("LAW_REGION_BEECHERS_HOPE");
			else if (func_172(45))
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			else
				return joaat("LAW_REGION_GREAT_PLAINS");
			break;
	
		case 38:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_172(45))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 56:
			return joaat("LAW_REGION_WAPITI");
	
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 61:
			return joaat("LAW_REGION_MANICATO");
	
		case 65:
			return joaat("LAW_REGION_CORNWALL");
	
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 76:
			if (func_170(essParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
	
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
	
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 105:
			if (func_170(essParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 110:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_MANZANITA_POST");
		
			if (func_172(45))
				return joaat("LAW_REGION_MANZANITA_POST");
			else
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			break;
	
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 127:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_172(45))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_173(essParam0);
	
		if (num != -1)
			return func_174(num, bParam1);
	}

	return 0;
}

int func_97(int iParam0) // Position - 0x37A8 Hash - 0x4BF152B5 ^0x4BF152B5
{
	switch (iParam0)
	{
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
	
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
	
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
	
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
	
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
	}

	return -1;
}

void func_98(eStackSize essParam0, BOOL bParam1) // Position - 0x390A Hash - 0x28F0F3B1 ^0xD4160260
{
	BOOL flag;

	if (!func_41(essParam0))
		return;

	flag = func_91(essParam0, 67108864);

	if (bParam1)
	{
		if (!flag && func_175(essParam0) == 1 && essParam0 != 120 && essParam0 != 92)
		{
			func_176(essParam0, func_117());
			func_177(essParam0, 67108864);
		}
	}
	else if (flag)
	{
		func_178(essParam0, 67108864);
		func_176(essParam0, -15);
	}

	func_179(essParam0);
	return;
}

void func_99(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x398F Hash - 0x20ACD3AE ^0xBADD8DC6
{
	Volume volume;
	BOOL flag;
	int num;
	int num2;

	if (!func_41(essParam0))
		return;

	if (func_33(essParam0) && !bParam1)
		return;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[essParam0 /*35*/].f_5))
		volume = Global_1888801[essParam0 /*35*/].f_5;
	else
		volume = func_180(essParam0);

	flag = func_91(essParam0, 33554432);

	if (bParam1)
	{
		num = func_181(essParam0);
	
		if (iParam2 > num || !func_183(func_182(essParam0)))
		{
			func_184(essParam0, func_117());
			func_185(essParam0, iParam2);
		}
	
		if (!flag)
		{
			func_177(essParam0, 33554432);
		
			if (VOLUME::DOES_VOLUME_EXIST(volume))
			{
				if (essParam0 == 38)
					num2 = 0;
				else
					num2 = 1;
			
				PATHFIND::_0xF2A2177AC848B3A8(volume, 0, num2);
			}
		}
	}
	else if (flag)
	{
		func_178(essParam0, 33554432);
		func_184(essParam0, -15);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			PATHFIND::_0xF2A2177AC848B3A8(volume, 1, 1);
	}

	func_186(essParam0);
	return;
}

BOOL func_100(int iParam0) // Position - 0x3A8B Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

void func_101(int iParam0, BOOL bParam1) // Position - 0x3AA1 Hash - 0xCE05C781 ^0xCE05C781
{
	if (!func_100(iParam0))
		return;

	if (bParam1)
	{
		func_187(iParam0, true);
	}
	else
	{
		if (func_188(iParam0))
			return;
	
		func_189(iParam0, 1);
	}

	func_190(iParam0, bParam1);
	return;
}

int func_102(int iParam0) // Position - 0x3AE0 Hash - 0x6EC15CF9 ^0xE613EBE0
{
	int num;
	int num2;
	int num3;

	if (*Global_1058888.f_40431 <= 0)
		return -1;

	num = 0;
	num2 = *Global_1058888.f_40431 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (Global_1058888.f_40431.f_1[num3 /*2*/] > iParam0)
			num2 = num3 - 1;
		else if (Global_1058888.f_40431.f_1[num3 /*2*/] < iParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

BOOL func_103(int iParam0) // Position - 0x3B61 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_104(BOOL bParam0) // Position - 0x3B9F Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

int func_105(int iParam0) // Position - 0x3BAC Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_102(iParam0);

	if (num < 0)
		return 0;

	return func_191(num);
}

int func_106(int iParam0, int iParam1) // Position - 0x3BCC Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_192(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_107() // Position - 0x3D3C Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

BOOL func_108(eStackSize essParam0, BOOL bParam1) // Position - 0x3D5F Hash - 0x10DE2364 ^0x10DE2364
{
	return func_193(func_117(), essParam0, bParam1);
}

BOOL func_109() // Position - 0x3D73 Hash - 0xC8060AD0 ^0x368DD84C
{
	return Global_40.f_7748.f_6 > 0;
}

void func_110() // Position - 0x3D85 Hash - 0xFE0B91D6 ^0x90DA8C09
{
	var unk;
	var unk2;
	int num;
	int num2;
	var unk3;
	var unk4;
	int num3;
	var unk5;

	func_194(Global_40.f_7748.f_5, &unk, &unk2, &num, &num2, &unk3, &unk4);
	num2 = num2 + (365 * unk4);
	num2 = num2 + (30 * unk3);
	num = num + (24 * num2);

	if (num > 168)
		num = 168;

	while (num > num3)
	{
		func_195(Global_40.f_7748.f_1, &unk5, &num3, false);
		num3 = num3 + (24 * unk5);
		num = num - num3;
		func_111();
	}

	return;
}

void func_111() // Position - 0x3DFF Hash - 0xC59EE296 ^0xE43ED637
{
	int num;

	if (Global_40.f_7748.f_1 >= 9)
	{
		func_196();
		return;
	}

	num = Global_40.f_7748.f_1 + 1;
	func_197(num, false);

	if (func_109())
		if (Global_40.f_7748.f_1 >= 9)
			func_196();
		else
			func_198();

	func_199();
	return;
}

void func_112(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x3E51 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_200(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = iParam3;
	func_201(num);
	return;
}

BOOL func_113(int iParam0) // Position - 0x3E83 Hash - 0x77F2BCDC ^0x977DC5C0
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_114(int iParam0) // Position - 0x3E99 Hash - 0x3E840532 ^0xC63AD80C
{
	var unk;
	var unk2;
	int num;
	int num2;
	var unk3;
	var unk4;
	int num3;
	var unk5;

	func_194(Global_40.f_7731[iParam0 /*5*/].f_3, &unk, &unk2, &num, &num2, &unk3, &unk4);
	num2 = num2 + (365 * unk4);
	num2 = num2 + (30 * unk3);
	num = num + (24 * num2);

	if (num > 168)
		num = 168;

	while (num > num3)
	{
		func_202(iParam0, &unk5, &num3, false);
		num3 = num3 + (24 * unk5);
		num = num - num3;
		func_115(iParam0, false);
	}

	return;
}

void func_115(int iParam0, BOOL bParam1) // Position - 0x3F14 Hash - 0xE3C965C1 ^0xE3C965C1
{
	int num;

	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_203(iParam0);
		return;
	}

	if (!bParam1)
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !func_113(iParam0))
			return;

	num = Global_40.f_7731[iParam0 /*5*/] + 1;
	func_204(num);
	func_205(iParam0, num, false);

	if (func_113(iParam0))
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
			func_203(iParam0);
		else
			func_206(iParam0);

	func_207();
	return;
}

BOOL func_116() // Position - 0x3F9F Hash - 0xB6A628E2 ^0xC1A3BB0C
{
	return 1 == Global_40.f_7748.f_3;
}

eStackSize func_117() // Position - 0x3FB1 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_118(int iParam0, BOOL bParam1) // Position - 0x3FBD Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_208(iParam0, &num, &num2);

	if (!func_209(iParam0, num, num2, bParam1))
		return;

	func_210(num, num2);
	return;
}

int func_119(int iParam0) // Position - 0x3FEA Hash - 0x2E4831B8 ^0x2E4831B8
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

void func_120(int iParam0) // Position - 0x4005 Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}

	Global_1900383[iParam0 /*45*/].f_25 = 0;
	return;
}

void func_121(int iParam0, int iParam1) // Position - 0x4056 Hash - 0x7B6D7BEE ^0xF15D524D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam1 /*436*/], &Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383.f_508), 436);
	return;
}

void func_122(int iParam0, int iParam1) // Position - 0x40B5 Hash - 0x102876F9 ^0x8EA22A40
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &Global_1900383[iParam1 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam1 /*45*/], &Global_1900383[iParam0 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam0 /*45*/], &(Global_1900383.f_463), 45);
	return;
}

int func_123(int iParam0, int iParam1) // Position - 0x40FD Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_211(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_211(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_212(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_213(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_214(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

Ped func_124(int iParam0) // Position - 0x4190 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_125(Ped pedParam0) // Position - 0x41BC Hash - 0xF32FB80D ^0xB662E625
{
	Player player;
	Hash entityModel;
	Hash defaultRelationshipGroupHash;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (func_215(pedParam0))
		return;

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedParam0, false, true);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(pedParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, pedParam0, false);
	PED::_SET_PED_PERSONALITY(pedParam0, joaat("player_horse"));
	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	defaultRelationshipGroupHash = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(entityModel);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, defaultRelationshipGroupHash);
	ENTITY::SET_ENTITY_INVINCIBLE(pedParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(pedParam0, false);
	PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(player, true);
	PED::REQUEST_PED_VISIBILITY_TRACKING(pedParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(pedParam0, false);

	if (func_216(pedParam0))
	{
		num = func_217(pedParam0);
	
		if (func_218(num))
			PED::SET_PED_CONFIG_FLAG(pedParam0, 324, true);
	}

	PED::SET_PED_CONFIG_FLAG(pedParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(pedParam0, 24, false);
	return;
}

void func_126() // Position - 0x4326 Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_138(0))
		func_219(0);

	if (func_138(1))
		func_219(1);

	if (func_138(5))
		func_219(5);

	if (func_138(6))
		func_120(6);

	return;
}

void func_127(var uParam0) // Position - 0x4362 Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_128(int iParam0, Hash hParam1, var uParam2) // Position - 0x437B Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_220(iParam0, hParam1);
	!func_221(iParam0, hParam1.f_1);
	return;
}

void func_129(var uParam0) // Position - 0x43B7 Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_222(&uParam0->[i /*94*/]);
	}

	return;
}

void func_130(var uParam0) // Position - 0x43DB Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_131(Any* panParam0) // Position - 0x43FD Hash - 0x92E3936E ^0xDB085754
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		panParam0->[i /*5*/] = 0;
		panParam0->[i /*5*/].f_1 = 0;
		panParam0->[i /*5*/].f_2 = 0;
		panParam0->[i /*5*/].f_3 = 0;
		panParam0->[i /*5*/].f_4 = 0;
	}

	return;
}

void func_132(int iParam0) // Position - 0x4442 Hash - 0xF98F3B32 ^0x8A036B17
{
	int i;

	iParam0->f_1 = 0f;
	*iParam0 = 0;

	for (i = 0; i < 23; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			iParam0->f_2[i] = 0f;
		}
	}

	return;
}

void func_133(int iParam0, int iParam1) // Position - 0x4478 Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_134(int iParam0, int iParam1) // Position - 0x4498 Hash - 0xD41D26E5 ^0x1EE19431
{
	int num;

	num = 0;

	if (iParam0 == 2)
		num = 50;

	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_135(BOOL bParam0) // Position - 0x44C1 Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_136(BOOL bParam0) // Position - 0x44D2 Hash - 0x5F76BB50 ^0x40F56A0B
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -15;
	return;
}

void func_137(BOOL bParam0) // Position - 0x44EA Hash - 0x92BF775F ^0x1739D63E
{
	*bParam0 = 0;
	bParam0->f_1 = -15;
	return;
}

BOOL func_138(int iParam0) // Position - 0x44FD Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_119(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_139(int iParam0) // Position - 0x4535 Hash - 0x854AC499 ^0x54AC68DD
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1905944.f_22[iParam0 /*9*/].f_1;

	return false;
}

void func_140(int iParam0) // Position - 0x455D Hash - 0xC32B5228 ^0xC32B5228
{
	if (!func_139(iParam0))
		return;

	func_223(true);
	return;
}

BOOL func_141(int iParam0) // Position - 0x4577 Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_208(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_142(int iParam0) // Position - 0x459B Hash - 0xEA7E80B4 ^0xC30D3714
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_1905944[num2];
	MISC::CLEAR_BIT(&address, offset);
	Global_1905944[num2] = address;
	return;
}

void func_143(int iParam0, int iParam1) // Position - 0x45D1 Hash - 0x828B4EDE ^0x60CAEB5D
{
	Player playerIndex;
	Ped ped;
	BOOL isEntityDead;
	BOOL flag;
	var entityCoords;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return;

	ped = func_124(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	flag = false;

	if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(playerIndex))
		flag = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	func_120(iParam0);
	func_120(5);

	if (func_224(5))
		func_144(5, false);

	func_62(5);
	func_56(5, iParam0);
	func_58(5, 1);
	func_57(5, iParam1);

	if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(playerIndex) == ped)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(playerIndex, 0);

	if (PLAYER::_GET_TEMP_PLAYER_HORSE(playerIndex) == ped)
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(playerIndex, 0);

	if (isEntityDead)
	{
		if (flag)
		{
			PED::SET_LOOTING_FLAG(ped, 0, true);
			PED::SET_LOOTING_FLAG(ped, 1, true);
			DECORATOR::DECOR_SET_STRING(ped, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}

	if (iParam1 == 2)
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	if (flag)
	{
		if (_IS_NULL_VECTOR(entityCoords))
		{
			func_60(-1);
			func_61(3);
			func_225(0f, 0f, 0f);
			func_226(-15);
		}
		else
		{
			func_60(5);
			func_61(0);
			func_225(entityCoords);
			func_226(func_117());
		}
	}

	func_227(iParam0);
	func_228(iParam0);
	func_62(iParam0);
	func_126();
	return;
}

void func_144(int iParam0, BOOL bParam1) // Position - 0x4724 Hash - 0x76CF898E ^0x452E6C0C
{
	int idOfThisThread;
	Ped horse;
	BOOL flag;
	Player player;
	Hash entityModel;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_147(iParam0);

	if (func_148(iParam0))
	{
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (func_149(iParam0) != idOfThisThread)
			return;
	}

	if (!func_138(iParam0))
		return;

	horse = func_124(iParam0);
	flag = false;

	if (!ENTITY::IS_ENTITY_DEAD(horse))
		flag = true;

	func_120(iParam0);
	func_146(iParam0);
	func_229(horse);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(horse))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(horse, true, true);

	if (func_230(horse))
		PHYSICS::_UNHITCH_HORSE(horse);

	if (flag)
	{
		TASK::TASK_SMART_FLEE_PED(horse, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(horse, true);
	}

	player = PLAYER::PLAYER_ID();
	PLAYER::IS_PLAYER_DEAD(player);

	if (iParam0 == 0)
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(player, 0);
	else if (iParam0 == 1)
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(player, 0);

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(horse, true);

	if (flag)
	{
		if (bParam1)
			FLOCK::_SET_ANIMAL_IS_WILD(horse, true);
	
		PED::_0x329772C47DBB2FBC(horse);
	}

	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&horse);
	entityModel = ENTITY::GET_ENTITY_MODEL(horse);

	if (STREAMING::IS_MODEL_VALID(entityModel))
		if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
			if (!func_231(entityModel))
				PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	func_62(iParam0);
	return;
}

void func_145(int iParam0) // Position - 0x4861 Hash - 0x4CB73698 ^0x4CB73698
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_232(iParam0, 32);
	func_126();
	return;
}

void func_146(int iParam0) // Position - 0x488F Hash - 0x37EBB9FA ^0xDB7EB9A3
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}

	return;
}

void func_147(int iParam0) // Position - 0x48D5 Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_149(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_233(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_233(iParam0);

	return;
}

BOOL func_148(int iParam0) // Position - 0x4923 Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

int func_149(int iParam0) // Position - 0x4951 Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

void func_150(int iParam0, int iParam1) // Position - 0x497F Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

Object* func_151() // Position - 0x49B8 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

void func_152(int iParam0) // Position - 0x49C7 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_393 = iParam0;
	return;
}

BOOL func_153(int iParam0) // Position - 0x49D8 Hash - 0x3181E2E5 ^0x3181E2E5
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_234(iParam0, 2) || func_234(iParam0, 4) || func_234(iParam0, 8))
		return true;

	return false;
}

int func_154(var uParam0, var uParam1) // Position - 0x4A26 Hash - 0xD22CE202 ^0xD22CE202
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	*uParam0 = 0;
	*uParam1 = 0;
	flag = func_37();
	flag2 = false;

	if (flag && !func_39(4))
		flag2 = true;

	if (flag && func_39(37) && !func_39(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return 0;
	}

	flag3 = false;

	if (flag && func_39(43) && !func_39(44))
		flag3 = true;

	if (flag2)
	{
		*uParam0 = 1;
		return 1;
	}

	if (!flag2 && !flag3)
	{
		if (func_66(0) == 1)
			*uParam0 = 1;
	
		if (func_66(1) == 1)
			*uParam1 = 1;
	}

	if (*uParam0 || *uParam1)
		return 1;

	return 0;
}

BOOL func_155(int iParam0) // Position - 0x4AE5 Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

BOOL func_156(int iParam0, var uParam1) // Position - 0x4B19 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_86(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

Volume func_157() // Position - 0x4B46 Hash - 0x16DF4B0C ^0x16DF4B0C
{
	if (func_37())
	{
		if (!func_39(3))
			return func_180(43);
	
		if (func_39(38) && !func_39(43))
			return func_235(8);
	}

	return 0;
}

BOOL func_158(eStackSize essParam0) // Position - 0x4B86 Hash - 0x97598EC0 ^0xADF7FB13
{
	if (!func_41(essParam0))
		return false;

	return Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !func_236(essParam0);
}

Vector3 func_159(Any anParam0, int iParam1) // Position - 0x4BC6 Hash - 0x11FB252 ^0x4C132557
{
	var unk;
	var unk6;

	func_156(15, &unk);
	unk.f_2 = -1999103282;
	unk.f_3 = anParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -495185473;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk6, &unk);
	}

	return unk6;
}

BOOL func_160(Any anParam0, int iParam1) // Position - 0x4C0F Hash - 0xF5110C29 ^0x7BE441BB
{
	int num;
	var unk;
	int num2;

	if (LAW::GET_BOUNTY(PLAYER::PLAYER_ID()) <= 0)
		return 0;

	if (Global_1310720.f_21 == -1)
		return 0;

	if (Global_1310720.f_23 >= 3)
		return 0;

	num = func_237(Global_1310720.f_21, 2);

	if (num == -1)
		return 0;

	func_156(15, &unk);
	unk.f_2 = -1999103282;
	unk.f_3 = anParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 383290544;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &unk);
	
		if (func_238(num) == num2)
			return 1;
	}

	return 0;
}

BOOL func_161(int iParam0, BOOL bParam1, int iParam2) // Position - 0x4CA7 Hash - 0x922F9D73 ^0x546AEB5C
{
	int num;

	num = func_239(iParam0);

	if (func_240(373691918) && Global_1310720.f_12)
		return num == 4;

	if (iParam2 != -1)
		return num == iParam2;

	return bParam1 || num == -1;
}

BOOL func_162(Any anParam0) // Position - 0x4CEF Hash - 0x9AA95235 ^0x5D46FAEF
{
	var unk;
	BOOL num;

	if (!func_156(15, &unk))
		return false;

	unk.f_3 = anParam0;
	unk.f_2 = 303248275;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&num, &unk);
	return num;
}

BOOL func_163(float fParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, Volume volParam8, BOOL bParam9, int iParam10) // Position - 0x4D23 Hash - 0x900D6B9D ^0x900D6B9D
{
	int num;
	eStackSize stackSize;

	if (bParam5)
		if (func_241(iParam3, iParam4))
			return false;

	if (!bParam7 || func_55(5))
		if (func_242(iParam3, iParam4))
			return false;

	num = func_243(fParam0);

	if (bParam6)
	{
		stackSize = func_12(fParam0, true);
	
		if (func_170(stackSize) || func_244(num, true))
			return false;
	}

	if (!func_245(iParam3, iParam4))
		return false;

	if (!func_246())
		if (func_247(iParam3, iParam4))
			return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam8))
	{
		if (!func_248(num))
			return false;
	
		if (Global_1310720.f_23 >= 3)
			if (Global_1310720.f_21 != -1)
				if (Global_1310720.f_21 == func_12(fParam0, false))
					return false;
	}

	if (!func_249(iParam3, iParam4))
		return false;

	if (func_250(0) == 3)
		if (fParam0 > -1480f && fParam0 < -1475f && fParam0.f_1 > -359f && fParam0.f_1 < -354f)
			return false;

	if (!func_251(65536, 2))
		if (fParam0 > 1673f && fParam0 < 1676f && fParam0.f_1 > -1888f && fParam0.f_1 < -1885f)
			return false;

	if (func_37())
	{
		if (VOLUME::DOES_VOLUME_EXIST(volParam8))
			if (!VOLUME::IS_POINT_IN_VOLUME(volParam8, fParam0))
				return false;
	
		if (func_252(fParam0, iParam10) || func_253(fParam0, iParam10))
			return false;
	}
	else if (bParam9)
	{
		if (fParam0 < -450f && fParam0.f_1 < -600f)
			return false;
	}

	return true;
}

void func_164(int iParam0) // Position - 0x4F00 Hash - 0xF3266748 ^0xAABE08F
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

int func_165(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x4F46 Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

BOOL func_166(int iParam0, int iParam1) // Position - 0x4F8E Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_44(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

void func_167(int iParam0, int iParam1) // Position - 0x4FD6 Hash - 0x8CE59BC2 ^0x8A418101
{
	if (!func_44(iParam0))
		return;

	!func_166(iParam0, iParam1);

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = Global_40.f_358[iParam0 /*12*/].f_5 || iParam1;
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/].f_5 = Global_1058888.f_42196[iParam0 /*12*/].f_5 || iParam1;
	return;
}

void func_168(int iParam0, int iParam1) // Position - 0x5040 Hash - 0x51AEA24 ^0x983B9297
{
	if (!func_44(iParam0))
		return;

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = Global_40.f_358[iParam0 /*12*/].f_5 - Global_40.f_358[iParam0 /*12*/].f_5 && iParam1;
		return;
	}

	Global_1058888.f_42196[iParam0 /*12*/].f_5 = Global_1058888.f_42196[iParam0 /*12*/].f_5 - Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1;
	return;
}

void func_169(int iParam0, BOOL bParam1) // Position - 0x50BB Hash - 0x49678002 ^0x49678002
{
	if (!func_44(iParam0))
		return;

	if (bParam1)
		func_255(func_254(iParam0));
	else
		func_256(func_254(iParam0));

	return;
}

BOOL func_170(eStackSize essParam0) // Position - 0x50EC Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_41(essParam0))
		return false;

	return func_91(essParam0, 33554432);
}

BOOL func_171() // Position - 0x510D Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_172(int iParam0) // Position - 0x511B Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_257(iParam0))
		return false;

	return func_258(iParam0);
}

int func_173(eStackSize essParam0) // Position - 0x5137 Hash - 0x224FC50D ^0x224FC50D
{
	if (essParam0 < 0)
		return -1;
	else if (essParam0 <= 10)
		return 0;
	else if (essParam0 <= 29)
		return 1;
	else if (essParam0 <= 32)
		return 2;
	else if (essParam0 <= 36)
		return 3;
	else if (essParam0 <= 39)
		return 4;
	else if (essParam0 <= 49)
		return 7;
	else if (essParam0 <= 56)
		return 6;
	else if (essParam0 <= 61)
		return 8;
	else if (essParam0 <= 76)
		return 9;
	else if (essParam0 <= 92)
		return 10;
	else if (essParam0 <= 106)
		return 11;
	else if (essParam0 <= 113)
		return 12;
	else if (essParam0 <= 115)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

int func_174(int iParam0, BOOL bParam1) // Position - 0x5233 Hash - 0x9CC4908E ^0xB6CFBFA0
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
	
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
	
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
	
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
	
		case 4:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_172(45))
				return joaat("LAW_REGION_GREAT_PLAINS");
			else
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			break;
	
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 8:
			return joaat("LAW_REGION_GUAMA");
	
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
	
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
	
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
	
		case 12:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_172(45))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_171() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_172(45))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

int func_175(eStackSize essParam0) // Position - 0x53AD Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_41(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

void func_176(eStackSize essParam0, Hash hParam1) // Position - 0x53CD Hash - 0x7388F0C5 ^0x866A1FF3
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_2 = hParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_2 = hParam1;
	return;
}

void func_177(eStackSize essParam0, BOOL bParam1) // Position - 0x53FE Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] || bParam1;

	return;
}

void func_178(eStackSize essParam0, BOOL bParam1) // Position - 0x5441 Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] - Global_23118[essParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] - Global_1058888.f_40545[essParam0 /*11*/] && bParam1;
	return;
}

void func_179(eStackSize essParam0) // Position - 0x549A Hash - 0x1C686B36 ^0x1C686B36
{
	if (!func_41(essParam0))
		return;

	if (func_259(essParam0))
		func_260(essParam0);
	else
		func_261(essParam0);

	return;
}

Volume func_180(eStackSize essParam0) // Position - 0x54C7 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_41(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_3;
}

int func_181(eStackSize essParam0) // Position - 0x54E7 Hash - 0x34D87891 ^0x34D87891
{
	int num;
	int num2;
	int num3;

	if (!func_41(essParam0))
		return 0;

	num = func_262(essParam0);

	if (num == -1)
		return -1;

	num2 = func_263(func_182(essParam0));
	num3 = num - num2;

	if (num3 < 0)
		num3 = 0;

	return num3;
}

eStackSize func_182(eStackSize essParam0) // Position - 0x552D Hash - 0xA8797BF3 ^0x5BC8C068
{
	if (!func_41(essParam0))
		return -15;

	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/].f_1;

	return Global_1058888.f_40545[essParam0 /*11*/].f_1;
}

BOOL func_183(eStackSize essParam0) // Position - 0x556A Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_264(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_265(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_266(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_267(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_268(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_269(essParam0);

	if (num6 < 1 || num6 > func_270(num5, num4))
		return false;

	return true;
}

void func_184(eStackSize essParam0, eStackSize essParam1) // Position - 0x5646 Hash - 0x7388F0C5 ^0x4D727BFF
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_1 = essParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_1 = essParam1;
	return;
}

void func_185(eStackSize essParam0, int iParam1) // Position - 0x5677 Hash - 0x3B089601 ^0x668F51A1
{
	if (!func_41(essParam0))
		return;

	if (iParam1 < 0)
		return;

	Global_23118[essParam0 /*11*/].f_3 = iParam1;
	return;
}

void func_186(eStackSize essParam0) // Position - 0x56A0 Hash - 0x115C5CF0 ^0x115C5CF0
{
	if (!func_41(essParam0))
		return;

	if (func_170(essParam0) && func_271(essParam0))
		func_255(func_272(essParam0));
	else
		func_256(func_272(essParam0));

	return;
}

void func_187(int iParam0, BOOL bParam1) // Position - 0x56E0 Hash - 0xA4B8C237 ^0x935EEB2B
{
	if (!func_100(iParam0))
		return;

	!func_273(iParam0, bParam1);

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = Global_40.f_431[iParam0] || bParam1;
		return;
	}

	Global_1058888.f_42269[iParam0] = Global_1058888.f_42269[iParam0] || bParam1;
	return;
}

BOOL func_188(int iParam0) // Position - 0x5742 Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_100(iParam0))
		return false;

	return func_273(iParam0, 2);
}

void func_189(int iParam0, BOOL bParam1) // Position - 0x575F Hash - 0x6F253A8 ^0x120830DC
{
	if (!func_100(iParam0))
		return;

	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = Global_40.f_431[iParam0] - Global_40.f_431[iParam0] && bParam1;
		return;
	}

	Global_1058888.f_42269[iParam0] = Global_1058888.f_42269[iParam0] - Global_1058888.f_42269[iParam0] && bParam1;
	return;
}

void func_190(int iParam0, BOOL bParam1) // Position - 0x57CE Hash - 0xE581BD06 ^0xE581BD06
{
	Hash hash;

	if (!func_100(iParam0))
		return;

	if (iParam0 == 8)
		return;

	hash = func_274(iParam0);

	if (bParam1)
		func_255(hash);
	else
		func_256(hash);

	return;
}

int func_191(int iParam0) // Position - 0x5809 Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_192(int iParam0) // Position - 0x58BD Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

BOOL func_193(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x595E Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_183(essParam1) || !func_183(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_194(eStackSize essParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x598B Hash - 0x2BEE335D ^0x2BEE335D
{
	func_275(func_117(), essParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_195(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x59A9 Hash - 0x549CBB93 ^0x549CBB93
{
	var unk;
	var unk2;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}

	if (bParam3)
		func_277(uParam1, uParam2, &unk, &unk2, false, func_276());

	return;
}

void func_196() // Position - 0x5A80 Hash - 0x6E14ED60 ^0xD0EE0FF7
{
	BOOL flag;

	flag = func_109();
	Global_40.f_7748.f_6 = 0;

	if (flag && !func_109())
		func_278(14);

	return;
}

void func_197(int iParam0, BOOL bParam1) // Position - 0x5AAC Hash - 0x8F59A605 ^0x3B6FDB4
{
	int num;
	int num2;
	BOOL flag;

	if (!func_279(iParam0))
		return;

	if (Global_40.f_7748.f_1 == iParam0)
		return;

	Global_40.f_7748.f_1 = iParam0;

	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_117();
		flag = Global_40.f_7748.f_1 < 9 && func_109();
		func_195(Global_40.f_7748.f_1, &num, &num2, flag);
		func_280(&(Global_40.f_7748.f_5), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

void func_198() // Position - 0x5B2A Hash - 0xC3449928 ^0xE0569413
{
	BOOL flag;

	flag = func_109();
	Global_40.f_7748.f_6 = Global_40.f_7748.f_6 - 1;

	if (flag && !func_109())
		func_278(14);

	return;
}

void func_199() // Position - 0x5B5F Hash - 0xD9BAE5CF ^0xEC3A242
{
	eStackSize value;

	if (func_281() >= 7)
	{
		value = func_117();
		func_280(&value, 0, 0, 0, 2, 0, 0, false);
		DECORATOR::DECOR_SET_INT(Global_35, "hairLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}

	return;
}

void func_200(BOOL bParam0) // Position - 0x5BC7 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_201(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x5BDA Hash - 0x21CB5355 ^0x21CB5355
{
	int i;
	int num;

	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_282(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_283(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_200(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_282(iParam0))
				return;
		
			func_283(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_200(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_284(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_202(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x5DE6 Hash - 0x6C4E6E52 ^0x6C4E6E52
{
	var unk;
	var unk2;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
	
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
	
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
	
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
	
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
	
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
	
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}

	if (bParam3)
		func_277(uParam1, uParam2, &unk, &unk2, false, func_285(iParam0));

	return;
}

void func_203(int iParam0) // Position - 0x5ED9 Hash - 0x8EDF95A8 ^0x6344BF7A
{
	BOOL flag;

	flag = func_113(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;

	if (flag && !func_113(iParam0))
	{
		func_118(490, true);
		func_286(iParam0, 0);
	}

	return;
}

void func_204(int iParam0) // Position - 0x5F16 Hash - 0xF5821E74 ^0x580D0024
{
	if (iParam0 >= 7)
		func_118(489, false);

	if (iParam0 >= 4 && Global_1897952.f_41 != 8 && func_38(Global_1835011[4 /*74*/].f_1, true))
		func_118(493, false);

	return;
}

void func_205(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5F5C Hash - 0x1B9F85CC ^0x1B9F85CC
{
	int num;
	int num2;
	BOOL flag;

	if (!func_287(iParam0))
		return;

	if (!func_288(iParam1))
		return;

	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
		return;

	Global_40.f_7731[iParam0 /*5*/] = iParam1;

	if (!bParam2)
	{
		flag = Global_40.f_7731[iParam0 /*5*/] < 7 && func_113(iParam0);
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_117();
		func_202(iParam0, &num, &num2, flag);
		func_280(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

void func_206(int iParam0) // Position - 0x5FF0 Hash - 0xD1347D3F ^0x8F8B63AB
{
	BOOL flag;

	flag = func_113(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = Global_40.f_7731[iParam0 /*5*/].f_4 - 1;

	if (flag && !func_113(iParam0))
	{
		func_118(490, true);
		func_286(iParam0, 0);
	}

	return;
}

void func_207() // Position - 0x603A Hash - 0xF437CB99 ^0xD028C76A
{
	eStackSize value;

	value = func_117();
	func_280(&value, 0, 0, 0, 2, 0, 0, false);

	if (func_289(0) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}

	if (func_289(1) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}

	if (func_289(2) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheLong", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
			DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}

	return;
}

void func_208(int iParam0, var uParam1, var uParam2) // Position - 0x613F Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_209(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x615B Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_290(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_291(iParam0))
		return false;

	if (func_292(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_293(iParam0, 1) || func_2(32768))
		if (!func_293(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_294())
		return false;

	return true;
}

void func_210(int iParam0, int iParam1) // Position - 0x61FD Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_211(int iParam0, Any* panParam1) // Position - 0x6221 Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_295(iParam0))
		return false;

	hash = func_212(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_296(false) };

	if (!func_297(unk15, hash, &unk, 0, false))
		return false;

	if (!func_298(&unk, panParam1))
		return false;

	return true;
}

Hash func_212(int iParam0) // Position - 0x6286 Hash - 0xBD10D1A2 ^0xE9C9558B
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
	
		case 1:
			return -832337898;
	
		case 2:
			return 1271463052;
	
		case 3:
			return 1983140194;
	
		case 4:
			return 677262775;
	}

	return 0;
}

BOOL func_213(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x62F2 Hash - 0x8FC90634 ^0x533F9AFB
{
	var unk;
	var outGuid;

	if (!func_299(bParam10))
		return func_300(uParam0, uParam4, hParam8, true, bParam9, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_301(uParam0, &unk, false, false))
		return false;

	if (func_302(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_303(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_304(outGuid, 1);

	return true;
}

BOOL func_214(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x63B6 Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_299(bParam9))
		return func_305(uParam0, uParam4, iParam8, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_302(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_301(uParam0, &unk, bParam9, true) || !func_301(uParam4, &unk15, bParam9, true))
		return false;

	if (func_302(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_303(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

BOOL func_215(Ped pedParam0) // Position - 0x64DB Hash - 0xFE36340F ^0xC64DF8BD
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_306(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_216(Ped pedParam0) // Position - 0x6514 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_217(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_217(Ped pedParam0) // Position - 0x6552 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

BOOL func_218(int iParam0) // Position - 0x6597 Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

void func_219(int iParam0) // Position - 0x65B8 Hash - 0xD14C6A7D ^0x9C4D4670
{
	Ped ped;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Hash blipHash;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL isPedInWrithe;
	BOOL flag8;
	Ped ped2;
	var entityCoords;
	float num;
	BOOL flag9;
	Hash modifierHash;
	Hash modifierHash2;
	float pedRemainingRevivalTime;
	Hash modifierHash3;
	int num2;
	Hash hash;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		return;

	ped = func_124(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_234(iParam0, 64))
	{
		func_120(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_172(42);

	if (flag)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	
		if (ped == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && flag3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), ped);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("blip_saddle"), true);
				func_307(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
	
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}

	flag4 = false;

	if (PED::IS_PED_ON_MOUNT(Global_35))
		if (Global_1935630.f_40 == ped)
			flag4 = true;

	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && flag4)
		func_120(iParam0);

	if (flag4)
		return;

	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
		return;

	flag5 = false;

	if (iParam0 == 0)
	{
		blipHash = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		blipHash = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		flag5 = true;
	}
	else
	{
		return;
	}

	if (flag5)
	{
		flag6 = false;
	
		if (func_308(1) < 1)
			flag6 = true;
	
		if (flag6)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		
			return;
		}
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(blipHash, ped);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_309(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_234(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_310(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_311(entityCoords, Global_36);
	flag9 = false;

	if (num > func_312(iParam0))
		flag9 = true;

	modifierHash = 0;
	modifierHash2 = 0;

	if (flag7)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			modifierHash = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (isPedInWrithe)
	{
		pedRemainingRevivalTime = PED::_GET_PED_REMAINING_REVIVAL_TIME(ped, true);
	
		if (flag9)
		{
			if (pedRemainingRevivalTime < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (pedRemainingRevivalTime < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (pedRemainingRevivalTime < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (pedRemainingRevivalTime <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (pedRemainingRevivalTime < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (pedRemainingRevivalTime < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (pedRemainingRevivalTime < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (pedRemainingRevivalTime <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				modifierHash = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				modifierHash2 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (flag8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			modifierHash = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!flag9)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			modifierHash = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}

	if (modifierHash != 0)
	{
		func_313(Global_1900383[iParam0 /*45*/].f_26);
		func_314(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash);
	
		if (modifierHash == joaat("BLIP_MODIFIER_OBJECTIVE"))
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	}

	if (modifierHash2 != 0)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash2);

	if (PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == ped && flag3 && !isPedInWrithe)
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	else
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));

	if (func_230(ped) && !isPedInWrithe)
	{
		if (blipHash == joaat("BLIP_STYLE_PLAYER_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		else if (blipHash == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
			modifierHash3 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
	
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, modifierHash3);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}

	num2 = func_308(iParam0);
	hash = 0;

	if (iParam0 == 0)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_owned_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_owned_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_owned_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_owned_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_owned_bonding_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (num2)
		{
			case 0:
				hash = joaat("blip_horse_temp_bonding_0");
				break;
		
			case 1:
				hash = joaat("blip_horse_temp_bonding_1");
				break;
		
			case 2:
				hash = joaat("blip_horse_temp_bonding_2");
				break;
		
			case 3:
				hash = joaat("blip_horse_temp_bonding_3");
				break;
		
			case 4:
				hash = joaat("blip_horse_temp_bonding_4");
				break;
		}
	}

	if (hash == 0)
	{
		MAP::_0x44813684F72B563C(ped, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(ped, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(ped, hash);
	}

	return;
}

BOOL func_220(int iParam0, Hash hParam1) // Position - 0x6D2E Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_211(iParam0, &unk))
		return false;

	unk30 = { func_315(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_304(unk30, true);
}

BOOL func_221(int iParam0, Hash hParam1) // Position - 0x6D72 Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_211(iParam0, &unk))
		return false;

	unk30 = { func_315(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_304(unk30, true);
}

void func_222(var uParam0) // Position - 0x6DB6 Hash - 0x6843C143 ^0xA531F0D1
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

void func_223(BOOL bParam0) // Position - 0x6E5D Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

BOOL func_224(int iParam0) // Position - 0x6E6D Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_66(iParam0) == 0)
		return false;

	return true;
}

void func_225(float fParam0, float fParam1, float fParam2) // Position - 0x6EA0 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { fParam0 };
	return;
}

void func_226(eStackSize essParam0) // Position - 0x6EB9 Hash - 0xC20F1267 ^0x9F8567FC
{
	Global_40.f_1095.f_3054.f_2 = essParam0;
	return;
}

void func_227(int iParam0) // Position - 0x6ECE Hash - 0x88CF9725 ^0x88CF9725
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_316(iParam0);
	func_317();
	return;
}

void func_228(int iParam0) // Position - 0x6EFA Hash - 0xCFE5DD25 ^0xCFE5DD25
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_316(iParam0);
	func_318(iParam0, 0);
	func_319(iParam0, 0f);
	return;
}

void func_229(Ped pedParam0) // Position - 0x6F30 Hash - 0x15D3E697 ^0xE788B98B
{
	int attributeIndex;
	int attributeIndex2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	attributeIndex = func_320();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex, 0);
	attributeIndex2 = func_321();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(pedParam0, attributeIndex2, 0);
	PED::_SET_HEALTH_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_RECHARGE_MULTIPLIER(pedParam0, 1f);
	PED::_SET_STAMINA_DEPLETION_MULTIPLIER(pedParam0, 1f);
	return;
}

BOOL func_230(Ped pedParam0) // Position - 0x6F8D Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_231(Hash hParam0) // Position - 0x6FCF Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_322(hParam0))
		return false;

	if (!func_323())
		return true;

	return false;
}

void func_232(int iParam0, int iParam1) // Position - 0x6FF2 Hash - 0x20A81385 ^0xDDACAB07
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 - Global_1900383[iParam0 /*45*/].f_24 && iParam1;
	return;
}

void func_233(int iParam0) // Position - 0x7036 Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

BOOL func_234(int iParam0, int iParam1) // Position - 0x706E Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

Volume func_235(int iParam0) // Position - 0x70A1 Hash - 0xD3D81EBA ^0x415F03D5
{
	Volume aggregate;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
		return Global_1897952[iParam0 /*2*/].f_1;

	switch (iParam0)
	{
		case 0:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
	
		case 1:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
	
		case 2:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
	
		case 3:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 190.4736f, 1214.8289f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 695f, 1075f, 200f, 0f, 0f, 35.000004f, 250f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -11.222437f, 1259.5388f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 667.5f, 1675f, 200f, 0f, 0f, 14.999999f, 150f, 325f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 72.5f, 1297.5f, 200f, 0f, 0f, 50.000004f, 400f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 330.27124f, 1028.6603f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 224.70837f, 1010.6338f, 200f, 0f, 0f, 58.85596f, 175f, 267.26758f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 153.08461f, 1314.7219f, 200f, 0f, 0f, -23f, 400f, 409.22314f, 800f);
			break;
	
		case 4:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
	
		case 5:
			if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(aggregate, Global_1897952[6 /*2*/].f_1);
				VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(aggregate, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			break;
	
		case 6:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
	
		case 7:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
	
		case 8:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
	
		case 9:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -385f, 180f, 200f, 0f, 0f, -140.00002f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -465f, -340f, 200f, 0f, 0f, 37.499996f, 500f, 275f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 860f, 487.5f, 200f, 0f, 0f, 35.000004f, 650f, 900f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1560f, 835f, 200f, 0f, 0f, 15.999998f, 450f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 103.686745f, 807.68787f, 200f, 0f, 0f, 58.795097f, 295.0871f, 709.0376f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.49196f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -847.5f, 240f, 200f, 0f, 0f, 33.000004f, 797f, 225f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -245.43944f, 1000f, 200f, 0f, 0f, 0f, 333.31265f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -760f, 440f, 200f, 0f, 0f, 105.00001f, 300f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
	
		case 10:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
	
		case 11:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
	
		case 12:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
	
		case 13:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
	
		case 14:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	
		case 15:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
	
		case 16:
			aggregate = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(aggregate, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
	}

	Global_1897952[iParam0 /*2*/].f_1 = aggregate;
	return aggregate;
}

BOOL func_236(eStackSize essParam0) // Position - 0x9598 Hash - 0x43A4311 ^0x43A4311
{
	if (essParam0 == 22 || essParam0 == 37 && !func_324())
		return true;

	if (essParam0 == 61)
		return true;

	return false;
}

int func_237(eStackSize essParam0, int iParam1) // Position - 0x95CD Hash - 0x8A1A59F3 ^0x8A1A59F3
{
	if (iParam1 == 11)
		return 101;
	else if (iParam1 == 32)
		return 126;
	else if (iParam1 == 34)
		return 127;

	switch (essParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
			
				case 31:
					return 118;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
			
				case 6:
					return 143;
			
				case 26:
					return 142;
			
				case 27:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 39;
			
				case 1:
					return 46;
			
				case 2:
					return 45;
			
				case 3:
					return 42;
			
				case 4:
					return 41;
			
				case 6:
					return 43;
			
				case 7:
					return 47;
			
				case 8:
					return 37;
			
				case 9:
					return 44;
			
				case 10:
					return 38;
			
				case 12:
					return 48;
			
				case 13:
					return 49;
			
				case 14:
					return 50;
			
				case 15:
					return 36;
			
				case 18:
					return 55;
			
				case 21:
					return 54;
			
				case 22:
					return 51;
			
				case 29:
					return 109;
			
				case 30:
					return 110;
			
				case 31:
					return 111;
			
				case 33:
					return 52;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
			
				case 6:
					return 147;
			
				case 19:
					return 58;
			
				case 26:
					return 146;
			
				case 27:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 24;
			
				case 2:
					return 23;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 65;
			
				case 3:
					return 61;
			
				case 9:
					return 63;
			
				case 10:
					return 60;
			
				case 20:
					return 62;
			
				case 22:
					return 64;
			
				case 29:
					return 114;
			
				case 31:
					return 115;
			
				case 33:
					return 66;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 88;
			
				case 2:
					return 89;
			
				case 3:
					return 87;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 7;
			
				case 7:
					return 17;
			
				case 8:
					return 9;
			
				case 9:
					return 13;
			
				case 10:
					return 10;
			
				case 15:
					return 6;
			
				case 21:
					return 12;
			
				case 22:
					return 16;
			
				case 29:
					return 106;
			
				case 30:
					return 107;
			
				case 31:
					return 108;
			
				case 33:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
			
				default:
					break;
			}
			break;
	
		case 69:
			switch (iParam1)
			{
				case 1:
					return 21;
			
				case 2:
					return 20;
			
				case 3:
					return 19;
			
				case 4:
					return 18;
			
				case 31:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
			
				case 6:
					return 139;
			
				case 19:
					return 56;
			
				case 26:
					return 138;
			
				case 27:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 73;
			
				case 1:
					return 78;
			
				case 2:
					return 77;
			
				case 3:
					return 74;
			
				case 6:
					return 75;
			
				case 8:
					return 69;
			
				case 9:
					return 76;
			
				case 10:
					return 72;
			
				case 15:
					return 68;
			
				case 20:
					return 79;
			
				case 22:
					return 80;
			
				case 29:
					return 102;
			
				case 30:
					return 103;
			
				case 31:
					return 104;
			
				case 33:
					return 70;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 1:
					return 3;
			
				case 2:
					return 2;
			
				case 6:
					return 0;
			
				case 22:
					return 1;
			
				case 29:
					return 120;
			
				case 31:
					return 121;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
			
				case 6:
					return 130;
			
				case 19:
					return 59;
			
				case 26:
					return 129;
			
				case 27:
					return 131;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
			
				default:
					break;
			}
			break;
	
		case 90:
		case MICRO:
			switch (iParam1)
			{
				case 18:
					return 34;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 1:
					return 85;
			
				case 2:
					return 86;
			
				case 4:
					return 82;
			
				case 9:
					return 84;
			
				case 30:
					return 116;
			
				case 31:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
			
				case 6:
					return 134;
			
				case 19:
					return 57;
			
				case 26:
					return 133;
			
				case 27:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 1:
					return 31;
			
				case 2:
					return 30;
			
				case 3:
					return 28;
			
				case 4:
					return 27;
			
				case 6:
					return 29;
			
				case 10:
					return 26;
			
				case 15:
					return 25;
			
				case 22:
					return 32;
			
				case 29:
					return 112;
			
				case 31:
					return 113;
			
				case 33:
					return 33;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 3:
					return 90;
			
				case 6:
					return 91;
			
				case 9:
					return 94;
			
				case 10:
					return 92;
			
				case 33:
					return 93;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 99;
			
				case 31:
					return 123;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 2:
					return 96;
			
				case 3:
					return 95;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

int func_238(int iParam0) // Position - 0x9DE1 Hash - 0xB8EC44B7 ^0x92674BDE
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_newspaper_boy");
	
		case 2:
			return joaat("shop_asb_post_office");
	
		case 3:
			return joaat("shop_asb_train_station");
	
		case 4:
			return 548657065;
	
		case 5:
			return 243086140;
	
		case 6:
			return joaat("shop_blk_bank");
	
		case 7:
			return joaat("shop_blk_general_store");
	
		case 8:
			return joaat("shop_blk_gunsmith");
	
		case 9:
			return joaat("shop_blk_barber");
	
		case 10:
			return joaat("shop_blk_butcher");
	
		case 11:
			return joaat("shop_blk_bartender");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("shop_blk_newspaper_boy");
	
		case 17:
			return joaat("shop_blk_tailor");
	
		case 18:
			return joaat("shop_emr_fence");
	
		case 19:
			return joaat("shop_emr_general_store");
	
		case 20:
			return joaat("shop_emr_post_office");
	
		case 21:
			return joaat("shop_emr_train_station");
	
		case 22:
			return joaat("shop_lag_bait_store");
	
		case 23:
			return joaat("shop_rgg_post_office");
	
		case 24:
			return joaat("shop_rgg_train_station");
	
		case 25:
			return joaat("shop_rho_bank");
	
		case 26:
			return joaat("shop_rho_butcher");
	
		case 27:
			return joaat("shop_rho_fence");
	
		case 28:
			return joaat("shop_rho_general_store");
	
		case 29:
			return joaat("shop_rho_gunsmith");
	
		case 30:
			return joaat("shop_rho_post_office");
	
		case 31:
			return joaat("shop_rho_train_station");
	
		case 32:
			return joaat("shop_rho_newspaper_boy");
	
		case 33:
			return joaat("shop_rho_bartender");
	
		case 34:
			return -305029900;
	
		case 35:
			return joaat("shop_scm_horse_shop");
	
		case 36:
			return joaat("shop_sdn_bank");
	
		case 37:
			return joaat("shop_sdn_barber");
	
		case 38:
			return joaat("shop_sdn_butcher");
	
		case 39:
			return joaat("shop_sdn_doctor");
	
		case 40:
			return joaat("shop_sdn_exotic");
	
		case 41:
			return joaat("shop_sdn_fence");
	
		case 42:
			return joaat("shop_sdn_general_store");
	
		case 43:
			return joaat("shop_sdn_gunsmith");
	
		case 44:
			return joaat("shop_sdn_horse_shop");
	
		case 45:
			return joaat("shop_sdn_post_office");
	
		case 46:
			return joaat("shop_sdn_train_station");
	
		case 47:
			return joaat("shop_sdn_tailor");
	
		case 48:
			return joaat("shop_sdn_market");
	
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
	
		case 50:
			return -1673339528;
	
		case 51:
			return joaat("shop_sdn_newspaper_boy");
	
		case 52:
			return joaat("shop_sdn_bartender");
	
		case 53:
			return joaat("shop_sdn_bartender_slum");
	
		case 54:
			return joaat("shop_sdn_photo_studio");
	
		case 55:
			return joaat("shop_sdn_trapper");
	
		case 56:
			return 878376253;
	
		case 57:
			return 1388932648;
	
		case 58:
			return -2076086367;
	
		case 59:
			return 1529797091;
	
		case 60:
			return joaat("shop_str_butcher");
	
		case 61:
			return joaat("shop_str_general_store");
	
		case 62:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 63:
			return joaat("shop_str_horse_shop");
	
		case 64:
			return joaat("shop_str_newspaper_boy");
	
		case 65:
			return joaat("shop_str_post_office");
	
		case 66:
			return joaat("shop_str_bartender");
	
		case 67:
			return 1008537949;
	
		case 68:
			return joaat("shop_val_bank");
	
		case 69:
			return joaat("shop_val_barber");
	
		case 70:
			return joaat("shop_val_bartender");
	
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 72:
			return joaat("shop_val_butcher");
	
		case 73:
			return joaat("shop_val_doctor");
	
		case 74:
			return joaat("shop_val_general_store");
	
		case 75:
			return joaat("shop_val_gunsmith");
	
		case 76:
			return joaat("shop_val_horse_shop");
	
		case 77:
			return joaat("shop_val_post_office");
	
		case 78:
			return joaat("shop_val_train_station");
	
		case 79:
			return joaat("shop_val_hotel");
	
		case 80:
			return joaat("shop_val_newspaper_boy");
	
		case 81:
			return joaat("shop_val_bartender_slum");
	
		case 82:
			return joaat("SHOP_VAN_FENCE");
	
		case 83:
			return joaat("shop_van_bartender");
	
		case 84:
			return joaat("shop_van_horse_shop");
	
		case 85:
			return joaat("shop_van_train_station");
	
		case 86:
			return joaat("shop_van_post_office");
	
		case 87:
			return joaat("shop_wal_general_store");
	
		case 88:
			return joaat("shop_wal_train_station");
	
		case 89:
			return joaat("shop_wal_post_office");
	
		case 90:
			return joaat("shop_tbl_general_store");
	
		case 91:
			return joaat("shop_tbl_gunsmith");
	
		case 92:
			return joaat("shop_tbl_butcher");
	
		case 93:
			return joaat("shop_tbl_bartender");
	
		case 94:
			return joaat("shop_tbl_horse_shop");
	
		case 95:
			return joaat("shop_amd_general_store");
	
		case 96:
			return joaat("shop_amd_post_office");
	
		case 97:
			return joaat("shop_amd_bartender");
	
		case 98:
			return joaat("shop_ryc_fence");
	
		case 99:
			return joaat("shop_ben_post_office");
	
		case 100:
			return joaat("shop_ben_train_station");
	
		case 101:
			return joaat("shop_dynamic");
	
		case 102:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 103:
			return joaat("shop_val_coach");
	
		case 104:
			return joaat("shop_val_horse_fence_mp");
	
		case 105:
			return joaat("shop_emr_horse_fence_mp");
	
		case 106:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 107:
			return joaat("shop_blk_coach");
	
		case 108:
			return joaat("shop_blk_horse_fence_mp");
	
		case 109:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 110:
			return joaat("shop_sdn_coach");
	
		case 111:
			return joaat("shop_sdn_horse_fence_mp");
	
		case 112:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 113:
			return joaat("shop_rho_horse_fence_mp");
	
		case 114:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 115:
			return joaat("shop_str_horse_fence_mp");
	
		case 116:
			return joaat("shop_van_coach");
	
		case 117:
			return joaat("shop_van_horse_fence_mp");
	
		case 118:
			return joaat("shop_lag_horse_fence_mp");
	
		case 119:
			return joaat("shop_ckt_horse_fence_mp");
	
		case 120:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_asb_horse_fence_mp");
	
		case 122:
			return joaat("shop_but_horse_fence_mp");
	
		case 123:
			return joaat("shop_ben_horse_fence_mp");
	
		case 124:
			return joaat("shop_map_horse_fence_mp");
	
		case 125:
			return joaat("shop_thl_fence");
	
		case 126:
			return joaat("shop_wilderness_supplies");
	
		case 127:
			return joaat("shop_anywhere_handheld");
	
		case 128:
			return joaat("shop_bvh_doctor");
	
		case 129:
			return joaat("shop_bvh_general_store");
	
		case 130:
			return joaat("shop_bvh_gunsmith");
	
		case 131:
			return joaat("shop_bvh_horse_trainer");
	
		case 132:
			return joaat("shop_clm_doctor");
	
		case 133:
			return joaat("shop_clm_general_store");
	
		case 134:
			return joaat("shop_clm_gunsmith");
	
		case 135:
			return joaat("shop_clm_horse_trainer");
	
		case 136:
			return joaat("shop_clm_horse_fence");
	
		case 137:
			return joaat("shop_hso_doctor");
	
		case 138:
			return joaat("shop_hso_general_store");
	
		case 139:
			return joaat("shop_hso_gunsmith");
	
		case 140:
			return joaat("shop_hso_horse_trainer");
	
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 145:
			return joaat("shop_shb_doctor");
	
		case 146:
			return joaat("shop_shb_general_store");
	
		case 147:
			return joaat("shop_shb_gunsmith");
	
		case 148:
			return joaat("shop_shb_horse_trainer");
	
		case 149:
			return joaat("shop_weapon_mod_store");
	
		case 150:
			return joaat("shop_clothing");
	
		case 151:
			return joaat("shop_camp_shaving");
	
		case 152:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

int func_239(Any anParam0) // Position - 0xA650 Hash - 0x6BF2FF8D ^0xECB7F67C
{
	var unk;
	var unk6;
	int num;

	if (!func_156(15, &unk))
		return -1;

	unk.f_3 = anParam0;
	unk.f_2 = -125049320;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk))
	{
		num = func_325(unk6);
		return num;
	}

	return -1;
}

BOOL func_240(int iParam0) // Position - 0xA690 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_326(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_241(int iParam0, int iParam1) // Position - 0xA6DF Hash - 0x9D47675 ^0xD32B5016
{
	int i;
	BOOL flag;

	flag = BUILTIN::SHIFT_LEFT(iParam1, 11) || iParam0;

	for (i = 0; i < Global_40.f_9.f_16; i = i + 1)
	{
		if (Global_40.f_9.f_16[i] == flag)
			return true;
	}

	return false;
}

BOOL func_242(int iParam0, int iParam1) // Position - 0xA721 Hash - 0x772B672A ^0x34712B89
{
	var unk;
	BOOL unk6;
	var unk7;
	var unk8;

	func_156(15, &unk);
	unk.f_2 = -566397848;
	unk.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk);
	unk.f_3 = iParam1;
	unk.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk7, &unk);
	func_156(15, &unk8);
	unk8.f_2 = -1222062814;
	unk8.f_3 = unk7;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk8.f_1), &unk8))
	{
		unk8.f_2 = -1148228754;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&unk6, &unk8);
	}

	return unk6;
}

int func_243(Vector3 vParam0, var uParam1, var uParam2) // Position - 0xA79D Hash - 0x56F0811C ^0x278FB5A
{
	return func_327(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

BOOL func_244(int iParam0, BOOL bParam1) // Position - 0xA7B3 Hash - 0xA92798E ^0xA92798E
{
	if (!func_100(iParam0))
		return 0;

	if (bParam1)
		if (func_273(iParam0, 8))
			return 0;

	if (func_273(iParam0, true))
		return 1;

	return 0;
}

BOOL func_245(int iParam0, int iParam1) // Position - 0xA7EF Hash - 0xCC75FDFF ^0xEA4571CB
{
	var unk;
	var unk6;
	Hash hash;
	Hash hash2;
	var unk7;

	func_156(15, &unk);
	unk.f_2 = -566397848;
	unk.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk);
	unk.f_3 = iParam1;
	unk.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
	func_156(15, &unk7);
	unk7.f_2 = -1222062814;
	unk7.f_3 = unk6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk7.f_1), &unk7))
	{
		unk7.f_2 = 939842437;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk7))
		{
			hash2 = hash;
			return func_328(hash2, 1, false);
		}
	}

	return true;
}

BOOL func_246() // Position - 0xA87B Hash - 0xE1BC079E ^0x79C1735A
{
	var unk;

	if (func_37())
		if (!func_39(4))
			return true;

	return PED::_IS_META_PED_USING_COMPONENT(Global_35, joaat("HATS")) || func_329(-2061583405, &unk);
}

BOOL func_247(int iParam0, int iParam1) // Position - 0xA8B4 Hash - 0xCC75FDFF ^0xEA4571CB
{
	var unk;
	var unk6;
	BOOL num;
	var unk7;

	func_156(15, &unk);
	unk.f_2 = -566397848;
	unk.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk);
	unk.f_3 = iParam1;
	unk.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
	func_156(15, &unk7);
	unk7.f_2 = -1222062814;
	unk7.f_3 = unk6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk7.f_1), &unk7))
	{
		unk7.f_2 = 1689379704;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&num, &unk7))
			return num;
	}

	return false;
}

BOOL func_248(int iParam0) // Position - 0xA936 Hash - 0x1100E6B1 ^0x38107413
{
	if (!func_100(Global_1310720.f_22))
		return true;

	if (func_244(Global_1310720.f_22, true))
		return true;

	if (0 == iParam0 && 2 == Global_1310720.f_22 || 2 == iParam0 && 0 == Global_1310720.f_22)
		return true;

	return Global_1310720.f_22 == iParam0;
}

BOOL func_249(int iParam0, int iParam1) // Position - 0xA99A Hash - 0x28D75893 ^0x77C12A65
{
	var unk;
	Hash hash;
	int num;
	eStackSize stackSize;

	func_156(15, &unk);
	unk.f_2 = -1999103282;
	unk.f_3 = iParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = 1563492982;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			num = func_330(hash);
		
			if (func_39(num))
				return false;
		}
	
		unk.f_2 = 1975530226;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			num = func_330(hash);
		
			if (!func_39(num))
				return false;
		}
	
		unk.f_2 = 108838230;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			stackSize = func_331(hash);
		
			if (func_332(stackSize))
				return false;
		}
	
		unk.f_2 = 181294442;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&hash, &unk))
		{
			stackSize = func_331(hash);
		
			if (!func_332(stackSize))
				return false;
		}
	
		return true;
	}

	return false;
}

int func_250(int iParam0) // Position - 0xAA78 Hash - 0x2848C66F ^0x2848C66F
{
	if (!func_333(iParam0))
		return -1;

	return Global_40.f_9096[iParam0 /*12*/];
}

BOOL func_251(BOOL bParam0, int iParam1) // Position - 0xAA98 Hash - 0xBAC14BAA ^0xBAC14BAA
{
	return Global_40.f_9571[iParam1 /*10*/] && bParam0 != false;
}

int func_252(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0xAAAF Hash - 0x299D98EC ^0x3CC83AC9
{
	int i;
	eStackSize stackSize;

	for (i = 0; i < Global_1898329; i = i + 1)
	{
		if (!func_3(Global_1898330[i]))
		{
		}
		else
		{
			switch (Global_1898346[i /*6*/].f_3)
			{
				case 1:
					stackSize = Global_1898346[i /*6*/].f_4;
				
					if (BUILTIN::VDIST(func_334(stackSize), vParam0) < func_335(stackSize) == 0f ? iParam3 : func_335(stackSize))
						return 1;
					break;
			}
		}
	}

	return 0;
}

int func_253(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0xAB2F Hash - 0xE8D670EC ^0xB32F26AA
{
	eStackSize i;

	for (i = 0; i < 201; i = i + 1)
	{
		if (func_337(i, false))
			if (BUILTIN::VDIST(func_338(i), vParam0) < iParam3)
				return 1;
	}

	return 0;
}

Hash func_254(int iParam0) // Position - 0xAB6D Hash - 0xD9CACD5C ^0xC1FF0F4A
{
	switch (iParam0)
	{
		case 0:
			return joaat("state_ambarino");
	
		case 1:
			return joaat("state_new_hanover");
	
		case 2:
			return joaat("state_lemoyne");
	
		case 3:
			return joaat("state_west_elizabeth");
	
		case 4:
			return joaat("state_new_austin");
	
		case 5:
			return joaat("state_guarma");
	
		default:
		
	}

	return 0;
}

void func_255(Hash hParam0) // Position - 0xABD2 Hash - 0x79D67CE3 ^0x8A8AA09A
{
	Hash styleHash;

	if (func_339(hParam0) == 57)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, joaat("BLIP_STYLE_WANTED_REGION"));
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, joaat("BLIP_STYLE_WANTED_REGION"));
	}
	else
	{
		styleHash = joaat("BLIP_STYLE_WANTED_REGION");
	
		if (func_340(hParam0) == 4 || func_340(hParam0) == 12 || func_9(func_340(hParam0)) == 4 || func_273(func_340(hParam0), 8) && func_340(hParam0) == 2 || func_340(hParam0) == 0 || func_340(hParam0) == 10)
			styleHash = joaat("BLIP_STYLE_REGION_LOCKDOWN");
	
		MAP::_MAP_ENABLE_REGION_BLIP(hParam0, styleHash);
	}

	return;
}

void func_256(Hash hParam0) // Position - 0xAC90 Hash - 0x414BF67D ^0x2E776DA
{
	if (func_339(hParam0) == 57)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-1145496915);
		MAP::_MAP_DISABLE_REGION_BLIP(-1043953850);
		MAP::_MAP_DISABLE_REGION_BLIP(-1783502982);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hParam0, joaat("BLIP_STYLE_WANTED_REGION")))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(hParam0);
	}

	return;
}

BOOL func_257(int iParam0) // Position - 0xACE6 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_258(int iParam0) // Position - 0xACF9 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_259(eStackSize essParam0) // Position - 0xAD23 Hash - 0x6430C01F ^0x955EC0F3
{
	if (!func_41(essParam0))
		return false;

	return func_91(essParam0, 67108864);
}

void func_260(eStackSize essParam0) // Position - 0xAD44 Hash - 0x23FB4E3F ^0xC51419B5
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_342(unk);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(str), joaat("BLIP_STYLE_WANTED_REGION"));
	return;
}

void func_261(eStackSize essParam0) // Position - 0xAD78 Hash - 0x9B0BA3D ^0xA7259E8D
{
	var unk;
	const char* str;
	Hash hashKey;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_342(unk);
	hashKey = MISC::GET_HASH_KEY(str);

	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_WANTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(hashKey);

	return;
}

int func_262(eStackSize essParam0) // Position - 0xADCA Hash - 0x43E7FC98 ^0x22D1E5E4
{
	if (!func_41(essParam0))
		return 0;

	if (func_33(essParam0))
		return -1;

	return Global_23118[essParam0 /*11*/].f_3;
}

int func_263(eStackSize essParam0) // Position - 0xADF9 Hash - 0x308FE976 ^0xD461FEB6
{
	int value;
	int value2;
	int value3;
	int value4;
	int value5;
	int value6;
	float value7;
	int num;

	if (!func_183(essParam0))
		return 0;

	func_194(essParam0, &value, &value2, &value3, &value4, &value5, &value6);
	value7 = (BUILTIN::TO_FLOAT(value) / 60f) + BUILTIN::TO_FLOAT(value2) + (BUILTIN::TO_FLOAT(value3) * 60f) + (BUILTIN::TO_FLOAT(value4) * 24f * 60f) + (BUILTIN::TO_FLOAT(value5) * 30.4375f * 24f * 60f) + (BUILTIN::TO_FLOAT(value6) * 365.25f * 24f * 60f);
	num = BUILTIN::ROUND(value7);
	return num;
}

int func_264(eStackSize essParam0) // Position - 0xAE92 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_265(eStackSize essParam0) // Position - 0xAEA4 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_266(eStackSize essParam0) // Position - 0xAEB6 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_267(eStackSize essParam0) // Position - 0xAEC9 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_268(eStackSize essParam0) // Position - 0xAEEE Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_269(eStackSize essParam0) // Position - 0xAF01 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_270(int iParam0, int iParam1) // Position - 0xAF14 Hash - 0x893AC59E ^0x893AC59E
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

BOOL func_271(eStackSize essParam0) // Position - 0xAFAE Hash - 0xAFA6364 ^0xAFA6364
{
	if (!func_41(essParam0))
		return 0;

	switch (essParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return 1;
	}

	return 0;
}

Hash func_272(eStackSize essParam0) // Position - 0xB01C Hash - 0xB8EC44B7 ^0x6E73F165
{
	switch (essParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_watsonscabin");
	
		case 30:
			return joaat("region_blu_canebreak_manor");
	
		case 31:
			return joaat("region_blu_copperhead");
	
		case 32:
			return joaat("region_blu_sisika");
	
		case 33:
			return joaat("region_cml_bacchusbridge");
	
		case 34:
			return joaat("region_cml_dino_lady");
	
		case 35:
			return joaat("region_cml_oldfortwallace");
	
		case 36:
			return joaat("region_cml_sixpointcabin");
	
		case 37:
			return joaat("region_grt_beechers");
	
		case 38:
			return joaat("region_grt_blackwater");
	
		case 39:
			return joaat("region_grt_quakers_cove");
	
		case 40:
			return joaat("region_grz_adlerranch");
	
		case 41:
			return joaat("region_grz_dead_rival");
	
		case 42:
			return joaat("region_grz_chezporter");
	
		case 43:
			return joaat("region_grz_colter");
	
		case 44:
			return joaat("region_grz_frozen_explorer");
	
		case 45:
			return joaat("region_grz_millesani_claim");
	
		case 46:
			return joaat("region_grz_mountain_man");
	
		case 47:
			return joaat("region_grz_starving_children");
	
		case 48:
			return joaat("region_grz_tempest_rim");
	
		case 49:
			return joaat("region_grz_wintermining_town");
	
		case 50:
			return joaat("region_grz_calumetravine");
	
		case 51:
			return joaat("region_gre_civil_war_bride");
	
		case 52:
			return joaat("region_grz_cohutta");
	
		case 53:
			return joaat("region_grz_gunfight");
	
		case 54:
			return joaat("region_grz_theloft");
	
		case 55:
			return joaat("region_gre_veteran");
	
		case 56:
			return joaat("region_grz_wapiti");
	
		case 57:
			return joaat("region_gua_aguasdulces");
	
		case 58:
			return joaat("region_gua_camp");
	
		case 59:
			return joaat("region_gua_cincotorres");
	
		case 60:
			return joaat("region_gua_lacapilla");
	
		case 61:
			return joaat("region_gua_manicato");
	
		case 62:
			return joaat("region_hrt_abandoned_mill");
	
		case 63:
			return joaat("region_roa_beechers_c");
	
		case 64:
			return joaat("region_hrt_carmodydell");
	
		case 65:
			return joaat("region_hrt_cornwallkerosene");
	
		case 66:
			return joaat("region_hrt_crop_farm");
	
		case 67:
			return joaat("region_hrt_cumberlandfalls");
	
		case 68:
			return joaat("region_hrt_downsranch");
	
		case 69:
			return joaat("region_hrt_emeraldranch");
	
		case 70:
			return joaat("region_hrt_grangers_hoggery");
	
		case 71:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 72:
			return joaat("region_hrt_larnedsod");
	
		case 73:
			return joaat("region_hrt_loony_cult");
	
		case 74:
			return joaat("region_hrt_luckyscabin");
	
		case 75:
			return joaat("region_hrt_swansons_station");
	
		case 76:
			return joaat("region_hrt_valentine");
	
		case 77:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 78:
			return joaat("region_roa_annesburg");
	
		case 79:
			return joaat("region_roa_beaverhollow");
	
		case 80:
			return joaat("region_roa_black_balsam_rise");
	
		case 81:
			return joaat("region_roa_brandywine_drop");
	
		case 82:
			return joaat("region_roa_butchercreek");
	
		case 83:
			return joaat("region_roa_doverhill");
	
		case 84:
			return joaat("region_roa_happy_family");
	
		case 85:
			return joaat("region_roa_isolationist");
	
		case 86:
			return joaat("region_roa_macleanshouse");
	
		case 87:
			return joaat("region_roa_mossy_flats");
	
		case 88:
			return joaat("region_roa_roanoke_valley");
	
		case 89:
			return joaat("region_roa_rockyseven");
	
		case 90:
			return joaat("region_roa_trapper");
	
		case 91:
			return joaat("region_roa_vanhornmansion");
	
		case 92:
			return joaat("region_roa_vanhornpost");
	
		case 93:
			return joaat("region_scm_braithwaitemanor");
	
		case 94:
			return joaat("region_scm_bulgerglade");
	
		case 95:
			return joaat("region_scm_caligahall");
	
		case 96:
			return joaat("region_scm_catfishjacksons");
	
		case 97:
			return joaat("region_scm_clemenscove");
	
		case 98:
			return joaat("region_scm_clemenspoint");
	
		case 99:
			return joaat("region_scm_compsons_stead");
	
		case 100:
			return joaat("region_scm_dairy_farm");
	
		case 101:
			return joaat("region_scm_horse_shop");
	
		case 102:
			return joaat("region_scm_lonniesshack");
	
		case 103:
			return joaat("region_scm_love_triangle");
	
		case 104:
			return joaat("region_scm_radleys_pasture");
	
		case 105:
			return joaat("region_scm_rhodes");
	
		case 106:
			return joaat("region_scm_slave_pen");
	
		case 107:
			return joaat("region_tal_aurora_basin");
	
		case 108:
			return joaat("region_tal_dead_settler");
	
		case 109:
			return joaat("region_tal_cochinay");
	
		case 110:
			return joaat("region_tal_manzanitapost");
	
		case 111:
			return joaat("region_tal_pacificunionrr");
	
		case 112:
			return joaat("region_tal_tannersreach");
	
		case 113:
			return joaat("region_tal_trapper");
	
		case 114:
			return joaat("region_gap_gaptooth_breach");
	
		case 115:
			return joaat("region_gap_tumbleweed");
	
		case 116:
			return joaat("region_gap_rathskeller_fork");
	
		case 117:
			return joaat("region_rio_benedict_point");
	
		case 118:
			return joaat("region_rio_fort_mercer");
	
		case 119:
			return joaat("region_rio_plain_view");
	
		case 120:
			return joaat("region_cho_armadillo");
	
		case 121:
			return joaat("region_cho_coots_chapel");
	
		case 122:
			return joaat("region_cho_don_julio_house");
	
		case 123:
			return joaat("region_cho_rileys_charge");
	
		case 124:
			return joaat("region_cho_ridgewood_farm");
	
		case 125:
			return joaat("region_cho_twin_rocks");
	
		case 126:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 127:
			return joaat("region_hen_thieves_landing");
	
		case MICRO:
			return joaat("region_centralunionrr");
	
		case 129:
			return joaat("region_gap_solomons_folly");
	
		default:
		
	}

	return 0;
}

BOOL func_273(int iParam0, BOOL bParam1) // Position - 0xB748 Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_100(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

Hash func_274(int iParam0) // Position - 0xB78C Hash - 0xB8EC44B7 ^0xCA15B31A
{
	switch (iParam0)
	{
		case 0:
			return joaat("district_bayou_nwa");
	
		case 1:
			return joaat("district_big_valley");
	
		case 2:
			return joaat("district_bluegill_marsh");
	
		case 3:
			return joaat("district_cumberland_forest");
	
		case 4:
			return joaat("district_great_plains");
	
		case 5:
			return joaat("district_grizzlies");
	
		case 6:
			return joaat("district_grizzlies_east");
	
		case 7:
			return joaat("district_grizzlies_west");
	
		case 8:
			return joaat("district_guama");
	
		case 9:
			return joaat("district_heartland");
	
		case 10:
			return joaat("district_roanoke_ridge");
	
		case 11:
			return joaat("district_scarlett_meadows");
	
		case 12:
			return joaat("district_tall_trees");
	
		case 13:
			return joaat("district_gaptooth_ridge");
	
		case 14:
			return joaat("district_rio_bravo");
	
		case 15:
			return joaat("district_cholla_springs");
	
		case 16:
			return joaat("district_hennigans_stead");
	
		default:
		
	}

	return 1776960747;
}

void func_275(eStackSize essParam0, eStackSize essParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xB88F Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_193(essParam0, essParam1, true))
	{
		num = func_268(essParam1);
		num2 = func_267(essParam0);
		num3 = func_267(essParam0) - func_267(essParam1);
		num4 = func_268(essParam0) - func_268(essParam1);
		num5 = func_269(essParam0) - func_269(essParam1);
		num6 = func_266(essParam0) - func_266(essParam1);
		num7 = func_265(essParam0) - func_265(essParam1);
		num8 = func_264(essParam0) - func_264(essParam1);
	}
	else
	{
		num = func_268(essParam0);
		num2 = func_267(essParam1);
		num3 = func_267(essParam1) - func_267(essParam0);
		num4 = func_268(essParam1) - func_268(essParam0);
		num5 = func_269(essParam1) - func_269(essParam0);
		num6 = func_266(essParam1) - func_266(essParam0);
		num7 = func_265(essParam1) - func_265(essParam0);
		num8 = func_264(essParam1) - func_264(essParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_270(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_344(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

int func_276() // Position - 0xBA91 Hash - 0x1309DFA4 ^0x1309DFA4
{
	if (func_345(8))
		return 8;
	else if (func_345(4))
		return 4;
	else if (func_345(2))
		return 2;

	return 1;
}

void func_277(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0xBAC6 Hash - 0x6C064C76 ^0x6CA0C692
{
	int num;
	int num2;
	int num3;
	float num4;

	num4 = BUILTIN::TO_FLOAT(iParam5);
	num = func_346(BUILTIN::TO_FLOAT(*uParam0), num4);
	num2 = func_347(BUILTIN::TO_FLOAT(*uParam1), num4);
	num3 = func_348(BUILTIN::TO_FLOAT(*uParam2), num4);
	*uParam0 = *uParam0 / iParam5;
	*uParam1 = *uParam1 / iParam5;
	*uParam2 = *uParam2 / iParam5;
	*uParam3 = *uParam3 / iParam5;
	*uParam1 = *uParam1 + num;
	*uParam2 = *uParam2 + num2;
	*uParam3 = *uParam3 + num3;

	if (bParam4)
	{
		*uParam3 = *uParam3 * -1;
		*uParam2 = *uParam2 * -1;
		*uParam1 = *uParam1 * -1;
		*uParam0 = *uParam0 * -1;
	}

	return;
}

void func_278(int iParam0) // Position - 0xBB67 Hash - 0x68BAC935 ^0x68CA1306
{
	Global_40.f_7748.f_4 = Global_40.f_7748.f_4 - Global_40.f_7748.f_4 && iParam0;
	return;
}

BOOL func_279(int iParam0) // Position - 0xBB8B Hash - 0x71C807FE ^0x71C807FE
{
	if (iParam0 <= -1 || iParam0 > 9)
		return false;

	return true;
}

void func_280(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xBBAA Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_267(*essParam0);
	i = func_268(*essParam0);
	num2 = func_269(*essParam0);
	j = func_266(*essParam0);
	k = func_265(*essParam0);
	l = func_264(*essParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_270(i, num); num2 > m; m = func_270(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_349(essParam0, l, k, j, num2, i, num);
	return;
}

int func_281() // Position - 0xBD32 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_7748.f_1;
}

BOOL func_282(int iParam0) // Position - 0xBD42 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_283(int iParam0) // Position - 0xBD57 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_284(int iParam0, var uParam1, var uParam2) // Position - 0xBD77 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_350(num);
	return;
}

int func_285(int iParam0) // Position - 0xBD97 Hash - 0xA5486CA1 ^0x73FE29F9
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
	
		case 2:
			return 4;
	
		case 3:
			return 8;
	
		default:
		
	}

	return 1;
}

void func_286(int iParam0, int iParam1) // Position - 0xBDD1 Hash - 0xA0246B1D ^0xF23F758E
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
	return;
}

BOOL func_287(int iParam0) // Position - 0xBDE7 Hash - 0x5DCECD10 ^0x5DCECD10
{
	if (iParam0 == -1)
		return false;

	return true;
}

BOOL func_288(int iParam0) // Position - 0xBDFA Hash - 0x34617548 ^0x34617548
{
	if (iParam0 <= -1 || iParam0 > 10)
		return false;

	return true;
}

int func_289(int iParam0) // Position - 0xBE19 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_7731[iParam0 /*5*/];
}

BOOL func_290(int iParam0, int iParam1) // Position - 0xBE2B Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_171() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_291(int iParam0) // Position - 0xBE5E Hash - 0x3E25647A ^0x3E25647A
{
	if (func_171() != -1)
		if (func_293(iParam0, 4))
			return false;
	else if (func_293(iParam0, 2))
		return false;

	return true;
}

BOOL func_292(int iParam0) // Position - 0xBE8E Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_293(iParam0, 65536) && !func_293(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_293(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_293(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_293(int iParam0, int iParam1) // Position - 0xBF3A Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_294() // Position - 0xBF53 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_295(int iParam0) // Position - 0xBF62 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_212(iParam0);

	if (hash == 0)
		return false;

	unk = { func_296(false) };

	if (func_351(&unk, hash, false) > 0)
		return true;

	return false;
}

struct<4> func_296(BOOL bParam0) // Position - 0xBF97 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_315(joaat("character"), func_352(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_297(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0xBFB3 Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_303(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_298(Any* panParam0, Any* panParam1) // Position - 0xBFED Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_303(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_299(BOOL bParam0) // Position - 0xC01C Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_171() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_303(bParam0));
}

int func_300(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11) // Position - 0xC03A Hash - 0x657ADCCC ^0xBBA0C366
{
	var unk;
	int num;
	int itemSlotMaxCount;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_301(uParam0, &unk, true, false))
		return -1;

	if (func_302(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	num = func_353(unk.f_4, uParam4, hParam8, false);
	itemSlotMaxCount = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(unk.f_4, hParam8);

	if (itemSlotMaxCount >= 0)
	{
		if (num >= itemSlotMaxCount)
		{
			return -1;
		}
		else if (num + unk.f_11 > itemSlotMaxCount)
		{
			if (bParam11)
				return -1;
		
			unk.f_11 = itemSlotMaxCount - num;
		}
	}

	unk15 = { func_354(&unk) };
	unk15.f_4 = { uParam4 };
	unk15.f_11 = hParam8;
	unk15.f_10 = iParam10;
	num2 = func_355(1168099063, &unk15, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_301(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xC138 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_303(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_302(var uParam0, var uParam1) // Position - 0xC168 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_303(BOOL bParam0) // Position - 0xC1A9 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_171() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_304(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xC1EA Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_299(false))
		return func_356(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_301(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_303(false), &uParam0, bParam4))
		return false;

	return true;
}

int func_305(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0xC25D Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_302(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_301(uParam0, &unk, true, false) || !func_301(uParam4, &unk15, true, false))
		return -1;

	if (func_302(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_354(&unk) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_354(&unk15) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
		{
			if (func_357(num, 1168099063, &unk29) && func_357(num, 1168099063, &unk46))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_358(num, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		num = func_355(1168099063, &unk29, false);
		num = func_355(1168099063, &unk46, false);
	}

	return num;
}

BOOL func_306(Hash hParam0) // Position - 0xC407 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case joaat("a_c_horse_gang_karen"):
		case joaat("a_c_horse_gang_dutch"):
		case joaat("a_c_horse_eagleflies"):
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case joaat("a_c_horse_gang_sadie_endlesssummer"):
		case joaat("a_c_horse_gang_charles"):
		case joaat("a_c_horse_gang_uncle_endlesssummer"):
		case joaat("a_c_horse_gang_trelawney"):
		case joaat("a_c_horse_gang_kieran"):
		case joaat("a_c_horse_gang_uncle"):
		case joaat("a_c_horse_gang_charles_endlesssummer"):
			return true;
	}

	return false;
}

void func_307(Blip blParam0) // Position - 0xC48B Hash - 0x537CC7C9 ^0xFC156D60
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_360(func_359(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_361())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_324();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

int func_308(int iParam0) // Position - 0xC4D8 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_309(Blip blParam0, BOOL bParam1) // Position - 0xC50C Hash - 0x6D6D5BCF ^0x848C8E61
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_360(func_359(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_361())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_324())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

Ped func_310(int iParam0) // Position - 0xC57C Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_311(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xC5AA Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_312(int iParam0) // Position - 0xC5C8 Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int rank;
	int defaultMaxAttributeRank;
	float num;
	Any any;
	int rank2;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_362(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_308(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_308(iParam0) + 1;
	num2 = func_363(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_364(num, any, num7);
	return num8;
}

void func_313(Blip blParam0) // Position - 0xC682 Hash - 0x9892E8C ^0x28660E03
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
	return;
}

void func_314(Blip blParam0) // Position - 0xC70E Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

struct<4> func_315(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xC73A Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_365(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_303(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

void func_316(int iParam0) // Position - 0xC76B Hash - 0x688B6CD0 ^0x688B6CD0
{
	int i;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	for (i = 0; i < 23; i = i + 1)
	{
		if (i == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[i] = 0f;
		}
	}

	return;
}

void func_317() // Position - 0xC7C0 Hash - 0x18B223B ^0xD86894F6
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		Global_1900383.f_317.f_2[i /*5*/] = -1;
		Global_1900383.f_317.f_2[i /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[i /*5*/].f_2 = 0f;
		Global_1900383.f_317.f_2[i /*5*/].f_3 = -1;
		Global_1900383.f_317.f_2[i /*5*/].f_4 = 0f;
	}

	return;
}

void func_318(int iParam0, int iParam1) // Position - 0xC828 Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Ped ped;
	int num2;
	int attributeRank;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_362(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_366(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_367(iParam1);
	ped = func_124(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num2 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 7, num2);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = attributeRank;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, attributeRank);
	return;
}

void func_319(int iParam0, float fParam1) // Position - 0xC926 Hash - 0xAD893F62 ^0xAA11739C
{
	Ped ped;
	int num;
	int attributeRank;

	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fParam1;
	ped = func_124(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return;

	num = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(ped, 7, num);
	attributeRank = ATTRIBUTE::GET_ATTRIBUTE_RANK(ped, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = attributeRank;
	PED::_SET_MOUNT_BONDING_LEVEL(ped, attributeRank);
	func_367(attributeRank);
	return;
}

int func_320() // Position - 0xC9D3 Hash - 0xAD5CD544 ^0xAD5CD544
{
	return 5;
}

int func_321() // Position - 0xC9DC Hash - 0xD1F2E716 ^0xD1F2E716
{
	return 6;
}

BOOL func_322(Hash hParam0) // Position - 0xC9E5 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("a_c_horse_arabian_redchestnut_pc"):
		case joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc"):
		case joaat("a_c_horse_morgan_liverchestnut_pc"):
		case joaat("a_c_horse_appaloosa_fewspotted_pc"):
		case joaat("a_c_horse_andalusian_perlino"):
		case joaat("a_c_horse_tennesseewalker_goldpalomino_pc"):
		case joaat("a_c_horse_arabian_warpedbrindle_pc"):
			return true;
	}

	return false;
}

BOOL func_323() // Position - 0xCA27 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_324() // Position - 0xCA38 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_171() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

int func_325(int iParam0) // Position - 0xCA5D Hash - 0x16E6950C ^0x16E6950C
{
	switch (iParam0)
	{
		case joaat("CC_LAKAY"):
			return 5;
	
		case joaat("CC_SHADY_BELLE"):
			return 3;
	
		case joaat("CC_PRONGHORN_RANCH"):
			return 7;
	
		case joaat("CC_HORSESHOE_OVERLOOK"):
			return 1;
	
		case joaat("CC_GUARMA"):
			return 4;
	
		case joaat("CC_COLTER"):
			return 0;
	
		case joaat("CC_BEECHERS_HOPE"):
			return 8;
	
		case joaat("CC_BEAVER_HOLLOW"):
			return 6;
	
		case joaat("CC_CLEMENS_POINT"):
			return 2;
	
		default:
		
	}

	return -1;
}

int func_326(int iParam0, int iParam1) // Position - 0xCAC9 Hash - 0x8FA0E29 ^0xC3F68E87
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_327(Hash hParam0) // Position - 0xDBE2 Hash - 0x50573299 ^0x50573299
{
	switch (hParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_328(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xDC9C Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_365(hParam0, 0))
		return false;

	num = func_368(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_369(hParam0, 1))
			return false;

	return func_370(hParam0, false, bParam2) >= iParam1;
}

BOOL func_329(Hash hParam0, var uParam1) // Position - 0xDD06 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_372(func_371(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_373(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_330(Hash hParam0) // Position - 0xDD7D Hash - 0xF2405EA8 ^0x7474775E
{
	int i;

	for (i = 0; i < Global_1835011; i = i + 1)
	{
		if (MISC::GET_HASH_KEY(&(Global_1835011[i /*74*/].f_8)) == hParam0)
			return i;
	}

	return -1;
}

eStackSize func_331(Hash hParam0) // Position - 0xDDB3 Hash - 0xF2405EA8 ^0xAAC8F338
{
	eStackSize i;

	for (i = 0; i < Global_1347702; i = i + 1)
	{
		if (MISC::GET_HASH_KEY(&(Global_1347702[i /*49*/].f_3)) == hParam0)
			return i;
	}

	return -1;
}

BOOL func_332(eStackSize essParam0) // Position - 0xDDE9 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_171() != -1)
		return false;

	if (!func_374(essParam0))
		return false;

	return func_38(Global_1347702[essParam0 /*49*/].f_15, true);
}

BOOL func_333(int iParam0) // Position - 0xDE1A Hash - 0x4461E3A8 ^0x4461E3A8
{
	if (iParam0 <= -1 || iParam0 >= 4)
		return false;

	return true;
}

Vector3 func_334(eStackSize essParam0) // Position - 0xDE38 Hash - 0x3E6E91A9 ^0x3E6E91A9
{
	return func_375(essParam0);
}

int func_335(eStackSize essParam0) // Position - 0xDE46 Hash - 0xF5529DCB ^0xF5529DCB
{
	switch (essParam0)
	{
		case 17:
			return 50f;
	}

	return 0f;
}

var func_336(BOOL bParam0, var uParam1, var uParam2) // Position - 0xDE68 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_337(eStackSize essParam0, BOOL bParam1) // Position - 0xDE7F Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_171() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == essParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

Vector3 func_338(eStackSize essParam0) // Position - 0xDEDC Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_374(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_376(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

int func_339(Hash hParam0) // Position - 0xDF22 Hash - 0xCD57912C ^0xCD57912C
{
	switch (hParam0)
	{
		case joaat("region_rio_fort_mercer"):
			return 118;
	
		case -2085163631:
			return 0;
	
		case joaat("region_bgv_hangingdog"):
			return 16;
	
		case joaat("region_grz_colter"):
			return 43;
	
		case joaat("region_tal_aurora_basin"):
			return 107;
	
		case joaat("region_grz_theloft"):
			return 54;
	
		case joaat("region_gap_solomons_folly"):
			return 129;
	
		case joaat("region_grz_tempest_rim"):
			return 48;
	
		case joaat("region_blu_copperhead"):
			return 31;
	
		case joaat("region_bay_lagras"):
			return 3;
	
		case joaat("region_gre_civil_war_bride"):
			return 51;
	
		case joaat("region_bgv_missing_husband"):
			return 18;
	
		case joaat("region_scm_love_triangle"):
			return 103;
	
		case joaat("region_scm_dairy_farm"):
			return 100;
	
		case joaat("region_gua_cincotorres"):
			return 59;
	
		case joaat("region_roa_mossy_flats"):
			return 87;
	
		case joaat("region_roa_butchercreek"):
			return 82;
	
		case joaat("region_bay_siltwaterstrand"):
			return 10;
	
		case joaat("region_hrt_grangers_hoggery"):
			return 70;
	
		case joaat("region_roa_brandywine_drop"):
			return 81;
	
		case joaat("region_scm_clemenspoint"):
			return 98;
	
		case joaat("region_cho_rileys_charge"):
			return 123;
	
		case joaat("region_grz_cohutta"):
			return 52;
	
		case joaat("region_tal_trapper"):
			return 113;
	
		case joaat("region_bay_shadybelle"):
			return 9;
	
		case joaat("region_roa_happy_family"):
			return 84;
	
		case joaat("region_hrt_larnedsod"):
			return 72;
	
		case joaat("region_cml_sixpointcabin"):
			return 36;
	
		case joaat("region_rio_benedict_point"):
			return 117;
	
		case joaat("region_bay_serial_killer"):
			return 7;
	
		case joaat("region_tal_cochinay"):
			return 109;
	
		case joaat("region_roa_macleanshouse"):
			return 86;
	
		case joaat("region_scm_slave_pen"):
			return 106;
	
		case joaat("region_grz_wapiti"):
			return 56;
	
		case joaat("region_bgv_pronghorn"):
			return 22;
	
		case joaat("region_bgv_riggs_station"):
			return 23;
	
		case joaat("region_bgv_shack"):
			return 24;
	
		case joaat("region_tal_dead_settler"):
			return 108;
	
		case joaat("region_grz_millesani_claim"):
			return 45;
	
		case joaat("region_roa_rockyseven"):
			return 89;
	
		case joaat("region_roa_doverhill"):
			return 83;
	
		case joaat("region_scm_caligahall"):
			return 95;
	
		case joaat("region_scm_rhodes"):
			return 105;
	
		case joaat("region_cho_coots_chapel"):
			return 121;
	
		case joaat("region_scm_bulgerglade"):
			return 94;
	
		case joaat("region_gre_veteran"):
			return 55;
	
		case joaat("region_roa_trapper"):
			return 90;
	
		case joaat("region_grz_gunfight"):
			return 53;
	
		case joaat("region_tal_manzanitapost"):
			return 110;
	
		case joaat("region_rio_plain_view"):
			return 119;
	
		case joaat("region_scm_radleys_pasture"):
			return 104;
	
		case joaat("region_scm_clemenscove"):
			return 97;
	
		case joaat("region_roa_roanoke_valley"):
			return 88;
	
		case joaat("region_bay_orange_plantation"):
			return 6;
	
		case joaat("region_hrt_crop_farm"):
			return 66;
	
		case joaat("region_bgv_watsonscabin"):
			return 29;
	
		case joaat("region_cho_ridgewood_farm"):
			return 124;
	
		case joaat("region_gua_camp"):
			return 58;
	
		case joaat("region_grt_beechers"):
			return 37;
	
		case joaat("region_cho_twin_rocks"):
			return 125;
	
		case joaat("region_gap_gaptooth_breach"):
			return 114;
	
		case joaat("region_grz_starving_children"):
			return 47;
	
		case joaat("region_scm_braithwaitemanor"):
			return 93;
	
		case joaat("region_scm_lonniesshack"):
			return 102;
	
		case joaat("region_bay_crawdadwillies"):
			return 0;
	
		case joaat("region_hrt_downsranch"):
			return 68;
	
		case joaat("region_hrt_valentine"):
			return 76;
	
		case joaat("region_bgv_appleseedtimber"):
			return 11;
	
		case joaat("region_roa_vanhornmansion"):
			return 91;
	
		case joaat("region_grt_quakers_cove"):
			return 39;
	
		case joaat("region_scm_compsons_stead"):
			return 99;
	
		case joaat("region_roa_annesburg"):
			return 78;
	
		case joaat("region_gap_tumbleweed"):
			return 115;
	
		case joaat("region_grz_mountain_man"):
			return 46;
	
		case joaat("region_grz_wintermining_town"):
			return 49;
	
		case joaat("region_cml_bacchusbridge"):
			return 33;
	
		case joaat("region_gua_aguasdulces"):
			return 57;
	
		case joaat("region_bgv_lonemulestead"):
			return 17;
	
		case joaat("region_bgv_fortriggs"):
			return 15;
	
		case joaat("region_bay_merkinswaller"):
			return 2;
	
		case joaat("region_cml_oldfortwallace"):
			return 35;
	
		case joaat("region_roa_black_balsam_rise"):
			return 80;
	
		case joaat("region_bgv_blackboneforest_trapper"):
			return 13;
	
		case joaat("region_roa_beechers_c"):
			return 63;
	
		case joaat("region_centralunionrr"):
			return 128;
	
		case joaat("region_hen_macfarlanes_ranch"):
			return 126;
	
		case joaat("region_bay_saint_denis"):
			return 5;
	
		case joaat("region_scm_horse_shop"):
			return 101;
	
		case joaat("region_blu_sisika"):
			return 32;
	
		case joaat("region_bgv_paintedsky"):
			return 21;
	
		case joaat("region_bgv_valley_view"):
			return 27;
	
		case joaat("region_hrt_loony_cult"):
			return 73;
	
		case joaat("region_grz_frozen_explorer"):
			return 44;
	
		case joaat("region_hen_thieves_landing"):
			return 127;
	
		case joaat("region_tal_pacificunionrr"):
			return 111;
	
		case joaat("region_hrt_abandoned_mill"):
			return 62;
	
		case joaat("region_bay_serendipity"):
			return 8;
	
		case joaat("region_bgv_dakotariver_trapper"):
			return 14;
	
		case joaat("region_roa_isolationist"):
			return 85;
	
		case joaat("region_grz_dead_rival"):
			return 41;
	
		case joaat("region_grz_calumetravine"):
			return 50;
	
		case joaat("region_cml_dino_lady"):
			return 34;
	
		case joaat("region_bgv_wallace_station"):
			return 28;
	
		case joaat("region_roa_beaverhollow"):
			return 79;
	
		case joaat("region_bgv_strawberry"):
			return 26;
	
		case joaat("region_grz_chezporter"):
			return 42;
	
		case joaat("region_blu_canebreak_manor"):
			return 30;
	
		case joaat("region_grz_adlerranch"):
			return 40;
	
		case joaat("region_scm_catfishjacksons"):
			return 96;
	
		case joaat("region_roa_vanhornpost"):
			return 92;
	
		case joaat("region_cho_armadillo"):
			return 120;
	
		case joaat("region_grt_blackwater"):
			return 38;
	
		case joaat("region_bgv_beryls_dream"):
			return 12;
	
		case joaat("region_bay_macombs_end"):
			return 1;
	
		case joaat("region_cho_don_julio_house"):
			return 122;
	
		case joaat("region_hrt_swansons_station"):
			return 75;
	
		case joaat("region_bgv_monto_rest"):
			return 19;
	
		case joaat("region_hrt_cumberlandfalls"):
			return 67;
	
		case joaat("region_hrt_carmodydell"):
			return 64;
	
		case joaat("region_gua_manicato"):
			return 61;
	
		case joaat("region_hrt_emeraldranch"):
			return 69;
	
		case joaat("region_bay_lakay"):
			return 4;
	
		case joaat("region_gua_lacapilla"):
			return 60;
	
		case joaat("region_bgv_owanjila_dam"):
			return 20;
	
		case joaat("region_hrt_cornwallkerosene"):
			return 65;
	
		case joaat("region_gap_rathskeller_fork"):
			return 116;
	
		case joaat("region_roa_aberdeenpigfarm"):
			return 77;
	
		case joaat("region_hrt_luckyscabin"):
			return 74;
	
		case joaat("region_hrt_horseshoeoverlook"):
			return 71;
	
		case joaat("region_bgv_shepherds_rise"):
			return 25;
	
		case joaat("region_tal_tannersreach"):
			return 112;
	
		default:
		
	}

	return -1;
}

int func_340(Hash hParam0) // Position - 0xE4CB Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (hParam0)
	{
		case joaat("district_big_valley"):
			return 1;
	
		case joaat("district_grizzlies"):
			return 5;
	
		case joaat("district_grizzlies_east"):
			return 6;
	
		case joaat("district_cholla_springs"):
			return 15;
	
		case joaat("district_guama"):
			return 8;
	
		case joaat("district_grizzlies_west"):
			return 7;
	
		case joaat("district_rio_bravo"):
			return 14;
	
		case joaat("district_bluegill_marsh"):
			return 2;
	
		case joaat("district_scarlett_meadows"):
			return 11;
	
		case joaat("district_great_plains"):
			return 4;
	
		case joaat("district_bayou_nwa"):
			return 0;
	
		case joaat("district_roanoke_ridge"):
			return 10;
	
		case joaat("district_hennigans_stead"):
			return 16;
	
		case joaat("district_gaptooth_ridge"):
			return 13;
	
		case joaat("district_cumberland_forest"):
			return 3;
	
		case joaat("district_heartland"):
			return 9;
	
		case joaat("district_tall_trees"):
			return 12;
	
		default:
		
	}

	return -1;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(eStackSize essParam0) // Position - 0xE58F Hash - 0xA17D549C ^0x988959EE
{
	switch (essParam0)
	{
		case -1:
			return "REGION_INVALID";
	
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
	
		case 1:
			return "REGION_BAY_MACOMBS_END";
	
		case 2:
			return "REGION_BAY_MERKINSWALLER";
	
		case 3:
			return "REGION_BAY_LAGRAS";
	
		case 4:
			return "REGION_BAY_LAKAY";
	
		case 5:
			return "REGION_BAY_SAINT_DENIS";
	
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
	
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
	
		case 8:
			return "REGION_BAY_SERENDIPITY";
	
		case 9:
			return "REGION_BAY_SHADYBELLE";
	
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
	
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
	
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
	
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
	
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
	
		case 15:
			return "REGION_BGV_FORTRIGGS";
	
		case 16:
			return "REGION_BGV_HANGINGDOG";
	
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
	
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
	
		case 19:
			return "REGION_BGV_MONTO_REST";
	
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
	
		case 21:
			return "REGION_BGV_PAINTEDSKY";
	
		case 22:
			return "REGION_BGV_PRONGHORN";
	
		case 23:
			return "REGION_BGV_RIGGS_STATION";
	
		case 24:
			return "REGION_BGV_SHACK";
	
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
	
		case 26:
			return "REGION_BGV_STRAWBERRY";
	
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
	
		case 28:
			return "REGION_BGV_WALLACE_STATION";
	
		case 29:
			return "REGION_BGV_WATSONSCABIN";
	
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
	
		case 31:
			return "REGION_BLU_COPPERHEAD";
	
		case 32:
			return "REGION_BLU_SISIKA";
	
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
	
		case 34:
			return "REGION_CML_DINO_LADY";
	
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
	
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
	
		case 37:
			return "REGION_GRT_BEECHERS";
	
		case 38:
			return "REGION_GRT_BLACKWATER";
	
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
	
		case 40:
			return "REGION_GRZ_ADLERRANCH";
	
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
	
		case 42:
			return "REGION_GRZ_CHEZPORTER";
	
		case 43:
			return "REGION_GRZ_COLTER";
	
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
	
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
	
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
	
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
	
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
	
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
	
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
	
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
	
		case 52:
			return "REGION_GRZ_COHUTTA";
	
		case 53:
			return "REGION_GRZ_GUNFIGHT";
	
		case 54:
			return "REGION_GRZ_THELOFT";
	
		case 55:
			return "REGION_GRE_VETERAN";
	
		case 56:
			return "REGION_GRZ_WAPITI";
	
		case 57:
			return "REGION_GUA_AGUASDULCES";
	
		case 58:
			return "REGION_GUA_CAMP";
	
		case 59:
			return "REGION_GUA_CINCOTORRES";
	
		case 60:
			return "REGION_GUA_LACAPILLA";
	
		case 61:
			return "REGION_GUA_MANICATO";
	
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
	
		case 63:
			return "REGION_ROA_BEECHERS_C";
	
		case 64:
			return "REGION_HRT_CARMODYDELL";
	
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
	
		case 66:
			return "REGION_HRT_CROP_FARM";
	
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
	
		case 68:
			return "REGION_HRT_DOWNSRANCH";
	
		case 69:
			return "REGION_HRT_EMERALDRANCH";
	
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
	
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
	
		case 72:
			return "REGION_HRT_LARNEDSOD";
	
		case 73:
			return "REGION_HRT_LOONY_CULT";
	
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
	
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
	
		case 76:
			return "REGION_HRT_VALENTINE";
	
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
	
		case 78:
			return "REGION_ROA_ANNESBURG";
	
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
	
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
	
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
	
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
	
		case 83:
			return "REGION_ROA_DOVERHILL";
	
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
	
		case 85:
			return "REGION_ROA_ISOLATIONIST";
	
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
	
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
	
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
	
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
	
		case 90:
			return "REGION_ROA_TRAPPER";
	
		case 91:
			return "REGION_ROA_VANHORNMANSION";
	
		case 92:
			return "REGION_ROA_VANHORNPOST";
	
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
	
		case 94:
			return "REGION_SCM_BULGERGLADE";
	
		case 95:
			return "REGION_SCM_CALIGAHALL";
	
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
	
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
	
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
	
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
	
		case 100:
			return "REGION_SCM_DAIRY_FARM";
	
		case 101:
			return "REGION_SCM_HORSE_SHOP";
	
		case 102:
			return "REGION_SCM_LONNIESSHACK";
	
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
	
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
	
		case 105:
			return "REGION_SCM_RHODES";
	
		case 106:
			return "REGION_SCM_SLAVE_PEN";
	
		case 107:
			return "REGION_TAL_AURORA_BASIN";
	
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
	
		case 109:
			return "REGION_TAL_COCHINAY";
	
		case 110:
			return "REGION_TAL_MANZANITAPOST";
	
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
	
		case 112:
			return "REGION_TAL_TANNERSREACH";
	
		case 113:
			return "REGION_TAL_TRAPPER";
	
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
	
		case 115:
			return "REGION_GAP_TUMBLEWEED";
	
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
	
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
	
		case 118:
			return "REGION_RIO_FORT_MERCER";
	
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
	
		case 120:
			return "REGION_CHO_ARMADILLO";
	
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
	
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
	
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
	
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
	
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
	
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
	
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
	
		case MICRO:
			return "REGION_CENTRALUNIONRR";
	
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
	
		default:
		
	}

	return "REGION_INVALID";
}

const char* func_342(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xEC54 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

var func_343(BOOL bParam0, var uParam1, var uParam2) // Position - 0xEC68 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

float func_344(float fParam0, float fParam1, float fParam2) // Position - 0xEC7F Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)BUILTIN::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

BOOL func_345(int iParam0) // Position - 0xECC1 Hash - 0x9921E361 ^0xB910E238
{
	return Global_40.f_7748.f_4 && iParam0 != false;
}

int func_346(float fParam0, float fParam1) // Position - 0xECD6 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 24f);
}

int func_347(float fParam0, float fParam1) // Position - 0xECFB Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

int func_348(float fParam0, float fParam1) // Position - 0xED20 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

void func_349(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xED45 Hash - 0xA65AB937 ^0xA65AB937
{
	func_377(essParam0, iParam6);
	func_378(essParam0, iParam5);
	func_379(essParam0, iParam4);
	func_380(essParam0, iParam3);
	func_381(essParam0, iParam2);
	func_382(essParam0, iParam1);
	return;
}

void func_350(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xED7D Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_282(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_282(20))
				return;
		}
	}

	func_283(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_200(8);
	return;
}

int func_351(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0xEE81 Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_303(bParam2), panParam0, hParam1);
}

struct<4> func_352() // Position - 0xEE97 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_353(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xEEA3 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_365(hParam0, 0))
		return 0;

	guid = { func_315(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_303(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<17> func_354(var uParam0) // Position - 0xEEEB Hash - 0x4CD39800 ^0x7DC5804
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { *uParam0 };
	unk.f_4 = { uParam0->f_5 };
	unk.f_8 = uParam0->f_4;
	unk.f_9 = uParam0->f_11;
	unk.f_11 = uParam0->f_9;
	unk.f_10 = uParam0->f_10;
	return unk;
}

int func_355(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xEF3F Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_357(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_358(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_358(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_358(num, 1);
		return num;
	}

	return -1;
}

int func_356(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0xEFC6 Hash - 0x4C6CAF1 ^0xEE857D47
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk62;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_301(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_368(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_383(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_384(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_385(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_386(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_354(&unk) };
		unk62.f_10 = iParam4;
		num = func_355(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_357(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xF0BD Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_358(int iParam0, int iParam1) // Position - 0xF0D4 Hash - 0x18C74423 ^0xA1132A0
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1223212; i = i + 1)
	{
		if (Global_1223212.f_1[i /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[i /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[i /*9*/].f_1 = iParam1;
			}
		
			return;
		}
	}

	func_387(iParam0, iParam1);
	return;
}

const char* func_359(int iParam0) // Position - 0xF136 Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_388(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_388(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_360(const char* sParam0, int iParam1) // Position - 0xF1DD Hash - 0xB0CFF0C3 ^0xFB1509BD
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_389(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

BOOL func_361() // Position - 0xF213 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_171() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

Ped func_362(int iParam0) // Position - 0xF239 Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

float func_363(int iParam0) // Position - 0xF26C Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_119(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_364(float fParam0, Any anParam1, float fParam2) // Position - 0xF2A2 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_365(Hash hParam0, int iParam1) // Position - 0xF2B7 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_366(var uParam0, var uParam1, var uParam2) // Position - 0xF2D1 Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_37())
	{
		if (func_361())
		{
			flag = false;
		
			if (!func_38(Global_1835011[15 /*74*/].f_1, true) && !func_172(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_390();
				*uParam1 = func_391();
				*uParam2 = func_392();
				return 1;
			}
			else
			{
				*uParam0 = func_393();
				*uParam1 = func_394();
				*uParam2 = func_395();
				return 1;
			}
		}
		else if (func_324())
		{
			if (!func_38(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_396();
				*uParam1 = func_397();
				*uParam2 = func_398();
				return 1;
			}
			else
			{
				*uParam0 = func_399();
				*uParam1 = func_400();
				*uParam2 = func_401();
				return 1;
			}
		}
	}
	else if (func_361())
	{
		*uParam0 = func_402();
		*uParam1 = func_403();
		*uParam2 = func_404();
		return 1;
	}
	else if (func_324())
	{
		*uParam0 = func_405();
		*uParam1 = func_406();
		*uParam2 = func_407();
		return 1;
	}

	return 0;
}

void func_367(int iParam0) // Position - 0xF3EB Hash - 0xCC180397 ^0xCC180397
{
	if (func_408() < iParam0)
		func_409(iParam0);

	return;
}

int func_368(Hash hParam0) // Position - 0xF402 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_365(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_369(Hash hParam0, int iParam1) // Position - 0xF42D Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_365(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_410(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_411("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_412(&unk, i, num, num2))
			{
			}
			else if (!func_413(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_414(num);
				return true;
			}
		}
	
		func_414(num);
	}

	return false;
}

int func_370(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF4D5 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_365(hParam0, 0))
		return 0;

	num = func_368(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_410(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_415(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_303(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_371(Hash hParam0) // Position - 0xF557 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_416(outSlotId);
}

int func_372(int iParam0, int iParam1) // Position - 0xF57A Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_373(Hash hParam0) // Position - 0xF74B Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_365(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_374(eStackSize essParam0) // Position - 0xF776 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

Vector3 func_375(eStackSize essParam0) // Position - 0xF78C Hash - 0xACD6F870 ^0xDE230469
{
	if (func_417(essParam0))
		return func_418(essParam0);

	return Global_1835011[essParam0 /*74*/].f_18;
}

BOOL func_376(eStackSize essParam0, var uParam1) // Position - 0xF7B2 Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_419(Global_1347702[essParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[essParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.1127f, 159.72952f, 103.01753f };
			return true;
		}
	}
	else if (essParam0 == 96)
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.7104f, -1338.3771f, 82.0174f };
			return true;
		}
	}

	return false;
}

void func_377(eStackSize essParam0, int iParam1) // Position - 0xF848 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*essParam0 = *essParam0 - *essParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*essParam0 = *essParam0 | -2147483648;
	}
	else
	{
		*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*essParam0 = *essParam0 - *essParam0 & -2147483648;
	}

	return;
}

void func_378(eStackSize essParam0, int iParam1) // Position - 0xF8CE Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*essParam0 = *essParam0 - *essParam0 & 62914560;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_379(eStackSize essParam0, int iParam1) // Position - 0xF90A Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_268(*essParam0);
	num2 = func_267(*essParam0);

	if (iParam1 < 1 || iParam1 > func_270(num, num2))
		return;

	*essParam0 = *essParam0 - *essParam0 & 4063232;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_380(eStackSize essParam0, int iParam1) // Position - 0xF95D Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*essParam0 = *essParam0 - *essParam0 & 126976;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_381(eStackSize essParam0, int iParam1) // Position - 0xF998 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*essParam0 = *essParam0 - *essParam0 & 4032;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_382(eStackSize essParam0, int iParam1) // Position - 0xF9D1 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*essParam0 = *essParam0 - *essParam0 & 63;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

struct<29> func_383(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xFA09 Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_303(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_354(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_384(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xFAA2 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_420(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_358(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_358(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_358(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_385(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xFB29 Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_303(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_354(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_386(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xFB9C Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_421(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_358(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_358(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_358(num, 1);
		return num;
	}

	return -1;
}

void func_387(int iParam0, int iParam1) // Position - 0xFC23 Hash - 0x26256B16 ^0x79A35F4E
{
	int i;
	int num;

	if (iParam0 == -1)
		return;

	if (Global_1223212 < 20)
	{
		Global_1223212 = Global_1223212 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223212.f_1[i /*9*/] = { Global_1223212.f_1[i + 1 /*9*/] };
		}
	}

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;
	Global_1223212.f_1[Global_1223212 - 1 /*9*/] = { num };
	return;
}

BOOL func_388(int iParam0, int iParam1) // Position - 0xFCA0 Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_422(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_423())
		return func_422(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_422(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

const char* func_389(const char* sParam0, int iParam1) // Position - 0xFD14 Hash - 0x9E99F03 ^0xEE54B7A
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_390() // Position - 0xFD2E Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_391() // Position - 0xFD3B Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_392() // Position - 0xFD48 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_393() // Position - 0xFD51 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_394() // Position - 0xFD5E Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_395() // Position - 0xFD6B Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_396() // Position - 0xFD74 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_397() // Position - 0xFD81 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_398() // Position - 0xFD8E Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_399() // Position - 0xFD97 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_400() // Position - 0xFDA4 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_401() // Position - 0xFDB1 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_402() // Position - 0xFDBA Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_403() // Position - 0xFDC7 Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_404() // Position - 0xFDD4 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_405() // Position - 0xFDDD Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_406() // Position - 0xFDEA Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_407() // Position - 0xFDF7 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_408() // Position - 0xFE00 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_409(int iParam0) // Position - 0xFE11 Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

Hash func_410(Hash hParam0, int iParam1) // Position - 0xFE24 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_365(hParam0, 0))
		return 0;

	num = func_368(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_424(hParam0, 1399091007))
	{
		func_425(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_411(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xFE9E Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_303(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_412(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xFEC5 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_413(Hash hParam0) // Position - 0xFF00 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_414(int iParam0) // Position - 0xFF1B Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_415(Hash hParam0, BOOL bParam1) // Position - 0xFF3C Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_426(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_428(&unk, func_427(false));

	if (!func_429(&unk, &num, &num2, false))
		return 0;

	func_414(num);
	return num2;
}

int func_416(var uParam0) // Position - 0xFF9A Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_430(i, 1);
	}

	return -358215195;
}

BOOL func_417(eStackSize essParam0) // Position - 0xFFD5 Hash - 0xA505D99C ^0xA505D99C
{
	switch (essParam0)
	{
		case 14:
		case 34:
			return !func_431(&Global_1835011[essParam0 /*74*/]);
	}

	return false;
}

Vector3 func_418(eStackSize essParam0) // Position - 0x10007 Hash - 0x695A7658 ^0x6D3D4EDB
{
	switch (essParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
	
		case 34:
			return 2544.9822f, -1187.3444f, 52.3104f;
	}

	return Global_1835011[essParam0 /*74*/].f_18;
}

int func_419(int iParam0) // Position - 0x10059 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_3(iParam0))
		return -1;

	return func_432(iParam0);
}

BOOL func_420(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x10075 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_421(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x1008C Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_422(var uParam0, int iParam1, int iParam2) // Position - 0x100A3 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_423() // Position - 0x100DA Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

BOOL func_424(Hash hParam0, Hash hParam1) // Position - 0x100E8 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_425(Hash hParam0, var uParam1, var uParam2) // Position - 0x10119 Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_426(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x10325 Hash - 0x84700F53 ^0xB9E7AA96
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	return hash;
}

struct<4> func_427(BOOL bParam0) // Position - 0x103F7 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_303(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_315(923904168, func_296(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_315(923904168, func_296(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_315(923904168, func_296(bParam0), -740156546, false);
}

void func_428(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1048C Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_429(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x104A7 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_303(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_430(int iParam0, int iParam1) // Position - 0x104CC Hash - 0xE1D12727 ^0xA46110B3
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_431(int iParam0) // Position - 0x1071B Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_433(&(iParam0->f_29), 62))
	{
		switch (func_434())
		{
			case 1:
				if (!func_433(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_433(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_433(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_433(&(iParam0->f_29), 32))
					if (func_433(&(iParam0->f_29), 2))
						if (func_266(func_117()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

int func_432(int iParam0) // Position - 0x107C5 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_433(var uParam0, int iParam1) // Position - 0x107E4 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_434() // Position - 0x10804 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

