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
	char* sLocal_15 = 0;
	char* sLocal_16 = 0;
	char* sLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	AnimScene ansLocal_30 = 0;
	BOOL bLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 5;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 2;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 2;
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
	Volume volLocal_140 = 0;
	Volume volLocal_141 = 0;
	Volume volLocal_142 = 0;
	Any anLocal_143 = 0;
	BOOL bLocal_144 = 0;
	BOOL bLocal_145 = 0;
	int iLocal_146 = 0;
	BOOL bLocal_147 = 0;
	BOOL bLocal_148 = 0;
	BOOL bLocal_149 = 0;
	BOOL bLocal_150 = 0;
	BOOL bLocal_151 = 0;
	BOOL bLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	BOOL bLocal_158 = 0;
	BOOL bLocal_159 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x7FFA6D83 ^0x7FFA6D83
{
	int num;
	int num2;
	float controlNormal;
	float controlNormal2;
	float controlNormal3;
	float controlNormal4;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	float entityAnimCurrentTime;
	var unk;
	float animSceneTime;
	BOOL flag5;
	BOOL flag6;
	char* animName;
	float speedMultiplier;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	bLocal_145 = true;
	iLocal_146 = -1;
	iLocal_153 = -1;
	iLocal_154 = -1;
	iLocal_155 = -1;
	iLocal_156 = 61;
	iLocal_157 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(false);

	num = iScriptParam_0;
	num2 = Global_40.f_9.f_11;
	flag = true;
	func_2(&uLocal_32, num);
	func_3(&(uLocal_32.f_39));
	func_4();
	uLocal_32.f_93 = MISC::GET_GAME_TIMER();

	while (true)
	{
		Global_35 = PLAYER::PLAYER_PED_ID();
		bLocal_151 = CAM::_IS_IN_FULL_FIRST_PERSON_MODE();
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	
		if (!PED::IS_PED_INJURED(Global_35) && !bLocal_152)
			ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
	
		if (func_5(&flag3))
			func_1(flag3);
	
		func_6(&uLocal_32);
		func_7();
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_WHISTLE"), false);
		func_8(false);
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
		controlNormal = PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_LR"));
		controlNormal2 = PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_MOVE_UD"));
		flag4 = func_9(controlNormal, controlNormal2);
	
		if (bLocal_145)
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	
		if (iLocal_29 < 8)
			MISC::_0xA3A8926951471C82();
	
		if (iLocal_29 < 10 || flag || bLocal_151)
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_RESPAWN"));
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	
		if (iLocal_29 < 10 || bLocal_151)
		{
			func_10();
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 103, true);
		}
	
		if (!PED::IS_PED_INJURED(uLocal_32.f_98) && !TASK::IS_PED_IN_WRITHE(uLocal_32.f_98))
		{
			PED::_SET_PED_MOTIVATION(uLocal_32.f_98, 3, 0f, 0);
		
			if (iLocal_29 >= 8)
				if (!uLocal_32.f_38 && !uLocal_32.f_59)
					if (!func_11(uLocal_32.f_98, SCRIPT_TASK_STAND_STILL))
						TASK::TASK_STAND_STILL(uLocal_32.f_98, -1);
		}
	
		EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
	
		switch (iLocal_29)
		{
			case 0:
				func_12(&uLocal_32, num, num2);
				func_13(num, num2);
			
				if (!Global_1310720.f_27)
					STREAMING::LOAD_SCENE_START(uLocal_32.f_39.f_1, func_14(uLocal_32.f_39.f_4), 500f, 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_32.f_76)))
					TASK::REQUEST_WAYPOINT_RECORDING(&(uLocal_32.f_76));
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_32.f_84)))
					TASK::REQUEST_WAYPOINT_RECORDING(&(uLocal_32.f_84));
			
				if (WATER::_GET_WORLD_WATER_TYPE() == 1)
					if (func_15(uLocal_32.f_30) != 8)
						WATER::_SET_WORLD_WATER_TYPE(0);
				else if (func_15(uLocal_32.f_30) == 8)
					WATER::_SET_WORLD_WATER_TYPE(1);
			
				ENTITY::SET_ENTITY_COORDS(Global_35, uLocal_32.f_30, false, false, true, true);
				func_16();
			
				if (func_17())
					func_18(&(uLocal_32.f_39));
			
				if (Global_1310720.f_17 >= 0)
				{
					CLOCK::SET_CLOCK_TIME(Global_1310720.f_17, 0, 0);
					Global_1310720.f_17 = -1;
				}
			
				CLOCK::PAUSE_CLOCK(false, 0);
			
				if (!func_19() && !func_20(Global_1935630, 131072))
				{
					func_21(uLocal_32.f_30, 500f, false);
					func_22(uLocal_32.f_30, 500f, false, false, false, false, false);
				}
			
				PED::INSTANTLY_FILL_PED_POPULATION();
				VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				uLocal_32.f_98 = 0;
				uLocal_32.f_99 = 0;
				uLocal_32.f_100 = { 0f, 0f, 0f };
				uLocal_32.f_103 = 0f;
				uLocal_32.f_104 = { 0f, 0f, 0f };
				uLocal_32.f_107 = 0f;
				func_23(0, &(uLocal_32.f_100), &(uLocal_32.f_103));
				func_23(1, &(uLocal_32.f_104), &(uLocal_32.f_107));
			
				if (!Global_1935630.f_12)
					ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
			
				Global_40.f_9.f_11 = -1;
				volLocal_141 = VOLUME::CREATE_VOLUME_CYLINDER(uLocal_32.f_30, 0f, 0f, 0f, 1f, 1f, 20f);
				func_21(uLocal_32.f_30, 5f, false);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uLocal_32.f_30, 5f);
				POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_141, 8192, 0, 0, -1, -1, 0);
				POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_141, 8192, 0, 0, -1, -1, 0);
				volLocal_142 = VOLUME::CREATE_VOLUME_CYLINDER(uLocal_32.f_30, 0f, 0f, 0f, 1f, 1f, 20f);
				anLocal_143 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volLocal_142, false, 7);
				uLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 1;
				break;
		
			case 1:
				if (func_24())
				{
					if (!Global_1310720.f_27)
						STREAMING::LOAD_SCENE_STOP();
				
					uLocal_32.f_30.f_2 = uLocal_32.f_30.f_2 - 1f;
					PED::_0x704C908E9C405136(Global_35);
				
					if (func_25())
						func_26(17, 1108822547, 2, 0, false);
				
					volLocal_140 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_140, uLocal_32.f_30, 0f, 0f, 0f, 15f, 15f, 20f);
					VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(volLocal_140, uLocal_32.f_34, 0f, 0f, 0f, 15f, 15f, 20f);
					POPULATION::_0x2161278C6322F740(4576, 0, 0, -1, -1, 0);
				
					if (!Global_1310720.f_28 && !func_20(Global_1935630, 131072))
						PED::_0x9851DE7AEC10B4E1(uLocal_32.f_30, 5000f, 1, 0);
				
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_140, 2232831, 0, 0, -1, -1, 0);
					POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volLocal_140, 2232831, 0, 0, -1, -1, 0);
					iLocal_153 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uLocal_32.f_30, 3.5f, 1, iLocal_156, 0);
					iLocal_154 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uLocal_32.f_34, 3.5f, 1, iLocal_156, 0);
					iLocal_155 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uLocal_32.f_30, 0.5f, 2, 2, 0);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_32.f_76)))
						func_27(Global_35, &(uLocal_32.f_76), true, 1061360239, 1053609165, 0, 0, true);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_32.f_84)) && !PED::IS_PED_INJURED(uLocal_32.f_98))
						func_27(uLocal_32.f_98, &(uLocal_32.f_84), true, 1061360239, 1053609165, 0, 0, true);
				
					func_28(true, 0, false);
				
					if (!func_19())
					{
						if (bLocal_147)
						{
							iLocal_146 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
							AUDIO::PLAY_STREAM_FRONTEND(iLocal_146);
						}
					
						if (!func_20(Global_1935630, 131072))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_START");
							bLocal_148 = true;
						}
					}
				
					GRAPHICS::_0x9D1B0B5066205692();
				
					if (!func_29())
					{
						iLocal_29 = 3;
					}
					else
					{
						func_30();
						iLocal_29 = 2;
					}
				}
				break;
		
			case 2:
				if (func_31())
					iLocal_29 = 3;
				break;
		
			case 3:
				func_32();
				CAM::DO_SCREEN_FADE_OUT(0);
				uLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 4;
				break;
		
			case 4:
				if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
				else
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					Global_1310720.f_8 = 1;
					func_33(1024);
				
					if (func_34(&unk))
						func_35();
				
					func_36(true);
					func_37();
				
					if (func_38(num) == -1)
					{
					}
					else
					{
						func_39();
					}
				
					func_40(&(Global_1347343.f_11), 524288);
				
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_30) && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_30, true, false))
					{
						AUDIO::_SET_AUDIO_SCENESET("Clouds", "DEATH_FAIL_RESPAWN_SCENES");
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_30, uLocal_32.f_27, 0f, 0f, 0f, 2);
						LAW::_0xE9AC8466ABE484BB(true, 0);
						ANIMSCENE::START_ANIM_SCENE(ansLocal_30);
						iLocal_29 = 5;
					}
					else
					{
						uLocal_32.f_93 = MISC::GET_GAME_TIMER();
						ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
					
						if (uLocal_32.f_59)
							func_41();
					
						iLocal_29 = 6;
					}
				}
				break;
		
			case 5:
				animSceneTime = ANIMSCENE::_GET_ANIM_SCENE_TIME(ansLocal_30);
			
				if (animSceneTime >= 1f)
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						CAM::DO_SCREEN_FADE_IN(1000);
				
					if (!bLocal_149 && CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
						func_42();
						bLocal_149 = true;
					}
				}
			
				if (animSceneTime >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(ansLocal_30) * 0.99f)
				{
					if (uLocal_32.f_59)
						func_41();
				
					uLocal_32.f_93 = MISC::GET_GAME_TIMER();
				
					if (iLocal_146 != -1)
					{
						AUDIO::STOP_STREAM(iLocal_146);
						iLocal_146 = -1;
					}
				
					iLocal_29 = 6;
				}
				break;
		
			case 6:
				if (!CAM::IS_SCREEN_FADED_OUT())
					CAM::DO_SCREEN_FADE_OUT(0);
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_30))
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(ansLocal_30, true);
			
				AUDIO::_SET_AUDIO_SCENESET("Respawn", "DEATH_FAIL_RESPAWN_SCENES");
				func_43(&uLocal_32, 0);
			
				if (func_45(func_44()))
					MISC::SET_WEATHER_TYPE(joaat("overcastdark"), true, false, false, 0, true);
			
				MISC::_SET_WEATHER_TYPE_FROZEN(true);
				GRAPHICS::_0x503941F65DBA24EC(1);
			
				if (!uLocal_32.f_59)
				{
					func_46();
					func_47();
				}
			
				if (!PED::IS_PED_INJURED(uLocal_32.f_98))
					PED::SET_PED_RESET_FLAG(uLocal_32.f_98, 105, true);
			
				if (uLocal_32.f_53)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, true), "RESPAWN_LOOP", 1000f, -4f, -1, 1 | uLocal_32.f_67, 0, false, 4 | uLocal_32.f_69, false, 0, false);
					func_49(&uLocal_32, true);
				}
				else if (uLocal_32.f_54)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, false), "RESPAWN_ACTION", 4f, -2f, -1, uLocal_32.f_68, 0, false, 4 | uLocal_32.f_69, false, 0, false);
					func_49(&uLocal_32, false);
					uLocal_32.f_54 = 0;
				}
				else if (uLocal_32.f_55)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, false), "RESPAWN_ACTION", 1000f, -4f, -1, 67108880, 0, false, 4 | uLocal_32.f_69, false, 0, false);
					uLocal_32.f_55 = 0;
				}
				else if (uLocal_32.f_59)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, true), func_50(&uLocal_32, true), 1000f, -4f, -1, 2, 0, false, 268435460, false, 0, false);
					TASK::TASK_PLAY_ANIM(uLocal_32.f_98, func_48(&uLocal_32, true), func_50(&uLocal_32, false), 1000f, -4f, -1, 6, 0, false, 268435456, false, 0, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_32.f_98, false, false);
				}
			
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				bLocal_152 = true;
				uLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 7;
				break;
		
			case 7:
				uLocal_32.f_93 = MISC::GET_GAME_TIMER();
			
				if (!func_51(0))
				{
					func_18(&(uLocal_32.f_39));
					func_52(&(uLocal_32.f_39));
				}
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_30))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_30);
					ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
					LAW::_0xE9AC8466ABE484BB(false, 0);
				}
			
				if (bLocal_148)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");
					bLocal_148 = false;
				}
			
				func_53(true);
				AUDIO::PLAY_SOUND_FRONTEND("EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
			
				if (Global_1310720.f_12)
				{
					func_54(110, false);
					func_54(111, false);
					func_56(func_55(), 15000, 1000);
				}
			
				if (Global_1310720.f_14 && func_57(274) < 3 && !func_58(59))
					func_54(274, true);
			
				uLocal_32.f_93 = MISC::GET_GAME_TIMER();
				iLocal_29 = 8;
				break;
		
			case 8:
				if (!bLocal_144)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
					bLocal_152 = true;
					ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_32.f_98, true);
				
					if (!PED::IS_PED_INJURED(uLocal_32.f_98))
						ENTITY::SET_ENTITY_COLLISION(uLocal_32.f_98, true, false);
				
					func_59(&Global_1935630, 4096);
					Global_1310720.f_6 = 0;
				
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						CAM::DO_SCREEN_FADE_IN(0);
				
					if (func_60())
						func_61(1, 10);
				
					bLocal_144 = true;
				}
			
				if (!PED::IS_PED_INJURED(uLocal_32.f_98))
					PED::SET_PED_RESET_FLAG(uLocal_32.f_98, 105, true);
			
				flag5 = func_51(1);
			
				if (flag5)
				{
					func_62();
					flag = false;
					iLocal_29 = 10;
				}
				else if (uLocal_32.f_56)
				{
					flag = false;
					controlNormal3 = PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_LOOK_LR"));
					controlNormal4 = PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_LOOK_UD"));
				
					if (controlNormal3 != 0f || controlNormal4 != 0f && !flag2)
					{
						func_52(&(uLocal_32.f_39));
						flag2 = true;
					}
				
					if (flag4)
					{
						uLocal_32.f_56 = 0;
						uLocal_32.f_53 = 0;
					}
				
					if (uLocal_32.f_59)
					{
						if (uLocal_32.f_25 < 0 || uLocal_32.f_25 >= uLocal_32.f_52)
							uLocal_32.f_25 = MISC::GET_RANDOM_INT_IN_RANGE(0, uLocal_32.f_52);
					
						if (func_63(&uLocal_32))
						{
							if (uLocal_32.f_26 < MISC::GET_GAME_TIMER())
							{
								uLocal_32.f_26 = &func_343 + MISC::GET_GAME_TIMER();
								uLocal_32.f_25 = uLocal_32.f_25 + 1;
							
								if (uLocal_32.f_25 >= uLocal_32.f_52)
									uLocal_32.f_25 = 0;
							}
							else
							{
								uLocal_32.f_25 = 0;
							}
						
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, true), func_64(&uLocal_32, true, uLocal_32.f_25), 2f, -4f, -1, 2, 0, false, 268435460, false, 0, false);
							TASK::TASK_PLAY_ANIM(uLocal_32.f_98, func_48(&uLocal_32, true), func_64(&uLocal_32, false, uLocal_32.f_25), 2f, -4f, -1, 2, 0, false, 268435456, false, 0, false);
						}
					}
					else
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_32.f_70)))
							uLocal_32.f_70 = { func_65(&uLocal_32) };
					
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&uLocal_32, true), "RESPAWN_LOOP", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&uLocal_32, true), "RESPAWN_LOOP") > 0.99f)
							{
								uLocal_32.f_70 = { func_65(&uLocal_32) };
								TASK::TASK_PLAY_ANIM(Global_35, uLocal_32.f_13, &(uLocal_32.f_70), 4f, -4f, -1, 2, 0, false, 4 | uLocal_32.f_69, false, 0, false);
							}
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, uLocal_32.f_13, &(uLocal_32.f_70), 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, uLocal_32.f_13, &(uLocal_32.f_70)) > 0.99f)
								TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, true), "RESPAWN_LOOP", 4f, -4f, -1, 2, 0, false, 4 | uLocal_32.f_69, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, true), "RESPAWN_LOOP", 4f, -4f, -1, 2, 0, false, 4 | uLocal_32.f_69, false, 0, false);
						}
					}
				}
				else if (uLocal_32.f_53)
				{
					if (500 + uLocal_32.f_93 < MISC::GET_GAME_TIMER())
						uLocal_32.f_53 = 0;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1260366052))
				{
				}
				else
				{
					if (uLocal_32.f_54)
					{
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, false), "RESPAWN_ACTION", 4f, -1.5f, -1, uLocal_32.f_68, 0, false, 4 | uLocal_32.f_69, false, 0, false);
						func_49(&uLocal_32, false);
					}
				
					if (uLocal_32.f_55)
						TASK::TASK_PLAY_ANIM(Global_35, func_48(&uLocal_32, false), "RESPAWN_ACTION", 4f, -4f, -1, 67108880, 0, false, 4 | uLocal_32.f_69, false, 0, false);
				
					if (uLocal_32.f_59)
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						TASK::CLEAR_PED_TASKS(uLocal_32.f_98, true, false);
					}
				
					func_52(&(uLocal_32.f_39));
					uLocal_32.f_93 = MISC::GET_GAME_TIMER();
					iLocal_29 = 9;
				}
				break;
		
			case 9:
				speedMultiplier = 1f;
			
				if (!uLocal_32.f_59)
					if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_SPRINT")))
						speedMultiplier = 1.25f;
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&uLocal_32, false), "RESPAWN_ACTION", 1))
				{
					animName = "RESPAWN_ACTION";
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&uLocal_32, true), "RESPAWN_LOOP", 1))
				{
					animName = "RESPAWN_LOOP";
					flag6 = true;
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&uLocal_32, true), func_66(&uLocal_32, true), 1))
				{
					animName = func_66(&uLocal_32, true);
					flag6 = true;
				}
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(animName))
				{
					entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&uLocal_32, flag6), animName);
					ENTITY::_SET_ENTITY_ANIM_SPEED(Global_35, func_48(&uLocal_32, flag6), animName, speedMultiplier);
				
					if (4000 + uLocal_32.f_93 < MISC::GET_GAME_TIMER())
						entityAnimCurrentTime = 1f;
				}
				else if (2000 + uLocal_32.f_93 < MISC::GET_GAME_TIMER())
				{
					entityAnimCurrentTime = 1f;
				}
			
				if (!uLocal_32.f_95)
				{
					uLocal_32.f_95 = ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1675443122);
				
					if (uLocal_32.f_96 && uLocal_32.f_95)
						func_67(&(uLocal_32.f_39), true);
				}
			
				if (uLocal_32.f_59)
				{
				}
				else if (uLocal_32.f_60 && !uLocal_32.f_95)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				}
			
				if (func_68(flag4, entityAnimCurrentTime))
				{
					if (uLocal_32.f_54)
						TASK::TASK_STAND_STILL(Global_35, 1);
				
					bLocal_145 = false;
					uLocal_32.f_93 = MISC::GET_GAME_TIMER();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_29 = 10;
				}
				break;
		
			case 10:
				if (!uLocal_32.f_96)
					func_69(&(uLocal_32.f_39));
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(&uLocal_32, false), "RESPAWN_ACTION", 1))
					entityAnimCurrentTime = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(&uLocal_32, false), "RESPAWN_ACTION");
				else
					entityAnimCurrentTime = 1f;
			
				if (MISC::GET_GAME_TIMER() < uLocal_32.f_93 + 750 && uLocal_32.f_54 && !uLocal_32.f_59)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.15f);
				}
				else if (entityAnimCurrentTime < 1f && ENTITY::DOES_ENTITY_EXIST(uLocal_32.f_64[0]) && !bLocal_151)
				{
				}
				else if (flag4 || !flag)
				{
					if (bLocal_150)
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				
					if (func_70() != 8)
						func_71(45, 0, true);
					else
						func_71(22, 0, true);
				
					func_1(true);
				}
				break;
		
			default:
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(true);
	return;
}

void func_1(BOOL bParam0) // Position - 0xF8F Hash - 0x65C37B6 ^0xBC3FCA9D
{
	int i;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	func_72(Global_35, ENTITY::GET_ENTITY_MODEL(Global_35));
	TELEMETRY::_TELEMETRY_PLAYER_SPAWNED(Global_35);
	LAW::_0x2001687F9562FD9D(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	func_73();

	if (Global_1310720.f_29 != -1)
		func_74(Global_1310720.f_29);

	func_75();
	Global_1347477.f_6 = 0;
	func_76(8192);
	Global_1894899.f_8 = 0;
	func_67(&(uLocal_32.f_39), false);

	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT() && bParam0)
		CAM::DO_SCREEN_FADE_IN(500);

	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		STREAMING::LOAD_SCENE_STOP();

	if (bLocal_148)
		AUDIO::TRIGGER_MUSIC_EVENT("RESPAWN_CLOUDS_STOP");

	AUDIO::_STOP_AUDIO_SCENESET("DEATH_FAIL_RESPAWN_SCENES");

	if (!PED::IS_PED_INJURED(uLocal_32.f_98))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_32.f_98, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_32.f_98, false);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uLocal_32.f_98, 0);
	}

	if (!PED::IS_PED_INJURED(Global_35))
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);

	if (iLocal_153 != -1)
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_153, 1);

	if (iLocal_154 != -1)
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_154, 1);

	if (iLocal_155 != -1)
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&iLocal_155, 1);

	for (i = 0; i < uLocal_32.f_64; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_32.f_64[i]))
			OBJECT::DELETE_OBJECT(&uLocal_32.f_64[i]);
	
		if (uLocal_32.f_61[i] == joaat("p_cigarette_cs02x"))
			func_77(joaat("consumable_cigarette_box"), true);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_140))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_140);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_140);
		VOLUME::DELETE_VOLUME(volLocal_140);
	}

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_141))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_141);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volLocal_141);
		VOLUME::DELETE_VOLUME(volLocal_141);
	}

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_143))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_143, false);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_142))
		VOLUME::DELETE_VOLUME(volLocal_142);

	VOLUME::_0xAC355980681A7F89(4);

	if (!func_20(Global_1935630, 131072))
		func_78(false, -1);

	func_79(1);
	func_59(&Global_1935630, 131072);
	func_80(4096);
	func_79(512);
	MISC::_SET_WEATHER_TYPE_FROZEN(false);
	GRAPHICS::_0x503941F65DBA24EC(0);
	func_81();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2(var uParam0, int iParam1) // Position - 0x11AE Hash - 0x8ECE8911 ^0x4134DB76
{
	var unk;

	if (!func_82(15, uParam0))
		return;

	uParam0->f_5 = *uParam0;
	uParam0->f_27 = { func_83(iParam1) };
	uParam0->f_5.f_2 = -566397848;
	uParam0->f_5.f_3 = iParam1;
	!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_5.f_1), &(uParam0->f_5));

	if (DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(uParam0->f_5, uParam0->f_5.f_1) == 0)
	{
		uParam0->f_5 = { unk };
		func_2(uParam0, iParam1 + 1);
	}

	return;
}

void func_3(var uParam0) // Position - 0x1223 Hash - 0xD73C632E ^0x8C48673A
{
	*uParam0 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	uParam0->f_7 = 70f;
	uParam0->f_9 = -180f;
	uParam0->f_10 = 180f;
	uParam0->f_11 = -85f;
	uParam0->f_12 = 85f;
	return;
}

void func_4() // Position - 0x1265 Hash - 0x8345B57E ^0xF95E91B3
{
	ItemSet itemset;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;
	int num2;

	func_84(&Global_1935630, 4096);
	func_85();

	if (Global_1310720.f_7)
		func_86(false);

	if (!func_87(512))
	{
		func_88();
		func_89(1);
		func_90(-1, false, 0, false, false);
	}
	else
	{
		func_90(-1, false, 0, true, false);
	}

	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	LAW::CLEAR_PLAYER_PAST_CRIMES(PLAYER::PLAYER_ID());
	func_91();
	func_36(true);
	func_37();
	PERSCHAR::_0xB173599D61FAEB31();

	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::_SET_PED_DIRT_CLEANED(Global_35, 0f, -1, true, true);
		PED::CLEAR_PED_ENV_DIRT(Global_35);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_35, 9);
		itemset = ITEMSET::CREATE_ITEMSET(true);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
	
		if (ITEMSET::IS_ITEMSET_VALID(itemset))
		{
			itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
		
			for (i = 0; i < itemsetSize; i = i + 1)
			{
				entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
			
				if (ENTITY::DOES_ENTITY_EXIST(entityFromItem))
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
			}
		
			ITEMSET::DESTROY_ITEMSET(itemset);
		}
	
		if (!func_20(Global_1935630, 131072))
			func_92();
	}

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);

	if (CAM::IS_CINEMATIC_CAM_RENDERING())
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);

	Global_1347477.f_6 = 1;
	func_93(8192);
	func_94();
	func_95(false, false);
	func_96(-70f);
	func_97(0, false);
	func_98(num, num2);
	func_99(1);
	func_100(0);
	return;
}

BOOL func_5(var uParam0) // Position - 0x13EA Hash - 0x5F441B89 ^0x4E961136
{
	*uParam0 = 0;

	if (PED::IS_PED_INJURED(Global_35))
		return true;

	if (func_101() != func_102())
		return true;

	if (func_103(Global_43890))
		return true;

	if (STREAMING::_0x99F92061EFE908BA())
		return true;

	if (func_104(128))
		return true;

	return false;
}

void func_6(var uParam0) // Position - 0x143A Hash - 0xBEBD8ADD ^0x782A073D
{
	int boneId;
	int i;

	for (i = 0; i < uParam0->f_64; i = i + 1)
	{
		if (i == 0)
			boneId = 7966;
		else
			boneId = 64847;
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_64[i]))
		{
			if (!uParam0->f_97)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_64[i], Global_35))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64[i], Global_35, PED::GET_PED_BONE_INDEX(Global_35, boneId), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("DropCigarette")))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_64[i], true, true);
					uParam0->f_97 = 1;
				}
			}
		
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("objectexchange")))
				OBJECT::DELETE_OBJECT(&uParam0->f_64[i]);
		}
	}

	return;
}

void func_7() // Position - 0x14FD Hash - 0x1A3E7509 ^0x96CC6CEB
{
	if (Global_1310720.f_7 && !bLocal_159)
	{
		if (iLocal_157 < 0)
			iLocal_157 = MISC::GET_GAME_TIMER();
	
		if (func_105(Global_1935630.f_3))
		{
			if (iLocal_157 + 5000 < MISC::GET_GAME_TIMER())
			{
				func_32();
				AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT_OFF_MISSION", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
				bLocal_158 = true;
			}
			else if (!CAM::IS_SCREEN_FADED_IN() && UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(Global_1935630.f_3) >= 3)
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
	
		if (bLocal_158)
		{
			if (!UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1) || iLocal_157 + 5000 + 650 < MISC::GET_GAME_TIMER())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				bLocal_159 = true;
			}
		}
	}
	else
	{
		bLocal_159 = true;
	}

	return;
}

void func_8(BOOL bParam0) // Position - 0x159E Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_93(4);

	func_93(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

BOOL func_9(float fParam0, float fParam1) // Position - 0x15C0 Hash - 0x29D2F38B ^0xE63074A6
{
	if (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35) || TASK::IS_PED_SPRINTING(Global_35) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || MISC::ABSF(fParam0) > 0.2f || MISC::ABSF(fParam1) > 0.2f || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_TOGGLE_HOLSTER")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK2")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_MELEE_ATTACK")) || PAD::GET_CONTROL_NORMAL(PLAYER_CONTROL, joaat("INPUT_ATTACK")) > 0f || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL")))
		return 1;

	if (uLocal_32.f_59 && PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_HORSE_EXIT")))
	{
		bLocal_150 = true;
		return 1;
	}

	if (!PED::IS_PED_INJURED(uLocal_32.f_98))
		if (PED::_0xB8E2D655E1D5BD39(uLocal_32.f_98))
			return 1;

	return 0;
}

void func_10() // Position - 0x170D Hash - 0xF72018A2 ^0x285387D7
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	return;
}

BOOL func_11(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x1755 Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

int func_12(Any* panParam0, int iParam1, int iParam2) // Position - 0x17AE Hash - 0x996F0F8B ^0x32A81CC2
{
	int numChildren;
	var unk;
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;
	var unk9;
	int num3;

	panParam0->f_5.f_2 = 0;
	numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(panParam0->f_5, panParam0->f_5.f_1);

	if (numChildren < 0 || iParam2 >= numChildren)
		return 0;

	panParam0->f_5.f_3 = iParam2;
	panParam0->f_5.f_2 = 599260570;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, &(panParam0->f_5));
	panParam0->f_14 = func_106(unk);
	panParam0->f_5.f_3 = iParam2;
	panParam0->f_5.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &(panParam0->f_5));

	if (func_107(num2))
		num2 = joaat("script_respawn@one_shot@hybrid@generic@unarmed@crack_neck@a");

	panParam0->f_11 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num2);
	panParam0->f_15 = func_109(num2);
	panParam0->f_2 = -1222062814;
	panParam0->f_3 = num2;
	unk9 = { *panParam0 };

	if (Global_40.f_9.f_12)
	{
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk9.f_1), &unk9))
		{
			num3 = num2;
			unk9.f_2 = -2000223992;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &unk9);
		
			if (num2 != 0)
			{
				panParam0->f_11 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num2);
				panParam0->f_15 = func_109(num2);
				panParam0->f_2 = -1222062814;
				panParam0->f_3 = num2;
			}
			else
			{
				num2 = num3;
			}
		}
	}

	num = num2;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_5.f_2 = -1726340653;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, &(panParam0->f_5)))
			panParam0->f_12 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num2);
		else
			panParam0->f_12 = panParam0->f_11;
	
		panParam0->f_2 = 824674748;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_53), panParam0);
		panParam0->f_2 = -1565562604;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_54), panParam0);
		panParam0->f_2 = -233815074;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_55), panParam0);
		panParam0->f_2 = -477049661;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&flag, panParam0);
	
		if (flag)
			panParam0->f_67 = panParam0->f_67 | 67108880;
	
		panParam0->f_2 = -899679477;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&flag2, panParam0);
	
		if (flag2)
		{
			panParam0->f_67 = panParam0->f_67 | 49152;
			panParam0->f_68 = panParam0->f_68 | 49152;
		}
	
		panParam0->f_2 = -62070419;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&flag2, panParam0);
	
		if (flag2)
			panParam0->f_69 = panParam0->f_69 | 1;
	
		panParam0->f_2 = -1625090004;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_57), panParam0);
		panParam0->f_2 = 76128139;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_58), panParam0);
		panParam0->f_2 = -1148228754;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_59), panParam0);
		panParam0->f_2 = 2055089342;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_60), panParam0);
		panParam0->f_2 = 660059998;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_56), panParam0);
	
		if (!panParam0->f_59)
		{
			if (panParam0->f_56)
			{
				panParam0->f_2 = 1514205951;
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, panParam0);
				panParam0->f_13 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num2);
				panParam0->f_2 = 1597176581;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(panParam0->f_52), panParam0);
			}
		}
		else
		{
			func_110(panParam0, num);
		}
	
		func_111(panParam0, iParam1, MISC::GET_HASH_KEY(panParam0->f_14));
		panParam0->f_2 = -1854764018;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, panParam0);
	
		if (num2 != 0)
			panParam0->f_61[0] = num2;
	
		panParam0->f_2 = -391550498;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num2, panParam0))
			panParam0->f_61[1] = num2;
	
		panParam0->f_56;
	}

	return 1;
}

void func_13(int iParam0, int iParam1) // Position - 0x1AB9 Hash - 0xC1AA336C ^0x7B214F1F
{
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	BOOL flag2;

	num4 = Global_40.f_9.f_16;

	while (num4 > num && !flag)
	{
		if (Global_40.f_9.f_16[num] < false)
		{
			num2 = num;
			flag = true;
		}
	
		num = num + 1;
	}

	flag2 = BUILTIN::SHIFT_LEFT(iParam1, 11) || iParam0;
	Global_40.f_9.f_16[num2] = flag2;
	num3 = num2 + 1;
	num3 = num3 >= num4 ? 0 : num3;
	Global_40.f_9.f_16[num3] = -1;
	return;
}

Vector3 func_14(float fParam0, var uParam1, var uParam2) // Position - 0x1B33 Hash - 0x45556D7D ^0x268E3422
{
	float num;
	float num2;
	float num3;
	float num4;

	num = BUILTIN::SIN(fParam0.f_2);
	num2 = BUILTIN::COS(fParam0.f_2);
	num3 = BUILTIN::SIN(fParam0);
	num4 = BUILTIN::COS(fParam0);
	return func_113(-num4 * num, num4 * num2, num3);
}

int func_15(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x1B70 Hash - 0x56F0811C ^0x278FB5A
{
	return func_114(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

void func_16() // Position - 0x1B86 Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_115();
	return;
}

BOOL func_17() // Position - 0x1B92 Hash - 0x4228A1C2 ^0x5FAFE78F
{
	return Global_1310720.f_9;
}

int func_18(var uParam0) // Position - 0x1BA0 Hash - 0x775807EE ^0x5233934F
{
	if (!_IS_NULL_VECTOR(uParam0->f_1) && !_IS_NULL_VECTOR(uParam0->f_4) && uParam0->f_7 != 0f)
	{
		CAM::SET_CAM_COORD(*uParam0, uParam0->f_1);
		CAM::SET_CAM_ROT(*uParam0, uParam0->f_4, 2);
		CAM::SET_CAM_FOV(*uParam0, uParam0->f_7);
		CAM::SET_CAM_ACTIVE(*uParam0, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		return 1;
	}

	return 0;
}

BOOL func_19() // Position - 0x1C10 Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1310720.f_10;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x1C1E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_21(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x1C2D Hash - 0xDCCB3575 ^0xAC48C8F6
{
	int num;

	num = 16384;

	if (bParam4)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

void func_22(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1C54 Hash - 0xDCA0A629 ^0x65C02C4D
{
	int num;

	num = 8;

	if (bParam4)
		num = num | 72;

	if (bParam5)
		num = num | 131072;

	if (bParam6)
		num = num | 24;

	if (bParam7)
		num = num | 40;

	if (bParam8)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

int func_23(int iParam0, var uParam1, var uParam2) // Position - 0x1CAC Hash - 0xE90F7C50 ^0xEB94CF19
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	*uParam1 = { Global_40.f_1095.f_1[iParam0 /*436*/].f_427 };
	*uParam2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_430;
	return 1;
}

BOOL func_24() // Position - 0x1CFA Hash - 0xA13E8CF0 ^0xC61AFDE2
{
	var unk;
	BOOL flag;
	int i;
	BOOL flag2;

	flag = false;

	if (!func_118(&uLocal_32))
		flag = true;

	flag2 = true;

	for (i = 0; i < uLocal_32.f_64; i = i + 1)
	{
		if (uLocal_32.f_61[i] != 0)
		{
			STREAMING::REQUEST_MODEL(uLocal_32.f_61[i], false);
		
			if (STREAMING::HAS_MODEL_LOADED(uLocal_32.f_61[i]))
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_32.f_64[i]))
					uLocal_32.f_64[i] = OBJECT::CREATE_OBJECT(uLocal_32.f_61[i], Global_36, true, true, false, false, true);
			else
				flag2 = false;
		}
	}

	if (!flag2)
		flag = true;

	if (!flag)
		if (uLocal_32.f_93 + 30000 < MISC::GET_GAME_TIMER())
			return true;

	if (!func_119())
		flag = true;

	if (!func_17() && !bLocal_31 && !func_20(Global_1935630, 131072))
	{
		bLocal_147 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
	
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_30))
		{
			uLocal_32.f_16 = func_120(CLOCK::GET_CLOCK_HOURS());
			ansLocal_30 = ANIMSCENE::_CREATE_ANIM_SCENE(uLocal_32.f_16, 0, 0, false, true);
		
			if (ansLocal_30 == -1)
			{
				bLocal_31 = true;
				return false;
			}
		
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_30);
		}
	
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_30, true, false))
			flag = true;
	
		if (!bLocal_147)
			flag = true;
	}

	if (flag)
		return false;

	if (STREAMING::IS_LOAD_SCENE_ACTIVE() && !Global_1310720.f_27)
		if (!STREAMING::IS_LOAD_SCENE_LOADED())
			return false;

	if (!PED::IS_INSTANTLY_FILL_PED_POPULATION_FINISHED() || !VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED())
		return false;

	if (!PED::IS_PED_READY_TO_RENDER(Global_35))
		return false;

	unk = { uLocal_32.f_30 };

	if (!func_121(&unk, 50, 10, false))
		return false;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_32.f_76)))
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(uLocal_32.f_76)))
			return false;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uLocal_32.f_84)))
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(uLocal_32.f_84)))
			return false;

	if (!bLocal_159)
		return false;

	if (!func_122())
		return false;

	if (func_29())
	{
		if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
		{
			SCRIPTS::SHUTDOWN_LOADING_SCREEN();
			return false;
		}
	}

	if (!func_123(256))
		return true;

	return true;
}

BOOL func_25() // Position - 0x1F0D Hash - 0xE1BC079E ^0x79C1735A
{
	var unk;

	if (func_124())
		if (!func_58(4))
			return true;

	return PED::_IS_META_PED_USING_COMPONENT(Global_35, joaat("HATS")) || func_125(-2061583405, &unk);
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1F46 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_126(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = iParam3;
	func_127(num);
	return;
}

int func_27(Ped pedParam0, const char* sParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1F78 Hash - 0xF2C93E75 ^0x2DDAA8D0
{
	int points;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
		return 0;

	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &points))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	ENTITY::IS_ENTITY_DEAD(pedParam0);

	if (points > 256)
		return 0;

	if (ENTITY::_CREATE_FOOTPATH_TRAIL(pedParam0, sParam1, bParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, bParam7))
		return 1;

	return 0;
}

int func_28(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x1FE4 Hash - 0xC759219C ^0xC759219C
{
	int num;
	int i;

	num = 1;

	for (i = 0; i < 27; i = i + 1)
	{
		if (!func_128(i, bParam0, iParam1, bParam2))
			num = 0;
	}

	return num;
}

BOOL func_29() // Position - 0x2017 Hash - 0x434ABC88 ^0x92084F3C
{
	if (!MISC::IS_ORBIS_VERSION())
		return false;

	if (!func_20(Global_1935630, 131072))
		return false;

	if (!NETWORK::NETWORK_SHOULD_SHOW_PROMOTION_DLG())
		return false;

	return true;
}

void func_30() // Position - 0x204C Hash - 0xE4AC71E ^0x6AA58633
{
	char* str;

	func_32();
	CAM::DO_SCREEN_FADE_OUT(0);
	str.f_2 = 4;
	str = "";
	str.f_1 = "";
	str.f_3 = 2117985430;
	str.f_7 = 1539841963;
	Global_1935630.f_3 = func_129(&str, "PSPLUS_OFFER_TITLE", "PSPLUS_OFFER", 0, true);
	NETWORK::_0xFC6FCF4C03F1BBF6();
	return;
}

BOOL func_31() // Position - 0x20A0 Hash - 0xEA7D6B49 ^0xCD208B3D
{
	int eventData;

	if (!MISC::IS_ORBIS_VERSION())
		return true;

	if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN() && func_130(Global_1935630.f_3))
		CAM::DO_SCREEN_FADE_IN(0);

	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);

	if (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("status_alert_feed")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("status_alert_feed"), &eventData))
		{
			switch (eventData)
			{
				case -1203660660:
					if (eventData.f_1 == Global_1935630.f_3)
					{
						switch (eventData.f_2)
						{
							case 1400745903:
								return true;
						
							case 2074623703:
								NETWORK::NETWORK_SHOW_ACCOUNT_UPGRADE_UI();
								return true;
						}
					}
					break;
			}
		}
	
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("status_alert_feed"));
	}

	return false;
}

void func_32() // Position - 0x214C Hash - 0x12FD943F ^0x7714E643
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}

	return;
}

void func_33(int iParam0) // Position - 0x216F Hash - 0x3410C012 ^0xB1BD83F0
{
	Global_1572864.f_3 = Global_1572864.f_3 || iParam0;
	return;
}

BOOL func_34(var uParam0) // Position - 0x2186 Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_131(81053684))
		if (func_132(uParam0))
			return true;
	else if (func_125(-525676072, uParam0))
		if (func_132(uParam0))
			return true;

	return false;
}

int func_35() // Position - 0x21CB Hash - 0x68C03105 ^0x68C03105
{
	Hash hash;

	if (!func_133())
		return 0;

	if (!func_132(&hash))
		return 0;

	if (!func_134(hash))
		return 0;

	return func_135(hash, 0);
}

void func_36(BOOL bParam0) // Position - 0x2202 Hash - 0x74ADD5BD ^0x6FC7AC9D
{
	eStackSize stackSize;
	eStackSize i;

	for (i = 0; i < Global_1879534.f_7300; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[i /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						stackSize = Global_1879534.f_1911[Global_1879534.f_7301.f_2[i /*4*/].f_1 /*3*/].f_2;
					
						if (func_136(stackSize))
							if (func_137(stackSize))
								func_138(stackSize, bParam0);
						break;
				}
			}
		}
	}

	return;
}

void func_37() // Position - 0x22AD Hash - 0xC8331A29 ^0x6A812781
{
	int i;

	i = 0;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (func_139(Global_40.f_450[i]))
			if (Global_1347702[Global_40.f_450[i] /*49*/].f_14 & 2 != 0)
				func_140(Global_40.f_450[i], true, 0);
	}

	return;
}

int func_38(int iParam0) // Position - 0x230D Hash - 0x6BF2FF8D ^0xECB7F67C
{
	var unk;
	var unk6;
	int num;

	if (!func_82(15, &unk))
		return -1;

	unk.f_3 = iParam0;
	unk.f_2 = -125049320;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk))
	{
		num = func_141(unk6);
		return num;
	}

	return -1;
}

void func_39() // Position - 0x234D Hash - 0xD0C94760 ^0x5BD396C3
{
	Ped args;

	args.f_15 = joaat("dutch_gang");
	args = PLAYER::PLAYER_PED_ID();
	args.f_12 = 46;
	args.f_4 = joaat("dutch_gang");
	args.f_8 = 0;
	MISC::_CREATE_AI_MEMORY(&args, 17);
	return;
}

void func_40(int iParam0, int iParam1) // Position - 0x2380 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_41() // Position - 0x2391 Hash - 0x9C86EC09 ^0x5FCD8893
{
	func_46();
	func_47();
	func_142(Global_35, uLocal_32.f_98, false, -1, true);
	return;
}

void func_42() // Position - 0x23B0 Hash - 0xACBE2890 ^0xC6CE95C
{
	int num;
	int value;
	float potency;
	float potency2;

	num = func_143();
	value = func_144(num);
	potency = num < 0 ? 0f : BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(8);
	potency2 = num > 0 ? 0f : BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(8);
	GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnSkyWithHonor", 1, potency);
	GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnSkyWithHonor", 3, potency2);
	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x240C Hash - 0x1B50687B ^0x29C3C5AD
{
	int attachPoint;
	eStackSize stackSize;
	Volume volume;
	Hash weaponHash;

	if (uParam0->f_58)
	{
		attachPoint = 0;
	}
	else if (uParam0->f_57)
	{
		attachPoint = 1;
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 0, true);
	}
	else
	{
		stackSize = func_146(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), true);
	
		if (!PED::IS_PED_INJURED(uParam0->f_98))
		{
			if (uParam0->f_59)
			{
				func_147(false);
			}
			else if (func_148(stackSize) == 4 && func_149() == stackSize)
			{
				func_147(false);
			}
			else if (func_148(stackSize) == 1)
			{
				volume = Global_1888801[stackSize /*35*/].f_4;
			
				if (func_150(Global_35, volume, false, 0))
					func_147(false);
			}
		}
	
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		return;
	}

	if (!PED::IS_PED_INJURED(uParam0->f_98))
	{
		weaponHash = func_151(Global_35, false, 7, false);
	
		if (func_152(weaponHash))
			WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash);
	}

	WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, true);
	weaponHash = func_151(Global_35, false, 0, false);

	if (!func_152(weaponHash) || !WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || WEAPON::IS_WEAPON_BOW(weaponHash))
		weaponHash = func_151(Global_35, false, 1, false);

	if (!func_152(weaponHash) || !WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || WEAPON::IS_WEAPON_BOW(weaponHash))
		weaponHash = func_151(Global_35, false, 9, false);

	if (!func_152(weaponHash) || !WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || WEAPON::IS_WEAPON_BOW(weaponHash))
		weaponHash = func_151(Global_35, false, 10, false);

	if (func_152(weaponHash))
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, attachPoint, false, false);
		else
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, attachPoint, false, false);

	return;
}

var func_44() // Position - 0x25BA Hash - 0x1372AFBD ^0xAE723118
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	return unk;
}

BOOL func_45(int iParam0) // Position - 0x25E4 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("Shower"):
		case joaat("sleet"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
			return true;
	
		default:
		
	}

	return false;
}

void func_46() // Position - 0x2629 Hash - 0xE3FB7546 ^0x6A898A26
{
	int num;
	int i;
	int scenario;

	if (!PED::IS_PED_INJURED(uLocal_32.f_98) && !TASK::IS_PED_IN_WRITHE(uLocal_32.f_98) && !_IS_NULL_VECTOR(uLocal_32.f_34))
	{
		func_21(uLocal_32.f_34, 10f, false);
		ENTITY::SET_ENTITY_COORDS(uLocal_32.f_98, uLocal_32.f_34, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_32.f_98, uLocal_32.f_37);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uLocal_32.f_98, true);
		PED::_SET_PED_MOTIVATION(uLocal_32.f_98, 3, 0f, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_32.f_98, true);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uLocal_32.f_98, 2);
		num = func_153(uLocal_32.f_98);
	
		for (i = 0; i < 2; i = i + 1)
		{
			if (func_154(num, i) < 15)
				func_155(num, i, 15);
		}
	
		if (!uLocal_32.f_59)
		{
			if (uLocal_32.f_38)
			{
				if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(uLocal_32.f_34, joaat("PROP_HitchingPost"), 1f, false))
				{
					scenario = TASK::FIND_SCENARIO_OF_TYPE_HASH(uLocal_32.f_34, joaat("PROP_HitchingPost"), 1f, 0, false);
					TASK::TASK_USE_SCENARIO_POINT(uLocal_32.f_98, scenario, 0, 0, true, true, 0, false, -1082130432, false);
				}
			}
		}
	}

	return;
}

void func_47() // Position - 0x2730 Hash - 0x548B3536 ^0xCE18624E
{
	var groundZ;

	ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(uLocal_32.f_30 + { 1.5f, 0f, 0f }, &groundZ, false))
		uLocal_32.f_30.f_2 = groundZ;

	ENTITY::SET_ENTITY_COORDS(Global_35, uLocal_32.f_30, false, true, true, true);
	ENTITY::SET_ENTITY_HEADING(Global_35, uLocal_32.f_33);
	return;
}

const char* func_48(var uParam0, BOOL bParam1) // Position - 0x277D Hash - 0xF38E0219 ^0xA72254DD
{
	if (bParam1)
		return uParam0->f_12;

	return uParam0->f_11;
}

void func_49(var uParam0, BOOL bParam1) // Position - 0x2798 Hash - 0xF2965D24 ^0x37CF05EC
{
	char* animName;
	int i;

	for (i = 0; i < uParam0->f_64; i = i + 1)
	{
		animName = "";
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_64[i]))
			if (uParam0->f_61[i] == joaat("p_journal01x") || uParam0->f_61[i] == joaat("s_lev_journal_book") || uParam0->f_61[i] == joaat("s_playerjournal01x"))
				if (bParam1)
					animName = "respawn_loop_journal";
				else
					animName = "respawn_action_journal";
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(animName))
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_64[i], animName, func_48(uParam0, bParam1), 1000f, bParam1, false, false, 0, 0);
	}

	return;
}

const char* func_50(var uParam0, BOOL bParam1) // Position - 0x2843 Hash - 0xFE74B0DF ^0xC2F2F6FC
{
	var unk;

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "arthur_", 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk, "horse_", 64);

	TEXT_LABEL_APPEND_STRING(&unk, uParam0->f_17, 64);
	return func_156(unk);
}

BOOL func_51(int iParam0) // Position - 0x2874 Hash - 0xE690BD93 ^0xBA3D9C64
{
	if (!bLocal_151)
		return false;

	if (Global_1310720.f_25)
		return true;

	if (Global_1310720.f_26 && iParam0)
	{
		if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_NEXT_CAMERA")))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			return true;
		}
	}

	return false;
}

int func_52(var uParam0) // Position - 0x28C1 Hash - 0x5F9DD6A3 ^0x4F48704E
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::_FREEZE_GAMEPLAY_CAM_THIS_FRAME();
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		return 1;
	}

	return 0;
}

void func_53(BOOL bParam0) // Position - 0x28F0 Hash - 0xBAF59CB9 ^0xBE92F0DE
{
	int num;
	int value;
	float potency;
	float potency2;
	float potency3;

	if (!func_157(0, false, true) || bParam0)
	{
		num = func_143();
		value = func_144(num);
		potency = 1f - (MISC::ABSF(BUILTIN::TO_FLOAT(value)) / BUILTIN::TO_FLOAT(8));
		potency2 = num < 0 ? 0f : BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(8);
		potency3 = num > 0 ? 0f : BUILTIN::TO_FLOAT(value) / BUILTIN::TO_FLOAT(8);
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnWithHonor");
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 1, potency2);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 2, potency);
		GRAPHICS::_ANIMPOSTFX_SET_POTENCY("RespawnWithHonor", 3, potency3);
	}
	else
	{
		GRAPHICS::ANIMPOSTFX_PLAY("RespawnMissionCheckpoint");
	}

	return;
}

void func_54(int iParam0, BOOL bParam1) // Position - 0x2992 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_158(iParam0, &num, &num2);

	if (!func_159(iParam0, num, num2, bParam1))
		return;

	func_160(num, num2);
	return;
}

float func_55() // Position - 0x29BF Hash - 0x5548B6E4 ^0x2EC791FB
{
	if (Global_1310720.f_13 && Global_1310720.f_15 < 2)
		Global_1310720.f_15 = 2;

	switch (Global_1310720.f_15)
	{
		case 1:
			return 0.05f;
	
		case 2:
			return 0.07f;
	
		case 3:
			return 0.1f;
	
		case 4:
			return 0.13f;
	
		case 5:
			return 0.15f;
	
		default:
		
	}

	return 0.2f;
}

void func_56(float fParam0, int iParam1, int iParam2) // Position - 0x2A3B Hash - 0xD5BD583E ^0x179873EE
{
	int cashBalance;
	int num;

	cashBalance = MONEY::_MONEY_GET_CASH_BALANCE();

	if (cashBalance < iParam2)
		return;

	num = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(cashBalance) * fParam0);

	if (num > iParam1)
		num = iParam1;

	if (num > 0)
	{
		func_161(num);
		func_162(num, 0, 0);
	}

	return;
}

int func_57(int iParam0) // Position - 0x2A81 Hash - 0x32B4F30A ^0x2F461876
{
	int num;
	int num2;
	int i;

	func_158(iParam0, &num, &num2);

	if (!func_163(iParam0, 65536) && !func_163(iParam0, 32768))
	{
		if (func_164(num, num2))
			return 1;
	
		return 0;
	}

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
			return Global_40.f_7756[i /*3*/].f_1;
	}

	return 0;
}

BOOL func_58(int iParam0) // Position - 0x2AFC Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_165(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_59(int iParam0, int iParam1) // Position - 0x2B5B Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_60() // Position - 0x2B70 Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

void func_61(int iParam0, int iParam1) // Position - 0x2B80 Hash - 0x68D0E8AD ^0xA8E3364A
{
	eStackSize stackSize;

	if (iParam0 == -1)
		return;

	stackSize = func_166();
	func_167(&stackSize, 0, iParam1, 0, 0, 0, 0, false);
	Global_1327590.f_19622[iParam0 /*14*/].f_9 = stackSize;
	return;
}

void func_62() // Position - 0x2BB4 Hash - 0x7E51DF37 ^0x4333E862
{
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_32.f_98, false, true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	uLocal_32.f_93 = 0;
	return;
}

BOOL func_63(var uParam0) // Position - 0x2BF3 Hash - 0x1F3134DA ^0x6823BEBB
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, true), func_64(uParam0, true, uParam0->f_25), 1))
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(uParam0, true), func_64(uParam0, true, uParam0->f_25)) > 0.95f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -1120007597))
			return true;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, func_48(uParam0, true), func_50(uParam0, true), 1))
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, func_48(uParam0, true), func_50(uParam0, true)) > 0.95f)
			return true;

	return false;
}

const char* func_64(var uParam0, BOOL bParam1, int iParam2) // Position - 0x2C8D Hash - 0x3EA9C319 ^0x1119AFBD
{
	var unk;

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "arthur_", 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk, "horse_", 64);

	TEXT_LABEL_APPEND_STRING(&unk, uParam0->f_19[iParam2], 64);
	return func_156(unk);
}

Vector3 func_65(var uParam0) // Position - 0x2CC2 Hash - 0x3857459F ^0x962D1157
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "RESPAWN_IDLE_", 24);
	TEXT_LABEL_APPEND_INT(&unk, MISC::GET_RANDOM_INT_IN_RANGE(1, uParam0->f_52 + 1), 24);
	return unk;
}

char* func_66(var uParam0, BOOL bParam1) // Position - 0x2CE5 Hash - 0xFE74B0DF ^0xDCE3EA2F
{
	var unk;

	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(&unk, "arthur_", 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk, "horse_", 64);

	TEXT_LABEL_APPEND_STRING(&unk, uParam0->f_18, 64);
	return func_156(unk);
}

void func_67(var uParam0, BOOL bParam1) // Position - 0x2D16 Hash - 0x5429B31A ^0x9C08821E
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}

	CAM::_0x3C486E334520579D();

	if (bParam1)
		CAM::_0x06557F6D96C86881();

	return;
}

BOOL func_68(BOOL bParam0, float fParam1) // Position - 0x2D49 Hash - 0xC11FAB1A ^0xB407801A
{
	if (bLocal_151)
	{
		if (uLocal_32.f_54)
			if (!uLocal_32.f_95 && fParam1 < 0.985f)
				return false;
	
		return bParam0;
	}

	if (fParam1 > 0.985f || uLocal_32.f_59)
		return true;

	return uLocal_32.f_95 && bParam0;
}

void func_69(var uParam0) // Position - 0x2D9F Hash - 0x1C65AC35 ^0x75289627
{
	CAM::_0x0961B089947BA6D0(uParam0->f_8);
	CAM::SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(uParam0->f_9, uParam0->f_10);
	CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(uParam0->f_11, uParam0->f_12);
	return;
}

int func_70() // Position - 0x2DC7 Hash - 0x4228A1C2 ^0xB47FB21D
{
	return Global_1897952.f_41;
}

void func_71(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2DD5 Hash - 0x2EAA804C ^0x50C02423
{
	int num;

	num = iParam0 * 1000;

	if (num + MISC::GET_GAME_TIMER() > Global_1327479.f_4)
	{
		func_168(iParam0, iParam1, bParam2);
	}
	else
	{
		num = num / 2;
	
		if (num + MISC::GET_GAME_TIMER() > Global_1327479.f_5)
			Global_1327479.f_5 = MISC::GET_GAME_TIMER() + num;
	}

	return;
}

void func_72(Ped pedParam0, Hash hParam1) // Position - 0x2E24 Hash - 0xC62C58A4 ^0x4458934A
{
	Hash playerType;

	playerType = func_169(hParam1);
	PED::_SET_PED_ACTIVE_PLAYER_TYPE(pedParam0, playerType);
	func_170();
	return;
}

void func_73() // Position - 0x2E40 Hash - 0x86F27B71 ^0x16633782
{
	eStackSize stackSize;
	int num;
	Hash hash;
	Volume volume;

	stackSize = func_146(Global_36, true);
	num = func_70();
	hash = func_171();

	if (func_172(stackSize) && 32 != stackSize)
	{
		volume = Global_1888801[stackSize /*35*/].f_4;
	
		if (VOLUME::DOES_VOLUME_EXIST(volume) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volume, false, 0))
			func_174(stackSize, num, hash, func_173(0), -1, true);
		else
			func_174(-1, num, hash, func_173(0), -1, true);
	}
	else
	{
		func_174(stackSize, num, hash, func_173(0), -1, true);
	}

	return;
}

void func_74(int iParam0) // Position - 0x2ED0 Hash - 0x107F0910 ^0x107F0910
{
	Global_40.f_9422[iParam0 /*7*/] = func_175();
	return;
}

void func_75() // Position - 0x2EE6 Hash - 0x31885132 ^0xE1BFCA93
{
	func_59(&Global_1935630, 4096);
	func_176();
	func_97(0, false);
	func_177();
	func_178(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_179(0);
	Global_1310720.f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720.f_4 = 0;
	Global_1310720.f_6 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_8 = 1;
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
	func_180(0);
	func_181(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_182(true);
	func_183(false);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");

	return;
}

void func_76(int iParam0) // Position - 0x2FE9 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1900383.f_316 = Global_1900383.f_316 - Global_1900383.f_316 && iParam0;
	return;
}

void func_77(Hash hParam0, BOOL bParam1) // Position - 0x300A Hash - 0x87EB26BF ^0x55136C8F
{
	int outData;
	var outData2;
	int i;
	float health;
	float deadeye;
	float stamina;
	float num;
	float num2;
	float num3;
	float num4;
	BOOL flag;
	var unk28;
	var unk29;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	outData.f_1 = 20;

	if (func_184(hParam0, 1573112293) || func_184(hParam0, 672467738) || func_184(hParam0, -550842268))
		flag = true;

	if (func_185(hParam0) == joaat("consumable"))
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(hParam0, &outData);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	
		for (i = 0; i < outData; i = i + 1)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(outData.f_1[i], &outData2))
			{
			}
			else if (-943921969 == outData2.f_1)
			{
				health = func_186(0, outData2.f_2);
				func_97(outData2.f_2, true);
				func_187(0, 7000);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_186(2, outData2.f_2);
				func_188(outData2.f_2);
				func_187(2, 7000);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_186(1, outData2.f_2);
				func_189(outData2.f_2);
				func_187(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_190(outData2.f_2, outData2.f_5);
			
				if (func_191(&unk28, &unk29, num))
				{
					func_192(num, true, flag, bParam1);
					func_187(0, 7000);
				}
			
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_190(outData2.f_2, outData2.f_5);
			
				if (func_191(&unk28, &unk29, num2))
				{
					func_193(num2, true, flag, bParam1);
					func_187(2, 7000);
				}
			
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_190(outData2.f_2, outData2.f_5);
			
				if (func_191(&unk28, &unk29, num3))
				{
					func_194(num3, true, flag, bParam1);
					func_187(1, 7000);
				}
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_195(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_196(19, num4);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_195(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_196(20, num4);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_195(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_196(18, num4);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_195(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_196(0, num4);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_195(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_196(2, num4);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_195(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_196(1, num4);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_197(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3)
			if (num > 0f || health > 0f)
				flag4 = true;
	
		if (flag4 || func_184(hParam0, -537818634))
			func_199(func_198(joaat("medicine_items_used")), 1);
	
		if (func_184(hParam0, -1457797660))
			func_199(func_198(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_199(func_198(joaat("DEADEYE_ITEMS_USED")), 1);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

void func_78(BOOL bParam0, int iParam1) // Position - 0x337A Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_200(&Global_0, 8);

	if (!func_124() || func_201() != -1)
		return;

	func_200(&Global_0, 1);
	return;
}

void func_79(int iParam0) // Position - 0x33C0 Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1310750.f_16035 = Global_1310750.f_16035 - Global_1310750.f_16035 && iParam0;
	return;
}

void func_80(int iParam0) // Position - 0x33E1 Hash - 0xDD4F2B2E ^0x9E400283
{
	Global_1572864.f_3 = Global_1572864.f_3 - Global_1572864.f_3 && iParam0;
	return;
}

void func_81() // Position - 0x33FF Hash - 0x80D0D9C6 ^0xB401C90B
{
	if (Global_1572887.f_12 != -1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_arrow_confusion"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_arrow_disorient"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_arrow_drain"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_arrow_trail"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_arrow_wound"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_throwing_knives_confuse"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_throwing_knives_disorient"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_throwing_knives_drain"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_throwing_knives_trail"));
	WEAPON::_DISABLE_AMMO_TYPE_FOR_PED(Global_35, joaat("ammo_throwing_knives_wound"));
	return;
}

BOOL func_82(int iParam0, var uParam1) // Position - 0x3499 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_202(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

Vector3 func_83(var uParam0) // Position - 0x34C6 Hash - 0x7D351237 ^0x40D76552
{
	var unk;
	var unk6;

	if (!func_82(15, &unk))
		return 0f, 0f, 0f;

	unk.f_3 = uParam0;
	unk.f_2 = -786414325;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk6, &unk);
	unk.f_2 = -1756016266;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(unk6.f_1), &unk);
	unk.f_2 = -1264284652;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(unk6.f_2), &unk);
	return unk6;
}

void func_84(int iParam0, int iParam1) // Position - 0x3524 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_85() // Position - 0x3535 Hash - 0xA3511841 ^0xD7708CE1
{
	int i;

	for (i = 0; i < 955; i = i + 1)
	{
		if (func_203(i, 2097152))
			func_204(i);
	}

	return;
}

void func_86(BOOL bParam0) // Position - 0x3565 Hash - 0x9114E741 ^0x8984E174
{
	if (func_201() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_54(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_54(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_205(1, bParam0, true);
	func_206();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

BOOL func_87(int iParam0) // Position - 0x35D3 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

void func_88() // Position - 0x35E7 Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_207(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_208(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_89(int iParam0) // Position - 0x365A Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1310750.f_16035 = Global_1310750.f_16035 || iParam0;
	return;
}

void func_90(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3673 Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_209() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_207(num) && !func_210(num, iParam2) && !bParam3 || !func_211(num) && !bParam4 || !func_212(num))
			if (num != iParam0)
				func_213(i);
	}

	return;
}

void func_91() // Position - 0x3701 Hash - 0x975142F2 ^0x77EE5EFF
{
	int i;

	VOLUME::_0x748C5F51A18CB8F0(false);

	for (i = 0; i < 6; i = i + 1)
	{
		if (func_214(i))
			func_215(i);
	}

	VOLUME::_0x748C5F51A18CB8F0(true);
	return;
}

void func_92() // Position - 0x3734 Hash - 0x187EABC6 ^0x848C91B1
{
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 1);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 2);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 18);
	ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 20);
	return;
}

void func_93(int iParam0) // Position - 0x376F Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

void func_94() // Position - 0x3788 Hash - 0xAF6943D5 ^0x75E76EF6
{
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(0), func_218(BUILTIN::ROUND(func_217(0))));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(2), func_218(BUILTIN::ROUND(func_217(2))));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(1), func_218(BUILTIN::ROUND(func_217(1))));
	return;
}

void func_95(BOOL bParam0, BOOL bParam1) // Position - 0x37DB Hash - 0x26C4C089 ^0x53EE9A65
{
	int ammoInPedWeapon;
	int weaponClipSize;
	int i;
	Hash weaponHash;
	int attachPoint;

	for (i = 0; i < 29; i = i + 1)
	{
		attachPoint = i;
	
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, attachPoint, true))
		{
			if (func_152(weaponHash) && WEAPON::IS_WEAPON_A_GUN(weaponHash))
			{
				if (bParam0)
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, weaponHash) < WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4)
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(weaponHash), (WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4) - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, weaponHash)), 752097756);
			
				ammoInPedWeapon = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, weaponHash);
			
				if (ammoInPedWeapon > WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash))
					weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash);
				else
					weaponClipSize = ammoInPedWeapon;
			
				if (weaponClipSize > 0)
					WEAPON::SET_AMMO_IN_CLIP(Global_35, weaponHash, weaponClipSize);
			
				weaponClipSize = 0;
				ammoInPedWeapon = 0;
			}
		}
	}

	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
		func_188(1);

	return;
}

void func_96(float fParam0) // Position - 0x38B8 Hash - 0xF70C5319 ^0xF70C5319
{
	if (func_217(1) < fParam0)
		func_219(1, fParam0, false);

	if (func_217(2) < fParam0)
		func_219(2, fParam0, false);

	if (func_217(0) < fParam0)
		func_219(0, fParam0, false);

	return;
}

void func_97(int iParam0, BOOL bParam1) // Position - 0x38F9 Hash - 0x9D46840B ^0xDAAD5146
{
	int value;
	int healthAmount;

	value = 50 * iParam0;
	healthAmount = value + ENTITY::GET_ENTITY_HEALTH(Global_35);

	if (bParam1 && value < 0)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(value), 0, 0);
	else if (iParam0 <= 0 || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_98(int iParam0, int iParam1) // Position - 0x396A Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_99(int iParam0) // Position - 0x398E Hash - 0xF6DB87B5 ^0xF6DB87B5
{
	func_220(true);
	return;
}

void func_100(int iParam0) // Position - 0x399B Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_221(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_222(true);

	return;
}

int func_101() // Position - 0x3A09 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1572864;
}

int func_102() // Position - 0x3A15 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1572864.f_1;
}

BOOL func_103(int iParam0) // Position - 0x3A23 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_104(int iParam0) // Position - 0x3A56 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_105(int iParam0) // Position - 0x3A69 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return iParam0 != 0;
}

const char* func_106(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x3A75 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_107(int iParam0) // Position - 0x3A89 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x3A92 Hash - 0xA17D549C ^0xD6343C76
{
	switch (iParam0)
	{
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@crouch_smoke_end@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@CROUCH_SMOKE_END@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@stand_lean_back_flask@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@STAND_LEAN_BACK_FLASK@A";
	
		case joaat("script_respawn@one_shot@upperbody@hot@longarm_lhand@wipe_brow@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@A";
	
		case joaat("script_respawn@one_shot@upperbody@spit@c"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@C";
	
		case joaat("script_respawn@one_shot@upperbody@hot@hat_rhand@wipe_brow@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@B";
	
		case joaat("saddle_lean_fwd_exit_leg_stretch"):
			return "SADDLE_LEAN_FWD_EXIT_LEG_STRETCH";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@front"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@FRONT";
	
		case joaat("saddle_lean_fwd_petwhispers_rt"):
			return "SADDLE_LEAN_FWD_PETWHISPERS_RT";
	
		case joaat("script_respawn@one_shot@upperbody@flies@longarm_lhand@swat_flies@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_rhand@crouch_admire_view@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@longarm_lhand@crouch_stream_drink@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@LONGARM_LHAND@CROUCH_STREAM_DRINK@A";
	
		case joaat("script_respawn@one_shot@upperbody@spit@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@B";
	
		case joaat("saddle_lean_fwd_looking_idle"):
			return "SADDLE_LEAN_FWD_LOOKING_IDLE";
	
		case joaat("script_respawn@one_shot@upperbody@hot@hat_rhand@wipe_brow@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_RHAND@WIPE_BROW@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_adjust_belt@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@B";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed_hat@sit_wake_up@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@lean_left_arms_crossed@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@lean_left_arms_crossed@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_adjust_belt@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@sit_lean_forwards@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@right"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_drink@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_DRINK@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_2hand@crouch_admire_view@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
	
		case joaat("script_respawn@one_shot@upperbody@hot@longarm_lhand@wipe_brow@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@LONGARM_LHAND@WIPE_BROW@B";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_adjust_belt@c"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_ADJUST_BELT@C";
	
		case joaat("script_respawn@horse@mounted_unarmed"):
			return "SCRIPT_RESPAWN@HORSE@MOUNTED_UNARMED";
	
		case joaat("script_respawn@one_shot@upperbody@flies@unarmed@swat_flies@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@crouch_admire_view@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_boot_clean@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@UNARMED@STAND_BOOT_CLEAN@A";
	
		case joaat("script_respawn@one_shot@upperbody@spit@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPIT@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@sit_lean_forwards@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
	
		case joaat("script_respawn@one_shot@upperbody@flies@unarmed@swat_flies@c"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@C";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@stand_adjust_belt@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@crack_neck@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@A";
	
		case joaat("script_respawn@one_shot@upperbody@hot@hat_lhand@wipe_brow@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@HOT@HAT_LHAND@WIPE_BROW@A";
	
		case joaat("script_respawn@one_shot@upperbody@flies@unarmed@swat_flies@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@UNARMED@SWAT_FLIES@B";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_rhand@crouch_admire_view@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@crack_neck@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@crouch_admire_view@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@CROUCH_ADMIRE_VIEW@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@stand_boot_clean@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_BOOT_CLEAN@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@crack_neck@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CRACK_NECK@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing@left"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@LEFT";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@c"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@C";
	
		case joaat("saddle_lean_fwd_spitwipe_lt"):
			return "SADDLE_LEAN_FWD_SPITWIPE_LT";
	
		case joaat("saddle_lean_fwd_exit_adjust"):
			return "SADDLE_LEAN_FWD_EXIT_ADJUST";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@crouch_smoke_end@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@B";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_rhand@stand_adjust_belt@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_RHAND@STAND_ADJUST_BELT@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_2hand@crouch_admire_view@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
	
		case joaat("saddle_lean_fwd_petwhispers_lt"):
			return "SADDLE_LEAN_FWD_PETWHISPERS_LT";
	
		case joaat("script_respawn@one_shot@upperbody@flies@longarm_lhand@swat_flies@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@FLIES@LONGARM_LHAND@SWAT_FLIES@B";
	
		case joaat("saddle_lean_fwd_flyswat1"):
			return "SADDLE_LEAN_FWD_FLYSWAT1";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing@front"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@FRONT";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@lean_left_arms_crossed@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@stand_lean_back_flask@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@STAND_LEAN_BACK_FLASK@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@sit_lean_forwards@a"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@crouch_smoke_end@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@CROUCH_SMOKE_END@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@lean_left_arms_crossed@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@LONGARM_LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@sit_lean_forwards@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@close_journal@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@A";
	
		case joaat("script_respawn@one_shot@upperbody@spitlongarm_lhand@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@A";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@a"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing@right"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@SITTING_JOURNAL_WRITING@RIGHT";
	
		case joaat("script_respawn@one_shot@upperbody@spitlongarm_lhand@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@B";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@B";
	
		case joaat("script_respawn@one_shot@upperbody@spitlongarm_lhand@c"):
			return "SCRIPT_RESPAWN@ONE_SHOT@UPPERBODY@SPITLONGARM_LHAND@C";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed_hat@sit_wake_up@a@idles"):
			return "SCRIPT_RESPAWN@LOOPING@HYBRID@GENERIC@UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@c"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@NEAR_WATER@UNARMED@CROUCH_STREAM_WASH@C";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@close_journal@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@CLOSE_JOURNAL@B";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@stand_adjust_belt@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@FULLBODY@GENERIC@LONGARM_LHAND@STAND_ADJUST_BELT@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@crack_neck@b"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@LONGARM_LHAND@CRACK_NECK@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@left"):
			return "SCRIPT_RESPAWN@ONE_SHOT@HYBRID@GENERIC@UNARMED@SITTING_JOURNAL_WRITING@LEFT";
	
		default:
		
	}

	return "";
}

char* func_109(int iParam0) // Position - 0x3E68 Hash - 0x899A1C9C ^0x899A1C9C
{
	switch (iParam0)
	{
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@crouch_smoke_end@a"):
			return "UNARMED@CROUCH_SMOKE_END@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@stand_lean_back_flask@a"):
			return "UNARMED@STAND_LEAN_BACK_FLASK@A";
	
		case joaat("script_respawn@one_shot@upperbody@hot@longarm_lhand@wipe_brow@a"):
			return "LHAND@WIPE_BROW@A";
	
		case joaat("script_respawn@one_shot@upperbody@spit@c"):
			return "UNARMED@SPIT@C";
	
		case joaat("script_respawn@one_shot@upperbody@hot@hat_rhand@wipe_brow@b"):
			return "RHAND@WIPE_BROW@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@front"):
			return "UNARMED@SITTING_JOURNAL_WRITING@FRONT";
	
		case joaat("script_respawn@one_shot@upperbody@flies@longarm_lhand@swat_flies@a"):
			return "LHAND@SWAT_FLIES@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_rhand@crouch_admire_view@a@idles"):
			return "RHAND@CROUCH_ADMIRE_VIEW@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@longarm_lhand@crouch_stream_drink@a"):
			return "LHAND@CROUCH_STREAM_DRINK@A";
	
		case joaat("script_respawn@one_shot@upperbody@spit@b"):
			return "UNARMED@SPIT@B";
	
		case joaat("script_respawn@one_shot@upperbody@hot@hat_rhand@wipe_brow@a"):
			return "RHAND@WIPE_BROW@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_adjust_belt@b"):
			return "UNARMED@STAND_ADJUST_BELT@B";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed_hat@sit_wake_up@a"):
			return "UNARMED_HAT@SIT_WAKE_UP@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@lean_left_arms_crossed@a"):
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@lean_left_arms_crossed@a"):
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_adjust_belt@a"):
			return "UNARMED@STAND_ADJUST_BELT@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@sit_lean_forwards@a@idles"):
			return "LHAND@SIT_LEAN_FORWARDS@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@right"):
			return "UNARMED@SITTING_JOURNAL_WRITING@RIGHT";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_drink@a"):
			return "UNARMED@CROUCH_STREAM_DRINK@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_2hand@crouch_admire_view@a@idles"):
			return "2HAND@CROUCH_ADMIRE_VIEW@A@IDLES";
	
		case joaat("script_respawn@one_shot@upperbody@hot@longarm_lhand@wipe_brow@b"):
			return "LHAND@WIPE_BROW@B";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_adjust_belt@c"):
			return "UNARMED@STAND_ADJUST_BELT@C";
	
		case joaat("script_respawn@horse@mounted_unarmed"):
			return "HORSE@MOUNTED_UNARMED";
	
		case joaat("script_respawn@one_shot@upperbody@flies@unarmed@swat_flies@a"):
			return "UNARMED@SWAT_FLIES@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@crouch_admire_view@a@idles"):
			return "UNARMED@CROUCH_ADMIRE_VIEW@A@IDLES";
	
		case joaat("script_respawn@one_shot@fullbody@generic@unarmed@stand_boot_clean@a"):
			return "UNARMED@STAND_BOOT_CLEAN@A";
	
		case joaat("script_respawn@one_shot@upperbody@spit@a"):
			return "UNARMED@SPIT@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@sit_lean_forwards@a"):
			return "LONGARM_LHAND@SIT_LEAN_FORWARDS@A";
	
		case joaat("script_respawn@one_shot@upperbody@flies@unarmed@swat_flies@c"):
			return "UNARMED@SWAT_FLIES@C";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@stand_adjust_belt@a"):
			return "LHAND@STAND_ADJUST_BELT@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@a"):
			return "UNARMED@SITTING_JOURNAL_WRITING@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@crack_neck@a"):
			return "UNARMED@CRACK_NECK@A";
	
		case joaat("script_respawn@one_shot@upperbody@hot@hat_lhand@wipe_brow@a"):
			return "LHAND@WIPE_BROW@A";
	
		case joaat("script_respawn@one_shot@upperbody@flies@unarmed@swat_flies@b"):
			return "UNARMED@SWAT_FLIES@B";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_rhand@crouch_admire_view@a"):
			return "LONGARM_RHAND@CROUCH_ADMIRE_VIEW@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@crack_neck@a"):
			return "LHAND@CRACK_NECK@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@crouch_admire_view@a"):
			return "UNARMED@CROUCH_ADMIRE_VIEW@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@stand_boot_clean@a"):
			return "LHAND@STAND_BOOT_CLEAN@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@crack_neck@b"):
			return "UNARMED@CRACK_NECK@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing@left"):
			return "LHAND@SITTING_JOURNAL_WRITING@LEFT";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing"):
			return "LHAND@SITTING_JOURNAL_WRITING";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@c"):
			return "UNARMED@SITTING_JOURNAL_WRITING@C";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@crouch_smoke_end@b"):
			return "LHAND@CROUCH_SMOKE_END@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@b"):
			return "UNARMED@SITTING_JOURNAL_WRITING@B";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_rhand@stand_adjust_belt@a"):
			return "RHAND@STAND_ADJUST_BELT@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_2hand@crouch_admire_view@a"):
			return "LONGARM_2HAND@CROUCH_ADMIRE_VIEW@A";
	
		case joaat("script_respawn@one_shot@upperbody@flies@longarm_lhand@swat_flies@b"):
			return "LHAND@SWAT_FLIES@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing@front"):
			return "LHAND@SITTING_JOURNAL_WRITING@FRONT";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@lean_left_arms_crossed@a@idles"):
			return "UNARMED@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@stand_lean_back_flask@a"):
			return "LHAND@STAND_LEAN_BACK_FLASK@A";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@sit_lean_forwards@a"):
			return "UNARMED@SIT_LEAN_FORWARDS@A";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@crouch_smoke_end@a"):
			return "LHAND@CROUCH_SMOKE_END@A";
	
		case joaat("script_respawn@looping@hybrid@generic@longarm_lhand@lean_left_arms_crossed@a@idles"):
			return "LHAND@LEAN_LEFT_ARMS_CROSSED@A@IDLES";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed@sit_lean_forwards@a@idles"):
			return "UNARMED@SIT_LEAN_FORWARDS@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@close_journal@a"):
			return "UNARMED@CLOSE_JOURNAL@A";
	
		case joaat("script_respawn@one_shot@upperbody@spitlongarm_lhand@a"):
			return "LHAND@SPIT@A";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@a"):
			return "UNARMED@CROUCH_STREAM_WASH@A";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@sitting_journal_writing@right"):
			return "LHAND@SITTING_JOURNAL_WRITING@RIGHT";
	
		case joaat("script_respawn@one_shot@upperbody@spitlongarm_lhand@b"):
			return "LHAND@SPIT@B";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@b"):
			return "UNARMED@CROUCH_STREAM_WASH@B";
	
		case joaat("script_respawn@one_shot@upperbody@spitlongarm_lhand@c"):
			return "LHAND@SPIT@C";
	
		case joaat("script_respawn@looping@hybrid@generic@unarmed_hat@sit_wake_up@a@idles"):
			return "UNARMED_HAT@SIT_WAKE_UP@A@IDLES";
	
		case joaat("script_respawn@one_shot@hybrid@near_water@unarmed@crouch_stream_wash@c"):
			return "UNARMED@CROUCH_STREAM_WASH@C";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@close_journal@b"):
			return "UNARMED@CLOSE_JOURNAL@B";
	
		case joaat("script_respawn@one_shot@fullbody@generic@longarm_lhand@stand_adjust_belt@b"):
			return "LHAND@STAND_ADJUST_BELT@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@longarm_lhand@crack_neck@b"):
			return "LHAND@CRACK_NECK@B";
	
		case joaat("script_respawn@one_shot@hybrid@generic@unarmed@sitting_journal_writing@left"):
			return "UNARMED@SITTING_JOURNAL_WRITING@LEFT";
	
		default:
		
	}

	return "";
}

void func_110(Any* panParam0, int iParam1) // Position - 0x4374 Hash - 0xA8BD9630 ^0x70C6B1AE
{
	int num;
	Any any;
	var unk5;
	int num2;

	func_82(15, &any);
	any.f_2 = -1374679209;
	any.f_3 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
	{
		any.f_2 = 805008619;
		any.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1));
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &any);
		panParam0->f_17 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num);
	}

	any = { unk5 };
	func_82(15, &any);
	any.f_2 = 669343399;
	any.f_3 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
	{
		any.f_2 = 1312010450;
		any.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1));
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &any);
		panParam0->f_18 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num);
	}

	any = { unk5 };
	func_82(15, &any);
	any.f_2 = 908023140;
	any.f_3 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
	{
		while (num2 < DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1))
		{
			any.f_2 = -1100654060;
			any.f_3 = num2;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &any);
			panParam0->f_19[num2] = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(num);
			num2 = num2 + 1;
		}
	
		panParam0->f_52 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
		panParam0->f_25 = panParam0->f_52 - 1;
	}

	return;
}

void func_111(Any* panParam0, var uParam1, Hash hParam2) // Position - 0x44AF Hash - 0xBCE728F6 ^0xB9AC710
{
	var unk;
	int num;

	func_82(15, &unk);
	unk.f_2 = -1571721931;
	unk.f_3 = uParam1;
	unk.f_4 = hParam2;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -495185473;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(panParam0->f_30), &unk);
		unk.f_2 = -1276360309;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(panParam0->f_33), &unk);
		unk.f_2 = 1081618208;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(panParam0->f_39.f_1), &unk);
		unk.f_2 = -1993680615;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(panParam0->f_39.f_4), &unk);
		unk.f_2 = 151706215;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(panParam0->f_39.f_7), &unk);
		unk.f_2 = 1075437165;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&(panParam0->f_34), &unk);
		unk.f_2 = 482880665;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&(panParam0->f_37), &unk);
		unk.f_2 = 1818584824;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_38), &unk);
		unk.f_2 = -2069884107;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	
		if (num == joaat("WEATHER_INVALID") || num == 0)
			panParam0->f_73 = 0;
		else
			panParam0->f_73 = num;
	
		unk.f_2 = 2009151738;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(panParam0->f_74), &unk);
		unk.f_2 = -1565059035;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(panParam0->f_75), &unk);
		unk.f_2 = 1786497406;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&(panParam0->f_96), &unk);
		unk.f_2 = -182204340;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(panParam0->f_76), &unk);
		unk.f_2 = -2016118713;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(panParam0->f_84), &unk);
	}

	return;
}

var func_112(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4624 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Vector3 func_113(float fParam0, float fParam1, float fParam2) // Position - 0x463B Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

int func_114(Hash hParam0) // Position - 0x467A Hash - 0x50573299 ^0x50573299
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

void func_115() // Position - 0x4734 Hash - 0x24E4E427 ^0xA289DDA
{
	int i;

	for (i = 0; i < Global_1393237.f_11; i = i + 1)
	{
		func_223(i);
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x4759 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_117(int iParam0) // Position - 0x4783 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_118(var uParam0) // Position - 0x479C Hash - 0x17EE2E94 ^0xFC3E827
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, false)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, false));
	
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, false)))
			return false;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_48(uParam0, true)))
	{
		STREAMING::REQUEST_ANIM_DICT(func_48(uParam0, true));
	
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_48(uParam0, true)))
			return false;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_13))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_13);
	
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_13))
			return false;
	}

	return true;
}

BOOL func_119() // Position - 0x4823 Hash - 0x7EBB9272 ^0xB2C83C0B
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk;
	var unk4;
	var unk5;
	var unk8;
	var unk9;
	int num;
	int num2;
	int num3;
	BOOL flag4;
	Vector3 offsetFromCoordAndHeadingInWorldCoords;
	float num4;
	var unk24;
	float num5;
	Vector3 vector;
	eStackSize i;
	float num6;
	eStackSize stackSize;
	Vector3 vector2;
	var unk31;
	var unk34;
	var unk35;
	int num7;
	int num8;

	if (_IS_NULL_VECTOR(uLocal_32.f_34))
		return true;

	if (!func_224(&flag, &flag2))
		if (func_225())
			flag = true;
		else
			return true;

	flag3 = false;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_32.f_98))
		flag3 = true;

	if (!flag3 && flag)
	{
		unk = { uLocal_32.f_34 };
		unk4 = uLocal_32.f_37;
	
		if (func_226(0))
		{
			unk5 = { uLocal_32.f_100 };
			unk8 = uLocal_32.f_103;
		
			if (!_IS_NULL_VECTOR(unk5))
			{
				unk = { unk5 };
				unk4 = unk8;
			}
		}
	
		unk9 = { unk };
		!func_121(&unk9, 50, 10, false);
	
		if (unk9.f_2 - 0.5f < unk.f_2 && unk9.f_2 + 6f > unk.f_2)
			unk = { unk9 };
	
		num = 0;
	
		if (func_227() == 0)
			num = 1;
	
		num3.f_10 = 7;
		num3.f_10 = 0;
		num3 = 1;
		num3.f_2 = 1;
		num3.f_4 = num;
		num3.f_5 = 1;
		num3.f_6 = { unk };
		num3.f_9 = unk4;
		uLocal_32.f_98 = func_228(&num2, &num3);
	
		if (num2 == 2 && ENTITY::DOES_ENTITY_EXIST(uLocal_32.f_98))
			flag3 = true;
		else if (num2 == 1)
			flag3 = true;
	}
	else
	{
		flag3 = true;
	}

	flag4 = false;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_32.f_99))
		flag4 = true;

	if (!flag4 && flag2)
	{
		offsetFromCoordAndHeadingInWorldCoords = { uLocal_32.f_34 };
		num4 = uLocal_32.f_37;
	
		if (flag)
		{
			unk24 = { uLocal_32.f_104 };
			num5 = uLocal_32.f_107;
		
			if (!_IS_NULL_VECTOR(unk24))
			{
				offsetFromCoordAndHeadingInWorldCoords = { unk24 };
				num4 = num5;
			
				for (i = 0; i < 9; i = i + 1)
				{
					stackSize = -1;
				
					if (i == func_229())
						stackSize = func_230();
				
					if (stackSize != -1 && func_231(i, stackSize))
					{
						vector = { func_232(i) };
					
						if (!_IS_NULL_VECTOR(vector))
						{
							num6 = BUILTIN::VDIST2(vector, offsetFromCoordAndHeadingInWorldCoords);
						
							if (num6 <= 100f)
							{
								offsetFromCoordAndHeadingInWorldCoords = { func_233(i, -1) };
								num4 = func_234(i);
							}
						}
					}
				}
			}
			else
			{
				vector2 = { -2f, -2f, 0f };
				offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(offsetFromCoordAndHeadingInWorldCoords, 0f, vector2) };
			}
		}
	
		if (func_226(1))
		{
			func_23(1, &unk31, &unk34);
		
			if (!_IS_NULL_VECTOR(unk31))
			{
				offsetFromCoordAndHeadingInWorldCoords = { unk31 };
				num4 = num4;
			}
		}
	
		unk35 = { offsetFromCoordAndHeadingInWorldCoords };
		!func_121(&unk35, 50, 10, false);
	
		if (unk35.f_2 - 0.5f < offsetFromCoordAndHeadingInWorldCoords.f_2 && unk35.f_2 + 6f > offsetFromCoordAndHeadingInWorldCoords.f_2)
			offsetFromCoordAndHeadingInWorldCoords = { unk35 };
	
		num8.f_10 = 7;
		num8.f_10 = 1;
		num8 = 1;
		num8.f_2 = 1;
		num8.f_5 = 1;
		num8.f_6 = { offsetFromCoordAndHeadingInWorldCoords };
		num8.f_9 = num4;
		uLocal_32.f_99 = func_228(&num7, &num8);
	
		if (!flag)
			uLocal_32.f_98 = uLocal_32.f_99;
	
		if (num7 == 2 && ENTITY::DOES_ENTITY_EXIST(uLocal_32.f_99))
			flag4 = true;
		else
			num7 == 1;
	}
	else
	{
		flag4 = true;
	}

	if (flag3 && flag4)
		return true;

	return false;
}

const char* func_120(int iParam0) // Position - 0x4B4A Hash - 0xFCA05E3D ^0xD99A6F88
{
	int num;
	var unk;

	num = func_44();
	TEXT_LABEL_ASSIGN_STRING(&unk, "script@respawn@sky@SkyTL_", 64);

	if (iParam0 >= 23 || iParam0 < 1)
		TEXT_LABEL_APPEND_STRING(&unk, "0000", 64);
	else if (iParam0 >= 20)
		TEXT_LABEL_APPEND_STRING(&unk, "2100", 64);
	else if (iParam0 >= 17)
		TEXT_LABEL_APPEND_STRING(&unk, "1800", 64);
	else if (iParam0 >= 14)
		TEXT_LABEL_APPEND_STRING(&unk, "1500", 64);
	else if (iParam0 >= 11)
		TEXT_LABEL_APPEND_STRING(&unk, "1200", 64);
	else if (iParam0 >= 8)
		TEXT_LABEL_APPEND_STRING(&unk, "0900", 64);
	else if (iParam0 >= 5)
		TEXT_LABEL_APPEND_STRING(&unk, "0600", 64);
	else
		TEXT_LABEL_APPEND_STRING(&unk, "0300", 64);

	switch (num)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("Fog"):
		case joaat("Shower"):
		case joaat("snow"):
		case joaat("sleet"):
		case joaat("SNOWLIGHT"):
			TEXT_LABEL_APPEND_STRING(&unk, "_03Clouds", 64);
			break;
	
		case joaat("sandstorm"):
		case joaat("overcastdark"):
		case joaat("BLIZZARD"):
		case joaat("whiteout"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
		case joaat("groundblizzard"):
			TEXT_LABEL_APPEND_STRING(&unk, "_04Storm", 64);
			break;
	
		case joaat("highpressure"):
		case joaat("clouds"):
		case joaat("Misty"):
		case joaat("SUNNY"):
		case joaat("snowclearing"):
			TEXT_LABEL_APPEND_STRING(&unk, "_01Clear", 64);
			break;
	
		default:
			break;
	}

	return func_235(unk);
}

BOOL func_121(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4CA9 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_236(*uParam0, 0f, 0f, 0f))
		return true;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return true;
	}

	if (flag && flag2)
		return false;

	uParam0->f_2 = groundZ;
	return true;
}

BOOL func_122() // Position - 0x4DA0 Hash - 0x142FFF47 ^0x91E35315
{
	BOOL num;
	int i;
	int j;

	if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		return true;

	num = 1;

	for (i = 0; i < Global_1898330; i = i + 1)
	{
		if (!func_103(Global_1898330[i]))
		{
		}
		else
		{
			func_237(i, false);
		
			if (func_103(Global_1898330[i]))
			{
				switch (func_238(Global_1898330[i]))
				{
					case 1:
						if (func_239(i, 16) && !func_239(i, 4))
							num = 0;
						break;
				}
			}
		}
	}

	for (j = 0; j < Global_40.f_450; j = j + 1)
	{
		if (func_139(Global_40.f_450[j]))
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[Global_40.f_450[j] /*49*/].f_42, false))
				if (!func_240(Global_1347702[Global_40.f_450[j] /*49*/].f_13, 64))
					num = 0;
	}

	return num;
}

BOOL func_123(BOOL bParam0) // Position - 0x4E97 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_21 && bParam0 != false;
}

BOOL func_124() // Position - 0x4EA7 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_125(Hash hParam0, var uParam1) // Position - 0x4EC6 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_242(func_241(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_243(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

void func_126(BOOL bParam0) // Position - 0x4F3D Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_127(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x4F50 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_244(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_245(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_126(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_244(iParam0))
				return;
		
			func_245(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_126(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_246(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_128(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x515C Hash - 0xCE0148F8 ^0x79CFF653
{
	PersChar persChar;

	if (func_247(iParam0, true, false))
	{
		if (func_248(iParam0))
		{
			persChar = func_249(iParam0, false);
		
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(persChar))
					return false;
			
				if (bParam3 && !PED::IS_PED_READY_TO_RENDER(func_250(iParam0)))
					return false;
			
				if (bParam1 || !func_251(func_250(iParam0), 1116471296, -1082130432, -1082130432, -1082130432) || CAM::IS_SCREEN_FADED_OUT())
				{
					PERSCHAR::_0xD4B614179BCD0654(persChar);
					func_252(iParam0, false);
				
					if (iParam2 && func_253(Global_1360165[iParam0 /*1157*/].f_63))
						func_254(iParam0, 65, false);
				}
				else
				{
					return false;
				}
			}
		}
	}

	return true;
}

int func_129(Any* panParam0, char* sParam1, char* sParam2, int iParam3, BOOL bParam4) // Position - 0x521C Hash - 0x8E4A9690 ^0x23FD6F9E
{
	int num;
	int num2;

	num = iParam3;
	num.f_1 = sParam1;
	num.f_2 = sParam2;
	num2 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(panParam0, &num, bParam4);
	return num2;
}

BOOL func_130(int iParam0) // Position - 0x5242 Hash - 0xED7B1FA3 ^0x96F9ACB3
{
	if (iParam0 == 0)
		return false;

	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

Hash func_131(Hash hParam0) // Position - 0x525C Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_242(func_241(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_132(var uParam0) // Position - 0x528B Hash - 0x313F44CF ^0x6235E18A
{
	if (func_125(81053684, uParam0))
		return true;

	if (func_125(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_133() // Position - 0x52B8 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_2792;
}

BOOL func_134(Hash hParam0) // Position - 0x52C7 Hash - 0x2759F6FA ^0x4BDB091E
{
	if (func_255())
		return false;

	if (!func_256(hParam0, 0))
		return false;

	if (!func_257(hParam0, 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	return true;
}

int func_135(Hash hParam0, Object obParam1) // Position - 0x52FE Hash - 0x4FF8311F ^0x88E4CE75
{
	Hash interactionAnimHash;
	BOOL flag;
	Hash hash;
	BOOL flag2;

	flag2 = func_258(hParam0);

	if (func_184(hParam0, -1303648999))
		flag = true;

	if (flag2)
		if (func_34(&hash))
			if (flag)
				interactionAnimHash = func_259();
			else
				interactionAnimHash = func_260();
		else if (func_261(obParam1, 1))
			interactionAnimHash = 0;
		else if (flag)
			interactionAnimHash = func_262();
		else
			interactionAnimHash = func_263();
	else if (func_132(&hash))
		if (func_184(hash, -1303648999))
			interactionAnimHash = func_259();
		else
			interactionAnimHash = func_260();
	else if (flag)
		interactionAnimHash = func_262();
	else
		interactionAnimHash = func_263();

	if (interactionAnimHash != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_35, hParam0, interactionAnimHash, 1, obParam1, -1082130432);
		return 1;
	}

	return 0;
}

BOOL func_136(eStackSize essParam0) // Position - 0x53D1 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return essParam0 > -1 && essParam0 <= 80;
}

BOOL func_137(eStackSize essParam0) // Position - 0x53E7 Hash - 0x621F6AE0 ^0x751E487E
{
	return Global_1835011[essParam0 /*74*/].f_63 & 64512 != 0;
}

void func_138(eStackSize essParam0, BOOL bParam1) // Position - 0x5400 Hash - 0xF7F9962 ^0x8ACA40E6
{
	BOOL flag;

	if (!func_136(essParam0))
		return;

	if (func_264(&Global_1835011[essParam0 /*74*/], 8192))
		flag = true;

	Global_1835011[essParam0 /*74*/].f_63 = 0;

	if (!bParam1 && flag)
	{
		Global_1835011[essParam0 /*74*/].f_63 = Global_1835011[essParam0 /*74*/].f_63 | 2;
		Global_1835011[essParam0 /*74*/].f_63 = Global_1835011[essParam0 /*74*/].f_63 | 8192;
	}

	return;
}

BOOL func_139(eStackSize essParam0) // Position - 0x5470 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

void func_140(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x5486 Hash - 0x98AF3B21 ^0x82D8CDEA
{
	BOOL flag;

	if (!func_139(essParam0))
		return;

	flag = true;

	if (!bParam1)
		flag = MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37);

	func_265(&(Global_1347702[essParam0 /*49*/].f_14));
	func_266(&(Global_1347702[essParam0 /*49*/].f_12), 16384);
	func_267(&(Global_1347702[essParam0 /*49*/].f_13), 4096);

	if (flag)
	{
		if (Global_1347702[essParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[essParam0 /*49*/].f_13 & 2048 == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[essParam0 /*49*/].f_37));
		
			if (iParam2 == 1)
				func_269(essParam0, func_268(essParam0), false, false);
		}
		else if (Global_1347702[essParam0 /*49*/].f_18 > -1f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[essParam0 /*49*/].f_37));
		
			if (iParam2 == 1)
				func_269(essParam0, func_270(essParam0), false, false);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
		}
	}

	return;
}

int func_141(int iParam0) // Position - 0x5589 Hash - 0x16E6950C ^0x16E6950C
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

int func_142(Ped pedParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x55F5 Hash - 0x32B863AB ^0xCE62541D
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return 0;

	if (PED::GET_MOUNT(pedParam0) != pedParam1)
	{
		PED::SET_PED_ONTO_MOUNT(pedParam0, pedParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(pedParam1, bParam2);
	}

	return 1;
}

int func_143() // Position - 0x563A Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_271();

	if (num <= -320)
		return -320;

	if (num <= -280)
		return -280;

	if (num <= -240)
		return -240;

	if (num <= -200)
		return -200;

	if (num <= -160)
		return -160;

	if (num <= -120)
		return -120;

	if (num <= -80)
		return -80;

	if (num <= -40)
		return -40;

	if (num >= 320)
		return 320;

	if (num >= 280)
		return 280;

	if (num >= 240)
		return 240;

	if (num >= 200)
		return 200;

	if (num >= 160)
		return 160;

	if (num >= 120)
		return 120;

	if (num >= 80)
		return 80;

	if (num >= 40)
		return 40;

	return 0;
}

int func_144(int iParam0) // Position - 0x574D Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case -320:
		case 320:
			return 8;
	
		case -280:
		case 280:
			return 7;
	
		case -240:
		case 240:
			return 6;
	
		case -200:
		case 200:
			return 5;
	
		case -160:
		case 160:
			return 4;
	
		case -120:
		case 120:
			return 3;
	
		case -80:
		case 80:
			return 2;
	
		case -40:
		case 40:
			return 1;
	
		case 0:
			return 0;
	}

	return 0;
}

var func_145(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5804 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

eStackSize func_146(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x581B Hash - 0x25DFFF2C ^0x74CE6365
{
	eStackSize stackSize;

	stackSize = func_272();

	if (func_273(stackSize))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[stackSize /*35*/].f_3, vParam0))
			return stackSize;

	return func_274(vParam0, bParam3);
}

void func_147(BOOL bParam0) // Position - 0x5856 Hash - 0x6FC90683 ^0xF9E36F55
{
	int i;
	Hash weaponHash;

	if (Global_43891)
		return;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = func_275(Global_35, i, false, true);
	
		if (WEAPON::IS_WEAPON_VALID(weaponHash))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_276(weaponHash))
				if (!bParam0 || i != 7 && i != 9)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash);
	}

	return;
}

int func_148(eStackSize essParam0) // Position - 0x58C8 Hash - 0xE4DA9E55 ^0xA7262997
{
	if (!func_273(essParam0))
		return 0;

	return Global_1888801[essParam0 /*35*/].f_20;
}

eStackSize func_149() // Position - 0x58E8 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_150(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x58F8 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

Hash func_151(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x592E Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_152(Hash hParam0) // Position - 0x5970 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_153(Ped pedParam0) // Position - 0x598B Hash - 0xD44AE303 ^0xA29D7F05
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

int func_154(int iParam0, int iParam1) // Position - 0x59D0 Hash - 0xD30D64D ^0xA6080D3D
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/];
}

void func_155(int iParam0, int iParam1, int iParam2) // Position - 0x5A08 Hash - 0x33CA9B4 ^0xE447793A
{
	Ped ped;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	iParam2 = func_277(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	ped = func_278(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped);
	func_279(ped, iParam1, func_154(iParam0, iParam1));
	func_280(ped, iParam1);
	return;
}

const char* func_156(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x5A8D Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_157(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5AA1 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_281())
			return true;
	
		if (Global_1058888.f_3 && !Global_1572887.f_8)
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1898164.f_163;
		else
			return Global_1898164.f_164;
	}

	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		num = func_282(Global_1898164.f_1[0 /*5*/]);
	
		if (func_139(num) && func_283(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_103(Global_1898164.f_1[0 /*5*/]))
		return true;

	if (Global_1935630 && 40959 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1898438)
			return true;

	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
	
		case 1:
			return iParam0 & 1 == 0;
	
		case 2:
			return iParam0 & 16 == 0;
	
		case 3:
			return iParam0 & 128 == 0;
	
		case 4:
			return iParam0 & 2 == 0;
	
		case 5:
			return iParam0 & 32 == 0;
	
		case 6:
			return iParam0 & 4 == 0;
	
		case 8:
			return iParam0 & 8 == 0;
	
		case 9:
			return iParam0 & 64 == 0;
	
		case 10:
			return iParam0 & 512 == 0;
	
		case 11:
			return iParam0 & 256 == 0;
	
		default:
		
	}

	return false;
}

void func_158(int iParam0, var uParam1, var uParam2) // Position - 0x5CA5 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_159(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5CC1 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_164(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_284(iParam0))
		return false;

	if (func_285(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_163(iParam0, 1) || func_104(32768))
		if (!func_163(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_286())
		return false;

	return true;
}

void func_160(int iParam0, int iParam1) // Position - 0x5D63 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

void func_161(int iParam0) // Position - 0x5D87 Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_287(1) < iParam0)
		iParam0 = func_287(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_198(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_162(int iParam0, const char* sParam1, int iParam2) // Position - 0x5DC5 Hash - 0xA31E0DC ^0x4720C744
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_288(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

BOOL func_163(int iParam0, int iParam1) // Position - 0x5E06 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_164(int iParam0, int iParam1) // Position - 0x5E1F Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_201() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_165(int iParam0, BOOL bParam1) // Position - 0x5E52 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_289(iParam0))
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

eStackSize func_166() // Position - 0x5E83 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_167(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x5E8F Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_290(*essParam0);
	i = func_291(*essParam0);
	num2 = func_292(*essParam0);
	j = func_293(*essParam0);
	k = func_294(*essParam0);
	l = func_295(*essParam0);

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

	for (m = func_296(i, num); num2 > m; m = func_296(i, num))
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

	func_297(essParam0, l, k, j, num2, i, num);
	return;
}

void func_168(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6017 Hash - 0xD61623D0 ^0x48AE56A
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_298(iParam0, iParam1, bParam2);
	return;
}

Hash func_169(Hash hParam0) // Position - 0x6033 Hash - 0xD511B5FE ^0x321A0CCC
{
	switch (hParam0)
	{
		case joaat("player_three"):
			return joaat("John");
	
		case joaat("Player_Zero"):
			return joaat("Arthur");
	
		default:
		
	}

	return 0;
}

void func_170() // Position - 0x6060 Hash - 0x7FE4F0B5 ^0x8A41A61C
{
	if (func_169(ENTITY::GET_ENTITY_MODEL(Global_35)) == joaat("John"))
	{
		PED::_0x2B4CE170DE09F346(Global_35, joaat("dutch_gang"));
		PED::_0x2B4CE170DE09F346(Global_35, joaat("John"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("PLAYER"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("player_john"));
		PED::_0x1E017404784AA6A3(Global_35, joaat("JOHN_CONV_CLOSER_REPLIES"));
	}

	return;
}

Hash func_171() // Position - 0x60BA Hash - 0x6281C08B ^0xE2D01D13
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_36);
}

BOOL func_172(eStackSize essParam0) // Position - 0x60CB Hash - 0x97598EC0 ^0xADF7FB13
{
	if (!func_273(essParam0))
		return false;

	return Global_1888801[essParam0 /*35*/].f_20 == 1 || Global_1888801[essParam0 /*35*/].f_20 == 2 && !func_299(essParam0);
}

BOOL func_173(int iParam0) // Position - 0x610B Hash - 0xC5805E92 ^0xC5805E92
{
	if (iParam0 == 0)
		return func_300() && func_301();
	else if (iParam0 == 1 || iParam0 == 2 || iParam0 == 3)
		return func_302(iParam0, 1);

	return false;
}

void func_174(eStackSize essParam0, int iParam1, Hash hParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x6152 Hash - 0xECDF54D9 ^0x49B6D4B7
{
	BOOL flag;
	const char* str;
	char* str2;
	Hash hash;
	int num;
	int num2;
	var unk;
	float temperatureAtCoords;
	char* str3;
	char* str4;
	var unk2;

	if (!func_303())
		return;

	str = func_304(essParam0, iParam1, hParam2, iParam4, bParam5, bParam3, &flag);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (bParam3)
			return;
	
		str = "DISTRICT_GRIZZLIES";
	}

	if (!func_214(iParam4))
		if (func_273(essParam0))
			iParam4 = func_306(func_305(essParam0));
		else
			iParam4 = func_306(iParam1);

	if (func_214(iParam4))
		hash = func_307(iParam4);

	if (flag && bParam3)
	{
		str2 = func_309(func_308(hParam2));
	}
	else if (func_310(iParam1, 2) || func_311(iParam4, 2) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			else
				str2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		Global_1894899.f_9 = 1;
	}
	else if (func_273(essParam0) && func_312(essParam0, 16777216) && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (hash >= 1 && !Global_1894899.f_9)
	{
		str2 = MISC::VAR_STRING(2, "REGION_BOUNTY", hash);
		Global_1894899.f_9 = 1;
	}
	else
	{
		num = func_293(func_175());
		num2 = func_294(func_175());
	
		if (num2 < 10)
			TEXT_LABEL_APPEND_STRING(&unk, "0", 8);
	
		TEXT_LABEL_APPEND_INT(&unk, num2, 8);
		temperatureAtCoords = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
	
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			str4 = "AM";
		
			if (num >= 12)
			{
				str4 = "PM";
			
				if (num > 12)
					num = num - 12;
			}
			else if (num == 0)
			{
				num = 12;
			}
		
			str3 = "TIME_AND_TEMP_C";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_313(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(674, str3, num, func_314(&unk, joaat("COLOR_PURE_WHITE")), str4, func_314(&unk2, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			str3 = "TIME_AND_TEMP_C_24";
		
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				temperatureAtCoords = func_313(temperatureAtCoords);
				str3 = "TIME_AND_TEMP_F_24";
			}
		
			TEXT_LABEL_ASSIGN_INT(&unk2, BUILTIN::ROUND(temperatureAtCoords), 8);
			str2 = MISC::VAR_STRING(162, str3, num, func_314(&unk, joaat("COLOR_PURE_WHITE")), func_314(&unk2, joaat("COLOR_PURE_WHITE")));
		}
	
		Global_1894899.f_9 = 0;
	}

	Global_1934266.f_148 = func_315(str, str2, 4000, 0, 0, 0, false, true);
	return;
}

eStackSize func_175() // Position - 0x63C3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_176() // Position - 0x63CF Hash - 0x8CBEB066 ^0xDF7EC571
{
	Player player;
	BOOL flag;
	var crimeType;
	int i;
	Hash crimeType2;
	int num;

	player = func_316();
	flag = !func_20(Global_1935630, 4194304) || Global_1935630.f_17 > 0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (flag)
		{
			Global_1935630.f_13 = LAW::ARE_WITNESSES_ACTIVE(player) || LAW::_ARE_INVESTIGATORS_ACTIVE(player, false, 0);
			Global_1935630.f_15 = LAW::_0x148E7AC8141C9E64(player);
			Global_1935630.f_14 = LAW::_0x9945A3E2528A02E8(player);
			Global_1935630.f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630.f_17 = LAW::GET_WANTED_SCORE(player);
			Global_1935630.f_26 = LAW::_0x9D5C9A5A3321B128(player);
			Global_1935630.f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(player), 0);
			Global_1935630.f_18 = LAW::IS_LAW_INCIDENT_ACTIVE(player);
		
			if (Global_1935630.f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&crimeType);
				Global_1935630.f_19 = crimeType.f_10;
				Global_1935630.f_23 = crimeType.f_11 == 6;
			}
		
			Global_1935630.f_20 = -1;
		
			for (i = 0; i < 24; i = i + 1)
			{
				if (LAW::GET_PLAYER_REGISTERED_CRIME(player, i, &crimeType2))
				{
					if (crimeType2.f_10)
					{
						num = LAW::_0xDAEFDFDB2AEECE37(crimeType2, 0);
					
						if (num > Global_1935630.f_20)
							Global_1935630.f_20 = num;
					}
				}
			}
		}
		else
		{
			func_317();
		}
	}

	if (Global_1935630.f_40 != 0)
		Global_1935630.f_41 = Global_1935630.f_40;

	Global_1935630.f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(player, true);
	Global_1935630.f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);

	if (!Global_1935630.f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630.f_44), false, 0, false);
		Global_1935630.f_40 = PED::GET_MOUNT(Global_35);
	
		if (Global_1572887.f_12 == -1 && Global_1935630 & 262144 != 0)
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
	
		if (Global_1572887.f_12 != -1)
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		else if (Global_1935630 & 65536 != 0)
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	
		if (Global_1572887.f_12 == -1)
		{
			if (!func_318(9))
				PED::SET_PED_RESET_FLAG(Global_35, 135, true);
		
			if (!func_318(14))
				PED::SET_PED_RESET_FLAG(Global_35, 144, true);
		
			if (!func_318(36))
				HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
		
			if (CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
				HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if (CAM::IS_SCREEN_FADED_OUT() && func_319() && !func_157(0, false, true))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
		
			if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE")))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_BOAT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_VEH_BOAT_ATTACK2"), false);
			}
		
			if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SELECT_RADAR_MODE"), false);
		}
	}
	else
	{
		if (func_201() == -1 && CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	
		Global_1935630.f_44 = 0;
		Global_1935630.f_40 = 0;
	}

	return;
}

void func_177() // Position - 0x6703 Hash - 0x94D147DC ^0x94D147DC
{
	if (func_201() != -1)
		return;

	func_320();
	return;
}

void func_178(float fParam0, float fParam1, float fParam2) // Position - 0x671A Hash - 0xB20C33B1 ^0x8BCEF44A
{
	Global_40.f_9.f_7 = { fParam0 };
	return;
}

void func_179(int iParam0) // Position - 0x672F Hash - 0x33B51C79 ^0xD9769E91
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
	return;
}

void func_180(int iParam0) // Position - 0x6749 Hash - 0x29A8F290 ^0x870EAF89
{
	Global_1310720.f_9 = iParam0;
	return;
}

void func_181(int iParam0) // Position - 0x6759 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1310720.f_10 = iParam0;
	return;
}

void func_182(BOOL bParam0) // Position - 0x6769 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_59(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_84(&Global_1935630, 4194304);
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

int func_183(BOOL bParam0) // Position - 0x680C Hash - 0xE318106C ^0x60090061
{
	if (!bParam0 && func_321(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("bountyhuntersglobalcooldown"), true, 0);
		return 0;
	}

	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

BOOL func_184(Hash hParam0, Hash hParam1) // Position - 0x6845 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

int func_185(Hash hParam0) // Position - 0x6876 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_256(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

float func_186(int iParam0, int iParam1) // Position - 0x68A1 Hash - 0x882BA7B3 ^0xDE52A593
{
	int num;
	float pedStamina;
	float pedMaxStamina;
	float num2;
	float num3;

	if (iParam1 == -1)
	{
		num2 = pedMaxStamina - pedStamina;
		return num2 / 2f;
	}

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			num = 50;
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_35);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_35);
			num = 8;
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			num = 14;
			break;
	}

	num3 = (float)num * iParam1 + pedStamina;

	if (num3 > pedMaxStamina)
		num2 = pedMaxStamina - pedStamina;
	else
		num2 = num3 - pedStamina;

	return num2 / 2f;
}

void func_187(int iParam0, int iParam1) // Position - 0x6956 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_188(int iParam0) // Position - 0x696F Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

void func_189(int iParam0) // Position - 0x698A Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_201() != -1)
		return;

	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT(iParam0 * num));
	}

	return;
}

float func_190(int iParam0, float fParam1) // Position - 0x69C7 Hash - 0xDF35DF4B ^0x834D2C65
{
	return func_322(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

BOOL func_191(var uParam0, var uParam1, float fParam2) // Position - 0x69DB Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_201() != -1)
		return true;

	if (!func_323(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_324(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_54(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_324(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_192(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6AC7 Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_201() == false)
	{
		func_325(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_217(0);

	if (bParam1)
		func_326(num);

	if (num >= 100f - 1f)
		func_327();

	if (bParam2)
		fParam0 = func_328(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_219(0, func_329(fParam0, -100f, 100f), bParam1);
	return;
}

void func_193(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6B39 Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_201() == false)
	{
		func_325(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_217(2);

	if (bParam1)
		func_326(num);

	if (bParam2)
		fParam0 = func_328(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_219(2, func_329(fParam0, -100f, 100f), bParam1);
	return;
}

void func_194(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6B9A Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_201() == false)
	{
		func_325(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_217(1);

	if (bParam1)
		func_326(num);

	if (bParam2)
		fParam0 = func_328(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_219(1, func_329(fParam0, -100f, 100f), bParam1);
	return;
}

float func_195(float fParam0, int iParam1) // Position - 0x6BFB Hash - 0x4EDD98F5 ^0x4EDD98F5
{
	switch (iParam1)
	{
		case 0:
			return fParam0 * 0.033f;
	
		case 1:
			return fParam0 * 2f;
	
		case 2:
			return fParam0 * 120f;
	
		case 3:
			return fParam0 * 2880f;
	
		default:
		
	}

	return fParam0;
}

void func_196(int iParam0, float fParam1) // Position - 0x6C4D Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_330(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_331(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_332(-1);
			func_86(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_331(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_333(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_331(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_334(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_335(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_335(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_335(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_197(float fParam0, BOOL bParam1) // Position - 0x6DE0 Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_336(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_318(17))
		return;

	if (func_337())
	{
		num2 = func_338(num);
		num = num + fParam0;
		num3 = func_338(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_175();
			func_167(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_339(&num4, &num5);
		func_340(13, func_329(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_54(94, false);
	}

	return;
}

struct<2> func_198(int iParam0) // Position - 0x6E91 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_199(var uParam0, var uParam1, int iParam2) // Position - 0x6EA1 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_200(Hash hParam0, int iParam1) // Position - 0x6EB1 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_201() // Position - 0x6EC4 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_202(int iParam0) // Position - 0x6ED2 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

BOOL func_203(int iParam0, BOOL bParam1) // Position - 0x6EE8 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_201() != -1)
		return false;

	if (!func_341(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

int func_204(int iParam0) // Position - 0x6F16 Hash - 0x365567CB ^0x68796F4
{
	if (!func_341(iParam0))
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_342(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_342(iParam0));
	
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_342(iParam0), false)))
			return 0;
	}

	return 1;
}

void func_205(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6F5C Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_206() // Position - 0x6F8C Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_343();
	func_344();
	func_345();
	return;
}

BOOL func_207(int iParam0) // Position - 0x6FA3 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_208(int iParam0) // Position - 0x6FB9 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

int func_209() // Position - 0x6FC9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_210(int iParam0, int iParam1) // Position - 0x6FD8 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_207(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_211(int iParam0) // Position - 0x6FFB Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_207(iParam0))
		return false;

	if (func_87(64) && func_346(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_212(int iParam0) // Position - 0x7033 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_207(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_213(int iParam0) // Position - 0x7053 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_207(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_347(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

BOOL func_214(int iParam0) // Position - 0x70BC Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

void func_215(int iParam0) // Position - 0x70D1 Hash - 0xC6197DF6 ^0xC6197DF6
{
	eStackSize i;

	for (i = 0; i < 150; i = i + 1)
	{
		if (func_273(i))
			if (func_349(func_348(i, true, true)) == iParam0)
				func_350(i, false);
	}

	return;
}

int func_216(int iParam0) // Position - 0x710D Hash - 0x26AB94C2 ^0x26AB94C2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		default:
		
	}

	return 0;
}

float func_217(int iParam0) // Position - 0x713C Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

int func_218(int iParam0) // Position - 0x714E Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

void func_219(int iParam0, float fParam1, BOOL bParam2) // Position - 0x7172 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_201() != -1)
		return;

	if (!func_318(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_218(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_216(iParam0), value);
	func_352(func_351(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_353(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_54(84, true);

	if (fParam1 <= -99.999f)
		func_54(func_354(iParam0), true);

	variableName = func_355(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

void func_220(BOOL bParam0) // Position - 0x724B Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_221(int iParam0, int iParam1) // Position - 0x725B Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_222(true);

	return;
}

void func_222(BOOL bParam0) // Position - 0x7274 Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_356(&(Global_40.f_12019.f_42), 1);
	else
		func_357(&(Global_40.f_12019.f_42), 1);

	return;
}

void func_223(int iParam0) // Position - 0x729E Hash - 0x7C292CDC ^0x28CDA9CE
{
	int i;

	if (iParam0 < 0)
		return;

	if (!_IS_NULL_VECTOR(Global_1393237.f_11[iParam0 /*30*/].f_3))
	{
		func_358(Global_1393237.f_11[iParam0 /*30*/].f_3, 0);
		PED::_0x9851DE7AEC10B4E1(Global_1393237.f_11[iParam0 /*30*/].f_3, 20f, 1, 0);
	}

	Global_1393237.f_11[iParam0 /*30*/] = -15;
	Global_1393237.f_11[iParam0 /*30*/].f_2 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_3 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_6 = { 0f, 0f, 0f };
	Global_1393237.f_11[iParam0 /*30*/].f_9 = 0f;

	if (func_359(iParam0, 8388608))
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 8388608;
	}
	else
	{
		Global_1393237.f_11[iParam0 /*30*/].f_10 = 0;
		Global_1393237.f_11[iParam0 /*30*/].f_17 != func_360();
		Global_1393237.f_11[iParam0 /*30*/].f_17 = func_360();
	}

	Global_1393237.f_11[iParam0 /*30*/].f_11 = -1;
	Global_1393237.f_11[iParam0 /*30*/].f_12 = 0;
	Global_1393237.f_11[iParam0 /*30*/].f_13 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_14[i] = 0;
	}

	func_361(iParam0, 1);
	Global_1393237.f_11[iParam0 /*30*/].f_29 = 0;

	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[0]))
			MAP::REMOVE_BLIP(&Global_1393237.f_11[iParam0 /*30*/].f_18[0]);
	
		if (MAP::DOES_BLIP_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_18[1]))
			MAP::REMOVE_BLIP(&Global_1393237.f_11[iParam0 /*30*/].f_18[1]);
	
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1393237.f_11[iParam0 /*30*/].f_21))
		func_358(Global_1393237.f_11[iParam0 /*30*/].f_3, 1);

	return;
}

BOOL func_224(var uParam0, var uParam1) // Position - 0x7470 Hash - 0xD22CE202 ^0xD22CE202
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	*uParam0 = 0;
	*uParam1 = 0;
	flag = func_124();
	flag2 = false;

	if (flag && !func_58(4))
		flag2 = true;

	if (flag && func_58(37) && !func_58(43))
	{
		*uParam0 = 0;
		*uParam1 = 0;
		return false;
	}

	flag3 = false;

	if (flag && func_58(43) && !func_58(44))
		flag3 = true;

	if (flag2)
	{
		*uParam0 = 1;
		return true;
	}

	if (!flag2 && !flag3)
	{
		if (func_362(0) == 1)
			*uParam0 = 1;
	
		if (func_362(1) == 1)
			*uParam1 = 1;
	}

	if (*uParam0 || *uParam1)
		return true;

	return false;
}

BOOL func_225() // Position - 0x752F Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_226(int iParam0) // Position - 0x7538 Hash - 0x91C85182 ^0xC466A6C3
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

int func_227() // Position - 0x756C Hash - 0xE835E19F ^0x141BD35D
{
	return Global_40.f_1095.f_3054.f_1;
}

Ped func_228(var uParam0, var uParam1) // Position - 0x757F Hash - 0x6747FB46 ^0x33F721B4
{
	BOOL flag;
	int num;
	Ped mount;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Player player;
	Ped saddleHorseForPlayer;
	var unk;
	var unk3;
	int num2;
	int idOfThisThread;

	uParam1->f_10 = func_117(uParam1->f_10);

	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}

	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}

	if (*uParam1)
		_IS_NULL_VECTOR(uParam1->f_6);

	flag = func_124();

	if (*uParam1)
	{
		if (flag && !func_165(Global_1835011[4 /*74*/].f_1, true))
		{
			if (func_363(5))
			{
				func_364(5);
				func_365(5);
				func_366(0);
				func_367(0);
			}
		}
	}

	if (func_15(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_165(Global_1835011[37 /*74*/].f_1, true) && !func_165(Global_1835011[43 /*74*/].f_1, true))
	{
		*uParam0 = 1;
		return 0;
	}

	if (flag && func_165(Global_1835011[43 /*74*/].f_1, true) && !func_165(Global_1835011[44 /*74*/].f_1, true))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	num = uParam1->f_10;
	mount = func_278(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_368(num))
	{
		flag2 = true;
	
		if (func_369(num))
			flag3 = true;
	
		if (func_370(num))
			flag4 = true;
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag4 && !uParam1->f_5)
			{
				func_371(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (*uParam1)
	{
		if (flag2)
		{
			if (flag3)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_363(0) && func_363(1))
			{
				func_372(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_373())
				func_374();
		
			func_366(0);
			func_367(0);
			func_375(uParam1->f_6);
		}
	}

	if (!func_368(uParam1->f_10))
	{
		if (*uParam1)
		{
			if (func_376(uParam1->f_10) == 0 || func_377(uParam1->f_10) == 0 || func_362(uParam1->f_10) == 0)
				func_378(uParam1->f_10);
		
			func_379(uParam1->f_10);
			func_380(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
	
		*uParam0 = 1;
		return 0;
	}

	num = uParam1->f_10;
	mount = func_278(num);
	flag2 = false;
	flag3 = false;
	flag4 = false;

	if (func_368(num))
	{
		flag2 = true;
	
		if (func_369(num))
			flag3 = true;
	
		if (func_370(num))
			flag4 = true;
	}

	if (uParam1->f_2)
	{
		if (flag2)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(mount))
				ENTITY::FREEZE_ENTITY_POSITION(mount, false);
		
			if (!_IS_NULL_VECTOR(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
			}
		}
	}

	if (func_381(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}

	if (flag2)
	{
		if (flag3)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (flag2)
	{
		if (flag4 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
		
			*uParam0 = 1;
			return 0;
		}
	}

	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(mount))
			{
				*uParam0 = 0;
				return 0;
			}
		
			player = PLAYER::PLAYER_ID();
			saddleHorseForPlayer = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(player);
		
			if (ENTITY::DOES_ENTITY_EXIST(saddleHorseForPlayer))
				if (saddleHorseForPlayer != mount)
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, 0);
		
			unk = { func_382(uParam1->f_10) };
			unk3 = { func_383() };
			func_384(mount, &unk, &unk3, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(player, mount);
			PED::SET_PED_CONFIG_FLAG(mount, 186, false);
		}
	}

	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return mount;
	}

	if (!func_385(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
		func_386(uParam1->f_10);
	
		if (uParam1->f_2 && !_IS_NULL_VECTOR(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(mount, false);
			PHYSICS::_UNHITCH_HORSE(mount);
			ENTITY::SET_ENTITY_COORDS(mount, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(mount, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(mount, false);
		}
	
		*uParam0 = 2;
		return mount;
	}

	func_387(uParam1->f_10);

	if (func_385(uParam1->f_10))
	{
		num2 = func_388(uParam1->f_10);
		idOfThisThread = SCRIPTS::GET_ID_OF_THIS_THREAD();
	
		if (num2 != idOfThisThread)
		{
			*uParam0 = 1;
			return 0;
		}
	}

	*uParam0 = 2;
	return mount;
}

eStackSize func_229() // Position - 0x79F4 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

eStackSize func_230() // Position - 0x7A02 Hash - 0xC5B83CF5 ^0xC3CA9E16
{
	return Global_40.f_4283.f_4;
}

BOOL func_231(eStackSize essParam0, eStackSize essParam1) // Position - 0x7A12 Hash - 0x20120867 ^0x20120867
{
	switch (essParam0)
	{
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 7:
			if (essParam1 == 1)
				return true;
			break;
	
		case 8:
			return func_58(73);
	}

	return false;
}

Vector3 func_232(eStackSize essParam0) // Position - 0x7A63 Hash - 0x563C355B ^0x563C355B
{
	switch (essParam0)
	{
		case 1:
			return -107.0047f, -32.0697f, 94.9574f;
	
		case 2:
			return 703.7057f, -1228.8713f, 44.2991f;
	
		case 3:
			return 1849.943f, -1837.0895f, 42.2036f;
	
		case 5:
			return 2278.213f, -751.9426f, 41.0419f;
	
		case 6:
			return 2370.389f, 1340.9696f, 105.1306f;
	
		case 7:
			return -2591.6323f, 466.4086f, 145.2065f;
	
		case 8:
			if (!func_389())
				return -1665.2742f, -1330.8988f, 82.9343f;
			else
				return -1643.6729f, -1375.6195f, 82.9683f;
			break;
	}

	return 0f, 0f, 0f;
}

Vector3 func_233(eStackSize essParam0, int iParam1) // Position - 0x7B3E Hash - 0x62438903 ^0xDFF848EF
{
	switch (essParam0)
	{
		case 1:
			switch (iParam1)
			{
				case -1:
					return -106.1076f, -31.1365f, 94.9429f;
			
				case 0:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-106.1076f, -31.1365f, 94.9429f, func_234(essParam0), 0.75f, 0f, 0f);
			
				case 1:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-106.1076f, -31.1365f, 94.9429f, func_234(essParam0), -0.75f, 0f, 0f);
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case -1:
					return 702.1609f, -1228.5288f, 44.1236f;
			
				case 0:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(702.1609f, -1228.5288f, 44.1236f, func_234(essParam0), 0.75f, 0f, 0f);
			
				case 1:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(702.1609f, -1228.5288f, 44.1236f, func_234(essParam0), -0.75f, 0f, 0f);
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case -1:
					return 1850.1791f, -1838.0216f, 42.1198f;
			
				case 0:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1850.1791f, -1838.0216f, 42.1198f, func_234(essParam0), 0.75f, 0f, 0f);
			
				case 1:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(1850.1791f, -1838.0216f, 42.1198f, func_234(essParam0), -0.75f, 0f, 0f);
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case -1:
					return 2279.9438f, -751.8282f, 40.9738f;
			
				case 0:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2279.9438f, -751.8282f, 40.9738f, func_234(essParam0), 0.75f, 0f, 0f);
			
				case 1:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2279.9438f, -751.8282f, 40.9738f, func_234(essParam0), -0.75f, 0f, 0f);
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case -1:
					return 2371.7786f, 1341.6023f, 105.1376f;
			
				case 0:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2371.7786f, 1341.6023f, 105.1376f, func_234(essParam0), 0.75f, 0f, 0f);
			
				case 1:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(2371.7786f, 1341.6023f, 105.1376f, func_234(essParam0), -0.75f, 0f, 0f);
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case -1:
					return -2590.321f, 464.9799f, 145.1713f;
			
				case 0:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-2590.321f, 464.9799f, 145.1713f, func_234(essParam0), 0.75f, 0f, 0f);
			
				case 1:
					return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-2590.321f, 464.9799f, 145.1713f, func_234(essParam0), -0.75f, 0f, 0f);
			
				default:
					break;
			}
			break;
	
		case 8:
			switch (iParam1)
			{
				case -1:
					if (!func_389())
						return -1665.6844f, -1332.3606f, 82.8786f;
					else
						return -1644.9904f, -1376.7515f, 82.9679f;
					break;
			
				case 0:
					if (!func_389())
						return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1665.6844f, -1332.3606f, 82.8786f, func_234(essParam0), 0.75f, 0f, 0f);
					else
						return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1644.9904f, -1376.7515f, 82.9679f, func_234(essParam0), 0.75f, 0f, 0f);
					break;
			
				case 1:
					if (!func_389())
						return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1665.6844f, -1332.3606f, 82.8786f, func_234(essParam0), -0.75f, 0f, 0f);
					else
						return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(-1644.9904f, -1376.7515f, 82.9679f, func_234(essParam0), -0.75f, 0f, 0f);
					break;
			}
			break;
	}

	return 0f, 0f, 0f;
}

float func_234(eStackSize essParam0) // Position - 0x7F30 Hash - 0xBB393CC ^0xBB393CC
{
	switch (essParam0)
	{
		case 1:
			return 164.6267f;
	
		case 2:
			return 253.0561f;
	
		case 3:
			return 46.2992f;
	
		case 5:
			return 70.2681f;
	
		case 6:
			return 109.4813f;
	
		case 7:
			return 81.6192f;
	
		case 8:
			if (!func_389())
				return 21.0508f;
			else
				return 329.6172f;
			break;
	}

	return 0f;
}

const char* func_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x7FB9 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_236(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x7FCD Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_237(int iParam0, BOOL bParam1) // Position - 0x7FF6 Hash - 0x40957E46 ^0xC0C34E36
{
	if (Global_1898346[iParam0 /*6*/].f_2 == false || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_390(Global_1898330[iParam0]);
		func_391(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}

	return;
}

int func_238(int iParam0) // Position - 0x805A Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_103(iParam0))
		return 0;

	return func_392(func_390(iParam0));
}

BOOL func_239(int iParam0, int iParam1) // Position - 0x807A Hash - 0x7572A314 ^0x4B13FBB8
{
	return func_393(iParam0) && Global_1898346[iParam0 /*6*/].f_1 && iParam1 != false;
}

BOOL func_240(int iParam0, int iParam1) // Position - 0x809C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_241(Hash hParam0) // Position - 0x80AB Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_394(outSlotId);
}

int func_242(int iParam0, int iParam1) // Position - 0x80CE Hash - 0x9D981F95 ^0x9D981F95
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

Hash func_243(Hash hParam0) // Position - 0x829F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_256(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_244(int iParam0) // Position - 0x82CA Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_245(int iParam0) // Position - 0x82DF Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_246(int iParam0, var uParam1, var uParam2) // Position - 0x82FF Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_395(num);
	return;
}

BOOL func_247(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x831F Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_396(essParam0))
		return false;

	if (func_397(essParam0, 32, true))
		return false;

	if (!func_397(essParam0, 2, true))
		return false;

	if (!func_397(essParam0, 4, true))
		return false;

	if (func_398(essParam0, 33, true))
		return false;

	if (func_399(essParam0))
		return false;

	if (func_400(essParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == essParam0)
			return false;

	return true;
}

BOOL func_248(int iParam0) // Position - 0x83AC Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_401(iParam0))
		if (func_402(Global_1360165[iParam0 /*1157*/], 0))
			return true;

	return false;
}

PersChar func_249(int iParam0, BOOL bParam1) // Position - 0x83D3 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_401(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_403(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

Ped func_250(int iParam0) // Position - 0x8412 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_396(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

BOOL func_251(Ped pedParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x844C Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_404(pedParam0, Global_36, true);

	if (iParam2 > 0f)
		if (num < iParam2)
			return true;

	if (num < iParam1)
		if (PED::_IS_PED_VISIBILITY_TRACKED(pedParam0))
			if (iParam4 > 0f)
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(pedParam0, iParam4))
					return true;
			else if (PED::IS_TRACKED_PED_VISIBLE(pedParam0))
				return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(pedParam0))
			if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
				return true;

	return false;
}

void func_252(int iParam0, BOOL bParam1) // Position - 0x84D5 Hash - 0xEE7E9DBB ^0x37FB2562
{
	Any any;

	if (PERSCHAR::_0xA8120EBEAF290C7A(func_249(iParam0, false)))
	{
		any = PERSCHAR::_0x69786495C92A3044(func_249(iParam0, false));
	
		if (any != Global_1360165[iParam0 /*1157*/].f_47 || bParam1)
		{
			Global_1360165[iParam0 /*1157*/].f_47 = any;
			TEXT_LABEL_ASSIGN_STRING(&(Global_1360165[iParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(func_249(iParam0, false), Global_1360165[iParam0 /*1157*/].f_47), 64);
			Global_1360165[iParam0 /*1157*/].f_56 = 1;
		}
	}

	return;
}

int func_253(int iParam0) // Position - 0x854D Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_254(int iParam0, int iParam1, BOOL bParam2) // Position - 0x857A Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_396(iParam0))
			return;

	func_405(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

BOOL func_255() // Position - 0x85B4 Hash - 0x8905DA1C ^0xB020CE54
{
	if (Global_1946054.f_2793)
		return true;

	if (MISC::ABSI(MISC::GET_GAME_TIMER() - Global_1946054.f_2791) < 1250)
		return true;

	if (func_406())
		return true;

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
		return true;

	return false;
}

BOOL func_256(Hash hParam0, int iParam1) // Position - 0x85FE Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_257(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x8618 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_256(hParam0, 0))
		return false;

	num = func_185(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_407(hParam0, 1))
			return false;

	return func_408(hParam0, false, bParam2) >= iParam1;
}

BOOL func_258(Hash hParam0) // Position - 0x8682 Hash - 0x2073EBE2 ^0x2073EBE2
{
	Hash hash;

	if (hParam0 == 0)
		return 0;

	hash = 0;

	if (func_132(&hash))
		if (hParam0 == hash)
			return 1;

	return 0;
}

Hash func_259() // Position - 0x86AC Hash - 0xFCC5278F ^0xAA4EF978
{
	int num;

	num = joaat("mask_off_left_hand");

	switch (func_409())
	{
		case 0:
			num = joaat("mask_off_left_hand");
			break;
	
		case 1:
			num = joaat("mask_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_off_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_260() // Position - 0x8703 Hash - 0xFCC5278F ^0x56FDCD49
{
	int num;

	num = joaat("bandana_off_left_hand");

	switch (func_409())
	{
		case 0:
			num = joaat("bandana_off_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_off_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_off_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_261(Object obParam0, Object obParam1) // Position - 0x875A Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && obParam1 != false;
}

Hash func_262() // Position - 0x8769 Hash - 0xFCC5278F ^0xB987E402
{
	int num;

	num = joaat("mask_on_left_hand");

	switch (func_409())
	{
		case 0:
			num = joaat("mask_on_left_hand");
			break;
	
		case 1:
			num = joaat("mask_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("mask_on_left_hand_rifle");
			break;
	}

	return num;
}

Hash func_263() // Position - 0x87C0 Hash - 0xFCC5278F ^0xD976DFE7
{
	int num;

	num = joaat("bandana_on_left_hand");

	switch (func_409())
	{
		case 0:
			num = joaat("bandana_on_left_hand");
			break;
	
		case 1:
			num = joaat("bandana_on_right_hand");
			break;
	
		case 2:
			num = 0;
			break;
	
		case 3:
			num = joaat("bandana_on_left_hand_rifle");
			break;
	}

	return num;
}

BOOL func_264(int iParam0, int iParam1) // Position - 0x8817 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

void func_265(int iParam0) // Position - 0x8828 Hash - 0x4918B04C ^0x4918B04C
{
	*iParam0 = 0;
	return;
}

void func_266(int iParam0, int iParam1) // Position - 0x8834 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_267(int iParam0, int iParam1) // Position - 0x8849 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

Vector3 func_268(eStackSize essParam0) // Position - 0x885E Hash - 0x563C355B ^0x563C355B
{
	switch (essParam0)
	{
		case 4:
			return 1794.0404f, -1314.7915f, 43.0923f;
	
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
	
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
	
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
	
		case 33:
			return 905.92f, -421.19f, 88.23f;
	
		case 36:
			return -2476.07f, 832.13f, 141.25f;
	
		case 38:
			return -329.32f, -366.6f, 87f;
	
		case 39:
			return 97.4f, -212.47f, 111.6f;
	
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
	
		case 43:
			return 2586.4937f, -1009.1538f, 43.24f;
	
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
	
		case 51:
			return -1709.38f, -335.07f, 176.95f;
	
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
	
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
	
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
	
		case 65:
			return -2095.11f, 656.32f, 119.87f;
	
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
	
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
	
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
	
		case 78:
			return 2734.3586f, -1207.6818f, 48.6752f;
	
		case 80:
			return 2740.808f, -1312.8052f, 46.648f;
	
		case 81:
			return 2503.7546f, -1164.5312f, 48.1928f;
	
		case 84:
			return -73.18f, -392.3f, 70.84f;
	
		case 88:
			return 2480.53f, -399.62f, 41.42f;
	
		case 89:
			return 1576.261f, -251.85f, 79.21f;
	
		case 91:
			return 1496.3479f, -1083.2855f, 54.1105f;
	
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
	
		case 94:
			return 1414.4f, 248.2f, 88.85f;
	
		case 101:
			return -1378.6558f, -735.3399f, 90.8243f;
	
		case 102:
			return -1666.59f, 610.82f, 124.03f;
	
		case 103:
			return 1356.44f, 533.95f, 86.12f;
	
		case 104:
			return 2407f, -585.32f, 40.66f;
	
		case 105:
			return -219.25f, 212.93f, 94.15f;
	
		case 116:
			return 211.99f, 512.98f, 126.54f;
	
		case 117:
			return -329.2f, 797.9f, 116.89f;
	
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
	
		case 119:
			return -1043.9886f, 434.5095f, 53.6802f;
	
		case 121:
			return 2520.88f, 421.94f, 65.91f;
	
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
	
		case 133:
			return 2688.4268f, -1121.7657f, 49.6782f;
	
		case 135:
			return -576.08f, 524.9f, 97.86f;
	
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
	
		case 143:
			return 2954.45f, 523.05f, 44.47f;
	
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
	
		case 146:
			return -585.6761f, -347.21603f, 81.28532f;
	
		case 151:
			return 556.271f, 172.08f, 133.34348f;
	
		case 152:
			return 556.271f, 172.08f, 133.34348f;
	
		default:
		
	}

	return Global_1347702[essParam0 /*49*/].f_24;
}

void func_269(eStackSize essParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x8CE2 Hash - 0x8D139366 ^0xCA824361
{
	eStackSize stackSize;
	BOOL flag;
	BOOL flag2;
	var unk;
	eBlipSprite sprite;

	if (!func_139(essParam0))
		return;

	if (Global_1347702[essParam0 /*49*/].f_13 & 256 != 0 && func_157(0, false, true))
		return;

	if (Global_1347702[essParam0 /*49*/].f_12 & 16 != 0)
		return;

	if (Global_1347702[essParam0 /*49*/].f_36 == BLIP_HIGHER)
		return;

	if (func_104(32768))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
		return;

	Global_1347702[essParam0 /*49*/].f_38 = func_410(essParam0);

	if (!bParam5 && func_411(essParam0))
	{
		Global_1347702[essParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[essParam0 /*49*/].f_38, func_268(essParam0), Global_1347702[essParam0 /*49*/].f_18);
	
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
			return;
	
		MAP::SET_BLIP_SPRITE(Global_1347702[essParam0 /*49*/].f_37, Global_1347702[essParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[essParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[essParam0 /*49*/].f_38, vParam1);
	
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
			return;
	
		MAP::SET_BLIP_SPRITE(Global_1347702[essParam0 /*49*/].f_37, Global_1347702[essParam0 /*49*/].f_36, true);
	}

	if (essParam0 == 61)
	{
		func_412(8);
	}
	else if (essParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (essParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_SEAN"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (essParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (essParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (essParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if (essParam0 == 44 || essParam0 == 45 || essParam0 == 46 || essParam0 == 47 || essParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[essParam0 /*49*/].f_37, "BLIP_RCEXO");
	}

	func_413(essParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[essParam0 /*49*/].f_37, 64, essParam0);

	if (func_201() == -1)
	{
		func_414(essParam0);
		stackSize = func_415(Global_40.f_4283);
	
		if (func_273(stackSize) && func_416(Global_1888801[stackSize /*35*/].f_13))
		{
			flag = true;
			flag2 = func_417(stackSize);
		}
	
		if (func_418(essParam0, flag, stackSize))
			func_419(Global_1347702[essParam0 /*49*/].f_15, flag2, flag, stackSize);
	}

	if (bParam4)
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
			return;

	if (Global_1347702[essParam0 /*49*/].f_13 & 1 == 0)
	{
		func_420(&(Global_1347702[essParam0 /*49*/].f_13), 1);
	
		if (!func_411(essParam0) || func_283(Global_1347702[essParam0 /*49*/].f_12, 1) || func_283(Global_1347702[essParam0 /*49*/].f_12, 512) || func_240(Global_1347702[essParam0 /*49*/].f_13, 2048))
			MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	}

	if (Global_1347702[essParam0 /*49*/].f_13 & 32768 == 0)
		if (Global_1347702[essParam0 /*49*/].f_36 == joaat("blip_rc") && Global_1347702[essParam0 /*49*/].f_12 & 1 == 0 && Global_1347702[essParam0 /*49*/].f_12 & 2 != 0)
			MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		else
			func_420(&(Global_1347702[essParam0 /*49*/].f_13), 32768);

	if (Global_1347702[essParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[essParam0] & 2 == 0)
	{
		if (func_421(essParam0))
		{
			if (essParam0 == 97)
				func_54(185, false);
			else
				func_54(186, true);
		}
		else
		{
			TEXT_LABEL_COPY(&unk, { Global_1347702[essParam0 /*49*/].f_3 }, 3);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 24);
			sprite = Global_1347702[essParam0 /*49*/].f_37;
			Global_1347702[essParam0 /*49*/].f_40 = func_422(MISC::VAR_STRING(2, &unk, sprite), 10000, 0, 0, 0, true);
		}
	
		func_423(essParam0, 2);
	}

	return;
}

Vector3 func_270(eStackSize essParam0) // Position - 0x9139 Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_139(essParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_424(essParam0, &unk))
		Global_1347702[essParam0 /*49*/].f_24 = { unk };

	return Global_1347702[essParam0 /*49*/].f_24;
}

int func_271() // Position - 0x917F Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

eStackSize func_272() // Position - 0x918F Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_273(eStackSize essParam0) // Position - 0x919D Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

eStackSize func_274(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x91B3 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_425(vParam0);
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

Hash func_275(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x926A Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_276(Hash hParam0) // Position - 0x9290 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_277(int iParam0, int iParam1, int iParam2) // Position - 0x929E Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

Ped func_278(int iParam0) // Position - 0x92C3 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_279(Ped pedParam0, int iParam1, int iParam2) // Position - 0x92EF Hash - 0x498B41C8 ^0xF542C5C9
{
	int coreIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	iParam2 = func_277(iParam2, 0, 100);

	if (func_426(iParam1, &coreIndex))
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex, iParam2);

	return;
}

void func_280(Ped pedParam0, int iParam1) // Position - 0x933C Hash - 0x20F01565 ^0xAC680146
{
	int coreIndex;
	char* variableName;
	char* variableName2;
	int attributeCoreValue;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return;

	if (!func_426(iParam1, &coreIndex))
		return;

	variableName = func_427(iParam1);
	variableName2 = func_428(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
	{
		attributeCoreValue = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(pedParam0, coreIndex);
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, variableName, BUILTIN::TO_FLOAT(attributeCoreValue), -1);
	
		if (attributeCoreValue <= 20)
			PED::_SET_PED_BLACKBOARD_BOOL(pedParam0, variableName2, true, -1);
		else
			PED::_REMOVE_PED_BLACKBOARD_BOOL(pedParam0, variableName2);
	}

	return;
}

BOOL func_281() // Position - 0x93C7 Hash - 0x2C13EB06 ^0x38F12C8A
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_4)
		return true;

	if (Global_524298)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1051043 == -1 && Global_1572887.f_6 & true != 0)
		return true;

	return false;
}

eStackSize func_282(int iParam0) // Position - 0x941A Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_103(iParam0))
		return -1;

	return func_429(func_390(iParam0));
}

BOOL func_283(int iParam0, int iParam1) // Position - 0x943A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_284(int iParam0) // Position - 0x9449 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_201() != -1)
		if (func_163(iParam0, 4))
			return false;
	else if (func_163(iParam0, 2))
		return false;

	return true;
}

BOOL func_285(int iParam0) // Position - 0x9479 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_163(iParam0, 65536) && !func_163(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_163(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_163(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_286() // Position - 0x9525 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_287(int iParam0) // Position - 0x9534 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_288(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x9540 Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_430(sParam0, sParam1, hParam2);
	return num2;
}

int func_289(int iParam0) // Position - 0x95A3 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_103(iParam0))
		return -1;

	return func_431(iParam0);
}

int func_290(eStackSize essParam0) // Position - 0x95BF Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_291(eStackSize essParam0) // Position - 0x95E4 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_292(eStackSize essParam0) // Position - 0x95F7 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_293(eStackSize essParam0) // Position - 0x960A Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_294(eStackSize essParam0) // Position - 0x961D Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_295(eStackSize essParam0) // Position - 0x962F Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_296(int iParam0, int iParam1) // Position - 0x9641 Hash - 0x893AC59E ^0x893AC59E
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

void func_297(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x96DB Hash - 0xA65AB937 ^0xA65AB937
{
	func_432(essParam0, iParam6);
	func_433(essParam0, iParam5);
	func_434(essParam0, iParam4);
	func_435(essParam0, iParam3);
	func_436(essParam0, iParam2);
	func_437(essParam0, iParam1);
	return;
}

void func_298(int iParam0, int iParam1, BOOL bParam2) // Position - 0x9713 Hash - 0x4464293B ^0x680D2F86
{
	if (Global_1327479.f_9)
		return;

	Global_1327479.f_4 = Global_1327479.f_4 + (iParam0 * 1000);

	if (bParam2)
		Global_1310750.f_16106 = { Global_36 };

	if (iParam1 == 0)
		if (iParam0 > 0)
			Global_1327479.f_5 = MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2);
		else
			Global_1327479.f_5 = Global_1327479.f_5 + (iParam0 * 500);
	else
		Global_1327479.f_5 = MISC::GET_GAME_TIMER() + (iParam1 * 1000);

	return;
}

BOOL func_299(eStackSize essParam0) // Position - 0x9798 Hash - 0x43A4311 ^0x43A4311
{
	if (essParam0 == 22 || essParam0 == 37 && !func_438())
		return true;

	if (essParam0 == 61)
		return true;

	return false;
}

BOOL func_300() // Position - 0x97CD Hash - 0x40F24C4C ^0x4A8198E9
{
	return Global_1935630.f_44 == joaat("weapon_fishingrod");
}

BOOL func_301() // Position - 0x97E1 Hash - 0xE60E7B79 ^0xC69D9C8F
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1900073, false))
		return 1;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fishing_core")) > 0)
		return 1;

	return 0;
}

BOOL func_302(int iParam0, int iParam1) // Position - 0x980B Hash - 0xA4A04955 ^0x863EFD0E
{
	return func_261(Global_1900073.f_2[iParam0], iParam1);
}

BOOL func_303() // Position - 0x9823 Hash - 0xB5F1D039 ^0x491A8075
{
	if (Global_16)
		return false;

	if (!func_439())
		return false;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
		return false;

	if (func_157(-1 ^ 9, false, true))
		return false;

	return true;
}

const char* func_304(eStackSize essParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, var uParam6) // Position - 0x9866 Hash - 0xAA95C4FB ^0xB3C7DDA0
{
	const char* str;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
		str = func_156(Global_1894899.f_162);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) && bParam4)
		str = func_441(func_440(Global_36));

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		if (!func_442(essParam0) || func_318(45))
		{
			switch (essParam0)
			{
				case 1:
					str = "LANDMARK_MACOMBS_END";
					break;
			
				case 2:
					str = "LANDMARK_MERKINS_WALLER";
					break;
			
				case 3:
					str = "SETTLEMENT_LAGRAS";
					break;
			
				case 4:
					str = "HIDEOUT_LAKAY";
					break;
			
				case 5:
					str = "TOWN_SAINTDENIS";
					break;
			
				case 6:
					str = "LANDMARK_HAGEN_ORCHARDS";
					break;
			
				case 8:
					str = "SETTLEMENT_GRAND_KORRIGAN";
					break;
			
				case 9:
					str = "HIDEOUT_SHADY_BELLE";
					break;
			
				case 10:
					str = "LANDMARK_SILTWATER_STRAND";
					break;
			
				case 11:
					str = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
			
				case 12:
					str = "LANDMARK_BERYLS_DREAM";
					break;
			
				case 15:
					str = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
			
				case 16:
					str = "HIDEOUT_HANGING_DOG_RANCH";
					break;
			
				case 17:
					str = "HOMESTEAD_LONE_MULE_STEAD";
					break;
			
				case 19:
					str = "LANDMARK_MONTOS_REST";
					break;
			
				case 20:
					str = "LANDMARK_OWANJILA_DAM";
					break;
			
				case 21:
					str = "HOMESTEAD_PAINTED_SKY";
					break;
			
				case 22:
					str = "SETTLEMENT_PRONGHORN_RANCH";
					break;
			
				case 23:
					str = "LANDMARK_RIGGS_STATION";
					break;
			
				case 25:
					str = "HOMESTEAD_SHEPHERDS_RISE";
					break;
			
				case 26:
					str = "TOWN_STRAWBERRY";
					break;
			
				case 27:
					str = "LANDMARK_VALLEY_VIEW";
					break;
			
				case 28:
					str = "LANDMARK_WALLACE_STATION";
					break;
			
				case 29:
					str = "HOMESTEAD_WATSONS_CABIN";
					break;
			
				case 30:
					str = "LANDMARK_CANEBREAK_MANOR";
					break;
			
				case 31:
					str = "LANDMARK_COPPERHEAD_LANDING";
					break;
			
				case 32:
					str = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
			
				case 33:
					str = "LANDMARK_BACCHUS_BRIDGE";
					break;
			
				case 34:
					str = "HOMESTEAD_FIRWOOD_RISE";
					break;
			
				case 35:
					str = "SETTLEMENT_FORT_WALLACE";
					break;
			
				case 36:
					str = "HIDEOUT_SIX_POINT_CABIN";
					break;
			
				case 37:
					str = "SETTLEMENT_BEECHERS_HOPE";
					break;
			
				case 38:
					str = "TOWN_BLACKWATER";
					break;
			
				case 39:
					str = "LANDMARK_QUAKERS_COVE";
					break;
			
				case 40:
					str = "HOMESTEAD_ADLER_RANCH";
					break;
			
				case 41:
					str = "LANDMARK_WINDOW_ROCK";
					break;
			
				case 42:
					str = "HOMESTEAD_CHEZ_PORTER";
					break;
			
				case 43:
					str = "HIDEOUT_COLTER";
					break;
			
				case 45:
					str = "LANDMARK_MILLESANI_CLAIM";
					break;
			
				case 48:
					str = "LANDMARK_TEMPEST_RIM";
					break;
			
				case 49:
					str = "LANDMARK_EWING_BASIN";
					break;
			
				case 50:
					str = "LANDMARK_CALUMET_RAVINE";
					break;
			
				case 54:
					str = "LANDMARK_THE_LOFT";
					break;
			
				case 56:
					str = "SETTLEMENT_WAPITI";
					break;
			
				case 57:
					str = "SETTLEMENT_AGUASDULCES";
					break;
			
				case 59:
					str = "LANDMARK_CINCO_TORRES";
					break;
			
				case 60:
					str = "LANDMARK_LA_CAPILLA";
					break;
			
				case 61:
					str = "TOWN_MANICATO";
					break;
			
				case 62:
					str = "LANDMARK_OLD_GREENBANK_MILL";
					break;
			
				case 64:
					str = "HOMESTEAD_CARMODY_DELL";
					break;
			
				case 65:
					str = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
			
				case 66:
					str = "HOMESTEAD_GUTHRIE_FARM";
					break;
			
				case 67:
					str = "LANDMARK_CUMBERLAND_FALLS";
					break;
			
				case 68:
					str = "HOMESTEAD_DOWNES_RANCH";
					break;
			
				case 69:
					str = "SETTLEMENT_EMERALD_RANCH";
					break;
			
				case 70:
					str = "LANDMARK_GRANGERS_HOGGERY";
					break;
			
				case 72:
					str = "HOMESTEAD_LARNED_SOD";
					break;
			
				case 74:
					str = "LANDMARK_LUCKYS_CABIN";
					break;
			
				case 75:
					str = "LANDMARK_FLATNECK_STATION";
					break;
			
				case 76:
					str = "TOWN_VALENTINE";
					break;
			
				case 77:
					str = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
			
				case 78:
					str = "TOWN_ANNESBURG";
					break;
			
				case 79:
					str = "HIDEOUT_BEAVER_HOLLOW";
					break;
			
				case 80:
					str = "LANDMARK_BLACK_BALSAM_RISE";
					break;
			
				case 81:
					str = "LANDMARK_BRANDYWINE_DROP";
					break;
			
				case 82:
					str = "SETTLEMENT_BUTCHER_CREEK";
					break;
			
				case 83:
					str = "HOMESTEAD_DOVERHILL";
					break;
			
				case 86:
					str = "HOMESTEAD_MACLEANS_HOUSE";
					break;
			
				case 87:
					str = "LANDMARK_MOSSY_FLATS";
					break;
			
				case 88:
					str = "LANDMARK_ROANOKE_VALLEY";
					break;
			
				case 89:
					str = "HOMESTEAD_WILLARDS_REST";
					break;
			
				case 92:
					str = "TOWN_VANHORN";
					break;
			
				case 93:
					str = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
			
				case 94:
					str = "LANDMARK_BOLGER_GLADE";
					break;
			
				case 95:
					str = "SETTLEMENT_CALIGA_HALL";
					break;
			
				case 96:
					str = "HOMESTEAD_CATFISH_JACKSONS";
					break;
			
				case 98:
					str = "HIDEOUT_CLEMENS_POINT";
					break;
			
				case 99:
					str = "HOMESTEAD_COMPSONS_STEAD";
					break;
			
				case 100:
					str = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
			
				case 102:
					str = "HOMESTEAD_LONNIES_SHACK";
					break;
			
				case 104:
					str = "LANDMARK_RADLEYS_PASTURE";
					break;
			
				case 105:
					str = "TOWN_RHODES";
					break;
			
				case 108:
					str = "LANDMARK_BEAR_CLAW";
					break;
			
				case 110:
					str = "SETTLEMENT_MANZANITA_POST";
					break;
			
				case 111:
					str = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
			
				case 112:
					str = "LANDMARK_TANNERS_REACH";
					break;
			
				case 114:
					str = "HIDEOUT_GAPTOOTH_BREACH";
					break;
			
				case 115:
					str = "TOWN_TUMBLEWEED";
					break;
			
				case 116:
					str = "SETTLEMENT_RATHSKELLER_FORK";
					break;
			
				case 117:
					str = "SETTLEMENT_BENEDICT_POINT";
					break;
			
				case 118:
					str = "HIDEOUT_FORT_MERCER";
					break;
			
				case 119:
					str = "SETTLEMENT_PLAINVIEW";
					break;
			
				case 120:
					str = "TOWN_ARMADILLO";
					break;
			
				case 121:
					str = "SETTLEMENT_COOTS_CHAPEL";
					break;
			
				case 123:
					str = "LANDMARK_RILEYS_CHARGE";
					break;
			
				case 124:
					str = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
			
				case 125:
					str = "HIDEOUT_TWIN_ROCKS";
					break;
			
				case 126:
					str = "TOWN_MACFARLANES_RANCH";
					break;
			
				case 127:
					str = "SETTLEMENT_THIEVES_LANDING";
					break;
			
				case MICRO:
					str = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str) || bParam5)
	{
		switch (hParam2)
		{
			case joaat("water_lannahechee_river"):
				str = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_O_CREAGHS_RUN"):
				str = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
		
			case joaat("water_upper_montana_river"):
				str = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_san_luis_river"):
				if (iParam1 == 4 || iParam1 == 12)
					str = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				else
					str = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_little_creek_river"):
				str = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_don_julio"):
				str = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
		
			case joaat("water_flat_iron_lake"):
				str = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_lower_montana_river"):
				str = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_owanjila"):
				str = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
		
			case joaat("water_stillwater_creek"):
				str = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_hawks_eye_creek"):
				str = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_kamassa_river"):
				if (iParam1 == 10)
					str = "WATER_KAMASSA_RIVER";
				else if (iParam1 == 2)
					str = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				else
					str = "WATER_KAMASSA_RIVER_BAYOU_NWA";
			
				*uParam6 = 1;
				break;
		
			case joaat("water_bahia_de_la_paz"):
				str = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
		
			case joaat("water_cairn_lake"):
				str = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
		
			case joaat("water_southfield_flats"):
				str = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
		
			case joaat("water_moonstone_pond"):
				str = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
		
			case joaat("WATER_CATTIAL_POND"):
				str = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_bayou_nwa"):
				str = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
		
			case joaat("water_whinyard_strait"):
				str = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
		
			case joaat("water_sea_of_coronado"):
				str = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
		
			case joaat("water_spider_gorge"):
				str = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
		
			case joaat("water_aurora_basin"):
				str = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
		
			case joaat("water_elysian_pool"):
				str = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
		
			case joaat("water_arroyo_de_la_vibora"):
				str = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
		
			case joaat("water_mattlock_pond"):
				str = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
		
			case joaat("water_dakota_river"):
				str = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
		
			case joaat("water_lake_isabella"):
				str = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
		
			case joaat("water_barrow_lagoon"):
				str = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
		
			case joaat("water_hot_springs"):
				str = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
		
			case joaat("water_deadboot_creek"):
				str = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
		
			case joaat("water_heartlands_overflow"):
				str = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
		
			case joaat("water_ringneck_creek"):
				str = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam1)
		{
			case 0:
				str = "DISTRICT_BAYOU_NWA";
				break;
		
			case 1:
				str = "DISTRICT_BIG_VALLEY";
				break;
		
			case 2:
				str = "DISTRICT_BLUEWATER_MARSH";
				break;
		
			case 3:
				str = "DISTRICT_CUMBERLAND_FOREST";
				break;
		
			case 4:
				str = "DISTRICT_GREAT_PLAINS";
				break;
		
			case 6:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 7:
				str = "DISTRICT_GRIZZLIES";
				break;
		
			case 8:
				str = "DISTRICT_GUARMA";
				break;
		
			case 9:
				str = "DISTRICT_HEARTLANDS";
				break;
		
			case 10:
				str = "DISTRICT_ROANOAKE_RIDGE";
				break;
		
			case 11:
				str = "DISTRICT_SCARLETT_MEADOWS";
				break;
		
			case 12:
				str = "DISTRICT_TALL_TREES";
				break;
		
			case 13:
				str = "DISTRICT_GAPTOOTH_RIDGE";
				break;
		
			case 14:
				str = "DISTRICT_RIO_BRAVO";
				break;
		
			case 15:
				str = "DISTRICT_CHOLLA_SPRINGS";
				break;
		
			case 16:
				str = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		switch (iParam3)
		{
			case 0:
				str = "STATE_AMBARINO";
				break;
		
			case 1:
				str = "STATE_NEW_HANOVER";
				break;
		
			case 2:
				str = "STATE_LEMOYNE";
				break;
		
			case 3:
				str = "STATE_WEST_ELIZABETH";
				break;
		
			case 4:
				str = "STATE_NEW_AUSTIN";
				break;
		
			case 5:
				str = "STATE_GUARMA";
				break;
		}
	}

	return str;
}

int func_305(eStackSize essParam0) // Position - 0xA2CE Hash - 0x224FC50D ^0x224FC50D
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
	else if (essParam0 <= 116)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

int func_306(int iParam0) // Position - 0xA3CA Hash - 0xA08D7C4E ^0xA08D7C4E
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

Hash func_307(int iParam0) // Position - 0xA485 Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_214(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_308(Hash hParam0) // Position - 0xA4BF Hash - 0x653F925B ^0x653F925B
{
	switch (hParam0)
	{
		case joaat("water_lannahechee_river"):
			return 1;
	
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
	
		case joaat("water_upper_montana_river"):
			return 1;
	
		case joaat("water_san_luis_river"):
			return 1;
	
		case joaat("water_little_creek_river"):
			return 1;
	
		case joaat("water_lake_don_julio"):
			return 0;
	
		case joaat("water_flat_iron_lake"):
			return 0;
	
		case joaat("water_lower_montana_river"):
			return 1;
	
		case joaat("water_owanjila"):
			return 0;
	
		case joaat("water_stillwater_creek"):
			return 1;
	
		case joaat("water_hawks_eye_creek"):
			return 1;
	
		case joaat("water_kamassa_river"):
			return 1;
	
		case joaat("water_cairn_lake"):
			return 0;
	
		case joaat("water_southfield_flats"):
			return 0;
	
		case joaat("water_moonstone_pond"):
			return 0;
	
		case joaat("WATER_CATTIAL_POND"):
			return 0;
	
		case joaat("water_bayou_nwa"):
			return 2;
	
		case joaat("water_whinyard_strait"):
			return 1;
	
		case joaat("water_sea_of_coronado"):
			return 1;
	
		case joaat("water_spider_gorge"):
			return 1;
	
		case joaat("water_aurora_basin"):
			return 0;
	
		case joaat("water_elysian_pool"):
			return 0;
	
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
	
		case joaat("water_mattlock_pond"):
			return 0;
	
		case joaat("water_dakota_river"):
			return 1;
	
		case joaat("water_dewberry_creek"):
			return 1;
	
		case joaat("water_lake_isabella"):
			return 0;
	
		case joaat("water_beartooth_beck"):
			return 1;
	
		case joaat("water_barrow_lagoon"):
			return 0;
	
		case joaat("water_hot_springs"):
			return 0;
	
		case joaat("water_deadboot_creek"):
			return 1;
	
		case joaat("water_heartlands_overflow"):
			return 0;
	
		case joaat("water_ringneck_creek"):
			return 1;
	
		default:
		
	}

	return -1;
}

char* func_309(int iParam0) // Position - 0xA61A Hash - 0x21CE226B ^0x9F28B5BA
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
	
		case 1:
			return "WATER_TYPE_RIVER";
	
		case 2:
			return "WATER_TYPE_SWAMP";
	
		default:
		
	}

	return "";
}

BOOL func_310(int iParam0, BOOL bParam1) // Position - 0xA655 Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_443(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

BOOL func_311(int iParam0, int iParam1) // Position - 0xA699 Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_214(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_312(eStackSize essParam0, BOOL bParam1) // Position - 0xA6E1 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

float func_313(float fParam0) // Position - 0xA714 Hash - 0xC643B4E3 ^0xC643B4E3
{
	return (fParam0 * 1.8f) + 32f;
}

const char* func_314(var uParam0, int iParam1) // Position - 0xA72A Hash - 0xB0CFF0C3 ^0x70C9E443
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_444(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

int func_315(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xA760 Hash - 0x10503CC4 ^0x6232183B
{
	int duration;
	var data;
	int num;

	duration = -2;
	duration = iParam2;
	duration.f_1 = iParam3;
	duration.f_2 = iParam4;
	duration.f_3 = iParam5;
	data.f_1 = sParam0;
	data.f_2 = sParam1;
	num = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&duration, &data, bParam6, bParam7);
	return num;
}

Player func_316() // Position - 0xA7A3 Hash - 0x7C4697AC ^0xA40D3BD2
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1224589.f_3;
		Global_36 = { Global_1224589.f_11 };
		return Global_1224589.f_5;
	}

	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

void func_317() // Position - 0xA7F1 Hash - 0xA6EF402A ^0xAE403A6B
{
	Global_1935630.f_13 = 0;
	Global_1935630.f_14 = 0;
	Global_1935630.f_26 = 0;
	Global_1935630.f_15 = 0;
	Global_1935630.f_16 = 0;
	Global_1935630.f_17 = 0;
	Global_1935630.f_18 = 0;
	Global_1935630.f_19 = -1;
	Global_1935630.f_20 = -1;
	Global_1935630.f_21 = -1;
	Global_1935630.f_23 = 0;
	return;
}

BOOL func_318(int iParam0) // Position - 0xA846 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_445(iParam0))
		return false;

	return func_446(iParam0);
}

BOOL func_319() // Position - 0xA862 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_201() != -1)
		return false;

	if (!func_124())
		return false;

	if (!func_165(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[2 /*74*/].f_1, true) && func_165(Global_1347702[120 /*49*/].f_15, true) && !func_165(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[37 /*74*/].f_1, true) && !func_165(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[57 /*74*/].f_1, true) && !func_165(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[26 /*74*/].f_1, true) && !func_165(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_165(Global_1835011[62 /*74*/].f_1, true) && func_165(Global_1835011[63 /*74*/].f_1, true) && !func_165(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[75 /*74*/].f_1, true) && !func_165(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_165(Global_1835011[76 /*74*/].f_1, true) && !func_165(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[40 /*74*/].f_1, true) && func_165(Global_1835011[41 /*74*/].f_1, true) && !func_165(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[62 /*74*/].f_1, true) && func_165(Global_1835011[63 /*74*/].f_1, true) && !func_165(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_165(Global_1835011[65 /*74*/].f_1, true) && func_165(Global_1835011[66 /*74*/].f_1, true) && !func_165(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

void func_320() // Position - 0xAAA8 Hash - 0xACDE207 ^0x2B185001
{
	PLAYER::_ENABLE_CUSTOM_DEADEYE_ABILITY(PLAYER::PLAYER_ID(), true);

	if (func_318(47))
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), true);
	else
		PLAYER::_ENABLE_EAGLEEYE(PLAYER::PLAYER_ID(), false);

	return;
}

BOOL func_321(int iParam0) // Position - 0xAAD7 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_447(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

float func_322(float fParam0, float fParam1) // Position - 0xAB26 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_323(int iParam0) // Position - 0xAB54 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_438())
		return false;

	return func_165(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_324(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0xAB76 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_448(pedParam0, &str);
}

void func_325(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xABBD Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_328(iParam0, fParam1, true);

	func_450(iParam0, func_449(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_326(float fParam0) // Position - 0xABEC Hash - 0x92695771 ^0x6A4B16BA
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_327() // Position - 0xAC20 Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_328(int iParam0, float fParam1, BOOL bParam2) // Position - 0xAC4D Hash - 0xFB55A421 ^0xFB55A421
{
	eStackSize stackSize;
	int num;

	stackSize = func_175();
	func_451(&stackSize, 0, 0, 0, 1, 0, 0);
	num = func_452(iParam0, 2);

	if (func_454(stackSize, func_453(iParam0, 2), true))
	{
		func_455(iParam0, 0, 2);
		num = 0;
	}

	if (num >= 2)
	{
		func_54(88, bParam2);
		return 0f;
	}

	func_456(iParam0, func_175(), 2);
	func_455(iParam0, num + 1, 2);
	return fParam1;
}

float func_329(float fParam0, float fParam1, float fParam2) // Position - 0xACB6 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_330(int iParam0) // Position - 0xACDD Hash - 0x3FEE6090 ^0x3FEE6090
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		default:
		
	}

	return false;
}

char* func_331(int iParam0) // Position - 0xAD0C Hash - 0x21CE226B ^0xF1D7AEE1
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
	
		case 1:
			return "PlayerOverpower";
	
		case 2:
			return "PlayerOverpower";
	
		default:
		
	}

	return "";
}

void func_332(int iParam0) // Position - 0xAD47 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_457(2);
	func_458(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_333(int iParam0) // Position - 0xAD84 Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_459(2);
	func_460(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_334(int iParam0) // Position - 0xADC0 Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_461(2);
	func_462(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_335(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xADFD Hash - 0x5C29635D ^0x5C29635D
{
	func_450(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

float func_336(int iParam0) // Position - 0xAE17 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_337() // Position - 0xAE2B Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_201() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_463(Global_1347477.f_195, false);
}

int func_338(float fParam0) // Position - 0xAE67 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

void func_339(var uParam0, var uParam1) // Position - 0xAE82 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_124())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_340(int iParam0, float fParam1) // Position - 0xAEBB Hash - 0x45CA0D9B ^0x1B2D34F8
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_465(1, flag, true, str);
		func_466(!flag, fParam1 < 0f, flag);
		num = func_218(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_206();
	}
	else if (iParam0 == 10)
	{
		num = func_218(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_218(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_341(int iParam0) // Position - 0xAF91 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

PersChar func_342(int iParam0) // Position - 0xAFA8 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_341(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

float func_343() // Position - 0xAFC8 Hash - 0xB0642BCC ^0x4D6FEEA4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_467())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_217(2);

	if (Global_1347477.f_119)
		return func_217(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_468();
	num3 = func_469();
	num4 = func_470();
	num5 = func_471();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_472());
	num8 = func_217(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_473(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_474(3, num9, num9 > 100f);
	return func_329(num8, -100f, 100f);
}

float func_344() // Position - 0xB0F1 Hash - 0x951B1CCC ^0x7B312694
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_467())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_217(1);

	if (Global_1347477.f_119)
		return func_217(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_468();
	num3 = func_469();
	num4 = func_470();
	num5 = func_471();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_472());
	num8 = func_217(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_473(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_474(2, num9, num9 > 100f);
	return func_329(num8, -100f, 100f);
}

float func_345() // Position - 0xB21A Hash - 0x4D146F4A ^0xFC60D2FE
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_467())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_217(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_475())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_476())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_217(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_468();
	num3 = func_469();
	num4 = func_470();
	num5 = func_471();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_472());
	num8 = func_217(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_473(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_474(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_217(0);

	return func_329(num8, -100f, 100f);
}

BOOL func_346(int iParam0) // Position - 0xB3C1 Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_210(iParam0, Global_1310750.f_16072 | 64);
}

void func_347(int iParam0) // Position - 0xB3D9 Hash - 0x3D0B339A ^0xB87B2B3D
{
	int i;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;

	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[i] = -1881652455;
	}

	return;
}

int func_348(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB466 Hash - 0x460680B1 ^0xEA5BF9A6
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
			if (essParam0 == func_149())
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			break;
	
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
	
		case 22:
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_PRONGHORN_RANCH");
		
			if (func_165(Global_1835011[59 /*74*/].f_1, true))
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
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_BEECHERS_HOPE");
		
			if (func_165(Global_1347702[9 /*49*/].f_15, true))
				return joaat("LAW_REGION_BEECHERS_HOPE");
			else if (func_318(45))
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			else
				return joaat("LAW_REGION_GREAT_PLAINS");
			break;
	
		case 38:
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_318(45))
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
			if (func_477(essParam0))
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
			if (func_477(essParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 110:
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_MANZANITA_POST");
		
			if (func_318(45))
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
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_318(45))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_478(essParam0);
	
		if (num != -1)
			return func_479(num, bParam1);
	}

	return 0;
}

int func_349(int iParam0) // Position - 0xB788 Hash - 0x4BF152B5 ^0x4BF152B5
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

void func_350(eStackSize essParam0, BOOL bParam1) // Position - 0xB8EA Hash - 0x28F0F3B1 ^0xD4160260
{
	BOOL flag;

	if (!func_273(essParam0))
		return;

	flag = func_312(essParam0, 67108864);

	if (bParam1)
	{
		if (!flag && func_148(essParam0) == 1 && essParam0 != 120 && essParam0 != 92)
		{
			func_480(essParam0, func_175());
			func_481(essParam0, 67108864);
		}
	}
	else if (flag)
	{
		func_482(essParam0, 67108864);
		func_480(essParam0, -15);
	}

	func_483(essParam0);
	return;
}

int func_351(int iParam0) // Position - 0xB96F Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

void func_352(int iParam0, float fParam1, BOOL bParam2) // Position - 0xB99E Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_484(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_353(int iParam0) // Position - 0xB9EE Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_354(int iParam0) // Position - 0xBA12 Hash - 0x68BC9945 ^0x68BC9945
{
	switch (iParam0)
	{
		case 0:
			return 87;
	
		case 1:
			return 85;
	
		case 2:
			return 86;
	
		default:
		
	}

	return -1;
}

char* func_355(int iParam0) // Position - 0xBA44 Hash - 0x21CE226B ^0x4FC58DD5
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
	
		case 1:
			return "StaminaCoreValue";
	
		case 2:
			return "DeadEyeCoreValue";
	
		default:
		
	}

	return "";
}

void func_356(BOOL bParam0, int iParam1) // Position - 0xBA7F Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_357(BOOL bParam0, int iParam1) // Position - 0xBA90 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_358(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0xBAA5 Hash - 0x303BFB8D ^0xBCF80455
{
	int i;
	Volume volLockRequestId;
	Vector3 vector;

	if (_IS_NULL_VECTOR(uParam0))
		return;

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId))
		{
			vector = { VOLUME::_0xC4019CF9AE8E931A(volLockRequestId) };
		
			if (func_485(vector, uParam0, 2f, true))
			{
				if (iParam3 == 0 || VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vector, 2f, 0, iParam3, 16384))
				{
					VOLUME::_RELEASE_LOCK_VOLUME(volLockRequestId);
					Global_1911670[i] = 0;
				}
			}
		}
	}

	return;
}

BOOL func_359(int iParam0, int iParam1) // Position - 0xBB29 Hash - 0x4F089875 ^0x2D4019CD
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
		return false;

	return func_486(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

Hash func_360() // Position - 0xBB5D Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

void func_361(int iParam0, int iParam1) // Position - 0xBB66 Hash - 0x3095F76B ^0x9DAA87F4
{
	if (iParam0 >= 0 && iParam0 < 6)
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;

	return;
}

int func_362(int iParam0) // Position - 0xBB8C Hash - 0xACA56E21 ^0x79269304
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

BOOL func_363(int iParam0) // Position - 0xBBBF Hash - 0xDCE9DC47 ^0xDCE9DC47
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (func_362(iParam0) == 0)
		return false;

	return true;
}

void func_364(int iParam0) // Position - 0xBBF2 Hash - 0xB0910AA9 ^0xD61D2BCE
{
	Ped ped;
	Hash entityModel;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_368(iParam0))
		return;

	ped = func_278(iParam0);
	func_487(iParam0);

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);

	entityModel = ENTITY::GET_ENTITY_MODEL(ped);

	if (PED::_IS_PED_MODEL_SUPPRESSED(entityModel))
		if (!func_488(entityModel))
			PED::SET_PED_MODEL_IS_SUPPRESSED(entityModel, false);

	PED::DELETE_PED(&ped);
	func_489(iParam0, 0);
	func_490(iParam0);
	return;
}

void func_365(int iParam0) // Position - 0xBC76 Hash - 0x7F6EE38F ^0x9A677D2
{
	var unk;
	int i;
	int j;

	iParam0 = func_117(iParam0);

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
	func_491(&unk);
	func_492(iParam0, unk);
	func_493(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_494(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_495(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_496(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));

	for (i = 0; i < 2; i = i + 1)
	{
		func_497(i, &Global_40.f_1095.f_1[iParam0 /*436*/].f_398[i /*4*/]);
	}

	for (j = 0; j < 3; j = j + 1)
	{
		func_498(j, &Global_40.f_1095.f_1[iParam0 /*436*/].f_407[j /*4*/]);
	}

	func_499(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_500(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_501(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
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

void func_366(int iParam0) // Position - 0xBFC9 Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3054 = iParam0;
	return;
}

void func_367(int iParam0) // Position - 0xBFDC Hash - 0xC20F1267 ^0xD623971A
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
	return;
}

BOOL func_368(int iParam0) // Position - 0xBFF1 Hash - 0xF694EDBC ^0xDC133D63
{
	iParam0 = func_117(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_369(int iParam0) // Position - 0xC02B Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_368(iParam0))
		return false;

	ped = func_278(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

BOOL func_370(int iParam0) // Position - 0xC07F Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_368(iParam0))
		return false;

	ped = func_278(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return true;

	return false;
}

void func_371(int iParam0) // Position - 0xC0D4 Hash - 0x2692E663 ^0xF0DB5F3E
{
	Ped ped;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	if (!func_368(iParam0))
		return;

	ped = func_278(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	ENTITY::SET_ENTITY_HEALTH(ped, 0, 0);
	return;
}

void func_372(int iParam0, int iParam1) // Position - 0xC11F Hash - 0x7A45E039 ^0xE802421E
{
	Player playerIndex;
	Ped horse;
	BOOL flag;
	Ped horse2;
	BOOL flag2;

	playerIndex = PLAYER::GET_PLAYER_INDEX();
	PLAYER::IS_PLAYER_DEAD(playerIndex);
	func_502(iParam0);
	func_502(iParam0);
	func_503(iParam0, iParam1);
	func_504(iParam0, iParam1);
	func_505(iParam0, iParam1);
	horse = func_278(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(horse))
	{
		if (iParam0 == 0 || iParam0 == 1)
			func_506(horse);
	
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

	horse2 = func_278(iParam1);

	if (ENTITY::DOES_ENTITY_EXIST(horse2))
	{
		if (iParam1 == 0 || iParam1 == 1)
			func_506(horse2);
	
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

	func_507();
	return;
}

BOOL func_373() // Position - 0xC241 Hash - 0x57592B8C ^0xB4B7573B
{
	Object* p_object;

	p_object = func_508();

	if (ENTITY::DOES_ENTITY_EXIST(p_object))
		return true;

	return false;
}

void func_374() // Position - 0xC25D Hash - 0x9A84CB87 ^0x788CD227
{
	Object* p_object;

	p_object = func_508();

	if (!ENTITY::DOES_ENTITY_EXIST(p_object))
		return;

	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(p_object))
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(p_object, true, true);

	OBJECT::DELETE_OBJECT(&p_object);
	func_509(0);
	return;
}

void func_375(var uParam0, var uParam1, var uParam2) // Position - 0xC295 Hash - 0xD65C08CA ^0xEAB2D54F
{
	Global_40.f_1095.f_3054.f_77 = { uParam0 };
	return;
}

Ped func_376(int iParam0) // Position - 0xC2AE Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_377(int iParam0) // Position - 0xC2E1 Hash - 0xACA56E21 ^0xEE9738B3
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_378(int iParam0) // Position - 0xC314 Hash - 0x728A4C05 ^0x728A4C05
{
	var unk;
	var unk2;
	var unk3;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_510(&unk, &unk2, &unk3);
	func_511(iParam0, unk);
	func_512(iParam0, unk2);
	func_513(iParam0, unk3);
	func_514(iParam0, 1);
	func_515(iParam0, 1);
	return;
}

void func_379(int iParam0) // Position - 0xC367 Hash - 0xA5F9E65B ^0xA5F9E65B
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	func_516(iParam0, 1);
	return;
}

void func_380(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xC390 Hash - 0xFEF7EAB ^0x64576AA5
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_19 = { uParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
	return;
}

BOOL func_381(int iParam0) // Position - 0xC3CE Hash - 0xBDE1A61 ^0xBDE1A61
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return func_517(iParam0, 1);
}

struct<2> func_382(int iParam0) // Position - 0xC3F9 Hash - 0xC0CC9820 ^0xC0CC9820
{
	var unk;
	var unk3;
	var unk4;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return unk;

	if (iParam0 >= 7)
		return unk;

	!func_518(iParam0, &unk3);
	!func_519(iParam0, &unk4);
	unk = unk3;
	unk.f_1 = unk4;
	return unk;
}

struct<6> func_383() // Position - 0xC449 Hash - 0x98D1204F ^0xBF85383B
{
	var unk;
	var unk7;
	var unk8;
	var unk9;
	var unk10;
	var unk11;
	var unk12;

	if (func_520(joaat("SLOTID_HORSE_BEDROLL"), &unk7))
		unk.f_4 = unk7;

	if (func_520(joaat("SLOTID_HORSE_BLANKET"), &unk8))
		unk = unk8;

	if (func_520(joaat("SLOTID_HORSE_HORN"), &unk9))
		unk.f_2 = unk9;

	if (func_520(joaat("SLOTID_HORSE_SADDLEBAG"), &unk10))
		unk.f_5 = unk10;

	if (func_520(joaat("SLOTID_HORSE_STIRRUP"), &unk11))
		unk.f_3 = unk11;

	if (func_520(joaat("SLOTID_HORSE_SADDLE"), &unk12))
		unk.f_1 = unk12;

	return unk;
}

void func_384(Ped pedParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0xC4CB Hash - 0x50380B5F ^0xA5E53457
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return;

	func_521(pedParam0);
	func_522(pedParam0, uParam1);
	func_523(pedParam0);
	func_524(pedParam0, uParam2);

	if (hParam3 != 0)
		func_525(pedParam0, hParam3, false);

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, true);
	return;
}

BOOL func_385(int iParam0) // Position - 0xC53F Hash - 0x79966B74 ^0xA532C902
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_386(int iParam0) // Position - 0xC56D Hash - 0x93699D3A ^0x887A14C1
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

void func_387(int iParam0) // Position - 0xC5A8 Hash - 0x79C2D19 ^0x7856ADEC
{
	int threadId;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	threadId = func_388(iParam0);

	if (!SCRIPTS::DOES_THREAD_EXIST(threadId))
		func_490(iParam0);
	else if (!SCRIPTS::IS_THREAD_ACTIVE(threadId, false))
		func_490(iParam0);

	return;
}

int func_388(int iParam0) // Position - 0xC5F6 Hash - 0x79966B74 ^0xE90595E1
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_3;
}

BOOL func_389() // Position - 0xC624 Hash - 0x54A0CAC ^0x54A0CAC
{
	return func_58(70);
}

BOOL func_390(int iParam0) // Position - 0xC632 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

void func_391(BOOL bParam0, eStackSize essParam1, int iParam2, int iParam3) // Position - 0xC670 Hash - 0x4C217CF1 ^0x4C217CF1
{
	*iParam3 = func_392(bParam0);
	*essParam1 = func_429(bParam0);
	*iParam2 = func_526(bParam0);
	return;
}

int func_392(BOOL bParam0) // Position - 0xC693 Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_393(int iParam0) // Position - 0xC6A0 Hash - 0x73030ECA ^0x73030ECA
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return true;
}

int func_394(var uParam0) // Position - 0xC6BF Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_527(i, 1);
	}

	return -358215195;
}

void func_395(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0xC6FA Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_244(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_244(20))
				return;
		}
	}

	func_245(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_126(8);
	return;
}

BOOL func_396(int iParam0) // Position - 0xC7FE Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

BOOL func_397(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC80A Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_396(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

BOOL func_398(int iParam0, int iParam1, BOOL bParam2) // Position - 0xC834 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_396(iParam0))
			return false;

	func_405(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

BOOL func_399(int iParam0) // Position - 0xC86F Hash - 0xDA629583 ^0xDA629583
{
	return func_397(iParam0, 16, true);
}

BOOL func_400(int iParam0) // Position - 0xC880 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

BOOL func_401(int iParam0) // Position - 0xC89D Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_402(Ped pedParam0, Object obParam1) // Position - 0xC8BC Hash - 0x9BD5E73F ^0xD367FD44
{
	Object object;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	object = obParam1;

	if (object == 0)
		return true;

	if (func_261(object, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_261(object, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_261(object, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_261(object, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_261(object, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_261(object, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_261(object, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_261(object, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_403(int iParam0) // Position - 0xC9BB Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_396(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_528(iParam0);
	
		if (hash != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(hash);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}

	return;
}

int func_404(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xCA23 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

int func_405(int iParam0, var uParam1, var uParam2) // Position - 0xCA4B Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_406() // Position - 0xCA68 Hash - 0xFF29F962 ^0xFF29F962
{
	int num;

	num = Global_1946054.f_529[9];
	num = num + Global_1946054.f_529[4];
	num = num + Global_1946054.f_529[10];
	num = num + Global_1946054.f_529[1];
	num = num + Global_1946054.f_529[2];
	num = num + Global_1946054.f_529[6];
	num = num + Global_1946054.f_529[29];
	num = num + Global_1946054.f_529[26];
	num = num + Global_1946054.f_529[18];
	num = num + Global_1946054.f_529[19];
	return num > 0;
}

BOOL func_407(Hash hParam0, int iParam1) // Position - 0xCB0D Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_256(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_529(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_530("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_531(&unk, i, num, num2))
			{
			}
			else if (!func_152(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_532(num);
				return true;
			}
		}
	
		func_532(num);
	}

	return false;
}

int func_408(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCBB5 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_256(hParam0, 0))
		return 0;

	num = func_185(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_529(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_533(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_534(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_409() // Position - 0xCC37 Hash - 0x6AC5469B ^0xEA730EC
{
	Hash weaponHash;
	int weaponHash2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
		return 1;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash2, true, 1, false);

	if (weaponHash2 == joaat("WEAPON_UNARMED"))
		if (weaponHash == joaat("WEAPON_UNARMED"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && !func_276(weaponHash) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
			return 3;
		else if (weaponHash == joaat("weapon_kit_binoculars"))
			return 1;
		else if (WEAPON::IS_WEAPON_VALID(weaponHash) && func_276(weaponHash) || weaponHash == joaat("WEAPON_LASSO"))
			return 1;
		else
			return 0;
	else if (weaponHash == joaat("WEAPON_UNARMED"))
		return 1;
	else
		return 0;

	return 0;
}

Blip func_410(eStackSize essParam0) // Position - 0xCD2D Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_139(essParam0))
		return num;

	if (Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
		num = joaat("BLIP_STYLE_MISSION");
	else if (Global_1347702[essParam0 /*49*/].f_12 & 512 != 0)
		if (Global_40.f_1093 == Global_1347702[essParam0 /*49*/])
			num = joaat("BLIP_STYLE_RCM_TRACKED");
		else
			num = joaat("BLIP_STYLE_RCM");
	else if (Global_40.f_1093 == Global_1347702[essParam0 /*49*/])
		num = joaat("BLIP_STYLE_RCM_TRACKED");
	else
		num = joaat("BLIP_STYLE_RCM");

	return num;
}

BOOL func_411(eStackSize essParam0) // Position - 0xCDC0 Hash - 0xA89AC49 ^0x69E11C5C
{
	if (func_201() != -1)
		return false;

	if (!func_139(essParam0))
		return false;

	if (Global_1347702[essParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[essParam0 /*49*/].f_13 & 2048 != 0)
		return false;

	if (Global_1347702[essParam0 /*49*/].f_18 > -1f)
		return true;

	return false;
}

void func_412(int iParam0) // Position - 0xCE23 Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_201())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 || iParam0;
			break;
	}

	return;
}

void func_413(eStackSize essParam0) // Position - 0xCE4F Hash - 0x61A76EF4 ^0x86150C0D
{
	if (!func_411(essParam0))
	{
		if (Global_1347702[essParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
					MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			
				func_420(&(Global_1347702[essParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37))
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
		
			func_267(&(Global_1347702[essParam0 /*49*/].f_13), 32);
		}
	}

	return;
}

void func_414(eStackSize essParam0) // Position - 0xCEF2 Hash - 0xAC04978C ^0x82563A0D
{
	if (Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
	
		switch (essParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[essParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}

	return;
}

eStackSize func_415(eStackSize essParam0) // Position - 0xCF49 Hash - 0x84838E68 ^0x84838E68
{
	switch (essParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 43;
	
		case 1:
			return 71;
	
		case 2:
			return 98;
	
		case 3:
			return 9;
	
		case 4:
			return 58;
	
		case 5:
			return 4;
	
		case 6:
			return 79;
	
		case 7:
			return 22;
	
		case 8:
			return 37;
	
		default:
		
	}

	essParam0 != -1;
	return -1;
}

BOOL func_416(Hash hParam0) // Position - 0xCFCC Hash - 0xC62F3EC7 ^0x941BF203
{
	if (hParam0 >= 0 && hParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[hParam0]);

	return false;
}

BOOL func_417(eStackSize essParam0) // Position - 0xCFF5 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_535(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_536(essParam0))
			if (BUILTIN::VDIST(Global_36, func_537(essParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[essParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_537(essParam0), false) <= func_538();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[essParam0 /*35*/].f_15, false) <= func_538();
	}

	return func_60();
}

BOOL func_418(eStackSize essParam0, BOOL bParam1, eStackSize essParam2) // Position - 0xD085 Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[essParam0 /*49*/].f_37) && Global_1347702[essParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[essParam0 /*49*/].f_27 == essParam2;

	return false;
}

void func_419(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0xD0C9 Hash - 0x436A2EB9 ^0x436A2EB9
{
	int num;
	eStackSize stackSize;
	Hash styleHash;

	if (!func_103(iParam0))
		return;

	switch (func_238(iParam0))
	{
		case 1:
			num = func_282(iParam0);
		
			if (func_539(num, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
				if (func_540(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_540(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[num /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[num /*74*/].f_27, styleHash);
			
				if (!func_541(num))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_264(&Global_1835011[num /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[num /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			stackSize = func_282(iParam0);
		
			if (func_542(stackSize, bParam1, bParam2, essParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_410(stackSize))
				{
					case joaat("BLIP_STYLE_RCM_BOUNTY"):
						styleHash = joaat("BLIP_STYLE_RCM_BOUNTY_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM"):
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_MISSION"):
						styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM_TRACKED"):
						styleHash = joaat("BLIP_STYLE_RCM_TRACKED_HIDDEN");
						break;
				
					default:
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				}
			}
			else
			{
				styleHash = func_410(stackSize);
			}
		
			if (Global_1347702[stackSize /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[stackSize /*49*/].f_37, styleHash);
				func_414(stackSize);
				Global_1347702[stackSize /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

void func_420(int iParam0, int iParam1) // Position - 0xD2C5 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_421(eStackSize essParam0) // Position - 0xD2D6 Hash - 0x38C3233C ^0x38C3233C
{
	if (essParam0 == 97 || essParam0 == 99 || essParam0 == 6)
		return true;

	return false;
}

int func_422(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0xD300 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_423(eStackSize essParam0, BOOL bParam1) // Position - 0xD33B Hash - 0xD9457448 ^0xD9457448
{
	Global_40.f_490.f_402[essParam0] = Global_40.f_490.f_402[essParam0] || bParam1;
	return;
}

BOOL func_424(eStackSize essParam0, var uParam1) // Position - 0xD360 Hash - 0xF607B79C ^0x9512C6CD
{
	if (essParam0 == 90)
	{
		if (func_543(Global_1347702[essParam0 /*49*/].f_15) != 0)
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

int func_425(var uParam0, var uParam1, var uParam2) // Position - 0xD3F6 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_544(uParam0, 0f, 0f, 0, 2);
	return func_544(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

BOOL func_426(int iParam0, var uParam1) // Position - 0xD431 Hash - 0x30A0D5A8 ^0x30A0D5A8
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
	
		case 1:
			*uParam1 = 1;
			break;
	
		default:
			return false;
	}

	return true;
}

char* func_427(int iParam0) // Position - 0xD463 Hash - 0x632600A ^0x5260AA06
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "HealthCoreValue";
			break;
	
		case 1:
			str = "StaminaCoreValue";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_428(int iParam0) // Position - 0xD49C Hash - 0x632600A ^0x8534DF3F
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "isLowHealthCoreActive";
			break;
	
		case 1:
			str = "isLowStaminaCoreActive";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

int func_429(BOOL bParam0) // Position - 0xD4D5 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

void func_430(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0xD4E8 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_431(int iParam0) // Position - 0xD519 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_545(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_432(var uParam0, int iParam1) // Position - 0xD55A Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_433(var uParam0, int iParam1) // Position - 0xD5E0 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_434(var uParam0, int iParam1) // Position - 0xD61C Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_291(*uParam0);
	num2 = func_290(*uParam0);

	if (iParam1 < 1 || iParam1 > func_296(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_435(var uParam0, int iParam1) // Position - 0xD66F Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_436(var uParam0, int iParam1) // Position - 0xD6AA Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_437(var uParam0, int iParam1) // Position - 0xD6E3 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_438() // Position - 0xD71B Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_201() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_439() // Position - 0xD740 Hash - 0x7BF82DA8 ^0x7BF82DA8
{
	if (func_201() != false)
		return true;

	return true;
}

int func_440(var uParam0, var uParam1, var uParam2) // Position - 0xD755 Hash - 0xD993B6FD ^0xD993B6FD
{
	int i;

	for (i = 0; i < 51; i = i + 1)
	{
		if (func_546(uParam0, i))
			return i;
	}

	return -1;
}

const char* func_441(int iParam0) // Position - 0xD783 Hash - 0xE6862179 ^0x36DC7B27
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
	
		case 1:
			return "LANDMARK_SCRATCHING_POST";
	
		case 2:
			return "LANDMARK_JORGES_GAP";
	
		case 3:
			return "LANDMARK_MERCER_STATION";
	
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
	
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
	
		case 6:
			return "LANDMARK_SILENT_STEAD";
	
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
	
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
	
		case 9:
			return "LANDMARK_TWO_CROWS";
	
		case 10:
			return "LANDMARK_REPENTANCE";
	
		case 11:
			return "LANDMARK_BENEDICT_PASS";
	
		case 12:
			return "WATER_MANTECA_FALLS";
	
		case 13:
			return "SETTLEMENT_LIMPANY";
	
		case 14:
			return "WATER_MOUNT_SHANN";
	
		case 15:
			return "LANDMARK_THREE_SISTERS";
	
		case 16:
			return "HIDEOUT_PIKES_BASIN";
	
		case 17:
			return "SETTLEMENT_EL_NIDO";
	
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
	
		case 19:
			return "LANDMARK_ERIS_FIELD";
	
		case 20:
			return "LANDMARK_GRANITE_PASS";
	
		case 21:
			return "LANDMARK_VENTERS_PLACE";
	
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
	
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
	
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
	
		case 25:
			return "LANDMARK_CITADEL_ROCK";
	
		case 26:
			return "LANDMARK_CUEVA_SECA";
	
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
	
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
	
		case 29:
			return "LANDMARK_DONNER_FALLS";
	
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
	
		case 32:
			return "LANDMARK_FORT_BRENNAND";
	
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
	
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
	
		case 35:
			return "LANDMARK_MESCALERO";
	
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
	
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
	
		case 38:
			return "LANDMARK_BROKEN_TREE";
	
		case 39:
			return "LANDMARK_BARDS_CROSSING";
	
		case 40:
			return "LANDMARK_FACE_ROCK";
	
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
	}

	return "";
}

BOOL func_442(eStackSize essParam0) // Position - 0xDA67 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}

	return false;
}

BOOL func_443(int iParam0) // Position - 0xDA91 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

const char* func_444(const char* sParam0, int iParam1) // Position - 0xDAA7 Hash - 0x9E99F03 ^0x50EC2AE9
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_445(int iParam0) // Position - 0xDAC1 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_446(int iParam0) // Position - 0xDAD4 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

int func_447(int iParam0, int iParam1) // Position - 0xDAFE Hash - 0x8FA0E29 ^0xC3F68E87
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

BOOL func_448(Ped pedParam0, Any* panParam1) // Position - 0xEC17 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

float func_449(int iParam0, int iParam1) // Position - 0xEC27 Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_547();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/];
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_450(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0xEC72 Hash - 0xB3CE93F ^0x26AD2896
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_547();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_548(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_549(ped, iParam0, fParam1);
	func_550(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_216(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_451(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xED28 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_290(*uParam0);
	i = func_291(*uParam0);
	j = func_292(*uParam0);
	k = func_293(*uParam0);
	l = func_294(*uParam0);
	m = func_295(*uParam0);

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

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num3)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
	
		if (num2 < 0)
		{
			iParam6 = iParam6 + 1;
			i = i + 12;
		}
	
		num3 = func_296(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_297(uParam0, m, l, k, j, i, num);
	return;
}

int func_452(int iParam0, int iParam1) // Position - 0xEE9B Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_547();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

eStackSize func_453(int iParam0, int iParam1) // Position - 0xEEEA Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_547();

	switch (iParam1)
	{
		case 0:
			return Global_1954819.f_753.f_5[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

BOOL func_454(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0xEF3B Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_551(essParam1) || !func_551(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_455(int iParam0, int iParam1, int iParam2) // Position - 0xEF68 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_547();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_456(int iParam0, eStackSize essParam1, int iParam2) // Position - 0xEFBD Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_547();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = essParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = essParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_457(int iParam0) // Position - 0xF012 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_547();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850;
	
		case 1:
			return Global_1954819.f_866.f_115;
	
		default:
		
	}

	return -1;
}

void func_458(float fParam0, Ped pedParam1) // Position - 0xF051 Hash - 0x2062487E ^0xADB8AE45
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_459(int iParam0) // Position - 0xF093 Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_547();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_2;
	
		case 1:
			return Global_1954819.f_866.f_115.f_2;
	
		default:
		
	}

	return -1;
}

void func_460(float fParam0) // Position - 0xF0D6 Hash - 0xEBF0A2AB ^0x54370C29
{
	Ped ped;

	if (fParam0 == 0f)
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::_CHANGE_PED_STAMINA(ped, fParam0);
	return;
}

int func_461(int iParam0) // Position - 0xF110 Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_547();

	switch (iParam0)
	{
		case 0:
			return Global_1954819.f_850.f_1;
	
		case 1:
			return Global_1954819.f_866.f_115.f_1;
	
		default:
		
	}

	return -1;
}

void func_462(float fParam0, BOOL bParam1) // Position - 0xF153 Hash - 0x1FE7F29A ^0xE2FCD967
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();
	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 0);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

BOOL func_463(eStackSize essParam0, BOOL bParam1) // Position - 0xF1E7 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_454(func_175(), essParam0, bParam1);
}

var func_464(BOOL bParam0, var uParam1, var uParam2) // Position - 0xF1FB Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_465(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0xF212 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_466(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF256 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_484(0, 1, bParam0, bParam1);
	str = MISC::VAR_STRING(2, str);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);

	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}

	return;
}

BOOL func_467() // Position - 0xF34E Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_468() // Position - 0xF36A Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_336(13);
	num2 = func_338(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_469() // Position - 0xF3AD Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_470() // Position - 0xF3C8 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_552())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_471() // Position - 0xF3E7 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_472() // Position - 0xF429 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_473(int iParam0, int iParam1, BOOL bParam2) // Position - 0xF437 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_484(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_474(int iParam0, float fParam1, BOOL bParam2) // Position - 0xF483 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_484(iParam0, 2, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);

	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}

	return;
}

BOOL func_475() // Position - 0xF5C9 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_336(12) <= -99f;
}

BOOL func_476() // Position - 0xF5DD Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_336(12) >= 99f;
}

BOOL func_477(eStackSize essParam0) // Position - 0xF5F1 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_273(essParam0))
		return false;

	return func_312(essParam0, 33554432);
}

int func_478(eStackSize essParam0) // Position - 0xF612 Hash - 0x224FC50D ^0x224FC50D
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

int func_479(int iParam0, BOOL bParam1) // Position - 0xF70E Hash - 0x9CC4908E ^0xB6CFBFA0
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
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_318(45))
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
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_318(45))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_201() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_318(45))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

void func_480(eStackSize essParam0, eStackSize essParam1) // Position - 0xF888 Hash - 0x7388F0C5 ^0x866A1FF3
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/].f_2 = essParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/].f_2 = essParam1;
	return;
}

void func_481(eStackSize essParam0, BOOL bParam1) // Position - 0xF8B9 Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] || bParam1;

	return;
}

void func_482(eStackSize essParam0, BOOL bParam1) // Position - 0xF8FC Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[essParam0 /*11*/] = Global_23118[essParam0 /*11*/] - Global_23118[essParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[essParam0 /*11*/] = Global_1058888.f_40545[essParam0 /*11*/] - Global_1058888.f_40545[essParam0 /*11*/] && bParam1;
	return;
}

void func_483(eStackSize essParam0) // Position - 0xF955 Hash - 0x1C686B36 ^0x1C686B36
{
	if (!func_273(essParam0))
		return;

	if (func_553(essParam0))
		func_554(essParam0);
	else
		func_555(essParam0);

	return;
}

char* func_484(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF982 Hash - 0xC24B5846 ^0xE16B70E7
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					else
						return bParam3 ? "PMPLAYER_CONDITION_TEMPERATURE_COLD" : "PMPLAYER_CONDITION_TEMPERATURE_HOT";
					break;
			
				case 2:
					return bParam2 ? "PMPLAYER_CONDITION_HONOR_GOOD" : "PMPLAYER_CONDITION_HONOR_BAD";
			}
			break;
	
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
			
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
			
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
			
				default:
					break;
			}
			break;
	}

	return "";
}

BOOL func_485(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0xFA2B Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

BOOL func_486(BOOL bParam0, BOOL bParam1) // Position - 0xFA80 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && bParam1 != false;
}

void func_487(int iParam0) // Position - 0xFA8F Hash - 0x5161A142 ^0x26FA799F
{
	Ped ped;
	int num;
	var unk;
	int i;
	Entity entity;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	ped = func_278(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = func_556(i);
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		{
		}
		else
		{
			entity = unk.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entity))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(entity))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entity, true, true);
			
				ENTITY::_DELETE_CARRIABLE(&entity);
			}
		}
	}

	return;
}

BOOL func_488(Hash hParam0) // Position - 0xFB35 Hash - 0x8E77EB62 ^0x8E77EB62
{
	if (!func_557(hParam0))
		return false;

	if (!func_558())
		return true;

	return false;
}

void func_489(int iParam0, Ped pedParam1) // Position - 0xFB58 Hash - 0xA2BBC532 ^0xA2BBC532
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/] = pedParam1;
	return;
}

void func_490(int iParam0) // Position - 0xFB84 Hash - 0xC2FEF89F ^0xC1FD7E19
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	return;
}

void func_491(var uParam0) // Position - 0xFBBC Hash - 0x6DB42F4F ^0x2D3D8169
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
	return;
}

void func_492(int iParam0, Hash hParam1, var uParam2) // Position - 0xFBD5 Hash - 0x2FE00612 ^0x68508C65
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	!func_559(iParam0, hParam1);
	!func_560(iParam0, hParam1.f_1);
	return;
}

void func_493(var uParam0) // Position - 0xFC11 Hash - 0x7858D7C0 ^0x7858D7C0
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		func_561(&uParam0->[i /*94*/]);
	}

	return;
}

void func_494(var uParam0) // Position - 0xFC35 Hash - 0x3F59DF82 ^0x3F59DF82
{
	int i;

	for (i = 0; i < 57; i = i + 1)
	{
		uParam0->[i] = 0;
	}

	return;
}

void func_495(Any* panParam0) // Position - 0xFC57 Hash - 0x92E3936E ^0xDB085754
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

void func_496(int iParam0) // Position - 0xFC9C Hash - 0xF98F3B32 ^0x8A036B17
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

void func_497(int iParam0, int iParam1) // Position - 0xFCD2 Hash - 0xB69B78FC ^0xB22068A7
{
	int num;

	num = 100;
	*iParam1 = num;
	iParam1->f_1 = 0f;
	iParam1->f_2 = 0f;
	iParam1->f_3 = 0;
	return;
}

void func_498(int iParam0, int iParam1) // Position - 0xFCF2 Hash - 0xD41D26E5 ^0x1EE19431
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

void func_499(BOOL bParam0) // Position - 0xFD1B Hash - 0x7100DF7A ^0xCD4606BC
{
	*bParam0 = 0;
	bParam0->f_1 = -1f;
	return;
}

void func_500(BOOL bParam0) // Position - 0xFD2C Hash - 0x5F76BB50 ^0x40F56A0B
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -15;
	return;
}

void func_501(BOOL bParam0) // Position - 0xFD44 Hash - 0x92BF775F ^0x1739D63E
{
	*bParam0 = 0;
	bParam0->f_1 = -15;
	return;
}

void func_502(int iParam0) // Position - 0xFD57 Hash - 0x37EBB9FA ^0xA705E265
{
	iParam0 = func_117(iParam0);

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

void func_503(int iParam0, int iParam1) // Position - 0xFDA8 Hash - 0x7B6D7BEE ^0xF15D524D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_508), &Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam1 /*436*/], &Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::COPY_SCRIPT_STRUCT(&Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383.f_508), 436);
	return;
}

void func_504(int iParam0, int iParam1) // Position - 0xFE07 Hash - 0x102876F9 ^0x8EA22A40
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1900383.f_463), &Global_1900383[iParam1 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam1 /*45*/], &Global_1900383[iParam0 /*45*/], 45);
	MISC::COPY_SCRIPT_STRUCT(&Global_1900383[iParam0 /*45*/], &(Global_1900383.f_463), 45);
	return;
}

int func_505(int iParam0, int iParam1) // Position - 0xFE4F Hash - 0x7A98D2DA ^0x5A60BE35
{
	var unk;
	var unk30;
	BOOL flag;
	Hash hash;

	unk.f_9 = joaat("SLOTID_NONE");
	unk30.f_9 = joaat("SLOTID_NONE");

	if (!func_562(iParam0, &unk))
		return 0;

	flag = false;

	if (!func_562(iParam1, &unk30))
		flag = true;

	if (flag)
	{
		hash = func_563(iParam1);
	
		if (hash == 0)
			return 0;
	
		if (!func_564(unk, unk.f_5, hash, false, false))
			return 0;
	}
	else if (!func_565(unk, unk30, 0, false))
	{
		return 0;
	}

	return 1;
}

void func_506(Ped pedParam0) // Position - 0xFEE2 Hash - 0xF32FB80D ^0xB662E625
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

	if (func_566(pedParam0))
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

	if (func_567(pedParam0))
	{
		num = func_153(pedParam0);
	
		if (func_568(num))
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

void func_507() // Position - 0x1004E Hash - 0x211BCC6D ^0x211BCC6D
{
	if (func_368(0))
		func_569(0);

	if (func_368(1))
		func_569(1);

	if (func_368(5))
		func_569(5);

	if (func_368(6))
		func_502(6);

	return;
}

Object* func_508() // Position - 0x1008A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

void func_509(int iParam0) // Position - 0x10099 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1900383.f_393 = iParam0;
	return;
}

int func_510(var uParam0, var uParam1, var uParam2) // Position - 0x100AA Hash - 0xEEC53156 ^0xA03BD067
{
	BOOL flag;

	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;

	if (func_124())
	{
		if (func_570())
		{
			flag = false;
		
			if (!func_165(Global_1835011[15 /*74*/].f_1, true) && !func_318(42))
				flag = true;
		
			if (flag)
			{
				*uParam0 = func_571();
				*uParam1 = func_572();
				*uParam2 = func_573();
				return 1;
			}
			else
			{
				*uParam0 = func_574();
				*uParam1 = func_575();
				*uParam2 = func_576();
				return 1;
			}
		}
		else if (func_438())
		{
			if (!func_165(Global_1835011[60 /*74*/].f_1, true))
			{
				*uParam0 = func_577();
				*uParam1 = func_578();
				*uParam2 = func_579();
				return 1;
			}
			else
			{
				*uParam0 = func_580();
				*uParam1 = func_581();
				*uParam2 = func_582();
				return 1;
			}
		}
	}
	else if (func_570())
	{
		*uParam0 = func_583();
		*uParam1 = func_584();
		*uParam2 = func_585();
		return 1;
	}
	else if (func_438())
	{
		*uParam0 = func_586();
		*uParam1 = func_587();
		*uParam2 = func_588();
		return 1;
	}

	return 0;
}

void func_511(int iParam0, var uParam1) // Position - 0x101C4 Hash - 0x42DB579F ^0x4C67AD4
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
	return;
}

void func_512(int iParam0, var uParam1) // Position - 0x101F7 Hash - 0x42DB579F ^0xF1492904
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
	return;
}

void func_513(int iParam0, var uParam1) // Position - 0x1022A Hash - 0x42DB579F ^0x8D4EBF0
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
	return;
}

void func_514(int iParam0, int iParam1) // Position - 0x1025D Hash - 0x42DB579F ^0x244C0C3A
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
	return;
}

void func_515(int iParam0, int iParam1) // Position - 0x10290 Hash - 0x29B1BAB8 ^0xB9A693D4
{
	Ped model;
	var unk;
	var unk2;
	int defaultMaxAttributeRank;
	float num;
	Ped ped;
	int num2;
	int attributeRank;

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	model = func_376(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		func_510(&unk, &model, &unk2);

	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);

	if (iParam1 > defaultMaxAttributeRank)
		return;

	num = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = num;
	func_589(iParam1);
	ped = func_278(iParam0);

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

void func_516(int iParam0, int iParam1) // Position - 0x1038E Hash - 0xFDFFDD51 ^0x74BA7635
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	Global_1900383[iParam0 /*45*/].f_24 = Global_1900383[iParam0 /*45*/].f_24 || iParam1;
	return;
}

BOOL func_517(int iParam0, int iParam1) // Position - 0x103C7 Hash - 0x13701F47 ^0x86C54B27
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	return Global_1900383[iParam0 /*45*/].f_24 && iParam1 != false;
}

BOOL func_518(int iParam0, var uParam1) // Position - 0x103FA Hash - 0x9604B47A ^0xC430D780
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_562(iParam0, &unk))
		return false;

	*uParam1 = func_590(unk, joaat("SLOTID_HORSE_MANE"), false);

	if (!func_256(*uParam1, 0))
		return false;

	return true;
}

BOOL func_519(int iParam0, var uParam1) // Position - 0x10443 Hash - 0x9604B47A ^0x406A0DCA
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_562(iParam0, &unk))
		return false;

	*uParam1 = func_590(unk, joaat("SLOTID_HORSE_TAIL"), false);

	if (!func_256(*uParam1, 0))
		return false;

	return true;
}

BOOL func_520(Hash hParam0, var uParam1) // Position - 0x1048C Hash - 0x9965E721 ^0x4526F41
{
	var unk;

	if (!func_591(856287005, hParam0))
		return false;

	unk = { func_592() };
	*uParam1 = func_590(unk, hParam0, false);

	if (!func_256(*uParam1, 0))
		return false;

	return true;
}

void func_521(Ped pedParam0) // Position - 0x104CE Hash - 0x4C9A12AA ^0x56351FC0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_manes"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_tails"), 0, false);
	return;
}

void func_522(Ped pedParam0, var uParam1) // Position - 0x10518 Hash - 0x6EA4BA5B ^0xEF2325EE
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_593(pedParam0, *uParam1);
	func_593(pedParam0, uParam1->f_1);
	return;
}

void func_523(Ped pedParam0) // Position - 0x1055B Hash - 0x4C9A12AA ^0x5B9D01EA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_blankets"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_horns"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("saddle_stirrups"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_bedrolls"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, joaat("horse_saddlebags"), 0, false);
	return;
}

void func_524(Ped pedParam0, var uParam1) // Position - 0x105D9 Hash - 0x8B68AA3D ^0x349991C3
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);
	func_593(pedParam0, *uParam1);
	func_593(pedParam0, uParam1->f_1);
	func_593(pedParam0, uParam1->f_2);
	func_593(pedParam0, uParam1->f_3);
	func_593(pedParam0, uParam1->f_4);
	func_593(pedParam0, uParam1->f_5);
	return;
}

int func_525(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x10644 Hash - 0x1A2B1EEB ^0x4DBC1D46
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
		return 0;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, entityModel))
		return 0;

	PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, true, true, true, true, false);

	return 1;
}

int func_526(BOOL bParam0) // Position - 0x10699 Hash - 0xFA7B3D3 ^0x826FC8D8
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 15) & 16383;
}

int func_527(int iParam0, int iParam1) // Position - 0x106AD Hash - 0xE1D12727 ^0xA46110B3
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

Hash func_528(int iParam0) // Position - 0x108FC Hash - 0xBA965109 ^0xCB1D208B
{
	switch (iParam0)
	{
		case 0:
			return joaat("perschar_comp_dutch");
	
		case 1:
			return joaat("perschar_comp_john");
	
		case 2:
			return joaat("perschar_comp_javier");
	
		case 3:
			return joaat("perschar_comp_bill");
	
		case 4:
			return joaat("perschar_comp_uncle");
	
		case 5:
			return joaat("perschar_comp_hosea");
	
		case 6:
			return joaat("perschar_comp_micah");
	
		case 7:
			return joaat("perschar_comp_charles");
	
		case 8:
			return joaat("perschar_comp_sean");
	
		case 9:
			return joaat("perschar_comp_lenny");
	
		case 10:
			return joaat("perschar_comp_kieran");
	
		case 11:
			return joaat("PERSCHAR_COMP_sadie");
	
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	
		case 13:
			return joaat("perschar_comp_abigail");
	
		case 14:
			return joaat("perschar_comp_jack");
	
		case 15:
			return joaat("perschar_comp_marybeth");
	
		case 16:
			return joaat("perschar_comp_molly");
	
		case 17:
			return joaat("perschar_comp_pearson");
	
		case 18:
			return joaat("perschar_comp_strauss");
	
		case 19:
			return joaat("perschar_comp_grimshaw");
	
		case 20:
			return joaat("perschar_comp_karen");
	
		case 21:
			return joaat("perschar_comp_swanson");
	
		case 22:
			return joaat("perschar_comp_tilly");
	
		case 23:
			return joaat("perschar_comp_trelawny");
	
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
	
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
	
		case 26:
			return joaat("perschar_comp_eagleflies");
	}

	return 0;
}

Hash func_529(Hash hParam0, int iParam1) // Position - 0x10AD8 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_256(hParam0, 0))
		return 0;

	num = func_185(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_184(hParam0, 1399091007))
	{
		func_594(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_530(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x10B52 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_534(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_531(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x10B79 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_532(int iParam0) // Position - 0x10BB4 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_533(Hash hParam0, BOOL bParam1) // Position - 0x10BD5 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_595(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_597(&unk, func_596(false));

	if (!func_598(&unk, &num, &num2, false))
		return 0;

	func_532(num);
	return num2;
}

int func_534(BOOL bParam0) // Position - 0x10C33 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_201() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_535(eStackSize essParam0) // Position - 0x10C74 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (essParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}

	return true;
}

BOOL func_536(eStackSize essParam0) // Position - 0x10CA4 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (essParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_537(eStackSize essParam0) // Position - 0x10CC2 Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (essParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[essParam0 /*35*/].f_15;
}

float func_538() // Position - 0x10CF9 Hash - 0x97B49396 ^0x97B49396
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}

	return 25f;
}

BOOL func_539(int iParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x10D35 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_599(iParam0, bParam2, essParam3))
		return true;

	return false;
}

BOOL func_540(int iParam0, int iParam1) // Position - 0x10D57 Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (iParam1 != -1)
		return false;

	if (func_600(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}

	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}

	return false;
}

BOOL func_541(int iParam0) // Position - 0x10E1B Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_601(iParam0);
}

BOOL func_542(eStackSize essParam0, BOOL bParam1, BOOL bParam2, eStackSize essParam3) // Position - 0x10E29 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_418(essParam0, bParam2, essParam3))
		return true;

	return false;
}

int func_543(int iParam0) // Position - 0x10E4B Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_103(iParam0))
		return -1;

	return func_602(iParam0);
}

int func_544(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x10E67 Hash - 0xA452440E ^0xD3F785A1
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

int func_545(int iParam0) // Position - 0x10EAF Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_546(var uParam0, var uParam1, var uParam2, int iParam3) // Position - 0x10F30 Hash - 0x5431B0F9 ^0x1E2109F7
{
	var unk;
	float num;
	float num2;

	func_603(iParam3, &unk, &num, &num2);

	if (func_604(uParam0, unk, num, num.f_1, num2))
		return true;

	return false;
}

int func_547() // Position - 0x10F60 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_605())
		return 1;

	return 0;
}

void func_548(int iParam0, int iParam1, int iParam2) // Position - 0x10F74 Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_547();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_549(Ped pedParam0, int iParam1, float fParam2) // Position - 0x10FC5 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_355(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_606(iParam1), fParam2, -1);

	return;
}

void func_550(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x10FF1 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_547();

	gameTimer = MISC::GET_GAME_TIMER();
	func_607(iParam0, fParam1, iParam3);

	if (bParam2)
		func_608(iParam0, gameTimer, iParam3);

	return;
}

BOOL func_551(eStackSize essParam0) // Position - 0x11024 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_295(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_294(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_293(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_290(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_291(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_292(essParam0);

	if (num6 < 1 || num6 > func_296(num5, num4))
		return false;

	return true;
}

BOOL func_552() // Position - 0x11100 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_553(eStackSize essParam0) // Position - 0x11111 Hash - 0x6430C01F ^0x955EC0F3
{
	if (!func_273(essParam0))
		return false;

	return func_312(essParam0, 67108864);
}

void func_554(eStackSize essParam0) // Position - 0x11132 Hash - 0x23FB4E3F ^0x1E167EAC
{
	var unk;
	const char* str;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_156(unk);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(str), joaat("BLIP_STYLE_WANTED_REGION"));
	return;
}

void func_555(eStackSize essParam0) // Position - 0x11166 Hash - 0x9B0BA3D ^0x90004314
{
	var unk;
	const char* str;
	Hash hashKey;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(essParam0), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "_OUTLINE", 64);
	str = func_156(unk);
	hashKey = MISC::GET_HASH_KEY(str);

	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_REGION_LOCKDOWN")) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(hashKey, joaat("BLIP_STYLE_WANTED_REGION")))
		MAP::_MAP_DISABLE_REGION_BLIP(hashKey);

	return;
}

int func_556(int iParam0) // Position - 0x111B8 Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

BOOL func_557(Hash hParam0) // Position - 0x111F0 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_558() // Position - 0x11232 Hash - 0x11DC3931 ^0x1EDD7D06
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

BOOL func_559(int iParam0, Hash hParam1) // Position - 0x11243 Hash - 0x7F3C0687 ^0x18581D3
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_562(iParam0, &unk))
		return false;

	unk30 = { func_610(hParam1, unk, joaat("SLOTID_HORSE_MANE"), false) };
	return func_611(unk30, 1);
}

BOOL func_560(int iParam0, Hash hParam1) // Position - 0x11287 Hash - 0x7F3C0687 ^0x15BF14B9
{
	var unk;
	var unk30;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_562(iParam0, &unk))
		return false;

	unk30 = { func_610(hParam1, unk, joaat("SLOTID_HORSE_TAIL"), false) };
	return func_611(unk30, true);
}

void func_561(var uParam0) // Position - 0x112CB Hash - 0x6843C143 ^0xA531F0D1
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

BOOL func_562(int iParam0, Any* panParam1) // Position - 0x11372 Hash - 0xDE4C4094 ^0x8E8A73E7
{
	Hash hash;
	var unk;
	var unk15;

	if (!func_612(iParam0))
		return false;

	hash = func_563(iParam0);

	if (hash == 0)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15 = { func_613(false) };

	if (!func_614(unk15, hash, &unk, 0, false))
		return false;

	if (!func_615(&unk, panParam1))
		return false;

	return true;
}

Hash func_563(int iParam0) // Position - 0x113D7 Hash - 0xBD10D1A2 ^0xE9C9558B
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

BOOL func_564(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, BOOL bParam10) // Position - 0x11443 Hash - 0x8FC90634 ^0x533F9AFB
{
	var unk;
	var outGuid;

	if (!func_616(bParam10))
		return func_617(uParam0, uParam4, hParam8, true, bParam9, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_618(uParam0, &unk, false, false))
		return false;

	if (func_619(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return true;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return false;

	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_534(false), &uParam0, &uParam4, hParam8, unk.f_11, &outGuid))
		return false;

	if (bParam9)
		!func_611(outGuid, true);

	return true;
}

BOOL func_565(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x11507 Hash - 0x3163F569 ^0x1B89B919
{
	var unk;
	var unk15;
	int inventoryId;

	if (!func_616(bParam9))
		return func_620(uParam0, uParam4, iParam8, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return false;

	if (func_619(&uParam0, &uParam4))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_618(uParam0, &unk, bParam9, true) || !func_618(uParam4, &unk15, bParam9, true))
		return false;

	if (func_619(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return false;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return false;

	inventoryId = func_534(false);

	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(inventoryId, &uParam0, &uParam4))
		return false;

	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam0, unk15.f_10 || iParam8);
	!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(inventoryId, &uParam4, unk.f_10 || iParam8);
	return true;
}

BOOL func_566(Ped pedParam0) // Position - 0x1162C Hash - 0xFE36340F ^0x78FB2044
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_621(ENTITY::GET_ENTITY_MODEL(pedParam0)))
		return true;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseCompanion"))
		return true;

	return false;
}

BOOL func_567(Ped pedParam0) // Position - 0x11665 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_153(pedParam0);

	if (num == -1)
		return false;

	return true;
}

BOOL func_568(int iParam0) // Position - 0x116A3 Hash - 0xB073C27E ^0xB073C27E
{
	int num;

	num = iParam0;

	if (num >= 0 && num < 5)
		return true;

	return false;
}

void func_569(int iParam0) // Position - 0x116C4 Hash - 0xD14C6A7D ^0x9C4D4670
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

	ped = func_278(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	flag = false;

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		flag = true;

	if (!PED::IS_PED_READY_TO_RENDER(ped))
		return;

	if (func_517(iParam0, 64))
	{
		func_502(iParam0);
		return;
	}

	flag2 = false;

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		if (!(MAP::GET_BLIP_FROM_ENTITY(ped) == 0))
			flag2 = true;

	if (flag2)
		return;

	flag3 = func_318(42);

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
				func_622(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_502(iParam0);

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
	
		if (func_623(1) < 1)
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
		func_624(&(Global_1900383[iParam0 /*45*/].f_26), flag5);
	}

	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		return;

	flag7 = false;

	if (func_517(iParam0, 32))
		flag7 = true;

	isPedInWrithe = TASK::IS_PED_IN_WRITHE(ped);
	flag8 = false;
	ped2 = func_625(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (!ENTITY::IS_ENTITY_DEAD(ped2))
			if (PED::GET_MOUNT(ped2) == ped)
				flag8 = true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	num = func_626(entityCoords, Global_36);
	flag9 = false;

	if (num > func_627(iParam0))
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
		func_628(Global_1900383[iParam0 /*45*/].f_26);
		func_629(Global_1900383[iParam0 /*45*/].f_26);
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

	if (func_630(ped) && !isPedInWrithe)
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

	num2 = func_623(iParam0);
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

BOOL func_570() // Position - 0x11E3A Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_201() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_571() // Position - 0x11E60 Hash - 0x9F572D68 ^0x8E3583E8
{
	return joaat("breed_tennesseewalker_mahoganybay");
}

int func_572() // Position - 0x11E6D Hash - 0x9F572D68 ^0xBDF2A68A
{
	return joaat("a_c_horse_tennesseewalker_mahoganybay");
}

int func_573() // Position - 0x11E7A Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_574() // Position - 0x11E83 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_575() // Position - 0x11E90 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_576() // Position - 0x11E9D Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_577() // Position - 0x11EA6 Hash - 0x9F572D68 ^0xC65FFCB9
{
	return joaat("breed_john_endlesssummer");
}

int func_578() // Position - 0x11EB3 Hash - 0x9F572D68 ^0xEE9A2A30
{
	return joaat("a_c_horse_john_endlesssummer");
}

int func_579() // Position - 0x11EC0 Hash - 0x1FFCF868 ^0x1FFCF868
{
	return 2;
}

int func_580() // Position - 0x11EC9 Hash - 0x9F572D68 ^0x26A12E6E
{
	return joaat("breed_tennesseewalker_chestnut");
}

int func_581() // Position - 0x11ED6 Hash - 0x9F572D68 ^0x9EBDA680
{
	return joaat("a_c_horse_tennesseewalker_chestnut");
}

int func_582() // Position - 0x11EE3 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_583() // Position - 0x11EEC Hash - 0x9F572D68 ^0x1E5C2934
{
	return joaat("breed_morgan_bay");
}

int func_584() // Position - 0x11EF9 Hash - 0x9F572D68 ^0xD70F756D
{
	return joaat("a_c_horse_morgan_bay");
}

int func_585() // Position - 0x11F06 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_586() // Position - 0x11F0F Hash - 0x9F572D68 ^0xE2D55F1F
{
	return joaat("breed_kentuckysaddle_grey");
}

int func_587() // Position - 0x11F1C Hash - 0x9F572D68 ^0xD5B858DC
{
	return joaat("a_c_horse_kentuckysaddle_grey");
}

int func_588() // Position - 0x11F29 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_589(int iParam0) // Position - 0x11F32 Hash - 0xCC180397 ^0xCC180397
{
	if (func_631() < iParam0)
		func_632(iParam0);

	return;
}

int func_590(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5) // Position - 0x11F49 Hash - 0x730D74FA ^0xBEE364CC
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_633(uParam0, hParam4, &unk, bParam5))
		return unk.f_4;

	return 0;
}

BOOL func_591(Hash hParam0, int iParam1) // Position - 0x11F77 Hash - 0xD9D79AE0 ^0x7D4DF544
{
	int i;
	int outSlotId;
	int num;
	Hash category;
	int num2;

	if (hParam0 != 0)
	{
		category = func_243(hParam0);
	
		if (category != 0)
		{
			num2 = func_634(hParam0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(category, i, &outSlotId))
				{
					num = outSlotId;
				
					if (num == iParam1)
						return true;
				}
			}
		}
	}

	return false;
}

struct<4> func_592() // Position - 0x11FCB Hash - 0xF51D0C3D ^0xA1188D4B
{
	var unk;

	unk = { func_613(false) };
	return func_610(856287005, unk, -218846335, false);
}

void func_593(Ped pedParam0, Hash hParam1) // Position - 0x11FEF Hash - 0x11B41686 ^0x947A8CD3
{
	Hash componentHash;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0);
	PED::IS_PED_INJURED(pedParam0);
	TASK::IS_PED_IN_WRITHE(pedParam0);

	if (hParam1 == 0)
		return;

	if (hParam1 == -377364164 || hParam1 == 357708345)
		return;

	componentHash = hParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(pedParam0, componentHash, false, false, false);
	return;
}

void func_594(Hash hParam0, var uParam1, var uParam2) // Position - 0x12053 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_595(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x1225F Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_596(BOOL bParam0) // Position - 0x12331 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_534(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_610(923904168, func_613(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_610(923904168, func_613(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_610(923904168, func_613(bParam0), -740156546, false);
}

void func_597(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x123C6 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_598(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x123E1 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_534(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_599(int iParam0, BOOL bParam1, eStackSize essParam2) // Position - 0x12406 Hash - 0x561CE123 ^0xB84B7B4C
{
	if (iParam0 == 18)
		return false;

	if (iParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && Global_1835011[iParam0 /*74*/].f_21 == essParam2)
		return true;

	return false;
}

BOOL func_600(int iParam0) // Position - 0x12453 Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_635(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

BOOL func_601(int iParam0) // Position - 0x12483 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

int func_602(int iParam0) // Position - 0x124A7 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

void func_603(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x124C6 Hash - 0x7A16E50C ^0x7A16E50C
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
	
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
	
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
	
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
	
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
	
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
	
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
	
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
	
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
	
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
	
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
	
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
	
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
	
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
	
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
	
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
	
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
	
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
	
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
	
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
	
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
	
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
	
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
	
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
	
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
	
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
	
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
	
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
	
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
	
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
	
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
	
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
	
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
	
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
	
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
	
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
	
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
	
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
	
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
	
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
	
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
	
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
	
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}

	return;
}

BOOL func_604(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8) // Position - 0x12F63 Hash - 0x3D2F8087 ^0xB0BC8DD5
{
	float num;
	float num2;
	float num3;

	num = { uParam0 - uParam3 };
	num2 = (num * BUILTIN::COS(fParam8)) + (num.f_1 * BUILTIN::SIN(fParam8));
	num2.f_1 = (num * BUILTIN::SIN(fParam8)) - (num.f_1 * BUILTIN::COS(fParam8));
	num3 = ((num2 * num2) / (fParam6 * fParam6)) + ((num2.f_1 * num2.f_1) / (fParam7 * fParam7));
	return num3 <= 1f;
}

BOOL func_605() // Position - 0x12FC9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_606(int iParam0) // Position - 0x12FD8 Hash - 0x21CE226B ^0x16E3C7EA
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
	
		case 1:
			return "isLowStaminaCoreActive";
	
		case 2:
			return "isLowDeadEyeCoreActive";
	
		default:
		
	}

	return "";
}

void func_607(int iParam0, float fParam1, int iParam2) // Position - 0x13013 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_547();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_608(int iParam0, int iParam1, int iParam2) // Position - 0x13064 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_547();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_15[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(eStackSize essParam0) // Position - 0x130B9 Hash - 0xA17D549C ^0x32E77037
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

struct<4> func_610(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1377E Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_256(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_534(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_611(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x137AF Hash - 0x1DD1BE14 ^0x90608F32
{
	var unk;

	if (!func_616(false))
		return func_636(uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_618(uParam0, &unk, false, false))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_534(false), &uParam0, bParam4))
		return false;

	return true;
}

BOOL func_612(int iParam0) // Position - 0x13822 Hash - 0xDEA08A5F ^0xDEA08A5F
{
	Hash hash;
	var unk;

	hash = func_563(iParam0);

	if (hash == 0)
		return false;

	unk = { func_613(false) };

	if (func_637(&unk, hash, false) > 0)
		return true;

	return false;
}

struct<4> func_613(BOOL bParam0) // Position - 0x13857 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_610(joaat("character"), func_638(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_614(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, int iParam6, BOOL bParam7) // Position - 0x13873 Hash - 0xA6C1C993 ^0x7035E80B
{
	int inventoryId;

	inventoryId = func_534(bParam7);

	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(inventoryId, &uParam0, hParam4) <= iParam6)
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(inventoryId, &uParam0, hParam4, iParam6, panParam5))
		return false;

	return true;
}

BOOL func_615(Any* panParam0, Any* panParam1) // Position - 0x138AD Hash - 0x2AD3981E ^0x984186D0
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_534(false), panParam0, panParam1, 29, 1))
		return false;

	return true;
}

BOOL func_616(BOOL bParam0) // Position - 0x138DC Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_201() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_534(bParam0));
}

int func_617(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, Hash hParam8, BOOL bParam9, int iParam10, BOOL bParam11) // Position - 0x138FA Hash - 0x657ADCCC ^0xBBA0C366
{
	var unk;
	int num;
	int itemSlotMaxCount;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_618(uParam0, &unk, true, false))
		return -1;

	if (func_619(&(unk.f_5), &uParam4) && unk.f_9 == hParam8)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, hParam8))
		return -1;

	num = func_639(unk.f_4, uParam4, hParam8, false);
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

	unk15 = { func_640(&unk) };
	unk15.f_4 = { uParam4 };
	unk15.f_11 = hParam8;
	unk15.f_10 = iParam10;
	num2 = func_641(1168099063, &unk15, bParam9);

	if (num2 == -1)
		return -1;

	return num2;
}

BOOL func_618(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x139F8 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_534(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_619(var uParam0, var uParam1) // Position - 0x13A28 Hash - 0x361C7388 ^0xEA068BC1
{
	if (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1 && uParam0->f_2 == uParam1->f_2 && uParam0->f_3 == uParam1->f_3)
		return true;

	return false;
}

int func_620(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, BOOL bParam9) // Position - 0x13A69 Hash - 0x503960A6 ^0x8CEAEEDE
{
	var unk;
	var unk15;
	var unk29;
	var unk46;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam4))
		return -1;

	if (func_619(&uParam0, &uParam4))
		return -1;

	unk.f_9 = joaat("SLOTID_NONE");
	unk15.f_9 = joaat("SLOTID_NONE");

	if (!func_618(uParam0, &unk, true, false) || !func_618(uParam4, &unk15, true, false))
		return -1;

	if (func_619(&(unk.f_5), &(unk15.f_5)) && unk.f_9 == unk15.f_9)
		return -1;

	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(unk.f_4, unk15.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(unk15.f_4, unk.f_9))
		return -1;

	unk29 = { func_640(&unk) };
	unk29.f_4 = { unk15.f_5 };
	unk29.f_11 = unk15.f_9;
	unk29.f_10 = unk15.f_10 || iParam8;
	unk46 = { func_640(&unk15) };
	unk46.f_4 = { unk.f_5 };
	unk46.f_11 = unk.f_9;
	unk46.f_10 = unk.f_10 || iParam8;
	num = -1;

	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), 1168099063))
		{
			if (func_642(num, 1168099063, &unk29) && func_642(num, 1168099063, &unk46))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_643(num, 1);
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
		num = func_641(1168099063, &unk29, false);
		num = func_641(1168099063, &unk46, false);
	}

	return num;
}

BOOL func_621(Hash hParam0) // Position - 0x13C13 Hash - 0xE48228D0 ^0xE48228D0
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

void func_622(Blip blParam0) // Position - 0x13C97 Hash - 0x537CC7C9 ^0x155A2EC4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_645(func_644(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_570())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_438();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, "SADDLE_BLIP_JOHN");
	}

	return;
}

int func_623(int iParam0) // Position - 0x13CE4 Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_624(Blip blParam0, BOOL bParam1) // Position - 0x13D18 Hash - 0x74D2E5D1 ^0x2E893433
{
	char* str1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*blParam0, func_645(func_644(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		str1 = "";
	
		if (bParam1)
			str1 = "HORSE_BLIP_TEMPORARY";
		else if (func_570())
			str1 = "HORSE_BLIP_ARTHUR";
		else if (func_438())
			str1 = "HORSE_BLIP_JOHN";
	
		if (MISC::COMPARE_STRINGS(str1, "", false, -1) != 0)
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam0, str1);
	}

	return;
}

Ped func_625(int iParam0) // Position - 0x13D8A Hash - 0x79966B74 ^0xB76682C7
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_626(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x13DB8 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_627(int iParam0) // Position - 0x13DD6 Hash - 0x9BB7FBA3 ^0xA973C68A
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

	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_376(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_623(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_623(iParam0) + 1;
	num2 = func_646(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_647(num, any, num7);
	return num8;
}

void func_628(Blip blParam0) // Position - 0x13E90 Hash - 0x9892E8C ^0x28660E03
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

void func_629(Blip blParam0) // Position - 0x13F1C Hash - 0x85615470 ^0x31794F85
{
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(blParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	return;
}

BOOL func_630(Ped pedParam0) // Position - 0x13F48 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

int func_631() // Position - 0x13F8A Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_1095.f_3135;
}

void func_632(int iParam0) // Position - 0x13F9B Hash - 0xF15D3FA8 ^0xF15D3FA8
{
	Global_40.f_1095.f_3135 = iParam0;
	return;
}

BOOL func_633(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, Any* panParam5, BOOL bParam6) // Position - 0x13FAE Hash - 0x80B0B89C ^0x78EC1C55
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_534(bParam6), &uParam0, hParam4, &outGuid))
		return false;

	if (!func_618(outGuid, panParam5, bParam6, false))
		return false;

	return true;
}

int func_634(Hash hParam0) // Position - 0x13FF2 Hash - 0xF2B1F53 ^0x95FDCC00
{
	Hash category;

	if (!func_256(hParam0, 0))
		return 0;

	category = func_243(hParam0);

	if (category == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(category);
}

BOOL func_635(int iParam0) // Position - 0x14022 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_648(&(iParam0->f_29), 62))
	{
		switch (func_649())
		{
			case 1:
				if (!func_648(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_648(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_648(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_648(&(iParam0->f_29), 32))
					if (func_648(&(iParam0->f_29), 2))
						if (func_293(func_175()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

int func_636(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x140CC Hash - 0x4C6CAF1 ^0xEE857D47
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

	if (!func_618(uParam0, &unk, true, false))
		return num;

	if (unk.f_10 == iParam4)
		return num;

	num2 = func_185(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_650(uParam0, true) };
		unk15.f_10 = iParam4;
		num = func_651(joaat("UPDATE"), &unk15, bParam5);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk44 = { func_652(uParam0, true) };
		unk44.f_10 = iParam4;
		num = func_653(joaat("UPDATE"), &unk44, bParam5);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk62 = { func_640(&unk) };
		unk62.f_10 = iParam4;
		num = func_641(joaat("UPDATE"), &unk62, bParam5);
	
		if (num == -1)
			return num;
	}

	return num;
}

int func_637(Any* panParam0, Hash hParam1, BOOL bParam2) // Position - 0x141C3 Hash - 0x3D67507D ^0xEF2F6729
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_534(bParam2), panParam0, hParam1);
}

struct<4> func_638() // Position - 0x141D9 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_639(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x141E5 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_256(hParam0, 0))
		return 0;

	guid = { func_610(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_534(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<17> func_640(var uParam0) // Position - 0x1422D Hash - 0x4CD39800 ^0x7DC5804
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

int func_641(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x14281 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_642(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_643(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_643(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17))
	{
		func_643(num, 1);
		return num;
	}

	return -1;
}

BOOL func_642(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x14308 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

void func_643(int iParam0, int iParam1) // Position - 0x1431F Hash - 0x18C74423 ^0xA1132A0
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

	func_654(iParam0, iParam1);
	return;
}

const char* func_644(int iParam0) // Position - 0x14381 Hash - 0x20630FE4 ^0xBDD0E7BB
{
	const char* str;

	if (iParam0 == 255)
		if (func_655(37, iParam0))
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		else
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());

	if (iParam0 < 0 || iParam0 >= 32)
		return "";

	str = "";

	if (!Global_1224589.f_16[iParam0])
		return str;

	if (func_655(37, iParam0))
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));

	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

const char* func_645(const char* sParam0, int iParam1) // Position - 0x1442A Hash - 0xB0CFF0C3 ^0xA17BE73D
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_444(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_646(int iParam0) // Position - 0x14460 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_117(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_647(float fParam0, Any anParam1, float fParam2) // Position - 0x14496 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

BOOL func_648(var uParam0, int iParam1) // Position - 0x144AB Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_649() // Position - 0x144CB Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

struct<29> func_650(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x144D7 Hash - 0xD34D8048 ^0xAE0F4AAB
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_534(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_640(&unk30) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_651(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x14570 Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_656(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_643(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_643(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29))
	{
		func_643(num, 1);
		return num;
	}

	return -1;
}

struct<18> func_652(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x145F7 Hash - 0x3EBED8E9 ^0x3FFB16B
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_534(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_640(&unk19) };
	unk.f_17 = unk19.f_14;
	return unk;
}

int func_653(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x1466A Hash - 0x3AC99416 ^0xDD1FBA07
{
	int num;

	num = -1;

	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
		{
			if (func_657(num, hParam0, panParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(num))
				{
					func_643(num, 1);
					return num;
				}
			
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(num) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(num);
			}
		
			func_643(num, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18))
	{
		func_643(num, 1);
		return num;
	}

	return -1;
}

void func_654(int iParam0, int iParam1) // Position - 0x146F1 Hash - 0x26256B16 ^0x79A35F4E
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

BOOL func_655(int iParam0, int iParam1) // Position - 0x1476E Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_658(&(Global_1109000.f_4), num, 5);

	if (iParam1 == func_659())
		return func_658(&(Global_1109000.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1224589.f_16[iParam1])
		return func_658(&(Global_1108108[iParam1 /*27*/].f_4), num, 5);

	return false;
}

BOOL func_656(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x147E2 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_657(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x147F9 Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

BOOL func_658(var uParam0, int iParam1, int iParam2) // Position - 0x14810 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_659() // Position - 0x14847 Hash - 0x4228A1C2 ^0xF4FC0436
{
	return Global_1109000.f_245;
}

