#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = -1;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 4;
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
	var uLocal_56 = 5;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
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
	var uLocal_73 = 1;
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
	var uLocal_84 = -1;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 1097859072;
	var uLocal_94 = 1000;
	var uLocal_95 = 1067450368;
	var uLocal_96 = 5000;
	var uLocal_97 = 42;
	var uLocal_98 = 1103626240;
	var uLocal_99 = 1077936128;
	var uLocal_100 = 1106247680;
	var uLocal_101 = 1103101952;
	var uLocal_102 = 1097859072;
	var uLocal_103 = 1103626240;
	var uLocal_104 = 0;
	var uScriptParam_0 = 0;
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

void main() // Position - 0x0 Hash - 0x262403F1 ^0x4181AAB8
{
	var unk;

	unk.f_1 = -1;
	unk.f_12 = 24;
	unk.f_114 = joaat("INPUT_CONTEXT_Y");
	unk.f_128 = 2;
	unk.f_131 = 2;
	unk.f_1 = uScriptParam_0.f_1;
	unk.f_119 = uScriptParam_0.f_2;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(&unk);

	unk.f_139 = func_2();

	if (!func_3(&unk))
		func_1(&unk);

	while (!func_4(&unk))
	{
		switch (unk.f_11)
		{
			case 0:
				func_5(&unk);
				unk.f_11 = 1;
				break;
		
			case 1:
				if (func_6(&unk))
					unk.f_11 = 2;
				break;
		
			case 2:
				if (func_7(&unk))
					unk.f_11 = 3;
				break;
		
			case 3:
				if (func_8(&unk, 0))
					func_9(&unk);
			
				if (!ENTITY::DOES_ENTITY_EXIST(unk.f_134))
					unk.f_11 = 2;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&unk);
	return;
}

void func_1(var uParam0) // Position - 0xF7 Hash - 0x46497CD4 ^0xB6F856D0
{
	func_10(uParam0);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_138))
		MAP::REMOVE_BLIP(&(uParam0->f_138));

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
		VOLUME::DELETE_VOLUME(uParam0->f_6);

	if (func_11(uParam0->f_128[0]))
		func_12(&uParam0->f_128[0], true, true);

	if (func_11(uParam0->f_128[1]))
		func_12(&uParam0->f_128[1], true, true);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

eStackSize func_2() // Position - 0x165 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_3(var uParam0) // Position - 0x173 Hash - 0x89A7E562 ^0x73DC4215
{
	uParam0->f_111 = "BUY_TICKET";
	uParam0->f_112 = "SHOW_GET_INFO";
	uParam0->f_9 = 1;
	uParam0->f_120 = 0;
	uParam0->f_135 = { 0f, 1f, 0f };
	uParam0->f_113 = "";
	uParam0->f_8 = 1;
	uParam0->f_124 = 3f;
	uParam0->f_2 = { func_13(uParam0->f_1) };
	iLocal_3.f_24 = uParam0->f_119;

	if (func_14(iLocal_3.f_24))
		uParam0->f_7 = 1;

	if (func_15(36))
		if (uParam0->f_1 == 283)
			uParam0->f_122 = 1;
	else
		uParam0->f_122 = 0;

	uParam0->f_117 = func_16(uParam0->f_1);

	if (uParam0->f_117 >= 100)
		uParam0->f_111 = "BUY_TICKET_DLR";

	func_17(uParam0, 0);
	func_18(&(iLocal_3.f_51), &(iLocal_3.f_52), iLocal_3.f_24);

	switch (func_2())
	{
		case 5:
			uParam0->f_110 = "NBX_Bartender";
			break;
	
		case 38:
			uParam0->f_110 = "NBX_Bartender";
			break;
	
		case 76:
			uParam0->f_110 = "NBX_Bartender";
			break;
	}

	return true;
}

BOOL func_4(var uParam0) // Position - 0x260 Hash - 0x71C33867 ^0xFB3B62B7
{
	float num;

	uParam0->f_140 = uParam0->f_140 + 1;

	if (uParam0->f_140 < 10)
		return false;

	uParam0->f_140 = 0;

	if (func_2() != uParam0->f_139 || uParam0->f_139 == -1)
		return true;

	if (!uParam0->f_122 && func_19(0, true, true))
		return true;

	if (uParam0->f_11 == 4)
		return true;

	num = func_20(Global_35, uParam0->f_2, true);

	if (num > 60f)
		return true;

	return false;
}

void func_5(var uParam0) // Position - 0x2E4 Hash - 0x372B8FAE ^0xC482C995
{
	PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);

	if (*uParam0 != 0)
		STREAMING::REQUEST_MODEL(*uParam0, false);

	return;
}

BOOL func_6(var uParam0) // Position - 0x300 Hash - 0x6066BA3F ^0xE32E274
{
	if (*uParam0 != 0)
		if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
			return false;

	if (uParam0->f_1 != -1)
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(uParam0->f_1)))
			return false;

	if (!func_22(uParam0))
		return false;

	return PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
}

BOOL func_7(var uParam0) // Position - 0x34C Hash - 0xD102AA18 ^0xCDFC7B7
{
	int blipType;

	func_23(uParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		if (*uParam0 != 0)
		{
			uParam0->f_134 = func_24(*uParam0, uParam0->f_2, uParam0->f_5, true, true, 0, true, true, true, false, false, false, false);
		}
		else if (uParam0->f_1 != -1)
		{
			if (uParam0->f_9)
				if (func_20(Global_35, uParam0->f_2, true) < 100f)
					if (!func_25(uParam0->f_1, false, 0, 0, 0, false))
						return false;
		
			uParam0->f_134 = func_26(uParam0->f_1);
		}
		else
		{
			func_1(uParam0);
		}
	
		return false;
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_110))
		func_27(&(uParam0->f_12), uParam0->f_134, uParam0->f_110, false);

	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(uParam0->f_134, "", 3f, 0, 4, 0, 0, 0, false, -1);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 297, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 315, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 130, true);

	if (uParam0->f_120 != 0)
	{
		if (!uParam0->f_10)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_138))
				uParam0->f_138 = func_28(uParam0->f_134, uParam0->f_120, 1, true);
		
			if (uParam0->f_121 != 0)
				MAP::SET_BLIP_SPRITE(uParam0->f_138, uParam0->f_121, true);
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_138))
				uParam0->f_138 = MAP::BLIP_ADD_FOR_COORDS(uParam0->f_120, uParam0->f_2);
		
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_138, uParam0->f_121, true);
				blipType = func_29(uParam0->f_121);
			
				if (blipType != 0)
					MAP::SET_BLIP_FLASH_TIMER(uParam0->f_138, blipType, -1);
			}
		}
	}

	if (uParam0->f_8 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
		PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_134, 0, false);

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
		if (func_8(uParam0, 0))
			if (uParam0->f_124 > 0f)
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, uParam0->f_124, uParam0->f_124, 1.7f, "Interact_Ped - volProximityRng");
			else
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, 5f, 5f, 1.7f, "Interact_Ped - volProximityRng");
		else
			uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, 3.5f, 3.5f, 1.7f, "Interact_Ped - volProximityRng");

	return true;
}

BOOL func_8(var uParam0, int iParam1) // Position - 0x57B Hash - 0x674E1AE6 ^0xFFC7BF34
{
	return MISC::IS_BIT_SET(uParam0->f_118, iParam1);
}

int func_9(var uParam0) // Position - 0x58D Hash - 0x7C601373 ^0xF033FB9A
{
	BOOL flag;
	BOOL isPedCarryingSomething;
	int num;

	func_30(uParam0);

	if (uParam0->f_123 == 1)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
		return 0;

	flag = false;
	isPedCarryingSomething = PED::IS_PED_CARRYING_SOMETHING(Global_35);

	if (!isPedCarryingSomething)
		isPedCarryingSomething = func_31(Global_35);

	if (func_32(Global_35, uParam0->f_6, false, 0))
	{
		flag = true;
		func_33(uParam0);
	}
	else
	{
		func_34(uParam0);
	}

	if (flag)
	{
		if (func_35(Global_35, uParam0->f_134, true, true) < uParam0->f_124)
		{
			if (!func_11(uParam0->f_128[0]) && !uParam0->f_131[0])
			{
				uParam0->f_128[0] = func_36(uParam0->f_111, joaat("INPUT_INTERACT_LOCKON_POS"), uParam0->f_134, 1, 1, false, 0, 0, 3f, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				HUD::_UI_PROMPT_SET_GROUP(Global_1945188[func_37(uParam0->f_128[0]) /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_134), 0);
			
				if (uParam0->f_117 >= 100)
					func_38(uParam0->f_128[0], uParam0->f_111, BUILTIN::TO_FLOAT(uParam0->f_117) / 100f, 2, true);
				else
					func_39(uParam0->f_128[0], uParam0->f_111, uParam0->f_117, false);
			}
		
			if (!func_11(uParam0->f_128[1]) && uParam0->f_7 && !uParam0->f_131[1])
			{
				uParam0->f_128[1] = func_36(uParam0->f_112, joaat("INPUT_INTERACT_LOCKON_NEG"), uParam0->f_134, 1, 1, false, 0, 0, 3f, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				HUD::_UI_PROMPT_SET_GROUP(Global_1945188[func_37(uParam0->f_128[1]) /*18*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_134), 0);
			}
		
			num = -1;
		
			if (func_11(uParam0->f_128[0]))
			{
				func_40(uParam0, 0, isPedCarryingSomething);
			
				if (func_41(uParam0->f_128[0], true))
				{
					num = 0;
					func_42(&(uParam0->f_125));
					uParam0->f_131[0] = 1;
					func_12(&uParam0->f_128[0], true, true);
				
					if (func_11(uParam0->f_128[1]))
					{
						func_43(uParam0, 1);
						func_12(&uParam0->f_128[1], true, true);
					}
				}
			}
		
			if (func_11(uParam0->f_128[1]))
			{
				func_40(uParam0, 1, isPedCarryingSomething);
			
				if (func_41(uParam0->f_128[1], true))
				{
					num = 1;
					func_42(&(uParam0->f_125));
					func_43(uParam0, 1);
					func_12(&uParam0->f_128[1], true, true);
					func_43(uParam0, 0);
				}
			}
		
			switch (num)
			{
				case 0:
					func_44(uParam0);
					return 1;
			
				case 1:
					func_45(uParam0);
					return 1;
			}
		}
		else
		{
			func_46(uParam0);
		}
	}
	else
	{
		func_46(uParam0);
	}

	return 0;
}

void func_10(var uParam0) // Position - 0x82C Hash - 0xA536D2D1 ^0x12577D3A
{
	int i;

	func_47(&iLocal_3.f_10[0 /*3*/], "IG2");
	func_47(&iLocal_3.f_10[1 /*3*/], "IG3");
	func_47(&iLocal_3.f_10[2 /*3*/], "IG4");
	func_48(&iLocal_3, false);

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (func_51(func_49(i), func_50(iLocal_3.f_24)))
		{
			AUDIO::STOP_STREAM(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_49(i), func_50(iLocal_3.f_24)));
			break;
		}
	}

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_3.f_52))
		VOLUME::DELETE_VOLUME(iLocal_3.f_52);

	if (VOLUME::DOES_VOLUME_EXIST(iLocal_3.f_51))
		VOLUME::DELETE_VOLUME(iLocal_3.f_51);

	if (func_52(uParam0->f_1))
		func_53(uParam0->f_1, false, true, false, false);

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, false);

	if (func_54(Global_1394141.f_1326, 16))
		func_55(&(Global_1394141.f_1326), 16);

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		func_56(Global_35);

	return;
}

BOOL func_11(int iParam0) // Position - 0x91D Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_12(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x95C Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_11(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_37(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_57(num);
	*uParam0 = 0;
	return;
}

Vector3 func_13(int iParam0) // Position - 0x9B0 Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (iParam0)
	{
		case 33:
			return -355.27768f, 704.6901f, 116.05227f;
	
		case 283:
			return 2542.0984f, -1282.5137f, 48.21795f;
	
		case 284:
			return 2687.1118f, -1361.769f, 47.24998f;
	
		case 525:
			return -790.1024f, -1362.6212f, 42.90462f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_14(int iParam0) // Position - 0xA23 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}

	return false;
}

BOOL func_15(int iParam0) // Position - 0xA53 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_58(Global_1835011[iParam0 /*74*/].f_1);
}

int func_16(int iParam0) // Position - 0xA7F Hash - 0x68A09EED ^0x9247D21E
{
	int num;

	num = 200;

	switch (iParam0)
	{
		case 33:
			num = func_59(1242466573, -915411861, true, false, false);
			break;
	
		case 283:
			num = func_59(-1110862888, -915411861, true, false, false);
			break;
	
		case 284:
			if (func_60(45))
				num = func_59(2037803338, -915411861, true, false, false);
			else
				num = func_59(1242466573, -915411861, true, false, false);
			break;
	
		case 525:
			num = func_59(2037803338, -915411861, true, false, false);
			break;
	}

	return num;
}

void func_17(var uParam0, int iParam1) // Position - 0xB24 Hash - 0x28B904D2 ^0x7ABD3E27
{
	MISC::SET_BIT(&(uParam0->f_118), iParam1);
	return;
}

void func_18(var uParam0, var uParam1, int iParam2) // Position - 0xB36 Hash - 0xF5F19D8E ^0x170AADE8
{
	switch (iParam2)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2538.0334f, -1279.347f, 49.98048f, 0f, 0f, 11.907258f, 5.5f, 5.5f, 2f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2545.899f, -1284.4489f, 52.684677f, 0f, 0f, 0f, 19.06469f, 21.412235f, 12.280498f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2537.024f, -1293.2948f, 52.62739f, 0f, 0f, 0f, 8.533219f, 26.716967f, 9.024663f);
			}
		
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2533.6243f, -1276.3586f, 49.78957f, 0f, 0f, -25.094099f, 2.553831f, 2.187363f, 3.282658f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2535.7583f, -1273.7726f, 49.78957f, 0f, 0f, -64.99103f, 2.553831f, 2.187363f, 3.282658f);
			}
			break;
	
		case 1:
		case 2:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.8439f, 48.572056f, 0f, 0f, 38.714283f, 4.602314f, 8.88861f, 3.333464f, "TheaterWepCheck");
		
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2685.939f, -1360.0819f, 48.170147f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2689.12f, -1363.9182f, 48.170147f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
			}
			break;
	
		case 3:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-347.69012f, 704.05035f, 118.00733f, 0f, 0f, 14.631875f, 3.596706f, 3.045884f, 2.800292f, "TheaterWepCheck");
			break;
	
		case 4:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.5135f, -1362.5345f, 44.1069f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "TheaterWepCheck");
		
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -791.2835f, -1359.0492f, 43.892868f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -791.2835f, -1366.1858f, 43.892868f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
			}
			break;
	}

	return;
}

BOOL func_19(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDCA Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_61())
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
		num = func_62(Global_1898164.f_1[0 /*5*/]);
	
		if (func_63(num) && func_64(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_65(Global_1898164.f_1[0 /*5*/]))
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

float func_20(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0xFCE Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), fParam1, bParam4);
}

PersChar func_21(int iParam0) // Position - 0xFF6 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_66(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

BOOL func_22(var uParam0) // Position - 0x1016 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return true;
}

void func_23(var uParam0) // Position - 0x101F Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

Ped func_24(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1027 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_67(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_25(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x1069 Hash - 0x4673E62 ^0xCF31A97
{
	var unk;
	Entity entity;

	if (!func_66(iParam0))
		return false;

	if (!func_69(func_68(iParam0)))
		return true;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		func_70(iParam0, false);
		return false;
	}

	unk = { iParam2, iParam3, iParam4 };

	if (!func_71(iParam0, false))
		if (bParam1)
			if (!func_72(iParam0))
				return false;
		else
			return false;

	if (!_IS_NULL_VECTOR(unk))
		PERSCHAR::_0x59C7AD6FEA2AC449(func_21(iParam0), unk);

	if (bParam5)
		entity = PERSCHAR::_0x08FC896D2CB31FCC(func_21(iParam0), false);
	else
		entity = PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_21(iParam0), false);

	if (!_IS_NULL_VECTOR(unk))
		PERSCHAR::_0xBB68908CD11AEBDC(func_21(iParam0));

	if (ENTITY::DOES_ENTITY_EXIST(entity))
		return true;

	return false;
}

Ped func_26(int iParam0) // Position - 0x113A Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_21(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_27(var uParam0, Ped pedParam1, const char* sParam2, BOOL bParam3) // Position - 0x1168 Hash - 0x5AD955B5 ^0x43BD5215
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	if (func_74(uParam0, pedParam1, sParam2))
		if (!PED::IS_PED_INJURED(pedParam1))
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam1))
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam1, bParam3);

	return;
}

Blip func_28(Entity eParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x11C5 Hash - 0x7DC8F47B ^0xE3A641E6
{
	Blip blipFromEntity;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0) || iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(eParam0))
		return 0;

	blipFromEntity = MAP::GET_BLIP_FROM_ENTITY(eParam0);

	if (!MAP::DOES_BLIP_EXIST(blipFromEntity))
		blipFromEntity = MAP::BLIP_ADD_FOR_ENTITY(hParam1, eParam0);
	else
		MAP::_BLIP_SET_STYLE(blipFromEntity, hParam1);

	if (bParam3)
		if (hParam1 == joaat("BLIP_STYLE_OBJECTIVE") || hParam1 == joaat("BLIP_STYLE_OBJECTIVE_VOL_BOX") || hParam1 == joaat("BLIP_STYLE_OBJECTIVE_VOL_ROUND"))
			MAP::BLIP_ADD_MODIFIER(blipFromEntity, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));

	return blipFromEntity;
}

int func_29(int iParam0) // Position - 0x1252 Hash - 0xA830A80B ^0xA830A80B
{
	switch (iParam0)
	{
		case joaat("blip_shop_barber"):
			return 31;
	
		case joaat("blip_event_castor"):
			return 54;
	
		case joaat("blip_shop_coach_fencing"):
			return 24;
	
		case joaat("blip_event_riggs_camp"):
			return 56;
	
		case joaat("blip_shop_doctor"):
			return 25;
	
		case joaat("blip_shop_butcher"):
			return 32;
	
		case joaat("blip_mg_dominoes"):
			return 2;
	
		case joaat("blip_proc_bounty_poster"):
			return 16;
	
		case joaat("blip_region_caravan"):
			return 52;
	
		case joaat("blip_mg_dominoes_all3s"):
			return 8;
	
		case joaat("blip_mg_fishing"):
			return 59;
	
		case joaat("blip_proc_home_locked"):
			return 47;
	
		case joaat("blip_shop_horse_fencing"):
			return 38;
	
		case joaat("blip_shop_animal_trapper"):
			return 36;
	
		case joaat("blip_town"):
			return 62;
	
		case joaat("blip_fence_building"):
			return 7;
	
		case joaat("blip_proc_loanshark"):
			return 14;
	
		case joaat("blip_shop_tackle"):
			return 35;
	
		case joaat("blip_shop_blacksmith"):
			return 28;
	
		case joaat("blip_event_railroad_camp"):
			return 55;
	
		case joaat("blip_region_hideout"):
			return 57;
	
		case joaat("blip_ambient_theatre"):
			return 51;
	
		case joaat("blip_mg_dominoes_draw"):
			return 10;
	
		case joaat("blip_ambient_train"):
			return 18;
	
		case joaat("blip_hotel_bed"):
			return 43;
	
		case joaat("blip_shop_gunsmith"):
			return 23;
	
		case joaat("blip_stable"):
			return 45;
	
		case joaat("blip_mg_dominoes_all5s"):
			return 9;
	
		case joaat("blip_shop_train"):
			return 30;
	
		case joaat("blip_mg_five_finger_fillet_guts"):
			return 12;
	
		case joaat("blip_ambient_quartermaster"):
			return 22;
	
		case joaat("blip_ambient_coach_taxi"):
			return 50;
	
		case joaat("blip_ambient_herd"):
			return 13;
	
		case joaat("blip_shop_horse_saddle"):
			return 39;
	
		case joaat("blip_ambient_telegraph"):
			return 49;
	
		case joaat("blip_shop_shady_store"):
			return 21;
	
		case joaat("blip_ambient_newspaper"):
			return 40;
	
		case joaat("blip_mg_blackjack"):
			return 1;
	
		case joaat("blip_shop_market_stall"):
			return 41;
	
		case joaat("blip_ambient_coach"):
			return 17;
	
		case joaat("blip_mg_five_finger_fillet_burnout"):
			return 11;
	
		case joaat("blip_summer_cow"):
			return 5;
	
		case joaat("blip_shop_tailor"):
			return 26;
	
		case joaat("blip_mg_poker"):
			return 3;
	
		case joaat("blip_photo_studio"):
			return 44;
	
		case joaat("blip_post_office_rec"):
			return 34;
	
		case joaat("blip_shop_store"):
			return 20;
	
		case joaat("blip_shop_trainer"):
			return 29;
	
		case joaat("blip_proc_home"):
			return 46;
	
		case joaat("blip_post_office"):
			return 33;
	
		case joaat("blip_saloon"):
			return 27;
	
		case joaat("blip_event_appleseed"):
			return 53;
	
		case joaat("blip_shop_horse"):
			return 37;
	
		case joaat("blip_mg_five_finger_fillet"):
			return 4;
	
		case joaat("blip_ambient_riverboat"):
			return 19;
	
		default:
			break;
	}

	return 0;
}

void func_30(var uParam0) // Position - 0x1562 Hash - 0x26B86D41 ^0x8B53ACD1
{
	BOOL flag;
	BOOL flag2;

	flag = func_75(iLocal_3.f_24);

	if (func_19(0, false, true) && func_15(36))
		iLocal_3.f_33 = 1;
	else
		iLocal_3.f_33 = 0;

	if (!iLocal_3.f_35)
		if (func_76(PLAYER::GET_PLAYER_INDEX(), true, false, true) || LAW::_0xF46108C50A22B029() || PED::IS_PED_IN_COMBAT(Global_35, 0) && !Global_1394141.f_1331)
			iLocal_3.f_35 = 1;
	else if (!func_76(PLAYER::GET_PLAYER_INDEX(), true, false, true) && !LAW::_0xF46108C50A22B029() && !PED::IS_PED_IN_COMBAT(Global_35, 0))
		iLocal_3.f_35 = 0;

	iLocal_3.f_36 = func_32(Global_35, iLocal_3.f_51, true, 0);
	iLocal_3.f_37 = func_32(Global_35, Global_1394141.f_7[Global_40.f_9028[iLocal_3.f_24] /*31*/].f_4, true, 0);
	func_77(uParam0, &iLocal_3);
	func_78(uParam0, &iLocal_3);

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		if (!func_54(iLocal_3.f_25, 4096))
			func_79(&(iLocal_3.f_25), 4096);
	
		if (!iLocal_3.f_33)
		{
			if (iLocal_3 != 0)
				iLocal_3 = 0;
		
			return;
		}
	}

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_134) && !iLocal_3.f_33)
		return;
	else
		PED::SET_PED_RESET_FLAG(uParam0->f_134, 49, true);

	flag2 = func_60(45);

	if (iLocal_3.f_24 == 1 && flag2)
		uParam0->f_11 = 4;

	if (iLocal_3.f_24 == 2 && !flag2)
		uParam0->f_11 = 4;

	switch (iLocal_3)
	{
		case 0:
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_134, "bUpdatedPlayer"))
				DECORATOR::DECOR_SET_BOOL(uParam0->f_134, "bUpdatedPlayer", true);
		
			if (!func_52(uParam0->f_1))
				func_80(uParam0->f_1, true, false, false, true, true);
		
			func_48(&iLocal_3, false);
			func_81(uParam0, &iLocal_3, 0);
			func_82(uParam0, &iLocal_3, 0);
			func_83(uParam0, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 330, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 44, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 174, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 448, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
			func_84(&(iLocal_3.f_73), true);
			func_85(&(iLocal_3.f_73), true);
			func_86(&(iLocal_3.f_73), true);
			func_87(&(iLocal_3.f_73), true);
			func_88(&(iLocal_3.f_73), true);
			func_89(&(iLocal_3.f_73), false);
			func_90(&(iLocal_3.f_73), true);
			func_91(&(iLocal_3.f_73), true);
			func_92(&(iLocal_3.f_73), true);
			func_93(&(iLocal_3.f_73), true);
			func_94(&(iLocal_3.f_73), false);
			func_95(&(iLocal_3.f_73), true);
			func_96(&(iLocal_3.f_73), false);
			func_87(&(iLocal_3.f_73), true);
			func_97(&(iLocal_3.f_73), true);
			func_98(&(iLocal_3.f_73), false);
			func_99(&(iLocal_3.f_73), false);
			func_100(&(iLocal_3.f_73), false);
			func_101(&(iLocal_3.f_73), false);
			Global_1394141.f_1279[iLocal_3.f_24 /*8*/].f_6 = 0;
		
			if (func_102(Global_1347702[144 /*49*/].f_15, true))
				func_79(&(Global_40.f_9028.f_12), 1);
		
			if (!func_51(func_49(iLocal_3.f_26), func_50(iLocal_3.f_24)))
				iLocal_3.f_26 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		
			func_55(&(iLocal_3.f_25), 65536);
			func_103(&iLocal_3, 1);
			break;
	
		case 1:
			func_78(uParam0, &iLocal_3);
			func_104(uParam0, &iLocal_3);
		
			if (iLocal_3.f_24 == 3 && !func_54(iLocal_3.f_25, 65536) && func_105())
				func_79(&(iLocal_3.f_25), 65536);
		
			if (func_106(&(uParam0->f_125)))
			{
				if (func_107(&(uParam0->f_125)) > 1f)
					func_108(&(uParam0->f_125));
			}
			else
			{
				if (!func_110(func_109(uParam0->f_1)))
					if (!uParam0->f_131[0])
						uParam0->f_131[0] = 1;
				else if (uParam0->f_131[0])
					uParam0->f_131[0] = 0;
			
				if (!func_54(iLocal_3.f_25, 8))
					if (!func_110(func_109(uParam0->f_1)))
						if (!uParam0->f_131[1])
							uParam0->f_131[1] = 1;
					else if (uParam0->f_131[1])
						uParam0->f_131[1] = 0;
			}
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_3.f_72) && PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_134, joaat("world_human_shopkeeper")))
				iLocal_3.f_72 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_134, false);
		
			func_111(uParam0);
		
			if (flag && uParam0->f_1 == 283 && !func_15(36))
			{
				func_112(uParam0, &iLocal_3);
			}
			else if (iLocal_3.f_33)
			{
			}
			else
			{
				func_113(&iLocal_3, uParam0);
				func_114(uParam0, &iLocal_3);
			}
			break;
	
		case 2:
			break;
	}

	return;
}

BOOL func_31(Ped pedParam0) // Position - 0x1A09 Hash - 0x4156E789 ^0x33933065
{
	ItemSet itemset;
	int itemsetSize;
	int num;
	var unk;
	Entity entity;
	Hash entityCarryConfig;
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return 0;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	itemsetSize == 0;
	ITEMSET::DESTROY_ITEMSET(itemset);

	for (i = 0; i < 4; i = i + 1)
	{
		num = func_115(i);
	
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, pedParam0, num, 0))
		{
		}
		else
		{
			entity = unk.f_3;
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else
			{
				ENTITY::IS_ENTITY_DEAD(entity);
				entityCarryConfig = ENTITY::_GET_ENTITY_CARRY_CONFIG(entity);
			
				if (entityCarryConfig == joaat("carriable_saddle") || entityCarryConfig == joaat("carriable_saddle_bundle"))
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_32(Ped pedParam0, Volume volParam1, BOOL bParam2, int iParam3) // Position - 0x1AD1 Hash - 0x6735ACA9 ^0xD6205CC6
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam1))
		return false;

	return ENTITY::IS_ENTITY_IN_VOLUME(pedParam0, volParam1, bParam2, iParam3);
}

void func_33(var uParam0) // Position - 0x1B07 Hash - 0x57E5D1FB ^0xF137D2F
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
		return;

	flag = func_75(iLocal_3.f_24);

	if (!func_54(iLocal_3.f_25, 16384) && func_11(uParam0->f_128[0]) && !PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON")) && !Global_1394141.f_1328)
	{
		func_116(&iLocal_3);
	
		if (flag)
		{
			uParam0->f_111 = "SHOW_ODDFELLOW";
			func_117(uParam0->f_128[0], uParam0->f_111, false);
		}
		else if (func_118(&iLocal_3))
		{
			uParam0->f_111 = "SHOW_USE_TICKET";
			func_117(uParam0->f_128[0], uParam0->f_111, false);
		}
		else
		{
			uParam0->f_111 = "SHOP_BUY_TICKET_PRICE";
			func_39(uParam0->f_128[0], uParam0->f_111, uParam0->f_117, false);
		}
	
		func_79(&(iLocal_3.f_25), 16384);
	}

	if (!func_54(iLocal_3.f_25, 262144) && !func_110(iLocal_3.f_24) && !Global_1394141.f_1328)
	{
		func_119("SHOW_HLP_NOSHOW", 10000, 0, 0, 0, true);
		func_79(&(iLocal_3.f_25), 262144);
	}

	if (!func_75(iLocal_3.f_24))
	{
		if (iLocal_3.f_33)
			if (func_110(func_109(uParam0->f_1)) && !func_120(func_109(uParam0->f_1)))
				func_82(uParam0, &iLocal_3, 1);
	
		if (func_54(Global_40.f_9028.f_12, 4) && !func_54(Global_40.f_9028.f_12, 8))
			if (func_110(func_109(uParam0->f_1)) && !func_120(func_109(uParam0->f_1)))
				func_82(uParam0, &iLocal_3, 1);
	}

	return;
}

void func_34(var uParam0) // Position - 0x1CA3 Hash - 0xA6D72FA9 ^0x57D022FF
{
	if (func_54(iLocal_3.f_25, 16384))
		func_55(&(iLocal_3.f_25), 16384);

	return;
}

float func_35(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1CC4 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

// Unhandled jump detected. Output should be considered invalid
int func_36(const char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x1D0C Hash - 0xA9244E74 ^0xC0A4C4ED
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
		if (func_121(i, 2))
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
		func_122(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

int func_37(int iParam0) // Position - 0x1DE3 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_38(int iParam0,  Param1, float fParam2, int iParam3, BOOL bParam4) // Position - 0x1DED Hash - 0x125CCA7E ^0x6C7E509
{
	int num;

	if (bParam4 && !func_11(iParam0))
		return;

	num = func_37(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(6, Param1, fParam2));
	return;
}

void func_39(int iParam0,  Param1, var uParam2, BOOL bParam3) // Position - 0x1E3D Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_11(iParam0))
		return;

	num = func_37(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, Param1, uParam2));
	return;
}

void func_40(var uParam0, int iParam1, BOOL bParam2) // Position - 0x1E8D Hash - 0xD90A2F54 ^0xFE176329
{
	BOOL flag;

	if (uParam0->f_131[iParam1])
	{
		if (func_123(uParam0->f_128[iParam1], false))
			func_124(uParam0->f_128[iParam1], false, true);
	}
	else
	{
		flag = false;
	
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_134))
			flag = true;
	
		if (!func_123(uParam0->f_128[iParam1], false))
			if (!flag && !bParam2)
				func_124(uParam0->f_128[iParam1], true, true);
		else if (flag || bParam2)
			func_124(uParam0->f_128[iParam1], false, true);
	}

	return;
}

BOOL func_41(int iParam0, BOOL bParam1) // Position - 0x1F2A Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_11(iParam0))
		return false;

	num = func_37(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_42(var uParam0) // Position - 0x1F5D Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_125(uParam0, 0f);
	return;
}

void func_43(var uParam0, int iParam1) // Position - 0x1F6C Hash - 0xE63433C0 ^0xBE11747A
{
	uParam0->f_131[iParam1] = 1;
	func_124(uParam0->f_128[iParam1], false, true);
	return;
}

void func_44(var uParam0) // Position - 0x1F8B Hash - 0x8DD3419D ^0x4801F1E3
{
	if (!func_75(iLocal_3.f_24))
	{
		if (uParam0->f_117 > 0 && func_126(1) >= uParam0->f_117 || func_118(&iLocal_3))
		{
			func_79(&(iLocal_3.f_25), 4);
			func_82(uParam0, &iLocal_3, 1);
			func_127(uParam0, &iLocal_3, true);
		}
	}
	else
	{
		func_79(&(iLocal_3.f_25), 4);
		func_82(uParam0, &iLocal_3, 1);
		func_127(uParam0, &iLocal_3, true);
	}

	return;
}

void func_45(var uParam0) // Position - 0x1FFC Hash - 0x87DCCDA0 ^0xAE389017
{
	func_79(&(iLocal_3.f_25), 524288);
	uParam0->f_7 = 0;
	func_79(&(iLocal_3.f_25), 8);
	uParam0->f_131[0] = 0;
	return;
}

void func_46(var uParam0) // Position - 0x2027 Hash - 0x8D38FF1 ^0xD7D436C2
{
	if (func_11(uParam0->f_128[0]))
		func_12(&uParam0->f_128[0], true, true);

	if (func_11(uParam0->f_128[1]))
		func_12(&uParam0->f_128[1], true, true);

	return;
}

void func_47(var uParam0, char* sParam1) // Position - 0x2065 Hash - 0x267B13BC ^0xAEE02A66
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		return;

	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	uParam0->f_1 = 0;
	return;
}

void func_48(var uParam0, BOOL bParam1) // Position - 0x2087 Hash - 0xD9F86AD9 ^0xC39F8574
{
	if (uParam0->f_35 && !bParam1)
		return;

	switch (uParam0->f_24)
	{
		case 0:
			func_128(212326452, false, 0f, false, false, 0, false, false);
			func_128(-80890560, false, 0f, false, false, 0, false, false);
			func_128(-302077142, false, 0f, false, false, 0, false, false);
			func_128(-531755063, false, 0f, false, false, 0, false, false);
			break;
	
		case 1:
			func_128(-2034821814, false, 0f, false, false, 0, false, false);
			func_128(-786191838, false, 0f, false, false, 0, false, false);
			func_128(-1518382426, false, 0f, false, false, 0, false, false);
			func_128(-223351546, false, 0f, false, false, 0, false, false);
			break;
	
		case 2:
			func_128(235202295, false, 0f, false, false, 0, false, false);
			func_128(-71941542, false, 0f, false, false, 0, false, false);
			func_128(-723815263, false, 0f, false, false, 0, false, false);
			func_128(1920184275, false, 0f, false, false, 0, false, false);
			break;
	
		case 3:
			break;
	
		case 4:
			func_128(1373799284, false, 0f, false, false, 0, false, false);
			func_128(1735175816, false, 0f, false, false, 0, false, false);
			break;
	}

	uParam0->f_38 = 0;
	return;
}

char* func_49(int iParam0) // Position - 0x21BD Hash - 0x36244477 ^0x96540823
{
	int num;

	num = iParam0;

	switch (num)
	{
		case 0:
			return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
	
		case 1:
			return "Post_Show_La_Bohemienne_Music";
	
		case 2:
			return "Post_Show_Rough_Riders_March_Music";
	
		case 3:
			return "Post_Show_The_Harlem_Rag_Music";
	
		case 4:
			return "Post_Show_The_Mississippi_Rag_Music";
	
		case 5:
			return "Pre_Show_Galop_du_Carnival_Music";
	
		case 6:
			return "Pre_Show_Ma_Ragtime_Baby_Music";
	
		case 7:
			return "Pre_Show_The_Bosn_Rag_Music";
	
		case 8:
			return "Pre_Show_The_Keyhole_in_the_Door_Music";
	
		case 9:
			return "Pre_Show_Walking_for_dat_Cake_Music";
	
		default:
		
	}

	return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
}

char* func_50(int iParam0) // Position - 0x2254 Hash - 0x696CF2F2 ^0x20E1281C
{
	if (iParam0 == 3)
		return "wax_cylinder_show_music";

	return "3235391231_intro";
}

BOOL func_51(char* sParam0, char* sParam1) // Position - 0x226D Hash - 0x86107E70 ^0x29059234
{
	int loadedStreamIdFromCreation;

	loadedStreamIdFromCreation = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(sParam0, sParam1);

	if (loadedStreamIdFromCreation != -1 && AUDIO::IS_STREAM_PLAYING(loadedStreamIdFromCreation))
		return true;

	return false;
}

BOOL func_52(int iParam0) // Position - 0x2296 Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_66(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_53(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x22BB Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_66(iParam0))
		return;

	if (!func_129(iParam0, 1))
		return;

	if (!func_129(iParam0, 2))
		return;

	if (!bParam4 && !func_52(iParam0) && func_130(iParam0))
		return;

	func_131(iParam0, 1);
	func_132(iParam0);

	if (func_69(func_68(iParam0)))
	{
		persChar = func_21(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return;
	
		PERSCHAR::_0xBB68908CD11AEBDC(persChar);
		PERSCHAR::_0xB65E7F733956CF25(persChar);
	
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (!PED::IS_PED_INJURED(perscharPedIndex))
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, false);
	
		if (bParam1)
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		func_131(iParam0, 16);
	}

	if (func_129(iParam0, 128) && !bParam3)
		func_133(iParam0, false);

	return;
}

BOOL func_54(Object obParam0, Object obParam1) // Position - 0x23A7 Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && obParam1 != false;
}

void func_55(Object obParam0, int iParam1) // Position - 0x23B6 Hash - 0xF55E891F ^0xF55E891F
{
	func_134(obParam0, iParam1);
	return;
}

void func_56(Ped pedParam0) // Position - 0x23C6 Hash - 0x4E202C34 ^0x2E8F8C15
{
	TASK::TASK_CLEAR_LOOK_AT(pedParam0);
	PED::_0xAAC0EE3B4999ABB5(pedParam0, 0);
	return;
}

void func_57(int iParam0) // Position - 0x23DB Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_135(iParam0))
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

BOOL func_58(int iParam0) // Position - 0x248E Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_136(iParam0);
	return num == 3 || num == 4;
}

int func_59(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x24AC Hash - 0x9C65FCD1 ^0x9391B601
{
	var unk;
	int num;
	int i;
	int collectionId;
	int numInCollection;
	Hash filter;
	int num2;
	var data;
	int size;
	int collectionId2;
	int j;
	Hash hash;
	int num3;

	unk = 15;

	if (func_137(hParam0, -5284486))
	{
		filter = -1;
		filter.f_1 = -1;
		filter.f_2 = -1;
		filter.f_3 = -1;
		filter.f_4 = -1;
		filter.f_5 = -1;
		filter.f_6 = -1;
		filter.f_7 = -1;
		filter.f_8 = -1;
		filter.f_13 = -1;
		filter.f_14 = -1;
		filter.f_15 = -1;
		filter.f_16 = -1;
		filter.f_17 = -1;
		filter = hParam0;
		collectionId = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &filter, &numInCollection);
	
		if (collectionId != -1)
		{
			if (numInCollection > 0)
				bParam4 = true;
		
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
		}
	
		num2 = 0;
	
		if (func_138(hParam0, hParam1, &unk, &num, bParam2, bParam3))
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
				{
					num2 = num2 + unk[i /*2*/].f_1;
					break;
				}
			
				if (unk[i /*2*/] == 0)
					break;
			}
		}
	
		data = -1;
		data.f_1 = -1;
		data.f_2 = -1;
		data.f_3 = -1;
		data.f_4 = -1;
		data.f_5 = -1;
		data.f_6 = -1;
		data.f_7 = -1;
		data.f_8 = -1;
		num3 = func_139(hParam0, 862142561);
	
		if (num3 != 0)
		{
			data.f_8 = num3;
			collectionId2 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&data, &size, 1);
		
			if (collectionId2 != -1)
			{
				for (j = 0; j < size; j = j + 1)
				{
					hash = func_140(j, collectionId2);
				
					if (func_141(hash, 0) && hash != hParam0)
					{
						if (bParam4)
						{
							num2 = num2 + func_59(hash, -915411861, true, false, false);
						}
						else
						{
							filter = hash;
							collectionId = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &filter, &numInCollection);
						
							if (collectionId != -1)
							{
								if (numInCollection == 0)
									num2 = num2 + func_59(hash, -915411861, true, false, false);
							
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(collectionId);
							}
						}
					}
				}
			
				ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(collectionId2);
			}
		}
	
		return num2;
	}

	if (!func_138(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_60(int iParam0) // Position - 0x270E Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_142(iParam0))
		return false;

	return func_143(iParam0);
}

BOOL func_61() // Position - 0x272A Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_62(int iParam0) // Position - 0x277D Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_65(iParam0))
		return -1;

	return func_145(func_144(iParam0));
}

BOOL func_63(int iParam0) // Position - 0x279D Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_64(int iParam0, int iParam1) // Position - 0x27B3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_65(int iParam0) // Position - 0x27C2 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_66(int iParam0) // Position - 0x27F5 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

void func_67(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x280C Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_146(eptParam1))
		{
			func_147(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_148(pedParam0, 0, true);
	
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
			func_149(pedParam0, false);
			flag = true;
		}
	
		func_150(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

Hash func_68(int iParam0) // Position - 0x28ED Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_66(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

BOOL func_69(Hash hParam0) // Position - 0x290B Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_70(int iParam0, BOOL bParam1) // Position - 0x2917 Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_66(iParam0))
		return 0;

	if (!func_129(iParam0, 2))
		return 0;

	if (func_129(iParam0, 32) && !bParam1)
	{
		func_151(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_68(iParam0)));
	
		if (func_152() == -1)
		{
			if (func_129(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_21(iParam0));
				func_131(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_21(iParam0));
		}
	
		return 0;
	}

	if (!func_153(iParam0) && func_152() == -1)
		return 0;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		func_131(iParam0, 128);
		return 1;
	}

	func_151(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_68(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_21(iParam0));

	if (func_129(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_21(iParam0));
		func_131(iParam0, 2048);
	}

	return 1;
}

BOOL func_71(int iParam0, BOOL bParam1) // Position - 0x2A02 Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_152() != -1)
		return false;

	if (!func_66(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_26(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_21(iParam0));
}

BOOL func_72(int iParam0) // Position - 0x2A5A Hash - 0x365567CB ^0x68796F4
{
	if (!func_66(iParam0))
		return false;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_21(iParam0));
	
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_21(iParam0), false)))
			return false;
	}

	return true;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x2AA0 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_74(var uParam0, Entity eParam1, const char* sParam2) // Position - 0x2ACA Hash - 0xFB1C2C0E ^0x6794528D
{
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < uParam0->f_97 && !flag; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(uParam0->[i /*4*/].f_1)))
		{
			uParam0->[i /*4*/] = eParam1;
			flag = true;
		}
	}

	if (!flag)
	{
		if (uParam0->f_97 < 24)
		{
			uParam0->[uParam0->f_97 /*4*/] = eParam1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[uParam0->f_97 /*4*/].f_1), sParam2, 24);
			uParam0->f_97 = uParam0->f_97 + 1;
			flag = true;
		}
	}

	return flag;
}

BOOL func_75(int iParam0) // Position - 0x2B48 Hash - 0x2CF3924D ^0xC44AB805
{
	if (func_54(Global_1394141.f_1326, 16) && iParam0 == 0)
		return 1;

	if (func_54(Global_40.f_9028.f_12, 1) && !func_54(Global_40.f_9028.f_12, 2) && iParam0 == 0)
		return 1;

	return 0;
}

BOOL func_76(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2B9E Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_154(bParam1, bParam2, bParam3);

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

void func_77(var uParam0, var uParam1) // Position - 0x2CD3 Hash - 0xDC0FC7C5 ^0x7145159C
{
	if (uParam1->f_35 || uParam1->f_34)
	{
		if (!func_155(uParam0))
		{
			func_83(uParam0, 1);
			func_81(uParam0, uParam1, 0);
		}
	
		if (!uParam1->f_38)
		{
			func_156(uParam1);
		}
		else if (func_157(uParam1, false))
		{
			uParam1->f_38 = 0;
			func_48(uParam1, true);
		}
	}
	else
	{
		if (func_155(uParam0))
			func_83(uParam0, 0);
	
		if (uParam1->f_38)
			func_48(uParam1, false);
	}

	return;
}

void func_78(var uParam0, var uParam1) // Position - 0x2D4E Hash - 0x4F6575B9 ^0x479A1E3
{
	switch (uParam1->f_8)
	{
		case 0:
			if (!func_110(func_109(uParam0->f_1)))
			{
				func_158(&(uParam1->f_2), 5);
				func_159(&(uParam1->f_8), 3);
			}
			else
			{
				func_160(uParam0, uParam1);
			
				if (Global_1394141.f_1328)
					func_159(&(uParam1->f_8), 1);
			}
			break;
	
		case 1:
			if (Global_1394141.f_1330 && uParam1->f_2 < 5 && uParam1->f_2 != 0)
				func_158(&(uParam1->f_2), 5);
		
			if (Global_1394141.f_1329)
				func_159(&(uParam1->f_8), 2);
			break;
	
		case 2:
			if (Global_1394141.f_1329)
				if (func_160(uParam0, uParam1))
					func_159(&(uParam1->f_8), 3);
			else
				func_159(&(uParam1->f_8), 1);
		
			if (!Global_1394141.f_1328)
				if (func_160(uParam0, uParam1))
					func_159(&(uParam1->f_8), 3);
			break;
	
		case 3:
			if (func_110(func_109(uParam0->f_1)))
				func_159(&(uParam1->f_8), 0);
			break;
	}

	func_161(uParam0, uParam1);
	return;
}

void func_79(Object obParam0, int iParam1) // Position - 0x2E6C Hash - 0xF55E891F ^0xF55E891F
{
	func_162(obParam0, iParam1);
	return;
}

Ped func_80(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2E7C Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_163(iParam0, true))
		return 0;

	if (func_69(func_68(iParam0)))
	{
		persChar = func_21(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return 0;
	
		if (bParam1)
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
				PERSCHAR::_REVIVE_PERSCHAR(persChar);
	
		PERSCHAR::_0x6759BEE6762E140B(persChar);
		ped = PERSCHAR::_FORCE_SPAWN_PERSCHAR(persChar, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(ped))
			return 0;
	}

	if (bParam4 && !func_52(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_164(iParam0, true);
	func_165(iParam0);

	if (bParam3)
		func_164(iParam0, 16);

	!bParam2;
	return ped;
}

void func_81(var uParam0, var uParam1, int iParam2) // Position - 0x2F39 Hash - 0xE6FBBF6A ^0xE4B2F98E
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_3 = iParam2;
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_4 = iParam2;
	return;
}

void func_82(var uParam0, var uParam1, int iParam2) // Position - 0x2F6B Hash - 0xCC0D9CBE ^0x20DAFDBE
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_2 = iParam2;
	return;
}

void func_83(var uParam0, int iParam1) // Position - 0x2F88 Hash - 0xF323CEDF ^0x3D0F05EE
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_5 = iParam1;
	return;
}

void func_84(var uParam0, BOOL bParam1) // Position - 0x2FA5 Hash - 0xB272A69C ^0x2A37F53B
{
	if (bParam1)
		func_166(&(uParam0->f_1), 4);
	else
		func_167(&(uParam0->f_1), 4);

	return;
}

void func_85(var uParam0, BOOL bParam1) // Position - 0x2FC7 Hash - 0xF7B0944E ^0xC84C2F80
{
	if (bParam1)
		func_166(&(uParam0->f_1), 2);
	else
		func_167(&(uParam0->f_1), 2);

	return;
}

void func_86(var uParam0, BOOL bParam1) // Position - 0x2FE9 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_166(&(uParam0->f_1), 2048);
	else
		func_167(&(uParam0->f_1), 2048);

	return;
}

void func_87(var uParam0, BOOL bParam1) // Position - 0x300F Hash - 0x97140DD8 ^0xF9889272
{
	if (bParam1)
		func_166(&(uParam0->f_1), 16384);
	else
		func_167(&(uParam0->f_1), 16384);

	return;
}

void func_88(var uParam0, BOOL bParam1) // Position - 0x3035 Hash - 0x8AC5A45 ^0x8880FB31
{
	if (bParam1)
		func_166(&(uParam0->f_1), 1);
	else
		func_167(&(uParam0->f_1), 1);

	return;
}

void func_89(var uParam0, BOOL bParam1) // Position - 0x3057 Hash - 0x3BE1C7D2 ^0x3BE1C7D2
{
	if (bParam1)
		func_167(uParam0, 128);
	else
		func_166(uParam0, 128);

	return;
}

void func_90(var uParam0, BOOL bParam1) // Position - 0x3077 Hash - 0x6418D0A4 ^0x15BADFF8
{
	if (bParam1)
		func_166(&(uParam0->f_1), 8);
	else
		func_167(&(uParam0->f_1), 8);

	return;
}

void func_91(var uParam0, BOOL bParam1) // Position - 0x309B Hash - 0x82AFDBEA ^0x82AFDBEA
{
	if (bParam1)
		func_167(uParam0, 32);
	else
		func_166(uParam0, 32);

	return;
}

void func_92(var uParam0, BOOL bParam1) // Position - 0x30BB Hash - 0x9CA625A6 ^0xD96D8959
{
	if (bParam1)
		func_167(uParam0, 256);
	else
		func_166(uParam0, 256);

	return;
}

void func_93(var uParam0, BOOL bParam1) // Position - 0x30DD Hash - 0xC115F03A ^0x2E6EAB19
{
	if (bParam1)
		func_166(&(uParam0->f_1), 16);
	else
		func_167(&(uParam0->f_1), 16);

	return;
}

void func_94(var uParam0, BOOL bParam1) // Position - 0x3101 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_167(uParam0, 16);
	}
	else
	{
		func_166(uParam0, 67108864);
		func_166(uParam0, 16);
	}

	return;
}

void func_95(var uParam0, BOOL bParam1) // Position - 0x312C Hash - 0x776268CE ^0x776268CE
{
	if (bParam1)
		func_167(uParam0, 8);
	else
		func_166(uParam0, 8);

	return;
}

void func_96(var uParam0, BOOL bParam1) // Position - 0x314C Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_166(&(uParam0->f_1), 256);
	else
		func_167(&(uParam0->f_1), 256);

	return;
}

void func_97(var uParam0, BOOL bParam1) // Position - 0x3172 Hash - 0x76250B73 ^0x1D0F495F
{
	if (bParam1)
		func_166(&(uParam0->f_1), 524288);
	else
		func_167(&(uParam0->f_1), 524288);

	return;
}

void func_98(var uParam0, BOOL bParam1) // Position - 0x319A Hash - 0x57EE9974 ^0x57EE9974
{
	if (bParam1)
		func_167(uParam0, 4);
	else
		func_166(uParam0, 4);

	return;
}

void func_99(var uParam0, BOOL bParam1) // Position - 0x31B8 Hash - 0x97140DD8 ^0xA3B87048
{
	if (bParam1)
		func_166(&(uParam0->f_1), 1024);
	else
		func_167(&(uParam0->f_1), 1024);

	return;
}

void func_100(var uParam0, BOOL bParam1) // Position - 0x31DE Hash - 0x76250B73 ^0xFF9F293B
{
	if (bParam1)
		func_166(&(uParam0->f_1), 131072);
	else
		func_167(&(uParam0->f_1), 131072);

	return;
}

void func_101(var uParam0, BOOL bParam1) // Position - 0x3206 Hash - 0xCB123803 ^0xCB123803
{
	if (bParam1)
		func_167(uParam0, 2);
	else
		func_166(uParam0, 2);

	return;
}

BOOL func_102(int iParam0, BOOL bParam1) // Position - 0x3224 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_136(iParam0))
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

void func_103(var uParam0, int iParam1) // Position - 0x3255 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_104(var uParam0, var uParam1) // Position - 0x3262 Hash - 0xFF503037 ^0x15707AE
{
	int weaponHash;

	switch (uParam1->f_7)
	{
		case 0:
			if (uParam1->f_36 && !uParam1->f_37)
				func_168(&(uParam1->f_7), 1);
			break;
	
		case 1:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(1664736751);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
		
			if (func_169(uParam0->f_134, 0, false, false))
			{
				if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK")))
					uParam1->f_34 = 1;
			}
			else if (!uParam1->f_34)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false) && weaponHash != joaat("WEAPON_UNARMED") && weaponHash != joaat("OBJECT_1") && weaponHash != joaat("OBJECT_2"))
					func_170(0);
			
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 1, false) && weaponHash != joaat("WEAPON_UNARMED") && weaponHash != joaat("OBJECT_1") && weaponHash != joaat("OBJECT_2"))
					func_170(1);
			}
		
			if (!uParam1->f_36 || uParam1->f_37 || uParam1->f_35 || PED::IS_PED_IN_COMBAT(Global_35, 0) || uParam1->f_34)
				func_168(&(uParam1->f_7), 2);
			break;
	
		case 2:
			if (!uParam1->f_35 && !PED::IS_PED_IN_COMBAT(Global_35, 0) && !uParam1->f_34)
				func_168(&(uParam1->f_7), 0);
			break;
	}

	return;
}

BOOL func_105() // Position - 0x33C4 Hash - 0x5B04702E ^0x9AF8A02F
{
	Interior interiorAtCoords;
	BOOL flag;

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(-348.41605f, 699.4218f, 117.68523f);

	if (INTERIOR::IS_VALID_INTERIOR(interiorAtCoords) && INTERIOR::IS_INTERIOR_READY(interiorAtCoords))
	{
		flag = true;
	
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoords, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, "val_magiclantern_intgroup_closed", 0);
			flag = false;
		}
	
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoords, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoords, "val_magiclantern_intgroup_open", true);
			flag = false;
		}
	
		if (flag)
			return true;
	}

	return false;
}

BOOL func_106(var uParam0) // Position - 0x3439 Hash - 0x5001E582 ^0x5001E582
{
	return func_171(*uParam0, 1);
}

float func_107(var uParam0) // Position - 0x3449 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_106(uParam0))
		return uParam0->f_1;

	if (func_172(uParam0))
		return uParam0->f_2;

	return func_173() - uParam0->f_1;
}

void func_108(var uParam0) // Position - 0x347E Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

int func_109(int iParam0) // Position - 0x3494 Hash - 0x19AEB1A7 ^0x19AEB1A7
{
	switch (iParam0)
	{
		case 33:
			return 3;
	
		case 283:
			return 0;
	
		case 284:
			if (func_60(45))
				return 2;
			else
				return 1;
			break;
	
		case 525:
			return 4;
	}

	return -1;
}

BOOL func_110(int iParam0) // Position - 0x34E0 Hash - 0xEA791A51 ^0x1A3F17F2
{
	return Global_1394141.f_1279[iParam0 /*8*/].f_3;
}

void func_111(var uParam0) // Position - 0x34F5 Hash - 0xCF661AF6 ^0x625EEF04
{
	var unk;

	if (uParam0->f_1 == 33)
	{
		if (func_110(func_109(33)))
		{
			if (!func_174(1015669983) || func_120(3))
				func_175(1015669983);
		}
		else if (!Global_1394141.f_1328 && func_174(1015669983))
		{
			unk = { -352.05667f, 704.74084f, 117.95374f };
		
			if (func_20(Global_35, unk, true) > 30f)
				func_176(1015669983);
		}
	}

	return;
}

int func_112(var uParam0, var uParam1) // Position - 0x3581 Hash - 0xC6DE1B09 ^0x45814F24
{
	if (!Global_1394141.f_1328)
	{
		if (func_54(Global_1394141.f_1326, 16) && func_20(Global_35, func_13(uParam0->f_1), true) > 40f)
		{
			func_55(&(Global_1394141.f_1326), 16);
		
			if (uParam1->f_1 < 11)
				func_177(&(uParam1->f_1), 11);
		}
	}

	switch (uParam1->f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_178(0), false);
			STREAMING::REQUEST_MODEL(func_178(1), false);
			func_177(&(uParam1->f_1), 1);
			break;
	
		case 1:
			if (!func_182(&uParam1->f_10[0 /*3*/], func_179(0), func_181(func_180()), true))
				return 0;
		
			if (!func_182(&uParam1->f_10[1 /*3*/], func_179(1), func_183(), true))
				return 0;
		
			if (!func_182(&uParam1->f_10[2 /*3*/], func_179(2), func_184(2), true))
				return 0;
		
			if (!STREAMING::HAS_MODEL_LOADED(func_178(0)) && !STREAMING::HAS_MODEL_LOADED(func_178(1)))
				return 0;
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_53[0]))
				uParam1->f_53[0] = OBJECT::CREATE_OBJECT(func_178(0), 2542.2476f, -1281.8384f, 49.28225f, true, true, false, false, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_53[1]))
				uParam1->f_53[1] = OBJECT::CREATE_OBJECT(func_178(1), 2542.2476f, -1281.8384f, 49.28225f, true, true, false, false, true);
		
			if (!func_180() && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[0 /*3*/]))
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam1->f_10[0 /*3*/], "b_playerArthur", true, false);
		
			func_185(uParam1);
			func_177(&(uParam1->f_1), 2);
			break;
	
		case 2:
			if (func_32(Global_35, uParam1->f_59[1], true, 0) && func_54(uParam1->f_25, 4))
			{
				func_55(&(uParam1->f_25), 4);
				func_177(&(uParam1->f_1), 3);
			}
			break;
	
		case 3:
			func_186(uParam0, &uParam1->f_10[0 /*3*/]);
			func_177(&(uParam1->f_1), 4);
			break;
	
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_10[0 /*3*/], false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam1->f_10[0 /*3*/]) > 0.85f)
			{
				func_82(uParam0, uParam1, 1);
				func_177(&(uParam1->f_1), 5);
			}
			break;
	
		case 5:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam1->f_10[0 /*3*/], false))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[0 /*3*/]);
		
			if (func_54(Global_1394141.f_1326, 32) && func_32(Global_35, uParam1->f_59[0], true, 0))
				func_177(&(uParam1->f_1), 6);
			break;
	
		case 6:
			func_187(uParam0, &uParam1->f_10[1 /*3*/], uParam1);
			func_177(&(uParam1->f_1), 7);
			break;
	
		case 7:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[1 /*3*/]) && ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") || ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam1->f_10[1 /*3*/]) > 0.5f)
				func_177(&(uParam1->f_1), 8);
			break;
	
		case 8:
			if (func_20(Global_35, func_13(uParam0->f_1), true) > 30f)
			{
				func_177(&(uParam1->f_1), 10);
				return 0;
			}
		
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, SCRIPT_TASK_STAND_STILL, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.3762f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_134, -1);
			}
		
			if (!func_11(uParam1->f_70[0]))
			{
				uParam1->f_70[0] = func_188("TAKE_LETTER", joaat("INPUT_CONTEXT_Y"), uParam1->f_59[1], 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false);
			}
			else if (func_41(uParam1->f_70[0], true))
			{
				func_12(&uParam1->f_70[0], true, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, SPC_LEAVE_CAMERA_CONTROL_ON, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 2541.0315f, -1281.497f, 49.21795f, 1f, 20000, 0.25f, 0, -136.15f);
				func_177(&(uParam1->f_1), 9);
			}
			break;
	
		case 9:
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, SCRIPT_TASK_STAND_STILL, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.3762f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_134, -1);
			}
		
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD, true) == 8 || func_20(Global_35, 2541.0315f, -1281.497f, 49.21795f, true) < 0.5f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_189(uParam0, &uParam1->f_10[2 /*3*/], uParam1);
				func_177(&(uParam1->f_1), 10);
			}
			break;
	
		case 10:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[1 /*3*/]))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam1->f_10[1 /*3*/], true, false))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_10[1 /*3*/], false))
					{
						if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, SCRIPT_TASK_STAND_STILL, true) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.3762f, 48.21795f, true, false, true, true);
							TASK::TASK_STAND_STILL(uParam0->f_134, -1);
						}
					}
					else
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[1 /*3*/]);
					}
				}
			}
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam1->f_10[0 /*3*/], true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_10[0 /*3*/], false))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[0 /*3*/]);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[2 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_10[2 /*3*/], false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam1->f_10[2 /*3*/]) > 0.5f)
			{
				if (!func_54(uParam1->f_25, 131072))
				{
					func_190(521481081, 1, false, 0, 0, 752097756, 0, 0, 0, 0);
					func_191(4000, false, 1065353216, 1, 0, 0, 1, 752097756);
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_53[0]))
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uParam1->f_53[0]);
				
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_53[1]))
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uParam1->f_53[1]);
				
					func_79(&(uParam1->f_25), 131072);
				}
			}
		
			if (func_20(Global_35, func_13(uParam0->f_1), true) > 30f)
				func_177(&(uParam1->f_1), 11);
			break;
	
		case 11:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam1->f_10[0 /*3*/], true, false))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[0 /*3*/]);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[1 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam1->f_10[1 /*3*/], true, false))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[1 /*3*/]);
		
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[2 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam1->f_10[2 /*3*/], true, false))
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[2 /*3*/]);
		
			if (func_11(uParam1->f_70[0]))
				func_12(&uParam1->f_70[0], true, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_53[0]))
				OBJECT::DELETE_OBJECT(&uParam1->f_53[0]);
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_53[1]))
				OBJECT::DELETE_OBJECT(&uParam1->f_53[1]);
		
			func_55(&(Global_1394141.f_1326), 16);
			func_177(&(uParam1->f_1), 12);
			break;
	
		case 12:
			return 1;
	}

	return 0;
}

void func_113(var uParam0, var uParam1) // Position - 0x3CFC Hash - 0x56266D5 ^0xB0C8D834
{
	switch (uParam0->f_9)
	{
		case 0:
			if (func_54(uParam0->f_25, 524288))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && func_193(Global_35, "WHATS_PLAYING", 291934926, uParam1->f_134, 1, func_192(func_180()), 0, 1))
				{
					func_42(&(uParam0->f_39));
					func_194(&(uParam0->f_9), 1);
				}
			}
			break;
	
		case 1:
			if (!func_195(0f) && func_107(&(uParam0->f_39)) > 2f)
				func_194(&(uParam0->f_9), 2);
			break;
	
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_134) && func_193(uParam1->f_134, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Global_40.f_9028[uParam0->f_24]), 291934926, Global_35, 1, func_197(uParam1->f_1), 0, 1))
			{
				func_42(&(uParam0->f_39));
				func_194(&(uParam0->f_9), 3);
			}
			break;
	
		case 3:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_134) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && func_107(&(uParam0->f_39)) > 3f)
			{
				func_42(&(uParam0->f_39));
				func_55(&(uParam0->f_25), 8);
				func_194(&(uParam0->f_9), 4);
			}
			break;
	
		case 4:
			if (func_107(&(uParam0->f_39)) > 45f)
			{
				func_42(&(uParam0->f_39));
				func_194(&(uParam0->f_9), 5);
			}
			break;
	
		case 5:
			if (!Global_1394141.f_1328)
			{
				func_55(&(uParam0->f_25), 524288);
				uParam1->f_7 = 1;
				uParam1->f_131[1] = 0;
				func_194(&(uParam0->f_9), 0);
			}
			break;
	}

	return;
}

void func_114(var uParam0, var uParam1) // Position - 0x3E93 Hash - 0x981767C8 ^0x47D6409F
{
	float num;
	BOOL flag;
	BOOL flag2;
	int weaponHash;

	num = 150f;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
		num = func_35(Global_35, uParam0->f_134, true, true);

	flag = false;

	if (func_198(uParam0->f_134, true, true, true, 0, false) || func_199(uParam0->f_134, 1090519040, 1103626240, 1097859072, false))
		if (PED::GET_PED_RESET_FLAG(Global_35, 311))
			flag = true;

	if (uParam1->f_34 && !flag && num > 40f)
		uParam1->f_34 = 0;

	if (uParam1->f_3 >= 3 && uParam1->f_3 != 7 && num < 40f)
	{
		if (uParam1->f_35 || func_200(uParam0->f_134, 0, &(uParam1->f_73), &(uParam1->f_101), 0, 0))
		{
			if (uParam1->f_3 == 3)
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_134, uParam1->f_10[3 /*3*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134);
					func_201(uParam1, 0);
					func_202(&(uParam1->f_3), 4);
					func_42(&(uParam1->f_67));
					func_203(&(uParam1->f_6), 3);
				}
				else
				{
					TASK::TASK_COWER(uParam0->f_134, -1, Global_35, 0);
					func_202(&(uParam1->f_3), 7);
				}
			}
		}
	}

	if (uParam1->f_5 != -1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[3 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_10[3 /*3*/], false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_5)) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4)))
		{
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_5));
			uParam1->f_5 = -1;
		}
	}

	if (func_54(uParam1->f_25, 4096))
	{
		uParam1->f_3 = 9;
		func_55(&(uParam1->f_25), 4096);
	}

	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_28 = 1;
			uParam1->f_30 = 1;
			func_116(uParam1);
			func_201(uParam1, 10);
			func_205(uParam1);
			func_206(&uParam1->f_59[2], &uParam1->f_59[3], func_109(uParam0->f_1));
			func_202(&(uParam1->f_3), 1);
			break;
	
		case 1:
			if (!func_182(&uParam1->f_10[3 /*3*/], func_179(3), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(10), true))
				return;
		
			if (!func_207(uParam1))
				return;
		
			if (!func_208(uParam1, ENTITY::GET_ENTITY_COORDS(uParam0->f_134, true, false), func_109(uParam0->f_1)))
				return;
		
			func_202(&(uParam1->f_3), 2);
			break;
	
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[3 /*3*/]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_10[3 /*3*/], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
				func_209(uParam1, func_109(uParam0->f_1));
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam1->f_10[3 /*3*/], func_210(func_109(uParam0->f_1)), func_211(func_109(uParam0->f_1)), 2);
				ANIMSCENE::START_ANIM_SCENE(uParam1->f_10[3 /*3*/]);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_178(2));
				func_202(&(uParam1->f_3), 3);
			}
			break;
	
		case 3:
			if (flag)
			{
				func_82(uParam0, uParam1, 0);
				func_127(uParam0, uParam1, false);
				func_81(uParam0, uParam1, 0);
				func_201(uParam1, 0);
				func_202(&(uParam1->f_3), 4);
				func_42(&(uParam1->f_67));
				uParam1->f_34 = 1;
				Global_1394141.f_1279[uParam1->f_24 /*8*/].f_6 = 1;
				func_203(&(uParam1->f_6), 3);
			}
		
			func_212(uParam0, uParam1, flag, num);
			break;
	
		case 4:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_10[3 /*3*/], false))
			{
				if (!func_213(&uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4)))
					return;
			
				func_214(&uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
				ANIMSCENE::START_ANIM_SCENE(uParam1->f_10[3 /*3*/]);
				func_202(&(uParam1->f_3), 3);
			}
			else
			{
				if (!func_213(&uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4)))
					return;
			
				if (uParam1->f_4 == 5 || uParam1->f_4 == 4)
				{
					flag2 = false;
				
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 0, false) && weaponHash != joaat("WEAPON_UNARMED"))
					{
						func_170(0);
						flag2 = true;
					}
				
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, true, 1, false) && weaponHash != joaat("WEAPON_UNARMED"))
					{
						func_170(1);
						flag2 = true;
					}
				
					if (!flag2)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam1->f_10[3 /*3*/], "ARTHUR", AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4), 1069379748, false, 0, 20000, -1082130432);
						func_202(&(uParam1->f_3), 5);
					}
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
				
					if (uParam1->f_4 == 0 || uParam1->f_4 == 1)
					{
						func_42(&(uParam1->f_64));
						func_214(&uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4));
						func_202(&(uParam1->f_3), 7);
					}
					else
					{
						func_42(&(uParam1->f_67));
						func_214(&uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4));
						func_202(&(uParam1->f_3), 3);
					}
				}
			}
		
			if (uParam1->f_4 != 5 && uParam1->f_4 != 4 && uParam1->f_4 != 9 && uParam1->f_4 != 10)
				func_193(uParam0->f_134, func_215(uParam1->f_4, 0), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
			break;
	
		case 5:
			if (ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(uParam1->f_10[3 /*3*/], "ARTHUR"))
			{
				func_214(&uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4));
				func_202(&(uParam1->f_3), 6);
			}
			break;
	
		case 6:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_10[3 /*3*/], false) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(uParam1->f_4)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam1->f_10[3 /*3*/]) > 0.267f)
			{
				if (func_118(uParam1))
				{
					func_216(uParam1);
					func_55(&(uParam1->f_25), 16384);
				}
				else
				{
					func_193(Global_35, "TICKET_PLEASE", 291934926, uParam0->f_134, 1, func_192(func_180()), 0, 1);
					func_217(uParam0->f_117, 0, 0, true, 1);
				}
			
				func_202(&(uParam1->f_3), 3);
			}
			break;
	
		case 7:
			if (!func_54(uParam1->f_25, 8192))
			{
				if (!uParam1->f_35)
					func_218(uParam0);
			
				func_79(&(uParam1->f_25), 8192);
			}
		
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, SCRIPT_TASK_COWER, true) != 1)
				if (func_219(&(uParam1->f_64)) > 5f && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(1)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(3)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(0)))
					TASK::TASK_COWER(uParam0->f_134, -1, Global_35, 0);
		
			if (!uParam1->f_35 && !uParam1->f_34)
			{
				func_220(uParam0, uParam1);
				func_202(&(uParam1->f_3), 0);
				return;
			}
		
			if (func_219(&(uParam1->f_64)) > 10f && !func_221(true) && !func_54(uParam1->f_25, 32))
			{
				func_201(uParam1, 1);
				func_79(&(uParam1->f_25), 32);
				func_42(&(uParam1->f_64));
				func_202(&(uParam1->f_3), 4);
			}
		
			if (!func_54(uParam1->f_25, 134217728) && !func_221(true) && MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, true, false), 2f, true, true))
			{
				func_193(uParam0->f_134, "GENERIC_SHOCKED_HIGH", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(uParam1->f_25), 134217728);
			}
		
			if (func_219(&(uParam1->f_64)) > 15f && !func_221(true) && !func_54(uParam1->f_25, 67108864))
			{
				func_193(uParam0->f_134, "HELP_SHOUT", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(uParam1->f_25), 67108864);
			}
			break;
	
		case 8:
			break;
	
		case 9:
			func_220(uParam0, uParam1);
			func_202(&(uParam1->f_3), 0);
			break;
	
		case 10:
			break;
	}

	return;
}

int func_115(int iParam0) // Position - 0x46F8 Hash - 0x79A48FAE ^0x79A48FAE
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	}

	return 0;
}

void func_116(var uParam0) // Position - 0x473D Hash - 0xB97EA5C0 ^0xBFCE02E5
{
	if (!uParam0->f_48 && func_222(-1110862888, 1, false))
		uParam0->f_48 = 1;

	if (!uParam0->f_49 && func_222(1242466573, 1, false))
		uParam0->f_49 = 1;

	if (!uParam0->f_50 && func_222(2037803338, 1, false))
		uParam0->f_50 = 1;

	return;
}

void func_117(int iParam0, const char* sParam1, BOOL bParam2) // Position - 0x479C Hash - 0x90B9FBB4 ^0x1E664566
{
	int num;

	if (bParam2 && !func_11(iParam0))
		return;

	num = func_37(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, sParam1);
	return;
}

BOOL func_118(var uParam0) // Position - 0x47E5 Hash - 0xBAE135FD ^0xCC1AF523
{
	switch (uParam0->f_24)
	{
		case 0:
			if (uParam0->f_48)
				return true;
			break;
	
		case 1:
		case 3:
			if (uParam0->f_49)
				return true;
			break;
	
		case 2:
		case 4:
			if (uParam0->f_50)
				return true;
			break;
	}

	return false;
}

int func_119(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x4840 Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_120(int iParam0) // Position - 0x487B Hash - 0xEA791A51 ^0xF1C50E9A
{
	return Global_1394141.f_1279[iParam0 /*8*/].f_2;
}

BOOL func_121(int iParam0, int iParam1) // Position - 0x4890 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_122(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x48B1 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
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
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
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
	func_223(iParam0, true);
	func_224(iParam0, true);
	func_225(iParam0, 128);
	return;
}

BOOL func_123(int iParam0, BOOL bParam1) // Position - 0x4B57 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_11(iParam0))
		return false;

	return !func_121(iParam0, 4);
}

void func_124(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B7C Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_11(iParam0))
		return;

	num = func_37(iParam0);

	if (bParam1)
	{
		func_226(iParam0, 4);
		func_223(num, true);
		func_224(num, true);
	}
	else
	{
		func_225(iParam0, 4);
		func_224(num, false);
	}

	return;
}

void func_125(var uParam0, float fParam1) // Position - 0x4BCB Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_173() - fParam1;
	func_227(uParam0, 1);
	func_228(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_126(int iParam0) // Position - 0x4BF1 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_127(var uParam0, var uParam1, BOOL bParam2) // Position - 0x4BFD Hash - 0xB2715ED6 ^0x81B3A465
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_134, "bUpdatedPlayer"))
		DECORATOR::DECOR_SET_BOOL(uParam0->f_134, "bUpdatedPlayer", bParam2);

	uParam1->f_32 = bParam2;
	return;
}

void func_128(Hash hParam0, BOOL bParam1, float fParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4C27 Hash - 0xD777F4CF ^0xBFF3124C
{
	func_229(hParam0, false, false);

	if (func_230(hParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam2, bParam6);
	
		if (iParam5 > 0f)
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(hParam0, iParam5);
	
		if (bParam3)
			func_231(hParam0, fParam2, true, bParam6);
		else if (bParam1)
			if (bParam4)
				func_232(hParam0, true);
			else
				func_233(hParam0, true);
		else
			func_234(hParam0, true);
	
		if (bParam7)
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(hParam0, true);
	}
	else if (func_235())
	{
	}
	else
	{
		NETWORK::NETWORK_IS_IN_SESSION();
	}

	return;
}

BOOL func_129(int iParam0, BOOL bParam1) // Position - 0x4CB2 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_152() != -1)
		return false;

	if (!func_66(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_130(int iParam0) // Position - 0x4CE0 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_66(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_131(int iParam0, BOOL bParam1) // Position - 0x4D04 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_152() != -1)
		return;

	if (!func_66(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_132(int iParam0) // Position - 0x4D3D Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_66(iParam0))
		return;

	ped = func_26(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

int func_133(int iParam0, BOOL bParam1) // Position - 0x4D81 Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_66(iParam0))
		return 0;

	if (!func_129(iParam0, 2))
		return 0;

	if (func_68(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
		return 1;

	if (func_129(iParam0, true) && !bParam1)
	{
		func_164(iParam0, 128);
		return 1;
	}

	func_131(iParam0, 129);
	func_132(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_21(iParam0));
	func_151(iParam0, 0);
	return 1;
}

void func_134(Object obParam0, int iParam1) // Position - 0x4E04 Hash - 0x9815F445 ^0x9815F445
{
	*obParam0 = *obParam0 - *obParam0 && iParam1;
	return;
}

BOOL func_135(int iParam0) // Position - 0x4E19 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_121(iParam0, 2);
}

int func_136(int iParam0) // Position - 0x4E28 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_65(iParam0))
		return -1;

	return func_236(iParam0);
}

BOOL func_137(Hash hParam0, Hash hParam1) // Position - 0x4E44 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_138(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x4E75 Hash - 0x72399051 ^0x6D1C1C66
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_141(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam5;
		return false;
	}

	!bParam5;
	*uParam3 = outData.f_3;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam5;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	if (bParam4)
		func_237(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

int func_139(Hash hParam0, int iParam1) // Position - 0x4F12 Hash - 0x7A1C2599 ^0xFF9B5634
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

Hash func_140(int iParam0, int iParam1) // Position - 0x4F5C Hash - 0x3644D28E ^0x6DB2088F
{
	int outKey;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	outKey = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &outKey))
		return 0;

	return outKey;
}

BOOL func_141(Hash hParam0, int iParam1) // Position - 0x4F9F Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_142(int iParam0) // Position - 0x4FB9 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_143(int iParam0) // Position - 0x4FCC Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_144(int iParam0) // Position - 0x4FF6 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_145(BOOL bParam0) // Position - 0x5034 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_146(ePedType eptParam0) // Position - 0x5047 Hash - 0x5000025C ^0x5000025C
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

void func_147(Ped pedParam0, Hash hParam1) // Position - 0x549A Hash - 0xEA1C858E ^0x1922FE69
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_238(pedParam0, hParam1))
		{
			if (func_239(pedParam0, hParam1))
			{
				if (func_240(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_241(pedParam0);
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

void func_148(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x5544 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_149(Ped pedParam0, BOOL bParam1) // Position - 0x5574 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_150(Ped pedParam0, int iParam1) // Position - 0x55B9 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_151(int iParam0, PersChar pchParam1) // Position - 0x55E0 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_66(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

BOOL func_152() // Position - 0x5601 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_153(int iParam0) // Position - 0x560F Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_66(iParam0))
		return false;

	if (!func_129(iParam0, 2))
		return false;

	return true;
}

BOOL func_154(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5635 Hash - 0xC9655EC3 ^0x88C9AFE1
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

BOOL func_155(var uParam0) // Position - 0x56D3 Hash - 0xD7897C38 ^0xEEFD78B8
{
	return Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_5;
}

void func_156(var uParam0) // Position - 0x56EE Hash - 0x2C0E9C6A ^0xE55DE4D8
{
	if (func_157(uParam0, true))
	{
		if (func_242(uParam0->f_24))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, SPC_LEAVE_CAMERA_CONTROL_ON, false);
		
			if (!func_243(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_244(uParam0->f_24), 1f, 20000, 1048576000, 0, 1193033728);
		}
	
		return;
	}

	if (func_243(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
		TASK::CLEAR_PED_TASKS(Global_35, true, false);

	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);

	switch (uParam0->f_24)
	{
		case 0:
			func_128(212326452, true, 0f, false, false, 0, false, false);
			func_128(-80890560, true, 0f, false, false, 0, false, false);
			func_128(-302077142, true, 0f, false, false, 0, false, false);
			func_128(-531755063, true, 0f, false, false, 0, false, false);
			break;
	
		case 1:
			func_128(-2034821814, true, 0f, false, false, 0, false, false);
			func_128(-786191838, true, 0f, false, false, 0, false, false);
			func_128(-1518382426, true, 0f, false, false, 0, false, false);
			func_128(-223351546, true, 0f, false, false, 0, false, false);
			break;
	
		case 2:
			func_128(235202295, true, 0f, false, false, 0, false, false);
			func_128(-71941542, true, 0f, false, false, 0, false, false);
			func_128(-723815263, true, 0f, false, false, 0, false, false);
			func_128(1920184275, true, 0f, false, false, 0, false, false);
			break;
	
		case 3:
			func_105();
			break;
	
		case 4:
			func_128(1373799284, true, 0f, false, false, 0, false, false);
			func_128(1735175816, true, 0f, false, false, 0, false, false);
			break;
	}

	uParam0->f_38 = 1;
	return;
}

BOOL func_157(var uParam0, BOOL bParam1) // Position - 0x5898 Hash - 0xE8A1E5B9 ^0x97C970CF
{
	if (uParam0->f_36 || uParam0->f_37)
		return true;

	if (bParam1 && func_32(Global_35, uParam0->f_52, true, 0))
		return true;

	return false;
}

void func_158(var uParam0, int iParam1) // Position - 0x58D1 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_159(var uParam0, int iParam1) // Position - 0x58DE Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_160(var uParam0, var uParam1) // Position - 0x58EB Hash - 0x4F567DDE ^0x8123AE85
{
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
		num = func_35(Global_35, uParam0->f_134, true, true);
	else
		num = 150f;

	if (num < 30f)
	{
		if (uParam1->f_2 == 6 || uParam1->f_2 == 5 || uParam1->f_2 == 0 && Global_1394141.f_1328 || func_110(uParam1->f_24))
		{
			func_158(&(uParam1->f_2), 1);
			return false;
		}
	}
	else if (num > 40f)
	{
		if (uParam1->f_2 != 5 && uParam1->f_2 != 6)
		{
			func_158(&(uParam1->f_2), 5);
			return true;
		}
	}

	return false;
}

void func_161(var uParam0, var uParam1) // Position - 0x599A Hash - 0x91DD6474 ^0x31BD123A
{
	if (CAM::IS_SCREEN_FADED_OUT())
		return;

	switch (uParam1->f_2)
	{
		case 0:
			break;
	
		case 1:
			if (func_110(func_109(uParam0->f_1)) || Global_1394141.f_1328 && func_35(Global_35, uParam0->f_134, true, true) < 30f)
				if (AUDIO::LOAD_STREAM(func_49(uParam1->f_26), func_50(uParam1->f_24)))
					func_158(&(uParam1->f_2), 2);
			break;
	
		case 2:
			AUDIO::PLAY_STREAM_FROM_POSITION(func_245(uParam0->f_1), AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_49(uParam1->f_26), func_50(uParam1->f_24)));
			func_158(&(uParam1->f_2), 3);
			break;
	
		case 3:
			if (!AUDIO::IS_STREAM_PLAYING(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_49(uParam1->f_26), func_50(uParam1->f_24))))
				func_158(&(uParam1->f_2), 4);
			break;
	
		case 4:
			uParam1->f_26 = uParam1->f_26 + 1;
		
			if (uParam1->f_26 >= 10)
				uParam1->f_26 = 0;
		
			func_158(&(uParam1->f_2), 1);
			break;
	
		case 5:
			if (func_51(func_49(uParam1->f_26), func_50(uParam1->f_24)))
			{
				AUDIO::STOP_STREAM(AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION(func_49(uParam1->f_26), func_50(uParam1->f_24)));
				func_158(&(uParam1->f_2), 6);
			}
			break;
	
		case 6:
			break;
	}

	return;
}

void func_162(var uParam0, int iParam1) // Position - 0x5AF0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_163(int iParam0, BOOL bParam1) // Position - 0x5B01 Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_66(iParam0))
		return false;

	if (func_129(iParam0, true) && !func_52(iParam0) && func_130(iParam0))
		return false;

	if (!func_129(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_71(iParam0, false))
			return false;

	return true;
}

void func_164(int iParam0, BOOL bParam1) // Position - 0x5B61 Hash - 0x61515A20 ^0x61515A20
{
	if (func_152() != -1)
		return;

	if (!func_66(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_165(int iParam0) // Position - 0x5B92 Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_66(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

void func_166(var uParam0, int iParam1) // Position - 0x5BB5 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_167(var uParam0, int iParam1) // Position - 0x5BCA Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_168(var uParam0, int iParam1) // Position - 0x5BDB Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_169(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5BE8 Hash - 0x8E7018BE ^0x1BA834FB
{
	Entity outEntity;

	outEntity = 0;

	if (func_246(16))
		return Global_1935630.f_58 == pedParam0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(outEntity))
			{
				if (ENTITY::IS_ENTITY_A_PED(outEntity))
				{
					func_247(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
				
					if (Global_1935630.f_58 == pedParam0)
						return true;
				}
			}
		}
	}

	return false;
}

void func_170(int iParam0) // Position - 0x5C5D Hash - 0x18700B53 ^0xA392AC83
{
	Hash weaponHash;

	weaponHash = func_248(Global_35, false, iParam0, false);

	if (func_249(weaponHash))
	{
		if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(weaponHash))
			WEAPON::MAKE_PED_DROP_WEAPON(Global_35, true, iParam0, true, false);
		else if (func_250(weaponHash))
			if (func_249(func_248(Global_35, false, 7, false)) || func_249(func_248(Global_35, false, 9, false)))
				if (func_249(func_248(Global_35, false, 8, false)))
					func_251(weaponHash);
				else
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 8, false, false);
			else
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 7, false, false);
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) && weaponHash != joaat("weapon_fishingrod"))
			if (func_249(func_248(Global_35, false, 7, false)) || func_249(func_248(Global_35, false, 9, false)))
				if (func_249(func_248(Global_35, false, 10, false)))
					func_251(weaponHash);
				else
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 10, false, false);
			else
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 9, false, false);
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			if (iParam0 == 0)
				if (!func_249(func_248(Global_35, false, 2, false)))
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 2, false, false);
				else
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
			else
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, weaponHash, true, 3, false, false);
	
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, iParam0, false, false);
	}

	return;
}

BOOL func_171(int iParam0, int iParam1) // Position - 0x5DDD Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_172(var uParam0) // Position - 0x5DEC Hash - 0x39705408 ^0x39705408
{
	return func_171(*uParam0, 2);
}

float func_173() // Position - 0x5DFC Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_174(int iParam0) // Position - 0x5E2E Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_252(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

void func_175(int iParam0) // Position - 0x5E7D Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_252(iParam0, 1);
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

void func_176(int iParam0) // Position - 0x5F16 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_252(iParam0, 1);
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

void func_177(var uParam0, int iParam1) // Position - 0x5F9C Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

Hash func_178(int iParam0) // Position - 0x5FA9 Hash - 0x26530429 ^0xE225DECF
{
	switch (iParam0)
	{
		case 0:
			return joaat("p_cs_letter03x");
	
		case 1:
			return joaat("p_moneystack01x");
	
		case 2:
			return joaat("p_coinstack02");
	
		case 3:
			return joaat("p_foldedbillsxsmall01bx");
	
		case 4:
			return joaat("p_cs_admitticket01x");
	
		default:
		
	}

	return 0;
}

char* func_179(int iParam0) // Position - 0x6000 Hash - 0xE5247562 ^0xE97C5C85
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@roddf@ig@roddf_s3@ig2_boxofficegreet";
	
		case 1:
			return "script@rcm@roddf@ig@roddf_s3@ig3_boxofficeleave";
	
		case 2:
			return "script@rcm@roddf@ig@roddf_s3@ig4_boxofficecollect";
	
		case 3:
			return "script@shows@magic_lantern@ig1_ticket_collector@action";
	
		default:
		
	}

	return "[THEATER_TT_GET_ANIM_SCENE_NAME] - FAIL -- 0";
}

BOOL func_180() // Position - 0x6048 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_152() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

char* func_181(BOOL bParam0) // Position - 0x606D Hash - 0x5C0C5385 ^0x47D7E802
{
	if (bParam0 && func_253(144, 1))
		return "pl_Conv_TicketTeller_John";

	return "pl_Conv_TicketTeller_Arthur";
}

BOOL func_182(var uParam0, char* sParam1, char* sParam2, BOOL bParam3) // Position - 0x6091 Hash - 0x51FDB266 ^0xCE3257A6
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		return true;

	if (!uParam0->f_1 && !ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam3)
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
	
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		uParam0->f_1 = 1;
	}

	return false;
}

char* func_183() // Position - 0x60EA Hash - 0x306ACA3A ^0x84814805
{
	return "pl_Convo_LetterPickup";
}

char* func_184(int iParam0) // Position - 0x60F6 Hash - 0xE5247562 ^0x10AB29BE
{
	switch (iParam0)
	{
		case 0:
			return "pl_Enter_45L";
	
		case 1:
			return "pl_Enter_45R";
	
		case 2:
			return "pl_Enter_F_NoWalk";
	
		case 3:
			return "pl_Enter_F_Walk";
	
		default:
		
	}

	return "[THEATER_TT_GET_ODDF_COLLECT_PLAYLIST] -- FAIL -- 1";
}

void func_185(var uParam0) // Position - 0x613E Hash - 0xF8C0E94 ^0x9158CD02
{
	int i;
	Vector3 vector;
	int num;

	i = 0;

	for (i = 0; i <= 1; i = i + 1)
	{
		num = i;
		vector = { func_254(num) };
		uParam0->f_59[num] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(vector.f_10, vector, vector.f_3, vector.f_6, vector.f_9);
	}

	return;
}

void func_186(var uParam0, var uParam1) // Position - 0x618E Hash - 0xCA1A4D50 ^0x8935FAAC
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
		return;

	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_134, 0);

	if (!func_180())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		func_255(uParam1, "b_playerArthur", true, "IG2");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}

	ANIMSCENE::START_ANIM_SCENE(*uParam1);
	return;
}

void func_187(var uParam0, var uParam1, var uParam2) // Position - 0x6201 Hash - 0x5407FF35 ^0x6973C128
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
		return;

	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_134, 0);

	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_53[0]))
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "P_CS_LETTER03X", uParam2->f_53[0], 0);

	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_53[1]))
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", uParam2->f_53[1], 0);

	if (!func_180())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		func_255(uParam1, "b_playerArthur", true, "IG3");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}

	ANIMSCENE::START_ANIM_SCENE(*uParam1);
	return;
}

int func_188(char* sParam0, Hash hParam1, Volume volParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, Hash hParam12, BOOL bParam13) // Position - 0x62B6 Hash - 0x90EF6909 ^0x581337A9
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
		if (func_121(i, 2))
			if (volParam2 == Global_1945188[i /*18*/].f_10 && hParam1 == Global_1945188[i /*18*/].f_4)
				return i;
		else if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_122(num, hParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, volParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, false, false, 0, hParam12, bParam13);
		return num;
	}

	return 0;
}

void func_189(var uParam0, var uParam1, var uParam2) // Position - 0x6376 Hash - 0x4FA54EA2 ^0xE8701D41
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
		return;

	if (!func_180())
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
	else
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);

	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_53[0]))
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cs_letter03x", uParam2->f_53[0], 0);

	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_53[1]))
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", uParam2->f_53[1], 0);

	ANIMSCENE::START_ANIM_SCENE(*uParam1);
	return;
}

int func_190(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x640D Hash - 0x11449F01 ^0x11449F01
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

	if (!func_141(hParam0, 0))
		return 0;

	if (!func_256(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_257(hParam0, &value, iParam1))
		return 0;

	func_258(hParam0, bParam2);
	lootTableKey = 0;

	if (func_259(hParam0, false, false) == 0)
	{
		if (func_260(hParam0))
		{
			hash = func_261(hParam0);
			collectableSubcategory = func_262(hash);
			num = func_263(collectableSubcategory) + 1;
			func_264(hash);
		
			if (func_265(38))
				func_266(483, false);
			else
				func_266(482, false);
		
			if (num == func_267(collectableSubcategory))
			{
				func_190(func_268(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_269() && func_270(4))
				{
					if (func_269() && func_271(38) || func_265(38))
					{
						func_273(38, func_268(collectableSubcategory), 0, 0, func_272(), false, -1, false);
						func_274(2);
					}
					else
					{
						func_273(38, func_268(collectableSubcategory), 0, 0, func_272(), false, -1, false);
						func_274(1);
					}
				}
			}
			else if (func_269() && func_270(4))
			{
				if (func_269() && func_271(38) || func_265(38))
				{
					func_273(38, 0, 0, 0, func_272(), false, -1, false);
					func_274(2);
				}
				else
				{
					func_273(38, 0, 0, 0, func_272(), false, -1, false);
					func_274(1);
				}
			}
		
			if (func_269() && func_270(4))
				if (!Global_1914319.f_17376)
					if (func_269() && func_271(38) || func_265(38))
						func_275(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_275(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_276(hParam0) == joaat("CLOTHING"))
		if (!func_137(hParam0, 866047851) && !func_137(hParam0, -1979000645) && !func_137(hParam0, 1248798204))
			flag = true;

	if (func_277(hParam0, 8388608) && !func_60(28))
		func_278(28);

	if (!flag)
	{
		if (func_137(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_279(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_281(func_280(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_152() == -1)
						func_282(ammoTypeForWeapon);
				
					if (func_283(false) && func_284(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_285(hParam0, value, hParam5);
					
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
					if (func_152() == -1)
						func_282(hParam0);
				
					if (func_283(false) && func_284(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_285(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_276(hParam0) == joaat("WEAPON"))
		{
			if (!func_286(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_276(hParam0) == joaat("AMMO") && func_287(hParam0))
		{
			if (!func_288(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_137(hParam0, 866047851))
		{
			func_289(hParam0);
		}
		else if (func_137(hParam0, 2000026003))
		{
			func_290(hParam0);
		}
		else if (func_137(hParam0, -103750053))
		{
			func_292(func_291(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_292(func_293(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_137(hParam0, -121341956) && !func_137(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_102(Global_1835011[4 /*74*/].f_1, true))
					func_266(498, false);
		
			if (func_137(hParam0, -2017733358) || func_137(hParam0, -1369131378))
				func_294(hParam0);
		}
		else if (func_137(hParam0, -136654233))
		{
			if (func_137(hParam0, -1021472396))
			{
			}
		}
		else if (func_137(hParam0, -1466706512) && func_137(hParam0, 1147021565))
		{
			func_266(484, false);
		}
		else if (func_137(hParam0, 1147021565) && func_137(hParam0, -524514947))
		{
		}
		else if (func_137(hParam0, 554195525))
		{
		}
		else if (func_137(hParam0, 589988438))
		{
			if (func_295())
			{
				func_296(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_137(hParam0, 787083290) && func_137(hParam0, 949916894))
		{
			func_297(hParam0);
		}
		else if (func_137(hParam0, -1718133314))
		{
			func_298(hParam0);
		}
		else if (func_137(hParam0, -1738650224))
		{
			func_299(hParam0);
		}
		else if (func_137(hParam0, -1112814642) && func_137(hParam0, 949916894))
		{
			func_300(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_137(hParam0, 1841149704))
		{
			func_301();
		}
		else if (func_137(hParam0, 606799272))
		{
			func_302(hParam0, iParam1);
			func_303(hParam0);
		}
		else if (func_137(hParam0, -1112814642) && func_137(hParam0, -1697809989))
		{
			func_304(hParam0, 0, false, false);
		}
		else if (func_137(hParam0, -2017733358) || func_137(hParam0, -1369131378))
		{
			func_294(hParam0);
		}
		else if (func_137(hParam0, -1921346699))
		{
			if (func_152() != -1)
				return 0;
		
			func_305(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_137(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_222(471514780, 1, false))
						func_190(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_222(526074061, 1, false))
						func_190(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_222(-967317137, 1, false))
						func_190(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_222(670273567, 1, false))
						func_190(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_222(215778062, 1, false))
						func_190(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_222(-1045488665, 1, false))
						func_190(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_137(hParam0, -839724752) && func_277(hParam0, 4))
		{
			if (!func_265(42))
				func_306(hParam0);
		}
		else if (func_137(hParam0, 1399091007))
		{
			func_307(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_137(hParam0, 1248798204))
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
				func_190(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_152() == -1)
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
					func_325(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_325(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_325(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_315(499813453, joaat("treasure_hunt_loot_01"), false);
				func_316(499813453, false);
				func_317(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_315(390004462, joaat("treasure_hunt_loot_17"), false);
				func_316(390004462, false);
				func_321(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_315(6410548, joaat("treasure_hunt_loot_23"), false);
				func_316(6410548, false);
				func_322(8);
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
				func_315(6410548, joaat("treasure_hunt_loot_22"), false);
				func_316(6410548, false);
				func_322(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_278(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_308(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_309(&hash3, false))
					func_284(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_325(594, 1934060482, true, true);
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
					func_325(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_266(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_315(6410548, joaat("treasure_hunt_loot_21"), false);
				func_316(6410548, false);
				func_322(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_266(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_190(func_326(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_190(func_327(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_325(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_315(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_316(-220219788, false);
				func_319(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_60(1))
					func_266(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_315(666607663, joaat("treasure_hunt_loot_07"), false);
				func_316(666607663, false);
				func_318(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_324(241, func_323(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_315(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_316(-220219788, false);
				func_319(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_324(242, func_323(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_266(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_324(240, func_323(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_315(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_316(-220219788, false);
				func_319(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_315(390004462, joaat("treasure_hunt_loot_16"), false);
				func_316(390004462, false);
				func_321(1);
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
				func_315(499813453, joaat("treasure_hunt_loot_03"), false);
				func_316(499813453, false);
				func_317(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_315(666607663, joaat("treasure_hunt_loot_06"), false);
				func_316(666607663, false);
				func_318(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_315(218622660, joaat("treasure_hunt_loot_14"), false);
				func_316(218622660, false);
				func_320(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_315(666607663, joaat("treasure_hunt_loot_05"), false);
				func_316(666607663, false);
				func_318(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_152() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_308(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_315(218622660, joaat("treasure_hunt_loot_13"), false);
				func_316(218622660, false);
				func_320(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_315(6410548, joaat("treasure_hunt_loot_20"), false);
				func_316(6410548, false);
				func_322(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_266(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_266(491, false);
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
				func_315(499813453, joaat("treasure_hunt_loot_02"), false);
				func_316(499813453, false);
				func_317(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_266(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_310();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_311();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_312();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_313();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_314();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_315(390004462, joaat("treasure_hunt_loot_18"), false);
				func_316(390004462, false);
				func_321(4);
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
		func_328(&hash4);
	
		if (!func_329(hash4, value, hParam5))
			return 0;
		else if (!func_283(false))
			return 1;
	
		if (func_276(hParam0) == joaat("CLOTHING"))
			func_330(hParam0);
	
		if (func_137(hParam0, -1979000645))
			func_331(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_283(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_190(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_332(lootTableKey, 0);
		}
	}

	statId = { func_333(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_334(hParam0);

	if (iParam6 > 0f)
	{
		if (func_137(hParam0, -839724752))
			func_335(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_336(hParam0, value, false, flag3, 0);
	}

	return 1;
}

void func_191(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, int iParam6, Hash hParam7) // Position - 0x76A5 Hash - 0x63AC4944 ^0x63AC4944
{
	if (!bParam1)
		func_337(iParam0, sParam4, iParam5);

	func_338(iParam0, bParam1, iParam2, iParam3, hParam7);
	return;
}

char* func_192(BOOL bParam0) // Position - 0x76CB Hash - 0x4CE9C4A5 ^0xD756D94C
{
	if (bParam0)
		return "JOHN_PLAYER";

	return "ARTHUR";
}

BOOL func_193(Ped pedParam0, char* sParam1, int iParam2, Ped pedParam3, int iParam4, char* sParam5, int iParam6, int iParam7) // Position - 0x76E3 Hash - 0x281BDD5E ^0x8899ECCD
{
	char* str;

	str.f_5 = 1;
	str.f_6 = 1;
	str = sParam1;
	str.f_1 = sParam5;
	str.f_2 = iParam6;
	str.f_3 = iParam2;
	str.f_4 = pedParam3;
	str.f_5 = iParam4;
	str.f_6 = iParam7;
	return func_339(pedParam0, &str);
}

void func_194(var uParam0, int iParam1) // Position - 0x772A Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_195(float fParam0) // Position - 0x7737 Hash - 0x7997973A ^0x7997973A
{
	if (func_221(true))
		return true;

	if (func_106(&uLocal_0) && !func_340(&uLocal_0, 7.5f + fParam0))
		return true;

	return false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x776D Hash - 0xA17D549C ^0xE5B1C2D2
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "MAGIC_LANTERN_THE_BEAR";
	
		case 22:
		case 32:
			return "MAGIC_LANTERN_JOSIAH_BLACKWATER";
	
		case 23:
		case 33:
			return "MAGIC_LANTERN_WONDERS_OF_THE_AGE";
	
		case 24:
		case 34:
			return "MAGIC_LANTERN_SAVIORS_SAVAGES";
	
		case 25:
		case 35:
			return "MAGIC_LANTERN_GHOSTLY_SERENADE";
	
		case 26:
		case 36:
			return "MOVIE_DIRECT_CURRENT_DAMNATION";
	
		case 27:
		case 37:
			return "MOVIE_FARMERS_DAUGHTER";
	
		case 28:
		case 38:
			return "MOVIE_MODERN_MEDICINE";
	
		case 29:
		case 39:
			return "MOVIE_BEAUMONT_THE_BURLY";
	
		case 30:
		case 40:
			return "MOVIE_SKETCHING_FOR_SWEETHEART";
	
		default:
		
	}

	return "FAIL";
}

char* func_197(int iParam0) // Position - 0x783F Hash - 0xE5247562 ^0x3D70E659
{
	switch (iParam0)
	{
		case 33:
			return "JK_TICKET_TAKER";
	
		case 283:
			return "JS_TOWNDEALER";
	
		case 284:
			return "FH_TOWNDEALER";
	
		case 525:
			return "FH_TOWNDEALER";
	
		default:
		
	}

	return "JK_TICKET_TAKER";
}

BOOL func_198(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x7887 Hash - 0x7ED53456 ^0xD7A590DD
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
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_35(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_341(ped, 0)))
			if (func_342(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

BOOL func_199(Ped pedParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x79E7 Hash - 0xBE7D684A ^0x8F3B6F7C
{
	float num;
	Ped outEntity;
	Ped ped;
	Hash hash;
	var pedBoneCoords;
	float x2;
	float x1;
	float num2;
	float num3;

	if (!Global_1935630.f_27 && !bParam4)
		return 0;

	if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_AIM")))
	{
		num = func_35(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	
		if (num < iParam3 && num > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0, false))
			{
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
				{
					ped = pedParam0;
				
					if (outEntity == ped)
						return 0;
				}
			
				hash = func_341(PLAYER::PLAYER_PED_ID(), 0);
			
				if (func_250(hash) && !PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK")))
					return 0;
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false) && PED::WAS_PED_SKELETON_UPDATED(pedParam0))
					pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedParam0, 21030, 0f, 0f, 0f) };
				else
					pedBoneCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
			
				x2 = { func_343(0) };
				x1 = { func_344(pedBoneCoords - CAM::GET_GAMEPLAY_CAM_COORD()) };
				num2 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1, x1.f_1, x2, x2.f_1));
				num3 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(x1.f_1, x1.f_2, x2.f_1, x2.f_2));
			
				if (num2 < iParam1)
					if (num3 < iParam2)
						return 1;
			}
		}
	}

	return 0;
}

int func_200(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x7B2D Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_345(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_346(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_347(pedParam0, uParam2, *uParam3);
				return 1;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_348(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_349(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_350(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_76(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_347(pedParam0, uParam2, *uParam3);
				return 1;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_351(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_352(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_347(pedParam0, uParam2, *uParam3);
						return 1;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_353(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_347(pedParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_354(Global_35, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_354(Global_35, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_347(pedParam0, uParam2, *uParam3);
				return 1;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_355(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_356(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_357(uParam2, 4000))
				{
					if (func_358(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_359(uParam2, pedParam0) && func_360(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_347(pedParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_358(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_359(uParam2, pedParam0) && func_360(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_361(pedParam0, Global_1935630.f_41))
							{
								func_362();
								*uParam3 = 2;
								func_347(pedParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_361(pedParam0, Global_1935630.f_41))
						{
							func_362();
							*uParam3 = 2;
							func_347(pedParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_363(uParam2, pedParam0) || uParam2->f_9 > 0 && func_364() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_362();
						*uParam3 = 2;
						func_347(pedParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_365())
					{
						if (func_361(pedParam0, Global_1935630.f_42))
						{
							func_362();
							*uParam3 = 2;
							func_347(pedParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_366(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_347(pedParam0, uParam2, *uParam3);
				return 1;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_367(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_368(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_347(pedParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_369(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_370(uParam2, 4000))
				{
					if (func_371(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_347(pedParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_372(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_347(pedParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_373(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_347(pedParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}

	return 0;
}

void func_201(var uParam0, int iParam1) // Position - 0x8158 Hash - 0x322B7A3D ^0x1AA1E76E
{
	uParam0->f_5 = uParam0->f_4;
	uParam0->f_4 = iParam1;
	return;
}

void func_202(var uParam0, int iParam1) // Position - 0x816E Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_203(var uParam0, int iParam1) // Position - 0x817B Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x8188 Hash - 0xA17D549C ^0x6B15F64E
{
	switch (iParam0)
	{
		case 0:
			return "PL_AggroCower";
	
		case 1:
			return "PL_CowerGoAway";
	
		case 2:
			return "PL_AggroRun";
	
		case 3:
			return "PL_CowerBase";
	
		case 4:
			return "PL_BuyLt";
	
		case 5:
			return "PL_BuyRt";
	
		case 6:
			return "PL_Greet1";
	
		case 7:
			return "PL_Greet2";
	
		case 8:
			return "PL_HelpYou";
	
		case 9:
			return "PL_OpenCurtain";
	
		case 10:
			return "Pl_Base";
	
		case 11:
			return "PL_ShowNegLt";
	
		case 12:
			return "PL_ShowNegRt";
	
		case 13:
			return "PL_ShowPosLt";
	
		case 14:
			return "PL_ShowPosRt";
	
		case 15:
			return "PL_NoShow1";
	
		case 16:
			return "PL_NoShow2";
	
		default:
		
	}

	return "[THEATER_TT_GET_TICKET_COLLECTOR_PLAYLIST] -- FAIL -- 77";
}

void func_205(var uParam0) // Position - 0x8279 Hash - 0xE36E66A0 ^0xFF7B7E0
{
	if (func_118(uParam0))
		STREAMING::REQUEST_MODEL(func_178(4), false);
	else if (uParam0->f_24 == 0)
		STREAMING::REQUEST_MODEL(func_178(3), false);
	else
		STREAMING::REQUEST_MODEL(func_178(2), false);

	return;
}

void func_206(var uParam0, var uParam1, int iParam2) // Position - 0x82B6 Hash - 0x688468C8 ^0x684E6DE2
{
	Vector3 vector;

	switch (iParam2)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				vector = { func_254(2) };
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vector, vector.f_3, vector.f_6, "TICKET_TAKER_INTERACT_SMALL");
			}
		
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				vector = { func_254(3) };
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, vector.f_3, vector.f_6, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
	
		case 1:
		case 2:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.2651f, -1363.3391f, 48.15632f, 0f, 0f, 40.164f, 2.969626f, 2.725822f, 3.152676f, "TICKET_TAKER_INTERACT_SMALL");
		
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.7039f, -1362.9691f, 48.15632f, 0f, 0f, 40.164f, 4.125022f, 8.24628f, 3.152676f, "TICKET_TAKER_INTERACT_LARGE");
			break;
	
		case 3:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-353.94528f, 707.1058f, 117.01547f, 0f, 0f, -29.982824f, 3.680929f, 4.116389f, 2.594225f, "TICKET_TAKER_INTERACT_SMALL");
		
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-353.0224f, 707.71277f, 117.07619f, 0f, 0f, 0f, 3f, 3f, 1.726511f, "TICKET_TAKER_INTERACT_LARGE");
			break;
	
		case 4:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.28577f, -1362.6478f, 44.1069f, 0f, 0f, 0f, 2.572522f, 2.070467f, 2.851869f, "TICKET_TAKER_INTERACT_SMALL");
		
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-787.99536f, -1362.6478f, 44.1069f, 0f, 0f, 0f, 2.967766f, 7.108891f, 2.851869f, "TICKET_TAKER_INTERACT_LARGE");
			break;
	}

	return;
}

BOOL func_207(var uParam0) // Position - 0x849E Hash - 0xFCFA3DED ^0x6D7D063F
{
	if (func_118(uParam0))
		if (STREAMING::HAS_MODEL_LOADED(func_178(4)))
			return true;
	else if (uParam0->f_24 == 0)
		if (STREAMING::HAS_MODEL_LOADED(func_178(3)))
			return true;
	else if (STREAMING::HAS_MODEL_LOADED(func_178(2)))
		return true;

	return false;
}

BOOL func_208(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0x84EE Hash - 0x3784E4D5 ^0x915FB0A8
{
	if (func_118(uParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_53[4]))
		{
			uParam0->f_53[4] = OBJECT::CREATE_OBJECT(func_178(4), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (iParam4 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_53[3]))
		{
			uParam0->f_53[3] = OBJECT::CREATE_OBJECT(func_178(3), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_53[2]))
	{
		uParam0->f_53[2] = OBJECT::CREATE_OBJECT(func_178(2), vParam1, true, true, false, false, true);
		return false;
	}

	return true;
}

void func_209(var uParam0, int iParam1) // Position - 0x8590 Hash - 0x3037EC29 ^0x6896E1FB
{
	if (func_118(uParam0))
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_53[4], 0);
	else if (iParam1 == 0)
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_53[3], 0);
	else
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_53[2], 0);

	return;
}

Vector3 func_210(int iParam0) // Position - 0x85F2 Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 0:
			return 2542.176f, -1282.525f, 48.218f;
	
		case 1:
			return 2686.802f, -1362.095f, 47.215f;
	
		case 2:
			return 2686.802f, -1362.095f, 47.215f;
	
		case 3:
			return -355.18427f, 705.13947f, 115.93616f;
	
		case 4:
			return -789.7354f, -1362.6365f, 42.82219f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_211(int iParam0) // Position - 0x867D Hash - 0x68B0EB8 ^0x68B0EB8
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 47.261f;
	
		case 1:
			return 0f, 0f, 129.887f;
	
		case 2:
			return 0f, 0f, 129.887f;
	
		case 3:
			return 0f, 0f, -31.467f;
	
		case 4:
			return 0f, 0f, -90.358f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

void func_212(var uParam0, var uParam1, BOOL bParam2, float fParam3) // Position - 0x86E0 Hash - 0xE479A0C0 ^0x91DA71F0
{
	BOOL flag;

	flag = func_221(true);

	switch (uParam1->f_6)
	{
		case 0:
			if (!func_106(&(uParam1->f_67)))
				func_42(&(uParam1->f_67));
		
			if (!func_120(func_109(uParam0->f_1)) && !func_54(uParam1->f_25, 2) && func_32(Global_35, uParam1->f_59[3], true, 0) && !Global_1394141.f_1328 && !bParam2)
			{
				func_201(uParam1, 6);
				func_42(&(uParam1->f_67));
				func_202(&(uParam1->f_3), 4);
				func_79(&(uParam1->f_25), 2);
			}
		
			if (!func_54(uParam1->f_25, 128) && !Global_1394141.f_1328 && !flag && func_54(uParam1->f_25, 2) && func_32(Global_35, uParam1->f_59[3], true, 0) && !bParam2 && func_107(&(uParam1->f_67)) > 15f && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134) && uParam1->f_31 <= 0)
			{
				func_42(&(uParam1->f_67));
				func_79(&(uParam1->f_25), 128);
				uParam1->f_28 = uParam1->f_28 + 1;
				func_201(uParam1, 8);
				func_202(&(uParam1->f_3), 4);
			}
		
			if (func_54(uParam1->f_25, 128) && !Global_1394141.f_1328 && !flag && func_107(&(uParam1->f_67)) > 15f * (float)uParam1->f_28 && uParam1->f_27 <= 3 && func_32(Global_35, uParam1->f_59[3], true, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134) && uParam1->f_31 <= 0)
			{
				func_193(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				uParam1->f_27 = uParam1->f_27 + 1;
				uParam1->f_28 = uParam1->f_28 + 1;
				func_42(&(uParam1->f_67));
			}
		
			if (func_54(uParam1->f_25, 4) && !Global_1394141.f_1328)
			{
				func_201(uParam1, func_375(func_109(uParam0->f_1)));
				func_55(&(uParam1->f_25), 4);
				func_79(&(uParam1->f_25), 1048576);
				func_203(&(uParam1->f_6), 1);
				func_42(&(uParam1->f_67));
				func_79(&(uParam1->f_25), 2);
				func_79(&(uParam1->f_25), 128);
				func_202(&(uParam1->f_3), 4);
			}
		
			if (!func_54(uParam1->f_25, 4194304) && !flag && !_IS_NULL_VECTOR(func_376(uParam1->f_24)) && func_20(Global_35, func_376(uParam1->f_24), true) < func_377(uParam1->f_24))
			{
				func_193(uParam0->f_134, "UNAUTHORIZED_ADMISSION", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(uParam1->f_25), 4194304);
			}
		
			if (!func_54(uParam1->f_25, 2097152) && !flag && !_IS_NULL_VECTOR(func_378(uParam1->f_24)) && func_20(Global_35, func_378(uParam1->f_24), true) < func_379(uParam1->f_24))
			{
				func_193(uParam0->f_134, "UNAUTHORIZED_AREA_BALCONY", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(uParam1->f_25), 2097152);
			}
		
			func_380(uParam0, uParam1);
		
			if (!func_110(func_109(uParam0->f_1)))
				func_203(&(uParam1->f_6), 3);
			break;
	
		case 1:
			if (!func_54(uParam1->f_25, 2048) && func_32(Global_35, Global_1394141.f_7[Global_40.f_9028[func_109(uParam0->f_1)] /*31*/].f_4, true, 0))
				func_79(&(uParam1->f_25), 2048);
		
			if (!func_54(uParam1->f_25, 1024))
			{
				switch (func_109(uParam0->f_1))
				{
					case 0:
					case 1:
					case 2:
					case 4:
						if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam1->f_10[3 /*3*/]) > 0.4f)
						{
							func_193(uParam0->f_134, func_381(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
							func_79(&(uParam1->f_25), 1024);
						}
						break;
				
					case 3:
						if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_375(func_109(uParam0->f_1)))) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam1->f_10[3 /*3*/]) > 0.5f)
						{
							func_193(uParam0->f_134, func_381(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
							func_79(&(uParam1->f_25), 1024);
						}
						break;
				}
			}
		
			if (!func_54(uParam1->f_25, 16) && func_109(uParam0->f_1) == 3)
			{
				if (func_54(uParam1->f_25, 1048576) && ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam1->f_10[3 /*3*/], AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(5)) && !bParam2)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, uParam1->f_10[3 /*3*/]))
					{
						func_175(1015669983);
						func_79(&(uParam1->f_25), 16);
					}
				}
			}
		
			if (!func_54(uParam1->f_25, 512) && func_54(uParam1->f_25, 2048))
			{
				if (!Global_1394141.f_1329 && func_32(Global_35, uParam1->f_59[3], true, 0) && func_219(&(uParam1->f_67)) > 25f && !flag)
				{
					func_79(&(uParam1->f_25), 512);
					func_201(uParam1, 12);
					func_202(&(uParam1->f_3), 4);
				}
			}
		
			if (!func_54(uParam1->f_25, 256) && func_54(uParam1->f_25, 2048))
			{
				if (Global_1394141.f_1329 && func_32(Global_35, uParam1->f_59[3], true, 0) && func_219(&(uParam1->f_67)) > 25f && !flag)
				{
					func_79(&(uParam1->f_25), 256);
					func_201(uParam1, 14);
					func_202(&(uParam1->f_3), 4);
				}
			}
		
			if (!Global_1394141.f_1328)
			{
				func_42(&(uParam1->f_67));
				func_203(&(uParam1->f_6), 2);
			}
		
			if (func_110(func_109(uParam0->f_1)) && !Global_1394141.f_1328)
			{
				func_382(uParam1);
				func_201(uParam1, 10);
				func_202(&(uParam1->f_3), 4);
				func_42(&(uParam1->f_67));
				func_203(&(uParam1->f_6), 0);
			}
			break;
	
		case 2:
			if (!func_54(uParam1->f_25, 64) && func_32(Global_35, uParam1->f_59[3], true, 0) && !Global_1394141.f_1328 && func_219(&(uParam1->f_67)) > 30f && !func_110(func_109(uParam0->f_1)))
			{
				func_201(uParam1, 15);
				func_202(&(uParam1->f_3), 4);
				func_79(&(uParam1->f_25), 64);
			}
		
			if (func_54(uParam1->f_25, 64) && uParam1->f_29 < 3 && func_107(&(uParam1->f_67)) > 15f * (float)uParam1->f_30 && func_32(Global_35, uParam1->f_59[3], true, 0) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134))
			{
				func_193(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				uParam1->f_29 = uParam1->f_29 + 1;
				uParam1->f_30 = uParam1->f_30 + 1;
				func_42(&(uParam1->f_67));
			}
		
			if (func_110(func_109(uParam0->f_1)))
			{
				func_382(uParam1);
				func_201(uParam1, 10);
				func_202(&(uParam1->f_3), 4);
				func_42(&(uParam1->f_67));
				func_203(&(uParam1->f_6), 0);
			}
			break;
	
		case 3:
			if (!func_54(uParam1->f_25, 64) && func_32(Global_35, uParam1->f_59[3], true, 0) && !Global_1394141.f_1328 && !func_110(func_109(uParam0->f_1)))
			{
				func_201(uParam1, 15);
				func_202(&(uParam1->f_3), 4);
				func_79(&(uParam1->f_25), 64);
			}
		
			if (func_54(uParam1->f_25, 64) && uParam1->f_29 < 3 && func_107(&(uParam1->f_67)) > 15f * (float)uParam1->f_30 && func_32(Global_35, uParam1->f_59[3], true, 0))
			{
				func_193(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				uParam1->f_29 = uParam1->f_29 + 1;
				uParam1->f_30 = uParam1->f_30 + 1;
				func_42(&(uParam1->f_67));
			}
		
			if (func_110(func_109(uParam0->f_1)))
			{
				func_382(uParam1);
				func_201(uParam1, 10);
				func_202(&(uParam1->f_3), 4);
				func_42(&(uParam1->f_67));
				func_203(&(uParam1->f_6), 0);
			}
			break;
	}

	return;
}

BOOL func_213(var uParam0, char* sParam1, char* sParam2) // Position - 0x8FB6 Hash - 0x397415B2 ^0x870B9F11
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		return false;

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1) || !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam0, sParam1))
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1))
		return false;

	return true;
}

void func_214(var uParam0, char* sParam1, char* sParam2) // Position - 0x9006 Hash - 0xEE231C01 ^0xB0BB92D9
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		return;

	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, sParam1))
		return;

	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1, true);
	return;
}

char* func_215(int iParam0, int iParam1) // Position - 0x9036 Hash - 0xF2160547 ^0xE743394B
{
	Entity firstEntityPedIsCarrying;
	int entityType;
	var unk;
	Hash hash;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "GENERIC_FRIGHTENED_HIGH";
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "LAW_THREAT";
			
				default:
					break;
			}
			break;
	
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
			
				default:
					break;
			}
			break;
	
		case 6:
		case 7:
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				entityType = ENTITY::GET_ENTITY_TYPE(firstEntityPedIsCarrying);
			
				if (entityType == 1)
					return "WELCOME_GET_THAT_OUT_OF_HERE";
			}
		
			if (func_383(&unk))
				return "WELCOME_MASK";
		
			switch (iParam1)
			{
				case 0:
					return "WELCOME" /*Welcome*/;
			
				case 1:
					return "WELCOME_MALE";
			
				case 2:
					return "WELCOME_FEMALE";
			
				default:
					break;
			}
			break;
	
		case 8:
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				entityType = ENTITY::GET_ENTITY_TYPE(firstEntityPedIsCarrying);
			
				if (entityType == 1)
					return "WELCOME_GET_THAT_OUT_OF_HERE";
			}
		
			if (func_383(&unk))
				return "WELCOME_MASK";
		
			hash = func_384(Global_35, 0, true, false);
		
			if (hash != joaat("WEAPON_UNARMED"))
				return "PUT_WEAPON_AWAY";
		
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_PURCHASE";
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
			
				default:
					break;
			}
			break;
	
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "FAREWELL_DURING_SHOW";
			
				default:
					break;
			}
			break;
	
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return "FAREWELL_AFTER_SHOW";
			
				case 1:
					return "FAREWELL_AFTER_SHOW_MALE";
			
				case 2:
					return "FAREWELL_AFTER_SHOW_FEMALE";
			
				default:
					break;
			}
			break;
	
		case 15:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "WELCOME_NO_SHOW";
			
				default:
					break;
			}
			break;
	
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_SHOW";
			
				default:
					break;
			}
			break;
	}

	return "WELCOME" /*Welcome*/;
}

void func_216(var uParam0) // Position - 0x92BB Hash - 0x517EE96E ^0xEDADE0A6
{
	switch (uParam0->f_24)
	{
		case 0:
			if (uParam0->f_48)
			{
				uParam0->f_48 = 0;
				func_385(-1110862888, 1, false, -142743235, false);
			}
			break;
	
		case 1:
			if (uParam0->f_49)
			{
				uParam0->f_49 = 0;
				func_385(1242466573, 1, false, -142743235, false);
			}
			break;
	
		case 2:
			if (uParam0->f_50)
			{
				uParam0->f_50 = 0;
				func_385(2037803338, 1, false, -142743235, false);
			}
			break;
	
		case 3:
			if (uParam0->f_49)
			{
				uParam0->f_49 = 0;
				func_385(1242466573, 1, false, -142743235, false);
			}
			break;
	
		case 4:
			if (uParam0->f_50)
			{
				uParam0->f_50 = 0;
				func_385(2037803338, 1, false, -142743235, false);
			}
			break;
	}

	return;
}

void func_217(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x9390 Hash - 0x144F6B91 ^0x144F6B91
{
	func_386(iParam0);

	if (bParam3)
		func_387(iParam0, sParam1, iParam2);

	return;
}

void func_218(var uParam0) // Position - 0x93AD Hash - 0xA3277724 ^0x846F9E6F
{
	int num;
	int i;
	var unk;
	var unk5;
	Ped ped;

	unk = 3;
	unk5 = 1;
	unk5[0] = uParam0->f_134;
	num = func_389(&unk, &unk5, 3, Global_36, 50f, false, false, false, func_388(uParam0->f_139), true, true, -1082130432, false, true);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(unk[i]) && !ENTITY::IS_ENTITY_DEAD(unk[i]) && !LAW::_0x40851BCC33ACD9AB(unk[i]))
		{
			ped = Global_35;
			ped.f_3 = { Global_36 };
			ped.f_6 = func_390();
			ped.f_9 = 1;
			ped.f_2 = joaat("crime_threaten");
			ped.f_1 = unk[i];
			ped.f_8 = 1;
			ped.f_7 = 1000;
			LAW::_0x018F30D762E62DF8(unk[i], &ped);
			func_391(unk[i], Global_36, 2, true, 1);
			TASK::TASK_FLEE_PED(unk[i], Global_35, 3, 0, -1082130432, -1, 0);
		}
	}

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
	return;
}

float func_219(var uParam0) // Position - 0x94AD Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_106(uParam0))
		return 0f;

	if (func_172(uParam0))
		return uParam0->f_2;

	return func_173() - uParam0->f_1;
}

void func_220(var uParam0, var uParam1) // Position - 0x94DF Hash - 0x68B31BA6 ^0x213EEBBC
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[0 /*3*/]))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[0 /*3*/]);

	uParam1->f_10[3 /*3*/] = -1;
	uParam1->f_10[3 /*3*/].f_1 = 0;
	uParam1->f_5 = -1;
	uParam1->f_4 = -1;
	func_83(uParam0, 0);
	func_382(uParam1);

	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_53[2]))
		OBJECT::DELETE_OBJECT(&uParam1->f_53[2]);

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[0 /*3*/]))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[0 /*3*/]);

	uParam1->f_10[0 /*3*/] = -1;
	uParam1->f_10[0 /*3*/].f_1 = 0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[1 /*3*/]))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[1 /*3*/]);

	uParam1->f_10[1 /*3*/] = -1;
	uParam1->f_10[1 /*3*/].f_1 = 0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam1->f_10[2 /*3*/]))
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam1->f_10[2 /*3*/]);

	uParam1->f_10[2 /*3*/] = -1;
	uParam1->f_10[2 /*3*/].f_1 = 0;
	return;
}

BOOL func_221(BOOL bParam0) // Position - 0x95C3 Hash - 0xD6E12BEB ^0xEB8894D
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

BOOL func_222(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x95D1 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_141(hParam0, 0))
		return false;

	num = func_276(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_392(hParam0, 1))
			return false;

	return func_259(hParam0, false, bParam2) >= iParam1;
}

void func_223(int iParam0, BOOL bParam1) // Position - 0x963B Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_121(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_224(int iParam0, BOOL bParam1) // Position - 0x9693 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_225(int iParam0, int iParam1) // Position - 0x96BC Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_226(int iParam0, int iParam1) // Position - 0x96E4 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_227(var uParam0, int iParam1) // Position - 0x9717 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_228(var uParam0, int iParam1) // Position - 0x9728 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

Hash func_229(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x973D Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_230(Hash hParam0) // Position - 0x97E1 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_393(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_231(Hash hParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x97FC Hash - 0x6DA9F066 ^0x2A9066C3
{
	if (func_230(hParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);
	
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam1, bParam3);
	}

	return;
}

void func_232(Hash hParam0, BOOL bParam1) // Position - 0x9834 Hash - 0xC342281D ^0xB1F97AC8
{
	if (func_230(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 2 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 2);

	return;
}

void func_233(Hash hParam0, BOOL bParam1) // Position - 0x9862 Hash - 0xA39475C2 ^0x7E382EA4
{
	if (func_230(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 1 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 1);

	return;
}

void func_234(Hash hParam0, BOOL bParam1) // Position - 0x9890 Hash - 0x4844A91D ^0x50E23246
{
	if (func_230(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != 0 || bParam1)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, 0);

	return;
}

BOOL func_235() // Position - 0x98BE Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

int func_236(int iParam0) // Position - 0x98C7 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_394(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_237(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x9908 Hash - 0x7EFAC478 ^0x4E4217E0
{
	int i;
	int j;
	int k;
	int l;
	int numberOfModifiedPrices;
	int numberOfModifiers;
	Hash key;
	int outData;
	var outData2;
	var unk13;

	if (*uParam2 < 15)
		return;
	else if (iParam3 > *uParam2 || iParam3 < 1)
		return;

	outData.f_1 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i /*2*/] = uParam2->[i /*2*/];
		unk13[i /*2*/].f_1 = 1f;
	}

	for (j = 0; j < outData; j = j + 1)
	{
		key = outData.f_1[j];
		numberOfModifiedPrices = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(key);
	
		for (k = 0; k < numberOfModifiedPrices; k = k + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(key, k) != hParam1)
			{
			}
			else
			{
				numberOfModifiers = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(key);
			
				for (l = 0; l < numberOfModifiers; l = l + 1)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(key, l, &outData2))
					{
					}
					else
					{
						for (i = 0; i < iParam3; i = i + 1)
						{
							if (unk13[i /*2*/] == outData2)
							{
								unk13[i /*2*/].f_1 = unk13[i /*2*/].f_1 - outData2.f_1;
								break;
							}
						}
					}
				}
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i /*2*/].f_1 != 1f)
			uParam2->[i /*2*/].f_1 = BUILTIN::FLOOR((float)uParam2->[i /*2*/].f_1 * (unk13[i /*2*/].f_1 / 1f));
	}

	return;
}

BOOL func_238(Ped pedParam0, Hash hParam1) // Position - 0x9A6F Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_239(Ped pedParam0, Hash hParam1) // Position - 0x9A9D Hash - 0xA54F3032 ^0x577C263
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

BOOL func_240(Ped pedParam0, Hash hParam1) // Position - 0x9AEE Hash - 0xA54F3032 ^0x577C263
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_238(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_241(Ped pedParam0) // Position - 0x9B60 Hash - 0x446F1BDD ^0x961CF0D3
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_242(int iParam0) // Position - 0x9B7E Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_243(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x9BB1 Hash - 0xBA023B92 ^0x16E0B707
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

Vector3 func_244(int iParam0) // Position - 0x9C0A Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (iParam0)
	{
		case 0:
			return 2529.0183f, -1271.7888f, 48.19606f;
	
		case 1:
		case 2:
			return 2682.6375f, -1365.0428f, 46.54007f;
	
		case 3:
			return -352.65985f, 708.32275f, 115.81736f;
	
		case 4:
			return -793.7158f, -1362.1746f, 42.76554f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Vector3 func_245(int iParam0) // Position - 0x9C83 Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (iParam0)
	{
		case 33:
			return -351.57153f, 700.468f, 118.32454f;
	
		case 283:
			return 2546.5425f, -1300.3068f, 49.53876f;
	
		case 284:
			return 2697.9395f, -1352.8718f, 49.41832f;
	
		case 525:
			return -777.8935f, -1362.5787f, 45.98574f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_246(BOOL bParam0) // Position - 0x9CF6 Hash - 0x8C844EEB ^0x8C844EEB
{
	return Global_22 && bParam0 != false;
}

void func_247(BOOL bParam0) // Position - 0x9D06 Hash - 0x88AD5D ^0x88AD5D
{
	Global_22 = Global_22 || bParam0;
	return;
}

Hash func_248(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x9D17 Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_249(Hash hParam0) // Position - 0x9D59 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_250(Hash hParam0) // Position - 0x9D74 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

void func_251(Hash hParam0) // Position - 0x9D82 Hash - 0x452F6FEB ^0x9AFB0A30
{
	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return;

	if (Global_43891)
		return;

	WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, hParam0);
	return;
}

int func_252(int iParam0, int iParam1) // Position - 0x9DBB Hash - 0x8FA0E29 ^0xC3F68E87
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
			return &func_2;
	
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

BOOL func_253(int iParam0, BOOL bParam1) // Position - 0xAED4 Hash - 0x7A9B781A ^0x7A9B781A
{
	return Global_40.f_490.f_402[iParam0] && bParam1 != false;
}

struct<11> func_254(int iParam0) // Position - 0xAEEE Hash - 0x24CEB2DA ^0x4235F2DD
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 2537.8838f, -1278.3207f, 48.21795f };
			unk.f_3 = { 0f, 0f, 0f };
			unk.f_6 = { 4f, 4f, 5f };
			unk.f_9 = "TICKET_TAKER_VAN_FRONT_ENTRANCE";
			unk.f_10 = joaat("volCylinder");
			break;
	
		case 1:
			unk = { 2540.4297f, -1280.8702f, 48.01795f };
			unk.f_3 = { 0f, 0f, 0f };
			unk.f_6 = { 2f, 2f, 4f };
			unk.f_9 = "TICKET_TAKER_VAN_TICKET_FENCE";
			unk.f_10 = joaat("volCylinder");
			break;
	
		case 2:
			unk = { 2540.47f, -1280.8961f, 49.50146f };
			unk.f_3 = { 0f, 0f, -135.62752f };
			unk.f_6 = { 2.411322f, 2.714174f, 3.024515f };
			unk.f_9 = "THEATER_TT_INTERACT_SMALL_ZONE";
			unk.f_10 = joaat("volBox");
			break;
	
		case 3:
			unk = { 2538.7886f, -1279.7603f, 49.716766f };
			unk.f_3 = { 0f, 0f, 11.907258f };
			unk.f_6 = { 3.5f, 3.5f, 1.642595f };
			unk.f_9 = "TICKET_TT_INTERACT_LARGE_ZONE";
			unk.f_10 = joaat("volCylinder");
			break;
	}

	return unk;
}

void func_255(var uParam0, char* sParam1, BOOL bParam2, char* sParam3) // Position - 0xB01F Hash - 0xC54EA5E7 ^0x887106BD
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		return;

	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam1))
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);

	return;
}

BOOL func_256(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xB04D Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_152() == -1)
	{
		if (func_395(hParam0) && func_396(hParam0))
		{
			func_397(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_257(Hash hParam0, var uParam1, int iParam2) // Position - 0xB0A4 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_398(hParam0, uParam1);
	unk = { func_399(hParam0, false, true) };
	num = func_400(hParam0, &unk, false, false);
	num2 = func_401(hParam0, false);

	if (num > 1 && !func_402() && num2 + iParam2 >= num)
		if (func_137(hParam0, -2051813666))
			func_266(583, true);
		else
			func_266(582, false);

	if (func_403(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_258(Hash hParam0, BOOL bParam1) // Position - 0xB140 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_139(hParam0, -949239683))
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

int func_259(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB1EC Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_141(hParam0, 0))
		return 0;

	num = func_276(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_404(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_405(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_406(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_260(Hash hParam0) // Position - 0xB26E Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_152() != -1)
		return false;

	return func_261(hParam0) != 0;
}

Hash func_261(Hash hParam0) // Position - 0xB28A Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_407(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_408(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_262(Hash hParam0) // Position - 0xB2C6 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_263(Hash hParam0) // Position - 0xB2D4 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_407(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_262(collectableItemHash))
			if (func_222(func_408(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_264(Hash hParam0) // Position - 0xB321 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_409(48);
	func_410(false, -1);
	return;
}

BOOL func_265(int iParam0) // Position - 0xB33C Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_152() != -1)
		return false;

	return func_102(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_266(int iParam0, BOOL bParam1) // Position - 0xB35F Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_411(iParam0, &num, &num2);

	if (!func_412(iParam0, num, num2, bParam1))
		return;

	func_413(num, num2);
	return;
}

int func_267(Hash hParam0) // Position - 0xB38C Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_268(Hash hParam0) // Position - 0xB39F Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_269() // Position - 0xB3B2 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_270(int iParam0) // Position - 0xB3D1 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_152() != -1)
		return false;

	return func_102(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_271(int iParam0) // Position - 0xB3F4 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_152() != -1)
		return false;

	if (!func_63(iParam0))
		return false;

	return func_58(Global_1347702[iParam0 /*49*/].f_15);
}

int func_272() // Position - 0xB424 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_222(func_414(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_273(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0xB459 Hash - 0x2D6CF941 ^0xD36AC28D
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
		
			if (func_269() && func_271(38) || func_265(38))
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
			if (func_269() && func_271(39) || func_265(39))
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
			if (func_269() && func_271(41) || func_265(41))
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
			num = func_415(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_269() && func_271(49) || func_265(49))
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
			num = func_415(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_416(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_417(iParam0, hash, hash2);
	func_418(iParam0, hash, unk, str5, str4);
	func_419(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_420(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_421(iParam0, hash, hash2, iParam6);
	func_422(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_274(int iParam0) // Position - 0xB896 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_275(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0xB8AD Hash - 0xD806FABF ^0x3EE11293
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
		
			if (func_269() && func_271(38) || func_265(38))
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
		
			if (func_269() && func_271(39) || func_265(39))
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
		
			if (func_269() && func_271(49) || func_265(49))
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
		if (func_269() && func_271(38) || func_265(38))
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
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_425(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(func_268(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_269() && func_271(39) || func_265(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_269() && func_271(49) || func_265(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

int func_276(Hash hParam0) // Position - 0xBE5B Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_141(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_277(Hash hParam0, int iParam1) // Position - 0xBE86 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_141(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

void func_278(int iParam0) // Position - 0xBEA5 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_142(iParam0))
		return;

	func_426(iParam0);
	func_427(iParam0);
	return;
}

Hash func_279(Hash hParam0) // Position - 0xBEC6 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_141(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_280(Hash hParam0, BOOL bParam1) // Position - 0xBEF1 Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_141(hash, 0))
		if (bParam1)
			if (func_428(hash) || func_429(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_281(Hash hParam0, BOOL bParam1) // Position - 0xC078 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_141(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_282(Hash hParam0) // Position - 0xC0A4 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_249(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_283(BOOL bParam0) // Position - 0xC0DE Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_152() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_406(bParam0));
}

BOOL func_284(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0xC0FC Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_399(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_430(398 + i, 1);
		
			if (func_431(hParam0, &unk, hash, false))
			{
				if (func_432(hParam0, &unk6, hash))
				{
					unk28 = { func_433(hParam0, unk, hash, false) };
					func_434(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_283(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_285(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_435(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_285(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xC24E Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_287(hParam0))
		return false;

	if (!func_283(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_286(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC289 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_281(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_152() == -1)
		{
			func_282(weaponHash);
		
			if (hParam1 == 1248274121)
				func_436(weaponHash);
		}
	
		if (!func_403(hParam0, &unk, 1, false, false))
		{
			func_397(hParam0, 1, false, uParam2, hParam1);
			num = func_437(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_284(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_284(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_284(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_180())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_438(weaponHash))
				{
					func_284(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_284(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_384(Global_35, 2, false, true);
			
				if (func_249(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_60(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_249(weaponHash2) && func_60(24))
					if (!func_284(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_284(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_284(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_266(480, true);

	return true;
}

BOOL func_287(Hash hParam0) // Position - 0xC495 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_288(Hash hParam0, var uParam1, Hash hParam2) // Position - 0xC4A3 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_287(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_249(weaponTypeFromAmmoType))
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

	if (func_222(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_324(func_439(hParam0), func_323(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_152() == -1)
			if (func_102(Global_1835011[14 /*74*/].f_1, true))
				func_266(416, false);

	if (num == 0)
		return false;

	if (func_283(false))
	{
		if (func_285(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_329(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_289(Hash hParam0) // Position - 0xC5EC Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_440() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_441(Global_35, hParam0, &unk))
			func_308(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_314();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_314();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_312();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_310();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_314();
			break;
	}

	return;
}

void func_290(Hash hParam0) // Position - 0xC6F3 Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_443();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_312();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_442();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_310();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_313();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_311();
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
			func_314();
			break;
	}

	return;
}

struct<2> func_291(int iParam0) // Position - 0xC8DE Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_292(var uParam0, var uParam1, int iParam2) // Position - 0xC8F0 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_293(int iParam0, int iParam1) // Position - 0xC900 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_294(Hash hParam0) // Position - 0xC916 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_137(hParam0, -2017733358);

	if (func_444() < 3)
		if (flag)
			if (func_446(func_445(hParam0), hParam0))
				func_324(79, func_323(func_445(hParam0)), true);
			else
				func_324(78, func_323(func_445(hParam0)), true);
		else
			func_324(80, func_323(func_447(hParam0)), true);

	return;
}

BOOL func_295() // Position - 0xC983 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_448(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_448(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_448(joaat("document_arthur_high_bounty_1"), 400) || func_448(joaat("document_arthur_high_bounty_2"), 400) || func_448(joaat("document_arthur_has_poster_1"), 400) || func_448(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_296(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0xC9F9 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_449(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_337(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_338(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_297(Hash hParam0) // Position - 0xCA40 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_273(43, 0, 0, joaat("exotic_stage_01"), func_454(1), false, -1, false);
			func_455(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_273(39, 0, 0, 0, 0, false, 1, false);
			func_275(39, 0, 0, 0, 0, -1, 0);
			func_451(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_273(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_275(51, 0, 0, 0, 0, -1, 0);
			func_450(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_273(43, 0, 0, joaat("exotic_stage_02"), func_454(2), false, -1, false);
			func_455(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_273(43, 0, 0, joaat("exotic_stage_03"), func_454(4), false, -1, false);
			func_455(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_273(49, 0, 0, 0, 0, false, 1, false);
			func_275(49, 0, 0, 0, 0, -1, 0);
			func_453(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_273(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_275(51, 0, 0, 0, 0, -1, 0);
			func_450(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_273(41, 0, 0, 0, 0, false, 1, false);
			func_275(41, 0, 0, 0, 0, -1, 0);
			func_452(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_273(43, 0, 0, joaat("exotic_stage_05"), func_454(16), false, -1, false);
			func_455(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_273(43, 0, 0, joaat("exotic_stage_04"), func_454(8), false, -1, false);
			func_455(8);
			break;
	}

	return;
}

void func_298(Hash hParam0) // Position - 0xCBD6 Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_456() == 1)
	{
		if (func_265(39))
		{
			func_266(342, false);
		}
		else
		{
			func_266(343, false);
			func_451(1);
		}
	}

	if (func_456() >= 30)
		func_266(344, false);

	func_273(39, 0, 0, 0, 0, false, -1, false);
	func_275(39, 0, 0, func_456(), 30, 1, 0);
	return;
}

void func_299(Hash hParam0) // Position - 0xCC35 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_457() == 1)
	{
		if (func_265(49))
		{
			func_266(409, false);
		}
		else
		{
			func_266(410, false);
			func_453(1);
		}
	}

	if (func_457() >= 10)
		func_266(411, false);

	func_273(49, 0, 0, 0, 0, false, -1, false);
	func_275(49, 0, 0, func_457(), 10, 1, 0);
	return;
}

void func_300(Hash hParam0) // Position - 0xCC94 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_266(438, false);
			func_458(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_273(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_275(51, 0, 0, num, func_415(joaat("taxidermy_order_05"), 20), 1, 0);
			func_450(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_458(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_273(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_275(51, 0, 0, num, func_415(joaat("taxidermy_order_04"), 20), 1, 0);
			func_450(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_458(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_273(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_275(51, 0, 0, num, func_415(joaat("taxidermy_order_03"), 20), 1, 0);
			func_450(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_266(437, false);
			func_266(440, false);
			func_458(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_273(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_275(51, 0, 0, num, func_415(joaat("taxidermy_order_01"), 20), 1, 0);
			func_450(1);
			func_459(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_458(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_273(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_275(51, 0, 0, num, func_415(joaat("taxidermy_order_02"), 20), 1, 0);
			func_450(8);
			break;
	
		default:
			func_266(439, false);
			break;
	}

	return;
}

void func_301() // Position - 0xCE82 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_302(Hash hParam0, int iParam1) // Position - 0xCEA6 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_152() == -1)
	{
		if (!func_265(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_266(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_266(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_266(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_266(400, false);
		}
		else if (func_137(hParam0, 412399755))
		{
			func_460(joaat("exotic_stage_01"));
		
			if (func_461() == 0)
			{
				func_410(false, 10);
				num2 = func_462(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_463(hParam0) < func_464(hParam0))
					{
						func_273(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_275(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_265(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_266(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_266(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_266(401, false);
		}
		else if (func_137(hParam0, 709057512))
		{
			func_460(joaat("exotic_stage_02"));
		
			if (func_461() == 1)
			{
				func_410(false, 10);
				num2 = func_462(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_463(hParam0) < func_464(hParam0))
					{
						func_273(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_275(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_265(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_266(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_266(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_266(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_266(398, false);
		}
		else if (func_137(hParam0, -1478961327))
		{
			func_460(joaat("exotic_stage_03"));
		
			if (func_461() == 2)
			{
				func_410(false, 10);
				num2 = func_462(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_465(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_466(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_409(48);
					}
				
					if (func_463(hParam0) < func_464(hParam0))
					{
						func_273(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_275(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_463(hParam0) < func_464(hParam0))
					{
						func_273(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_275(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_265(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_266(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_266(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_266(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_266(406, false);
		}
		else if (func_137(hParam0, -1238404098))
		{
			func_460(joaat("exotic_stage_04"));
		
			if (func_461() == 3)
			{
				func_410(false, 10);
				num2 = func_462(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_463(hParam0) < func_464(hParam0))
					{
						func_273(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_275(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_265(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_266(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_266(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_266(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_266(403, false);
		}
		else if (func_137(hParam0, 1160548794))
		{
			func_460(joaat("exotic_stage_05"));
		
			if (func_461() == 4)
			{
				func_410(false, 10);
				num2 = func_462(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_463(hParam0) < func_464(hParam0))
					{
						func_273(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_275(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_303(Hash hParam0) // Position - 0xD3BF Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_465(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_466(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_409(48);
		}
	}

	return;
}

void func_304(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD3FF Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_222(func_467(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_468(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_469(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_305(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0xD45F Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_152() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_296(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_296(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_296(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_296(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_296(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_296(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_296(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_470())
				func_296(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_296(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_296(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_296(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_296(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_296(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_296(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_296(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_296(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_296(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_296(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_296(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_296(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_296(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_296(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_306(Hash hParam0) // Position - 0xD837 Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_265(41))
		func_266(363, false);
	else
		func_266(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_471(joaat("legendary_fish_02"));
			func_472(joaat("legendary_fishing_spot_02"));
			func_473(joaat("legendary_fishing_spot_02"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_471(joaat("legendary_fish_06"));
			func_472(joaat("legendary_fishing_spot_06"));
			func_473(joaat("legendary_fishing_spot_06"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_471(joaat("legendary_fish_13"));
			func_472(joaat("legendary_fishing_spot_13"));
			func_473(joaat("legendary_fishing_spot_13"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_471(joaat("legendary_fish_03"));
			func_472(joaat("legendary_fishing_spot_03"));
			func_473(joaat("legendary_fishing_spot_03"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_471(joaat("legendary_fish_08"));
			func_472(joaat("legendary_fishing_spot_08"));
			func_473(joaat("legendary_fishing_spot_08"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_471(joaat("legendary_fish_12"));
			func_472(joaat("legendary_fishing_spot_12"));
			func_473(joaat("legendary_fishing_spot_12"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_471(joaat("legendary_fish_05"));
			func_472(joaat("legendary_fishing_spot_05"));
			func_473(joaat("legendary_fishing_spot_05"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_471(joaat("legendary_fish_04"));
			func_472(joaat("legendary_fishing_spot_04"));
			func_473(joaat("legendary_fishing_spot_04"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_471(joaat("legendary_fish_14"));
			func_472(joaat("legendary_fishing_spot_14"));
			func_473(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_471(joaat("legendary_fish_09"));
			func_472(joaat("legendary_fishing_spot_09"));
			func_473(joaat("legendary_fishing_spot_09"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_471(joaat("legendary_fish_07"));
			func_472(joaat("legendary_fishing_spot_07"));
			func_473(joaat("legendary_fishing_spot_07"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_471(joaat("legendary_fish_01"));
			func_472(joaat("legendary_fishing_spot_01"));
			func_473(joaat("legendary_fishing_spot_01"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_471(joaat("legendary_fish_11"));
			func_472(joaat("legendary_fishing_spot_11"));
			func_473(joaat("legendary_fishing_spot_11"));
			func_410(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_471(joaat("legendary_fish_10"));
			func_472(joaat("legendary_fishing_spot_10"));
			func_473(joaat("legendary_fishing_spot_10"));
			func_410(false, 10);
			break;
	}

	return;
}

void func_307(Hash hParam0, var uParam1) // Position - 0xDAB6 Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_474(hParam0, uParam1, &unk);
	return;
}

int func_308(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0xDAC8 Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_399(hParam1, true, false) };
		iParam3 = func_475(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_477(hParam1, hParam2, func_476(iParam3, 1), bParam4, bParam9))
		return 0;

	func_478(true, func_152() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_480(32768) && hParam1 != Global_1946054.f_57[func_476(iParam3, 1) /*11*/])
			{
				func_481();
				func_479(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_476(iParam3, 1) /*11*/])
				func_479(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_479(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_482(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_479(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_483(0);
			func_484(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_479(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_309(var uParam0, BOOL bParam1) // Position - 0xDC37 Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_384(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_384(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_485("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_486(&unk, i, num, num2))
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
	
		func_487(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_310() // Position - 0xDD00 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_311() // Position - 0xDD1A Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_312() // Position - 0xDD4F Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_313() // Position - 0xDD6B Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_314() // Position - 0xDD85 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_488();
	func_489();
	func_490();
	return;
}

void func_315(int iParam0, int iParam1, BOOL bParam2) // Position - 0xDD9C Hash - 0x968DA278 ^0xF2586DEA
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

void func_316(int iParam0, BOOL bParam1) // Position - 0xE174 Hash - 0x922C415B ^0xCFDE03DF
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
	func_423(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_317(int iParam0) // Position - 0xE28B Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_318(int iParam0) // Position - 0xE2A6 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_319(int iParam0) // Position - 0xE2C1 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_320(int iParam0) // Position - 0xE2DC Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_321(int iParam0) // Position - 0xE2F7 Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_322(int iParam0) // Position - 0xE312 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_323(Hash hParam0) // Position - 0xE32D Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_141(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_324(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0xE346 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_411(iParam0, &num, &num2);

	if (!func_412(iParam0, num, num2, bParam2))
		return;

	if (!func_491(iParam0, 1024))
		return;

	func_413(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_325(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE3A6 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_411(iParam0, &num, &num2);

	if (!func_412(iParam0, num, num2, bParam2))
		return;

	if (!func_491(iParam0, 1024))
		return;

	func_413(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_326() // Position - 0xE421 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_407())
		return func_327();

	endRange = func_407() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_407(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_492(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_408(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_327() // Position - 0xE49B Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_407());
	return func_408(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_328(var uParam0) // Position - 0xE4BE Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_329(Hash hParam0, int iParam1, Hash hParam2) // Position - 0xE513 Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_141(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_399(hParam0, false, true) };
	unk6 = { func_433(hParam0, unk, unk.f_4, false) };
	return func_493(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_330(Hash hParam0) // Position - 0xE562 Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_152() != -1)
		return;

	switch (func_279(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_479(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_495(hParam0);
		
			if (func_496(stackSize))
				func_497(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_479(30, hParam0, 0, 0, false);
		
			if (func_498() == -2125499975 || func_498() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_479(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_498() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_479(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_499(-525676072, false))
				if (func_500(-525676072, &hash))
					func_479(33, hash, 0, 0, false);
		
			func_479(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_494(81053684, false) <= 0)
				func_479(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_501(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_308(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_278(24);
	
		if (func_309(&hash2, false))
			func_284(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_331(Hash hParam0) // Position - 0xE734 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_137(hParam0, 943695443))
		func_502(0, hParam0);
	else if (func_137(hParam0, -2096528786))
		func_502(1, hParam0);
	else if (func_137(hParam0, -1094167013))
		func_502(2, hParam0);
	else if (func_137(hParam0, 1936654645))
		func_502(3, hParam0);
	else if (func_137(hParam0, 1306489306))
		func_502(4, hParam0);
	else if (func_137(hParam0, 435762317))
		func_502(5, hParam0);
	else if (func_137(hParam0, 1259363210))
		func_502(6, hParam0);
	else if (func_137(hParam0, 881398259))
		func_502(7, hParam0);
	else if (func_137(hParam0, -541549214))
		func_502(8, hParam0);
	else if (func_137(hParam0, 130796156))
		func_502(-1, hParam0);

	return;
}

int func_332(Hash hParam0, int iParam1) // Position - 0xE82A Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_503(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_504(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_333(Hash hParam0) // Position - 0xE853 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_141(hParam0, 0))
		return unk;

	if (func_137(hParam0, -305066475))
		if (func_152() == -1)
			if (func_137(hParam0, -537818634))
				return func_505(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_505(joaat("deadeye_items"));
	else if (func_137(hParam0, -537818634))
		return func_505(joaat("medicine_items"));

	if (func_137(hParam0, 2084895747))
		return func_505(joaat("lock_breaker_items"));

	return unk3;
}

void func_334(Hash hParam0) // Position - 0xE8E7 Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_152() == -1)
				if (func_102(Global_1835011[4 /*74*/].f_1, true))
					func_266(109, true);
			break;
	}

	return;
}

void func_335(Hash hParam0, int iParam1) // Position - 0xE920 Hash - 0x3053C451 ^0x33B94F8C
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(func_506(0));
	func_509(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_508(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_336(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE960 Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_141(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_510())
	{
		func_511(hParam0, iParam1, bParam2, bParam4);
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
		if (bParam3 || bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_277(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_276(hParam0);
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
	else if (!func_513(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_514(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_323(hParam0)), num), num5);

	if (iParam1 == 1 || func_137(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_323(hParam0));

	func_509(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

void func_337(int iParam0, const char* sParam1, int iParam2) // Position - 0xEBB5 Hash - 0x4DF85B80 ^0x62E5D303
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_338(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xEBF6 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_515())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_509(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_516(num);
			func_517(num, 0, 0);
		}
	
		func_509(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_292(func_505(joaat("CAREER_CASH")), value);
	}

	return;
}

BOOL func_339(Ped pedParam0, Any* panParam1) // Position - 0xECD2 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

BOOL func_340(var uParam0, float fParam1) // Position - 0xECE2 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_518(uParam0, fParam1))
	{
		func_108(uParam0);
		return true;
	}

	return false;
}

Hash func_341(Ped pedParam0, int iParam1) // Position - 0xED00 Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_342(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xED17 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_519(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

Vector3 func_343(Cam caParam0) // Position - 0xED45 Hash - 0x3771518C ^0x69C952BC
{
	float gameplayCamRot;
	float num;
	float num2;
	float num3;
	float num4;

	if (!CAM::DOES_CAM_EXIST(caParam0))
		gameplayCamRot = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	else
		gameplayCamRot = { CAM::GET_CAM_ROT(caParam0, 2) };

	num = BUILTIN::SIN(gameplayCamRot.f_2);
	num2 = BUILTIN::COS(gameplayCamRot.f_2);
	num3 = BUILTIN::SIN(gameplayCamRot);
	num4 = BUILTIN::COS(gameplayCamRot);
	return func_344(-num4 * num, num4 * num2, num3);
}

Vector3 func_344(float fParam0, float fParam1, float fParam2) // Position - 0xEDA3 Hash - 0xFB6A39D2 ^0x80C9C759
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

void func_345(var uParam0, BOOL bParam1, int iParam2) // Position - 0xEDE2 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_520(iParam2);

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
		uParam0->f_10 = 0;

	uParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		uParam0->f_13 = Global_1935630.f_44;
	else
		uParam0->f_13 = func_521(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_167(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_522(true))
							func_167(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_522(true) || *uParam0 & 8192 != 0)
					func_166(uParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(uParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_523(uParam0))
				uParam0->f_15 = func_364();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_364() - uParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}

	uParam0->f_6 = uParam0->f_6 + 1;

	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7 = uParam0->f_7 + 1;
	
		if (uParam0->f_7 > 4)
			uParam0->f_7 = 0;
	}

	func_524(uParam0);
	return;
}

BOOL func_346(Ped pedParam0, var uParam1) // Position - 0xEFAD Hash - 0x3A755B4E ^0xDBAC23C2
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
		
			if (!func_525(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_526(pedParam0, pedIndexFromEntityIndex) <= func_527(uParam1))
				return true;
			break;
	}

	return false;
}

void func_347(Ped pedParam0, var uParam1, int iParam2) // Position - 0xF085 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = pedParam0;

	if (func_528(iParam2, 1, 1, 1, 0))
		func_167(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_529(uParam1, true);
	func_530();
	return;
}

BOOL func_348(Ped pedParam0, var uParam1) // Position - 0xF0C2 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_198(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_531(uParam1);
		
			if (func_532(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_533(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_529(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_529(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_349(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0xF1A9 Hash - 0x899101A2 ^0xBCA80002
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

	if (func_534(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_531(uParam2);
	
		if (func_532(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_533(uParam2))
				{
					func_529(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_350(Ped pedParam0, var uParam1) // Position - 0xF27F Hash - 0xC62373A5 ^0xD1ADE674
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

	if (func_525(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_533(uParam1))
		{
			customDistance = func_531(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_351(var uParam0, int iParam1) // Position - 0xF388 Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_364();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_352(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0xF3BF Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_535(uParam2);
		
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
			if (func_360(uParam2, pedParam1))
			{
				func_529(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_353(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0xF4C6 Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_536(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_360(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_529(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_354(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0xF531 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_537(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_529(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_529(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_538(pedParam1, entityCoords, outCoords))
					{
						func_529(uParam2, true);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_529(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_538(pedParam1, entityCoords, outCoords2))
					{
						func_529(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_355(Ped pedParam0, var uParam1) // Position - 0xF679 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *uParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_525(pedParam0, uParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_539(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_540(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						uParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_541(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_542(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_543(uParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_356(var uParam0, var uParam1) // Position - 0xF859 Hash - 0xF223CED2 ^0xA472D0A4
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

BOOL func_357(var uParam0, int iParam1) // Position - 0xF8D1 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_364();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_358(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF900 Hash - 0x8119700D ^0x42D5A76B
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
		if (func_544(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_545(entity2, pedParam0))
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

int func_359(var uParam0, Ped pedParam1) // Position - 0xFA86 Hash - 0x42A83B1F ^0xEB01D082
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", uParam0->f_5);
	else if (uParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_360(var uParam0, Ped pedParam1) // Position - 0xFAD6 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_546(uParam0))
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

BOOL func_361(Ped pedParam0, Ped pedParam1) // Position - 0xFB73 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_35(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_362() // Position - 0xFBC0 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_363(var uParam0, Ped pedParam1) // Position - 0xFBC8 Hash - 0x6BE02E92 ^0x188EF1A2
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
	
		if (func_547(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_9 = func_364();
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
						if (func_20(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_9 = func_364();
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

int func_364() // Position - 0xFC89 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_365() // Position - 0xFCA7 Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_364() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_366(var uParam0, Ped pedParam1) // Position - 0xFCF4 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_527(uParam0);

	if (uParam0->f_12 > func_548(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_549(pedParam1);
	num2 = func_550(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_367(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0xFE10 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_551(pedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_368(Ped pedParam0, var uParam1) // Position - 0xFE58 Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*uParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*uParam1 & 33554432 != 0)
	{
		if (func_552(pedParam0, uParam1, true))
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
					if (!func_553(uParam1, pedParam0))
						if (func_20(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_369(Ped pedParam0, var uParam1) // Position - 0x100B2 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_554(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_370(var uParam0, int iParam1) // Position - 0x100EB Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_364();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_371(var uParam0, var uParam1) // Position - 0x1011A Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_372(Ped pedParam0, var uParam1) // Position - 0x1012E Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_364();
	else if (func_364() - uParam1->f_4 > func_555(uParam1))
		return func_556(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_373(var uParam0, Ped pedParam1) // Position - 0x1017B Hash - 0x2978E171 ^0x9B4E9A2F
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

char* func_374(int iParam0) // Position - 0x101CF Hash - 0xEEC1F2B7 ^0xD5E96A52
{
	int randomIntInRange;

	if (func_110(iParam0))
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
	
		if (randomIntInRange < 5)
			return "HANGING_AROUND_NO_PURCHASE";
	}
	else
	{
		return "HANGING_AROUND_NO_SHOW";
	}

	return "TAKE_YOUR_TIME";
}

int func_375(int iParam0) // Position - 0x10204 Hash - 0xB71C046 ^0xB71C046
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 5;
	
		case 3:
			return 5;
	
		case 4:
			return 4;
	}

	return 5;
}

Vector3 func_376(int iParam0) // Position - 0x10256 Hash - 0xF6858EF6 ^0xF6858EF6
{
	switch (iParam0)
	{
		case 0:
			return 2538.4407f, -1287.2384f, 48.21795f;
	
		case 3:
			return -351.54733f, 703.4365f, 116.68869f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_377(int iParam0) // Position - 0x10299 Hash - 0x218D154D ^0x218D154D
{
	switch (iParam0)
	{
		case 0:
			return 3f;
	
		case 3:
			return 1.3f;
	
		default:
		
	}

	return 0f;
}

Vector3 func_378(int iParam0) // Position - 0x102C2 Hash - 0x72DB1375 ^0x72DB1375
{
	switch (iParam0)
	{
		case 0:
			return 2545.8179f, -1279.9001f, 50.04126f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

float func_379(int iParam0) // Position - 0x102ED Hash - 0x656D40D4 ^0x656D40D4
{
	switch (iParam0)
	{
		case 0:
			return 3f;
	
		default:
		
	}

	return 0f;
}

void func_380(var uParam0, var uParam1) // Position - 0x10308 Hash - 0x344BD97F ^0xE6F57174
{
	float num;
	BOOL isPedJumping;

	num = func_35(Global_35, uParam0->f_134, true, true);
	isPedJumping = PED::IS_PED_JUMPING(Global_35);

	if (isPedJumping && num < 10f)
	{
		if (!func_106(&(uParam1->f_42)))
		{
			uParam1->f_31 = uParam1->f_31 + 1;
			func_42(&(uParam1->f_42));
		}
		else if (func_107(&(uParam1->f_42)) > 4f)
		{
			func_108(&(uParam1->f_42));
		}
	}

	if (uParam1->f_31 > 0 && num > 14f)
		uParam1->f_31 = 0;

	switch (uParam1->f_23)
	{
		case 0:
			if (uParam1->f_31 > 1 && !func_221(true))
			{
				func_193(uParam0->f_134, "MISBEHAVING_LOW", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_42(&(uParam1->f_45));
				func_557(&(uParam1->f_23), 1);
			}
			break;
	
		case 1:
			if (func_107(&(uParam1->f_45)) > 3f && !func_221(true))
				func_557(&(uParam1->f_23), 2);
			break;
	
		case 2:
			if (uParam1->f_31 > 3 && !func_221(true))
			{
				func_193(uParam0->f_134, "MISBEHAVING_MED", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_42(&(uParam1->f_45));
				func_557(&(uParam1->f_23), 3);
			}
			break;
	
		case 3:
			if (func_107(&(uParam1->f_45)) > 3f && !func_221(true))
				func_557(&(uParam1->f_23), 4);
			break;
	
		case 4:
			if (uParam1->f_31 > 5 && !func_221(true))
			{
				func_193(uParam0->f_134, "MISBEHAVING_HIGH", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_42(&(uParam1->f_45));
				func_557(&(uParam1->f_23), 5);
			}
			break;
	
		case 5:
			if (func_107(&(uParam1->f_45)) > 3f && !func_221(true))
				func_557(&(uParam1->f_23), 6);
			break;
	
		case 6:
			break;
	}

	return;
}

char* func_381(int iParam0) // Position - 0x10506 Hash - 0xE5247562 ^0x5598FDA2
{
	switch (iParam0)
	{
		case 0:
			return "DIRECTIONS_SAINT_DENIS_RALEUR";
	
		case 1:
		case 2:
			return "DIRECTIONS_SAINT_DENIS_FONTANA";
	
		case 3:
			return "DIRECTIONS_VALENTINE_MAGIC_LANTERN";
	
		case 4:
			return "DIRECTIONS_BLACKWATER_IMPERIAL";
	
		default:
		
	}

	return "DIRECTIONS_SAINT_DENIS_RALEUR";
}

void func_382(var uParam0) // Position - 0x10554 Hash - 0xB42222F3 ^0x93112654
{
	uParam0->f_27 = 0;
	uParam0->f_28 = 1;
	uParam0->f_29 = 0;
	uParam0->f_30 = 1;
	func_55(&(uParam0->f_25), 1048576);
	func_55(&(uParam0->f_25), 2);
	func_55(&(uParam0->f_25), 32);
	func_55(&(uParam0->f_25), 128);
	func_55(&(uParam0->f_25), 256);
	func_55(&(uParam0->f_25), 512);
	func_55(&(uParam0->f_25), 16);
	func_55(&(uParam0->f_25), 1024);
	func_55(&(uParam0->f_25), 64);
	func_55(&(uParam0->f_25), 2048);
	func_55(&(uParam0->f_25), 16384);
	func_55(&(uParam0->f_25), 8192);
	return;
}

BOOL func_383(var uParam0) // Position - 0x105EF Hash - 0xF2A750AD ^0xEE67A154
{
	if (-1829635046 == func_558(81053684))
		if (func_559(uParam0))
			return true;
	else if (func_560(-525676072, uParam0))
		if (func_559(uParam0))
			return true;

	return false;
}

Hash func_384(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10634 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_385(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x1065A Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_141(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_404(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_336(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_222(hParam0, 1, bParam4))
		return 0;

	statId = { func_333(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_259(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_259(hParam0, false, false) - iParam1 < 0)
		{
			func_385(hParam0, func_259(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_276(hParam0) == joaat("WEAPON"))
		if (!func_561(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_562(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_283(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_336(hParam0, -iParam1, flag, flag2, flag3);

	func_563(hParam0, iParam1);
	return 1;
}

void func_386(int iParam0) // Position - 0x107CE Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_126(1) < iParam0)
		iParam0 = func_126(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_505(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_387(int iParam0, const char* sParam1, int iParam2) // Position - 0x1080C Hash - 0xA31E0DC ^0x6598C218
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

Hash func_388(int iParam0) // Position - 0x1084D Hash - 0xEB4726A9 ^0x7C06B6B9
{
	switch (iParam0)
	{
		case 5:
			return joaat("nbx_civilians");
	
		case 38:
			return joaat("bla_upperclass");
	
		case 76:
			return joaat("val_civilians");
	
		default:
		
	}

	return -1;
}

int func_389(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9, Hash hParam10, BOOL bParam11, BOOL bParam12, int iParam13, BOOL bParam14, BOOL bParam15) // Position - 0x10887 Hash - 0x1CD7D100 ^0xAEA25770
{
	Volume volume;
	int num;

	if (iParam13 <= 0f)
		volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	else
		volume = VOLUME::CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, iParam13);

	num = func_564(uParam0, uParam1, iParam2, volume, bParam7, bParam8, bParam9, hParam10, bParam11, bParam12, bParam14, bParam15);
	func_565(volume);
	return num;
}

Hash func_390() // Position - 0x108E5 Hash - 0x4228A1C2 ^0xC94C7CFB
{
	return Global_1934266.f_26;
}

void func_391(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, BOOL bParam5, int iParam6) // Position - 0x108F3 Hash - 0xD3ABA9AA ^0x89487E3E
{
	if (!func_566(pedParam0, 0))
		return;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return;

	if (bParam5 && PED::_0xF9331B3A314EB49D(pedParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedParam0);
		return;
	}

	_IS_NULL_VECTOR(vParam1);

	switch (iParam4)
	{
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedParam0);
			break;
	
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(pedParam0, vParam1, iParam6);
			break;
	
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(pedParam0, vParam1, iParam6);
			break;
	
		case 4:
			PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(pedParam0, vParam1);
			break;
	
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(pedParam0, vParam1, iParam6, false);
			break;
	
		case 6:
			PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(pedParam0, vParam1, iParam6, false);
			break;
	
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedParam0);
			break;
	
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedParam0);
			break;
	}

	return;
}

BOOL func_392(Hash hParam0, int iParam1) // Position - 0x109D7 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_141(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_404(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_485("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_486(&unk, i, num, num2))
			{
			}
			else if (!func_249(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_487(num);
				return true;
			}
		}
	
		func_487(num);
	}

	return false;
}

BOOL func_393(Hash hParam0) // Position - 0x10A7F Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_394(int iParam0) // Position - 0x10A8B Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_395(Hash hParam0) // Position - 0x10B0C Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_276(hParam0) == joaat("WEAPON");
}

BOOL func_396(Hash hParam0) // Position - 0x10B20 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_152() != -1)
		return false;

	if (func_277(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_403(hParam0, &unk, 1, false, false);

	return func_222(hParam0, 1, false);
}

void func_397(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x10B64 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_276(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_281(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_429(weaponHash))
	{
		if (func_152() == -1)
			func_282(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_259(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_336(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_398(Hash hParam0, var uParam1) // Position - 0x10C0B Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_137(hParam0, 58855631))
	{
		func_567(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_399(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x10C39 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_568(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_276(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_572(hParam0, -1823706425))
			{
				unk = { func_433(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_572(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_433(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_571(bParam1) };
		
			switch (func_279(hParam0))
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
				unk = { func_433(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_569(bParam1) };
		
			if (bParam2 && func_570(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_431(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_431(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_432(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_573(unk, &unk28, bParam1, false))
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

int func_400(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10EF6 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_141(hParam0, 0))
		return 0;

	if (!func_283(false))
		bParam2 = true;

	if (bParam2 || !func_574(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_406(bParam3), hParam0);
}

int func_401(Hash hParam0, BOOL bParam1) // Position - 0x10F44 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_287(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_406(bParam1), hParam0, false);
}

BOOL func_402() // Position - 0x10F6E Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_152() != -1)
		return false;

	if (!func_269())
		return false;

	if (!func_102(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[2 /*74*/].f_1, true) && func_102(Global_1347702[120 /*49*/].f_15, true) && !func_102(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[37 /*74*/].f_1, true) && !func_102(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[57 /*74*/].f_1, true) && !func_102(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[26 /*74*/].f_1, true) && !func_102(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_102(Global_1835011[62 /*74*/].f_1, true) && func_102(Global_1835011[63 /*74*/].f_1, true) && !func_102(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[75 /*74*/].f_1, true) && !func_102(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_102(Global_1835011[76 /*74*/].f_1, true) && !func_102(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[40 /*74*/].f_1, true) && func_102(Global_1835011[41 /*74*/].f_1, true) && !func_102(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[62 /*74*/].f_1, true) && func_102(Global_1835011[63 /*74*/].f_1, true) && !func_102(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_102(Global_1835011[65 /*74*/].f_1, true) && func_102(Global_1835011[66 /*74*/].f_1, true) && !func_102(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_403(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x111B4 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_575(&hParam0);

	if (!func_141(hParam0, 0))
		return 0;

	if (!func_283(false))
		bParam3 = true;

	if (func_395(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_569(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_431(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_432(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_570(hParam0, true))
				if (!func_431(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_432(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_576(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_400(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_574(hParam0))
		inventoryItemCountWithItemid = func_577(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_406(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

Hash func_404(Hash hParam0, int iParam1) // Position - 0x112F9 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_141(hParam0, 0))
		return 0;

	num = func_276(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_137(hParam0, 1399091007))
	{
		func_474(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_405(Hash hParam0, BOOL bParam1) // Position - 0x11373 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_578(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_579(&unk, func_569(false));

	if (!func_580(&unk, &num, &num2, false))
		return 0;

	func_487(num);
	return num2;
}

int func_406(BOOL bParam0) // Position - 0x113D1 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_152() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_407() // Position - 0x11412 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_408(Hash hParam0) // Position - 0x11424 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_409(int iParam0) // Position - 0x11432 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_152() != -1)
		return;

	num = func_581(iParam0);
	value = func_582(iParam0);

	if (Global_1347477.f_117 || !func_60(31) || !func_583(num))
		return;

	if (value <= 0f)
		return;

	if (func_584(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_585(num, Global_40.f_11095.f_11[num] + value, false);
	func_509(MISC::VAR_STRING(6, func_586(iParam0), value), "itemtype_textures", func_587(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_410(BOOL bParam0, int iParam1) // Position - 0x11531 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_588(&Global_0, 8);

	if (!func_269() || func_152() != -1)
		return;

	func_588(&Global_0, 1);
	return;
}

void func_411(int iParam0, var uParam1, var uParam2) // Position - 0x11577 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_412(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x11593 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_589(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_590(iParam0))
		return false;

	if (func_591(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_491(iParam0, 1) || func_592(32768))
		if (!func_491(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_593())
		return false;

	return true;
}

void func_413(int iParam0, int iParam1) // Position - 0x11635 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

Hash func_414(int iParam0) // Position - 0x11659 Hash - 0xB8EC44B7 ^0x693BD882
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

int func_415(Hash hParam0, int iParam1) // Position - 0x11712 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_594(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_416(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x11741 Hash - 0xF20034E5 ^0x5E2B6007
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_272() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_595(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_596(), 12);
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
			else if (func_456() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_597(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_456(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_415(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_598(), 13);
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
			else if (func_457() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_599(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_457(), 10);
			break;
	}

	return sParam3;
}

BOOL func_417(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x11A2E Hash - 0xC978E890 ^0x1621426E
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

BOOL func_418(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x11ADB Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_419(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x11B07 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_420(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x11B56 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_600(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_222(hash, 1, false) || func_602(func_601(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(func_600(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(func_600(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_456() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_603(i)), func_603(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_597() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_603(i)), func_603(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_603(i)), func_603(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_467(iParam3, func_604(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_463(hash) - iParam7 >= func_415(iParam3, func_605(i));
				else
					flag = func_463(hash) >= func_415(iParam3, func_605(i));
			else if (hParam4 == hash)
				flag = func_463(hash) + iParam7 >= func_415(iParam3, func_605(i));
			else
				flag = func_463(hash) >= func_415(iParam3, func_605(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_607(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_457() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_609(i)), func_609(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_599() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_609(i)), func_609(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_609(i)), func_609(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_467(iParam3, func_604(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_463(hash) - iParam7 >= 1;
				else
					flag = func_610(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_610(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_611(hash)), func_611(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_421(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x11ECB Hash - 0x3C34F826 ^0x22892726
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
		if (func_598() >= 13)
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

BOOL func_422(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x11FD4 Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_65(func_612(0)) && func_613(0) == 1 || func_613(0) == 8 || func_613(0) == 6)
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

int func_423(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x12074 Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x120EB Hash - 0xA17D549C ^0xC576C41F
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

int func_425(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x1219A Hash - 0xB88D7AA5 ^0x36259347
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

void func_426(int iParam0) // Position - 0x121FB Hash - 0x48EBE6BD ^0x358C7E90
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

void func_427(int iParam0) // Position - 0x12235 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_269() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_266(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_269() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_266(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_269() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_266(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_269() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_266(589, false);
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
			func_614(true);
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
			func_615(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_615(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_615(3);
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
		
			if (func_152() == -1)
			{
				if (!func_501(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_622(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_180())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_222(hash, 1, false))
						func_329(hash, 1, 752097756);
				
					func_308(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_616(true);
			break;
	
		case 34:
			func_617(true);
			break;
	
		case 35:
			func_618(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_619(false);
			break;
	
		case 38:
			func_620(false);
			break;
	
		case 39:
			func_621(false);
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
			func_623();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_152() == -1)
				if (!func_222(1013902307, 1, false))
					func_329(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_152() == -1)
				if (!func_222(786809402, 1, false))
					func_329(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_152() == -1)
			{
				if (!func_222(1013902307, 1, false))
					func_329(1013902307, 1, 752097756);
			
				if (!func_222(142640135, 1, false))
					func_329(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_152() == -1)
			{
				if (!func_222(786809402, 1, false))
					func_329(786809402, 1, 752097756);
			
				if (!func_222(-518019409, 1, false))
					func_329(-518019409, 1, 752097756);
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

BOOL func_428(Hash hParam0) // Position - 0x1285D Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_429(Hash hParam0) // Position - 0x12885 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

Hash func_430(int iParam0, int iParam1) // Position - 0x128AD Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_431(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x149F8 Hash - 0x4285A587 ^0x4285A587
{
	return func_577(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_432(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x14A10 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_624(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_433(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x14A31 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_141(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_406(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_434(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x14A62 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_625(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_573(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_283(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_406(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_435(Hash hParam0, int iParam1) // Position - 0x14AF2 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_626(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_436(Hash hParam0) // Position - 0x14B3A Hash - 0x708BD33E ^0xCC3A81DF
{
	char* propertyName;
	char* propertyName2;
	eStackSize value;

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
	value = func_627();
	func_628(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_437(Hash hParam0) // Position - 0x14C09 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_250(hParam0))
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

BOOL func_438(Hash hParam0) // Position - 0x14C85 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

int func_439(Hash hParam0) // Position - 0x14C97 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_60(50))
			{
				if (!func_60(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_60(51))
			{
				if (!func_60(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_440() // Position - 0x14D03 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_441(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0x14D14 Hash - 0x4FC4FA99 ^0x540DBE26
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

	if (!func_141(hParam1, 0))
		return false;

	if (func_276(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_152() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_279(hParam1) == -999503751)
		return true;

	num = func_629(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_137(hParam1, 866047851))
	{
		num2 = func_476(num, 1);
	
		if (func_630(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
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
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_137(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_560(1868067663, &unk))
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
			num5 = func_631(componentHash, num, metaPedType, isMP);
			num4 = func_631(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
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
			hash = func_279(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
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
			hash = func_279(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_137(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_632(Global_1946054.f_1497.f_1[num2 /*3*/]))
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

void func_442() // Position - 0x15024 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_443() // Position - 0x15045 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	float num2;

	num = Global_40.f_11095.f_44;
	num2 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num2);
	return;
}

int func_444() // Position - 0x1509A Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_222(func_633(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_445(Hash hParam0) // Position - 0x150CC Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_446(int iParam0, Hash hParam1) // Position - 0x15162 Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_222(hash, 1, false) && func_222(hash2, 1, false))
		return true;

	return false;
}

Hash func_447(Hash hParam0) // Position - 0x152C3 Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_448(Hash hParam0, int iParam1) // Position - 0x1538A Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_634(hParam0);

	if (num != -15)
	{
		func_628(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_635(num, true);
	}

	return false;
}

int func_449(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x153BC Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_222(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_141(hash, 0) && func_137(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_450(int iParam0) // Position - 0x15481 Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_451(int iParam0) // Position - 0x1549C Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_452(int iParam0) // Position - 0x154B7 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_453(int iParam0) // Position - 0x154D2 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_454(int iParam0) // Position - 0x154ED Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_463(hash);
	num3 = func_463(hash2);
	num4 = func_463(hash3);
	num6 = func_464(hash);
	num7 = func_464(hash2);
	num8 = func_464(hash3);

	if (iParam0 != 2)
	{
		num5 = func_463(hash4);
		num9 = func_464(hash4);
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

void func_455(int iParam0) // Position - 0x15660 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_456() // Position - 0x1567B Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_636(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_457() // Position - 0x156B4 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_458(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x156C6 Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_610(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_610(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_610(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_610(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_610(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_610(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash) && func_610(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_610(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_610(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_610(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash) && func_610(hash2) && func_610(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_610(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_610(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_610(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_610(hash) && func_610(hash2) && func_610(hash3) && func_610(hash4))
			return true;
	}

	return false;
}

void func_459(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x15B8B Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_637();
			func_175(iParam0);
			break;
	
		case -1925798111:
			func_175(-1925798111);
			func_176(-919512195);
			func_176(420709909);
			func_176(1703426636);
			break;
	
		case -1838352012:
			func_176(-1674179981);
			func_176(-1835851517);
			func_175(-1838352012);
			break;
	
		case -1835851517:
			func_176(-1674179981);
			func_176(-1838352012);
			func_175(-1835851517);
			break;
	
		case -1738165526:
			func_175(-1738165526);
			func_176(0);
			func_176(473295046);
			break;
	
		case -1717960576:
			func_176(210001842);
			func_175(-1717960576);
			break;
	
		case -1674179981:
			func_176(-1835851517);
			func_176(-1838352012);
			func_175(-1674179981);
			break;
	
		case -1612662716:
			func_176(1822001510);
			func_175(-1612662716);
			break;
	
		case -1414537028:
			func_176(38162571);
			func_176(1350391819);
			func_176(54073871);
			func_175(-1414537028);
			break;
	
		case -1311865656:
			func_175(-1311865656);
			func_176(1509509592);
			func_176(-959357075);
			func_176(405586984);
			break;
	
		case -1271608261:
			func_176(-150493654);
			func_176(1846061697);
			func_176(-1145519186);
			func_175(-1271608261);
			break;
	
		case -1223121209:
			func_175(-1223121209);
			func_176(630808005);
			break;
	
		case -1145519186:
			func_176(-150493654);
			func_176(-1271608261);
			func_176(1846061697);
			func_175(-1145519186);
			break;
	
		case -1124061431:
			func_176(198200492);
			func_175(-1124061431);
			func_176(52706132);
			func_176(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_175(-1080627546);
			else
				func_176(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_176(-538889627);
			func_176(-538880323);
			func_176(-1056767524);
			func_175(iParam0);
			break;
	
		case -959357075:
			func_175(-959357075);
			func_176(1509509592);
			func_176(405586984);
			func_176(-1311865656);
			break;
	
		case -919512195:
			func_175(-919512195);
			func_176(-1925798111);
			func_176(420709909);
			func_176(1703426636);
			break;
	
		case -664252410:
			func_176(2019386373);
			func_176(2109952320);
			func_175(-664252410);
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
			func_638();
			func_175(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_175(-524145696);
			else
				func_176(-524145696);
		
			func_176(1626481264);
			func_176(282809459);
			break;
	
		case -502324015:
			func_176(1497516462);
			func_176(2016141805);
			func_176(1010885152);
			func_175(-502324015);
			break;
	
		case -434590080:
			func_176(1376646519);
			func_176(931649776);
			func_176(1743048395);
			func_176(449774763);
			func_175(-434590080);
			break;
	
		case -404698347:
			func_176(1306158345);
			func_176(1952610440);
			func_176(-223469678);
			func_176(1517904467);
			func_175(-404698347);
			break;
	
		case -259123672:
			func_176(198200492);
			func_176(-1124061431);
			func_176(52706132);
			func_175(-259123672);
			break;
	
		case -223469678:
			func_176(1306158345);
			func_176(1952610440);
			func_176(-404698347);
			func_176(1517904467);
			func_175(-223469678);
			break;
	
		case -150493654:
			func_176(-1271608261);
			func_176(1846061697);
			func_176(-1145519186);
			func_175(-150493654);
			break;
	
		case 0:
			func_175(0);
			func_176(473295046);
			func_176(-1738165526);
			break;
	
		case 38162571:
			func_176(-1414537028);
			func_176(1350391819);
			func_176(54073871);
			func_175(38162571);
			break;
	
		case 52706132:
			func_176(198200492);
			func_176(-1124061431);
			func_175(52706132);
			func_176(-259123672);
			break;
	
		case 54073871:
			func_176(-1414537028);
			func_176(38162571);
			func_176(1350391819);
			func_175(54073871);
			break;
	
		case 198200492:
			func_175(198200492);
			func_176(-1124061431);
			func_176(52706132);
			func_176(-259123672);
			break;
	
		case 210001842:
			func_176(-1717960576);
			func_175(210001842);
			break;
	
		case 280705402:
			func_176(1766284049);
			func_176(1926308480);
			func_175(280705402);
			break;
	
		case 282809459:
			func_175(282809459);
			func_176(1626481264);
			func_176(-524145696);
			break;
	
		case 405586984:
			func_175(405586984);
			func_176(1509509592);
			func_176(-959357075);
			func_176(-1311865656);
			break;
	
		case 420709909:
			func_175(420709909);
			func_176(-919512195);
			func_176(-1925798111);
			func_176(1703426636);
			break;
	
		case 439465264:
			if (func_174(1609506757))
				if (bParam1)
					func_175(439465264);
				else
					func_176(439465264);
			break;
	
		case 449774763:
			func_176(1376646519);
			func_176(931649776);
			func_176(-434590080);
			func_176(1743048395);
			func_175(449774763);
			break;
	
		case 473295046:
			func_175(473295046);
			func_176(0);
			func_176(-1738165526);
			break;
	
		case 630808005:
			func_175(630808005);
			func_176(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_175(885203519);
			else
				func_176(885203519);
			break;
	
		case 931649776:
			func_176(1376646519);
			func_176(-434590080);
			func_176(1743048395);
			func_176(449774763);
			func_175(931649776);
			break;
	
		case 932909855:
			func_175(932909855);
			func_176(2051822093);
			break;
	
		case 1010885152:
			func_176(1497516462);
			func_176(2016141805);
			func_175(1010885152);
			func_176(-502324015);
			break;
	
		case 1306158345:
			func_176(1952610440);
			func_176(-223469678);
			func_176(-404698347);
			func_176(1517904467);
			func_175(1306158345);
			break;
	
		case 1350391819:
			func_176(-1414537028);
			func_176(38162571);
			func_176(54073871);
			func_175(1350391819);
			break;
	
		case 1376646519:
			func_176(931649776);
			func_176(-434590080);
			func_176(1743048395);
			func_176(449774763);
			func_175(1376646519);
			break;
	
		case 1453909576:
			func_175(1453909576);
			func_176(1643531967);
			break;
	
		case 1497516462:
			func_175(1497516462);
			func_176(2016141805);
			func_176(1010885152);
			func_176(-502324015);
			break;
	
		case 1509509592:
			func_175(1509509592);
			func_176(405586984);
			func_176(-959357075);
			func_176(-1311865656);
			break;
	
		case 1517904467:
			func_176(1306158345);
			func_176(1952610440);
			func_176(-223469678);
			func_176(-404698347);
			func_175(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_176(439465264);
				func_175(1609506757);
			}
			else
			{
				func_176(1609506757);
				func_176(439465264);
			}
			break;
	
		case 1626481264:
			func_175(1626481264);
			func_176(-524145696);
			func_176(282809459);
			break;
	
		case 1643531967:
			func_175(1643531967);
			func_176(1453909576);
			break;
	
		case 1703426636:
			func_175(1703426636);
			func_176(-919512195);
			func_176(-1925798111);
			func_176(420709909);
			break;
	
		case 1743048395:
			func_176(1376646519);
			func_176(931649776);
			func_176(-434590080);
			func_176(449774763);
			func_175(1743048395);
			break;
	
		case 1766284049:
			func_176(280705402);
			func_176(1926308480);
			func_175(1766284049);
			break;
	
		case 1822001510:
			func_176(-1612662716);
			func_175(1822001510);
			break;
	
		case 1846061697:
			func_176(-150493654);
			func_176(-1271608261);
			func_176(-1145519186);
			func_175(1846061697);
			break;
	
		case 1926308480:
			func_176(1766284049);
			func_176(280705402);
			func_175(1926308480);
			break;
	
		case 1952610440:
			func_176(1306158345);
			func_176(-223469678);
			func_176(-404698347);
			func_176(1517904467);
			func_175(1952610440);
			break;
	
		case 2016141805:
			func_176(1497516462);
			func_175(2016141805);
			func_176(1010885152);
			func_176(-502324015);
			break;
	
		case 2019386373:
			func_176(-664252410);
			func_176(2109952320);
			func_175(2019386373);
			break;
	
		case 2051822093:
			func_175(2051822093);
			func_176(932909855);
			break;
	
		case 2109952320:
			func_176(2019386373);
			func_176(-664252410);
			func_175(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_174(iParam0))
					func_175(iParam0);
			else if (func_174(iParam0))
				func_176(iParam0);
			break;
	}

	return;
}

void func_460(Hash hParam0) // Position - 0x166AE Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_639(hParam0))
		func_641(func_640(hParam0));

	return;
}

int func_461() // Position - 0x166CA Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_639(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_462(Hash hParam0, int iParam1, int iParam2) // Position - 0x16702 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_463(hash);
	num3 = func_463(hash2);
	num4 = func_463(hash3);
	num6 = func_464(hash);
	num7 = func_464(hash2);
	num8 = func_464(hash3);

	if (iParam2 != 2)
	{
		num5 = func_463(hash4);
		num9 = func_464(hash4);
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

int func_463(Hash hParam0) // Position - 0x16915 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_222(hParam0, 1, false))
		num = func_259(hParam0, false, false);

	return num;
}

int func_464(Hash hParam0) // Position - 0x16934 Hash - 0xEED5739D ^0xEED5739D
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

int func_465(Hash hParam0) // Position - 0x16A0D Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_466(Hash hParam0, int iParam1) // Position - 0x16A1B Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_467(Hash hParam0, int iParam1) // Position - 0x16A2B Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_594(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_468(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x16A5A Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_467(hParam1, 5) || hParam0 == func_467(hParam1, 6) || hParam0 == func_467(hParam1, 7) || hParam0 == func_467(hParam1, 8) || hParam0 == func_467(hParam1, 9))
	{
		func_458(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_273(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_275(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_469(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x16ADC Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_467(hParam1, 5) || hParam0 == func_467(hParam1, 6) || hParam0 == func_467(hParam1, 7) || hParam0 == func_467(hParam1, 8) || hParam0 == func_467(hParam1, 9))
	{
		if (func_458(hParam1, hParam0, &num, false, 0, false))
		{
			func_273(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_275(51, 0, 0, num, func_415(hParam1, 20), 1, 0);
		}
		else
		{
			func_273(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_275(51, 0, 0, num, func_415(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_470() // Position - 0x16B9D Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_58(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_471(Hash hParam0) // Position - 0x16BC6 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_472(Hash hParam0) // Position - 0x16BD5 Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_642(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_473(Hash hParam0) // Position - 0x16BEE Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_474(Hash hParam0, var uParam1, var uParam2) // Position - 0x16BFD Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_475(var uParam0) // Position - 0x16E09 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_643(i, 1);
	}

	return -358215195;
}

int func_476(int iParam0, int iParam1) // Position - 0x16E44 Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_477(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x17015 Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_644();

	if (iParam2 == 39)
	{
		unk = { func_399(hParam0, true, false) };
		iParam2 = func_476(func_475(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_137(hParam0, 866047851) && func_630(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_480(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_645(func_643(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_646(iParam2);
	func_647(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_648(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_648(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_649(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_650(hParam0, iParam2, hParam1, func_152() != -1);

	if (bParam4)
		func_651(&(Global_1946054.f_1378), true, 3);
	else
		func_651(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_652(func_643(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_478(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x17222 Hash - 0x5AF76643 ^0x5AF76643
{
	func_653(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_479(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x1723B Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_654(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_655(num);
	return;
}

BOOL func_480(BOOL bParam0) // Position - 0x1726D Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_481() // Position - 0x1727E Hash - 0xB6203BF0 ^0x217DD714
{
	func_656(&(Global_1946054.f_2776));
	func_657(32768);
	func_652(1108822547, 8, 6);
	return;
}

int func_482(int iParam0) // Position - 0x172A5 Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_476(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_483(int iParam0) // Position - 0x17309 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_658(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_659(num);
	return;
}

void func_484(int iParam0, int iParam1, int iParam2) // Position - 0x1734D Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_659(num);
	return;
}

BOOL func_485(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x1736D Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_406(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_486(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x17394 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_487(int iParam0) // Position - 0x173CF Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

float func_488() // Position - 0x173F0 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_660())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_661(2);

	if (Global_1347477.f_119)
		return func_661(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_662();
	num3 = func_663();
	num4 = func_664();
	num5 = func_665();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_666());
	num8 = func_661(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_667(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_668(3, num9, num9 > 100f);
	return func_669(num8, -100f, 100f);
}

float func_489() // Position - 0x17519 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_660())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_661(1);

	if (Global_1347477.f_119)
		return func_661(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_662();
	num3 = func_663();
	num4 = func_664();
	num5 = func_665();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_666());
	num8 = func_661(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_667(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_668(2, num9, num9 > 100f);
	return func_669(num8, -100f, 100f);
}

float func_490() // Position - 0x17642 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_660())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_661(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_670())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_671())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_661(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_662();
	num3 = func_663();
	num4 = func_664();
	num5 = func_665();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_666());
	num8 = func_661(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_667(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_668(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_661(0);

	return func_669(num8, -100f, 100f);
}

BOOL func_491(int iParam0, int iParam1) // Position - 0x177E9 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_492(Hash hParam0) // Position - 0x17802 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_493(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x17812 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_141(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_403(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_283(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_406(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_494(int iParam0, BOOL bParam1) // Position - 0x17874 Hash - 0x6C404ADF ^0x7D516F33
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
				return func_672();
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

eStackSize func_495(Hash hParam0) // Position - 0x17903 Hash - 0x9830D1FB ^0x9830D1FB
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

BOOL func_496(eStackSize essParam0) // Position - 0x17D16 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

void func_497(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x17D35 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_496(essParam0))
		return;

	if (func_673(essParam0))
		return;

	if (!func_674(essParam0))
		func_675(essParam0, true, false);

	hash = func_676(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_677(essParam0, 512))
			func_479(30, hash, 0, 0, false);

	if (!func_678() && !bParam1 && !func_19(0, false, true))
		func_119(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_679(essParam0, 6);

	if (bParam2)
		if (!func_19(0, false, true))
			func_410(true, 4);

	return;
}

int func_498() // Position - 0x17DFB Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_499(int iParam0, BOOL bParam1) // Position - 0x17E09 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_494(iParam0, false) < func_680(iParam0, bParam1);
}

BOOL func_500(Hash hParam0, var uParam1) // Position - 0x17E21 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_279(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_501(int iParam0) // Position - 0x17E65 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_476(iParam0, 1) /*3*/] != Global_1946054.f_57[func_476(iParam0, 1) /*11*/];
}

void func_502(int iParam0, Hash hParam1) // Position - 0x17E9D Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_137(hParam1, 130796156))
	{
		func_681(hParam1, false);
	}
	else if (func_137(hParam1, 930141731))
	{
		func_681(hParam1, true);
		func_682(iParam0);
	}

	return;
}

void func_503(var uParam0, int iParam1) // Position - 0x17ED8 Hash - 0x84556899 ^0xA18AFCFA
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

int func_504(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x17FB9 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_683(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_684(anParam2, hParam0, num);
	return 1;
}

struct<2> func_505(int iParam0) // Position - 0x18023 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_506(int iParam0) // Position - 0x18033 Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x18045 Hash - 0xA17D549C ^0x5DB02554
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

Hash func_508(Hash hParam0) // Position - 0x1811C Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_685(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_509(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x18146 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_686(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_510() // Position - 0x181A9 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_511(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x181B6 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_512(BOOL bParam0, var uParam1, var uParam2) // Position - 0x18220 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_513(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x18237 Hash - 0x92B705D3 ^0xB783F681
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

const char* func_514(const char* sParam0, int iParam1) // Position - 0x1832A Hash - 0x9E99F03 ^0x40084F9B
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_515() // Position - 0x18344 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_440())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_516(int iParam0) // Position - 0x1835B Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_687(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_517(int iParam0, const char* sParam1, int iParam2) // Position - 0x1838F Hash - 0x56940320 ^0xB34178A6
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_515())
		func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_518(var uParam0, float fParam1) // Position - 0x183FB Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_106(uParam0))
		return false;

	if (func_107(uParam0) > fParam1)
		return true;

	return false;
}

BOOL func_519(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x18422 Hash - 0xBF2250D5 ^0x34592C3E
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

void func_520(int iParam0) // Position - 0x1846C Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_688();

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
			func_689(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_521(int iParam0) // Position - 0x185D8 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_522(BOOL bParam0) // Position - 0x185EB Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_690(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_523(var uParam0) // Position - 0x18605 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_152() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_691(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_691(uParam0);

	if (ped == 0)
		return false;

	if (func_550(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_524(var uParam0) // Position - 0x1869F Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_692(uParam0);

	return;
}

BOOL func_525(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x186C6 Hash - 0x7FBD27D8 ^0x4C0BB7C4
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam2))
		num2 = func_550(pedParam2);
	else
		num2 = func_549(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_550(pedParam0);
	else
		num = func_549(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_693(*uParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam2);

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

float func_526(Ped pedParam0, Ped pedParam1) // Position - 0x187BF Hash - 0xF9959663 ^0xF9959663
{
	return func_35(pedParam0, pedParam1, true, true);
}

float func_527(var uParam0) // Position - 0x187D1 Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_528(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x187DD Hash - 0x5A9E12AC ^0x5A9E12AC
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

void func_529(var uParam0, BOOL bParam1) // Position - 0x18842 Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_167(uParam0, 134217728);
	else
		func_166(uParam0, 134217728);

	return;
}

void func_530() // Position - 0x18868 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

float func_531(var uParam0) // Position - 0x1887C Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_532(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x18888 Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_693(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_533(var uParam0) // Position - 0x188E9 Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_534(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x188F5 Hash - 0x838BDEFB ^0xB1D5C032
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_341(ped, 0)))
			if (func_519(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_535(var uParam0) // Position - 0x189B7 Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_536(var uParam0) // Position - 0x189C3 Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_537(var uParam0) // Position - 0x189CF Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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

	if (*uParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_538(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x18B0C Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_694(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_539(Ped pedParam0) // Position - 0x18B4F Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_695(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_540(Ped pedParam0) // Position - 0x18BB5 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_541(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18BE1 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_696(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_542(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18C28 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_696(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_543(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x18C73 Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_696(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_544(Ped pedParam0, var uParam1) // Position - 0x18CEC Hash - 0x64FF5121 ^0xD9ABCD76
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

BOOL func_545(Ped pedParam0, Ped pedParam1) // Position - 0x18D39 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_248(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_546(var uParam0) // Position - 0x18D81 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

BOOL func_547(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x18D91 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_20(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_548(var uParam0) // Position - 0x18DBD Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

int func_549(Ped pedParam0) // Position - 0x18DC9 Hash - 0xEB445B10 ^0x5725FFA
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_550(Ped pedParam0) // Position - 0x18E21 Hash - 0x6E063231 ^0x85872EC7
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_551(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x18E91 Hash - 0x89708384 ^0x6760E23F
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
			if (func_544(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_35(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_35(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_552(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0x19001 Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_690(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_553(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_553(uParam1, ped2))
					if (func_20(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_553(var uParam0, Ped pedParam1) // Position - 0x190EF Hash - 0x27FC2906 ^0xE8070407
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

BOOL func_554(int iParam0) // Position - 0x19165 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_180())
		return false;

	return func_102(Global_1347702[58 /*49*/].f_15, true);
}

int func_555(var uParam0) // Position - 0x19187 Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_556(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x19193 Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (uParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = uParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

void func_557(var uParam0, int iParam1) // Position - 0x1920E Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

Hash func_558(Hash hParam0) // Position - 0x1921B Hash - 0x98D45ADB ^0x674EF0A2
{
	int num;

	num = func_476(func_697(hParam0), 1);

	if (num != 39)
		return Global_1946054.f_1497.f_1[num /*3*/].f_1;

	return 0;
}

BOOL func_559(var uParam0) // Position - 0x1924A Hash - 0x313F44CF ^0x6235E18A
{
	if (func_560(81053684, uParam0))
		return true;

	if (func_560(-525676072, uParam0))
		return true;

	return false;
}

BOOL func_560(Hash hParam0, var uParam1) // Position - 0x19277 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_476(func_697(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_279(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

BOOL func_561(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x192EE Hash - 0x17E58D7C ^0xB0311DE1
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_578(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_579(&unk, func_569(false));

	if (!func_580(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_486(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_434(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_487(num);
	num3 < iParam1;
	return true;
}

BOOL func_562(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x193B9 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_141(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_399(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_698(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_433(hParam0, unk, unk.f_4, bParam4) };
	return func_434(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_563(Hash hParam0, int iParam1) // Position - 0x1942A Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_137(hParam0, 606799272))
			func_699(hParam0, iParam1);
	
		if (func_137(hParam0, -1112814642) && func_137(hParam0, -1697809989))
			func_304(hParam0, iParam1, true, false);
	}

	return;
}

int func_564(var uParam0, var uParam1, int iParam2, Volume volParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, Hash hParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11) // Position - 0x1947D Hash - 0x27EEDACD ^0xD08EAB77
{
	ItemSet itemSet;
	Ped indexedItemInItemset;
	Ped ped;
	BOOL flag;
	int num;
	int i;
	int entitiesInVolume;
	int j;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam3, itemSet, 1);

	if (entitiesInVolume > 0)
	{
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
			ped = indexedItemInItemset;
		
			if (ENTITY::DOES_ENTITY_EXIST(ped) && num < *uParam0 && num < iParam2)
			{
				if (func_700(ped, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(ped, "bIgnoreThisPed"))
				{
					if (!func_701(ped, uParam1))
					{
						flag = false;
					
						if (hParam7 != -1)
						{
							j = 0;
						
							for (j = 0; j < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(hParam7); j = j + 1)
							{
								if (PED::IS_PED_MODEL(ped, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(hParam7, j)))
								{
									flag = true;
									break;
								}
							}
						}
						else
						{
							flag = true;
						}
					
						if (flag)
						{
							if (!bParam11)
								if (!ENTITY::IS_ENTITY_DEAD(ped))
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ped, bParam5);
						
							uParam0->[num] = ped;
							num = num + 1;
						}
					}
				}
			}
		}
	}

	num >= iParam2 - 1 && entitiesInVolume >= iParam2;
	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

void func_565(Volume volParam0) // Position - 0x19592 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_566(Ped pedParam0, Object obParam1) // Position - 0x195A9 Hash - 0x9BD5E73F ^0xD367FD44
{
	Object object;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	object = obParam1;

	if (object == 0)
		return true;

	if (func_54(object, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_54(object, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_54(object, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_54(object, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_54(object, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_54(object, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_54(object, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_54(object, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

int func_567(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x196A8 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_141(hParam0, 0))
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

struct<4> func_568(BOOL bParam0) // Position - 0x196F6 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_433(joaat("character"), func_702(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_569(BOOL bParam0) // Position - 0x19712 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_406(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_433(923904168, func_568(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_433(923904168, func_568(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_433(923904168, func_568(bParam0), -740156546, false);
}

BOOL func_570(Hash hParam0, BOOL bParam1) // Position - 0x197A7 Hash - 0x62864AB ^0xBC339691
{
	if (func_279(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_60(24);
		else
			return true;

	return false;
}

struct<4> func_571(BOOL bParam0) // Position - 0x197E0 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_406(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_433(271701509, func_568(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_433(271701509, func_568(bParam0), 12999093, false);
}

BOOL func_572(Hash hParam0, Hash hParam1) // Position - 0x19844 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_279(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_573(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x198A3 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_406(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_574(Hash hParam0) // Position - 0x198D3 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_703(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_575(var uParam0) // Position - 0x198EF Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_141(*uParam0, 0))
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

BOOL func_576(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x1996B Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_141(hParam0, 0))
		return false;

	unk = { func_399(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_430(398 + i, 1);
	
		if (func_431(hParam0, &unk, hash, false))
		{
			flag = func_432(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_577(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x199FF Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_141(hParam0, 0))
		return 0;

	guid = { func_433(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_406(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<18> func_578(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x19A47 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_579(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x19B19 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_580(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x19B34 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_406(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_581(int iParam0) // Position - 0x19B59 Hash - 0x92F940EE ^0x92F940EE
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

float func_582(int iParam0) // Position - 0x19BAD Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_704(iParam0);
	
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
			return func_704(iParam0);
	
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
			return func_704(iParam0);
	
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

BOOL func_583(int iParam0) // Position - 0x19E7B Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_60(18);
	
		case 1:
			return func_60(19);
	
		case 2:
			return func_60(20);
	
		default:
		
	}

	return true;
}

int func_584(int iParam0) // Position - 0x19EB9 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_705(Global_40.f_11095.f_11[iParam0]);
}

void func_585(int iParam0, float fParam1, BOOL bParam2) // Position - 0x19ED1 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_152() != -1)
		return;

	if (Global_1347477.f_117 || !func_60(31))
		return;

	num = func_584(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_584(iParam0);

	if (func_706(iParam0) && func_707(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_708(num2, fParam1);
		
			if (fParam1 > (float)func_709(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_266(func_710(iParam0), false);
				
					func_711(iParam0, num3, num4);
					func_712(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_586(int iParam0) // Position - 0x19FD3 Hash - 0xEB40D7A4 ^0xBA1D3E36
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_587(int iParam0) // Position - 0x19FDF Hash - 0x21FAF347 ^0xAF7D8F21
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

void func_588(Hash hParam0, int iParam1) // Position - 0x1A01A Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_589(int iParam0, int iParam1) // Position - 0x1A02D Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_152() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_590(int iParam0) // Position - 0x1A060 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_152() != -1)
		if (func_491(iParam0, 4))
			return false;
	else if (func_491(iParam0, 2))
		return false;

	return true;
}

BOOL func_591(int iParam0) // Position - 0x1A090 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_491(iParam0, 65536) && !func_491(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_491(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_491(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_592(int iParam0) // Position - 0x1A13C Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_593() // Position - 0x1A14F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_594(int iParam0, var uParam1) // Position - 0x1A15E Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_713(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_595() // Position - 0x1A18B Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_714(Global_40.f_12019);
}

int func_596() // Position - 0x1A19D Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_414(i);
	
		if (func_222(hash, 1, false) || func_602(func_601(hash)))
			num = num + 1;
	}

	return num;
}

int func_597() // Position - 0x1A1E6 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_715(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_598() // Position - 0x1A21F Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_607(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_599() // Position - 0x1A258 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_600(int iParam0) // Position - 0x1A26A Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_601(Hash hParam0) // Position - 0x1A323 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_602(BOOL bParam0) // Position - 0x1A3B9 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_603(int iParam0) // Position - 0x1A3CC Hash - 0x5238B02A ^0xB7FA8FF5
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

int func_604(int iParam0) // Position - 0x1A406 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_605(int iParam0) // Position - 0x1A44B Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(Hash hParam0) // Position - 0x1A494 Hash - 0xA17D549C ^0xF65B5D07
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

BOOL func_607(Hash hParam0) // Position - 0x1A5A1 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(Hash hParam0) // Position - 0x1A5B1 Hash - 0xA17D549C ^0x933BFA62
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

char* func_609(int iParam0) // Position - 0x1A66D Hash - 0x5238B02A ^0x21076FB6
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

BOOL func_610(Hash hParam0) // Position - 0x1A6A7 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_716(hParam0) && func_222(hParam0, 1, false))
		return 1;
	else if (func_717(hParam0) && func_718(hParam0))
		return 1;

	return 0;
}

char* func_611(Hash hParam0) // Position - 0x1A6E5 Hash - 0x87599A67 ^0x26C6A190
{
	if (!func_141(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_323(hParam0));
}

int func_612(int iParam0) // Position - 0x1A708 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_613(int iParam0) // Position - 0x1A71A Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_614(BOOL bParam0) // Position - 0x1A72E Hash - 0xB584A39F ^0xFC4CA802
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

void func_615(int iParam0) // Position - 0x1A76C Hash - 0x2EDDC601 ^0xD5F96979
{
	Hash itemContextByIndex;

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

void func_616(BOOL bParam0) // Position - 0x1A7DA Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_617(BOOL bParam0) // Position - 0x1A814 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_618(BOOL bParam0) // Position - 0x1A84E Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_619(BOOL bParam0) // Position - 0x1A888 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_620(BOOL bParam0) // Position - 0x1A8AB Hash - 0x15EA8A2D ^0x6EE74130
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

void func_621(BOOL bParam0) // Position - 0x1A8ED Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_622(int iParam0) // Position - 0x1A92F Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_476(iParam0, 1) /*3*/];
}

void func_623() // Position - 0x1A957 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_719();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_282(joaat("weapon_revolver_cattleman_john"));
		func_329(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_282(joaat("weapon_melee_knife_john"));
		func_329(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_624(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x1A9CF Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_406(false);
	*panParam1 = { func_433(hParam0, func_569(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_625(Hash hParam0) // Position - 0x1AA14 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_626(int iParam0, int iParam1) // Position - 0x1AA2A Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

eStackSize func_627() // Position - 0x1AA40 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_628(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1AA4C Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_720(*uParam0);
	i = func_721(*uParam0);
	num2 = func_722(*uParam0);
	j = func_723(*uParam0);
	k = func_724(*uParam0);
	l = func_725(*uParam0);

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

	for (m = func_726(i, num); num2 > m; m = func_726(i, num))
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

	func_727(uParam0, l, k, j, num2, i, num);
	return;
}

int func_629(Hash hParam0) // Position - 0x1ABD4 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_399(hParam0, true, false) };
	return func_475(unk.f_4);
}

int func_630(Hash hParam0) // Position - 0x1ABF0 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_137(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_137(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_137(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_137(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_137(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_137(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

int func_631(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1AD41 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_476(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_480(524288))
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

BOOL func_632(Hash hParam0) // Position - 0x1ADAC Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

Hash func_633(int iParam0) // Position - 0x1ADEF Hash - 0xB8EC44B7 ^0xD4FF48D5
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

int func_634(Hash hParam0) // Position - 0x1AF6C Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_728(hParam0, -1);
}

BOOL func_635(int iParam0, BOOL bParam1) // Position - 0x1AF7B Hash - 0x10DE2364 ^0x10DE2364
{
	return func_729(func_627(), iParam0, bParam1);
}

BOOL func_636(Hash hParam0) // Position - 0x1AF8F Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_637() // Position - 0x1AF9F Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_176(-939420910);
	func_176(-1187950766);
	func_176(356365161);
	func_176(753127042);
	func_176(-2038424081);
	func_176(1884271742);
	func_176(459290420);
	return;
}

void func_638() // Position - 0x1AFE6 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_176(704802028);
	func_176(588987611);
	func_176(2008888900);
	func_176(1649996811);
	func_176(227918160);
	func_176(168171957);
	func_176(1193080109);
	func_176(-491981251);
	func_176(-639037538);
	func_176(-618620429);
	return;
}

BOOL func_639(Hash hParam0) // Position - 0x1B048 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_640(Hash hParam0) // Position - 0x1B058 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_641(int iParam0) // Position - 0x1B09D Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_642(Hash hParam0) // Position - 0x1B0B8 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_643(int iParam0, int iParam1) // Position - 0x1B0C8 Hash - 0xE1D12727 ^0xA46110B3
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

void func_644() // Position - 0x1B317 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_645(int iParam0) // Position - 0x1B35E Hash - 0x65A082AE ^0x65A082AE
{
	func_652(iParam0, 8, 6);
	return;
}

void func_646(int iParam0) // Position - 0x1B36F Hash - 0x20214C72 ^0x20214C72
{
	func_730(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_647(int iParam0, int iParam1) // Position - 0x1B384 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_731(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_648(Hash hParam0, int iParam1, int iParam2) // Position - 0x1B39B Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_649(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1B3AE Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_279(hParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_732(iParam2, 65536) && hParam0->f_1[num2 /*3*/] == -452402570)
	{
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_647(num2, num3);
	}

	if (func_501(-1586649372) && func_732(iParam2, 524288))
	{
		num2 = 33;
		hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		hParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_647(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_733(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_733(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (hParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				hParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_647(num2, num3);
			}
		
			if (hParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_647(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_647(num2, num3);
			}
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_632(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_137(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_647(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_647(num2, num3);
				}
			
				num2 = 38;
			
				if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_647(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_279(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_647(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_632(hParam1) && hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_279(hParam0->f_1[num2 /*3*/]))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_647(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_733(hParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_733(hParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (hParam0->f_1[num /*3*/].f_1 == joaat("base") || hParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_647(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (hParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					hParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_647(num2, num3);
				}
			}
		
			func_733(hParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (hParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_137(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				hParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				hParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_647(num2, num3);
			}
			break;
	
		case 1868067663:
			func_733(hParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_647(num2, num3);
			}
			break;
	}

	switch (func_279(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_279(hParam0->f_1[num2 /*3*/]) || func_137(hParam0->f_1[num2 /*3*/], 866047851))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_647(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_279(hParam0->f_1[num2 /*3*/]))
			{
				hParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				hParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_647(num2, num3);
			}
			break;
	}

	return;
}

Hash func_650(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x1B9F2 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_734(0);

	if (hParam2 != 0 && func_735(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_736(hParam0, func_643(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_651(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1BA38 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_152() != -1;
	flag2 = func_734(0);

	if (func_480(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_643(num, 1);
		
			if (func_737(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_737(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_631(hParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_738(hParam0);

	if (num3 > 0)
	{
		if (!func_480(524288))
		{
			func_654(524288);
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
				num5 = func_643(num, 1);
			
				if (func_737(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_737(num5, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_631(hParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						hParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						hParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_647(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_657(524288);

	return;
}

void func_652(int iParam0, int iParam1, int iParam2) // Position - 0x1BC55 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_653(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1BC94 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_739(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_152() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_740(2, Global_26796.f_776) || Global_1946054.f_1497 != func_676(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_676(Global_40.f_7729);
				Global_1946054.f_1378 = func_676(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_741(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_742(false, true);

	return;
}

void func_654(BOOL bParam0) // Position - 0x1BDB3 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_655(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1BDC6 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_743(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_744(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_654(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_743(iParam0))
				return;
		
			func_744(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_654(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_484(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_656(var uParam0) // Position - 0x1BFD2 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_657(BOOL bParam0) // Position - 0x1C031 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_658(int iParam0, int iParam1) // Position - 0x1C049 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_659(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1C058 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_743(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_743(20))
				return;
		}
	}

	func_744(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_654(8);
	return;
}

BOOL func_660() // Position - 0x1C15C Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_661(int iParam0) // Position - 0x1C178 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_662() // Position - 0x1C18A Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_745(13);
	num2 = func_746(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_663() // Position - 0x1C1CD Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_664() // Position - 0x1C1E8 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_440())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_665() // Position - 0x1C207 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_666() // Position - 0x1C249 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_667(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1C257 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_747(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_668(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1C2A3 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_747(iParam0, 2, false, false);
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

float func_669(float fParam0, float fParam1, float fParam2) // Position - 0x1C3E9 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_670() // Position - 0x1C410 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_745(12) <= -99f;
}

BOOL func_671() // Position - 0x1C424 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_745(12) >= 99f;
}

int func_672() // Position - 0x1C438 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_279(hash) == -999503751)
			if (func_748() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_673(eStackSize essParam0) // Position - 0x1C489 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_496(essParam0))
		return false;

	if (func_677(essParam0, 4))
		return true;

	return false;
}

BOOL func_674(eStackSize essParam0) // Position - 0x1C4AE Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_496(essParam0))
		return false;

	if (func_677(essParam0, 2))
		return true;

	return false;
}

void func_675(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1C4D3 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_496(essParam0))
		return;

	if (!func_674(essParam0))
	{
		func_679(essParam0, 2);
	
		if (bParam2)
			if (!func_19(0, false, true))
				func_410(true, 4);
	
		if (!func_678() && !bParam1 && !func_19(0, false, true))
			func_119(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_749(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_676(eStackSize essParam0) // Position - 0x1C548 Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (essParam0)
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

BOOL func_677(eStackSize essParam0, BOOL bParam1) // Position - 0x1CA7D Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_496(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_678() // Position - 0x1CAA2 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

void func_679(eStackSize essParam0, BOOL bParam1) // Position - 0x1CAC2 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_496(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

int func_680(int iParam0, BOOL bParam1) // Position - 0x1CAEE Hash - 0x14DDA26B ^0xFFF4A8D0
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

void func_681(Hash hParam0, BOOL bParam1) // Position - 0x1CB91 Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_750(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_278(50);
			else
				func_278(48);
			break;
	
		case 1:
			if (bParam1)
				func_278(51);
			else
				func_278(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_751(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_310();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_310();
			}
			break;
	
		case 3:
			func_278(24);
		
			if (bParam1)
			{
				if (!func_751(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_310();
				}
			}
			break;
	}

	return;
}

void func_682(int iParam0) // Position - 0x1CC70 Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_752(0))
				num = num + 1;
		
			if (func_752(2))
				num = num + 1;
		
			if (func_752(4))
				num = num + 1;
		
			if (!func_753(16))
			{
				if (num == 1)
				{
					func_754();
					func_266(456, true);
					func_755(16);
				}
			}
		
			if (!func_753(32))
			{
				if (num >= 3)
				{
					func_754();
					func_266(456, true);
					func_755(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_752(1))
				num = num + 1;
		
			if (func_752(3))
				num = num + 1;
		
			if (func_752(7))
				num = num + 1;
		
			if (!func_753(1))
			{
				if (num == 1)
				{
					func_756();
					func_266(457, true);
					func_755(1);
				}
			}
		
			if (!func_753(2))
			{
				if (num >= 3)
				{
					func_756();
					func_266(457, true);
					func_755(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_752(5))
				num = num + 1;
		
			if (func_752(6))
				num = num + 1;
		
			if (func_752(8))
				num = num + 1;
		
			if (!func_753(4))
			{
				if (num == 1)
				{
					func_757();
					func_266(455, true);
					func_755(4);
				}
			}
		
			if (!func_753(8))
			{
				if (num >= 3)
				{
					func_757();
					func_266(455, true);
					func_755(8);
				}
			}
			break;
	}

	return;
}

void func_683(var uParam0) // Position - 0x1CE07 Hash - 0x2CE00B72 ^0x958A4727
{
	func_503(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_503(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_503(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_684(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x1CE41 Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_758(anParam0))
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
BOOL func_685(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1CEE2 Hash - 0x92B705D3 ^0xB783F681
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

void func_686(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x1CFD8 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

void func_687(int iParam0) // Position - 0x1D009 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_505(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

BOOL func_688() // Position - 0x1D03C Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_759())
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

void func_689(int iParam0, int iParam1) // Position - 0x1D092 Hash - 0x787BB1AC ^0x11099E69
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

	if (PLAYER::_0x1A6E84F13C952094(player, 200, iParam0))
	{
		for (i = 0; i < *iParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(iParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam0->[i], "bIgnoreDamageChecking"))
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

BOOL func_690(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1D13D Hash - 0x2A9340EF ^0xAD765E32
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

Ped func_691(var uParam0) // Position - 0x1D204 Hash - 0xF229F24F ^0x47381422
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

	if (uParam0->f_6 == 3)
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

void func_692(var uParam0) // Position - 0x1D2AC Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_166(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_167(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

BOOL func_693(int iParam0, int iParam1) // Position - 0x1D311 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_694(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x1D320 Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_695(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1D361 Hash - 0x1D055735 ^0x5D260F19
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

BOOL func_696(Ped pedParam0) // Position - 0x1D3DA Hash - 0xF2F988FE ^0xA63CD631
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

int func_697(Hash hParam0) // Position - 0x1D4C2 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_475(outSlotId);
}

BOOL func_698(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D4E5 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_625(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_283(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_406(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

void func_699(Hash hParam0, int iParam1) // Position - 0x1D531 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_152() == -1)
	{
		if (func_265(43))
		{
			if (func_137(hParam0, 412399755))
			{
				func_460(joaat("exotic_stage_01"));
			
				if (func_461() == 0)
				{
					func_410(false, 10);
					num = func_760(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_463(hParam0) < func_464(hParam0))
							func_273(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_265(44))
		{
			if (func_137(hParam0, 709057512))
			{
				func_460(joaat("exotic_stage_02"));
			
				if (func_461() == 1)
				{
					func_410(false, 10);
					num = func_760(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_463(hParam0) < func_464(hParam0))
							func_273(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_265(45))
		{
			if (func_137(hParam0, -1478961327))
			{
				func_460(joaat("exotic_stage_03"));
			
				if (func_461() == 2)
				{
					func_410(false, 10);
					num = func_760(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_463(hParam0) < func_464(hParam0))
							func_273(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_265(46))
		{
			if (func_137(hParam0, -1238404098))
			{
				func_460(joaat("exotic_stage_04"));
			
				if (func_461() == 3)
				{
					func_410(false, 10);
					num = func_760(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_463(hParam0) < func_464(hParam0))
							func_273(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_265(47))
		{
			if (func_137(hParam0, 1160548794))
			{
				func_460(joaat("exotic_stage_05"));
			
				if (func_461() == 4)
				{
					func_410(false, 10);
					num = func_760(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_463(hParam0) < func_464(hParam0))
							func_273(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

BOOL func_700(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1D815 Hash - 0x866F5694 ^0x9EEAB7E1
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!bParam5 && !PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (PED::IS_PED_A_PLAYER(pedParam0))
		return false;

	if (bParam1)
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedParam0))
			return false;

	if (bParam3 && func_761(pedParam0))
		return false;

	if (bParam4)
		if (PED::IS_PED_ON_MOUNT(pedParam0))
			return false;

	if (bParam2)
		if (func_762(pedParam0, false) != -1)
			return false;

	return true;
}

BOOL func_701(Ped pedParam0, var uParam1) // Position - 0x1D8A1 Hash - 0xDC7D3FF5 ^0xDC7D3FF5
{
	int i;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		if (pedParam0 == uParam1->[i])
			return true;
	}

	return false;
}

struct<4> func_702() // Position - 0x1D8CD Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_703(Hash hParam0, Hash hParam1) // Position - 0x1D8D9 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_704(int iParam0) // Position - 0x1D8F3 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_581(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_705(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_763(num7) - func_763(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_705(float fParam0) // Position - 0x1D95D Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_706(int iParam0) // Position - 0x1D9E9 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_707(int iParam0) // Position - 0x1DA22 Hash - 0xB8632262 ^0xB8632262
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

int func_708(float fParam0, float fParam1) // Position - 0x1DAA1 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_705(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_763(num));
	num3 = BUILTIN::TO_FLOAT(func_763(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_709(int iParam0) // Position - 0x1DB14 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_764(iParam0, &num))
		return func_763(num);

	switch (iParam0)
	{
		case 0:
			if (func_765())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_765())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_765())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_710(int iParam0) // Position - 0x1DBA0 Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_711(int iParam0, int iParam1, int iParam2) // Position - 0x1DBD2 Hash - 0x29688DE6 ^0xC04E9181
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

	num = num + func_766(iParam0);
	str3 = func_768(func_767(num, iParam2));
	str5 = func_769(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_770(iParam0));
	num2 = func_771(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_772(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_423(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_773(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_712(int iParam0, int iParam1) // Position - 0x1DCCA Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_713(int iParam0) // Position - 0x1DCE3 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_714(BOOL bParam0) // Position - 0x1DCF9 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_715(Hash hParam0) // Position - 0x1DD1E Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_716(Hash hParam0) // Position - 0x1DD2E Hash - 0xB8632262 ^0xB8632262
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

int func_717(Hash hParam0) // Position - 0x1DDD5 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_718(Hash hParam0) // Position - 0x1DE0E Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_774(&entity, 0, i, &model) && !func_774(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_775(entity, &model);
		
			if (func_141(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_719() // Position - 0x1DE7A Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_776(Global_35, &unk);
	unk31 = { func_568(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_777(false);
	func_778(7);
	func_779(joaat("kit_bandana"), true, true, false);

	if (func_498() == 1160113249)
	{
		func_779(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_779(-361635024, true, true, true);
	}

	func_780(Global_35, &unk);
	return;
}

int func_720(int iParam0) // Position - 0x1DF03 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_721(int iParam0) // Position - 0x1DF28 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_722(int iParam0) // Position - 0x1DF3B Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_723(int iParam0) // Position - 0x1DF4E Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_724(int iParam0) // Position - 0x1DF61 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_725(int iParam0) // Position - 0x1DF73 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_726(int iParam0, int iParam1) // Position - 0x1DF85 Hash - 0x893AC59E ^0x893AC59E
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

void func_727(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E01F Hash - 0xA65AB937 ^0xA65AB937
{
	func_782(uParam0, iParam6);
	func_783(uParam0, iParam5);
	func_784(uParam0, iParam4);
	func_785(uParam0, iParam3);
	func_786(uParam0, iParam2);
	func_787(uParam0, iParam1);
	return;
}

int func_728(Hash hParam0, int iParam1) // Position - 0x1E057 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_406(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_782(&num, year);
	func_783(&num, month);
	func_784(&num, day);
	func_785(&num, hour);
	func_786(&num, minute);
	func_787(&num, second);
	return num;
}

BOOL func_729(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x1E0BC Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_788(essParam1) || !func_788(essParam0))
			return true;

	return essParam0 > essParam1;
}

void func_730(int iParam0, int iParam1) // Position - 0x1E0E9 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_789(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_789(&iParam0->f_2[i /*2*/], 1))
					func_790(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_731(int iParam0, int iParam1, int iParam2) // Position - 0x1E215 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_791(iParam0, 1))
		func_792(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_732(int iParam0, Hash hParam1) // Position - 0x1E25C Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && hParam1 != false;
}

void func_733(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1E275 Hash - 0xE34B9CEC ^0xAFBB60FB
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

	if (hParam0->f_1[num4 /*3*/].f_1 == 1216705912 || hParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (hParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			hParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			hParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			hParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_647(num2, num);
	
		if (bParam1)
			func_647(num4, num);
	}

	if (hParam0->f_1[num3 /*3*/].f_1 == -1333118809 || hParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		hParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_647(num3, num);
	}

	return;
}

BOOL func_734(int iParam0) // Position - 0x1E361 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_498();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_735(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x1E387 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_736(Hash hParam0, int iParam1, var uParam2) // Position - 0x1E3CB Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_737(int iParam0, int iParam1) // Position - 0x1E3DC Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_738(Hash hParam0) // Position - 0x1E3FA Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (hParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_739(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1E445 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_152() == -1)
		func_793(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_794(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_740(BOOL bParam0, eStackSize essParam1) // Position - 0x1E4BB Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_152() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			return Global_26796.f_26[essParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		return Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_741(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x1E538 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_795(&(Global_1946054.f_1378), essParam0);
	func_796(2, essParam0, 6);

	if (bParam1)
		func_742(false, true);

	return;
}

void func_742(BOOL bParam0, BOOL bParam1) // Position - 0x1E560 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_797(0);

	if (bParam0)
	{
		func_654(8);
		func_654(512);
	}
	else
	{
		func_654(8);
		func_654(16);
	}

	return;
}

BOOL func_743(int iParam0) // Position - 0x1E593 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_744(int iParam0) // Position - 0x1E5A8 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_745(int iParam0) // Position - 0x1E5C8 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_746(float fParam0) // Position - 0x1E5DC Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_747(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1E5F7 Hash - 0xC24B5846 ^0x19556DCA
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

Hash func_748() // Position - 0x1E69F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_749(eStackSize essParam0) // Position - 0x1E6AE Hash - 0xCCDB3731 ^0x9457CE95
{
	Hash hash;

	hash = func_676(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_611(hash);
}

int func_750(Hash hParam0) // Position - 0x1E6D1 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_798(hParam0))
		num = 0;
	else if (func_799(hParam0))
		num = 1;
	else if (func_800(hParam0))
		num = 2;
	else if (func_801(hParam0))
		num = 3;

	return num;
}

BOOL func_751(int iParam0) // Position - 0x1E714 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_222(func_802(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_752(int iParam0) // Position - 0x1E754 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_222(func_803(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_753(int iParam0) // Position - 0x1E793 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_754() // Position - 0x1E7A6 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_152() != -1)
		return;

	func_329(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_584(1);
	func_711(1, num, 0);
	return;
}

void func_755(int iParam0) // Position - 0x1E7D8 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_756() // Position - 0x1E7EF Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_152() != -1)
		return;

	func_329(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_584(2);
	func_711(2, num, 0);
	return;
}

void func_757() // Position - 0x1E821 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_152() != -1)
		return;

	func_329(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_584(0);
	func_711(0, num, 0);
	return;
}

BOOL func_758(Any anParam0) // Position - 0x1E853 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_759() // Position - 0x1E889 Hash - 0x50F36DAB ^0xF55A49EF
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

int func_760(Hash hParam0, int iParam1, int iParam2) // Position - 0x1E8BA Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_463(hash);
	num3 = func_463(hash2);
	num4 = func_463(hash3);

	if (iParam2 != 2)
		num5 = func_463(hash4);

	num6 = func_464(hash);
	num7 = func_464(hash2);
	num8 = func_464(hash3);

	if (iParam2 != 2)
		num9 = func_464(hash4);

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

	if (iParam2 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

BOOL func_761(Ped pedParam0) // Position - 0x1EA33 Hash - 0x66CDA584 ^0x67C9C44C
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (PED::IS_PED_GROUP_MEMBER(pedParam0, func_804(), true))
		return 1;

	return 0;
}

int func_762(Ped pedParam0, BOOL bParam1) // Position - 0x1EA5C Hash - 0x46B9578F ^0x31193522
{
	return func_805(pedParam0, Global_1894899.f_2, bParam1);
}

int func_763(int iParam0) // Position - 0x1EA72 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_764(int iParam0, var uParam1) // Position - 0x1EAE8 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_765() // Position - 0x1EAF1 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_766(int iParam0) // Position - 0x1EAFA Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_406(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_406(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_406(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_767(int iParam0, int iParam1) // Position - 0x1EB5C Hash - 0xD5391B76 ^0x5D8EB3B4
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

const char* func_768(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1EB8E Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_769(int iParam0) // Position - 0x1EBA2 Hash - 0x5238B02A ^0x7459BB5E
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

char* func_770(int iParam0) // Position - 0x1EBDC Hash - 0x5238B02A ^0x789621BF
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

int func_771(int iParam0) // Position - 0x1EC16 Hash - 0x21FAF347 ^0x467E3BE5
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

int func_772(int iParam0) // Position - 0x1EC51 Hash - 0x5163992 ^0x5163992
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

int func_773(int iParam0) // Position - 0x1EC80 Hash - 0x21FAF347 ^0xA8C8F0DA
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

BOOL func_774(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1ECBB Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_806(iParam1) && !func_807(iParam1))
		ped = func_808(iParam1);
	else
		return false;

	func_809(uParam3);
	num = func_810(iParam2);

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

void func_775(Entity eParam0, var uParam1) // Position - 0x1ED5A Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_811(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_812(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_776(Ped pedParam0, Any* panParam1) // Position - 0x1EDA4 Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_249(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_777(BOOL bParam0) // Position - 0x1EE09 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_141(hash, 0))
			func_813(hash, false, bParam0);
	
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

void func_778(int iParam0) // Position - 0x1EEA2 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_152() == -1)
	{
		func_814(352481484);
	
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
	
		if (func_279(hash) != -999503751)
			func_815(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_816(hash, false))
			func_817(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_779(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1F092 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_818(hParam0))
		return;

	hash = func_279(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_819(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_819(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_819(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_819(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_819(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_819(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_820(0))
	{
		func_821(hParam0, true);
	
		if (func_498() == 1160113249)
			func_821(func_820(-2125499975), false);
		else
			func_821(func_820(1160113249), false);
	}

	func_822();

	if (func_823(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_406(false), hParam0, 0);

	func_817(hParam0, bParam3);

	if (bParam2)
		func_742(false, false);

	return;
}

void func_780(Ped pedParam0, var uParam1) // Position - 0x1F1F8 Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_429(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

var func_781(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1F2A1 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_782(var uParam0, int iParam1) // Position - 0x1F2B8 Hash - 0xD05180BA ^0x39589262
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

void func_783(var uParam0, int iParam1) // Position - 0x1F33E Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_784(var uParam0, int iParam1) // Position - 0x1F37A Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_721(*uParam0);
	num2 = func_720(*uParam0);

	if (iParam1 < 1 || iParam1 > func_726(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_785(var uParam0, int iParam1) // Position - 0x1F3CD Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_786(var uParam0, int iParam1) // Position - 0x1F408 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_787(var uParam0, int iParam1) // Position - 0x1F441 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_788(eStackSize essParam0) // Position - 0x1F479 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_725(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_724(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_723(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_720(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_721(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_722(essParam0);

	if (num6 < 1 || num6 > func_726(num5, num4))
		return false;

	return true;
}

BOOL func_789(var uParam0, int iParam1) // Position - 0x1F555 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_790(var uParam0, int iParam1, int iParam2) // Position - 0x1F566 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_791(int iParam0, int iParam1) // Position - 0x1F579 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_792(int iParam0, int iParam1) // Position - 0x1F58A Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_793(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x1F59D Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_794(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x1F5F8 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_795(Hash hParam0, eStackSize essParam1) // Position - 0x1F662 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_152() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *hParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_793(&hParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *hParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_794(&hParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_796(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x1F6FD Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_152() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] || bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] || bParam0;

	return;
}

void func_797(int iParam0) // Position - 0x1F785 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_798(Hash hParam0) // Position - 0x1F796 Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_141(hParam0, 0))
		return false;

	if (func_137(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_799(Hash hParam0) // Position - 0x1F7C0 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_141(hParam0, 0))
		return false;

	if (func_137(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_800(Hash hParam0) // Position - 0x1F7EA Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_141(hParam0, 0))
		return false;

	if (func_137(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_801(Hash hParam0) // Position - 0x1F814 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_141(hParam0, 0))
		return false;

	if (func_137(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_802(int iParam0, int iParam1) // Position - 0x1F83E Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_824(iParam0);
	
		case 1:
			return func_825(iParam0);
	
		case 2:
			return func_826(iParam0);
	
		case 3:
			return func_827(iParam0);
	}

	return 0;
}

Hash func_803(int iParam0, int iParam1) // Position - 0x1F897 Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_828(iParam0);
	
		case 1:
			return func_829(iParam0);
	
		case 2:
			return func_830(iParam0);
	
		case 3:
			return func_831(iParam0);
	
		case 4:
			return func_832(iParam0);
	
		case 5:
			return func_833(iParam0);
	
		case 6:
			return func_834(iParam0);
	
		case 7:
			return func_835(iParam0);
	
		case 8:
			return func_836(iParam0);
	}

	return 0;
}

int func_804() // Position - 0x1F94A Hash - 0xDED80B4D ^0x98F74967
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_805(Ped pedParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x1F95A Hash - 0x7B4C7353 ^0x7B4C7353
{
	var unk;
	var unk2;

	if (essParam1 == -1)
		return -1;

	if (!func_837(essParam1, &unk, &unk2, false, false))
		return -1;

	return func_838(pedParam0, unk, unk2, bParam2);
}

BOOL func_806(int iParam0) // Position - 0x1F98C Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_839(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_807(int iParam0) // Position - 0x1F9C4 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_839(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_806(iParam0))
		return false;

	ped = func_808(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_808(int iParam0) // Position - 0x1FA18 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_839(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_809(var uParam0) // Position - 0x1FA44 Hash - 0x6843C143 ^0xA531F0D1
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

int func_810(int iParam0) // Position - 0x1FAEB Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_811(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1FB23 Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_812(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x1FB98 Hash - 0xF684EE16 ^0xD8F147D7
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

void func_813(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1FBC1 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_279(hParam0))
	{
		case -2061583405:
			flag = func_840(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_840(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_840(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_840(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_840(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_840(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_822();

	if (bParam1)
		func_742(false, false);

	return;
}

void func_814(int iParam0) // Position - 0x1FC8E Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_578(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_580(&unk, &num, &num2, false))
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
	
		func_487(num);
	}

	return;
}

void func_815(var uParam0, Hash hParam1, int iParam2) // Position - 0x1FD58 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_841(iParam2, *uParam0);
	func_842(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_816(Hash hParam0, BOOL bParam1) // Position - 0x1FD8E Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_399(hParam0, false, false) };
	guid = { func_433(hParam0, unk, unk.f_4, false) };

	if (func_577(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_406(false), &guid, bParam1);
	return true;
}

void func_817(Hash hParam0, BOOL bParam1) // Position - 0x1FDDA Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_399(hParam0, false, false) };
	guid = { func_433(hParam0, unk, unk.f_4, false) };

	if (func_577(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_406(false), &guid, bParam1);
	return;
}

BOOL func_818(Hash hParam0) // Position - 0x1FE24 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_152() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_819(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1FE4D Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_843(hash, &unk))
		return 0;

	if (bParam3 && !func_816(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_279(hParam0) != -999503751)
		func_815(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_820(int iParam0) // Position - 0x1FEF5 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_498();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_821(Hash hParam0, BOOL bParam1) // Position - 0x1FF20 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_399(hParam0, false, false) };
	guid = { func_433(hParam0, unk, unk.f_4, false) };

	if (func_577(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_406(false), &guid);
	return 1;
}

void func_822() // Position - 0x1FF6C Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_152() == -1)
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

BOOL func_823(Hash hParam0) // Position - 0x200A3 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_845(func_844(hParam0));
}

Hash func_824(int iParam0) // Position - 0x200B5 Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_825(int iParam0) // Position - 0x20144 Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_826(int iParam0) // Position - 0x201D3 Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_827(int iParam0) // Position - 0x20262 Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_828(int iParam0) // Position - 0x202F1 Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_829(int iParam0) // Position - 0x2033A Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_830(int iParam0) // Position - 0x20383 Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_831(int iParam0) // Position - 0x203CC Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_832(int iParam0) // Position - 0x20415 Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_833(int iParam0) // Position - 0x2045E Hash - 0x51E02475 ^0x25F7B61
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

Hash func_834(int iParam0) // Position - 0x204A7 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_835(int iParam0) // Position - 0x204F0 Hash - 0x51E02475 ^0x50FB5131
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

Hash func_836(int iParam0) // Position - 0x20539 Hash - 0x51E02475 ^0x8656D204
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

BOOL func_837(eStackSize essParam0, var uParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x20582 Hash - 0xCBEA69A ^0xCBEA69A
{
	BOOL flag;

	flag = func_152() != -1;

	switch (essParam0)
	{
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
		
			if (flag)
				*uParam2 = 142;
			break;
	
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 22:
			if (bParam4)
				*uParam1 = 715;
			else
				*uParam1 = 715;
		
			*uParam2 = 723;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 26:
			*uParam1 = 472;
		
			if (bParam3)
				*uParam2 = 500;
			else
				*uParam2 = 502;
		
			if (flag)
				*uParam2 = 472;
			break;
	
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
		
			if (flag)
				*uParam2 = 509;
			break;
	
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
		
			if (flag)
				*uParam2 = 380;
			break;
	
		case 64:
			*uParam1 = 736;
			*uParam2 = &func_5;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
		
			if (flag)
				*uParam2 = 566;
			break;
	
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 69:
			*uParam1 = 589;
		
			if (bParam3)
				*uParam2 = 598;
			else
				*uParam2 = 612;
		
			if (flag)
				*uParam2 = 590;
			break;
	
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 76:
			*uParam1 = 0;
		
			if (bParam3)
				*uParam2 = 47;
			else
				*uParam2 = 63;
		
			if (flag)
				*uParam2 = 5;
			break;
	
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
	
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
		
			if (flag)
				*uParam2 = 384;
			break;
	
		case 82:
			*uParam1 = 659;
		
			if (bParam3)
				*uParam2 = 673;
			else
				*uParam2 = 690;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 86:
			*uParam1 = &func_6;
			*uParam2 = 772;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
		
			if (flag)
				*uParam2 = 443;
			break;
	
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 105:
			*uParam1 = 69;
		
			if (bParam3)
				*uParam2 = 127;
			else
				*uParam2 = 136;
		
			if (flag)
				*uParam2 = 72;
			break;
	
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
		
			if (flag)
				*uParam2 = 375;
			break;
	
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		case MICRO:
			*uParam1 = 834;
			*uParam2 = 857;
		
			if (flag)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
	
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}

	if (*uParam1 == -1 || *uParam2 == -1)
		return false;

	return true;
}

int func_838(Ped pedParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x20C42 Hash - 0x32945A99 ^0xFCA9036B
{
	PersChar perscharIndexFromPedIndex;
	int i;
	int num;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) && !bParam3)
		return -1;

	perscharIndexFromPedIndex = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedParam0);

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(perscharIndexFromPedIndex))
		return -1;

	i = uParam1;

	for (i = uParam1; i <= uParam2; i = i + 1)
	{
		num = i;
	
		if (func_68(num) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(num)))
			if (func_21(num) == perscharIndexFromPedIndex)
				return num;
	}

	return -1;
}

int func_839(int iParam0) // Position - 0x20CBC Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_840(Hash hParam0, int iParam1) // Position - 0x20CD5 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_843(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_279(hParam0) != -999503751)
			func_846(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_279(hParam0) != -999503751)
		func_846(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_816(hParam0, true);
	return 1;
}

void func_841(int iParam0, int iParam1) // Position - 0x20DBB Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_842(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x20DD4 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_847(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_476(func_629(hParam1), 1);
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
		func_848(uParam0);

	return;
}

BOOL func_843(Hash hParam0, var uParam1) // Position - 0x20E30 Hash - 0x4A27386E ^0xBC93C855
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

int func_844(Hash hParam0) // Position - 0x20E70 Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_845(int iParam0) // Position - 0x20EC0 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_846(int iParam0, int iParam1, int iParam2) // Position - 0x20ED8 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_849(iParam1);
	func_850(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_851(&(iParam0->f_26), num2);
	
		if (func_852(iParam0->f_26, &num))
			func_853(num, num2);
	}

	return;
}

void func_847(var uParam0) // Position - 0x20F21 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_854(&(uParam0->f_3));
	return;
}

void func_848(var uParam0) // Position - 0x20F3F Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_855(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_849(int iParam0) // Position - 0x20F60 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_850(int iParam0, int iParam1) // Position - 0x20F77 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_851(var uParam0, int iParam1) // Position - 0x20FBF Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_847(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_852(int iParam0, var uParam1) // Position - 0x20FF0 Hash - 0xE231A73F ^0x924E070C
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

void func_853(int iParam0, int iParam1) // Position - 0x21034 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_854(var uParam0) // Position - 0x2104D Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_855(var uParam0, Any anParam1, int iParam2) // Position - 0x21079 Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_856(func_498());

	if (*uParam0)
		func_854(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_152() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_856(int iParam0) // Position - 0x210B0 Hash - 0xB4860741 ^0xB4860741
{
	if (func_152() == -1)
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

