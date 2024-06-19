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
	Hash hLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 37;
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
	var uLocal_52 = -1;
	var uLocal_53 = 2;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 37;
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
	var uLocal_97 = 2;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1;
	var uLocal_101 = 0;
	var uLocal_102 = 4;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x66E01F97 ^0xE7A92CDC
{
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}

	func_2();
	flag = false;

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && !flag)
	{
		func_3(&flag);
		BUILTIN::WAIT(0);
	}

	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x4E Hash - 0xAB6A4751 ^0xED41B0D4
{
	func_4();
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hLocal_9);
	return;
}

void func_2() // Position - 0x60 Hash - 0x2F53150C ^0x2DC28D8F
{
	Hash i;

	func_5();
	hLocal_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "cheats");
	hLocal_9.f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hLocal_9, "currentSelection");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hLocal_9.f_3, func_6(12), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hLocal_9.f_3, func_6(13), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hLocal_9.f_3, func_6(16), MISC::GET_HASH_KEY(""));
	hLocal_9.f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hLocal_9, "currentGroup");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hLocal_9.f_2, func_6(14), MISC::GET_HASH_KEY("PM_SCR_CHEATS"));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hLocal_9.f_2, func_6(15), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hLocal_9.f_2, func_6(16), MISC::GET_HASH_KEY(""));
	hLocal_9.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(hLocal_9, "dynamicList");

	for (i = 0; i <= 36; i = i + 1)
	{
		func_7(i);
	}

	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_3, func_6(13), MISC::GET_HASH_KEY(func_8(0)));
	func_9();
	func_10();
	return;
}

void func_3(var uParam0) // Position - 0x154 Hash - 0xCAF78888 ^0x1FE435A2
{
	int eventData;
	Hash hash;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("CHEATS_MENU")))
	{
		if (!UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("CHEATS_MENU"), &eventData))
			break;
	
		switch (eventData)
		{
			case -2075827635:
				switch (eventData.f_2)
				{
					case joaat("CHEAT_MENU_RETURN_TO_SETTINGS"):
						*uParam0 = 1;
						break;
				
					case joaat("CHEAT_MENU_CONFIRM_ACTIVATE"):
						func_14();
						func_15();
						func_12(hLocal_9.f_43);
						hLocal_9.f_47 = 1;
						break;
				
					case joaat("CHEAT_MENU_CANCEL_ACTIVATE"):
						func_13();
						break;
				}
				break;
		
			case -1740156697:
				if (eventData.f_1 < 0 || eventData.f_1 >= 37)
					break;
			
				if (hLocal_9.f_43 != eventData.f_1)
					if (hLocal_9.f_43 != -1)
						func_11(hLocal_9.f_43);
			
				hLocal_9.f_43 = eventData.f_1;
				func_12(hLocal_9.f_43);
				break;
		
			case -1203660660:
				if (func_16() || hLocal_9.f_47)
				{
					func_15();
					func_12(hLocal_9.f_43);
				}
				else
				{
					UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("settings_menu"), -1882247919);
				}
				break;
		
			case -1151569080:
				func_17();
			
				if (func_18(hLocal_9.f_43))
					UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("settings_menu"), -1882247919);
				else
					func_12(hLocal_9.f_43);
				break;
		
			case -632467210:
				break;
		
			case 1933864603:
				hash = func_19(eventData.f_2);
			
				if (hash == -1)
				{
					if (eventData.f_2 == 0)
						break;
				
					UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("settings_menu"), 415950302);
					break;
				}
			
				if (func_20(hash))
				{
					UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("settings_menu"), -1954024225);
					break;
				}
			
				if (func_21(hash) == 0)
				{
					if (!func_22(hash))
					{
						UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("settings_menu"), -1001071426);
						break;
					}
				}
			
				UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("settings_menu"), 526258797);
				func_23(hash);
				break;
		
			default:
				break;
		}
	
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("CHEATS_MENU"));
	}

	return;
}

void func_4() // Position - 0x32E Hash - 0x67293CE0 ^0x163A9EB2
{
	int i;
	int num;
	int num2;
	int num3;

	for (i = 0; i <= hLocal_9.f_42 - 1; i = i + 1)
	{
		num3 = hLocal_9.f_4[i];
	
		if (num3 == 0)
		{
		}
		else
		{
			num = func_24(num3);
		
			if (func_25(num3) == joaat("CHEAT_LOCKED") || func_25(num3) == joaat("CURRENT_OPTION_LOCKED"))
			{
			}
			else if (func_26(num))
			{
			}
			else
			{
				num2 = func_27(num);
			
				switch (num2)
				{
					case 0:
						func_28(num3);
						break;
				
					case 1:
						func_29(num3);
						break;
				
					case 2:
						func_30(num3);
						break;
				
					default:
						break;
				}
			}
		}
	}

	return;
}

void func_5() // Position - 0x3D8 Hash - 0x294F69A8 ^0x75137E02
{
	hLocal_9.f_49 = 999999900 - func_31(1);

	if (func_32() != -1)
		hLocal_9.f_48 = func_32() / 50000;

	return;
}

char* func_6(int iParam0) // Position - 0x404 Hash - 0xC9837A7A ^0xC9837A7A
{
	switch (iParam0)
	{
		case 0:
			return "name";
	
		case 1:
			return "description";
	
		case 2:
			return "tipText";
	
		case 3:
			return "infoBox";
	
		case 4:
			return "converter";
	
		case 5:
			return "lockedState";
	
		case 6:
			return "recentlyUnlocked";
	
		case 7:
			return "active";
	
		case 8:
			return "activeText";
	
		case 9:
			return "value";
	
		case 10:
			return "minimum";
	
		case 11:
			return "maximum";
	
		case 12:
			return "infoBox";
	
		case 13:
			return "description";
	
		case 14:
			return "name";
	
		case 15:
			return "description";
	
		case 16:
			return "tipText";
	
		case 17:
			return "cheat";
	
		case 18:
			return "textValue";
	
		default:
		
	}

	return "";
}

void func_7(Hash hParam0) // Position - 0x4FD Hash - 0x304892A0 ^0x37E0B99A
{
	Hash hash;
	int num;
	int num2;
	int num3;

	num3 = func_33(hParam0);

	if (num3 != 0 && func_34(&(hLocal_9.f_91), num3, 1))
	{
		hLocal_9.f_50[hParam0] = hLocal_9.f_88[num3];
		return;
	}

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hLocal_9.f_1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(hParam0));
	num = func_27(hParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, func_6(0), MISC::GET_HASH_KEY(func_36(hParam0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, func_6(1), MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(hParam0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, func_6(2), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, func_6(3), MISC::GET_HASH_KEY(""));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, func_6(4), func_38(num));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, func_6(5), func_39(hParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, func_6(6), false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(hash, func_6(17), hParam0);

	switch (num)
	{
		case 0:
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, func_6(9), false);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, func_6(10), false);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, func_6(11), true);
		
			if (hParam0 == 6)
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, func_6(7), false);
			
				if (func_32() == -1)
				{
					if (hLocal_9.f_49 <= 0)
						DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					else
						DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, func_6(8), "");
				}
				else
				{
					if (func_32() >= hLocal_9.f_49)
						DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					else
						DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED", func_32()));
				
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hash, func_6(9), true);
				}
			}
			else
			{
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, func_6(7), func_40(hParam0));
			}
			break;
	
		case 1:
			DATABINDING::_DATABINDING_ADD_DATA_INT(hash, func_6(9), func_40(hParam0) ? 1 : 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(hash, func_6(10), 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(hash, func_6(11), 1);
			break;
	
		case 2:
			hLocal_9.f_44[num3] = func_42(num3) + 1;
		
			if (hLocal_9.f_44[num3] == 0)
			{
				num2 = func_43(num3);
			
				if (num2 != -1)
					hLocal_9.f_44[num3] = func_44(num3, num2) + 1;
			}
		
			DATABINDING::_DATABINDING_ADD_DATA_INT(hash, func_6(9), hLocal_9.f_44[num3]);
			DATABINDING::_DATABINDING_ADD_DATA_INT(hash, func_6(10), 0);
			DATABINDING::_DATABINDING_ADD_DATA_INT(hash, func_6(11), func_45(num3));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, func_6(18), func_46(hLocal_9.f_44[num3]));
		
			if (func_47(num3))
				if (hLocal_9.f_44[num3] == 0)
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, func_6(5), joaat("UNLOCKED"));
				else
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, func_6(5), func_39(func_48(num3)));
			else
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hash, func_6(5), joaat("CHEAT_LOCKED"));
			break;
	
		default:
			break;
	}

	if (num3 != 0)
	{
		func_49(&(hLocal_9.f_91), num3, 1);
		hLocal_9.f_88[num3] = hLocal_9.f_42;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(hLocal_9.f_1, hLocal_9.f_42, func_50(num), hash);
	hLocal_9.f_4[hLocal_9.f_42] = hash;
	hLocal_9.f_50[hParam0] = hLocal_9.f_42;
	hLocal_9.f_42 = hLocal_9.f_42 + 1;
	return;
}

char* func_8(int iParam0) // Position - 0x83E Hash - 0x646DC5E7 ^0xA4357C99
{
	int num;
	Hash hash;
	Hash hash2;
	BOOL flag;

	hash = func_24(hLocal_9.f_4[iParam0]);
	num = func_25(hLocal_9.f_4[iParam0]);
	flag = func_51(hLocal_9.f_4[iParam0]);

	switch (num)
	{
		case joaat("CHEAT_LOCKED"):
		case joaat("CURRENT_OPTION_LOCKED"):
			return "CHEAT_UNLOCK_DESCRIPTION";
	
		case joaat("UNLOCKED"):
			if (func_40(hash) || flag)
			{
				if (func_52(hash))
				{
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				}
				else if (func_53(hash))
				{
					hash2 = func_48(func_33(hash));
				
					if (hash2 == -1)
						return func_54(func_33(hash));
					else
						return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(hash2);
				}
				else if (hash == 6)
				{
					return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(hash);
				}
				else
				{
					return "CHEAT_ACTIVATED_DESCRIPTION";
				}
			}
			else
			{
				return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(hash);
			}
			break;
	
		case 866112557:
			if (func_26(hash))
				return "CHEAT_DISABLED_DESCRIPTION";
			else if (func_40(hash) || flag)
				if (func_52(hash))
					return "CHEAT_ACTIVATED_ONE_TIME_USE";
				else if (hash == 6)
					return "CHEAT_ACTIVATED_MONEY_MAX";
				else
					return "CHEAT_ACTIVATED_DESCRIPTION";
			else if (hash == 6)
				return "CHEAT_ACTIVATED_MONEY_MAX";
			else
				return "CHEAT_DISABLED_DESCRIPTION";
			break;
	
		default:
			break;
	}

	return "CHEATS_GROUP_DESC";
}

void func_9() // Position - 0x98A Hash - 0x18419F6 ^0x18419F6
{
	int i;
	int num;

	for (i = 0; i <= 1; i = i + 1)
	{
		num = i;
	
		if (num == 0 || num == -1)
		{
		}
		else
		{
			func_55(num);
		}
	}

	return;
}

void func_10() // Position - 0x9C2 Hash - 0xA36E8183 ^0x402DBA4F
{
	int i;
	Hash hash;
	int num;

	for (i = 0; i <= 3; i = i + 1)
	{
		num = i;
	
		if (num == -1 || num == 0)
		{
			hLocal_9.f_93[i] = -1;
		}
		else
		{
			hash = func_56(num);
		
			if (hash == -1)
			{
				hLocal_9.f_93[i] = -1;
			}
			else
			{
				hLocal_9.f_93[i] = hLocal_9.f_50[hash];
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[i]], func_6(9), true);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[i]], func_6(7), true);
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[i]], func_6(5), 866112557);
			}
		}
	}

	return;
}

void func_11(int iParam0) // Position - 0xA74 Hash - 0xBF3501E9 ^0xE4CEC345
{
	if (0 == hLocal_9.f_4[iParam0])
		return;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(6)))
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(6), false);

	return;
}

void func_12(int iParam0) // Position - 0xAB1 Hash - 0xC99E7BB ^0x174E4BAB
{
	Hash hash;

	hash = func_24(hLocal_9.f_4[iParam0]);

	if (func_53(hash))
	{
		func_55(func_33(hash));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_3, func_6(13), func_57(hLocal_9.f_4[iParam0]));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_3, func_6(13), MISC::GET_HASH_KEY(func_8(iParam0)));
	}

	return;
}

void func_13() // Position - 0xB0F Hash - 0xDD44705B ^0x583C1D1E
{
	Hash hash;
	int num;
	int num2;

	hash = func_24(hLocal_9.f_4[hLocal_9.f_43]);
	num = func_27(hash);

	switch (num)
	{
		case 0:
			break;
	
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(9), 0);
			break;
	
		case 2:
			if (!func_53(hash))
				break;
		
			num2 = func_33(hash);
			hLocal_9.f_44[num2] = 0;
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(9), 0);
			break;
	
		default:
			break;
	}

	return;
}

void func_14() // Position - 0xB9D Hash - 0xD4ABC353 ^0x1B0C2C52
{
	Global_1425247.f_53 = 1;
	return;
}

void func_15() // Position - 0xBAC Hash - 0x6F7606AD ^0x9B3181DE
{
	Hash hash;
	Hash hash2;
	int num;
	int num2;
	int num3;

	hash = func_24(hLocal_9.f_4[hLocal_9.f_43]);
	num = func_27(hash);

	switch (num)
	{
		case 0:
			if (func_58(hash))
			{
				num2 = func_59(hash);
			
				if (num2 != -1 && num2 != 0)
				{
					if (hLocal_9.f_93[num2] != -1)
					{
						if (func_60(hash) != 0)
							if (func_61())
								break;
					
						hash2 = func_24(hLocal_9.f_4[hLocal_9.f_93[num2]]);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[num2]], func_6(9), false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[num2]], func_6(7), false);
					
						if (func_26(hash2))
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[num2]], func_6(5), 866112557);
						else if (func_20(hash2))
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[num2]], func_6(5), joaat("UNLOCKED"));
						else
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_93[num2]], func_6(5), joaat("CHEAT_LOCKED"));
					}
				}
			
				hLocal_9.f_93[num2] = hLocal_9.f_43;
			}
		
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(6), false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(9), true);
		
			if (hash == 6)
			{
				hLocal_9.f_48 = hLocal_9.f_48 + 1;
				num3 = 50000 * hLocal_9.f_48;
				num3 = func_62(num3, 0, hLocal_9.f_49);
				func_63(num3);
			
				if (num3 >= hLocal_9.f_49)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED_MAX"));
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(5), 866112557);
				}
				else
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(8), MISC::VAR_STRING(2, "CHEAT_TIP_AMOUNT_ADDED", num3));
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(7), true);
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[hLocal_9.f_43], func_6(5), 866112557);
			}
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_16() // Position - 0xDD4 Hash - 0x4228A1C2 ^0x2858938F
{
	return Global_1425247.f_53;
}

void func_17() // Position - 0xDE2 Hash - 0xDF6459F ^0xFC1AF03C
{
	int num;
	Hash hash;
	int num2;

	num = hLocal_9.f_43;
	hash = func_24(hLocal_9.f_4[num]);

	if (!func_53(hash))
		return;

	num2 = func_33(hash);
	hLocal_9.f_44[func_33(hash)] = func_64(hLocal_9.f_4[num]);
	func_65(num, hLocal_9.f_44[num2], num2);
	return;
}

BOOL func_18(int iParam0) // Position - 0xE3B Hash - 0xA34908BF ^0xFE1B5C25
{
	if (func_16())
		return false;

	if (hLocal_9.f_47)
		return false;

	if (func_64(hLocal_9.f_4[iParam0]) == 0)
		return false;

	return func_25(hLocal_9.f_4[iParam0]) == joaat("UNLOCKED");
}

Hash func_19(int iParam0) // Position - 0xE7F Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case -2101408762:
			return 32;
	
		case -1815939956:
			return 24;
	
		case -1761439609:
			return 23;
	
		case -1738520838:
			return 33;
	
		case -1622621761:
			return 5;
	
		case -1591149431:
			return 8;
	
		case -1241222984:
			return 27;
	
		case -1135265458:
			return 1;
	
		case -947916363:
			return 13;
	
		case -607335704:
			return 6;
	
		case -568384875:
			return 18;
	
		case -398091677:
			return 20;
	
		case -372443002:
			return 19;
	
		case -307358511:
			return 16;
	
		case -204990980:
			return 2;
	
		case -55979384:
			return 25;
	
		case 51531122:
			return 11;
	
		case 191810668:
			return 3;
	
		case 230711733:
			return 29;
	
		case 532296387:
			return 28;
	
		case 581914968:
			return 0;
	
		case 628479678:
			return 10;
	
		case joaat("u_f_m_casinoshopkeeper_01"):
			return 35;
	
		case 754345461:
			return 15;
	
		case 811595622:
			return 4;
	
		case 849826687:
			return 26;
	
		case 1006082220:
			return 34;
	
		case joaat("share"):
			return 9;
	
		case 1129394776:
			return 14;
	
		case 1176666639:
			return 12;
	
		case 1287277822:
			return 30;
	
		case 1376520660:
			return 22;
	
		case 1398216266:
			return 21;
	
		case 1610351013:
			return 7;
	
		case 1783177390:
			return 31;
	
		case 1956723308:
			return 36;
	
		case 2110824426:
			return 17;
	
		default:
		
	}

	return -1;
}

BOOL func_20(Hash hParam0) // Position - 0x1022 Hash - 0x56E248CB ^0x56E248CB
{
	return func_34(&(Global_40.f_12000), hParam0, 2);
}

int func_21(Hash hParam0) // Position - 0x1037 Hash - 0x29D94A80 ^0x29D94A80
{
	switch (hParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 0;
	
		case 3:
			return 2;
	
		case 4:
			return 2;
	
		case 5:
			return 0;
	
		case 6:
			return 2;
	
		case 7:
			return 1;
	
		case 8:
			return 2;
	
		case 9:
			return 1;
	
		case 10:
			return 0;
	
		case 11:
			return 2;
	
		case 12:
			return 2;
	
		case 13:
			return 2;
	
		case 14:
			return 0;
	
		case 15:
			return 2;
	
		case 16:
			return 2;
	
		case 17:
			return 2;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 1;
	
		case 21:
			return 2;
	
		case 22:
			return 0;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 31:
			return 2;
	
		case 32:
			return 1;
	
		case 33:
			return 0;
	
		case 34:
			return 1;
	
		case 35:
			return 2;
	
		case 36:
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_22(Hash hParam0) // Position - 0x11BD Hash - 0x545C9AF7 ^0x545C9AF7
{
	int i;

	if (func_20(hParam0))
		return true;

	for (i = 0; i <= func_66(hParam0) - 1; i = i + 1)
	{
		if (func_68(func_67(hParam0, i)))
			return true;
	}

	return false;
}

void func_23(Hash hParam0) // Position - 0x11FF Hash - 0x82260BC9 ^0xEB19DD84
{
	int num;

	num = hLocal_9.f_50[hParam0];

	if (0 == hLocal_9.f_4[num])
		return;

	func_69(hParam0);

	if (func_53(hParam0))
	{
		if (func_25(hLocal_9.f_4[num]) != joaat("CHEAT_LOCKED"))
		{
			if (!func_70(hParam0, hLocal_9.f_44[func_33(hParam0)]))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[num], func_6(6), true);
				return;
			}
		}
	}

	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[num], func_6(5), func_39(hParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(hLocal_9.f_4[num], func_6(6), true);
	return;
}

Hash func_24(int iParam0) // Position - 0x1297 Hash - 0xBCF7DF4C ^0xBF9F8118
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(17));
}

int func_25(int iParam0) // Position - 0x12AB Hash - 0xF04FF4C5 ^0x36AC76F1
{
	return DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, func_6(5));
}

BOOL func_26(Hash hParam0) // Position - 0x12BE Hash - 0x2D7520DB ^0x49875250
{
	return func_71() || func_72() || func_34(&(Global_1425247.f_3), hParam0, 2) || func_73(hParam0);
}

int func_27(Hash hParam0) // Position - 0x12F3 Hash - 0x7D0AD2D3 ^0x7D0AD2D3
{
	if (func_53(hParam0))
		return 2;

	if (func_74(hParam0))
		return 1;

	return 0;
}

void func_28(int iParam0) // Position - 0x1316 Hash - 0xFC63E379 ^0xFC63E379
{
	int num;

	num = func_24(iParam0);

	if (num == -1)
		return;

	if (!func_20(num))
		return;

	if (!func_75(iParam0))
	{
		if (!func_52(num))
			if (func_40(num))
				func_76(num);
	
		return;
	}

	func_77(num);

	switch (num)
	{
		case 5:
			func_78();
			break;
	}

	return;
}

void func_29(int iParam0) // Position - 0x137D Hash - 0x1009D454 ^0x1009D454
{
	int num;
	int num2;

	num = func_24(iParam0);

	if (num == -1)
		return;

	if (!func_20(num))
		return;

	num2 = func_64(iParam0);

	if (func_40(num))
		if (num2 <= 0)
			func_79(num);
	else if (num2 == 1)
		func_77(num);

	return;
}

void func_30(int iParam0) // Position - 0x13CF Hash - 0xE87F8D01 ^0xE87F8D01
{
	int num;
	Hash num2;
	Hash num3;
	int num4;
	Hash num5;

	num4 = func_24(iParam0);

	if (!func_53(num4))
		return;

	num = func_33(num4);
	num2 = func_48(num);
	num3 = func_80(num);

	if (num2 == num3 && num3 != -1)
		return;

	num5 = func_43(num);

	if (num2 == num5 && num5 != -1)
		return;

	if (num2 == -1)
	{
		if (num3 == -1)
			if (num5 != -1)
				func_76(num5);
		else
			func_79(num3);
	}
	else if (func_20(num2) && !func_26(num2))
	{
		if (num5 != -1)
			func_76(num5);
	
		func_77(num2);
	}

	return;
}

int func_31(int iParam0) // Position - 0x1482 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_32() // Position - 0x148E Hash - 0x4228A1C2 ^0x266C7521
{
	return Global_1425247.f_58;
}

int func_33(Hash hParam0) // Position - 0x149C Hash - 0xEE8487F4 ^0xEE8487F4
{
	switch (hParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 0;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	
		case 14:
			return 0;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 0;
	
		case 21:
			return 0;
	
		case 22:
			return 0;
	
		case 23:
			return 0;
	
		case 24:
			return 0;
	
		case 25:
			return 0;
	
		case 26:
			return 0;
	
		case 27:
			return 0;
	
		case 28:
			return 0;
	
		case 29:
			return 0;
	
		case 30:
			return 0;
	
		case 31:
			return 0;
	
		case 32:
			return 0;
	
		case 33:
			return 0;
	
		case 34:
			return 0;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		default:
		
	}

	return -1;
}

BOOL func_34(var uParam0, int iParam1, int iParam2) // Position - 0x1622 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0x1659 Hash - 0xA17D549C ^0xFB3409A4
{
	switch (hParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO";
	
		case 1:
			return "CHEAT_BASIC_WEAPONS";
	
		case 2:
			return "CHEAT_HEAVY_WEAPONS";
	
		case 3:
			return "CHEAT_STEALTH_WEAPONS";
	
		case 4:
			return "CHEAT_GUNSLINGER";
	
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR";
	
		case 6:
			return "CHEAT_ADD_MONEY";
	
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS";
	
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES";
	
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX";
	
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX";
	
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN";
	
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL";
	
		case 13:
			return "CHEAT_INFINITE_DEADEYE";
	
		case 14:
			return "CHEAT_INFINITE_STAMINA";
	
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1";
	
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2";
	
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3";
	
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4";
	
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5";
	
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL";
	
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL";
	
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED";
	
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX";
	
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE";
	
		case 25:
			return "CHEAT_BECOME_DRUNK";
	
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE";
	
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE";
	
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE";
	
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE";
	
		case 30:
			return "CHEAT_SPAWN_STAGECOACH";
	
		case 31:
			return "CHEAT_SPAWN_WAGON";
	
		case 32:
			return "CHEAT_SPAWN_BUGGY";
	
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON";
	
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1";
	
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1";
	
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS";
	
		default:
		
	}

	return "UNKNOWN_CHEAT";
}

char* func_36(Hash hParam0) // Position - 0x1851 Hash - 0x20EAD956 ^0xEA2DBCEF
{
	switch (func_33(hParam0))
	{
		case 0:
			return AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(hParam0);
	
		case 1:
			return "CHEAT_DEADEYE_LEVEL";
	
		default:
		
	}

	return "";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Hash hParam0) // Position - 0x1886 Hash - 0xA17D549C ^0x50B95701
{
	switch (hParam0)
	{
		case 0:
			return "CHEAT_INFINITE_AMMO_DESC";
	
		case 1:
			return "CHEAT_BASIC_WEAPONS_DESC";
	
		case 2:
			return "CHEAT_HEAVY_WEAPONS_DESC";
	
		case 3:
			return "CHEAT_STEALTH_WEAPONS_DESC";
	
		case 4:
			return "CHEAT_GUNSLINGER_DESC";
	
		case 5:
			return "CHEAT_REMOVE_FOG_OF_WAR_DESC";
	
		case 6:
			return "CHEAT_ADD_MONEY_DESC";
	
		case 7:
			return "CHEAT_UNLOCK_ALL_PLAYER_OUTFITS_DESC";
	
		case 8:
			return "CHEAT_UNLOCK_ALL_RECIPES_DESC";
	
		case 9:
			return "CHEAT_INCREASE_CAMP_UPGRADES_TO_MAX_DESC";
	
		case 10:
			return "CHEAT_INCREASE_HONOR_TO_MAX_DESC";
	
		case 11:
			return "CHEAT_DECREASE_HONOR_TO_MIN_DESC";
	
		case 12:
			return "CHEAT_RESET_HONOR_TO_NEUTRAL_DESC";
	
		case 13:
			return "CHEAT_INFINITE_DEADEYE_DESC";
	
		case 14:
			return "CHEAT_INFINITE_STAMINA_DESC";
	
		case 15:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_1_DESC";
	
		case 16:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_2_DESC";
	
		case 17:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_3_DESC";
	
		case 18:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_4_DESC";
	
		case 19:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_5_DESC";
	
		case 20:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_DESC";
	
		case 21:
			return "CHEAT_SET_RPG_TANK_STAT_LEVEL_TO_FULL_DESC";
	
		case 22:
			return "CHEAT_SET_RPG_TANKS_TO_FULL_AND_OVERPOWERED_DESC";
	
		case 23:
			return "CHEAT_INCREASE_HORSE_BOND_TO_MAX_DESC";
	
		case 24:
			return "CHEAT_SET_HORSE_TO_SPAWN_NEAR_PLAYER_ON_WHISTLE_DESC";
	
		case 25:
			return "CHEAT_BECOME_DRUNK_DESC";
	
		case 26:
			return "CHEAT_SPAWN_RACE_HORSE_DESC";
	
		case 27:
			return "CHEAT_SPAWN_WAR_HORSE_DESC";
	
		case 28:
			return "CHEAT_SPAWN_SUPERIOR_HORSE_DESC";
	
		case 29:
			return "CHEAT_SPAWN_RANDOM_HORSE_DESC";
	
		case 30:
			return "CHEAT_SPAWN_STAGECOACH_DESC";
	
		case 31:
			return "CHEAT_SPAWN_WAGON_DESC";
	
		case 32:
			return "CHEAT_SPAWN_BUGGY_DESC";
	
		case 33:
			return "CHEAT_SPAWN_CIRCUS_WAGON_DESC";
	
		case 34:
			return "CHEAT_INCREASE_WANTED_LEVEL_BY_1_DESC";
	
		case 35:
			return "CHEAT_DECREASE_WANTED_LEVEL_BY_1_DESC";
	
		case 36:
			return "CHEAT_CLEAR_ALL_BOUNTIES_AND_LOCKDOWN_AREAS_DESC";
	
		default:
		
	}

	return "UNKNOWN_CHEAT";
}

Hash func_38(int iParam0) // Position - 0x1A7E Hash - 0x8E3F0CE8 ^0xCFA69C33
{
	switch (iParam0)
	{
		case 0:
			return 268532472;
	
		case 1:
			return 268532472;
	
		case 2:
			return 0;
	
		default:
		
	}

	return 0;
}

Hash func_39(Hash hParam0) // Position - 0x1AB8 Hash - 0x4CF899D1 ^0xD3303D0C
{
	int num;
	int num2;

	if (func_53(hParam0))
	{
		num = func_33(hParam0);
	
		if (func_47(num))
			if (func_26(hParam0))
				return 866112557;
			else if (func_20(hParam0))
				return joaat("UNLOCKED");
			else
				return joaat("CURRENT_OPTION_LOCKED");
		else
			return joaat("CHEAT_LOCKED");
	}

	if (func_20(hParam0))
	{
		if (func_26(hParam0))
		{
			return 866112557;
		}
		else if (hParam0 == 6)
		{
			if (hLocal_9.f_49 <= 0 || func_32() >= hLocal_9.f_49)
				return 866112557;
			else
				return joaat("UNLOCKED");
		}
		else if (func_60(hParam0) != 0)
		{
			if (func_61())
				return 866112557;
			else
				return joaat("UNLOCKED");
		}
		else if (func_40(hParam0))
		{
			num2 = func_27(hParam0);
		
			if (num2 == 0)
				return 866112557;
			else
				return joaat("UNLOCKED");
		}
		else
		{
			return joaat("UNLOCKED");
		}
	}

	return joaat("CHEAT_LOCKED");
}

BOOL func_40(Hash hParam0) // Position - 0x1BCD Hash - 0x371B79E5 ^0x371B79E5
{
	return func_34(&Global_1425247, hParam0, 2);
}

var func_41(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1BE0 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_42(int iParam0) // Position - 0x1BF7 Hash - 0xEADECD06 ^0xEADECD06
{
	int i;
	int num;

	num = func_80(iParam0);

	if (num == -1)
		return -1;

	for (i = 0; i <= func_81(iParam0) - 1; i = i + 1)
	{
		if (func_82(iParam0, i) == num)
			return i;
	}

	return -1;
}

int func_43(int iParam0) // Position - 0x1C3D Hash - 0x7B2F1B4A ^0x7B2F1B4A
{
	int i;
	int num;
	int num2;

	num = func_81(iParam0);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num2 = func_82(iParam0, i);
	
		if (num2 == -1)
		{
		}
		else if (func_83(num2) == 4)
		{
			return num2;
		}
	}

	return -1;
}

int func_44(int iParam0, int iParam1) // Position - 0x1C85 Hash - 0xAB4FEB54 ^0xAB4FEB54
{
	int i;
	int num;

	num = func_81(iParam0);

	if (iParam1 == -1)
		return -1;

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (iParam1 == func_82(iParam0, i))
			return i;
	}

	return -1;
}

Hash func_45(int iParam0) // Position - 0x1CC7 Hash - 0xE9D0A209 ^0xE9D0A209
{
	Hash i;
	Hash num;
	Hash hash;

	for (i = 0; i <= 36; i = i + 1)
	{
		hash = i;
	
		if (func_33(hash) == iParam0)
			num = num + 1;
	}

	return num;
}

Hash func_46(int iParam0) // Position - 0x1CF9 Hash - 0xAE1686BB ^0xCB39D62D
{
	Hash num;

	num = -1;

	switch (iParam0)
	{
		case 0:
			num = joaat("CHEAT_OFF");
			break;
	
		case 1:
			num = joaat("CHEAT_LEVEL_1");
			break;
	
		case 2:
			num = joaat("CHEAT_LEVEL_2");
			break;
	
		case 3:
			num = joaat("CHEAT_LEVEL_3");
			break;
	
		case 4:
			num = joaat("CHEAT_LEVEL_4");
			break;
	
		case 5:
			num = joaat("CHEAT_LEVEL_5");
			break;
	}

	return num;
}

BOOL func_47(int iParam0) // Position - 0x1D6D Hash - 0x912EAE9A ^0x912EAE9A
{
	int i;
	int num;
	int num2;

	num = func_81(iParam0);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num2 = func_82(iParam0, i);
	
		if (num2 == -1)
		{
		}
		else if (func_20(num2))
		{
			return true;
		}
	}

	return false;
}

Hash func_48(int iParam0) // Position - 0x1DB3 Hash - 0x198612F3 ^0x4EFCCBE3
{
	if (hLocal_9.f_44[iParam0] == 0)
		return -1;

	return func_82(iParam0, hLocal_9.f_44[iParam0] - 1);
}

BOOL func_49(var uParam0, Hash hParam1, int iParam2) // Position - 0x1DDB Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = hParam1 / 31;
	offset = hParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

Hash func_50(int iParam0) // Position - 0x1E0E Hash - 0x6E0105E8 ^0x32297B17
{
	switch (iParam0)
	{
		case 0:
			return -2093359759;
	
		case 1:
			return -949812163;
	
		case 2:
			return 401446359;
	
		default:
		
	}

	return 0;
}

BOOL func_51(int iParam0) // Position - 0x1E4C Hash - 0x1AAEBC37 ^0x1AAEBC37
{
	Hash hash;
	int num;

	hash = func_24(iParam0);
	num = func_27(hash);

	switch (num)
	{
		case 0:
			return func_75(iParam0);
	
		case 1:
			return func_64(iParam0) != 0;
	
		case 2:
			return func_64(iParam0) != 0;
	
		default:
		
	}

	return false;
}

BOOL func_52(Hash hParam0) // Position - 0x1EA1 Hash - 0xDCBD1689 ^0xDCBD1689
{
	switch (hParam0)
	{
		case 0:
			return false;
	
		case 1:
			return false;
	
		case 2:
			return false;
	
		case 3:
			return false;
	
		case 4:
			return false;
	
		case 5:
			return true;
	
		case 6:
			return false;
	
		case 7:
			return true;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return false;
	
		case 11:
			return false;
	
		case 12:
			return false;
	
		case 13:
			return false;
	
		case 14:
			return false;
	
		case 15:
			return false;
	
		case 16:
			return false;
	
		case 17:
			return false;
	
		case 18:
			return false;
	
		case 19:
			return false;
	
		case 20:
			return false;
	
		case 21:
			return true;
	
		case 22:
			return false;
	
		case 23:
			return false;
	
		case 24:
			return false;
	
		case 25:
			return false;
	
		case 26:
			return false;
	
		case 27:
			return false;
	
		case 28:
			return false;
	
		case 29:
			return false;
	
		case 30:
			return false;
	
		case 31:
			return false;
	
		case 32:
			return false;
	
		case 33:
			return false;
	
		case 34:
			return false;
	
		case 35:
			return false;
	
		case 36:
			return false;
	
		default:
		
	}

	return false;
}

BOOL func_53(Hash hParam0) // Position - 0x2027 Hash - 0x1389422E ^0x1389422E
{
	int num;

	num = func_33(hParam0);
	return num != -1 && num != 0;
}

char* func_54(int iParam0) // Position - 0x2044 Hash - 0x6F25B779 ^0x18CB0089
{
	switch (iParam0)
	{
		case 1:
			return "CHEAT_SET_DEADEYE_TO_LEVEL_DESC";
	
		default:
		
	}

	return "";
}

void func_55(int iParam0) // Position - 0x2066 Hash - 0xE4E70B7A ^0xAE4485ED
{
	Hash hash;
	Any any;

	any = hLocal_9.f_4[hLocal_9.f_88[iParam0]];
	hash = func_48(iParam0);

	if (hash == -1)
	{
		if (func_47(iParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(any, func_6(1), MISC::GET_HASH_KEY(func_54(iParam0)));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(any, func_6(18), func_46(0));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(any, func_6(1), MISC::GET_HASH_KEY("CHEAT_UNLOCK_DESCRIPTION"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(any, func_6(1), MISC::GET_HASH_KEY(func_8(hLocal_9.f_88[iParam0])));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(any, func_6(18), func_46(hLocal_9.f_44[iParam0]));
	}

	return;
}

Hash func_56(int iParam0) // Position - 0x2107 Hash - 0x58FE0AD9 ^0x58FE0AD9
{
	Hash i;
	Hash hash;
	int num;

	for (i = 0; i <= 36; i = i + 1)
	{
		hash = i;
		num = func_59(hash);
	
		if (num != iParam0)
		{
		}
		else if (!func_40(hash))
		{
		}
		else
		{
			return hash;
		}
	}

	return -1;
}

Hash func_57(Any anParam0) // Position - 0x214B Hash - 0x7A9A8E98 ^0x65793A21
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(anParam0, func_6(1));
}

BOOL func_58(Hash hParam0) // Position - 0x215E Hash - 0x1389422E ^0x1389422E
{
	int num;

	num = func_59(hParam0);
	return num != -1 && num != 0;
}

int func_59(Hash hParam0) // Position - 0x217B Hash - 0xEE8487F4 ^0xEE8487F4
{
	switch (hParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 0;
	
		case 9:
			return 0;
	
		case 10:
			return 2;
	
		case 11:
			return 2;
	
		case 12:
			return 2;
	
		case 13:
			return 0;
	
		case 14:
			return 0;
	
		case 15:
			return 0;
	
		case 16:
			return 0;
	
		case 17:
			return 0;
	
		case 18:
			return 0;
	
		case 19:
			return 0;
	
		case 20:
			return 0;
	
		case 21:
			return 0;
	
		case 22:
			return 0;
	
		case 23:
			return 0;
	
		case 24:
			return 0;
	
		case 25:
			return 0;
	
		case 26:
			return 1;
	
		case 27:
			return 1;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 1;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		default:
		
	}

	return -1;
}

int func_60(Hash hParam0) // Position - 0x2301 Hash - 0xC2644628 ^0xC2644628
{
	switch (hParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
	
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return 0;
	
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
		case 23:
		case 24:
		case 25:
			return 0;
	
		case 26:
		case 27:
		case 28:
		case 29:
			return 2;
	
		case 30:
		case 31:
		case 32:
		case 33:
			return 1;
	
		case 34:
		case 35:
		case 36:
			return 0;
	
		default:
		
	}

	return 0;
}

BOOL func_61() // Position - 0x240B Hash - 0x94241B31 ^0x3E96F7E0
{
	return Global_1425247.f_76.f_1 != -1;
}

int func_62(int iParam0, int iParam1, int iParam2) // Position - 0x241D Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_63(int iParam0) // Position - 0x2442 Hash - 0x29A8F290 ^0xFC2F5696
{
	Global_1425247.f_58 = iParam0;
	return;
}

int func_64(int iParam0) // Position - 0x2452 Hash - 0x650DD920 ^0x696B390A
{
	return DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_6(9));
}

void func_65(int iParam0, int iParam1, int iParam2) // Position - 0x2466 Hash - 0x31F17903 ^0x9A5D15A7
{
	int num;
	Hash hash;

	num = func_25(hLocal_9.f_4[iParam0]);

	if (iParam1 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(5), joaat("UNLOCKED"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(18), func_46(iParam1));
		return;
	}

	hash = func_82(iParam2, iParam1 - 1);

	if (hash == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(5), joaat("CHEAT_LOCKED"));
		return;
	}

	if (func_20(hash))
		if (num != joaat("UNLOCKED"))
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(5), joaat("UNLOCKED"));
	else if (num != joaat("CURRENT_OPTION_LOCKED"))
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(5), joaat("CURRENT_OPTION_LOCKED"));

	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(hLocal_9.f_4[iParam0], func_6(18), func_46(iParam1));
	return;
}

int func_66(Hash hParam0) // Position - 0x2542 Hash - 0xEAE32591 ^0xEAE32591
{
	switch (hParam0)
	{
		case 0:
			return 3;
	
		case 2:
			return 3;
	
		case 5:
			return 3;
	
		case 10:
			return 3;
	
		case 14:
			return 3;
	
		case 22:
			return 3;
	
		case 27:
			return 3;
	
		case 33:
			return 3;
	
		default:
		
	}

	return 0;
}

Hash func_67(Hash hParam0, int iParam1) // Position - 0x25A6 Hash - 0x8FCF6C81 ^0x8FCF6C81
{
	switch (hParam0)
	{
		case 0:
			return func_84(iParam1);
	
		case 2:
			return func_85(iParam1);
	
		case 5:
			return func_86(iParam1);
	
		case 10:
			return func_87(iParam1);
	
		case 14:
			return func_88(iParam1);
	
		case 22:
			return func_89(iParam1);
	
		case 27:
			return func_90(iParam1);
	
		case 33:
			return func_91(iParam1);
	
		default:
		
	}

	return 0;
}

BOOL func_68(Hash hParam0) // Position - 0x2632 Hash - 0xA4033E1B ^0xA4033E1B
{
	return func_92(hParam0, 1, false);
}

void func_69(Hash hParam0) // Position - 0x2642 Hash - 0x49F473C7 ^0x49F473C7
{
	Hash hash;

	hash = hParam0;
	func_49(&(Global_40.f_12000), hash, 2);
	func_93(hParam0, 2);
	return;
}

BOOL func_70(Hash hParam0, int iParam1) // Position - 0x2665 Hash - 0xB57F62B9 ^0xB57F62B9
{
	int num;

	num = func_33(hParam0);

	if (iParam1 == 0)
		return false;

	return func_82(num, iParam1 - 1) == hParam0;
}

var func_71() // Position - 0x268C Hash - 0x4228A1C2 ^0xECBB2777
{
	return Global_1425247.f_56;
}

var func_72() // Position - 0x269A Hash - 0x4228A1C2 ^0x21B30732
{
	return Global_1425247.f_57;
}

BOOL func_73(int iParam0) // Position - 0x26A8 Hash - 0x61536EFD ^0xFBA3BBF9
{
	return func_34(&(Global_1425247.f_9), iParam0, 2);
}

BOOL func_74(int iParam0) // Position - 0x26BD Hash - 0xFEB7755B ^0xFEB7755B
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 6:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return false;
	
		case 9:
			return false;
	
		case 10:
			return false;
	
		case 11:
			return false;
	
		case 12:
			return false;
	
		case 13:
			return true;
	
		case 14:
			return true;
	
		case 15:
			return true;
	
		case 16:
			return true;
	
		case 17:
			return true;
	
		case 18:
			return true;
	
		case 19:
			return true;
	
		case 20:
			return false;
	
		case 21:
			return false;
	
		case 22:
			return false;
	
		case 23:
			return false;
	
		case 24:
			return true;
	
		case 25:
			return true;
	
		case 26:
			return false;
	
		case 27:
			return false;
	
		case 28:
			return false;
	
		case 29:
			return false;
	
		case 30:
			return false;
	
		case 31:
			return false;
	
		case 32:
			return false;
	
		case 33:
			return false;
	
		case 34:
			return false;
	
		case 35:
			return false;
	
		case 36:
			return false;
	
		default:
		
	}

	return true;
}

BOOL func_75(int iParam0) // Position - 0x2843 Hash - 0x650DD920 ^0x4731FD4A
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iParam0, func_6(9));
}

void func_76(Hash hParam0) // Position - 0x2857 Hash - 0x30BDEAC7 ^0x30BDEAC7
{
	func_94(hParam0);

	if (func_20(hParam0))
		func_93(hParam0, 2);
	else
		func_93(hParam0, 0);

	return;
}

void func_77(Hash hParam0) // Position - 0x287F Hash - 0x43B5A4 ^0x43B5A4
{
	int num;
	int num2;

	num = hParam0;

	if (func_26(hParam0))
	{
		func_95(12);
		return;
	}

	if (!func_20(hParam0))
		return;

	num2 = func_96(hParam0);

	if (num2 != 0)
	{
		switch (num2)
		{
			case 0:
				break;
		
			case 1:
				func_95(5);
				break;
		
			case 2:
				func_95(6);
				break;
		
			case 3:
				func_95(7);
				break;
		
			case 4:
				if (func_97(59))
					func_95(9);
				else
					func_95(8);
				break;
		
			case 5:
				func_95(11);
				break;
		
			default:
				break;
		}
	
		return;
	}

	if (func_60(hParam0) != 0)
		if (func_98() != hParam0)
			func_99(hParam0);
	else if (func_83(hParam0) == 4)
		return;

	if (func_49(&Global_1425247, num, 2))
	{
	}
	else
	{
		return;
	}

	func_93(hParam0, 4);
	return;
}

void func_78() // Position - 0x296D Hash - 0x7A3661FB ^0x7A3661FB
{
	switch (func_83(5))
	{
		case 3:
			break;
	
		case 4:
			if (func_26(5))
				break;
		
			func_100(5);
			func_101(true);
			func_93(5, 3);
			break;
	}

	return;
}

void func_79(Hash hParam0) // Position - 0x29AD Hash - 0xF8A9E4A7 ^0xF8A9E4A7
{
	if (func_26(hParam0))
	{
		func_95(13);
		return;
	}

	func_94(hParam0);
	func_93(hParam0, 5);
	return;
}

int func_80(int iParam0) // Position - 0x29D4 Hash - 0x6AA34421 ^0xF6A3BFAA
{
	return Global_1425247.f_50[iParam0];
}

int func_81(int iParam0) // Position - 0x29E6 Hash - 0x6C1A5AE8 ^0x6C1A5AE8
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 5;
	
		default:
		
	}

	return -1;
}

Hash func_82(int iParam0, int iParam1) // Position - 0x2A0E Hash - 0x1C1B0DCC ^0x1C1B0DCC
{
	switch (iParam0)
	{
		case 0:
			break;
	
		case 1:
			return func_102(iParam1);
	
		default:
			break;
	}

	return -1;
}

int func_83(int iParam0) // Position - 0x2A3A Hash - 0x6AA34421 ^0x85BCC122
{
	return Global_1425247.f_12[iParam0];
}

Hash func_84(int iParam0) // Position - 0x2A4C Hash - 0x6E0105E8 ^0x33055880
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_NEWSPAPER_ED_01");
	
		case 1:
			return 1767753378;
	
		case 2:
			return 1566650197;
	
		default:
		
	}

	return 0;
}

Hash func_85(int iParam0) // Position - 0x2A8A Hash - 0x6E0105E8 ^0x16332595
{
	switch (iParam0)
	{
		case 0:
			return 109840158;
	
		case 1:
			return -849973848;
	
		case 2:
			return -1594812622;
	
		default:
		
	}

	return 0;
}

Hash func_86(int iParam0) // Position - 0x2AC8 Hash - 0x6E0105E8 ^0x124DCE3C
{
	switch (iParam0)
	{
		case 0:
			return 903996873;
	
		case 1:
			return 1012860904;
	
		case 2:
			return -358162791;
	
		default:
		
	}

	return 0;
}

Hash func_87(int iParam0) // Position - 0x2B06 Hash - 0x6E0105E8 ^0xE00B66A1
{
	switch (iParam0)
	{
		case 0:
			return 706727493;
	
		case 1:
			return -1680391208;
	
		case 2:
			return 368626453;
	
		default:
		
	}

	return 0;
}

Hash func_88(int iParam0) // Position - 0x2B44 Hash - 0x6E0105E8 ^0xDA6E218A
{
	switch (iParam0)
	{
		case 0:
			return -1454682982;
	
		case 1:
			return -1253105631;
	
		case 2:
			return 543847666;
	
		default:
		
	}

	return 0;
}

Hash func_89(int iParam0) // Position - 0x2B82 Hash - 0x6E0105E8 ^0x52CB52EA
{
	switch (iParam0)
	{
		case 0:
			return 18296369;
	
		case 1:
			return -1261034125;
	
		case 2:
			return -634222073;
	
		default:
		
	}

	return 0;
}

Hash func_90(int iParam0) // Position - 0x2BC0 Hash - 0x6E0105E8 ^0xA5E19278
{
	switch (iParam0)
	{
		case 0:
			return -279147844;
	
		case 1:
			return 1787203230;
	
		case 2:
			return 662019373;
	
		default:
		
	}

	return 0;
}

Hash func_91(int iParam0) // Position - 0x2BFE Hash - 0x6E0105E8 ^0xC2859C8C
{
	switch (iParam0)
	{
		case 0:
			return -413074747;
	
		case 1:
			return 1737771952;
	
		case 2:
			return 1032348365;
	
		default:
		
	}

	return 0;
}

BOOL func_92(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x2C3C Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_103(hParam0, 0))
		return false;

	num = func_104(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_105(hParam0, 1))
			return false;

	return func_106(hParam0, false, bParam2) >= iParam1;
}

void func_93(Hash hParam0, int iParam1) // Position - 0x2CA6 Hash - 0x39E5F791 ^0x9B3FBC98
{
	Global_1425247.f_12[hParam0] = iParam1;
	return;
}

void func_94(int iParam0) // Position - 0x2CBA Hash - 0x88F81129 ^0x88F81129
{
	if (func_107(&Global_1425247, iParam0, 2))
	{
	}

	return;
}

void func_95(int iParam0) // Position - 0x2CD3 Hash - 0xB93B825B ^0x7E95D9D5
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);

	func_109(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(iParam0), 10000, 0, 0, 0, true);
	return;
}

int func_96(int iParam0) // Position - 0x2D01 Hash - 0xD47E7C35 ^0xD47E7C35
{
	if (func_110())
		return 1;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			break;
	
		case 5:
		case 6:
		case 7:
		case 8:
			break;
	
		case 9:
			if (func_111())
				return 4;
		
			if (Global_43891)
				return 3;
			break;
	
		case 10:
		case 11:
		case 12:
			if (func_112(false))
				return 2;
			break;
	
		case 13:
		case 14:
			break;
	
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (func_113(0, false, true))
				return 1;
			break;
	
		case 20:
		case 21:
		case 22:
			break;
	
		case 23:
		case 24:
			if (Global_43891)
				return 3;
			break;
	
		case 25:
			if (func_113(0, false, true))
				return 1;
		
			if (func_110())
				return 1;
			break;
	
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
			if (func_113(0, false, true))
				return 1;
		
			if (Global_1394141.f_1328)
				return 1;
		
			if (Global_43891)
				return 3;
		
			if (func_111())
				return 4;
		
			if (func_112(false))
				return 2;
		
			if (Global_1430231.f_4)
				return 1;
			break;
	
		case 34:
			if (func_97(59))
				if (func_114() == 22)
					return 5;
		
			[[fallthrough]];
	
		case 35:
		case 36:
			if (func_113(0, false, true))
				return 1;
		
			if (Global_1394141.f_1328)
				return 1;
		
			if (func_112(false))
				return 2;
		
			if (Global_1430231.f_4)
				return 1;
			break;
	
		default:
			break;
	}

	return 0;
}

BOOL func_97(int iParam0) // Position - 0x2F06 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_115(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

int func_98() // Position - 0x2F65 Hash - 0xA1DBD1D9 ^0xB9904AC1
{
	return Global_1425247.f_76.f_1;
}

void func_99(int iParam0) // Position - 0x2F75 Hash - 0x42868A8 ^0x4FA0B094
{
	Global_1425247.f_76.f_2 = iParam0;
	return;
}

void func_100(int iParam0) // Position - 0x2F87 Hash - 0x646928F0 ^0x646928F0
{
	func_116(iParam0);
	return;
}

void func_101(BOOL bParam0) // Position - 0x2F95 Hash - 0xE126B68C ^0x33E8651D
{
	MAP::SET_MINIMAP_HIDE_FOW(bParam0);

	if (bParam0)
		MAP::_REVEAL_MINIMAP_FOW(0);
	else
		MAP::RESET_MINIMAP_FOW(0);

	return;
}

int func_102(int iParam0) // Position - 0x2FB5 Hash - 0x98B087D4 ^0x98B087D4
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

	return -1;
}

BOOL func_103(Hash hParam0, int iParam1) // Position - 0x3000 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_104(Hash hParam0) // Position - 0x301A Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_103(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_105(Hash hParam0, int iParam1) // Position - 0x3045 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_103(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_117(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_118("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_119(&unk, i, num, num2))
			{
			}
			else if (!func_120(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_121(num);
				return true;
			}
		}
	
		func_121(num);
	}

	return false;
}

int func_106(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x30ED Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_103(hParam0, 0))
		return 0;

	num = func_104(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_117(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_122(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_123(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_107(var uParam0, int iParam1, int iParam2) // Position - 0x316F Hash - 0x8AC008A3 ^0x375BADC3
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::CLEAR_BIT(&uParam0->[num], offset);
	return isBitSet;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x31A1 Hash - 0xA17D549C ^0x22ED6690
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_FAIL_TO_FIND_CREATE_LOCATION";
	
		case 1:
			return "CHEAT_FAIL_TO_CREATE";
	
		case 2:
			return "CHEAT_FAILED_TO_ADD_OUTFITS";
	
		case 3:
			return "CHEAT_ADDED_OUTFITS";
	
		case 4:
			return "CHEAT_UNLOCKED_RECIPES";
	
		case 5:
			return "CHEAT_UNABLE_TO_ACTIVATE";
	
		case 6:
			return "CHEAT_UNABLE_TO_ACTIVATE_SHOP";
	
		case 7:
			return "CHEAT_UNABLE_TO_ACTIVATE_GUAMA";
	
		case 8:
			return "CHEAT_UNABLE_TO_ACTIVATE_CAMP";
	
		case 9:
			return "CHEAT_UNABLE_TO_ACTIVATE_HOME";
	
		case 10:
			return "CHEAT_WEAPON_ACTIVATE";
	
		case 11:
			return "CHEAT_INVALID_LOCATION";
	
		case 12:
			return "CHEAT_UNABLE_TO_ACTIVATE_DISABLED";
	
		case 13:
			return "CHEAT_UNABLE_TO_DEACTIVATE_DISABLED";
	
		case 14:
			return "CHEAT_DISABLED_WHILE_ACTIVE";
	
		default:
		
	}

	return "INVALID_CHEAT_HELP";
}

int func_109(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x327B Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_110() // Position - 0x32B6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1955834;
}

BOOL func_111() // Position - 0x32C2 Hash - 0x853011DA ^0x963EA2E0
{
	return func_124(32768);
}

BOOL func_112(BOOL bParam0) // Position - 0x32D2 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_113(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3302 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_125())
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
		num = func_126(Global_1898164.f_1[0 /*5*/]);
	
		if (func_127(num) && func_128(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_129(Global_1898164.f_1[0 /*5*/]))
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

int func_114() // Position - 0x3506 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_115(int iParam0, BOOL bParam1) // Position - 0x3514 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_130(iParam0))
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

void func_116(int iParam0) // Position - 0x3545 Hash - 0xBABE2D11 ^0xF3C3B7AD
{
	int num;

	num = iParam0;
	func_49(&(Global_1425247.f_6), num, 2);
	func_14();
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ACHIEVEMENTS"), false);
	return;
}

Hash func_117(Hash hParam0, int iParam1) // Position - 0x356F Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_103(hParam0, 0))
		return 0;

	num = func_104(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_131(hParam0, 1399091007))
	{
		func_132(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

BOOL func_118(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x35E9 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_123(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_119(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x3610 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_120(Hash hParam0) // Position - 0x364B Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_121(int iParam0) // Position - 0x3666 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_122(Hash hParam0, BOOL bParam1) // Position - 0x3687 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_133(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_135(&unk, func_134(false));

	if (!func_136(&unk, &num, &num2, false))
		return 0;

	func_121(num);
	return num2;
}

int func_123(BOOL bParam0) // Position - 0x36E5 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_137() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_124(int iParam0) // Position - 0x3726 Hash - 0xF2C0DFFC ^0xF2C0DFFC
{
	switch (func_137())
	{
		case -1:
			return Global_1357549.f_1494 && iParam0 != false;
	}

	return false;
}

BOOL func_125() // Position - 0x3751 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_126(int iParam0) // Position - 0x37A4 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_129(iParam0))
		return -1;

	return func_139(func_138(iParam0));
}

BOOL func_127(int iParam0) // Position - 0x37C4 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_128(int iParam0, int iParam1) // Position - 0x37DA Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_129(int iParam0) // Position - 0x37E9 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_130(int iParam0) // Position - 0x381C Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_129(iParam0))
		return -1;

	return func_140(iParam0);
}

BOOL func_131(Hash hParam0, Hash hParam1) // Position - 0x3838 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_132(Hash hParam0, var uParam1, var uParam2) // Position - 0x3869 Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_133(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x3A75 Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_134(BOOL bParam0) // Position - 0x3B47 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_123(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_142(923904168, func_141(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_142(923904168, func_141(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_142(923904168, func_141(bParam0), -740156546, false);
}

void func_135(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3BDC Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_136(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x3BF7 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_123(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_137() // Position - 0x3C1C Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_138(int iParam0) // Position - 0x3C2A Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_139(BOOL bParam0) // Position - 0x3C68 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_140(int iParam0) // Position - 0x3C7B Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_143(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

struct<4> func_141(BOOL bParam0) // Position - 0x3CBC Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_142(joaat("character"), func_144(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_142(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x3CD8 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_103(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_123(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_143(int iParam0) // Position - 0x3D09 Hash - 0x6EC15CF9 ^0xE613EBE0
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

struct<4> func_144() // Position - 0x3D8A Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

