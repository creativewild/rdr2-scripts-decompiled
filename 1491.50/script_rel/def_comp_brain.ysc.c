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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
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
	var uLocal_51 = 0;
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
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 3;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 3;
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
	var uLocal_122 = -1;
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
	var uLocal_134 = -1;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	BOOL bLocal_138 = 0;
	BOOL bLocal_139 = 0;
	BOOL bLocal_140 = 0;
	BOOL bLocal_141 = 0;
	Object obLocal_142 = 0;
	int iLocal_143 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x671F53AA ^0x38F5E6E5
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_14 = uScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
		func_1(&uLocal_14);

	func_2(&uLocal_14, 0);

	while (!func_3(&uLocal_14, &uScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}

	func_1(&uLocal_14);
	return;
}

void func_1(var uParam0) // Position - 0x43 Hash - 0x6FEDBD62 ^0x6FEDBD62
{
	if (func_4(*uParam0, 2, true))
		func_5(*uParam0);

	if (func_6(*uParam0, 16, false))
	{
		func_7(*uParam0, 16, true);
		Global_1360165[*uParam0 /*1157*/].f_129 = 0;
		func_8(*uParam0, false);
		func_9(*uParam0, 4, false);
		func_10(*uParam0);
		func_11(*uParam0);
		func_12(*uParam0, 37, true);
	}

	bLocal_138;
	func_10(*uParam0);
	func_13(*uParam0);
	func_14(uParam0);
	func_15(uParam0);
	func_12(*uParam0, 65, false);

	if (func_16(uParam0->f_106))
		func_17(&(uParam0->f_106), true, true);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
	{
		if (func_18(*uParam0, false))
			func_19(uParam0);
	
		func_20(*uParam0, 1, true, true, false);
	}

	if (!func_21(*uParam0))
		if (bLocal_141)
			func_22(*uParam0, false, true, true, false);

	func_23(*uParam0);
	func_24(*uParam0);
	func_25(uParam0, 134217728);
	func_25(uParam0, 536870912);
	func_12(*uParam0, 27, false);
	Global_40.f_4942[*uParam0 /*60*/].f_48 = -15;
	Global_1360165[*uParam0 /*1157*/].f_11 = 0;
	func_2(uParam0, 0);
	func_26(*uParam0, 22, false);
	func_12(*uParam0, 24, false);
	func_12(*uParam0, 4, false);
	func_12(*uParam0, 26, false);
	func_12(*uParam0, 1, false);
	func_12(*uParam0, 2, false);
	func_28(&(Global_1359489.f_4), func_27(*uParam0));
	Global_1360165[*uParam0 /*1157*/].f_3 = 0;
	Global_1360165[*uParam0 /*1157*/].f_128 = 0;
	func_29(*uParam0, 0);
	func_30(*uParam0, 32, false);
	func_31(uParam0);
	func_32(*uParam0, joaat("comment_on_food_good"));
	func_32(*uParam0, joaat("comment_on_food_bad"));
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_2(var uParam0, int iParam1) // Position - 0x219 Hash - 0xB24070B3 ^0xA25D9523
{
	if (iParam1 == uParam0->f_1)
		return;

	uParam0->f_1 = iParam1;
	return;
}

BOOL func_3(var uParam0, var uParam1) // Position - 0x233 Hash - 0x79EBD746 ^0xFE534D5
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	Any any;
	BOOL flag5;
	BOOL flag6;

	flag = ENTITY::DOES_ENTITY_EXIST(uParam0->f_5);
	flag2 = func_6(*uParam0, 16, false);
	flag3 = func_33(uParam0, &flag2);
	bLocal_138 = flag && !ENTITY::IS_ENTITY_DEAD(uParam0->f_5);

	if (!flag3 && func_34(uParam0))
		return true;

	if (uParam0->f_1 > 0)
		if (!func_35(*uParam0))
			func_2(uParam0, 0);

	if (uParam0->f_1 > 1)
	{
		flag4 = Global_1359489.f_10 == *uParam0;
	
		if (flag4)
		{
			func_36(uParam0);
		
			if (bLocal_138)
			{
				bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true);
			
				if (bLocal_139)
					func_38(&(Global_1359489.f_4), func_27(*uParam0));
				else
					func_28(&(Global_1359489.f_4), func_27(*uParam0));
			}
			else
			{
				bLocal_139 = false;
			}
		
			if (!bLocal_139)
				if (func_4(*uParam0, 2, true))
					if (flag3)
						func_12(*uParam0, 2, true);
					else
						return true;
		
			if (func_4(*uParam0, 44, true) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[*uParam0 /*1157*/].f_1156, false))
			{
				Global_1360165[*uParam0 /*1157*/].f_1156 = 0;
				func_12(*uParam0, 44, true);
			}
		
			func_39(uParam0);
		}
	
		if (func_40(uParam0, &flag) || !flag3 && flag4 && func_41(uParam0))
			return true;
	
		func_42(uParam0, &flag2);
	
		if (*uParam0 == 20 && iLocal_143 == 6)
			func_43(uParam0);
	
		if (flag4)
		{
			uParam0->f_6 = func_44(*uParam0, false);
		
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				any = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
			
				if (any != Global_1360165[*uParam0 /*1157*/].f_47)
				{
					Global_1360165[*uParam0 /*1157*/].f_47 = any;
					TEXT_LABEL_ASSIGN_STRING(&(Global_1360165[*uParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, Global_1360165[*uParam0 /*1157*/].f_47), 64);
					Global_1360165[*uParam0 /*1157*/].f_56 = 1;
				}
			}
		
			func_45(uParam0);
			func_46(uParam0, &flag2);
		
			if (Global_1360165[*uParam0 /*1157*/].f_142 != -15)
			{
				if (func_47(Global_1360165[*uParam0 /*1157*/].f_142))
				{
					Global_1360165[*uParam0 /*1157*/].f_141 = 0;
					Global_1360165[*uParam0 /*1157*/].f_142 = -15;
				}
			}
		
			if (uParam0->f_1 != 6 && uParam0->f_1 != 7)
			{
				func_48(uParam0);
				func_49(uParam0, &flag2);
			}
		
			func_50(uParam0);
			func_51(uParam0);
		
			if (func_4(*uParam0, 13, true))
			{
				func_52(*uParam0);
				func_12(*uParam0, 13, false);
			}
		
			if (func_53(*uParam0, false, false))
				func_26(*uParam0, 26, false);
			else
				func_12(*uParam0, 26, false);
		
			if (uParam0->f_102 == 17)
				func_26(*uParam0, 67, false);
			else
				func_12(*uParam0, 67, false);
		}
	
		func_54(uParam0, uParam1);
	}

	func_55(uParam0);

	switch (uParam0->f_1)
	{
		case 0:
			if (!func_56(*uParam0))
				func_1(uParam0);
		
			if (!func_35(*uParam0))
				func_57(*uParam0);
		
			if (MISC::IS_BIT_SET(uParam1->f_6, 0))
				PED::_RESERVE_AMBIENT_PEDS(2);
			else if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() <= 1)
				PED::_RESERVE_AMBIENT_PEDS(1);
			else
				PED::_RESERVE_AMBIENT_PEDS(2);
		
			if (func_58(*uParam0) != 0)
				func_59(*uParam0, func_58(*uParam0));
		
			func_52(*uParam0);
		
			if (!_IS_NULL_VECTOR(uParam1->f_3))
				PERSCHAR::_0x59C7AD6FEA2AC449(Global_1360165[*uParam0 /*1157*/].f_1, uParam1->f_3);
			else
				PERSCHAR::_0xD4B614179BCD0654(Global_1360165[*uParam0 /*1157*/].f_1);
		
			uParam0->f_6 = func_44(*uParam0, false);
		
			if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
			{
				Global_1360165[*uParam0 /*1157*/].f_47 = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
				TEXT_LABEL_ASSIGN_STRING(&(Global_1360165[*uParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(uParam0->f_6, Global_1360165[*uParam0 /*1157*/].f_47), 64);
				Global_1360165[*uParam0 /*1157*/].f_56 = 1;
			}
		
			if (*uParam0 != 12)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(func_61(*uParam0), func_62(Global_40.f_4942[*uParam1 /*60*/].f_3, *uParam0));
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam1 /*60*/].f_3;
			}
		
			if (*uParam0 == 24 || *uParam0 == 25)
			{
				PERSCHAR::_0x2DF89CD2ED1D0BDE(func_61(*uParam0), joaat("META_OUTFIT_DEFAULT"));
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam1 /*60*/].f_3;
			}
		
			func_51(uParam0);
		
			if (MISC::IS_BIT_SET(uParam1->f_6, 1))
			{
				func_26(*uParam0, 44, false);
				flag3 = true;
			}
		
			if (func_63(Global_1835011[0 /*74*/].f_1, true) && func_64(*uParam1, -2147483648))
				func_65(*uParam1, -2147483648, false);
		
			if (uParam1->f_1 != 0)
				if (func_66(*uParam1, uParam1->f_1))
					func_68(*uParam1, uParam1->f_1, !func_67(Global_1360165[*uParam0 /*1157*/], 0));
			else
				func_68(*uParam1, Global_40.f_4942[*uParam1 /*60*/].f_3, !func_67(Global_1360165[*uParam0 /*1157*/], 0));
		
			iLocal_143 = func_69();
			func_70(&(uParam0->f_76));
			func_70(&(uParam0->f_79));
			func_71(uParam0);
			func_2(uParam0, 1);
			[[fallthrough]];
	
		case 1:
			if (!func_67(Global_1360165[*uParam0 /*1157*/], 0))
			{
				if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY() && func_72(&(uParam0->f_76)) < 5000)
				{
					func_70(&(uParam0->f_79));
					return false;
				}
			
				uParam0->f_5 = func_74(*uParam0, MISC::IS_BIT_SET(uParam1->f_6, 2), MISC::IS_BIT_SET(uParam1->f_6, 3), func_73(uParam0, flag3));
			}
		
			if (func_67(Global_1360165[*uParam0 /*1157*/], 0) && uParam0->f_5 == PERSCHAR::_GET_PERSCHAR_PED_INDEX(Global_1360165[*uParam0 /*1157*/].f_1))
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[*uParam0 /*1157*/].f_1))
				{
					if (MISC::IS_BIT_SET(uParam1->f_6, 3))
					{
						if (!MISC::IS_BIT_SET(uParam1->f_6, 4))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], true);
							MISC::SET_BIT(&(uParam1->f_6), 4);
						}
					
						return false;
					}
				}
				else if (MISC::IS_BIT_SET(uParam1->f_6, 4))
				{
					PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[*uParam0 /*1157*/], false);
					MISC::CLEAR_BIT(&(uParam1->f_6), 4);
				}
			
				Global_1360165[*uParam0 /*1157*/] = uParam0->f_5;
				func_75(uParam0);
			
				if (MISC::IS_BIT_SET(uParam1->f_6, 0) && func_6(*uParam0, 32768, true))
					func_26(*uParam0, 40, false);
			
				func_2(uParam0, 2);
			}
			break;
	
		case 2:
			if (flag2 || func_4(*uParam0, 44, false))
				func_76(uParam0);
			else if (func_18(*uParam0, false))
				func_77(uParam0);
			else if (func_78(uParam0))
				func_79(uParam0);
			else
				func_80(uParam0, false);
			break;
	
		case 3:
			if (func_4(*uParam0, 27, true))
			{
				if (func_82(func_81(), Global_40.f_4942[*uParam0 /*60*/].f_48))
				{
					func_12(*uParam0, 27, false);
					Global_40.f_4942[*uParam0 /*60*/].f_48 = -15;
				}
			}
		
			if (func_83(uParam0, true))
				func_84(uParam0);
			break;
	
		case 6:
			if (func_94(0, false, true))
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		
			if (flag4)
			{
				flag5 = func_95(uParam0, 536870912);
			
				if (!func_85(&(uParam0->f_73)))
				{
					func_70(&(uParam0->f_73));
				}
				else if (func_86(&(uParam0->f_73)) > 1f)
				{
					if (!func_96() && !flag5 && !func_4(*uParam0, 63, false) && !func_97(true) && PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 48, 1200))
					{
						func_98(uParam0, 536870912);
						flag5 = true;
					}
				
					func_70(&(uParam0->f_73));
				}
			
				if (flag5)
					func_48(uParam0);
			}
		
			if (!flag2)
			{
				if (func_4(*uParam0, 44, false))
					return false;
			
				func_99(*uParam0, 16384, false);
				func_100(uParam0, 1);
				func_12(*uParam0, 44, false);
			
				if (bLocal_138)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam0->f_5))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
				
					uParam0->f_6 = func_44(*uParam0, false);
					PERSCHAR::_0xE0E65E0D261F7507(uParam0->f_6);
				
					if (func_4(*uParam0, 30, true))
					{
						if (func_18(*uParam0, false))
							func_19(uParam0);
					
						func_12(*uParam0, 30, true);
					}
					else
					{
						bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true);
					}
				
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 130, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 315, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 301, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, joaat("rel_gang_dutchs"));
					ENTITY::SET_ENTITY_HEALTH(uParam0->f_5, PED::GET_PED_MAX_HEALTH(uParam0->f_5), 0);
				
					if (func_101(uParam0))
					{
						func_26(*uParam0, 35, false);
						func_26(*uParam0, 62, false);
					}
				
					if (func_4(*uParam0, 33, false))
					{
						func_102(uParam0);
					}
					else if (bLocal_139)
					{
						if (func_67(uParam0->f_5, 0))
							PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
					
						func_77(uParam0);
					}
					else if (func_83(uParam0, true))
					{
						func_84(uParam0);
					}
					else if (func_4(*uParam0, 35, false))
					{
						POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 0);
						func_79(uParam0);
					}
					else if (func_90(uParam0->f_5) || func_93(uParam0->f_5, func_92(func_91()), true, 0))
					{
						POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 1);
						func_103(uParam0);
					
						if (PED::IS_PED_ON_MOUNT(uParam0->f_5))
							TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 0, 0, 0, 0, 0);
					
						func_104(uParam0);
					}
					else
					{
						POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 0);
						func_79(uParam0);
					}
				}
			}
			break;
	
		case 7:
			if (flag2)
			{
				func_76(uParam0);
				return false;
			}
		
			flag6 = false;
		
			if (func_85(&(Global_1360165[*uParam0 /*1157*/].f_130)) && func_105(&(Global_1360165[*uParam0 /*1157*/].f_130)) > Global_1360165[*uParam0 /*1157*/].f_133)
				flag6 = true;
			else if (func_4(*uParam0, 34, false) && !TASK::_0x9FF5F9B24E870748(uParam0->f_5))
				flag6 = true;
			else if (func_4(*uParam0, 68, false) && func_106(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 3f, 4, 0))
				flag6 = true;
		
			if (flag6)
			{
				func_15(uParam0);
				PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
				func_104(uParam0);
				return false;
			}
			break;
	
		case 11:
			if (!func_18(*uParam0, false))
			{
				func_79(uParam0);
				return false;
			}
		
			func_107(uParam0);
			break;
	
		case 12:
			func_108(uParam0);
			break;
	
		case 18:
			func_109(uParam0);
			break;
	
		case 19:
			func_110(uParam0);
			break;
	
		case 23:
			if (!func_83(uParam0, false))
			{
				if (!func_85(&(uParam0->f_46)))
				{
					func_70(&(uParam0->f_46));
				}
				else if (func_86(&(uParam0->f_46)) > 30f || func_87(Global_35, false))
				{
					func_88(&(uParam0->f_46));
				
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true))
						func_19(uParam0);
				
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, BF_CanUseVehicles, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, BF_CanLeaveVehicle, false);
					func_89(&(uParam0->f_67), true);
				
					if (func_90(uParam0->f_5) || func_93(uParam0->f_5, func_92(func_91()), true, 0))
						func_80(uParam0, true);
					else
						func_79(uParam0);
				}
			}
			break;
	
		default:
			func_104(uParam0);
			break;
	}

	return false;
}

BOOL func_4(int iParam0, int iParam1, BOOL bParam2) // Position - 0xDAC Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_56(iParam0))
			return false;

	func_111(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_5(int iParam0) // Position - 0xDE7 Hash - 0xC4A0D69D ^0x461393B6
{
	Ped ped;
	PersChar persChar;
	BOOL flag;

	ped = func_112(iParam0);
	persChar = func_44(iParam0, false);
	func_113(iParam0, ped);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(ped))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			flag = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
		}
	
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		if (flag)
			PED::_UNRESERVE_AMBIENT_PEDS(1);
	}

	PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
	return;
}

BOOL func_6(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE41 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_56(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

void func_7(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE6B Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_114(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

void func_8(int iParam0, BOOL bParam1) // Position - 0xEA7 Hash - 0x7065DB4C ^0xB94EA2C3
{
	if (!func_56(iParam0))
		return;

	if (bParam1)
		if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
			func_9(iParam0, 1, false);

	func_9(iParam0, 16, bParam1);
	return;
}

void func_9(int iParam0, int iParam1, BOOL bParam2) // Position - 0xEE9 Hash - 0x322BF689 ^0x724E8BC3
{
	if (!func_56(iParam0))
		return;

	func_116(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
	return;
}

void func_10(int iParam0) // Position - 0xF11 Hash - 0x7895582D ^0x7895582D
{
	func_9(iParam0, 8, false);
	return;
}

void func_11(int iParam0) // Position - 0xF22 Hash - 0x8577BCFD ^0x8577BCFD
{
	func_26(iParam0, 36, true);
	return;
}

void func_12(int iParam0, int iParam1, BOOL bParam2) // Position - 0xF33 Hash - 0xA83ABB27 ^0xCD66A93E
{
	int num;
	int offset;

	if (bParam2)
		if (!func_56(iParam0))
			return;

	func_111(iParam1, &num, &offset);
	MISC::CLEAR_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

void func_13(int iParam0) // Position - 0xF6D Hash - 0x51A0FAA ^0x1641468D
{
	Blip blip;

	if (!func_56(iParam0))
		return;

	if (func_117(iParam0))
	{
		blip = func_118(iParam0);
	
		if (MAP::DOES_BLIP_EXIST(blip))
			MAP::REMOVE_BLIP(&blip);
	}

	return;
}

void func_14(var uParam0) // Position - 0xFA5 Hash - 0x49584173 ^0x49584173
{
	func_119(uParam0);
	func_120(uParam0);
	return;
}

void func_15(var uParam0) // Position - 0xFB9 Hash - 0x3952A4C9 ^0xA9D154F5
{
	func_88(&(Global_1360165[*uParam0 /*1157*/].f_130));
	Global_1360165[*uParam0 /*1157*/].f_133 = -1f;
	func_12(*uParam0, 33, false);
	func_12(*uParam0, 34, false);
	func_12(*uParam0, 12, false);
	func_12(*uParam0, 68, false);
	return;
}

BOOL func_16(int iParam0) // Position - 0x1006 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_17(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1045 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_16(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_121(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_122(num);
	*uParam0 = 0;
	return;
}

BOOL func_18(int iParam0, BOOL bParam1) // Position - 0x1099 Hash - 0xF6905B76 ^0x4F37D8F8
{
	Ped ped;

	ped = func_112(iParam0);

	if (bParam1)
		if (!func_67(ped, 0))
			return false;

	return PED::IS_PED_GROUP_MEMBER(ped, func_37(), true);
}

void func_19(var uParam0) // Position - 0x10C8 Hash - 0xCDDFE77A ^0xCDDFE77A
{
	func_123(*uParam0);
	bLocal_139 = false;
	return;
}

void func_20(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x10DA Hash - 0x9B607B14 ^0xA19051E3
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
	{
		func_12(iParam0, 4, true);
		func_12(iParam0, 17, true);
		func_12(iParam0, 1, true);
		func_12(iParam0, 2, true);
		return;
	}

	if (!func_114(iParam0))
		return;

	if (func_124(iParam0) && !bParam2)
		return;

	if (func_125(iParam0) && !bParam2)
		return;

	if (iParam0 == Global_1357549.f_1497 && !bParam2)
		return;

	if (!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)) && func_126(iParam0) < 5000f && !CAM::IS_SCREEN_FADED_OUT())
		return;

	func_12(iParam0, 4, true);
	func_12(iParam0, 17, true);
	func_12(iParam0, 1, true);
	func_12(iParam0, 2, true);
	func_113(iParam0, func_112(iParam0));
	func_127(iParam0, true, true, true, bParam4);
	return;
}

BOOL func_21(int iParam0) // Position - 0x11CC Hash - 0x6410553A ^0x46627D03
{
	if (!func_56(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
		return false;

	return true;
}

int func_22(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1218 Hash - 0x9AECF115 ^0xB93A91A1
{
	Player mount;
	int num;
	PersChar persChar;

	if (!func_56(iParam0))
		return 0;

	mount = func_128(iParam0);

	if (func_67(mount, 0))
	{
		if (func_67(PED::_GET_RIDER_OF_MOUNT(mount, false), 0) && !bParam4)
			return 0;
	
		if (bParam1 || !func_21(iParam0) || func_129(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(mount) && func_130(PLAYER::PLAYER_PED_ID(), mount, true) < 10000f))
			{
				num = func_131(iParam0, true);
			
				if (num != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(mount))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(mount, true, true);
				
					func_132(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_133(iParam0, false));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_133(iParam0, false));
					func_24(iParam0);
				}
			}
			else
			{
				if (func_6(iParam0, 32768, true))
				{
					persChar = func_133(iParam0, false);
					PERSCHAR::_0xB65E7F733956CF25(persChar);
					PERSCHAR::_0xFCC6DB8DBE709BC8(persChar);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&mount);
				}
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(mount, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_6(iParam0, 32768, true))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_132(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_133(iParam0, false));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_133(iParam0, false));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_132(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}

	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_29(iParam0, 0);
	return 1;
}

void func_23(int iParam0) // Position - 0x13C9 Hash - 0xB8E0F3E8 ^0x34B6D0F1
{
	if (!func_114(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
	func_12(iParam0, 42, true);
	return;
}

void func_24(int iParam0) // Position - 0x13F5 Hash - 0xA6C3B06B ^0x3AB8265A
{
	int i;

	if (!func_56(iParam0))
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
	}

	return;
}

void func_25(var uParam0, int iParam1) // Position - 0x1448 Hash - 0xA4EAD31F ^0x77D45044
{
	uParam0->f_2 = uParam0->f_2 - uParam0->f_2 && iParam1;
	return;
}

void func_26(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1460 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_56(iParam0))
			return;

	func_111(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

int func_27(int iParam0) // Position - 0x149A Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_28(BOOL bParam0, int iParam1) // Position - 0x14A9 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_29(int iParam0, int iParam1) // Position - 0x14BE Hash - 0xEBFF508D ^0x493427AF
{
	if (!func_56(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
	return;
}

void func_30(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14E2 Hash - 0x7FA68C0F ^0xF104E0DF
{
	if (!func_56(iParam0))
		return;

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1;
	else
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = Global_1360165[iParam0 /*1157*/].f_70.f_1 - Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1;

	return;
}

void func_31(var uParam0) // Position - 0x1547 Hash - 0xBFB8BF17 ^0x27501367
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_123))
		VOLUME::DELETE_VOLUME(uParam0->f_123);

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 377, false);

	return;
}

void func_32(int iParam0, Hash hParam1) // Position - 0x1579 Hash - 0xA2CBCCA2 ^0xA2CBCCA2
{
	int num;
	BOOL flag;

	if (!func_56(iParam0))
		return;

	if (!func_134(hParam1))
		return;

	num = -1;
	flag = false;

	if (func_135(iParam0, hParam1, &num, &flag))
	{
		if (flag)
			func_136(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
	
		if (num != -1)
			func_137(iParam0, num);
	}

	return;
}

BOOL func_33(var uParam0, var uParam1) // Position - 0x15D5 Hash - 0x18766AA8 ^0x18766AA8
{
	if (*uParam1 || func_4(*uParam0, 44, false))
		return 1;

	return 0;
}

BOOL func_34(var uParam0) // Position - 0x15F8 Hash - 0xA5B993E0 ^0xA5B993E0
{
	if (bLocal_139)
		return false;

	if (func_4(*uParam0, 1, true))
		return true;

	return false;
}

BOOL func_35(int iParam0) // Position - 0x161A Hash - 0x3A09CD58 ^0xAEC57E4
{
	if (!func_56(iParam0))
		return false;

	return PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_44(iParam0, false));
}

void func_36(var uParam0) // Position - 0x163B Hash - 0x25C7214 ^0x8E57EE05
{
	Vector3 entityCoords;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
	uParam0->f_11 = BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, entityCoords) > 2f;
	Global_1360165[*uParam0 /*1157*/].f_135 = { entityCoords };
	Global_1360165[*uParam0 /*1157*/].f_134 = BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, Global_36);
	return;
}

int func_37() // Position - 0x16A2 Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_38(BOOL bParam0, int iParam1) // Position - 0x16B2 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_39(var uParam0) // Position - 0x16C3 Hash - 0x5D51414A ^0xD1CF730A
{
	Any any;
	int num;
	Hash hash;
	Object objectIndexFromEntityIndex;

	obLocal_142 = 0;

	if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
	{
		any = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
		num = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, any);
	
		if (num == 1932006723 || num == 1130477742 || *uParam0 == 10 && num == joaat("braithwaites3") || *uParam0 == 19 && num == joaat("braithwaites3") || PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("world_human_rifle_put_down_lean")))
		{
			hash = func_138(uParam0->f_5, false, 0, false);
		
			if (func_139(hash))
				objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 0));
		
			if (!ENTITY::DOES_ENTITY_EXIST(objectIndexFromEntityIndex))
			{
				hash = func_138(uParam0->f_5, false, 1, false);
			
				if (func_139(hash))
					objectIndexFromEntityIndex = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_5, 1));
			
				if (!ENTITY::DOES_ENTITY_EXIST(objectIndexFromEntityIndex))
					return;
			}
		
			obLocal_142 = objectIndexFromEntityIndex;
		}
	}

	return;
}

BOOL func_40(var uParam0, var uParam1) // Position - 0x17B2 Hash - 0xAA5E79B0 ^0x7977EB13
{
	if (!*uParam1 || ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !func_125(*uParam0))
		return true;

	return false;
}

BOOL func_41(var uParam0) // Position - 0x17E1 Hash - 0xC5774616 ^0xC5774616
{
	float num;
	BOOL flag;

	if (func_140(func_91(), 8) || func_140(func_91(), 2))
		flag = true;

	if (flag)
		num = 40000f;
	else
		num = 10000f;

	if (func_126(*uParam0) > num)
	{
		if (*uParam0 == Global_1357549.f_1497)
			return false;
	
		if (flag)
			if (!func_141(uParam0->f_5))
				return true;
		else
			return true;
	}

	return false;
}

void func_42(var uParam0, var uParam1) // Position - 0x1859 Hash - 0x8C7469CE ^0x97FAA936
{
	Player player;

	if (!bLocal_138)
		return;

	func_142(uParam0);

	if (obLocal_142 != 0)
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_142) && func_143(ENTITY::GET_ENTITY_MODEL(obLocal_142)))
			WEAPON::_0x000FA7A4A8443AF7(obLocal_142);
		else
			obLocal_142 = 0;

	player = func_128(*uParam0);

	if (func_67(player, 0))
	{
		if (!func_144(*uParam0, 2048))
			ENTITY::_0xC3ABCFBC7D74AFA5(player, 6, true);
	
		if (!func_144(*uParam0, 4096))
			PED::SET_PED_RESET_FLAG(player, 91, true);
	}

	if (uParam0->f_1 != 6)
	{
		if (*uParam1)
		{
			func_76(uParam0);
			return;
		}
	
		if (uParam0->f_1 != 11 && uParam0->f_1 != 18 && uParam0->f_1 != 23)
		{
			if (bLocal_139)
			{
				func_77(uParam0);
				return;
			}
		}
	
		if (Global_1359489.f_10 == *uParam0)
			func_145(uParam0);
	}
	else
	{
		if (func_4(*uParam0, 44, false))
			if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() <= 1 && !ENTITY::DOES_ENTITY_EXIST(func_128(*uParam0)))
				PED::_RESERVE_AMBIENT_PEDS(1);
			else
				PED::_RESERVE_AMBIENT_PEDS(2);
	
		func_145(uParam0);
	}

	return;
}

void func_43(var uParam0) // Position - 0x1970 Hash - 0x695C91A9 ^0xD6746621
{
	float num;

	if (bLocal_138)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);
	
		if (Global_1359489.f_10 == *uParam0)
		{
			if (Global_1360165[*uParam0 /*1157*/].f_1152 == -1 || Global_1360165[*uParam0 /*1157*/].f_1152 == 3)
			{
				num = func_146();
			
				if (uParam0->f_121 != num || !PED::_IS_PED_DRUNK(uParam0->f_5))
				{
					uParam0->f_121 = num;
					func_147(*uParam0, num);
					PED::_0xE0FE107AB174D64A(uParam0->f_5, 1);
				}
			}
			else if (PED::_GET_PED_DRUNKNESS(uParam0->f_5) > 0f)
			{
				uParam0->f_121 = uParam0->f_121 - 0.01f;
			
				if (uParam0->f_121 > 0f)
				{
					func_147(*uParam0, uParam0->f_121);
				}
				else
				{
					uParam0->f_121 = 0f;
					func_148(*uParam0);
				}
			}
		}
	}

	return;
}

PersChar func_44(int iParam0, BOOL bParam1) // Position - 0x1A34 Hash - 0xA2FCAA5A ^0xC4849EF1
{
	if (!func_114(iParam0))
		return 0;

	if (bParam1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
			func_57(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_45(var uParam0) // Position - 0x1A73 Hash - 0x155C110C ^0x155C110C
{
	int num;

	num = func_149(uParam0);

	if (num == 0)
		return;

	switch (num)
	{
		case 2:
			if (func_18(*uParam0, false))
				func_19(uParam0);
		
			func_150(uParam0);
			break;
	
		case 16:
			if (!func_151(*uParam0))
				func_100(uParam0, 6);
		
			func_150(uParam0);
			break;
	
		case 21:
			uParam0->f_107 = func_152(uParam0);
			func_153(uParam0);
			func_25(uParam0, 4096);
			func_100(uParam0, 2048);
			func_150(uParam0);
			break;
	
		case 22:
			uParam0->f_107 = -1;
			func_153(uParam0);
			func_25(uParam0, 2048);
			func_100(uParam0, 4096);
			break;
	
		case 23:
			func_25(uParam0, 2048);
			func_25(uParam0, 4096);
			func_150(uParam0);
			uParam0->f_107 = -1;
			break;
	
		case 27:
			if (!func_6(*uParam0, 16, false))
			{
				if (uParam0->f_1 == 3)
				{
					uParam0->f_6 = func_44(*uParam0, false);
				
					if (uParam0->f_6 != 0 && MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uParam0->f_6))
						PERSCHAR::_0xD4B614179BCD0654(uParam0->f_6);
				
					func_104(uParam0);
				}
			}
		
			func_150(uParam0);
			break;
	}

	return;
}

void func_46(var uParam0, var uParam1) // Position - 0x1BA7 Hash - 0x4B6F77FE ^0x65326859
{
	Player animal;
	float num;
	Vector3 vector;
	var unk3;
	BOOL flag;
	Ped riderOfMount;
	BOOL flag2;

	if (func_151(*uParam0))
		return;

	animal = Global_1360165[*uParam0 /*1157*/].f_70;
	bLocal_141 = func_67(animal, 0);

	if (bLocal_141)
	{
		if (func_4(*uParam0, 38, true))
		{
			PED::SET_PED_OWNS_ANIMAL(func_112(*uParam0), animal, false);
			PED::_0xED1C764997A86D5A(func_112(*uParam0), animal);
			PED::SET_PED_CONFIG_FLAG(animal, 367, true);
			func_12(*uParam0, 38, true);
		}
	
		num = 40000f;
		flag = func_154(func_69(), &vector, &unk3);
	
		if (!func_155(uParam0))
		{
			if (!func_144(*uParam0, 32))
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(animal, 0, true);
				func_30(*uParam0, 32, true);
			}
		}
		else if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(animal))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(animal, true, true);
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(animal, 1);
		
			if (func_144(*uParam0, 32))
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(animal, 0, false);
				func_30(*uParam0, 32, false);
			}
		
			TASK::CLEAR_PED_TASKS(animal, true, false);
		
			if (flag && func_156(animal, vector, true) > 1200f && !func_144(*uParam0, 1024) && !func_21(*uParam0))
				num = 1200f;
			else if (!TASK::GET_IS_TASK_ACTIVE(animal, 7))
				PERSCHAR::_RETASK_PERSISTENT_CHARACTER(func_133(*uParam0, false));
		}
	
		if (!func_144(*uParam0, 1024) && func_156(animal, vector, true) > num)
		{
			if (!func_21(*uParam0) && !*uParam1 && !(func_144(*uParam0, 8) || func_144(*uParam0, 512)))
			{
				riderOfMount = PED::_GET_RIDER_OF_MOUNT(animal, false);
			
				if (riderOfMount == Global_35)
					TASK::TASK_HORSE_ACTION(animal, 2, 0, 0);
				else if (riderOfMount != uParam0->f_5)
					if (flag)
						if (!func_157(animal, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !TASK::GET_IS_TASK_ACTIVE(animal, 7) && !func_157(animal, 258748395) && !func_157(animal, 1041577989))
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(animal, vector, 2.5f, -1, 1048576000, 0, 1193033728);
			}
		}
		else if (PED::_GET_RIDER_OF_MOUNT(animal, false) == 0 && !func_21(*uParam0) && !(func_144(*uParam0, 8) || func_144(*uParam0, 512)))
		{
			if (flag)
				if (func_156(animal, vector, true) < num)
					if (!TASK::GET_IS_TASK_ACTIVE(animal, 7) && !func_157(animal, 258748395) && !func_157(animal, 1041577989))
						PERSCHAR::_RETASK_PERSISTENT_CHARACTER(func_133(*uParam0, false));
		}
	}

	if (func_158(*uParam0, false))
		return;

	if (func_159(uParam0, 2))
	{
		if (PED::IS_PED_ON_MOUNT(uParam0->f_5) || func_157(uParam0->f_5, SCRIPT_TASK_MOUNT_ANIMAL))
			func_25(uParam0, 2);
	
		flag2 = func_160(*uParam0);
	
		if (!flag2 && uParam0->f_1 != 6 || func_161(2048))
			func_162(*uParam0);
	}
	else if (Global_1360165[*uParam0 /*1157*/].f_70.f_13 > 2)
	{
		func_23(*uParam0);
	}

	return;
}

BOOL func_47(int iParam0) // Position - 0x1ED6 Hash - 0x83DD6E97 ^0x83DD6E97
{
	return Global_1899515 > iParam0;
}

void func_48(var uParam0) // Position - 0x1EE5 Hash - 0xBC9C0282 ^0xFDD66A1C
{
	char* str;
	Any any;
	int num;
	BOOL flag;
	Entity outEntity;

	if (func_95(uParam0, 536870912))
	{
		if (bLocal_138 && func_67(Global_35, 0))
		{
			str = func_163();
		
			if (func_164(uParam0->f_5, str, joaat("SPEECH_PARAMS_STANDARD"), Global_35, 0, 0, uParam0->f_101, 1))
				func_165(uParam0, 536870912);
		
			return;
		}
		else
		{
			func_165(uParam0, 536870912);
		}
	}

	if (func_95(uParam0, 1073741824))
	{
		if (bLocal_138 && func_67(Global_35, 0))
		{
			str = func_166();
		
			if (func_164(uParam0->f_5, str, joaat("SPEECH_PARAMS_STANDARD"), Global_35, 0, 0, 0, 1))
				func_165(uParam0, 1073741824);
		
			return;
		}
		else
		{
			func_165(uParam0, 1073741824);
		}
	}

	if (*uParam0 == 17 && func_35(*uParam0))
	{
		if (PERSCHAR::_0xA8120EBEAF290C7A(uParam0->f_6))
		{
			any = PERSCHAR::_0x69786495C92A3044(uParam0->f_6);
			num = PERSCHAR::_0xEC254C2C9B0F08F1(uParam0->f_6, any);
		
			if (num == 1281438538 && PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("world_human_drink_flask")))
			{
				if (!func_95(uParam0, -2147483648))
				{
					flag = true;
				
					if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
						if (ENTITY::DOES_ENTITY_EXIST(outEntity) && ENTITY::IS_ENTITY_A_PED(outEntity))
							if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity) == uParam0->f_5)
								flag = false;
				
					if (flag)
						if (func_164(uParam0->f_5, "FOOD_READY_REMINDER", joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 0, 1, 0, 0, 1))
							func_98(uParam0, -2147483648);
				}
			}
			else if (func_95(uParam0, -2147483648))
			{
				func_165(uParam0, -2147483648);
			}
		}
	}

	return;
}

void func_49(var uParam0, var uParam1) // Position - 0x2084 Hash - 0x202DFF26 ^0xE60E95F1
{
	BOOL isPedOnMount;
	var unk;
	Vector3 vector;
	Vector3 vector2;
	float groundZ;
	Vector3 vector3;
	Vector3 vector4;
	float speedMultiplier;
	var unk10;
	Vector3 vector5;
	float speedMultiplier2;
	Vector3 vector6;
	float pedSpeed;
	BOOL isEntityDead;
	Vector3 vector7;
	Vector3 vector8;
	Vector3 vector9;

	if (*uParam1 || func_167(*uParam0))
		if (!func_161(2048))
			return;

	if (uParam0->f_102 == 1 || uParam0->f_102 == 2)
		return;

	if (uParam0->f_103 != uParam0->f_102 && uParam0->f_103 != 0)
	{
		if (uParam0->f_102 != 25)
			func_168(*uParam0, false, "received new task");
	
		func_88(&(uParam0->f_46));
	}

	uParam0->f_103 = uParam0->f_102;

	if (uParam0->f_102 != 9)
		func_25(uParam0, 2);

	switch (uParam0->f_102)
	{
		case 1:
		case 3:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, 1351865802))
				{
					if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
					{
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 1, 1, 1);
						func_170(uParam0, 2);
					}
				}
			}
			break;
	
		case 2:
			if (!PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
				if (!func_169(uParam0, 1351865802))
					if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105))
						if (TASK::_0xBD70108D01875299(uParam0->f_105) > 0)
							TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(uParam0->f_5, uParam0->f_105, 0, 0, 1);
			break;
	
		case 4:
			if (!func_169(uParam0, SCRIPT_TASK_WANDER_IN_AREA))
			{
				vector2 = { func_171(func_91(), true) };
				groundZ = 0f;
			
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector2, &groundZ, false))
					vector2.f_2 = groundZ;
			
				TASK::TASK_WANDER_IN_AREA(uParam0->f_5, vector2, 40f, 1077936128, 1086324736, 0);
			}
			break;
	
		case 5:
			if (!func_169(uParam0, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY))
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_5, Global_35, -1, -1082130432, -1082130432, -1082130432);
			break;
	
		case 6:
			if (!func_169(uParam0, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
			{
				vector3 = { func_172(*uParam0) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vector3, 1f, -1, 3f, 0, 1193033728);
			}
			break;
	
		case 7:
			if (!func_169(uParam0, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
			{
				vector4 = { func_172(*uParam0) };
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vector4, 2f, -1, 3f, 0, 1193033728);
			}
			break;
	
		case 9:
			if (func_4(*uParam0, 35, true))
			{
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
					PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
			
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
		
			if (func_178(*uParam0) || func_169(uParam0, SCRIPT_TASK_MOUNT_ANIMAL))
				return;
		
			if (func_151(*uParam0))
				return;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_5, true))
			{
				if (!func_169(uParam0, SCRIPT_TASK_LEAVE_ANY_VEHICLE))
					TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_5, 0, 0);
			
				return;
			}
		
			if (func_126(*uParam0) > 2500f)
				func_179(*uParam0, true);
		
			if (func_4(*uParam0, 35, true))
				pedSpeed = 3f;
			else if (PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0) || func_174(PLAYER::PLAYER_ID(), true, false, true) || ENTITY::DOES_ENTITY_EXIST(Global_1360165[*uParam0 /*1157*/].f_70) && func_180(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_70) > 15f)
				pedSpeed = 2f;
			else
				pedSpeed = 1f;
		
			isEntityDead = ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_70);
		
			if (!isEntityDead && func_181(*uParam0, 1120403456) && !func_182(*uParam0) || func_161(512))
			{
				func_25(uParam0, 2);
				TASK::CLEAR_PED_TASKS(func_128(*uParam0), true, false);
			
				if (!PED::_IS_PED_VISIBILITY_TRACKED(uParam0->f_5))
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
			
				if (!PED::IS_TRACKED_PED_VISIBLE(uParam0->f_5))
					func_183(uParam0, true, "Out of sight - quick mount horse");
			
				PED::RELEASE_PED_VISIBILITY_TRACKING(uParam0->f_5);
			
				if (PED::IS_PED_RAGDOLL(func_128(*uParam0)))
					return;
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_128(*uParam0), true);
			
				if (func_184(Global_1360165[*uParam0 /*1157*/].f_70))
					func_98(uParam0, 8);
			
				TASK::TASK_MOUNT_ANIMAL(uParam0->f_5, func_128(*uParam0), -1, -1, pedSpeed, 1, 0, 0);
			}
			else if (!isEntityDead)
			{
				if (!func_157(uParam0->f_5, SCRIPT_TASK_GO_TO_ENTITY))
					TASK::TASK_GO_TO_ENTITY(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_70, 20000, 0.5f, pedSpeed, 1073741824, 0);
			}
			else
			{
				if (!func_159(uParam0, 2))
					func_100(uParam0, 2);
			
				if (func_4(*uParam0, 35, true) && !func_174(PLAYER::PLAYER_ID(), true, false, true) || func_4(*uParam0, 62, true))
				{
					if (!func_157(uParam0->f_5, 518218985))
						TASK::_TASK_FLEE_FROM_PED(uParam0->f_5, Global_35, 0f, 0f, 0f, 200f, 20000, 0, 2f, 0);
				}
				else if (PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0) || func_174(PLAYER::PLAYER_ID(), true, false, true) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, 8) > 0)
				{
					if (!func_157(uParam0->f_5, SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
						PED::REGISTER_HATED_TARGETS_AROUND_PED(uParam0->f_5, 60f);
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 60f, 0, 20);
					}
				}
				else if (!func_157(uParam0->f_5, SCRIPT_TASK_WANDER_IN_AREA))
				{
					TASK::TASK_WANDER_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 15f, 0f, 1f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
	
		case 10:
			if (!func_161(134217728))
			{
				if (!func_85(&(uParam0->f_46)))
				{
					uParam0->f_83 = MISC::GET_RANDOM_INT_IN_RANGE(750, 3000);
					func_89(&(uParam0->f_46), true);
				}
			
				if (func_72(&(uParam0->f_46)) > uParam0->f_83)
				{
					if (!func_169(uParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
					{
						if (func_178(*uParam0))
						{
							if (TASK::IS_PED_STILL(uParam0->f_5))
							{
								TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
							
								if (func_184(Global_1360165[*uParam0 /*1157*/].f_70))
								{
									func_185(*uParam0);
								
									if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_123))
										func_186(*uParam0, Global_1360165[*uParam0 /*1157*/].f_123, false, false, true);
								}
							}
							else if (!func_169(uParam0, SCRIPT_TASK_STAND_STILL))
							{
								TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
							}
						}
					}
				}
			}
			break;
	
		case 11:
			if (func_156(uParam0->f_5, uParam0->f_8, true) > 4f)
				if (!func_169(uParam0, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, uParam0->f_8, 1f, -1, 1048576000, 0, 1193033728);
			else if (!func_169(uParam0, SCRIPT_TASK_DISMOUNT_ANIMAL))
				if (func_178(*uParam0))
					if (TASK::IS_PED_STILL(uParam0->f_5))
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_5, 1, 0, 0, 0, 0);
					else if (!func_169(uParam0, SCRIPT_TASK_STAND_STILL))
						TASK::TASK_STAND_STILL(uParam0->f_5, 1000);
			break;
	
		case 12:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_5, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), false))
					func_187(uParam0);
			break;
	
		case 14:
			if (func_188(*uParam0))
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_5, joaat("WEAPON_UNARMED"), true, 0, false, false);
			break;
	
		case 16:
			if (!func_169(uParam0, SCRIPT_TASK_STAND_STILL))
				TASK::TASK_STAND_STILL(uParam0->f_5, -1);
			break;
	
		case 17:
			if (func_173(uParam0->f_5))
				return;
		
			if (func_4(*uParam0, 35, true))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 52, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 201, true);
				PED::SET_PED_RESET_FLAG(uParam0->f_5, 228, true);
			}
		
			if (func_126(*uParam0) > 10000f || ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, func_92(5), true, 0))
				speedMultiplier = 3f;
			else if (func_126(*uParam0) > 5625f)
				speedMultiplier = 2f;
			else
				speedMultiplier = 1f;
		
			if (speedMultiplier < 3f)
				if (func_4(*uParam0, 35, true))
					speedMultiplier = 3f;
				else if (func_174(PLAYER::PLAYER_ID(), true, false, true) || PED::IS_PED_IN_COMBAT(Global_35, 0) || PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
					speedMultiplier = 2f;
		
			isPedOnMount = PED::IS_PED_ON_MOUNT(uParam0->f_5);
			func_175(&vector, &unk);
		
			if (!isPedOnMount && BUILTIN::VDIST2(Global_1360165[*uParam0 /*1157*/].f_135, vector) > 562500f)
				isPedOnMount = true;
		
			if (PED::IS_PED_IN_COMBAT(Global_35, 0) && PED::IS_PED_IN_COMBAT(uParam0->f_5, 0))
			{
				if (!func_169(uParam0, -2117564886))
					TASK::TASK_COMBAT_HATED_TARGETS(uParam0->f_5, -1082130432);
			}
			else if (!func_169(uParam0, -1665583462) && isPedOnMount || !func_169(uParam0, SCRIPT_TASK_FOLLOW_NAVMESH_TO_COORD_ADVANCED) && !isPedOnMount || speedMultiplier != uParam0->f_104)
			{
				uParam0->f_104 = speedMultiplier;
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 113, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
			
				if (isPedOnMount)
					TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(uParam0->f_5, vector, 1073741824, speedMultiplier, 4096, 0);
				else
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(uParam0->f_5, vector, speedMultiplier, -1, 0.25f * 2f, 5242885, unk10, 1193033728);
			}
			break;
	
		case 18:
			if (!func_169(uParam0, SCRIPT_TASK_GO_STRAIGHT_TO_COORD))
			{
				vector5 = { func_171(func_91(), true) };
				vector5 = { vector5 - ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
				vector5 = { func_176(vector5) };
				vector5 = { vector5 * { 50f, 50f, 50f } };
				vector5 = { vector5 + ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
			
				if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector5, &(vector5.f_2), false))
				{
					vector5.f_2 = vector5.f_2 + 99f;
					MISC::GET_GROUND_Z_FOR_3D_COORD(vector5, &(vector5.f_2), false);
				}
			
				TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_5, vector5, 2f, 20000, 1193033728, 1056964608, 0);
			}
			break;
	
		case 19:
			if (func_126(*uParam0) > 10000f)
				speedMultiplier2 = 3f;
			else if (func_126(*uParam0) > 5625f)
				speedMultiplier2 = 2f;
			else
				speedMultiplier2 = 1f;
		
			if (!func_169(uParam0, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) || speedMultiplier2 != uParam0->f_104)
			{
				func_175(&vector, &unk);
				vector6 = { vector };
				func_177(&vector6, 50, 10, false);
				uParam0->f_104 = speedMultiplier2;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vector6, speedMultiplier2, -1, 3f, 37, 1193033728);
			}
			break;
	
		case 20:
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_109))
			{
				if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_5, uParam0->f_109))
				{
					vector7 = { func_189(uParam0->f_108) };
				
					if (func_156(uParam0->f_5, vector7, true) > 9f)
						if (!func_169(uParam0, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vector7, func_190(uParam0->f_107), -1, 1048576000, 0, 1193033728);
					else
						TASK::TASK_USE_SCENARIO_POINT(uParam0->f_5, uParam0->f_109, 0, 0, true, false, 0, false, -1082130432, false);
				}
			}
			break;
	
		case 21:
			vector8 = { func_189(uParam0->f_108) };
		
			if (func_156(uParam0->f_5, vector8, true) > 4f)
			{
				if (!func_169(uParam0, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_5, vector8, 1f, -1, 1048576000, 0, 1193033728);
			}
			else if (!func_169(uParam0, SCRIPT_TASK_TURN_PED_TO_FACE_COORD))
			{
				vector9 = { func_191(uParam0->f_108) };
				TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_5, vector9, 1000);
			}
			break;
	
		case 22:
			if (!func_169(uParam0, SCRIPT_TASK_GOTO_ENTITY_OFFSET))
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(uParam0->f_5, Global_35, -1, 1f, 1f, 2f, 1f, 0);
			break;
	
		case 23:
			if (!func_169(uParam0, 1695144541))
			{
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1359489.f_62))
					Global_1359489.f_62 = VOLUME::CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, 0f, 15f, 15f, 15f);
			
				TASK::TASK_COMPANION_AMBIENT(uParam0->f_5, Global_1359489.f_62);
			}
			break;
	
		case 25:
			break;
	
		case 26:
			if (!func_169(uParam0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
				TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(uParam0->f_5, Global_35, 0, 0, -1082130432, -1082130432, 8, 0, 0, 1069547520, 1073741824);
			break;
	
		case 27:
			if (!(bLocal_139 || func_157(uParam0->f_5, SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA) || func_157(uParam0->f_5, SCRIPT_TASK_COWER)))
			{
				if (!func_4(*uParam0, 3, true) || func_192(*uParam0))
				{
					if (func_193())
						func_187(uParam0);
					else if (!func_157(uParam0->f_5, SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA))
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(uParam0->f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 300f, 0, 20);
				}
				else if (!func_157(uParam0->f_5, SCRIPT_TASK_COWER))
				{
					TASK::TASK_COWER(uParam0->f_5, -1, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
				}
			}
			break;
	}

	return;
}

void func_50(var uParam0) // Position - 0x2DAE Hash - 0x80452182 ^0xFF580240
{
	BOOL flag;
	BOOL flag2;
	int num;
	BOOL flag3;
	int num2;

	if (func_4(*uParam0, 66, false))
	{
		func_12(*uParam0, 66, false);
		uParam0->f_7 = 0;
	}

	switch (uParam0->f_7)
	{
		case 0:
			if (bLocal_140)
				bLocal_140 = false;
		
			flag = func_4(*uParam0, 25, false);
		
			if (func_69() != 0 && func_69() != 4)
			{
				flag2 = func_4(*uParam0, 65, false);
			
				if (Global_1360165[*uParam0 /*1157*/].f_56 || flag2 && Global_40.f_4942[*uParam0 /*60*/].f_59 == 0 && !flag && !func_4(*uParam0, 28, false) && !(func_125(*uParam0) || func_4(*uParam0, 44, true)) && func_53(*uParam0, true, false))
				{
					if (func_194(*uParam0, false) && uParam0->f_1 != 7 && *uParam0 != Global_1357549.f_1497 && !(func_195(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), true) || func_195(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), true)) && !func_4(*uParam0, 17, true) && !flag2 && !func_196(uParam0))
						num = func_197(*uParam0, func_69());
					else
						num = func_198(*uParam0, func_69(), true, true);
				
					bLocal_140 = true;
				
					if (func_199(num) && func_66(*uParam0, num))
						if (num != Global_40.f_4942[*uParam0 /*60*/].f_3)
							func_68(*uParam0, num, false);
				}
			}
		
			if (func_4(*uParam0, 8, true) || Global_1360165[*uParam0 /*1157*/].f_57)
			{
				if (func_67(uParam0->f_5, 256))
				{
					PED::_UPDATE_PED_VARIATION(uParam0->f_5, false, true, true, true, false);
					func_12(*uParam0, 8, false);
					Global_1360165[*uParam0 /*1157*/].f_57 = 0;
				}
			}
		
			if (Global_1360165[*uParam0 /*1157*/].f_63 != Global_40.f_4942[*uParam0 /*60*/].f_3 || flag)
				uParam0->f_7 = 3;
			else
				Global_1360165[*uParam0 /*1157*/].f_56 = 0;
			break;
	
		case 3:
			flag = func_4(*uParam0, 25, false) || func_4(*uParam0, 65, false);
		
			if (bLocal_140 && !flag && func_4(*uParam0, 28, true) || func_125(*uParam0) || func_4(*uParam0, 44, true))
			{
				func_88(&(uParam0->f_70));
				uParam0->f_7 = 0;
				bLocal_140 = false;
				return;
			}
		
			if (flag)
				flag3 = true;
		
			if (!flag3 && CAM::IS_SCREEN_FADED_OUT())
				flag3 = true;
		
			if (!flag3)
			{
				if (!func_200(uParam0->f_5, 1116471296, -1082130432, -1082130432, -1082130432))
				{
					num2 = func_201(uParam0);
				
					if (!func_85(&(uParam0->f_70)))
						func_89(&(uParam0->f_70), false);
					else if (func_72(&(uParam0->f_70)) >= num2)
						flag3 = true;
				}
				else if (func_85(&(uParam0->f_70)))
				{
					func_88(&(uParam0->f_70));
					flag3 = false;
				}
			}
		
			if (flag3 && !PED::IS_PED_READY_TO_RENDER(uParam0->f_5))
				flag3 = false;
		
			if (flag3)
			{
				Global_1360165[*uParam0 /*1157*/].f_63 = Global_40.f_4942[*uParam0 /*60*/].f_3;
			
				if (func_194(*uParam0, false))
				{
					if (*uParam0 != 18)
					{
						func_202(uParam0->f_5, false, false);
						func_26(*uParam0, 8, false);
					}
				
					func_100(uParam0, 134217728);
				}
			
				func_203(*uParam0, uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_63, false);
				func_204(uParam0);
				func_88(&(uParam0->f_70));
				func_12(*uParam0, 25, false);
				func_12(*uParam0, 65, false);
				uParam0->f_7 = 4;
			}
			break;
	
		case 4:
			Global_1360165[*uParam0 /*1157*/].f_56 = 0;
			uParam0->f_7 = 0;
			break;
	}

	return;
}

void func_51(var uParam0) // Position - 0x318B Hash - 0x2189A910 ^0x5423F8DC
{
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	BOOL flag2;
	int num4;
	int num5;

	num = PERSCHAR::_0xE4C51A8A3BD1664C(uParam0->f_6);
	func_205(*uParam0, num);
	func_206(*uParam0, num);

	if (Global_1360165[*uParam0 /*1157*/].f_1152 != -1)
	{
		if (func_207(Global_1360165[*uParam0 /*1157*/].f_1153))
		{
			if (func_208(func_81(), Global_1360165[*uParam0 /*1157*/].f_1153))
			{
				Global_1360165[*uParam0 /*1157*/].f_1152 = -1;
				Global_1360165[*uParam0 /*1157*/].f_1153 = -15;
			}
			else if (num != Global_1360165[*uParam0 /*1157*/].f_1152)
			{
				func_209(uParam0, Global_1360165[*uParam0 /*1157*/].f_1152, Global_1360165[*uParam0 /*1157*/].f_1153, 1);
			}
		}
		else
		{
			Global_1360165[*uParam0 /*1157*/].f_1152 = -1;
			Global_1360165[*uParam0 /*1157*/].f_1153 = -15;
		}
	
		return;
	}

	num2 = func_210(*uParam0);

	if (Global_40.f_4942[*uParam0 /*60*/].f_42 != -1 || Global_40.f_4942[*uParam0 /*60*/].f_44 != -1)
	{
		for (i = 0; i < 60; i = i + 1)
		{
			if (Global_40.f_4283.f_6[i /*5*/].f_4 == num2)
			{
				num3 = func_211(Global_40.f_4283.f_6[i /*5*/]);
			
				if (num3 == Global_40.f_4942[*uParam0 /*60*/].f_42)
					flag = true;
			
				if (num3 == Global_40.f_4942[*uParam0 /*60*/].f_44)
					flag2 = true;
			}
		}
	}

	if (flag)
	{
		if (func_207(Global_40.f_4942[*uParam0 /*60*/].f_43))
		{
			if (func_208(func_81(), Global_40.f_4942[*uParam0 /*60*/].f_43))
			{
				Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
				Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
			}
			else if (num != Global_40.f_4942[*uParam0 /*60*/].f_42)
			{
				func_209(uParam0, Global_40.f_4942[*uParam0 /*60*/].f_42, Global_40.f_4942[*uParam0 /*60*/].f_43, 0);
			}
		}
		else
		{
			Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
		}
	
		return;
	}
	else if (func_207(Global_40.f_4942[*uParam0 /*60*/].f_43))
	{
		PERSCHAR::_0xD95D777F828B2BBB(uParam0->f_6);
		Global_40.f_4942[*uParam0 /*60*/].f_42 = -1;
		Global_40.f_4942[*uParam0 /*60*/].f_43 = -15;
	}

	if (flag2)
	{
		if (num != Global_40.f_4942[*uParam0 /*60*/].f_44)
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, Global_40.f_4942[*uParam0 /*60*/].f_44);
	}
	else
	{
		num4 = func_69();
	
		if (num != 0 && num4 != 0 && num4 != 6 || num != 5 && num4 == 0 || num != 6 && num4 == 6)
		{
			num5 = 0;
		
			if (*uParam0 != 24 && *uParam0 != 25)
			{
				if (num4 == 0)
				{
					num5 = 5;
				
					if (*uParam0 == 10)
						num5 = 7;
				}
				else if (num4 == 6)
				{
					num5 = 6;
				}
			}
		
			Global_40.f_4942[*uParam0 /*60*/].f_44 = num5;
			PERSCHAR::_0x8AE4EFA464DAE42D(uParam0->f_6, num5);
		}
	}

	return;
}

void func_52(int iParam0) // Position - 0x34A0 Hash - 0x74446242 ^0x18D815F8
{
	Hash persCharHash;

	persCharHash = func_61(iParam0);

	if (!func_212(persCharHash))
		return;

	if (func_4(iParam0, 17, true))
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_39)))
			PERSCHAR::_SET_PERSCHAR_SCHEDULE(persCharHash, &(Global_1360165[iParam0 /*1157*/].f_39));
		else
			func_12(iParam0, 17, false);
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_40.f_4942[iParam0 /*60*/].f_51)))
		PERSCHAR::_SET_PERSCHAR_SCHEDULE(persCharHash, &(Global_40.f_4942[iParam0 /*60*/].f_51));

	return;
}

BOOL func_53(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3525 Hash - 0x9D8E22CB ^0x9D8E22CB
{
	if (!func_56(iParam0))
		return false;

	if (bParam1)
		return func_4(iParam0, 26, true);

	if (bParam2)
		if (!func_67(func_112(iParam0), 0))
			return false;

	if (!func_213(iParam0, true, false))
		return false;

	if (func_4(iParam0, 44, true))
		return false;

	return true;
}

void func_54(var uParam0, var uParam1) // Position - 0x3585 Hash - 0xB1DC304C ^0x721D8B40
{
	if (func_4(*uParam0, 40, false))
	{
		if (bLocal_141)
		{
			if (!func_21(*uParam0))
				PERSCHAR::_0xD4B614179BCD0654(Global_1360165[*uParam0 /*1157*/].f_126);
		
			func_29(*uParam0, 0);
			func_12(*uParam0, 40, false);
		}
		else
		{
			func_214(*uParam0, true, false, 0, 0, 1, false, true, false, 0, 0, 0, 0, true, false, true, MISC::IS_BIT_SET(uParam1->f_6, 3));
		}
	}

	return;
}

void func_55(var uParam0) // Position - 0x35EF Hash - 0xF3963A59 ^0xA3B06EA3
{
	BOOL flag;
	BOOL flag2;
	BOOL pedConfigFlag;
	BOOL pedConfigFlag2;
	BOOL pedConfigFlag3;
	BOOL isPedSitting;
	float volumeScale;
	BOOL flag3;
	BOOL flag4;
	BOOL isPedOnMount;

	if (func_215(65536))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_123))
			func_31(uParam0);
	
		return;
	}

	if (!bLocal_138)
		return;

	flag = VOLUME::DOES_VOLUME_EXIST(uParam0->f_123);
	flag2 = uParam0->f_1 == 3 || uParam0->f_1 == 7 || func_4(*uParam0, 45, true) && !func_4(*uParam0, 46, true);
	pedConfigFlag = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	pedConfigFlag2 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	pedConfigFlag3 = PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	isPedSitting = PED::IS_PED_SITTING(uParam0->f_5);

	if (flag2 && !pedConfigFlag)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, true);
	else if (!flag2 && pedConfigFlag)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 344, false);

	if (flag2 && !pedConfigFlag2)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, true);
	else if (!flag2 && pedConfigFlag2)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 56, false);

	if (flag2 && !pedConfigFlag3)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, true);
	else if (!flag2 && pedConfigFlag3)
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 57, false);

	if (flag)
	{
		if (flag2)
		{
			volumeScale = { VOLUME::GET_VOLUME_SCALE(uParam0->f_123) };
			flag3 = volumeScale < 1.4f - 0.05f;
			flag4 = volumeScale.f_1 > 0.5f - 0.05f && volumeScale.f_1 < 0.5f + 0.05f;
			isPedOnMount = PED::IS_PED_ON_MOUNT(Global_35);
		
			if (flag3 && isPedOnMount)
				VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 1.4f, 1.4f, 2f);
			else if (!flag3 && !isPedOnMount)
				VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.2f, 2f);
		
			if (flag4 && !isPedSitting)
				if (isPedOnMount)
					VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 1.4f, 1.4f, 2f);
				else
					VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.2f, 2f);
			else if (!flag4 && isPedSitting && !isPedOnMount)
				VOLUME::SET_VOLUME_SCALE(uParam0->f_123, 0.2f, 0.5f, 2f);
		}
		else
		{
			func_31(uParam0);
		}
	}
	else if (flag2)
	{
		uParam0->f_123 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), 0f, 0f, 0f, 0.2f, 0.2f, 2f);
	
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_123))
			PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_123, uParam0->f_5, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
	}

	return;
}

BOOL func_56(int iParam0) // Position - 0x3883 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

void func_57(int iParam0) // Position - 0x388F Hash - 0x7F4CEA57 ^0x7A0A798F
{
	Hash hash;

	if (!func_56(iParam0))
		return;

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		hash = func_61(iParam0);
	
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

int func_58(int iParam0) // Position - 0x38F7 Hash - 0xC62FA27D ^0xF00694D5
{
	if (!func_56(iParam0))
		return 0;

	return Global_40.f_4942[iParam0 /*60*/].f_6;
}

int func_59(int iParam0, int iParam1) // Position - 0x3919 Hash - 0x9EC31A63 ^0x913ED1B5
{
	PersChar persChar;

	if (!func_56(iParam0))
		return 0;

	persChar = func_44(iParam0, false);

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(func_112(iParam0)))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(func_112(iParam0), true, true);
	
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	}

	if (Global_40.f_4942[iParam0 /*60*/].f_6 != iParam1 || Global_40.f_4942[iParam0 /*60*/].f_3 == 0)
		func_68(iParam0, func_198(iParam0, Global_40.f_4283, true, true), true);

	Global_40.f_4942[iParam0 /*60*/].f_6 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(func_61(iParam0), Global_40.f_4942[iParam0 /*60*/].f_6);
	return 1;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x39D0 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

Hash func_61(int iParam0) // Position - 0x39FA Hash - 0xBA965109 ^0xCB1D208B
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

Hash func_62(int iParam0, int iParam1) // Position - 0x3BD6 Hash - 0xE1D12727 ^0x6E706E61
{
	int num;

	switch (iParam0)
	{
		case -2051275045:
			return -306710010;
	
		case -2040275819:
			return 464906090;
	
		case -1874208704:
			return 1680324116;
	
		case -1862464078:
			return 1895628185;
	
		case -1692022104:
			return -1851470579;
	
		case -1684458716:
			return 1976273473;
	
		case -1678882891:
			return -1638703055;
	
		case -1668922931:
			return -1915831038;
	
		case -1648322231:
			return 1074183062;
	
		case -1642335258:
			return -1491647079;
	
		case -1632589543:
			return 1052055818;
	
		case -1587546924:
			return -1303789247;
	
		case -1559986688:
			return 174754238;
	
		case -1532979576:
			return 1391951221;
	
		case -1414977761:
			return 1059434053;
	
		case -1394723994:
			return -1857650992;
	
		case -1341683964:
			return 1689938120;
	
		case -1335291723:
			return -1120526485;
	
		case -1268239471:
			return -1832874334;
	
		case -1248623443:
			return -1437962122;
	
		case -1205468859:
			return -757536090;
	
		case -1155031950:
			return 1883650185;
	
		case -1114682645:
			return 744097966;
	
		case -1092189504:
			return 389057251;
	
		case -1065026089:
			return 1087308308;
	
		case -973332710:
			return -2045878709;
	
		case -946772361:
			return 646599895;
	
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
			
				default:
				
			}
		
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -695701225:
			return -1090160065;
	
		case -571427255:
			return -251280159;
	
		case -481967001:
			return 1833893952;
	
		case -445211559:
			return -757536090;
	
		case -433615745:
			return 643643053;
	
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	
		case -310473775:
			return -877585857;
	
		case -301101630:
			return -1187204983;
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		case -193269670:
			return -1774801049;
	
		case -23947011:
			return -456769142;
	
		case 6418928:
			return -211106360;
	
		case 80515440:
			return -2137653778;
	
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
	
		case 283037683:
			return 1996046145;
	
		case 296923297:
			num = func_216(296923297, iParam1);
			return func_217(num);
	
		case 350498312:
			return 1959714099;
	
		case 404503428:
			return -1704514526;
	
		case 431390894:
			return -20643141;
	
		case 513932985:
			return 505715365;
	
		case 707545953:
			return 890352471;
	
		case 713940276:
			return -1949892659;
	
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
	
		case 837028314:
			return -20984612;
	
		case 867156718:
			return 241911854;
	
		case 876535472:
			return -1916145078;
	
		case 876797088:
			return 1309207681;
	
		case 928493661:
			return 861275228;
	
		case 961676983:
			return -1527307534;
	
		case 977450639:
			return 2111449038;
	
		case 1018353621:
			return 114272443;
	
		case 1046468203:
			return 393090546;
	
		case 1071744295:
			return -2065784734;
	
		case 1199580439:
			return -1443192745;
	
		case 1200878026:
			return 1560123389;
	
		case 1205492208:
			return 1598276604;
	
		case 1237718549:
			num = func_216(1237718549, iParam1);
			return func_217(num);
	
		case 1254970547:
			return -211106360;
	
		case 1295334688:
			return 869636257;
	
		case 1300659195:
			return -309158751;
	
		case 1484386316:
			return -800489594;
	
		case 1495063555:
			return -339275545;
	
		case 1593315648:
			return 989578874;
	
		case 1658153743:
			return -2072429185;
	
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
	
		case 1818898449:
			return 30596609;
	
		case 1842975347:
			return 491764525;
	
		case 1901494236:
			return 1245083301;
	
		case 1950972546:
			return -1699183538;
	
		case 2062813606:
			return 1709174532;
	
		case 2094043703:
			return -1395382793;
	}

	return joaat("META_OUTFIT_DEFAULT");
}

BOOL func_63(int iParam0, BOOL bParam1) // Position - 0x4078 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_218(iParam0))
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

BOOL func_64(int iParam0, int iParam1) // Position - 0x40A9 Hash - 0x38B100BB ^0xDF2FD6DF
{
	return Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1 > false;
}

void func_65(int iParam0, int iParam1, BOOL bParam2) // Position - 0x40C2 Hash - 0x45FC5048 ^0xD1D3120
{
	Hash hash;

	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_219(iParam0);
				func_220(iParam0, false);
				break;
		}
	
		func_221(iParam0, iParam1);
	
		if (func_222(iParam1, &hash))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_223(Global_1360165[iParam0 /*1157*/], hash))
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], hash);
			
				PED::_EQUIP_META_PED_OUTFIT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_219(iParam0);
				func_220(iParam0, true);
				break;
		}
	
		func_224(iParam0, iParam1);
		func_225(iParam0, Global_1360165[iParam0 /*1157*/], true);
	}

	return;
}

BOOL func_66(int iParam0, int iParam1) // Position - 0x421B Hash - 0xB10CB915 ^0x7678EBC
{
	BOOL flag;

	if (!func_114(iParam0))
		return false;

	if (iParam1 == 296923297 || iParam1 == 1237718549)
		return true;

	flag = func_226(iParam0, iParam1);
	return flag;
}

BOOL func_67(Ped pedParam0, int iParam1) // Position - 0x425A Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_227(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_227(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_227(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_227(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_227(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_227(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_227(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_227(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

void func_68(int iParam0, int iParam1, BOOL bParam2) // Position - 0x4359 Hash - 0xE34CA2E4 ^0x9C7D0427
{
	if (!func_114(iParam0))
		return;

	if (!func_66(iParam0, iParam1))
		return;

	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;

	if (bParam2)
		func_26(iParam0, 25, true);

	return;
}

int func_69() // Position - 0x4399 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_70(var uParam0) // Position - 0x43A7 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_228(uParam0, 0f);
	return;
}

void func_71(var uParam0) // Position - 0x43B6 Hash - 0x92FCE2B3 ^0x95AD63B1
{
	if (func_69() == 8)
	{
		func_229(uParam0, true);
	}
	else if (func_230() >= 75f)
	{
		func_229(uParam0, true);
	}
	else if (func_195(joaat("CSTAG_PLAYER_DONATED_FOOD"), true))
	{
		if (func_230() <= 25f)
		{
			switch (*uParam0)
			{
				case 3:
				case 4:
				case 6:
				case 9:
				case 18:
				case 19:
				case 20:
					func_229(uParam0, func_231());
					break;
			
				default:
					func_229(uParam0, true);
					break;
			}
		}
		else
		{
			func_229(uParam0, true);
		}
	}
	else if (func_230() <= 25f)
	{
		func_229(uParam0, false);
	}
	else
	{
		func_232(uParam0, true);
		func_232(uParam0, false);
	}

	return;
}

int func_72(var uParam0) // Position - 0x447E Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_85(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_233(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_234() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

int func_73(var uParam0, BOOL bParam1) // Position - 0x44D1 Hash - 0x21D48E14 ^0x373683AC
{
	if (bParam1)
	{
		return 0;
	}
	else if (func_72(&(uParam0->f_79)) > 5000)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && func_72(&(uParam0->f_79)) < 10000)
			return 1;
	
		return 0;
	}

	return 1;
}

Ped func_74(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4514 Hash - 0xE559A69A ^0x1987E42B
{
	Ped perscharPedIndex;

	if (!func_56(iParam0))
		return 0;

	if (!bParam2 && !Global_1359489.f_12 || bParam2 && Global_1359489.f_13 < 8)
	{
		if (bParam2 && bParam3)
			if (!TASK::_0xF97F462779B31786(func_235(Global_40.f_4283)))
				return 0;
	
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_1))
			PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_1);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(Global_1360165[iParam0 /*1157*/].f_1);
	
		if (ENTITY::DOES_ENTITY_EXIST(perscharPedIndex))
		{
			Global_1360165[iParam0 /*1157*/] = perscharPedIndex;
			Global_1359489.f_12 = 1;
		}
		else if (bParam2)
		{
			Global_1360165[iParam0 /*1157*/] = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_1, bParam1);
			Global_1359489.f_13 = Global_1359489.f_13 + 1;
		}
		else
		{
			Global_1360165[iParam0 /*1157*/] = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_1, bParam1);
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			return 0;
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, false);
			}
		
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_1360165[iParam0 /*1157*/], true);
			PERSCHAR::_0xD4B614179BCD0654(Global_1360165[iParam0 /*1157*/].f_1);
		}
	
		PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
	}
	else
	{
		return 0;
	}

	if (bParam1)
		func_236(Global_1360165[iParam0 /*1157*/]);

	return Global_1360165[iParam0 /*1157*/];
}

void func_75(var uParam0) // Position - 0x46A8 Hash - 0x2F9572C7 ^0x388984AD
{
	BOOL flag;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
	}
	else
	{
		if (!func_125(*uParam0))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam0->f_5))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 171, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_5, true, true);
			}
		
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, joaat("rel_gang_dutchs"));
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_5, true);
		}
	
		if (*uParam0 != 12)
			func_237(uParam0->f_5, 0);
		else
			func_237(uParam0->f_5, 2);
	
		if (!func_4(*uParam0, 7, true))
			if (*uParam0 == 14 || *uParam0 == 13 || *uParam0 == 21 || *uParam0 == 16 || *uParam0 == 19 || *uParam0 == 18 || *uParam0 == 17 || *uParam0 == 22 || *uParam0 == 4 || *uParam0 == 20 || *uParam0 == 15 || *uParam0 == 11 && !func_63(Global_1347702[134 /*49*/].f_15, true))
				func_26(*uParam0, 3, false);
	
		if (!func_4(*uParam0, 19, true))
			func_238(*uParam0, 1056964608, -1, 1061158912);
	
		func_12(*uParam0, 64, true);
	
		switch (*uParam0)
		{
			case 0:
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 116, true);
				break;
		
			case 4:
				if (func_239(45))
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "UNCLE_ES");
				break;
		
			case 5:
				if (func_240(67))
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 4);
				else
					AUDIO::_0xD47D47EFBF103FB8(uParam0->f_5, 3);
				break;
		
			case 7:
				if (func_239(45))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "CHARLES_SMITH_ES");
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LO_CHARLES_ES"));
				}
				break;
		
			case 10:
				if (!func_240(63))
				{
					PED::_SET_PED_INTERACTION_PERSONALITY(uParam0->f_5, joaat("kierantiedup"));
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LOADOUT_DEFAULT"));
				}
				break;
		
			case 11:
				if (!func_63(Global_1347702[66 /*49*/].f_15, true))
					PED::_SET_PED_INTERACTION_PERSONALITY(uParam0->f_5, joaat("avoid"));
			
				if (!func_63(Global_1347702[134 /*49*/].f_15, true) && !func_4(*uParam0, 7, true))
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LOADOUT_DEFAULT"));
				else
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LO_SADIE"));
			
				if (func_239(45))
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "SADIE_ADLER_ES");
				break;
		
			case 12:
				if (func_241())
					PERSCHAR::_0x63AA2B8EB087886A(func_61(12), MISC::GET_HASH_KEY("COMP_RUFUS"));
				else
					PERSCHAR::_0x63AA2B8EB087886A(func_61(12), MISC::GET_HASH_KEY("COMP_CAIN"));
			
				PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 523, true);
				break;
		
			case 13:
				if (func_239(45))
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_5, "ABIGAIL_ES");
				break;
		
			case 14:
				AUDIO::DISABLE_PED_PAIN_AUDIO(uParam0->f_5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, BF_AlwaysFlee, true);
				break;
		
			case 24:
			case 25:
				WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(uParam0->f_5, joaat("LO_AGRO_PED"));
				break;
		}
	
		bLocal_139 = PED::IS_PED_GROUP_MEMBER(uParam0->f_5, func_37(), true);
		PED::_0xE9E06EA514A69061(uParam0->f_5, joaat("Companion"));
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, true);
	}

	if (*uParam0 == 12)
		func_26(*uParam0, 5, false);

	func_242(*uParam0);
	func_243(*uParam0, Global_1360165[*uParam0 /*1157*/].f_138, Global_1360165[*uParam0 /*1157*/].f_139, true);

	if (uParam0->f_1 == 11)
		uParam0->f_99 = MISC::GET_GAME_TIMER();

	if (*uParam0 < 6)
		uParam0->f_15 = 0;
	else if (*uParam0 < 12)
		uParam0->f_15 = 1;
	else if (*uParam0 < 17)
		uParam0->f_15 = 2;
	else
		uParam0->f_15 = 3;

	flag = func_69() == 6;
	func_244(uParam0, flag);
	Global_1360165[*uParam0 /*1157*/].f_134 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), Global_36);
	func_245(uParam0);
	func_89(&(uParam0->f_12), false);
	Global_1360165[*uParam0 /*1157*/].f_70.f_14.f_12 = 1;
	func_12(*uParam0, 22, false);
	func_12(*uParam0, 65, false);
	Global_1360165[*uParam0 /*1157*/].f_70.f_12 = 0;
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 343, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 515, true);
	func_246(*uParam0, func_4(*uParam0, 60, true), func_4(*uParam0, 61, true), true);
	return;
}

void func_76(var uParam0) // Position - 0x4B1C Hash - 0xE6D0E3F4 ^0x20E3B905
{
	if (func_159(uParam0, 65536))
		if (bLocal_139)
			if (!func_161(2048))
				func_247(*uParam0);

	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);

	func_2(uParam0, 6);
	return;
}

void func_77(var uParam0) // Position - 0x4B6A Hash - 0x5B8B8CC7 ^0x2493C88C
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);

	func_246(*uParam0, true, false, true);

	if (!bLocal_139)
		func_187(uParam0);

	func_2(uParam0, 11);
	return;
}

BOOL func_78(var uParam0) // Position - 0x4BA5 Hash - 0x36C87A2B ^0x7BDA22A5
{
	if (Global_1357549.f_1497 == *uParam0)
		return false;

	if (func_90(uParam0->f_5))
		return false;

	if (TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7))
		return false;

	if (func_126(*uParam0) > 10000f)
		return false;

	return true;
}

void func_79(var uParam0) // Position - 0x4BF2 Hash - 0xC1A202F5 ^0xECDCCAD0
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);

	func_246(*uParam0, true, false, true);
	func_88(&(uParam0->f_34));
	uParam0->f_98 = -1;

	if (func_4(*uParam0, 35, true) && !func_4(*uParam0, 62, true))
	{
		func_98(uParam0, 536870912);
		func_248(uParam0);
		func_249(*uParam0, true);
	
		if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, true);
	}

	func_2(uParam0, 12);
	return;
}

void func_80(var uParam0, BOOL bParam1) // Position - 0x4C80 Hash - 0xF1987B4B ^0x4B2E071B
{
	func_11(*uParam0);

	if (bParam1)
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_5, -1))
			func_183(uParam0, false, "Move to available");

	func_250(*uParam0, true, true, false);

	if (func_4(*uParam0, 64, true))
	{
		func_26(*uParam0, 52, true);
		func_26(*uParam0, 51, true);
		func_12(*uParam0, 64, true);
	}

	func_251(*uParam0);

	if (bLocal_138)
	{
		TASK::_0xDF94844D474F31E5(uParam0->f_5);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_5, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 230, false);
		PED::_PED_CLEAR_LOCO_MOTION(uParam0->f_5);
		PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(uParam0->f_5);
	}

	func_246(*uParam0, true, true, true);
	func_252(uParam0, uParam0->f_102 == 17);
	func_170(uParam0, 25);
	func_2(uParam0, 3);
	return;
}

int func_81() // Position - 0x4D4A Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_82(int iParam0, int iParam1) // Position - 0x4D56 Hash - 0xF36C9AAB ^0xF36C9AAB
{
	return iParam0 > iParam1;
}

BOOL func_83(var uParam0, BOOL bParam1) // Position - 0x4D63 Hash - 0x262A4CBC ^0xFEA8E2FE
{
	if (Global_1357549.f_1614 && func_253(*uParam0, false))
		if (Global_1360165[*uParam0 /*1157*/].f_134 < 10000f && !func_254(2, false))
			return true;

	if (func_255())
		return false;

	if (func_87(Global_35, false))
		return false;

	if (!Global_1935630.f_24 && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, 8) <= 0 || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, 268435456) > 0)
		return false;

	if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
		return false;

	if (func_4(*uParam0, 35, true) && !func_174(PLAYER::PLAYER_ID(), false, false, true) || func_4(*uParam0, 62, true))
		return false;

	if (bParam1)
	{
		if (func_126(*uParam0) > 900f)
			return false;
	
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uParam0->f_5, Global_35, 17))
			return false;
	}

	if (func_85(&(uParam0->f_67)))
		if (func_86(&(uParam0->f_67)) < 10f)
			return false;
		else
			func_88(&(uParam0->f_67));

	return true;
}

void func_84(var uParam0) // Position - 0x4E8E Hash - 0xB9A1D5D8 ^0x84B8F6B0
{
	if (func_93(uParam0->f_5, func_92(func_91()), true, 0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, BF_CanUseVehicles, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, BF_CanLeaveVehicle, true);
	}

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
	PED::_SET_PED_COMBAT_STYLE_MOD(uParam0->f_5, joaat("notackling"), -1082130432);
	func_246(*uParam0, true, false, true);
	func_98(uParam0, 1073741824);
	func_170(uParam0, 27);
	func_2(uParam0, 23);
	return;
}

BOOL func_85(var uParam0) // Position - 0x4EFF Hash - 0x5001E582 ^0x5001E582
{
	return func_256(*uParam0, 1);
}

float func_86(var uParam0) // Position - 0x4F0F Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_85(uParam0))
		return uParam0->f_1;

	if (func_233(uParam0))
		return uParam0->f_2;

	return func_257() - uParam0->f_1;
}

BOOL func_87(Ped pedParam0, BOOL bParam1) // Position - 0x4F44 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_88(var uParam0) // Position - 0x4F71 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_89(var uParam0, BOOL bParam1) // Position - 0x4F87 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_85(uParam0))
		func_70(uParam0);

	return;
}

BOOL func_90(Entity eParam0) // Position - 0x4FA7 Hash - 0xDECE401E ^0xE1B33432
{
	var unk;
	float num;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	unk = { func_258(func_69()) };
	num = func_259();

	if (func_260(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), unk, num, false))
		return true;

	return false;
}

int func_91() // Position - 0x4FF7 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

Volume func_92(int iParam0) // Position - 0x5007 Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_261(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

BOOL func_93(Entity eParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x5027 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(eParam0, volParam1, bParam2, iParam3);
}

BOOL func_94(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x505D Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_262())
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
		num = func_263(Global_1898164.f_1[0 /*5*/]);
	
		if (func_264(num) && func_265(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_266(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_95(var uParam0, int iParam1) // Position - 0x5261 Hash - 0x718DD1EF ^0x66842345
{
	return uParam0->f_3 && iParam1 != false;
}

BOOL func_96() // Position - 0x5272 Hash - 0x853011DA ^0x963EA2E0
{
	return func_267(32768);
}

BOOL func_97(BOOL bParam0) // Position - 0x5282 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

void func_98(var uParam0, int iParam1) // Position - 0x5290 Hash - 0x53A96DDB ^0xA013391F
{
	uParam0->f_3 = uParam0->f_3 || iParam1;
	return;
}

void func_99(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x52A3 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_114(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_100(var uParam0, int iParam1) // Position - 0x52D4 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || iParam1;
	return;
}

BOOL func_101(var uParam0) // Position - 0x52E7 Hash - 0xBA1FF455 ^0xBA1FF455
{
	if (func_268() == 105)
		if (*uParam0 == 0 || *uParam0 == 3)
			if (func_270(func_269(17)) || func_271())
				return true;

	return false;
}

void func_102(var uParam0) // Position - 0x5327 Hash - 0x6C7ED270 ^0x6C7ED270
{
	func_246(*uParam0, true, false, true);
	func_2(uParam0, 7);
	return;
}

void func_103(var uParam0) // Position - 0x5340 Hash - 0x939E67E3 ^0x939E67E3
{
	var unk;

	if (iLocal_143 != func_69())
	{
		iLocal_143 = func_69();
		func_272(*uParam0, &unk, 60);
	}

	return;
}

void func_104(var uParam0) // Position - 0x5363 Hash - 0x2038FB4 ^0x41DDC9B9
{
	uParam0->f_98 = -1;
	func_25(uParam0, 8192);
	func_12(*uParam0, 35, true);
	func_12(*uParam0, 62, true);

	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 414, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 414, false);

	func_2(uParam0, 2);
	return;
}

float func_105(var uParam0) // Position - 0x53AF Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_85(uParam0))
		return 0f;

	if (func_233(uParam0))
		return uParam0->f_2;

	return func_257() - uParam0->f_1;
}

BOOL func_106(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4, int iParam5) // Position - 0x53E1 Hash - 0xE63199E6 ^0x5F324E69
{
	var unk;
	var unk6;

	if (_IS_NULL_VECTOR(uParam0))
		return 0;

	unk = 4;
	unk6 = 4;
	unk6[0] = 16384;
	unk6[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(uParam0, fParam3, &unk, &unk6, iParam5);
}

void func_107(var uParam0) // Position - 0x5421 Hash - 0x958EE188 ^0x81D9C0D3
{
	if (!func_159(uParam0, 2048))
	{
		if (func_273(uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
			{
				uParam0->f_107 = func_274(uParam0->f_120);
				func_275(uParam0->f_5, uParam0->f_120);
				func_100(uParam0, 2048);
				func_100(uParam0, 131072);
			}
		}
	}

	if (func_159(uParam0, 2048))
		func_276(uParam0);
	else if (func_159(uParam0, 4096))
		func_277(uParam0);

	return;
}

void func_108(var uParam0) // Position - 0x549D Hash - 0x1FF158A3 ^0x478B2237
{
	BOOL flag;
	BOOL flag2;

	if (!bLocal_138)
		return;

	if (func_278(uParam0) || !func_178(*uParam0) && func_90(uParam0->f_5))
	{
		if (func_188(*uParam0))
		{
			func_170(uParam0, 14);
		}
		else if (bLocal_139)
		{
			func_77(uParam0);
		}
		else if (func_178(*uParam0))
		{
			func_170(uParam0, 10);
		}
		else
		{
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_5, 1);
			func_104(uParam0);
		}
	}
	else
	{
		if (func_83(uParam0, true))
		{
			if (func_4(*uParam0, 3, true))
			{
				func_26(*uParam0, 35, false);
				func_26(*uParam0, 62, false);
			}
			else
			{
				func_84(uParam0);
				return;
			}
		}
	
		flag = func_4(*uParam0, 35, true);
	
		if (!flag)
		{
			if (func_279(uParam0))
			{
				func_26(*uParam0, 35, false);
				func_26(*uParam0, 62, false);
				flag = true;
			}
		}
	
		if (!func_157(uParam0->f_5, -1665583462))
		{
			flag2 = false;
		
			if (!func_280(uParam0->f_5))
				if (!func_178(*uParam0))
					if (!ENTITY::IS_ENTITY_IN_WATER(uParam0->f_5))
						if (!func_281(uParam0->f_5))
							flag2 = true;
		
			if (flag2)
				if (func_69() == 4 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uParam0->f_5) != 0 || ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_5, func_92(5), true, 0) && !bLocal_141 || BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), func_258(func_69())) < (func_259() * func_259()) + 25f)
					flag2 = false;
		
			if (flag2)
				if (flag)
					if (!func_181(*uParam0, 400f) || func_182(*uParam0))
						flag2 = false;
		
			if (!func_157(uParam0->f_5, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) && !func_157(uParam0->f_5, -1665583462))
			{
				if (!flag2 || !func_282(uParam0) || func_4(*uParam0, 6, true))
				{
					if (func_85(&(uParam0->f_34)))
						func_88(&(uParam0->f_34));
				
					func_170(uParam0, 17);
					func_247(*uParam0);
				}
				else
				{
					if (!func_85(&(uParam0->f_34)))
						func_89(&(uParam0->f_34), true);
				
					if (func_72(&(uParam0->f_34)) < 120000)
					{
						func_170(uParam0, 9);
						func_247(*uParam0);
					}
					else
					{
						func_283(*uParam0);
						func_170(uParam0, 17);
					}
				}
			}
		}
	}

	return;
}

void func_109(var uParam0) // Position - 0x570E Hash - 0x10CDBEB8 ^0xC3295DD7
{
	BOOL flag;

	if (!PED::IS_PED_ON_FOOT(Global_35))
		return;

	flag = false;

	if (uParam0->f_120 > -1)
		if (func_284(uParam0->f_108))
			flag = true;
		else if (func_285(uParam0->f_5, uParam0->f_120))
			func_286(uParam0->f_108, uParam0->f_120, uParam0->f_5);
	else
		flag = func_284(uParam0->f_108);

	if (flag)
	{
		if (func_178(*uParam0))
		{
			if (func_287(uParam0->f_120) == 1)
			{
				func_170(uParam0, 21);
			}
			else
			{
				if (_IS_NULL_VECTOR(uParam0->f_8))
				{
					if (func_159(uParam0, 131072))
					{
						uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };
						func_25(uParam0, 131072);
					}
					else
					{
						uParam0->f_8 = { func_288(uParam0->f_108) };
					}
				}
			
				func_170(uParam0, 11);
			}
		}
		else
		{
			if (uParam0->f_109 == 0)
				uParam0->f_109 = func_289(uParam0->f_108);
		
			func_170(uParam0, 20);
		}
	}
	else
	{
		func_170(uParam0, 12);
	}

	if (func_126(*uParam0) > uParam0->f_114)
		func_25(uParam0, 2048);

	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		func_25(uParam0, 2048);

	if (!func_159(uParam0, 2048))
	{
		func_183(uParam0, false, "Leaving watch mode...");
		func_290(uParam0);
	}

	return;
}

void func_110(var uParam0) // Position - 0x5852 Hash - 0xBB07888F ^0xD3504C41
{
	if (!PED::IS_PED_ON_FOOT(Global_35))
		return;

	if (func_178(*uParam0))
		func_170(uParam0, 10);
	else
		func_170(uParam0, 2);

	if (!TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(uParam0->f_105) || func_126(*uParam0) > uParam0->f_114)
		func_25(uParam0, 4096);

	if (!func_159(uParam0, 4096))
		func_290(uParam0);

	return;
}

int func_111(int iParam0, var uParam1, var uParam2) // Position - 0x58BE Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

Ped func_112(int iParam0) // Position - 0x58DB Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_56(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

void func_113(int iParam0, Ped pedParam1) // Position - 0x5915 Hash - 0xC6503D1A ^0x107B4B14
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
		func_291(pedParam1);

	return;
}

BOOL func_114(int iParam0) // Position - 0x592F Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_115(int iParam0, int iParam1) // Position - 0x594E Hash - 0xE46677C2 ^0xE46677C2
{
	return *iParam0 && iParam1 != false;
}

void func_116(int iParam0, int iParam1, BOOL bParam2) // Position - 0x595E Hash - 0x70644665 ^0x70644665
{
	if (bParam2)
		*iParam0 = *iParam0 || iParam1;
	else
		*iParam0 = *iParam0 - *iParam0 && iParam1;

	return;
}

BOOL func_117(int iParam0) // Position - 0x5984 Hash - 0x1B322279 ^0x626A70A3
{
	if (!func_56(iParam0))
		return false;

	if (MAP::DOES_BLIP_EXIST(Global_1360165[iParam0 /*1157*/].f_2))
		return true;

	return false;
}

Blip func_118(int iParam0) // Position - 0x59B1 Hash - 0x10F6C59B ^0x423FA7BD
{
	Blip blip;

	if (!func_56(iParam0))
		return 0;

	blip = 0;

	if (MAP::DOES_BLIP_EXIST(Global_1360165[iParam0 /*1157*/].f_2))
		blip = Global_1360165[iParam0 /*1157*/].f_2;

	return blip;
}

void func_119(var uParam0) // Position - 0x59EE Hash - 0xBA5A1D5A ^0x572FCDDA
{
	uParam0->f_3 = 0;
	return;
}

void func_120(var uParam0) // Position - 0x59FB Hash - 0xBA5A1D5A ^0x4F00F904
{
	uParam0->f_4 = 0;
	return;
}

int func_121(var uParam0) // Position - 0x5A08 Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

void func_122(int iParam0) // Position - 0x5A12 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_292(iParam0))
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

void func_123(int iParam0) // Position - 0x5AC5 Hash - 0xF13081D5 ^0x7BCA5573
{
	int i;
	Ped playerPed;

	if (!func_114(iParam0))
		return;

	!func_18(iParam0, false);
	func_247(iParam0);
	Global_1359489.f_15 = func_293(true);

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489[i] == iParam0)
			Global_1359489[i] = -1;
	}

	func_294();
	func_12(iParam0, 32, true);

	if (func_67(Global_1360165[iParam0 /*1157*/], 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_gang_dutchs"));
		PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], BF_0xD36BCE94, false);
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, false);
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
		playerPed.f_12 = 8;
		playerPed.f_3 = Global_1360165[iParam0 /*1157*/];
		playerPed.f_7 = func_268();
		playerPed.f_8 = 0;
		playerPed.f_11 = 10;
		playerPed.f_14 = Global_1360165[iParam0 /*1157*/];
		MISC::_CREATE_AI_MEMORY(&playerPed, 17);
	}

	return;
}

BOOL func_124(int iParam0) // Position - 0x5BB3 Hash - 0xB1ACB968 ^0xB1ACB968
{
	return func_4(iParam0, 32, true);
}

BOOL func_125(int iParam0) // Position - 0x5BC4 Hash - 0xDA629583 ^0xDA629583
{
	return func_6(iParam0, 16, true);
}

float func_126(int iParam0) // Position - 0x5BD5 Hash - 0xA42CC07F ^0x2E7483CB
{
	if (!func_56(iParam0))
		return 0f;

	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_127(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5BF6 Hash - 0x6E8FD624 ^0x6E8FD624
{
	PersChar char;
	Ped ped;

	if (!func_114(iParam0))
		return;

	if (func_125(iParam0))
	{
		if (!func_295(iParam0))
			return;
	
		if (!bParam1)
			return;
	}

	if (func_4(iParam0, 32, true))
		if (!bParam2)
			return;

	char = func_44(iParam0, false);

	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(char))
		return;

	ped = func_112(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_126(iParam0) < 10000f && !bParam3 && !CAM::IS_SCREEN_FADED_OUT())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(ped) && ENTITY::IS_ENTITY_ATTACHED(ped))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(ped, 1) || TASK::IS_PED_EXITING_SCENARIO(ped, true) || PED::IS_PED_ON_MOUNT(ped) || PED::IS_PED_IN_ANY_VEHICLE(ped, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, true, true);
		}
	
		ENTITY::DETACH_ENTITY(ped, true, true);
	}

	if (bParam4)
	{
		func_26(iParam0, 2, true);
	}
	else
	{
		func_5(iParam0);
		func_26(iParam0, 1, true);
	}

	return;
}

Player func_128(int iParam0) // Position - 0x5D04 Hash - 0x8D7C83E2 ^0x9E26FAD3
{
	if (!func_114(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
		Global_1360165[iParam0 /*1157*/].f_70 = 0;

	return Global_1360165[iParam0 /*1157*/].f_70;
}

BOOL func_129(int iParam0) // Position - 0x5D44 Hash - 0xDC3E0094 ^0xA822A7E2
{
	if (!func_56(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_130(Ped pedParam0, Player plParam1, BOOL bParam2) // Position - 0x5D6C Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));

	return func_296(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false));
}

Hash func_131(int iParam0, BOOL bParam1) // Position - 0x5DC3 Hash - 0xA64DC151 ^0x7D83907B
{
	if (!func_56(iParam0))
		return 0;

	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
		return Global_1360165[iParam0 /*1157*/].f_127;

	switch (iParam0)
	{
		case 0:
			return joaat("perschar_comp_horse_dutch");
	
		case 1:
			return joaat("perschar_comp_horse_john");
	
		case 2:
			return joaat("perschar_comp_horse_javier");
	
		case 3:
			return joaat("perschar_comp_horse_bill");
	
		case 4:
			return joaat("perschar_comp_horse_uncle");
	
		case 5:
			return joaat("perschar_comp_horse_hosea");
	
		case 6:
			return joaat("perschar_comp_horse_micah");
	
		case 7:
			return joaat("perschar_comp_horse_charles");
	
		case 8:
			return joaat("perschar_comp_horse_sean");
	
		case 9:
			return joaat("perschar_comp_horse_lenny");
	
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
	
		case 11:
			return joaat("perschar_comp_horse_sadie");
	
		case 12:
		case 14:
			return 0;
	
		case 20:
			return joaat("perschar_comp_horse_karen");
	
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
	
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
	
		default:
		
	}

	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_297(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}

	return 0;
}

void func_132(int iParam0) // Position - 0x5F08 Hash - 0xF7FD9E75 ^0xF411CFCB
{
	Player player;
	ItemSet itemset;
	int i;
	Entity entityFromItem;

	player = func_128(iParam0);

	if (!PED::IS_PED_CARRYING_SOMETHING(player))
		return;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(player, itemset);

	for (i = 0; i < ITEMSET::GET_ITEMSET_SIZE(itemset); i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(entityFromItem))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(entityFromItem, true, true);
		
			ENTITY::_DELETE_CARRIABLE(&entityFromItem);
		}
	}

	return;
}

PersChar func_133(int iParam0, BOOL bParam1) // Position - 0x5F7E Hash - 0xF1265AC3 ^0xD7133EF8
{
	if (!func_56(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
		Global_1360165[iParam0 /*1157*/].f_126 = func_298(iParam0);

	return Global_1360165[iParam0 /*1157*/].f_126;
}

BOOL func_134(Hash hParam0) // Position - 0x5FCA Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_135(int iParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x5FD6 Hash - 0xA3491953 ^0xA3491953
{
	*uParam3 = 0;
	*uParam2 = 0;

	if (func_299(iParam0, hParam1))
		*uParam3 = 1;

	if (func_300(iParam0, hParam1, uParam2))
		return true;

	*uParam2 = -1;
	return *uParam3;
}

void func_136(int iParam0, Hash hParam1) // Position - 0x600D Hash - 0x17B7C696 ^0x30CAEE41
{
	Ped ped;

	ped = func_112(iParam0);

	if (func_67(ped, 0) && func_301(iParam0, *hParam1) && PED::_0x7C8AA850617651D9(ped, *hParam1))
		func_302(iParam0, *hParam1);

	if (!func_67(ped, 0) || !func_301(iParam0, *hParam1) || !PED::_0x7C8AA850617651D9(ped, *hParam1))
		func_303(hParam1);

	return;
}

void func_137(int iParam0, int iParam1) // Position - 0x6083 Hash - 0x77637161 ^0xE627420E
{
	int i;

	func_136(iParam0, &Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]);

	if (func_134(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]))
		return;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < iParam1)
		{
		}
		else if (i < 9 && func_134(Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/]))
		{
			Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/] = Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/];
			Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/].f_1 = Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/].f_1;
			Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/].f_2 = Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/].f_2;
			func_305(iParam0, i, func_304(iParam0, i + 1));
			func_303(&Global_40.f_4942[iParam0 /*60*/].f_11[i + 1 /*3*/]);
			func_305(iParam0, i + 1, false);
		}
	}

	return;
}

Hash func_138(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x619C Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_139(Hash hParam0) // Position - 0x61DE Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_306(hParam0) == joaat("WEAPON");
}

BOOL func_140(int iParam0, BOOL bParam1) // Position - 0x61F2 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[iParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[iParam0 /*11*/] && bParam1 != false;
}

BOOL func_141(Entity eParam0) // Position - 0x6225 Hash - 0xA16538A ^0xF4BA65A5
{
	int num;
	Volume volume;

	!ENTITY::DOES_ENTITY_EXIST(eParam0);
	num = func_91();

	if (func_261(num))
	{
		volume = func_92(num);
	
		if (VOLUME::DOES_VOLUME_EXIST(volume))
			if (ENTITY::DOES_ENTITY_EXIST(eParam0))
				if (VOLUME::IS_POINT_IN_VOLUME(volume, ENTITY::GET_ENTITY_COORDS(eParam0, true, false)))
					return true;
	}

	return false;
}

void func_142(var uParam0) // Position - 0x6276 Hash - 0xBE2805BD ^0xC2B90CF1
{
	if (uParam0->f_1 != 6 && !func_161(8388608))
		if (PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, false);

	if (func_161(8388608) && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 503, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 503, true);

	if (func_307(-1))
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);

	if (Global_1360165[*uParam0 /*1157*/].f_1152 == 3)
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 333, true);

	if (func_207(Global_40.f_6563.f_475))
		if (func_308(Global_40.f_6563.f_475, true))
			Global_40.f_6563.f_475 = -15;
		else
			PED::_0x633F83B301C87994(uParam0->f_5, 131);

	if (uParam0->f_1 == 6 || func_126(*uParam0) < 625f)
	{
		func_309(uParam0);
		func_310(uParam0);
	}

	if (func_144(*uParam0, 32))
	{
		if (!func_159(uParam0, 1073741824))
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ENTER")))
			{
				if (func_156(Global_1360165[*uParam0 /*1157*/].f_70, Global_36, true) < 4f && func_311(Global_35, Global_1360165[*uParam0 /*1157*/].f_70, 0) && func_156(func_312(7), Global_36, true) > 4f && PED::_GET_RIDER_OF_MOUNT(Global_1360165[*uParam0 /*1157*/].f_70, true) == 0 && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					func_314(40, MISC::GET_HASH_KEY(func_313(*uParam0, false)), true);
					func_100(uParam0, 1073741824);
				}
			}
		}
	}

	if (func_315(*uParam0))
	{
		if (func_316(*uParam0))
		{
			if (!func_157(Global_1360165[*uParam0 /*1157*/].f_70, 1041577989))
				TASK::TASK_HORSE_ACTION(Global_1360165[*uParam0 /*1157*/].f_70, 2, 0, 0);
		
			func_318(38, MISC::GET_HASH_KEY(func_317(*uParam0, false)), MISC::GET_HASH_KEY(func_313(*uParam0, false)), true);
		}
		else if (!func_159(uParam0, 536870912))
		{
			func_318(39, MISC::GET_HASH_KEY(func_317(*uParam0, false)), MISC::GET_HASH_KEY(func_313(*uParam0, false)), true);
			func_100(uParam0, 536870912);
		}
	}

	return;
}

BOOL func_143(Hash hParam0) // Position - 0x64BB Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case joaat("w_sp_bowarrow_charles"):
		case joaat("w_melee_hatchet04"):
		case joaat("w_repeater_carbine01"):
		case joaat("w_melee_tomahawk02"):
		case joaat("w_melee_knife08"):
		case joaat("w_melee_knife20"):
		case joaat("w_melee_hatchet05"):
		case joaat("w_melee_lasso03"):
		case joaat("w_melee_knife10"):
		case joaat("w_melee_knife09"):
		case joaat("w_melee_knife17"):
		case joaat("w_melee_hatchet02"):
		case joaat("w_melee_hatchet03"):
		case joaat("w_revolver_schofield01"):
		case joaat("w_melee_lasso01"):
		case joaat("w_shotgun_repeating01"):
		case joaat("w_repeater_winchester01"):
		case joaat("w_melee_tomahawk01"):
		case joaat("w_pistol_mauser01"):
		case joaat("w_revolver_cattleman01"):
		case joaat("w_melee_knife16"):
		case joaat("w_shotgun_semiauto01"):
		case joaat("w_melee_knife15"):
		case joaat("w_melee_knife03"):
		case joaat("w_melee_brokensword01"):
		case joaat("w_shotgun_pumpaction01"):
		case joaat("w_melee_knife01"):
		case joaat("w_melee_knife02"):
		case joaat("w_melee_knife04"):
		case joaat("w_pistol_volcanic01"):
		case joaat("w_melee_knife19"):
		case joaat("w_pistol_semiauto01"):
		case joaat("w_rifle_boltaction01"):
		case joaat("w_melee_knife18"):
		case joaat("w_revolver_doubleaction06"):
		case joaat("w_melee_knife06"):
		case joaat("w_rifle_carcano01"):
		case joaat("w_revolver_schofield02"):
		case joaat("w_repeater_pumpaction01"):
		case joaat("w_melee_knife07"):
		case joaat("w_revolver_schofield03"):
		case joaat("w_revolver_cattleman02"):
		case joaat("w_rifle_rollingblock01"):
		case joaat("w_revolver_doubleaction03"):
		case joaat("w_revolver_schofield04"):
		case joaat("w_pistol_mauser02"):
		case joaat("w_melee_hatchet06"):
		case joaat("w_melee_knife05"):
		case joaat("w_repeater_henry01"):
		case joaat("w_revolver_cattleman03"):
		case joaat("w_revolver_doubleaction02"):
		case joaat("w_melee_knife12"):
		case joaat("w_shotgun_doublebarrel01"):
		case joaat("w_melee_knife14"):
		case joaat("w_melee_hatchet07"):
		case joaat("w_melee_knife11"):
		case joaat("w_revolver_doubleaction01"):
		case joaat("w_melee_knife13"):
		case joaat("w_rifle_springfield01"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_144(int iParam0, int iParam1) // Position - 0x6632 Hash - 0x63F6278D ^0x98AA8E70
{
	if (!func_56(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1 != false;
}

void func_145(var uParam0) // Position - 0x665A Hash - 0xEFE8B815 ^0xEFE8B815
{
	func_9(*uParam0, 2, bLocal_139);
	func_319(*uParam0);
	return;
}

float func_146() // Position - 0x6673 Hash - 0x6E90283E ^0x3608B4CB
{
	int clockHours;

	clockHours = CLOCK::GET_CLOCK_HOURS();

	if (clockHours < 4 || clockHours > 19)
		return 0.8f;
	else if (clockHours > 17)
		return 0.7f;
	else if (clockHours > 12)
		return 0.5f;

	return 0.3f;
}

void func_147(int iParam0, float fParam1) // Position - 0x66C4 Hash - 0xACD0FDB1 ^0xF668A882
{
	Ped ped;

	if (!func_114(iParam0))
		return;

	ped = func_112(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	PED::_SET_PED_DRUNKNESS(ped, true, fParam1);
	return;
}

void func_148(int iParam0) // Position - 0x66F7 Hash - 0xA9477085 ^0x50DAE8B3
{
	Ped ped;

	if (!func_114(iParam0))
		return;

	ped = func_112(iParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	PED::_SET_PED_DRUNKNESS(ped, false, 0f);
	return;
}

int func_149(var uParam0) // Position - 0x6729 Hash - 0xAAE06FAE ^0xD6E2DEC3
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_command");

	return 0;
}

void func_150(var uParam0) // Position - 0x674E Hash - 0xA1724CC ^0xED40E53D
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_command"))
		DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_command");

	return;
}

BOOL func_151(int iParam0) // Position - 0x6773 Hash - 0xBE61F0FD ^0xBE61F0FD
{
	return func_4(iParam0, 5, true);
}

int func_152(var uParam0) // Position - 0x6783 Hash - 0x663B2C10 ^0x66073CEA
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "companion_manager_watch_mode"))
		return DECORATOR::DECOR_GET_INT(uParam0->f_5, "companion_manager_watch_mode");

	return -1;
}

void func_153(var uParam0) // Position - 0x67A8 Hash - 0x96D4778C ^0x2178AE02
{
	DECORATOR::DECOR_REMOVE(uParam0->f_5, "companion_manager_watch_mode");
	return;
}

BOOL func_154(int iParam0, var uParam1, var uParam2) // Position - 0x67BC Hash - 0x2D8DF8DC ^0x2D8DF8DC
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1347.3542f, 2415.9993f, 306.16928f };
			*uParam2 = 0f;
			break;
	
		case 1:
			*uParam1 = { -113.3444f, -16.16381f, 94.90366f };
			*uParam2 = 0f;
			break;
	
		case 2:
			*uParam1 = { 676.0986f, -1223.2595f, 44.8735f };
			*uParam2 = 186f;
			break;
	
		case 3:
			*uParam1 = { 1855.1464f, -1834.1123f, 42.1034f };
			*uParam2 = 0f;
			break;
	
		case 5:
			*uParam1 = { 2278.6704f, -751.0582f, 40.9953f };
			*uParam2 = 0f;
			break;
	
		case 6:
			*uParam1 = { 2368.145f, 1339.4106f, 105.2073f };
			*uParam2 = 0f;
			break;
	
		case 7:
			*uParam1 = { -2591.7698f, 465.7827f, 146.256f };
			*uParam2 = 0f;
			break;
	
		case 8:
			*uParam1 = { -1595.7f, -1414.78f, 83.7f };
			*uParam2 = 0f;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_155(var uParam0) // Position - 0x68D8 Hash - 0x856A9D0F ^0x547734F4
{
	if (func_144(*uParam0, 1024))
		return true;

	return false;
}

float func_156(Player plParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x68F2 Hash - 0x1A58F423 ^0x2317B76D
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(plParam0))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(plParam0, true, false) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(plParam0, false, false) };

	if (bParam4)
		return BUILTIN::VDIST2(entityCoords, vParam1);

	return func_296(entityCoords, vParam1);
}

BOOL func_157(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x6942 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_158(int iParam0, BOOL bParam1) // Position - 0x699B Hash - 0x777C70D6 ^0xE8EC28B3
{
	Ped ped;

	ped = func_112(iParam0);

	if (bParam1)
		if (func_67(ped, 0))
			return false;

	if (PED::GET_PED_CONFIG_FLAG(ped, 156, true))
		return true;

	return false;
}

BOOL func_159(var uParam0, int iParam1) // Position - 0x69CF Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_160(int iParam0) // Position - 0x69E0 Hash - 0x920D6E8A ^0xB999259D
{
	Player mount;
	BOOL flag;
	BOOL flag2;
	Vector3 entityCoords;
	Vector3 entityCoords2;
	float num;

	if (!func_56(iParam0))
		return 0;

	if (func_144(iParam0, 128))
	{
		func_283(iParam0);
		func_30(iParam0, 128, false);
	}

	mount = func_128(iParam0);

	switch (Global_1360165[iParam0 /*1157*/].f_70.f_13)
	{
		case 2:
			if (func_4(iParam0, 42, true))
			{
				func_12(iParam0, 42, true);
				flag = false;
				flag2 = func_182(iParam0);
			
				if (func_67(mount, 0))
					flag = true;
			
				if (flag)
				{
					if (!flag2)
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(mount, true, false) };
						entityCoords2 = { ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false) };
						num = BUILTIN::VDIST2(entityCoords, entityCoords2);
					
						if (num < 8f * 8f)
							return 1;
						else if (num > 2500f)
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
						else
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
					}
					else if (PED::_GET_RIDER_OF_MOUNT(mount, false) == Global_35)
					{
						if (!func_184(mount))
							Global_1360165[iParam0 /*1157*/].f_123 = mount;
					
						if (ENTITY::DOES_ENTITY_EXIST(func_312(7)))
						{
							func_320(iParam0, func_312(7), false, false);
						}
						else
						{
							func_185(iParam0);
							func_26(iParam0, 40, true);
							Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
						}
					}
					else
					{
						func_26(iParam0, 40, true);
						Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
					}
				}
				else
				{
					func_26(iParam0, 40, true);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 4;
				}
			}
			break;
	
		case 4:
			if (func_67(mount, 0))
			{
				func_30(iParam0, 64, true);
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 6;
			}
			else
			{
				mount = func_214(iParam0, true, false, 0, 1, 1, true, true, false, 0, 0, 0, 0, false, false, false, false);
			}
			break;
	
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(mount))
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_14.f_12 = 1;
			
				if (func_321(&(Global_1360165[iParam0 /*1157*/].f_70.f_14), Global_36, Global_1900383[0 /*45*/].f_38, 0, 1065353216))
				{
					ENTITY::SET_ENTITY_COORDS(mount, Global_1360165[iParam0 /*1157*/].f_70.f_14.f_3.f_3, true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(mount, false);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 7;
				}
				else if (Global_1360165[iParam0 /*1157*/].f_70.f_14.f_1)
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
	
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(mount))
			{
				ENTITY::FREEZE_ENTITY_POSITION(mount, false);
				TASK::CLEAR_PED_TASKS(mount, true, false);
			
				if (!func_181(iParam0, 1120403456))
				{
					TASK::TASK_GO_TO_WHISTLE(mount, Global_1360165[iParam0 /*1157*/], 0);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 8;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
	
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(mount))
			{
				if (func_181(iParam0, 1120403456))
				{
					TASK::CLEAR_PED_TASKS(mount, true, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(mount, true);
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
					return 1;
				}
				else if (!func_157(mount, 2043986356))
				{
					Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
				}
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_70.f_13 = 2;
			}
			break;
	}

	return 0;
}

BOOL func_161(int iParam0) // Position - 0x6D3D Hash - 0xC67CC87B ^0x85972261
{
	return Global_1359489.f_16 && iParam0 != false;
}

void func_162(int iParam0) // Position - 0x6D50 Hash - 0xA4B6A711 ^0x8B47278F
{
	float randomFloatInRange;
	float randomFloatInRange2;
	int taskSequenceId;

	if (!func_114(iParam0))
		return;

	if (func_281(func_112(iParam0)))
		return;

	if (Global_1360165[iParam0 /*1157*/].f_70.f_13 == 2 && !func_4(iParam0, 42, true))
	{
		randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.2f, 0.4f * (float)func_293(true));
		randomFloatInRange2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(randomFloatInRange + 0.5f, randomFloatInRange + (1.5f * (float)func_293(true)));
	
		if (!func_157(func_112(iParam0), SCRIPT_TASK_PERFORM_SEQUENCE))
		{
			func_168(iParam0, false, "triggering horse whistle");
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			func_322(0, 869278708, joaat("unspecified"));
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::_TASK_PERFORM_SEQUENCE_2(func_112(iParam0), taskSequenceId, randomFloatInRange, randomFloatInRange2);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		func_26(iParam0, 42, true);
	}

	return;
}

char* func_163() // Position - 0x6E21 Hash - 0x5047B229 ^0xD033D79A
{
	int randomIntInRange;
	char* str;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);

	switch (randomIntInRange)
	{
		case 0:
			str = "COMPANION_FIGHT_EARLY_FLEE";
			break;
	
		case 1:
			str = "WHATS_YOUR_PROBLEM";
			break;
	
		case 2:
			str = "COMPANION_FIGHT_EARLY_REACTION";
			break;
	
		default:
			str = "COMPANION_FIGHT_EARLY_CALLOUT";
			break;
	}

	return str;
}

BOOL func_164(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x6E71 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = iParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_323(pedParam0, &str);
}

void func_165(var uParam0, int iParam1) // Position - 0x6EB8 Hash - 0xA4EAD31F ^0x3F77773B
{
	uParam0->f_3 = uParam0->f_3 - uParam0->f_3 && iParam1;
	return;
}

char* func_166() // Position - 0x6ED0 Hash - 0x5047B229 ^0x1A3FFE93
{
	int randomIntInRange;
	char* str;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);

	switch (randomIntInRange)
	{
		case 0:
			str = "ALLY_TAUNT_ENEMY";
			break;
	
		case 1:
			str = "GENERIC_CURSE_HIGH";
			break;
	
		case 2:
			str = "ALLY_UNDER_FIRE_NEAR";
			break;
	
		default:
			str = "GENERIC_CURSE_MED";
			break;
	}

	return str;
}

BOOL func_167(int iParam0) // Position - 0x6F20 Hash - 0xB6E07C99 ^0xB6E07C99
{
	return func_4(iParam0, 33, true);
}

void func_168(int iParam0, BOOL bParam1, char* sParam2) // Position - 0x6F31 Hash - 0x4393BBFF ^0x711C558C
{
	Ped ped;

	ped = func_112(iParam0);

	if (!func_114(iParam0) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(ped);

	if (bParam1)
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(ped, false, true);
	else
		TASK::CLEAR_PED_TASKS(ped, true, false);

	return;
}

BOOL func_169(var uParam0, eScriptTaskHash esthParam1) // Position - 0x6F78 Hash - 0x66E04FC7 ^0xAC440044
{
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, esthParam1, true) == 1)
		return true;

	return false;
}

void func_170(var uParam0, int iParam1) // Position - 0x6F94 Hash - 0xB24070B3 ^0x8CB81152
{
	if (iParam1 == uParam0->f_102)
		return;

	uParam0->f_102 = iParam1;
	return;
}

Vector3 func_171(int iParam0, BOOL bParam1) // Position - 0x6FAE Hash - 0x5496E9AE ^0xF55F17AE
{
	Vector3 volumeCoords;
	var groundZ;

	volumeCoords = { 0f, 0f, 0f };

	if (!func_261(iParam0))
		return volumeCoords;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_3))
	{
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iParam0 /*35*/].f_3) };
	
		if (bParam1)
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(volumeCoords, &groundZ, false))
				volumeCoords.f_2 = groundZ;
	}

	return volumeCoords;
}

Vector3 func_172(var uParam0) // Position - 0x700E Hash - 0x7B0A920F ^0x7B0A920F
{
	var unk;
	var unk4;

	func_175(&unk, &unk4);
	return unk + func_324(uParam0);
}

BOOL func_173(Entity eParam0) // Position - 0x702A Hash - 0x570B88CE ^0x1868A37B
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	for (i = 0; i < 5; i = i + 1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[i /*6*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43806[i /*6*/], false) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(eParam0, Global_43806[i /*6*/]))
			return true;
	}

	return false;
}

BOOL func_174(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7088 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_325(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

int func_175(var uParam0, var uParam1) // Position - 0x71BD Hash - 0xBA06C937 ^0xBA06C937
{
	int num;

	num = func_91();

	switch (num)
	{
		case 4:
			*uParam0 = { 2279.6794f, -753.1292f, 40.9928f };
			*uParam1 = 65.2774f;
			break;
	
		case 9:
			*uParam0 = { 1853.3586f, -1835.935f, 42.0656f };
			*uParam1 = 25.3398f;
			break;
	
		case 22:
			*uParam0 = { -2590.1975f, 465.025f, 145.1573f };
			*uParam1 = 77.3385f;
			break;
	
		case 37:
			*uParam0 = { -1644.8503f, -1376.8733f, 82.9681f };
			*uParam1 = 340.856f;
			break;
	
		case 43:
			*uParam0 = { -1340.4172f, 2447.7405f, 307.6064f };
			*uParam1 = 69.2479f;
			break;
	
		case 58:
			*uParam0 = { func_258(4) };
			*uParam1 = 0f;
			break;
	
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f };
			*uParam1 = 78.7552f;
			break;
	
		case 79:
			*uParam0 = { 2370.1692f, 1336.9309f, 105.273f };
			*uParam1 = 302.1729f;
			break;
	
		case 98:
			*uParam0 = { 676.6314f, -1223.8398f, 43.8567f };
			*uParam1 = 174.642f;
			break;
	
		default:
			return 0;
	}

	return 1;
}

Vector3 func_176(float fParam0, var uParam1, var uParam2) // Position - 0x7311 Hash - 0xFB6A39D2 ^0x80C9C759
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

BOOL func_177(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x7350 Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_326(*uParam0, 0f, 0f, 0f))
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

BOOL func_178(int iParam0) // Position - 0x7447 Hash - 0xE39329AF ^0x6D042DD
{
	Ped ped;

	if (!func_56(iParam0))
		return false;

	ped = Global_1360165[iParam0 /*1157*/];

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (!ENTITY::IS_ENTITY_DEAD(ped))
			if (PED::IS_PED_ON_MOUNT(ped))
				return true;

	return false;
}

void func_179(int iParam0, BOOL bParam1) // Position - 0x7489 Hash - 0x3674DEE4 ^0x8B01A7F8
{
	Player mount;

	if (!func_114(iParam0))
		return;

	mount = func_128(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]) && ENTITY::DOES_ENTITY_EXIST(mount))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ENTITY::IS_ENTITY_DEAD(mount))
		{
			if (bParam1)
				if (func_200(Global_1360165[iParam0 /*1157*/], 1116471296, -1082130432, -1082130432, -1082130432))
					return;
				else if (func_200(mount, 1116471296, -1082130432, -1082130432, -1082130432))
					return;
		
			if (func_182(iParam0))
				return;
		
			func_168(iParam0, false, "force companion onto horse");
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(mount, false, true);
			ENTITY::SET_ENTITY_COORDS(mount, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/], true, false), true, false, true, true);
			PED::SET_PED_ONTO_MOUNT(Global_1360165[iParam0 /*1157*/], mount, -1, true);
			ENTITY::FREEZE_ENTITY_POSITION(mount, false);
			TASK::CLEAR_PED_TASKS(mount, true, false);
		}
	}

	return;
}

float func_180(Entity eParam0, Player plParam1) // Position - 0x7585 Hash - 0xF9959663 ^0xF9959663
{
	return func_327(eParam0, plParam1, true, true);
}

BOOL func_181(int iParam0, int iParam1) // Position - 0x7597 Hash - 0x7142D53A ^0x7142D53A
{
	float num;

	if (!func_56(iParam0))
		return false;

	if (func_67(func_128(iParam0), 0))
	{
		num = func_130(Global_1360165[iParam0 /*1157*/], func_128(iParam0), true);
	
		if (num < iParam1)
			return true;
	
		if (func_328(func_128(iParam0)) && num < 625f)
			return true;
	}

	return false;
}

BOOL func_182(int iParam0) // Position - 0x75FC Hash - 0xCFEE535B ^0x4860EBC
{
	Ped riderOfMount;

	if (!func_56(iParam0))
		return 0;

	if (func_67(func_128(iParam0), 0))
	{
		riderOfMount = PED::_GET_RIDER_OF_MOUNT(func_128(iParam0), false);
	
		if (riderOfMount != 0 && riderOfMount != Global_1360165[iParam0 /*1157*/])
			return 1;
	}

	return 0;
}

void func_183(var uParam0, BOOL bParam1, char* sParam2) // Position - 0x764A Hash - 0xB364715C ^0x48395884
{
	uParam0->f_103 = uParam0->f_102;
	func_170(uParam0, 0);
	func_168(*uParam0, bParam1, sParam2);
	return;
}

BOOL func_184(Player plParam0) // Position - 0x766C Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(plParam0) || PED::IS_PED_INJURED(plParam0);
	num = func_329(plParam0);

	if (num == -1)
		return false;

	return true;
}

void func_185(int iParam0) // Position - 0x76AA Hash - 0x482C963 ^0xEC9B4008
{
	Player horse;

	if (!func_56(iParam0))
		return;

	horse = func_128(iParam0);

	if (func_67(horse, 0) && !func_184(horse) && !func_6(iParam0, 32768, true))
		PED::_CLEAR_ACTIVE_ANIMAL_OWNER(horse, false);

	Global_1360165[iParam0 /*1157*/].f_70 = 0;
	return;
}

int func_186(int iParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7701 Hash - 0xC4F939DA ^0xC4F939DA
{
	BOOL flag;

	!func_56(iParam0);
	flag = false;

	if (func_330(pedParam1) == iParam0)
	{
	}
	else
	{
		func_320(iParam0, pedParam1, bParam3, false);
		flag = true;
	}

	if (bParam2)
		if (!func_21(iParam0))
			if (!func_331(iParam0, bParam4, true, 0, 0, 0, 0, false))
				return 0;

	if (!flag)
		func_332(pedParam1, iParam0);

	return 1;
}

void func_187(var uParam0) // Position - 0x7767 Hash - 0xC83F102A ^0xC83F102A
{
	func_333(*uParam0, false);
	bLocal_139 = true;
	return;
}

BOOL func_188(int iParam0) // Position - 0x777B Hash - 0x58DB7737 ^0x94077D1E
{
	Ped ped;
	int weaponHash;

	if (!func_56(iParam0))
		return false;

	ped = Global_1360165[iParam0 /*1157*/];

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (!ENTITY::IS_ENTITY_DEAD(ped))
			if (WEAPON::GET_CURRENT_PED_WEAPON(ped, &weaponHash, true, 0, false))
				if (weaponHash != joaat("OBJECT_1") && weaponHash != joaat("OBJECT_2") && weaponHash != joaat("WEAPON_UNARMED"))
					return true;

	return false;
}

Vector3 func_189(int iParam0) // Position - 0x77E7 Hash - 0xDC7A59AF ^0x9F1A305A
{
	if (iParam0 < 0 || iParam0 >= 10)
		return 0f, 0f, 0f;

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
		return 0f, 0f, 0f;

	return Global_1359489.f_63[iParam0 /*24*/].f_4;
}

float func_190(int iParam0) // Position - 0x7829 Hash - 0x9BF9B8A2 ^0x9BF9B8A2
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1f;
	
		case 2:
			return 2f;
	}

	return 1f;
}

Vector3 func_191(int iParam0) // Position - 0x785A Hash - 0xDC7A59AF ^0x9F1A305A
{
	if (iParam0 < 0 || iParam0 >= 10)
		return 0f, 0f, 0f;

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
		return 0f, 0f, 0f;

	return Global_1359489.f_63[iParam0 /*24*/].f_7;
}

BOOL func_192(int iParam0) // Position - 0x789C Hash - 0xD7D8A32C ^0x4E888AFD
{
	return iParam0 == Global_1357549.f_1497 && Global_1357549.f_1497.f_5 >= 4 && Global_1357549.f_1497.f_5 < 11;
}

BOOL func_193() // Position - 0x78CF Hash - 0xB9EF58B7 ^0xB9EF58B7
{
	return func_293(true) < 3;
}

BOOL func_194(int iParam0, BOOL bParam1) // Position - 0x78DE Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_56(iParam0))
		return false;

	if (!bParam1)
		if (func_125(iParam0) || func_4(iParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

BOOL func_195(int iParam0, BOOL bParam1) // Position - 0x7967 Hash - 0xB6F2B948 ^0x8948B8BB
{
	int i;

	if (bParam1)
		return func_334(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return true;
	}

	return false;
}

BOOL func_196(var uParam0) // Position - 0x79A6 Hash - 0xE0F033BA ^0x90CE89B8
{
	switch (*uParam0)
	{
		case 4:
			if (func_195(joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"), true))
				return true;
			break;
	
		case 7:
			if (func_63(Global_1835011[43 /*74*/].f_1, true) && !func_63(Global_1835011[59 /*74*/].f_1, true))
				return true;
			break;
	}

	return false;
}

int func_197(int iParam0, int iParam1) // Position - 0x7A06 Hash - 0xF578F01A ^0xAC123A5D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
		case 16:
		case 17:
		case 19:
		case 20:
		case 21:
		case 22:
			return -445211559;
	
		case 3:
		case 4:
		case 18:
			return 1744281750;
	
		case 11:
			return -946772361;
	
		case 13:
		case 14:
			if (iParam1 == 7 || iParam1 == 8)
				return -1205468859;
		
			return -445211559;
	
		default:
		
	}

	return 0;
}

int func_198(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7AC9 Hash - 0xEC801E93 ^0x8D937378
{
	int num;
	var unk;
	int endRange;
	int num2;
	BOOL flag;
	int i;
	int randomIntInRange;

	if (!func_56(iParam0))
		return 0;

	num = CLOCK::GET_CLOCK_HOURS() + 1;

	if (num == 25)
		num = 0;

	unk = 5;
	endRange = 0;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_63(Global_1835011[4 /*74*/].f_1, true))
						unk[0] = -695701225;
					else
						unk[0] = 404503428;
					break;
			
				default:
					unk[0] = 178615350;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 1:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = 1818898449;
					endRange = 3;
					break;
			
				case 3:
					if (func_335(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
				
					if (!bParam2)
						unk[0] = -268604689;
					break;
			
				case 4:
					unk[0] = -268604689;
					break;
			
				case 5:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 6:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					unk[3] = 1818898449;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -268604689;
					unk[0] = -1632589543;
					unk[1] = 1818898449;
					endRange = 3;
					break;
			
				case 8:
					unk[0] = -268604689;
					break;
			
				case 9:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 10:
					if (func_63(Global_1347702[63 /*49*/].f_15, true) || func_336(Global_1347702[63 /*49*/].f_15))
						unk[0] = -268604689;
					else
						unk[0] = -310473775;
					break;
			
				case 11:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -268604689;
					break;
			
				case 15:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 16:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 17:
					if (func_335(num, 9, 12))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						unk[2] = -1862464078;
						endRange = 3;
					}
					else
					{
						unk[0] = -268604689;
					}
					break;
			
				case 18:
					if (!func_63(Global_1835011[14 /*74*/].f_1, true))
					{
						unk[0] = -268604689;
						unk[1] = -1632589543;
						endRange = 2;
					}
					else if (func_6(18, 134217728, true))
					{
						unk[0] = 961676983;
					}
					else
					{
						unk[0] = -1587546924;
					}
					break;
			
				case 19:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -1862464078;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -268604689;
					unk[1] = -1632589543;
					unk[2] = -23947011;
					endRange = 3;
					break;
			
				default:
					unk[0] = -268604689;
					break;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_335(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 5:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 8:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 9:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					unk[4] = 1744281750;
					endRange = 5;
					break;
			
				case 10:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 11:
					if (func_63(Global_1347702[134 /*49*/].f_15, true) || func_336(Global_1347702[134 /*49*/].f_15))
					{
						unk[0] = -2040275819;
						unk[1] = 1205492208;
						endRange = 2;
					}
					else
					{
						unk[0] = -922193456;
					}
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_63(Global_1835011[38 /*74*/].f_1, true))
						unk[0] = -1559986688;
					else
						unk[0] = -1874208704;
					break;
			
				default:
					unk[0] = 1593315648;
					break;
			}
			break;
	
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 1:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 2:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 3:
					if (func_335(num, 9, 11))
					{
						unk[0] = 283037683;
					}
					else
					{
						unk[0] = -922193456;
						unk[1] = -2040275819;
						unk[2] = -1114682645;
						unk[3] = -1414977761;
						endRange = 4;
					}
				
					if (!bParam2)
						unk[0] = -922193456;
					break;
			
				case 4:
					unk[0] = -922193456;
					break;
			
				case 6:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					unk[3] = 283037683;
					endRange = 4;
					break;
			
				case 7:
					unk[0] = 1295334688;
					endRange = 1;
					break;
			
				case 11:
					unk[0] = -2051275045;
					break;
			
				case 13:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 283037683;
					unk[3] = 1744281750;
					endRange = 4;
					break;
			
				case 14:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 15:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 16:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 17:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 18:
					unk[0] = -922193456;
					break;
			
				case 19:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 20:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					endRange = 2;
					break;
			
				case 21:
					unk[0] = -922193456;
					unk[1] = 1744281750;
					endRange = 2;
					break;
			
				case 22:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = -1114682645;
					endRange = 3;
					break;
			
				case 23:
					unk[0] = -922193456;
					unk[1] = -2040275819;
					unk[2] = 1744281750;
					endRange = 3;
					break;
			
				case 26:
					unk[0] = -268604689;
					break;
			
				default:
					unk[0] = -922193456;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					if (func_195(joaat("CSTAG_FLOW_MAR8_POST"), true) && !func_63(Global_1347702[1 /*49*/].f_15, true))
						unk[0] = -1155031950;
					else
						unk[0] = -1341683964;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					endRange = 2;
					break;
			
				case 14:
					unk[0] = -426171916;
					unk[1] = 1484386316;
					unk[2] = 1254970547;
					endRange = 3;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 4:
					unk[0] = -1341683964;
					unk[1] = 867156718;
					endRange = 2;
					break;
			
				case 7:
					unk[0] = -1341683964;
					unk[1] = 1484386316;
					endRange = 2;
					break;
			
				case 13:
					unk[0] = -1341683964;
					unk[1] = 876797088;
					unk[2] = 1484386316;
					endRange = 3;
					break;
			
				case 14:
					unk[0] = -1092189504;
					unk[1] = 80515440;
					endRange = 2;
					break;
			
				default:
					unk[0] = -1341683964;
					break;
			}
			break;
	}

	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
	{
		for (i = 0; i < endRange; i = i + 1)
		{
			if (unk[i] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				flag = true;
				num2 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
		}
	}

	if (!flag)
	{
		randomIntInRange = 0;
	
		if (endRange > 0 && bParam2)
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	
		num2 = unk[randomIntInRange];
	}

	if (!func_66(iParam0, num2))
		num2 = Global_40.f_4942[iParam0 /*60*/].f_3;

	return num2;
}

BOOL func_199(int iParam0) // Position - 0x88B2 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_200(Player plParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x88C5 Hash - 0x3E30B0B5 ^0x3E30B0B5
{
	int num;

	if (iParam3 > 0f)
		num = iParam3;
	else
		num = func_337(plParam0, Global_36, true);

	if (iParam2 > 0f)
		if (num < iParam2)
			return true;

	if (num < iParam1)
		if (PED::_IS_PED_VISIBILITY_TRACKED(plParam0))
			if (iParam4 > 0f)
				if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(plParam0, iParam4))
					return true;
			else if (PED::IS_TRACKED_PED_VISIBLE(plParam0))
				return true;
		else if (!ENTITY::IS_ENTITY_OCCLUDED(plParam0))
			if (ENTITY::IS_ENTITY_ON_SCREEN(plParam0))
				return true;

	return false;
}

int func_201(var uParam0) // Position - 0x894E Hash - 0x5003E811 ^0x149F4BDA
{
	float value;
	float num;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_5, 0) || !uParam0->f_11)
		value = 12500f;
	else
		value = 7500f;

	num = BUILTIN::SQRT(func_337(uParam0->f_5, Global_36, true));
	value = value / num;
	return BUILTIN::ROUND(value);
}

void func_202(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x899F Hash - 0x21564E1F ^0xFAF13C4F
{
	BOOL flag;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (bParam1)
	{
		if (!PED::_IS_META_PED_USING_COMPONENT(pedParam0, joaat("HATS")))
		{
			PED::_EQUIP_META_PED_OUTFIT(pedParam0, 622113465);
			flag = true;
		}
	}
	else if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, joaat("HATS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);
		flag = true;
	}

	if (bParam2)
		if (flag)
			PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_203(int iParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0x8A0D Hash - 0x1300E8EE ^0xFBE7C64E
{
	Hash hash;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (func_199(iParam2))
		{
			hash = func_62(iParam2, -1);
		
			if (func_223(pedParam1, hash))
			{
				if (func_338(pedParam1, hash))
				{
					if (func_339(pedParam1, hash))
					{
						PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam1, "metaped_outfit_request"), pedParam1, true, false);
						func_340(pedParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(pedParam1, hash);
				}
			}
		}
	
		func_225(iParam0, pedParam1, false);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(pedParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam1, 9);
	
		if (bParam3)
			func_26(iParam0, 66, false);
	}

	return;
}

void func_204(var uParam0) // Position - 0x8AE3 Hash - 0xAD92A7B ^0xD40DF480
{
	switch (*uParam0)
	{
		case 4:
			if (func_239(45))
			{
				if (func_195(joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"), true))
				{
					func_65(*uParam0, 8192, true);
				}
				else
				{
					func_65(*uParam0, 8192, false);
					func_225(*uParam0, uParam0->f_5, true);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 1544915253);
				}
			
				if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 867156718)
				{
					func_65(*uParam0, 67108864, true);
				}
				else
				{
					func_65(*uParam0, 67108864, false);
					func_225(*uParam0, uParam0->f_5, true);
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], -271415321);
				}
			}
			break;
	
		case 7:
			if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 1484386316)
				func_65(*uParam0, 8388608, true);
			break;
	
		case 14:
			if (Global_40.f_4942[*uParam0 /*60*/].f_3 == -1341683964)
			{
				func_65(*uParam0, 16777216, true);
			}
			else if (Global_40.f_4942[*uParam0 /*60*/].f_3 == 1484386316 || Global_40.f_4942[*uParam0 /*60*/].f_3 == 1254970547)
			{
				func_65(*uParam0, 16777216, false);
				func_225(*uParam0, uParam0->f_5, true);
				PED::_0xA2F8B3B5FEDFC100(Global_1360165[*uParam0 /*1157*/], 622113465);
			}
			break;
	}

	return;
}

void func_205(int iParam0, int iParam1) // Position - 0x8C83 Hash - 0x6854D8D3 ^0xE1997D2D
{
	int clockHours;
	int clockMinutes;
	int num;
	var unk;
	int num2;
	int num3;
	var unk2;
	var unk3;
	var unk4;

	if (iParam1 == 4 && !(func_195(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), true) || func_195(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), true)))
	{
		clockHours = CLOCK::GET_CLOCK_HOURS();
		clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	
		if (clockHours >= 22 || clockHours < 5 || clockHours == 5 && clockMinutes <= 59)
		{
			num = func_81();
		
			if (clockHours >= 22)
				func_341(&num, 0, 0, 0, 1, 0, 0, true);
		
			func_342(&num, 6);
			func_343(&num, 0);
			func_344(num, &unk, &num2, &num3, &unk2, &unk3, &unk4);
		
			if (num2 > 0 || num3 > 0)
				func_345(iParam0, 0, num2, num3, 0, false, true);
		}
	}

	return;
}

void func_206(int iParam0, int iParam1) // Position - 0x8D40 Hash - 0xEA66EBCE ^0xEA66EBCE
{
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;

	if (iParam1 == 6 || iParam1 == 5)
	{
		num = func_69();
		num2 = func_346(iParam0);
		flag = false;
		flag2 = false;
	
		if (num != 6 && iParam1 == 6)
		{
			if (num2 == 6)
				flag2 = true;
		
			flag = true;
		}
		else if (num != 0 && iParam1 == 5)
		{
			if (num2 == 5)
				flag2 = true;
		
			flag = true;
		}
	
		if (flag)
			func_345(iParam0, 0, 0, 0, 0, flag2, false);
	}

	return;
}

BOOL func_207(int iParam0) // Position - 0x8DBA Hash - 0xD02571D6 ^0x9878B86D
{
	return iParam0 != -15;
}

BOOL func_208(int iParam0, int iParam1) // Position - 0x8DC8 Hash - 0x9E6AAD4C ^0x9E6AAD4C
{
	if (!func_347(iParam1) || !func_347(iParam0))
		return true;

	return iParam0 >= iParam1;
}

void func_209(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8DF0 Hash - 0x48510EDE ^0x48510EDE
{
	var unk;
	var unk2;
	var unk3;
	int num;
	var unk4;
	var unk5;
	int num2;
	int num3;

	func_348(Global_1899515, iParam2, &unk, &unk2, &unk3, &num, &unk4, &unk5);
	num2 = func_349(iParam2);
	num3 = func_350(iParam2);

	if (num2 == func_349(Global_1899515) && num3 == func_350(Global_1899515) && num == 0)
		return;

	PERSCHAR::_0xA4DCB3F0DD7488BD(uParam0->f_6, iParam1, num3, num2, num);
	return;
}

int func_210(int iParam0) // Position - 0x8E58 Hash - 0x6D3B16F0 ^0x6D3B16F0
{
	switch (iParam0)
	{
		case 0:
			return 13;
	
		case 1:
			return 14;
	
		case 2:
			return 15;
	
		case 3:
			return 16;
	
		case 4:
			return 17;
	
		case 5:
			return 18;
	
		case 6:
			return 19;
	
		case 7:
			return 20;
	
		case 8:
			return 21;
	
		case 9:
			return 22;
	
		case 10:
			return 23;
	
		case 11:
			return 24;
	
		case 13:
			return 25;
	
		case 14:
			return 26;
	
		case 15:
			return 27;
	
		case 16:
			return 28;
	
		case 17:
			return 29;
	
		case 18:
			return 30;
	
		case 19:
			return 31;
	
		case 20:
			return 32;
	
		case 21:
			return 33;
	
		case 22:
			return 34;
	
		case 23:
			return 35;
	
		default:
		
	}

	return -1;
}

int func_211(int iParam0) // Position - 0x8F66 Hash - 0xFB0DE656 ^0xFB0DE656
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 4;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 7;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
		case joaat("CSTAG_MOOD_BILL_DOWN"):
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
		case joaat("CSTAG_MOOD_JACK_DOWN"):
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 1;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 6;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
		case joaat("CSTAG_MOOD_BILL_COLTER"):
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
		case joaat("CSTAG_MOOD_JACK_COLTER"):
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 5;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 3;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_212(Hash hParam0) // Position - 0x92E1 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_213(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x92ED Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_56(iParam0))
		return false;

	if (func_6(iParam0, 32, true))
		return false;

	if (!func_6(iParam0, 2, true))
		return false;

	if (!func_6(iParam0, 4, true))
		return false;

	if (func_4(iParam0, 33, true))
		return false;

	if (func_125(iParam0))
		return false;

	if (func_351(iParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == iParam0)
			return false;

	return true;
}

Player func_214(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16) // Position - 0x937A Hash - 0x98448E34 ^0x98448E34
{
	var unk;
	Player player;

	if (!func_56(iParam0))
		return 0;

	player = func_352(&unk, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, bParam16);

	if (!ENTITY::DOES_ENTITY_EXIST(player))
		return 0;

	if (bParam6)
		if (!ENTITY::IS_ENTITY_DEAD(player) && PED::IS_PED_READY_TO_RENDER(player))
			return player;
	else
		return player;

	return 0;
}

BOOL func_215(int iParam0) // Position - 0x93F0 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_353())
	{
		case -1:
			return Global_1357549.f_1495 && iParam0 != false;
	}

	return false;
}

int func_216(int iParam0, int iParam1) // Position - 0x941B Hash - 0x2641680 ^0x6B70222B
{
	int randomIntInRange;
	int num;
	int num2;

	switch (iParam0)
	{
		case 296923297:
			num2 = -268604689;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -268604689;
					break;
			
				case 1:
					num = -1632589543;
					break;
			
				case 2:
					num = -1862464078;
					break;
			}
			break;
	
		case 1237718549:
			num2 = -922193456;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		
			switch (randomIntInRange)
			{
				case 0:
					num = -922193456;
					break;
			
				case 1:
					num = -2040275819;
					break;
			
				case 2:
					num = -1114682645;
					break;
			
				case 3:
					num = -1414977761;
					break;
			}
			break;
	}

	if (iParam1 != -1)
		if (func_66(iParam1, num))
			num2 = num;

	return num2;
}

int func_217(int iParam0) // Position - 0x94F2 Hash - 0xDEAE5330 ^0x7DE1135D
{
	switch (iParam0)
	{
		case -2040275819:
			return 464906090;
	
		case -1862464078:
			return 1895628185;
	
		case -1632589543:
			return 1052055818;
	
		case -1414977761:
			return 1059434053;
	
		case -1114682645:
			return 744097966;
	
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
	
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
	
		default:
		
	}

	return joaat("META_OUTFIT_DEFAULT");
}

int func_218(int iParam0) // Position - 0x9569 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_266(iParam0))
		return -1;

	return func_354(iParam0);
}

void func_219(int iParam0) // Position - 0x9585 Hash - 0x83966A8E ^0x24FDDDED
{
	func_221(iParam0, 1);
	func_221(iParam0, 128);
	func_221(iParam0, 256);
	func_221(iParam0, 512);
	func_221(iParam0, 1024);
	func_221(iParam0, 2048);
	func_221(iParam0, 4096);
	func_221(iParam0, 65536);
	func_221(iParam0, 16384);
	func_221(iParam0, 262144);
	func_221(iParam0, 524288);
	func_221(iParam0, 1048576);
	func_221(iParam0, 2097152);
	func_221(iParam0, 32768);
	func_221(iParam0, 131072);
	func_221(iParam0, 134217728);
	func_221(iParam0, 1073741824);
	return;
}

void func_220(int iParam0, BOOL bParam1) // Position - 0x962E Hash - 0xA7580A6E ^0x43CB9E85
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		return;

	if (!bParam1)
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);

	return;
}

void func_221(int iParam0, int iParam1) // Position - 0x96A1 Hash - 0x319C37AC ^0x8ABBFC1F
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = Global_40.f_4942[iParam0 /*60*/].f_5 - Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1;
	return;
}

BOOL func_222(int iParam0, var uParam1) // Position - 0x96D1 Hash - 0x4931B454 ^0x57CF147
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 860729266;
			return true;
	
		case 128:
			*uParam1 = 1606325429;
			return true;
	
		case 256:
			*uParam1 = 1743550585;
			return true;
	
		case 512:
			*uParam1 = 1064646155;
			return true;
	
		case 1024:
			*uParam1 = -536694793;
			return true;
	
		case 2048:
			*uParam1 = -1304053509;
			return true;
	
		case 4096:
			*uParam1 = 879715242;
			return true;
	
		case 16384:
			*uParam1 = -1100875244;
			return true;
	
		case 32768:
			*uParam1 = -1658942149;
			return true;
	
		case 65536:
			*uParam1 = -972364774;
			return true;
	
		case 131072:
			*uParam1 = -1980913856;
			return true;
	
		case 262144:
			*uParam1 = 1153596794;
			return true;
	
		case 524288:
			*uParam1 = 1016389820;
			return true;
	
		case 1048576:
			*uParam1 = -726966617;
			return true;
	
		case 2097152:
			*uParam1 = 1365901568;
			return true;
	
		case 134217728:
			*uParam1 = -1683207356;
			return true;
	
		case 1073741824:
			*uParam1 = -1712783565;
			return true;
	}

	return false;
}

BOOL func_223(Ped pedParam0, Hash hParam1) // Position - 0x9847 Hash - 0x902FAF7B ^0x852CA371
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

void func_224(int iParam0, int iParam1) // Position - 0x9875 Hash - 0x5D6920FA ^0x923FA356
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = Global_40.f_4942[iParam0 /*60*/].f_5 || iParam1;
	return;
}

void func_225(int iParam0, Ped pedParam1, BOOL bParam2) // Position - 0x9898 Hash - 0xF8298322 ^0x7D3D3E5
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) || ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, joaat("wearable_masks")))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, joaat("wearable_masks"), 1);

	if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 494009478))
		PED::REMOVE_TAG_FROM_META_PED(pedParam1, 494009478, 1);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_223(pedParam1, 860729266))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 860729266);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_223(pedParam1, 879715242))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 879715242);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_223(pedParam1, 1606325429))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1606325429);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_223(pedParam1, 1743550585))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1743550585);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_223(pedParam1, 1064646155))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1064646155);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_223(pedParam1, -536694793))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -536694793);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_223(pedParam1, -1304053509))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1304053509);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_223(pedParam1, 718939204))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 718939204);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_223(pedParam1, -972364774))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -972364774);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_223(pedParam1, -1100875244))
	{
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, -134124598))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, -134124598, 1);
	
		if (PED::_IS_META_PED_USING_COMPONENT(pedParam1, 2071466316))
			PED::REMOVE_TAG_FROM_META_PED(pedParam1, 2071466316, 1);
	
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1100875244);
	}

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_223(pedParam1, 1153596794))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1153596794);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_223(pedParam1, 1016389820))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1016389820);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_223(pedParam1, -726966617))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -726966617);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_223(pedParam1, 1365901568))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1365901568);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_223(pedParam1, -1658942149))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1658942149);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_223(pedParam1, -1980913856))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1980913856);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_223(pedParam1, 491764525))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 491764525);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_223(pedParam1, -76015264))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -76015264);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_223(pedParam1, 622113465))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 622113465);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_223(pedParam1, 781533162))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 781533162);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_223(pedParam1, -271415321))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -271415321);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_223(pedParam1, -1683207356))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1683207356);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_223(pedParam1, -254794762))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -254794762);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_223(pedParam1, 609066278))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 609066278);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_223(pedParam1, -1712783565))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, -1712783565);

	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_223(pedParam1, 1544915253))
		PED::_EQUIP_META_PED_OUTFIT(pedParam1, 1544915253);

	if (bParam2)
		Global_1360165[iParam0 /*1157*/].f_57 = 1;

	return;
}

BOOL func_226(int iParam0, int iParam1) // Position - 0x9E76 Hash - 0xE0095B63 ^0x929CAC47
{
	int num;
	int offset;

	if (!func_56(iParam0))
		return false;

	func_355(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[num], offset);
}

BOOL func_227(int iParam0, int iParam1) // Position - 0x9EAC Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_228(var uParam0, float fParam1) // Position - 0x9EBB Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_257() - fParam1;
	func_356(uParam0, 1);
	func_357(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

void func_229(var uParam0, BOOL bParam1) // Position - 0x9EE1 Hash - 0xF24DB1B2 ^0x7BC0301F
{
	if (bParam1)
	{
		func_358(*uParam0, joaat("comment_on_food_good"), 0, 0);
		func_359(uParam0, 2);
		func_232(uParam0, false);
	}
	else
	{
		func_358(*uParam0, joaat("comment_on_food_bad"), 0, 0);
		func_359(uParam0, 1);
		func_232(uParam0, true);
	}

	return;
}

float func_230() // Position - 0x9F2B Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1357549.f_1900;
}

BOOL func_231() // Position - 0x9F3A Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

void func_232(var uParam0, BOOL bParam1) // Position - 0x9F5B Hash - 0x958174F4 ^0xD229D92D
{
	if (bParam1)
	{
		func_32(*uParam0, joaat("comment_on_food_good"));
		func_360(uParam0, 2);
	}
	else
	{
		func_32(*uParam0, joaat("comment_on_food_bad"));
		func_360(uParam0, 1);
	}

	return;
}

BOOL func_233(var uParam0) // Position - 0x9F91 Hash - 0x39705408 ^0x39705408
{
	return func_256(*uParam0, 2);
}

int func_234() // Position - 0x9FA1 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

int func_235(int iParam0) // Position - 0x9FBF Hash - 0xC02FF737 ^0x12DE3F98
{
	switch (iParam0)
	{
		case 0:
			return 1670677840;
	
		case 1:
			return -437500449;
	
		case 2:
			return -945092648;
	
		case 3:
			return -1644068043;
	
		case 4:
			return -1701309802;
	
		case 5:
			return -1092196885;
	
		case 6:
			return 837806200;
	
		case 7:
			return -1904006265;
	
		case 8:
			return 1047384062;
	
		default:
		
	}

	return 0;
}

BOOL func_236(Ped pedParam0) // Position - 0xA04E Hash - 0x4E8A039F ^0x9F8FB293
{
	int i;
	Hash weaponHash;
	BOOL num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, i, true);
	
		if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash))
		{
		}
		else
		{
			num = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(pedParam0, weaponHash);
		}
	}

	return num;
}

int func_237(Ped pedParam0, int iParam1) // Position - 0xA0CC Hash - 0x1315B721 ^0xAFCB88EA
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	PED::SET_PED_CONFIG_FLAG(pedParam0, 146, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 263, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 168, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 179, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 265, false);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 171, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 137, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 229, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 178, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 259, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 48, true);

	switch (iParam1)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 321, true);
			break;
	
		case 1:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, joaat("rel_gang_dutchs"));
			PED::SET_PED_CONFIG_FLAG(pedParam0, 40, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, false);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 152, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 154, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 25, true);
			PED::SET_PED_CONFIG_FLAG(pedParam0, 166, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(pedParam0, BF_0x07A6E531, true);
			break;
	
		case 2:
			PED::SET_PED_CONFIG_FLAG(pedParam0, 130, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, joaat("rel_gang_dutchs"));
			EVENT::SET_DECISION_MAKER(pedParam0, joaat("DM_MEDIUM_DOMESTIC_ANIMAL"));
			break;
	}

	return 1;
}

void func_238(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA205 Hash - 0x31BF1139 ^0xA046F8A2
{
	int pedMaxHealth;
	Ped ped;

	if (func_114(iParam0))
	{
		ped = func_112(iParam0);
	
		if (!ENTITY::IS_ENTITY_DEAD(ped))
		{
			pedMaxHealth = PED::GET_PED_MAX_HEALTH(ped);
			PED::SET_PED_CONFIG_FLAG(ped, 179, true);
			func_361(iParam0);
		}
	}

	if (func_4(iParam0, 5, true))
		PED::SET_PED_CONFIG_FLAG(func_112(iParam0), 137, true);

	return;
}

BOOL func_239(int iParam0) // Position - 0xA257 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_362(iParam0))
		return false;

	return func_363(iParam0);
}

BOOL func_240(int iParam0) // Position - 0xA273 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_353() != -1)
		return false;

	if (!func_264(iParam0))
		return false;

	return func_63(Global_1347702[iParam0 /*49*/].f_15, true);
}

BOOL func_241() // Position - 0xA2A4 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_353() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

void func_242(int iParam0) // Position - 0xA2C9 Hash - 0x65C87F1F ^0x349000AF
{
	Hash hash;
	int num;
	int i;
	int num2;

	hash = { Global_40.f_4942[iParam0 /*60*/].f_8 };

	if (func_134(hash))
	{
		num = hash.f_1;
	
		if (num != -15 && func_47(num))
		{
			func_32(iParam0, hash);
		}
		else if (hash.f_2)
		{
		}
		else if (func_364(iParam0, hash))
		{
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		hash = { Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/] };
	
		if (func_134(hash))
		{
			num2 = hash.f_1;
		
			if (num2 != -15 && func_47(num2))
			{
				func_32(iParam0, hash);
			}
			else if (hash.f_2)
			{
			}
			else if (func_364(iParam0, hash))
			{
			}
		}
	}

	return;
}

void func_243(int iParam0, float fParam1, float fParam2, BOOL bParam3) // Position - 0xA398 Hash - 0x4522A46B ^0x29A023C7
{
	Ped ped;

	if (!func_56(iParam0))
		return;

	ped = func_112(iParam0);

	if (!func_67(ped, 0))
		return;

	PED::_0x85F500F4E24CA43E(ped, fParam1);

	if (bParam3)
		PED::_0x9B9B9FA0EA283E3D(ped, fParam1);

	PED::_0xEC60D1D225BC50AA(ped, fParam2);
	return;
}

void func_244(var uParam0, BOOL bParam1) // Position - 0xA3E0 Hash - 0x4B5C34A ^0x261D032A
{
	switch (*uParam0)
	{
		case 0:
			MISC::_0x0358B8A41916C613(joaat("Dutch"), joaat("ABIGAIL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("Dutch"), joaat("John"), 2, bParam1);
			break;
	
		case 1:
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("micah"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("Bill"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("Dutch"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("Dutch"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("micah"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("John"), joaat("Bill"), 1, bParam1);
			break;
	
		case 2:
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("ABIGAIL"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("John"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("sadie"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("JACK"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("Charles"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JAVIER"), joaat("ABIGAIL"), 1, bParam1);
			break;
	
		case 3:
		case 4:
		case 6:
		case 17:
		case 18:
		case 21:
		case 23:
			break;
	
		case 7:
			MISC::_0x0358B8A41916C613(joaat("Charles"), joaat("micah"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("Charles"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("Charles"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("Charles"), joaat("Bill"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("Charles"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("Charles"), joaat("micah"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("Charles"), joaat("cleet"), 1, bParam1);
			break;
	
		case 11:
			MISC::_0x0358B8A41916C613(joaat("sadie"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("sadie"), joaat("micah"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("sadie"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("sadie"), joaat("cleet"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("sadie"), joaat("micah"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("sadie"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("sadie"), joaat("Bill"), 1, bParam1);
			break;
	
		case 13:
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("micah"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("Bill"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JAVIER"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("micah"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("ABIGAIL"), joaat("cleet"), 1, bParam1);
			break;
	
		case 14:
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("JOE"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("JACK"), joaat("cleet"), 1, bParam1);
			break;
	
		case 15:
			MISC::_0x0358B8A41916C613(joaat("marybeth"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("marybeth"), joaat("micah"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("marybeth"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("marybeth"), joaat("cleet"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("marybeth"), joaat("micah"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("marybeth"), joaat("JOE"), 1, bParam1);
			break;
	
		case 19:
			MISC::_0x0358B8A41916C613(joaat("grimshaw"), joaat("KAREN"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("grimshaw"), joaat("KAREN"), 1, bParam1);
			break;
	
		case 20:
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JAVIER"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("grimshaw"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JAVIER"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("grimshaw"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("micah"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("Dutch"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("KAREN"), joaat("Bill"), 2, bParam1);
			break;
	
		case 22:
			MISC::_0x0358B8A41916C613(joaat("tilly"), joaat("cleet"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("tilly"), joaat("micah"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("tilly"), joaat("JOE"), 2, bParam1);
			MISC::_0x0358B8A41916C613(joaat("tilly"), joaat("cleet"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("tilly"), joaat("micah"), 1, bParam1);
			MISC::_0x0358B8A41916C613(joaat("tilly"), joaat("JOE"), 1, bParam1);
			break;
	}

	return;
}

void func_245(var uParam0) // Position - 0xA913 Hash - 0x933D59EE ^0xEE74F16C
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	return;
}

void func_246(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA920 Hash - 0xE11FEEB6 ^0xE11FEEB6
{
	if (!func_114(iParam0))
		return;

	if (bParam1)
		func_365(iParam0, bParam3);
	else
		func_366(iParam0, bParam3);

	if (bParam2)
		func_249(iParam0, bParam3);
	else
		func_367(iParam0, bParam3);

	return;
}

void func_247(int iParam0) // Position - 0xA965 Hash - 0xF69B99CF ^0x21CDC007
{
	Ped ped;

	ped = Global_1360165[iParam0 /*1157*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped) || ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_114(iParam0))
		return;

	if (!PED::IS_PED_IN_GROUP(ped))
		return;

	if (PED::GET_PED_GROUP_INDEX(ped) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
		return;

	if (PED::_IS_PED_LEADING_ANY_GROUP(ped))
		COMPANION::_0xD747979C053EFA7A(func_37());

	PED::SET_PED_CONFIG_FLAG(ped, 279, false);
	PED::REMOVE_PED_FROM_GROUP(ped);
	func_368(iParam0, false, 0);
	return;
}

void func_248(var uParam0) // Position - 0xA9E8 Hash - 0xB5CB4258 ^0x39AF80E1
{
	if (Global_1359489.f_673 == -1)
		Global_1359489.f_673 = MISC::GET_RANDOM_INT_IN_RANGE(1, 9);

	uParam0->f_101 = Global_1359489.f_673;
	Global_1359489.f_673 = Global_1359489.f_673 + 1;

	if (Global_1359489.f_673 > 8)
		Global_1359489.f_673 = 1;

	return;
}

void func_249(int iParam0, BOOL bParam1) // Position - 0xAA38 Hash - 0xD602D5AC ^0xD602D5AC
{
	Ped ped;

	if (!func_56(iParam0))
		return;

	ped = func_112(iParam0);
	func_369(ped);

	if (iParam0 == 14)
		func_370(ped);

	func_26(iParam0, 61, true);

	if (bParam1)
		func_371(iParam0);

	return;
}

void func_250(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAA7C Hash - 0x4B52E53C ^0x4B52E53C
{
	if (!func_56(iParam0))
		return;

	if (bParam1)
	{
		func_12(iParam0, 50, true);
		func_12(iParam0, 48, true);
		func_12(iParam0, 49, true);
		func_12(iParam0, 51, true);
		func_12(iParam0, 52, true);
		func_12(iParam0, 54, true);
		func_12(iParam0, 55, true);
	}
	else
	{
		func_26(iParam0, 50, true);
		func_26(iParam0, 48, true);
		func_26(iParam0, 49, true);
		func_26(iParam0, 51, true);
	
		if (bParam3)
			func_26(iParam0, 54, true);
		else
			func_12(iParam0, 54, true);
	
		if (!bParam2)
		{
			func_26(iParam0, 52, true);
		
			if (bParam3)
				func_26(iParam0, 55, true);
		}
		else
		{
			func_12(iParam0, 52, true);
		
			if (!bParam3)
				func_12(iParam0, 55, true);
		}
	}

	return;
}

void func_251(int iParam0) // Position - 0xAB4E Hash - 0x73C1F6C ^0x73C1F6C
{
	func_219(iParam0);
	func_220(iParam0, false);
	return;
}

void func_252(var uParam0, BOOL bParam1) // Position - 0xAB63 Hash - 0xB795AA93 ^0x89E71018
{
	if (!TASK::GET_IS_TASK_ACTIVE(uParam0->f_5, 7) && !func_157(uParam0->f_5, 258748395))
	{
		if (bParam1)
			TASK::CLEAR_PED_TASKS(uParam0->f_5, true, false);
	
		PERSCHAR::_RETASK_PERSISTENT_CHARACTER(func_44(*uParam0, false));
	}

	return;
}

BOOL func_253(int iParam0, BOOL bParam1) // Position - 0xABA6 Hash - 0x5AE3FF0 ^0xBBA87420
{
	var entityCoords;

	if (!func_56(iParam0))
		return 0;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(func_372(iParam0), bParam1, false) };
	return func_373(entityCoords, 4);
}

BOOL func_254(int iParam0, BOOL bParam1) // Position - 0xABD6 Hash - 0x26407603 ^0x721F15B0
{
	if (func_374(iParam0))
		return true;

	if (!bParam1)
		if (func_375(5000))
			return true;

	switch (func_376(0))
	{
		case 0:
			return false;
	
		case 1:
			if (iParam0 & 1 != 0)
				return true;
			break;
	
		case 2:
			if (iParam0 & 16 != 0)
				return true;
			break;
	
		case 3:
			if (iParam0 & 128 != 0)
				return true;
			break;
	
		case 4:
			if (iParam0 & 2 != 0)
				return true;
			break;
	
		case 5:
			if (iParam0 & 32 != 0)
				return true;
			break;
	
		case 6:
			if (iParam0 & 4 != 0)
				return true;
			break;
	
		case 8:
			if (iParam0 & 8 != 0)
				return true;
			break;
	
		case 9:
			if (iParam0 & 64 != 0)
				return true;
			break;
	
		case 10:
			if (iParam0 & 512 != 0)
				return true;
			break;
	
		case 11:
			if (iParam0 & 256 != 0)
				return true;
			break;
	}

	return false;
}

BOOL func_255() // Position - 0xACF0 Hash - 0x4228A1C2 ^0x70D4FBDE
{
	return Global_1898164.f_163;
}

BOOL func_256(int iParam0, int iParam1) // Position - 0xACFE Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_257() // Position - 0xAD0D Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

Vector3 func_258(int iParam0) // Position - 0xAD3F Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 0:
			return -1343.6992f, 2429.3972f, 307.0626f;
	
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
	
		case 2:
			return 667.9077f, -1252.7803f, 42.9221f;
	
		case 3:
			return 1880.8066f, -1873.2307f, 41.8094f;
	
		case 4:
			return 1422.6255f, -7332.473f, 80.5977f;
	
		case 5:
			return 2254.96f, -758.12f, 41.75f;
	
		case 6:
			return 2351.2817f, 1362.0768f, 104.9752f;
	
		case 7:
			return -2593.2102f, 453.95334f, 145.9973f;
	
		case 8:
			return func_377();
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_259() // Position - 0xAE1F Hash - 0xC6D918D ^0xC6D918D
{
	int num;

	num = func_91();

	switch (num)
	{
		case 4:
			return 50f;
	
		case 9:
			return 50f;
	
		case 22:
			return 120f;
	
		case 37:
			return 120f;
	
		case 43:
			return 50f;
	
		case 58:
			return 50f;
	
		case 71:
			return 50f;
	
		case 79:
			return 50f;
	
		case 98:
			return 60f;
	}

	return 25f;
}

BOOL func_260(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0xAED3 Hash - 0x4421204 ^0x961A610F
{
	if (bParam7)
		return BUILTIN::VDIST2(vParam0, vParam3) <= fParam6 * fParam6;

	return func_296(vParam0, vParam3) <= fParam6 * fParam6;
}

BOOL func_261(int iParam0) // Position - 0xAF07 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_262() // Position - 0xAF1D Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_263(int iParam0) // Position - 0xAF70 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_266(iParam0))
		return -1;

	return func_379(func_378(iParam0));
}

BOOL func_264(int iParam0) // Position - 0xAF90 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_265(int iParam0, int iParam1) // Position - 0xAFA6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_266(int iParam0) // Position - 0xAFB5 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_267(int iParam0) // Position - 0xAFE8 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_353())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

int func_268() // Position - 0xB013 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_269(int iParam0) // Position - 0xB021 Hash - 0x7647021A ^0xF0097466
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_270(int iParam0) // Position - 0xB033 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_354(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

int func_271() // Position - 0xB09E Hash - 0xC3712DB3 ^0xF130EE35
{
	if (Global_1894899.f_187)
		return 1;

	if (func_380(16) && !func_380(21))
		return 1;

	return 0;
}

BOOL func_272(int iParam0, var uParam1, int iParam2) // Position - 0xB0CD Hash - 0x98C64123 ^0xA5880378
{
	var unk;
	int num;
	int num2;
	int num3;
	var unk6;
	var unk14;
	char* str;
	int num4;
	int num5;
	int num6;
	int num7;
	Hash persCharHash;
	int num8;
	int num9;
	int num10;

	unk = Global_1357549.f_576;
	num = func_381(iParam0);
	num2 = -1651099034;
	num3 = num;
	num5 = func_91();
	num7 = func_69();
	persCharHash = func_61(iParam0);

	if (CAM::IS_SCREEN_FADED_OUT())
		iParam2 = 60;

	num8 = *uParam1;
	num9 = num8 + iParam2;

	if (num9 >= 60)
		num9 = 59;

	*uParam1 = num8;

	while (*uParam1 <= num9)
	{
		if (Global_40.f_4283.f_6[*uParam1 /*5*/] == 176656832)
			return true;
	
		num10 = func_382(Global_40.f_4283.f_6[*uParam1 /*5*/]);
		Global_1357549.f_578 = func_383(Global_40.f_4283.f_6[*uParam1 /*5*/], &num10);
		unk.f_1 = Global_1357549.f_578;
		num6 = func_384(Global_40.f_4283.f_6[*uParam1 /*5*/]);
	
		if (num6 != num7)
		{
		}
		else
		{
			num4 = func_385(num6);
		
			if (num4 == -1)
				num4 = num5;
		
			str = func_386(num4);
			unk.f_3 = num3;
		
			if (func_387(unk, num2, &unk6, false))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk14, str, 64);
				TEXT_LABEL_APPEND_STRING(&unk14, "/", 64);
				TEXT_LABEL_APPEND_STRING(&unk14, &unk6, 64);
				Global_40.f_4942[iParam0 /*60*/].f_51 = { unk14 };
			
				if (!func_4(iParam0, 17, true))
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(persCharHash, &(Global_40.f_4942[iParam0 /*60*/].f_51));
			
				Global_1360165[iParam0 /*1157*/].f_47 = 0;
				Global_1360165[iParam0 /*1157*/].f_56 = 1;
				return true;
			}
		}
	
		*uParam1 = *uParam1 + 1;
	}

	return *uParam1 >= 60;
}

BOOL func_273(var uParam0) // Position - 0xB249 Hash - 0x83506899 ^0x5144D48A
{
	int num;

	if (uParam0->f_120 > -1)
	{
		if (func_388(uParam0->f_5, uParam0->f_120))
			if (func_389(&(uParam0->f_115), uParam0->f_5, uParam0->f_120))
				return true;
		else
			uParam0->f_120 = -1;
	}
	else
	{
		num = func_390(uParam0->f_5);
	
		if (num > -1)
		{
			uParam0->f_120 = num;
			func_391(&(uParam0->f_115));
		}
	}

	return false;
}

int func_274(int iParam0) // Position - 0xB2A9 Hash - 0x8712E065 ^0xF455CCE0
{
	if (iParam0 < 0 || iParam0 >= 3)
		return -1;

	if (!Global_1359489.f_63.f_242[iParam0 /*18*/].f_15)
		return -1;

	return Global_1359489.f_63.f_242[iParam0 /*18*/];
}

void func_275(Entity eParam0, int iParam1) // Position - 0xB2E8 Hash - 0x74FE3BD7 ^0xE0A4BAC8
{
	var unk;
	int num;
	int num2;
	var unk4;
	float num3;
	var unk5;

	if (iParam1 < 0 || iParam1 >= 3)
		return;

	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
		return;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return;

	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_16)
	{
		unk = { Global_1359489.f_63.f_242[iParam1 /*18*/].f_2 };
		num = Global_1359489.f_63.f_242[iParam1 /*18*/];
		num2 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_7;
		unk4 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_9;
		num3 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_12;
		unk5 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_17;
		func_392(num, num2, unk4, 0f, 0f, 0f, unk, 1069547520, 1075838976, 1056964608, num3, iParam1, false, unk5);
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_16 = 1;
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_8 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_8 + 1;
	}
	else
	{
		Global_1359489.f_63.f_242[iParam1 /*18*/].f_8 = Global_1359489.f_63.f_242[iParam1 /*18*/].f_8 + 1;
	}

	return;
}

void func_276(var uParam0) // Position - 0xB40E Hash - 0x6CDF7D68 ^0x5AE5A65E
{
	Vector3 vector;

	func_393(uParam0);
	func_246(*uParam0, true, false, true);

	if (bLocal_138)
	{
		vector = { func_191(uParam0->f_120) };
	
		if (!_IS_NULL_VECTOR(vector))
			TASK::TASK_LOOK_AT_COORD(uParam0->f_5, vector, 10000, 0, 51, false);
	}

	if (func_394(uParam0->f_108))
	{
		uParam0->f_110 = { func_395(uParam0->f_108) };
		func_89(&(uParam0->f_19), true);
		func_98(uParam0, 32768);
	}

	uParam0->f_114 = func_396(uParam0->f_108);
	uParam0->f_109 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	func_2(uParam0, 18);
	return;
}

void func_277(var uParam0) // Position - 0xB4A5 Hash - 0x7D526253 ^0x82062F22
{
	if (bLocal_138)
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);

	uParam0->f_105 = -1650437862;
	func_2(uParam0, 19);
	return;
}

BOOL func_278(var uParam0) // Position - 0xB4CC Hash - 0x5B6D7940 ^0x8062AF84
{
	var unk;
	var unk4;

	func_175(&unk, &unk4);

	if (func_337(uParam0->f_5, unk, true) < 6.5f)
		return true;

	return false;
}

BOOL func_279(var uParam0) // Position - 0xB4F8 Hash - 0xC5ACC858 ^0x743FCA9B
{
	Vector3 entityCoords;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(uParam0->f_5, 1000))
		return true;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false) };

	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, entityCoords, 7.5f))
		return true;

	if (MISC::IS_BULLET_IN_AREA(entityCoords, 3f, true))
		return true;

	return false;
}

BOOL func_280(Entity eParam0) // Position - 0xB547 Hash - 0xB629DC5B ^0xB629DC5B
{
	return func_397(eParam0, 4);
}

BOOL func_281(Ped pedParam0) // Position - 0xB556 Hash - 0x8A167718 ^0x4E1F0D72
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(pedParam0) != 0)
			return true;

	return false;
}

BOOL func_282(var uParam0) // Position - 0xB576 Hash - 0x2E893B81 ^0x24807092
{
	var unk;
	var unk4;
	Vector3 vector;

	if (func_281(uParam0->f_5))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[*uParam0 /*1157*/].f_70) || !func_161(512) && !(func_181(*uParam0, 400f) && !func_182(*uParam0)))
	{
		func_175(&unk, &unk4);
		vector = { unk };
	
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_5, true, false), vector) < (float)func_398(func_69()))
			return false;
	}

	return true;
}

void func_283(int iParam0) // Position - 0xB602 Hash - 0xA85A42F5 ^0xA85A42F5
{
	if (!func_56(iParam0))
		return;

	if (func_144(iParam0, 64))
		func_22(iParam0, false, true, true, false);

	func_23(iParam0);
	return;
}

BOOL func_284(int iParam0) // Position - 0xB633 Hash - 0x81407059 ^0x1622C33B
{
	if (iParam0 < 0 || iParam0 >= 10)
		return false;

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
		return false;

	return Global_1359489.f_63[iParam0 /*24*/].f_15;
}

BOOL func_285(Ped pedParam0, int iParam1) // Position - 0xB66F Hash - 0xD260DC5C ^0x71CB6746
{
	if (iParam1 < 0 || iParam1 >= 3)
		return false;

	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (PED::IS_PED_ON_MOUNT(pedParam0))
	{
		if (Global_1359489.f_63.f_242[iParam1 /*18*/].f_14 != 0 && Global_1359489.f_63.f_242[iParam1 /*18*/].f_14 != 1)
			return false;
	
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(func_399(pedParam0)) <= Global_1359489.f_63.f_242[iParam1 /*18*/].f_11)
			return true;
	}
	else
	{
		if (Global_1359489.f_63.f_242[iParam1 /*18*/].f_13 != 0 && Global_1359489.f_63.f_242[iParam1 /*18*/].f_13 != 1)
			return false;
	
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(pedParam0) <= Global_1359489.f_63.f_242[iParam1 /*18*/].f_10)
			return true;
	}

	return false;
}

void func_286(int iParam0, int iParam1, Entity eParam2) // Position - 0xB750 Hash - 0x6D674EAC ^0xD95A03C8
{
	var entityCoords;
	var unk3;
	float num;
	int num2;
	var unk6;
	float dx;

	if (iParam0 < 0 || iParam0 >= 10)
		return;

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
		return;

	if (iParam1 < 0 || iParam1 >= 3)
		return;

	if (!Global_1359489.f_63.f_242[iParam1 /*18*/].f_15)
		return;

	if (ENTITY::IS_ENTITY_DEAD(eParam2))
		return;

	if (Global_1359489.f_63[iParam0 /*24*/].f_15 || Global_1359489.f_63[iParam0 /*24*/].f_18)
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam2, true, false) };
	unk3 = { Global_1359489.f_63[iParam0 /*24*/].f_7 };
	num = Global_1359489.f_63.f_242[iParam1 /*18*/].f_6;
	num2 = Global_1359489.f_63[iParam0 /*24*/].f_1;
	unk6 = { func_400(iParam1, iParam0, entityCoords, unk3, num) };
	dx = { func_176(unk3 - unk6) };
	Global_1359489.f_63[iParam0 /*24*/].f_4 = { unk6 };
	Global_1359489.f_63[iParam0 /*24*/].f_10 = func_401(MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1));
	Global_1359489.f_63[iParam0 /*24*/].f_3 = func_402(num2);
	Global_1359489.f_63[iParam0 /*24*/].f_18 = 1;
	return;
}

int func_287(int iParam0) // Position - 0xB885 Hash - 0x8712E065 ^0xF455CCE0
{
	if (iParam0 < 0 || iParam0 >= 3)
		return -1;

	if (!Global_1359489.f_63.f_242[iParam0 /*18*/].f_15)
		return -1;

	return Global_1359489.f_63.f_242[iParam0 /*18*/].f_14;
}

Vector3 func_288(int iParam0) // Position - 0xB8C6 Hash - 0x7964FAE7 ^0xA682241E
{
	var unk;
	Vector3 vector;
	float groundZ;

	if (iParam0 < 0 || iParam0 >= 10)
		return 0f, 0f, 0f;

	unk = { func_176(Global_1359489.f_63[iParam0 /*24*/].f_4 - Global_1359489.f_63[iParam0 /*24*/].f_7) };
	vector = { Global_1359489.f_63[iParam0 /*24*/].f_4 + ({ 5f, 5f, 5f } * unk) };
	groundZ = 0f;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, false))
		vector.f_2 = groundZ;

	return vector;
}

int func_289(int iParam0) // Position - 0xB940 Hash - 0x81407059 ^0x4D82B79E
{
	if (iParam0 < 0 || iParam0 >= 10)
		return 0;

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
		return 0;

	return Global_1359489.f_63[iParam0 /*24*/].f_23;
}

void func_290(var uParam0) // Position - 0xB97C Hash - 0x7327AC5E ^0x18C77F65
{
	if (uParam0->f_1 == 18 || uParam0->f_1 == 19)
	{
		if (uParam0->f_108 > -1)
			func_403(uParam0->f_108);
	
		uParam0->f_108 = -1;
		uParam0->f_120 = -1;
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_109 = 0;
		func_25(uParam0, 131072);
		func_165(uParam0, 32768);
	}

	if (bLocal_139)
		func_77(uParam0);
	else if (func_90(uParam0->f_5))
		func_104(uParam0);
	else
		func_79(uParam0);

	return;
}

void func_291(Ped pedParam0) // Position - 0xB9FF Hash - 0xE7050FE7 ^0xA9DB5663
{
	int _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");

	if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(_int))
		PED::_RELEASE_META_PED_OUTFIT_REQUEST(_int);

	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_292(int iParam0) // Position - 0xBA67 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_404(iParam0, 2);
}

int func_293(BOOL bParam0) // Position - 0xBA76 Hash - 0x7F08FD3B ^0xE97B69AA
{
	int num;
	int numberOfFollowers;
	var hasLeader;
	int i;
	Ped pedAsGroupMember;

	if (bParam0)
		return func_405(Global_1359489.f_4);

	PED::GET_GROUP_SIZE(func_37(), &hasLeader, &numberOfFollowers);

	if (numberOfFollowers == 0)
		return 0;

	for (i = 0; i < numberOfFollowers; i = i + 1)
	{
		pedAsGroupMember = PED::GET_PED_AS_GROUP_MEMBER(func_37(), i);
	
		if (func_406(pedAsGroupMember))
			num = num + 1;
	}

	return num;
}

void func_294() // Position - 0xBAD6 Hash - 0xC0695FEA ^0xC0695FEA
{
	int i;
	int num;
	int num2;

	for (i = 0; i < 2; i = i + 1)
	{
		num = func_407(i);
		num2 = func_407(i + 1);
	
		if (!func_114(num))
		{
			if (func_114(num2))
			{
				Global_1359489[i] = num2;
				Global_1359489[i + 1] = -1;
			}
		}
	}

	return;
}

BOOL func_295(int iParam0) // Position - 0xBB2A Hash - 0xC2BA9D92 ^0x340F97FF
{
	if (!func_114(iParam0))
		return false;

	if (!func_125(iParam0))
		return false;

	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

float func_296(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0xBB5E Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

Hash func_297(int iParam0) // Position - 0xBB7C Hash - 0xEB890713 ^0xB40CD388
{
	Hash hash;
	int i;

	hash = 0;

	if (!func_56(iParam0))
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (Global_1357549.f_1675[i /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
				return Global_1357549.f_1675[i /*5*/];
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1357549.f_1675[i /*5*/] != 0 && Global_1357549.f_1675[i /*5*/].f_1 == -1)
		{
			hash = Global_1357549.f_1675[i /*5*/];
			break;
		}
	}

	if (!func_56(iParam0))
	{
		if (hash != 0)
		{
			Global_1357549.f_1675[i /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[i /*5*/].f_4;
		}
	}

	return hash;
}

PersChar func_298(int iParam0) // Position - 0xBC5D Hash - 0xF15D53A9 ^0x3132AAF6
{
	Hash persCharHash;
	Hash perscharModelName;

	if (!func_56(iParam0))
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		persCharHash = func_131(iParam0, true);
		perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(persCharHash);
	
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && perscharModelName != Global_40.f_4942[iParam0 /*60*/].f_7)
			PERSCHAR::_0x8BC555034A5A5E8C(persCharHash, Global_40.f_4942[iParam0 /*60*/].f_7);
	
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(persCharHash);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}

	return Global_1360165[iParam0 /*1157*/].f_126;
}

BOOL func_299(int iParam0, Hash hParam1) // Position - 0xBCF9 Hash - 0xBEA460B2 ^0x349C488E
{
	return Global_40.f_4942[iParam0 /*60*/].f_8 == hParam1;
}

BOOL func_300(int iParam0, Hash hParam1, var uParam2) // Position - 0xBD10 Hash - 0x74D89BFB ^0x3D78CCFD
{
	*uParam2 = 0;

	while (*uParam2 < 10)
	{
		if (Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/] == hParam1)
			return true;
	
		*uParam2 = *uParam2 + 1;
	}

	*uParam2 = -1;
	return false;
}

BOOL func_301(int iParam0, Hash hParam1) // Position - 0xBD4E Hash - 0x5D778EC2 ^0x5D778EC2
{
	int num;

	if (!func_56(iParam0))
		return false;

	if (func_299(iParam0, hParam1))
		return func_408(iParam0);

	num = -1;

	if (func_300(iParam0, hParam1, &num))
		return func_304(iParam0, num);

	return false;
}

void func_302(int iParam0, Hash hParam1) // Position - 0xBD94 Hash - 0xF1187F65 ^0x333D752B
{
	Ped ped;

	ped = func_112(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		PED::_0x2B4CE170DE09F346(ped, hParam1);

	func_409(iParam0, hParam1, false);
	return;
}

void func_303(Hash hParam0) // Position - 0xBDC1 Hash - 0xE2CD9F47 ^0x1C91C1C5
{
	*hParam0 = 0;
	hParam0->f_1 = -15;
	hParam0->f_2 = 0;
	return;
}

BOOL func_304(int iParam0, int iParam1) // Position - 0xBDD9 Hash - 0xADADEF61 ^0x3239C349
{
	if (!func_56(iParam0) || iParam1 < 0 || iParam1 >= 10)
		return false;

	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1);
}

void func_305(int iParam0, int iParam1, BOOL bParam2) // Position - 0xBE16 Hash - 0xA6162D2D ^0xECEEA1D5
{
	if (!func_56(iParam0) || iParam1 < 0 || iParam1 >= 10)
		return;

	if (bParam2)
		if (!MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
			MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
	else if (MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
		MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);

	return;
}

int func_306(Hash hParam0) // Position - 0xBE97 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_410(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_307(int iParam0) // Position - 0xBEC2 Hash - 0x5714EF25 ^0x5714EF25
{
	if (Global_1327590.f_19744 == -1)
		return false;

	if (iParam0 != -1)
		if (func_411(iParam0))
			return false;

	return true;
}

BOOL func_308(int iParam0, BOOL bParam1) // Position - 0xBEED Hash - 0x10DE2364 ^0x10DE2364
{
	return func_412(func_81(), iParam0, bParam1);
}

void func_309(var uParam0) // Position - 0xBF01 Hash - 0xE1B42AA9 ^0xE90DBD17
{
	if (func_161(128))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	}

	if (func_4(*uParam0, 50, false))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 62, true);
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 63, true);
	}

	if (func_4(*uParam0, 48, false))
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);

	if (func_255() || func_4(*uParam0, 49, false) || func_413() == 0)
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 49, true);

	if (func_161(4194304))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, 0f);
		func_26(*uParam0, 59, true);
	}
	else if (func_4(*uParam0, 59, true))
	{
		PED::_0xEC60D1D225BC50AA(uParam0->f_5, Global_1360165[*uParam0 /*1157*/].f_139);
		func_12(*uParam0, 59, true);
	}

	if (func_4(*uParam0, 56, false))
		if (func_85(&(Global_1359489.f_40)) && func_86(&(Global_1359489.f_40)) < 120f)
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		else
			func_12(*uParam0, 56, true);

	if (func_4(*uParam0, 57, false))
		if (func_85(&(Global_1359489.f_43)) && func_86(&(Global_1359489.f_43)) < 10f)
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
		else
			func_12(*uParam0, 57, true);

	return;
}

void func_310(var uParam0) // Position - 0xC084 Hash - 0xC10F0061 ^0xAB87B34D
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL isPedUsingScenarioHash;
	BOOL flag9;

	if (PED::_0x947E43F544B6AB34(uParam0->f_5, PLAYER::PLAYER_ID(), 34, 60000))
	{
		PED::_0xEBD49472BCCF7642(uParam0->f_5, PLAYER::PLAYER_ID());
		PED::_SET_PLAYER_GREET_DISABLED_FOR_PED(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
		PED::_SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED(uParam0->f_5, PLAYER::PLAYER_ID(), 60000);
	}

	flag = func_4(*uParam0, 53, false);
	flag2 = func_4(*uParam0, 52, false);
	flag3 = func_4(*uParam0, 55, false);
	flag4 = func_4(*uParam0, 51, false);
	flag5 = func_161(64);
	flag6 = func_161(1024);
	flag7 = func_4(*uParam0, 54, false);
	flag8 = *uParam0 == 16 && func_67(func_112(0), 0) && func_130(uParam0->f_5, func_112(0), true) < 64f;
	isPedUsingScenarioHash = PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_5, joaat("world_human_pee"));
	flag9 = false;

	if (func_4(*uParam0, 58, false))
	{
		if (func_85(&(Global_1359489.f_46)) && func_86(&(Global_1359489.f_46)) < 600f)
		{
			flag9 = true;
		}
		else
		{
			func_12(*uParam0, 58, true);
			func_88(&(Global_1359489.f_46));
		}
	}

	if (isPedUsingScenarioHash)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_5, 184, true);
	
		if (!flag)
		{
			func_26(*uParam0, 53, true);
			flag = true;
		}
	}

	if (flag && !isPedUsingScenarioHash)
	{
		func_12(*uParam0, 53, true);
		flag = false;
	}

	if (flag2 || flag)
		if (flag3)
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 53, true);
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, true);

	if (!flag2 && !flag && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 413, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 413, false);

	if (flag6 && !PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, true);

	if (flag4 || flag5 || flag9 || flag6 || flag8 || flag)
		if (flag7)
			PED::SET_PED_RESET_FLAG(uParam0->f_5, 185, true);
		else if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
			PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, true);

	if (!flag4 && !flag5 && !flag9 && !flag6 && !flag8 && !flag && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 330, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 330, false);

	if (!flag6 && PED::GET_PED_CONFIG_FLAG(uParam0->f_5, 331, true))
		PED::SET_PED_CONFIG_FLAG(uParam0->f_5, 331, false);

	return;
}

BOOL func_311(Ped pedParam0, Player plParam1, int iParam2) // Position - 0xC336 Hash - 0x5CE04B94 ^0xEC2FA7B8
{
	return func_414(pedParam0, ENTITY::GET_ENTITY_COORDS(plParam1, false, false), iParam2);
}

Ped func_312(int iParam0) // Position - 0xC34E Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_415(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

char* func_313(int iParam0, BOOL bParam1) // Position - 0xC37A Hash - 0x4B3AAF78 ^0x4D62984C
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
	
		case 1:
			return "COMP_JOHN";
	
		case 2:
			return "COMP_JAVIER";
	
		case 3:
			return "COMP_BILL";
	
		case 4:
			return "COMP_UNCLE";
	
		case 5:
			return "COMP_HOSEA";
	
		case 6:
			return "COMP_MICAH";
	
		case 7:
			return "COMP_CHARLES";
	
		case 8:
			return "COMP_SEAN";
	
		case 9:
			return "COMP_LENNY";
	
		case 10:
			return "COMP_KIERAN";
	
		case 11:
			return "COMP_SADIE";
	
		case 12:
			if (func_63(Global_1835011[59 /*74*/].f_1, true) || func_63(Global_1347702[1 /*49*/].f_15, true) || func_336(Global_1347702[1 /*49*/].f_15))
				return "COMP_RUFUS";
			else if (func_195(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), true))
				return "COMP_CAIN";
		
			return "COMP_DOG";
	
		case 13:
			return "COMP_ABIGAIL";
	
		case 14:
			return "COMP_JACK";
	
		case 15:
			return "COMP_MARY_BETH";
	
		case 16:
			return "COMP_MOLLY_OSHEA";
	
		case 17:
			return "COMP_PEARSON";
	
		case 18:
			return "COMP_STRAUSS";
	
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
	
		case 20:
			return "COMP_KAREN";
	
		case 21:
			if (bParam1)
				return "COMP_SWANSON_S";
			else
				return "COMP_SWANSON";
			break;
	
		case 22:
			return "COMP_TILLY";
	
		case 23:
			return "COMP_TRELAWNY";
	
		case 24:
			return "COMP_CLEET";
	
		case 25:
			return "COMP_JOE";
	
		case 26:
			return "COMP_EAGLE_FLIES";
	}

	return "";
}

void func_314(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0xC554 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_416(iParam0, &num, &num2);

	if (!func_417(iParam0, num, num2, bParam2))
		return;

	if (!func_418(iParam0, 1024))
		return;

	func_419(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

BOOL func_315(int iParam0) // Position - 0xC5B4 Hash - 0x87235E3F ^0xF4EE1F5A
{
	Ped riderOfMount;

	if (!func_56(iParam0))
		return false;

	if (func_67(func_128(iParam0), 0))
	{
		riderOfMount = PED::_GET_RIDER_OF_MOUNT(func_128(iParam0), false);
	
		if (riderOfMount == Global_35)
			return true;
	}

	return false;
}

BOOL func_316(int iParam0) // Position - 0xC5F2 Hash - 0x69F01193 ^0x69F01193
{
	switch (iParam0)
	{
		case 0:
			return !func_420(1);
	
		case 6:
			return !func_420(2);
	
		case 7:
			return !func_420(4);
	
		default:
		
	}

	return false;
}

char* func_317(int iParam0, BOOL bParam1) // Position - 0xC630 Hash - 0xF4669507 ^0x716CF390
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
	
		case 1:
			return "HORSE_NAME_GANG_JOHN";
	
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
	
		case 3:
			return "HORSE_NAME_GANG_BILL";
	
		case 4:
			if (bParam1)
				return "HORSE_NAME_GANG_UNCLE_ES";
			else
				return "HORSE_NAME_GANG_UNCLE";
			break;
	
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
	
		case 6:
			return "HORSE_NAME_GANG_MICAH";
	
		case 7:
			if (bParam1)
				return "HORSE_NAME_GANG_CHARLES_ES";
			else
				return "HORSE_NAME_GANG_CHARLES";
			break;
	
		case 8:
			return "HORSE_NAME_GANG_SEAN";
	
		case 9:
			return "HORSE_NAME_GANG_LENNY";
	
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
	
		case 11:
			if (bParam1)
				return "HORSE_NAME_GANG_SADIE_ES";
			else
				return "HORSE_NAME_GANG_SADIE";
			break;
	
		case 20:
			return "HORSE_NAME_GANG_KAREN";
	
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
	
		default:
			break;
	}

	return "";
}

void func_318(int iParam0, eBlipSprite ebsParam1, eBlipSprite ebsParam2, BOOL bParam3) // Position - 0xC754 Hash - 0xB6DD581E ^0x31BEA8BF
{
	int num;
	int num2;

	func_416(iParam0, &num, &num2);

	if (!func_417(iParam0, num, num2, bParam3))
		return;

	if (!func_418(iParam0, 1024))
		return;

	func_419(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	Global_1905944.f_22[iParam0 /*9*/].f_3[1 /*2*/] = ebsParam2;
	Global_1905944.f_22[iParam0 /*9*/].f_3[1 /*2*/].f_1 = 2;
	return;
}

void func_319(int iParam0) // Position - 0xC7D7 Hash - 0xB92D64E2 ^0xA2902A30
{
	if (!func_56(iParam0))
		return;

	if (Global_1360165[iParam0 /*1157*/].f_12 != Global_1360165[iParam0 /*1157*/].f_13 || func_4(iParam0, 36, true))
	{
		func_12(iParam0, 36, true);
		Global_1360165[iParam0 /*1157*/].f_12 = Global_1360165[iParam0 /*1157*/].f_13;
		func_421(iParam0, &(Global_1360165[iParam0 /*1157*/].f_2));
	}

	return;
}

int func_320(int iParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC845 Hash - 0x5E231BA9 ^0xFFD91D68
{
	Player animal;
	Ped pedInVehicleSeat;
	Ped activeAnimalOwner;
	int num;
	BOOL flag;

	if (!func_114(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return 0;

	if (bParam2)
		func_26(iParam0, 43, true);

	animal = func_128(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(animal) && animal != pedParam1 && PED::_GET_ACTIVE_ANIMAL_OWNER(animal) == func_112(iParam0))
	{
		PED::_CLEAR_ACTIVE_ANIMAL_OWNER(animal, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&animal);
	}

	pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(pedParam1, -1);

	if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && pedInVehicleSeat != func_112(iParam0))
		return 0;

	activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(pedParam1);

	if (ENTITY::DOES_ENTITY_EXIST(activeAnimalOwner))
	{
		num = func_422(activeAnimalOwner);
	
		if (func_114(num))
			if (num != iParam0)
				return 0;
		else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(activeAnimalOwner))
			return 0;
		else if (PED::_IS_MOUNT_SEAT_FREE(pedParam1, -1))
			PED::_CLEAR_ACTIVE_ANIMAL_OWNER(pedParam1, false);
		else
			return 0;
	}

	flag = func_67(func_112(iParam0), 0);

	if (bParam3 || flag)
	{
		if (flag)
		{
			PED::SET_PED_OWNS_ANIMAL(func_112(iParam0), pedParam1, false);
			PED::_0xED1C764997A86D5A(func_112(iParam0), pedParam1);
		}
	}
	else
	{
		func_26(iParam0, 38, true);
	}

	func_332(pedParam1, iParam0);
	Global_1360165[iParam0 /*1157*/].f_70 = pedParam1;
	Global_1360165[iParam0 /*1157*/].f_124 = 0;
	return 1;
}

BOOL func_321(var uParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Ped pedParam7, int iParam8) // Position - 0xC996 Hash - 0x49E5DBD9 ^0xC61A93A3
{
	Vector3 vector;
	var outPosition;
	int num;
	float value;
	var gameplayCamRot;
	BOOL flag;
	int num2;

	num = 12;

	if (_IS_NULL_VECTOR(uParam4))
	{
		gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		value = gameplayCamRot.f_2;
	}
	else
	{
		value = func_423(uParam4, vParam1, 1);
	}

	value = value + (BUILTIN::TO_FLOAT(uParam0->f_2) * 10f * uParam0->f_2 % 2 == 0 ? 1f : -1f);
	vector = { vParam1 + ({ 0f, -BUILTIN::COS(value), BUILTIN::SIN(value) } * { (80f + 40f) * 0.5f, (80f + 40f) * 0.5f, (80f + 40f) * 0.5f } * { iParam8, iParam8, iParam8 }) };

	if (uParam0->f_2 > 3)
		num = 13;

	switch (func_425(uParam0))
	{
		case 0:
			func_426(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_427(uParam0, 1);
			break;
	
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vector, &outPosition, 1, 1077936128, 0))
			{
				if (func_428(outPosition, vParam1, false, false))
				{
					func_426(uParam0, outPosition);
				
					if (uParam0->f_12)
						func_427(uParam0, 3);
					else
						func_427(uParam0, 4);
				}
				else
				{
					func_427(uParam0, 2);
				}
			}
			else
			{
				func_427(uParam0, 2);
			}
			break;
	
		case 2:
			flag = false;
		
			if (func_429(vector, &(uParam0->f_3), &flag, num, false, 1127481344, 1101004800, -1138501878, -1138501878, 0))
				if (func_428(func_430(uParam0), vParam1, true, true))
					if (uParam0->f_12)
						func_427(uParam0, 3);
					else
						func_427(uParam0, 4);
				else
					func_427(uParam0, 5);
			else if (flag)
				func_427(uParam0, 5);
			break;
	
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::NAVMESH_REQUEST_PATH(pedParam7, func_430(uParam0), vParam1, 23);
			
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14 = uParam0->f_14 + 1;
					uParam0->f_13 = 0;
				
					if (uParam0->f_14 >= 50)
						func_427(uParam0, 5);
				}
			}
			else
			{
				switch (PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(uParam0->f_13))
				{
					case 0:
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						func_427(uParam0, 5);
						break;
				
					case 1:
						num2 = PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(uParam0->f_13);
					
						if (func_431(num2, 2) && num != 13)
							func_427(uParam0, 5);
						else
							func_427(uParam0, 4);
					
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						break;
				
					case 2:
						break;
				}
			}
			break;
	
		case 4:
			uParam0->f_2 = 0;
			func_177(&(uParam0->f_3.f_3), 1, 1, false);
			func_427(uParam0, 0);
			return true;
	
		case 5:
			uParam0->f_2 = uParam0->f_2 + 1;
		
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
		
			func_427(uParam0, 0);
			break;
	}

	return false;
}

void func_322(Ped pedParam0, Hash hParam1, Hash hParam2) // Position - 0xCC66 Hash - 0x7990926B ^0xF8CB7274
{
	TASK::TASK_WHISTLE_ANIM(pedParam0, hParam1, hParam2);
	return;
}

BOOL func_323(Ped pedParam0, Any* panParam1) // Position - 0xCC78 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

Vector3 func_324(int iParam0) // Position - 0xCC88 Hash - 0x568B93B7 ^0x568B93B7
{
	var unk;
	int i;

	unk = 3;
	unk[0 /*3*/] = { 0f, 0f, 0f };
	unk[1 /*3*/] = { 0f, -4.5f, 0f };
	unk[2 /*3*/] = { 3.5f, 2.5f, 0f };

	for (i = 0; i < func_293(true); i = i + 1)
	{
		if (Global_1359489[i] == iParam0)
			return unk[i /*3*/];
	}

	return 0f, 0f, 0f;
}

BOOL func_325(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCCF0 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_326(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0xCD8E Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

float func_327(Entity eParam0, Player plParam1, BOOL bParam2, BOOL bParam3) // Position - 0xCDB7 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(eParam0, false, false), ENTITY::GET_ENTITY_COORDS(plParam1, false, false), bParam2);
}

BOOL func_328(Player plParam0) // Position - 0xCDFF Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(plParam0) || PED::IS_PED_INJURED(plParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(plParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

int func_329(Player plParam0) // Position - 0xCE41 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (plParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (plParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

int func_330(Ped pedParam0) // Position - 0xCE86 Hash - 0xDDA5F826 ^0xD483321F
{
	int num;
	Ped activeAnimalOwner;

	num = -1;

	if (func_67(pedParam0, 0))
	{
		activeAnimalOwner = PED::_GET_ACTIVE_ANIMAL_OWNER(pedParam0);
		num = func_422(activeAnimalOwner);
	}

	return num;
}

BOOL func_331(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xCEAD Hash - 0x757EBDD2 ^0x2E56D0BB
{
	Player player;
	int num;

	if (!func_56(iParam0))
		return false;

	player = func_128(iParam0);

	if (func_67(Global_1360165[iParam0 /*1157*/].f_70, 0))
	{
		if (!func_21(iParam0))
		{
			if (bParam2)
				if (!func_432(iParam0, player, true))
					return false;
			else if (!func_433(iParam0, player))
				return false;
		
			if (Global_1360165[iParam0 /*1157*/].f_70.f_11 != SCRIPTS::GET_ID_OF_THIS_THREAD())
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(player))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(player, true, true);
			
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(player, 0);
				func_26(iParam0, 39, true);
				func_30(iParam0, 8, true);
				func_30(iParam0, 64, false);
				func_434(iParam0, false, false, true);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
		
			num = iParam3;
			num.f_1 = iParam4;
			num.f_2 = iParam5;
		
			if (!_IS_NULL_VECTOR(num) && bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(player) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(player, -1))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(player))
						if (PED::IS_PED_USING_ANY_SCENARIO(player))
							TASK::CLEAR_PED_TASKS(player, true, false);
						else
							ENTITY::DETACH_ENTITY(player, true, true);
				
					func_435(player, num, iParam6, 2, 1073741824);
					return true;
				}
				else
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(player, 0) && !TASK::IS_PED_EXITING_SCENARIO(player, true))
						TASK::CLEAR_PED_TASKS(player, true, false);
				
					return false;
				}
			}
		
			return true;
		}
		else if (bParam1)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(player, true, true);
			func_26(iParam0, 39, true);
			func_30(iParam0, 8, true);
			func_30(iParam0, 64, false);
			func_434(iParam0, false, false, true);
			Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return true;
		}
	}

	return false;
}

void func_332(Ped pedParam0, int iParam1) // Position - 0xD062 Hash - 0xBC8691CC ^0x83445724
{
	DECORATOR::DECOR_SET_BOOL(pedParam0, "HorseCompanion", true);
	func_437(pedParam0, func_436(iParam1));

	if (func_144(iParam1, 8))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(pedParam0, 2);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 412, false);
	}

	if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_112(iParam1), pedParam0, false);
		PED::_0xED1C764997A86D5A(func_112(iParam1), pedParam0);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 367, true);
	}
	else
	{
		func_26(iParam1, 38, true);
	}

	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam0, joaat("rel_gang_dutchs_horses"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, joaat("rel_gang_dutchs_horses"));

	if (Global_40.f_4283 == 0)
		PED::SET_PED_CONFIG_FLAG(pedParam0, 172, true);

	PED::SET_PED_CONFIG_FLAG(pedParam0, 324, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 331, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 471, true);
	PED::SET_PED_CONFIG_FLAG(pedParam0, 442, true);

	if (func_144(iParam1, 4096))
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 1, false);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 54, false);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 121, false);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 302, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(pedParam0, 1, true);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 54, true);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 121, true);
		PED::SET_PED_CONFIG_FLAG(pedParam0, 302, true);
	}

	PED::SET_PED_LASSO_HOGTIE_FLAG(pedParam0, 2, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(pedParam0, 3, false);
	func_434(iParam1, func_144(iParam1, 8192), func_144(iParam1, 16384), true);
	return;
}

int func_333(int iParam0, BOOL bParam1) // Position - 0xD1C2 Hash - 0x710FE6A ^0xFD7EC211
{
	int i;
	Ped playerPed;

	if (!func_114(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]))
		return 0;

	if (func_18(iParam0, false))
	{
		func_438(iParam0, true);
		return 1;
	}

	if (!func_193())
		return 0;

	if (bParam1)
		func_168(iParam0, false, "Adding to Group");

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489[i] == -1)
		{
			Global_1359489[i] = iParam0;
			break;
		}
	}

	func_438(iParam0, true);
	Global_1359489.f_15 = func_293(true);
	func_26(iParam0, 32, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("rel_companion_group"));
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1360165[iParam0 /*1157*/], BF_0xD36BCE94, true);
	PED::_SET_PED_COMBAT_BEHAVIOUR(Global_1360165[iParam0 /*1157*/], -1972074710);
	PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 152, true);

	if (COMPANION::_GET_COMPANION_ACTIVITY(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())) != 234527101)
	{
		COMPANION::_0x0DE02DA3C0F66955(func_112(iParam0), COMPANION::_GET_COMPANION_ACTIVITY(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())));
		COMPANION::_0x61BDA07407754A5C(func_112(iParam0), Global_1391438.f_414.f_37);
	}

	PED::_0x89E59DBD15E21177(func_37(), 0);
	func_439(iParam0);
	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	playerPed.f_12 = 3;
	playerPed.f_3 = Global_1360165[iParam0 /*1157*/];
	playerPed.f_7 = func_268();
	playerPed.f_8 = 0;
	playerPed.f_11 = 10;
	playerPed.f_14 = Global_1360165[iParam0 /*1157*/];
	MISC::_CREATE_AI_MEMORY(&playerPed, 17);
	return 1;
}

BOOL func_334(int iParam0) // Position - 0xD34F Hash - 0x8232DC08 ^0x5AF1E79C
{
	int num;
	int offset;

	func_440(iParam0, &num, &offset);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[num], offset);
}

BOOL func_335(int iParam0, int iParam1, int iParam2) // Position - 0xD373 Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

BOOL func_336(int iParam0) // Position - 0xD41C Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_218(iParam0);
	return num == 3 || num == 4;
}

int func_337(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xD43A Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

BOOL func_338(Ped pedParam0, Hash hParam1) // Position - 0xD462 Hash - 0xA54F3032 ^0xD53605F1
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

BOOL func_339(Ped pedParam0, Hash hParam1) // Position - 0xD4B3 Hash - 0xA54F3032 ^0xD53605F1
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_223(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_340(Ped pedParam0) // Position - 0xD525 Hash - 0x446F1BDD ^0x4128436B
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0xD543 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_441(*iParam0);
	i = func_442(*iParam0);
	num2 = func_443(*iParam0);
	j = func_350(*iParam0);
	k = func_349(*iParam0);
	l = func_444(*iParam0);

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

	for (m = func_445(i, num); num2 > m; m = func_445(i, num))
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

	func_446(iParam0, l, k, j, num2, i, num);
	return;
}

void func_342(var uParam0, int iParam1) // Position - 0xD6CB Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_343(var uParam0, int iParam1) // Position - 0xD706 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_344(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xD73F Hash - 0x2BEE335D ^0x2BEE335D
{
	func_348(func_81(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD75D Hash - 0x2AC22A00 ^0x2AC22A00
{
	BOOL flag;
	int num;

	if (!func_56(iParam0))
		return;

	flag = iParam2 > 0 || iParam3 > 0 || iParam4 > 0;

	if (iParam2 < 0)
		iParam2 = 0;

	if (iParam3 < 0)
		iParam3 = 0;

	if (iParam4 < 0)
		iParam4 = 0;

	num = func_81();

	if (flag)
	{
		func_341(&num, 0, iParam2, iParam3, iParam4, 0, 0, false);
	
		if (!func_347(num))
			return;
	}

	if (bParam6)
	{
		if (flag)
		{
			Global_1360165[iParam0 /*1157*/].f_1152 = iParam1;
			Global_1360165[iParam0 /*1157*/].f_1153 = num;
		}
	
		return;
	}

	if (flag)
	{
		Global_40.f_4942[iParam0 /*60*/].f_42 = iParam1;
		Global_40.f_4942[iParam0 /*60*/].f_43 = num;
	}
	else
	{
		Global_40.f_4942[iParam0 /*60*/].f_44 = iParam1;
	
		if (bParam5)
		{
			Global_40.f_4942[iParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[iParam0 /*60*/].f_43 = -15;
		}
	}

	return;
}

int func_346(int iParam0) // Position - 0xD84B Hash - 0x439CE4D4 ^0xB62384D8
{
	if (!func_56(iParam0))
		return -1;

	return Global_40.f_4942[iParam0 /*60*/].f_42;
}

BOOL func_347(int iParam0) // Position - 0xD86D Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_444(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_349(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_350(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_441(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_442(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_443(iParam0);

	if (num6 < 1 || num6 > func_445(num5, num4))
		return false;

	return true;
}

void func_348(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xD949 Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_412(iParam0, iParam1, true))
	{
		num = func_442(iParam1);
		num2 = func_441(iParam0);
		num3 = func_441(iParam0) - func_441(iParam1);
		num4 = func_442(iParam0) - func_442(iParam1);
		num5 = func_443(iParam0) - func_443(iParam1);
		num6 = func_350(iParam0) - func_350(iParam1);
		num7 = func_349(iParam0) - func_349(iParam1);
		num8 = func_444(iParam0) - func_444(iParam1);
	}
	else
	{
		num = func_442(iParam0);
		num2 = func_441(iParam1);
		num3 = func_441(iParam1) - func_441(iParam0);
		num4 = func_442(iParam1) - func_442(iParam0);
		num5 = func_443(iParam1) - func_443(iParam0);
		num6 = func_350(iParam1) - func_350(iParam0);
		num7 = func_349(iParam1) - func_349(iParam0);
		num8 = func_444(iParam1) - func_444(iParam0);
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
	
		num5 = num5 + func_445(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_447(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

int func_349(int iParam0) // Position - 0xDB4B Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_350(int iParam0) // Position - 0xDB5D Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

BOOL func_351(int iParam0) // Position - 0xDB70 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

Player func_352(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10, int iParam11, int iParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17) // Position - 0xDB8D Hash - 0x9338D9C0 ^0x2F425F02
{
	Player player;

	if (!func_56(iParam1))
		return 0;

	player = func_128(iParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(player) || !func_67(player, 0) || bParam3 && !func_129(iParam1))
	{
		if (bParam2)
		{
			if (func_131(iParam1, true) != 0)
			{
				player = func_448(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, bParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(player) && func_67(player, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_449(iParam1, player);
		func_434(iParam1, bParam13, bParam14, true);
		return player;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}

	return 0;
}

BOOL func_353() // Position - 0xDC64 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_354(int iParam0) // Position - 0xDC72 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_450(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_355(int iParam0, var uParam1, var uParam2) // Position - 0xDCB3 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_451(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_356(var uParam0, int iParam1) // Position - 0xDCD5 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_357(var uParam0, int iParam1) // Position - 0xDCE6 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_358(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0xDCFB Hash - 0xF2D31527 ^0xF2D31527
{
	int num;

	if (!func_114(iParam0))
		return 0;

	func_452(iParam0);
	num = -1;

	if (!func_453(iParam0, hParam1, &num, true, iParam2, iParam3))
		return 0;

	!func_364(iParam0, hParam1);
	return 1;
}

void func_359(var uParam0, int iParam1) // Position - 0xDD3E Hash - 0x53A96DDB ^0xF8B54E
{
	uParam0->f_4 = uParam0->f_4 || iParam1;
	return;
}

void func_360(var uParam0, int iParam1) // Position - 0xDD51 Hash - 0xA4EAD31F ^0x682E29B2
{
	uParam0->f_4 = uParam0->f_4 - uParam0->f_4 && iParam1;
	return;
}

void func_361(int iParam0) // Position - 0xDD69 Hash - 0xA3F1079A ^0xFE58BB91
{
	if (func_114(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_112(iParam0)))
		{
			func_99(iParam0, 67108864, true);
			func_12(iParam0, 19, true);
		}
	}

	return;
}

BOOL func_362(int iParam0) // Position - 0xDD9C Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_363(int iParam0) // Position - 0xDDAF Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_364(int iParam0, Hash hParam1) // Position - 0xDDD9 Hash - 0x8531031E ^0x8531031E
{
	Ped ped;
	int num;
	var unk;

	if (!func_56(iParam0))
		return 0;

	if (func_454(iParam0, hParam1))
		return 0;

	ped = func_112(iParam0);

	if (!func_67(ped, 0))
		return 0;

	num = -1;

	if (!func_135(iParam0, hParam1, &num, &unk))
		return 0;

	func_301(iParam0, hParam1);

	if (!func_455(iParam0, 512, false))
		func_456(iParam0, 512, false, -1);

	if (PED::_0x1E017404784AA6A3(ped, hParam1))
	{
		func_409(iParam0, hParam1, true);
		return 1;
	}

	return 0;
}

void func_365(int iParam0, BOOL bParam1) // Position - 0xDE6D Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_56(iParam0))
		return;

	ped = func_112(iParam0);
	func_457(ped);
	func_26(iParam0, 60, true);

	if (bParam1)
		func_458(iParam0);

	return;
}

void func_366(int iParam0, BOOL bParam1) // Position - 0xDEA4 Hash - 0x14E0BC6D ^0x14E0BC6D
{
	Ped ped;

	if (!func_56(iParam0))
		return;

	ped = func_112(iParam0);
	func_459(ped);
	func_12(iParam0, 60, true);

	if (bParam1)
		func_460(iParam0);

	return;
}

void func_367(int iParam0, BOOL bParam1) // Position - 0xDEDB Hash - 0x1364490 ^0x1364490
{
	Ped ped;

	if (!func_56(iParam0))
		return;

	ped = func_112(iParam0);
	func_461(ped);
	func_12(iParam0, 61, true);

	if (bParam1)
		func_462(iParam0);

	return;
}

void func_368(int iParam0, BOOL bParam1, Ped pedParam2) // Position - 0xDF12 Hash - 0xD8E274A1 ^0xE4E6335F
{
	Ped ped;

	if (!func_114(iParam0))
		return;

	if (!func_463(iParam0))
		return;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return;

	if (bParam1 && ENTITY::IS_ENTITY_DEAD(pedParam2))
		return;

	ped = func_112(iParam0);

	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(pedParam2, 155, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, false);
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, true);
	}

	PED::SET_PED_CONFIG_FLAG(ped, 152, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 154, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 156, bParam1);
	PED::SET_PED_CONFIG_FLAG(ped, 25, bParam1);
	PED::SET_PED_COMBAT_ATTRIBUTES(ped, BF_0x07A6E531, bParam1);

	if (bParam1)
	{
		COMPANION::_0xD428C3F92FC3F6F8(ped, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0));
		PED::_SET_PED_COMBAT_BEHAVIOUR(ped, -1972074710);
		PED::_SET_PED_COMBAT_BEHAVIOUR(Global_35, -1972074710);
	}
	else
	{
		PED::_0x9A4AC116CC1EEE14(ped);
	
		if (!func_465())
			PED::_0x9A4AC116CC1EEE14(Global_35);
	}

	return;
}

void func_369(Player plParam0) // Position - 0xDFF4 Hash - 0x26D51EE5 ^0xA25A14D9
{
	if (func_87(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, false);
	return;
}

void func_370(Ped pedParam0) // Position - 0xE02A Hash - 0x6EDA2DDB ^0x823A87C9
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	if (func_125(14))
		return;

	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
		return;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
		return;

	if (!ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, Global_1357549.f_3[4], true, 0))
		return;

	PED::SET_RAGDOLL_BLOCKING_FLAGS(pedParam0, 909522);
	return;
}

void func_371(int iParam0) // Position - 0xE0A9 Hash - 0xB1E2E498 ^0x545B1681
{
	Player player;

	if (!func_56(iParam0))
		return;

	if (func_131(iParam0, false) == 0)
		return;

	player = func_128(iParam0);
	func_369(player);
	func_30(iParam0, 16384, true);
	return;
}

Ped func_372(int iParam0) // Position - 0xE0E4 Hash - 0xFBADD85B ^0xFBADD85B
{
	if (func_114(iParam0))
		return Global_1360165[iParam0 /*1157*/];

	return 0;
}

int func_373(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0xE102 Hash - 0x38F28707 ^0x73B0255B
{
	int i;

	for (i = 0; i < 150; i = i + 1)
	{
		if (Global_1888801[i /*35*/].f_20 == iParam3)
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[i /*35*/].f_3))
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[i /*35*/].f_3, vParam0))
					return 1;
	}

	return 0;
}

BOOL func_374(int iParam0) // Position - 0xE157 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1935630 && iParam0 != false;
}

BOOL func_375(int iParam0) // Position - 0xE168 Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1898438;
}

int func_376(int iParam0) // Position - 0xE17C Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

Vector3 func_377() // Position - 0xE190 Hash - 0xEE6F6785 ^0xEE6F6785
{
	if (func_380(70))
		return -1634.2521f, -1358.5771f, 83.9077f;

	if (func_380(73))
		return -1665.4187f, -1346.2577f, 84.11175f;

	return -1641.1001f, -1359.9785f, 83.4932f;
}

BOOL func_378(int iParam0) // Position - 0xE1DD Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_379(BOOL bParam0) // Position - 0xE21B Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_380(int iParam0) // Position - 0xE22E Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_63(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

int func_381(int iParam0) // Position - 0xE28D Hash - 0xBA965109 ^0xA95E75D8
{
	switch (iParam0)
	{
		case 0:
			return joaat("HASH_COMPANION_DUTCH");
	
		case 1:
			return joaat("HASH_COMPANION_JOHN");
	
		case 2:
			return joaat("HASH_COMPANION_JAVIER");
	
		case 3:
			return joaat("HASH_COMPANION_BILL");
	
		case 4:
			return joaat("HASH_COMPANION_UNCLE");
	
		case 5:
			return joaat("HASH_COMPANION_HOSEA");
	
		case 6:
			return joaat("HASH_COMPANION_MICAH");
	
		case 7:
			return joaat("HASH_COMPANION_CHARLES");
	
		case 8:
			return joaat("HASH_COMPANION_SEAN");
	
		case 9:
			return joaat("HASH_COMPANION_LENNY");
	
		case 10:
			return joaat("HASH_COMPANION_ODRISCOLL");
	
		case 11:
			return joaat("HASH_COMPANION_SADIE_ADLER");
	
		case 12:
			return joaat("HASH_COMPANION_DOG");
	
		case 13:
			return joaat("HASH_COMPANION_ABIGAIL");
	
		case 14:
			return joaat("HASH_COMPANION_JACK");
	
		case 15:
			return joaat("HASH_COMPANION_MARY_BETH");
	
		case 16:
			return joaat("HASH_COMPANION_MOLLY_OSHEA");
	
		case 17:
			return joaat("HASH_COMPANION_PEARSON");
	
		case 18:
			return joaat("HASH_COMPANION_STRAUSS");
	
		case 19:
			return joaat("HASH_COMPANION_SUSAN_GRIMSHAW");
	
		case 20:
			return joaat("HASH_COMPANION_KAREN");
	
		case 21:
			return joaat("HASH_COMPANION_SWANSON");
	
		case 22:
			return joaat("HASH_COMPANION_TILLY");
	
		case 23:
			return joaat("HASH_COMPANION_TRELAWNY");
	
		case 24:
			return joaat("HASH_COMPANION_CLEET");
	
		case 25:
			return joaat("HASH_COMPANION_JOE");
	
		case 26:
			return 1271180667;
	}

	return -1;
}

int func_382(int iParam0) // Position - 0xE469 Hash - 0x884C9759 ^0xB5C6D6F7
{
	var unk;
	var unk6;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;

	if (func_466(unk, 2065727156, &unk6, false))
		return func_468(func_467(unk6));

	return 0;
}

int func_383(int iParam0, var uParam1) // Position - 0xE4A6 Hash - 0x4EFA610B ^0x97F8DC
{
	var unk;

	unk = Global_1357549.f_576;

	if (*uParam1 != 0)
		unk.f_1 = *uParam1;
	else
		unk.f_1 = Global_1357549.f_577;

	unk.f_2 = 1032438694;
	unk.f_3 = iParam0;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		return unk.f_1;

	return 0;
}

int func_384(int iParam0) // Position - 0xE4F7 Hash - 0xFD4E6622 ^0x2788DCD0
{
	var unk;
	int num;

	unk = Global_1357549.f_576;
	unk.f_1 = 0;
	unk.f_3 = iParam0;

	if (func_466(unk, 2065727156, &num, false))
		return func_467(num);

	return -1;
}

int func_385(int iParam0) // Position - 0xE530 Hash - 0x84838E68 ^0x84838E68
{
	switch (iParam0)
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

	iParam0 != -1;
	return -1;
}

char* func_386(int iParam0) // Position - 0xE5B3 Hash - 0x5FF3687D ^0x59422909
{
	if (!func_261(iParam0))
		return "Wilderness";

	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
	
		case 1:
			return "MacombsEnd";
	
		case 2:
			return "MerkinsWaller";
	
		case 3:
			return "Lagras";
	
		case 4:
			return "Lakay";
	
		case 5:
			return "SaintDenis";
	
		case 6:
			return "OrangePlantation";
	
		case 7:
			return "SerialKiller";
	
		case 8:
			return "Serendipity";
	
		case 9:
			return "ShadyBelle";
	
		case 10:
			return "SiltwaterStrand";
	
		case 11:
			return "AppleseedTimberCo";
	
		case 12:
			return "BerylsDream";
	
		case 13:
			return "BigValleyTrapper";
	
		case 14:
			return "DakotaRiverTrapper";
	
		case 15:
			return "FortRiggsHoldingCamp";
	
		case 16:
			return "HangingDogRanch";
	
		case 17:
			return "LoneMuleStead";
	
		case 18:
			return "MissingHusband";
	
		case 19:
			return "MontoRest";
	
		case 20:
			return "OwanjilaDam";
	
		case 21:
			return "PaintedSky";
	
		case 22:
			return "PronghornRanch";
	
		case 23:
			return "RiggsStation";
	
		case 24:
			return "BigvalleyShack";
	
		case 25:
			return "ShepherdsRise";
	
		case 26:
			return "Strawberry";
	
		case 27:
			return "ValleyView";
	
		case 28:
			return "WallaceStation";
	
		case 29:
			return "WatsonsCabin";
	
		case 30:
			return "Canebreak Manor";
	
		case 31:
			return "Copperhead";
	
		case 32:
			return "SisikaPenitentiary";
	
		case 33:
			return "BacchuBridge";
	
		case 34:
			return "DinoLady";
	
		case 35:
			return "OldFortWallace";
	
		case 36:
			return "SixPointCabin";
	
		case 37:
			return "BeechersHope";
	
		case 38:
			return "Blackwater";
	
		case 39:
			return "QuakersCove";
	
		case 40:
			return "AdlerRanch";
	
		case 41:
			return "DeadRival";
	
		case 42:
			return "ChezPorter";
	
		case 43:
			return "Colter";
	
		case 44:
			return "FrozenExplorer";
	
		case 45:
			return "MillesaniClaim";
	
		case 46:
			return "MountainMan";
	
		case 47:
			return "StarvingChildren";
	
		case 48:
			return "TempestRim";
	
		case 49:
			return "WinterMiningTown";
	
		case 50:
			return "CalumetRavine";
	
		case 51:
			return "CivilWarBride";
	
		case 52:
			return "Cohutta";
	
		case 53:
			return "GunFight";
	
		case 54:
			return "TheLoft";
	
		case 55:
			return "Veteran";
	
		case 56:
			return "Wapiti";
	
		case 57:
			return "AguasDulces";
	
		case 58:
			return "GuarmaCamp";
	
		case 59:
			return "CincoTorres";
	
		case 60:
			return "LaCapilla";
	
		case 61:
			return "Manicato";
	
		case 62:
			return "Abandoned Mill";
	
		case 63:
			return "BeechersC";
	
		case 64:
			return "CarmodyDell";
	
		case 65:
			return "CornwallKerosene";
	
		case 66:
			return "CropFarm";
	
		case 67:
			return "CumberlandFalls";
	
		case 68:
			return "DownsRanch";
	
		case 69:
			return "EmeraldRanch";
	
		case 70:
			return "GrangersHoggery";
	
		case 71:
			return "HorseshoeOverlook";
	
		case 72:
			return "LarnedSod";
	
		case 73:
			return "LoonyCult";
	
		case 74:
			return "LuckysCabin";
	
		case 75:
			return "SwansonsStation";
	
		case 76:
			return "Valentine";
	
		case 77:
			return "AberdeenPigFarm";
	
		case 78:
			return "Annesburg";
	
		case 79:
			return "BeaverHollow";
	
		case 80:
			return "BlackBalsamRise";
	
		case 81:
			return "BrandywineDrop";
	
		case 82:
			return "ButcherCreek";
	
		case 83:
			return "Doverhill";
	
		case 84:
			return "HappyFamily";
	
		case 85:
			return "Isolationist";
	
		case 86:
			return "MacLeansHouse";
	
		case 87:
			return "MossyFlats";
	
		case 88:
			return "RoanokeValley";
	
		case 89:
			return "RockySeven";
	
		case 90:
			return "RoanokeTrapper";
	
		case 91:
			return "VanHornMansion";
	
		case 92:
			return "VanHornTradingPost";
	
		case 93:
			return "BraithewaiteManor";
	
		case 94:
			return "BulgerGlade";
	
		case 95:
			return "CaligaHall";
	
		case 96:
			return "CatfishJacksons";
	
		case 97:
			return "ClemensCove";
	
		case 98:
			return "ClemensPoint";
	
		case 99:
			return "CompsonsStead";
	
		case 100:
			return "Dairy Farm";
	
		case 101:
			return "ScarletMeadowsHorseShop";
	
		case 102:
			return "LonniesShack";
	
		case 103:
			return "LoveTriangle";
	
		case 104:
			return "Radleys Pasture";
	
		case 105:
			return "Rhodes";
	
		case 106:
			return "SlavePen";
	
		case 107:
			return "AuroraBasinShack";
	
		case 108:
			return "DeadSettler";
	
		case 109:
			return "Cochinay";
	
		case 110:
			return "ManzanitaPost";
	
		case 111:
			return "PacificUnionRailroad";
	
		case 112:
			return "TannersReach";
	
		case 113:
			return "TallTreesTrapper";
	
		case 114:
			return "Gaptooth Breach";
	
		case 115:
			return "Tumbleweed";
	
		case 116:
			return "Rathskeller Fork";
	
		case 117:
			return "BenedictPoint";
	
		case 118:
			return "FortMercer";
	
		case 119:
			return "Plainview";
	
		case 120:
			return "Armadillo" /*Armadillo Ave*/;
	
		case 121:
			return "CootsChapel";
	
		case 122:
			return "DonJulioHouse";
	
		case 123:
			return "RileysCharge";
	
		case 124:
			return "RidgewoodFarm";
	
		case 125:
			return "TwinRocks";
	
		case 126:
			return "MacFarlanesRanch";
	
		case 127:
			return "ThievesLanding";
	
		case 128:
			return "CentralUnionRRCamp";
	
		case 129:
			return "SolomonsFolly";
	
		default:
		
	}

	return "Wilderness";
}

BOOL func_387(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, BOOL bParam7) // Position - 0xEC72 Hash - 0x75EEBFEF ^0xA888E94A
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

BOOL func_388(Entity eParam0, int iParam1) // Position - 0xEC98 Hash - 0x2B9980B1 ^0x6B5229AE
{
	var entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(eParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, true, false) };
		return func_469(entityCoords, iParam1);
	}

	return false;
}

BOOL func_389(var uParam0, Entity eParam1, int iParam2) // Position - 0xECC4 Hash - 0xAB4E57C2 ^0x18DFB343
{
	if (iParam2 < 0 || iParam2 >= 3)
		return false;

	if (!Global_1359489.f_63.f_242[iParam2 /*18*/].f_15)
		return false;

	if (func_470(uParam0, eParam1, Global_1359489.f_63.f_242[iParam2 /*18*/].f_2))
		return true;

	return false;
}

int func_390(Entity eParam0) // Position - 0xED17 Hash - 0x4D6C3E79 ^0xC066DEAA
{
	var entityCoords;
	int i;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return -1;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, true, false) };

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_1359489.f_63.f_242[i /*18*/].f_15)
			if (Global_1359489.f_63.f_242[i /*18*/].f_8 < Global_1359489.f_63.f_242[i /*18*/].f_7)
				if (Global_1359489.f_63.f_242[i /*18*/].f_14 != 3)
					if (func_469(entityCoords, i))
						return i;
	}

	return -1;
}

void func_391(var uParam0) // Position - 0xED9F Hash - 0x3F9B0B8A ^0x1F9EDB21
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	return;
}

void func_392(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, BOOL bParam14, var uParam15) // Position - 0xEDBA Hash - 0x95EB9E8F ^0x95EB9E8F
{
	var unk;
	var unk11;
	int num;
	int num2;
	int i;
	var unk21;
	int num3;

	if (iParam0 <= -1)
		return;

	unk = 3;
	unk11 = 3;

	if (bParam14)
	{
		num = func_471(iParam0, iParam1);
		func_472(&unk, &unk11, num, fParam3, uParam6, iParam9, iParam10, iParam11);
	}

	num2 = iParam2;

	for (i = 0; i < 3; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk21, "", 32);
		num3 = 0;
	
		if (num2 > 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk21, func_473(iParam0, 3), 32);
			num2 = num2 - 1;
			num3 = 1;
		}
	
		func_474(iParam0, func_402(iParam0), num3, bParam14, &unk21, unk[i /*3*/], unk11[i /*3*/], uParam6, i, 0, -1082130432, fParam12, iParam13, uParam15);
	}

	return;
}

int func_393(var uParam0) // Position - 0xEE6B Hash - 0x4FCA5F8E ^0x1E0669AD
{
	int num;
	int i;

	if (num > -1)
	{
		for (i = 0; i < 3; i = i + 1)
		{
			if (PED::GET_PED_AS_GROUP_MEMBER(func_37(), i) == uParam0->f_5)
			{
				uParam0->f_108 = i;
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_394(int iParam0) // Position - 0xEEA7 Hash - 0x4436E141 ^0x15714C8A
{
	if (iParam0 < 0 || iParam0 > 10)
		return false;

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
		return false;

	return Global_1359489.f_63[iParam0 /*24*/].f_16;
}

struct<4> func_395(int iParam0) // Position - 0xEEE3 Hash - 0x8C5322FC ^0x819E966D
{
	var unk;
	var unk5;

	if (iParam0 < 0 || iParam0 > 10)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "ERR", 32);
		return unk;
	}

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk5, "ERR", 32);
		return unk5;
	}

	return Global_1359489.f_63[iParam0 /*24*/].f_19;
}

float func_396(int iParam0) // Position - 0xEF37 Hash - 0x4DA4F498 ^0x22494922
{
	if (iParam0 < 0 || iParam0 >= 10)
		return 0f;

	if (Global_1359489.f_63[iParam0 /*24*/] == 0)
		return 0f;

	return Global_1359489.f_63[iParam0 /*24*/].f_13;
}

BOOL func_397(Entity eParam0, int iParam1) // Position - 0xEF73 Hash - 0x8DA599A ^0x6A9A782
{
	if (iParam1 == 7)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[iParam1]))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(eParam0, Global_1357549.f_3[iParam1], true, 0);
}

int func_398(int iParam0) // Position - 0xEFC8 Hash - 0x16255F42 ^0x16255F42
{
	int num;

	num = 250;

	switch (iParam0)
	{
		case 0:
			num = 100;
			break;
	
		case 1:
			num = 150;
			break;
	
		case 2:
			num = 150;
			break;
	
		case 3:
			num = 200;
			break;
	
		case 5:
			num = 100;
			break;
	
		case 6:
			num = 100;
			break;
	
		case 7:
			num = 200;
			break;
	
		case 8:
			num = 200;
			break;
	}

	return num * num;
}

Ped func_399(Ped pedParam0) // Position - 0xF049 Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

Vector3 func_400(int iParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4, Vector3 vParam5, var uParam6, var uParam7, float fParam8) // Position - 0xF065 Hash - 0x76174975 ^0x58FD6AB8
{
	float num;
	var unk;
	var unk4;
	float num2;
	float num3;
	int i;
	float num4;

	num = BUILTIN::VDIST(vParam2, vParam5);
	unk = { vParam2 };
	unk4 = { vParam2 - vParam5 };
	unk4.f_2 = 0f;
	unk4 = { func_176(unk4) };

	if (num > fParam8)
		unk = { vParam5 + ({ fParam8, fParam8, fParam8 } * unk4) };

	num2 = 1f;
	num3 = func_475(num2 / fParam8);

	for (i = 0; i < 5; i = i + 1)
	{
		num4 = fParam8 * func_401(func_476(iParam0, iParam1, vParam5, unk4));
	
		if (num4 < num2)
			unk = { func_477(vParam5, unk, num3) };
		else
			return unk;
	}

	return unk;
}

float func_401(float fParam0) // Position - 0xF11B Hash - 0xC531A009 ^0xC531A009
{
	return fParam0 * 0.017453292f;
}

var func_402(int iParam0) // Position - 0xF12B Hash - 0xF6356004 ^0x7697E768
{
	int endRange;
	var unk;

	unk = 10;

	switch (iParam0)
	{
		case 0:
			endRange = 3;
			unk[0] = joaat("world_human_stare_stoic");
			unk[1] = joaat("world_human_smoke");
			unk[2] = joaat("world_human_stand_waiting");
			break;
	
		case 1:
			endRange = 3;
			unk[0] = joaat("world_human_smoke");
			unk[1] = joaat("world_human_waiting_impatient");
			unk[2] = joaat("world_human_stare_stoic");
			break;
	
		case 2:
			endRange = 2;
			unk[0] = joaat("world_human_stand_waiting");
			unk[1] = joaat("world_human_shop_browse");
			break;
	
		default:
			break;
	}

	return unk[MISC::GET_RANDOM_INT_IN_RANGE(0, endRange)];
}

void func_403(int iParam0) // Position - 0xF1C3 Hash - 0x6182189A ^0x8FFD169
{
	if (iParam0 < 0 || iParam0 >= 10)
		return;

	Global_1359489.f_63[iParam0 /*24*/] = 4;
	return;
}

BOOL func_404(int iParam0, int iParam1) // Position - 0xF1EB Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

int func_405(BOOL bParam0) // Position - 0xF20C Hash - 0xB9596906 ^0xEA13D3DB
{
	int num;
	BOOL flag;

	flag = bParam0;

	if (flag < false)
	{
		num = 1;
		func_478(&flag, -2147483648);
	}
	else
	{
		num = 0;
	}

	while (flag > false)
	{
		flag = flag && flag - 1;
		num = num + 1;
	}

	return num;
}

BOOL func_406(Ped pedParam0) // Position - 0xF24C Hash - 0xCA96D27A ^0x3802A466
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (func_353() != -1)
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return true;
	}

	return false;
}

int func_407(int iParam0) // Position - 0xF2A5 Hash - 0xD45AC883 ^0xD45AC883
{
	if (!func_56(iParam0))
		return -1;

	if (iParam0 >= func_293(true))
		return -1;

	if (iParam0 >= 3 || iParam0 < 0)
		return -1;

	return Global_1359489[iParam0];
}

BOOL func_408(int iParam0) // Position - 0xF2E6 Hash - 0xABB41D33 ^0xABB41D33
{
	if (!func_56(iParam0))
		return 0;

	return Global_1360165[iParam0 /*1157*/].f_1154;
}

void func_409(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0xF308 Hash - 0x60969C28 ^0x60969C28
{
	int num;

	if (!func_56(iParam0))
		return;

	if (func_299(iParam0, hParam1))
	{
		func_479(iParam0, bParam2);
		return;
	}

	num = -1;

	if (func_300(iParam0, hParam1, &num))
		func_305(iParam0, num, bParam2);

	return;
}

BOOL func_410(Hash hParam0, int iParam1) // Position - 0xF34D Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_411(int iParam0) // Position - 0xF367 Hash - 0x813FCEB5 ^0x813FCEB5
{
	if (Global_1327590.f_19744 == -1)
		return false;

	return Global_1327590.f_19744 == iParam0;
}

BOOL func_412(int iParam0, int iParam1, BOOL bParam2) // Position - 0xF388 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_347(iParam1) || !func_347(iParam0))
			return true;

	return iParam0 > iParam1;
}

int func_413() // Position - 0xF3B5 Hash - 0xFD016E51 ^0xFD016E51
{
	switch (func_353())
	{
		case -1:
			return Global_40.f_4283;
	}

	return -1;
}

BOOL func_414(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xF3DA Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > iParam4;
}

int func_415(int iParam0) // Position - 0xF41B Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

void func_416(int iParam0, var uParam1, var uParam2) // Position - 0xF434 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_417(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF450 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_480(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_481(iParam0))
		return false;

	if (func_482(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_418(iParam0, 1) || func_483(32768))
		if (!func_418(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_484())
		return false;

	return true;
}

BOOL func_418(int iParam0, int iParam1) // Position - 0xF4F2 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_419(int iParam0, int iParam1) // Position - 0xF50B Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_420(int iParam0) // Position - 0xF52F Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1391410 && iParam0 != false;
}

void func_421(int iParam0, Blip blParam1) // Position - 0xF540 Hash - 0x99BCEC94 ^0xDAEF7220
{
	Hash modifierHash;
	eBlipSprite sprite;
	BOOL flag;

	if (!func_56(iParam0))
		return;

	if (Global_1360165[iParam0 /*1157*/].f_12 == 0 || func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
	{
		if (MAP::DOES_BLIP_EXIST(*blParam1))
			func_13(iParam0);
	
		return;
	}

	modifierHash = 0;
	sprite = BLIP_HIGHER;
	flag = func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 512);

	if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 128))
		modifierHash = joaat("BLIP_MODIFIER_ENEMY");
	else if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
		modifierHash = joaat("BLIP_MODIFIER_COMPANION_OBJECTIVE");

	if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 256))
		sprite = func_485(-1739349092);

	if (!MAP::DOES_BLIP_EXIST(*blParam1))
		*blParam1 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), func_112(iParam0));

	if (MAP::DOES_BLIP_EXIST(*blParam1))
	{
		if (modifierHash != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*blParam1, modifierHash);
		
			if (modifierHash == joaat("BLIP_MODIFIER_COMPANION_OBJECTIVE"))
				MAP::BLIP_ADD_MODIFIER(*blParam1, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(*blParam1, modifierHash);
		}
	
		if (flag && !func_94(0, false, true))
		{
			MAP::_BLIP_SET_STYLE(*blParam1, joaat("BLIP_STYLE_CAMP_REQUEST"));
		
			if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 1024))
				MAP::BLIP_ADD_MODIFIER(*blParam1, joaat("BLIP_MODIFIER_URGENT"));
		
			if (func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 2048))
				MAP::BLIP_ADD_MODIFIER(*blParam1, joaat("BLIP_MODIFIER_LOCKED"));
		}
	
		if (sprite != BLIP_HIGHER)
			MAP::SET_BLIP_SPRITE(*blParam1, sprite, true);
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1360165[iParam0 /*1157*/].f_14)) && func_115(&(Global_1360165[iParam0 /*1157*/].f_12), 8))
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam1, &(Global_1360165[iParam0 /*1157*/].f_14));
		else
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*blParam1, func_313(iParam0, false));
	}

	return;
}

int func_422(Ped pedParam0) // Position - 0xF71B Hash - 0xA7BDC85E ^0xDF3706B0
{
	int i;
	Ped ped;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	if (!func_406(pedParam0))
		return -1;

	for (i = 0; i < 27; i = i + 1)
	{
		ped = Global_1360165[i /*1157*/];
	
		if (!ENTITY::IS_ENTITY_DEAD(ped) && pedParam0 == ped)
			return i;
	}

	return -1;
}

float func_423(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6) // Position - 0xF777 Hash - 0x9F66817B ^0xCA5C01B6
{
	float num;
	float num2;
	float num3;

	num2 = fParam3 - uParam0;
	num3 = fParam3.f_1 - uParam0.f_1;

	if (num3 != 0f)
		num = MISC::ATAN2(num2, num3);
	else if (num2 < 0f)
		num = -90f;
	else
		num = 90f;

	if (iParam6 == 1)
	{
		num = num * -1f;
	
		if (num < 0f)
			num = num + 360f;
	}

	return num;
}

var func_424(BOOL bParam0, var uParam1, var uParam2) // Position - 0xF7DC Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_425(var uParam0) // Position - 0xF7F3 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_426(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0xF7FE Hash - 0xC79590A0 ^0xE83AED0D
{
	uParam0->f_3.f_3 = { fParam1 };
	return;
}

void func_427(var uParam0, int iParam1) // Position - 0xF812 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_428(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, BOOL bParam6, BOOL bParam7) // Position - 0xF81F Hash - 0x5A9F065 ^0x9DF1DF9A
{
	BOOL isSphereVisible;
	var groundZ;
	float num;

	isSphereVisible = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);

	if (bParam6)
		if (func_486(vParam0 + { 0.2f, 0f, 0f }))
			return false;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + { 1f, 0f, 0f }, &groundZ, false))
		return false;

	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
		return false;

	if (isSphereVisible)
	{
	}
	else
	{
		if (bParam7)
			if (vParam0.f_2 > vParam3.f_2 + 10f)
				return false;
	
		num = BUILTIN::VDIST(vParam0, vParam3);
	
		if (num > 40f && num < 80f)
			return true;
	}

	return false;
}

BOOL func_429(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0xF8C6 Hash - 0xC31BF175 ^0x915D2C1C
{
	int num;

	switch (*uParam3)
	{
		case 0:
			if (uParam3->f_2 > 4)
			{
				*uParam4 = 1;
				return false;
			}
		
			uParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_487(&(uParam3->f_1), uParam3->f_2, uParam0, iParam5, iParam7, iParam8, iParam9, iParam10, iParam11);
		
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
			{
			}
			else
			{
				func_488(&(uParam3->f_1), iParam5);
			
				if (!_IS_NULL_VECTOR(uParam3->f_6))
					TASK::_0xCE4E669400E5F8AA(uParam3->f_1, func_176(uParam3->f_6));
			
				TASK::_0x2B8AF29A78024BD3(uParam3->f_1);
			}
		
			*uParam3 = 3;
			break;
	
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(uParam3->f_1))
				num = 4;
			else
				num = TASK::_0x0365000D8BF86531(&(uParam3->f_1));
		
			switch (num)
			{
				case 3:
					uParam3->f_3 = { TASK::_0x865732725536EE39(&(uParam3->f_1)) };
					*uParam3 = 4;
				
					if (!bParam6)
						return true;
					break;
			
				case 4:
					if (bParam6 && uParam3->f_2 < 4)
					{
						uParam3->f_2 = uParam3->f_2 + 1;
						*uParam3 = 0;
					}
					else
					{
						*uParam4 = 1;
					}
					break;
			}
			break;
	
		case 4:
			return true;
	}

	return false;
}

Vector3 func_430(var uParam0) // Position - 0xF9E7 Hash - 0x9DAA674D ^0x2F5D0C00
{
	return uParam0->f_3.f_3;
}

BOOL func_431(int iParam0, int iParam1) // Position - 0xF9F7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_432(int iParam0, Player plParam1, BOOL bParam2) // Position - 0xFA06 Hash - 0xB5B0CDA5 ^0xA3D20AE
{
	int num;

	if (!func_56(iParam0))
		return false;

	if (func_144(iParam0, 256))
		return true;

	num = 0;

	if (bParam2)
		num = 256;

	if (!func_67(plParam1, num))
		return false;

	PED::_EQUIP_META_PED_OUTFIT(plParam1, func_489(iParam0));
	PED::_UPDATE_PED_VARIATION(plParam1, false, true, true, true, false);
	func_30(iParam0, 256, true);
	return true;
}

BOOL func_433(int iParam0, Player plParam1) // Position - 0xFA6B Hash - 0x26825B72 ^0x33735741
{
	if (!func_56(iParam0))
		return false;

	if (!func_144(iParam0, 256))
		return true;

	if (!func_67(plParam1, 256))
		return false;

	PED::_0xA2F8B3B5FEDFC100(plParam1, func_489(iParam0));
	PED::_UPDATE_PED_VARIATION(plParam1, false, true, true, true, false);
	func_30(iParam0, 256, false);
	return true;
}

void func_434(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFAC5 Hash - 0x755A55CB ^0x755A55CB
{
	if (!func_114(iParam0))
		return;

	if (func_131(iParam0, true) == 0)
		return;

	if (bParam3)
		func_490(func_128(iParam0), 1f, false);

	if (bParam1)
		func_458(iParam0);
	else
		func_460(iParam0);

	if (bParam2)
		func_371(iParam0);
	else
		func_462(iParam0);

	return;
}

void func_435(Player plParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6) // Position - 0xFB21 Hash - 0xF46E0F16 ^0xED4BA72A
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(plParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(plParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	plParam0 == func_491(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_492(plParam0))
		if (func_328(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0)))
			PHYSICS::_UNHITCH_HORSE(plParam0);

	if (func_227(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(plParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_435(vehiclePedIsIn, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_435(mount, vParam1, iParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_227(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(plParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0), false, true);

	if (func_227(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(plParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plParam0, vParam1, iParam4, true, func_227(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plParam0, vParam1, iParam4, true, func_227(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(plParam0, false);
		}
	}
	else if (func_227(iParam5, 129))
	{
		if (func_227(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(plParam0, vParam1, func_227(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(plParam0, iParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(plParam0, vParam1, iParam4, true, func_227(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_227(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0), pedCrouchMovement, 0, false);
	
		if (func_492(plParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_227(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(plParam0) == Global_35 && !func_227(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

int func_436(int iParam0) // Position - 0xFDA3 Hash - 0xF239A6CA ^0xF239A6CA
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
	
		case 4:
		case 9:
		case 20:
			return 2;
	
		case 7:
			if (func_239(45))
				return 1;
			else
				return 2;
			break;
	
		case 11:
			if (func_239(45))
				return 2;
			else
				return 1;
			break;
	}

	return 0;
}

void func_437(Ped pedParam0, int iParam1) // Position - 0xFE3E Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_438(int iParam0, BOOL bParam1) // Position - 0xFE65 Hash - 0x6749A4DF ^0xA0D5EA05
{
	Ped ped;
	int playerGroup;

	ped = Global_1360165[iParam0 /*1157*/];

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return;

	if (!func_114(iParam0))
		return;

	playerGroup = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());

	if (PED::IS_PED_GROUP_MEMBER(ped, playerGroup, false))
		return;

	COMPANION::_ACTIVATE_COMPANION_ANALYSIS(func_37());
	PED::SET_PED_CONFIG_FLAG(ped, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(ped, playerGroup);

	if (bParam1)
		func_368(iParam0, true, Global_35);

	return;
}

void func_439(int iParam0) // Position - 0xFEE0 Hash - 0x6AEDC7B3 ^0x6AEDC7B3
{
	int num;
	int num2;

	if (func_114(iParam0))
	{
		num = 0;
		num2 = 0;
	
		switch (iParam0)
		{
			case 2:
				func_493(&num, 1);
				break;
		
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_493(&num, 8);
				func_493(&num, 5);
				func_493(&num2, 4);
				func_493(&num2, 0);
				break;
		
			case 14:
				func_493(&num, 8);
				func_493(&num2, 4);
				func_493(&num2, 5);
				func_493(&num2, 0);
				break;
		}
	
		COMPANION::_ADD_COMPANION_FLAG(func_112(iParam0), num);
		COMPANION::_REMOVE_COMPANION_FLAG(func_112(iParam0), num2);
	}

	return;
}

int func_440(int iParam0, var uParam1, var uParam2) // Position - 0xFF9D Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_494(iParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_441(int iParam0) // Position - 0xFFBF Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_442(int iParam0) // Position - 0xFFE4 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_443(int iParam0) // Position - 0xFFF7 Hash - 0x3745A1AF ^0xF3F60C1A
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_444(int iParam0) // Position - 0x1000C Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_445(int iParam0, int iParam1) // Position - 0x1001E Hash - 0x893AC59E ^0x893AC59E
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

void func_446(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x100B8 Hash - 0xA65AB937 ^0xA65AB937
{
	func_496(uParam0, iParam6);
	func_497(uParam0, iParam5);
	func_498(uParam0, iParam4);
	func_342(uParam0, iParam3);
	func_343(uParam0, iParam2);
	func_499(uParam0, iParam1);
	return;
}

float func_447(float fParam0, float fParam1, float fParam2) // Position - 0x100F0 Hash - 0xDB08F514 ^0x78C0BF6F
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

Player func_448(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10) // Position - 0x10132 Hash - 0x8208FD10 ^0xFF758839
{
	var unk;
	PersChar persChar;
	var schedule;
	char* str;

	if (!func_56(iParam0))
		return 0;

	unk = { iParam3, iParam4, iParam5 };
	persChar = func_133(iParam0, true);

	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
		
			if (func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_29(iParam0, 3);
			}
			else
			{
				if (!func_500(iParam0) && func_501(iParam0, &schedule))
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_131(iParam0, true), &schedule);
			
				func_30(iParam0, 256, false);
				func_29(iParam0, 1);
			}
			break;
	
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(persChar))
					return _INVALID_PLAYER_INDEX();
			
				if (bParam2 && !_IS_NULL_VECTOR(unk))
					PERSCHAR::_0x59C7AD6FEA2AC449(persChar, unk);
				else if (bParam2)
					PERSCHAR::_0xD4B614179BCD0654(persChar);
			
				if (!func_503(iParam0, unk, iParam6, bParam10))
					return _INVALID_PLAYER_INDEX();
			
				if (func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar) != Global_1360165[iParam0 /*1157*/].f_124;
				
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_29(iParam0, 2);
				}
			}
			break;
	
		case 2:
			if (!func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_29(iParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
				func_29(iParam0, 3);
			break;
	
		case 3:
			if (!func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_29(iParam0, 1);
				return _INVALID_PLAYER_INDEX();
			}
		
			if (bParam7)
				if (!func_432(iParam0, Global_1360165[iParam0 /*1157*/].f_124, true))
					return _INVALID_PLAYER_INDEX();
		
			if (bParam2 && !_IS_NULL_VECTOR(unk) && !func_504(unk, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608, true))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
			
				func_435(Global_1360165[iParam0 /*1157*/].f_124, unk, iParam6, 2, 1073741824);
			}
		
			if (bParam1)
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					func_4(iParam0, 39, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
			
				func_26(iParam0, 39, true);
				func_30(iParam0, 8, true);
				func_30(iParam0, 64, false);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
		
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_332(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
		
			if (bParam8)
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/].f_124, 1);
		
			str = func_317(iParam0, func_241());
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
				PERSCHAR::_0x63AA2B8EB087886A(func_131(iParam0, true), MISC::GET_HASH_KEY(str));
		
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_12(iParam0, 40, false);
			func_30(iParam0, 32, false);
			func_29(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}

	return _INVALID_PLAYER_INDEX();
}

void func_449(int iParam0, Player plParam1) // Position - 0x104E9 Hash - 0x6B84EB5D ^0xB01B2620
{
	int randomIntInRange;
	int maxAttributePoints;

	switch (iParam0)
	{
		case 0:
		case 6:
			randomIntInRange = 0;
			break;
	
		case 3:
			maxAttributePoints = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(plParam1, 16);
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((float)maxAttributePoints * 0.4f), BUILTIN::ROUND((float)maxAttributePoints * 0.75f));
			break;
	
		default:
			maxAttributePoints = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(plParam1, 16);
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND((float)maxAttributePoints * 0.1f), BUILTIN::ROUND((float)maxAttributePoints * 0.4f));
			break;
	}

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(plParam1, 16, randomIntInRange);
	return;
}

int func_450(int iParam0) // Position - 0x10575 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_451(int iParam0, int iParam1) // Position - 0x105F6 Hash - 0xB7443904 ^0xB7443904
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
	
		case -2040275819:
			return 46;
	
		case -1874208704:
			return 5;
	
		case -1862464078:
			return 44;
	
		case -1692022104:
			return 63;
	
		case -1684458716:
			return 31;
	
		case -1678882891:
			return 36;
	
		case -1668922931:
			return 20;
	
		case -1648322231:
			return 72;
	
		case -1642335258:
			return 66;
	
		case -1632589543:
			return 43;
	
		case -1587546924:
			return 54;
	
		case -1559986688:
			return 7;
	
		case -1532979576:
			return 65;
	
		case -1414977761:
			return 48;
	
		case -1394723994:
			return 59;
	
		case -1341683964:
			return 21;
	
		case -1335291723:
			return 60;
	
		case -1268239471:
			return 68;
	
		case -1256711921:
			return 35;
	
		case -1248623443:
			return 26;
	
		case -1205468859:
			return 76;
	
		case -1155031950:
			return 25;
	
		case -1114682645:
			return 47;
	
		case -1092189504:
			return 69;
	
		case -1065026089:
			return 73;
	
		case -973332710:
			return 32;
	
		case -946772361:
			return 62;
	
		case -922193456:
			return 39;
	
		case -695701225:
			return 3;
	
		case -571427255:
			return 57;
	
		case -481967001:
			return 28;
	
		case -445211559:
			return 61;
	
		case -433615745:
			return 18;
	
		case -426171916:
			return 80;
	
		case -310473775:
			return 42;
	
		case -301101630:
			return 24;
	
		case -268604689:
			return 37;
	
		case -193269670:
			return 30;
	
		case -23947011:
			return 50;
	
		case 0:
			return 0;
	
		case 6418928:
			return 71;
	
		case 80515440:
			return 70;
	
		case 178615350:
			return 1;
	
		case 283037683:
			return 13;
	
		case 296923297:
			return 45;
	
		case 350498312:
			return 27;
	
		case 404503428:
			return 4;
	
		case 431390894:
			return 23;
	
		case 513932985:
			return 29;
	
		case 707545953:
			return 64;
	
		case 713940276:
			return 11;
	
		case 777603945:
			return 19;
	
		case 837028314:
			return 58;
	
		case 867156718:
			return 79;
	
		case 876535472:
			return 75;
	
		case 876797088:
			return 53;
	
		case 928493661:
			return 22;
	
		case 961676983:
			return 55;
	
		case 977450639:
			return 9;
	
		case 1018353621:
			return 17;
	
		case 1046468203:
			return 16;
	
		case 1071744295:
			return 8;
	
		case 1199580439:
			return 41;
	
		case 1200878026:
			return 52;
	
		case 1205492208:
			return 40;
	
		case 1237718549:
			return 49;
	
		case 1254970547:
			return 78;
	
		case 1295334688:
			return 51;
	
		case 1300659195:
			return 56;
	
		case 1484386316:
			return 77;
	
		case 1495063555:
			return 15;
	
		case 1593315648:
			return 6;
	
		case 1658153743:
			return 33;
	
		case 1744281750:
			return 12;
	
		case 1818898449:
			return 38;
	
		case 1842975347:
			return 34;
	
		case 1901494236:
			return 10;
	
		case 1950972546:
			return 67;
	
		case 2062813606:
			return 74;
	
		case 2094043703:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_452(int iParam0) // Position - 0x1098A Hash - 0xFD8725A9 ^0x22D0EE31
{
	int i;

	if (!func_114(iParam0))
		return;

	func_505(iParam0, false, &(Global_40.f_4942[iParam0 /*60*/].f_8));

	for (i = 0; i < 10; i = i + 1)
	{
		func_505(iParam0, false, &Global_40.f_4942[iParam0 /*60*/].f_11[i /*3*/]);
	}

	return;
}

BOOL func_453(int iParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, int iParam5) // Position - 0x109DC Hash - 0x61E9D2FB ^0x61E9D2FB
{
	int num;
	int num2;
	int num3;

	if (bParam3)
	{
		if (func_300(iParam0, hParam1, uParam2))
		{
			if (iParam4 > 0 || iParam5 > 0)
			{
				num = func_81();
				func_341(&num, 0, iParam4, iParam5, 0, 0, 0, true);
				Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = num;
			}
			else
			{
				Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = -15;
			}
		
			return true;
		}
	}

	*uParam2 = 0;
	*uParam2 = 0;

	while (*uParam2 < 10)
	{
		if (!func_134(Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/]))
		{
			num2 = -15;
		
			if (iParam4 > 0 || iParam5 > 0)
			{
				num2 = func_81();
				func_341(&num2, 0, iParam4, iParam5, 0, 0, 0, true);
			}
		
			Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/] = hParam1;
			Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = num2;
			Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_2 = 0;
			return true;
		}
	
		*uParam2 = *uParam2 + 1;
	}

	func_137(iParam0, 0);
	*uParam2 = 9;
	num3 = -15;

	if (iParam4 > 0 || iParam5 > 0)
	{
		num3 = func_81();
		func_341(&num3, 0, iParam4, iParam5, 0, 0, 0, true);
	}

	Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/] = hParam1;
	Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_1 = num3;
	Global_40.f_4942[iParam0 /*60*/].f_11[*uParam2 /*3*/].f_2 = 0;
	return true;
}

BOOL func_454(int iParam0, Hash hParam1) // Position - 0x10B61 Hash - 0xD2BE64C1 ^0xBE732642
{
	int num;
	BOOL flag;

	if (!func_56(iParam0))
		return false;

	if (!func_135(iParam0, hParam1, &num, &flag))
		return false;

	if (flag)
		return Global_40.f_4942[iParam0 /*60*/].f_8.f_2;

	return Global_40.f_4942[iParam0 /*60*/].f_11[num /*3*/].f_2;
}

BOOL func_455(int iParam0, int iParam1, BOOL bParam2) // Position - 0x10BB6 Hash - 0x9ED60A40 ^0xCA8A0302
{
	int num;

	if (!func_56(iParam0))
		return false;

	if (!func_506(iParam0))
		return false;

	if (func_507(iParam0, -2147483648))
		return true;

	if (func_507(iParam0, 1073741824))
		return true;

	num = func_508(iParam1);

	if (num < Global_1360165[iParam0 /*1157*/].f_22)
		return true;

	if (num == Global_1360165[iParam0 /*1157*/].f_22)
	{
		if (bParam2)
			return true;
	
		if (!func_507(iParam0, iParam1))
			return true;
	}

	return false;
}

int func_456(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x10C44 Hash - 0xC4851E36 ^0xA22D3B6E
{
	if (!func_114(iParam0))
		return 0;

	if (!bParam2)
		if (func_455(iParam0, iParam1, false))
			return 0;

	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 = Global_1360165[iParam0 /*1157*/].f_140 || iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 = Global_1360165[iParam0 /*1157*/].f_141 || iParam1;
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		func_341(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, false);
	}

	return 1;
}

void func_457(Player plParam0) // Position - 0x10CD2 Hash - 0x68A3D5AB ^0x62583FE3
{
	if (func_87(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, true);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 127, false);

	if (FIRE::IS_ENTITY_ON_FIRE(plParam0))
	{
		FIRE::STOP_ENTITY_FIRE(plParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(plParam0, ENTITY::GET_ENTITY_MAX_HEALTH(plParam0, false), 0);
	}

	return;
}

void func_458(int iParam0) // Position - 0x10D1E Hash - 0xB1E2E498 ^0xC7EBD371
{
	Player player;

	if (!func_56(iParam0))
		return;

	if (func_131(iParam0, false) == 0)
		return;

	player = func_128(iParam0);
	func_457(player);
	func_30(iParam0, 8192, true);
	return;
}

void func_459(Player plParam0) // Position - 0x10D59 Hash - 0xB38DCC50 ^0x941BF21E
{
	if (func_87(plParam0, false))
		return;

	ENTITY::SET_ENTITY_INVINCIBLE(plParam0, false);
	PED::SET_PED_CONFIG_FLAG(plParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(plParam0, 0, false);
	return;
}

void func_460(int iParam0) // Position - 0x10D86 Hash - 0x28CD0E89 ^0xB9FC8A12
{
	Player player;

	if (!func_56(iParam0))
		return;

	if (func_131(iParam0, false) == 0)
		return;

	player = func_128(iParam0);
	func_459(player);
	func_30(iParam0, 8192, false);
	return;
}

void func_461(Player plParam0) // Position - 0x10DC1 Hash - 0x972BAF6E ^0xD19596A6
{
	if (func_87(plParam0, false))
		return;

	PED::SET_PED_CAN_RAGDOLL(plParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(plParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(plParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(plParam0, true);
	return;
}

void func_462(int iParam0) // Position - 0x10DF5 Hash - 0x28CD0E89 ^0x67E48CA5
{
	Player player;

	if (!func_56(iParam0))
		return;

	if (func_131(iParam0, false) == 0)
		return;

	player = func_128(iParam0);
	func_461(player);
	func_30(iParam0, 16384, false);
	return;
}

BOOL func_463(int iParam0) // Position - 0x10E30 Hash - 0xFEA2A378 ^0xFEA2A378
{
	if (func_114(iParam0))
		if (func_67(Global_1360165[iParam0 /*1157*/], 0))
			return true;

	return false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x10E57 Hash - 0xA17D549C ^0xE2C843FC
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
	
		case 1:
			return "JOHN";
	
		case 2:
			return "JAVIER";
	
		case 3:
			return "BILL";
	
		case 4:
			return "UNCLE";
	
		case 5:
			return "HOSEA";
	
		case 6:
			return "MICAH";
	
		case 7:
			return "CHARLES";
	
		case 8:
			return "SEAN";
	
		case 9:
			return "LENNY";
	
		case 10:
			return "KIERAN";
	
		case 11:
			return "SADIE";
	
		case 12:
			return "DOG";
	
		case 13:
			return "ABIGAIL";
	
		case 14:
			return "JACK";
	
		case 15:
			return "MARYBETH";
	
		case 16:
			return "MOLLY";
	
		case 17:
			return "PEARSON";
	
		case 18:
			return "STRAUSS";
	
		case 19:
			return "GRIMSHAW";
	
		case 20:
			return "KAREN";
	
		case 21:
			return "SWANSON";
	
		case 22:
			return "TILLY";
	
		case 23:
			return "TRELAWNY";
	
		case 24:
			return "CLEET";
	
		case 25:
			return "JOE";
	
		case 26:
			return "EAGLEFLIES";
	
		default:
		
	}

	return "Companion unknown";
}

BOOL func_465() // Position - 0x10FCA Hash - 0x1C71B0F ^0x1C71B0F
{
	if (func_353() != -1)
		return false;

	return func_293(true) > 0;
}

BOOL func_466(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x10FE5 Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return true;
	}
	else
	{
		bParam7;
	}

	return false;
}

int func_467(int iParam0) // Position - 0x11015 Hash - 0x16E6950C ^0x16E6950C
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

int func_468(int iParam0) // Position - 0x11081 Hash - 0xC6D58584 ^0x5DA0A004
{
	var unk;

	unk = Global_1357549.f_576;
	unk.f_2 = 29309381;
	unk.f_3 = func_509(iParam0);

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		return unk.f_1;

	return 0;
}

BOOL func_469(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x110BA Hash - 0x93F635A ^0xB50CB677
{
	if (iParam3 < 0 || iParam3 >= 3)
		return 0;

	if (!Global_1359489.f_63.f_242[iParam3 /*18*/].f_15)
		return 0;

	if (BUILTIN::VDIST2(vParam0, Global_1359489.f_63.f_242[iParam3 /*18*/].f_2) < Global_1359489.f_63.f_242[iParam3 /*18*/].f_5)
		return 1;

	return 0;
}

BOOL func_470(var uParam0, Entity eParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1111C Hash - 0x13C5D169 ^0xD20B8715
{
	var unk;

	if (ENTITY::IS_ENTITY_DEAD(eParam1))
		return false;

	unk = { func_510(eParam1) };
	return func_511(uParam0, unk, uParam2, 0);
}

int func_471(int iParam0, int iParam1) // Position - 0x1114A Hash - 0x6B05940A ^0x6B05940A
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			if (iParam1 == 1)
				return 0;
			else if (iParam1 == 2)
				return 1;
			else if (iParam1 == 3)
				return 2;
			break;
	
		case 2:
			return 0;
	}

	return -1;
}

void func_472(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11) // Position - 0x111A2 Hash - 0x8C0F0FFF ^0x8C0F0FFF
{
	float startRange;
	float endRange;
	var unk;
	var unk4;
	var unk7;

	startRange = iParam9 / 2f;
	endRange = iParam10 / 2f;

	switch (iParam2)
	{
		case 0:
			unk4 = { func_176(uParam6 - uParam3) };
			unk7 = { func_512(unk4, 0f, 0f, 1f) };
			uParam0->[0 /*3*/] = { uParam3 + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			uParam0->[1 /*3*/] = { uParam3 + (unk7 * F2V(MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam9, iParam10))) + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			uParam0->[2 /*3*/] = { (uParam3 - (unk7 * F2V(MISC::GET_RANDOM_FLOAT_IN_RANGE(iParam9, iParam10)))) + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			uParam1->[0 /*3*/] = { unk4 };
			uParam1->[1 /*3*/] = { unk4 };
			uParam1->[2 /*3*/] = { unk4 };
			break;
	
		case 1:
			unk = { func_514() };
			uParam1->[0 /*3*/] = { func_176(unk) };
			uParam1->[1 /*3*/] = { -uParam1->[0 /*3*/] };
			uParam0->[0 /*3*/] = { (uParam3 - (uParam1->[0 /*3*/] * F2V(MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange)))) + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			uParam0->[1 /*3*/] = { (uParam3 - (uParam1->[1 /*3*/] * F2V(MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange)))) + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			break;
	
		case 2:
			unk = { func_514() };
			uParam1->[0 /*3*/] = { func_176(unk) };
			func_515(&unk, &(unk.f_1), 120f);
			uParam1->[1 /*3*/] = { func_176(unk) };
			func_515(&unk, &(unk.f_1), 120f);
			uParam1->[2 /*3*/] = { func_176(unk) };
			uParam0->[0 /*3*/] = { (uParam3 - (uParam1->[0 /*3*/] * F2V(MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange)))) + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			uParam0->[1 /*3*/] = { (uParam3 - (uParam1->[1 /*3*/] * F2V(MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange)))) + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			uParam0->[2 /*3*/] = { (uParam3 - (uParam1->[2 /*3*/] * F2V(MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange)))) + func_513(0f, 0f, 0f, iParam11, 0.1f) };
			break;
	}

	return;
}

char* func_473(int iParam0, int iParam1) // Position - 0x113DB Hash - 0x18FB425E ^0x7538085F
{
	int endRange;
	var unk;

	unk = 5;

	switch (iParam0)
	{
		case 0:
			endRange = 2;
			unk[0] = "INDIFF1";
			unk[1] = "INDIFF2";
			break;
	
		case 1:
			endRange = 1;
		
			if (iParam1 > 1)
				unk[0] = "WAIT1";
			else
				unk[0] = "WAIT2";
			break;
	
		case 2:
			endRange = 2;
			unk[0] = "SHOCK1";
			unk[1] = "SHOCK2";
			break;
	
		default:
			break;
	}

	return unk[MISC::GET_RANDOM_INT_IN_RANGE(0, endRange)];
}

void func_474(int iParam0, var uParam1, int iParam2, BOOL bParam3, char* sParam4, var uParam5, var uParam6, var uParam7, float fParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, var uParam19) // Position - 0x11461 Hash - 0x4350DA58 ^0xDD63BC4
{
	int num;

	if (Global_1359489.f_63.f_241 >= 10)
		return;

	if (bParam3)
	{
		num.f_10 = func_401(MISC::GET_HEADING_FROM_VECTOR_2D(fParam8, fParam8.f_1));
		num = 1;
	}
	else
	{
		num.f_23 = 0;
		num.f_10 = 0f;
		num = 2;
	}

	num.f_3 = uParam1;
	num.f_4 = { uParam5 };
	num.f_7 = { uParam11 };
	num.f_11 = iParam15;
	num.f_12 = iParam16;
	num.f_13 = fParam17 * fParam17;
	num.f_1 = iParam0;
	num.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	num.f_14 = iParam18;
	num.f_15 = bParam3;
	num.f_16 = iParam2;
	TEXT_LABEL_ASSIGN_STRING(&(num.f_19), sParam4, 32);
	num.f_17 = uParam19;
	Global_1359489.f_63[iParam14 /*24*/] = { num };

	if (Global_1359489.f_63[iParam14 /*24*/].f_15)
		func_516(&Global_1359489.f_63[iParam14 /*24*/]);

	return;
}

float func_475(float fParam0) // Position - 0x11530 Hash - 0xC531A009 ^0xC531A009
{
	return fParam0 * 57.29578f;
}

float func_476(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, var uParam6, var uParam7) // Position - 0x11540 Hash - 0x1A289FD ^0x16DE6A0D
{
	float num;
	int i;
	float x2;
	float angleBetween2dVectors;

	num = 999999f;

	for (i = 0; i < Global_1359489.f_63.f_241; i = i + 1)
	{
		if (Global_1359489.f_63[i /*24*/].f_14 == iParam0 && Global_1359489.f_63[i /*24*/].f_15 || Global_1359489.f_63[i /*24*/].f_18 && i != iParam1)
		{
			x2 = { func_176(Global_1359489.f_63[i /*24*/].f_4 - uParam2) };
			angleBetween2dVectors = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(fParam5, fParam5.f_1, x2, x2.f_1);
		
			if (angleBetween2dVectors < num)
				num = angleBetween2dVectors;
		}
	}

	return num;
}

Vector3 func_477(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x115E2 Hash - 0xE7392D2 ^0x4B889577
{
	var unk;
	float num;
	var unk4;

	unk = uParam0.f_2;
	num = { uParam3 - uParam0 };
	unk4 = { (num * BUILTIN::COS(fParam6)) - (num.f_1 * BUILTIN::SIN(fParam6)), (num * BUILTIN::SIN(fParam6)) + (num.f_1 * BUILTIN::COS(fParam6)), 0f };
	unk4 = { unk4 + uParam0 };
	unk4.f_2 = unk;
	return unk4;
}

void func_478(var uParam0, int iParam1) // Position - 0x11643 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_479(int iParam0, int iParam1) // Position - 0x11658 Hash - 0xC74F1957 ^0xC74F1957
{
	if (!func_56(iParam0))
		return;

	Global_1360165[iParam0 /*1157*/].f_1154 = iParam1;
	return;
}

BOOL func_480(int iParam0, int iParam1) // Position - 0x1167B Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_353() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_481(int iParam0) // Position - 0x116AE Hash - 0x3E25647A ^0x3E25647A
{
	if (func_353() != -1)
		if (func_418(iParam0, 4))
			return false;
	else if (func_418(iParam0, 2))
		return false;

	return true;
}

BOOL func_482(int iParam0) // Position - 0x116DE Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_418(iParam0, 65536) && !func_418(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_418(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_418(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_483(int iParam0) // Position - 0x1178A Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_484() // Position - 0x1179D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

eBlipSprite func_485(int iParam0) // Position - 0x117AC Hash - 0xB8EC44B7 ^0x8219AB34
{
	switch (iParam0)
	{
		case -2036347356:
			return joaat("blip_mg_poker");
	
		case -1739349092:
			return joaat("blip_region_caravan");
	
		case -1670940721:
			return joaat("blip_robbery_bank");
	
		case -1567081107:
			return joaat("blip_mg_dominoes");
	
		case -1511391406:
			return joaat("blip_mg_five_finger_fillet");
	
		case -1341684320:
			return joaat("blip_mg_poker");
	
		case -919476462:
			return joaat("blip_robbery_coach");
	
		case 565221344:
			return joaat("blip_robbery_home");
	
		case 654481153:
			return joaat("blip_mg_fishing");
	
		case 754620122:
			return joaat("blip_ambient_herd");
	
		case 1784895540:
			return joaat("blip_region_hunting");
	
		default:
		
	}

	return 0;
}

BOOL func_486(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x11857 Hash - 0x63B092E5 ^0xED916A69
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
			return true;

	return false;
}

void func_487(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x1187F Hash - 0xF3743088 ^0xD7A675F3
{
	if (!_IS_NULL_VECTOR(uParam2))
		TASK::_0x2064B33F6E6B92D4(*uParam0, uParam2);

	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);

	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180f);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			break;
	
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
		
			if (iParam10 != 0f)
				TASK::_0xB8E3486D107F4194(*uParam0, iParam10);
			break;
	}

	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}

	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 16384);
			break;
	}

	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}

	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}

	if (iParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
		
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
		
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
		
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
		
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, (80f - 40f) / 2f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
		
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
		
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
		
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
		
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
		
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
		
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
		
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
		
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
		
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
		
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
		
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
		
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(10f, 40f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(30f, 60f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(40f, 80f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(50f, 90f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(30f, 60f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(50f, 80f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(0f, 10f, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(5f, 15f, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(60f, 120f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(100f, 130f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
		
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(10f, 35f, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(25f, 50f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(50f, 80f, 10f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(75f, 95f, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_517(95f, 90f, 80f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_517(95f, 90f, 80f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_517(125f, 115f, 100f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
		
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
				
					if (iParam5 != 19)
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					else
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, iParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, iParam9);
	}

	return;
}

void func_488(var uParam0, int iParam1) // Position - 0x1223B Hash - 0x8FE085B4 ^0xC2CC5B51
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
	
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25f);
			TASK::_0x450080DDEDB91258(*uParam0, 25f);
			break;
	
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
	
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
	
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
	
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
	
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
	
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
	
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
	
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
	
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
	
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
			[[fallthrough]];
	
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
	
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
	
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
	
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}

	return;
}

Hash func_489(int iParam0) // Position - 0x12970 Hash - 0x5007D79D ^0xEC52003
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

void func_490(Player plParam0, float fParam1, BOOL bParam2) // Position - 0x1297D Hash - 0x74F05B43 ^0xF2C5E074
{
	int healthAmount;

	if (!ENTITY::IS_ENTITY_DEAD(plParam0))
	{
		fParam1 = func_518(fParam1, 0f, 1f);
		healthAmount = BUILTIN::FLOOR(fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(plParam0, bParam2));
		ENTITY::SET_ENTITY_HEALTH(plParam0, healthAmount, 0);
	}

	return;
}

Ped func_491(Ped pedParam0) // Position - 0x129B4 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_492(Ped pedParam0) // Position - 0x129BE Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

void func_493(var uParam0, int iParam1) // Position - 0x129F0 Hash - 0xDFED97A2 ^0x7CA9A462
{
	int bitShift;

	bitShift = iParam1;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1, bitShift);
	return;
}

int func_494(int iParam0, int iParam1) // Position - 0x12A0A Hash - 0x99A93628 ^0x27AE8C83
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
	
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
	
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
	
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
	
		case -2104294676:
			return 83;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
	
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
	
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
	
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
	
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
	
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
	
		case -2033572567:
			return 92;
	
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
	
		case -2006082799:
			return 56;
	
		case -1994410205:
			return 499;
	
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
	
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
	
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
	
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
	
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
	
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
	
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
	
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
	
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
	
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
	
		case -1885734028:
			return 110;
	
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
	
		case -1856459307:
			return 219;
	
		case -1837343824:
			return 496;
	
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
	
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
	
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
	
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
	
		case -1818590041:
			return 246;
	
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
	
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
	
		case joaat("CSTAG_BCH_BASE"):
			return 10;
	
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
	
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
	
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
	
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
	
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
	
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
	
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
	
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
	
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
	
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
	
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
	
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
	
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
	
		case -1584659518:
			return 210;
	
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
	
		case -1565979762:
			return 507;
	
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
	
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
	
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
	
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
	
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
	
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
	
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
	
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
	
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
	
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
	
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
	
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
	
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
	
		case -1426009748:
			return 119;
	
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
	
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
	
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
	
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
	
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
	
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
	
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
	
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
	
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
	
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
	
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
	
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
	
		case -1333840726:
			return 236;
	
		case -1318290630:
			return 254;
	
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
	
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
	
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
	
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
	
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
	
		case -1235200494:
			return 165;
	
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
	
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
	
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
	
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
	
		case joaat("CSTAG_PRG_BASE"):
			return 9;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
	
		case -1171086122:
			return 41;
	
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
	
		case -1152282847:
			return 33;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
	
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
	
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
	
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
	
		case -1061998329:
			return 164;
	
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
	
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
	
		case -1045864225:
			return 510;
	
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
	
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
	
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
	
		case -978287173:
			return 12;
	
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
	
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
	
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
	
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
	
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
	
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
	
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
	
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
	
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
	
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
	
		case joaat("CSTAG_COL_BASE"):
			return 2;
	
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
	
		case -830432609:
			return 492;
	
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
	
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
	
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
	
		case -818926670:
			return 200;
	
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
	
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
	
		case joaat("CSTAG_HSO_BASE"):
			return 3;
	
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
	
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
	
		case -803062666:
			return 65;
	
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
	
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
	
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
	
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
	
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
	
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
	
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
	
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
	
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
	
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
	
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
	
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
	
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
	
		case -671103079:
			return 504;
	
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
	
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
	
		case -650501093:
			return 509;
	
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
	
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
	
		case -636774257:
			return 146;
	
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
	
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
	
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
	
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
	
		case -604891653:
			return 237;
	
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
	
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
	
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
	
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
	
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
	
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
	
		case -534913305:
			return 174;
	
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
	
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
	
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
	
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
	
		case -453449739:
			return 182;
	
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
	
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
	
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
	
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
	
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
	
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
	
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
	
		case -399703928:
			return 155;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
	
		case -381477663:
			return 37;
	
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
	
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
	
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
	
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
	
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
	
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
	
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
	
		case -317452243:
			return 128;
	
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
	
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
	
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
	
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
	
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
	
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
	
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
	
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
	
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
	
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
	
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
	
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
	
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
	
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
	
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
	
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
	
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
	
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
	
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
	
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
	
		case -170673728:
			return 156;
	
		case -165538585:
			return 127;
	
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
	
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
	
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
	
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
	
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
	
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
	
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
	
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
	
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
	
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
	
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
	
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
	
		case -98209688:
			return 55;
	
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
	
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
	
		case -58291054:
			return 201;
	
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
	
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
	
		case -21372580:
			return 46;
	
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
	
		case -8269375:
			return 137;
	
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

var func_495(BOOL bParam0, var uParam1, var uParam2) // Position - 0x14119 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_496(var uParam0, int iParam1) // Position - 0x14130 Hash - 0xD05180BA ^0x39589262
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

void func_497(var uParam0, int iParam1) // Position - 0x141B6 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_498(var uParam0, int iParam1) // Position - 0x141F2 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_442(*uParam0);
	num2 = func_441(*uParam0);

	if (iParam1 < 1 || iParam1 > func_445(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_499(var uParam0, int iParam1) // Position - 0x14245 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_500(int iParam0) // Position - 0x1427D Hash - 0x78780946 ^0xDC2AB9A6
{
	if (!func_56(iParam0))
		return false;

	switch (Global_1360165[iParam0 /*1157*/].f_127)
	{
		case joaat("perschar_comp_horse_common_2"):
		case joaat("perschar_comp_horse_common_3"):
		case joaat("perschar_comp_horse_common_1"):
		case joaat("perschar_comp_horse_common_4"):
		case joaat("perschar_comp_horse_common_5"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_501(int iParam0, char* sParam1) // Position - 0x142C7 Hash - 0x3BDA936C ^0xA62525B5
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_bill", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_charles", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "colter/col_default_horses1", 64);
			return true;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
			
				case 8:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
			
				case 10:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
	
		case 2:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
			
				case 8:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
			
				case 10:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
	
		case 3:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
			
				case 5:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
			
				case 9:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
			
				case 10:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
	
		case 5:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horses1", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "lakay/lak_default_horses1", 64);
			return true;
	
		case 6:
			switch (iParam0)
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
			
				case 3:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
			
				case 4:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
			
				case 6:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
			
				case 7:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
			
				case 11:
					TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
			
				default:
				
			}
		
			TEXT_LABEL_ASSIGN_STRING(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x147C2 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

BOOL func_503(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5) // Position - 0x147CB Hash - 0x33B4669E ^0x56AD3276
{
	ePedType perscharModelName;

	if (!func_56(iParam0))
		return false;

	if (!bParam5 && !Global_1359489.f_12 || bParam5 && Global_1359489.f_13 < 8)
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_126))
				PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
		
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, false);
				Global_1359489.f_13 = Global_1359489.f_13 + 1;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126, false);
			}
		
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125 = Global_1360165[iParam0 /*1157*/].f_125 + 1;
		}
		else
		{
			perscharModelName = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_131(iParam0, true));
			STREAMING::REQUEST_MODEL(perscharModelName, false);
		
			if (STREAMING::HAS_MODEL_LOADED(perscharModelName))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_519(perscharModelName, uParam1, iParam4, true, true, 0, true, true, true, false, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(perscharModelName);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
	
		if (!func_67(Global_1360165[iParam0 /*1157*/].f_124, 0))
			return false;
	
		Global_1359489.f_12 = 1;
		func_30(iParam0, 256, false);
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_504(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x14936 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

void func_505(int iParam0, BOOL bParam1, Hash hParam2) // Position - 0x1498B Hash - 0xE6358789 ^0x945D7794
{
	if (!func_134(*hParam2))
	{
		hParam2->f_1 = -15;
		return;
	}

	if (!func_520(iParam0, *hParam2, bParam1))
	{
		if (!hParam2->f_2)
		{
			if (func_521(iParam0, *hParam2, bParam1))
			{
			}
		}
	}

	if (hParam2->f_1 == -15 || hParam2->f_1 != -15 && !func_47(hParam2->f_1))
		return;

	func_522(iParam0, *hParam2, bParam1);
	return;
}

BOOL func_506(int iParam0) // Position - 0x14A05 Hash - 0x8230F59D ^0x236A0FDB
{
	if (!func_56(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_140 != 0 || Global_1360165[iParam0 /*1157*/].f_141 != 0)
		return true;

	return false;
}

BOOL func_507(int iParam0, int iParam1) // Position - 0x14A43 Hash - 0x981D3D03 ^0xFA6AD872
{
	if (!func_56(iParam0))
		return false;

	if (Global_1360165[iParam0 /*1157*/].f_140 && iParam1 != false)
		return true;

	if (Global_1360165[iParam0 /*1157*/].f_141 && iParam1 != false)
		return true;

	return false;
}

int func_508(int iParam0) // Position - 0x14A86 Hash - 0x7A7437C7 ^0x7A7437C7
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
	
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
	
		case 2:
		case 64:
			return 3;
	
		case 4:
		case 8:
		case 128:
			return 2;
	
		case 512:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_509(int iParam0) // Position - 0x14AFF Hash - 0xB8EC44B7 ^0x1FC50412
{
	switch (iParam0)
	{
		case 0:
			return joaat("CC_COLTER");
	
		case 1:
			return joaat("CC_HORSESHOE_OVERLOOK");
	
		case 2:
			return joaat("CC_CLEMENS_POINT");
	
		case 3:
			return joaat("CC_SHADY_BELLE");
	
		case 4:
			return joaat("CC_GUARMA");
	
		case 5:
			return joaat("CC_LAKAY");
	
		case 6:
			return joaat("CC_BEAVER_HOLLOW");
	
		case 7:
			return joaat("CC_PRONGHORN_RANCH");
	
		case 8:
			return joaat("CC_BEECHERS_HOPE");
	
		default:
		
	}

	return 991030100;
}

Vector3 func_510(Entity eParam0) // Position - 0x14B92 Hash - 0x8BC4D2C5 ^0xCBC3320A
{
	float pedBoneCoords;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Ped pedIndexFromEntityIndex;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(eParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(eParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
			pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedIndexFromEntityIndex, 21030, 0f, 0f, 0f) };
			pedBoneCoords.f_2 = pedBoneCoords.f_2 + 0.25f;
		}
		else
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);
			MISC::GET_MODEL_DIMENSIONS(entityModel, &offsetFromEntityInWorldCoords, &offsetFromEntityInWorldCoords2);
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(eParam0, offsetFromEntityInWorldCoords) };
			offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(eParam0, offsetFromEntityInWorldCoords2) };
			pedBoneCoords = (offsetFromEntityInWorldCoords + offsetFromEntityInWorldCoords2) / 2f;
			pedBoneCoords.f_1 = (offsetFromEntityInWorldCoords.f_1 + offsetFromEntityInWorldCoords2.f_1) / 2f;
			pedBoneCoords.f_2 = func_523(offsetFromEntityInWorldCoords.f_2, offsetFromEntityInWorldCoords2.f_2, 0.75f);
		}
	}

	_IS_NULL_VECTOR(pedBoneCoords);
	return pedBoneCoords;
}

BOOL func_511(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6, Entity eParam7) // Position - 0x14C3F Hash - 0xDFB5B5D9 ^0x7CCDBB2A
{
	var endCoords;
	var surfaceNormal;
	var entityHit;

	uParam0->f_4 = 0;

	switch (*uParam0)
	{
		case 0:
			func_391(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, eParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
	
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &endCoords, &surfaceNormal, &entityHit) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &endCoords, &surfaceNormal, &entityHit) == 0)
			{
				*uParam0 = 3;
			}
			break;
	
		case 3:
			*uParam0 = 0;
			break;
	}

	return 0;
}

Vector3 func_512(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x14CF2 Hash - 0xFED631D9 ^0x4FB6D3D3
{
	return (fParam0.f_1 * fParam3.f_2) - (fParam0.f_2 * fParam3.f_1), (fParam0.f_2 * fParam3) - (fParam0 * fParam3.f_2), (fParam0 * fParam3.f_1) - (fParam0.f_1 * fParam3);
}

Vector3 func_513(float fParam0, float fParam1, float fParam2, int iParam3, float fParam4) // Position - 0x14D2B Hash - 0xC59B327E ^0x28F503C3
{
	var unk;
	float endRange;

	unk = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	endRange = fParam4 / 2f;
	unk = { func_524(unk, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, iParam3)) };
	unk.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-endRange, endRange);
	return fParam0 + unk;
}

Vector3 func_514() // Position - 0x14D73 Hash - 0xFD3F5985 ^0x3A616E65
{
	var unk;

	unk = { 1f, 0f, 0f };
	func_515(&unk, &(unk.f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	return unk;
}

void func_515(var uParam0, var uParam1, float fParam2) // Position - 0x14D9A Hash - 0x8B8B65A8 ^0x5D806065
{
	float num;
	float num2;

	num = *uParam0;
	num2 = *uParam1;
	*uParam0 = (num * BUILTIN::COS(fParam2)) - (num2 * BUILTIN::SIN(fParam2));
	*uParam1 = (num * BUILTIN::SIN(fParam2)) + (num2 * BUILTIN::COS(fParam2));
	return;
}

int func_516(int iParam0) // Position - 0x14DD8 Hash - 0x127CCCF5 ^0x74C5E2C3
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam0->f_23))
		if (TASK::_GET_PED_USING_SCENARIO_POINT(iParam0->f_23) != _INVALID_PLAYER_INDEX())
			return 0;
		else
			TASK::_DELETE_SCENARIO_POINT(iParam0->f_23);

	if (func_177(&(iParam0->f_4), 50, 10, false))
	{
		if (iParam0->f_3 != 0)
			iParam0->f_23 = func_525(iParam0->f_3, iParam0->f_4, func_475(iParam0->f_10), iParam0->f_11, iParam0->f_12, false);
	
		TASK::_0xE69FDA40AAC3EFC0(iParam0->f_23, 0);
		iParam0->f_15 = 1;
		return 1;
	}

	return 0;
}

float func_517(float fParam0, float fParam1, float fParam2, int iParam3) // Position - 0x14E59 Hash - 0x3A11F625 ^0x3A11F625
{
	float num;

	num = fParam0;
	num = num + (fParam2 * (float)iParam3);

	if (num > fParam1)
		num = fParam1;

	return num;
}

float func_518(float fParam0, float fParam1, float fParam2) // Position - 0x14E7E Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

Ped func_519(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x14EA5 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_526(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_520(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x14EE7 Hash - 0x6B75AC83 ^0x6B75AC83
{
	if (bParam2)
		return func_527(hParam1);

	return func_301(iParam0, hParam1);
}

BOOL func_521(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x14F08 Hash - 0x6B75AC83 ^0x6B75AC83
{
	if (bParam2)
		return func_528(hParam1);

	return func_364(iParam0, hParam1);
}

void func_522(int iParam0, Hash hParam1, BOOL bParam2) // Position - 0x14F29 Hash - 0x2CE3C411 ^0x2CE3C411
{
	if (bParam2)
		func_529(hParam1);
	else
		func_32(iParam0, hParam1);

	return;
}

float func_523(var uParam0, var uParam1, float fParam2) // Position - 0x14F47 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * uParam0) + (fParam2 * uParam1);
}

Vector3 func_524(Vector3 vParam0, var uParam1, var uParam2, float fParam3) // Position - 0x14F5C Hash - 0x88200B15 ^0xE07B704A
{
	float num;

	if (fParam3 == 0f)
		return 0f, 0f, 0f;

	num = BUILTIN::VMAG(vParam0);

	if (num != 0f)
		return vParam0 * { fParam3 / num, fParam3 / num, fParam3 / num };

	return 0f, 0f, 0f;
}

int func_525(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, Any anParam5, Any anParam6, BOOL bParam7) // Position - 0x14F93 Hash - 0x9EF7DC49 ^0x7633F111
{
	return TASK::CREATE_SCENARIO_POINT_HASH(hParam0, vParam1, fParam4, anParam5, anParam6, bParam7);
}

void func_526(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x14FAD Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_530(eptParam1))
		{
			func_531(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_532(pedParam0, 0, true);
	
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
			func_533(pedParam0, false);
			flag = true;
		}
	
		func_437(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_527(Hash hParam0) // Position - 0x1508E Hash - 0xA23CBB08 ^0xA23CBB08
{
	int num;

	num = -1;

	if (func_534(hParam0, &num))
		return func_535(num);

	return false;
}

BOOL func_528(Hash hParam0) // Position - 0x150AE Hash - 0xC7FB2999 ^0xC7FB2999
{
	int num;

	if (func_536(hParam0))
		return 0;

	if (!func_67(Global_35, 0))
		return 0;

	num = -1;

	if (!func_534(hParam0, &num))
		return 0;

	func_527(hParam0);

	if (PED::_0x1E017404784AA6A3(Global_35, hParam0))
	{
		func_537(hParam0, true);
		return 1;
	}

	return 0;
}

void func_529(Hash hParam0) // Position - 0x1510A Hash - 0x6D182C1C ^0x6D182C1C
{
	int num;

	if (!func_134(hParam0))
		return;

	num = -1;

	if (func_534(hParam0, &num))
		func_538(num);

	return;
}

BOOL func_530(ePedType eptParam0) // Position - 0x15133 Hash - 0x5000025C ^0x5000025C
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

void func_531(Ped pedParam0, Hash hParam1) // Position - 0x15586 Hash - 0xEA1C858E ^0x245DDBC0
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_223(pedParam0, hParam1))
		{
			if (func_338(pedParam0, hParam1))
			{
				if (func_339(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_340(pedParam0);
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

void func_532(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x15630 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_533(Ped pedParam0, BOOL bParam1) // Position - 0x15660 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_534(Hash hParam0, var uParam1) // Position - 0x156A5 Hash - 0x5AE5648 ^0x5AE5648
{
	*uParam1 = 0;

	while (*uParam1 < 15)
	{
		if (Global_40.f_4237[*uParam1 /*3*/] == hParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	*uParam1 = -1;
	return false;
}

BOOL func_535(int iParam0) // Position - 0x156DD Hash - 0x37B65DF4 ^0xAAF87AA1
{
	if (iParam0 < 0 || iParam0 >= 15)
		return false;

	return MISC::IS_BIT_SET(Global_1347701, iParam0);
}

BOOL func_536(Hash hParam0) // Position - 0x15705 Hash - 0x89B17C93 ^0xBA1AAD59
{
	int num;

	if (!func_534(hParam0, &num))
		return false;

	return Global_40.f_4237[num /*3*/].f_2;
}

void func_537(Hash hParam0, BOOL bParam1) // Position - 0x15729 Hash - 0x84F137F ^0x84F137F
{
	int num;

	num = -1;

	if (func_534(hParam0, &num))
		func_539(num, bParam1);

	return;
}

void func_538(int iParam0) // Position - 0x15747 Hash - 0xDAEBBAAC ^0xDAEBBAAC
{
	int i;

	func_540(&Global_40.f_4237[iParam0 /*3*/]);

	if (func_134(Global_40.f_4237[iParam0 /*3*/]))
		return;

	for (i = 0; i < 15; i = i + 1)
	{
		if (i < iParam0)
		{
		}
		else if (i < 14 && func_134(Global_40.f_4237[i + 1 /*3*/]))
		{
			Global_40.f_4237[i /*3*/] = Global_40.f_4237[i + 1 /*3*/];
			Global_40.f_4237[i /*3*/].f_1 = Global_40.f_4237[i + 1 /*3*/].f_1;
			Global_40.f_4237[i /*3*/].f_2 = Global_40.f_4237[i + 1 /*3*/].f_2;
			func_539(i, func_535(i + 1));
			func_303(&Global_40.f_4237[i + 1 /*3*/]);
			func_539(i + 1, false);
		}
	}

	return;
}

void func_539(int iParam0, BOOL bParam1) // Position - 0x1581C Hash - 0x7788B703 ^0x1FD35900
{
	if (iParam0 < 0 || iParam0 >= 15)
		return;

	if (bParam1)
		if (!MISC::IS_BIT_SET(Global_1347701, iParam0))
			MISC::SET_BIT(&Global_1347701, iParam0);
	else if (MISC::IS_BIT_SET(Global_1347701, iParam0))
		MISC::CLEAR_BIT(&Global_1347701, iParam0);

	return;
}

void func_540(Hash hParam0) // Position - 0x15870 Hash - 0x7C565062 ^0x591867C7
{
	if (func_67(Global_35, 0) && func_527(*hParam0) && PED::_0x7C8AA850617651D9(Global_35, *hParam0))
		func_541(*hParam0);

	if (!func_67(Global_35, 0) || !func_527(*hParam0) || !PED::_0x7C8AA850617651D9(Global_35, *hParam0))
		func_303(hParam0);

	return;
}

void func_541(Hash hParam0) // Position - 0x158DC Hash - 0xE2596597 ^0x7D9D2199
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		PED::_0x2B4CE170DE09F346(Global_35, hParam0);

	func_537(hParam0, false);
	return;
}

