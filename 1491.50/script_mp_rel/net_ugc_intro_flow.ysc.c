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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 1224195223;
	var uLocal_18 = 1825312110;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 4;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	Player plLocal_32 = 0;
	Ped pedLocal_33 = 0;
	BOOL bLocal_34 = 0;
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	Hash hLocal_37 = 0;
	Hash hLocal_38 = 0;
	BOOL bLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	BOOL bLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	BOOL bLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	BOOL bLocal_52 = 0;
	var uLocal_53 = 2;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 1;
	var uLocal_57 = 0;
	BOOL bLocal_58 = 0;
	ScrHandle shLocal_59 = 0;
	AnimScene ansLocal_60 = 0;
	char* sLocal_61 = 0;
	char* sLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 4;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	BOOL bLocal_80 = 0;
	int iLocal_81 = 0;
	BOOL bLocal_82 = 0;
	BOOL bLocal_83 = 0;
	BOOL bLocal_84 = 0;
	var uLocal_85 = 32;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	int iLocal_182 = 0;
	BOOL bLocal_183 = 0;
	BOOL bLocal_184 = 0;
	BOOL bLocal_185 = 0;
	var uLocal_186 = 2;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 2;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xDC9E78B1 ^0xFE920EBE
{
	var eventName;

	iLocal_42 = -1;
	iLocal_43 = -1;
	ansLocal_60 = -1;
	sLocal_61 = "script@mp@introflow@teamonfoot";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1(512);

	if (func_2(-2147483648))
		bLocal_35 = true;
	else if (func_2(1073741824))
		bLocal_36 = true;

	Global_1049287 = true;
	func_3();
	func_4(&uLocal_16, false, true);
	func_5(&uLocal_16, false);
	uLocal_16.f_2 = -956723401;
	plLocal_32 = PLAYER::PLAYER_ID();
	pedLocal_33 = PLAYER::GET_PLAYER_PED(plLocal_32);
	hLocal_37 = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH("MP_Trans_PhotoToScene");
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(hLocal_37);
	hLocal_38 = GRAPHICS::_ANIMPOSTFX_GET_STACKHASH("MP_Trans_SceneToPhoto");
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX_BY_STACKHASH(hLocal_38);
	TEXT_LABEL_ASSIGN_STRING(&eventName, "MP_ADV_INTRO_OS", 32);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_51717)))
		eventName = { Global_3145858.f_51717 };

	AUDIO::PREPARE_MUSIC_EVENT(&eventName);

	while (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		BUILTIN::WAIT(0);
	}

	while (!func_6())
	{
		if (func_7())
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MAP"), true);
		
			if (!func_8(16))
			{
				if (func_9())
				{
					func_10();
				
					if (func_11())
					{
						func_12();
						func_13();
						func_14();
					}
				}
			}
			else
			{
				if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_ugc_end_flow")) != 0)
				{
				}
				else
				{
					func_15(false);
				}
			
				bLocal_44 = true;
			
				if (func_9())
					func_10();
			}
		}
		else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("net_ugc_end_flow")) != 0)
		{
		}
		else
		{
			func_11() && func_9();
		}
	
		BUILTIN::WAIT(0);
	}

	AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
	func_16();
	func_17(true);
	Global_1049287 = false;
	Global_1049288 = false;
	STREAMING::CLEAR_FOCUS();
	func_18();
	return;
}

void func_1(BOOL bParam0) // Position - 0x183 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_262153 = Global_262153 - Global_262153 && bParam0;
	return;
}

BOOL func_2(BOOL bParam0) // Position - 0x19B Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_262153 && bParam0 != false;
}

void func_3() // Position - 0x1AC Hash - 0x9773689D ^0x78DBCFD0
{
	Global_1149432.f_4787.f_5 = Global_1953292.f_1676.f_1[0 /*3*/];
	Global_1149432.f_4787.f_8 = Global_1953292.f_1676.f_1[2 /*3*/];
	func_19();
	func_20();
	func_21();
	return;
}

void func_4(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1EA Hash - 0x7C91019A ^0x19A3EA3A
{
	if (bParam1)
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	else if (bParam2)
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	else
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);

	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	return;
}

void func_5(var uParam0, BOOL bParam1) // Position - 0x234 Hash - 0xF4307C79 ^0x63F39CFD
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_11))
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	else
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);

	return;
}

BOOL func_6() // Position - 0x27F Hash - 0xC75E6551 ^0xDFABEF04
{
	if (func_22() == 7)
		return true;

	if (func_23(true, true))
		return true;

	if (func_2(64))
		return true;

	if (func_2(512))
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_MISSION_CONTROLLER"));
		return true;
	}

	return false;
}

BOOL func_7() // Position - 0x2C5 Hash - 0xBDB4EE1E ^0x4936E797
{
	if (func_2(2) && !MISC::IS_BIT_SET(iLocal_46, 1))
	{
		MISC::SET_BIT(&iLocal_46, 1);
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_MP_MATCHMAKING_TRANSITION"));
	}

	return MISC::IS_BIT_SET(iLocal_46, 1);
}

BOOL func_8(BOOL bParam0) // Position - 0x2F9 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_262151 && bParam0 != false;
}

BOOL func_9() // Position - 0x30A Hash - 0x3ED12949 ^0x7BCE1081
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("UIC"))
		HUD::TEXT_BLOCK_REQUEST("UIC");
	else
		return true;

	iLocal_45 = iLocal_45 + 1;

	if (iLocal_45 > 100)
		return true;

	return false;
}

void func_10() // Position - 0x33E Hash - 0x66597AC6 ^0xFF5F20AD
{
	if (!func_2(268435456) && !MISC::IS_BIT_SET(iLocal_46, 5))
	{
		func_24(32768);
		func_25(true);
		AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("loading_black_white");
		SCRIPTS::_DISPLAY_LOADING_SCREENS(func_26(), func_27(), func_28(), func_29(), func_30(), func_31());
		MISC::SET_BIT(&iLocal_46, 5);
		func_5(&uLocal_16, true);
	}

	return;
}

BOOL func_11() // Position - 0x39E Hash - 0xB0A9E859 ^0xCC48BC79
{
	if (bLocal_47)
		return true;

	if (!func_32(&uLocal_16))
		return false;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_48))
	{
		if (!GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(hLocal_37) && !GRAPHICS::ANIMPOSTFX_IS_PRELOADING_BY_STACKHASH(hLocal_38))
		{
			bLocal_47 = true;
			return true;
		}
		else if (func_34(&uLocal_48, false, false) > 30000)
		{
			return true;
		}
	}
	else
	{
		_STOPWATCH_RESET(&uLocal_48, false, false);
	}

	return false;
}

void func_12() // Position - 0x404 Hash - 0x5A148F1E ^0x64487074
{
	int num;
	int i;

	CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();

	if (!Global_1940085.f_19)
		func_17(false);

	if (!func_2(256))
	{
		num = 14;
	
		for (i = 0; i <= num - 1; i = i + 1)
		{
			if (i != 1 && i != 13 && i != 4 && i != 11)
				UIFEED::UI_FEED_CLEAR_CHANNEL(i, true, true);
		}
	}

	func_36();

	if (Global_1940252.f_2)
		Global_1940252 = 2;

	if (Global_1896762.f_352)
		func_37(false);

	return;
}

void func_13() // Position - 0x490 Hash - 0xEEF4FA4A ^0x7D5E2CE2
{
	func_38(&uLocal_16);

	switch (iLocal_13)
	{
		case 0:
			if (func_11())
			{
				MISC::SET_BIT(&(Global_1958634.f_1), 5);
				func_39();
			
				if (!func_40())
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
			
				HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_MISSION_CONTROLLER"));
			
				if (func_2(268435456))
				{
					if (!func_2(262144))
					{
						if (!func_41())
							CAM::DO_SCREEN_FADE_OUT(1000);
					
						func_42(true);
					}
				}
				else
				{
					func_43(&uLocal_16, func_29(), func_30(), func_31());
				}
			
				GRAPHICS::_0xE75CDDEBF618C8FF(hLocal_37);
				func_44(1);
			}
			break;
	
		case 1:
			if (!bLocal_34 && !bLocal_44 && bLocal_36 || bLocal_35)
				AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
		
			func_44(2);
		
			if (func_2(262144) || !func_2(268435456))
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					CAM::DO_SCREEN_FADE_IN(750);
			break;
	
		case 2:
			if (func_2(256) || func_2(262144))
			{
				func_44(5);
			}
			else if (func_2(4))
			{
				if (!func_2(268435456))
					CAM::DO_SCREEN_FADE_IN(0);
			
				GRAPHICS::RESET_PAUSED_RENDERPHASES();
				func_44(3);
			}
			break;
	
		case 3:
			if (func_2(8) && ENTITY::IS_ENTITY_VISIBLE(pedLocal_33) || bLocal_52 && Global_262154 != -1)
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 6))
				{
					func_45();
					MISC::SET_BIT(&iLocal_46, 6);
				}
			
				if (func_46())
				{
					if (!func_2(4096))
					{
						NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, Global_262154, true);
					}
				
					if (MISC::IS_BIT_SET(iLocal_46, 9))
						func_47(false);
				
					func_44(4);
				}
			}
			else if (Global_262154 == -1)
			{
			}
			else if (!ENTITY::IS_ENTITY_VISIBLE(pedLocal_33))
			{
				if (!_STOPWATCH_IS_INITIALIZED(&uLocal_50))
					_STOPWATCH_RESET(&uLocal_50, false, false);
				else if (func_34(&uLocal_50, false, false) > 10000)
					bLocal_52 = true;
			}
			break;
	
		case 4:
			if (func_2(16))
				func_44(5);
			else
				func_48();
			break;
	
		case 5:
			func_49(&uLocal_16);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		
			if (!func_41())
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_MISSION_CONTROLLER"));
		
			func_44(6);
			break;
	
		case 6:
			if (func_2(1024))
				func_16();
			break;
	
		case 7:
			break;
	}

	return;
}

void func_14() // Position - 0x700 Hash - 0x2138FFFF ^0x947D7262
{
	if (!bLocal_39)
	{
		if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(hLocal_38))
		{
			if (GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(hLocal_38, 2, false, &uLocal_40))
			{
				if (AUDIO::PREPARE_SOUND("flash_to_photo", "rdro_gamemode_transition_sounds", -2))
				{
					bLocal_39 = true;
					func_5(&uLocal_16, true);
					AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("photograph");
					AUDIO::PLAY_SOUND_FRONTEND("flash_to_photo", "rdro_gamemode_transition_sounds", true, 0);
				}
			}
		}
	}

	return;
}

void func_15(BOOL bParam0) // Position - 0x751 Hash - 0x10F2213F ^0x10F2213F
{
	if (bParam0)
		func_50(16);
	else
		func_51(16);

	return;
}

void func_16() // Position - 0x76D Hash - 0x290BA54B ^0x69E7252A
{
	int i;
	var eventName;

	if (func_22() == 7)
		return;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[i]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049221[i], false))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[i], true, true);
		
			PED::DELETE_PED(&Global_1049221[i]);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[i]))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049254[i], false))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[i], true, true);
		
			PED::DELETE_PED(&Global_1049254[i]);
		}
	}

	if (Global_1049288)
	{
		for (i = 0; i <= 1; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[i]))
				PED::DELETE_PED(&uLocal_186[i]);
		}
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		if (CAM::DOES_CAM_EXIST(uLocal_53[i]))
			CAM::SET_CAM_ACTIVE(uLocal_53[i], false);
	}

	for (i = 0; i <= 31; i = i + 1)
	{
		Global_1049221[i] = _INVALID_PLAYER_INDEX();
	}

	if (CAM::DOES_CAM_EXIST(uLocal_56[0]))
		CAM::SET_CAM_ACTIVE(uLocal_56[0], false);

	SCRIPTS::STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(1);

	if (!func_40())
		Global_1072759.f_28644.f_8.f_14 = 0;

	CAM::DESTROY_ALL_CAMS(false);

	if (MISC::IS_BIT_SET(iLocal_46, 3) && iLocal_42 != -1 && func_53(iLocal_42))
		CAM::_UNLOAD_CINEMATIC_CAMERA_LOCATION(func_54(iLocal_42));

	if (hLocal_37 != 0)
	{
		if (iLocal_13 > 0)
		{
			if (!bLocal_184)
				GRAPHICS::_0x71845905BCCDE781(hLocal_37);
		
			GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(hLocal_37);
		}
	
		if (bLocal_184)
			GRAPHICS::_0x71845905BCCDE781(hLocal_38);
	
		GRAPHICS::_0x38D9D50F2085E9B3(hLocal_37);
		GRAPHICS::_0x38D9D50F2085E9B3(hLocal_38);
		hLocal_37 = 0;
	}

	if (!func_2(4096) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
	
		if (PLAYER::GET_PLAYER_INVINCIBLE(plLocal_32))
			PLAYER::SET_PLAYER_INVINCIBLE(plLocal_32, false);
	}

	AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
	func_55();
	func_42(false);
	func_56();
	TEXT_LABEL_ASSIGN_STRING(&eventName, "MP_ADV_INTRO_OS", 32);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_51717)))
		eventName = { Global_3145858.f_51717 };

	AUDIO::CANCEL_MUSIC_EVENT(&eventName);
	PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MAP"), true);
	func_57(&uLocal_16);
	Global_1049300 = -1;
	Global_262154 = -1;
	MISC::CLEAR_BIT(&(Global_1958634.f_1), 5);
	func_25(false);
	func_44(7);
	return;
}

void func_17(BOOL bParam0) // Position - 0x9B4 Hash - 0xAD1429D0 ^0xAD1429D0
{
	if (bParam0)
		Global_1951910.f_1381 = Global_1951910.f_1381 - Global_1951910.f_1381 & 2;
	else
		Global_1951910.f_1381 = Global_1951910.f_1381 | 2;

	func_58(bParam0);
	return;
}

void func_18() // Position - 0x9F2 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_19() // Position - 0x9FE Hash - 0x6FC4321 ^0xE83F5B71
{
	Global_1149432.f_4787.f_7 = Global_1953292.f_1676.f_1[1 /*3*/];
	return;
}

void func_20() // Position - 0xA1B Hash - 0x7A3E90D0 ^0x4DD5F024
{
	Global_1149432.f_4787.f_9 = Global_1953292.f_1676.f_1[3 /*3*/];
	return;
}

void func_21() // Position - 0xA38 Hash - 0x5F3FEC9A ^0xB183A01A
{
	Global_1149432.f_4787.f_6 = Global_1953292.f_1676.f_1[4 /*3*/];
	return;
}

int func_22() // Position - 0xA55 Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_13;
}

BOOL func_23(BOOL bParam0, BOOL bParam1) // Position - 0xA5F Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

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

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

void func_24(BOOL bParam0) // Position - 0xB3F Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_262153 = Global_262153 || bParam0;
	return;
}

void func_25(BOOL bParam0) // Position - 0xB52 Hash - 0xAC467A14 ^0xAC467A14
{
	if (!bParam0)
		func_59(20);
	else
		func_60(20);

	return;
}

// Unhandled jump detected. Output should be considered invalid
Hash func_26() // Position - 0xB71 Hash - 0x8FFC53BC ^0x9C524416
{
	if (Global_3145858.f_1 > -1 && Global_3145858.f_1 < *Global_3145858.f_52506 && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_3145858.f_52507[Global_3145858.f_1 /*18*/]))
		return MISC::GET_HASH_KEY(&Global_3145858.f_52507[Global_3145858.f_1 /*18*/]);

	if (bLocal_35)
	{
		switch (*Global_524288.f_39632)
		{
			case -1649482077:
				return 55577806;
		
			case -915869673:
				return 1122662550;
		
			case -777132493:
				return -1567074128;
		
			case -698288936:
				return 1825899503;
		
			case -360644098:
				return 506919947;
		
			case -163684180:
				return -2093919847;
		
			case 534981680:
				return -773971986;
		
			case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
				return 1730145250;
		
			case 1520184724:
				return 1914027275;
		
			default:
				goto 0x1D3;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296.f_155)
		{
			case -1918441640:
			case 1153715636:
				return 1315254565;
		
			case -1581094459:
				return 1468907451;
		
			case -1437925683:
			case 1272390114:
				return -1482087471;
		
			case -725256130:
				return 478789200;
		
			case -559809431:
				return -679566803;
		
			case -533426613:
				return 1088509777;
		
			case -457802746:
				return -274237802;
		
			case -222655798:
				return -1863716933;
		
			default:
			
		}
	
		return -240997098;
	}
	else
	{
		switch (Global_2097152.f_32)
		{
			case -1185533313:
				return 1744089234;
		
			case 218185167:
				return -1684650239;
		
			case 1579717899:
				return -938054684;
		
			case 1744858848:
				return 1646695636;
		
			default:
			
		}
	
		return -1288350710;
	}

	return -274237802;
}

// Unhandled jump detected. Output should be considered invalid
Hash func_27() // Position - 0xD4C Hash - 0x8FFC53BC ^0x167E4B3
{
	if (Global_3145858.f_2 > -1 && Global_3145858.f_2 < *Global_3145858.f_52506 && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_3145858.f_52507[Global_3145858.f_2 /*18*/]))
		return MISC::GET_HASH_KEY(&Global_3145858.f_52507[Global_3145858.f_2 /*18*/]);

	if (bLocal_35)
	{
		switch (*Global_524288.f_39632)
		{
			case -1649482077:
				return 263267728;
		
			case -915869673:
				return 347053089;
		
			case -777132493:
				return -1263403805;
		
			case -698288936:
				return 1761410111;
		
			case -360644098:
				return 267476864;
		
			case -163684180:
				return 1618086939;
		
			case 534981680:
				return -31655829;
		
			case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
				return 932383945;
		
			case 1520184724:
				return -2122032152;
		
			default:
				goto 0x1D3;
		}
	}
	else if (bLocal_36)
	{
		switch (Global_2359296.f_155)
		{
			case -1918441640:
			case 1153715636:
				return -1544168383;
		
			case -1581094459:
				return 1168382952;
		
			case -1437925683:
			case 1272390114:
				return -53621227;
		
			case -725256130:
				return 1597260708;
		
			case -559809431:
				return -913897922;
		
			case -533426613:
				return 307231279;
		
			case -457802746:
				return -1964987130;
		
			case -222655798:
				return 1586694926;
		
			default:
			
		}
	
		return -480997254;
	}
	else
	{
		switch (Global_2097152.f_32)
		{
			case -1185533313:
				return 2031571671;
		
			case 218185167:
				return 419480024;
		
			case 1579717899:
				return -1177563305;
		
			case 1744858848:
				return 868825114;
		
			default:
			
		}
	
		return 103021030;
	}

	return -1964987130;
}

Hash func_28() // Position - 0xF27 Hash - 0x8FFC53BC ^0xEAAA88B
{
	if (Global_3145858.f_3 > -1 && Global_3145858.f_3 < *Global_3145858.f_52506 && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_3145858.f_52507[Global_3145858.f_3 /*18*/]))
		return MISC::GET_HASH_KEY(&Global_3145858.f_52507[Global_3145858.f_3 /*18*/]);

	return 2;
}

const char* func_29() // Position - 0xF84 Hash - 0xA734488A ^0x20F780BE
{
	if (bLocal_35)
	{
		return func_61(*Global_524288.f_39632, &(Global_3145858.f_11), &(Global_3145858.f_108));
	}
	else if (bLocal_36)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_108)))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_3145858.f_108), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_3145858.f_108)));
	
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_2359296.f_155));
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_108)))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_3145858.f_108), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_3145858.f_108)));
	
		return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Global_2097152.f_32));
	}

	return "GAME MODE NAME HERE";
}

const char* func_30() // Position - 0x1028 Hash - 0xD60AE905 ^0x210E1BA0
{
	int num;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_100)))
		return func_64(&(Global_3145858.f_100));

	num = *Global_3145858.f_51780;

	if (num == -1)
		num = func_65(Global_3145858.f_196, true);

	if (num == -1)
		return "";

	return func_66(num);
}

const char* func_31() // Position - 0x107E Hash - 0x4F81B51A ^0x1306C83
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_84)))
		return func_64(&(Global_3145858.f_84));

	return " ";
}

BOOL func_32(var uParam0) // Position - 0x10A7 Hash - 0x79FDD5D6 ^0x96F9CE7E
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
		return false;

	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);

	if (!UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*uParam0))
		UISTATEMACHINE::UI_STATE_MACHINE_CREATE(*uParam0, *uParam0);

	return true;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0x10E4 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

int func_34(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10F0 Hash - 0xEE02B32C ^0x2D3DEC18
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		if (!bParam2)
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		else
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());

	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x1137 Hash - 0x6A4AB354 ^0xB7FEF326
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

void func_36() // Position - 0x1174 Hash - 0x74BF217A ^0x7B51306F
{
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("pause_menu")) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("pause_menu")))
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(joaat("pause_menu"));

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("Abilities")) || UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Abilities")))
		UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(joaat("Abilities"));

	if (func_67())
		func_68();

	if (func_69())
		func_70();

	func_71();
	return;
}

void func_37(BOOL bParam0) // Position - 0x11DE Hash - 0x8B79F219 ^0x8B79F219
{
	if (bParam0)
		if (!Global_1896762.f_352)
			Global_1896762.f_352 = bParam0;
	else if (Global_1896762.f_352)
		Global_1896762.f_352 = bParam0;

	return;
}

int func_38(var uParam0) // Position - 0x1215 Hash - 0xBA81BFB8 ^0x2706EF1E
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
		return 0;

	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
		return 1;

	if (!UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(*uParam0))
	{
		func_32(uParam0);
		return 0;
	}

	UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

void func_39() // Position - 0x1268 Hash - 0x4D6091A4 ^0x955A91AA
{
	Global_1072759.f_28644.f_1 = 1;
	Global_1072759.f_28644.f_66.f_30 = 1;
	Global_1072759.f_28644.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

BOOL func_40() // Position - 0x1293 Hash - 0xBAB11E48 ^0xBAB11E48
{
	if (func_72(8) || func_72(16))
		return true;

	return false;
}

BOOL func_41() // Position - 0x12B5 Hash - 0xA3BE243F ^0x1844D467
{
	return Global_1072759.f_28644.f_8.f_14 != 0;
}

void func_42(BOOL bParam0) // Position - 0x12CA Hash - 0x19F9ED95 ^0x19F9ED95
{
	if (!bParam0)
		func_59(18);
	else
		func_60(18);

	return;
}

void func_43(var uParam0, const char* sParam1, const char* sParam2, const char* sParam3) // Position - 0x12E9 Hash - 0x99167816 ^0x7EC19080
{
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "largeHeader", sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "subHeader", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "body", sParam3);
	return;
}

void func_44(int iParam0) // Position - 0x131D Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_13 = iParam0;
	return;
}

void func_45() // Position - 0x1329 Hash - 0xDFA76397 ^0x16C2791F
{
	int i;
	int num;
	int offset;

	if (Global_1049300 != -1)
	{
		num = Global_1049300 / 32;
		offset = Global_1049300 % 32;
	
		for (i = 0; i <= *Global_3145858.f_48736; i = i + 1)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48737[i /*25*/].f_1[num], offset))
			{
				iLocal_42 = i;
				break;
			}
		}
	
		if (iLocal_42 < 0 || iLocal_42 >= 32)
			iLocal_42 = 0;
	}
	else
	{
		iLocal_42 = 0;
	}

	iLocal_41 = PLAYER::GET_PLAYER_TEAM(plLocal_32);

	if (Global_1049288)
	{
		MISC::SET_BIT(&iLocal_46, 11);
	}
	else if (Global_1049287)
	{
		MISC::SET_BIT(&iLocal_46, 7);
		MISC::SET_BIT(&iLocal_46, 10);
	}

	if (Global_1049289 == 0)
		MISC::SET_BIT(&iLocal_46, 8);
	else if (Global_1049289 == 1)
		MISC::SET_BIT(&iLocal_46, 9);

	Global_1049289 = -1;

	if (iLocal_41 != -1)
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48319[i /*13*/].f_7, iLocal_41))
			{
				iLocal_43 = i;
				break;
			}
		}
	
		if (iLocal_43 < 0)
			iLocal_43 = 0;
	}
	else if (iLocal_43 < 0)
	{
		iLocal_43 = 0;
		num = Global_1049300 / 32;
		offset = Global_1049300 % 32;
	
		for (i = 0; i <= 31; i = i + 1)
		{
			if (MISC::IS_BIT_SET(Global_3145858.f_48319[i /*13*/].f_8[num], offset))
			{
				iLocal_43 = i;
				break;
			}
		}
	}

	return;
}

BOOL func_46() // Position - 0x1491 Hash - 0x71B947D2 ^0xF2460D20
{
	Vector3 vector;
	Vector3 vector2;
	int randomIntInRange;
	int randomIntInRange2;
	int value;
	int i;
	int num;
	int randomIntInRange3;

	if (!func_2(8192))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049221[0]))
		{
			return false;
		}
		else if (ansLocal_60 == -1)
		{
			if (MISC::IS_BIT_SET(iLocal_46, 8))
			{
				sLocal_61 = "script@mp@introflow@predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 9))
			{
				sLocal_61 = "script@mp@introflow@teamonfoot_predator";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 11))
			{
				sLocal_61 = "script@mp@introflow@Protect_TeamOnFoot";
				sLocal_62 = "pbl_base";
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[0]))
				{
					sLocal_61 = "script@mp@introflow@soloonhorse";
					MISC::SET_BIT(&iLocal_46, 12);
				}
				else
				{
					sLocal_61 = "script@mp@introflow@soloonfoot";
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[0]))
			{
				sLocal_61 = "script@mp@introflow@teamonhorse";
			}
		}
	}

	if (ansLocal_60 == -1)
	{
		ansLocal_60 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_61, 130, sLocal_62, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_60);
		vector = { Global_3145858.f_48319[iLocal_43 /*13*/] };
		vector2 = { Global_3145858.f_48319[iLocal_43 /*13*/].f_3 };
		STREAMING::SET_FOCUS_POS_AND_VEL(vector, vector2);
	}

	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_60, true, false))
	{
		if (MISC::IS_BIT_SET(iLocal_46, 7))
		{
			if (!bLocal_36 && !bLocal_35 && !func_2(268435456))
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, "BGVariation_Int", randomIntInRange, false);
			}
		
			if (!MISC::IS_BIT_SET(iLocal_46, 12))
			{
				randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, "CameraIndex", randomIntInRange2, false);
			}
		}
		else
		{
			randomIntInRange3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		
			for (i = 0; i <= 31; i = i + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[i]))
					num = num + 1;
			}
		
			if (MISC::IS_BIT_SET(iLocal_46, 11))
			{
				if (num == 1)
				{
					MISC::SET_BIT(&iLocal_46, 10);
					value = 1 + randomIntInRange3;
				}
				else if (num == 2)
				{
					value = 11 + randomIntInRange3;
				}
				else
				{
					value = 21 + randomIntInRange3;
				}
			}
			else if (num <= 4)
			{
				MISC::SET_BIT(&iLocal_46, 10);
				value = 1 + randomIntInRange3;
			}
			else if (num <= 8)
			{
				value = 11 + randomIntInRange3;
			}
			else
			{
				value = 21 + randomIntInRange3;
			}
		
			if (!MISC::IS_BIT_SET(iLocal_46, 12))
				ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, "CameraIndex", value, false);
		}
	
		return true;
	}

	return false;
}

void func_47(BOOL bParam0) // Position - 0x16BA Hash - 0x8FEDA239 ^0x122EAD7F
{
	int i;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1049221[i]))
		{
		}
		else if (!PED::IS_PED_READY_TO_RENDER(Global_1049221[i]))
		{
		}
		else
		{
			PED::_SET_PED_LIGHTS(Global_1049221[i], bParam0);
		}
	}

	return;
}

void func_48() // Position - 0x1709 Hash - 0x13DE3469 ^0x88F100F5
{
	var shotName;
	var name;
	var shotName2;
	var cameraName;
	int duration;
	int easeLocation;
	int i;
	var eventName;
	BOOL flag;
	int j;
	var entityName;

	func_73();

	if (iLocal_14 < 5)
		CAM::_DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE_2();

	switch (iLocal_14)
	{
		case 0:
			if (iLocal_42 == -1 || bLocal_44)
			{
				func_74();
				return;
			}
		
			if (func_53(iLocal_42) && MISC::IS_STRING_NULL_OR_EMPTY(func_54(iLocal_42)) || MISC::IS_STRING_NULL_OR_EMPTY(func_75(iLocal_42)))
				if (_IS_NULL_VECTOR(Global_3145858.f_48737[iLocal_42 /*25*/].f_9) || !func_77(Global_3145858.f_48737[iLocal_42 /*25*/].f_9))
					func_74();
				else
					func_78(1);
			else
				func_78(1);
			break;
	
		case 1:
			if (func_79())
				bLocal_34 = true;
		
			if (CAM::DOES_CAM_EXIST(uLocal_53[0]))
			{
				CAM::SET_CAM_ACTIVE(uLocal_53[0], true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_78(2);
			}
			else if (func_80())
			{
				if (func_81())
				{
					if (func_82())
					{
						if (func_83())
						{
							if (!MISC::IS_BIT_SET(iLocal_46, 3))
							{
								CAM::SET_CAM_ACTIVE(uLocal_53[0], true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							}
						
							func_78(2);
						}
					}
				}
			}
			break;
	
		case 2:
			if (func_84())
			{
				func_85(16777216);
			
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					if (iLocal_42 != -1)
					{
						duration = Global_3145858.f_48737[iLocal_42 /*25*/].f_24;
						easeLocation = Global_3145858.f_48737[iLocal_42 /*25*/].f_23;
					}
					else
					{
						duration = 3750;
						easeLocation = 1;
					}
				
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_53[1], uLocal_53[0], duration, easeLocation, 1);
					_STOPWATCH_RESET(&uLocal_63, false, false);
				}
				else
				{
					func_86(false);
				
					if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
					{
						CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(&Global_3145858.f_58952[Global_3145858.f_48737[iLocal_42 /*25*/].f_6 /*18*/], &(Global_3145858.f_58952[Global_3145858.f_48737[iLocal_42 /*25*/].f_6 /*18*/].f_8), 5);
					}
					else if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
					{
						TEXT_LABEL_ASSIGN_STRING(&name, func_54(iLocal_42), 64);
						TEXT_LABEL_ASSIGN_STRING(&shotName2, func_75(iLocal_42), 64);
						TEXT_LABEL_ASSIGN_STRING(&cameraName, func_87(iLocal_42), 64);
						CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(&name, Global_3145858.f_48737[iLocal_42 /*25*/].f_9, Global_3145858.f_48737[iLocal_42 /*25*/].f_12);
						CAM::CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(&name, &shotName2, &cameraName, func_88(iLocal_42));
					}
				
					_STOPWATCH_RESET(&uLocal_63, false, false);
				}
			
				if (bLocal_34)
				{
					for (i = 0; i <= 31; i = i + 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[i]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049221[i], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049221[i], true);
						
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049221[i], false))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[i], true, true);
						
							PED::DELETE_PED(&Global_1049221[i]);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[i]))
						{
							ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1049254[i], false, false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_1049254[i], true);
						
							if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049254[i], false))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[i], true, true);
						
							PED::DELETE_PED(&Global_1049254[i]);
						}
					}
				
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_78(3);
				}
				else
				{
					bLocal_184 = true;
					GRAPHICS::_0x71845905BCCDE781(hLocal_37);
					GRAPHICS::_0xE75CDDEBF618C8FF(hLocal_38);
					func_78(4);
				}
			}
			else if (!bLocal_83)
			{
				func_89();
				bLocal_83 = true;
			}
			else if (GRAPHICS::_ANIMPOSTFX_IS_STACKHASH_PLAYING(hLocal_37) && AUDIO::PREPARE_SOUND("flash_to_landscape", "rdro_gamemode_transition_sounds", -2))
			{
				if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
				{
					if (!bLocal_82 && MISC::GET_GAME_TIMER() - iLocal_81 > 1000)
					{
						TEXT_LABEL_ASSIGN_STRING(&name, func_54(iLocal_42), 64);
						TEXT_LABEL_ASSIGN_STRING(&shotName2, func_75(iLocal_42), 64);
						TEXT_LABEL_ASSIGN_STRING(&cameraName, func_87(iLocal_42), 64);
						CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(&name, &shotName2, &cameraName);
						bLocal_82 = true;
					}
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_46, 4))
			{
				if (!SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
				{
					if (MISC::IS_BIT_SET(iLocal_46, 3))
					{
						if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
						{
							TEXT_LABEL_ASSIGN_STRING(&shotName, func_75(iLocal_42), 64);
							TEXT_LABEL_APPEND_STRING(&shotName, "_Static", 64);
							CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(func_54(iLocal_42), &shotName, 5);
						}
						else if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&name, func_54(iLocal_42), 64);
							TEXT_LABEL_ASSIGN_STRING(&shotName2, func_75(iLocal_42), 64);
							TEXT_LABEL_ASSIGN_STRING(&cameraName, func_87(iLocal_42), 64);
							CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(&name, Global_3145858.f_48737[iLocal_42 /*25*/].f_9, 0f, 0f, 0f);
							CAM::CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(&name, &shotName2, &cameraName, func_88(iLocal_42));
							iLocal_81 = MISC::GET_GAME_TIMER();
						}
					}
				
					if (Global_3145858.f_48737[iLocal_42 /*25*/] != 1 || CAM::_0x1D931B7CC0EE3956(&name, &shotName2, &cameraName) || MISC::GET_GAME_TIMER() - iLocal_81 > 2000)
					{
						if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
						{
							if (MISC::GET_GAME_TIMER() - iLocal_81 > 2000)
								iLocal_81 = MISC::GET_GAME_TIMER();
						
							CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(&name, Global_3145858.f_48737[iLocal_42 /*25*/].f_9, Global_3145858.f_48737[iLocal_42 /*25*/].f_12);
						}
					
						if (!bLocal_34 && !bLocal_44 && bLocal_36 || bLocal_35)
						{
							TEXT_LABEL_ASSIGN_STRING(&eventName, "MP_ADV_INTRO_OS", 32);
						
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_3145858.f_51717)))
								eventName = { Global_3145858.f_51717 };
						
							AUDIO::TRIGGER_MUSIC_EVENT(&eventName);
						}
					
						GRAPHICS::_ANIMPOSTFX_PLAY_TAG(hLocal_37);
						AUDIO::PLAY_SOUND_FRONTEND("flash_to_landscape", "rdro_gamemode_transition_sounds", true, 0);
						MISC::SET_BIT(&iLocal_46, 4);
					}
				}
			}
			break;
	
		case 3:
			func_24(65536);
		
			if (CAM::DOES_CAM_EXIST(uLocal_53[0]) && CAM::IS_CAM_INTERPOLATING(uLocal_53[0]) || CAM::DOES_CAM_EXIST(uLocal_53[1]) && CAM::IS_CAM_INTERPOLATING(uLocal_53[1]))
			{
				if ((float)func_34(&uLocal_63, false, false) > (float)Global_3145858.f_48737[iLocal_42 /*25*/].f_24 * 0.9f)
					func_90();
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3) && func_34(&uLocal_63, false, false) < func_88(iLocal_42))
			{
				if ((float)func_34(&uLocal_63, false, false) > (float)func_88(iLocal_42) * 0.9f)
					func_90();
			}
			else
			{
				if (!func_2(4096))
				{
					if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
					
						if (PLAYER::GET_PLAYER_INVINCIBLE(plLocal_32))
							PLAYER::SET_PLAYER_INVINCIBLE(plLocal_32, false);
					}
					else
					{
						flag = true;
					}
				}
				else
				{
					flag = true;
				}
			
				if (flag)
				{
					if (!MISC::IS_BIT_SET(iLocal_46, 3))
					{
						CAM::SET_CAM_ACTIVE(uLocal_53[0], false);
						CAM::SET_CAM_ACTIVE(uLocal_53[1], false);
						CAM::SET_CAM_ACTIVE(uLocal_56[0], true);
					}
					else
					{
						if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
						{
							TEXT_LABEL_ASSIGN_STRING(&shotName, func_75(iLocal_42), 64);
							TEXT_LABEL_APPEND_STRING(&shotName, "_Static", 64);
							CAM::_0xA54D643D0773EB65(func_54(iLocal_42), &shotName, 5);
						}
						else if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
						{
							TEXT_LABEL_ASSIGN_STRING(&name, func_54(iLocal_42), 64);
							TEXT_LABEL_ASSIGN_STRING(&shotName2, func_75(iLocal_42), 64);
							TEXT_LABEL_ASSIGN_STRING(&cameraName, func_87(iLocal_42), 64);
							CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(&name, &shotName2, &cameraName);
						}
					
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					}
				
					TASK::CLEAR_PED_TASKS(pedLocal_33, true, false);
					GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
					func_78(5);
				}
			}
			break;
	
		case 4:
			func_91();
			break;
	
		case 5:
			if (_STOPWATCH_IS_INITIALIZED(&uLocal_65))
			{
				if (func_2(128) && func_34(&uLocal_65, false, false) > 1500)
				{
					GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT("RespawnMissionCheckpoint");
					func_86(false);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					STREAMING::END_SRL();
					func_78(7);
				}
			}
			else
			{
				_STOPWATCH_RESET(&uLocal_65, false, false);
			
				for (j = 0; j <= 1; j = j + 1)
				{
					TEXT_LABEL_ASSIGN_STRING(&entityName, "TOWNFOLK_0", 16);
					TEXT_LABEL_APPEND_INT(&entityName, j + 1, 16);
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[j]))
					{
						ENTITY::SET_ENTITY_VISIBLE(uLocal_186[j], false);
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_60, &entityName, uLocal_186[j]);
					}
				}
			}
			break;
	
		case 6:
			if (bLocal_84 || func_84())
			{
				bLocal_84 = true;
			
				if (func_2(128))
				{
					func_86(false);
					func_78(7);
				}
			}
			break;
	
		case 7:
			if (!func_2(16))
				func_92();
			break;
	}

	return;
}

void func_49(var uParam0) // Position - 0x1F0C Hash - 0x2BAB3723 ^0x8BFAAD02
{
	var unk;

	if (!MISC::IS_BIT_SET(uParam0->f_15, 1))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*uParam0) && UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(*uParam0))
		{
			UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_EXIT(*uParam0, 0);
			MISC::SET_BIT(&(uParam0->f_15), 1);
		}
	}
	else if (!UISTATEMACHINE::_UI_STATE_MACHINE_IS_EXITED(*uParam0))
	{
		unk = *uParam0;
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(&unk);
		MISC::CLEAR_BIT(&(uParam0->f_15), 0);
		MISC::CLEAR_BIT(&(uParam0->f_15), 1);
	}

	return;
}

void func_50(BOOL bParam0) // Position - 0x1F73 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_262151 = Global_262151 || bParam0;
	return;
}

void func_51(BOOL bParam0) // Position - 0x1F86 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_262151 = Global_262151 - Global_262151 && bParam0;
	return;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1F9E Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_53(int iParam0) // Position - 0x1FA7 Hash - 0xB9B32611 ^0xCFFF8AD9
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 0)
		return Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1;
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
		return true;

	return false;
}

const char* func_54(int iParam0) // Position - 0x1FED Hash - 0x74BE77D ^0xE76C57D7
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 0 && Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1)
		return func_93(Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/]);
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
		return func_94(Global_3145858.f_48737[iParam0 /*25*/].f_7);

	return "";
}

void func_55() // Position - 0x206E Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_262153 = false;
	return;
}

void func_56() // Position - 0x207B Hash - 0x3C5CD007 ^0xF296A080
{
	Global_1072759.f_28644.f_1 = 0;
	Global_1072759.f_28644.f_2 = 0;
	return;
}

void func_57(Any anParam0) // Position - 0x2097 Hash - 0x7F580314 ^0xE4BE85BC
{
	var unk;

	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(*anParam0))
	{
		unk = *anParam0;
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY_AND_CLEAR(&unk);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(anParam0);
	}

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(anParam0->f_3))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(anParam0->f_3);

	return;
}

void func_58(BOOL bParam0) // Position - 0x20CD Hash - 0x70EE66C ^0xCDE04474
{
	Global_1940085.f_19 = !bParam0;
	return;
}

int func_59(int iParam0) // Position - 0x20DE Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_95(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

int func_60(int iParam0) // Position - 0x20FB Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_96(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

const char* func_61(int iParam0, const char* sParam1, const char* sParam2) // Position - 0x2118 Hash - 0x54CF0C8E ^0x3D17ACA
{
	const char* string1;

	string1 = "";

	switch (iParam0)
	{
		case -1759663922:
			if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "Mission MP - "))
				return HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam1, 13, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			else
				return HUD::_GET_TEXT_SUBSTRING_2(sParam1, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1));
			break;
	
		default:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
				return HUD::_GET_TEXT_SUBSTRING_2(sParam2, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2));
		
			string1 = MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(iParam0));
		
			if (MISC::_DOES_STRING_EXIST_IN_STRING(string1, "Invalid MISSION_SUB_TYPE"))
				string1 = "LANDING_FREEROAM_TITLE";
		
			return string1;
	}

	return "Invalid MISSION_SUB_TYPE";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x21A8 Hash - 0xA17D549C ^0xD18DE90E
{
	switch (iParam0)
	{
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
	
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
	
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
	
		case -725256130:
			return "GST_DEATHMATCH_TGR";
	
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
	
		case -559809431:
			return "GST_DEATHMATCH_HT";
	
		case -548018579:
			return "GST_DEATHMATCH_EC";
	
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
	
		case -457802746:
			return "GST_DEATHMATCH_FTB";
	
		case -222655798:
			return "GST_DEATHMATCH_GR";
	
		case 10577687:
			return "GST_DEATHMATCH_MC";
	
		case 424482930:
			return "GST_DEATHMATCH_MM";
	
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
	
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
	
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
	
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
	
		case 1816768801:
			return "GST_DEATHMATCH";
	
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
	
		default:
		
	}

	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x22A6 Hash - 0xA17D549C ^0x7B4E56B4
{
	switch (iParam0)
	{
		case -1957416901:
			return "GST_RACE_RUNAWT";
	
		case -1185533313:
			return "GST_RACE_OPTARA";
	
		case -784189810:
			return "GST_RACE_STANDA";
	
		case -79999383:
			return "GST_RACE_GOLDRU";
	
		case -63669280:
			return "GST_RACE_DUALCO";
	
		case 218185167:
			return "GST_RACE_TARRAC";
	
		case 851921060:
			return "GST_RACE_ELIM";
	
		case 1457860192:
			return "GST_RACE_TIMECP";
	
		case 1579717899:
			return "GST_RACE_COMBAT";
	
		case 1744858848:
			return "GST_RACE_OPERAC";
	
		case 2028478397:
			return "GST_RACE_SURVIV";
	
		default:
		
	}

	return "Invalid RACE_SUB_TYPE";
}

const char* func_64(const char* sParam0) // Position - 0x2349 Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

int func_65(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x2353 Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_98();

	if (func_99(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_100(vParam0, bParam3);
}

const char* func_66(int iParam0) // Position - 0x23A1 Hash - 0x110040B8 ^0xA4628167
{
	var unk;

	if (!func_99(iParam0))
		return "";

	TEXT_LABEL_ASSIGN_STRING(&unk, func_101(iParam0), 128);
	return MISC::VAR_STRING(2, &unk);
}

BOOL func_67() // Position - 0x23CA Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1896762.f_352;
}

void func_68() // Position - 0x23D9 Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_37(false);
	return;
}

BOOL func_69() // Position - 0x23E6 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1940252.f_2;
}

void func_70() // Position - 0x23F4 Hash - 0xF4E9A977 ^0xD563EF2A
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("satchel")) > 0)
		Global_1940252.f_13 = 1;

	return;
}

void func_71() // Position - 0x2413 Hash - 0x21DE7030 ^0x35E305E6
{
	if (Global_1940085.f_111)
		Global_1940085.f_111 = 0;

	HUD::_DISABLE_HUD_CONTEXT(36547242);
	return;
}

BOOL func_72(int iParam0) // Position - 0x2434 Hash - 0x512F3490 ^0xBBCFDA30
{
	return func_102(Global_1072759.f_28644.f_8.f_1, iParam0);
}

void func_73() // Position - 0x244D Hash - 0x2C669C86 ^0x2C669C86
{
	iLocal_14 > 0 && iLocal_15 < 3;
	return;
}

void func_74() // Position - 0x2465 Hash - 0x57D18B3D ^0xC794B75
{
	var pedBoneCoords;
	var entityRotation;
	BOOL isPedOnMount;
	BOOL isPedInAnyVehicle;

	if (!CAM::DOES_CAM_EXIST(uLocal_53[0]))
	{
		if (!_IS_NULL_VECTOR(Global_3145858.f_116) && func_77(Global_3145858.f_116))
		{
			func_103(Global_3145858.f_116, Global_3145858.f_119, Global_3145858.f_122);
		}
		else
		{
			pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedLocal_33, 21030, 0f, 0.65f, 0f) };
			entityRotation = { ENTITY::GET_ENTITY_ROTATION(pedLocal_33, 0) };
			func_103(pedBoneCoords, entityRotation, 1110704128);
		}
	}

	if (func_104())
	{
		isPedOnMount = PED::IS_PED_ON_MOUNT(pedLocal_33);
		isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(pedLocal_33, false);
		func_105(&pedLocal_33, isPedOnMount, isPedInAnyVehicle, false);
		func_86(false);
		uLocal_53[0] = uLocal_53[1];
		CAM::SET_CAM_ACTIVE(uLocal_53[0], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		func_78(1);
	}

	return;
}

const char* func_75(int iParam0) // Position - 0x2535 Hash - 0x7374CEF1 ^0xFFFBCCA
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 0 && Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1)
		return func_106(Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/].f_8);
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
		return func_107(Global_3145858.f_48737[iParam0 /*25*/].f_7);

	return "";
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x25B7 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_77(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x25E1 Hash - 0x45895689 ^0xD3C28E7B
{
	Vector3 vector;
	float num;

	vector = { func_108(plLocal_32) };
	num = BUILTIN::VDIST2(vParam0, vector);

	if (num <= 10000f)
		return true;

	return false;
}

void func_78(int iParam0) // Position - 0x2611 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_14 = iParam0;
	return;
}

BOOL func_79() // Position - 0x261D Hash - 0x95E99AB8 ^0x95E99AB8
{
	if (iLocal_43 == -1)
		return true;

	if (_IS_NULL_VECTOR(func_109()))
		return true;

	if (!func_77(func_109()))
		return true;

	return false;
}

BOOL func_80() // Position - 0x264F Hash - 0x1FBEE406 ^0x1FBEE406
{
	if (_IS_NULL_VECTOR(uLocal_85[0 /*3*/]))
		func_110();
	else
		return true;

	return false;
}

BOOL func_81() // Position - 0x2671 Hash - 0xCAA93DF2 ^0x7C4393A8
{
	var entityName;

	if (iLocal_182 < func_111())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iLocal_182]))
		{
			if (iLocal_182 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_60, func_109(), func_112(), 0);
			
				if (MISC::IS_BIT_SET(iLocal_46, 7))
					if (PED::IS_PED_ON_MOUNT(Global_1049221[0]))
						func_113(Global_1049221[0]);
					else
						func_114(Global_1049221[0]);
			}
		
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[iLocal_182], true, true);
		
			if (PED::IS_PED_MALE(Global_1049221[iLocal_182]))
				TEXT_LABEL_ASSIGN_STRING(&entityName, "Ped_M_", 16);
			else
				TEXT_LABEL_ASSIGN_STRING(&entityName, "Ped_F_", 16);
		
			TEXT_LABEL_APPEND_INT(&entityName, iLocal_182, 16);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_60, &entityName, Global_1049221[iLocal_182], 0);
		
			if (PED::IS_PED_ON_MOUNT(Global_1049221[iLocal_182]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[iLocal_182], true, true);
				TEXT_LABEL_ASSIGN_STRING(&entityName, "Horse_", 16);
				TEXT_LABEL_APPEND_INT(&entityName, iLocal_182, 16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_60, &entityName, Global_1049254[iLocal_182], 0);
			}
		
			if (!MISC::IS_BIT_SET(iLocal_46, 8) && !MISC::IS_BIT_SET(iLocal_46, 7))
				if (PED::IS_PED_ON_MOUNT(Global_1049221[iLocal_182]))
					func_115(Global_1049221[iLocal_182], iLocal_182);
				else
					func_116(Global_1049221[iLocal_182], iLocal_182);
		
			iLocal_182 = iLocal_182 + 1;
			return false;
		}
	}
	else if (iLocal_182 < 32)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[iLocal_182]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[iLocal_182], true, true);
			PED::DELETE_PED(&Global_1049221[iLocal_182]);
			iLocal_182 = iLocal_182 + 1;
			return false;
		}
	}

	return true;
}

BOOL func_82() // Position - 0x27EC Hash - 0x3F153A47 ^0xF9B82B8F
{
	int i;
	var entityName;

	if (!Global_1049288 || iLocal_192 >= 2)
		return true;

	if (iLocal_192 == 0)
	{
		uLocal_189[0] = joaat("mp_campdef_chollasprings_males_01");
		uLocal_189[1] = joaat("mp_campdef_eastnewhanover_males_01");
	}

	for (i = 0; i <= 1; i = i + 1)
	{
		if (Global_524288.f_39639[i] > -1)
			uLocal_189[i] = Global_3932160.f_1[Global_524288.f_39639[i] /*374*/].f_56;
	
		STREAMING::REQUEST_MODEL(uLocal_189[i], false);
	
		if (STREAMING::HAS_MODEL_LOADED(uLocal_189[i]))
		{
			TEXT_LABEL_ASSIGN_STRING(&entityName, "TOWNFOLK_0", 16);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[i]))
			{
				uLocal_186[i] = PED::CREATE_PED(uLocal_189[i], func_109(), 0, false, true, false, false);
				PED::_SET_RANDOM_OUTFIT_VARIATION(uLocal_186[i], true);
				PED::_UPDATE_PED_VARIATION(uLocal_186[i], false, true, true, true, false);
				ENTITY::SET_ENTITY_INVINCIBLE(uLocal_186[i], true);
				ENTITY::SET_ENTITY_VISIBLE(uLocal_186[i], true);
				ENTITY::SET_ENTITY_COLLISION(uLocal_186[i], false, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_186[i], true);
				TEXT_LABEL_APPEND_INT(&entityName, i + 1, 16);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_60, &entityName, uLocal_186[i], 0);
				iLocal_192 = iLocal_192 + 1;
				return false;
			}
		}
	}

	return false;
}

BOOL func_83() // Position - 0x2915 Hash - 0x88249148 ^0xAB00D3A2
{
	var srl;
	var gameplayCamRot;
	var unk18;
	BOOL isPedOnMount;
	BOOL isPedInAnyVehicle;

	if (!func_104())
		return false;

	if (!bLocal_80 && func_53(iLocal_42) && !MISC::IS_STRING_NULL_OR_EMPTY(func_54(iLocal_42)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_75(iLocal_42)))
	{
		if (!CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED(func_54(iLocal_42)))
		{
			if (!CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED_2(func_54(iLocal_42)))
			{
				CAM::_LOAD_CINEMATIC_CAM_LOCATION(func_54(iLocal_42));
			
				if (Global_3145858.f_48737[iLocal_42 /*25*/] == 0)
				{
					TEXT_LABEL_ASSIGN_STRING(&srl, "mp@establishers@", 128);
					TEXT_LABEL_APPEND_STRING(&srl, func_75(iLocal_42), 128);
					TEXT_LABEL_APPEND_STRING(&srl, "_SRL", 128);
					STREAMING::PREFETCH_SRL(&srl);
				}
			}
		
			if (!_STOPWATCH_IS_INITIALIZED(&uLocal_73))
				_STOPWATCH_RESET(&uLocal_73, false, false);
			else if (func_34(&uLocal_73, false, false) > 5000)
				bLocal_80 = true;
		
			return false;
		}
		else
		{
			MISC::SET_BIT(&iLocal_46, 3);
		}
	}
	else if (!CAM::DOES_CAM_EXIST(uLocal_53[0]))
	{
		if (_IS_NULL_VECTOR(Global_3145858.f_48737[iLocal_42 /*25*/].f_9) || _IS_NULL_VECTOR(Global_3145858.f_48737[iLocal_42 /*25*/].f_15))
		{
			gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
			unk18 = { Global_3145858.f_196 };
			unk18.f_2 = unk18.f_2 + 5f;
			func_103(unk18, gameplayCamRot, 1110704128);
		}
		else
		{
			uLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Global_3145858.f_48737[iLocal_42 /*25*/].f_9, Global_3145858.f_48737[iLocal_42 /*25*/].f_12, Global_3145858.f_48737[iLocal_42 /*25*/].f_21, false, 2);
			uLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Global_3145858.f_48737[iLocal_42 /*25*/].f_15, Global_3145858.f_48737[iLocal_42 /*25*/].f_18, Global_3145858.f_48737[iLocal_42 /*25*/].f_22, false, 2);
		}
	}

	if (MISC::IS_BIT_SET(iLocal_46, 3))
	{
		if (!STREAMING::IS_SRL_LOADED())
		{
			return false;
		}
		else
		{
			STREAMING::_0xD9F2FF4AF394D926();
			STREAMING::BEGIN_SRL();
		}
	}

	if (!CAM::DOES_CAM_EXIST(uLocal_56[0]))
	{
		isPedOnMount = PED::IS_PED_ON_MOUNT(pedLocal_33);
		isPedInAnyVehicle = PED::IS_PED_IN_ANY_VEHICLE(pedLocal_33, false);
		func_105(&pedLocal_33, isPedOnMount, isPedInAnyVehicle, false);
	}

	return true;
}

BOOL func_84() // Position - 0x2B2B Hash - 0xF350181 ^0xE87CDBF8
{
	var unk;

	if (GRAPHICS::ANIMPOSTFX_HAS_EVENT_TRIGGERED_BY_STACKHASH(hLocal_37, 2, false, &unk))
	{
		func_5(&uLocal_16, false);
		AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("landscape_shot");
		return true;
	}

	return false;
}

void func_85(int iParam0) // Position - 0x2B54 Hash - 0x1CA56BA3 ^0x7FDD6BA0
{
	if (func_102(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
		func_117(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);

	return;
}

void func_86(BOOL bParam0) // Position - 0x2B8D Hash - 0x5C323EA3 ^0x42880FAC
{
	if (bParam0)
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
	else
		GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);

	return;
}

char* func_87(int iParam0) // Position - 0x2BA7 Hash - 0x323C2098 ^0x606DB454
{
	if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
		return func_118(Global_3145858.f_48737[iParam0 /*25*/].f_7, Global_3145858.f_48737[iParam0 /*25*/].f_8);

	return "";
}

int func_88(int iParam0) // Position - 0x2BE8 Hash - 0xAA110AE2 ^0x2ED5274A
{
	var dictionary;
	var shotName;

	if (Global_3145858.f_48737[iParam0 /*25*/] == 0 && Global_3145858.f_48737[iParam0 /*25*/].f_6 > -1)
	{
		return CAM::_0x465F04F68AD38197(&Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/], &(Global_3145858.f_58952[Global_3145858.f_48737[iParam0 /*25*/].f_6 /*18*/].f_8), 5);
	}
	else if (Global_3145858.f_48737[iParam0 /*25*/] == 1)
	{
		if (Global_3145858.f_48737[iParam0 /*25*/].f_24 > 0)
		{
			return Global_3145858.f_48737[iParam0 /*25*/].f_24;
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&dictionary, func_94(Global_3145858.f_48737[iParam0 /*25*/].f_7), 64);
			TEXT_LABEL_ASSIGN_STRING(&shotName, func_107(Global_3145858.f_48737[iParam0 /*25*/].f_7), 64);
			return CAM::_0x465F04F68AD38197(&dictionary, &shotName, 5);
		}
	}

	return 0;
}

void func_89() // Position - 0x2CCD Hash - 0xF87648F7 ^0x5490F92B
{
	func_86(false);
	SCRIPTS::STOP_DISPLAYING_MP_TRANSITION_LOADING_SCREENS(0);
	return;
}

void func_90() // Position - 0x2CDF Hash - 0xE279639A ^0xE2197FB7
{
	if (!bLocal_183)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(pedLocal_33, "SpawnMissionIntro", true, 20);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_33, true, true);
		bLocal_183 = true;
	}

	return;
}

void func_91() // Position - 0x2D05 Hash - 0x6D1B223B ^0x4C56FE1D
{
	int i;
	Hash hash;
	int num;
	int num2;
	int j;

	switch (iLocal_15)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(uLocal_53[0]) || CAM::DOES_CAM_EXIST(uLocal_53[1]))
			{
				if (CAM::IS_CAM_INTERPOLATING(uLocal_53[1]) || CAM::IS_CAM_INTERPOLATING(uLocal_53[0]))
				{
				}
				else
				{
					func_119();
					func_120(1);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_46, 3))
			{
				if (_STOPWATCH_IS_INITIALIZED(&uLocal_63))
				{
					if (func_34(&uLocal_63, false, false) > func_88(iLocal_42))
					{
						_STOPWATCH_RESET(&uLocal_67, false, false);
						func_119();
						func_120(1);
					}
				}
				else
				{
					_STOPWATCH_RESET(&uLocal_63, false, false);
				}
			}
			else
			{
				_STOPWATCH_RESET(&uLocal_67, false, false);
				func_119();
				func_120(1);
			}
			break;
	
		case 1:
			if (!bLocal_185)
			{
				for (i = 0; i <= 31; i = i + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[i]))
					{
						ENTITY::SET_ENTITY_VISIBLE(Global_1049221[i], true);
					
						if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[i]))
							ENTITY::SET_ENTITY_VISIBLE(Global_1049254[i], true);
					}
				}
			
				bLocal_185 = true;
			}
		
			if (CAM::DOES_CAM_EXIST(uLocal_53[0]) && CAM::IS_CAM_ACTIVE(uLocal_53[0]) || CAM::DOES_CAM_EXIST(uLocal_53[1]) && CAM::IS_CAM_ACTIVE(uLocal_53[1]))
			{
				if (!MISC::IS_BIT_SET(iLocal_46, 3))
				{
					CAM::SET_CAM_ACTIVE(uLocal_53[0], false);
					CAM::SET_CAM_ACTIVE(uLocal_53[1], false);
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_60, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_60) < 0.825f)
			{
			}
			else
			{
				GRAPHICS::_ANIMPOSTFX_PLAY_TAG(hLocal_38);
				hash = func_121(plLocal_32, true, -1, true);
			
				if (MISC::IS_BIT_SET(iLocal_46, 10))
					uLocal_16.f_2 = 1441775019;
				else
					uLocal_16.f_2 = -1678669845;
			
				MISC::CLEAR_BIT(&(uLocal_16.f_15), 0);
			
				if (iLocal_41 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_3145728[iLocal_41 /*8*/]))
					func_122(&uLocal_16, PLAYER::GET_PLAYER_NAME(plLocal_32), &Global_3145728[iLocal_41 /*8*/], " ", " ", " ", " ", hash);
				else
					func_122(&uLocal_16, PLAYER::GET_PLAYER_NAME(plLocal_32), " ", " ", " ", " ", " ", hash);
			
				func_38(&uLocal_16);
				_STOPWATCH_RESET(&uLocal_67, false, false);
				_STOPWATCH_RESET(&uLocal_69, false, false);
				func_120(2);
			}
			break;
	
		case 2:
			func_24(65536);
		
			if (!func_2(16384))
			{
				num = func_34(&uLocal_69, false, false);
			
				if (num < 15000)
				{
					if (num > 6500)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(650);
							func_123(0);
						}
					}
				
					_STOPWATCH_RESET(&uLocal_67, false, false);
					return;
				}
			}
		
			num2 = func_34(&uLocal_67, false, false);
		
			if (num2 > 6500)
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					CAM::DO_SCREEN_FADE_OUT(650);
		
			if (num2 > 7500)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(ansLocal_60, false);
			
				for (j = 0; j <= 31; j = j + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049221[j]))
					{
						if (ansLocal_60 != -1)
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_60, "", Global_1049221[j]);
					
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049221[j], false))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049221[j], true, true);
					
						PED::DELETE_PED(&Global_1049221[j]);
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(Global_1049254[j]))
					{
						if (ansLocal_60 != -1)
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_60, "", Global_1049254[j]);
					
						if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1049254[j], false))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1049254[j], true, true);
					
						PED::DELETE_PED(&Global_1049254[j]);
					}
				}
			
				ANIMSCENE::RESET_ANIM_SCENE(ansLocal_60, 0);
			
				if (!func_2(4096))
					NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
			
				if (PLAYER::GET_PLAYER_INVINCIBLE(plLocal_32))
					PLAYER::SET_PLAYER_INVINCIBLE(plLocal_32, false);
			
				func_124();
				func_5(&uLocal_16, false);
			
				if (bLocal_36 || bLocal_35)
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			
				func_120(3);
			}
			else if (num2 > 5000)
			{
				func_90();
			}
			break;
	
		case 3:
			GRAPHICS::_ANIMPOSTFX_STOP_STACKHASH_POSTFX(hLocal_38);
		
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
				CAM::DO_SCREEN_FADE_IN(350);
		
			func_86(false);
			GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
			func_24(131072);
		
			if (AUDIO::PREPARE_SOUND("exit_photo_to_match", "rdro_gamemode_transition_sounds", -2))
			{
				AUDIO::PLAY_SOUND_FRONTEND("exit_photo_to_match", "rdro_gamemode_transition_sounds", true, 0);
				AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("gameplay");
			}
		
			func_120(4);
			break;
	
		case 4:
			func_78(5);
			break;
	}

	return;
}

void func_92() // Position - 0x3164 Hash - 0x5153B90E ^0xAF0394D5
{
	if (!uLocal_75[3])
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_71))
		{
			uLocal_75[3] = 1;
			_STOPWATCH_RESET(&uLocal_71, false, false);
		}
		else if (func_34(&uLocal_71, false, false) > 2900)
		{
			uLocal_75[3] = 1;
		}
		else if (!uLocal_75[2] == true && func_34(&uLocal_71, false, false) > 1800)
		{
			uLocal_75[2] = 1;
		}
		else if (!uLocal_75[1] == true && func_34(&uLocal_71, false, false) > 900)
		{
			uLocal_75[1] = 1;
		}
	}
	else
	{
		func_24(16);
	}

	return;
}

const char* func_93(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x31F7 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_94(int iParam0) // Position - 0x320B Hash - 0x23E4166B ^0x81846F28
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);

	if (iParam0 == 0)
		TEXT_LABEL_ASSIGN_STRING(&unk, "mp@freemode_cams@cloudupdate_intro_cams", 64);

	if (iParam0 == 1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "mp@freemode_cams@cloudupdate_outro_cams", 64);

	if (iParam0 == 2)
		TEXT_LABEL_ASSIGN_STRING(&unk, "mp@freemode_cams@cloudupdate_establisher_cams", 64);

	return func_93(unk);
}

BOOL func_95(Any* panParam0, int iParam1, int iParam2) // Position - 0x324D Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::CLEAR_BIT(&panParam0->[num], offset);
	return isBitSet;
}

BOOL func_96(Any* panParam0, int iParam1, int iParam2) // Position - 0x327F Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(panParam0->[num], offset);
	MISC::SET_BIT(&panParam0->[num], offset);
	return !isBitSet;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x32B2 Hash - 0xA17D549C ^0xDD0B2AFF
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
	
		case -1649482077:
			return "UGC_MST_UIS";
	
		case -915869673:
			return "UGC_MST_TTYG";
	
		case -777132493:
			return "UGC_MST_PDR";
	
		case -698288936:
			return "UGC_MST_PROT";
	
		case -360644098:
			return "UGC_MST_TTYT";
	
		case -318976023:
			return "UGC_MST_LGNDB";
	
		case -163684180:
			return "UGC_MST_SOW";
	
		case -133550749:
			return "UGC_MST_OUTLAW";
	
		case 31269700:
			return "UGC_MST_LETTR";
	
		case 482206342:
			return "UGC_MST_LEG";
	
		case 534981680:
			return "UGC_MST_ESCF";
	
		case 603385332:
			return "UGC_MST_DEL";
	
		case 604251967:
			return "UGC_MST_FOU";
	
		case 772881414:
			return "UGC_MST_MNSHN";
	
		case joaat("UGC_SUBTYPE_MISSION_PREDATOR_HUNT"):
			return "UGC_MST_PDH";
	
		case 1078150940:
			return "UGC_MST_AWIP";
	
		case 1520184724:
			return "UGC_MST_AFGPO";
	
		default:
		
	}

	return "Invalid MISSION_SUB_TYPE";
}

int func_98() // Position - 0x33B0 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

BOOL func_99(int iParam0) // Position - 0x33BE Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

int func_100(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x33D4 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_125(vParam0);
	num2 = -1;

	if (Global_1893594[num] > 0)
	{
		num3 = Global_1893594[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1892777[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[num4 /*36*/].f_21)
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

char* func_101(int iParam0) // Position - 0x348B Hash - 0x8FBE7D29 ^0x5EF2FE2
{
	if (!func_99(iParam0))
		return "";

	switch (iParam0)
	{
		case 0:
			return "REG_IF_BAY_CDW";
	
		case 1:
			return "REG_IF_SCM_MCE";
	
		case 2:
			return "REG_IF_SCM_MKW";
	
		case 3:
			return "REG_IF_BAY_LAG";
	
		case 4:
			return "REG_IF_BAY_LAK";
	
		case 5:
			return "REG_IF_BAY_STD";
	
		case 6:
			return "REG_IF_BAY_ORP";
	
		case 7:
			return "REG_IF_BAY_SKS";
	
		case 8:
			return "REG_IF_BAY_SDP";
	
		case 9:
			return "REG_IF_BAY_SDB";
	
		case 10:
			return "REG_IF_BAY_SWS";
	
		case 11:
			return "REG_IF_BGV_AST";
	
		case 12:
			return "REG_IF_BGV_BRD";
	
		case 13:
			return "REG_IF_BGV_BBF";
	
		case 14:
			return "REG_IF_BGV_DAK";
	
		case 15:
			return "REG_IF_BGV_FRT";
	
		case 16:
			return "REG_IF_BGV_HND";
	
		case 17:
			return "REG_IF_BGV_LMS";
	
		case 18:
			return "REG_IF_BGV_MHS";
	
		case 19:
			return "REG_IF_BGV_MNR";
	
		case 20:
			return "REG_IF_BGV_OWD";
	
		case 21:
			return "REG_IF_BGV_PNS";
	
		case 22:
			return "REG_IF_BGV_PRN";
	
		case 23:
			return "REG_IF_BGV_RIS";
	
		case 24:
			return "REG_IF_BGV_SHK";
	
		case 25:
			return "REG_IF_BGV_SHR";
	
		case 26:
			return "REG_IF_BGV_STB";
	
		case 27:
			return "REG_IF_BGV_VV";
	
		case 28:
			return "REG_IF_GRZ_WS";
	
		case 29:
			return "REG_IF_BGV_BOJ";
	
		case 30:
			return "REG_IF_BGV_WSC";
	
		case 31:
			return "REG_IF_BLU_CBM";
	
		case 32:
			return "REG_IF_BLU_CPH";
	
		case 33:
			return "REG_IF_BLU_SIS";
	
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return "REG_IF_INV";
	
		case 35:
			return "REG_IF_CML_BHB";
	
		case 36:
			return "REG_IF_CML_DL";
	
		case 37:
			return "REG_IF_CML_OFW";
	
		case 38:
			return "REG_IF_CML_SPC";
	
		case 39:
			return "REG_IF_GRT_BEC";
	
		case 40:
			return "REG_IF_GRT_BW";
	
		case 41:
			return "REG_IF_GRT_QC";
	
		case 42:
			return "REG_IF_GRZ_ADR";
	
		case 43:
			return "REG_IF_HRT_DRS";
	
		case 44:
			return "REG_IF_GRZ_CHZ";
	
		case 45:
			return "REG_IF_GRZ_CLT";
	
		case 46:
			return "REG_IF_GRZ_FRZ";
	
		case 47:
			return "REG_IF_GRZ_MSC";
	
		case 48:
			return "REG_IF_GRZ_MM";
	
		case 50:
			return "REG_IF_BGV_SCS";
	
		case 51:
			return "REG_IF_GRZ_LC";
	
		case 52:
			return "REG_IF_BGV_WMT";
	
		case 53:
			return "REG_IF_GRZ_CMR";
	
		case 54:
			return "REG_IF_CML_CM";
	
		case 55:
			return "REG_IF_GRZ_COH";
	
		case 58:
			return "REG_IF_GRZ_TL";
	
		case 59:
			return "REG_IF_CML_VET";
	
		case 60:
			return "REG_IF_GRZ_WAP";
	
		case 62:
			return "REG_IF_GUA_AGU";
	
		case 63:
			return "REG_IF_GUA_CMP";
	
		case 64:
			return "REG_IF_GUA_CNT";
	
		case 65:
			return "REG_IF_GUA_LAC";
	
		case 66:
			return "REG_IF_GUA_MAN";
	
		case 67:
			return "REG_IF_HRT_ABM";
	
		case 68:
			return "REG_IF_ROA_SBC";
	
		case 69:
			return "REG_IF_HRT_CMD";
	
		case 70:
			return "REG_IF_HRT_CKS";
	
		case 71:
			return "REG_IF_HRT_CRF";
	
		case 72:
			return "REG_IF_HRT_CBF";
	
		case 73:
			return "REG_IF_HRT_DNR";
	
		case 74:
			return "REG_IF_HRT_EMR";
	
		case 75:
			return "REG_IF_HRT_PIG";
	
		case 76:
			return "REG_IF_HRT_HSO";
	
		case 77:
			return "REG_IF_HRT_LRN";
	
		case 78:
			return "REG_IF_GRZ_LC";
	
		case 79:
			return "REG_IF_HRT_LCK";
	
		case 80:
			return "REG_IF_HRT_SSS";
	
		case 81:
			return "REG_IF_HRT_VAL";
	
		case 82:
			return "REG_IF_HRT_APF";
	
		case 83:
			return "REG_IF_ROA_ANN";
	
		case 84:
			return "REG_IF_ROA_BEV";
	
		case 85:
			return "REG_IF_ROA_BBR";
	
		case 86:
			return "REG_IF_ROA_BWD";
	
		case 87:
			return "REG_IF_ROA_BTC";
	
		case 88:
			return "REG_IF_CML_DVH";
	
		case 89:
			return "REG_IF_ROA_HFS";
	
		case 90:
			return "REG_IF_ROA_ISS";
	
		case 91:
			return "REG_IF_ROA_MCH";
	
		case 92:
			return "REG_IF_ROA_MSF";
	
		case 93:
			return "REG_IF_ROA_ROV";
	
		case 94:
			return "REG_IF_CML_RS";
	
		case 95:
			return "REG_IF_ROA_TRP";
	
		case 96:
			return "REG_IF_ROA_ROJ";
	
		case 97:
			return "REG_IF_ROA_VHM";
	
		case 98:
			return "REG_IF_ROA_VHP";
	
		case 99:
			return "REG_IF_SCM_BWM";
	
		case 100:
			return "REG_IF_SCM_BLG";
	
		case 101:
			return "REG_IF_SCM_CGH";
	
		case 102:
			return "REG_IF_SCM_CFJ";
	
		case 103:
			return "REG_IF_SCM_CMC";
	
		case 104:
			return "REG_IF_SCM_CMP";
	
		case 105:
			return "REG_IF_SCM_CSS";
	
		case 106:
			return "REG_IF_SCM_DRF";
	
		case 107:
			return "REG_IF_INV";
	
		case 108:
			return "REG_IF_SCM_LS";
	
		case 109:
			return "REG_IF_SCM_LTS";
	
		case 110:
			return "REG_IF_SCM_RP";
	
		case 111:
			return "REG_IF_SCM_RHO";
	
		case 112:
			return "REG_IF_SCM_SPS";
	
		case 113:
			return "REG_IF_TAL_AUR";
	
		case 114:
			return "REG_IF_CML_DS";
	
		case 115:
			return "REG_IF_TAL_COC";
	
		case 116:
			return "REG_IF_TAL_MAN";
	
		case 117:
			return "REG_IF_TAL_PUR";
	
		case 118:
			return "REG_IF_TAL_TNR";
	
		case 119:
			return "REG_IF_TAL_TRP";
	
		case 120:
			return "REG_IF_GAP_GBR";
	
		case 121:
			return "REG_IF_GAP_TUM";
	
		case 122:
			return "REG_IF_GAP_RFK";
	
		default:
		
	}

	return "REG_IF_INV";
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x3B26 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_103(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, int iParam6) // Position - 0x3B35 Hash - 0xD0FF7C5C ^0x72BD1472
{
	uLocal_53[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vParam3, iParam6, false, 2);
	uLocal_53[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vParam0, vParam3, iParam6, false, 2);
	return;
}

BOOL func_104() // Position - 0x3B71 Hash - 0x4BFE14EC ^0xB8879149
{
	int flags;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	Vector3 gameplayCamCoord;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;
	int shapeTestResult;

	if (!bLocal_58)
	{
		if (shLocal_59 == 0)
		{
			flags = 339;
			offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(pedLocal_33, true, false), 0f, 1.3f, 1f, 0.1f) };
			gameplayCamCoord = { CAM::GET_GAMEPLAY_CAM_COORD() };
			shLocal_59 = SHAPETEST::START_SHAPE_TEST_CAPSULE(offsetFromCoordAndHeadingInWorldCoords, gameplayCamCoord, 0.25f, flags, pedLocal_33, 4);
		}
		else
		{
			shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(shLocal_59, &hit, &endCoords, &surfaceNormal, &entityHit);
		
			if (shapeTestResult == 2)
			{
				hit == 0;
				bLocal_58 = true;
			}
			else if (shapeTestResult == 0)
			{
				bLocal_58 = true;
			}
		}
	
		return false;
	}

	return true;
}

void func_105(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3BF9 Hash - 0x6E14371F ^0x1F10F169
{
	Vector3 gameplayCamCoord;
	Vector3 gameplayCamRot;

	gameplayCamCoord = { CAM::GET_GAMEPLAY_CAM_COORD() };
	gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	uLocal_56[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), gameplayCamCoord, gameplayCamRot, 1115815936, false, 2);
	bParam1;

	if (bParam2 || !bParam3)
		return;

	return;
}

const char* func_106(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x3C45 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

const char* func_107(int iParam0) // Position - 0x3C59 Hash - 0x23E4166B ^0x566DE46
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);

	if (iParam0 == 0)
		TEXT_LABEL_ASSIGN_STRING(&unk, "IntroShot", 64);

	if (iParam0 == 1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "OutroShot", 64);

	if (iParam0 == 2)
		TEXT_LABEL_ASSIGN_STRING(&unk, "EstablisherShot", 64);

	return func_93(unk);
}

Vector3 func_108(Player plParam0) // Position - 0x3C9B Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

Vector3 func_109() // Position - 0x3CAF Hash - 0xE6139870 ^0xEAA3CC05
{
	return Global_3145858.f_48319[iLocal_43 /*13*/];
}

void func_110() // Position - 0x3CC6 Hash - 0xFC7471C9 ^0xE4FCD925
{
	int i;
	BOOL flag;

	for (i = 0; i <= 31; i = i + 1)
	{
		flag = ENTITY::DOES_ENTITY_EXIST(Global_1049254[0]);
		uLocal_85[i /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Global_3145858.f_48319[iLocal_43 /*13*/], Global_3145858.f_48319[iLocal_43 /*13*/].f_3.f_2, func_126(i, flag)) };
	}

	return;
}

int func_111() // Position - 0x3D22 Hash - 0xAE4D8175 ^0x8132EF45
{
	if (!MISC::IS_BIT_SET(iLocal_46, 7))
		if (bLocal_36 || bLocal_35)
			return 16;
		else
			return 4;
	else if (bLocal_36 || bLocal_35)
		return 1;
	else
		return 4;

	return 0;
}

Vector3 func_112() // Position - 0x3D6A Hash - 0x2BA362B7 ^0x20FFD286
{
	return Global_3145858.f_48319[iLocal_43 /*13*/].f_3;
}

void func_113(Ped pedParam0) // Position - 0x3D83 Hash - 0xCAFB6704 ^0xC14B1030
{
	Hash weaponHash;
	Hash weaponHash2;
	int num;
	int value;
	BOOL flag;
	int randomIntInRange;

	value = 0;
	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash2, true, 1, true);

	if (weaponHash != joaat("WEAPON_UNARMED"))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(pedParam0, weaponHash, true, -142743235);
		weaponHash = joaat("WEAPON_UNARMED");
	}

	if (weaponHash2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(pedParam0, weaponHash2, true, -142743235);
		weaponHash2 = joaat("WEAPON_UNARMED");
	}

	flag = func_127(weaponHash) && func_127(weaponHash2);
	num = func_128(weaponHash);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash) || weaponHash == joaat("WEAPON_UNARMED"))
	{
		value = 0;
	}
	else if (flag)
	{
		value = 2;
	}
	else if (num == joaat("group_repeater") || num == joaat("GROUP_RIFLE") || num == joaat("GROUP_SNIPER") || num == joaat("GROUP_SHOTGUN") && weaponHash != joaat("weapon_shotgun_sawedoff"))
	{
		value = 3;
	}
	else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(pedParam0, weaponHash, true, -142743235);
		value = 6;
	}
	else if (weaponHash == joaat("weapon_thrown_molotov"))
	{
		value = 7;
	}
	else if (weaponHash == joaat("weapon_thrown_bolas"))
	{
		value = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(weaponHash) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
	{
		value = 5;
	}
	else if (func_129(weaponHash))
	{
		value = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash) || num == joaat("GROUP_SHOTGUN") && weaponHash == joaat("weapon_shotgun_sawedoff"))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_60, "BGPed_Enable", true, false);
	ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, "Weapon_Int", value, false);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
	ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, "BGVariation_Int", randomIntInRange, false);
	return;
}

void func_114(Ped pedParam0) // Position - 0x3F33 Hash - 0xC4F48FB5 ^0xA7460B43
{
	Hash weaponHash;
	Hash weaponHash2;
	int num;
	int value;
	BOOL flag;
	int randomIntInRange;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash2, true, 1, true);
	flag = func_127(weaponHash) && func_127(weaponHash2);
	num = func_128(weaponHash);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash) || weaponHash == joaat("WEAPON_UNARMED"))
	{
		value = 0;
	}
	else if (flag)
	{
		value = 2;
	}
	else if (num == joaat("group_repeater") || num == joaat("GROUP_RIFLE") || num == joaat("GROUP_SNIPER") || num == joaat("GROUP_SHOTGUN") && weaponHash != joaat("weapon_shotgun_sawedoff"))
	{
		value = 3;
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	
		if (randomIntInRange % 2 == 0)
			if (weaponHash == joaat("weapon_rifle_boltaction"))
				value = 12;
			else if (weaponHash == joaat("weapon_repeater_winchester"))
				value = 11;
			else if (num == joaat("GROUP_SHOTGUN"))
				if (weaponHash == joaat("WEAPON_SHOTGUN_PUMP"))
					value = 9;
				else if (weaponHash == joaat("weapon_shotgun_doublebarrel") || weaponHash == joaat("weapon_shotgun_doublebarrel_exotic") || weaponHash == joaat("weapon_shotgun_doublebarrel_uncle"))
					value = 10;
	}
	else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(pedParam0, weaponHash, true, -142743235);
		value = 6;
	}
	else if (weaponHash == joaat("weapon_thrown_molotov"))
	{
		value = 7;
	}
	else if (weaponHash == joaat("weapon_thrown_bolas"))
	{
		value = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(weaponHash) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
	{
		value = 5;
	}
	else if (func_129(weaponHash))
	{
		value = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash) || num == joaat("GROUP_SHOTGUN") && weaponHash == joaat("weapon_shotgun_sawedoff"))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	if (PED::IS_PED_MALE(pedParam0))
		ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_60, "isMale", true, false);
	else
		ANIMSCENE::SET_ANIM_SCENE_BOOL(ansLocal_60, "isFemale", true, false);

	if (!MISC::IS_BIT_SET(iLocal_46, 11))
		ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, "weapon_Index", value, false);

	return;
}

void func_115(Ped pedParam0, int iParam1) // Position - 0x412D Hash - 0xF04A3D36 ^0x1EB50F93
{
	Hash weaponHash;
	Hash weaponHash2;
	int num;
	var name;
	int value;
	BOOL flag;

	TEXT_LABEL_ASSIGN_STRING(&name, "weapon_Index_", 16);
	TEXT_LABEL_APPEND_INT(&name, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash2, true, 1, true);
	flag = func_127(weaponHash) && func_127(weaponHash2);
	num = func_128(weaponHash);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash) || weaponHash == joaat("WEAPON_UNARMED"))
	{
		value = 0;
	}
	else if (flag)
	{
		value = 2;
	}
	else if (num == joaat("group_repeater") || num == joaat("GROUP_RIFLE") || num == joaat("GROUP_SNIPER") || num == joaat("GROUP_SHOTGUN") && weaponHash != joaat("weapon_shotgun_sawedoff"))
	{
		value = 3;
	}
	else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(pedParam0, weaponHash, true, -142743235);
		value = 6;
	}
	else if (weaponHash == joaat("weapon_thrown_molotov"))
	{
		value = 7;
	}
	else if (weaponHash == joaat("weapon_thrown_bolas"))
	{
		value = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(weaponHash) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
	{
		value = 5;
	}
	else if (func_129(weaponHash))
	{
		value = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash) || num == joaat("GROUP_SHOTGUN") && weaponHash == joaat("weapon_shotgun_sawedoff"))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, &name, value, false);
	return;
}

void func_116(Ped pedParam0, int iParam1) // Position - 0x4287 Hash - 0xF04A3D36 ^0x1EB50F93
{
	Hash weaponHash;
	Hash weaponHash2;
	int num;
	var name;
	int value;
	BOOL flag;
	int randomIntInRange;
	var name2;
	int randomIntInRange2;

	TEXT_LABEL_ASSIGN_STRING(&name, "weapon_Index_", 16);
	TEXT_LABEL_APPEND_INT(&name, iParam1, 16);
	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash2, true, 1, true);
	flag = func_127(weaponHash) && func_127(weaponHash2);
	num = func_128(weaponHash);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash) || weaponHash == joaat("WEAPON_UNARMED"))
	{
		value = 0;
	}
	else if (flag)
	{
		value = 2;
	}
	else if (num == joaat("group_repeater") || num == joaat("GROUP_RIFLE") || num == joaat("GROUP_SNIPER") || num == joaat("GROUP_SHOTGUN") && weaponHash != joaat("weapon_shotgun_sawedoff"))
	{
		value = 3;
	
		if (iParam1 <= 4)
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		
			if (randomIntInRange % 2 == 0)
				if (weaponHash == joaat("weapon_rifle_boltaction"))
					value = 12;
				else if (weaponHash == joaat("weapon_repeater_winchester"))
					value = 11;
				else if (num == joaat("GROUP_SHOTGUN"))
					if (weaponHash == joaat("WEAPON_SHOTGUN_PUMP"))
						value = 9;
					else if (weaponHash == joaat("weapon_shotgun_doublebarrel") || weaponHash == joaat("weapon_shotgun_doublebarrel_exotic") || weaponHash == joaat("weapon_shotgun_doublebarrel_uncle"))
						value = 10;
		
			TEXT_LABEL_ASSIGN_STRING(&name2, "Var_Ped_", 16);
			TEXT_LABEL_APPEND_INT(&name2, iParam1, 16);
			randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, &name2, randomIntInRange2, false);
		}
	}
	else if (WEAPON::_IS_WEAPON_LASSO(weaponHash))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(pedParam0, weaponHash, true, -142743235);
		value = 6;
	}
	else if (weaponHash == joaat("weapon_thrown_molotov"))
	{
		value = 7;
	}
	else if (weaponHash == joaat("weapon_thrown_bolas"))
	{
		value = 8;
	}
	else if (WEAPON::_IS_WEAPON_THROWABLE(weaponHash) || WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
	{
		value = 5;
	}
	else if (func_129(weaponHash))
	{
		value = 4;
	}
	else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash) || num == joaat("GROUP_SHOTGUN") && weaponHash == joaat("weapon_shotgun_sawedoff"))
	{
		value = 1;
	}
	else
	{
		value = 0;
	}

	ANIMSCENE::SET_ANIM_SCENE_INT(ansLocal_60, &name, value, false);
	return;
}

void func_117(int iParam0, int iParam1) // Position - 0x4481 Hash - 0xF55E891F ^0xF55E891F
{
	func_130(iParam0, iParam1);
	return;
}

char* func_118(int iParam0, int iParam1) // Position - 0x4491 Hash - 0xE9B3A818 ^0xE5DA2FAA
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "35mm_NEAR_R_Cam";
			
				case 1:
					return "35mm_NEAR_L_Cam";
			
				case 2:
					return "35mm_FAR_R_Cam";
			
				case 3:
					return "35mm_FAR_L_Cam";
			
				case 4:
					return "50mm_NEAR_R_Cam";
			
				case 5:
					return "50mm_NEAR_L_Cam";
			
				case 6:
					return "50mm_FAR_R_Cam";
			
				case 7:
					return "50mm_FAR_L_Cam";
			
				case 8:
					return "50mm_REVERSE_R_Cam";
			
				case 9:
					return "50mm_REVERSE_L_Cam";
			
				case 10:
					return "35mm_REVERSE_R_Cam";
			
				case 11:
					return "35mm_REVERSE_L_Cam";
			
				case 12:
					return "50mm_SIDE_R_Cam";
			
				case 13:
					return "35mm_SIDE_R_Cam";
			
				case 14:
					return "35mm_SIDE_L_Cam";
			
				case 15:
					return "50mm_SIDE_L_Cam";
			
				case 16:
					return "35mm_WIDE_R_CAM";
			
				case 17:
					return "25mm_WIDE_R_CAM";
			
				case 18:
					return "35mm_WIDE_L_CAM";
			
				case 19:
					return "25mm_WIDE_L_CAM";
			
				case 20:
					return "35mm_WIDE_M_CAM";
			
				case 21:
					return "25mm_WIDE_M_CAM";
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return "Cam_Near35mm";
			
				case 1:
					return "Cam_Near50mm";
			
				case 2:
					return "Cam_Med35mm";
			
				case 3:
					return "Cam_Med50mm";
			
				case 4:
					return "Cam_Far35mm";
			
				case 5:
					return "Cam_Far50mm";
			
				case 6:
					return "Cam_Near25mm";
			
				case 7:
					return "Cam_Med25mm";
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return "50mm_PanDown_R_Cam";
			
				case 1:
					return "50mm_PanDown_L_Cam";
			
				case 2:
					return "35mm_PanDown_R_Cam";
			
				case 3:
					return "35mm_PanDown_L_Cam";
			
				case 4:
					return "50mm_TrackForward_R_Cam";
			
				case 5:
					return "50mm_TrackForward_L_Cam";
			
				case 6:
					return "35mm_TrackForward_R_Cam";
			
				case 7:
					return "35mm_TrackForward_L_Cam";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_119() // Position - 0x46C5 Hash - 0x479A2906 ^0x9642EBF8
{
	var unk;
	var unk9;
	var unk17;

	if (ansLocal_60 != -1)
	{
		if (Global_3145858.f_48737[iLocal_42 /*25*/] == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, func_54(iLocal_42), 64);
			TEXT_LABEL_ASSIGN_STRING(&unk9, func_75(iLocal_42), 64);
			TEXT_LABEL_ASSIGN_STRING(&unk17, func_87(iLocal_42), 64);
			CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(&unk, &unk9, &unk17);
		}
	
		ANIMSCENE::START_ANIM_SCENE(ansLocal_60);
		AUDIO::SET_AUDIO_ONLINE_TRANSITION_STAGE("player_team_intro");
	}

	return;
}

void func_120(int iParam0) // Position - 0x471A Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_15 = iParam0;
	return;
}

Hash func_121(Player plParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x4726 Hash - 0x18FC9A46 ^0xCB950CB3
{
	BOOL flag;
	BOOL isBitSet;
	Player player;
	int num;
	int num2;
	int offset;
	int num3;
	int num4;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		if (iParam2 == -1)
			return joaat("COLOR_GREYDARK");
		else
			return joaat("color_posse_neutral");

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return joaat("color_posse_neutral");

	player = plParam0;

	if (func_132(func_131(0)) && func_133(func_131(0)) == 7)
	{
		flag = true;
		num = 11;
		num2 = num / 32;
		offset = num - (num2 * 32);
		isBitSet = MISC::IS_BIT_SET(Global_3145858.f_6[num2], offset);
	}

	if (Global_1072759.f_21353.f_1[player /*8*/].f_5 != 0)
		return Global_1072759.f_21353.f_1[player /*8*/].f_5;

	if (bParam3 && Global_1072759.f_21353.f_1[player /*8*/].f_6 != 0)
		return Global_1072759.f_21353.f_1[player /*8*/].f_6;

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		if (flag && isBitSet)
		{
			num3 = func_134(plParam0);
		
			if (num3 == joaat("color_net_player2") && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(plParam0))
				return joaat("COLOR_WHITE");
			else
				return num3;
		}
		else
		{
			return func_135(plParam0);
		}
	}

	if (player < 0 || player >= 32)
		return 0;

	if (func_102(Global_1072759.f_21353.f_1[player /*8*/].f_7, 1024))
		return joaat("color_winning_player");

	num4 = func_136(plParam0, true);

	if (!flag)
	{
		if (func_137(plParam0, bParam1))
		{
			return func_135(plParam0);
		}
		else if (func_138(plParam0, bParam1))
		{
			if (func_139(plParam0, bParam1))
			{
				return joaat("color_posse_enemy");
			}
			else
			{
				if (num4 > 5)
					return joaat("color_notoriety_high");
				else if (num4 > 3)
					return joaat("color_notoriety_high");
				else if (num4 > 1)
					return joaat("color_notoriety_medium");
			
				return joaat("color_notoriety_low");
			}
		}
	}
	else if (isBitSet)
	{
		return func_134(plParam0);
	}
	else if (func_137(plParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == plParam0)
			return joaat("COLOR_WHITE");
		else if (func_141(func_140(func_131(0)), 1) == 395262693)
			return func_135(plParam0);
		else
			return func_135(plParam0);
	}
	else if (func_138(plParam0, bParam1))
	{
		return joaat("color_posse_enemy");
	}

	return joaat("color_friendly");
}

void func_122(var uParam0, const char* sParam1, const char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, Hash hParam7) // Position - 0x497A Hash - 0xB65F74E9 ^0x371DEEBF
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3))
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_4))
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	else
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5))
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	else
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_12))
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, hParam7);
	else
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", hParam7);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[0]))
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[0], sParam3);
	else
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[1]))
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[1], sParam4);
	else
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[2]))
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[2], sParam5);
	else
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6[3]))
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_6[3], sParam6);
	else
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);

	return;
}

void func_123(int iParam0) // Position - 0x4AE6 Hash - 0x273A56DC ^0xB3814DDB
{
	int idOfThisThread;

	idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();

	if (SCRIPTS::DOES_THREAD_EXIST(Global_1940085.f_105.f_1) && Global_1940085.f_105.f_1 != idOfThisThread)
		return;

	Global_1940085.f_105.f_1 = idOfThisThread;
	Global_1940085.f_105 = iParam0;
	return;
}

void func_124() // Position - 0x4B28 Hash - 0xAFF1A9A4 ^0xB68CC1B0
{
	Global_1940085.f_105 = -1;
	Global_1940085.f_105.f_1 = 0;
	return;
}

int func_125(var uParam0, var uParam1, var uParam2) // Position - 0x4B40 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_142(uParam0, 0f, 0f, 0, 2);
	return func_142(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

// Unhandled jump detected. Output should be considered invalid
Vector3 func_126(int iParam0, BOOL bParam1) // Position - 0x4B7B Hash - 0x5B21F1B2 ^0x5B21F1B2
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return -0.6f, 20.4f, 0f;
		
			case 1:
				return 0.75f, 20.76f, 0f;
		
			case 2:
				return -3f, 20.6f, 0f;
		
			case 3:
				return 4.1f, 21.1f, 0f;
		
			case 4:
				return -6.1f, 21.2f, 0f;
		
			case 5:
				return 5.6f, 20.5f, 0f;
		
			case 6:
				return -7.1f, 21.2f, 0f;
		
			case 7:
				return 7.7f, 20.5f, 0f;
		
			case 8:
				return 0.3f, 23.9f, 0f;
		
			case 9:
				return -0.75f, 23.76f, 0f;
		
			case 10:
				return 3f, 23.2f, 0f;
		
			case 11:
				return -4.1f, 24.1f, 0f;
		
			case 12:
				return 6.1f, 24.25f, 0f;
		
			case 13:
				return -5.6f, 22.75f, 0f;
		
			case 14:
				return 7.1f, 24.1f, 0f;
		
			case 15:
				return -7.7f, 22.85f, 0f;
		
			default:
				goto 0x299;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 0.3f, 17.4f, 0f;
		
			case 1:
				return -0.55f, 17.76f, 0f;
		
			case 2:
				return 1.2f, 17.6f, 0f;
		
			case 3:
				return -1.3f, 18.1f, 0f;
		
			case 4:
				return 1.8f, 17.2f, 0f;
		
			case 5:
				return -1.8f, 17.5f, 0f;
		
			case 6:
				return 2.1f, 17.2f, 0f;
		
			case 7:
				return -2.5f, 17.5f, 0f;
		
			case 8:
				return 0.3f, 19.4f, 0f;
		
			case 9:
				return -0.75f, 19.76f, 0f;
		
			case 10:
				return 1.92f, 19.6f, 0f;
		
			case 11:
				return -1.7f, 20.1f, 0f;
		
			case 12:
				return 2.8f, 20.2f, 0f;
		
			case 13:
				return -2.7f, 19.5f, 0f;
		
			case 14:
				return 3.8f, 20.2f, 0f;
		
			case 15:
				return -3.9f, 19.5f, 0f;
		
			default:
			
		}
	}

	return 0f, 0f, 0f;
}

BOOL func_127(Hash hParam0) // Position - 0x4E1A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_128(Hash hParam0) // Position - 0x4E35 Hash - 0x7EAE6538 ^0x2F2C4FF7
{
	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
		return joaat("GROUP_PISTOL");
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
		return joaat("group_revolver");
	else if (WEAPON::IS_WEAPON_REPEATER(hParam0))
		return joaat("group_repeater");
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
		return joaat("GROUP_RIFLE");
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
		return joaat("GROUP_SHOTGUN");
	else if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
		return joaat("GROUP_SNIPER");

	return 0;
}

BOOL func_129(Hash hParam0) // Position - 0x4EB3 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

void func_130(int iParam0, int iParam1) // Position - 0x4EC1 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

struct<2> func_131(int iParam0) // Position - 0x4ED6 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_132(var uParam0, var uParam1) // Position - 0x4EEA Hash - 0x37B45816 ^0x37B45816
{
	int num;

	num = func_143(uParam0);
	return num == 3 || num == 4;
}

int func_133(int iParam0, var uParam1) // Position - 0x4F0A Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

int func_134(Player plParam0) // Position - 0x4F14 Hash - 0x828F4873 ^0xE487CCFE
{
	switch (PLAYER::GET_PLAYER_TEAM(plParam0))
	{
		case 0:
			return joaat("color_net_player3");
	
		case 1:
			return joaat("color_net_player4");
	
		case 2:
			return joaat("color_net_player5");
	
		case 3:
			return joaat("color_net_player6");
	
		case 4:
			return joaat("color_net_player7");
	
		case 5:
			return joaat("color_net_player8");
	
		case 6:
			return joaat("color_net_player9");
	
		case 7:
			return joaat("color_net_player10");
	
		case 8:
			return joaat("color_net_player11");
	
		default:
		
	}

	return joaat("color_net_player2");
}

int func_135(Player plParam0) // Position - 0x4FAB Hash - 0x41E03564 ^0xD96A9CFE
{
	if (GANG::NETWORK_GET_GANG_ID(plParam0) != Global_1295666.f_10 && !func_144())
		return joaat("color_posse_neutral");

	return joaat("color_posse_ally");
}

int func_136(Player plParam0, BOOL bParam1) // Position - 0x4FDA Hash - 0xDE20C6F0 ^0x6B00893C
{
	int num;
	int num2;
	int num3;
	Player player;

	num = BUILTIN::FLOOR(func_145(plParam0, bParam1));

	if (bParam1)
	{
		player = plParam0;
	
		if (player < 0 || player >= 32)
			num3 = 0;
		else
			num3 = BUILTIN::FLOOR(Global_1101558[player /*38*/].f_18);
	
		if (num3 > num)
			num2 = num3;
		else
			num2 = num;
	}
	else
	{
		num2 = num;
	}

	if (num2 < Global_1901671.f_740.f_31)
		return 0;

	if (num2 < Global_1901671.f_740.f_32)
		return 1;

	if (num2 < Global_1901671.f_740.f_33)
		return 2;

	if (num2 < Global_1901671.f_740.f_34)
		return 3;

	if (num2 < Global_1901671.f_740.f_35)
		return 4;

	if (num2 < Global_1901671.f_740.f_36)
		return 5;

	return 6;
}

BOOL func_137(Player plParam0, BOOL bParam1) // Position - 0x50A7 Hash - 0xF0471E4C ^0xFE2D6C4D
{
	Player bitIndex;
	int playerTeam;
	int playerTeam2;

	if (plParam0 == 255)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (plParam0 == Global_1295666.f_5)
		return true;

	bitIndex = plParam0;

	if (!Global_1295666.f_17[bitIndex])
		return false;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex))
			return true;
	}

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), bitIndex))
		return true;

	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), bitIndex))
		return false;

	playerTeam = PLAYER::GET_PLAYER_TEAM(Global_1295666.f_5);
	playerTeam2 = PLAYER::GET_PLAYER_TEAM(plParam0);

	if (playerTeam != -1 && playerTeam2 != -1 && playerTeam == playerTeam2)
		return true;
	else if (GANG::_NETWORK_IS_IN_MY_GANG(plParam0))
		return true;

	return false;
}

BOOL func_138(Player plParam0, BOOL bParam1) // Position - 0x51A9 Hash - 0x1C205E9C ^0xC9B30383
{
	Player bitIndex;

	bitIndex = plParam0;

	if (plParam0 == PLAYER::PLAYER_ID())
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return true;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return true;
	}

	if (func_146(plParam0))
		return true;

	return !func_137(plParam0, false);
}

BOOL func_139(Player plParam0, BOOL bParam1) // Position - 0x5233 Hash - 0x7C33C217 ^0x92829C49
{
	Player bitIndex;

	if (plParam0 == PLAYER::PLAYER_ID())
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(plParam0))
		return false;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return false;

	bitIndex = plParam0;

	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), bitIndex) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), bitIndex))
			return false;
	
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), bitIndex))
			return true;
	}

	if (func_147(plParam0))
		return false;

	if (func_146(plParam0))
		return false;

	if (func_148(plParam0))
		return true;

	return func_149(plParam0);
}

int func_140(var uParam0, var uParam1) // Position - 0x52D5 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_150(uParam0, &unk))
		return unk.f_1;

	return -1;
}

int func_141(int iParam0, int iParam1) // Position - 0x5301 Hash - 0x96385B3 ^0x796D9149
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
	
		case 1:
			return 395262693;
	
		case 2:
			return -933924539;
	
		case 3:
			return 371211549;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

int func_142(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x5358 Hash - 0xA452440E ^0xD3F785A1
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

int func_143(var uParam0, var uParam1) // Position - 0x53A0 Hash - 0xA6DDAF91 ^0xF19E68CE
{
	int num;

	if (!func_151(uParam0))
		return -1;

	num = func_152(uParam0);

	if (num < 0)
		return 0;

	return Global_1072759.f_19487.f_1[num /*3*/].f_2;
}

BOOL func_144() // Position - 0x53DB Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_151(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

float func_145(Player plParam0, BOOL bParam1) // Position - 0x5433 Hash - 0x41550721 ^0x79E4DF3F
{
	Player player;

	if (!Global_1149432.f_5568)
		return 0f;

	if (plParam0 == Global_1295666.f_149[Global_1295666])
		return Global_17418.f_2641;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
		return 0f;

	player = plParam0;

	if (player < 0 || player >= 32)
		return 0f;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(plParam0)) > 1 && bParam1 && Global_1101558[player /*38*/].f_18 >= Global_1101558[player /*38*/].f_30)
		return Global_1101558[player /*38*/].f_18;

	return Global_1101558[player /*38*/].f_30;
}

BOOL func_146(Player plParam0) // Position - 0x54D3 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), plParam0))
		return true;

	return false;
}

BOOL func_147(Player plParam0) // Position - 0x54F0 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

BOOL func_148(Player plParam0) // Position - 0x550D Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), plParam0))
		return true;

	return false;
}

BOOL func_149(Player plParam0) // Position - 0x552A Hash - 0x13A140EC ^0x2400D867
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
	{
		func_153(plParam0);
		return false;
	}

	if (func_148(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 2)
			func_154(plParam0, 5, 1, true, false, 0);
	
		return true;
	}

	return NETWORK::_0x862C5040F4888741(Global_1295666.f_5, plParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 2;
}

BOOL func_150(int iParam0, var uParam1, Any* panParam2) // Position - 0x558E Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_151(iParam0))
		return false;

	func_155(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_151(var uParam0, var uParam1) // Position - 0x5699 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_156(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_157(uParam0))
		return false;

	return true;
}

int func_152(var uParam0, var uParam1) // Position - 0x56CD Hash - 0x2B1F0751 ^0xFAA335B4
{
	var unk;
	var unk4;
	int num;
	int num2;
	int num3;

	if (Global_1072759.f_19487 <= 0)
		return -1;

	unk.f_1 = -1;
	unk.f_2 = -1;
	unk4.f_1 = -1;
	unk4.f_2 = -1;

	if (!func_150(uParam0, &unk))
		return -1;

	num = 0;
	num2 = Global_1072759.f_19487 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
		func_150(Global_1072759.f_19487.f_1[num3 /*3*/], &unk4);
	
		if (unk4 > unk)
			num2 = num3 - 1;
		else if (unk4 < unk)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

void func_153(Player plParam0) // Position - 0x5774 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_158(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_154(Player plParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x57E0 Hash - 0xB06B8C70 ^0x8D7B311A
{
	Player player;
	int num;
	Player i;
	Player player1;
	var value;
	BOOL flag;
	var unk;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (func_159(player, iParam1, iParam5))
		num = 1;

	if (Global_1072759.f_21353.f_1[player /*8*/] != 2)
	{
		if (!Global_1295666.f_17[player])
		{
			func_153(plParam0);
			return;
		}
	
		NETWORK::_0x51951DE06C0D1C40(plParam0, 2);
		Global_1072759.f_21353.f_1[player /*8*/] = 2;
		num = 1;
	}

	if (iParam2 && num)
	{
		for (i = 0; i <= 31; i = i + 1)
		{
			player1 = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (i != Global_1295666 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(player1))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(player1))
				{
					if (bParam3)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
						flag = true;
					}
				}
				else if (GANG::NETWORK_IS_IN_SAME_GANG(player1, plParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
						flag = true;
					}
				
					if (i != player)
						func_154(player1, iParam1, 0, true, false, 0);
				}
			}
		}
	
		if (flag)
		{
			unk.f_6 = 255;
			unk.f_4 = 1;
			unk.f_6 = plParam0;
			unk.f_7 = iParam1;
			func_160(&unk, value);
		}
	}

	return;
}

void func_155(Any* panParam0) // Position - 0x591B Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_156(int iParam0) // Position - 0x5931 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_157(int iParam0) // Position - 0x5970 Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

void func_158(Player plParam0) // Position - 0x5A06 Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

BOOL func_159(Player plParam0, int iParam1, int iParam2) // Position - 0x5A41 Hash - 0xF728332E ^0xC8001EF4
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
			Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = iParam2;
		else
			Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = Global_1295666.f_16;
	
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 == iParam1)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = Global_1295666.f_16;
		return true;
	}

	return false;
}

void func_160(Any* panParam0, var uParam1) // Position - 0x5AD2 Hash - 0x22B84C24 ^0x2E1C636D
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 186;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 8, 2, &uParam1);
	func_161(*panParam0);
	return;
}

void func_161(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x5B12 Hash - 0xF0CCFFF3 ^0xF0CCFFF3
{
	return;
}

