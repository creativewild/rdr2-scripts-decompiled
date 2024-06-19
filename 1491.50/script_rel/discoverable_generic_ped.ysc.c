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
	var uLocal_14 = 8;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	BOOL bLocal_23 = 0;
	BOOL bLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 4;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	ScrHandle shLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	Volume volLocal_41 = 0;
	Volume volLocal_42 = 0;
	Volume volLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	Any anLocal_46 = 0;
	Cam caLocal_47 = 0;
	var uLocal_48 = 2;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 10;
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
	var uLocal_75 = 10;
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
	var uLocal_87 = 10;
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
	var uLocal_136 = -1;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 1097859072;
	var uLocal_146 = 1000;
	var uLocal_147 = 1067450368;
	var uLocal_148 = 5000;
	var uLocal_149 = 42;
	var uLocal_150 = 1103626240;
	var uLocal_151 = 1077936128;
	var uLocal_152 = 1106247680;
	var uLocal_153 = 1103101952;
	var uLocal_154 = 1097859072;
	var uLocal_155 = 1103626240;
	var uLocal_156 = 0;
	var uLocal_157 = 5;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 5;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 24;
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
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	Any anLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = -1;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = -1;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 2;
	var uLocal_294 = 1;
	var uLocal_295 = 1;
	var uLocal_296 = 1;
	var uLocal_297 = 0;
	var uLocal_298 = 1;
	var uLocal_299 = 2;
	var uLocal_300 = 2;
	var uLocal_301 = 3;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 3;
	var uLocal_305 = 1;
	var uLocal_306 = 3;
	var uLocal_307 = 3;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x7A1E9B1E ^0x45888F04
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	anLocal_268 = anScriptParam_0;
	iLocal_269.f_1 = anScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&iLocal_269);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_1(&iLocal_269);

	while (func_2())
	{
		switch (iLocal_267)
		{
			case 0:
				if (func_3(&iLocal_269))
				{
					iLocal_267 = 1;
				
					if (iLocal_269.f_4 == -1)
						iLocal_269.f_4 = func_4(&iLocal_269);
				}
				break;
		
			case 1:
				if (func_5(&iLocal_269))
					func_6(&iLocal_269);
			
				func_7(&iLocal_269);
				func_8(&iLocal_269);
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&iLocal_269);
	return;
}

void func_1(var uParam0) // Position - 0xB6 Hash - 0x52942697 ^0xB43CC8D5
{
	func_9(uParam0);
	SCRIPTS::_0xE7282390542F570D(anLocal_268);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0xD0 Hash - 0x5C23286E ^0xFDEB700F
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	return true;
}

BOOL func_3(var uParam0) // Position - 0xE4 Hash - 0x4DF2C010 ^0xCE25F6C7
{
	Hash scenarioPointType;

	if (iLocal_269 == 0)
	{
		scenarioPointType = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_1);
		iLocal_269 = func_10(scenarioPointType);
		return false;
	}

	if (func_11(iLocal_269, 4) || Global_40.f_8863.f_156)
	{
		func_1(uParam0);
		return false;
	}

	func_12(uParam0);
	return true;
}

int func_4(var uParam0) // Position - 0x134 Hash - 0x5B237E25 ^0x830C9106
{
	int i;
	int num;
	int num2;
	float num3;

	num2 = -1;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return -1;

	if (*uParam0 == -544327665)
		num = 3;
	else if (*uParam0 == 1120968795)
		num = 2;
	else if (*uParam0 == -834293086)
		num = 10;
	else if (*uParam0 == 1519472817)
		num = 2;
	else if (*uParam0 == -1859023693)
		num = 11;
	else if (*uParam0 == 2000209669)
		num = 12;
	else if (*uParam0 == -1761578407)
		num = 11;
	else if (*uParam0 == -1243267511)
		num = 5;
	else if (*uParam0 == -1272862985)
		num = 4;
	else if (*uParam0 == 1535254161)
		num = 4;
	else if (*uParam0 == 870958936)
		num = 5;
	else if (*uParam0 == 513110082)
		num = 3;
	else if (*uParam0 == -321841939)
		num = 20;
	else if (*uParam0 == -890175011)
		num = 5;
	else if (*uParam0 == 677950956)
		num = 6;
	else if (*uParam0 == 503180747)
		num = 2;
	else
		return 0;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (num2 == -1)
		{
			num2 = i;
			num3 = func_14(Global_35, func_13(uParam0, i), true);
		}
		else if (num3 > func_14(Global_35, func_13(uParam0, i), true))
		{
			num2 = i;
			num3 = func_14(Global_35, func_13(uParam0, i), true);
		}
	}

	return num2;
}

BOOL func_5(var uParam0) // Position - 0x2C8 Hash - 0x7F2631C6 ^0x7F2631C6
{
	switch (*uParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761578407:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -890175011:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -321841939:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 373034311:
		case 404434344:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	
		case 677950956:
			if (func_15())
				return true;
			else
				return false;
			break;
	
		case 1861313914:
			if (func_16(59))
				return false;
			else
				return true;
			break;
	}

	return false;
}

void func_6(var uParam0) // Position - 0x445 Hash - 0x611E412E ^0xCDDB3FFD
{
	if (uParam0->f_5 > 0 && uParam0->f_5 < 7)
	{
		if (!func_17(uParam0))
		{
			func_18(uParam0);
			func_19(uParam0, 0);
		}
	}

	switch (uParam0->f_5)
	{
		case 0:
			if (!func_17(uParam0))
				return;
		
			if (*uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -321841939)
				if (func_20(uParam0))
					func_19(uParam0, 7);
		
			func_21(uParam0);
		
			if (_IS_NULL_VECTOR(uParam0->f_6.f_2))
			{
				func_19(uParam0, 7);
				return;
			}
		
			func_19(uParam0, 1);
			break;
	
		case 1:
			if (func_14(Global_35, uParam0->f_6.f_2, true) <= uParam0->f_6)
			{
				func_23(&(uParam0->f_6.f_5));
			
				if (func_11(*uParam0, 2) || func_11(*uParam0, 16) || *uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -1761578407 && func_20(uParam0))
					func_19(uParam0, 3);
				else
					func_19(uParam0, 2);
			}
			break;
	
		case 2:
			if (!func_24(&(uParam0->f_6.f_5)))
			{
				PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 150, 100);
				func_25(&(uParam0->f_6.f_5));
			}
			else if (func_26(&(uParam0->f_6.f_5)) > 300)
			{
				PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 150, 100);
				func_19(uParam0, 3);
			}
			break;
	
		case 3:
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, false))
			{
				func_28(uParam0);
			
				if (func_11(*uParam0, 2) || func_11(*uParam0, 16) || *uParam0 == -1761578407 && func_20(uParam0))
					func_19(uParam0, 6);
				else
					func_19(uParam0, 4);
			}
			break;
	
		case 4:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), false);
		
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, true))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			else if (func_31(uParam0))
			{
				if (!func_11(*uParam0, 16))
				{
					func_32(*uParam0, 16);
				
					if (func_33(uParam0->f_6.f_8))
						func_34(uParam0->f_6.f_8, false, true);
				
					func_35(uParam0);
					func_36(uParam0, true);
				
					if (!(*uParam0 == -321841939))
						func_37(true, -1);
				}
				else if (func_33(uParam0->f_6.f_8))
				{
					func_34(uParam0->f_6.f_8, false, true);
				}
			
				func_25(&(uParam0->f_6.f_5));
				func_19(uParam0, 5);
			}
			else if (func_38(uParam0->f_6.f_8, true) > 0f)
			{
				if (!func_11(*uParam0, 16))
				{
					if (!func_39(uParam0->f_3, 2))
					{
						func_40(&(uParam0->f_3), 2);
					
						if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
							func_41(uParam0);
					}
				
					if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					{
						CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
						func_42(uParam0);
					}
				}
			}
			else if (func_39(uParam0->f_3, 2))
			{
				func_43(&(uParam0->f_3), 2);
			
				if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						CAM::STOP_GAMEPLAY_HINT(false);
			}
			break;
	
		case 5:
			if (*uParam0 == -890175011 || *uParam0 == 677950956)
				CAM::SET_GAMEPLAY_COORD_HINT(uParam0->f_6.f_2, -1, 2000, 2000, 0);
		
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), false);
		
			if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
				func_42(uParam0);
		
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")))
			{
			}
			else if (func_26(&(uParam0->f_6.f_5)) >= 2000)
			{
				if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						CAM::STOP_GAMEPLAY_HINT(false);
			
				if (func_39(uParam0->f_3, 2))
					func_43(&(uParam0->f_3), 2);
			
				if (!(*uParam0 == -1761578407) && !(*uParam0 == 404434344))
					func_44(uParam0);
			
				if (*uParam0 == -890175011 || *uParam0 == 677950956 || *uParam0 == -321841939)
				{
					func_18(uParam0);
					func_19(uParam0, 7);
				}
				else
				{
					func_19(uParam0, 6);
				}
			}
			break;
	
		case 6:
			func_30(uParam0, uParam0->f_6.f_8, func_29(uParam0), false);
		
			if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6 + 5f)
			{
				func_18(uParam0);
				func_19(uParam0, 1);
			}
			else if (func_27(uParam0, true))
			{
				func_18(uParam0);
				func_19(uParam0, 3);
			}
			break;
	
		case 7:
			break;
	}

	return;
}

void func_7(var uParam0) // Position - 0x9C9 Hash - 0xB8E838DE ^0x57F08B38
{
	int num;

	if (!func_39(uParam0->f_3, 8))
	{
		if (func_45(*uParam0) && VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			if (func_46(&(uParam0->f_2)))
			{
				num = 3;
			
				if (*uParam0 == -849582265 && Global_40.f_11953)
					num = 4;
			
				func_47(num, 0, 0, 0, 0, false, 1065353216, false);
				func_40(&(uParam0->f_3), 8);
			
				if (*uParam0 == -849582265)
					Global_40.f_11953 = 1;
			}
		}
	}

	return;
}

void func_8(var uParam0) // Position - 0xA4B Hash - 0x39D8A9E6 ^0x22335F60
{
	int i;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	if (iLocal_51 > 0 && iLocal_51 < 13)
	{
		if (*uParam0 == 1861313914)
		{
			if (func_16(59))
			{
				for (i = 0; i <= 10 - 1; i = i + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_63.f_1[i]))
					{
						if (ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[i]))
						{
						}
					}
				}
			}
		}
	}

	switch (iLocal_51)
	{
		case 0:
			if (func_39(uParam0->f_3, 1))
				func_43(&(uParam0->f_3), 1);
		
			if (*uParam0 == -415839138)
			{
				if (!func_48(uParam0))
					return;
			
				if (!func_49(uParam0))
					return;
			
				if (func_50(48))
					return;
			
				if (func_51(uParam0))
					return;
			}
			else if (*uParam0 == -2008558277)
			{
				if (!func_52(uParam0))
					return;
			}
			else if (*uParam0 == 1861313914)
			{
				if (!func_52(uParam0))
					return;
			}
			else if (!(*uParam0 == -654238687) && !(*uParam0 == -2008558277) && !(*uParam0 == 1861313914))
			{
				if (func_53(*uParam0))
				{
					func_54(&iLocal_51, 13, true);
					return;
				}
			}
		
			func_55(uParam0);
			func_56(uParam0);
			func_54(&iLocal_51, 2, true);
			break;
	
		case 2:
			if (!func_57(uParam0) || func_58())
				return;
		
			if (*uParam0 == -654238687)
				if (!(PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 10))
					return;
			else if (*uParam0 == -2008558277)
				if (!(PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 7))
					return;
			else if (!(PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1))
				return;
		
			func_54(&iLocal_51, 3, true);
			break;
	
		case 3:
			if (func_59(uParam0))
			{
				func_60(uParam0, &uLocal_31);
				func_54(&iLocal_51, 10, true);
			}
			break;
	
		case 10:
			if (!(*uParam0 == 1861313914) && !(*uParam0 == -415839138))
				if (!func_39(uParam0->f_3, 1))
					func_40(&(uParam0->f_3), 1);
		
			func_61(uParam0);
		
			if (*uParam0 == 1861313914)
				func_62(uParam0);
			else if (*uParam0 == -415839138)
				func_63(uParam0);
			else
				func_64(uParam0);
		
			func_65(uParam0);
		
			if (*uParam0 == -2008558277)
			{
				if (func_52(uParam0))
				{
					if (VOLUME::DOES_VOLUME_EXIST(volLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0))
						if (!func_11(*uParam0, 32))
							func_66(*uParam0);
				
					if (!func_53(*uParam0))
					{
						if (uLocal_87[0 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]) && uLocal_87[1 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[1]) && uLocal_87[2 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[2]) && uLocal_87[3 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[3]) && uLocal_87[4 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[4]) && uLocal_87[5 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[5]) && uLocal_87[6 /*4*/] == 23 || ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[6]))
						{
							func_67(uParam0);
							func_68(uParam0);
							func_54(&iLocal_51, 13, true);
						}
					}
				}
				else
				{
					func_69(&uLocal_63, true);
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
			}
			else if (*uParam0 == -654238687)
			{
				if (!func_11(*uParam0, 8) && VOLUME::DOES_VOLUME_EXIST(volLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0))
					func_70(uParam0);
			
				if (!func_53(*uParam0))
					if (func_72(Global_35, func_71(uParam0, 0), 5f, true, true))
						if (func_73())
							if (func_75(func_74(uParam0, 0)))
								func_67(uParam0);
			}
			else if (*uParam0 == 1861313914)
			{
				if (!func_52(uParam0))
				{
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
			
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0))
				{
					if (!uLocal_14[2])
					{
						if (func_33(uLocal_48[0]))
						{
							if (func_76(Global_35))
								func_77(uLocal_48[0], true);
							else
								func_77(uLocal_48[0], false);
						
							if (func_78(uLocal_48[0], true))
							{
								func_34(uLocal_48[0], false, true);
							
								if (func_16(59))
								{
									if (!func_39(Global_40.f_8863.f_152, 65536))
										func_40(&(Global_40.f_8863.f_152), 65536);
								
									if (!CAM::DOES_CAM_EXIST(caLocal_47))
									{
										caLocal_47 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 895.2926f, -1968.1144f, 45.0332f, 0f, 0f, 0f, 1115815936, false, 2);
										CAM::SET_CAM_FOV(caLocal_47, 30f);
										CAM::POINT_CAM_AT_COORD(caLocal_47, 894.5633f, -1969.6913f, 44.2007f);
									}
								
									bLocal_23 = true;
								
									if (CAM::DOES_CAM_EXIST(caLocal_47))
										CAM::SET_CAM_ACTIVE(caLocal_47, true);
								
									CAM::RENDER_SCRIPT_CAMS(true, true, 2000, true, false, 0);
								
									if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
										PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
								}
								else
								{
									if (!func_39(Global_40.f_8863.f_152, 32768))
										func_40(&(Global_40.f_8863.f_152), 32768);
								
									if (VOLUME::DOES_VOLUME_EXIST(volLocal_43))
									{
										PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volLocal_43);
										POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_43);
										PED::_REMOVE_PED_STAY_OUT_VOLUME(Global_1935630.f_40, volLocal_43);
										POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1935630.f_40, 0);
										VOLUME::DELETE_VOLUME(volLocal_43);
									}
								
									func_79(&uLocal_48[0], true, true);
									uLocal_14[1] = 1;
								}
							
								func_54(&iLocal_51, 11, true);
							}
						}
					}
				}
			
				if (!func_53(*uParam0))
					if (func_16(59))
						if (func_39(Global_40.f_8863.f_152, 65536))
							func_67(uParam0);
					else if (func_11(*uParam0, 16))
						func_67(uParam0);
			}
			else if (*uParam0 == -35775921)
			{
				if (!bLocal_23)
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_157[0]))
						{
							bLocal_23 = true;
							TASK::_MAKE_OBJECT_CARRIABLE(uLocal_157[0]);
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(uLocal_157[0]) && PED::_GET_CARRIER_AS_PED(uLocal_157[0]) == Global_35)
				{
					func_67(uParam0);
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
				else if (func_80(Global_35, uLocal_63.f_1[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_157[0]))
					{
						ENTITY::DETACH_ENTITY(uLocal_157[0], true, true);
						func_81(&uLocal_157, false, 0);
					}
				
					func_83(func_82(uParam0, 0), 1, false, 0, 0, 752097756, 0, 0, 0, 0);
					func_67(uParam0);
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
				else if (ENTITY::_IS_ENTITY_FULLY_LOOTED(uLocal_63.f_1[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_157[0]))
					{
						ENTITY::DETACH_ENTITY(uLocal_157[0], true, true);
						func_81(&uLocal_157, false, 0);
					}
				
					func_83(func_82(uParam0, 0), 1, false, false, false, 752097756, 0, 0, 0, false);
					func_67(uParam0);
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
				else if (func_73())
				{
					if (func_75(func_82(uParam0, 0)))
					{
						func_67(uParam0);
						func_68(uParam0);
						func_54(&iLocal_51, 13, true);
					}
				}
			}
			else if (*uParam0 == -415839138)
			{
				if (!func_53(*uParam0))
					if (func_11(*uParam0, 16))
						func_67(uParam0);
			}
			else if (!func_53(*uParam0))
			{
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0))
				{
					func_67(uParam0);
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
			}
			break;
	
		case 11:
			if (*uParam0 == 1861313914)
			{
				if (!func_52(uParam0))
				{
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
			
				if (func_16(59))
				{
					if (bLocal_23)
					{
						if (func_26(&(iLocal_51.f_1)) >= 4000)
							if (func_33(uLocal_48[0]))
								if (!func_84(uLocal_48[0], true))
									func_54(&iLocal_51, 12, true);
					}
					else if (func_26(&(iLocal_51.f_1)) >= 2000)
					{
						if (func_33(uLocal_48[0]))
							func_34(uLocal_48[0], true, true);
					
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					
						if (CAM::DOES_CAM_EXIST(caLocal_47))
							CAM::DESTROY_CAM(caLocal_47, false);
					
						func_54(&iLocal_51, 10, true);
					}
				}
				else
				{
					func_54(&iLocal_51, 10, true);
				}
			}
			break;
	
		case 12:
			if (*uParam0 == 1861313914)
			{
				if (!func_84(uLocal_48[0], true))
				{
					bLocal_23 = false;
				
					if (func_16(59))
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 2000, true, false, 0);
					
						if (CAM::DOES_CAM_EXIST(caLocal_47))
							CAM::SET_CAM_ACTIVE(caLocal_47, false);
					}
				
					if (!func_39(uParam0->f_3, 1))
						func_40(&(uParam0->f_3), 1);
				
					func_54(&iLocal_51, 11, true);
				}
			}
			break;
	
		case 13:
			break;
	
		default:
			break;
	}

	return;
}

void func_9(var uParam0) // Position - 0x1376 Hash - 0x5CDC129F ^0xC76BECB7
{
	func_68(uParam0);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_41))
		VOLUME::DELETE_VOLUME(volLocal_41);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_42))
		VOLUME::DELETE_VOLUME(volLocal_42);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_43))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(volLocal_43);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_43);
		PED::_REMOVE_PED_STAY_OUT_VOLUME(Global_1935630.f_40, volLocal_43);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1935630.f_40, 0);
		VOLUME::DELETE_VOLUME(volLocal_43);
	}

	if (*uParam0 == 1861313914 || *uParam0 == -2008558277)
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_36);

	func_69(&uLocal_63, true);
	func_85(uParam0, &uLocal_31);
	func_86(uParam0);
	return;
}

int func_10(Hash hParam0) // Position - 0x140C Hash - 0xB8EC44B7 ^0xB12C5BE7
{
	switch (hParam0)
	{
		case joaat("WB_DISCO_TRAIL_TREES"):
			return -1272862985;
	
		case joaat("WB_DISCO_CIV_WAR_KNIFE"):
			return -599506500;
	
		case joaat("WB_DISCO_TREE_HOUSE"):
			return 1091556515;
	
		case joaat("WB_DISCO_BLACK_FLOWER"):
			return -1494823099;
	
		case joaat("WB_DISCO_MOUNTAIN_CLIMB"):
			return 1833243216;
	
		case joaat("WB_DISCO_ABANDONED_FURNITURE"):
			return -1882503209;
	
		case joaat("WB_DISCO_LIGHTNING_ALLEY"):
			return -1841331114;
	
		case joaat("WB_DISCO_GHOST_TRAIN"):
			return 397377585;
	
		case joaat("WB_DISCO_INDIAN_BURIAL"):
			return -849582265;
	
		case joaat("WB_DISCO_ABANDONED_OIL_WELL"):
			return -1300082860;
	
		case joaat("WB_DISCO_PIRATE_RUM"):
			return -357364973;
	
		case joaat("WB_DISCO_DEAD_BEAR"):
			return 2072069278;
	
		case joaat("WB_DISCO_JESUIT_MISSIONARY"):
			return 429544447;
	
		case joaat("WB_DISCO_ROPE_BRIDGE"):
			return -1923503631;
	
		case joaat("WB_DISCO_QUARRY"):
			return -1848895400;
	
		case joaat("WB_DISCO_GEYSER"):
			return 1351526287;
	
		case joaat("WB_DISCO_DEAD_MICAH"):
			return -1240932004;
	
		case joaat("WB_DISCO_DERAILED_TRAIN"):
			return -2019711818;
	
		case joaat("WB_DISCO_METEOR_SHOWER"):
			return -777150535;
	
		case joaat("WB_DISCO_BIRD_NEST"):
			return 435290930;
	
		case joaat("WB_DISCO_GRAYS_SECRET"):
			return -1887999095;
	
		case joaat("WB_DISCO_DESERTED_FARM"):
			return -919236330;
	
		case joaat("WB_DISCO_DEFACED_GRAVE"):
			return -780455182;
	
		case joaat("WB_DISCO_REGISTER_ROCK"):
			return -1761189332;
	
		case joaat("WB_DISCO_BURNED_SETTLEMENT"):
			return 149709049;
	
		case joaat("WB_DISCO_BROKEN_BRIDGE"):
			return 1519472817;
	
		case joaat("WB_DISCO_DESERT_SKELETONS"):
			return 1505050944;
	
		case joaat("WB_DISCO_WAGON_CHEST"):
			return -1829339703;
	
		case joaat("WB_DISCO_BARREL_RIDER"):
			return -1287911066;
	
		case joaat("WB_DISCO_FACE_TREES"):
			return -1243267511;
	
		case joaat("WB_DISCO_RUNAWAY_CORPSE"):
			return -641229542;
	
		case joaat("WB_DISCO_ANCIENT_URN"):
			return -1427565340;
	
		case joaat("WB_DISCO_DONKEY_LADY"):
			return -1636964661;
	
		case joaat("WB_DISCO_ONE_ROOM_CHURCH"):
			return 921081956;
	
		case joaat("WB_DISCO_OBJECT_IN_TREE"):
			return 1124200691;
	
		case joaat("WB_DISCO_OLD_RAILROAD_CAMP"):
			return 330993088;
	
		case joaat("WB_DISCO_ABANDONED_TRADING_POST"):
			return 247563739;
	
		case joaat("WB_DISCO_RAILROAD_GRAVESTONE"):
			return -657632;
	
		case joaat("WB_DISCO_TREE_TRUNK_BOAT"):
			return -1457751321;
	
		case joaat("WB_DISCO_PIRATE_SKELETON"):
			return -1144800837;
	
		case joaat("WB_DISCO_SCARECROW_1"):
			return -1420566543;
	
		case joaat("WB_DISCO_ABANDONED_WELL"):
			return -1481450947;
	
		case joaat("WB_DISCO_HERMIT_WOMAN"):
			return 1982045664;
	
		case joaat("WB_DISCO_CONESTOGA_WAGON"):
			return 1187917501;
	
		case joaat("WB_DISCO_EARLY_SETTLERS"):
			return 1431862613;
	
		case joaat("WB_DISCO_POTS_TREE"):
			return -1686810506;
	
		case joaat("WB_DISCO_OVERTURNED_HEARSE"):
			return 949011950;
	
		case joaat("WB_DISCO_FRANKENSTEIN_BOOK"):
			return 1284679164;
	
		case joaat("WB_DISCO_ALCHEMIST"):
			return 233600584;
	
		case joaat("WB_DISCO_STUFFED_GORILLA"):
			return -490142739;
	
		case joaat("WB_DISCO_GRAVESTONE_TREE"):
			return -409986722;
	
		case joaat("WB_DISCO_FROZEN_SETTLER"):
			return 2134589549;
	
		case joaat("WB_DISCO_OLD_FIREPLACE"):
			return 1120968795;
	
		case joaat("WB_DISCO_AZTEC_MASK"):
			return 677950956;
	
		case joaat("WB_DISCO_DEAD_CHAIN_GANG"):
			return -499529359;
	
		case joaat("WB_DISCO_CATTLE_CARCASSES"):
			return -968854939;
	
		case joaat("WB_DISCO_PIRATE_KNIFE"):
			return 1424723727;
	
		case joaat("WB_DISCO_ABANDONED_CHURCH"):
			return -1958832660;
	
		case joaat("WB_DISCO_FACTORY_IN_SWAMP"):
			return 1154568952;
	
		case joaat("WB_DISCO_ROADSIDE_BROTHEL"):
			return -2060865802;
	
		case joaat("WB_DISCO_ANCIENT_TOMAHAWK"):
			return 2072029413;
	
		case joaat("WB_DISCO_TREASURE_MAP_HALVES"):
			return 513110082;
	
		case joaat("WB_DISCO_SHRINE"):
			return -1859413640;
	
		case joaat("WB_DISCO_BRAITH_3"):
			return -2108030724;
	
		case joaat("WB_DISCO_SHEEP_GUY"):
			return -777592153;
	
		case joaat("WB_DISCO_ABANDONED_MISSION"):
			return 683269210;
	
		case joaat("WB_DISCO_DEAD_TOWN"):
			return -1109016944;
	
		case joaat("WB_DISCO_MAIL_TRUCK"):
			return -1061274876;
	
		case joaat("WB_DISCO_BANK_STAGECOACH"):
			return 1335921989;
	
		case joaat("WB_DISCO_CIV_WAR_BATTLEFIELD"):
			return 1535254161;
	
		case joaat("WB_DISCO_EASEL"):
			return 1034793488;
	
		case joaat("WB_DISCO_CIRCUS_WAGON"):
			return 657666087;
	
		case joaat("WB_DISCO_WAGON_CIRCLE"):
			return 1187689415;
	
		case joaat("WB_DISCO_VAMPIRE_CLUES"):
			return -890175011;
	
		case joaat("WB_DISCO_OBELISK"):
			return -979575591;
	
		case joaat("WB_DISCO_WATER_DIVINER"):
			return -1177787273;
	
		case joaat("WB_DISCO_WHALE_BONE"):
			return -986176781;
	
		case joaat("WB_DISCO_PIG_MASK"):
			return -763376358;
	
		case joaat("WB_DISCO_MEDITATING_MONK"):
			return -415839138;
	
		case joaat("WB_DISCO_BLACK_SHEEP"):
			return -35775921;
	
		case joaat("WB_DISCO_UTOPIAN_COLONY"):
			return -1960242214;
	
		case joaat("WB_DISCO_FOSSILIZED_MAN"):
			return -1646022773;
	
		case joaat("WB_DISCO_OLD_GRAVESTONES"):
			return 230001763;
	
		case joaat("WB_DISCO_DEAD_MINER"):
			return 425000526;
	
		case joaat("WB_DISCO_HORNET_NESTS"):
			return -834293086;
	
		case joaat("WB_DISCO_FACE_IN_CLIFF"):
			return -2009137002;
	
		case joaat("WB_DISCO_BATS_IN_BARN"):
			return -2008558277;
	
		case joaat("WB_DISCO_WHISKEY_TREE"):
			return 464413478;
	
		case joaat("WB_DISCO_METEOR_HOUSE"):
			return 1673499939;
	
		case joaat("WB_DISCO_SUN_DIAL"):
			return -30872859;
	
		case joaat("WB_DISCO_STRANGE_STATUES"):
			return 2000209669;
	
		case joaat("WB_DISCO_LIGHTNING_TREES"):
			return -715636193;
	
		case joaat("WB_DISCO_POWDER_KEG"):
			return -1308658310;
	
		case joaat("WB_DISCO_BRUSH_FIRE"):
			return 1734766691;
	
		case joaat("WB_DISCO_DEAD_SNAKE"):
			return -1714262909;
	
		case joaat("WB_DISCO_WITCHES_CAULDRON"):
			return 1464664327;
	
		case joaat("WB_DISCO_DEAD_CHINESE_TRAVELLER"):
			return 1342653896;
	
		case joaat("WB_DISCO_CRASHED_AIRSHIP"):
			return 58958195;
	
		case joaat("WB_DISCO_METEORITE"):
			return -709811179;
	
		case joaat("WB_DISCO_BOOTS_NOTE_RANGE"):
			return 2135153015;
	
		case joaat("WB_DISCO_FLYING_MACHINE"):
			return -1053108445;
	
		case joaat("WB_DISCO_OLD_DIRTY_CABIN"):
			return -654238687;
	
		case joaat("WB_DISCO_BUCK_CARCASS"):
			return -1824429070;
	
		case joaat("WB_DISCO_GRAVE"):
			return -1761578407;
	
		case joaat("WB_DISCO_TREE_STRUCK"):
			return -1505275983;
	
		case joaat("WB_DISCO_CEREMONIAL_HATCHET"):
			return -261997819;
	
		case joaat("WB_DISCO_BOAT_IN_TREE"):
			return -1084929085;
	
		case joaat("WB_DISCO_UTE_WICKUP"):
			return -1891628345;
	
		case joaat("WB_DISCO_GIANT_REMAINS"):
			return -1787770845;
	
		case joaat("WB_DISCO_KILL_ZONE"):
			return 503180747;
	
		case joaat("WB_DISCO_VIKING_GEAR"):
			return 733338689;
	
		case joaat("WB_DISCO_PILE_SKULLS"):
			return 173549940;
	
		case joaat("WB_DISCO_ANCIENT_SEALED_CLAY_URN"):
			return -1427565340;
	
		case joaat("WB_DISCO_BRA_SECRET"):
			return 1861313914;
	
		case joaat("WB_DISCO_AXE_IN_TREE"):
			return 870958936;
	
		case joaat("WB_DISCO_DREAMCATCHERS"):
			return -321841939;
	
		case joaat("WB_DISCO_OLD_FIREPIT"):
			return -544327665;
	
		case joaat("WB_DISCO_MICAH_CAMP"):
			return 118535038;
	
		case joaat("WB_DISCO_RAM_MASK"):
			return 1490223565;
	
		case joaat("WB_DISCO_SCARECROW_2"):
			return -1208846034;
	
		case joaat("WB_DISCO_ARTHUR_GRAVE"):
			return 404434344;
	
		case joaat("WB_DISCO_WHISPERING_TREES"):
			return 221420861;
	
		case joaat("WB_DISCO_TRADING_POST"):
			return -232974724;
	
		case joaat("WB_DISCO_BROKEN_WAGONS"):
			return -1859023693;
	
		case joaat("WB_DISCO_CIV_WAR_FORT"):
			return 1347913620;
	
		case joaat("WB_DISCO_DESERT_WAGON"):
			return -1283611369;
	
		case joaat("WB_DISCO_ANCIENT_ARROW_HEADS"):
			return 373034311;
	
		case joaat("WB_DISCO_PAGAN_RITUAL"):
			return -739986731;
	
		case joaat("WB_DISCO_SPERM_WHALE"):
			return 1986618633;
	
		case joaat("WB_DISCO_SWAMP_HAND"):
			return 1519228573;
	
		case joaat("WB_DISCO_MAMMOTH"):
			return -148407339;
	
		case joaat("WB_DISCO_SCARECROW_3"):
			return 1048086072;
	
		case joaat("WB_DISCO_SERPENT_MOUND"):
			return -607940493;
	
		case joaat("WB_DISCO_PHONOGRAPH_HOUSE"):
			return -1614148516;
	
		case joaat("WB_DISCO_STONEHENGE"):
			return -161804536;
	
		case joaat("WB_DISCO_FIRE_LOOKOUT_TOWER"):
			return 918206817;
	
		case joaat("WB_DISCO_FLATTENED_CABIN"):
			return -920971071;
	
		case joaat("WB_DISCO_OLD_WORLD_SCRIPT"):
			return -1609238411;
	
		case joaat("WB_DISCO_CAT_MASK"):
			return 1801731633;
	
		case joaat("WB_DISCO_DEAD_CIV_WAR"):
			return 1937333853;
	
		case joaat("WB_DISCO_LOVE_MESSAGE"):
			return 74587361;
	
		case joaat("WB_DISCO_HIDDEN_TUNNEL"):
			return 308500632;
	
		case joaat("WB_DISCO_SCARECROW_4"):
			return 939555152;
	
		case joaat("WB_DISCO_CORPSE_PIT"):
			return -1568839185;
	
		default:
		
	}

	return 0;
}

BOOL func_11(int iParam0, BOOL bParam1) // Position - 0x1BFD Hash - 0x92045BA6 ^0x92045BA6
{
	if (!func_87(iParam0))
		return false;

	return Global_40.f_8863[func_88(iParam0, 1)] && bParam1 != false;
}

void func_12(var uParam0) // Position - 0x1C27 Hash - 0xDA8817E5 ^0xAD3AC0C4
{
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;
	char* name;

	if (func_45(*uParam0))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			switch (*uParam0)
			{
				case -1891628345:
					vector = { -2694.572f, -1500.398f, 150f };
					vector2 = { 0f, 0f, 1.841f };
					vector3 = { 16.663f, 12.967f, 11.141f };
					name = "DLUW_Attack";
					break;
			
				case -1859413640:
					vector = { 2195.32f, -554.613f, 40.995f };
					vector2 = { 0f, 0f, -74.605f };
					vector3 = { 1.691f, 1.755f, 2.318f };
					name = "DLSW_Attack";
					break;
			
				case -1761578407:
					if (Global_36 > -1200f)
					{
						vector = { -762.369f, -1910.463f, 51f };
						vector2 = { 0f, 0f, 43.472f };
						vector3 = { 3.896f, 3.266f, 3.303f };
						name = "DLG1_Attack";
					}
					else
					{
						vector = { -1738f, -996f, 114f };
						vector2 = { 0f, 0f, -54.795f };
						vector3 = { 4.369f, 3.487f, 3.303f };
						name = "DLG2_Attack";
					}
					break;
			
				case -849582265:
					vector = { -2587.832f, -81.85f, 166.262f };
					vector2 = { 0f, 0f, 9.056f };
					vector3 = { 52.076f, 56.679f, 16.103f };
					name = "DLIB_Attack";
					break;
			
				case -780455182:
					vector = { -988.307f, 1692.387f, 243.864f };
					vector2 = { 0f, 0f, 0f };
					vector3 = { 4.673f, 3.887f, 3.06f };
					name = "DLDG_Attack";
					break;
			
				case -739986731:
					vector = { -2905.353f, -254.294f, 186.571f };
					vector2 = { 0f, 0f, 129.763f };
					vector3 = { 7.64f, 7.534f, 4f };
					name = "DLPR_Attack";
					break;
			
				case -641229542:
					vector = { 1750.836f, -2091.653f, 40.941f };
					vector2 = { 0f, 0f, -30.078f };
					vector3 = { 2.215f, 3.182f, 2.394f };
					name = "DLRC_Attack";
					break;
			
				case -499529359:
					vector = { 2285.546f, 97.363f, 49.583f };
					vector2 = { 0f, 0f, -30.998f };
					vector3 = { 7.132f, 4.645f, 4.596f };
					name = "DLDCG_Attack";
					break;
			
				case -657632:
					vector = { 2684.651f, 71.256f, 59f };
					vector2 = { 0f, 0f, 111.493f };
					vector3 = { 4.343f, 3.084f, 3.303f };
					name = "DLRG_Attack";
					break;
			
				case 230001763:
					vector = { 2133.283f, 145.452f, 75.745f };
					vector2 = { 0f, 0f, 58.303f };
					vector3 = { 17.167f, 17.176f, 9.904f };
					name = "DLOG_Attack";
					break;
			
				case 404434344:
					if (Global_36 > -1200f)
					{
						vector = { -762.369f, -1910.463f, 51f };
						vector2 = { 0f, 0f, 43.472f };
						vector3 = { 3.896f, 3.266f, 3.303f };
						name = "DLG1_Attack";
					}
					else
					{
						vector = { -1738f, -996f, 114f };
						vector2 = { 0f, 0f, -54.795f };
						vector3 = { 4.369f, 3.487f, 3.303f };
						name = "DLG2_Attack";
					}
					break;
			
				case 429544447:
					vector = { -6314.771f, -3467f, -11.247f };
					vector2 = { 0f, 0f, 32.675f };
					vector3 = { 2.852f, 3.164f, 3.06f };
					name = "DLJM_Attack";
					break;
			
				case 683269210:
					vector = { -5576.82f, -2583.934f, -9.541f };
					vector2 = { 0f, 0f, 30.534f };
					vector3 = { 13.524f, 10.157f, 15.906f };
					name = "DLAM_Attack";
					break;
			
				case 921081956:
					vector = { 2415.271f, -738.691f, 41f };
					vector2 = { 0f, 0f, 89.245f };
					vector3 = { 6.662f, 6.841f, 12.231f };
					name = "DLORC_Attack";
					break;
			
				case 949011950:
					vector = { -2341.024f, -2180.015f, 70f };
					vector2 = { 0f, 0f, 123.618f };
					vector3 = { 7.322f, 10.134f, 10.231f };
					name = "DLOH_Attack";
					break;
			
				case 1861313914:
					vector = { 894.559f, -1969.353f, 43.7f };
					vector2 = { 0f, 0f, 51.997f };
					vector3 = { 4.5f, 4.5f, 6f };
					name = "DLBS_Attack";
					break;
			
				case 2072029413:
					vector = { 808.518f, 2299.105f, 250.32f };
					vector2 = { 0f, 0f, 21.51f };
					vector3 = { 5f, 4f, 9f };
					name = "DLAT_Attack";
					break;
			}
		
			uParam0->f_2 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, name);
		}
	}

	return;
}

Vector3 func_13(var uParam0, int iParam1) // Position - 0x210B Hash - 0xAF22EF00 ^0xAF22EF00
{
	switch (*uParam0)
	{
		case -1859023693:
			if (iParam1 == 0)
				return 525.7659f, 373.9645f, 107.9581f;
			else if (iParam1 == 1)
				return 610.1569f, -142.2089f, 146.4651f;
			else if (iParam1 == 2)
				return 1253.2327f, 40.0713f, 94.2498f;
			else if (iParam1 == 3)
				return 886.287f, 470.977f, 103.937f;
			else if (iParam1 == 4)
				return 370.7786f, 1072.1497f, 190.1675f;
			else if (iParam1 == 5)
				return -3575.8662f, -2199.0667f, -13.415f;
			else if (iParam1 == 6)
				return -5159.0303f, -3162.6704f, -18.5954f;
			else if (iParam1 == 7)
				return -3970.8042f, -3027.6924f, -12.9605f;
			else if (iParam1 == 8)
				return -3242.6785f, -3077.8752f, -0.5597f;
			else if (iParam1 == 9)
				return -3686.284f, -3258.813f, -4.4117f;
			else if (iParam1 == 10)
				return 795.2883f, 1013.3038f, 118.3968f;
			break;
	
		case -1761578407:
		case 404434344:
			if (iParam1 == 9)
				return -762.4968f, -1910.6614f, 50.4933f;
			else if (iParam1 == 10)
				return -1738.2819f, -995.4295f, 113.6716f;
			else
				return func_90(uParam0, iParam1);
			break;
	
		case -1272862985:
			return func_90(uParam0, iParam1);
	
		case -1243267511:
			return func_90(uParam0, iParam1);
	
		case -890175011:
			return func_90(uParam0, iParam1);
	
		case -834293086:
			if (iParam1 == 0)
				return 1747.0217f, -267.8047f, 73.0826f;
			else if (iParam1 == 1)
				return 1978.2886f, -60.4567f, 59.4946f;
			else if (iParam1 == 2)
				return 640.8188f, -1062.6128f, 48.0237f;
			else if (iParam1 == 3)
				return 839.6257f, -1174.0022f, 54.9616f;
			else if (iParam1 == 4)
				return 1917.6115f, 10.6206f, 77.6881f;
			else if (iParam1 == 5)
				return -85.5144f, 76.4358f, 93.2066f;
			else if (iParam1 == 6)
				return 76.4646f, 854.9302f, 207.8816f;
			else if (iParam1 == 7)
				return 1871.2151f, 643.5952f, 119.9651f;
			else if (iParam1 == 8)
				return 2572.7585f, 690.9401f, 83.9642f;
			else if (iParam1 == 9)
				return 2264.918f, 934.7651f, 81.1843f;
			break;
	
		case -544327665:
			if (iParam1 == 0)
				return 500.882f, 80.003f, 139.28f;
			else if (iParam1 == 1)
				return 759.079f, -1133.282f, 55.059f;
			else if (iParam1 == 2)
				return -3667.897f, -2805.515f, -7.129f;
			break;
	
		case -321841939:
			return func_90(uParam0, iParam1);
	
		case 503180747:
			if (iParam1 == 0)
				return 2325.9783f, 1070.3202f, 44.9401f;
			else if (iParam1 == 1)
				return -2698.6558f, 697.2829f, 162.88904f;
			break;
	
		case 513110082:
			if (iParam1 == 0)
				return -2531.5f, 1174.4f, 225.9f;
			else if (iParam1 == 1)
				return 3026.4f, 1778f, 84.2f;
			else if (iParam1 == 2)
				return -4389.58f, -2166.55f, 50.81f;
			break;
	
		case 677950956:
			return func_90(uParam0, iParam1);
	
		case 870958936:
			return func_91(uParam0, iParam1);
	
		case 1120968795:
			if (iParam1 == 0)
				return -1521.8108f, 519.1222f, 101.6756f;
			else if (iParam1 == 1)
				return 2417.9363f, 853.4788f, 72.5143f;
			break;
	
		case 1519472817:
			if (iParam1 == 0)
				return -2519.4753f, 820.6946f, 146.4494f;
			else if (iParam1 == 1)
				return -1349.7274f, -923.9958f, 69.342f;
			break;
	
		case 1535254161:
			return func_90(uParam0, iParam1);
	
		case 2000209669:
			return func_89(uParam0, iParam1);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

int func_14(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x25C1 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_15() // Position - 0x25E9 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_92() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_16(int iParam0) // Position - 0x260E Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_93(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_17(var uParam0) // Position - 0x266D Hash - 0x700EF42A ^0x1FB24E73
{
	if (func_39(uParam0->f_3, 1))
		return true;

	return false;
}

void func_18(var uParam0) // Position - 0x2686 Hash - 0xB1BE772 ^0x50C155FC
{
	if (func_33(uParam0->f_6.f_8))
		func_79(&(uParam0->f_6.f_8), true, true);

	func_25(&(uParam0->f_6.f_5));

	if (func_39(uParam0->f_3, 2))
		func_43(&(uParam0->f_3), 2);

	return;
}

void func_19(var uParam0, int iParam1) // Position - 0x26C6 Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

BOOL func_20(var uParam0) // Position - 0x26D4 Hash - 0x52835008 ^0x3922FFAC
{
	switch (*uParam0)
	{
		case -1859023693:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 4096))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 8192))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_153, 16384))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_153, 32768))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_153, 65536))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_153, 131072))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_153, 262144))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_153, 524288))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_153, 1048576))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_153, 2097152))
					return true;
			else if (uParam0->f_4 == 10)
				if (func_39(Global_40.f_8863.f_153, 4194304))
					return true;
			break;
	
		case -1761578407:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_154, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_154, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_154, 4))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_154, 8))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_154, 16))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_154, 32))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_154, 64))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_154, 128))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_154, 256))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_154, 512))
					return true;
			else if (uParam0->f_4 == 10)
				if (func_39(Global_40.f_8863.f_154, 1024))
					return true;
			break;
	
		case -1272862985:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_152, 262144))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_152, 524288))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_152, 1048576))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_152, 2097152))
					return true;
			break;
	
		case -890175011:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_154, 2048))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_154, 4096))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_154, 8192))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_154, 16384))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_154, 32768))
					return true;
			break;
	
		case -834293086:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_153, 4))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_153, 8))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_153, 16))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_153, 32))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_153, 64))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_153, 128))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_153, 256))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_153, 512))
					return true;
			break;
	
		case -544327665:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_152, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_152, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_152, 4))
					return true;
			break;
	
		case -321841939:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_148, 2))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_148, 4))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_148, 8))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_148, 16))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_148, 32))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_148, 64))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_148, 128))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_148, 256))
					return true;
			else if (uParam0->f_4 == 8)
				if (func_39(Global_40.f_8863.f_148, 512))
					return true;
			else if (uParam0->f_4 == 9)
				if (func_39(Global_40.f_8863.f_148, 1024))
					return true;
			else if (uParam0->f_4 == 10)
				if (func_39(Global_40.f_8863.f_148, 2048))
					return true;
			else if (uParam0->f_4 == 11)
				if (func_39(Global_40.f_8863.f_148, 4096))
					return true;
			else if (uParam0->f_4 == 12)
				if (func_39(Global_40.f_8863.f_148, 8192))
					return true;
			else if (uParam0->f_4 == 13)
				if (func_39(Global_40.f_8863.f_148, 16384))
					return true;
			else if (uParam0->f_4 == 14)
				if (func_39(Global_40.f_8863.f_148, 32768))
					return true;
			else if (uParam0->f_4 == 15)
				if (func_39(Global_40.f_8863.f_148, 65536))
					return true;
			else if (uParam0->f_4 == 16)
				if (func_39(Global_40.f_8863.f_148, 131072))
					return true;
			else if (uParam0->f_4 == 17)
				if (func_39(Global_40.f_8863.f_148, 262144))
					return true;
			else if (uParam0->f_4 == 18)
				if (func_39(Global_40.f_8863.f_148, 524288))
					return true;
			else if (uParam0->f_4 == 19)
				if (func_39(Global_40.f_8863.f_148, 1048576))
					return true;
			break;
	
		case 404434344:
			if (func_39(Global_40.f_8863.f_154, 1))
				return true;
			break;
	
		case 513110082:
			switch (uParam0->f_4)
			{
				case 0:
					if (func_39(Global_40.f_8863.f_150, 1))
						return true;
					break;
			
				case 1:
					if (func_39(Global_40.f_8863.f_150, 2))
						return true;
					break;
			
				case 2:
					if (func_39(Global_40.f_8863.f_150, 4) && func_39(Global_40.f_8863.f_150, 8) && func_39(Global_40.f_8863.f_150, 16) && func_39(Global_40.f_8863.f_150, 32) && func_39(Global_40.f_8863.f_150, 64) && func_39(Global_40.f_8863.f_150, 128))
						return true;
					break;
			
				default:
					break;
			}
			break;
	
		case 677950956:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_154, 65536))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_154, 131072))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_154, 262144))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_154, 524288))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_154, 1048576))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_154, 2097152))
					return true;
			break;
	
		case 870958936:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_149, 1))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_149, 2))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_149, 4))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_149, 8))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_149, 16))
					return true;
			break;
	
		case 1120968795:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 1024))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 2048))
					return true;
			break;
	
		case 1519472817:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_153, 8388608))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_153, 16777216))
					return true;
			break;
	
		case 2000209669:
			if (uParam0->f_4 == 0)
				if (func_39(Global_40.f_8863.f_152, 8))
					return true;
			else if (uParam0->f_4 == 1)
				if (func_39(Global_40.f_8863.f_152, 16))
					return true;
			else if (uParam0->f_4 == 2)
				if (func_39(Global_40.f_8863.f_152, 32))
					return true;
			else if (uParam0->f_4 == 3)
				if (func_39(Global_40.f_8863.f_152, 64))
					return true;
			else if (uParam0->f_4 == 4)
				if (func_39(Global_40.f_8863.f_152, 128))
					return true;
			else if (uParam0->f_4 == 5)
				if (func_39(Global_40.f_8863.f_152, 256))
					return true;
			else if (uParam0->f_4 == 6)
				if (func_39(Global_40.f_8863.f_152, 512))
					return true;
			else if (uParam0->f_4 == 7)
				if (func_39(Global_40.f_8863.f_152, 1024))
					return true;
			else if (uParam0->f_4 == 11)
				if (func_39(Global_40.f_8863.f_152, 16384))
					return true;
			break;
	
		default:
			break;
	}

	return false;
}

void func_21(var uParam0) // Position - 0x338F Hash - 0x32186C70 ^0xD26CF7E4
{
	uParam0->f_6.f_2 = { func_90(uParam0, uParam0->f_4) };
	uParam0->f_6.f_1 = 5f;
	uParam0->f_6 = 10f;

	switch (*uParam0)
	{
		case -1960242214:
		case -1300082860:
		case -161804536:
		case 657666087:
		case 1673499939:
		case 1734766691:
			uParam0->f_6 = 30f;
			uParam0->f_6.f_1 = 15f;
			break;
	
		case -1958832660:
		case -1109016944:
			uParam0->f_6 = 48f;
			uParam0->f_6.f_1 = 24f;
			break;
	
		case -1891628345:
		case -986176781:
		case -849582265:
		case 247563739:
		case 1982045664:
		case 1986618633:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			break;
	
		case -1761578407:
		case 404434344:
			uParam0->f_6 = 10f;
			func_94(uParam0);
			break;
	
		case -1646022773:
		case 1284679164:
		case 2000209669:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
			break;
	
		case -1614148516:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
			break;
	
		case -1243267511:
			uParam0->f_6 = 10f;
			func_94(uParam0);
			break;
	
		case -890175011:
			uParam0->f_6 = 3f;
			uParam0->f_6.f_1 = 1.5f;
		
			if (uParam0->f_4 == 0 || uParam0->f_4 == 1 || uParam0->f_4 == 3 || uParam0->f_4 == 4)
				func_94(uParam0);
			break;
	
		case -607940493:
			uParam0->f_6 = 30f;
			func_94(uParam0);
			break;
	
		case -321841939:
			uParam0->f_6 = 10f;
			break;
	
		case 677950956:
			uParam0->f_6 = 6f;
			uParam0->f_6.f_1 = 3f;
		
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
				func_94(uParam0);
			break;
	
		case 1535254161:
			uParam0->f_6 = 20f;
			uParam0->f_6.f_1 = 10f;
			func_94(uParam0);
			break;
	
		default:
			uParam0->f_6 = 10f;
			uParam0->f_6.f_1 = 5f;
			break;
	}

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x35A7 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_23(var uParam0) // Position - 0x35D1 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_24(var uParam0) // Position - 0x35E7 Hash - 0x5001E582 ^0x5001E582
{
	return func_95(*uParam0, 1);
}

void func_25(var uParam0) // Position - 0x35F7 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_96(uParam0, 0f);
	return;
}

int func_26(var uParam0) // Position - 0x3606 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_24(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_97(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_98() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

BOOL func_27(var uParam0, BOOL bParam1) // Position - 0x3659 Hash - 0x1ACEECAF ^0xDBC34297
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (bParam1)
	{
		if (!func_33(uParam0->f_6.f_8))
			return true;
	
		if (func_99(uParam0))
			return true;
	
		if (!func_100(uParam0, 0))
			return true;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return true;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) || !func_101(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) > uParam0->f_6.f_1 + 0.5f || !func_101(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}
	else
	{
		if (func_99(uParam0))
			return false;
	
		if (!func_100(uParam0, 0))
			return false;
	
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			return false;
	
		if (*uParam0 == -1761578407 || *uParam0 == 404434344 || *uParam0 == -1243267511 || *uParam0 == -607940493 || *uParam0 == 1535254161)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
				return false;
		
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0) && func_101(Global_35, uParam0->f_6.f_2, 0))
				return true;
		}
		else if (func_14(Global_35, uParam0->f_6.f_2, true) <= uParam0->f_6.f_1 && func_101(Global_35, uParam0->f_6.f_2, 0))
		{
			return true;
		}
	}

	return false;
}

void func_28(var uParam0) // Position - 0x387B Hash - 0x8F06DBDB ^0x2EE20047
{
	if (!func_33(uParam0->f_6.f_8))
	{
		if (*uParam0 == 404434344)
		{
			if (func_53(*uParam0))
			{
				uParam0->f_6.f_8 = func_102("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_102("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == -1761578407)
		{
			if (uParam0->f_4 == 2)
			{
				if (func_39(Global_40.f_8863.f_154, 4))
				{
					uParam0->f_6.f_8 = func_102("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_102("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (uParam0->f_4 == 3)
			{
				if (func_39(Global_40.f_8863.f_154, 8))
				{
					uParam0->f_6.f_8 = func_102("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_34(uParam0->f_6.f_8, false, true);
				}
				else
				{
					uParam0->f_6.f_8 = func_102("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				}
			}
			else if (func_20(uParam0))
			{
				uParam0->f_6.f_8 = func_102("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_102("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			}
		}
		else if (*uParam0 == 1861313914)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_102("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_102("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (*uParam0 == -415839138)
		{
			if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
			{
				uParam0->f_6.f_8 = func_102("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_34(uParam0->f_6.f_8, false, true);
			}
			else
			{
				uParam0->f_6.f_8 = func_102("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 2, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
			}
		}
		else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		{
			uParam0->f_6.f_8 = func_102("DISCO_FOCUS", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
			func_34(uParam0->f_6.f_8, false, true);
		}
		else
		{
			uParam0->f_6.f_8 = func_102("DISCO_EXAMINE", joaat("INPUT_CONTEXT_Y"), Global_35, 0, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("PLAYER_FOCUS_TIMING"), false, false);
		}
	
		func_103(uParam0->f_6.f_8, 13, true, true);
		func_104(uParam0->f_6.f_8);
	}

	return;
}

char* func_29(var uParam0) // Position - 0x3CBD Hash - 0xAD1F4E36 ^0xB9AF6B11
{
	if (*uParam0 == 404434344)
		if (func_53(*uParam0))
			return "DISCO_GRAVE_AM";
		else
			return "DISCO_GRAVE";
	else if (*uParam0 == -1761578407)
		if (func_20(uParam0))
			if (uParam0->f_4 == 0)
				return "DISCO_GRAVE_AM";
			else if (uParam0->f_4 == 1)
				return "DISCO_GRAVE_JC";
			else if (uParam0->f_4 == 2)
				return "DISCO_GRAVE_HM";
			else if (uParam0->f_4 == 3)
				return "DISCO_GRAVE_LS";
			else if (uParam0->f_4 == 4)
				return "DISCO_GRAVE_SM";
			else if (uParam0->f_4 == 5)
				return "DISCO_GRAVE_DC";
			else if (uParam0->f_4 == 6)
				return "DISCO_GRAVE_KD";
			else if (uParam0->f_4 == 7)
				return "DISCO_GRAVE_SG";
			else if (uParam0->f_4 == 8)
				return "DISCO_GRAVE_EF";
		else
			return "DISCO_GRAVE";
	else if (*uParam0 == -890175011)
		return "DISCO_VAMP";
	else if (*uParam0 == 677950956)
		return "DISCO_VAMP";
	else if (*uParam0 == -321841939)
		return "DISCO_DREAM";
	else if (func_11(*uParam0, 2) || func_11(*uParam0, 16))
		if (*uParam0 == -1958832660)
			return "DISCO_AC";
		else if (*uParam0 == -1300082860)
			return "DISCO_AW";
		else if (*uParam0 == 247563739)
			return "DISCO_ATP";
		else if (*uParam0 == -1287911066)
			return "DISCO_BR";
		else if (*uParam0 == 1861313914)
			return "DISCO_BS";
		else if (*uParam0 == 1734766691)
			return "DISCO_FIRE";
		else if (*uParam0 == 657666087)
			return "DISCO_CW";
		else if (*uParam0 == 1535254161)
			return "DISCO_CWB";
		else if (*uParam0 == 58958195)
			return "DISCO_CA";
		else if (*uParam0 == -1109016944)
			return "DISCO_DT";
		else if (*uParam0 == -780455182)
			return "DISCO_DG";
		else if (*uParam0 == -1636964661)
			return "DISCO_DL";
		else if (*uParam0 == -2009137002)
			return "DISCO_FIC";
		else if (*uParam0 == -1243267511)
			return "DISCO_FT";
		else if (*uParam0 == -1053108445)
			return "DISCO_FLY";
		else if (*uParam0 == -1646022773)
			return "DISCO_FO";
		else if (*uParam0 == 1284679164)
			return "DISCO_FR";
		else if (*uParam0 == 2134589549)
			return "DISCO_FS";
		else if (*uParam0 == -1787770845)
			return "DISCO_GM";
		else if (*uParam0 == -1887999095)
			return "DISCO_GS";
		else if (*uParam0 == 1519228573)
			return "DISCO_HS";
		else if (*uParam0 == 1982045664)
			return "DISCO_HW";
		else if (*uParam0 == 308500632)
			return "DISCO_HT";
		else if (*uParam0 == -849582265)
			return "DISCO_IB";
		else if (*uParam0 == 429544447)
			return "DISCO_JM";
		else if (*uParam0 == -148407339)
			return "DISCO_MA";
		else if (*uParam0 == -415839138)
			return "DISCO_MONK";
		else if (*uParam0 == 1673499939)
			return "DISCO_MH";
		else if (*uParam0 == -709811179)
			return "DISCO_MT";
		else if (*uParam0 == -979575591)
			return "DISCO_OB";
		else if (*uParam0 == -1609238411)
			return "DISCO_OWS";
		else if (*uParam0 == 921081956)
			return "DISCO_ORC";
		else if (*uParam0 == -739986731)
			return "DISCO_PR";
		else if (*uParam0 == 1034793488)
			return "DISCO_PIC";
		else if (*uParam0 == -1614148516)
			return "DISCO_PH";
		else if (*uParam0 == -1761189332)
			return "DISCO_RR";
		else if (*uParam0 == -607940493)
			return "DISCO_SM";
		else if (*uParam0 == 1986618633)
			return "DISCO_SW";
		else if (*uParam0 == -161804536)
			return "DISCO_ST";
		else if (*uParam0 == 2000209669)
			return "DISCO_SS";
		else if (*uParam0 == -232974724)
			return "DISCO_TP";
		else if (*uParam0 == -1272862985)
			return "DISCO_TT";
		else if (*uParam0 == -1891628345)
			return "DISCO_UTE";
		else if (*uParam0 == -1960242214)
			return "DISCO_UCB";
		else if (*uParam0 == -1505275983)
			return "DISCO_WT";
		else if (*uParam0 == -986176781)
			return "DISCO_WB";
		else if (*uParam0 == 373034311)
			return "DISCO_AA";
	else if (*uParam0 == -986176781 || *uParam0 == 1986618633 || *uParam0 == -1787770845 || *uParam0 == -148407339)
		return "DISCO_BONES";
	else if (*uParam0 == -1958832660 || *uParam0 == 921081956 || *uParam0 == 247563739 || *uParam0 == -232974724 || *uParam0 == -1300082860 || *uParam0 == -979575591 || *uParam0 == 1673499939)
		return "DISCO_STRUCT";
	else if (*uParam0 == -780455182)
		return "DISCO_GRAVE";
	else if (*uParam0 == -2009137002)
		return "DISCO_SCULPT";
	else if (*uParam0 == -1243267511 || *uParam0 == -1272862985 || *uParam0 == -1505275983)
		return "DISCO_TREE";
	else if (*uParam0 == 1034793488 || *uParam0 == 373034311)
		return "DISCO_PAINT";
	else if (*uParam0 == -1646022773 || *uParam0 == 1284679164 || *uParam0 == 2134589549 || *uParam0 == -1887999095 || *uParam0 == 1519228573 || *uParam0 == -1287911066 || *uParam0 == -1636964661 || *uParam0 == 429544447 || *uParam0 == -739986731)
		return "DISCO_CORPSE";
	else if (*uParam0 == -1109016944 || *uParam0 == 1535254161 || *uParam0 == -849582265 || *uParam0 == -161804536 || *uParam0 == -1891628345 || *uParam0 == -1960242214 || *uParam0 == -607940493 || *uParam0 == 308500632 || *uParam0 == 1734766691 || *uParam0 == -415839138 || *uParam0 == 1982045664)
		return "DISCO_SITE";
	else if (*uParam0 == -1614148516)
		return "DISCO_DEVICE";
	else if (*uParam0 == -1761189332 || *uParam0 == -1609238411 || *uParam0 == -709811179)
		return "DISCO_ROCK";
	else if (*uParam0 == 58958195 || *uParam0 == -1053108445 || *uParam0 == 657666087)
		return "DISCO_WRECK";
	else if (*uParam0 == 1861313914)
		if (func_16(59))
			return "DISCO_CORPSE";
		else
			return "DISCO_SITE";
	else if (*uParam0 == 2000209669)
		if (uParam0->f_4 == 11)
			return "DISCO_PAINT";
		else
			return "DISCO_SCULPT";
	else
		return "DISCO_UNKNOWN";

	return "";
}

void func_30(var uParam0, int iParam1, char* sParam2, BOOL bParam3) // Position - 0x452A Hash - 0x92B8786B ^0x6992BF35
{
	int num;
	int num2;
	int num3;

	if (!func_33(iParam1))
		return;

	num = func_105(iParam1);

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
	{
		if (!(*uParam0 == -890175011) && !(*uParam0 == 677950956) && !(*uParam0 == -1308658310))
			if (bParam3)
				func_40(&num2, 12);
			else
				func_40(&num2, 8);
	
		if (*uParam0 == 1861313914 || *uParam0 == -1308658310 || *uParam0 == -415839138)
			if (func_11(*uParam0, 16))
				num3 = 0;
			else
				num3 = 2;
		else
			num3 = 0;
	
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, num3, 1, 1710353528, sParam2, num2);
	}

	return;
}

BOOL func_31(var uParam0) // Position - 0x45F5 Hash - 0x87BF472A ^0x8A3FB963
{
	if (func_78(uParam0->f_6.f_8, true))
		return true;

	return false;
}

void func_32(int iParam0, BOOL bParam1) // Position - 0x4610 Hash - 0x54AA129E ^0x54AA129E
{
	if (!func_87(iParam0))
		return;

	Global_40.f_8863[func_88(iParam0, 1)] = Global_40.f_8863[func_88(iParam0, 1)] || bParam1;
	return;
}

BOOL func_33(int iParam0) // Position - 0x4646 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_34(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4685 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_33(iParam0))
		return;

	num = func_105(iParam0);
	func_106(num, bParam1);
	return;
}

void func_35(var uParam0) // Position - 0x46B1 Hash - 0xB093A844 ^0xA61CDF5C
{
	if (func_92() != -1)
		return;

	if (*uParam0 == -321841939)
	{
		if (func_107(uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(uParam0->f_4))
				MAP::_MAP_DISCOVER_REGION(func_107(uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	}
	else
	{
		if (func_108(*uParam0, uParam0->f_4) != 0)
		{
			if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_108(*uParam0, uParam0->f_4)))
				MAP::_MAP_DISCOVER_REGION(func_108(*uParam0, uParam0->f_4));
		
			func_32(*uParam0, 8);
		}
	
		func_70(uParam0);
	}

	return;
}

void func_36(var uParam0, BOOL bParam1) // Position - 0x473F Hash - 0x3BBAC949 ^0x751C9296
{
	int num;

	if (*uParam0 == -321841939)
		if (bParam1)
			if (func_109() < 20 - 1)
				return;
		else if (!func_110())
			return;

	if (bParam1)
		num = func_112(*uParam0, func_111(), uParam0->f_4);
	else
		num = func_113(*uParam0, uParam0->f_4);

	if (num != 0)
	{
		if (bParam1)
		{
			func_114(num, 0);
		
			if (*uParam0 == -890175011)
			{
				if (func_115() == 5 - 1)
				{
					if (func_111())
					{
						func_114(joaat("journal_town_secret_vampmap_ar"), 0);
						num = joaat("journal_town_secret_vampmap_ar");
					}
					else
					{
						func_114(joaat("journal_town_secret_vampmap_jn"), 0);
						num = joaat("journal_town_secret_vampmap_jn");
					}
				}
			}
		}
	
		if (func_116())
		{
			Global_1357518 = num;
		
			if (bParam1 == true)
				Global_1357519 = { uParam0->f_6.f_2 };
		}
	}

	return;
}

void func_37(BOOL bParam0, int iParam1) // Position - 0x4810 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_117(&Global_0, 8);

	if (!func_118() || func_92() != -1)
		return;

	func_117(&Global_0, 1);
	return;
}

float func_38(int iParam0, BOOL bParam1) // Position - 0x4856 Hash - 0x376EA9F4 ^0xA7A80B21
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return 0f;

	num = func_105(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_GET_PROGRESS(Global_1945188[num /*18*/].f_3);
}

BOOL func_39(int iParam0, int iParam1) // Position - 0x48AE Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_40(int iParam0, int iParam1) // Position - 0x48BD Hash - 0xF55E891F ^0xF55E891F
{
	func_119(iParam0, iParam1);
	return;
}

void func_41(var uParam0) // Position - 0x48CD Hash - 0x7DD80D7C ^0x2A3ED7AA
{
	uParam0->f_6.f_10.f_21 = 4;
	uParam0->f_6.f_10.f_17 = 4;
	uParam0->f_6.f_10.f_18 = 1;
	uParam0->f_6.f_10.f_23 = 2;
	uParam0->f_6.f_10.f_24 = 2;
	uParam0->f_6.f_10 = { func_90(uParam0, uParam0->f_4) };
	return;
}

void func_42(var uParam0) // Position - 0x4914 Hash - 0xC9354E8F ^0x12F79925
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_35, &(uParam0->f_6.f_10));

	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x4934 Hash - 0xF55E891F ^0xF55E891F
{
	func_120(uParam0, iParam1);
	return;
}

void func_44(var uParam0) // Position - 0x4944 Hash - 0x90A3D13B ^0x25DA303B
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		IK::_INVERSE_KINEMATICS_SET_DISABLED_FOR_PED(Global_35, 6, false);

	return;
}

BOOL func_45(int iParam0) // Position - 0x4960 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1891628345:
		case -1859413640:
		case -1761578407:
		case -849582265:
		case -780455182:
		case -739986731:
		case -641229542:
		case -499529359:
		case -657632:
		case 230001763:
		case 404434344:
		case 429544447:
		case 683269210:
		case 921081956:
		case 949011950:
		case 1861313914:
		case 2072029413:
			return true;
	}

	return false;
}

BOOL func_46(var uParam0) // Position - 0x49DE Hash - 0xA77C53D8 ^0x41543EB2
{
	Vector3 vector;
	var coords;

	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		func_121(*uParam0, &vector);
	
		if (FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(-1, vector, vector.f_3, vector.f_6) == func_122(Global_35))
		{
			return true;
		}
		else if (MISC::IS_BULLET_IN_ANGLED_AREA(vector, vector.f_3, vector.f_6, true))
		{
			coords = { 0f, 0f, 0f };
		
			if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(Global_35, &coords))
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(coords, vector, vector.f_3, vector.f_6, false, true))
					return true;
		}
	}

	return false;
}

void func_47(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x4A67 Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_92() != -1)
		return;

	if (Global_36616 && func_123(iParam1) != false)
		return;

	num = func_124(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_125(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
	}
	else
	{
		num2 = -1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (num2 < 0)
				if (Global_1347477.f_155[i /*6*/] == 0)
					num2 = i;
		}
	
		if (num2 >= 0)
			func_126(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_125(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

BOOL func_48(var uParam0) // Position - 0x4B66 Hash - 0xA8D562EF ^0xA8D562EF
{
	int num;
	int num2;

	num = func_127();
	num2 = func_128(num);

	switch (*uParam0)
	{
		case -415839138:
			if (num2 > 9 && num2 < 16)
				return true;
			break;
	
		case 1535254161:
			if (num2 >= 0 && num2 <= 4)
				return true;
			else if (num2 >= 23 && num2 <= 24)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_49(var uParam0) // Position - 0x4BDE Hash - 0xD6ABB357 ^0xE629F0A9
{
	Hash prevWeatherTypeHashName;
	Hash nextWeatherTypeHashName;

	prevWeatherTypeHashName = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	nextWeatherTypeHashName = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();

	if (func_129(uParam0, &prevWeatherTypeHashName))
		return true;

	return false;
}

BOOL func_50(int iParam0) // Position - 0x4C02 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_130(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_51(var uParam0) // Position - 0x4C2E Hash - 0x148E20B3 ^0x148E20B3
{
	if (func_72(Global_35, func_131(uParam0, 0), 110f, true, true))
	{
		if (!func_72(Global_35, func_131(uParam0, 0), 45f, true, true))
		{
			if (!bLocal_24)
			{
				if (iLocal_40 >= 10)
				{
					bLocal_24 = true;
					iLocal_39 = GRAPHICS::CREATE_TRACKED_POINT();
					GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_39, func_131(uParam0, 0), 2f);
					iLocal_40 = 0;
					return true;
				}
				else
				{
					iLocal_40 = iLocal_40 + 1;
					return true;
				}
			}
			else if (iLocal_40 >= 10)
			{
				if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_39))
					return true;
			}
			else
			{
				iLocal_40 = iLocal_40 + 1;
				return true;
			}
		}
		else
		{
			return true;
		}
	}

	return false;
}

BOOL func_52(var uParam0) // Position - 0x4CD1 Hash - 0x2536D815 ^0x2536D815
{
	switch (*uParam0)
	{
		case -2108030724:
			if (!func_16(26))
				return false;
			break;
	
		case -2008558277:
			if (func_136(19))
				return false;
			break;
	
		case -1887999095:
			if (!func_16(21))
				return false;
			break;
	
		case -1761578407:
			if (uParam0->f_4 == 0)
			{
				if (!func_132() && !func_133())
				{
					!func_132();
					!func_133();
					return false;
				}
			}
			else if (uParam0->f_4 == 2 || uParam0->f_4 == 3)
			{
				if (!func_135(8924991) && !func_135(665676602))
				{
					!func_135(8924991);
					!func_135(665676602);
					return false;
				}
			}
			else if (uParam0->f_4 == 4)
			{
				if (!func_135(1488286867))
					return false;
			}
			else if (uParam0->f_4 == 6)
			{
				if (!func_135(651395116))
					return false;
			}
			else if (uParam0->f_4 == 7)
			{
				if (!func_135(-1241340344))
					return false;
			}
			else if (uParam0->f_4 == 8)
			{
				if (!func_135(409602249))
					return false;
			}
			else if (uParam0->f_4 == 5)
			{
			}
			else
			{
				uParam0->f_4 == 1;
			}
			break;
	
		case -1308658310:
			if (func_136(11))
				return false;
			break;
	
		case -1240932004:
			if (!func_16(77))
				return false;
			break;
	
		case 118535038:
			if (!func_16(12))
				return false;
			break;
	
		case 221420861:
			if (func_136(29))
				return false;
			break;
	
		case 308500632:
			if (!(Global_40.f_11623[20 /*8*/] > 0))
				return false;
			break;
	
		case 404434344:
			if (!func_132() && !func_133())
			{
				!func_132();
				!func_133();
				return false;
			}
			else if (func_50(77))
			{
				return false;
			}
			else if (func_134() != 0)
			{
				return false;
			}
			break;
	
		case 677950956:
			if (!func_15())
				return false;
			break;
	
		case 1861313914:
			if (func_50(19) || func_136(4))
				return false;
			break;
	
		case 1982045664:
			if (func_50(66))
				return false;
			break;
	}

	return true;
}

BOOL func_53(int iParam0) // Position - 0x4F46 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_11(iParam0, 2);
}

void func_54(var uParam0, int iParam1, BOOL bParam2) // Position - 0x4F55 Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_25(&(uParam0->f_1));

	return;
}

void func_55(var uParam0) // Position - 0x4F6F Hash - 0x8BF028E8 ^0x8BF028E8
{
	func_137(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	return;
}

void func_56(var uParam0) // Position - 0x4F89 Hash - 0xD56BD4AF ^0xDC24C2E3
{
	if (*uParam0 == -654238687)
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(10);
	else if (*uParam0 == -2008558277)
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(7);
	else
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);

	func_140(&uLocal_63);
	func_141(&uLocal_157);

	if (*uParam0 == -415839138)
		func_142(uParam0, &uLocal_31, 64);
	else
		func_142(uParam0, &uLocal_31, 0);

	if (*uParam0 == -415839138)
	{
		TASK::REQUEST_WAYPOINT_RECORDING("discoverable_monk_flee");
		func_143(uParam0);
	}

	return;
}

BOOL func_57(var uParam0) // Position - 0x5003 Hash - 0xD39AF2D5 ^0xD3BE6154
{
	if (!func_144(&uLocal_63) || !func_145(&uLocal_157) || !func_146(uParam0, &uLocal_31))
		return false;

	if (*uParam0 == -415839138)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("discoverable_monk_flee"))
			return false;
	
		if (!func_147(uParam0))
			return false;
	}

	return true;
}

BOOL func_58() // Position - 0x505F Hash - 0x463DA432 ^0x3948CA04
{
	return func_148(Global_1935630, 4096);
}

BOOL func_59(var uParam0) // Position - 0x5072 Hash - 0x7E6B7018 ^0x19664FC5
{
	int i;

	if (*uParam0 == 1861313914)
		if (func_16(59))
			func_150(&uLocal_63, func_131(uParam0, 1), func_149(uParam0, 1), 0, false, true);
		else
			func_150(&uLocal_63, func_131(uParam0, 0), func_149(uParam0, 0), 0, true, true);
	else if (!func_151(uParam0, &uLocal_63, &uLocal_86, false, true, true))
		return false;

	if (*uParam0 == 1861313914 || *uParam0 == -415839138 || *uParam0 == -35775921)
	{
		for (i = 0; i <= 10 - 1; i = i + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[i]))
				if (!PED::IS_PED_READY_TO_RENDER(uLocal_63.f_1[i]))
					return false;
		}
	
		for (i = 0; i <= 10 - 1; i = i + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[i]))
				if (*uParam0 == 1861313914)
					if (i == 0)
						if (func_16(59))
							func_153(uLocal_63.f_1[i], func_152(uParam0, 1));
						else
							func_153(uLocal_63.f_1[i], func_152(uParam0, 0));
				else
					func_153(uLocal_63.f_1[i], func_152(uParam0, i));
		}
	}

	if (*uParam0 == -415839138)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]))
		{
			AUDIO::STOP_PED_SPEAKING(uLocal_63.f_1[0], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_63.f_1[0], 297, true);
		}
	
		if (VOLUME::DOES_VOLUME_EXIST(volLocal_41))
			if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_46))
				anLocal_46 = func_154(volLocal_41, 0, false, 0);
	
		if (func_15())
			func_155(&uLocal_169, Global_35, "JOHN", false);
		else
			func_155(&uLocal_169, Global_35, "ARTHUR", false);
	}
	else if (*uParam0 == -2008558277)
	{
		for (i = 0; i <= 10 - 1; i = i + 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[i]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[i], false);
				func_157(uLocal_63.f_1[i], func_156(uParam0, 0), func_131(uParam0, i), func_149(uParam0, i), 0, false, true, 0, -1082130432);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_63.f_1[i]);
			}
		}
	}
	else if (*uParam0 == -654238687)
	{
		if (!func_53(*uParam0))
		{
			if (!func_159(&uLocal_157, func_71(uParam0, 0), func_158(uParam0, 0), 0))
				return false;
		
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_157[0]))
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_157[0], true);
		}
	}
	else if (*uParam0 == 1861313914)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]))
		{
			AUDIO::STOP_PED_SPEAKING(uLocal_63.f_1[0], true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_63.f_1[0], false);
			PED::SET_PED_CONFIG_FLAG(uLocal_63.f_1[0], 273, true);
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_63.f_1[0], true);
			ENTITY::SET_ENTITY_PROOFS(uLocal_63.f_1[0], 127, false);
		}
	
		if (VOLUME::DOES_VOLUME_EXIST(volLocal_41))
			if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(anLocal_46))
				anLocal_46 = func_154(volLocal_41, 0, false, 0);
	
		func_160(uParam0);
	}
	else if (*uParam0 == -35775921)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]))
			func_161(uLocal_63.f_1[0], true);
	
		if (!func_159(&uLocal_157, func_71(uParam0, 0), func_158(uParam0, 0), 0))
			return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_157[0]))
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]))
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_157[0], uLocal_63.f_1[0], PED::GET_PED_BONE_INDEX(uLocal_63.f_1[0], 14285), func_162(uParam0), func_163(uParam0), false, false, false, false, 2, true, false, false);
	}

	return true;
}

void func_60(var uParam0, var uParam1) // Position - 0x540E Hash - 0xDC3AB742 ^0xDC3AB742
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		func_164(uParam0, &uParam1->[i], i);
	}

	return;
}

void func_61(var uParam0) // Position - 0x5438 Hash - 0x8B3842D5 ^0x8B3842D5
{
	iLocal_59 > 0 && iLocal_59 < 4;

	switch (iLocal_59)
	{
		case 0:
			func_165(&iLocal_59, 4, true);
			break;
	
		case 1:
			if (uLocal_14[6])
				func_165(&iLocal_59, 3, true);
			else if (uLocal_14[7])
				func_165(&iLocal_59, 2, true);
			break;
	
		case 2:
			uLocal_14[7] = 0;
			func_165(&iLocal_59, 1, true);
			break;
	
		case 3:
			uLocal_14[6] = 0;
			func_165(&iLocal_59, 1, true);
			break;
	
		case 4:
			break;
	}

	return;
}

void func_62(var uParam0) // Position - 0x54CC Hash - 0x591C093B ^0x110516C6
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]))
	{
		if (uLocal_87[0 /*4*/] > 0 && uLocal_87[0 /*4*/] < 23)
		{
			if (!func_16(59))
			{
				if (func_50(19))
				{
					func_166(&uLocal_63.f_1[0], false);
					func_68(uParam0);
					func_54(&iLocal_51, 13, true);
				}
			}
		}
	
		switch (uLocal_87[0 /*4*/])
		{
			case 0:
				if (func_16(59))
				{
					func_167(&uLocal_87[0 /*4*/], 23, true);
				}
				else if (func_72(Global_35, func_131(uParam0, 0), 30f, true, true))
				{
					if (func_33(uLocal_48[0]))
					{
						if (!func_168(uLocal_48[0], false))
						{
							func_169(uLocal_48[0], true, true);
							func_34(uLocal_48[0], true, true);
						}
					}
				
					func_170(&uLocal_31[0], "base_bool", true);
					func_171(&uLocal_31[0], "pb_mid_a");
					func_171(&uLocal_31[0], "pb_count");
					func_167(&uLocal_87[0 /*4*/], 1, true);
				}
				break;
		
			case 1:
				if (iLocal_38 < 3)
				{
					if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38 = iLocal_38 + 1;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(1715123483, uLocal_63.f_1[0]);
						func_25(&(uLocal_87[0 /*4*/].f_1));
					}
				}
			
				if (func_72(Global_35, func_131(uParam0, 0), 10f, true, true))
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_mid_a") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uLocal_31[0], "pb_mid_a"))
						{
							iLocal_38 = 0;
							func_170(&uLocal_31[0], "base_bool", false);
							func_173(&uLocal_31[0], "pb_mid_a");
							func_174(&uLocal_31[0], "pb_intial_visit_a");
							func_171(&uLocal_31[0], "pb_mid_b");
							func_171(&uLocal_31[0], "pb_peek_n");
							func_171(&uLocal_31[0], "pb_peek_l");
							func_171(&uLocal_31[0], "pb_peek_r");
							func_167(&uLocal_87[0 /*4*/], 2, true);
						}
					}
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(&uLocal_31[0], "pb_scream");
					func_171(&uLocal_31[0], "pb_cower_count");
					func_167(&uLocal_87[0 /*4*/], 17, true);
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_intial_visit_a") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], "pb_intial_visit_a"))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_31[0], "DIALOG_A_FAR", true))
						if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uLocal_31[0], "base_bool"))
							func_170(&uLocal_31[0], "base_bool", false);
				}
				break;
		
			case 2:
				if (iLocal_38 < 3)
				{
					if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38 = iLocal_38 + 1;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(249295937, uLocal_63.f_1[0]);
						func_25(&(uLocal_87[0 /*4*/].f_1));
					}
				}
			
				if (!func_72(Global_35, func_131(uParam0, 0), 30f, true, true))
				{
					func_171(&uLocal_31[0], "pb_intial_visit_b");
					func_167(&uLocal_87[0 /*4*/], 19, true);
				}
				else if (uLocal_14[1])
				{
					func_174(&uLocal_31[0], "pb_mid_a");
					func_174(&uLocal_31[0], "pb_mid_b");
					func_174(&uLocal_31[0], "pb_mid_c");
					func_174(&uLocal_31[0], "pb_intial_visit_a");
					func_174(&uLocal_31[0], "pb_intial_visit_b");
					func_167(&uLocal_87[0 /*4*/], 15, true);
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(&uLocal_31[0], "pb_scream");
					func_171(&uLocal_31[0], "pb_cower_count");
					func_167(&uLocal_87[0 /*4*/], 17, true);
				}
				else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_mid_a") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], "pb_mid_a"))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_31[0], "base", true))
						{
							iLocal_38 = 0;
							func_171(&uLocal_31[0], "pb_mid_c");
							func_170(&uLocal_31[0], "base_bool", false);
							func_173(&uLocal_31[0], "pb_mid_b");
							func_167(&uLocal_87[0 /*4*/], 4, true);
						}
					}
				}
				break;
		
			case 4:
				if (iLocal_38 < 3)
				{
					if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38 = iLocal_38 + 1;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(249295937, uLocal_63.f_1[0]);
						func_25(&(uLocal_87[0 /*4*/].f_1));
					}
				}
			
				if (!func_72(Global_35, func_131(uParam0, 0), 30f, true, true))
				{
					func_171(&uLocal_31[0], "pb_intial_visit_b");
					func_167(&uLocal_87[0 /*4*/], 19, true);
				}
				else if (uLocal_14[1])
				{
					func_174(&uLocal_31[0], "pb_mid_a");
					func_174(&uLocal_31[0], "pb_mid_b");
					func_174(&uLocal_31[0], "pb_mid_c");
					func_174(&uLocal_31[0], "pb_intial_visit_a");
					func_174(&uLocal_31[0], "pb_intial_visit_b");
					func_167(&uLocal_87[0 /*4*/], 15, true);
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(&uLocal_31[0], "pb_scream");
					func_171(&uLocal_31[0], "pb_cower_count");
					func_167(&uLocal_87[0 /*4*/], 17, true);
				}
				else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_mid_b") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], "pb_mid_b"))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_31[0], "base", true))
						{
							iLocal_38 = 0;
							func_170(&uLocal_31[0], "base_bool", false);
							func_173(&uLocal_31[0], "pb_mid_c");
							func_167(&uLocal_87[0 /*4*/], 6, true);
						}
					}
				}
				break;
		
			case 6:
				if (iLocal_38 < 3)
				{
					if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 4f)
					{
						iLocal_38 = iLocal_38 + 1;
						MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
						MAP::ALLOW_SONAR_BLIPS(true);
						MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(249295937, uLocal_63.f_1[0]);
						func_25(&(uLocal_87[0 /*4*/].f_1));
					}
				}
			
				if (!func_72(Global_35, func_131(uParam0, 0), 30f, true, true))
				{
					func_171(&uLocal_31[0], "pb_intial_visit_b");
					func_167(&uLocal_87[0 /*4*/], 19, true);
				}
				else if (uLocal_14[1])
				{
					func_174(&uLocal_31[0], "pb_mid_a");
					func_174(&uLocal_31[0], "pb_mid_b");
					func_174(&uLocal_31[0], "pb_mid_c");
					func_174(&uLocal_31[0], "pb_intial_visit_a");
					func_174(&uLocal_31[0], "pb_intial_visit_b");
					func_167(&uLocal_87[0 /*4*/], 15, true);
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(&uLocal_31[0], "pb_scream");
					func_171(&uLocal_31[0], "pb_cower_count");
					func_167(&uLocal_87[0 /*4*/], 17, true);
				}
				else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_mid_c") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], "pb_mid_c"))
					{
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_31[0], "base", true))
						{
							func_171(&uLocal_31[0], "pb_intial_visit_b");
							func_167(&uLocal_87[0 /*4*/], 19, true);
						}
					}
				}
				break;
		
			case 7:
				func_173(&uLocal_31[0], &uLocal_25);
				func_171(&uLocal_31[0], "pb_count");
				func_170(&uLocal_31[0], "base_bool", false);
				func_167(&uLocal_87[0 /*4*/], 8, true);
				break;
		
			case 8:
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], &uLocal_25) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], &uLocal_25))
					{
						if (!uLocal_14[3])
						{
							if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) >= 3.5f)
							{
								uLocal_14[3] = 1;
								shLocal_36 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"), uLocal_63.f_1[0], -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 1127481344, false, false, -1, -1);
							}
						}
					
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) >= 5.5f)
							if (!func_39(uParam0->f_3, 1))
								func_40(&(uParam0->f_3), 1);
					
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_31[0], "base", true))
						{
							func_170(&uLocal_31[0], "count_loop", false);
							func_173(&uLocal_31[0], "pb_count");
							func_167(&uLocal_87[0 /*4*/], 13, true);
						}
					}
				}
				break;
		
			case 13:
				if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(&uLocal_31[0], "pb_scream");
					func_171(&uLocal_31[0], "pb_cower_count");
					func_167(&uLocal_87[0 /*4*/], 17, true);
				}
				break;
		
			case 15:
				if (VOLUME::DOES_VOLUME_EXIST(volLocal_42) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_42, true, 0))
				{
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pb_peek_n", 24);
					iLocal_37 = 0;
				}
				else if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
				{
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pb_peek_l", 24);
					iLocal_37 = 1;
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pb_peek_r", 24);
					iLocal_37 = 2;
				}
			
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_177(uParam0, iLocal_37), 1f, 20000, 1048576000, 0, 1193033728);
				func_167(&uLocal_87[0 /*4*/], 16, true);
				break;
		
			case 16:
				if (func_72(Global_35, func_177(uParam0, iLocal_37), 0.5f, true, true))
					func_167(&uLocal_87[0 /*4*/], 7, true);
				else if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) == 8)
					func_167(&uLocal_87[0 /*4*/], 7, true);
				else if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 10f)
					func_167(&uLocal_87[0 /*4*/], 7, true);
				break;
		
			case 17:
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_scream") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uLocal_31[0], "pb_scream"))
					{
						uLocal_14[2] = 1;
						func_79(&uLocal_48[0], true, true);
						func_173(&uLocal_31[0], "pb_scream");
						func_167(&uLocal_87[0 /*4*/], 18, true);
					}
				}
				break;
		
			case 18:
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_scream") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], "pb_scream"))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) >= 4.75f)
						{
							func_170(&uLocal_31[0], "base_bool", false);
							func_173(&uLocal_31[0], "pb_cower_count");
							func_167(&uLocal_87[0 /*4*/], 22, true);
						}
					}
				}
				break;
		
			case 19:
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uLocal_31[0], "pb_intial_visit_b"))
						func_171(&uLocal_31[0], "pb_intial_visit_b");
				
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_intial_visit_b") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uLocal_31[0], "pb_intial_visit_b"))
					{
						func_170(&uLocal_31[0], "base_bool", false);
						func_173(&uLocal_31[0], "pb_intial_visit_b");
						func_174(&uLocal_31[0], "pb_mid_a");
						func_174(&uLocal_31[0], "pb_mid_b");
						func_174(&uLocal_31[0], "pb_mid_c");
						func_167(&uLocal_87[0 /*4*/], 20, true);
					}
				}
				break;
		
			case 20:
				if (uLocal_14[1])
				{
					func_174(&uLocal_31[0], "pb_mid_a");
					func_174(&uLocal_31[0], "pb_mid_b");
					func_174(&uLocal_31[0], "pb_mid_c");
					func_174(&uLocal_31[0], "pb_intial_visit_a");
					func_174(&uLocal_31[0], "pb_intial_visit_b");
					func_167(&uLocal_87[0 /*4*/], 15, true);
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					func_171(&uLocal_31[0], "pb_scream");
					func_171(&uLocal_31[0], "pb_cower_count");
					func_167(&uLocal_87[0 /*4*/], 17, true);
				}
				else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(uLocal_31[0], "base_bool") && ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_31[0], "base", true) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_31[0]) <= 14.27f)
						if (func_72(Global_35, func_131(uParam0, 0), 10f - 1f, true, true))
							func_170(&uLocal_31[0], "base_bool", true);
				
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], "pb_intial_visit_b") && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], "pb_intial_visit_b"))
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uLocal_31[0], "DIALOG_B_FAR", true))
							if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uLocal_31[0], "base_bool"))
								func_170(&uLocal_31[0], "base_bool", false);
				}
				break;
		
			case 22:
				break;
		
			case 23:
				break;
		}
	}

	return;
}

void func_63(var uParam0) // Position - 0x61BC Hash - 0x696BE384 ^0x28690EDF
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[0]))
	{
		if (uLocal_87[0 /*4*/] > 0 && uLocal_87[0 /*4*/] < 23)
		{
			if (func_50(48))
			{
				func_166(&uLocal_63.f_1[0], false);
				func_68(uParam0);
				func_54(&iLocal_51, 13, true);
			}
		
			if (!uLocal_14[6])
			{
				if (func_72(Global_35, func_131(uParam0, 0), 20f, true, true))
				{
					uLocal_14[6] = 1;
					PED::SET_PED_LOD_MULTIPLIER(uLocal_63.f_1[0], 2f);
				}
			}
			else if (!func_72(Global_35, func_131(uParam0, 0), 21f, true, true))
			{
				uLocal_14[6] = 0;
				PED::SET_PED_LOD_MULTIPLIER(uLocal_63.f_1[0], 1f);
			}
		}
	
		switch (uLocal_87[0 /*4*/])
		{
			case 0:
				iLocal_38 = 0;
				iLocal_37 = 0;
				bLocal_23 = false;
			
				if (bLocal_23)
				{
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_base_b", 24);
					func_174(&uLocal_31[0], "pbl_base_a");
					func_174(&uLocal_31[0], "pbl_brkout_ba_on_l");
					func_174(&uLocal_31[0], "pbl_brkout_ba_on_r");
					func_174(&uLocal_31[0], "pbl_brkout_ba_on_n");
					func_171(&uLocal_31[0], "pbl_base_b");
					func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
					func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
					func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
				}
				else
				{
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_base_a", 24);
					func_174(&uLocal_31[0], "pbl_base_b");
					func_174(&uLocal_31[0], "pbl_brkout_bb_on_l");
					func_174(&uLocal_31[0], "pbl_brkout_bb_on_r");
					func_174(&uLocal_31[0], "pbl_brkout_bb_on_n");
					func_171(&uLocal_31[0], "pbl_base_a");
					func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
					func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
					func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
				}
			
				func_174(&uLocal_31[0], "pbl_ba_lvl_1_l");
				func_174(&uLocal_31[0], "pbl_ba_lvl_1_r");
				func_174(&uLocal_31[0], "pbl_ba_lvl_2_l");
				func_174(&uLocal_31[0], "pbl_ba_lvl_2_r");
				func_174(&uLocal_31[0], "pbl_ba_lvl_3_l");
				func_174(&uLocal_31[0], "pbl_ba_lvl_3_r");
				func_174(&uLocal_31[0], "pbl_bb_lvl_1_l");
				func_174(&uLocal_31[0], "pbl_bb_lvl_1_r");
				func_174(&uLocal_31[0], "pbl_bb_lvl_2_l");
				func_174(&uLocal_31[0], "pbl_bb_lvl_2_r");
				func_174(&uLocal_31[0], "pbl_bb_lvl_3_l");
				func_174(&uLocal_31[0], "pbl_bb_lvl_3_r");
				func_178(&uLocal_128);
				func_167(&uLocal_87[0 /*4*/], 14, true);
				break;
		
			case 1:
				if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 2f)
				{
					if (!func_72(Global_35, func_131(uParam0, 0), 6f, true, true))
					{
						MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
						func_167(&uLocal_87[0 /*4*/], 13, true);
					}
					else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
					
						if (bLocal_23)
						{
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
						}
						else
						{
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
						}
					
						func_167(&uLocal_87[0 /*4*/], 19, true);
					}
					else if (func_179(&uLocal_63.f_1[0]))
					{
						func_160(uParam0);
					
						if (bLocal_23)
						{
							func_171(&uLocal_31[0], "pbl_bb_lvl_1_l");
							func_171(&uLocal_31[0], "pbl_bb_lvl_1_r");
						}
						else
						{
							func_171(&uLocal_31[0], "pbl_ba_lvl_1_l");
							func_171(&uLocal_31[0], "pbl_ba_lvl_1_r");
						}
					
						func_167(&uLocal_87[0 /*4*/], 2, true);
					}
				}
				break;
		
			case 2:
				if (!func_72(Global_35, func_131(uParam0, 0), 6f, true, true))
				{
					MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					func_167(&uLocal_87[0 /*4*/], 13, true);
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (bLocal_23)
					{
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
					}
				
					func_167(&uLocal_87[0 /*4*/], 19, true);
				}
				else if (!func_179(&uLocal_63.f_1[0]))
				{
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					func_167(&uLocal_87[0 /*4*/], 13, true);
				}
				else if (func_33(uLocal_48[0]) && func_180(uLocal_48[0], true))
				{
					if (!func_39(uParam0->f_3, 1))
						func_40(&(uParam0->f_3), 1);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
						if (bLocal_23)
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_1_r", 24);
						else
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_1_r", 24);
					else if (bLocal_23)
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_1_l", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_1_l", 24);
				
					func_173(&uLocal_31[0], &uLocal_25);
					iLocal_38 = 1;
				
					if (func_181(true))
						func_182(true, false, false);
				
					if (func_15())
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_GREET_J", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_GREET_A", 24);
				
					func_183(&uLocal_169, uLocal_28, false, -1, false, false);
					func_167(&uLocal_87[0 /*4*/], 3, true);
				}
				else if (func_33(uLocal_48[1]) && func_180(uLocal_48[1], true))
				{
					if (!func_39(uParam0->f_3, 1))
						func_40(&(uParam0->f_3), 1);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
						if (bLocal_23)
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_1_r", 24);
						else
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_1_r", 24);
					else if (bLocal_23)
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_1_l", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_1_l", 24);
				
					func_173(&uLocal_31[0], &uLocal_25);
					iLocal_38 = 1;
				
					if (func_181(true))
						func_182(true, false, false);
				
					if (func_15())
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_ANTAG_J", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_ANTAG_A", 24);
				
					func_183(&uLocal_169, uLocal_28, false, -1, false, false);
					func_167(&uLocal_87[0 /*4*/], 3, true);
				}
				break;
		
			case 3:
				if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 2f)
				{
					if (!func_72(Global_35, func_131(uParam0, 0), 6f, true, true))
					{
						MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
						func_167(&uLocal_87[0 /*4*/], 13, true);
					}
					else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
					
						if (bLocal_23)
						{
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
						}
						else
						{
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
						}
					
						func_167(&uLocal_87[0 /*4*/], 19, true);
					}
					else if (func_179(&uLocal_63.f_1[0]))
					{
						func_160(uParam0);
					
						if (bLocal_23)
						{
							func_171(&uLocal_31[0], "pbl_bb_lvl_2_l");
							func_171(&uLocal_31[0], "pbl_bb_lvl_2_r");
						}
						else
						{
							func_171(&uLocal_31[0], "pbl_ba_lvl_2_l");
							func_171(&uLocal_31[0], "pbl_ba_lvl_2_r");
						}
					
						func_167(&uLocal_87[0 /*4*/], 4, true);
					}
				}
				break;
		
			case 4:
				if (!func_72(Global_35, func_131(uParam0, 0), 6f, true, true))
				{
					MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					func_167(&uLocal_87[0 /*4*/], 13, true);
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (bLocal_23)
					{
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
					}
				
					func_167(&uLocal_87[0 /*4*/], 19, true);
				}
				else if (!func_179(&uLocal_63.f_1[0]))
				{
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					func_167(&uLocal_87[0 /*4*/], 13, true);
				}
				else if (func_33(uLocal_48[0]) && func_180(uLocal_48[0], true))
				{
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
						if (bLocal_23)
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_2_r", 24);
						else
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_2_r", 24);
					else if (bLocal_23)
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_2_l", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_2_l", 24);
				
					func_173(&uLocal_31[0], &uLocal_25);
					iLocal_38 = 2;
				
					if (func_181(true))
						func_182(true, false, false);
				
					if (func_15())
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_GREET_J", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_GREET_A", 24);
				
					func_183(&uLocal_169, uLocal_28, false, -1, false, false);
					func_167(&uLocal_87[0 /*4*/], 5, true);
				}
				else if (func_33(uLocal_48[1]) && func_180(uLocal_48[1], true))
				{
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
						if (bLocal_23)
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_2_r", 24);
						else
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_2_r", 24);
					else if (bLocal_23)
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_2_l", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_2_l", 24);
				
					func_173(&uLocal_31[0], &uLocal_25);
					iLocal_38 = 2;
				
					if (func_181(true))
						func_182(true, false, false);
				
					if (func_15())
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_ANTAG_J", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_ANTAG_A", 24);
				
					func_183(&uLocal_169, uLocal_28, false, -1, false, false);
					func_167(&uLocal_87[0 /*4*/], 5, true);
				}
				break;
		
			case 5:
				if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 2f)
				{
					if (!func_72(Global_35, func_131(uParam0, 0), 6f, true, true))
					{
						MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
						func_167(&uLocal_87[0 /*4*/], 13, true);
					}
					else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
					
						if (bLocal_23)
						{
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
							func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
						}
						else
						{
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
							func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
						}
					
						func_167(&uLocal_87[0 /*4*/], 19, true);
					}
					else if (func_179(&uLocal_63.f_1[0]))
					{
						func_160(uParam0);
						func_174(&uLocal_31[0], "pbl_ba_lvl_1_l");
						func_174(&uLocal_31[0], "pbl_ba_lvl_1_r");
						func_174(&uLocal_31[0], "pbl_bb_lvl_1_l");
						func_174(&uLocal_31[0], "pbl_bb_lvl_1_r");
					
						if (bLocal_23)
						{
							func_171(&uLocal_31[0], "pbl_bb_lvl_3_l");
							func_171(&uLocal_31[0], "pbl_bb_lvl_3_r");
						}
						else
						{
							func_171(&uLocal_31[0], "pbl_ba_lvl_3_l");
							func_171(&uLocal_31[0], "pbl_ba_lvl_3_r");
						}
					
						func_167(&uLocal_87[0 /*4*/], 6, true);
					}
				}
				break;
		
			case 6:
				if (!func_72(Global_35, func_131(uParam0, 0), 6f, true, true))
				{
					MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					func_167(&uLocal_87[0 /*4*/], 13, true);
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0]);
				
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (bLocal_23)
					{
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
					}
				
					func_167(&uLocal_87[0 /*4*/], 19, true);
				}
				else if (!func_179(&uLocal_63.f_1[0]))
				{
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					func_167(&uLocal_87[0 /*4*/], 13, true);
				}
				else if (func_33(uLocal_48[0]) && func_180(uLocal_48[0], true))
				{
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
						if (bLocal_23)
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_3_r", 24);
						else
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_3_r", 24);
					else if (bLocal_23)
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_3_l", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_3_l", 24);
				
					func_173(&uLocal_31[0], &uLocal_25);
					iLocal_38 = 0;
				
					if (iLocal_37 == 0)
					{
						iLocal_37 = 1;
						bLocal_23 = true;
					}
					else
					{
						iLocal_37 = 0;
						bLocal_23 = false;
					}
				
					if (func_181(true))
						func_182(true, false, false);
				
					if (func_15())
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_GREET_J", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_GREET_A", 24);
				
					func_183(&uLocal_169, uLocal_28, false, -1, false, false);
					func_167(&uLocal_87[0 /*4*/], 1, true);
				}
				else if (func_33(uLocal_48[1]) && func_180(uLocal_48[1], true))
				{
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (func_33(uLocal_48[1]))
						func_79(&uLocal_48[1], true, true);
				
					if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
						if (bLocal_23)
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_3_r", 24);
						else
							TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_3_r", 24);
					else if (bLocal_23)
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_bb_lvl_3_l", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_ba_lvl_3_l", 24);
				
					func_173(&uLocal_31[0], &uLocal_25);
					iLocal_38 = 0;
				
					if (iLocal_37 == 0)
					{
						iLocal_37 = 1;
						bLocal_23 = true;
					}
					else
					{
						iLocal_37 = 0;
						bLocal_23 = false;
					}
				
					if (func_181(true))
						func_182(true, false, false);
				
					if (func_15())
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_ANTAG_J", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_28, "DMONK_ANTAG_A", 24);
				
					func_183(&uLocal_169, uLocal_28, false, -1, false, false);
					func_167(&uLocal_87[0 /*4*/], 1, true);
				}
				break;
		
			case 13:
				if (func_72(Global_35, func_131(uParam0, 0), 6f, true, true))
				{
					MISC::REGISTER_INTERACTION_LOCKON_PROMPT(uLocal_63.f_1[0], "", 6f, 0, 0, 0, 0, 0, false, -1);
				
					if (iLocal_38 == 0)
					{
						func_174(&uLocal_31[0], "pbl_ba_lvl_2_l");
						func_174(&uLocal_31[0], "pbl_ba_lvl_2_r");
						func_174(&uLocal_31[0], "pbl_bb_lvl_2_l");
						func_174(&uLocal_31[0], "pbl_bb_lvl_2_r");
						func_96(&(uLocal_87[0 /*4*/].f_1), 2f);
						func_167(&uLocal_87[0 /*4*/], 1, false);
					}
					else if (iLocal_38 == 1)
					{
						func_174(&uLocal_31[0], "pbl_ba_lvl_3_l");
						func_174(&uLocal_31[0], "pbl_ba_lvl_3_r");
						func_174(&uLocal_31[0], "pbl_bb_lvl_3_l");
						func_174(&uLocal_31[0], "pbl_bb_lvl_3_r");
						func_96(&(uLocal_87[0 /*4*/].f_1), 2f);
						func_167(&uLocal_87[0 /*4*/], 3, false);
					}
					else if (iLocal_38 == 2)
					{
						func_174(&uLocal_31[0], "pbl_ba_lvl_1_l");
						func_174(&uLocal_31[0], "pbl_ba_lvl_1_r");
						func_174(&uLocal_31[0], "pbl_bb_lvl_1_l");
						func_174(&uLocal_31[0], "pbl_bb_lvl_1_r");
						func_96(&(uLocal_87[0 /*4*/].f_1), 2f);
						func_167(&uLocal_87[0 /*4*/], 5, false);
					}
				}
				else if (func_175(uLocal_63.f_1[0], 0, &uLocal_128, &uLocal_156, 0, 0))
				{
					if (bLocal_23)
					{
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_bb_on_n");
					}
					else
					{
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_l");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_r");
						func_171(&uLocal_31[0], "pbl_brkout_ba_on_n");
					}
				
					func_167(&uLocal_87[0 /*4*/], 19, true);
				}
				break;
		
			case 14:
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], &uLocal_25) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uLocal_31[0], &uLocal_25))
					{
						func_173(&uLocal_31[0], &uLocal_25);
						func_167(&uLocal_87[0 /*4*/], 13, true);
					}
				}
				break;
		
			case 19:
				if (!func_39(uParam0->f_3, 1))
					func_40(&(uParam0->f_3), 1);
			
				if (bLocal_23)
					if (VOLUME::DOES_VOLUME_EXIST(volLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0))
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_brkout_bb_on_n", 24);
					else if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_brkout_bb_on_r", 24);
					else
						TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_brkout_bb_on_l", 24);
				else if (VOLUME::DOES_VOLUME_EXIST(volLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0))
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_brkout_ba_on_n", 24);
				else if (func_176(Global_35, func_131(uParam0, 0), func_149(uParam0, 0), 1065353216))
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_brkout_ba_on_r", 24);
				else
					TEXT_LABEL_ASSIGN_STRING(&uLocal_25, "pbl_brkout_ba_on_l", 24);
			
				func_173(&uLocal_31[0], &uLocal_25);
				func_167(&uLocal_87[0 /*4*/], 20, true);
				break;
		
			case 20:
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uLocal_31[0], true, false))
					if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(uLocal_31[0], &uLocal_25) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uLocal_31[0], &uLocal_25))
						if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uLocal_31[0]) >= 0.9f)
							func_167(&uLocal_87[0 /*4*/], 21, true);
				break;
		
			case 21:
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[0], true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "discoverable_monk_flee", 0, 9226, -1, false, 0, -1);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 350f, -1, 0, 1077936128, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_63.f_1[0], iLocal_44);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_44);
				func_167(&uLocal_87[0 /*4*/], 22, true);
				break;
		
			case 22:
				if (!func_184(uLocal_63.f_1[0], Global_35, 90f, true))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[0], false);
					PED::SET_PED_KEEP_TASK(uLocal_63.f_1[0], true);
					func_166(&uLocal_63.f_1[0], true);
					func_167(&uLocal_87[0 /*4*/], 23, true);
				}
				else if (func_172(&(uLocal_87[0 /*4*/].f_1)) >= 90f)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[0], false);
					PED::SET_PED_KEEP_TASK(uLocal_63.f_1[0], true);
					func_166(&uLocal_63.f_1[0], true);
					func_167(&uLocal_87[0 /*4*/], 23, true);
				}
				break;
		
			case 23:
				break;
		}
	}

	return;
}

void func_64(var uParam0) // Position - 0x7634 Hash - 0x42D7E3A0 ^0x749218D0
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[i]))
		{
			uLocal_87[i /*4*/] > 0 && uLocal_87[i /*4*/] < 23;
		
			switch (uLocal_87[i /*4*/])
			{
				case 0:
					if (func_33(uLocal_48[0]))
					{
						if (func_168(uLocal_48[0], false))
						{
							func_169(uLocal_48[0], false, true);
							func_34(uLocal_48[0], false, true);
						}
					}
				
					if (*uParam0 == -654238687 || *uParam0 == -35775921)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[i], false);
					
						if (VOLUME::DOES_VOLUME_EXIST(volLocal_42))
							TASK::TASK_WANDER_IN_VOLUME(uLocal_63.f_1[i], volLocal_42, 1077936128, 1086324736, 0);
					
						func_167(&uLocal_87[i /*4*/], 13, true);
					}
					else if (*uParam0 == -2008558277)
					{
						func_167(&uLocal_87[i /*4*/], 13, true);
					}
					else
					{
						func_167(&uLocal_87[i /*4*/], 23, true);
					}
					break;
			
				case 1:
					if (func_72(Global_35, func_131(uParam0, 0), 90f, true, true))
					{
						if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_45))
						{
							iLocal_45 = func_186(func_156(uParam0, 0), func_91(uParam0, 0), func_185(uParam0, 0), 0, 0, false);
						}
						else
						{
							uLocal_14[7] = 1;
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uLocal_63.f_1[i]);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[i], false);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_91(uParam0, 0), 1f, 20000, 1048576000, 0, 1193033728);
							TASK::TASK_USE_SCENARIO_POINT(0, iLocal_45, func_187(uParam0), -1, true, false, func_156(uParam0, 0), false, -1082130432, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_63.f_1[i], iLocal_44);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_44);
							func_167(&uLocal_87[i /*4*/], 2, true);
						}
					}
					break;
			
				case 2:
					break;
			
				case 13:
					if (*uParam0 == -654238687 || *uParam0 == -2008558277 || *uParam0 == -35775921)
					{
						if (*uParam0 == -2008558277)
						{
							if (!PED::IS_PED_USING_ANY_SCENARIO(uLocal_63.f_1[i]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[i], true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_44);
								TASK::TASK_FLY_AWAY(0, PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
								TASK::CLOSE_SEQUENCE_TASK(iLocal_44);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_63.f_1[i], iLocal_44);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_44);
								FLOCK::_0xFDB008B3BCF5992F(uLocal_63.f_1[i], 30f, 30f);
								FLOCK::_0x2DF3D457D86F8E57(uLocal_63.f_1[i], 100f);
							
								if (!uLocal_14[2])
								{
									uLocal_14[2] = 1;
								
									if (i == 5 || i == 6)
										shLocal_36 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_188(0), -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 3, 1);
									else
										shLocal_36 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), func_188(1), -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 3, 1);
								
									if (ENTITY::DOES_ENTITY_EXIST(PED::GET_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
										PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_35), 1, 0.15f, uLocal_63.f_1[i]);
								
									PED::_0x23BDE06596A22CEC(Global_35, 1, 1f, uLocal_63.f_1[i]);
								}
							
								func_167(&uLocal_87[i /*4*/], 20, true);
							}
						}
						else if (*uParam0 == -654238687)
						{
							if (VOLUME::DOES_VOLUME_EXIST(volLocal_41) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0))
								func_189(&uLocal_63, true, i);
						}
					}
					else if (!func_48(uParam0) || !func_49(uParam0))
					{
						func_167(&uLocal_87[i /*4*/], 19, true);
					}
					else if (func_175(uLocal_63.f_1[i], 0, &uLocal_128, &uLocal_156, 0, 0))
					{
						func_167(&uLocal_87[i /*4*/], 17, true);
					}
					break;
			
				case 15:
					uLocal_14[1] = 1;
					func_167(&uLocal_87[i /*4*/], 13, true);
					break;
			
				case 17:
					uLocal_14[2] = 1;
					func_79(&uLocal_48[0], true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[i], true);
					TASK::TASK_COWER(uLocal_63.f_1[i], -1, 0, 0);
					func_167(&uLocal_87[i /*4*/], 19, true);
					break;
			
				case 19:
					if (func_33(uLocal_48[0]))
						func_79(&uLocal_48[0], true, true);
				
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_41, true, 0) && !func_72(Global_35, func_91(uParam0, 0), 1.5f, true, true))
					{
						uLocal_14[4] = 1;
						uLocal_14[7] = 1;
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_63.f_1[i], true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_63.f_1[i], func_131(uParam0, 0), 1.5f, 20000, 1048576000, 0, 1193033728);
						func_167(&uLocal_87[i /*4*/], 20, true);
					}
					break;
			
				case 20:
					if (*uParam0 == -2008558277)
					{
						if (!func_72(uLocal_63.f_1[i], func_131(uParam0, 0), 90f, true, true))
						{
							func_166(&uLocal_63.f_1[i], true);
							func_167(&uLocal_87[i /*4*/], 23, true);
						}
					}
					else if (func_172(&(uLocal_87[i /*4*/].f_1)) >= 10f)
					{
						uLocal_14[6] = 1;
						func_166(&uLocal_63.f_1[i], false);
						func_167(&uLocal_87[i /*4*/], 23, true);
					}
					else if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(uLocal_63.f_1[i])))
					{
						func_166(&uLocal_63.f_1[i], false);
						func_167(&uLocal_87[i /*4*/], 23, true);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_63.f_1[i], SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) == 8)
					{
						uLocal_14[6] = 1;
						func_166(&uLocal_63.f_1[i], false);
						func_167(&uLocal_87[i /*4*/], 23, true);
					}
					else
					{
						TASK::GET_SCRIPT_TASK_STATUS(uLocal_63.f_1[i], SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) == 1;
					}
					break;
			
				case 22:
					if (!func_72(uLocal_63.f_1[i], func_131(uParam0, 1), 90f, true, true))
					{
						if (!func_190(uLocal_63.f_1[i], 110f, -1082130432, -1082130432, -1082130432))
						{
							func_166(&uLocal_63.f_1[i], false);
							func_167(&uLocal_87[i /*4*/], 23, true);
						}
					}
					break;
			
				case 23:
					if (!(*uParam0 == -2008558277))
						if (!uLocal_14[5])
							uLocal_14[5] = 1;
					break;
			}
		}
	}

	return;
}

void func_65(var uParam0) // Position - 0x7C9D Hash - 0x56831498 ^0x56831498
{
	iLocal_55 > 0 && iLocal_55 < 11;

	switch (iLocal_55)
	{
		case 0:
			func_191(&iLocal_55, 11, true);
			break;
	
		case 1:
			break;
	
		case 11:
			break;
	}

	return;
}

void func_66(int iParam0) // Position - 0x7CE2 Hash - 0xF9F788B3 ^0x8192C5D9
{
	if (!func_11(iParam0, 32))
	{
		func_32(iParam0, 32);
		TELEMETRY::_TELEMETRY_DISCOVERABLE(iParam0);
	
		if (func_192(iParam0))
			func_194(func_193(joaat("discoverable_found")), 1);
	}

	return;
}

void func_67(var uParam0) // Position - 0x7D1E Hash - 0x46A0187B ^0x46A0187B
{
	if (!func_53(*uParam0))
	{
		func_195(*uParam0);
		func_70(uParam0);
	}

	return;
}

void func_68(var uParam0) // Position - 0x7D3E Hash - 0xA8267FFE ^0x3C8D8E17
{
	int i;

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_41))
		func_196(&anLocal_46, volLocal_41, false);

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_45))
		TASK::_DELETE_SCENARIO_POINT(iLocal_45);

	for (i = 0; i <= 2 - 1; i = i + 1)
	{
		func_79(&uLocal_48[i], true, true);
	}

	if (CAM::DOES_CAM_EXIST(caLocal_47))
		CAM::DESTROY_CAM(caLocal_47, false);

	if (*uParam0 == -415839138)
	{
		if (func_181(true))
			func_182(true, false, false);
	
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(iLocal_39))
			GRAPHICS::DESTROY_TRACKED_POINT(iLocal_39);
	
		func_197();
	
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uLocal_31[0]))
			ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_31[0]);
	}

	if (*uParam0 == -654238687)
		func_69(&uLocal_63, true);

	return;
}

void func_69(var uParam0, BOOL bParam1) // Position - 0x7DEB Hash - 0x9FC34A51 ^0x9FC34A51
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		func_189(uParam0, bParam1, i);
	}

	return;
}

void func_70(var uParam0) // Position - 0x7E12 Hash - 0x12B095D ^0x8F05BAE7
{
	if (func_92() != -1)
		return;

	if (func_198(*uParam0) != 0)
	{
		if (!MAP::_MAP_IS_DISCOVERY_ACTIVE(func_198(*uParam0)))
			MAP::_MAP_DISCOVER_REGION(func_198(*uParam0));
	
		func_32(*uParam0, 8);
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
Vector3 func_71(var uParam0, int iParam1) // Position - 0x7E53 Hash - 0x46F929FC ^0x46F929FC
{
	switch (*uParam0)
	{
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -232974724:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1259.7351f, 1294.3583f, 216.09608f;
			
				case 1:
					return 1259.7351f, 1294.3583f, 216.09608f;
			
				default:
					break;
			}
			break;
	
		case -1891628345:
			switch (iParam1)
			{
				case 0:
					return -2694.6008f, -1500.2484f, 150.5708f;
			
				default:
					break;
			}
			break;
	
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 2195.15f, -554.37f, 41.02f;
			
				case 1:
					return 2195.38f, -554.33f, 41.02f;
			
				default:
					break;
			}
			break;
	
		case -1761578407:
			switch (iParam1)
			{
				case 0:
					return 1735.312f, -1894.4722f, 44.5668f;
			
				default:
					break;
			}
			break;
	
		case -1614148516:
			switch (iParam1)
			{
				case 0:
					return 2307.5916f, -330.3333f, 41.6732f;
			
				default:
					break;
			}
			break;
	
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return -5854.0186f, -3745.0708f, -25.5216f;
			
				case 1:
					return -5854.012f, -3744.8984f, -25.519f;
			
				default:
					break;
			}
			break;
	
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 1268.29f, -386.947f, 88.4659f;
			
				default:
					break;
			}
			break;
	
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 2255.46f, -753.712f, 42.5807f;
			
				case 1:
					return 2255.29f, -753.756f, 42.8407f;
			
				default:
					break;
			}
			break;
	
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return 1068.42f, -2024.7f, 49.25f;
			
				default:
					break;
			}
			break;
	
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return -2334.66f, 102.11f, 221.988f;
			
				case 1:
					return -2351.1057f, 111.0932f, 217f;
			
				case 2:
					return -2351.33f, 110.337f, 216.825f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 365.9631f, -16.5072f, 99.3002f;
			
				default:
					break;
			}
			break;
	
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 1581.16f, -1383.19f, 55.3f;
			
				default:
					break;
			}
			break;
	
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 398.28f, -1267.89f, 40.737f;
			
				default:
					break;
			}
			break;
	
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 180.217f, 1304.7f, 178.603f;
			
				case 1:
					return 180.267f, 1304.62f, 178.607f;
			
				case 2:
					return 180.387f, 1304.79f, 178.601f;
			
				case 3:
					return 180.397f, 1304.7f, 178.605f;
			
				case 4:
					return 180.437f, 1304.66f, 178.599f;
			
				default:
					break;
			}
			break;
	
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return -1019.89f, 1692.11f, 244.105f;
			
				case 1:
					return -988.1135f, 1692.0748f, 243.3826f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1123.43f, 430.557f, 95.3598f;
			
				default:
					break;
			}
			break;
	
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 2545.93f, 800.34f, 77.013f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2904.945f, -254.221f, 187.3f;
			
				default:
					break;
			}
			break;
	
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 2289.75f, 2081.3f, 199.581f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.56f, -2669.16f, 42.2f;
			
				default:
					break;
			}
			break;
	
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 2385.7993f, 1696.7253f, 95.7555f;
			
				case 1:
					return 2385.81f, 1696.69f, 95.7678f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.4628f, 763.3734f, 95.371f;
			
				default:
					break;
			}
			break;
	
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 2685.8904f, 70.2216f, 58.3001f;
			
				default:
					break;
			}
			break;
	
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return -1530.6893f, -308.1162f, 141.4804f;
			
				case 1:
					return -1532.0513f, -308.3718f, 141.5067f;
			
				case 2:
					return -1530.594f, -308.8933f, 141.4845f;
			
				default:
					break;
			}
			break;
	
		case 247563739:
			switch (iParam1)
			{
				case 0:
					return 2448.5803f, 2097.7295f, 172.2719f;
			
				default:
					break;
			}
			break;
	
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 2316.89f, 1072.69f, 94.409f;
			
				default:
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2367.9f, 124.4f, 215.94f;
			
				case 1:
					return -2366.67f, 124.726f, 215.914f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -5886.735f, -2762.1213f, -5.0027f;
			
				default:
					break;
			}
			break;
	
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 494.1373f, -301.9945f, 147.9723f;
			
				case 1:
					return 494.1373f, -301.9945f, 147f;
			
				default:
					break;
			}
			break;
	
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return -2530.6284f, 1173.581f, 225.1708f;
				
					default:
						goto 0x829;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 3029.425f, 1775.791f, 83.79f;
				
					default:
						goto 0x829;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return -4394.6f, -2159.37f, 47.498f;
				
					case 1:
						return -4394.685f, -2159.115f, 47.5059f;
				
					case 2:
						return -4394.76f, -2159.05f, 47.498f;
				
					case 3:
						return -4394.446f, -2159.219f, 47.523f;
				
					case 4:
						return -4394.639f, -2159.254f, 47.499f;
				
					default:
						break;
				}
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1755.0781f, -1623.8643f, 90.579f;
			
				default:
					break;
			}
			break;
	
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 2383.35f, 1695.3f, 96.018f;
			
				default:
					break;
			}
			break;
	
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 1139.765f, 464.21f, 98.375f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2343.7512f, -2181.3718f, 73.3274f;
			
				case 1:
					return -2343.7512f, -2181.3718f, 73.3274f;
			
				default:
					break;
			}
			break;
	
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return -2311.151f, -2380.23f, 64.66f;
			
				default:
					break;
			}
			break;
	
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 2442.855f, 287.212f, 66.39f;
			
				default:
					break;
			}
			break;
	
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 2811.8635f, 996.6885f, 53.9353f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3338.99f, -2501.585f, 1.926f;
			
				default:
					break;
			}
			break;
	
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 2443.16f, 290.578f, 66.5052f;
			
				default:
					break;
			}
			break;
	
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return -5151.3f, -2118.4f, 13f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.28f, 1997.81f, 166.918f;
			
				default:
					break;
			}
			break;
	
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 2286.46f, -727.94f, 42.98f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.43f, -1769.6f, 52.5869f;
			
				default:
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 830.571f, 1924.11f, 258.798f;
			
				case 1:
					return 830.641f, 1924.09f, 258.798f;
			
				case 2:
					return 830.611f, 1924.12f, 258.825f;
			
				default:
					break;
			}
			break;
	
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return -1619.97f, 1353.525f, 356.399f;
			
				default:
					break;
			}
			break;
	
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return -161.8621f, 1734.9019f, 170.799f;
			
				case 1:
					return -161.862f, 1734.9f, 170.687f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_72(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8AFE Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_199(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_73() // Position - 0x8B59 Hash - 0x9425FDBD ^0x87E91EB6
{
	int ransackScenarioPointPedIsUsing;

	ransackScenarioPointPedIsUsing = TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35);

	if (TASK::DOES_SCENARIO_POINT_EXIST(ransackScenarioPointPedIsUsing))
		return true;

	return false;
}

int func_74(var uParam0, int iParam1) // Position - 0x8B78 Hash - 0x3F44228A ^0x7B94B702
{
	switch (*uParam0)
	{
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return joaat("consumable_whiskey");
			
				case 1:
					return joaat("consumable_apple");
			
				default:
					break;
			}
			break;
	
		case -1427565340:
			switch (iParam1)
			{
				case 1:
					return joaat("provision_disco_shrunken_head");
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return joaat("provision_disco_fertility_statue");
			
				default:
					break;
			}
			break;
	
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return joaat("provision_disco_arrowhead_02");
			
				default:
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return joaat("PROVISION_GOLDBAR_LARGE");
			
				case 1:
					return joaat("PROVISION_GOLDBAR_LARGE");
			
				case 2:
					return joaat("PROVISION_GOLDBAR_LARGE");
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0;
}

BOOL func_75(Hash hParam0) // Position - 0x8C52 Hash - 0x2C6D6290 ^0xF2EA2FC
{
	struct<10> eventData;
	int i;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i) == -1730772208)
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					if (eventData.f_2 == hParam0 || hParam0 == 0)
						return true;
		}
	}

	return false;
}

BOOL func_76(Ped pedParam0) // Position - 0x8CB1 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_77(int iParam0, BOOL bParam1) // Position - 0x8CCC Hash - 0x2E594B0B ^0x96F335B4
{
	int num;

	if (!func_33(iParam0))
		return;

	num = func_105(iParam0);
	HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[num /*18*/].f_3, !bParam1);
	return;
}

BOOL func_78(int iParam0, BOOL bParam1) // Position - 0x8CFA Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_105(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_79(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8D52 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_33(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_105(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_200(num);
	*uParam0 = 0;
	return;
}

BOOL func_80(Ped pedParam0, Entity eParam1) // Position - 0x8DA6 Hash - 0xF5CF6AEA ^0x2F940AE8
{
	int carriableEntityState;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (PED::_GET_CARRIER_AS_PED(eParam1) != pedParam0)
		return false;

	carriableEntityState = ENTITY::GET_CARRIABLE_ENTITY_STATE(eParam1);

	if (carriableEntityState == 5)
		return true;

	if (carriableEntityState == 7)
		return true;

	return false;
}

void func_81(var uParam0, BOOL bParam1, int iParam2) // Position - 0x8DE8 Hash - 0x53896554 ^0x5BC25850
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->[iParam2]))
		if (bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uParam0->[iParam2]);
		else
			OBJECT::DELETE_OBJECT(&uParam0->[iParam2]);

	return;
}

Hash func_82(var uParam0, int iParam1) // Position - 0x8E19 Hash - 0xCD04DE92 ^0xC3B2DD69
{
	switch (*uParam0)
	{
		case -2108030724:
			return joaat("PROVISION_CATHERINES_NECKLACE");
	
		case -1494823099:
			switch (iParam1)
			{
				case 0:
					return joaat("provision_ring_platinum");
			
				case 1:
					return joaat("provision_disco_ancient_necklace");
			
				default:
					break;
			}
			break;
	
		case -1177787273:
			return joaat("provision_jewelrybag_sm");
	
		case -777592153:
		case -35775921:
			return joaat("provision_goldring");
	
		case -709811179:
		case 1673499939:
			return joaat("provision_asteroid_chunk");
	
		case -161804536:
			return joaat("provision_disco_viking_comb");
	
		case 425000526:
		case 464413478:
			return joaat("provision_gold_nugget");
	}

	return 0;
}

int func_83(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x8EC1 Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash ammoTypeForWeapon;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	Hash collectableSubcategory;
	int num;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	int num2;
	int i;
	var statId;
	BOOL flag3;

	if (!func_201(hParam0, 0))
		return 0;

	if (!func_202(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_203(hParam0, &value, iParam1))
		return 0;

	func_204(hParam0, bParam2);
	lootTableKey = 0;

	if (func_205(hParam0, false, false) == 0)
	{
		if (func_206(hParam0))
		{
			hash = func_207(hParam0);
			collectableSubcategory = func_208(hash);
			num = func_209(collectableSubcategory) + 1;
			func_210(hash);
		
			if (func_211(38))
				func_212(483, false);
			else
				func_212(482, false);
		
			if (num == func_213(collectableSubcategory))
			{
				func_83(func_214(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_118() && func_215(4))
				{
					if (func_118() && func_216(38) || func_211(38))
					{
						func_218(38, func_214(collectableSubcategory), 0, 0, func_217(), false, -1, false);
						func_219(2);
					}
					else
					{
						func_218(38, func_214(collectableSubcategory), 0, 0, func_217(), false, -1, false);
						func_219(1);
					}
				}
			}
			else if (func_118() && func_215(4))
			{
				if (func_118() && func_216(38) || func_211(38))
				{
					func_218(38, 0, 0, 0, func_217(), false, -1, false);
					func_219(2);
				}
				else
				{
					func_218(38, 0, 0, 0, func_217(), false, -1, false);
					func_219(1);
				}
			}
		
			if (func_118() && func_215(4))
				if (!Global_1914319.f_17376)
					if (func_118() && func_216(38) || func_211(38))
						func_220(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_220(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_221(hParam0) == joaat("CLOTHING"))
		if (!func_222(hParam0, 866047851) && !func_222(hParam0, -1979000645) && !func_222(hParam0, 1248798204))
			flag = true;

	if (func_223(hParam0, 8388608) && !func_224(28))
		func_225(28);

	if (!flag)
	{
		if (func_222(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_226(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_228(func_227(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_92() == -1)
						func_229(ammoTypeForWeapon);
				
					if (func_230(false) && func_231(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_232(hParam0, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
			else
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
			
				if (WEAPON::_IS_AMMO_VALID(ammoTypeForWeapon))
				{
					if (func_92() == -1)
						func_229(hParam0);
				
					if (func_230(false) && func_231(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_232(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_221(hParam0) == joaat("WEAPON"))
		{
			if (!func_233(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_221(hParam0) == joaat("AMMO") && func_234(hParam0))
		{
			if (!func_235(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_222(hParam0, 866047851))
		{
			func_236(hParam0);
		}
		else if (func_222(hParam0, 2000026003))
		{
			func_237(hParam0);
		}
		else if (func_222(hParam0, -103750053))
		{
			func_194(func_238(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_194(func_239(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_222(hParam0, -121341956) && !func_222(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_93(Global_1835011[4 /*74*/].f_1, true))
					func_212(498, false);
		
			if (func_222(hParam0, -2017733358) || func_222(hParam0, -1369131378))
				func_240(hParam0);
		}
		else if (func_222(hParam0, -136654233))
		{
			if (func_222(hParam0, -1021472396))
			{
			}
		}
		else if (func_222(hParam0, -1466706512) && func_222(hParam0, 1147021565))
		{
			func_212(484, false);
		}
		else if (func_222(hParam0, 1147021565) && func_222(hParam0, -524514947))
		{
		}
		else if (func_222(hParam0, 554195525))
		{
		}
		else if (func_222(hParam0, 589988438))
		{
			if (func_241())
			{
				func_242(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_222(hParam0, 787083290) && func_222(hParam0, 949916894))
		{
			func_243(hParam0);
		}
		else if (func_222(hParam0, -1718133314))
		{
			func_244(hParam0);
		}
		else if (func_222(hParam0, -1738650224))
		{
			func_245(hParam0);
		}
		else if (func_222(hParam0, -1112814642) && func_222(hParam0, 949916894))
		{
			func_246(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_222(hParam0, 1841149704))
		{
			func_247();
		}
		else if (func_222(hParam0, 606799272))
		{
			func_248(hParam0, iParam1);
			func_249(hParam0);
		}
		else if (func_222(hParam0, -1112814642) && func_222(hParam0, -1697809989))
		{
			func_250(hParam0, 0, false, false);
		}
		else if (func_222(hParam0, -2017733358) || func_222(hParam0, -1369131378))
		{
			func_240(hParam0);
		}
		else if (func_222(hParam0, -1921346699))
		{
			if (func_92() != -1)
				return 0;
		
			func_251(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_222(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_252(471514780, 1, false))
						func_83(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_252(526074061, 1, false))
						func_83(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_252(-967317137, 1, false))
						func_83(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_252(670273567, 1, false))
						func_83(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_252(215778062, 1, false))
						func_83(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_252(-1045488665, 1, false))
						func_83(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_222(hParam0, -839724752) && func_223(hParam0, 4))
		{
			if (!func_211(42))
				func_253(hParam0);
		}
		else if (func_222(hParam0, 1399091007))
		{
			func_254(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_222(hParam0, 1248798204))
		{
			hash2 = 0;
		
			switch (hParam0)
			{
				case joaat("clothing_hl_player_satchel_005_1"):
					hash2 = joaat("kit_pouch_provisions");
					break;
			
				case joaat("clothing_hl_player_satchel_002_1"):
					hash2 = joaat("kit_pouch_remedies");
					break;
			
				case joaat("clothing_hl_player_satchel_003_1"):
					hash2 = joaat("kit_pouch_ingredients");
					break;
			
				case joaat("clothing_hl_player_satchel_008_1"):
					hash2 = joaat("kit_pouch_legendary");
					break;
			
				case joaat("clothing_hl_player_satchel_004_1"):
					hash2 = joaat("kit_pouch_kit");
					break;
			
				case joaat("clothing_hl_player_satchel_006_1"):
					hash2 = joaat("kit_pouch_materials");
					break;
			
				case joaat("clothing_hl_player_satchel_007_1"):
					hash2 = joaat("kit_pouch_valuables");
					break;
			}
		
			if (hash2 != 0)
				func_83(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_92() == -1)
					hParam0 = -1448210800;
				break;
		
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_272(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_272(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_272(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_262(499813453, joaat("treasure_hunt_loot_01"), false);
				func_263(499813453, false);
				func_264(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_262(390004462, joaat("treasure_hunt_loot_17"), false);
				func_263(390004462, false);
				func_268(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_262(6410548, joaat("treasure_hunt_loot_23"), false);
				func_263(6410548, false);
				func_269(8);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_262(6410548, joaat("treasure_hunt_loot_22"), false);
				func_263(6410548, false);
				func_269(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_225(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_255(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_256(&hash3, false))
					func_231(hash3, 0, false, bParam4, 3, false, 752097756, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case -1080874779:
			case joaat("consumable_potent_medicine"):
			case joaat("consumable_medicine"):
			case joaat("consumable_moonshine"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_272(594, 1934060482, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("upgrade_fsh_bait_cricket_tin"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_crickets");
				break;
		
			case joaat("consumable_potent_restorative"):
			case joaat("consumable_cocaine_chewing_gum_used"):
			case joaat("consumable_cocaine_chewing_gum"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("consumable_restorative"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_272(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_212(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_262(6410548, joaat("treasure_hunt_loot_21"), false);
				func_263(6410548, false);
				func_269(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_212(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_83(func_273(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_83(func_274(), 1, false, false, false, 752097756, 0, 0, 0, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("consumable_snake_oil"):
			case joaat("consumable_potent_snake_oil"):
			case joaat("consumable_chewing_tobacco"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("consumable_chewing_tobacco_used"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_272(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_262(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_263(-220219788, false);
				func_266(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_224(1))
					func_212(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_262(666607663, joaat("treasure_hunt_loot_07"), false);
				func_263(666607663, false);
				func_265(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_271(241, func_270(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_262(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_263(-220219788, false);
				func_266(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_271(242, func_270(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_212(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_271(240, func_270(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_262(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_263(-220219788, false);
				func_266(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_262(390004462, joaat("treasure_hunt_loot_16"), false);
				func_263(390004462, false);
				func_268(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_262(499813453, joaat("treasure_hunt_loot_03"), false);
				func_263(499813453, false);
				func_264(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_262(666607663, joaat("treasure_hunt_loot_06"), false);
				func_263(666607663, false);
				func_265(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_262(218622660, joaat("treasure_hunt_loot_14"), false);
				func_263(218622660, false);
				func_267(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_262(666607663, joaat("treasure_hunt_loot_05"), false);
				func_263(666607663, false);
				func_265(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_92() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_255(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_262(218622660, joaat("treasure_hunt_loot_13"), false);
				func_263(218622660, false);
				func_267(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_262(6410548, joaat("treasure_hunt_loot_20"), false);
				func_263(6410548, false);
				func_269(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_212(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_212(491, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("upgrade_fsh_bait_worm_can"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_worms");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_262(499813453, joaat("treasure_hunt_loot_02"), false);
				func_263(499813453, false);
				func_264(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_212(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_257();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_258();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_259();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_260();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_261();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_262(390004462, joaat("treasure_hunt_loot_18"), false);
				func_263(390004462, false);
				func_268(4);
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash4 = hParam0;
		func_275(&hash4);
	
		if (!func_276(hash4, value, hParam5))
			return 0;
		else if (!func_230(false))
			return 1;
	
		if (func_221(hParam0) == joaat("CLOTHING"))
			func_277(hParam0);
	
		if (func_222(hParam0, -1979000645))
			func_278(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_230(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_83(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_279(lootTableKey, 0);
		}
	}

	statId = { func_280(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_281(hParam0);

	if (iParam6 > 0f)
	{
		if (func_222(hParam0, -839724752))
			func_282(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_283(hParam0, value, false, flag3, 0);
	}

	return 1;
}

BOOL func_84(int iParam0, BOOL bParam1) // Position - 0xA159 Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_105(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[num /*18*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1945188[num /*18*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[num /*18*/].f_3);
}

void func_85(var uParam0, var uParam1) // Position - 0xA1B0 Hash - 0x470751C6 ^0xCDFA8715
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_284(uParam0, i, 2, 0)))
			func_285(uParam1, i);
	}

	return;
}

void func_86(var uParam0) // Position - 0xA1E6 Hash - 0x2D26F28C ^0xDC6E74D8
{
	func_286(&uLocal_63);
	func_287(&uLocal_157);
	func_85(uParam0, &uLocal_31);

	if (*uParam0 == -415839138)
	{
		TASK::REMOVE_WAYPOINT_RECORDING("discoverable_monk_flee");
		func_288(uParam0);
	}

	return;
}

BOOL func_87(int iParam0) // Position - 0xA21B Hash - 0x1965A61D ^0x1965A61D
{
	int num;

	num = func_88(iParam0, 1);
	return num >= 0 && num < 143;
}

int func_88(int iParam0, int iParam1) // Position - 0xA23A Hash - 0x18EDA9F0 ^0x18EDA9F0
{
	switch (iParam0)
	{
		case -2108030724:
			return 138;
	
		case -2060865802:
			return 116;
	
		case -2019711818:
			return 9;
	
		case -2009137002:
			return 34;
	
		case -2008558277:
			return 59;
	
		case -1960242214:
			return 125;
	
		case -1958832660:
			return 49;
	
		case -1923503631:
			return 117;
	
		case -1891628345:
			return 124;
	
		case -1887999095:
			return 89;
	
		case -1882503209:
			return 50;
	
		case -1859413640:
			return 28;
	
		case -1859023693:
			return 64;
	
		case -1848895400:
			return 113;
	
		case -1841331114:
			return 94;
	
		case -1829339703:
			return 141;
	
		case -1824429070:
			return 66;
	
		case -1787770845:
			return 16;
	
		case -1761578407:
			return 17;
	
		case -1761189332:
			return 115;
	
		case -1714262909:
			return 76;
	
		case -1686810506:
			return 112;
	
		case -1646022773:
			return 13;
	
		case -1636964661:
			return 10;
	
		case -1614148516:
			return 48;
	
		case -1609238411:
			return 21;
	
		case -1568839185:
			return 6;
	
		case -1505275983:
			return 31;
	
		case -1494823099:
			return 61;
	
		case -1481450947:
			return 53;
	
		case -1457751321:
			return 123;
	
		case -1427565340:
			return 47;
	
		case -1420566543:
			return 23;
	
		case -1308658310:
			return 45;
	
		case -1300082860:
			return 51;
	
		case -1287911066:
			return 2;
	
		case -1283611369:
			return 78;
	
		case -1272862985:
			return 139;
	
		case -1243267511:
			return 81;
	
		case -1240932004:
			return 140;
	
		case -1208846034:
			return 24;
	
		case -1177787273:
			return 127;
	
		case -1144800837:
			return 111;
	
		case -1109016944:
			return 15;
	
		case -1084929085:
			return 4;
	
		case -1061274876:
			return 96;
	
		case -1053108445:
			return 84;
	
		case -986176781:
			return 25;
	
		case -979575591:
			return 103;
	
		case -968854939:
			return 68;
	
		case -920971071:
			return 83;
	
		case -919236330:
			return 79;
	
		case -890175011:
			return 137;
	
		case -849582265:
			return 92;
	
		case -834293086:
			return 91;
	
		case -780455182:
			return 8;
	
		case -777592153:
			return 3;
	
		case -777150535:
			return 100;
	
		case -763376358:
			return 55;
	
		case -739986731:
			return 110;
	
		case -715636193:
			return 95;
	
		case -709811179:
			return 20;
	
		case -654238687:
			return 104;
	
		case -641229542:
			return 46;
	
		case -607940493:
			return 118;
	
		case -599506500:
			return 38;
	
		case -544327665:
			return 106;
	
		case -499529359:
			return 74;
	
		case -490142739:
			return 130;
	
		case -415839138:
			return 98;
	
		case -409986722:
			return 88;
	
		case -357364973:
			return 44;
	
		case -321841939:
			return 11;
	
		case -261997819:
			return 37;
	
		case -232974724:
			return 135;
	
		case -161804536:
			return 29;
	
		case -148407339:
			return 97;
	
		case -35775921:
			return 40;
	
		case -30872859:
			return 30;
	
		case -657632:
			return 114;
	
		case 0:
			return 143;
	
		case 58958195:
			return 72;
	
		case 74587361:
			return 35;
	
		case 118535038:
			return 101;
	
		case 149709049:
			return 67;
	
		case 173549940:
			return 22;
	
		case 221420861:
			return 132;
	
		case 230001763:
			return 107;
	
		case 233600584:
			return 54;
	
		case 247563739:
			return 52;
	
		case 308500632:
			return 136;
	
		case 330993088:
			return 131;
	
		case 373034311:
			return 0;
	
		case 397377585:
			return 87;
	
		case 404434344:
			return 18;
	
		case 425000526:
			return 75;
	
		case 429544447:
			return 93;
	
		case 435290930:
			return 60;
	
		case 464413478:
			return 128;
	
		case 503180747:
			return 19;
	
		case 513110082:
			return 121;
	
		case 657666087:
			return 70;
	
		case 677950956:
			return 142;
	
		case 683269210:
			return 134;
	
		case 733338689:
			return 32;
	
		case 870958936:
			return 1;
	
		case 918206817:
			return 82;
	
		case 921081956:
			return 108;
	
		case 939555152:
			return 27;
	
		case 949011950:
			return 109;
	
		case 1034793488:
			return 33;
	
		case 1048086072:
			return 26;
	
		case 1091556515:
			return 122;
	
		case 1120968795:
			return 105;
	
		case 1124200691:
			return 43;
	
		case 1154568952:
			return 12;
	
		case 1187689415:
			return 126;
	
		case 1187917501:
			return 71;
	
		case 1284679164:
			return 85;
	
		case 1335921989:
			return 58;
	
		case 1342653896:
			return 69;
	
		case 1347913620:
			return 5;
	
		case 1351526287:
			return 86;
	
		case 1424723727:
			return 39;
	
		case 1431862613:
			return 80;
	
		case 1464664327:
			return 129;
	
		case 1490223565:
			return 57;
	
		case 1505050944:
			return 77;
	
		case 1519228573:
			return 42;
	
		case 1519472817:
			return 63;
	
		case 1535254161:
			return 133;
	
		case 1673499939:
			return 99;
	
		case 1734766691:
			return 65;
	
		case 1801731633:
			return 56;
	
		case 1833243216:
			return 102;
	
		case 1861313914:
			return 62;
	
		case 1937333853:
			return 7;
	
		case 1982045664:
			return 90;
	
		case 1986618633:
			return 119;
	
		case 2000209669:
			return 120;
	
		case 2072029413:
			return 36;
	
		case 2072069278:
			return 73;
	
		case 2134589549:
			return 14;
	
		case 2135153015:
			return 41;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Vector3 func_89(var uParam0, int iParam1) // Position - 0xA883 Hash - 0xAF22EF00 ^0xAF22EF00
{
	switch (*uParam0)
	{
		case 2000209669:
			if (iParam1 == 0)
				return 827.9519f, 1925.2303f, 258.7208f;
			else if (iParam1 == 1)
				return 832.673f, 1922.2863f, 258.7208f;
			else if (iParam1 == 2)
				return 829.6969f, 1926.9872f, 258.7208f;
			else if (iParam1 == 3)
				return 832.1583f, 1926.7184f, 258.7208f;
			else if (iParam1 == 4)
				return 828.2374f, 1922.7709f, 258.7208f;
			else if (iParam1 == 5)
				return 830.3385f, 1921.4603f, 258.7208f;
			else if (iParam1 == 6)
				return 833.4829f, 1924.6263f, 258.7208f;
			else if (iParam1 == 7)
				return 830.591f, 1924.07f, 258.795f;
			else if (iParam1 == 11)
				return -160.9032f, 1599.6328f, 180.2413f;
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

Vector3 func_90(var uParam0, int iParam1) // Position - 0xA994 Hash - 0xC47AB599 ^0xC47AB599
{
	switch (*uParam0)
	{
		case -2009137002:
			return 1260.3309f, 1296.422f, 217.8313f;
	
		case -1960242214:
			return 749.9653f, 1825.0815f, 240.1131f;
	
		case -1958832660:
			return 1591.8629f, -1845.2925f, 65.196f;
	
		case -1891628345:
			return -2694.1494f, -1499.7002f, 150.6036f;
	
		case -1887999095:
		case -1636964661:
		case -1287911066:
		case -415839138:
		case 429544447:
		case 1519228573:
		case 1982045664:
			return func_131(uParam0, 0);
	
		case -1787770845:
			return -1915.6179f, -30.6525f, 287.4662f;
	
		case -1761578407:
			if (iParam1 == 0)
				return 794.4265f, 1777.1082f, 281.0706f;
			else if (iParam1 == 1)
				return -1277.7407f, 2895.727f, 386.2982f;
			else if (iParam1 == 2)
				return 2577.4329f, -627.2448f, 42.97695f;
			else if (iParam1 == 3)
				return 2579.3894f, -627.86975f, 42.96334f;
			else if (iParam1 == 4)
				return 672.4651f, -974.1768f, 54.4574f;
			else if (iParam1 == 5)
				return -1307.0912f, 2468.8923f, 309.8042f;
			else if (iParam1 == 6)
				return 1735.9027f, -1893.9288f, 45.189f;
			else if (iParam1 == 7)
				return 2157.9163f, 795.1056f, 156.5394f;
			else if (iParam1 == 8)
				return 514.147f, 1932.5339f, 200.2069f;
			break;
	
		case -1761189332:
			return 703.7369f, 427.9747f, 108.3372f;
	
		case -1646022773:
			return 2148.9868f, 1918.4429f, 194.4452f;
	
		case -1614148516:
			return func_71(uParam0, 0);
	
		case -1609238411:
			return 3220.5217f, 1463.2781f, 52.9448f;
	
		case -1505275983:
			return 947.541f, 238.4814f, 127.5118f;
	
		case -1300082860:
			return 365.725f, -15.4104f, 110.5399f;
	
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 2135.3552f, 1069.8513f, 122.7836f;
			
				case 1:
					return 2150.689f, 1124.0936f, 130.4564f;
			
				case 2:
					return 2210.9138f, 1134.4962f, 141.0999f;
			
				case 3:
					return 2251.7058f, 1198.5743f, 121.7253f;
			
				default:
				
			}
			break;
	
		case -1243267511:
			switch (iParam1)
			{
				case 0:
					return -2693.879f, -402.3976f, 148.1729f;
			
				case 1:
					return -2687.9932f, -402.3363f, 148.3894f;
			
				case 2:
					return -2686.917f, -410.486f, 148.4376f;
			
				case 3:
					return -2694.1677f, -412.4018f, 148.8531f;
			
				case 4:
					return -2697.2847f, -408.3287f, 149.3549f;
			
				default:
				
			}
			break;
	
		case -1109016944:
			return 1733.1165f, -424.945f, 48.4327f;
	
		case -1053108445:
			return -4346.388f, -2604.2485f, -1.1693f;
	
		case -986176781:
			return -2774.1094f, -431.3145f, 174.3467f;
	
		case -979575591:
			return -2937.4429f, -138.5504f, 199.3164f;
	
		case -890175011:
			switch (iParam1)
			{
				case 0:
					return 2826.6787f, -1323.0426f, 46.43373f;
			
				case 1:
					return 2736.7324f, -1339.3354f, 46.65415f;
			
				case 2:
					return 2698.488f, -1306.1943f, 49.48277f;
			
				case 3:
					return 2773.8484f, -1182.3187f, 48.53596f;
			
				case 4:
					return 2820.0027f, -1230.7089f, 47.52145f;
			
				default:
				
			}
			break;
	
		case -849582265:
			return -2588.29f, -93.565f, 167.61f;
	
		case -780455182:
			return func_71(uParam0, 1);
	
		case -739986731:
			return -2904.9517f, -254.2731f, 186.965f;
	
		case -709811179:
			return 2291.5684f, 2080.9324f, 200.7657f;
	
		case -607940493:
			return 2698.9946f, 410.8617f, 77.4735f;
	
		case -321841939:
			switch (iParam1)
			{
				case 0:
					return -941.5482f, 1011.4495f, 198.416f;
			
				case 1:
					return -490.2726f, 1355.5359f, 205.7345f;
			
				case 2:
					return 299.3675f, 1795.3009f, 197.5344f;
			
				case 3:
					return 1884.7041f, 1927.3337f, 249.5903f;
			
				case 4:
					return 2549.5059f, 1624.2812f, 93.5729f;
			
				case 5:
					return 2489.881f, 1375.1556f, 107.1609f;
			
				case 6:
					return 2657.0615f, 1286.7151f, 117.8777f;
			
				case 7:
					return 2577.3848f, 1161.8445f, 158.058f;
			
				case 8:
					return 2342.9253f, 844.4003f, 82.3675f;
			
				case 9:
					return 1698.3235f, 719.6797f, 125.0664f;
			
				case 10:
					return 1986.1445f, -208.0823f, 51.4904f;
			
				case 11:
					return 1263.5956f, 528.7397f, 88.8471f;
			
				case 12:
					return 1626.3717f, -0.4718f, 87.7166f;
			
				case 13:
					return 1562.5807f, -219.7309f, 84.4919f;
			
				case 14:
					return 111.1142f, 639.3316f, 125.9073f;
			
				case 15:
					return -20.3564f, 217.8298f, 109.194f;
			
				case 16:
					return 714.7566f, 22.1708f, 154.0224f;
			
				case 17:
					return -547.9435f, 557.9953f, 104.2689f;
			
				case 18:
					return -540.1378f, 256.6357f, 44.7136f;
			
				case 19:
					return -525.3924f, -277.1231f, 62.9066f;
			
				default:
				
			}
			break;
	
		case -232974724:
			return 189.6525f, -414.4084f, 87.8956f;
	
		case -161804536:
			return 2388.6423f, 1690.1865f, 95.5056f;
	
		case -148407339:
			return -1732.145f, 2191.0862f, 293.2867f;
	
		case 58958195:
			return -2565.2583f, 756.6277f, 153.3524f;
	
		case 149709049:
			return -353.4487f, -133.7923f, 46.4927f;
	
		case 247563739:
			return 2450.049f, 2104.1897f, 173.9434f;
	
		case 308500632:
			return -2664.789f, 690.7282f, 185.3162f;
	
		case 373034311:
			return func_71(uParam0, 0);
	
		case 404434344:
			return 794.4265f, 1777.1082f, 281.0706f;
	
		case 657666087:
			return -1749.0651f, -1624.2925f, 90.1441f;
	
		case 677950956:
			switch (iParam1)
			{
				case 0:
					return -834.465f, -1365.7908f, 48.5643f;
			
				case 1:
					return -781.2938f, -1320.0243f, 44.8353f;
			
				case 2:
					return -729.9185f, -1219.6156f, 41.4298f;
			
				case 3:
					return -773.6366f, -1354.4657f, 44.1805f;
			
				case 4:
					return -756.8423f, -1276.1244f, 49.337f;
			
				case 5:
					return -816.6586f, -1310.7571f, 43.2499f;
			
				default:
				
			}
			break;
	
		case 921081956:
			return 2417.1724f, -738.7664f, 42.3038f;
	
		case 1034793488:
			return 1705.8854f, -1006.9387f, 43.8407f;
	
		case 1284679164:
			return 2782.7463f, 536.9514f, 72.1612f;
	
		case 1535254161:
			switch (iParam1)
			{
				case 0:
					return 1478.7609f, -1831.4489f, 52.0191f;
			
				case 1:
					return 1487.7264f, -1822.5234f, 53.4034f;
			
				case 2:
					return 1501.0931f, -1813.105f, 53.2804f;
			
				case 3:
					return 1520.8224f, -1805.3981f, 52.6965f;
			
				default:
				
			}
			break;
	
		case 1673499939:
			return 2476.0007f, 1997.8243f, 167.269f;
	
		case 1734766691:
			return -270.2353f, 114.9477f, 62.751f;
	
		case 1861313914:
			return 894.6589f, -1969.3633f, 44.554f;
	
		case 1986618633:
			return -4688.022f, -3419.1147f, 17.2107f;
	
		case 2000209669:
			if (iParam1 == 11)
				return func_89(uParam0, 11);
			else
				return func_89(uParam0, 7);
			break;
	
		case 2134589549:
			return func_71(uParam0, 0);
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

Vector3 func_91(var uParam0, int iParam1) // Position - 0xB30C Hash - 0xBAE0ABDC ^0xBAE0ABDC
{
	switch (*uParam0)
	{
		case -1887999095:
			return 1772.964f, -1359.736f, 44.18f;
	
		case -1859413640:
			return 2195.23f, -554.23f, 40.86f;
	
		case -1481450947:
			return 1268.257f, -387.328f, 88.459f;
	
		case -1427565340:
			return 2255.135f, -754.127f, 41.793f;
	
		case -161804536:
			return 2385.593f, 1696.987f, 94.94f;
	
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -2532.075f, 1173.143f, 224.93f;
			
				case 1:
					return 3028.165f, 1781.019f, 83.127f;
			
				case 2:
					return -4394.824f, -2159.3662f, 47.3844f;
			
				default:
				
			}
			break;
	
		case 733338689:
			return 2388.11f, 1688.02f, 94.66f;
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -1518.81f, 533.46f, 101.45f;
			
				case 1:
					return 1251.4f, 1165.7f, 149.09f;
			
				case 2:
					return -150.285f, 1498.717f, 114.935f;
			
				case 3:
					return 2939.35f, 1422.56f, 44.58f;
			
				case 4:
					return 1973.787f, 1192.337f, 170.517f;
			
				default:
				
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return 2783.1868f, 532.9774f, 70.28662f;
			
				case 1:
					return 2783.885f, 534.95013f, 70.2896f;
			
				case 2:
					return 2784.2095f, 532.76996f, 70.28524f;
			
				case 3:
					return 2782.7017f, 535.78644f, 70.28931f;
			
				default:
				
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1182.68f, 2036.35f, 322.98f;
			
				case 1:
					return 1227.1906f, 2007.3888f, 319.3389f;
			}
			break;
	
		case 2000209669:
			return 830.53f, 1923.9f, 258.33f;
	
		case 2072029413:
			return 808.47f, 2300.12f, 250.82f;
	
		case 2135153015:
			return -161.88f, 1734.6f, 169.73f;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_92() // Position - 0xB59E Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_93(int iParam0, BOOL bParam1) // Position - 0xB5AC Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_289(iParam0))
	{
		case 5:
			return 1;
	
		case 6:
			if (bParam1)
				return 1;
			break;
	}

	return 0;
}

void func_94(var uParam0) // Position - 0xB5DD Hash - 0x87234A3C ^0x21D7A27C
{
	Vector3 vector;
	Vector3 vector2;
	Vector3 vector3;

	if (*uParam0 == 404434344)
	{
		vector = { 796.11584f, 1777.6525f, 281.48856f };
		vector2 = { 0f, 0f, -74.42887f };
		vector3 = { 2.5f, 3f, 5f };
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_290(uParam0));
	}
	else if (*uParam0 == -1761578407)
	{
		if (uParam0->f_4 == 0)
		{
			vector = { 796.11584f, 1777.6525f, 281.48856f };
			vector2 = { 0f, 0f, -74.42887f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 1)
		{
			vector = { -1279.2471f, 2896.2676f, 386.57596f };
			vector2 = { 0f, 0f, -21.054869f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 2)
		{
			vector = { 2576.8708f, -628.93024f, 42.2934f };
			vector2 = { 0f, 0f, -110.79236f };
			vector3 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 3)
		{
			vector = { 2578.7576f, -629.6465f, 42.2934f };
			vector2 = { 0f, 0f, -110.79236f };
			vector3 = { 2.5f, 1.61286f, 5f };
		}
		else if (uParam0->f_4 == 4)
		{
			vector = { 673.9809f, -974.8455f, 54.0894f };
			vector2 = { 0f, 0f, -23.06569f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 5)
		{
			vector = { -1305.8706f, 2468.3286f, 309.4034f };
			vector2 = { 0f, 0f, -21.05487f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 6)
		{
			vector = { 1734.5801f, -1895.353f, 45.189f };
			vector2 = { 0f, 0f, -41.82871f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 7)
		{
			vector = { 2155.717f, 794.849f, 156.1776f };
			vector2 = { 0f, 0f, 280f };
			vector3 = { 2.5f, 3f, 5f };
		}
		else if (uParam0->f_4 == 8)
		{
			vector = { 512.7686f, 1932.3792f, 199.7092f };
			vector2 = { 0f, 0f, -2.622487f };
			vector3 = { 2.5f, 3f, 5f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_290(uParam0));
	}
	else if (*uParam0 == -1243267511 || *uParam0 == 1535254161 || *uParam0 == -607940493)
	{
		if (*uParam0 == -1243267511)
		{
			vector = { -2691.41f, -407.6143f, 146.533f };
			vector2 = { 0f, 0f, 0f };
			vector3 = { 5f, 5f, 5f };
		}
		else if (*uParam0 == 1535254161)
		{
			vector = { 1503.2311f, -1819.4764f, 56.89473f };
			vector2 = { 0f, 0f, 31.762503f };
			vector3 = { 44.605457f, 27.382586f, 6f };
		}
		else if (*uParam0 == -607940493)
		{
			vector = { 2704.939f, 435.9636f, 91.37785f };
			vector2 = { 0f, 0f, -54.200283f };
			vector3 = { 3.346154f, 3.339972f, 8.648747f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			if (*uParam0 == -607940493)
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_290(uParam0));
			else
				uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, vector2, vector3, func_290(uParam0));
	}
	else if (*uParam0 == -890175011)
	{
		if (uParam0->f_4 == 0)
		{
			vector = { 2825.8171f, -1322.5686f, 45.7557f };
			vector2 = { 0f, 0f, -40.04137f };
			vector3 = { 1.479112f, 3.339972f, 8.648747f };
		}
		else if (uParam0->f_4 == 1)
		{
			vector = { 2736.9749f, -1340.5348f, 46.516815f };
			vector2 = { 0f, 0f, -44.913616f };
			vector3 = { 1.006241f, 1.334083f, 4.408258f };
		}
		else if (uParam0->f_4 == 3)
		{
			vector = { 2773.5535f, -1183.3451f, 48.74084f };
			vector2 = { 0f, 0f, -23.65903f };
			vector3 = { 1.282358f, 0.740535f, 5.648747f };
		}
		else if (uParam0->f_4 == 4)
		{
			vector = { 2821.3694f, -1229.3018f, 46.5088f };
			vector2 = { 0f, 0f, -34.541092f };
			vector3 = { 3.346154f, 3.339972f, 8.648747f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_290(uParam0));
	}
	else if (*uParam0 == 677950956)
	{
		if (uParam0->f_4 == 1)
		{
			vector = { -781.6985f, -1321.9182f, 42.8842f };
			vector2 = { 0f, 0f, -90.32019f };
			vector3 = { 3.080742f, 6.954088f, 8.648747f };
		}
		else if (uParam0->f_4 == 5)
		{
			vector = { -816.78595f, -1313.1086f, 44.647045f };
			vector2 = { 0f, 0f, -89.95428f };
			vector3 = { 2.607229f, 7.43211f, 4.408258f };
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9))
			uParam0->f_6.f_9 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector2, vector3, func_290(uParam0));
	}

	return;
}

BOOL func_95(int iParam0, int iParam1) // Position - 0xBB4E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_96(var uParam0, float fParam1) // Position - 0xBB5D Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_291() - fParam1;
	func_292(uParam0, 1);
	func_293(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_97(var uParam0) // Position - 0xBB83 Hash - 0x39705408 ^0x39705408
{
	return func_95(*uParam0, 2);
}

int func_98() // Position - 0xBB93 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_99(var uParam0) // Position - 0xBBB1 Hash - 0xD965F2AB ^0x4503AF3C
{
	switch (*uParam0)
	{
		case -1300082860:
			if (func_72(Global_35, func_71(uParam0, 0), 3f, true, true))
				return true;
			break;
	
		case -890175011:
			if (uParam0->f_4 == 0 || uParam0->f_4 == 1 || uParam0->f_4 == 3 || uParam0->f_4 == 4)
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
					return true;
			break;
	
		case 677950956:
			if (uParam0->f_4 == 1 || uParam0->f_4 == 5)
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6.f_9) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_6.f_9, true, 0))
					return true;
			break;
	}

	return false;
}

BOOL func_100(var uParam0, int iParam1) // Position - 0xBC82 Hash - 0x787E614B ^0xC23272A0
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (!func_294(iParam1, 1))
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			return false;
	
		if (TASK::_IS_PED_DUELLING(Global_35))
			return false;
	}

	if (TASK::IS_PED_BEING_ARRESTED(Global_35))
		return false;

	if (!func_294(iParam1, 2) && !func_295())
		return false;

	if (!func_294(iParam1, 4) && !func_296())
		return false;

	if (!func_294(iParam1, 128) && !func_297())
		return false;

	if (!func_294(iParam1, 2048) && !func_298(false))
		return false;

	if (!func_294(iParam1, 32) && !func_299(iParam1))
		return false;

	if (!func_294(iParam1, 64) && !func_300())
		return false;

	if (!func_294(iParam1, 256) && CAM::IS_CINEMATIC_CAM_RENDERING())
		return false;

	if (!func_294(iParam1, 512))
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			return false;

	if (!func_294(iParam1, 1024))
		if (PED::IS_PED_IN_COVER(Global_35, false, true))
			return false;

	if (CAM::_0x1204EB53A5FBC63D())
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		return false;
	else if (func_301(Global_35, 1369124074))
		return false;
	else if (func_301(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		return false;

	return true;
}

BOOL func_101(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xBE05 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > iParam4;
}

// Unhandled jump detected. Output should be considered invalid
int func_102(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0xBE46 Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_302(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
					if (iParam3 <= Global_1945188[i /*18*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_303(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_103(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xBF1D Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_33(iParam0))
		return;

	num = func_105(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[num /*18*/].f_3, iParam1, bParam2);
	return;
}

void func_104(int iParam0) // Position - 0xBF68 Hash - 0x4FCB23E1 ^0x764A8AAB
{
	int num;

	if (!func_33(iParam0))
		return;

	num = func_105(iParam0);

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, 1710353528, 0);

	return;
}

int func_105(int iParam0) // Position - 0xBFAA Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_106(int iParam0, BOOL bParam1) // Position - 0xBFB4 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_302(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

Hash func_107(int iParam0) // Position - 0xC00D Hash - 0xB8EC44B7 ^0x184A6D50
{
	switch (iParam0)
	{
		case 0:
			return 1280505101;
	
		case 1:
			return 437457038;
	
		case 2:
			return 787823186;
	
		case 3:
			return -22914651;
	
		case 4:
			return -207797345;
	
		case 5:
			return 152333965;
	
		case 6:
			return -705591224;
	
		case 7:
			return -307775564;
	
		case 8:
			return -1166159519;
	
		case 9:
			return -164804701;
	
		case 10:
			return -1562042092;
	
		case 11:
			return -1717629304;
	
		case 12:
			return -1669917636;
	
		case 13:
			return -884608551;
	
		case 14:
			return -1143188730;
	
		case 15:
			return 1856092306;
	
		case 16:
			return 1445824426;
	
		case 17:
			return -2082446577;
	
		case 18:
			return 2030128465;
	
		case 19:
			return -597126414;
	
		default:
		
	}

	return 0;
}

Hash func_108(int iParam0, int iParam1) // Position - 0xC136 Hash - 0xE1D12727 ^0x5FD78BB4
{
	switch (iParam0)
	{
		case -2009137002:
			return -440810089;
	
		case -1960242214:
			return 1747567809;
	
		case -1958832660:
			return -245016475;
	
		case -1891628345:
			return -804420153;
	
		case -1887999095:
			return -95543768;
	
		case -1787770845:
			return 422665644;
	
		case -1761189332:
			return 270899202;
	
		case -1646022773:
			return -65357919;
	
		case -1636964661:
			return 1599532233;
	
		case -1614148516:
			return -1705330644;
	
		case -1609238411:
			return 1910189712;
	
		case -1505275983:
			return 387715582;
	
		case -1300082860:
			return 1529964155;
	
		case -1287911066:
			return -617882357;
	
		case -1272862985:
			switch (iParam1)
			{
				case 0:
					return 493724241;
			
				case 1:
					return 1378917331;
			
				case 2:
					return -1267048347;
			
				case 3:
					return 1840337620;
			
				default:
					break;
			}
			break;
	
		case -1243267511:
			return -1482291365;
	
		case -1109016944:
			return -1451193020;
	
		case -1053108445:
			return -1576735250;
	
		case -986176781:
			return -1896654834;
	
		case -979575591:
			return 463289412;
	
		case -849582265:
			return 2097588565;
	
		case -780455182:
			return 1614617630;
	
		case -739986731:
			return 371066;
	
		case -709811179:
			return 317656811;
	
		case -607940493:
			return 894739389;
	
		case -415839138:
			return 979428630;
	
		case -232974724:
			return -792295257;
	
		case -161804536:
			return -126421233;
	
		case -148407339:
			return -1155213091;
	
		case 58958195:
			return 712585684;
	
		case 247563739:
			return 325616917;
	
		case 308500632:
			return 1553391542;
	
		case 429544447:
			return -159963867;
	
		case 657666087:
			return -1721762433;
	
		case 921081956:
			return 731487006;
	
		case 1034793488:
			return 120200140;
	
		case 1284679164:
			return -1245190585;
	
		case 1519228573:
			return -703551507;
	
		case 1535254161:
			return -452661064;
	
		case 1673499939:
			return -720689005;
	
		case 1734766691:
			return 1292039078;
	
		case 1861313914:
			return 1067266077;
	
		case 1982045664:
			return -1173476934;
	
		case 1986618633:
			return -2113673964;
	
		case 2000209669:
			switch (iParam1)
			{
				case 11:
					return -615993722;
			
				default:
				
			}
		
			return -866955093;
	
		case 2134589549:
			return 2004715705;
	}

	return 0;
}

int func_109() // Position - 0xC41E Hash - 0x1767447B ^0x234018D7
{
	int i;
	int num;
	int num2;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num2 = func_304(i);
	
		if (func_39(Global_40.f_8863.f_148, num2))
			num = num + 1;
	}

	return num;
}

BOOL func_110() // Position - 0xC45C Hash - 0xA0319B77 ^0x14CE505F
{
	int i;
	int num;

	for (i = 0; i <= 20 - 1; i = i + 1)
	{
		num = func_304(i);
	
		if (!func_39(Global_40.f_8863.f_148, num))
			return false;
	}

	return true;
}

BOOL func_111() // Position - 0xC498 Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_92() != -1)
		return false;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return true;

	return false;
}

int func_112(int iParam0, int iParam1, int iParam2) // Position - 0xC4BE Hash - 0xFCD0B11D ^0x62D50FE4
{
	if (iParam1 == true)
	{
		switch (iParam0)
		{
			case -2009137002:
				return joaat("journal_disc_face_cliff_ar");
		
			case -1960242214:
				return joaat("journal_disc_colony_ar");
		
			case -1958832660:
				return joaat("journal_disc_abandoned_church_ar");
		
			case -1891628345:
				return joaat("journal_disc_ute_wickiup");
		
			case -1887999095:
				return joaat("journal_disc_grays_secret_ar");
		
			case -1787770845:
				return joaat("journal_disc_giant_remains_ar");
		
			case -1761189332:
				return joaat("journal_disc_register_rock_ar");
		
			case -1646022773:
				return joaat("journal_disc_fossilised_man_ar");
		
			case -1636964661:
				return joaat("journal_disc_donkey_lady_ar");
		
			case -1614148516:
				return joaat("journal_disc_phonograph_ar");
		
			case -1609238411:
				return joaat("journal_disc_old_scripts_ar");
		
			case -1505275983:
				return joaat("journal_disc_warped_tree_ar");
		
			case -1300082860:
				return joaat("journal_disc_oil_well_ar");
		
			case -1287911066:
				return joaat("journal_disc_barrel_rider_ar");
		
			case -1272862985:
				if (iParam2 == 0)
					return joaat("journal_discover_trail_trees_tree_01_ar");
				else if (iParam2 == 1)
					return joaat("journal_discover_trail_trees_tree_02_ar");
				else if (iParam2 == 2)
					return joaat("journal_discover_trail_trees_tree_03_ar");
				else if (iParam2 == 3)
					return joaat("journal_discover_trail_trees_tree_04_ar");
				break;
		
			case -1243267511:
				return joaat("journal_disc_face_trees_ar");
		
			case -1109016944:
				return joaat("journal_disc_dead_town_ar");
		
			case -1053108445:
				return joaat("journal_disc_flying_machine_ar");
		
			case -986176781:
				return joaat("journal_disc_whale_bone_ar");
		
			case -979575591:
				return joaat("journal_disc_obelisk_ar");
		
			case -890175011:
				if (iParam2 == 0)
					return joaat("journal_town_secret_vamp2_ar");
				else if (iParam2 == 1)
					return joaat("journal_town_secret_vamp1_ar");
				else if (iParam2 == 2)
					return joaat("journal_town_secret_vamp5_ar");
				else if (iParam2 == 3)
					return joaat("journal_town_secret_vamp4_ar");
				else if (iParam2 == 4)
					return joaat("journal_town_secret_vamp3_ar");
				break;
		
			case -849582265:
				return joaat("journal_disc_indian_burial_ar");
		
			case -780455182:
				return joaat("journal_disc_defaced_grave_ar");
		
			case -739986731:
				return joaat("journal_disc_pagan_ritual_ar");
		
			case -709811179:
				return joaat("journal_disc_meteorite_ar");
		
			case -607940493:
				return joaat("journal_disc_serpent_mound_ar");
		
			case -415839138:
				return joaat("journal_disc_meditating_monk_ar");
		
			case -321841939:
				return joaat("journal_disc_dreamcatcher_map_ar");
		
			case -232974724:
				return joaat("journal_disc_trading_post_ar");
		
			case -161804536:
				return joaat("journal_disc_stonehenge_ar");
		
			case -148407339:
				return joaat("journal_disc_mammoth_ar");
		
			case 58958195:
				return joaat("journal_disc_crashed_airship_ar");
		
			case 247563739:
				return joaat("journal_disc_abandoned_trading_post_ar");
		
			case 308500632:
				return joaat("journal_disc_hidden_tunnel_ar");
		
			case 429544447:
				return joaat("journal_disc_jesuit_ar");
		
			case 657666087:
				return joaat("journal_disc_circus_wagons_ar");
		
			case 921081956:
				return joaat("journal_disc_one_room_church_ar");
		
			case 1034793488:
				return joaat("journal_disc_painting_cabin_ar");
		
			case 1284679164:
				return joaat("journal_disc_frankenstein_ar");
		
			case 1519228573:
				return joaat("journal_disc_hand_swamp_ar");
		
			case 1535254161:
				return joaat("journal_disc_civil_war_ar");
		
			case 1673499939:
				return joaat("journal_disc_meteor_house_ar");
		
			case 1734766691:
				return joaat("journal_disc_brush_fire_ar");
		
			case 1861313914:
				return joaat("journal_disc_braithwaite_secret_ar");
		
			case 1982045664:
				return joaat("journal_disc_hermit_woman_ar");
		
			case 1986618633:
				return joaat("journal_disc_sperm_whale_ar");
		
			case 2000209669:
				if (iParam2 == 11)
					return joaat("journal_disc_strange_statues_painting_ar");
				else
					return joaat("journal_disc_strange_statues_ar");
				break;
		
			case 2134589549:
				return joaat("journal_disc_frozen_settler_ar");
		
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -2009137002:
				return joaat("journal_disc_face_cliff_jn");
		
			case -1960242214:
				return joaat("journal_disc_colony_jn");
		
			case -1958832660:
				return joaat("journal_disc_abandoned_church_jn");
		
			case -1891628345:
				return joaat("journal_disc_ute_wickiup_jn");
		
			case -1887999095:
				return joaat("journal_disc_grays_secret_jn");
		
			case -1787770845:
				return joaat("journal_disc_giant_remains_jn");
		
			case -1761189332:
				return joaat("journal_disc_register_rock_jn");
		
			case -1646022773:
				return joaat("journal_disc_fossilised_man_jn");
		
			case -1636964661:
				return joaat("journal_disc_donkey_lady_jn");
		
			case -1614148516:
				return joaat("journal_disc_phonograph_jn");
		
			case -1609238411:
				return joaat("journal_disc_old_scripts_jn");
		
			case -1505275983:
				return joaat("journal_disc_warped_tree_jn");
		
			case -1300082860:
				return joaat("journal_disc_oil_well_jn");
		
			case -1287911066:
				return joaat("journal_disc_barrel_rider_jn");
		
			case -1272862985:
				if (iParam2 == 0)
					return joaat("journal_discover_trail_trees_tree_01_jn");
				else if (iParam2 == 1)
					return joaat("journal_discover_trail_trees_tree_02_jn");
				else if (iParam2 == 2)
					return joaat("journal_discover_trail_trees_tree_03_jn");
				else if (iParam2 == 3)
					return joaat("journal_discover_trail_trees_tree_04_jn");
				break;
		
			case -1243267511:
				return joaat("journal_disc_face_trees_jn");
		
			case -1109016944:
				return joaat("journal_disc_dead_town_jn");
		
			case -1053108445:
				return joaat("journal_disc_flying_machine_jn");
		
			case -986176781:
				return joaat("journal_disc_whale_bone_jn");
		
			case -979575591:
				return joaat("journal_disc_obelisk_jn");
		
			case -890175011:
				if (iParam2 == 0)
					return joaat("journal_town_secret_vamp2_jn");
				else if (iParam2 == 1)
					return joaat("journal_town_secret_vamp1_jn");
				else if (iParam2 == 2)
					return joaat("journal_town_secret_vamp5_jn");
				else if (iParam2 == 3)
					return joaat("journal_town_secret_vamp4_jn");
				else if (iParam2 == 4)
					return joaat("journal_town_secret_vamp3_jn");
				break;
		
			case -849582265:
				return joaat("journal_disc_indian_burial_jn");
		
			case -780455182:
				return joaat("journal_disc_defaced_grave_jn");
		
			case -739986731:
				return joaat("journal_disc_pagan_ritual_jn");
		
			case -709811179:
				return joaat("journal_disc_meteorite_jn");
		
			case -607940493:
				return joaat("journal_disc_serpent_mound_jn");
		
			case -415839138:
				return joaat("journal_disc_meditating_monk_jn");
		
			case -321841939:
				return joaat("journal_disc_dreamcatcher_map_jn");
		
			case -232974724:
				return joaat("journal_disc_trading_post_jn");
		
			case -161804536:
				return joaat("journal_disc_stonehenge_jn");
		
			case -148407339:
				return joaat("journal_disc_mammoth_jn");
		
			case 58958195:
				return joaat("journal_disc_crashed_airship_jn");
		
			case 247563739:
				return joaat("journal_disc_abandoned_trading_post_jn");
		
			case 308500632:
				return joaat("journal_disc_hidden_tunnel_jn");
		
			case 429544447:
				return joaat("journal_disc_jesuit_jn");
		
			case 657666087:
				return joaat("journal_disc_circus_wagons_jn");
		
			case 677950956:
				if (iParam2 == 0)
					return joaat("journal_town_secret_aztec_1_jn");
				else if (iParam2 == 1)
					return joaat("journal_town_secret_aztec_2_jn");
				else if (iParam2 == 2)
					return joaat("journal_town_secret_aztec_3_jn");
				else if (iParam2 == 3)
					return joaat("journal_town_secret_aztec_4_jn");
				else if (iParam2 == 4)
					return joaat("journal_town_secret_aztec_5_jn");
				else if (iParam2 == 5)
					return joaat("journal_town_secret_aztec_6_jn");
				break;
		
			case 921081956:
				return joaat("journal_disc_one_room_church_jn");
		
			case 1034793488:
				return joaat("journal_disc_painting_cabin_jn");
		
			case 1284679164:
				return joaat("journal_disc_frankenstein_jn");
		
			case 1519228573:
				return joaat("journal_disc_hand_swamp_jn");
		
			case 1535254161:
				return joaat("journal_disc_civil_war_jn");
		
			case 1673499939:
				return joaat("journal_disc_meteor_house_jn");
		
			case 1734766691:
				return joaat("journal_disc_brush_fire_jn");
		
			case 1982045664:
				return joaat("journal_disc_hermit_woman_jn");
		
			case 1986618633:
				return joaat("journal_disc_sperm_whale_jn");
		
			case 2000209669:
				if (iParam2 == 11)
					return joaat("journal_disc_strange_statues_painting_jn");
				else
					return joaat("journal_disc_strange_statues_jn");
				break;
		
			case 2134589549:
				return joaat("journal_disc_frozen_settler_jn");
		
			default:
				break;
		}
	}

	return 0;
}

int func_113(int iParam0, int iParam1) // Position - 0xCCCA Hash - 0xF3B2DCFE ^0x9CB24CD5
{
	int num;

	num = func_112(iParam0, 1, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	num = func_112(iParam0, 0, iParam1);

	if (!HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
		return num;

	return 0;
}

void func_114(int iParam0, int iParam1) // Position - 0xCD07 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_305(true);

	return;
}

int func_115() // Position - 0xCD20 Hash - 0xFA45A8A9 ^0x233CB2BD
{
	int num;

	num = 0;

	if (func_39(Global_40.f_8863.f_154, 2048))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 4096))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 8192))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 16384))
		num = num + 1;

	if (func_39(Global_40.f_8863.f_154, 32768))
		num = num + 1;

	return num;
}

BOOL func_116() // Position - 0xCDA6 Hash - 0x4A33814C ^0x6E4357BF
{
	Hash item;

	if (!func_252(joaat("document_player_journal"), 1, false))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (!func_306(16))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
		return false;

	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || func_301(Global_35, 1369124074))
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_LT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_RT")) || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_ACTION")))
		return false;

	item = joaat("document_player_journal");

	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_307(false), item, false))
		return false;

	Global_36620 = MISC::GET_GAME_TIMER() + 1000;
	func_308();
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_OPEN_JOURNAL"), false);
	TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), item, 1928812891, 1, 0, -1082130432);
	return true;
}

void func_117(Hash hParam0, int iParam1) // Position - 0xCED3 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_118() // Position - 0xCEE6 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

void func_119(var uParam0, int iParam1) // Position - 0xCF05 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_120(var uParam0, int iParam1) // Position - 0xCF16 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_121(Volume volParam0, var uParam1) // Position - 0xCF2B Hash - 0x7513460B ^0x6C9F3BDD
{
	float volumeScale;
	Vector3 volumeCoords;
	var volumeRotation;
	float heading;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return 0;

	volumeScale = { VOLUME::GET_VOLUME_SCALE(volParam0) };
	uParam1->f_6 = volumeScale.f_1;
	volumeScale = { volumeScale * { 0.5f, 0.5f, 0.5f } };
	volumeCoords = { VOLUME::GET_VOLUME_COORDS(volParam0) };
	volumeRotation = { VOLUME::GET_VOLUME_ROTATION(volParam0) };
	heading = volumeRotation.f_2;
	*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, heading, -volumeScale, 0f, -volumeScale.f_2) };
	uParam1->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(volumeCoords, heading, volumeScale, 0f, volumeScale.f_2) };
	return 1;
}

Ped func_122(Ped pedParam0) // Position - 0xCFAB Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_123(int iParam0) // Position - 0xCFB5 Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_124(int iParam0) // Position - 0xD0CB Hash - 0xC25EDEC0 ^0x47BF4274
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return -2;
	
		case 2:
			return -5;
	
		case 3:
			return -10;
	
		case 4:
			return -20;
	
		case 5:
			return -40;
	
		case 6:
			return -160;
	
		case 7:
			return -320;
	
		case 8:
			return -480;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 5;
	
		case 13:
			return 10;
	
		case 14:
			return 20;
	
		case 15:
			return 40;
	
		case 16:
			return 160;
	
		case 17:
			return 640;
	
		case 18:
			return -640;
	
		default:
		
	}

	return 0;
}

void func_125(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0xD1B2 Hash - 0x9A51185A ^0xB259527F
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;
	int num7;
	char* str;
	var statId;

	num = func_309();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_310(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(eParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(eParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(eParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_224(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_15())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_311(Global_40.f_11095.f_35, num4, num3);
	num2 = func_309();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_312(num2);
		func_314(func_313(), false, 4000);
		func_315(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_316(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_194(func_193(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_124(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_318(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_318(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_194(func_193(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_124(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_318(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_318(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_193(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_319(10, 1);

	return;
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0xD557 Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

int func_127() // Position - 0xD5B6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_128(int iParam0) // Position - 0xD5C2 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_129(var uParam0, var uParam1) // Position - 0xD5D5 Hash - 0x385A1BB5 ^0x385A1BB5
{
	switch (*uParam0)
	{
		case -415839138:
			switch (*uParam1)
			{
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("Misty"):
				case joaat("SUNNY"):
					return true;
			}
			break;
	
		case 397377585:
			switch (*uParam1)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("Misty"):
				case joaat("SUNNY"):
					return true;
			}
			break;
	
		case 1535254161:
			switch (*uParam1)
			{
				case joaat("THUNDER"):
				case joaat("Thunderstorm"):
					return true;
			}
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_130(int iParam0) // Position - 0xD69B Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_289(iParam0);
	return num == 3 || num == 4;
}

Vector3 func_131(var uParam0, int iParam1) // Position - 0xD6B9 Hash - 0xABFFD40 ^0xABFFD40
{
	switch (*uParam0)
	{
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 1010.2244f, -1764.3195f, 46.4285f;
			
				default:
					break;
			}
			break;
	
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 2793.436f, 855.1691f, 71.7447f;
			
				default:
					break;
			}
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 1256.9937f, 1257.913f, 171.0152f;
			
				default:
					break;
			}
			break;
	
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -5419.692f, -3655.095f, -20f;
			
				case 1:
					return -5419.692f, -3651.995f, -20f;
			
				case 2:
					return -5419.692f, -3653.495f, -20f;
			
				case 3:
					return -5419.792f, -3655.34f, -17.72f;
			
				case 4:
					return -5419.792f, -3654.34f, -17.72f;
			
				case 5:
					return -5429.492f, -3655.095f, -20f;
			
				case 6:
					return -5429.492f, -3653.61f, -20f;
			
				default:
					break;
			}
			break;
	
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
	
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return 1772.3322f, -1360.1538f, 44.1704f;
			
				default:
					break;
			}
			break;
	
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return -3714.425f, -3602.4197f, 45.4395f;
			
				case 1:
					return -3712.339f, -3602.5674f, 44.9224f;
			
				case 2:
					return -3716.8152f, -3604.6436f, 44.6678f;
			
				case 3:
					return -3716.1108f, -3602.8372f, 46.7136f;
			
				default:
					break;
			}
			break;
	
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 2518.0403f, 564.7737f, 70.937f;
			
				case 1:
					return 2519.4395f, 562.9084f, 70.9917f;
			
				default:
					break;
			}
			break;
	
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -1330.8396f, -88.9414f, 97.5094f;
			
				case 1:
					return -1332.3485f, -87.4579f, 97.4614f;
			
				case 2:
					return -1330.415f, -89.829f, 97.5879f;
			
				default:
					break;
			}
			break;
	
		case -1714262909:
			switch (iParam1)
			{
				case 0:
					return 1763.5352f, -560.0701f, 46.6156f;
			
				default:
					break;
			}
			break;
	
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return -3815.8486f, -2982.6787f, -5.7608f;
			
				default:
					break;
			}
			break;
	
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -2261.6797f, -1433.0485f, 138.7403f;
			
				case 1:
					return -2261.0876f, -1434.1469f, 138.5787f;
			
				case 2:
					return -2261.8516f, -1433.8816f, 138.6091f;
			
				case 3:
					return -2261.2437f, -1434.466f, 138.7101f;
			
				case 4:
					return -2261.0251f, -1432.5792f, 138.68f;
			
				case 5:
					return -2260.2712f, -1432.2428f, 138.9447f;
			
				case 6:
					return -2260.3787f, -1433.973f, 138.763f;
			
				case 7:
					return -2259.7717f, -1432.7788f, 138.7855f;
			
				case 8:
					return -2262.2822f, -1433.5358f, 138.7945f;
			
				case 9:
					return -2259.818f, -1433.1466f, 138.9421f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 368.6882f, -13.6098f, 108.217f;
			
				default:
					break;
			}
			break;
	
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return 546.5995f, 1794.0698f, 127.9608f;
			
				default:
					break;
			}
			break;
	
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return -1497.5576f, 1251.0742f, 313.1244f;
			
				default:
					break;
			}
			break;
	
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -4859.858f, -2421.9177f, 7.61f;
			
				case 1:
					return -4757.666f, -2424.231f, 8.0423f;
			
				case 2:
					return -4756.033f, -2420.0654f, 7.9381f;
			
				case 3:
					return -4757.72f, -2419.8633f, 7.8109f;
			
				default:
					break;
			}
			break;
	
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return 1245.7878f, 1152.984f, 151.5137f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 1122.5823f, 430.9633f, 96.2455f;
			
				case 1:
					return 1123.0244f, 430.963f, 95.7573f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -2905.7234f, -254.32f, 186.8714f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -1413.2656f, -2671.2883f, 41.17608f;
			
				case 1:
					return -1411.035f, -2671.6606f, 41.17608f;
			
				case 2:
					return -1411.4077f, -2672.6343f, 41.1746f;
			
				case 3:
					return -1413.0476f, -2671.5952f, 41.1746f;
			
				case 4:
					return -1412.8229f, -2670.6716f, 41.1746f;
			
				case 5:
					return -1412.741f, -2672.306f, 41.1746f;
			
				case 6:
					return -1413.7445f, -2671.5854f, 41.1746f;
			
				case 7:
					return -1412.5579f, -2671.8035f, 41.1746f;
			
				case 8:
					return -1412.0878f, -2671.9565f, 41.1746f;
			
				case 9:
					return -1412.3375f, -2671.5173f, 41.1746f;
			
				default:
					break;
			}
			break;
	
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 1750.49f, -2091.79f, 40.94f;
			
				default:
					break;
			}
			break;
	
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 1026.0779f, 1575.4331f, 360.6882f;
			
				case 1:
					return 1080.5111f, 1659.4072f, 372.3716f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 1141.4628f, 763.3734f, 95.371f;
			
				default:
					break;
			}
			break;
	
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return -328.35f, -147.69f, 52.62f;
			
				case 1:
					return -328.35f, -147.69f, 52.62f;
			
				default:
					break;
			}
			break;
	
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_132())
						return 792.7722f, 1776.5087f, 281.5611f;
					else if (func_133())
						return 794.3322f, 1778.0117f, 280.3784f;
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return -2366.9363f, 124.0762f, 216.8527f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return -6314.9263f, -3466.9836f, -10.575f;
			
				default:
					break;
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -1741.3395f, -1624.2451f, 89.9356f;
			
				case 1:
					return -1755.5178f, -1624.0256f, 90.635f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return -2339.8865f, -2176.59f, 71.4468f;
			
				case 1:
					return -2337.0237f, -2179.8538f, 71.9464f;
			
				case 2:
					return -2343.9966f, -2181.4272f, 70.977f;
			
				default:
					break;
			}
			break;
	
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return -2222.4612f, -618.8527f, 135.3655f;
			
				case 1:
					return -2222.7349f, -616.4194f, 135.0682f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -3339.9531f, -2500.892f, 1.8466f;
			
				default:
					break;
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 1217.047f, 2002.6802f, 319.2006f;
			
				default:
					break;
			}
			break;
	
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return 2023.15f, -1708.104f, 40.5575f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return 2476.0276f, 1996.1902f, 168.2534f;
			
				case 1:
					return 2475.0493f, 1998.0735f, 168.2685f;
			
				case 2:
					return 2474.894f, 1999.3157f, 168.2582f;
			
				default:
					break;
			}
			break;
	
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return 894.7463f, -1969.9146f, 44.5785f;
			
				case 1:
					return 1047.9557f, -1880.6714f, 45.402f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 1593.3698f, -1769.1144f, 51.5788f;
			
				default:
					break;
			}
			break;
	
		case 1982045664:
			switch (iParam1)
			{
				case 0:
					return -2532.369f, 1173.3088f, 225.1319f;
			
				default:
					break;
			}
			break;
	
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -2334.939f, 903.981f, 157.7555f;
			
				case 1:
					return -2334.179f, 904.0247f, 157.8905f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_132() // Position - 0xE208 Hash - 0x18690106 ^0x764E08E6
{
	if (func_135(932909855))
		return true;

	return false;
}

BOOL func_133() // Position - 0xE221 Hash - 0x18690106 ^0xE41C0B15
{
	if (func_135(2051822093))
		return true;

	return false;
}

int func_134() // Position - 0xE23A Hash - 0x7FD12804 ^0x76269BD
{
	return Global_0.f_7;
}

BOOL func_135(int iParam0) // Position - 0xE247 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_320(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_136(int iParam0) // Position - 0xE296 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_92() != -1)
		return false;

	if (!func_321(iParam0))
		return false;

	return func_130(Global_1347702[iParam0 /*49*/].f_15);
}

void func_137(var uParam0) // Position - 0xE2C6 Hash - 0xF33098CE ^0xB1E4ED9A
{
	Vector3 scenarioPointCoords;
	Vector3 vector;
	float num;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_41))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
			scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true) };
	
		_IS_NULL_VECTOR(scenarioPointCoords);
		num = { 2f, 2f, 3f };
		vector = { 0f, 0f, 0f };
	
		if (*uParam0 == -654238687 || *uParam0 == -2008558277 || *uParam0 == -415839138)
		{
			if (*uParam0 == -654238687)
			{
				scenarioPointCoords = { -1412.4027f, -2671.5422f, 42.064243f };
				vector = { 0f, 0f, 24.67129f };
				num = { 3.836484f, 5.953217f, 4.016988f };
			}
			else if (*uParam0 == -2008558277)
			{
				scenarioPointCoords = { -5424.684f, -3654.1492f, -20.720062f };
				vector = { 0f, 0f, 0f };
				num = { 24.416193f, 14.685223f, 8.667062f };
			}
			else if (*uParam0 == -415839138)
			{
				scenarioPointCoords = { 1025.9437f, 1574.2576f, 361.924f };
				vector = { 0f, 0f, 0f };
				num = { 2.515867f, 3f, 3.65f };
			}
		
			volLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, func_322(uParam0));
		}
		else
		{
			if (*uParam0 == -35775921)
			{
				num = 10f * 2f;
				num.f_1 = 10f * 2f;
				num.f_2 = 10f * 3f;
			}
		
			volLocal_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, func_322(uParam0));
		}
	}

	if (*uParam0 == -654238687 || *uParam0 == 1861313914 || *uParam0 == -35775921)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(volLocal_42))
		{
			if (*uParam0 == -654238687)
			{
				num = { 1.267693f, 1.436306f, 4.016988f };
				volLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, "DISC_VOL_CABIN_WANDER");
			}
			else if (*uParam0 == 1861313914)
			{
				if (func_16(59))
				{
					scenarioPointCoords = { 895.62854f, -1968.1277f, 43.71555f };
					vector = { 0f, 0f, -37.38475f };
					num = { 1.309918f, 1.509376f, 4.169786f };
				}
				else
				{
					scenarioPointCoords = { 895.55005f, -1968.0679f, 43.71555f };
					vector = { 0f, 0f, -37.38475f };
					num = { 3f, 1.509376f, 4.169786f };
				}
			
				volLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, "DISC_VOL_BRAITH_ENTER");
			}
			else if (*uParam0 == -35775921)
			{
				scenarioPointCoords = { 1158.4265f, 696.2158f, 96.653656f };
				vector = { 0f, 0f, 0f };
				num = { 98.8934f, 94.774994f, 52.648304f };
				volLocal_42 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, "DISC_VOL_SHEEP_WANDER");
			}
		}
	
		if (!VOLUME::DOES_VOLUME_EXIST(volLocal_43) && *uParam0 == 1861313914)
		{
			scenarioPointCoords = { 895.55005f, -1968.0679f, 43.71555f };
			vector = { 0f, 0f, 0f };
			num = { 3f, 3f, 4f };
			volLocal_43 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(scenarioPointCoords, vector, num, "DISC_VOL_BRAITH_AVOID");
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(volLocal_43, 15);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volLocal_43, 2238463, 0, 0, -1, -1, 10);
			PED::_ADD_PED_STAY_OUT_VOLUME(Global_1935630.f_40, volLocal_43);
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1935630.f_40, 1);
		}
	}

	return;
}

void func_138(var uParam0) // Position - 0xE608 Hash - 0x374BB0F0 ^0x9A565154
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		uLocal_63.f_12[i] = 0;
	}

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		uLocal_157.f_6[i] = 0;
	}

	switch (*uParam0)
	{
		case -2008558277:
			uLocal_63.f_12[0] = joaat("a_c_bat_01");
			uLocal_63.f_12[1] = joaat("a_c_bat_01");
			uLocal_63.f_12[2] = joaat("a_c_bat_01");
			uLocal_63.f_12[3] = joaat("a_c_bat_01");
			uLocal_63.f_12[4] = joaat("a_c_bat_01");
			uLocal_63.f_12[5] = joaat("a_c_bat_01");
			uLocal_63.f_12[6] = joaat("a_c_bat_01");
			break;
	
		case -654238687:
			uLocal_63.f_12[0] = joaat("a_c_rat_01");
			uLocal_63.f_12[1] = joaat("a_c_rat_01");
			uLocal_63.f_12[2] = joaat("a_c_rat_01");
			uLocal_63.f_12[3] = joaat("a_c_rat_01");
			uLocal_63.f_12[4] = joaat("a_c_rat_01");
			uLocal_63.f_12[5] = joaat("a_c_rat_01");
			uLocal_63.f_12[6] = joaat("a_c_rat_01");
			uLocal_63.f_12[7] = joaat("a_c_rat_01");
			uLocal_63.f_12[8] = joaat("a_c_rat_01");
			uLocal_63.f_12[9] = joaat("a_c_rat_01");
			uLocal_157.f_6[0] = joaat("s_fertilitystatue01x");
			break;
	
		case -415839138:
			uLocal_63.f_12[0] = joaat("cs_meditatingmonk");
			break;
	
		case -35775921:
			uLocal_63.f_12[0] = joaat("a_c_sheep_01");
			uLocal_157.f_6[0] = joaat("s_inv_ring02x");
			break;
	
		case 1861313914:
			uLocal_63.f_12[0] = joaat("u_f_y_braithwaitessecret_01");
			break;
	
		default:
			break;
	}

	return;
}

void func_139(var uParam0) // Position - 0xE78E Hash - 0xBD78166A ^0xF91DF9E4
{
	if (*uParam0 == -654238687 || *uParam0 == -2008558277 || *uParam0 == -35775921)
		func_323(&uLocal_31);

	return;
}

void func_140(var uParam0) // Position - 0xE7C6 Hash - 0x850C362E ^0x961894A3
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (!(uParam0->f_12[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_12[i], false);
	}

	return;
}

void func_141(var uParam0) // Position - 0xE7FE Hash - 0x9AA4BC18 ^0xA0A1D8E6
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::REQUEST_MODEL(uParam0->f_6[i], false);
	}

	return;
}

void func_142(var uParam0, var uParam1, int iParam2) // Position - 0xE835 Hash - 0xD0CDAD4 ^0xD0CDAD4
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		func_324(uParam0, uParam1, i, iParam2);
	}

	return;
}

void func_143(var uParam0) // Position - 0xE85D Hash - 0x920DD344 ^0x87BBE6F7
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_325(uParam0)))
		HUD::TEXT_BLOCK_REQUEST(func_325(uParam0));

	return;
}

BOOL func_144(var uParam0) // Position - 0xE880 Hash - 0xFEA95FCC ^0xFE4D4D69
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (!(uParam0->f_12[i] == 0))
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12[i]))
				return false;
	}

	return true;
}

BOOL func_145(var uParam0) // Position - 0xE8C0 Hash - 0x52DB4BA7 ^0x53C69E64
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_6[i]))
				return false;
	}

	return true;
}

BOOL func_146(var uParam0, var uParam1) // Position - 0xE8FF Hash - 0x1AFE125E ^0xB1E3C66A
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_284(uParam0, i, 2, 0)))
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam1->[i], true, false))
				return false;
	}

	return true;
}

BOOL func_147(var uParam0) // Position - 0xE942 Hash - 0x1950D858 ^0x5F86A37E
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_325(uParam0)))
		if (!HUD::TEXT_BLOCK_IS_LOADED(func_325(uParam0)))
			return false;

	return true;
}

BOOL func_148(int iParam0, int iParam1) // Position - 0xE96D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_149(var uParam0, int iParam1) // Position - 0xE97C Hash - 0x2812C2B5 ^0x2812C2B5
{
	switch (*uParam0)
	{
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					return 175.4f;
			
				default:
					break;
			}
			break;
	
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					return 186.76f;
			
				default:
					break;
			}
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case -2008558277:
			switch (iParam1)
			{
				case 0:
					return -90f;
			
				case 1:
					return -90f;
			
				case 2:
					return -90f;
			
				case 3:
					return -90f;
			
				case 4:
					return -90f;
			
				case 5:
					return 90f;
			
				case 6:
					return 90f;
			
				default:
					break;
			}
			break;
	
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1481450947:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 464413478:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
	
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					return -99.19f;
			
				default:
					break;
			}
			break;
	
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					return 59.57f;
			
				case 1:
					return 180f;
			
				case 2:
					return 180f;
			
				case 3:
					return -170.06f;
			
				default:
					break;
			}
			break;
	
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					return 142.69f;
			
				case 1:
					return 165.69f;
			
				default:
					break;
			}
			break;
	
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					return -2.39f;
			
				case 1:
					return -38.07f;
			
				case 2:
					return -132.4f;
			
				default:
					break;
			}
			break;
	
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					return 132.16f;
			
				default:
					break;
			}
			break;
	
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					return -98.66f;
			
				case 1:
					return 3.79f;
			
				case 2:
					return -93.21f;
			
				case 3:
					return -72.99f;
			
				case 4:
					return 130.68f;
			
				case 5:
					return 117.29f;
			
				case 6:
					return -133f;
			
				case 7:
					return -86.34f;
			
				case 8:
					return 93.9f;
			
				case 9:
					return 110.42f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return -174f;
			
				default:
					break;
			}
			break;
	
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					return -86.12f;
			
				default:
					break;
			}
			break;
	
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					return 150.68f;
			
				default:
					break;
			}
			break;
	
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					return -167.58f;
			
				case 1:
					return 0f;
			
				case 2:
					return 117.57f;
			
				case 3:
					return 179.95f;
			
				default:
					break;
			}
			break;
	
		case -920971071:
			switch (iParam1)
			{
				case 0:
					return -26.24f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return -12.03f;
			
				case 1:
					return -22.89f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return -90.47f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return -96.76f;
			
				case 1:
					return 120.75f;
			
				case 2:
					return 0f;
			
				case 3:
					return 30f;
			
				case 4:
					return 60f;
			
				case 5:
					return -15f;
			
				case 6:
					return -30f;
			
				case 7:
					return -60f;
			
				case 8:
					return -120f;
			
				case 9:
					return 15f;
			
				default:
					break;
			}
			break;
	
		case -641229542:
			switch (iParam1)
			{
				case 0:
					return 162.86f;
			
				default:
					break;
			}
			break;
	
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return 175f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case 149709049:
			switch (iParam1)
			{
				case 0:
					return 0f;
			
				case 1:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case 404434344:
			switch (iParam1)
			{
				case 0:
					if (func_132())
						return 275f;
					else if (func_133())
						return 275f;
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 72.28f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 180f;
			
				default:
					break;
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					return -115.63f;
			
				case 1:
					return 280.0316f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
			
				case 1:
					return -97.7f;
			
				case 2:
					return 130.42f;
			
				default:
					break;
			}
			break;
	
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					return 165.69f;
			
				case 1:
					return 0f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return -90f;
			
				default:
					break;
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 349.2461f;
			
				default:
					break;
			}
			break;
	
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					return -75.35f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -19.53f;
			
				case 1:
					return 133.99f;
			
				case 2:
					return -105.95f;
			
				default:
					break;
			}
			break;
	
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return -38.1f;
			
				case 1:
					return 56.97f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return 43.65f;
			
				default:
					break;
			}
			break;
	
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					return -46.21f;
			
				case 1:
					return 135.66f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f;
}

void func_150(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0xF133 Hash - 0xBBE089D0 ^0x2BB4D4C4
{
	if (!(uParam0->f_12[iParam5] == 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam5]))
		{
			uParam0->f_1[iParam5] = func_326(uParam0->f_12[iParam5], uParam1, fParam4, true, true, 0, false, false, true, false, false, false, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1[iParam5]))
			{
				if (bParam6)
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam0->f_1[iParam5], false);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1[iParam5], true);
				TASK::TASK_STAND_STILL(uParam0->f_1[iParam5], -1);
			
				if (!bParam7)
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1[iParam5], false);
			
				*uParam0 = *uParam0 + 1;
			}
		}
		else
		{
			*uParam0 = *uParam0 + 1;
		}
	}
	else
	{
		*uParam0 = *uParam0 + 1;
	}

	return;
}

BOOL func_151(var uParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xF1EB Hash - 0x1302121 ^0x1302121
{
	if (bParam3)
	{
		while (*uParam1 < 10)
		{
			func_150(uParam1, func_131(uParam0, *uParam1), func_149(uParam0, *uParam1), *uParam1, bParam4, bParam5);
		}
	
		func_327(uParam2, 2);
		return true;
	}
	else
	{
		switch (*uParam2)
		{
			case 0:
				func_327(uParam2, 1);
				break;
		
			case 1:
				if (*uParam1 < 10)
					func_150(uParam1, func_131(uParam0, *uParam1), func_149(uParam0, *uParam1), *uParam1, bParam4, bParam5);
				else
					func_327(uParam2, 2);
				break;
		
			case 2:
				return true;
		}
	}

	return false;
}

Hash func_152(var uParam0, int iParam1) // Position - 0xF291 Hash - 0xF7816304 ^0x3D85D54C
{
	switch (*uParam0)
	{
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return joaat("META_OUTFIT_DEFAULT");
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return -314862125;
			
				default:
					break;
			}
			break;
	
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					return joaat("META_OUTFIT_DEFAULT");
			
				case 1:
					return 1689938120;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return joaat("META_OUTFIT_DEFAULT");
}

void func_153(Ped pedParam0, Hash hParam1) // Position - 0xF315 Hash - 0xEA1C858E ^0x4CB8B4
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_328(pedParam0, hParam1))
		{
			if (func_329(pedParam0, hParam1))
			{
				if (func_330(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_331(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

Any func_154(Volume volParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xF3BF Hash - 0xDFB996B4 ^0xC287A71C
{
	Any any;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return any;

	func_332(volParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(volParam0, iParam3, 0, 0, -1, -1, 2);
	any = PED::_ADD_SCENARIO_BLOCKING_VOLUME(volParam0, bParam2, 15);
	return any;
}

void func_155(var uParam0, Ped pedParam1, char* sParam2, BOOL bParam3) // Position - 0xF406 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_333(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

Hash func_156(var uParam0, int iParam1) // Position - 0xF463 Hash - 0x233B4ECF ^0x1622A0CE
{
	switch (*uParam0)
	{
		case -2008558277:
			return joaat("world_animal_bat_hanging");
	
		case -1887999095:
			return joaat("world_player_inspect_letter_80cm_paper_w15_1_h24_foldvertical_p_cs_letter03x");
	
		case -1859413640:
			return joaat("RANSACK_VOLUME_NARROW_0m5_0m5_2m0");
	
		case -1481450947:
			return joaat("ransack_reach_over_volume_narrow_0m5_0m5_2m0");
	
		case -1427565340:
			return joaat("RANSACK_REACH_OVER_VOLUME_0m8_0m5_2m0");
	
		case -161804536:
			return joaat("ransack_volume_0m8_0m5_2m0");
	
		case -35775921:
			return joaat("RANSACK_REACH_OVER_CENTERED_GROUND_PICKUP");
	
		case 247563739:
			return joaat("prop_player_lns_floor_stash");
	
		case 513110082:
			return joaat("RANSACK_ATTACHED_CHEST_MEDIUM_OPEN_ONLY");
	
		case 733338689:
			return joaat("world_player_pickup_weapon_melee_hatchet_viking");
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return joaat("world_player_pickup_weapon_melee_hatchet_double_bit");
			
				case 1:
					return joaat("world_player_pickup_weapon_melee_hatchet_hewing");
			
				case 2:
					return joaat("world_player_pickup_weapon_melee_hatchet_hunter");
			
				case 3:
					return joaat("world_player_pickup_weapon_melee_hatchet_double_bit_rusted");
			
				case 4:
					return joaat("world_player_pickup_weapon_melee_hatchet_hunter_rusted");
			
				default:
				
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return joaat("world_player_inspect_letter_80cm_paper_w15_1_h24_foldvertical_p_cs_letter03x");
			
				default:
					break;
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return joaat("world_player_drink_witches_brew");
			
				case 1:
					return joaat("world_player_sleep_ground");
			}
			break;
	
		case 2000209669:
			return joaat("RANSACK_STRANGE_STATUES_STASH");
	
		case 2072029413:
			return joaat("world_player_pickup_weapon_thrown_tomahawk_ancient");
	
		case 2135153015:
			return joaat("RANSACK_REACH_OVER_GENERIC_LETTER_PROMPT_0m5_0m5_2m0");
	}

	return 0;
}

void func_157(Ped pedParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, int iParam6, BOOL bParam7, BOOL bParam8, const char* sParam9, int iParam10) // Position - 0xF5EF Hash - 0xFE770A83 ^0xBFD078B3
{
	TASK::TASK_START_SCENARIO_AT_POSITION(pedParam0, hParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, iParam10, false);
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
Vector3 func_158(var uParam0, int iParam1) // Position - 0xF610 Hash - 0xBC832975 ^0xBC832975
{
	switch (*uParam0)
	{
		case -2108030724:
		case -2060865802:
		case -2008558277:
		case -1891628345:
		case -1887999095:
		case -1841331114:
		case -1829339703:
		case -1824429070:
		case -1761189332:
		case -1714262909:
		case -1636964661:
		case -1494823099:
		case -1287911066:
		case -1272862985:
		case -1240932004:
		case -1177787273:
		case -968854939:
		case -641229542:
		case -599506500:
		case -499529359:
		case -415839138:
		case -357364973:
		case -261997819:
		case -30872859:
		case 149709049:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 657666087:
		case 683269210:
		case 870958936:
		case 1187689415:
		case 1187917501:
		case 1284679164:
		case 1424723727:
		case 1464664327:
		case 1505050944:
		case 1535254161:
		case 1861313914:
		case 2072029413:
		case 2072069278:
			break;
	
		case -2009137002:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1859413640:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1481450947:
			switch (iParam1)
			{
				case 0:
					return 5f, 0f, 213f;
			
				default:
					break;
			}
			break;
	
		case -1427565340:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
			
				case 1:
					return 20f, 88.84f, -94.66f;
			
				default:
					break;
			}
			break;
	
		case -1420566543:
			switch (iParam1)
			{
				case 0:
					return -10f, 0f, 33f;
			
				default:
					break;
			}
			break;
	
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 155f;
			
				case 1:
					return 0f, 0f, 0f;
			
				case 2:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1208846034:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -1144800837:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -55f;
			
				default:
					break;
			}
			break;
	
		case -1061274876:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 12f;
			
				case 1:
					return 180f, 0f, 108f;
			
				case 2:
					return 180f, 0f, 208f;
			
				case 3:
					return 0f, 0f, 30f;
			
				case 4:
					return 180f, 0f, 35f;
			
				default:
					break;
			}
			break;
	
		case -780455182:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -48f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -763376358:
			switch (iParam1)
			{
				case 0:
					return 65f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					return 30f, 5f, 99f;
			
				default:
					break;
			}
			break;
	
		case -709811179:
			switch (iParam1)
			{
				case 0:
					return 90f, 0f, 105f;
			
				default:
					break;
			}
			break;
	
		case -654238687:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 116f;
			
				default:
					break;
			}
			break;
	
		case -161804536:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -35775921:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case -657632:
			switch (iParam1)
			{
				case 0:
					return 1.24f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 118535038:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				case 2:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 373034311:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 121.94f;
			
				default:
					break;
			}
			break;
	
		case 464413478:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 513110082:
			if (uParam0->f_4 == 0)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -45f;
				
					default:
						goto 0x544;
				}
			}
			else if (uParam0->f_4 == 1)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -110f;
				
					default:
						goto 0x544;
				}
			}
			else if (uParam0->f_4 == 2)
			{
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -49.418f;
				
					case 1:
						return 0f, 0f, -33.718f;
				
					case 2:
						return 0f, 0f, -26.718f;
				
					case 3:
						return 0f, 0f, -41.7187f;
				
					case 4:
						return 0f, 0f, -33.718f;
				
					default:
						break;
				}
			}
			break;
	
		case 733338689:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -144.36f;
			
				default:
					break;
			}
			break;
	
		case 939555152:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1048086072:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1124200691:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -35.981f;
			
				default:
					break;
			}
			break;
	
		case 1335921989:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				default:
					break;
			}
			break;
	
		case 1347913620:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		case 1490223565:
			switch (iParam1)
			{
				case 0:
					return 25f, 0f, -75f;
			
				default:
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					return -90f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		case 1801731633:
			switch (iParam1)
			{
				case 0:
					return 15f, 0f, -42f;
			
				default:
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					return -10f, 90f, 30f;
			
				default:
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 169f;
			
				case 1:
					return 0f, 0f, 169f;
			
				case 2:
					return 0f, 0f, 169f;
			
				default:
					break;
			}
			break;
	
		case 2134589549:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, -95f;
			
				default:
					break;
			}
			break;
	
		case 2135153015:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
			
				case 1:
					return 0f, 0f, 90f;
			
				default:
					break;
			}
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

BOOL func_159(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, int iParam7) // Position - 0xFDD8 Hash - 0x2981E208 ^0x38DC5A47
{
	if (!(uParam0->f_6[iParam7] == 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[iParam7]))
		{
			uParam0->[iParam7] = OBJECT::CREATE_OBJECT(uParam0->f_6[iParam7], vParam1, true, true, false, false, true);
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->[iParam7]))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->[iParam7], vParam1, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->[iParam7], vParam4, 2, true);
			}
			else
			{
				return false;
			}
		}
	}

	return true;
}

void func_160(var uParam0) // Position - 0xFE52 Hash - 0x9D0D5EB4 ^0x8A62E45F
{
	int i;

	if (*uParam0 == 1861313914)
	{
		if (VOLUME::DOES_VOLUME_EXIST(volLocal_41))
			if (!func_33(uLocal_48[0]))
				if (func_16(59))
					uLocal_48[0] = func_334("PEEK_DOOR", joaat("INPUT_CONTEXT_LT"), volLocal_42, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false);
				else
					uLocal_48[0] = func_334("PEEK_DOOR", joaat("INPUT_CONTEXT_LT"), volLocal_41, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false);
	}
	else if (*uParam0 == -415839138)
	{
		for (i = 0; i <= 2 - 1; i = i + 1)
		{
			if (!func_33(uLocal_48[i]))
			{
				if (i == 0)
				{
					uLocal_48[i] = func_102("INTERACT_GREET", joaat("INPUT_CONTEXT_X"), Global_35, 2, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_336(uLocal_48[i], uLocal_63.f_1[0], func_335(uParam0));
				}
				else if (i == 1)
				{
					uLocal_48[i] = func_102("INTERACT_INSULT", joaat("INPUT_CONTEXT_B"), Global_35, 2, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
					func_336(uLocal_48[i], uLocal_63.f_1[0], func_335(uParam0));
				}
			}
		}
	}

	return;
}

void func_161(Ped pedParam0, BOOL bParam1) // Position - 0xFFB6 Hash - 0x5C2948FB ^0x7A2CD5D4
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (bParam1)
			PED::SET_PED_CONFIG_FLAG(pedParam0, 263, !bParam1);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 488, bParam1);
	}

	return;
}

Vector3 func_162(var uParam0) // Position - 0xFFEE Hash - 0x458FB8DE ^0x458FB8DE
{
	switch (*uParam0)
	{
		case -35775921:
			return -0.04f, 0.189f, 0f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_163(var uParam0) // Position - 0x1001A Hash - 0xA8181F9D ^0xA8181F9D
{
	switch (*uParam0)
	{
		case -35775921:
			return 0f, 0f, 90f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_164(var uParam0, var uParam1, int iParam2) // Position - 0x10041 Hash - 0x276FCB4E ^0xFCAFCBF2
{
	if (!(*uParam1 == -1))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				func_337(uParam0, uParam1, iParam2);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
		}
	}

	return;
}

void func_165(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1007F Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_25(&(uParam0->f_1));

	return;
}

void func_166(Ped* ppedParam0, BOOL bParam1) // Position - 0x10099 Hash - 0x7E90C208 ^0xFFD66E48
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*ppedParam0))
			return;
	
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*ppedParam0, false))
			return;
	
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
		}
		else
		{
			!ENTITY::IS_ENTITY_DEAD(*ppedParam0) && PED::IS_PED_IN_ANY_VEHICLE(*ppedParam0, true);
			PED::DELETE_PED(ppedParam0);
		}
	}

	return;
}

void func_167(var uParam0, int iParam1, BOOL bParam2) // Position - 0x100F3 Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_25(&(uParam0->f_1));

	return;
}

BOOL func_168(int iParam0, BOOL bParam1) // Position - 0x1010D Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_33(iParam0))
		return false;

	return !func_302(iParam0, 4);
}

void func_169(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10132 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_33(iParam0))
		return;

	num = func_105(iParam0);

	if (bParam1)
	{
		func_338(iParam0, 4);
		func_106(num, true);
		func_339(num, true);
	}
	else
	{
		func_340(iParam0, 4);
		func_339(num, false);
	}

	return;
}

void func_170(var uParam0, char* sParam1, BOOL bParam2) // Position - 0x10181 Hash - 0xD20EEF74 ^0x6A2CEFED
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam1))
					ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);

	return;
}

void func_171(var uParam0, char* sParam1) // Position - 0x101CD Hash - 0xA5BD55B2 ^0x32ED83B4
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam0, sParam1))
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);

	return;
}

float func_172(var uParam0) // Position - 0x101EE Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_24(uParam0))
		return uParam0->f_1;

	if (func_97(uParam0))
		return uParam0->f_2;

	return func_291() - uParam0->f_1;
}

void func_173(var uParam0, char* sParam1) // Position - 0x10223 Hash - 0xFAFD3C4D ^0x5D87C9FD
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam0, sParam1))
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(*uParam0, sParam1))
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1, true);

	return;
}

void func_174(var uParam0, char* sParam1) // Position - 0x1028B Hash - 0xA5BD55B2 ^0x5E9CF896
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam0, sParam1))
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);

	return;
}

BOOL func_175(Ped pedParam0, Entity eParam1, int iParam2, var uParam3, int iParam4, int iParam5) // Position - 0x102AC Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > iParam2->f_5)
		func_341(iParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			iParam2->f_12 = iParam5;
		else
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(iParam2->f_1 & 128 != 0))
		{
			if (func_342(pedParam0, iParam2))
			{
				*uParam3 = 128;
				func_343(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(iParam2->f_1 & 8 != 0))
			{
				if (func_344(pedParam0, iParam2))
				{
					*uParam3 = 8;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
				else if (func_345(pedParam0, eParam1, iParam2))
				{
					*uParam3 = 8;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		
			if (*iParam2 & 32 != 0)
			{
				if (func_346(pedParam0, iParam2))
				{
					*uParam3 = 64;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_347(PLAYER::PLAYER_ID(), false, true, iParam2->f_1 & 524288 == 0))
		{
			if (!(iParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_343(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_348(iParam2, 1065353216))
			{
				if (!(iParam2->f_1 & 4 != 0))
				{
					if (func_349(Global_35, pedParam0, iParam2))
					{
						*uParam3 = 4;
						func_343(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			
				if (!(iParam2->f_1 & 256 != 0))
				{
					if (func_350(Global_35, pedParam0, iParam2))
					{
						*uParam3 = 256;
						func_343(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 16 != 0))
		{
			if (iParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_351(Global_35, pedParam0, iParam2, false))
				{
					*uParam3 = 16;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
			else if (func_351(Global_35, pedParam0, iParam2, true))
			{
				*uParam3 = 16;
				func_343(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_352(pedParam0, iParam2))
				{
					*uParam3 = 32;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_353(&pedParam0, iParam2))
				{
					*uParam3 = 4096;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(iParam2->f_1 & 2 != 0))
			{
				if (func_354(iParam2, 4000))
				{
					if (func_355(pedParam0, Global_1935630.f_41, *iParam2 & 128 != 0, false, *iParam2 & 256 != 0) && func_356(iParam2, pedParam0) && func_357(iParam2, pedParam0))
					{
						*uParam3 = 2;
						func_343(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 2 != 0))
		{
			if (iParam2->f_12 < 4f)
			{
				if (func_355(pedParam0, Global_1935630.f_41, *iParam2 & 128 != 0, true, *iParam2 & 256 != 0) && func_356(iParam2, pedParam0) && func_357(iParam2, pedParam0))
				{
					*uParam3 = 2;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_358(pedParam0, Global_1935630.f_41))
							{
								func_359();
								*uParam3 = 2;
								func_343(pedParam0, iParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_358(pedParam0, Global_1935630.f_41))
						{
							func_359();
							*uParam3 = 2;
							func_343(pedParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (iParam2->f_12 < 10f)
			{
				if (func_360(iParam2, pedParam0) || iParam2->f_9 > 0 && func_98() - iParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_359();
						*uParam3 = 2;
						func_343(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_361())
					{
						if (func_358(pedParam0, Global_1935630.f_42))
						{
							func_359();
							*uParam3 = 2;
							func_343(pedParam0, iParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(iParam2->f_1 & 1024 != 0))
		{
			if (func_362(iParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_343(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!(iParam2->f_1 & 2048 != 0))
			{
				if (func_363(pedParam0, eParam1, iParam2))
				{
					*uParam3 = 2048;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_364(pedParam0, iParam2))
					{
						*uParam3 = 8192;
						func_343(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*iParam2 & 64 != 0)
			{
				if (func_365(pedParam0, iParam2))
				{
					*uParam3 = 32768;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_366(iParam2, 4000))
				{
					if (func_367(&pedParam0, iParam2))
					{
						*uParam3 = 512;
						func_343(pedParam0, iParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_368(pedParam0, iParam2))
				{
					*uParam3 = 65536;
					iParam2->f_4 = 0;
					func_343(pedParam0, iParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(iParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_369(iParam2, pedParam0))
			{
				*uParam3 = 1;
				func_343(pedParam0, iParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_176(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0x108D5 Hash - 0x2A16F6D7 ^0x5622F5A8
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (func_370(vParam1, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, 0f, iParam5, 0f), ENTITY::GET_ENTITY_COORDS(pedParam0, true, false)))
		return false;

	return true;
}

Vector3 func_177(var uParam0, int iParam1) // Position - 0x10913 Hash - 0xAF22EF00 ^0xAF22EF00
{
	switch (*uParam0)
	{
		case 1861313914:
			if (iParam1 == 0)
				return 895.5682f, -1967.8938f, 44.1192f;
			else if (iParam1 == 1)
				return 896.0502f, -1968.5531f, 44.1192f;
			else if (iParam1 == 2)
				return 894.9471f, -1967.7356f, 44.1192f;
			break;
	
		default:
			break;
	}

	return 0f, 0f, 0f;
}

void func_178(int iParam0) // Position - 0x10981 Hash - 0xD2F4094 ^0xD2F4094
{
	func_371(iParam0, false);
	func_372(iParam0, false);
	func_373(iParam0, true);
	func_374(iParam0, true);
	func_375(iParam0, false);
	func_376(iParam0, true);
	func_377(iParam0, true, true, true);
	return;
}

BOOL func_179(var uParam0) // Position - 0x109BC Hash - 0xE1CB354E ^0x8E87C962
{
	Entity outEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &outEntity, false, false))
		if (*uParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return true;

	return false;
}

BOOL func_180(int iParam0, BOOL bParam1) // Position - 0x109F3 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_33(iParam0))
		return false;

	num = func_105(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

BOOL func_181(BOOL bParam0) // Position - 0x10A26 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

void func_182(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10A34 Hash - 0x7990926B ^0xBD6909E0
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
	return;
}

BOOL func_183(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x10A46 Hash - 0x4863E989 ^0xB2E91EEF
{
	BOOL flag;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&uParam1))
		flag = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&uParam1);
	else
		flag = true;

	if (flag)
	{
		func_378(uParam1, uParam0);
	
		if (bParam6)
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
		else
			AUDIO::START_SCRIPT_CONVERSATION(&uParam1, true, true, bParam7);
	
		if (bParam4)
			AUDIO::_0x40CA665AB9D8D505(&uParam1, iParam5);
	}

	return flag;
}

BOOL func_184(Entity eParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x10AA0 Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(eParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

float func_185(var uParam0, int iParam1) // Position - 0x10AE8 Hash - 0xD3A9BFF5 ^0xD3A9BFF5
{
	switch (*uParam0)
	{
		case -1887999095:
			return 40f;
	
		case -1859413640:
			return -162.606f;
	
		case -1481450947:
			return 0f;
	
		case -1427565340:
			return -49.4f;
	
		case -161804536:
			return -160f;
	
		case 513110082:
			switch (iParam1)
			{
				case 0:
					return -173f;
			
				case 1:
					return 0f;
			
				case 2:
					return 0f;
			
				default:
				
			}
			break;
	
		case 733338689:
			return -5.848f;
	
		case 870958936:
			switch (iParam1)
			{
				case 0:
					return -156f;
			
				case 1:
					return -156f;
			
				case 2:
					return 20f;
			
				case 3:
					return -142.537f;
			
				case 4:
					return 30f;
			
				default:
				
			}
			break;
	
		case 1284679164:
			switch (iParam1)
			{
				case 0:
					return 108.929f;
			
				case 1:
					return -98.32f;
			
				case 2:
					return -76.119f;
			
				case 3:
					return -156.164f;
			
				default:
				
			}
			break;
	
		case 1464664327:
			switch (iParam1)
			{
				case 0:
					return 80.219f;
			
				case 1:
					return 103.5514f;
			}
			break;
	
		case 2000209669:
			return -13f;
	
		case 2072029413:
			return -155.926f;
	
		case 2135153015:
			return 3.97f;
	
		default:
			break;
	}

	return 0f;
}

int func_186(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x10C86 Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

char* func_187(var uParam0) // Position - 0x10CA0 Hash - 0x4625146B ^0x6A0EF326
{
	switch (*uParam0)
	{
		case -2008558277:
			return "WORLD_ANIMAL_BAT_HANGING";
	
		default:
		
	}

	return "";
}

Vector3 func_188(int iParam0) // Position - 0x10CC2 Hash - 0xD565AE61 ^0xD565AE61
{
	switch (iParam0)
	{
		case 0:
			return -5433.8f, -3654.5244f, -20.5f;
	
		case 1:
			return -5415.489f, -3653.3513f, -20.5f;
	
		case 2:
			return -5415.223f, -3655.0132f, -18.6317f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_189(var uParam0, BOOL bParam1, int iParam2) // Position - 0x10D20 Hash - 0xBF90281A ^0xFF588060
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1[iParam2]))
		if (bParam1)
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->f_1[iParam2]);
		else
			PED::DELETE_PED(&uParam0->f_1[iParam2]);

	return;
}

BOOL func_190(Ped pedParam0, float fParam1, int iParam2, int iParam3, int iParam4) // Position - 0x10D57 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_14(pedParam0, Global_36, true);

	if (iParam2 > 0f)
		if (num < iParam2)
			return true;

	if (num < fParam1)
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

void func_191(var uParam0, int iParam1, BOOL bParam2) // Position - 0x10DE0 Hash - 0x5D39ADC5 ^0x5540A452
{
	*uParam0 = iParam1;

	if (bParam2)
		func_25(&(uParam0->f_1));

	return;
}

BOOL func_192(int iParam0) // Position - 0x10DFA Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -2009137002:
		case -1960242214:
		case -1958832660:
		case -1891628345:
		case -1887999095:
		case -1787770845:
		case -1761189332:
		case -1646022773:
		case -1636964661:
		case -1614148516:
		case -1609238411:
		case -1505275983:
		case -1300082860:
		case -1287911066:
		case -1272862985:
		case -1243267511:
		case -1109016944:
		case -1053108445:
		case -986176781:
		case -979575591:
		case -849582265:
		case -780455182:
		case -739986731:
		case -709811179:
		case -607940493:
		case -415839138:
		case -232974724:
		case -161804536:
		case -148407339:
		case 58958195:
		case 247563739:
		case 308500632:
		case 429544447:
		case 657666087:
		case 921081956:
		case 1034793488:
		case 1284679164:
		case 1519228573:
		case 1535254161:
		case 1673499939:
		case 1734766691:
		case 1861313914:
		case 1982045664:
		case 1986618633:
		case 2000209669:
		case 2134589549:
			return true;
	}

	return false;
}

struct<2> func_193(int iParam0) // Position - 0x10F26 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_194(var uParam0, var uParam1, int iParam2) // Position - 0x10F36 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_195(int iParam0) // Position - 0x10F46 Hash - 0xDA84A767 ^0xDA84A767
{
	func_32(iParam0, 2);
	func_66(iParam0);
	return;
}

void func_196(var uParam0, Volume volParam1, BOOL bParam2) // Position - 0x10F5B Hash - 0x2EB65318 ^0x737362FB
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return;

	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(volParam1);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(volParam1);

	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*uParam0))
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);

	return;
}

void func_197() // Position - 0x10F93 Hash - 0x2924537F ^0x397A08E4
{
	func_174(&uLocal_31[0], "pbl_base_a");
	func_174(&uLocal_31[0], "pbl_base_b");
	func_174(&uLocal_31[0], "pbl_ba_lvl_1_l");
	func_174(&uLocal_31[0], "pbl_ba_lvl_1_r");
	func_174(&uLocal_31[0], "pbl_ba_lvl_2_l");
	func_174(&uLocal_31[0], "pbl_ba_lvl_2_r");
	func_174(&uLocal_31[0], "pbl_ba_lvl_3_l");
	func_174(&uLocal_31[0], "pbl_ba_lvl_3_r");
	func_174(&uLocal_31[0], "pbl_brkout_ba_on_l");
	func_174(&uLocal_31[0], "pbl_brkout_ba_on_r");
	func_174(&uLocal_31[0], "pbl_brkout_ba_on_n");
	func_174(&uLocal_31[0], "pbl_bb_lvl_1_l");
	func_174(&uLocal_31[0], "pbl_bb_lvl_1_r");
	func_174(&uLocal_31[0], "pbl_bb_lvl_2_l");
	func_174(&uLocal_31[0], "pbl_bb_lvl_2_r");
	func_174(&uLocal_31[0], "pbl_bb_lvl_3_l");
	func_174(&uLocal_31[0], "pbl_bb_lvl_3_r");
	func_174(&uLocal_31[0], "pbl_brkout_bb_on_l");
	func_174(&uLocal_31[0], "pbl_brkout_bb_on_r");
	func_174(&uLocal_31[0], "pbl_brkout_bb_on_n");
	return;
}

Hash func_198(int iParam0) // Position - 0x1109F Hash - 0xB8EC44B7 ^0xC091C19D
{
	switch (iParam0)
	{
		case -2060865802:
			return -1988847961;
	
		case -1960242214:
			return 66159563;
	
		case -1300082860:
			return -1212881551;
	
		case -1240932004:
			return -875696111;
	
		case -1109016944:
			return -2011320133;
	
		case -920971071:
			return 1582457845;
	
		case -919236330:
			return 539572870;
	
		case -654238687:
			return 2056389698;
	
		case -232974724:
			return -942443338;
	
		case 149709049:
			return 2021420613;
	
		case 247563739:
			return 1352537560;
	
		case 683269210:
			return 993246734;
	
		case 918206817:
			return -1262808306;
	
		case 1347913620:
			return 460210291;
	
		case 1464664327:
			return 387869270;
	
		case 1673499939:
			return 1195199040;
	
		default:
		
	}

	return 0;
}

float func_199(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x11190 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_200(int iParam0) // Position - 0x111AE Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_379(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);

	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_9 = 0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1f;
	return;
}

BOOL func_201(Hash hParam0, int iParam1) // Position - 0x11261 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_202(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1127B Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_92() == -1)
	{
		if (func_380(hParam0) && func_381(hParam0))
		{
			func_382(hParam0, iParam1, true, &bParam2, iParam3);
			return false;
		}
	}
	else if (hParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (hParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}

	return true;
}

BOOL func_203(Hash hParam0, var uParam1, int iParam2) // Position - 0x112D2 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_383(hParam0, uParam1);
	unk = { func_384(hParam0, false, true) };
	num = func_385(hParam0, &unk, false, false);
	num2 = func_386(hParam0, false);

	if (num > 1 && !func_387() && num2 + iParam2 >= num)
		if (func_222(hParam0, -2051813666))
			func_212(583, true);
		else
			func_212(582, false);

	if (func_388(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_204(Hash hParam0, BOOL bParam1) // Position - 0x1136E Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_389(hParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = hParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

int func_205(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1141A Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_201(hParam0, 0))
		return 0;

	num = func_221(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_390(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_391(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_307(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_206(Hash hParam0) // Position - 0x1149C Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_92() != -1)
		return false;

	return func_207(hParam0) != 0;
}

Hash func_207(Hash hParam0) // Position - 0x114B8 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_392(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_393(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_208(Hash hParam0) // Position - 0x114F4 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_209(Hash hParam0) // Position - 0x11502 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_392(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_208(collectableItemHash))
			if (func_252(func_393(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_210(Hash hParam0) // Position - 0x1154F Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_394(48);
	func_37(false, -1);
	return;
}

BOOL func_211(int iParam0) // Position - 0x1156A Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_92() != -1)
		return false;

	return func_93(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_212(int iParam0, BOOL bParam1) // Position - 0x1158D Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_395(iParam0, &num, &num2);

	if (!func_396(iParam0, num, num2, bParam1))
		return;

	func_397(num, num2);
	return;
}

int func_213(Hash hParam0) // Position - 0x115BA Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_214(Hash hParam0) // Position - 0x115CD Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_215(int iParam0) // Position - 0x115E0 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_92() != -1)
		return false;

	return func_93(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_216(int iParam0) // Position - 0x11603 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_92() != -1)
		return false;

	if (!func_321(iParam0))
		return false;

	return func_130(Global_1347702[iParam0 /*49*/].f_15);
}

int func_217() // Position - 0x11633 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_252(func_398(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_218(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x11668 Hash - 0x2D6CF941 ^0x9C178D1A
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	var unk;
	int num;
	int num2;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case 38:
			str = "MISSION_RCCIG";
			str2 = "SP_MISSIONS_13";
		
			if (func_118() && func_216(38) || func_211(38))
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				str6 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				hash = joaat("col_cc_intro");
			}
			else
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				str6 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				hash = joaat("col_cc_intro_pre");
			}
		
			str5 = "COL_CC_TITLE";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = 12;
			hash2 = joaat("CIGARETTE_CARDS");
			break;
	
		case 39:
			if (func_118() && func_216(39) || func_211(39))
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_02";
				str6 = "COL_DB_INTRO";
				num = 3;
				hashKey = joaat("blip_rc_deborah");
				hash = joaat("col_db_intro");
			}
			else
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_01";
				str6 = "COL_DB_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				hash = joaat("col_db_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_DB_TITLE";
			unk = { 122.7758f, -185.4978f, 116.4383f };
			num2 = 30;
			hash2 = joaat("dino_bones");
			break;
	
		case 41:
			if (func_118() && func_216(41) || func_211(41))
				str = "MISSION_RCFSH2";
			else
				str = "MISSION_RCFSH1";
		
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_RARE_FISH_01";
			str5 = "COL_LF_TITLE";
			str6 = "COL_LF_INTRO";
			unk = { 337.3075f, -684.5404f, 41.8362f };
			num = 13;
			hash2 = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
			if (hParam3 == joaat("exotic_stage_01"))
			{
				str = "MISSION_RCEXO1";
				str4 = "RCEXO1_DESC";
				num2 = 30;
			}
			else if (hParam3 == joaat("exotic_stage_02"))
			{
				str = "MISSION_RCEXO2";
				str4 = "RCEXO2_DESC";
				num2 = 37;
			}
			else if (hParam3 == joaat("exotic_stage_03"))
			{
				str = "MISSION_RCEXO3";
				str4 = "RCEXO3_DESC";
				num2 = 40;
			}
			else if (hParam3 == joaat("exotic_stage_04"))
			{
				str = "MISSION_RCEXO4";
				str4 = "RCEXO4_DESC";
				num2 = 50;
			}
			else if (hParam3 == joaat("exotic_stage_05"))
			{
				str = "MISSION_RCEXO5";
				str4 = "RCEXO5_DESC";
				num2 = 25;
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_EX_TITLE";
			str6 = "COL_EX_INTRO";
			unk = { 2585.6682f, -1009.6161f, 44.979717f };
			num = func_399(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_118() && func_216(49) || func_211(49))
			{
				str = "MISSION_RCRKF2";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				str6 = "COL_RC_INTRO";
				num = 3;
				hashKey = joaat("blip_scm_frances");
				hash = joaat("col_rc_intro");
			}
			else
			{
				str = "MISSION_RCRKF1";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				str6 = "COL_RC_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				hash = joaat("col_rc_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_RC_TITLE";
			unk = { -2178.646f, -245.6886f, 191.1569f };
			num2 = 10;
			hash2 = joaat("rock_carvings");
			break;
	
		case 51:
			str = "MISSION_RCTAX1";
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			str5 = "COL_TX_TITLE";
			str6 = "COL_TX_INTRO";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = func_399(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_400(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_401(iParam0, hash, hash2);
	func_402(iParam0, hash, unk, str5, str4);
	func_403(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_404(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_405(iParam0, hash, hash2, iParam6);
	func_406(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_219(int iParam0) // Position - 0x11AA5 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_220(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x11ABC Hash - 0xD806FABF ^0x1C463E08
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	int num;

	switch (iParam0)
	{
		case 38:
			str = "COL_CC_TITLE";
			str4 = "COL_CC_CARD_FOUND";
			num = joaat("CIGARETTE_CARDS");
		
			if (func_118() && func_216(38) || func_211(38))
			{
				str2 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				str2 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
		
			hash = joaat("col_cc_intro");
			break;
	
		case 39:
			str = "COL_DB_TITLE";
			str4 = "COL_DB_FOUND";
			num = joaat("dino_bones");
		
			if (func_118() && func_216(39) || func_211(39))
			{
				str2 = "COL_DB_INTRO";
				hashKey = joaat("blip_rc_deborah");
			}
			else
			{
				str2 = "COL_DB_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
		
			hash = joaat("col_db_intro");
			break;
	
		case 41:
			str = "COL_LF_TITLE";
			str4 = "COL_LF_CAUGHT";
			str2 = "COL_LF_INTRO";
			num = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			str = "COL_EX_TITLE";
			str4 = "COL_EX_ITEMS_COLLECTED";
			str2 = "COL_EX_INTRO";
			num = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			str = "COL_RC_TITLE";
			str4 = "COL_RC_FOUND";
			num = joaat("rock_carvings");
		
			if (func_118() && func_216(49) || func_211(49))
			{
				str2 = "COL_RC_INTRO";
				hashKey = joaat("blip_scm_frances");
			}
			else
			{
				str2 = "COL_RC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
		
			hash = joaat("col_rc_intro");
			break;
	
		case 51:
			str = "COL_TX_TITLE";
			str4 = "COL_TX_CARCASS_COLLECTED";
			str2 = "COL_TX_INTRO";
			num = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	if (iParam5 == 2)
	{
		str = "MISSION_COMPLETE";
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
		str2 = "COL_ALL_LOG_UPDATED";
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (num == joaat("CIGARETTE_CARDS"))
	{
		if (func_118() && func_216(38) || func_211(38))
			hash = joaat("col_cc_intro");
		else
			hash = joaat("col_cc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 0)
		{
			hashKey2 = hParam1;
			hashKey = hParam2;
		}
	
		if (iParam5 == 2)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_409(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_214(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_118() && func_216(39) || func_211(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_118() && func_216(49) || func_211(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

int func_221(Hash hParam0) // Position - 0x1206A Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_201(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_222(Hash hParam0, Hash hParam1) // Position - 0x12095 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_223(Hash hParam0, int iParam1) // Position - 0x120C6 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_201(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_224(int iParam0) // Position - 0x120E5 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_410(iParam0))
		return false;

	return func_411(iParam0);
}

void func_225(int iParam0) // Position - 0x12101 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_410(iParam0))
		return;

	func_412(iParam0);
	func_413(iParam0);
	return;
}

Hash func_226(Hash hParam0) // Position - 0x12122 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_201(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_227(Hash hParam0, BOOL bParam1) // Position - 0x1214D Hash - 0x27CC99BE ^0x9BD61A93
{
	Hash hash;

	switch (hParam0)
	{
		case joaat("ammo_hatchet_hewing"):
			hash = joaat("weapon_melee_hatchet_hewing");
			break;
	
		case joaat("ammo_molotov_volatile"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_ancient"):
			hash = joaat("weapon_melee_ancient_hatchet");
			break;
	
		case joaat("ammo_tomahawk_homing"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_cleaver"):
			hash = joaat("weapon_melee_cleaver");
			break;
	
		case joaat("ammo_hatchet_hunter_rusted"):
			hash = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
	
		case joaat("ammo_hatchet_double_bit_rusted"):
			hash = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
	
		case joaat("ammo_tomahawk_improved"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_viking"):
			hash = joaat("weapon_melee_hatchet_viking");
			break;
	
		case joaat("ammo_tomahawk_ancient"):
			hash = joaat("weapon_thrown_tomahawk_ancient");
			break;
	
		case joaat("ammo_hatchet"):
			hash = joaat("weapon_melee_hatchet");
			break;
	
		case joaat("ammo_hatchet_hunter"):
			hash = joaat("weapon_melee_hatchet_hunter");
			break;
	
		case joaat("ammo_dynamite"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_dynamite_volatile"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_201(hash, 0))
		if (bParam1)
			if (func_414(hash) || func_415(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_228(Hash hParam0, BOOL bParam1) // Position - 0x122D3 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_201(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_229(Hash hParam0) // Position - 0x122FF Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_416(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_230(BOOL bParam0) // Position - 0x12339 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_92() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_307(bParam0));
}

BOOL func_231(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x12357 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	Hash hash;
	var unk6;
	int i;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
	{
		unk = { func_384(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_417(398 + i, 1);
		
			if (func_418(hParam0, &unk, hash, false))
			{
				if (func_419(hParam0, &unk6, hash))
				{
					unk28 = { func_420(hParam0, unk, hash, false) };
					func_421(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_230(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_232(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_422(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_232(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x124A9 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_234(hParam0))
		return false;

	if (!func_230(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_233(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x124E4 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_228(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_92() == -1)
		{
			func_229(weaponHash);
		
			if (hParam1 == 1248274121)
				func_423(weaponHash);
		}
	
		if (!func_388(hParam0, &unk, 1, false, false))
		{
			func_382(hParam0, 1, false, uParam2, hParam1);
			num = func_424(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_231(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_231(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_231(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_15())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_425(weaponHash))
				{
					func_231(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_231(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_426(Global_35, 2, false, true);
			
				if (func_416(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_224(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_416(weaponHash2) && func_224(24))
					if (!func_231(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_231(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_231(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && hParam1 == 1248274121)
		func_212(480, true);

	return true;
}

BOOL func_234(Hash hParam0) // Position - 0x126F0 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_235(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x126FE Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_234(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_416(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_35, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (func_252(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
		num3 = BUILTIN::CEIL((float)num3 * 1.1f);

	if (num2 >= num3)
	{
		num = num3;
	}
	else if (num2 < num3 && num2 >= 1)
	{
		num = num2;
	}
	else
	{
		func_271(func_427(hParam0), func_270(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_92() == -1)
			if (func_93(Global_1835011[14 /*74*/].f_1, true))
				func_212(416, false);

	if (num == 0)
		return false;

	if (func_230(false))
	{
		if (func_232(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_276(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_236(Hash hParam0) // Position - 0x12847 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_428() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_429(Global_35, hParam0, &unk))
			func_255(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_261();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_261();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_259();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_257();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_261();
			break;
	}

	return;
}

void func_237(Hash hParam0) // Position - 0x1294E Hash - 0xA92CE7CF ^0x8CEA2EC6
{
	switch (hParam0)
	{
		case joaat("provision_trinket_shark_tooth"):
			Global_40.f_11095.f_68 = Global_40.f_11095.f_68 + 0.1f;
			break;
	
		case joaat("provision_trinket_cat_eye"):
			Global_40.f_11095.f_70 = Global_40.f_11095.f_70 + 0.2f;
			break;
	
		case joaat("provision_trinket_turtle_shell"):
			Global_40.f_11095.f_69 = Global_40.f_11095.f_69 + 0.1f;
			func_431();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_259();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_430();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_257();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_260();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_258();
			break;
	
		case joaat("provision_trinket_lion_paw"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_cougar_fang"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_moose_antler"):
			Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
			break;
	
		case joaat("provision_trinket_owl_feather"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.15f;
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.15f;
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.15f;
			func_261();
			break;
	}

	return;
}

struct<2> func_238(int iParam0) // Position - 0x12B39 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

struct<2> func_239(int iParam0, int iParam1) // Position - 0x12B4B Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_240(Hash hParam0) // Position - 0x12B61 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_222(hParam0, -2017733358);

	if (func_432() < 3)
		if (flag)
			if (func_434(func_433(hParam0), hParam0))
				func_271(79, func_270(func_433(hParam0)), true);
			else
				func_271(78, func_270(func_433(hParam0)), true);
		else
			func_271(80, func_270(func_435(hParam0)), true);

	return;
}

BOOL func_241() // Position - 0x12BCE Hash - 0x452521BB ^0x7FA3002C
{
	if (func_436(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_436(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_436(joaat("document_arthur_high_bounty_1"), 400) || func_436(joaat("document_arthur_high_bounty_2"), 400) || func_436(joaat("document_arthur_has_poster_1"), 400) || func_436(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_242(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x12C44 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_437(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_438(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_439(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_243(Hash hParam0) // Position - 0x12C8B Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_218(43, 0, 0, joaat("exotic_stage_01"), func_444(1), false, -1, false);
			func_445(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_218(39, 0, 0, 0, 0, false, 1, false);
			func_220(39, 0, 0, 0, 0, -1, 0);
			func_441(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_218(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_220(51, 0, 0, 0, 0, -1, 0);
			func_440(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_218(43, 0, 0, joaat("exotic_stage_02"), func_444(2), false, -1, false);
			func_445(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_218(43, 0, 0, joaat("exotic_stage_03"), func_444(4), false, -1, false);
			func_445(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_218(49, 0, 0, 0, 0, false, 1, false);
			func_220(49, 0, 0, 0, 0, -1, 0);
			func_443(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_218(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_220(51, 0, 0, 0, 0, -1, 0);
			func_440(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_218(41, 0, 0, 0, 0, false, 1, false);
			func_220(41, 0, 0, 0, 0, -1, 0);
			func_442(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_218(43, 0, 0, joaat("exotic_stage_05"), func_444(16), false, -1, false);
			func_445(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_218(43, 0, 0, joaat("exotic_stage_04"), func_444(8), false, -1, false);
			func_445(8);
			break;
	}

	return;
}

void func_244(Hash hParam0) // Position - 0x12E21 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_446() == 1)
	{
		if (func_211(39))
		{
			func_212(342, false);
		}
		else
		{
			func_212(343, false);
			func_441(1);
		}
	}

	if (func_446() >= 30)
		func_212(344, false);

	func_218(39, 0, 0, 0, 0, false, -1, false);
	func_220(39, 0, 0, func_446(), 30, 1, 0);
	return;
}

void func_245(Hash hParam0) // Position - 0x12E80 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_447() == 1)
	{
		if (func_211(49))
		{
			func_212(409, false);
		}
		else
		{
			func_212(410, false);
			func_443(1);
		}
	}

	if (func_447() >= 10)
		func_212(411, false);

	func_218(49, 0, 0, 0, 0, false, -1, false);
	func_220(49, 0, 0, func_447(), 10, 1, 0);
	return;
}

void func_246(Hash hParam0) // Position - 0x12EDF Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_212(438, false);
			func_448(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_218(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_220(51, 0, 0, num, func_399(joaat("taxidermy_order_05"), 20), 1, 0);
			func_440(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_448(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_218(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_220(51, 0, 0, num, func_399(joaat("taxidermy_order_04"), 20), 1, 0);
			func_440(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_448(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_218(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_220(51, 0, 0, num, func_399(joaat("taxidermy_order_03"), 20), 1, 0);
			func_440(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_212(437, false);
			func_212(440, false);
			func_448(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_218(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_220(51, 0, 0, num, func_399(joaat("taxidermy_order_01"), 20), 1, 0);
			func_440(1);
			func_449(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_448(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_218(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_220(51, 0, 0, num, func_399(joaat("taxidermy_order_02"), 20), 1, 0);
			func_440(8);
			break;
	
		default:
			func_212(439, false);
			break;
	}

	return;
}

void func_247() // Position - 0x130CD Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_248(Hash hParam0, int iParam1) // Position - 0x130F1 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_92() == -1)
	{
		if (!func_211(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_212(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_212(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_212(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_212(400, false);
		}
		else if (func_222(hParam0, 412399755))
		{
			func_450(joaat("exotic_stage_01"));
		
			if (func_451() == 0)
			{
				func_37(false, 10);
				num2 = func_452(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_453(hParam0) < func_454(hParam0))
					{
						func_218(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_220(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_211(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_212(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_212(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_212(401, false);
		}
		else if (func_222(hParam0, 709057512))
		{
			func_450(joaat("exotic_stage_02"));
		
			if (func_451() == 1)
			{
				func_37(false, 10);
				num2 = func_452(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_453(hParam0) < func_454(hParam0))
					{
						func_218(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_220(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_211(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_212(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_212(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_212(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_212(398, false);
		}
		else if (func_222(hParam0, -1478961327))
		{
			func_450(joaat("exotic_stage_03"));
		
			if (func_451() == 2)
			{
				func_37(false, 10);
				num2 = func_452(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_455(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_456(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_394(48);
					}
				
					if (func_453(hParam0) < func_454(hParam0))
					{
						func_218(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_220(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_453(hParam0) < func_454(hParam0))
					{
						func_218(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_220(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_211(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_212(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_212(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_212(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_212(406, false);
		}
		else if (func_222(hParam0, -1238404098))
		{
			func_450(joaat("exotic_stage_04"));
		
			if (func_451() == 3)
			{
				func_37(false, 10);
				num2 = func_452(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_453(hParam0) < func_454(hParam0))
					{
						func_218(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_220(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_211(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_212(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_212(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_212(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_212(403, false);
		}
		else if (func_222(hParam0, 1160548794))
		{
			func_450(joaat("exotic_stage_05"));
		
			if (func_451() == 4)
			{
				func_37(false, 10);
				num2 = func_452(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_453(hParam0) < func_454(hParam0))
					{
						func_218(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_220(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_249(Hash hParam0) // Position - 0x1360A Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_455(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_456(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_394(48);
		}
	}

	return;
}

void func_250(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1364A Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_252(func_457(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_458(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_459(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_251(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x136AA Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_92() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_242(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_242(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_242(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_242(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_242(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_242(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_242(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_460())
				func_242(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_242(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_242(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_242(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_242(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_242(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_242(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_242(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_242(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_242(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_242(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_242(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_242(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_242(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_242(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_242(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

BOOL func_252(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x13A82 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_201(hParam0, 0))
		return false;

	num = func_221(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_461(hParam0, 1))
			return false;

	return func_205(hParam0, false, bParam2) >= iParam1;
}

void func_253(Hash hParam0) // Position - 0x13AEC Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_211(41))
		func_212(363, false);
	else
		func_212(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_462(joaat("legendary_fish_02"));
			func_463(joaat("legendary_fishing_spot_02"));
			func_464(joaat("legendary_fishing_spot_02"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_462(joaat("legendary_fish_06"));
			func_463(joaat("legendary_fishing_spot_06"));
			func_464(joaat("legendary_fishing_spot_06"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_462(joaat("legendary_fish_13"));
			func_463(joaat("legendary_fishing_spot_13"));
			func_464(joaat("legendary_fishing_spot_13"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_462(joaat("legendary_fish_03"));
			func_463(joaat("legendary_fishing_spot_03"));
			func_464(joaat("legendary_fishing_spot_03"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_462(joaat("legendary_fish_08"));
			func_463(joaat("legendary_fishing_spot_08"));
			func_464(joaat("legendary_fishing_spot_08"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_462(joaat("legendary_fish_12"));
			func_463(joaat("legendary_fishing_spot_12"));
			func_464(joaat("legendary_fishing_spot_12"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_462(joaat("legendary_fish_05"));
			func_463(joaat("legendary_fishing_spot_05"));
			func_464(joaat("legendary_fishing_spot_05"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_462(joaat("legendary_fish_04"));
			func_463(joaat("legendary_fishing_spot_04"));
			func_464(joaat("legendary_fishing_spot_04"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_462(joaat("legendary_fish_14"));
			func_463(joaat("legendary_fishing_spot_14"));
			func_464(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_462(joaat("legendary_fish_09"));
			func_463(joaat("legendary_fishing_spot_09"));
			func_464(joaat("legendary_fishing_spot_09"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_462(joaat("legendary_fish_07"));
			func_463(joaat("legendary_fishing_spot_07"));
			func_464(joaat("legendary_fishing_spot_07"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_462(joaat("legendary_fish_01"));
			func_463(joaat("legendary_fishing_spot_01"));
			func_464(joaat("legendary_fishing_spot_01"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_462(joaat("legendary_fish_11"));
			func_463(joaat("legendary_fishing_spot_11"));
			func_464(joaat("legendary_fishing_spot_11"));
			func_37(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_462(joaat("legendary_fish_10"));
			func_463(joaat("legendary_fishing_spot_10"));
			func_464(joaat("legendary_fishing_spot_10"));
			func_37(false, 10);
			break;
	}

	return;
}

void func_254(Hash hParam0, var uParam1) // Position - 0x13D6B Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_465(hParam0, uParam1, &unk);
	return;
}

int func_255(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x13D7D Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_384(hParam1, true, false) };
		iParam3 = func_466(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_468(hParam1, hParam2, func_467(iParam3, 1), bParam4, bParam9))
		return 0;

	func_469(true, func_92() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_471(32768) && hParam1 != Global_1946054.f_57[func_467(iParam3, 1) /*11*/])
			{
				func_472();
				func_470(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_467(iParam3, 1) /*11*/])
				func_470(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_470(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_473(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_470(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_474(0);
			func_475(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_470(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_256(var uParam0, BOOL bParam1) // Position - 0x13EEC Hash - 0x2DC8D50 ^0x79739B7E
{
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	Hash hash;
	Hash hash2;

	unk.f_9 = joaat("SLOTID_NONE");
	flag = false;
	*uParam0 = 0;
	hash = func_426(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_426(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_476("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_477(&unk, i, num, num2))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
				{
					if (!bParam1)
					{
						if (unk.f_4 == hash || unk.f_4 == hash2)
						{
						}
						else if (!flag)
						{
							*uParam0 = unk.f_4;
							flag = true;
						}
					}
				
					if (!flag)
					{
						*uParam0 = unk.f_4;
						flag = true;
					}
				}
			}
		}
	
		func_478(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_257() // Position - 0x13FB5 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_258() // Position - 0x13FCF Hash - 0xA8E2CA8 ^0x84B8D643
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_259() // Position - 0x14007 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_260() // Position - 0x14023 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_261() // Position - 0x1403D Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_479();
	func_480();
	func_481();
	return;
}

void func_262(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14054 Hash - 0x968DA278 ^0xA479CBDD
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;
	Vector3 vector;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_JACK_HALL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_HIGH_STAKES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	switch (iParam1)
	{
		case joaat("treasure_hunt_loot_12"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
	
		case joaat("treasure_hunt_loot_13"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
	
		case joaat("treasure_hunt_loot_02"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
	
		case joaat("treasure_hunt_loot_18"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
	
		case joaat("treasure_hunt_loot_03"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
	
		case joaat("treasure_hunt_loot_19"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
	
		case joaat("treasure_hunt_loot_04"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
	
		case joaat("treasure_hunt_loot_16"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
	
		case joaat("treasure_hunt_loot_17"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
	
		case joaat("treasure_hunt_loot_05"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
	
		case joaat("treasure_hunt_loot_10"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
	
		case joaat("treasure_hunt_loot_07"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
	
		case joaat("treasure_hunt_loot_21"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
	
		case joaat("treasure_hunt_loot_01"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
	
		case joaat("treasure_hunt_loot_11"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
	
		case joaat("treasure_hunt_loot_06"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
	
		case joaat("treasure_hunt_loot_24"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	
		case joaat("treasure_hunt_loot_20"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
	
		case joaat("treasure_hunt_loot_09"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
	
		case joaat("treasure_hunt_loot_23"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
	
		case joaat("treasure_hunt_loot_22"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
	
		case joaat("treasure_hunt_loot_08"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
	
		case joaat("treasure_hunt_loot_14"):
			str = "COL_TH_OBJ_RDL";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
	
		case joaat("treasure_hunt_loot_15"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
	}

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_REMOVE_ENTRY(3, hash);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, vector, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(str2), 0);

	if (bParam2)
	{
		switch (iParam0)
		{
			case -220219788:
				str = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
		
			case 6410548:
				str = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		
			case 218622660:
				str = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
		
			case 390004462:
				str = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
		
			case 499813453:
				str = "COL_TH_JACK_HALL_COMPLETE";
				break;
		
			case 666607663:
				str = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
		}
	}

	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, MISC::GET_HASH_KEY(str), str, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hash, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(2, str3));
	return;
}

void func_263(int iParam0, BOOL bParam1) // Position - 0x1442C Hash - 0x922C415B ^0xD24230D8
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_POISONOUS_TRAIL";
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_JACK_HALL";
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_HIGH_STAKES";
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (bParam1)
		str = "MISSION_COMPLETE";

	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	func_407(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_264(int iParam0) // Position - 0x14543 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_265(int iParam0) // Position - 0x1455E Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_266(int iParam0) // Position - 0x14579 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_267(int iParam0) // Position - 0x14594 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_268(int iParam0) // Position - 0x145AF Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_269(int iParam0) // Position - 0x145CA Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_270(Hash hParam0) // Position - 0x145E5 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_201(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_271(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x145FE Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_395(iParam0, &num, &num2);

	if (!func_396(iParam0, num, num2, bParam2))
		return;

	if (!func_482(iParam0, 1024))
		return;

	func_397(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_272(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1465E Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_395(iParam0, &num, &num2);

	if (!func_396(iParam0, num, num2, bParam2))
		return;

	if (!func_482(iParam0, 1024))
		return;

	func_397(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_273() // Position - 0x146D9 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_392())
		return func_274();

	endRange = func_392() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_392(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_483(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_393(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_274() // Position - 0x14753 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_392());
	return func_393(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_275(var uParam0) // Position - 0x14776 Hash - 0x26E9B20B ^0x108E1842
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

BOOL func_276(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x147CB Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_201(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_384(hParam0, false, true) };
	unk6 = { func_420(hParam0, unk, unk.f_4, false) };
	return func_484(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_277(Hash hParam0) // Position - 0x1481A Hash - 0x90E372CB ^0xEE55522E
{
	int num;
	Hash hash;
	Hash hash2;

	if (func_92() != -1)
		return;

	switch (func_226(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_470(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			num = func_486(hParam0);
		
			if (func_487(num))
				func_488(num, num >= 0 && num <= 5, true);
			else
				func_470(30, hParam0, 0, 0, false);
		
			if (func_489() == -2125499975 || func_489() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_470(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_489() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_470(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_490(-525676072, false))
				if (func_491(-525676072, &hash))
					func_470(33, hash, 0, 0, false);
		
			func_470(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_485(81053684, false) <= 0)
				func_470(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_492(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_255(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_225(24);
	
		if (func_256(&hash2, false))
			func_231(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_278(Hash hParam0) // Position - 0x149EC Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_222(hParam0, 943695443))
		func_493(0, hParam0);
	else if (func_222(hParam0, -2096528786))
		func_493(1, hParam0);
	else if (func_222(hParam0, -1094167013))
		func_493(2, hParam0);
	else if (func_222(hParam0, 1936654645))
		func_493(3, hParam0);
	else if (func_222(hParam0, 1306489306))
		func_493(4, hParam0);
	else if (func_222(hParam0, 435762317))
		func_493(5, hParam0);
	else if (func_222(hParam0, 1259363210))
		func_493(6, hParam0);
	else if (func_222(hParam0, 881398259))
		func_493(7, hParam0);
	else if (func_222(hParam0, -541549214))
		func_493(8, hParam0);
	else if (func_222(hParam0, 130796156))
		func_493(-1, hParam0);

	return;
}

int func_279(Hash hParam0, int iParam1) // Position - 0x14AE2 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_494(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_495(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_280(Hash hParam0) // Position - 0x14B0B Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_201(hParam0, 0))
		return unk;

	if (func_222(hParam0, -305066475))
		if (func_92() == -1)
			if (func_222(hParam0, -537818634))
				return func_193(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_193(joaat("deadeye_items"));
	else if (func_222(hParam0, -537818634))
		return func_193(joaat("medicine_items"));

	if (func_222(hParam0, 2084895747))
		return func_193(joaat("lock_breaker_items"));

	return unk3;
}

void func_281(Hash hParam0) // Position - 0x14B9F Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_92() == -1)
				if (func_93(Global_1835011[4 /*74*/].f_1, true))
					func_212(109, true);
			break;
	}

	return;
}

void func_282(Hash hParam0, int iParam1) // Position - 0x14BD8 Hash - 0x3053C451 ^0x911FE08F
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(func_496(0));
	func_318(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_498(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_283(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x14C18 Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	int num3;
	int num4;
	int num5;
	char* str2;
	int num6;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_201(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_499())
	{
		func_500(hParam0, iParam1, bParam2, iParam4);
		return;
	}

	flag = false;
	num = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || iParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_223(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_221(hParam0);
	num3 = 0;
	num4 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		num3 = joaat("ammo_types");
		num4 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_502(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	str3 = func_503(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_270(hParam0)), num), num5);

	if (iParam1 == 1 || func_222(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_270(hParam0));

	func_318(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

char* func_284(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x14E6D Hash - 0x3C42BF0E ^0xF088B29A
{
	switch (*uParam0)
	{
		case -2108030724:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@braithwaitesburnedcorpse@braithwaitesburnedcorpse";
					
						case 3:
							return "pl_deadPose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -2060865802:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@roadside_brothel@roadside_brothel";
					
						case 3:
							return "";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -2008558277:
		case -1891628345:
		case -1859413640:
		case -1761189332:
		case -1714262909:
		case -1494823099:
		case -1420566543:
		case -1272862985:
		case -1208846034:
		case -1144800837:
		case -1061274876:
		case -968854939:
		case -780455182:
		case -763376358:
		case -709811179:
		case -654238687:
		case -599506500:
		case -499529359:
		case -357364973:
		case -261997819:
		case -35775921:
		case -30872859:
		case -657632:
		case 221420861:
		case 308500632:
		case 330993088:
		case 435290930:
		case 513110082:
		case 683269210:
		case 733338689:
		case 870958936:
		case 939555152:
		case 1048086072:
		case 1124200691:
		case 1187689415:
		case 1284679164:
		case 1335921989:
		case 1424723727:
		case 1464664327:
		case 1490223565:
		case 1505050944:
		case 1535254161:
		case 1801731633:
		case 2072029413:
		case 2134589549:
		case 2135153015:
			break;
	
		case -1887999095:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@grayssecret@grayssecret";
					
						case 3:
							return "pl_deadPose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1841331114:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@lightning_alley@lightning_alley";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1829339703:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@wilderness_chest_3@wilderness_chest_3";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1824429070:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@buck_carcasses@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1761578407:
			if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 6 || iParam3 == 7 || iParam3 == 8)
			{
				switch (iParam1)
				{
					case 0:
						switch (iParam2)
						{
							case 0:
								return "script_common@grieving@player@unarmed@upper";
						
							case 1:
								return "intro";
						
							default:
								break;
						}
						break;
				}
			}
			break;
	
		case -1636964661:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@donkey_lady@donkey_lady";
					
						case 3:
							return "pl_donkey_lady";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1568839185:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_pit@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1308658310:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "";
					
						case 1:
							return "";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1300082860:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_abandoned_oil_drill@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1287911066:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@barrel_rider@barrel_rider";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1240932004:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_micah@dead_micah";
					
						case 3:
							return "pl_micah";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -1177787273:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@water_diviner@water_diviner";
					
						case 3:
							return "pl_water_diviner";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -920971071:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@flattened_cabin@flattened_cabin";
					
						case 3:
							return "pl_DeadCorpse";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -777592153:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@deadman_and_sheep@pose";
					
						case 3:
							return "pl_base";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -739986731:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@pagan_ritual@pagan_ritual";
					
						case 3:
							return "pl_pagan_pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -641229542:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@corpse_of_slave@dead";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case -415839138:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@meditating_monk@main";
					
						case 3:
							return "pbl_base_a";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 149709049:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@burned_settlement@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 404434344:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_common@grieving@player@unarmed@upper";
					
						case 1:
							return "intro";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 425000526:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_miner@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 429544447:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@jesuit_missionary@pose";
					
						case 3:
							return "pl_jesuit_missionary";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 657666087:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@circuswagon@circuswagon";
					
						default:
							break;
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 0:
							return "mech_melee@unarmed@_male@_ambient@_healthy@_noncombat";
					
						case 1:
							return "att_sucker_punch_dist_close_v1";
					
						default:
							break;
					}
					break;
			
				case 2:
					switch (iParam2)
					{
						case 0:
							return "s_lev_des_mission";
					
						case 1:
							return "s_fortuneteller01x";
					
						default:
							break;
					}
					break;
			
				case 3:
					switch (iParam2)
					{
						case 2:
							return "lightrig@misc@discoverable_circus_wagon";
					
						case 3:
							return "plMain";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 949011950:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@overturned_hearse@overturned_hearse";
					
						case 3:
							return "pl_Overturned_Hearse";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1187917501:
			switch (iParam1)
			{
				case 0:
					if (!func_53(*uParam0))
					{
						switch (iParam2)
						{
							case 2:
								return "script@beat@wilderness@discoverables@conestoga_wagon@conestoga_wagon";
						
							default:
								break;
						}
					}
					break;
			
				case 1:
					switch (iParam2)
					{
						case 2:
							return "script@ambient@discoverables@Conestoga_Wagon@SlideCamera";
					
						case 3:
							return "pl_ACTION";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1342653896:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_chinese_traveler@dead_chinese_traveler";
					
						case 3:
							return "pl_dead_chinese_traveler";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1519228573:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@swamp_freak@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1673499939:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@meteor_house@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 1861313914:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							if (func_16(59))
								return "script@beat@wilderness@discoverables@braithwaites_secret_endless_summer@braithwaites_secret_endless_summer";
							else
								return "script@ambient@discoverables@braithwaites@secret";
							break;
					
						case 3:
							if (func_16(59))
								return "";
							else
								return "pb_intial_visit_a";
							break;
					}
					break;
			}
			break;
	
		case 1937333853:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_soldier@dead_soldier";
					
						case 3:
							return "pl_Action";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 2000209669:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "script_amb@discoverables@strange_statues@push_button";
					
						case 1:
							return "push_button_short";
					
						default:
							break;
					}
					break;
			}
			break;
	
		case 2072069278:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 2:
							return "script@beat@wilderness@discoverables@dead_bear@pose";
					
						default:
							break;
					}
					break;
			}
			break;
	
		default:
			break;
	}

	return "";
}

void func_285(var uParam0, int iParam1) // Position - 0x157E0 Hash - 0xAD40E8D1 ^0x3109DBFB
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->[iParam1]))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->[iParam1]);

	return;
}

void func_286(var uParam0) // Position - 0x157FF Hash - 0xAF91827C ^0x3697C5FA
{
	int i;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (!(uParam0->f_12[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12[i]);
	}

	return;
}

void func_287(var uParam0) // Position - 0x15836 Hash - 0xD92E8622 ^0xC498A336
{
	int i;

	for (i = 0; i <= 5 - 1; i = i + 1)
	{
		if (!(uParam0->f_6[i] == 0))
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6[i]);
	}

	return;
}

void func_288(var uParam0) // Position - 0x1586C Hash - 0x2CFACADF ^0x4FC1732E
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_325(uParam0)))
		if (HUD::TEXT_BLOCK_IS_LOADED(func_325(uParam0)))
			HUD::_TEXT_BLOCK_DELETE(func_325(uParam0));

	return;
}

int func_289(int iParam0) // Position - 0x1589B Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_504(iParam0))
		return -1;

	return func_505(iParam0);
}

char* func_290(var uParam0) // Position - 0x158B7 Hash - 0x8601690B ^0xE165017E
{
	switch (*uParam0)
	{
		case -1761578407:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_GRAVE_ARTHUR_I";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_GRAVE_JENNY_I";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_GRAVE_HOSEA_I";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_GRAVE_LENNY_I";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_GRAVE_SEAN_I";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_GRAVE_DAVEY_I";
			else if (uParam0->f_4 == 6)
				return "DISC_VOL_GRAVE_KIERAN_I";
			else if (uParam0->f_4 == 7)
				return "DISC_VOL_GRAVE_SUSAN_I";
			else if (uParam0->f_4 == 8)
				return "DISC_VOL_GRAVE_EAGLE_I";
			break;
	
		case -1243267511:
			return "DISC_VOL_FACE_TREES_I";
	
		case -890175011:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_VAMP_CLUES_1_I";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_VAMP_CLUES_2_I";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_VAMP_CLUES_3_I";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_VAMP_CLUES_4_I";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_VAMP_CLUES_5_I";
			break;
	
		case -607940493:
			return "DISC_VOL_SERPENT_MOUND_I";
	
		case 404434344:
			return "DISC_VOL_GRAVE_ARTHUR_I";
	
		case 677950956:
			if (uParam0->f_4 == 0)
				return "DISC_VOL_AZTEC_CLUES_1_I";
			else if (uParam0->f_4 == 1)
				return "DISC_VOL_AZTEC_CLUES_2_I";
			else if (uParam0->f_4 == 2)
				return "DISC_VOL_AZTEC_CLUES_3_I";
			else if (uParam0->f_4 == 3)
				return "DISC_VOL_AZTEC_CLUES_4_I";
			else if (uParam0->f_4 == 4)
				return "DISC_VOL_AZTEC_CLUES_5_I";
			else if (uParam0->f_4 == 5)
				return "DISC_VOL_AZTEC_CLUES_6_I";
			break;
	
		case 1535254161:
			return "DISC_VOL_CIV_WAR_I";
	}

	return "";
}

float func_291() // Position - 0x15A7E Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_292(var uParam0, int iParam1) // Position - 0x15AB0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_293(var uParam0, int iParam1) // Position - 0x15AC1 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_294(int iParam0, int iParam1) // Position - 0x15AD6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_295() // Position - 0x15AE5 Hash - 0xD50A7FC ^0x92986A81
{
	if (PED::IS_PED_HOGTIED(Global_35))
		return false;

	if (PED::IS_PED_HOGTYING(Global_35))
		return false;

	if (PED::IS_PED_LASSOED(Global_35))
		return false;

	if (PED::IS_PED_BEING_DRAGGED(Global_35))
		return false;

	if (!(PED::_GET_LASSO_TARGET(Global_35) == 0))
		return false;

	if (PED::_IS_PED_DRAGGING(Global_35))
		return false;

	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_35))
		return false;

	if (PED::GET_PED_IS_GRAPPLING(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
		return false;

	return true;
}

BOOL func_296() // Position - 0x15B85 Hash - 0x52218EDE ^0x68EAB229
{
	if (PED::_IS_PED_SLIDING(Global_35))
		return false;

	if (PED::IS_PED_SWIMMING(Global_35))
		return false;

	if (PED::IS_PED_CLIMBING(Global_35))
		return false;

	if (func_506(Global_35))
		return false;

	if (PED::IS_PED_FALLING(Global_35))
		return false;

	if (PED::IS_PED_FALLING_OVER(Global_35))
		return false;

	if (PED::IS_PED_RAGDOLL(Global_35))
		return false;

	if (PED::IS_PED_VAULTING(Global_35))
		return false;

	if (TASK::IS_PED_RUNNING(Global_35))
		return false;

	if (TASK::IS_PED_GETTING_UP(Global_35))
		return false;

	return true;
}

BOOL func_297() // Position - 0x15C1A Hash - 0xD14A8C13 ^0x8AD85514
{
	if (func_507(Global_35) && !Global_1392040.f_2)
		return false;

	if (func_508(Global_35) && !Global_1392040.f_2)
		return false;

	return true;
}

BOOL func_298(BOOL bParam0) // Position - 0x15C57 Hash - 0x19762284 ^0xFB6FC2BA
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !Global_1392040.f_2)
	{
		if (bParam0)
			func_509("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, true);
	
		return false;
	}

	return true;
}

BOOL func_299(int iParam0) // Position - 0x15C8F Hash - 0xEEF44B5 ^0x85627F39
{
	Vehicle vehiclePedIsUsing;
	Hash entityModel;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			return false;
	
		vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing);
	
		switch (entityModel)
		{
			case joaat("breach_cannon"):
			case joaat("gatling_gun"):
			case joaat("gatlingmaxim02"):
			case joaat("hotchkiss_cannon"):
				return false;
		
			case joaat("rowboat"):
			case joaat("handcart"):
				return false;
		}
	
		if (!func_294(iParam0, 16) && !PED::IS_PED_ON_MOUNT(Global_35) && VEHICLE::GET_DRIVER_OF_VEHICLE(vehiclePedIsUsing) == Global_35)
			return false;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!func_510(iParam0))
			return false;
	}

	return true;
}

BOOL func_300() // Position - 0x15D67 Hash - 0xFFDF5CA4 ^0x50D2CF98
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
		return false;

	return true;
}

BOOL func_301(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x15D7E Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_302(int iParam0, int iParam1) // Position - 0x15DA7 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_303(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x15DC8 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = iParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = pedParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
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
	func_106(iParam0, true);
	func_339(iParam0, true);
	func_340(iParam0, 128);
	return;
}

int func_304(int iParam0) // Position - 0x1606E Hash - 0x333EB83A ^0x37C96C1F
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 4;
	
		case 2:
			return 8;
	
		case 3:
			return 16;
	
		case 4:
			return 32;
	
		case 5:
			return 64;
	
		case 6:
			return 128;
	
		case 7:
			return 256;
	
		case 8:
			return 512;
	
		case 9:
			return 1024;
	
		case 10:
			return 2048;
	
		case 11:
			return 4096;
	
		case 12:
			return 8192;
	
		case 13:
			return 16384;
	
		case 14:
			return 32768;
	
		case 15:
			return 65536;
	
		case 16:
			return 131072;
	
		case 17:
			return 262144;
	
		case 18:
			return 524288;
	
		case 19:
			return 1048576;
	
		default:
		
	}

	return 1;
}

void func_305(BOOL bParam0) // Position - 0x1616C Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_511(&(Global_40.f_12019.f_42), 1);
	else
		func_512(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_306(int iParam0) // Position - 0x16196 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_513(iParam0);
}

int func_307(BOOL bParam0) // Position - 0x161A4 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_92() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

void func_308() // Position - 0x161E5 Hash - 0x5808700A ^0x37855CE9
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_LT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_RT"), false);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_ACTION"), false);
	return;
}

int func_309() // Position - 0x1623A Hash - 0x990ADDDC ^0x7D78C12
{
	int num;

	num = func_514();

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

int func_310(int iParam0) // Position - 0x1634D Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_92() != -1)
		return iParam0;

	if (Global_1347477.f_2 + 120000 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}

	num = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3 = Global_1347477.f_3 + 1;

	if (Global_1347477.f_3 >= 10)
		num = 2f;
	else if (Global_1347477.f_3 >= 3)
		num = 1.5f;

	value = BUILTIN::TO_FLOAT(iParam0) * num;
	value = MISC::ABSF(value) < 1f ? value < 0f ? -1f : 1f : value;
	return BUILTIN::CEIL(value);
}

int func_311(int iParam0, int iParam1, int iParam2) // Position - 0x163F2 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

int func_312(int iParam0) // Position - 0x16417 Hash - 0xEE599357 ^0xEE599357
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

Hash func_313() // Position - 0x164CE Hash - 0xA46C8CCA ^0x71ABACD2
{
	if (Global_40.f_11095.f_35 <= -320)
		return 1;
	else if (Global_40.f_11095.f_35 <= -280)
		return 2;
	else if (Global_40.f_11095.f_35 <= -240)
		return 3;
	else if (Global_40.f_11095.f_35 <= -200)
		return 4;
	else if (Global_40.f_11095.f_35 <= -160)
		return 5;
	else if (Global_40.f_11095.f_35 <= -120)
		return 6;
	else if (Global_40.f_11095.f_35 <= -80)
		return 7;
	else if (Global_40.f_11095.f_35 < 0)
		return 8;
	else if (Global_40.f_11095.f_35 <= 40)
		return 9;
	else if (Global_40.f_11095.f_35 >= 320)
		return 16;
	else if (Global_40.f_11095.f_35 >= 280)
		return 15;
	else if (Global_40.f_11095.f_35 >= 240)
		return 14;
	else if (Global_40.f_11095.f_35 >= 200)
		return 13;
	else if (Global_40.f_11095.f_35 >= 160)
		return 12;
	else if (Global_40.f_11095.f_35 >= 120)
		return 11;
	else if (Global_40.f_11095.f_35 >= 80)
		return 10;

	return 9;
}

void func_314(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x16626 Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_516(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_517(hParam0);
	return;
}

void func_315(int iParam0) // Position - 0x16652 Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_518(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_316(BOOL bParam0) // Position - 0x166B6 Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_519(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_520(i, &hash, &num))
			{
				if (!func_201(hash, 0))
				{
				}
				else
				{
					unlockHash = func_521(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_221(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_309() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_309() >= 160;
					else
						flag = num == func_522();
				
					if (flag)
					{
						UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
						flag = false;
					}
				}
			}
		}
	}

	return;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x16777 Hash - 0xA17D549C ^0xF2B5793D
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
	
		case joaat("honor_event_antagonize"):
			return "HONOR_EVENT_ANTAGONIZE";
	
		case joaat("honor_event_cruel_death"):
			return "HONOR_EVENT_CRUEL_DEATH";
	
		case joaat("honor_event_cheat"):
			return "HONOR_EVENT_CHEAT";
	
		case joaat("honor_event_steal_wagon"):
			return "HONOR_EVENT_STEAL_WAGON";
	
		case joaat("honor_event_trampled_innocent"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
	
		case joaat("honor_event_kill_vermin"):
			return "HONOR_EVENT_KILL_VERMIN";
	
		case joaat("honor_event_kill_farm_animal"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
	
		case joaat("honor_event_long_absence"):
			return "HONOR_EVENT_LONG_ABSENCE";
	
		case joaat("honor_event_wanted_in_camp"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
	
		case joaat("honor_event_animal_bleedout"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
	
		case joaat("honor_event_steal_mule"):
			return "HONOR_EVENT_STEAL_MULE";
	
		case joaat("honor_event_theft"):
			return "HONOR_EVENT_THEFT";
	
		case joaat("honor_event_kill_horse"):
			return "HONOR_EVENT_KILL_HORSE";
	
		case joaat("honor_event_justice_served"):
			return "HONOR_EVENT_JUSTICE_SERVED";
	
		case joaat("honor_event_steal_donkey"):
			return "HONOR_EVENT_STEAL_DONKEY";
	
		case joaat("honor_event_steal_horse"):
			return "HONOR_EVENT_STEAL_HORSE";
	
		case joaat("honor_event_ambient_kill"):
			return "HONOR_EVENT_AMBIENT_KILL";
	
		case joaat("honor_event_item_request"):
			return "HONOR_EVENT_ITEM_REQUEST";
	
		case joaat("honor_event_ambient_ko"):
			return "HONOR_EVENT_AMBIENT_KO";
	
		case joaat("honor_event_intervened"):
			return "HONOR_EVENT_INTERVENED";
	
		case joaat("honor_event_scare"):
			return "HONOR_EVENT_SCARE";
	
		case joaat("honor_event_donated_game"):
			return "HONOR_EVENT_DONATED_GAME";
	
		case joaat("honor_event_loot_innocent"):
			return "HONOR_EVENT_LOOT_INNOCENT";
	
		default:
		
	}

	return "";
}

int func_318(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x168C3 Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_523(sParam0, sParam1, hParam2);
	return num2;
}

int func_319(int iParam0, int iParam1) // Position - 0x16926 Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_524(iParam0))
		return 0;

	if (!func_118())
		return 0;

	if (!func_525(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

int func_320(int iParam0, int iParam1) // Position - 0x16981 Hash - 0x8FA0E29 ^0xC3F68E87
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

BOOL func_321(int iParam0) // Position - 0x17A9A Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

char* func_322(var uParam0) // Position - 0x17AB0 Hash - 0x72C07184 ^0xCF6D3A4B
{
	switch (*uParam0)
	{
		case -2008558277:
			return "DISC_VOL_BATS_IN_BARN";
	
		case -654238687:
			return "DISC_VOL_OLD_DIRTY_CABIN";
	
		case -415839138:
			return "DISC_VOL_MEDITATING_MONK";
	
		case -35775921:
			return "DISC_VOL_BLACK_SHEEP";
	
		case 1861313914:
			return "DISC_VOL_BRAITH_SECRET";
	
		default:
		
	}

	return "";
}

void func_323(var uParam0) // Position - 0x17B06 Hash - 0x5FCB2830 ^0x5FCB2830
{
	int i;

	for (i = 0; i <= 4 - 1; i = i + 1)
	{
		func_526(uParam0, i);
	}

	return;
}

void func_324(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x17B2A Hash - 0x9F2D5250 ^0x66ABCA1A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_284(uParam0, iParam2, 2, 0)))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->[iParam2]))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_284(uParam0, iParam2, 3, 0)))
				uParam1->[iParam2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_284(uParam0, iParam2, 2, 0), iParam3, func_284(uParam0, iParam2, 3, 0), false, true);
			else
				uParam1->[iParam2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_284(uParam0, iParam2, 2, 0), iParam3, 0, false, true);
		
			ANIMSCENE::LOAD_ANIM_SCENE(uParam1->[iParam2]);
		}
	}

	return;
}

char* func_325(var uParam0) // Position - 0x17BAF Hash - 0xD3CD4B3 ^0x18D09A9B
{
	switch (*uParam0)
	{
		case -415839138:
			return "DMONKAU";
	
		case 657666087:
			return "FTELLAU";
	
		case 1673499939:
			return "DSMEHAU";
	
		default:
		
	}

	return "";
}

Ped func_326(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x17BEE Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_527(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_327(var uParam0, int iParam1) // Position - 0x17C30 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_328(Ped pedParam0, Hash hParam1) // Position - 0x17C3D Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_329(Ped pedParam0, Hash hParam1) // Position - 0x17C6B Hash - 0xA54F3032 ^0xCAB2990F
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_330(Ped pedParam0, Hash hParam1) // Position - 0x17CBC Hash - 0xA54F3032 ^0xCAB2990F
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_328(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_331(Ped pedParam0) // Position - 0x17D2E Hash - 0x446F1BDD ^0xF41E28E5
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_332(Volume volParam0, BOOL bParam1) // Position - 0x17D4C Hash - 0xD6642292 ^0x5A7BA218
{
	int num;

	num = 16384;

	if (bParam1)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

BOOL func_333(var uParam0, Ped pedParam1, char* sParam2) // Position - 0x17D6F Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = pedParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = pedParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

int func_334(char* sParam0, Hash hParam1, Volume volParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, Hash hParam12, BOOL bParam13) // Position - 0x17DED Hash - 0x90EF6909 ^0x581337A9
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_302(i, 2))
			if (volParam2 == Global_1945188[i /*18*/].f_10 && hParam1 == Global_1945188[i /*18*/].f_4)
				return i;
		else if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_303(num, hParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, volParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, false, false, 0, hParam12, bParam13);
		return num;
	}

	return 0;
}

Hash func_335(var uParam0) // Position - 0x17EAD Hash - 0x97CAE9B0 ^0x7B11DC81
{
	switch (*uParam0)
	{
		case -415839138:
			return joaat("disco_monk");
	
		default:
		
	}

	return joaat("disco_unknown");
}

void func_336(int iParam0, Entity eParam1, Hash hParam2) // Position - 0x17ED1 Hash - 0xAE8AF97B ^0xF7F35E6
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return;

	if (ENTITY::IS_ENTITY_A_PED(eParam1))
		ENTITY::IS_ENTITY_DEAD(eParam1);
	else
		ENTITY::IS_ENTITY_DEAD(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(eParam1));

	if (!func_33(iParam0))
		return;

	num = func_105(iParam0);

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(eParam1), 0);
	
		if (ENTITY::IS_ENTITY_A_PED(eParam1))
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam1), hParam2);
		else
			OBJECT::_0xD503D6F0986D58BC(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(eParam1), hParam2);
	}

	return;
}

void func_337(var uParam0, var uParam1, int iParam2) // Position - 0x17F67 Hash - 0x4F66A168 ^0x482A116F
{
	int i;

	if (!(*uParam1 == -1))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				if (iParam2 == 0)
				{
					for (i = 0; i <= 10 - 1; i = i + 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_63.f_1[i]))
							if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam1, func_528(uParam0, i)))
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, func_528(uParam0, i), uLocal_63.f_1[i], 0);
					}
				
					if (*uParam0 == 1861313914)
						if (!ENTITY::IS_ENTITY_DEAD(Global_35))
							if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam1, "player"))
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player", Global_35, 0);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_284(uParam0, iParam2, 3, 0)))
						if (ANIMSCENE::_DOES_ANIM_SCENE_PLAY_LIST_EXIST(*uParam1, func_284(uParam0, iParam2, 3, 0)))
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam1, func_284(uParam0, iParam2, 3, 0), true);
				}
			}
		}
	}

	return;
}

void func_338(int iParam0, int iParam1) // Position - 0x1805B Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_339(int iParam0, BOOL bParam1) // Position - 0x1808E Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_340(int iParam0, int iParam1) // Position - 0x180B7 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_341(int iParam0, BOOL bParam1, int iParam2) // Position - 0x180DF Hash - 0x37D64B11 ^0xE7060A9E
{
	func_529(iParam2);

	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return;
	
		if (Global_1935630.f_12)
			return;
	}
	else
	{
		if (!Global_1224589.f_6)
			return;
	
		if (Global_1224589.f_7)
			return;
	}

	if (bParam1)
		iParam0->f_10 = 0;

	iParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		iParam0->f_13 = Global_1935630.f_44;
	else
		iParam0->f_13 = func_530(0);

	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
				if (!(*iParam0 & 33554432 != 0))
					if (iParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_511(iParam0, 33554432);
					else if (!(*iParam0 & 8192 != 0))
						if (func_531(true))
							func_511(iParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_531(true) || *iParam0 & 8192 != 0)
					func_512(iParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(iParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_532(iParam0))
				iParam0->f_15 = func_98();
		}
		else if (iParam0->f_15 > 0)
		{
			if (func_98() - iParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}

	iParam0->f_6 = iParam0->f_6 + 1;

	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7 = iParam0->f_7 + 1;
	
		if (iParam0->f_7 > 4)
			iParam0->f_7 = 0;
	}

	func_533(iParam0);
	return;
}

BOOL func_342(Ped pedParam0, int iParam1) // Position - 0x182AA Hash - 0x3A755B4E ^0xDBAC23C2
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Ped pedIndexFromEntityIndex;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_acquaintance_ped_dead"):
		case joaat("event_ped_seen_dead_ped"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("event_dead_ped_found"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent))
				return false;
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
		
			if (!PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				return false;
		
			if (DECORATOR::DECOR_EXIST_ON(pedIndexFromEntityIndex, "bIgnoreDamageChecking"))
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_33)
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_32)
				return false;
		
			if (!func_534(pedParam0, iParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_535(pedParam0, pedIndexFromEntityIndex) <= func_536(iParam1))
				return true;
			break;
	}

	return false;
}

void func_343(Ped pedParam0, int iParam1, int iParam2) // Position - 0x18382 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		iParam1->f_10 = pedParam0;

	if (func_537(iParam2, 1, 1, 1, 0))
		func_511(iParam1, 2048);

	iParam1->f_16 = iParam2;
	func_538(iParam1, true);
	func_539();
	return;
}

BOOL func_344(Ped pedParam0, int iParam1) // Position - 0x183BF Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_540(pedParam0, !(*iParam1 & 268435456 != 0), !(*iParam1 & 536870912 != 0), !(*iParam1 & 1073741824 != 0), 0, false))
		{
			if (iParam1->f_12 < 5f)
				num = 95f;
			else if (iParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_541(iParam1);
		
			if (func_542(iParam1, pedParam0, num, num2))
			{
				if (iParam1->f_2 == 0)
					iParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - iParam1->f_2;
				num4 = func_543(iParam1);
			
				if (iParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_538(iParam1, true);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_538(iParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_345(Ped pedParam0, Entity eParam1, int iParam2) // Position - 0x184A6 Hash - 0x899101A2 ^0xBCA80002
{
	float num;
	float num2;

	if (eParam1 == 0)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam1))
		return false;

	num = 85f;

	if (func_544(eParam1, !(*iParam2 & 268435456 != 0), !(*iParam2 & 536870912 != 0), !(*iParam2 & 1073741824 != 0), 0))
	{
		if (iParam2->f_12 < 5f)
			num = 95f;
		else if (iParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_541(iParam2);
	
		if (func_542(iParam2, pedParam0, num, num2))
		{
			if (iParam2->f_2 == 0)
				iParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2 > func_543(iParam2))
				{
					func_538(iParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_346(Ped pedParam0, int iParam1) // Position - 0x1857C Hash - 0xC62373A5 ^0xD1ADE674
{
	Entity entity;
	Ped pedIndexFromEntityIndex;
	Entity outEntity;
	float customDistance;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
		return false;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
		if (outEntity == entity)
			return false;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return false;

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (func_534(pedParam0, iParam1, pedIndexFromEntityIndex))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3 > func_543(iParam1))
		{
			customDistance = func_541(iParam1);
		
			if (iParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_347(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18685 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_545(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return 0;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return 0;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return 0;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return 1;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return 0;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return 1;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return 1;

	return 0;
}

BOOL func_348(int iParam0, int iParam1) // Position - 0x187BA Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_98();
	num2 = num - iParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_349(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x187F1 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_546(iParam2);
		
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
				PED::_0xD355E2F1BB41087E(pedParam1, num);
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
				PED::_0xD355E2F1BB41087E(pedParam1, 5f);
			else
				PED::_0xD355E2F1BB41087E(pedParam1, num);
		}
	
		if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED") || WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
		{
			num2 = 3f;
			shotNearRecentlyTime = 3000;
		}
		else
		{
			num2 = 1f;
			shotNearRecentlyTime = 1000;
		}
	
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), pedParam1, shotNearRecentlyTime) && PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= num2)
		{
			if (func_357(iParam2, pedParam1))
			{
				func_538(iParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_350(Ped pedParam0, Ped pedParam1, int iParam2) // Position - 0x188F8 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (iParam2->f_12 < (float)func_547(iParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_357(iParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_538(iParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_351(Ped pedParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x18963 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_548(iParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, iParam2->f_22))
				{
					func_538(iParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, iParam2->f_27))
				{
					func_538(iParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &outCoords, false, false);
				
					if (func_549(pedParam1, entityCoords, outCoords))
					{
						func_538(iParam2, true);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, iParam2->f_22))
				{
					func_538(iParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), iParam2->f_26, &outCoords2, false, false);
				
					if (func_549(pedParam1, entityCoords, outCoords2))
					{
						func_538(iParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_352(Ped pedParam0, int iParam1) // Position - 0x18AAB Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *iParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_534(pedParam0, iParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_550(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_551(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						iParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_552(iParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_553(iParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_554(iParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				iParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_353(var uParam0, int iParam1) // Position - 0x18C8B Hash - 0xF223CED2 ^0xA472D0A4
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	var entityCoords;
	var entityCoords2;

	if (!EVENT::_0x1D1B448D719415AB(*uParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(*uParam0, 0, 0);

	switch (recentEvent)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("event_shocking_window_smashed"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(sourceEntityFromEvent, false, false) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(tar, false, false) };
			EVENT::_0x1A5C5D350068A673(*uParam0, 0);
			return true;
	}

	return false;
}

BOOL func_354(int iParam0, int iParam1) // Position - 0x18D03 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_98();
	num2 = num - iParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_355(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18D32 Hash - 0x8119700D ^0x42D5A76B
{
	Ped entity2;
	Vehicle playersLastVehicle;
	Entity entity;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(pedParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(pedParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true, true))
				return 1;
		
			playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		
			if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true, true))
					return 1;
		
			if (PED::IS_PED_ON_MOUNT(entity2))
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(entity2)))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PED::GET_MOUNT(entity2), true, true))
						return 1;
			else if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
						return 1;
		}
	}
	else if (!bParam2)
	{
		if (func_555(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_556(entity2, pedParam0))
		return 1;

	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == pedParam0)
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
			return 1;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_BEING_JACKED(pedParam0))
			if (PED::GET_PEDS_JACKER(pedParam0) == entity2)
				return 1;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(entity2, 8, 0))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam0))
			return 1;

	return 0;
}

int func_356(int iParam0, Ped pedParam1) // Position - 0x18EB8 Hash - 0x42A83B1F ^0xCBF97E0
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", iParam0->f_5);
	else if (iParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_357(int iParam0, Ped pedParam1) // Position - 0x18F08 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_557(iParam0))
		return true;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam1, 400))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam1, true))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam1))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 10, true))
		return false;

	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
		return true;

	if (!PED::IS_PED_RAGDOLL(pedParam1))
		return true;

	return false;
}

BOOL func_358(Ped pedParam0, Ped pedParam1) // Position - 0x18FA5 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_558(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_359() // Position - 0x18FF2 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_360(int iParam0, Ped pedParam1) // Position - 0x18FFA Hash - 0x6BE02E92 ^0x188EF1A2
{
	Vehicle vehiclePedIsUsing;
	var entityCoords;
	int actual;
	int expected;
	int i;
	Ped pedInDraftHarness;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);

	if (vehiclePedIsUsing != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing)))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	
		if (func_559(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			iParam0->f_9 = func_98();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehiclePedIsUsing, &expected, &actual))
		{
			if (expected <= 0)
			{
				return false;
			}
			else if (actual == expected)
			{
				for (i = 0; i < actual; i = i + 1)
				{
					pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsUsing, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness))
					{
						if (func_14(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								iParam0->f_9 = func_98();
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_361() // Position - 0x190BB Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_98() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_362(int iParam0, Ped pedParam1) // Position - 0x19108 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_536(iParam0);

	if (iParam0->f_12 > func_560(iParam0) && iParam0->f_12 > num)
		return false;

	num3 = func_561(pedParam1);
	num2 = func_562(iParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (iParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, iParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, iParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, iParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_363(Ped pedParam0, Entity eParam1, int iParam2) // Position - 0x19224 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (iParam2->f_12 > 4f)
		return false;

	flag = *iParam2 & 256 != 0;
	flag2 = *iParam2 & 524288 != 0;
	flag3 = *iParam2 & 128 != 0;
	return func_563(pedParam0, eParam1, flag, flag3, iParam2->f_12, flag2);
}

BOOL func_364(Ped pedParam0, int iParam1) // Position - 0x1926C Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*iParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*iParam1 & 33554432 != 0)
	{
		if (func_564(pedParam0, iParam1, true))
			return true;
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam0, Global_35, true, false) == 1)
			return true;
	}

	jackTarget = PED::GET_JACK_TARGET(Global_35);

	if (ENTITY::DOES_ENTITY_EXIST(jackTarget) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(jackTarget, true))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return true;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_shocking_seen_ped_robbed"):
		case joaat("event_shocking_seen_ped_intimidated"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("event_shocking_mount_stolen"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (pedIndexFromEntityIndex != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			return true;
	
		case joaat("event_shocking_entity_hogtied"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!func_565(iParam1, pedParam0))
						if (func_14(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_365(Ped pedParam0, int iParam1) // Position - 0x194C5 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_566(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_366(int iParam0, int iParam1) // Position - 0x194FE Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (iParam0->f_8 <= 0)
		return true;

	num = func_98();
	num2 = num - iParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_367(var uParam0, int iParam1) // Position - 0x1952D Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_368(Ped pedParam0, int iParam1) // Position - 0x19541 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (iParam1->f_4 == 0)
		iParam1->f_4 = func_98();
	else if (func_98() - iParam1->f_4 > func_567(iParam1))
		return func_568(pedParam0, iParam1, false, -1082130432);

	return false;
}

BOOL func_369(int iParam0, Ped pedParam1) // Position - 0x1958E Hash - 0x2978E171 ^0xFD24BF1
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedSourceOfDeath))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIgnoreDamageChecking"))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);

	if (Global_35 == pedIndexFromEntityIndex || Global_1935630.f_40 == pedIndexFromEntityIndex)
		return true;

	return false;
}

BOOL func_370(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x195E2 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

void func_371(int iParam0, BOOL bParam1) // Position - 0x1960B Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_512(&(iParam0->f_1), 16384);
	else
		func_511(&(iParam0->f_1), 16384);

	return;
}

void func_372(int iParam0, BOOL bParam1) // Position - 0x19631 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_512(&(iParam0->f_1), 2048);
	else
		func_511(&(iParam0->f_1), 2048);

	return;
}

void func_373(int iParam0, BOOL bParam1) // Position - 0x19657 Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_512(&(iParam0->f_1), 256);
	else
		func_511(&(iParam0->f_1), 256);

	return;
}

void func_374(int iParam0, BOOL bParam1) // Position - 0x1967D Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_511(iParam0, 16);
	}
	else
	{
		func_512(iParam0, 67108864);
		func_512(iParam0, 16);
	}

	return;
}

void func_375(int iParam0, BOOL bParam1) // Position - 0x196A8 Hash - 0x32CE93C6 ^0x60BFF41C
{
	if (bParam1)
		func_512(&(iParam0->f_1), 128);
	else
		func_511(&(iParam0->f_1), 128);

	return;
}

void func_376(int iParam0, BOOL bParam1) // Position - 0x196CC Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_511(iParam0, 256);
	else
		func_512(iParam0, 256);

	return;
}

void func_377(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x196EE Hash - 0x3145AA70 ^0xBCD5B3EB
{
	if (!bParam1)
		func_511(iParam0, 268435456);
	else
		func_512(iParam0, 268435456);

	if (!bParam2)
		func_511(iParam0, 1073741824);
	else
		func_512(iParam0, 1073741824);

	if (!bParam3)
		func_511(iParam0, 536870912);
	else
		func_512(iParam0, 536870912);

	return;
}

void func_378(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x19753 Hash - 0xFDACD718 ^0x658C9335
{
	int i;

	for (i = 0; i < uParam3->f_97; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3->[i /*4*/]))
			if (!ENTITY::IS_ENTITY_DEAD(uParam3->[i /*4*/]))
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3->[i /*4*/], &(uParam3->[i /*4*/].f_1));
	}

	return;
}

BOOL func_379(int iParam0) // Position - 0x197A5 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_302(iParam0, 2);
}

BOOL func_380(Hash hParam0) // Position - 0x197B4 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_221(hParam0) == joaat("WEAPON");
}

BOOL func_381(Hash hParam0) // Position - 0x197C8 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_92() != -1)
		return false;

	if (func_223(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_388(hParam0, &unk, 1, false, false);

	return func_252(hParam0, 1, false);
}

void func_382(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x1980C Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_221(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_228(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_415(weaponHash))
	{
		if (func_92() == -1)
			func_229(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_205(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_283(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_383(Hash hParam0, var uParam1) // Position - 0x198B3 Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_222(hParam0, 58855631))
	{
		func_569(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_384(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x198E1 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_570(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_221(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_574(hParam0, -1823706425))
			{
				unk = { func_420(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_574(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_420(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_573(bParam1) };
		
			switch (func_226(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_420(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_571(bParam1) };
		
			if (bParam2 && func_572(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_418(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_418(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_419(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_575(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

int func_385(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x19B9E Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_201(hParam0, 0))
		return 0;

	if (!func_230(false))
		bParam2 = true;

	if (bParam2 || !func_576(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_307(bParam3), hParam0);
}

int func_386(Hash hParam0, BOOL bParam1) // Position - 0x19BEC Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_234(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_307(bParam1), hParam0, false);
}

BOOL func_387() // Position - 0x19C16 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_92() != -1)
		return false;

	if (!func_118())
		return false;

	if (!func_93(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[2 /*74*/].f_1, true) && func_93(Global_1347702[120 /*49*/].f_15, true) && !func_93(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[37 /*74*/].f_1, true) && !func_93(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[57 /*74*/].f_1, true) && !func_93(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[26 /*74*/].f_1, true) && !func_93(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_93(Global_1835011[62 /*74*/].f_1, true) && func_93(Global_1835011[63 /*74*/].f_1, true) && !func_93(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[75 /*74*/].f_1, true) && !func_93(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_93(Global_1835011[76 /*74*/].f_1, true) && !func_93(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[40 /*74*/].f_1, true) && func_93(Global_1835011[41 /*74*/].f_1, true) && !func_93(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[62 /*74*/].f_1, true) && func_93(Global_1835011[63 /*74*/].f_1, true) && !func_93(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_93(Global_1835011[65 /*74*/].f_1, true) && func_93(Global_1835011[66 /*74*/].f_1, true) && !func_93(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_388(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x19E5C Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_577(&hParam0);

	if (!func_201(hParam0, 0))
		return 0;

	if (!func_230(false))
		bParam3 = true;

	if (func_380(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_571(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_418(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_419(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_572(hParam0, true))
				if (!func_418(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_419(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_578(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_385(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_576(hParam0))
		inventoryItemCountWithItemid = func_579(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_307(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_389(Hash hParam0, int iParam1) // Position - 0x19FA1 Hash - 0x7A1C2599 ^0xFF9B5634
{
	var outData;
	int outIndex;
	int i;

	outData = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
				return outData[i /*2*/];
		}
	}

	return 0;
}

Hash func_390(Hash hParam0, int iParam1) // Position - 0x19FEB Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_201(hParam0, 0))
		return 0;

	num = func_221(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_222(hParam0, 1399091007))
	{
		func_465(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_391(Hash hParam0, BOOL bParam1) // Position - 0x1A065 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_580(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_581(&unk, func_571(false));

	if (!func_582(&unk, &num, &num2, false))
		return 0;

	func_478(num);
	return num2;
}

int func_392() // Position - 0x1A0C3 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_393(Hash hParam0) // Position - 0x1A0D5 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_394(int iParam0) // Position - 0x1A0E3 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_92() != -1)
		return;

	num = func_583(iParam0);
	value = func_584(iParam0);

	if (Global_1347477.f_117 || !func_224(31) || !func_585(num))
		return;

	if (value <= 0f)
		return;

	if (func_586(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_587(num, Global_40.f_11095.f_11[num] + value, false);
	func_318(MISC::VAR_STRING(6, func_588(iParam0), value), "itemtype_textures", func_589(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_395(int iParam0, var uParam1, var uParam2) // Position - 0x1A1E2 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_396(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1A1FE Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_590(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_591(iParam0))
		return false;

	if (func_592(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_482(iParam0, 1) || func_593(32768))
		if (!func_482(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_594())
		return false;

	return true;
}

void func_397(int iParam0, int iParam1) // Position - 0x1A2A0 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

Hash func_398(int iParam0) // Position - 0x1A2C4 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

int func_399(Hash hParam0, int iParam1) // Position - 0x1A37D Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_595(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_400(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1A3AC Hash - 0xF20034E5 ^0x7B2D9A3D
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_217() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_596(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_597(), 12);
			break;
	
		case -1531394072:
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_EX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", iParam4, iParam5);
			break;
	
		case joaat("dino_bones"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_DB_COMPLETE";
			else if (func_446() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_598(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_446(), 30);
			break;
	
		case joaat("taxidermy"):
			if (iParam2 == 3)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 4)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			else if (iParam2 == 5)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			else if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			else if (iParam2 == 8)
				sParam3 = "COL_TX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_399(iParam6, 20));
			break;
	
		case 1995362678:
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_LF_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_599(), 13);
			break;
	
		case joaat("rock_carvings"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_RC_COMPLETE";
			else if (func_447() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_600(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_447(), 10);
			break;
	}

	return sParam3;
}

BOOL func_401(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x1A699 Hash - 0xC978E890 ^0x1621426E
{
	if (hParam2 == joaat("CIGARETTE_CARDS"))
		if (hParam1 == joaat("col_cc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_cc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_cc_intro_pre"));
	else if (hParam2 == joaat("dino_bones"))
		if (hParam1 == joaat("col_db_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_db_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_db_intro_pre"));
	else if (hParam2 == joaat("rock_carvings"))
		if (hParam1 == joaat("col_rc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_rc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_rc_intro_pre"));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_REMOVE_ENTRY(3, hParam1);

	return true;
}

BOOL func_402(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x1A746 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_403(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x1A772 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_404(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x1A7C1 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_601(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_252(hash, 1, false) || func_603(func_602(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_601(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_601(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_446() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_604(i)), func_604(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_598() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_604(i)), func_604(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_604(i)), func_604(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_457(iParam3, func_605(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_453(hash) - iParam7 >= func_399(iParam3, func_606(i));
				else
					flag = func_453(hash) >= func_399(iParam3, func_606(i));
			else if (hParam4 == hash)
				flag = func_453(hash) + iParam7 >= func_399(iParam3, func_606(i));
			else
				flag = func_453(hash) >= func_399(iParam3, func_606(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_608(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_447() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_610(i)), func_610(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_600() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_610(i)), func_610(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_610(i)), func_610(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_457(iParam3, func_605(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_453(hash) - iParam7 >= 1;
				else
					flag = func_611(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_611(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_612(hash)), func_612(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_405(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x1AB36 Hash - 0x3C34F826 ^0x7BB91FE4
{
	BOOL flag;

	flag = false;

	if (iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("CIGARETTE_CARDS"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == -1531394072)
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == 1995362678)
	{
		if (func_599() >= 13)
			flag = true;
		else
			flag = false;
	
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", flag, true, false);
	}

	if (iParam3 == 7 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("taxidermy"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", flag, true, false);

	return true;
}

BOOL func_406(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x1AC3F Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_504(func_613(0)) && func_614(0) == 1 || func_614(0) == 8 || func_614(0) == 6)
		iParam3 = 7;

	if (hParam2 == joaat("dino_bones") || hParam2 == 1995362678 || hParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
	}
	else if (hParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
			}
		}
	}

	return true;
}

int func_407(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x1ACE1 Hash - 0x51CE9407 ^0x19439D00
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = sParam8;
	num.f_2 = sParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = iParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Hash hParam0) // Position - 0x1AD58 Hash - 0xA17D549C ^0x1C6D2781
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
	
		default:
		
	}

	return "";
}

int func_409(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1AE08 Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

BOOL func_410(int iParam0) // Position - 0x1AE69 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_411(int iParam0) // Position - 0x1AE7C Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_412(int iParam0) // Position - 0x1AEA6 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_40.f_7857[num2];
	MISC::SET_BIT(&address, offset);
	Global_40.f_7857[num2] = address;
	return;
}

void func_413(int iParam0) // Position - 0x1AEE0 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_118() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_212(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_118() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_212(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_118() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_212(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_118() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_409("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_212(589, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_615(true);
			break;
	
		case 12:
			break;
	
		case 13:
			break;
	
		case 14:
			break;
	
		case 15:
			break;
	
		case 16:
			break;
	
		case 17:
			break;
	
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_616(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_616(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_616(3);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_92() == -1)
			{
				if (!func_492(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_623(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_15())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_252(hash, 1, false))
						func_276(hash, 1, 752097756);
				
					func_255(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
				}
			}
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			break;
	
		case 33:
			func_617(true);
			break;
	
		case 34:
			func_618(true);
			break;
	
		case 35:
			func_619(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_620(false);
			break;
	
		case 38:
			func_621(false);
			break;
	
		case 39:
			func_622(false);
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			break;
	
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 46:
			func_624();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_92() == -1)
				if (!func_252(1013902307, 1, false))
					func_276(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_92() == -1)
				if (!func_252(786809402, 1, false))
					func_276(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_92() == -1)
			{
				if (!func_252(1013902307, 1, false))
					func_276(1013902307, 1, 752097756);
			
				if (!func_252(142640135, 1, false))
					func_276(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_92() == -1)
			{
				if (!func_252(786809402, 1, false))
					func_276(786809402, 1, 752097756);
			
				if (!func_252(-518019409, 1, false))
					func_276(-518019409, 1, 752097756);
			}
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_414(Hash hParam0) // Position - 0x1B508 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_415(Hash hParam0) // Position - 0x1B530 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_416(Hash hParam0) // Position - 0x1B558 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_417(int iParam0, int iParam1) // Position - 0x1B573 Hash - 0xEA82FE59 ^0xEA82FE59
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_418(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x1E143 Hash - 0x4285A587 ^0x4285A587
{
	return func_579(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_419(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x1E15B Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_625(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_420(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1E17C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_201(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_307(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_421(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x1E1AD Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_626(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_575(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_230(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_307(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_422(Hash hParam0, int iParam1) // Position - 0x1E23D Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_627(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_423(Hash hParam0) // Position - 0x1E285 Hash - 0x708BD33E ^0xB8E42788
{
	char* propertyName;
	char* propertyName2;
	int value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		return;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return;

	propertyName = "player_newWeaponType";
	propertyName2 = "player_newWeaponTime";

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
	{
		propertyName = "player_newPistolWeaponType";
		propertyName2 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
	{
		propertyName = "player_newRevolverWeaponType";
		propertyName2 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
	{
		propertyName = "player_newRifleWeaponType";
		propertyName2 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
	{
		propertyName = "player_newShotgunWeaponType";
		propertyName2 = "player_newShotgunWeaponTime";
	}

	DECORATOR::DECOR_SET_INT(Global_35, propertyName, hParam0);
	value = func_127();
	func_628(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_424(Hash hParam0) // Position - 0x1E354 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_629(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("ammo_arrow")) <= 0)
			num = 10;
		else
			num = 0;
	}
	else if (WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
			num = 12;
		else
			num = WEAPON::GET_WEAPON_CLIP_SIZE(hParam0) * 4;
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_425(Hash hParam0) // Position - 0x1E3D0 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_426(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1E3E2 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_427(Hash hParam0) // Position - 0x1E408 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_224(50))
			{
				if (!func_224(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_224(51))
			{
				if (!func_224(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_428() // Position - 0x1E474 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_429(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x1E485 Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	int num;
	int num2;
	int num3;
	BOOL flag;
	Hash componentHash;
	int num4;
	int num5;
	int numComponentsInPed;

	if (!func_201(hParam1, 0))
		return false;

	if (func_221(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_92() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_226(hParam1) == -999503751)
		return true;

	num = func_630(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_222(hParam1, 866047851))
	{
		num2 = func_467(num, 1);
	
		if (func_631(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (num)
	{
		case -1944638739:
			num2 = 35;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_222(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_632(1868067663, &unk))
			{
				*uParam2 = 939463734;
				return false;
			}
		
			[[fallthrough]];
	
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!flag)
				break;
		
			numComponentsInPed = PED::_GET_NUM_COMPONENTS_IN_PED(pedParam0);
			num5 = func_633(componentHash, num, metaPedType, isMP);
			num4 = func_633(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
			if ((numComponentsInPed + num5) - num4 > 31)
			{
				*uParam2 = -1608241763;
				return false;
			}
			break;
	
		case 1742327865:
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metaPedType, isMP) == joaat("neckties") && PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
		
			num2 = 10;
			hash = func_226(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num2 = 36;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
	
		case 1958421083:
			hash = func_226(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_222(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_634(Global_1946054.f_1497.f_1[num2 /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

void func_430() // Position - 0x1E795 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_431() // Position - 0x1E7B6 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	var unk;

	num = Global_40.f_11095.f_44;
	unk = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - unk);
	return;
}

int func_432() // Position - 0x1E80B Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_252(func_635(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_433(Hash hParam0) // Position - 0x1E83D Hash - 0xBD10D1A2 ^0xAD2FE305
{
	switch (hParam0)
	{
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("provision_earring_silver"):
		case joaat("provision_rs_abalone_shell_fragment"):
			return joaat("provision_talisman_buffalo_horn");
	
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("provision_bracelet_silver"):
		case joaat("provision_rc_quartz_chunk"):
			return joaat("provision_talisman_bear_claw");
	
		case joaat("provision_bracelet_gold"):
		case joaat("provision_cc_vintage_handcuffs"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("provision_talisman_alligator_tooth");
	
		case joaat("provision_rf_wood_cobalt"):
		case joaat("provision_earring_gold"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("provision_talisman_boar_tusk");
	
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("provision_talisman_raven_claw");
	}

	return 0;
}

BOOL func_434(int iParam0, Hash hParam1) // Position - 0x1E8D3 Hash - 0x33707815 ^0xEA5B7C5C
{
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			if (hParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				hash = joaat("provision_rs_abalone_shell_fragment");
				hash2 = joaat("provision_earring_silver");
			}
			else if (hParam1 == joaat("provision_rs_abalone_shell_fragment"))
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_earring_silver");
			}
			else
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_rs_abalone_shell_fragment");
			}
			break;
	
		case joaat("provision_talisman_bear_claw"):
			if (hParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				hash = joaat("provision_rc_quartz_chunk");
				hash2 = joaat("provision_bracelet_silver");
			}
			else if (hParam1 == joaat("provision_rc_quartz_chunk"))
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_bracelet_silver");
			}
			else
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_rc_quartz_chunk");
			}
			break;
	
		case joaat("provision_talisman_boar_tusk"):
			if (hParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				hash = joaat("provision_rf_wood_cobalt");
				hash2 = joaat("provision_earring_gold");
			}
			else if (hParam1 == joaat("provision_rf_wood_cobalt"))
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_earring_gold");
			}
			else
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_rf_wood_cobalt");
			}
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			if (hParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				hash = joaat("provision_cc_vintage_handcuffs");
				hash2 = joaat("provision_bracelet_gold");
			}
			else if (hParam1 == joaat("provision_cc_vintage_handcuffs"))
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_bracelet_gold");
			}
			else
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_cc_vintage_handcuffs");
			}
			break;
	}

	if (func_252(hash, 1, false) && func_252(hash2, 1, false))
		return true;

	return false;
}

Hash func_435(Hash hParam0) // Position - 0x1EA34 Hash - 0xB8EC44B7 ^0x8CFD1640
{
	switch (hParam0)
	{
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("provision_trinket_wolf_heart");
	
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_pronghorn_antler");
	
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("provision_trinket_fox_claw");
	
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("provision_trinket_coyote_fang");
	
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("provision_trinket_ram_horn");
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_buck_antler");
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_elk_antler");
	
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("provision_trinket_cougar_fang");
	
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("provision_trinket_bison_horn");
	
		case joaat("provision_lions_paw"):
			return joaat("provision_trinket_lion_paw");
	
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_moose_antler");
	
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("provision_trinket_beaver_tooth");
	
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("provision_trinket_panther_eye");
	
		default:
		
	}

	return 0;
}

BOOL func_436(Hash hParam0, int iParam1) // Position - 0x1EAFB Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_636(hParam0);

	if (num != -15)
	{
		func_628(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_637(num, true);
	}

	return false;
}

int func_437(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1EB2D Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_252(joaat("provision_trinket_elk_antler"), 1, false))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_201(hash, 0) && func_222(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_438(int iParam0, const char* sParam1, int iParam2) // Position - 0x1EBF2 Hash - 0x4DF85B80 ^0x922FAFC8
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_318(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_439(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x1EC33 Hash - 0x9636EF60 ^0x355C8D65
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * iParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_638())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_318(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_639(num);
			func_640(num, 0, 0);
		}
	
		func_318(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_194(func_193(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_440(int iParam0) // Position - 0x1ED0F Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_441(int iParam0) // Position - 0x1ED2A Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_442(int iParam0) // Position - 0x1ED45 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_443(int iParam0) // Position - 0x1ED60 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_444(int iParam0) // Position - 0x1ED7B Hash - 0xC69F7374 ^0xCEC8F963
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam0)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_453(hash);
	num3 = func_453(hash2);
	num4 = func_453(hash3);
	num6 = func_454(hash);
	num7 = func_454(hash2);
	num8 = func_454(hash3);

	if (iParam0 != 2)
	{
		num5 = func_453(hash4);
		num9 = func_454(hash4);
	}

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam0 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

void func_445(int iParam0) // Position - 0x1EEEE Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_446() // Position - 0x1EF09 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_641(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_447() // Position - 0x1EF42 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_448(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x1EF54 Hash - 0x9548C303 ^0x2CDF6383
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	switch (hParam0)
	{
		case joaat("taxidermy_order_05"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_02"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_01"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			break;
	
		case joaat("taxidermy_order_04"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_03"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
	}

	if (hParam0 == joaat("taxidermy_order_01"))
	{
		if (bParam3)
			if (func_611(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_611(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_611(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_611(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_611(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_611(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash) && func_611(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_611(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_611(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_611(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash) && func_611(hash2) && func_611(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_611(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_611(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_611(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_611(hash) && func_611(hash2) && func_611(hash3) && func_611(hash4))
			return true;
	}

	return false;
}

void func_449(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F419 Hash - 0x5A64C5C8 ^0x6D52F178
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_644();
			func_642(iParam0);
			break;
	
		case -1925798111:
			func_642(-1925798111);
			func_643(-919512195);
			func_643(420709909);
			func_643(1703426636);
			break;
	
		case -1838352012:
			func_643(-1674179981);
			func_643(-1835851517);
			func_642(-1838352012);
			break;
	
		case -1835851517:
			func_643(-1674179981);
			func_643(-1838352012);
			func_642(-1835851517);
			break;
	
		case -1738165526:
			func_642(-1738165526);
			func_643(0);
			func_643(473295046);
			break;
	
		case -1717960576:
			func_643(210001842);
			func_642(-1717960576);
			break;
	
		case -1674179981:
			func_643(-1835851517);
			func_643(-1838352012);
			func_642(-1674179981);
			break;
	
		case -1612662716:
			func_643(1822001510);
			func_642(-1612662716);
			break;
	
		case -1414537028:
			func_643(38162571);
			func_643(1350391819);
			func_643(54073871);
			func_642(-1414537028);
			break;
	
		case -1311865656:
			func_642(-1311865656);
			func_643(1509509592);
			func_643(-959357075);
			func_643(405586984);
			break;
	
		case -1271608261:
			func_643(-150493654);
			func_643(1846061697);
			func_643(-1145519186);
			func_642(-1271608261);
			break;
	
		case -1223121209:
			func_642(-1223121209);
			func_643(630808005);
			break;
	
		case -1145519186:
			func_643(-150493654);
			func_643(-1271608261);
			func_643(1846061697);
			func_642(-1145519186);
			break;
	
		case -1124061431:
			func_643(198200492);
			func_642(-1124061431);
			func_643(52706132);
			func_643(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_642(-1080627546);
			else
				func_643(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_643(-538889627);
			func_643(-538880323);
			func_643(-1056767524);
			func_642(iParam0);
			break;
	
		case -959357075:
			func_642(-959357075);
			func_643(1509509592);
			func_643(405586984);
			func_643(-1311865656);
			break;
	
		case -919512195:
			func_642(-919512195);
			func_643(-1925798111);
			func_643(420709909);
			func_643(1703426636);
			break;
	
		case -664252410:
			func_643(2019386373);
			func_643(2109952320);
			func_642(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_645();
			func_642(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_642(-524145696);
			else
				func_643(-524145696);
		
			func_643(1626481264);
			func_643(282809459);
			break;
	
		case -502324015:
			func_643(1497516462);
			func_643(2016141805);
			func_643(1010885152);
			func_642(-502324015);
			break;
	
		case -434590080:
			func_643(1376646519);
			func_643(931649776);
			func_643(1743048395);
			func_643(449774763);
			func_642(-434590080);
			break;
	
		case -404698347:
			func_643(1306158345);
			func_643(1952610440);
			func_643(-223469678);
			func_643(1517904467);
			func_642(-404698347);
			break;
	
		case -259123672:
			func_643(198200492);
			func_643(-1124061431);
			func_643(52706132);
			func_642(-259123672);
			break;
	
		case -223469678:
			func_643(1306158345);
			func_643(1952610440);
			func_643(-404698347);
			func_643(1517904467);
			func_642(-223469678);
			break;
	
		case -150493654:
			func_643(-1271608261);
			func_643(1846061697);
			func_643(-1145519186);
			func_642(-150493654);
			break;
	
		case 0:
			func_642(0);
			func_643(473295046);
			func_643(-1738165526);
			break;
	
		case 38162571:
			func_643(-1414537028);
			func_643(1350391819);
			func_643(54073871);
			func_642(38162571);
			break;
	
		case 52706132:
			func_643(198200492);
			func_643(-1124061431);
			func_642(52706132);
			func_643(-259123672);
			break;
	
		case 54073871:
			func_643(-1414537028);
			func_643(38162571);
			func_643(1350391819);
			func_642(54073871);
			break;
	
		case 198200492:
			func_642(198200492);
			func_643(-1124061431);
			func_643(52706132);
			func_643(-259123672);
			break;
	
		case 210001842:
			func_643(-1717960576);
			func_642(210001842);
			break;
	
		case 280705402:
			func_643(1766284049);
			func_643(1926308480);
			func_642(280705402);
			break;
	
		case 282809459:
			func_642(282809459);
			func_643(1626481264);
			func_643(-524145696);
			break;
	
		case 405586984:
			func_642(405586984);
			func_643(1509509592);
			func_643(-959357075);
			func_643(-1311865656);
			break;
	
		case 420709909:
			func_642(420709909);
			func_643(-919512195);
			func_643(-1925798111);
			func_643(1703426636);
			break;
	
		case 439465264:
			if (func_135(1609506757))
				if (bParam1)
					func_642(439465264);
				else
					func_643(439465264);
			break;
	
		case 449774763:
			func_643(1376646519);
			func_643(931649776);
			func_643(-434590080);
			func_643(1743048395);
			func_642(449774763);
			break;
	
		case 473295046:
			func_642(473295046);
			func_643(0);
			func_643(-1738165526);
			break;
	
		case 630808005:
			func_642(630808005);
			func_643(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_642(885203519);
			else
				func_643(885203519);
			break;
	
		case 931649776:
			func_643(1376646519);
			func_643(-434590080);
			func_643(1743048395);
			func_643(449774763);
			func_642(931649776);
			break;
	
		case 932909855:
			func_642(932909855);
			func_643(2051822093);
			break;
	
		case 1010885152:
			func_643(1497516462);
			func_643(2016141805);
			func_642(1010885152);
			func_643(-502324015);
			break;
	
		case 1306158345:
			func_643(1952610440);
			func_643(-223469678);
			func_643(-404698347);
			func_643(1517904467);
			func_642(1306158345);
			break;
	
		case 1350391819:
			func_643(-1414537028);
			func_643(38162571);
			func_643(54073871);
			func_642(1350391819);
			break;
	
		case 1376646519:
			func_643(931649776);
			func_643(-434590080);
			func_643(1743048395);
			func_643(449774763);
			func_642(1376646519);
			break;
	
		case 1453909576:
			func_642(1453909576);
			func_643(1643531967);
			break;
	
		case 1497516462:
			func_642(1497516462);
			func_643(2016141805);
			func_643(1010885152);
			func_643(-502324015);
			break;
	
		case 1509509592:
			func_642(1509509592);
			func_643(405586984);
			func_643(-959357075);
			func_643(-1311865656);
			break;
	
		case 1517904467:
			func_643(1306158345);
			func_643(1952610440);
			func_643(-223469678);
			func_643(-404698347);
			func_642(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_643(439465264);
				func_642(1609506757);
			}
			else
			{
				func_643(1609506757);
				func_643(439465264);
			}
			break;
	
		case 1626481264:
			func_642(1626481264);
			func_643(-524145696);
			func_643(282809459);
			break;
	
		case 1643531967:
			func_642(1643531967);
			func_643(1453909576);
			break;
	
		case 1703426636:
			func_642(1703426636);
			func_643(-919512195);
			func_643(-1925798111);
			func_643(420709909);
			break;
	
		case 1743048395:
			func_643(1376646519);
			func_643(931649776);
			func_643(-434590080);
			func_643(449774763);
			func_642(1743048395);
			break;
	
		case 1766284049:
			func_643(280705402);
			func_643(1926308480);
			func_642(1766284049);
			break;
	
		case 1822001510:
			func_643(-1612662716);
			func_642(1822001510);
			break;
	
		case 1846061697:
			func_643(-150493654);
			func_643(-1271608261);
			func_643(-1145519186);
			func_642(1846061697);
			break;
	
		case 1926308480:
			func_643(1766284049);
			func_643(280705402);
			func_642(1926308480);
			break;
	
		case 1952610440:
			func_643(1306158345);
			func_643(-223469678);
			func_643(-404698347);
			func_643(1517904467);
			func_642(1952610440);
			break;
	
		case 2016141805:
			func_643(1497516462);
			func_642(2016141805);
			func_643(1010885152);
			func_643(-502324015);
			break;
	
		case 2019386373:
			func_643(-664252410);
			func_643(2109952320);
			func_642(2019386373);
			break;
	
		case 2051822093:
			func_642(2051822093);
			func_643(932909855);
			break;
	
		case 2109952320:
			func_643(2019386373);
			func_643(-664252410);
			func_642(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_135(iParam0))
					func_642(iParam0);
			else if (func_135(iParam0))
				func_643(iParam0);
			break;
	}

	return;
}

void func_450(Hash hParam0) // Position - 0x1FF3C Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_646(hParam0))
		func_648(func_647(hParam0));

	return;
}

int func_451() // Position - 0x1FF58 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_646(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_452(Hash hParam0, int iParam1, int iParam2) // Position - 0x1FF90 Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_453(hash);
	num3 = func_453(hash2);
	num4 = func_453(hash3);
	num6 = func_454(hash);
	num7 = func_454(hash2);
	num8 = func_454(hash3);

	if (iParam2 != 2)
	{
		num5 = func_453(hash4);
		num9 = func_454(hash4);
	}

	if (hParam0 == hash)
		if (num2 + iParam1 >= num6)
			num = num + num6;
		else
			num = num + num2 + iParam1;
	else if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (hParam0 == hash2)
		if (num3 + iParam1 >= num7)
			num = num + num7;
		else
			num = num + num3 + iParam1;
	else if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (hParam0 == hash3)
		if (num4 + iParam1 >= num8)
			num = num + num8;
		else
			num = num + num4 + iParam1;
	else if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (hParam0 == hash4)
			if (num5 + iParam1 >= num9)
				num = num + num9;
			else
				num = num + num5 + iParam1;
		else if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_453(Hash hParam0) // Position - 0x201A7 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_252(hParam0, 1, false))
		num = func_205(hParam0, false, false);

	return num;
}

int func_454(Hash hParam0) // Position - 0x201C6 Hash - 0xEED5739D ^0xEED5739D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 3;
	
		case joaat("provision_ro_flower_cigar"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 10;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
	
		case joaat("provision_ro_flower_night_scented"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 15;
	
		case joaat("provision_ro_flower_sparrows"):
			return 10;
	
		case joaat("provision_ro_flower_queens"):
			return 5;
	
		case joaat("provision_ro_flower_spider"):
			return 5;
	
		case joaat("provision_ro_flower_dragons"):
			return 5;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 7;
	
		case joaat("provision_ro_flower_moccasin"):
			return 10;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
	
		case joaat("provision_ro_flower_ghost"):
			return 5;
	
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
	
		default:
		
	}

	return 0;
}

int func_455(Hash hParam0) // Position - 0x2029F Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_456(Hash hParam0, int iParam1) // Position - 0x202AD Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_457(Hash hParam0, int iParam1) // Position - 0x202BD Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_595(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_458(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x202EC Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_457(hParam1, 5) || hParam0 == func_457(hParam1, 6) || hParam0 == func_457(hParam1, 7) || hParam0 == func_457(hParam1, 8) || hParam0 == func_457(hParam1, 9))
	{
		func_448(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_218(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_220(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_459(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x2036E Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_457(hParam1, 5) || hParam0 == func_457(hParam1, 6) || hParam0 == func_457(hParam1, 7) || hParam0 == func_457(hParam1, 8) || hParam0 == func_457(hParam1, 9))
	{
		if (func_448(hParam1, hParam0, &num, false, 0, false))
		{
			func_218(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_220(51, 0, 0, num, func_399(hParam1, 20), 1, 0);
		}
		else
		{
			func_218(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_220(51, 0, 0, num, func_399(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_460() // Position - 0x2042F Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_130(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

BOOL func_461(Hash hParam0, int iParam1) // Position - 0x20458 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_201(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_390(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_476("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_477(&unk, i, num, num2))
			{
			}
			else if (!func_416(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_478(num);
				return true;
			}
		}
	
		func_478(num);
	}

	return false;
}

void func_462(Hash hParam0) // Position - 0x20500 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_463(Hash hParam0) // Position - 0x2050F Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_649(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_464(Hash hParam0) // Position - 0x20528 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_465(Hash hParam0, var uParam1, var uParam2) // Position - 0x20537 Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_466(var uParam0) // Position - 0x20743 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_650(i, 1);
	}

	return -358215195;
}

int func_467(int iParam0, int iParam1) // Position - 0x2077E Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_468(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2094F Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_651();

	if (iParam2 == 39)
	{
		unk = { func_384(hParam0, true, false) };
		iParam2 = func_467(func_466(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_222(hParam0, 866047851) && func_631(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_471(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_652(func_650(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_653(iParam2);
	func_654(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_655(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_655(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_656(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_657(hParam0, iParam2, hParam1, func_92() != -1);

	if (bParam4)
		func_658(&(Global_1946054.f_1378), true, 3);
	else
		func_658(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_659(func_650(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_469(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x20B5C Hash - 0x5AF76643 ^0x5AF76643
{
	func_660(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_470(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x20B75 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_661(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_662(num);
	return;
}

BOOL func_471(BOOL bParam0) // Position - 0x20BA7 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_472() // Position - 0x20BB8 Hash - 0xB6203BF0 ^0x217DD714
{
	func_663(&(Global_1946054.f_2776));
	func_664(32768);
	func_659(1108822547, 8, 6);
	return;
}

int func_473(int iParam0) // Position - 0x20BDF Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_467(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_474(int iParam0) // Position - 0x20C43 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_665(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_666(num);
	return;
}

void func_475(int iParam0, int iParam1, int iParam2) // Position - 0x20C87 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_666(num);
	return;
}

BOOL func_476(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x20CA7 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_307(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_477(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x20CCE Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_478(int iParam0) // Position - 0x20D09 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

float func_479() // Position - 0x20D2A Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_667())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_668(2);

	if (Global_1347477.f_119)
		return func_668(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_669();
	num3 = func_670();
	num4 = func_671();
	num5 = func_672();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_673());
	num8 = func_668(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_674(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_675(3, num9, num9 > 100f);
	return func_676(num8, -100f, 100f);
}

float func_480() // Position - 0x20E53 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_667())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_668(1);

	if (Global_1347477.f_119)
		return func_668(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_669();
	num3 = func_670();
	num4 = func_671();
	num5 = func_672();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_673());
	num8 = func_668(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_674(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_675(2, num9, num9 > 100f);
	return func_676(num8, -100f, 100f);
}

float func_481() // Position - 0x20F7C Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_667())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_668(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_677())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_678())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_668(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_669();
	num3 = func_670();
	num4 = func_671();
	num5 = func_672();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_673());
	num8 = func_668(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_674(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_675(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_668(0);

	return func_676(num8, -100f, 100f);
}

BOOL func_482(int iParam0, int iParam1) // Position - 0x21123 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_483(Hash hParam0) // Position - 0x2113C Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_484(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x2114C Hash - 0x86E39CDA ^0xCF922D1
{
	!func_201(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_388(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_230(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_307(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_485(int iParam0, BOOL bParam1) // Position - 0x211AE Hash - 0x6C404ADF ^0x7D516F33
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946054.f_2657.f_21;
	
		case -1719060085:
			return Global_1946054.f_2657.f_24;
	
		case -999503751:
			if (bParam1)
				return Global_1946054.f_2657.f_20;
			else
				return func_679();
			break;
	
		case -525676072:
			return Global_1946054.f_2657.f_22;
	
		case -413129408:
			return Global_1946054.f_2657.f_25;
	
		case 81053684:
			return Global_1946054.f_2657.f_23;
	}

	return 0;
}

int func_486(Hash hParam0) // Position - 0x2123D Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (hParam0)
	{
		case -2114499732:
			return 18;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
	
		case -1951220140:
			return 78;
	
		case -1914506115:
			return 71;
	
		case -1826731591:
			return 24;
	
		case -1725704631:
			return 81;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
	
		case -1611873049:
			return 91;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
	
		case -1476781101:
			return 10;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
	
		case -1303643297:
			return 86;
	
		case -1300731953:
			return 74;
	
		case -1243402388:
			return 66;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
	
		case -1205612021:
			return 70;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
	
		case -978578725:
			return 94;
	
		case -926815459:
			return 72;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
	
		case -769081407:
			return 16;
	
		case -659341240:
			return 85;
	
		case -535599244:
			return 89;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
	
		case -409616653:
			return 65;
	
		case -389591806:
			return 73;
	
		case -361635024:
			return 62;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
	
		case -291256376:
			return 23;
	
		case -272211555:
			return 61;
	
		case -55563408:
			return 64;
	
		case -19271249:
			return 82;
	
		case 65931886:
			return 67;
	
		case 162509669:
			return 3;
	
		case 166243423:
			return 0;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
	
		case 214175524:
			return 84;
	
		case 274995506:
			return 5;
	
		case 294553332:
			return 11;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
	
		case 411856831:
			return 88;
	
		case 439606975:
			return 14;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
	
		case 523337834:
			return 80;
	
		case 594312243:
			return 92;
	
		case 624063935:
			return 9;
	
		case 635948769:
			return 4;
	
		case 688004210:
			return 20;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
	
		case 800827126:
			return 19;
	
		case 802495462:
			return 75;
	
		case 842905332:
			return 77;
	
		case 890706995:
			return 93;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
	
		case 1156438275:
			return 90;
	
		case 1160643979:
			return 8;
	
		case 1164374808:
			return 7;
	
		case 1201189539:
			return 28;
	
		case 1257427489:
			return 83;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
	
		case 1351927599:
			return 21;
	
		case 1352942778:
			return 26;
	
		case 1371678229:
			return 68;
	
		case 1383300684:
			return 1;
	
		case 1389254668:
			return 58;
	
		case 1460520700:
			return 76;
	
		case 1511551084:
			return 79;
	
		case 1560492757:
			return 15;
	
		case 1661121390:
			return 6;
	
		case 1784889667:
			return 13;
	
		case 1788874135:
			return 12;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
	
		case 1902428294:
			return 17;
	
		case 1964379549:
			return 27;
	
		case 2032023096:
			return 22;
	
		case 2038771525:
			return 87;
	
		case 2051441678:
			return 2;
	
		case 2102263084:
			return 69;
	
		case 2119049229:
			return 25;
	
		default:
		
	}

	return -1;
}

BOOL func_487(int iParam0) // Position - 0x21650 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

void func_488(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2166F Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_487(iParam0))
		return;

	if (func_680(iParam0))
		return;

	if (!func_681(iParam0))
		func_682(iParam0, true, false);

	hash = func_683(iParam0);

	if (hash != 0 && !(iParam0 >= 0 && iParam0 <= 5))
		if (func_684(iParam0, 512))
			func_470(30, hash, 0, 0, false);

	if (!func_685() && !bParam1 && !func_686(0, false, true))
		func_509(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_687(iParam0, 6);

	if (bParam2)
		if (!func_686(0, false, true))
			func_37(true, 4);

	return;
}

int func_489() // Position - 0x21735 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_490(int iParam0, BOOL bParam1) // Position - 0x21743 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_485(iParam0, false) < func_688(iParam0, bParam1);
}

BOOL func_491(Hash hParam0, var uParam1) // Position - 0x2175B Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_226(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_492(int iParam0) // Position - 0x2179F Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_467(iParam0, 1) /*3*/] != Global_1946054.f_57[func_467(iParam0, 1) /*11*/];
}

void func_493(int iParam0, Hash hParam1) // Position - 0x217D7 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_222(hParam1, 130796156))
	{
		func_689(hParam1, false);
	}
	else if (func_222(hParam1, 930141731))
	{
		func_689(hParam1, true);
		func_690(iParam0);
	}

	return;
}

void func_494(var uParam0, int iParam1) // Position - 0x21812 Hash - 0x84556899 ^0xA18AFCFA
{
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		if (iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE") || iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING") || iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL"))
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

int func_495(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x218F3 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_691(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_692(anParam2, hParam0, num);
	return 1;
}

var func_496(int iParam0) // Position - 0x2195C Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x2196E Hash - 0xA17D549C ^0x56195BA9
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
	
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
	
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
	
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
	
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
	
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
	
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
	
		case 7:
			return "PROVISION_FISH_MUSKIE";
	
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
	
		case 9:
			return "PROVISION_FISH_PERCH";
	
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
	
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
	
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
	
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
	
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
	
		default:
		
	}

	return "FISHTYPE_UNKNOWN";
}

Hash func_498(Hash hParam0) // Position - 0x21A45 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_693(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

BOOL func_499() // Position - 0x21A6F Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_500(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x21A7C Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_501(BOOL bParam0, var uParam1, var uParam2) // Position - 0x21AE6 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_502(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x21AFD Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

const char* func_503(const char* sParam0, int iParam1) // Position - 0x21BF0 Hash - 0x9E99F03 ^0xDCC7B175
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_504(int iParam0) // Position - 0x21C0A Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_505(int iParam0) // Position - 0x21C3D Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_694(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_506(Ped pedParam0) // Position - 0x21C7E Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(pedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

BOOL func_507(Ped pedParam0) // Position - 0x21D66 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_695(pedParam0, 4) || func_695(pedParam0, 5);
}

BOOL func_508(Ped pedParam0) // Position - 0x21D82 Hash - 0x8F7DFED5 ^0x8768F0B4
{
	var lootTarget;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 0, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 2, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_REFRESH_LOOT_STATE_FOR_PED(pedParam0, 1, &lootTarget, 1, 1) != 0)
		return true;

	if (PED::_0x758F081DB204DDDE(pedParam0))
		return true;

	return false;
}

int func_509(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x21DEC Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_510(int iParam0) // Position - 0x21E27 Hash - 0xCB0CD3AF ^0x98FF0773
{
	Ped mount;

	mount = PED::GET_MOUNT(Global_35);

	if (!func_696(Global_35))
		return false;

	if (!func_294(iParam0, 16) && !func_697(mount, false))
		return false;

	return true;
}

void func_511(int iParam0, int iParam1) // Position - 0x21E65 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_512(int iParam0, int iParam1) // Position - 0x21E76 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

BOOL func_513(int iParam0) // Position - 0x21E8B Hash - 0xA059D395 ^0xE600C05
{
	return func_39(Global_1935496.f_27, iParam0);
}

int func_514() // Position - 0x21E9F Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_515(BOOL bParam0, var uParam1, var uParam2) // Position - 0x21EAF Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_516(int iParam0, BOOL bParam1) // Position - 0x21EC6 Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_698(bParam1);

	return;
}

void func_517(Hash hParam0) // Position - 0x21EE1 Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_518(int iParam0) // Position - 0x21EF4 Hash - 0x8FB6A40C ^0x44B642DE
{
	if (iParam0 <= -320)
		return "HONOR_BAD_8";
	else if (iParam0 <= -280)
		return "HONOR_BAD_7";
	else if (iParam0 <= -240)
		return "HONOR_BAD_6";
	else if (iParam0 <= -200)
		return "HONOR_BAD_5";
	else if (iParam0 <= -160)
		return "HONOR_BAD_4";
	else if (iParam0 <= -120)
		return "HONOR_BAD_3";
	else if (iParam0 <= -80)
		return "HONOR_BAD_2";
	else if (iParam0 < 0)
		return "HONOR_BAD_1";
	else if (iParam0 <= 40)
		return "HONOR_GOOD_1";
	else if (iParam0 >= 320)
		return "HONOR_GOOD_8";
	else if (iParam0 >= 280)
		return "HONOR_GOOD_7";
	else if (iParam0 >= 240)
		return "HONOR_GOOD_6";
	else if (iParam0 >= 200)
		return "HONOR_GOOD_5";
	else if (iParam0 >= 160)
		return "HONOR_GOOD_4";
	else if (iParam0 >= 120)
		return "HONOR_GOOD_3";
	else if (iParam0 >= 80)
		return "HONOR_GOOD_2";

	return "HONOR_GOOD_1";
}

BOOL func_519(var uParam0) // Position - 0x22015 Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_595(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -2103982008;
		*uParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
		return true;
	}

	return false;
}

BOOL func_520(int iParam0, var uParam1, var uParam2) // Position - 0x2205D Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_595(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -57097983;
		unk.f_3 = iParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam1 = unk6;
			unk.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

Hash func_521(Hash hParam0) // Position - 0x220DD Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_522() // Position - 0x220E7 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_309();

	switch (num)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
	
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
	
		default:
		
	}

	return joaat("SHOP_HONOR_AMORAL");
}

void func_523(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x22136 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_524(int iParam0) // Position - 0x22167 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_525(int iParam0, var uParam1, var uParam2) // Position - 0x22186 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_524(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

void func_526(var uParam0, int iParam1) // Position - 0x22355 Hash - 0x412CBE36 ^0x412CBE36
{
	uParam0->[iParam1] = -1;
	return;
}

void func_527(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x22364 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_699(eptParam1))
		{
			func_153(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_700(pedParam0, 0, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_701(pedParam0, false);
			flag = true;
		}
	
		func_702(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

// Unhandled jump detected. Output should be considered invalid
char* func_528(var uParam0, int iParam1) // Position - 0x22445 Hash - 0x2F7A8C9F ^0xA91B5605
{
	switch (*uParam0)
	{
		case -415839138:
			switch (iParam1)
			{
				case 0:
					return "monk";
			
				default:
					break;
			}
			break;
	
		case 1861313914:
			if (func_16(59))
			{
				switch (iParam1)
				{
					case 0:
						return "BraithwaitesSecret";
				
					default:
						goto 0x50;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "Girl";
				
					default:
						break;
				}
			}
			break;
	}

	return "";
}

void func_529(int iParam0) // Position - 0x224B7 Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_703();

	if (Global_1935630.f_27)
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();

	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
			{
			}
			else
			{
				weaponHash = Global_1935630.f_44;
			}
		
			Global_1935630.f_46 = weaponHash;
		}
	}

	switch (num)
	{
		case 0:
			func_704(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
	
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
		
			if (!Global_1935630.f_30)
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
			break;
	
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
			
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3f;
					else
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1f;
				
					if (Global_1935630.f_25)
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					break;
			}
			break;
	
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}

	Global_22 = Global_22 | 4;
	return;
}

var func_530(int iParam0) // Position - 0x22623 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_531(BOOL bParam0) // Position - 0x22636 Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_705(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_532(int iParam0) // Position - 0x22650 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_92() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_706(iParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_706(iParam0);

	if (ped == 0)
		return false;

	if (func_562(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	iParam0->f_14 = ped;
	return true;
}

void func_533(int iParam0) // Position - 0x226EA Hash - 0x256C27DD ^0x256C27DD
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
		func_707(iParam0);

	return;
}

BOOL func_534(Ped pedParam0, int iParam1, Ped* ppedParam2) // Position - 0x22711 Hash - 0x7FBD27D8 ^0x4C0BB7C4
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(ppedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(ppedParam2))
		num2 = func_562(ppedParam2);
	else
		num2 = func_561(ppedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_562(pedParam0);
	else
		num = func_561(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_294(*iParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(ppedParam2);

	switch (pedRelationshipGroupHash)
	{
		case joaat("rel_civmale"):
		case joaat("rel_re_victim"):
		case joaat("rel_civnative"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_cop"):
		case joaat("rel_civfemale"):
			switch (pedRelationshipGroupHash2)
			{
				case joaat("rel_civmale"):
				case joaat("rel_re_victim"):
				case joaat("rel_civnative"):
				case joaat("rel_civfemale"):
					return true;
			}
			break;
	}

	if (pedRelationshipGroupHash == pedRelationshipGroupHash2)
		return true;

	return false;
}

float func_535(Ped pedParam0, Ped pedParam1) // Position - 0x2280A Hash - 0xF9959663 ^0xF9959663
{
	return func_558(pedParam0, pedParam1, true, true);
}

float func_536(int iParam0) // Position - 0x2281C Hash - 0xD73B9827 ^0xDE12990D
{
	return iParam0->f_26;
}

BOOL func_537(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22828 Hash - 0x5A9E12AC ^0x5A9E12AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 2048:
			return true;
	
		case 4:
		case 16:
			return bParam1;
	
		case 8:
			return bParam2;
	
		case 32:
		case 64:
		case 128:
			return bParam3;
	
		case 8192:
			return bParam4;
	
		default:
		
	}

	return false;
}

void func_538(int iParam0, BOOL bParam1) // Position - 0x2288D Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_511(iParam0, 134217728);
	else
		func_512(iParam0, 134217728);

	return;
}

void func_539() // Position - 0x228B3 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_540(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x228C7 Hash - 0x7ED53456 ^0xD7A590DD
{
	Ped ped;
	Player playerIndex;
	Entity outEntity;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(outEntity) && pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return false;
	}

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	if (bParam3)
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_558(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_708(ped, 0)))
			if (func_709(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_541(int iParam0) // Position - 0x22A27 Hash - 0xD73B9827 ^0x8CE07B2A
{
	return iParam0->f_17;
}

BOOL func_542(int iParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x22A33 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (iParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_294(*iParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*iParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_543(int iParam0) // Position - 0x22A94 Hash - 0xD73B9827 ^0x372EC0B
{
	return iParam0->f_18;
}

BOOL func_544(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x22AA0 Hash - 0x838BDEFB ^0xB1D5C032
{
	Ped ped;
	Player playerIndex;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	bParam3;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, eParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, eParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_708(ped, 0)))
			if (func_710(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_545(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x22B62 Hash - 0xC9655EC3 ^0x88C9AFE1
{
	if (Global_1935630.f_18)
		if (bParam2 || Global_1935630.f_19 > 0 || Global_1935630.f_17 > 0)
			return 1;
	else if (bParam1 && !(Global_1935630.f_15 == 1370593166))
		return 0;

	if (Global_1935630.f_20 > 0 || bParam2 && Global_1935630.f_20 > -1)
		return 1;

	if (bParam0)
		if (Global_1935630.f_13)
			if (bParam2 || Global_1935630.f_21 > 0)
				return 1;

	return 0;
}

float func_546(int iParam0) // Position - 0x22C00 Hash - 0xD73B9827 ^0x9F7F0764
{
	return iParam0->f_23;
}

int func_547(int iParam0) // Position - 0x22C0C Hash - 0xD73B9827 ^0x303D0BA3
{
	return iParam0->f_21;
}

int func_548(int iParam0) // Position - 0x22C18 Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 1;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 1:
			switch (iParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 0;
					break;
			}
			break;
	
		case 2:
			switch (iParam0->f_6)
			{
				case 1:
					num = 2;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	
		case 3:
			switch (iParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	}

	if (*iParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_549(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x22D55 Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_101(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_550(Ped pedParam0) // Position - 0x22D98 Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_711(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_551(Ped pedParam0) // Position - 0x22DFE Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_552(int iParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22E2A Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_506(pedParam1))
			return false;

	num = 5f;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_553(int iParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22E71 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_506(pedParam1))
			return false;

	num = 10f;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_554(int iParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x22EBC Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_506(pedParam1))
		return false;

	if (*iParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_555(Ped pedParam0, var uParam1) // Position - 0x22F35 Hash - 0x64FF5121 ^0xD9ABCD76
{
	if (!TASK::_IS_PED_LEADING_HORSE(pedParam0))
		return false;

	*uParam1 = TASK::_GET_LED_HORSE_FROM_PED(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(*uParam1))
		return false;

	return true;
}

BOOL func_556(Ped pedParam0, Ped pedParam1) // Position - 0x22F82 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_712(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_557(int iParam0) // Position - 0x22FCA Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*iParam0 & 2 != 0);
}

float func_558(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x22FDA Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_559(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x23022 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_14(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_560(int iParam0) // Position - 0x2304E Hash - 0xD73B9827 ^0x4905FA06
{
	return iParam0->f_24;
}

int func_561(Ped pedParam0) // Position - 0x2305A Hash - 0xEB445B10 ^0xAFE593
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_562(Ped pedParam0) // Position - 0x230B2 Hash - 0x6E063231 ^0x5A783E88
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_563(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x23122 Hash - 0x89708384 ^0x6760E23F
{
	BOOL flag;
	Entity entity;
	float num;

	if (Global_1935630.f_40 != 0)
		flag = true;

	if (!ENTITY::IS_ENTITY_DEAD(eParam1))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(eParam1, PLAYER::PLAYER_PED_ID(), true, true))
			return 1;

	if (flag)
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, Global_1935630.f_40, true, true))
			return 1;

	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (bParam3)
			if (func_555(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_558(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_558(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_564(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x23292 Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_705(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_565(iParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_565(iParam1, ped2))
					if (func_14(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_565(int iParam0, Ped pedParam1) // Position - 0x23380 Hash - 0x27FC2906 ^0x62520EC2
{
	Hash pedRelationshipGroupDefaultHash;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(pedParam1, "bIsCriminal"))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam1, 4, false))
		return true;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam1);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_gunslingers"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_566(int iParam0) // Position - 0x233F6 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_15())
		return false;

	return func_93(Global_1347702[58 /*49*/].f_15, true);
}

int func_567(int iParam0) // Position - 0x23418 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return iParam0->f_20;
}

BOOL func_568(Ped pedParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x23424 Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (iParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = iParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

int func_569(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x2349F Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_201(hParam0, 0))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

struct<4> func_570(BOOL bParam0) // Position - 0x234ED Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_420(joaat("character"), func_713(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_571(BOOL bParam0) // Position - 0x23509 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_307(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_420(923904168, func_570(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_420(923904168, func_570(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_420(923904168, func_570(bParam0), -740156546, false);
}

BOOL func_572(Hash hParam0, BOOL bParam1) // Position - 0x2359E Hash - 0x62864AB ^0xBC339691
{
	if (func_226(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_224(24);
		else
			return true;

	return false;
}

struct<4> func_573(BOOL bParam0) // Position - 0x235D7 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_307(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_420(271701509, func_570(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_420(271701509, func_570(bParam0), 12999093, false);
}

BOOL func_574(Hash hParam0, Hash hParam1) // Position - 0x2363B Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_226(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_575(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x2369A Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_307(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_576(Hash hParam0) // Position - 0x236CA Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_714(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_577(var uParam0) // Position - 0x236E6 Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_201(*uParam0, 0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			return 1;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			return 1;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			return 1;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			return 1;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_578(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x23762 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_201(hParam0, 0))
		return false;

	unk = { func_384(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_417(398 + i, 1);
	
		if (func_418(hParam0, &unk, hash, false))
		{
			flag = func_419(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_579(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x237F6 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_201(hParam0, 0))
		return 0;

	guid = { func_420(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_307(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<18> func_580(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2383E Hash - 0x84700F53 ^0xB9E7AA96
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

void func_581(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x23910 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_582(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x2392B Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_307(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_583(int iParam0) // Position - 0x23950 Hash - 0x92F940EE ^0x92F940EE
{
	int num;

	num = iParam0;

	if (num >= 1 && num <= 23)
		return 0;
	else if (num >= 24 && num <= 34)
		return 1;
	else if (num >= 35 && num <= 55)
		return 2;

	return 0;
}

float func_584(int iParam0) // Position - 0x239A4 Hash - 0xBAFBA316 ^0xBAFBA316
{
	switch (iParam0)
	{
		case 1:
			return 5f;
	
		case 2:
			return 20f;
	
		case 3:
			return 10f;
	
		case 4:
			return 10f;
	
		case 5:
			return 20f;
	
		case 6:
			return 10f;
	
		case 7:
			return 15f;
	
		case 8:
			return 15f;
	
		case 9:
			return 20f;
	
		case 10:
			return 5f;
	
		case 11:
			return 5f;
	
		case 12:
			return 10f;
	
		case 13:
			return 20f;
	
		case 14:
			return 30f;
	
		case 15:
			return 5f;
	
		case 16:
			return 5f;
	
		case 17:
			return 3f;
	
		case 18:
			return 20f;
	
		case 19:
			return func_715(iParam0);
	
		case 20:
			return 25f;
	
		case 21:
			return 50f;
	
		case 22:
			return 100f;
	
		case 23:
			return 150f;
	
		case 24:
			return 20f;
	
		case 25:
			return 10f;
	
		case 26:
			return 20f;
	
		case 27:
			return 20f;
	
		case 28:
			return 20f;
	
		case 29:
			return 20f;
	
		case 30:
			return func_715(iParam0);
	
		case 31:
			return 25f;
	
		case 32:
			return 50f;
	
		case 33:
			return 100f;
	
		case 34:
			return 150f;
	
		case 35:
			return 1f;
	
		case 36:
			return 5f;
	
		case 37:
			return 1f;
	
		case 38:
			return 3f;
	
		case 39:
			return 1f;
	
		case 40:
			return 1f;
	
		case 41:
			return 1f;
	
		case 42:
			return 5f;
	
		case 43:
			return 10f;
	
		case 44:
			return 5f;
	
		case 45:
			return 5f;
	
		case 46:
			return 10f;
	
		case 47:
			return 10f;
	
		case 48:
			return 5f;
	
		case 49:
			return 20f;
	
		case 50:
			return func_715(iParam0);
	
		case 51:
			return 25f;
	
		case 52:
			return 50f;
	
		case 53:
			return 100f;
	
		case 54:
			return 150f;
	
		case 55:
			return 5f;
	
		default:
		
	}

	return 0f;
}

BOOL func_585(int iParam0) // Position - 0x23C72 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_224(18);
	
		case 1:
			return func_224(19);
	
		case 2:
			return func_224(20);
	
		default:
		
	}

	return true;
}

int func_586(int iParam0) // Position - 0x23CB0 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_716(Global_40.f_11095.f_11[iParam0]);
}

void func_587(int iParam0, float fParam1, BOOL bParam2) // Position - 0x23CC8 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_92() != -1)
		return;

	if (Global_1347477.f_117 || !func_224(31))
		return;

	num = func_586(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_586(iParam0);

	if (func_717(iParam0) && func_718(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_719(num2, fParam1);
		
			if (fParam1 > (float)func_720(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_212(func_721(iParam0), false);
				
					func_722(iParam0, num3, num4);
					func_723(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_588(int iParam0) // Position - 0x23DCA Hash - 0xEB40D7A4 ^0x166CA83B
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_589(int iParam0) // Position - 0x23DD6 Hash - 0x21FAF347 ^0xAF7D8F21
{
	switch (iParam0)
	{
		case 0:
			return joaat("itemtype_player_health");
	
		case 1:
			return joaat("itemtype_player_stamina");
	
		case 2:
			return joaat("itemtype_player_deadeye");
	
		default:
		
	}

	return 0;
}

BOOL func_590(int iParam0, int iParam1) // Position - 0x23E11 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_92() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_591(int iParam0) // Position - 0x23E44 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_92() != -1)
		if (func_482(iParam0, 4))
			return false;
	else if (func_482(iParam0, 2))
		return false;

	return true;
}

BOOL func_592(int iParam0) // Position - 0x23E74 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_482(iParam0, 65536) && !func_482(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_482(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_482(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_593(int iParam0) // Position - 0x23F20 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_594() // Position - 0x23F33 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_595(int iParam0, var uParam1) // Position - 0x23F42 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_724(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_596() // Position - 0x23F6F Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_725(Global_40.f_12019);
}

int func_597() // Position - 0x23F81 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_398(i);
	
		if (func_252(hash, 1, false) || func_603(func_602(hash)))
			num = num + 1;
	}

	return num;
}

int func_598() // Position - 0x23FCA Hash - 0xB307E1C2 ^0x2C0CDFA2
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_726(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_599() // Position - 0x24005 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_608(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_600() // Position - 0x2403E Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_601(int iParam0) // Position - 0x24050 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_602(Hash hParam0) // Position - 0x24109 Hash - 0x6931DCCD ^0x96AB98B4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return true;
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
	
		default:
		
	}

	return false;
}

BOOL func_603(BOOL bParam0) // Position - 0x2419F Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_604(int iParam0) // Position - 0x241B2 Hash - 0x21CE226B ^0xF6D38404
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
	
		case 1:
			return "COL_DB_SEND";
	
		case 2:
			return "COL_DB_COLLECT";
	
		default:
		
	}

	return "";
}

int func_605(int iParam0) // Position - 0x241ED Hash - 0xDD8DC1C4 ^0xDD8DC1C4
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 8;
	
		case 4:
			return 9;
	
		default:
		
	}

	return 5;
}

int func_606(int iParam0) // Position - 0x24232 Hash - 0x499196F8 ^0x499196F8
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		case 3:
			return 18;
	
		case 4:
			return 19;
	
		default:
		
	}

	return 15;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x2427B Hash - 0xA17D549C ^0x2079DB4
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return "COL_RO_CLAMSHELL_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
	
		case joaat("provision_ro_flower_acunas_star"):
			return "COL_RO_ACUNAS_STAR_FOUND";
	
		case joaat("provision_ro_flower_cigar"):
			return "COL_RO_CIGAR_FOUND";
	
		case joaat("provision_ro_flower_rat_tail"):
			return "COL_RO_RAT_TAIL_FOUND";
	
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
	
		case joaat("provision_ro_flower_night_scented"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
	
		case joaat("provision_ro_flower_lady_of_night"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
	
		case joaat("provision_ro_flower_sparrows"):
			return "COL_RO_SPARROWS_FOUND";
	
		case joaat("provision_ro_flower_queens"):
			return "COL_RO_QUEENS_FOUND";
	
		case joaat("provision_ro_flower_spider"):
			return "COL_RO_SPIDER_FOUND";
	
		case joaat("provision_ro_flower_dragons"):
			return "COL_RO_DRAGONS_FOUND";
	
		case joaat("provision_ro_flower_lady_slipper"):
			return "COL_RO_LADY_SLIPPER_FOUND";
	
		case joaat("provision_ro_flower_moccasin"):
			return "COL_RO_MOCCASIN_FOUND";
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
	
		case joaat("provision_ro_flower_ghost"):
			return "COL_RO_GHOST_FOUND";
	
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
	
		default:
		
	}

	return "";
}

BOOL func_608(Hash hParam0) // Position - 0x24389 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Hash hParam0) // Position - 0x24399 Hash - 0xA17D549C ^0x264B6F12
{
	switch (hParam0)
	{
		case joaat("legendary_fish_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
	
		case joaat("legendary_fish_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
	
		case joaat("legendary_fish_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
	
		case joaat("legendary_fish_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
	
		case joaat("legendary_fish_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
	
		case joaat("legendary_fish_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
	
		case joaat("legendary_fish_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
	
		case joaat("legendary_fish_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
	
		case joaat("legendary_fish_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
	
		case joaat("legendary_fish_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	
		case joaat("legendary_fish_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
	
		default:
		
	}

	return "";
}

char* func_610(int iParam0) // Position - 0x24456 Hash - 0x21CE226B ^0x142CD8E
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
	
		case 1:
			return "COL_RC_SEND";
	
		case 2:
			return "COL_RC_COLLECT";
	
		default:
		
	}

	return "";
}

BOOL func_611(Hash hParam0) // Position - 0x24491 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_727(hParam0) && func_252(hParam0, 1, false))
		return 1;
	else if (func_728(hParam0) && func_729(hParam0))
		return 1;

	return 0;
}

char* func_612(Hash hParam0) // Position - 0x244CF Hash - 0x9E507475 ^0x1EF972DA
{
	if (!func_201(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_270(hParam0));
}

int func_613(int iParam0) // Position - 0x244F3 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_614(int iParam0) // Position - 0x24505 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_615(BOOL bParam0) // Position - 0x24519 Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_616(int iParam0) // Position - 0x24557 Hash - 0x2EDDC601 ^0xD5F96979
{
	Any itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
	
		if (itemContextByIndex == Global_1954819.f_5.f_2[iParam0 /*36*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
	return;
}

void func_617(BOOL bParam0) // Position - 0x245C5 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_618(BOOL bParam0) // Position - 0x245FF Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_619(BOOL bParam0) // Position - 0x24639 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_620(BOOL bParam0) // Position - 0x24673 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_621(BOOL bParam0) // Position - 0x24696 Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_622(BOOL bParam0) // Position - 0x246D8 Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

Hash func_623(int iParam0) // Position - 0x2471A Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_467(iParam0, 1) /*3*/];
}

void func_624() // Position - 0x24742 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_730();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_229(joaat("weapon_revolver_cattleman_john"));
		func_276(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_229(joaat("weapon_melee_knife_john"));
		func_276(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_625(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x247BA Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_307(false);
	*panParam1 = { func_420(hParam0, func_571(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_626(Hash hParam0) // Position - 0x247FF Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_627(int iParam0, int iParam1) // Position - 0x24815 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

void func_628(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x2482B Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_731(*uParam0);
	i = func_732(*uParam0);
	num2 = func_733(*uParam0);
	j = func_128(*uParam0);
	k = func_734(*uParam0);
	l = func_735(*uParam0);

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

	for (m = func_736(i, num); num2 > m; m = func_736(i, num))
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

	func_737(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_629(Hash hParam0) // Position - 0x249B3 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_630(Hash hParam0) // Position - 0x249C1 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_384(hParam0, true, false) };
	return func_466(unk.f_4);
}

int func_631(Hash hParam0) // Position - 0x249DD Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_222(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_222(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_222(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_222(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_222(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_222(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_632(Hash hParam0, var uParam1) // Position - 0x24B2E Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_467(func_738(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_226(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_633(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x24BA5 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_467(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_471(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				num = num + 1;
				break;
		
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				num = num + 1;
				break;
		}
	}

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), bParam2, bParam3);
	return num;
}

BOOL func_634(Hash hParam0) // Position - 0x24C10 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (hParam0)
	{
		case joaat("clothing_hl_player_boot_007_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_2"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_3"):
			return true;
	
		case joaat("clothing_hl_player_boot_009_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_4"):
			return true;
	
		default:
		
	}

	return false;
}

Hash func_635(int iParam0) // Position - 0x24C53 Hash - 0xB8EC44B7 ^0xD4FF48D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
	
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
	
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
	
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
	
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
	
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
	
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
	
		case 7:
			return joaat("provision_lions_paw");
	
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
	
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
	
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
	
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
	
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
	
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
	
		case 14:
			return joaat("provision_cc_vintage_handcuffs");
	
		case 15:
			return joaat("provision_bracelet_gold");
	
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
	
		case 17:
			return joaat("provision_rc_quartz_chunk");
	
		case 18:
			return joaat("provision_bracelet_silver");
	
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
	
		case 20:
			return joaat("provision_rf_wood_cobalt");
	
		case 21:
			return joaat("provision_earring_gold");
	
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
	
		case 23:
			return joaat("provision_rs_abalone_shell_fragment");
	
		case 24:
			return joaat("provision_earring_silver");
	
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
	
		default:
		
	}

	return 0;
}

int func_636(Hash hParam0) // Position - 0x24DD0 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_739(hParam0, -1);
}

BOOL func_637(int iParam0, BOOL bParam1) // Position - 0x24DDF Hash - 0x10DE2364 ^0x10DE2364
{
	return func_740(func_127(), iParam0, bParam1);
}

BOOL func_638() // Position - 0x24DF3 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_428())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_639(int iParam0) // Position - 0x24E0A Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_741(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_640(int iParam0, const char* sParam1, int iParam2) // Position - 0x24E3E Hash - 0x56940320 ^0x405BCE60
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_638())
		func_318(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_318(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_641(Hash hParam0) // Position - 0x24EAA Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_642(int iParam0) // Position - 0x24EBA Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_320(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_643(int iParam0) // Position - 0x24F53 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_320(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_644() // Position - 0x24FD9 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_643(-939420910);
	func_643(-1187950766);
	func_643(356365161);
	func_643(753127042);
	func_643(-2038424081);
	func_643(1884271742);
	func_643(459290420);
	return;
}

void func_645() // Position - 0x25020 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_643(704802028);
	func_643(588987611);
	func_643(2008888900);
	func_643(1649996811);
	func_643(227918160);
	func_643(168171957);
	func_643(1193080109);
	func_643(-491981251);
	func_643(-639037538);
	func_643(-618620429);
	return;
}

BOOL func_646(Hash hParam0) // Position - 0x25082 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_647(Hash hParam0) // Position - 0x25092 Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case joaat("exotic_stage_02"):
			return 2;
	
		case joaat("exotic_stage_01"):
			return 1;
	
		case joaat("exotic_stage_05"):
			return 16;
	
		case joaat("exotic_stage_04"):
			return 8;
	
		case joaat("exotic_stage_03"):
			return 4;
	
		default:
		
	}

	return 0;
}

void func_648(int iParam0) // Position - 0x250D7 Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_649(Hash hParam0) // Position - 0x250F2 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_650(int iParam0, int iParam1) // Position - 0x25102 Hash - 0xE1D12727 ^0xA46110B3
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

void func_651() // Position - 0x25351 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_652(int iParam0) // Position - 0x25398 Hash - 0x65A082AE ^0x65A082AE
{
	func_659(iParam0, 8, 6);
	return;
}

void func_653(int iParam0) // Position - 0x253A9 Hash - 0x20214C72 ^0x20214C72
{
	func_742(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_654(int iParam0, int iParam1) // Position - 0x253BE Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_743(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_655(Hash hParam0, int iParam1, int iParam2) // Position - 0x253D5 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_656(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x253E8 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_226(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_744(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_654(num2, num3);
	}

	if (func_492(-1586649372) && func_744(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_654(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_745(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_745(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_654(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_654(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_654(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_634(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_222(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_654(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_654(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_654(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_226(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_654(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_634(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_226(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_654(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_745(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_745(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_654(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (uParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_654(num2, num3);
				}
			}
		
			func_745(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_222(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_654(num2, num3);
			}
			break;
	
		case 1868067663:
			func_745(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_654(num2, num3);
			}
			break;
	}

	switch (func_226(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_226(uParam0->f_1[num2 /*3*/]) || func_222(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_654(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_226(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_654(num2, num3);
			}
			break;
	}

	return;
}

Hash func_657(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x25A2C Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_746(0);

	if (hParam2 != 0 && func_747(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_748(hParam0, func_650(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_658(var uParam0, BOOL bParam1, int iParam2) // Position - 0x25A72 Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;

	flag = func_92() != -1;
	flag2 = func_746(0);

	if (func_471(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_650(num, 1);
		
			if (func_749(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_749(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_633(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_750(uParam0);

	if (num3 > 0)
	{
		if (!func_471(524288))
		{
			func_661(524288);
			num2 = num2 - num6;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_650(num, 1);
			
				if (func_749(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_749(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_633(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_654(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_664(524288);

	return;
}

void func_659(int iParam0, int iParam1, int iParam2) // Position - 0x25C8F Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_467(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_467(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_467(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_660(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x25CCE Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_751(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_92() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_752(2, Global_26796.f_776) || Global_1946054.f_1497 != func_683(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_683(Global_40.f_7729);
				Global_1946054.f_1378 = func_683(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_753(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_754(false, true);

	return;
}

void func_661(BOOL bParam0) // Position - 0x25DED Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_662(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x25E00 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_755(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_756(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_661(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_755(iParam0))
				return;
		
			func_756(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_661(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_475(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_663(var uParam0) // Position - 0x2600C Hash - 0x7C3D914C ^0xB1998A7B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;

	if (uParam0->f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);

	uParam0->f_12 = 0;
	return;
}

void func_664(BOOL bParam0) // Position - 0x2606A Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_665(int iParam0, int iParam1) // Position - 0x26082 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_666(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x26091 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_755(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_755(20))
				return;
		}
	}

	func_756(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_661(8);
	return;
}

BOOL func_667() // Position - 0x26195 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_668(int iParam0) // Position - 0x261B1 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_669() // Position - 0x261C3 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_757(13);
	num2 = func_758(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_670() // Position - 0x26206 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_671() // Position - 0x26221 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_428())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_672() // Position - 0x26240 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_673() // Position - 0x26282 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_674(int iParam0, int iParam1, BOOL bParam2) // Position - 0x26290 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_759(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_675(int iParam0, float fParam1, BOOL bParam2) // Position - 0x262DC Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_759(iParam0, 2, false, false);
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

float func_676(float fParam0, float fParam1, float fParam2) // Position - 0x26422 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_677() // Position - 0x26449 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_757(12) <= -99f;
}

BOOL func_678() // Position - 0x2645D Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_757(12) >= 99f;
}

int func_679() // Position - 0x26471 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_226(hash) == -999503751)
			if (func_760() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_680(int iParam0) // Position - 0x264C2 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_487(iParam0))
		return false;

	if (func_684(iParam0, 4))
		return true;

	return false;
}

BOOL func_681(int iParam0) // Position - 0x264E7 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_487(iParam0))
		return false;

	if (func_684(iParam0, 2))
		return true;

	return false;
}

void func_682(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2650C Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_487(iParam0))
		return;

	if (!func_681(iParam0))
	{
		func_687(iParam0, 2);
	
		if (bParam2)
			if (!func_686(0, false, true))
				func_37(true, 4);
	
		if (!func_685() && !bParam1 && !func_686(0, false, true))
			func_509(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_761(iParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_683(int iParam0) // Position - 0x26581 Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (iParam0)
	{
		case 0:
			return 166243423;
	
		case 1:
			return 1383300684;
	
		case 2:
			return 2051441678;
	
		case 3:
			return 162509669;
	
		case 4:
			return 635948769;
	
		case 5:
			return 274995506;
	
		case 6:
			return 1661121390;
	
		case 7:
			return 1164374808;
	
		case 8:
			return 1160643979;
	
		case 9:
			return 624063935;
	
		case 10:
			return -1476781101;
	
		case 11:
			return 294553332;
	
		case 12:
			return 1788874135;
	
		case 13:
			return 1784889667;
	
		case 14:
			return 439606975;
	
		case 15:
			return 1560492757;
	
		case 16:
			return -769081407;
	
		case 17:
			return 1902428294;
	
		case 18:
			return -2114499732;
	
		case 19:
			return 800827126;
	
		case 20:
			return 688004210;
	
		case 21:
			return 1351927599;
	
		case 22:
			return 2032023096;
	
		case 23:
			return -291256376;
	
		case 24:
			return -1826731591;
	
		case 25:
			return 2119049229;
	
		case 26:
			return 1352942778;
	
		case 27:
			return 1964379549;
	
		case 28:
			return 1201189539;
	
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
	
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
	
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
	
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
	
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
	
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
	
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
	
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
	
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
	
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
	
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
	
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
	
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
	
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
	
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
	
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
	
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
	
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
	
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
	
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
	
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
	
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
	
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
	
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
	
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
	
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
	
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
	
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
	
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
	
		case 58:
			return 1389254668;
	
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
	
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
	
		case 61:
			return -272211555;
	
		case 62:
			return -361635024;
	
		case 64:
			return -55563408;
	
		case 65:
			return -409616653;
	
		case 66:
			return -1243402388;
	
		case 67:
			return 65931886;
	
		case 68:
			return 1371678229;
	
		case 69:
			return 2102263084;
	
		case 70:
			return -1205612021;
	
		case 71:
			return -1914506115;
	
		case 72:
			return -926815459;
	
		case 73:
			return -389591806;
	
		case 74:
			return -1300731953;
	
		case 75:
			return 802495462;
	
		case 76:
			return 1460520700;
	
		case 77:
			return 842905332;
	
		case 78:
			return -1951220140;
	
		case 79:
			return 1511551084;
	
		case 80:
			return 523337834;
	
		case 81:
			return -1725704631;
	
		case 82:
			return -19271249;
	
		case 83:
			return 1257427489;
	
		case 84:
			return 214175524;
	
		case 85:
			return -659341240;
	
		case 86:
			return -1303643297;
	
		case 87:
			return 2038771525;
	
		case 88:
			return 411856831;
	
		case 89:
			return -535599244;
	
		case 90:
			return 1156438275;
	
		case 91:
			return -1611873049;
	
		case 92:
			return 594312243;
	
		case 93:
			return 890706995;
	
		case 94:
			return -978578725;
	
		default:
		
	}

	return 0;
}

BOOL func_684(int iParam0, BOOL bParam1) // Position - 0x26AB6 Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_487(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

BOOL func_685() // Position - 0x26ADB Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

BOOL func_686(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x26AFB Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_762())
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
		num = func_763(Global_1898164.f_1[0 /*5*/]);
	
		if (func_321(num) && func_764(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_504(Global_1898164.f_1[0 /*5*/]))
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

void func_687(int iParam0, BOOL bParam1) // Position - 0x26CFF Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_487(iParam0))
		return;

	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] || bParam1;
	return;
}

int func_688(int iParam0, BOOL bParam1) // Position - 0x26D2B Hash - 0x14DDA26B ^0xFFF4A8D0
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1946054.f_2657.f_26.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1946054.f_2657.f_26;
			break;
	
		case -525676072:
			num = Global_1946054.f_2657.f_26.f_2;
			break;
	
		case -413129408:
			num = 1;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

void func_689(Hash hParam0, BOOL bParam1) // Position - 0x26DCE Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_765(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_225(50);
			else
				func_225(48);
			break;
	
		case 1:
			if (bParam1)
				func_225(51);
			else
				func_225(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_766(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_257();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_257();
			}
			break;
	
		case 3:
			func_225(24);
		
			if (bParam1)
			{
				if (!func_766(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_257();
				}
			}
			break;
	}

	return;
}

void func_690(int iParam0) // Position - 0x26EAD Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_767(0))
				num = num + 1;
		
			if (func_767(2))
				num = num + 1;
		
			if (func_767(4))
				num = num + 1;
		
			if (!func_768(16))
			{
				if (num == 1)
				{
					func_769();
					func_212(456, true);
					func_770(16);
				}
			}
		
			if (!func_768(32))
			{
				if (num >= 3)
				{
					func_769();
					func_212(456, true);
					func_770(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_767(1))
				num = num + 1;
		
			if (func_767(3))
				num = num + 1;
		
			if (func_767(7))
				num = num + 1;
		
			if (!func_768(1))
			{
				if (num == 1)
				{
					func_771();
					func_212(457, true);
					func_770(1);
				}
			}
		
			if (!func_768(2))
			{
				if (num >= 3)
				{
					func_771();
					func_212(457, true);
					func_770(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_767(5))
				num = num + 1;
		
			if (func_767(6))
				num = num + 1;
		
			if (func_767(8))
				num = num + 1;
		
			if (!func_768(4))
			{
				if (num == 1)
				{
					func_772();
					func_212(455, true);
					func_770(4);
				}
			}
		
			if (!func_768(8))
			{
				if (num >= 3)
				{
					func_772();
					func_212(455, true);
					func_770(8);
				}
			}
			break;
	}

	return;
}

void func_691(var uParam0) // Position - 0x27044 Hash - 0x2CE00B72 ^0x958A4727
{
	func_494(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_494(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_494(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_692(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x2707E Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_773(anParam0))
		return;

	if (Global_1223851 < 20)
	{
		Global_1223851 = Global_1223851 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223851.f_1[i /*21*/] = { Global_1223851.f_1[i + 1 /*21*/] };
		}
	}

	unk.f_7.f_2.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1223851.f_1[Global_1223851 - 1 /*21*/] = { unk };
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_693(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x2711F Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
		}
	}

	return false;
}

int func_694(int iParam0) // Position - 0x27215 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_695(Ped pedParam0, int iParam1) // Position - 0x27296 Hash - 0x25D0971D ^0xF7D4E234
{
	var unk;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_INJURED(pedParam0))
		return 0;

	num = PED::_0x4642182A298187D0(pedParam0, iParam1, &unk, 4, 1);

	if (num != 0)
		return 1;

	return 0;
}

BOOL func_696(Ped pedParam0) // Position - 0x272D5 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_697(Ped pedParam0, BOOL bParam1) // Position - 0x272F2 Hash - 0x6BE4D4B ^0xC7F6BBCD
{
	float entitySpeed;
	float num;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
			return false;
	
		if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
			return false;
	}

	entitySpeed = ENTITY::GET_ENTITY_SPEED(pedParam0);
	num = PED::_0xCA95924C893A0C91(pedParam0, entitySpeed);

	if (num <= 1.5f)
		return true;

	return false;
}

void func_698(BOOL bParam0) // Position - 0x27348 Hash - 0x970FE035 ^0x92589DF6
{
	func_774(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

BOOL func_699(ePedType eptParam0) // Position - 0x2737B Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_700(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x277CE Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_701(Ped pedParam0, BOOL bParam1) // Position - 0x277FE Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_702(Ped pedParam0, int iParam1) // Position - 0x27843 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_703() // Position - 0x2786A Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_775())
		return false;

	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
			return PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK"));
	
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}

	return false;
}

void func_704(Any* panParam0, int iParam1) // Position - 0x278C0 Hash - 0x787BB1AC ^0x11099E69
{
	int num;
	int i;
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!PLAYER::_0x72AD59F7B7FB6E24(player, 200))
	{
		*iParam1 = 0;
		return;
	}

	if (PLAYER::_0x1A6E84F13C952094(player, 200, panParam0))
	{
		for (i = 0; i < *panParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(panParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(panParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(panParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(panParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(panParam0->[i], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	*iParam1 = num;
	return;
}

BOOL func_705(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2796B Hash - 0x2A9340EF ^0xAD765E32
{
	BOOL num;
	Ped lassoTarget;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*uParam1 = Global_1935630.f_32;
			num = 1;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*uParam2 = Global_1935630.f_33;
				num = 1;
			}
		}
	}

	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		lassoTarget = PED::_GET_LASSO_TARGET(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(lassoTarget))
			{
				*uParam1 = lassoTarget;
				num = 1;
			}
		}
	}

	return num;
}

Ped func_706(int iParam0) // Position - 0x27A32 Hash - 0xF229F24F ^0x47381422
{
	Ped pedIndexFromEntityIndex;
	Entity outEntity;

	if (pedIndexFromEntityIndex == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(outEntity))
				{
					if (ENTITY::IS_ENTITY_A_PED(outEntity))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(outEntity)))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
							return pedIndexFromEntityIndex;
						}
					}
				}
			}
		}
	}

	if (iParam0->f_6 == 3)
	{
		if (pedIndexFromEntityIndex == 0)
			if (!Global_1935630.f_12)
				pedIndexFromEntityIndex = PED::_0x4B19F171450E0D4F(Global_35);
	
		if (pedIndexFromEntityIndex == 0)
			pedIndexFromEntityIndex = PED::_GET_LASSO_TARGET(Global_35);
	
		if (pedIndexFromEntityIndex != 0)
			if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex)))
					pedIndexFromEntityIndex = 0;
	}

	return pedIndexFromEntityIndex;
}

void func_707(int iParam0) // Position - 0x27ADA Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_512(iParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_511(iParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_708(Ped pedParam0, int iParam1) // Position - 0x27B3F Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_709(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x27B56 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_710(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_710(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x27B84 Hash - 0xBF2250D5 ^0x34592C3E
{
	float screenX;
	float screenY;
	int hudScreenPositionFromWorldPosition;

	hudScreenPositionFromWorldPosition = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &screenX, &screenY);

	if (hudScreenPositionFromWorldPosition == 0)
		if (screenX > fParam3 && screenX < fParam4 && screenY > fParam5 && screenY < fParam6)
			return true;

	return false;
}

BOOL func_711(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x27BCE Hash - 0x1D055735 ^0x5D260F19
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, joaat("WEAPON_UNARMED"), iParam1))
			return true;
		else if (!bParam2)
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("weapon_melee_knife"))
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, Global_1935630.f_44, iParam1))
						return true;

	return false;
}

int func_712(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x27C47 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

struct<4> func_713() // Position - 0x27C89 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_714(Hash hParam0, Hash hParam1) // Position - 0x27C95 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_715(int iParam0) // Position - 0x27CAF Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_583(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_716(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_776(num7) - func_776(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_716(float fParam0) // Position - 0x27D19 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
{
	if (fParam0 <= (float)-1)
		return -1;

	if (fParam0 < (float)50)
		return 0;

	if (fParam0 < (float)100)
		return 1;

	if (fParam0 < (float)200)
		return 2;

	if (fParam0 < (float)350)
		return 3;

	if (fParam0 < (float)550)
		return 4;

	if (fParam0 < (float)800)
		return 5;

	if (fParam0 < (float)1100)
		return 6;

	return 7;
}

int func_717(int iParam0) // Position - 0x27DA5 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_718(int iParam0) // Position - 0x27DDE Hash - 0xB8632262 ^0xB8632262
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 16:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_719(float fParam0, float fParam1) // Position - 0x27E5D Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_716(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_776(num));
	num3 = BUILTIN::TO_FLOAT(func_776(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_720(int iParam0) // Position - 0x27ED0 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_777(iParam0, &num))
		return func_776(num);

	switch (iParam0)
	{
		case 0:
			if (func_778())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_778())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_778())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_721(int iParam0) // Position - 0x27F5C Hash - 0xEE6D3E20 ^0xEE6D3E20
{
	switch (iParam0)
	{
		case 0:
			return 246;
	
		case 1:
			return 248;
	
		case 2:
			return 247;
	
		default:
		
	}

	return -1;
}

void func_722(int iParam0, int iParam1, int iParam2) // Position - 0x27F8E Hash - 0x29688DE6 ^0xDEA50711
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	int num2;
	Hash hashKey;
	const char* data;

	if (iParam1 == 0)
		return;

	num = iParam1 + 1;

	if (iParam2 != 0)
	{
		str = "RPG_LEVEL_PROGRESS_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, num + 1);
	}
	else
	{
		str = "RPG_LEVEL_INCREASED_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", num);
		flag = true;
	}

	num = num + func_779(iParam0);
	str3 = func_781(func_780(num, iParam2));
	str5 = func_782(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_783(iParam0));
	num2 = func_784(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_785(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_407(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_786(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_723(int iParam0, int iParam1) // Position - 0x28089 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_724(int iParam0) // Position - 0x280A2 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_725(BOOL bParam0) // Position - 0x280B8 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_726(Hash hParam0) // Position - 0x280DD Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_727(Hash hParam0) // Position - 0x280ED Hash - 0xB8632262 ^0xB8632262
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
	
		default:
		
	}

	return false;
}

int func_728(Hash hParam0) // Position - 0x28194 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_729(Hash hParam0) // Position - 0x281CD Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_787(&entity, 0, i, &model) && !func_787(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_788(entity, &model);
		
			if (func_201(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_730() // Position - 0x28239 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_789(Global_35, &unk);
	unk31 = { func_570(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_790(false);
	func_791(7);
	func_792(joaat("kit_bandana"), true, true, false);

	if (func_489() == 1160113249)
	{
		func_792(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_792(-361635024, true, true, true);
	}

	func_793(Global_35, &unk);
	return;
}

int func_731(int iParam0) // Position - 0x282C2 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_732(int iParam0) // Position - 0x282E7 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_733(int iParam0) // Position - 0x282FA Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_734(int iParam0) // Position - 0x2830D Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_735(int iParam0) // Position - 0x2831F Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_736(int iParam0, int iParam1) // Position - 0x28331 Hash - 0x893AC59E ^0x893AC59E
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

void func_737(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x283CB Hash - 0xA65AB937 ^0xA65AB937
{
	func_795(uParam0, iParam6);
	func_796(uParam0, iParam5);
	func_797(uParam0, iParam4);
	func_798(uParam0, iParam3);
	func_799(uParam0, iParam2);
	func_800(uParam0, iParam1);
	return;
}

int func_738(Hash hParam0) // Position - 0x28403 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_466(outSlotId);
}

int func_739(Hash hParam0, int iParam1) // Position - 0x28426 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_307(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_795(&num, year);
	func_796(&num, month);
	func_797(&num, day);
	func_798(&num, hour);
	func_799(&num, minute);
	func_800(&num, second);
	return num;
}

BOOL func_740(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2848B Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_801(iParam1) || !func_801(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_741(int iParam0) // Position - 0x284B8 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_193(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

void func_742(int iParam0, int iParam1) // Position - 0x284EB Hash - 0x19A9221A ^0x79EEA925
{
	int i;
	int num;
	var unk;
	var unk3;

	unk = 39;
	unk3 = 10;
	unk3.f_1 = 39;
	unk3.f_1.f_2 = 39;
	unk3.f_1.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < *iParam0)
		{
			if (func_802(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_802(&iParam0->f_2[i /*2*/], 1))
					func_803(&iParam0->f_2[i /*2*/], 2, 6);
			
				unk3[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { unk3[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_743(int iParam0, int iParam1, int iParam2) // Position - 0x28617 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_804(iParam0, 1))
		func_805(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_744(int iParam0, int iParam1) // Position - 0x2865E Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_745(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x28677 Hash - 0xE34B9CEC ^0xAFBB60FB
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;

	if (bParam4)
		num = 3;

	num2 = 12;
	num3 = 20;
	num4 = 16;

	if (uParam0->f_1[num4 /*3*/].f_1 == 1216705912 || uParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			uParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_654(num2, num);
	
		if (bParam1)
			func_654(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_654(num3, num);
	}

	return;
}

BOOL func_746(int iParam0) // Position - 0x28763 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_489();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_747(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x28789 Hash - 0x3A135443 ^0x969430D9
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, bParam3); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, bParam3) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_748(Hash hParam0, int iParam1, var uParam2) // Position - 0x287CD Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_749(int iParam0, int iParam1) // Position - 0x287DE Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_467(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_750(var uParam0) // Position - 0x287FC Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_751(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x28847 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_92() == -1)
		func_806(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_807(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_752(BOOL bParam0, int iParam1) // Position - 0x288BD Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_92() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			return Global_26796.f_26[iParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		return Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_753(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2893A Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_808(&(Global_1946054.f_1378), iParam0);
	func_809(2, iParam0, 6);

	if (bParam1)
		func_754(false, true);

	return;
}

void func_754(BOOL bParam0, BOOL bParam1) // Position - 0x28962 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_810(0);

	if (bParam0)
	{
		func_661(8);
		func_661(512);
	}
	else
	{
		func_661(8);
		func_661(16);
	}

	return;
}

BOOL func_755(int iParam0) // Position - 0x28995 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_756(int iParam0) // Position - 0x289AA Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_757(int iParam0) // Position - 0x289CA Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_758(float fParam0) // Position - 0x289DE Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_759(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x289F9 Hash - 0xC24B5846 ^0xE00BDA77
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

Hash func_760() // Position - 0x28AA2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_761(int iParam0) // Position - 0x28AB1 Hash - 0xCCDB3731 ^0xFEFFE4DB
{
	Hash hash;

	hash = func_683(iParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_612(hash);
}

BOOL func_762() // Position - 0x28AD4 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_763(int iParam0) // Position - 0x28B27 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_504(iParam0))
		return -1;

	return func_812(func_811(iParam0));
}

BOOL func_764(int iParam0, int iParam1) // Position - 0x28B47 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_765(Hash hParam0) // Position - 0x28B56 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_813(hParam0))
		num = 0;
	else if (func_814(hParam0))
		num = 1;
	else if (func_815(hParam0))
		num = 2;
	else if (func_816(hParam0))
		num = 3;

	return num;
}

BOOL func_766(int iParam0) // Position - 0x28B99 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_252(func_817(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_767(int iParam0) // Position - 0x28BD9 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_252(func_818(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_768(int iParam0) // Position - 0x28C18 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_769() // Position - 0x28C2B Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_92() != -1)
		return;

	func_276(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_586(1);
	func_722(1, num, 0);
	return;
}

void func_770(int iParam0) // Position - 0x28C5D Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_771() // Position - 0x28C74 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_92() != -1)
		return;

	func_276(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_586(2);
	func_722(2, num, 0);
	return;
}

void func_772() // Position - 0x28CA6 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_92() != -1)
		return;

	func_276(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_586(0);
	func_722(0, num, 0);
	return;
}

BOOL func_773(Any anParam0) // Position - 0x28CD8 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

void func_774(BOOL bParam0) // Position - 0x28D0E Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

BOOL func_775() // Position - 0x28D21 Hash - 0x50F36DAB ^0xF55A49EF
{
	switch (Global_1935630.f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return true;
	
		default:
		
	}

	return false;
}

int func_776(int iParam0) // Position - 0x28D52 Hash - 0xD14E7A6C ^0x65ACC420
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 0;
	
		case 1:
			return 50;
	
		case 2:
			return 100;
	
		case 3:
			return 200;
	
		case 4:
			return 350;
	
		case 5:
			return 550;
	
		case 6:
			return 800;
	
		case 7:
			return 1100;
	
		default:
		
	}

	return 0;
}

BOOL func_777(int iParam0, var uParam1) // Position - 0x28DC8 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_778() // Position - 0x28DD1 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_779(int iParam0) // Position - 0x28DDA Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_307(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_307(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_307(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_780(int iParam0, int iParam1) // Position - 0x28E3C Hash - 0xD5391B76 ^0x70D71DC1
{
	var unk;

	if (iParam0 >= 10)
		iParam1 = 0;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 32);
	return unk;
}

const char* func_781(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x28E6E Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_782(int iParam0) // Position - 0x28E82 Hash - 0x21CE226B ^0xE279E017
{
	switch (iParam0)
	{
		case 0:
			return "stamina" /*Stamina*/;
	
		case 1:
			return "health";
	
		case 2:
			return "dead_eye_level_up";
	
		default:
		
	}

	return "";
}

char* func_783(int iParam0) // Position - 0x28EBD Hash - 0x21CE226B ^0x41115270
{
	switch (iParam0)
	{
		case 0:
			return "RPG_HEALTH";
	
		case 1:
			return "RPG_STAMINA";
	
		case 2:
			return "RPG_DEADEYE";
	
		default:
		
	}

	return "";
}

int func_784(int iParam0) // Position - 0x28EF8 Hash - 0x21FAF347 ^0x467E3BE5
{
	switch (iParam0)
	{
		case 0:
			return joaat("toast_rpg_level_health");
	
		case 1:
			return joaat("toast_rpg_level_stamina");
	
		case 2:
			return joaat("toast_rpg_level_deadeye");
	
		default:
		
	}

	return 0;
}

int func_785(int iParam0) // Position - 0x28F33 Hash - 0x5163992 ^0x5163992
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

int func_786(int iParam0) // Position - 0x28F62 Hash - 0x21FAF347 ^0xA8C8F0DA
{
	switch (iParam0)
	{
		case 0:
			return joaat("stats_health");
	
		case 1:
			return joaat("stats_stamina");
	
		case 2:
			return joaat("stats_deadeye");
	
		default:
		
	}

	return 0;
}

BOOL func_787(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x28F9D Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_819(iParam1) && !func_820(iParam1))
		ped = func_821(iParam1);
	else
		return false;

	func_822(uParam3);
	num = func_823(iParam2);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		return false;

	*uParam0 = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
		return false;

	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*uParam0);
	return true;
}

void func_788(Entity eParam0, var uParam1) // Position - 0x2903C Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_824(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_825(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_789(Ped pedParam0, Any* panParam1) // Position - 0x29086 Hash - 0x2B5AFE28 ^0xF454BB04
{
	var src;
	int i;
	Hash weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	src = 29;
	MISC::COPY_SCRIPT_STRUCT(panParam1, &src, 30);

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
	
		if (func_416(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_790(BOOL bParam0) // Position - 0x290EB Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_201(hash, 0))
			func_826(hash, false, bParam0);
	
		Global_1946054.f_2657[i] = 0;
	}

	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
	return;
}

void func_791(int iParam0) // Position - 0x29184 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_92() == -1)
	{
		func_827(352481484);
	
		for (i = 0; i < Global_26796.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_26796[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		for (i = 0; i < Global_36638.f_45.f_350.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_36638.f_45.f_350[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_226(hash) != -999503751)
			func_828(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_829(hash, false))
			func_830(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_792(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x29374 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_831(hParam0))
		return;

	hash = func_226(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_832(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_832(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_832(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_832(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_832(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_832(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_833(0))
	{
		func_834(hParam0, true);
	
		if (func_489() == 1160113249)
			func_834(func_833(-2125499975), false);
		else
			func_834(func_833(1160113249), false);
	}

	func_835();

	if (func_836(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_307(false), hParam0, 0);

	func_830(hParam0, bParam3);

	if (bParam2)
		func_754(false, false);

	return;
}

void func_793(Ped pedParam0, var uParam1) // Position - 0x294DA Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (uParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1->[i], 0, false))
				if (func_415(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

var func_794(BOOL bParam0, var uParam1, var uParam2) // Position - 0x29583 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_795(var uParam0, int iParam1) // Position - 0x2959A Hash - 0xD05180BA ^0x39589262
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

void func_796(var uParam0, int iParam1) // Position - 0x29620 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_797(var uParam0, int iParam1) // Position - 0x2965C Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_732(*uParam0);
	num2 = func_731(*uParam0);

	if (iParam1 < 1 || iParam1 > func_736(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_798(var uParam0, int iParam1) // Position - 0x296AF Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_799(var uParam0, int iParam1) // Position - 0x296EA Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_800(var uParam0, int iParam1) // Position - 0x29723 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_801(int iParam0) // Position - 0x2975B Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_735(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_734(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_128(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_731(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_732(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_733(iParam0);

	if (num6 < 1 || num6 > func_736(num5, num4))
		return false;

	return true;
}

BOOL func_802(var uParam0, int iParam1) // Position - 0x29837 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_803(var uParam0, int iParam1, int iParam2) // Position - 0x29848 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_804(int iParam0, int iParam1) // Position - 0x2985B Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_805(int iParam0, int iParam1) // Position - 0x2986C Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_806(Hash hParam0, int iParam1, int iParam2) // Position - 0x2987F Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_807(Hash hParam0, int iParam1, int iParam2) // Position - 0x298DA Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_808(var uParam0, int iParam1) // Position - 0x29944 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_92() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_806(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_807(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_809(BOOL bParam0, int iParam1, int iParam2) // Position - 0x299DF Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_92() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			Global_26796.f_26[iParam1 /*120*/] = Global_26796.f_26[iParam1 /*120*/] || bParam0;
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || bParam0;

	return;
}

void func_810(int iParam0) // Position - 0x29A67 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_811(int iParam0) // Position - 0x29A78 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_812(BOOL bParam0) // Position - 0x29AB6 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_813(Hash hParam0) // Position - 0x29AC9 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_201(hParam0, 0))
		return false;

	if (func_222(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_814(Hash hParam0) // Position - 0x29AF3 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_201(hParam0, 0))
		return false;

	if (func_222(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_815(Hash hParam0) // Position - 0x29B1D Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_201(hParam0, 0))
		return false;

	if (func_222(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_816(Hash hParam0) // Position - 0x29B47 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_201(hParam0, 0))
		return false;

	if (func_222(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_817(int iParam0, int iParam1) // Position - 0x29B71 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_837(iParam0);
	
		case 1:
			return func_838(iParam0);
	
		case 2:
			return func_839(iParam0);
	
		case 3:
			return func_840(iParam0);
	}

	return 0;
}

Hash func_818(int iParam0, int iParam1) // Position - 0x29BCA Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_841(iParam0);
	
		case 1:
			return func_842(iParam0);
	
		case 2:
			return func_843(iParam0);
	
		case 3:
			return func_844(iParam0);
	
		case 4:
			return func_845(iParam0);
	
		case 5:
			return func_846(iParam0);
	
		case 6:
			return func_847(iParam0);
	
		case 7:
			return func_848(iParam0);
	
		case 8:
			return func_849(iParam0);
	}

	return 0;
}

BOOL func_819(int iParam0) // Position - 0x29C7D Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_850(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_820(int iParam0) // Position - 0x29CB5 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_850(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_819(iParam0))
		return false;

	ped = func_821(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_821(int iParam0) // Position - 0x29D09 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_850(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_822(var uParam0) // Position - 0x29D35 Hash - 0x6843C143 ^0xA531F0D1
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

int func_823(int iParam0) // Position - 0x29DDC Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_824(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x29E14 Hash - 0x125E1FB8 ^0x58C5F328
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (*uParam4)
		{
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		
			case 0:
				*uParam1 = 0;
				break;
		
			case 1:
				*uParam1 = 1;
				break;
		}
	}

	return;
}

BOOL func_825(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x29E89 Hash - 0xF684EE16 ^0xD8F147D7
{
	int num;
	var unk;
	BOOL flag;

	num = uParam3;
	unk = iParam2;

	if (num < unk)
		iParam2 = num;

	flag = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(anParam0, pedParam1, iParam2);
	return flag;
}

void func_826(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29EB2 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_226(hParam0))
	{
		case -2061583405:
			flag = func_851(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_851(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_851(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_851(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_851(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_851(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_835();

	if (bParam1)
		func_754(false, false);

	return;
}

void func_827(int iParam0) // Position - 0x29F7F Hash - 0x958E8FB2 ^0x9CA4541C
{
	int num;
	int num2;
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk = { func_580(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_582(&unk, &num, &num2, false))
	{
		if (num2 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
	
		func_478(num);
	}

	return;
}

void func_828(var uParam0, Hash hParam1, int iParam2) // Position - 0x2A049 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_852(iParam2, *uParam0);
	func_853(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_829(Hash hParam0, BOOL bParam1) // Position - 0x2A07F Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_384(hParam0, false, false) };
	guid = { func_420(hParam0, unk, unk.f_4, false) };

	if (func_579(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_307(false), &guid, bParam1);
	return true;
}

void func_830(Hash hParam0, BOOL bParam1) // Position - 0x2A0CB Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_384(hParam0, false, false) };
	guid = { func_420(hParam0, unk, unk.f_4, false) };

	if (func_579(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_307(false), &guid, bParam1);
	return;
}

BOOL func_831(Hash hParam0) // Position - 0x2A115 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_92() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_832(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2A13E Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_854(hash, &unk))
		return 0;

	if (bParam3 && !func_829(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_226(hParam0) != -999503751)
		func_828(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_833(int iParam0) // Position - 0x2A1E6 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_489();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_834(Hash hParam0, BOOL bParam1) // Position - 0x2A211 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_384(hParam0, false, false) };
	guid = { func_420(hParam0, unk, unk.f_4, false) };

	if (func_579(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_307(false), &guid);
	return 1;
}

void func_835() // Position - 0x2A25D Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_92() == -1)
	{
		for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
		{
			Global_26796[i] = Global_1946054.f_2657[i];
		}
	
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		Global_36638.f_45.f_350[i] = Global_1946054.f_2657[i];
	}

	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
	return;
}

BOOL func_836(Hash hParam0) // Position - 0x2A393 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_856(func_855(hParam0));
}

Hash func_837(int iParam0) // Position - 0x2A3A5 Hash - 0xC02FF737 ^0xE6E3E291
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 2:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 3:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 4:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 5:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 6:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 7:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 8:
			return joaat("provision_reinforced_bandolier_snake");
	
		default:
		
	}

	return 0;
}

Hash func_838(int iParam0) // Position - 0x2A434 Hash - 0xC02FF737 ^0x9CC78C98
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 3:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 4:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 5:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 6:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 7:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 8:
			return joaat("provision_reinforced_gunbelt_snake");
	
		default:
		
	}

	return 0;
}

Hash func_839(int iParam0) // Position - 0x2A4C3 Hash - 0xC02FF737 ^0x26BFE76B
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_holster_gator");
	
		case 1:
			return joaat("provision_reinforced_holster_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 4:
			return joaat("provision_reinforced_holster_cougar");
	
		case 5:
			return joaat("provision_reinforced_holster_deer");
	
		case 6:
			return joaat("provision_reinforced_holster_panther");
	
		case 7:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 8:
			return joaat("provision_reinforced_holster_snake");
	
		default:
		
	}

	return 0;
}

Hash func_840(int iParam0) // Position - 0x2A552 Hash - 0xC02FF737 ^0xC89D76B1
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_offhand_gator");
	
		case 1:
			return joaat("provision_reinforced_offhand_bear");
	
		case 2:
			return joaat("provision_reinforced_offhand_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		case 4:
			return joaat("provision_reinforced_offhand_cougar");
	
		case 5:
			return joaat("provision_reinforced_offhand_deer");
	
		case 6:
			return joaat("provision_reinforced_offhand_panther");
	
		case 7:
			return joaat("provision_reinforced_offhand_rabbit");
	
		case 8:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

Hash func_841(int iParam0) // Position - 0x2A5E1 Hash - 0x51E02475 ^0x6FAD83C9
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 2:
			return joaat("provision_reinforced_holster_gator");
	
		case 3:
			return joaat("provision_reinforced_offhand_gator");
	
		default:
		
	}

	return 0;
}

Hash func_842(int iParam0) // Position - 0x2A62A Hash - 0x51E02475 ^0x73BA00BD
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_bear");
	
		case 3:
			return joaat("provision_reinforced_offhand_bear");
	
		default:
		
	}

	return 0;
}

Hash func_843(int iParam0) // Position - 0x2A673 Hash - 0x51E02475 ^0xD39CAF97
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_boar");
	
		default:
		
	}

	return 0;
}

Hash func_844(int iParam0) // Position - 0x2A6BC Hash - 0x51E02475 ^0xB8F3F001
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 2:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		default:
		
	}

	return 0;
}

Hash func_845(int iParam0) // Position - 0x2A705 Hash - 0x51E02475 ^0xCED8E5FA
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 2:
			return joaat("provision_reinforced_holster_cougar");
	
		case 3:
			return joaat("provision_reinforced_offhand_cougar");
	
		default:
		
	}

	return 0;
}

Hash func_846(int iParam0) // Position - 0x2A74E Hash - 0x51E02475 ^0x25F7B61
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 2:
			return joaat("provision_reinforced_holster_deer");
	
		case 3:
			return joaat("provision_reinforced_offhand_deer");
	
		default:
		
	}

	return 0;
}

Hash func_847(int iParam0) // Position - 0x2A797 Hash - 0x51E02475 ^0xE0DEBCEF
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 2:
			return joaat("provision_reinforced_holster_panther");
	
		case 3:
			return joaat("provision_reinforced_offhand_panther");
	
		default:
		
	}

	return 0;
}

Hash func_848(int iParam0) // Position - 0x2A7E0 Hash - 0x51E02475 ^0x50FB5131
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 2:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 3:
			return joaat("provision_reinforced_offhand_rabbit");
	
		default:
		
	}

	return 0;
}

Hash func_849(int iParam0) // Position - 0x2A829 Hash - 0x51E02475 ^0x8656D204
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_snake");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_snake");
	
		case 2:
			return joaat("provision_reinforced_holster_snake");
	
		case 3:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

int func_850(int iParam0) // Position - 0x2A872 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_851(Hash hParam0, int iParam1) // Position - 0x2A88B Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_854(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_226(hParam0) != -999503751)
			func_857(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_226(hParam0) != -999503751)
		func_857(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_829(hParam0, true);
	return 1;
}

void func_852(int iParam0, int iParam1) // Position - 0x2A971 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_853(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2A98A Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_858(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_467(func_630(hParam1), 1);
		uParam0->f_1 == -1;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}

	uParam0->f_2 = iParam4;
	*uParam0 = hParam1;
	uParam0->f_3 = 0;

	if (bParam3)
		func_859(uParam0);

	return;
}

BOOL func_854(Hash hParam0, var uParam1) // Position - 0x2A9E6 Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

int func_855(Hash hParam0) // Position - 0x2AA26 Hash - 0x497B15BA ^0x497B15BA
{
	switch (hParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

BOOL func_856(int iParam0) // Position - 0x2AA76 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_857(int iParam0, int iParam1, int iParam2) // Position - 0x2AA8E Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_860(iParam1);
	func_861(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_862(&(iParam0->f_26), num2);
	
		if (func_863(iParam0->f_26, &num))
			func_864(num, num2);
	}

	return;
}

void func_858(var uParam0) // Position - 0x2AAD7 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_865(&(uParam0->f_3));
	return;
}

void func_859(var uParam0) // Position - 0x2AAF5 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_866(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_860(int iParam0) // Position - 0x2AB16 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_861(int iParam0, int iParam1) // Position - 0x2AB2D Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_862(var uParam0, int iParam1) // Position - 0x2AB75 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_858(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_863(int iParam0, var uParam1) // Position - 0x2ABA6 Hash - 0xE231A73F ^0x924E070C
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_864(int iParam0, int iParam1) // Position - 0x2ABEA Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_865(var uParam0) // Position - 0x2AC03 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_866(var uParam0, Any anParam1, int iParam2) // Position - 0x2AC2F Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_867(func_489());

	if (*uParam0)
		func_865(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_92() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_867(int iParam0) // Position - 0x2AC66 Hash - 0xB4860741 ^0xB4860741
{
	if (func_92() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
		
			case -449205311:
				return 0;
		
			case 1160113249:
				return 0;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
	
		default:
		
	}

	return 0;
}

