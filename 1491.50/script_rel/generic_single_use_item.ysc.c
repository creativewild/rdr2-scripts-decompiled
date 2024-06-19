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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x6C0E197D ^0x1FC70058
{
	int num;
	int num2;
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		SCRIPTS::TERMINATE_THIS_THREAD();

	num.f_1.f_2 = 1086324736;
	num.f_1.f_11.f_1 = 20;
	num.f_1.f_33 = 20;
	num.f_1 = uScriptParam_0.f_2;
	num.f_1.f_2 = 1f;
	num2 = func_1(num.f_1, -949239683);
	flag = false;

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (!uScriptParam_0.f_3)
			func_2(&(num.f_1));
	
		switch (num)
		{
			case 0:
				if (func_3(num.f_1, 0))
				{
					flag = true;
					func_4(&(num.f_1));
				}
			
				if (uScriptParam_0.f_3)
				{
					num.f_1.f_2 = 1f;
					func_5(&num, 2);
				}
				else
				{
					func_5(&num, 1);
				}
				break;
		
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					num.f_1.f_1 = num.f_1.f_1 + 1;
					func_6(&(num.f_1), (float)num.f_1.f_1 >= num.f_1.f_2);
					func_7(num.f_1, false);
				
					if (num2 != 845883585)
					{
					}
					else
					{
						if (!func_8())
							func_11(func_10(func_9()), Global_35, -1, true);
					
						func_12(false);
						func_13();
					}
				
					if (num.f_1 == joaat("consumable_hair_tonic"))
						func_14();
				}
			
				if ((float)num.f_1.f_1 >= num.f_1.f_2)
					func_5(&num, 3);
				break;
		
			case 2:
				func_15(&num, num2, flag);
				func_5(&num, 3);
				break;
		
			case 3:
				if (uScriptParam_0.f_3)
					SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	if (num <= 1)
		func_15(&num, num2, flag);

	return;
}

int func_1(Hash hParam0, int iParam1) // Position - 0x1A3 Hash - 0x7A1C2599 ^0xFF9B5634
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

int func_2(var uParam0) // Position - 0x1ED Hash - 0xAD6E5C1 ^0xDD044968
{
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1234314267))
		{
			func_16(uParam0);
			return 1;
		}
	}

	if (!uParam0->f_177)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1895155945))
			uParam0->f_177 = 1;

	return 0;
}

BOOL func_3(Hash hParam0, int iParam1) // Position - 0x24E Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_4(var uParam0) // Position - 0x268 Hash - 0x9FDF9381 ^0x3B8D525B
{
	int i;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[i], &uParam0->f_33[i /*7*/]);
	}

	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x2A8 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_6(var uParam0, BOOL bParam1) // Position - 0x2B5 Hash - 0xCD22ACC2 ^0x7500490B
{
	int i;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	if (func_17(*uParam0, 1573112293) || func_17(*uParam0, 672467738) || func_17(*uParam0, -550842268))
		flag = true;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1935496.f_26 = 0;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		if (-943921969 == uParam0->f_33[i /*7*/].f_1)
		{
			num = func_18(0, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_19((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, true);
			func_20(0, 7000);
			flag3 = true;
		}
		else if (-1104847406 == uParam0->f_33[i /*7*/].f_1)
		{
			num2 = func_18(2, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_21((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_20(2, 7000);
			flag2 = true;
		}
		else if (381158954 == uParam0->f_33[i /*7*/].f_1)
		{
			num3 = func_18(1, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_22((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_20(1, 7000);
		}
		else if (joaat("EFFECT_HEALTH_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num4 = func_23((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_24(&(uParam0->f_9), &(uParam0->f_10), num4))
			{
				func_25(num4, true, flag, true);
				func_20(0, 7000);
			}
		
			flag3 = true;
		}
		else if (joaat("EFFECT_DEADEYE_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num5 = func_23((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_24(&(uParam0->f_9), &(uParam0->f_10), num5))
			{
				func_26(num5, true, flag, true);
				func_20(2, 7000);
				flag2 = true;
			}
		}
		else if (joaat("EFFECT_STAMINA_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num6 = func_23((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_24(&(uParam0->f_9), &(uParam0->f_10), num6))
			{
				func_27(num6, true, flag, true);
				func_20(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[i /*7*/].f_1)
		{
			func_28(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_2) / uParam0->f_2, 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (joaat("Effect_Health_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_29(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_30(19, num7);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_29(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_30(20, num7);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_29(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_30(18, num7);
			}
			else if (1869697234 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_29(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_30(0, num7);
				flag3 = true;
			}
			else if (1342237631 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_29(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_30(2, num7);
				flag2 = true;
			}
			else if (-1240225157 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_29(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_30(1, num7);
			}
		}
	}

	if (flag3)
		if (num4 > 0f || num > 0f)
			flag4 = true;

	func_31(*uParam0, bParam1, flag2, flag4);
	func_16(uParam0);
	uParam0->f_3 = uParam0->f_3 + num;
	uParam0->f_4 = uParam0->f_4 + num2;
	uParam0->f_5 = uParam0->f_5 + num3;
	uParam0->f_6 = uParam0->f_6 + num4;
	uParam0->f_7 = uParam0->f_7 + num5;
	uParam0->f_8 = uParam0->f_8 + num6;
	return;
}

void func_7(int iParam0, BOOL bParam1) // Position - 0x71C Hash - 0xA08AEF0B ^0x94FD53ED
{
	float scent;
	var unk;
	var unk11;

	switch (iParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_prairie_poppy"):
			if (bParam1 || !func_39() || !PED::IS_PED_ON_FOOT(Global_35))
				return;
		
			if (iParam0 != joaat("consumable_herb_prairie_poppy") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				unk11 = { unk };
				TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_puking_item", 32);
				unk11.f_14 = 512;
				func_40(unk11, 0);
			}
			break;
	
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_ginseng"):
		case joaat("consumable_herb_vanilla_flower"):
			func_38(false);
			break;
	
		case joaat("consumable_valerian_root"):
			if (func_32(2) >= 7)
				func_34(243, func_33(joaat("consumable_valerian_root")), true);
		
			func_35(50);
			break;
	
		case joaat("consumable_aged_pirate_rum"):
			if (func_32(1) >= 7)
				func_34(245, func_33(joaat("consumable_aged_pirate_rum")), true);
		
			func_35(30);
			break;
	
		case joaat("consumable_ginseng_elixier"):
			if (func_32(0) >= 7)
				func_34(244, func_33(joaat("consumable_ginseng_elixier")), true);
		
			func_35(19);
			break;
	
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			if (iParam0 == joaat("CONSUMABLE_COVER_SCENT"))
			{
				func_36(0, 60000);
				scent = 0.25f;
			}
			else if (iParam0 == joaat("CONSUMABLE_COVER_SCENT_USED"))
			{
				func_36(0, 30000);
				scent = 0.5f;
			}
		
			func_37(580, true);
			PED::_SET_PED_SCENT(Global_35, scent);
			break;
	
		case joaat("consumable_potent_antidote"):
		case joaat("consumable_antidote"):
			if (iParam0 == joaat("consumable_antidote"))
				MISC::SET_BIT(&Global_1051038, 0);
			else if (iParam0 == joaat("consumable_potent_antidote"))
				MISC::SET_BIT(&Global_1051038, 1);
			break;
	}

	return;
}

BOOL func_8() // Position - 0x8CE Hash - 0xB6A628E2 ^0xC1A3BB0C
{
	return 1 == Global_40.f_7748.f_3;
}

Hash func_9() // Position - 0x8E0 Hash - 0xB7A5BE74 ^0xFCB5AE63
{
	return Global_1946054.f_1497.f_1[1 /*3*/];
}

Hash func_10(Hash hParam0) // Position - 0x8F4 Hash - 0xB8EC44B7 ^0x95F0B41D
{
	switch (hParam0)
	{
		case -2120294484:
			return 1471627791;
	
		case -2091943191:
			return -193909113;
	
		case joaat("CLOTHING_ITEM_HAIR_SWEPT_BACK"):
			return -1051664629;
	
		case -1392593303:
			return -1511041621;
	
		case -1189021969:
			return 602337354;
	
		case -1140711191:
			return 963009459;
	
		case -814448122:
			return 1012091683;
	
		case -674783297:
			return -2017785881;
	
		case -499492817:
			return -1900633994;
	
		case 279124309:
			return -827216318;
	
		case 530132198:
			return -245303732;
	
		case 862555979:
			return -1471756535;
	
		case 933586678:
			return 1334801974;
	
		case 1156231582:
			return -986108061;
	
		case 1165676701:
			return -929316746;
	
		case 1279519416:
			return 282876023;
	
		case 1380556716:
			return -1147723761;
	
		case 1612093252:
			return -736147717;
	
		default:
		
	}

	return 0;
}

int func_11(Hash hParam0, Ped pedParam1, int iParam2, BOOL bParam3) // Position - 0xA01 Hash - 0xD37ABB05 ^0xAE0735F1
{
	if (!func_41(hParam0, 0, 1, true, true))
		return 0;

	if (iParam2 == -1)
		iParam2 = Global_40.f_7748.f_1;

	func_42(iParam2);

	if (bParam3)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_43(1, 64, 0, 0, false);
		else
			func_43(1, 64, 1, pedParam1, false);

	func_44(1);
	return 1;
}

void func_12(BOOL bParam0) // Position - 0xA5D Hash - 0xBEE690FE ^0x67E19AB1
{
	Hash hash;

	Global_40.f_7748.f_3 = 1;
	hash = func_45();
	func_47(&hash, 0, 0, 0, bParam0 ? 5 : 2, 0, 0, false);

	if (func_48(hash, Global_40.f_7748, true))
		Global_40.f_7748 = hash;

	return;
}

void func_13() // Position - 0xAA0 Hash - 0x5606FCEF ^0x2320B9EB
{
	int num;
	Hash hash;

	num = 1;
	hash = Global_1946054.f_1378.f_1[num /*3*/];

	if (!func_8() && func_49(hash))
		Global_1946054.f_1378.f_1[num /*3*/] = func_50(hash);

	func_44(0);
	Global_1946054.f_1497.f_1[num /*3*/] = { Global_1946054.f_1378.f_1[num /*3*/] };
	func_51();
	Global_40.f_7748.f_2 = func_9();
	func_52(Global_1946054.f_2656, false);
	func_53();
	return;
}

void func_14() // Position - 0xB23 Hash - 0xEA637230 ^0x8F343CA3
{
	Hash hash;
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_40.f_7731[i /*5*/] >= 10)
		{
		}
		else if (Global_40.f_7731[i /*5*/].f_2 == 3)
		{
		}
		else
		{
			if (Global_40.f_7731[i /*5*/].f_2 < 1)
				func_54(i, 1);
			else if (Global_40.f_7731[i /*5*/].f_2 < 2)
				func_54(i, 2);
			else if (Global_40.f_7731[i /*5*/].f_2 < 3)
				func_54(i, 3);
		
			hash = Global_40.f_7731[i /*5*/].f_3;
			flag = func_55(hash, true);
			func_56(hash, func_45(), &num4, &num3, &num2, &num, &unk2, &unk);
		
			if (Global_40.f_7731[i /*5*/] >= 7)
			{
				Global_40.f_7731[i /*5*/].f_4 = 2;
				func_56(hash, func_45(), &num4, &num3, &num2, &num, &unk2, &unk);
			}
			else
			{
				if (!flag)
				{
					func_57(&num, &num2, &num3, &num4, flag, 2);
					hash = func_45();
					func_47(&hash, num4, num3, num2, num, 0, 0, false);
					Global_40.f_7731[i /*5*/].f_3 = hash;
				}
			
				Global_40.f_7731[i /*5*/].f_4 = 2;
			}
		}
	}

	if (Global_40.f_7748.f_1 >= 9)
		return;

	if (func_58(8))
		return;

	if (!func_58(2))
		func_59(2);
	else if (!func_58(4))
		func_59(4);
	else if (!func_58(8))
		func_59(8);

	hash = Global_40.f_7748.f_5;
	flag = func_55(hash, true);
	func_56(hash, func_45(), &num4, &num3, &num2, &num, &unk2, &unk);

	if (Global_40.f_7748.f_1 >= 9)
	{
		Global_40.f_7748.f_6 = 2;
		func_56(hash, func_45(), &num4, &num3, &num2, &num, &unk2, &unk);
	}
	else
	{
		if (!flag)
		{
			func_57(&num, &num2, &num3, &num4, flag, 2);
			hash = func_45();
			func_47(&hash, num4, num3, num2, num, 0, 0, false);
			Global_40.f_7748.f_5 = hash;
		}
	
		Global_40.f_7748.f_6 = 2;
	}

	return;
}

void func_15(var uParam0, int iParam1, BOOL bParam2) // Position - 0xD40 Hash - 0xFC0211ED ^0x20001539
{
	if (iParam1 == 845883585)
	{
		func_12(false);
	
		if (!func_8())
		{
			func_11(func_10(func_9()), Global_35, -1, true);
			func_13();
		}
	}

	if (uParam0->f_1 == joaat("consumable_hair_tonic"))
		func_14();

	if (func_3(uParam0->f_1, 0) && !bParam2)
		func_4(&(uParam0->f_1));

	func_6(&(uParam0->f_1), true);
	func_7(uParam0->f_1, true);
	return;
}

void func_16(var uParam0) // Position - 0xDB3 Hash - 0xA2F56449 ^0xA1F38980
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_174, 2, false);
			uParam0->f_176 = 1;
		}
	}

	return;
}

BOOL func_17(Hash hParam0, Hash hParam1) // Position - 0xDDD Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

float func_18(int iParam0, float fParam1) // Position - 0xE0E Hash - 0x17EDCAD1 ^0xD87169C2
{
	float pedStamina;
	float pedMaxStamina;
	float num;
	float num2;

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false));
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_35);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_35);
			break;
	
		case 2:
			pedStamina = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			pedMaxStamina = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}

	num2 = fParam1 + pedStamina;

	if (num2 > pedMaxStamina)
		num = pedMaxStamina - pedStamina;
	else
		num = num2 - pedStamina;

	return num / 2f;
}

void func_19(float fParam0, BOOL bParam1) // Position - 0xE9F Hash - 0x6515398 ^0xDD905ACD
{
	float amount;
	int healthAmount;

	amount = 50f * fParam0;
	healthAmount = BUILTIN::ROUND(amount + (float)ENTITY::GET_ENTITY_HEALTH(Global_35));

	if (bParam1 && amount < 0f)
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, amount, 0, 0);
	else if (fParam0 <= 0f || healthAmount > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	else
		ENTITY::SET_ENTITY_HEALTH(Global_35, healthAmount, 0);

	return;
}

void func_20(int iParam0, int iParam1) // Position - 0xF14 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_21(float fParam0) // Position - 0xF2D Hash - 0xE6CD767E ^0x10A2850D
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), fParam0 * 14f, 0, 0, 0);
	return;
}

void func_22(float fParam0) // Position - 0xF48 Hash - 0x54A9293A ^0x6B1712EF
{
	int num;

	if (func_60() != -1)
		return;

	if (fParam0 == -1f)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		num = 8;
		PED::_CHANGE_PED_STAMINA(Global_35, fParam0 * (float)num);
	}

	return;
}

float func_23(float fParam0, float fParam1) // Position - 0xF83 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_24(var uParam0, var uParam1, float fParam2) // Position - 0xFB1 Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_60() != -1)
		return true;

	if (!func_61(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_62(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_37(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_62(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_25(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x109B Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_60() == false)
	{
		func_63(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_64(0);

	if (bParam1)
		func_65(num);

	if (num >= 100f - 1f)
		func_66();

	if (bParam2)
		fParam0 = func_67(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_69(0, func_68(fParam0, -100f, 100f), bParam1);
	return;
}

void func_26(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x110D Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_60() == false)
	{
		func_63(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_64(2);

	if (bParam1)
		func_65(num);

	if (bParam2)
		fParam0 = func_67(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_69(2, func_68(fParam0, -100f, 100f), bParam1);
	return;
}

void func_27(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x116E Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_60() == false)
	{
		func_63(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_64(1);

	if (bParam1)
		func_65(num);

	if (bParam2)
		fParam0 = func_67(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_69(1, func_68(fParam0, -100f, 100f), bParam1);
	return;
}

void func_28(float fParam0, BOOL bParam1) // Position - 0x11CF Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_70(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_71(17))
		return;

	if (func_72())
	{
		num2 = func_73(num);
		num = num + fParam0;
		num3 = func_73(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_45();
			func_47(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_74(&num4, &num5);
		func_75(13, func_68(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_37(94, false);
	}

	return;
}

float func_29(float fParam0, int iParam1) // Position - 0x1280 Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_30(int iParam0, float fParam1) // Position - 0x12D2 Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_76(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_77(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_78(-1);
			func_38(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_77(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_79(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_77(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_80(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_81(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_81(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_81(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_31(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1465 Hash - 0xE2FD0FF5 ^0x668B624E
{
	if (!bParam1)
		return;

	if (bParam3 || func_17(hParam0, -537818634))
		func_83(func_82(joaat("medicine_items_used")), 1);

	if (func_17(hParam0, -1457797660))
		func_83(func_82(joaat("provision_items_used")), 1);

	if (func_17(hParam0, 1573112293))
		func_85(func_84(&hParam0), 1);

	if (func_17(hParam0, 1939071949))
		func_83(func_86(joaat("USED"), joaat("tonic")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_83(func_86(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
			func_83(func_86(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_83(func_86(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_83(func_86(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_83(func_86(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_83(func_86(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_83(func_86(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_83(func_86(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			func_83(func_86(joaat("USED"), joaat("cover_scent")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_83(func_86(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_60() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_83(func_86(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam2)
		func_83(func_82(joaat("DEADEYE_ITEMS_USED")), 1);

	return;
}

int func_32(int iParam0) // Position - 0x1692 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_87(Global_40.f_11095.f_11[iParam0]);
}

eBlipSprite func_33(Hash hParam0) // Position - 0x16AA Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_3(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_34(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x16C3 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_88(iParam0, &num, &num2);

	if (!func_89(iParam0, num, num2, bParam2))
		return;

	if (!func_90(iParam0, 1024))
		return;

	func_91(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_35(int iParam0) // Position - 0x1723 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_60() != -1)
		return;

	num = func_92(iParam0);
	value = func_93(iParam0);

	if (Global_1347477.f_117 || !func_71(31) || !func_94(num))
		return;

	if (value <= 0f)
		return;

	if (func_32(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_95(num, Global_40.f_11095.f_11[num] + value, false);
	func_98(MISC::VAR_STRING(6, func_96(iParam0), value), "itemtype_textures", func_97(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_36(int iParam0, int iParam1) // Position - 0x181F Hash - 0xA473403D ^0x12FD9A15
{
	Global_1911859[iParam0 /*3*/] = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
	Global_1911859[iParam0 /*3*/].f_1 = iParam1;
	Global_1911859[iParam0 /*3*/].f_2 = 1;
	return;
}

void func_37(int iParam0, BOOL bParam1) // Position - 0x184A Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_88(iParam0, &num, &num2);

	if (!func_89(iParam0, num, num2, bParam1))
		return;

	func_91(num, num2);
	return;
}

void func_38(BOOL bParam0) // Position - 0x1877 Hash - 0x9114E741 ^0x8984E174
{
	if (func_60() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_37(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_37(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_99(1, bParam0, true);
	func_100();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

BOOL func_39() // Position - 0x18E5 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_101(1);
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x18F2 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1934603.f_161 >= 10)
		return;

	if (!func_102(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_103(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[i /*16*/].f_10)))
		{
			Global_1934603[i /*16*/] = { uParam0 };
			Global_1934603.f_161 = Global_1934603.f_161 + 1;
			func_104(iParam16);
			return;
		}
	}

	return;
}

BOOL func_41(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x198E Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_105();

	if (iParam2 == 39)
	{
		unk = { func_106(hParam0, true, false) };
		iParam2 = func_108(func_107(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_17(hParam0, 866047851) && func_109(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_110(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_112(func_111(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_113(iParam2);
	func_114(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_115(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_115(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_116(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_117(hParam0, iParam2, hParam1, func_60() != -1);

	if (bParam4)
		func_118(&(Global_1946054.f_1378), true, 3);
	else
		func_118(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_119(func_111(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_42(int iParam0) // Position - 0x1B9B Hash - 0x20214C72 ^0x20214C72
{
	func_120(&(Global_1946054.f_1378), iParam0);
	return;
}

void func_43(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x1BB0 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_121(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_122(num);
	return;
}

void func_44(int iParam0) // Position - 0x1BE2 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

Hash func_45() // Position - 0x1BF3 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

var func_46(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1BFF Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_47(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1C16 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_123(*hParam0);
	i = func_124(*hParam0);
	num2 = func_125(*hParam0);
	j = func_126(*hParam0);
	k = func_127(*hParam0);
	l = func_128(*hParam0);

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

	for (m = func_129(i, num); num2 > m; m = func_129(i, num))
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

	func_130(hParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_48(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x1D9E Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_131(hParam1) || !func_131(hParam0))
			return true;

	return hParam0 > hParam1;
}

BOOL func_49(Hash hParam0) // Position - 0x1DCB Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -2017785881:
		case -1900633994:
		case -1511041621:
		case -1471756535:
		case -1147723761:
		case -1051664629:
		case -986108061:
		case -929316746:
		case -827216318:
		case -736147717:
		case -245303732:
		case -193909113:
		case 282876023:
		case 602337354:
		case 963009459:
		case 1012091683:
		case 1334801974:
		case 1471627791:
			return true;
	
		default:
		
	}

	return false;
}

Hash func_50(Hash hParam0) // Position - 0x1E4C Hash - 0xB8EC44B7 ^0x5F6A1FBE
{
	switch (hParam0)
	{
		case -2017785881:
			return -674783297;
	
		case -1900633994:
			return -499492817;
	
		case -1511041621:
			return -1392593303;
	
		case -1471756535:
			return 862555979;
	
		case -1147723761:
			return 1380556716;
	
		case -1051664629:
			return joaat("CLOTHING_ITEM_HAIR_SWEPT_BACK");
	
		case -986108061:
			return 1156231582;
	
		case -929316746:
			return 1165676701;
	
		case -827216318:
			return 279124309;
	
		case -736147717:
			return 1612093252;
	
		case -245303732:
			return 530132198;
	
		case -193909113:
			return -2091943191;
	
		case 282876023:
			return 1279519416;
	
		case 602337354:
			return -1189021969;
	
		case 963009459:
			return -1140711191;
	
		case 1012091683:
			return -814448122;
	
		case 1334801974:
			return 933586678;
	
		case 1471627791:
			return -2120294484;
	
		default:
		
	}

	return 0;
}

void func_51() // Position - 0x1F59 Hash - 0x75C135FB ^0xB11C51ED
{
	int num;
	int i;

	num = 1;

	if (func_60() == -1)
	{
		for (i = 0; i < 5; i = i + 1)
		{
			func_132(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
		}
	
		return;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		func_133(&Global_1946054.f_1497.f_1[num /*3*/], num, i);
	}

	return;
}

void func_52(int iParam0, BOOL bParam1) // Position - 0x1FBD Hash - 0x8F59A605 ^0x3B6FDB4
{
	int num;
	int num2;
	BOOL flag;

	if (!func_134(iParam0))
		return;

	if (Global_40.f_7748.f_1 == iParam0)
		return;

	Global_40.f_7748.f_1 = iParam0;

	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_45();
		flag = Global_40.f_7748.f_1 < 9 && func_135();
		func_136(Global_40.f_7748.f_1, &num, &num2, flag);
		func_47(&(Global_40.f_7748.f_5), 0, 0, num2, num, 0, 0, false);
	}

	return;
}

void func_53() // Position - 0x203B Hash - 0xA9BD7150 ^0x3ADBD7A5
{
	Hash value;

	if (func_137() <= 3)
	{
		value = func_45();
		func_47(&value, 0, 0, 0, 2, 0, 0, false);
		DECORATOR::DECOR_SET_INT(Global_35, "hairShort", value);
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
			DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
	}

	return;
}

void func_54(int iParam0, int iParam1) // Position - 0x209E Hash - 0xA0246B1D ^0xF23F758E
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
	return;
}

BOOL func_55(Hash hParam0, BOOL bParam1) // Position - 0x20B4 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_48(func_45(), hParam0, bParam1);
}

void func_56(Hash hParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x20C8 Hash - 0x38DA000F ^0x38DA000F
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_48(hParam0, hParam1, true))
	{
		num = func_124(hParam1);
		num2 = func_123(hParam0);
		num3 = func_123(hParam0) - func_123(hParam1);
		num4 = func_124(hParam0) - func_124(hParam1);
		num5 = func_125(hParam0) - func_125(hParam1);
		num6 = func_126(hParam0) - func_126(hParam1);
		num7 = func_127(hParam0) - func_127(hParam1);
		num8 = func_128(hParam0) - func_128(hParam1);
	}
	else
	{
		num = func_124(hParam0);
		num2 = func_123(hParam1);
		num3 = func_123(hParam1) - func_123(hParam0);
		num4 = func_124(hParam1) - func_124(hParam0);
		num5 = func_125(hParam1) - func_125(hParam0);
		num6 = func_126(hParam1) - func_126(hParam0);
		num7 = func_127(hParam1) - func_127(hParam0);
		num8 = func_128(hParam1) - func_128(hParam0);
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
	
		num5 = num5 + func_129(num, num2);
		num4 = num4 - 1;
		num = BUILTIN::ROUND(func_138(BUILTIN::TO_FLOAT(num + 1), 0f, 12f));
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

void func_57(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x22CA Hash - 0x6C064C76 ^0x6CA0C692
{
	int num;
	int num2;
	int num3;
	float num4;

	num4 = BUILTIN::TO_FLOAT(iParam5);
	num = func_139(BUILTIN::TO_FLOAT(*uParam0), num4);
	num2 = func_140(BUILTIN::TO_FLOAT(*uParam1), num4);
	num3 = func_141(BUILTIN::TO_FLOAT(*uParam2), num4);
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

BOOL func_58(int iParam0) // Position - 0x236B Hash - 0x9921E361 ^0xB910E238
{
	return Global_40.f_7748.f_4 && iParam0 != false;
}

void func_59(int iParam0) // Position - 0x2380 Hash - 0x25D46568 ^0xB710C32B
{
	Global_40.f_7748.f_4 = Global_40.f_7748.f_4 || iParam0;
	return;
}

BOOL func_60() // Position - 0x239B Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_61(int iParam0) // Position - 0x23A9 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_142())
		return false;

	return func_143(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_62(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x23CB Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_144(pedParam0, &str);
}

void func_63(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2412 Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_67(iParam0, fParam1, true);

	func_146(iParam0, func_145(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_64(int iParam0) // Position - 0x2441 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_65(float fParam0) // Position - 0x2453 Hash - 0xF410778E ^0xEC95E122
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_66() // Position - 0x2483 Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_67(int iParam0, float fParam1, BOOL bParam2) // Position - 0x24B0 Hash - 0xFB55A421 ^0xFB55A421
{
	Hash hash;
	int num;

	hash = func_45();
	func_147(&hash, 0, 0, 0, 1, 0, 0);
	num = func_148(iParam0, 2);

	if (func_48(hash, func_149(iParam0, 2), true))
	{
		func_150(iParam0, 0, 2);
		num = 0;
	}

	if (num >= 2)
	{
		func_37(88, bParam2);
		return 0f;
	}

	func_151(iParam0, func_45(), 2);
	func_150(iParam0, num + 1, 2);
	return fParam1;
}

float func_68(float fParam0, float fParam1, float fParam2) // Position - 0x2519 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_69(int iParam0, float fParam1, BOOL bParam2) // Position - 0x2540 Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_60() != -1)
		return;

	if (!func_71(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_152(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_153(iParam0), value);
	func_155(func_154(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_156(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_37(84, true);

	if (fParam1 <= -99.999f)
		func_37(func_157(iParam0), true);

	variableName = func_158(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

float func_70(int iParam0) // Position - 0x2619 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_71(int iParam0) // Position - 0x262D Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_159(iParam0))
		return false;

	return func_160(iParam0);
}

BOOL func_72() // Position - 0x2649 Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_60() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_55(Global_1347477.f_195, false);
}

int func_73(float fParam0) // Position - 0x2685 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

void func_74(var uParam0, var uParam1) // Position - 0x26A0 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_161())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_75(int iParam0, float fParam1) // Position - 0x26D9 Hash - 0xD23DB2AC ^0x94FCE0D7
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_163(1, flag, true, str);
		func_164(!flag, fParam1 < 0f, flag);
		num = func_152(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_100();
	}
	else if (iParam0 == 10)
	{
		num = func_152(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_152(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_76(int iParam0) // Position - 0x27AD Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_77(int iParam0) // Position - 0x27DC Hash - 0x82C9F776 ^0x82C9F776
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

void func_78(int iParam0) // Position - 0x2813 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_165(2);
	func_166(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_79(int iParam0) // Position - 0x2850 Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_167(2);
	func_168(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_80(int iParam0) // Position - 0x288C Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_169(2);
	func_170(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_81(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x28C9 Hash - 0x5C29635D ^0x5C29635D
{
	func_146(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

struct<2> func_82(int iParam0) // Position - 0x28E3 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_83(var uParam0, var uParam1, int iParam2) // Position - 0x28F3 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_84(var uParam0) // Position - 0x2903 Hash - 0x19D4C5AC ^0x19D4C5AC
{
	switch (*uParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 26;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 28;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("consumable_herb_sage"):
			return 34;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_ro_flower_clamshell"):
			return 10;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 31;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 1;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 42;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 20;
	
		case joaat("consumable_herb_yarrow"):
			return 43;
	
		case joaat("consumable_herb_wild_mint"):
			return 41;
	
		case joaat("provision_ro_flower_cigar"):
			return 9;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 32;
	
		case joaat("provision_ro_flower_night_scented"):
			return 25;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 38;
	
		case joaat("consumable_herb_milkweed"):
			return 23;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 29;
	
		case joaat("consumable_herb_oregano"):
			return 27;
	
		case joaat("consumable_herb_red_raspberry"):
			return 33;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 21;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 40;
	
		case joaat("provision_ro_flower_sparrows"):
			return 35;
	
		case joaat("provision_ro_flower_queens"):
			return 30;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("consumable_herb_wild_carrots"):
			return 39;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_ro_flower_spider"):
			return 36;
	
		case joaat("provision_ro_flower_dragons"):
			return 14;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 22;
	
		case joaat("provision_ro_flower_moccasin"):
			return 24;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 37;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	
		case joaat("provision_ro_flower_ghost"):
			return 17;
	}

	return 0;
}

void func_85(int iParam0, int iParam1) // Position - 0x2B31 Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_86(joaat("eaten"), func_171(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_83(func_172(joaat("herbs_eaten")), iParam1);
	return;
}

struct<2> func_86(int iParam0, int iParam1) // Position - 0x2B63 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

int func_87(float fParam0) // Position - 0x2B79 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

void func_88(int iParam0, var uParam1, var uParam2) // Position - 0x2C05 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_89(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2C21 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_173(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_174(iParam0))
		return false;

	if (func_175(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_90(iParam0, 1) || func_176(32768))
		if (!func_90(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_177())
		return false;

	return true;
}

BOOL func_90(int iParam0, int iParam1) // Position - 0x2CC3 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

void func_91(int iParam0, int iParam1) // Position - 0x2CDC Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

int func_92(int iParam0) // Position - 0x2D00 Hash - 0x92F940EE ^0x92F940EE
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

float func_93(int iParam0) // Position - 0x2D54 Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_178(iParam0);
	
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
			return func_178(iParam0);
	
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
			return func_178(iParam0);
	
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

BOOL func_94(int iParam0) // Position - 0x3022 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_71(18);
	
		case 1:
			return func_71(19);
	
		case 2:
			return func_71(20);
	
		default:
		
	}

	return true;
}

void func_95(int iParam0, float fParam1, BOOL bParam2) // Position - 0x3060 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_60() != -1)
		return;

	if (Global_1347477.f_117 || !func_71(31))
		return;

	num = func_32(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_32(iParam0);

	if (func_179(iParam0) && func_180(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_181(num2, fParam1);
		
			if (fParam1 > (float)func_182(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_37(func_183(iParam0), false);
				
					func_184(iParam0, num3, num4);
					func_20(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_96(int iParam0) // Position - 0x3162 Hash - 0x1871133 ^0x1871133
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_97(int iParam0) // Position - 0x316D Hash - 0x21FAF347 ^0xAF7D8F21
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

int func_98(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x31A8 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_185(sParam0, sParam1, hParam2);
	return num2;
}

void func_99(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x320B Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_100() // Position - 0x323B Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_186();
	func_187();
	func_188();
	return;
}

BOOL func_101(int iParam0) // Position - 0x3252 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_189(iParam0);
}

BOOL func_102(int iParam0, int iParam1) // Position - 0x3260 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_103(const char* sParam0) // Position - 0x326F Hash - 0x2124511C ^0xA40AAA4F
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

void func_104(int iParam0) // Position - 0x32A9 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_102(iParam0, 1))
		func_190(1);

	return;
}

void func_105() // Position - 0x32C0 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

struct<5> func_106(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3307 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_191(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_192(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_200(hParam0, -1823706425))
			{
				unk = { func_193(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_200(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_193(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_198(bParam1) };
		
			switch (func_199(hParam0))
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
				unk = { func_193(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_194(bParam1) };
		
			if (bParam2 && func_195(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_196(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_196(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_197(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_201(unk, &unk28, bParam1, false))
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

int func_107(var uParam0) // Position - 0x35C4 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_111(i, 1);
	}

	return -358215195;
}

int func_108(int iParam0, int iParam1) // Position - 0x35FF Hash - 0x9D981F95 ^0x9D981F95
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

int func_109(var uParam0) // Position - 0x37D0 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_17(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_17(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_17(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_17(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_17(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_17(uParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_110(BOOL bParam0) // Position - 0x3921 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

int func_111(int iParam0, int iParam1) // Position - 0x3932 Hash - 0xE1D12727 ^0xA46110B3
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

void func_112(int iParam0) // Position - 0x3B81 Hash - 0x65A082AE ^0x65A082AE
{
	func_119(iParam0, 8, 6);
	return;
}

void func_113(int iParam0) // Position - 0x3B92 Hash - 0x20214C72 ^0x20214C72
{
	func_202(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_114(int iParam0, int iParam1) // Position - 0x3BA7 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_203(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_115(Hash hParam0, int iParam1, int iParam2) // Position - 0x3BBE Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_116(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3BD1 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_199(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_204(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_114(num2, num3);
	}

	if (func_205(-1586649372) && func_204(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_114(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_206(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_206(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_114(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_114(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_114(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_207(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_17(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_114(num2, num3);
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
						func_114(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_114(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_199(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_114(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_207(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_199(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_114(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_206(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_206(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_114(num2, num3);
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
						func_114(num2, num3);
				}
			}
		
			func_206(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_17(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_114(num2, num3);
			}
			break;
	
		case 1868067663:
			func_206(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_114(num2, num3);
			}
			break;
	}

	switch (func_199(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_199(uParam0->f_1[num2 /*3*/]) || func_17(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_114(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_199(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_114(num2, num3);
			}
			break;
	}

	return;
}

Hash func_117(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x421A Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_208(0);

	if (hParam2 != 0 && func_209(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_210(hParam0, func_111(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_118(var uParam0, BOOL bParam1, int iParam2) // Position - 0x4260 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_60() != -1;
	flag2 = func_208(0);

	if (func_110(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_111(num, 1);
		
			if (func_211(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_211(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_212(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_213(uParam0);

	if (num3 > 0)
	{
		if (!func_110(524288))
		{
			func_121(524288);
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
				num5 = func_111(num, 1);
			
				if (func_211(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_211(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_212(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_114(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_214(524288);

	return;
}

void func_119(int iParam0, int iParam1, int iParam2) // Position - 0x447D Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_108(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_108(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_108(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_120(var uParam0, int iParam1) // Position - 0x44BC Hash - 0xECD5EA69 ^0xF77DE90C
{
	Hash hash;
	int num;
	BOOL flag;

	flag = false;

	if (func_215() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	hash = func_216(iParam1);

	if (hash != 0)
	{
		num = 1;
	
		if (hash == -1906834168 && uParam0->f_1[num /*3*/] != func_217() || hash == -452152720 || hash == -70852636)
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			Global_1946054.f_2656 = iParam1;
		}
		else if (func_209(uParam0->f_1[num /*3*/], flag, hash, func_60() != -1) != -1)
		{
			uParam0->f_1[num /*3*/].f_1 = hash;
			Global_1946054.f_2656 = iParam1;
		}
	}

	return;
}

void func_121(BOOL bParam0) // Position - 0x456D Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_122(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x4580 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_218(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_219(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_121(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_218(iParam0))
				return;
		
			func_219(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_121(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_220(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

int func_123(Hash hParam0) // Position - 0x478C Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(hParam0, 26) & 31 * MISC::IS_BIT_SET(hParam0, 31) ? -1 : 1) + 1898;
}

int func_124(Hash hParam0) // Position - 0x47B1 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 22) & 15;
}

int func_125(Hash hParam0) // Position - 0x47C4 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 17) & 31;
}

int func_126(Hash hParam0) // Position - 0x47D7 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_127(Hash hParam0) // Position - 0x47EA Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_128(Hash hParam0) // Position - 0x47FC Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 0) & 63;
}

int func_129(int iParam0, int iParam1) // Position - 0x480E Hash - 0x893AC59E ^0x893AC59E
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

void func_130(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x48A8 Hash - 0xA65AB937 ^0xA65AB937
{
	func_221(hParam0, iParam6);
	func_222(hParam0, iParam5);
	func_223(hParam0, iParam4);
	func_224(hParam0, iParam3);
	func_225(hParam0, iParam2);
	func_226(hParam0, iParam1);
	return;
}

BOOL func_131(Hash hParam0) // Position - 0x48E0 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_128(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_127(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_126(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_123(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_124(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_125(hParam0);

	if (num6 < 1 || num6 > func_129(num5, num4))
		return false;

	return true;
}

void func_132(Hash hParam0, int iParam1, int iParam2) // Position - 0x49BC Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_133(Hash hParam0, int iParam1, int iParam2) // Position - 0x4A17 Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

BOOL func_134(int iParam0) // Position - 0x4A81 Hash - 0x71C807FE ^0x71C807FE
{
	if (iParam0 <= -1 || iParam0 > 9)
		return false;

	return true;
}

BOOL func_135() // Position - 0x4AA0 Hash - 0xC8060AD0 ^0x368DD84C
{
	return Global_40.f_7748.f_6 > 0;
}

void func_136(int iParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x4AB2 Hash - 0x549CBB93 ^0x549CBB93
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
		func_57(uParam1, uParam2, &unk, &unk2, false, func_227());

	return;
}

int func_137() // Position - 0x4B89 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_7748.f_1;
}

float func_138(float fParam0, float fParam1, float fParam2) // Position - 0x4B99 Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_139(float fParam0, float fParam1) // Position - 0x4BDB Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 24f);
}

int func_140(float fParam0, float fParam1) // Position - 0x4C00 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

int func_141(float fParam0, float fParam1) // Position - 0x4C25 Hash - 0x14E67663 ^0x43D0AA51
{
	return BUILTIN::FLOOR(((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0 / fParam1))) * 60f);
}

BOOL func_142() // Position - 0x4C4A Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_60() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_143(int iParam0, BOOL bParam1) // Position - 0x4C6F Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_228(iParam0))
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

BOOL func_144(Ped pedParam0, Any* panParam1) // Position - 0x4CA0 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

float func_145(int iParam0, int iParam1) // Position - 0x4CB0 Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_229();

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

int func_146(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x4CFB Hash - 0x8632F867 ^0xFC7DC225
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_229();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_230(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_231(ped, iParam0, fParam1);
	func_232(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_153(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_147(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4DAD Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_123(*uParam0);
	i = func_124(*uParam0);
	j = func_125(*uParam0);
	k = func_126(*uParam0);
	l = func_127(*uParam0);
	m = func_128(*uParam0);

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
	
		num3 = func_129(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_130(uParam0, m, l, k, j, i, num);
	return;
}

int func_148(int iParam0, int iParam1) // Position - 0x4F20 Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_229();

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

int func_149(int iParam0, int iParam1) // Position - 0x4F6F Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_229();

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

void func_150(int iParam0, int iParam1, int iParam2) // Position - 0x4FC0 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_229();

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

void func_151(int iParam0, Hash hParam1, int iParam2) // Position - 0x5015 Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_229();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = hParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = hParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_152(int iParam0) // Position - 0x506A Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_153(int iParam0) // Position - 0x508E Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_154(int iParam0) // Position - 0x50BD Hash - 0x5163992 ^0x5163992
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

void func_155(int iParam0, float fParam1, BOOL bParam2) // Position - 0x50EC Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_233(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_156(int iParam0) // Position - 0x513C Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_157(int iParam0) // Position - 0x5160 Hash - 0x68BC9945 ^0x68BC9945
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

char* func_158(int iParam0) // Position - 0x5192 Hash - 0x4663E63D ^0xA1A4B1F7
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

BOOL func_159(int iParam0) // Position - 0x51CA Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_160(int iParam0) // Position - 0x51DD Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_161() // Position - 0x5207 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

var func_162(BOOL bParam0, var uParam1, var uParam2) // Position - 0x5226 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_163(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x523D Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_164(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5281 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_233(0, 1, bParam0, bParam1);
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

int func_165(int iParam0) // Position - 0x5377 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_229();

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

void func_166(float fParam0, Ped pedParam1) // Position - 0x53B6 Hash - 0x2062487E ^0xADB8AE45
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

int func_167(int iParam0) // Position - 0x53F8 Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_229();

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

void func_168(float fParam0) // Position - 0x543B Hash - 0xEBF0A2AB ^0x54370C29
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

int func_169(int iParam0) // Position - 0x5475 Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_229();

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

void func_170(float fParam0, BOOL bParam1) // Position - 0x54B8 Hash - 0x1FE7F29A ^0xE2FCD967
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

int func_171(int iParam0) // Position - 0x554C Hash - 0xBA965109 ^0xDF65C4FE
{
	switch (iParam0)
	{
		case 1:
			return joaat("herb_acunas_star_orchid");
	
		case 2:
			return joaat("herb_alaskan_ginseng");
	
		case 3:
			return joaat("herb_american_ginseng");
	
		case 4:
			return joaat("herb_bay_bolete");
	
		case 5:
			return joaat("herb_black_berry");
	
		case 6:
			return joaat("herb_black_currant");
	
		case 7:
			return joaat("herb_burdock_root");
	
		case 8:
			return joaat("herb_chanterelles");
	
		case 9:
			return joaat("herb_cigar_orchid");
	
		case 10:
			return joaat("herb_clamshell_orchid");
	
		case 11:
			return joaat("herb_common_bulrush");
	
		case 12:
			return joaat("herb_creeping_thyme");
	
		case 13:
			return joaat("herb_desert_sage");
	
		case 14:
			return joaat("herb_dragons_mouth_orchid");
	
		case 15:
			return joaat("herb_english_mace");
	
		case 16:
			return joaat("herb_evergreen_huckleberry");
	
		case 17:
			return joaat("herb_ghost_orchid");
	
		case 18:
			return joaat("herb_golden_currant");
	
		case 19:
			return joaat("herb_hummingbird_sage");
	
		case 20:
			return joaat("herb_indian_tobacco");
	
		case 21:
			return joaat("herb_lady_of_night_orchid");
	
		case 22:
			return joaat("herb_lady_slipper_orchid");
	
		case 23:
			return joaat("herb_milkweed");
	
		case 24:
			return joaat("herb_moccasin_flower_orchid");
	
		case 25:
			return joaat("herb_night_scented_orchid");
	
		case 26:
			return joaat("herb_oleander_sage");
	
		case 27:
			return joaat("herb_oregano");
	
		case 28:
			return joaat("herb_parasol_mushroom");
	
		case 29:
			return joaat("herb_prairie_poppy");
	
		case 30:
			return joaat("herb_queens_orchid");
	
		case 31:
			return joaat("herb_rams_head");
	
		case 32:
			return joaat("herb_rat_tail_orchid");
	
		case 33:
			return joaat("herb_red_raspberry");
	
		case 34:
			return joaat("herb_red_sage");
	
		case 35:
			return joaat("herb_sparrows_egg_orchid");
	
		case 36:
			return joaat("herb_spider_orchid");
	
		case 37:
			return joaat("herb_vanilla_flower");
	
		case 38:
			return joaat("herb_violet_snowdrop");
	
		case 39:
			return joaat("herb_wild_carrots");
	
		case 40:
			return joaat("herb_wild_feverfew");
	
		case 41:
			return joaat("herb_wild_mint");
	
		case 42:
			return joaat("herb_wintergreen_berry");
	
		case 43:
			return joaat("herb_yarrow");
	}

	return 0;
}

struct<2> func_172(int iParam0) // Position - 0x5838 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_173(int iParam0, int iParam1) // Position - 0x584A Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_60() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_174(int iParam0) // Position - 0x587D Hash - 0x3E25647A ^0x3E25647A
{
	if (func_60() != -1)
		if (func_90(iParam0, 4))
			return false;
	else if (func_90(iParam0, 2))
		return false;

	return true;
}

BOOL func_175(int iParam0) // Position - 0x58AD Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_90(iParam0, 65536) && !func_90(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_90(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_90(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_176(int iParam0) // Position - 0x5959 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_177() // Position - 0x596C Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

float func_178(int iParam0) // Position - 0x597B Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_92(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_87(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_234(num7) - func_234(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_179(int iParam0) // Position - 0x59E5 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_180(int iParam0) // Position - 0x5A1E Hash - 0xB8632262 ^0xB8632262
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

int func_181(float fParam0, float fParam1) // Position - 0x5A9D Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_87(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_234(num));
	num3 = BUILTIN::TO_FLOAT(func_234(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_182(int iParam0) // Position - 0x5B10 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_235(iParam0, &num))
		return func_234(num);

	switch (iParam0)
	{
		case 0:
			if (func_236())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_236())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_236())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_183(int iParam0) // Position - 0x5B9C Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_184(int iParam0, int iParam1, int iParam2) // Position - 0x5BCE Hash - 0x29688DE6 ^0xE927AE32
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

	num = num + func_237(iParam0);
	str3 = func_239(func_238(num, iParam2));
	str5 = func_240(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_241(iParam0));
	num2 = func_242(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_243(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_245(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_244(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_185(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x5CC6 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

float func_186() // Position - 0x5CF7 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_246())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_64(2);

	if (Global_1347477.f_119)
		return func_64(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_247();
	num3 = func_248();
	num4 = func_249();
	num5 = func_250();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_251());
	num8 = func_64(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_252(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_253(3, num9, num9 > 100f);
	return func_68(num8, -100f, 100f);
}

float func_187() // Position - 0x5E20 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_246())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_64(1);

	if (Global_1347477.f_119)
		return func_64(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_247();
	num3 = func_248();
	num4 = func_249();
	num5 = func_250();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_251());
	num8 = func_64(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_252(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_253(2, num9, num9 > 100f);
	return func_68(num8, -100f, 100f);
}

float func_188() // Position - 0x5F49 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_246())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_64(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_254())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_255())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_64(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_247();
	num3 = func_248();
	num4 = func_249();
	num5 = func_250();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_251());
	num8 = func_64(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_252(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_253(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_64(0);

	return func_68(num8, -100f, 100f);
}

BOOL func_189(int iParam0) // Position - 0x60F0 Hash - 0xA059D395 ^0xE600C05
{
	return func_256(Global_1935496.f_27, iParam0);
}

void func_190(int iParam0) // Position - 0x6104 Hash - 0xF3266748 ^0x4FF63D76
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

struct<4> func_191(BOOL bParam0) // Position - 0x614A Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_193(joaat("character"), func_257(), joaat("SLOTID_NONE"), bParam0);
}

int func_192(Hash hParam0) // Position - 0x6166 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_3(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_193(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x6191 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_3(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_258(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_194(BOOL bParam0) // Position - 0x61C2 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_258(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_193(923904168, func_191(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_193(923904168, func_191(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_193(923904168, func_191(bParam0), -740156546, false);
}

BOOL func_195(Hash hParam0, BOOL bParam1) // Position - 0x6257 Hash - 0x62864AB ^0xBC339691
{
	if (func_199(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_71(24);
		else
			return true;

	return false;
}

BOOL func_196(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x6290 Hash - 0x4285A587 ^0x4285A587
{
	return func_259(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_197(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x62A8 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_260(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_198(BOOL bParam0) // Position - 0x62C9 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_258(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_193(271701509, func_191(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_193(271701509, func_191(bParam0), 12999093, false);
}

Hash func_199(Hash hParam0) // Position - 0x632D Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_3(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_200(Hash hParam0, Hash hParam1) // Position - 0x6358 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_199(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_201(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x63B7 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_258(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

void func_202(int iParam0, int iParam1) // Position - 0x63E7 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_261(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_261(&iParam0->f_2[i /*2*/], 1))
					func_262(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_203(int iParam0, int iParam1, int iParam2) // Position - 0x6513 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_263(iParam0, 1))
		func_264(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_204(int iParam0, int iParam1) // Position - 0x655A Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

BOOL func_205(int iParam0) // Position - 0x6573 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_108(iParam0, 1) /*3*/] != Global_1946054.f_57[func_108(iParam0, 1) /*11*/];
}

void func_206(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x65AB Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_114(num2, num);
	
		if (bParam1)
			func_114(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_114(num3, num);
	}

	return;
}

BOOL func_207(Hash hParam0) // Position - 0x6697 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_208(int iParam0) // Position - 0x66DA Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_215();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_209(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x6700 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_210(Hash hParam0, int iParam1, var uParam2) // Position - 0x6744 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_211(int iParam0, int iParam1) // Position - 0x6755 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_108(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_212(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6773 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_108(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_110(524288))
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

int func_213(var uParam0) // Position - 0x67DE Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_214(BOOL bParam0) // Position - 0x6829 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

int func_215() // Position - 0x6841 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

Hash func_216(int iParam0) // Position - 0x684F Hash - 0xB8EC44B7 ^0x32EE672C
{
	switch (iParam0)
	{
		case 0:
			return -70852636;
	
		case 1:
			return -452152720;
	
		case 2:
			return -1659460987;
	
		case 3:
			return -1906834168;
	
		case 4:
			return -1073518498;
	
		case 5:
			return -1304572717;
	
		case 6:
			return 1715418323;
	
		case 7:
			return 1468307294;
	
		case 8:
			return -1986397304;
	
		case 9:
			return 2061000197;
	
		default:
		
	}

	return 0;
}

int func_217() // Position - 0x68EC Hash - 0x8786AEE9 ^0xE825AECE
{
	if (func_215() == 1160113249)
		return -1392593303;

	return 1156231582;
}

BOOL func_218(int iParam0) // Position - 0x690D Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_219(int iParam0) // Position - 0x6922 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_220(int iParam0, var uParam1, var uParam2) // Position - 0x6942 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_265(num);
	return;
}

void func_221(var uParam0, int iParam1) // Position - 0x6962 Hash - 0xD05180BA ^0x39589262
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

void func_222(var uParam0, int iParam1) // Position - 0x69E8 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_223(var uParam0, int iParam1) // Position - 0x6A24 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_124(*uParam0);
	num2 = func_123(*uParam0);

	if (iParam1 < 1 || iParam1 > func_129(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_224(var uParam0, int iParam1) // Position - 0x6A77 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_225(var uParam0, int iParam1) // Position - 0x6AB2 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_226(var uParam0, int iParam1) // Position - 0x6AEB Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_227() // Position - 0x6B23 Hash - 0x1309DFA4 ^0x1309DFA4
{
	if (func_58(8))
		return 8;
	else if (func_58(4))
		return 4;
	else if (func_58(2))
		return 2;

	return 1;
}

int func_228(int iParam0) // Position - 0x6B58 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_266(iParam0))
		return -1;

	return func_267(iParam0);
}

int func_229() // Position - 0x6B74 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_268())
		return 1;

	return 0;
}

void func_230(int iParam0, int iParam1, int iParam2) // Position - 0x6B88 Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_229();

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

void func_231(Ped pedParam0, int iParam1, float fParam2) // Position - 0x6BD9 Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_158(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_269(iParam1), fParam2, -1);

	return;
}

void func_232(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x6C05 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_229();

	gameTimer = MISC::GET_GAME_TIMER();
	func_270(iParam0, fParam1, iParam3);

	if (bParam2)
		func_271(iParam0, gameTimer, iParam3);

	return;
}

char* func_233(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6C38 Hash - 0xC24B5846 ^0x11462815
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

int func_234(int iParam0) // Position - 0x6CE0 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_235(int iParam0, var uParam1) // Position - 0x6D56 Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_236() // Position - 0x6D5F Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_237(int iParam0) // Position - 0x6D68 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_258(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_238(int iParam0, int iParam1) // Position - 0x6DCA Hash - 0xD5391B76 ^0xFB9A56FA
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

const char* func_239(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6DFC Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_240(int iParam0) // Position - 0x6E10 Hash - 0xB3286DD1 ^0x8D85A42B
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

char* func_241(int iParam0) // Position - 0x6E4A Hash - 0xB3286DD1 ^0x4035D59A
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

int func_242(int iParam0) // Position - 0x6E84 Hash - 0x21FAF347 ^0x467E3BE5
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

int func_243(int iParam0) // Position - 0x6EBF Hash - 0x5163992 ^0x5163992
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

int func_244(int iParam0) // Position - 0x6EEE Hash - 0x21FAF347 ^0xA8C8F0DA
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

int func_245(const char* sParam0, const char* sParam1, int iParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x6F29 Hash - 0x51CE9407 ^0x19439D00
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
	num2.f_4 = iParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

BOOL func_246() // Position - 0x6FA0 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_247() // Position - 0x6FBC Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_70(13);
	num2 = func_73(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_248() // Position - 0x6FFF Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_249() // Position - 0x701A Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_272())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_250() // Position - 0x7039 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_251() // Position - 0x707B Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_252(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7089 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_233(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_253(int iParam0, float fParam1, BOOL bParam2) // Position - 0x70D5 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_233(iParam0, 2, false, false);
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

BOOL func_254() // Position - 0x721B Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_70(12) <= -99f;
}

BOOL func_255() // Position - 0x722F Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_70(12) >= 99f;
}

BOOL func_256(int iParam0, int iParam1) // Position - 0x7243 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

struct<4> func_257() // Position - 0x7252 Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_258(BOOL bParam0) // Position - 0x725E Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_60() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_259(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x729F Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_3(hParam0, 0))
		return 0;

	guid = { func_193(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_258(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_260(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x72E7 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_258(false);
	*panParam1 = { func_193(hParam0, func_194(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_261(var uParam0, int iParam1) // Position - 0x732C Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_262(var uParam0, int iParam1, int iParam2) // Position - 0x733D Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_263(int iParam0, int iParam1) // Position - 0x7350 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_264(int iParam0, int iParam1) // Position - 0x7361 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_265(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x7374 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_218(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_218(20))
				return;
		}
	}

	func_219(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_121(8);
	return;
}

BOOL func_266(int iParam0) // Position - 0x7478 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_267(int iParam0) // Position - 0x74AB Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_273(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_268() // Position - 0x74EC Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_269(int iParam0) // Position - 0x74FB Hash - 0xB3286DD1 ^0xF53FEE9D
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

void func_270(int iParam0, float fParam1, int iParam2) // Position - 0x7535 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_229();

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

void func_271(int iParam0, int iParam1, int iParam2) // Position - 0x7586 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_229();

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

BOOL func_272() // Position - 0x75DB Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

int func_273(int iParam0) // Position - 0x75EC Hash - 0x6EC15CF9 ^0xE613EBE0
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

