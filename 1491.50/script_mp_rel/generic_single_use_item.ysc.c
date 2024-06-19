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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
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

	fLocal_14 = 1f;
	fLocal_15 = 1f;

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
		{
			func_2(&(num.f_1));
		
			if (num > 1)
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_JUMP"), false);
		}
	
		switch (num)
		{
			case 0:
				if (func_3(num.f_1, 0))
				{
					flag = true;
					func_4(&(num.f_1));
					func_5(num.f_1);
				}
			
				if (uScriptParam_0.f_3)
				{
					num.f_1.f_2 = 1f;
					func_6(&num, 2);
				}
				else
				{
					func_6(&num, 1);
				}
				break;
		
			case 1:
				if (num2 == 845883585)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
					{
						num.f_1.f_1 = 1 + num.f_1.f_1;
						func_7(&(num.f_1), (float)num.f_1.f_1 >= num.f_1.f_2);
						func_8(num.f_1, false);
						func_9(true);
						num.f_1.f_177 = 1;
						func_6(&num, 3);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 442509369))
				{
					num.f_1.f_1 = 1 + num.f_1.f_1;
					func_7(&(num.f_1), (float)num.f_1.f_1 >= num.f_1.f_2);
					func_8(num.f_1, false);
					func_6(&num, 3);
				}
				break;
		
			case 2:
				func_10(&num, num2, flag);
				func_6(&num, 3);
				break;
		
			case 3:
				if (uScriptParam_0.f_3)
					SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	if (num <= 1)
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			func_10(&num, num2, flag);

	return;
}

int func_1(Hash hParam0, int iParam1) // Position - 0x1D3 Hash - 0x7A1C2599 ^0xFF9B5634
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

int func_2(var uParam0) // Position - 0x21D Hash - 0x11288838 ^0xE3C355F
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return 0;

	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1234314267))
		{
			func_11(uParam0);
			return 1;
		}
	}

	if (!uParam0->f_177)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1895155945))
			uParam0->f_177 = 1;

	return 0;
}

BOOL func_3(Hash hParam0, int iParam1) // Position - 0x28C Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_4(var uParam0) // Position - 0x2A6 Hash - 0x9FDF9381 ^0x3B8D525B
{
	int i;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[i], &uParam0->f_33[i /*7*/]);
	}

	return;
}

void func_5(int iParam0) // Position - 0x2E6 Hash - 0x4745C8C6 ^0x4745C8C6
{
	switch (iParam0)
	{
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			func_12(false);
			break;
	}

	return;
}

void func_6(var uParam0, int iParam1) // Position - 0x316 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_7(var uParam0, BOOL bParam1) // Position - 0x323 Hash - 0xD734C260 ^0xF4862D2C
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

	if (func_13(*uParam0, 1573112293) || func_13(*uParam0, 672467738) || func_13(*uParam0, -550842268))
		flag3 = true;

	flag4 = func_14(*uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940085.f_26 = 0;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		switch (uParam0->f_33[i /*7*/].f_1)
		{
			case -1104847406:
				num2 = func_15(2, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_17((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, false);
				flag = true;
				break;
		
			case -943921969:
				num = func_15(0, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_16((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				flag2 = true;
				break;
		
			case -816334026:
				func_21(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_2) / uParam0->f_2, 1 == uParam0->f_1);
				break;
		
			case joaat("EFFECT_HEALTH_CORE"):
				num4 = func_19((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_20(0, num4, true, true, flag3);
				flag2 = true;
				break;
		
			case 381158954:
				num3 = func_15(1, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				func_18((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
				break;
		
			case joaat("EFFECT_STAMINA_CORE"):
				num6 = func_19((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_20(1, num6, true, true, flag3);
				break;
		
			case joaat("EFFECT_DEADEYE_CORE"):
				num5 = func_19((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
				func_20(2, num5, true, true, flag3);
				flag = true;
				break;
		
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[i /*7*/].f_1)
					{
						case -1240225157:
							num7 = func_22(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_23(1, num7, flag4, true);
							break;
					
						case joaat("Effect_Stamina_Core_Gold"):
							num7 = func_22(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_23(18, num7, flag4, true);
							break;
					
						case joaat("Effect_Deadeye_Core_Gold"):
							num7 = func_22(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_23(20, num7, flag4, true);
							flag = true;
							break;
					
						case 1342237631:
							num7 = func_22(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_23(2, num7, flag4, true);
							flag = true;
							break;
					
						case 1869697234:
							num7 = func_22(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_23(0, num7, flag4, true);
							flag2 = true;
							break;
					
						case joaat("Effect_Health_Core_Gold"):
							num7 = func_22(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
							func_23(19, num7, flag4, true);
							flag2 = true;
							break;
					}
				}
				break;
		}
	}

	if (bParam1)
	{
		func_24(uParam0);
		func_25(*uParam0, flag, flag2, 562618531);
	}

	func_11(uParam0);
	uParam0->f_3 = uParam0->f_3 + num;
	uParam0->f_4 = uParam0->f_4 + num2;
	uParam0->f_5 = uParam0->f_5 + num3;
	uParam0->f_6 = uParam0->f_6 + num4;
	uParam0->f_7 = uParam0->f_7 + num5;
	uParam0->f_8 = uParam0->f_8 + num6;
	return;
}

void func_8(int iParam0, BOOL bParam1) // Position - 0x6CA Hash - 0x68FEEC19 ^0xE7FF79EC
{
	var unk;
	var unk11;

	switch (iParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
		case joaat("consumable_herb_oleander_sage"):
		case joaat("consumable_herb_prairie_poppy"):
			if (bParam1 || !func_35() || !PED::IS_PED_ON_FOOT(Global_33))
				return;
		
			if (iParam0 != joaat("consumable_herb_prairie_poppy") || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				unk11 = { unk };
				TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_puking_item", 32);
				unk11.f_14 = 512;
				func_33(unk11, 0);
			}
			break;
	
		case -2067647508:
		case -912678731:
		case -464445204:
		case 470703221:
		case 1051259759:
		case 1324459658:
			func_27(func_26(iParam0));
			break;
	
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			unk.f_1 = iParam0;
			unk11.f_15 = 1;
			unk11 = { unk };
			TEXT_LABEL_ASSIGN_STRING(&(unk11.f_10), "generic_weight_control_item", 32);
			unk11.f_14 = 512;
			func_33(unk11, 0);
			break;
	
		case joaat("consumable_herb_english_mace"):
		case joaat("consumable_herb_yarrow"):
		case joaat("consumable_herb_milkweed"):
		case joaat("consumable_herb_ginseng"):
		case joaat("consumable_herb_vanilla_flower"):
			func_34(joaat("STATUS_EFFECT__POISON"));
			break;
	
		case -1088257729:
			func_28(-1685270562, -2038430863, 1800);
		
			if (func_29() || func_30())
				func_32(func_31(joaat("USED"), 1001560750), 1);
			break;
	
		case -611782825:
			func_28(-813902658, -2082434331, 1800);
			break;
	
		case joaat("consumable_valerian_root"):
			break;
	
		case joaat("consumable_aged_pirate_rum"):
			break;
	
		case joaat("consumable_ginseng_elixier"):
			break;
	
		case joaat("consumable_potent_antidote"):
		case joaat("consumable_antidote"):
			if (iParam0 == joaat("consumable_antidote"))
			{
			}
			else
			{
				iParam0 == joaat("consumable_potent_antidote");
			}
		
			func_36();
			break;
	}

	return;
}

void func_9(BOOL bParam0) // Position - 0x894 Hash - 0x79D64AA6 ^0xE47546C2
{
	int num;
	int num2;

	if (func_37())
		return;

	Global_17418.f_55.f_664.f_1781 = 0;
	num = 1;
	Global_1953292.f_1676.f_1[num /*3*/].f_1 = joaat("pomade");
	Global_1953292.f_1557.f_1[num /*3*/] = { Global_1953292.f_1676.f_1[num /*3*/] };
	func_38(Global_1953292.f_1676.f_1[num /*3*/], joaat("pomade"), false, 1);
	func_39(true, false);
	num2 = func_40();
	func_41(&num2, 0, 0, 0, 4, 0, 0, false);

	if (func_42(num2, Global_17418.f_55.f_664.f_1782, true))
		Global_17418.f_55.f_664.f_1782 = num2;

	if (bParam0)
		func_43(8, 0, 0, 0, false);

	return;
}

void func_10(var uParam0, int iParam1, BOOL bParam2) // Position - 0x94A Hash - 0xE04BFE92 ^0x33AE8D9
{
	if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_VAULTING(PLAYER::PLAYER_PED_ID()))
		return;

	if (iParam1 == 845883585)
	{
		func_45(func_44(), Global_33, joaat("pomade"), true);
		func_39(true, false);
	}

	uParam0->f_1 == joaat("consumable_hair_tonic");

	if (func_3(uParam0->f_1, 0) && !bParam2)
		func_4(&(uParam0->f_1));

	func_7(&(uParam0->f_1), true);
	func_8(uParam0->f_1, true);
	return;
}

void func_11(var uParam0) // Position - 0x9D8 Hash - 0xA2F56449 ^0xA1F38980
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

void func_12(BOOL bParam0) // Position - 0xA02 Hash - 0xE0714EF7 ^0xCEF94AF8
{
	Global_1913578 = !bParam0;

	if (Global_1913578)
		Global_1913578.f_1 = MISC::GET_GAME_TIMER();

	return;
}

BOOL func_13(Hash hParam0, Hash hParam1) // Position - 0xA22 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_3(hParam0, 0))
		return func_47(func_46(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_14(int iParam0) // Position - 0xA63 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case joaat("provision_role_moonshiner_moonshine_flavor_tropical_punch"):
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_creek"):
		case joaat("provision_role_moonshiner_mash_medium"):
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_cobbler"):
		case joaat("provision_role_moonshiner_moonshine_flavor_poison_poppys"):
		case joaat("provision_role_moonshiner_moonshine_flavor_berry_mint"):
		case -545779394:
		case joaat("provision_role_moonshiner_moonshine_flavor_apple_berry_crumb"):
		case joaat("provision_role_moonshiner_moonshine_flavor_wild_cider"):
		case joaat("provision_role_moonshiner_mash_low"):
		case joaat("provision_role_moonshiner_mash_high"):
		case 1532695640:
		case joaat("provision_role_moonshiner_moonshine_flavor_spiced_island"):
		case 1847740267:
		case joaat("provision_role_moonshiner_moonshine_flavor_agarita_sunrise"):
		case joaat("provision_role_moonshiner_moonshine_flavor_evergreen"):
			return 0;
	}

	return 1;
}

float func_15(int iParam0, float fParam1) // Position - 0xADB Hash - 0x17EDCAD1 ^0xD87169C2
{
	float pedStamina;
	float pedMaxStamina;
	float num;
	float num2;

	switch (iParam0)
	{
		case 0:
			pedStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			pedMaxStamina = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			break;
	
		case 1:
			pedStamina = PED::_GET_PED_STAMINA(Global_33);
			pedMaxStamina = PED::_GET_PED_MAX_STAMINA(Global_33);
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

void func_16(float fParam0) // Position - 0xB6C Hash - 0xC5B8A029 ^0xEE3B2C23
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_GET_NUM_RESERVED_HEALTH(ped));

	num = func_48(2);
	func_49(fParam0 * (float)num, 0);
	return;
}

void func_17(float fParam0, BOOL bParam1) // Position - 0xBAC Hash - 0x3C04298E ^0xB65A98E1
{
	int num;

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(10);

	num = func_50(2);
	func_51(fParam0 * (float)num, false, bParam1);
	return;
}

void func_18(float fParam0) // Position - 0xBE4 Hash - 0xC5B8A029 ^0xA3577BA4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam0 == 0f)
		return;
	else if (fParam0 == -1f)
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(ped));

	num = func_52(2);
	func_53(fParam0 * (float)num, 0);
	return;
}

float func_19(float fParam0, float fParam1) // Position - 0xC24 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 100f;

	return (fParam0 / 8f) * 100f;
}

void func_20(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC52 Hash - 0xF1ADCC2F ^0xF1ADCC2F
{
	if (fParam1 == 0f)
		return;

	if (bParam4)
		fParam1 = func_54(iParam0, fParam1, true);

	func_56(iParam0, func_55(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

void func_21(float fParam0, BOOL bParam1) // Position - 0xC8B Hash - 0xF3A2F5AE ^0x22F56C08
{
	if (fParam0 > 10f)
		fParam0 = 10f;

	if (func_57())
		func_58(fParam0, 0);

	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41 = Global_17418.f_55.f_2459.f_41 + 1;
	
		if (5 == Global_17418.f_55.f_2459.f_41)
			func_59(109, false);
	}

	return;
}

float func_22(float fParam0, int iParam1) // Position - 0xCE3 Hash - 0x4EDD98F5 ^0x4EDD98F5
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

int func_23(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD35 Hash - 0xAC70E962 ^0x1F9746E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		return 0;

	return func_60(iParam0, fParam1, bParam2, bParam3);
}

void func_24(var uParam0) // Position - 0xD59 Hash - 0x98F103C7 ^0xDC387ECE
{
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			func_28(-1196069774, joaat("CONSUMABLE__DAILY_STEW"), 8100);
			break;
	}

	return;
}

void func_25(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0xDD9 Hash - 0xF84CCCD4 ^0x73109519
{
	if (bParam2 || func_13(hParam0, -537818634))
		func_32(func_61(joaat("medicine_items_used")), 1);

	if (func_13(hParam0, -1457797660))
		func_32(func_61(joaat("provision_items_used")), 1);

	if (func_13(hParam0, 1573112293))
		func_63(func_62(hParam0), 1);

	if (func_13(hParam0, 1939071949))
		func_32(func_31(joaat("USED"), joaat("tonic")), 1);

	if (func_13(hParam0, 1992556171))
		func_32(func_61(joaat("camp_stews_consumed")), 1);

	if (func_13(hParam0, 1239889275))
		func_32(func_61(joaat("antique_bottles_drunk")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_32(func_31(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_special_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
		case joaat("consumable_potent_horse_medicine"):
			func_32(func_31(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_32(func_31(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_32(func_31(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_32(func_31(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case -611782825:
			func_32(func_31(joaat("USED"), -1875859641), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_32(func_31(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_32(func_31(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_32(func_31(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_32(func_31(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_64() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_32(func_31(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam1)
		func_32(func_61(joaat("DEADEYE_ITEMS_USED")), 1);

	func_65(hParam0, iParam3);
	return;
}

int func_26(int iParam0) // Position - 0x1043 Hash - 0x9B40E1AB ^0x9B40E1AB
{
	var unk;

	if (!func_66(&unk))
		return 0;

	if (!func_67(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_67(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_67(&unk, 39, iParam0, 0, 1))
		return 0;

	return func_68(unk);
}

void func_27(int iParam0) // Position - 0x109B Hash - 0x311DBB1C ^0x311DBB1C
{
	func_69(iParam0);
	func_70(true, true);
	return;
}

int func_28(int iParam0, int iParam1, int iParam2) // Position - 0x10AF Hash - 0xF97EDB1D ^0xF97EDB1D
{
	int num;

	if (!func_71(iParam1))
		return 0;

	if (!func_72(iParam1))
		return 0;

	if (!func_73(iParam0))
		return 0;

	if (!func_74(iParam0))
		return 0;

	if (!func_75(iParam0))
		func_76(iParam0);

	if (func_77(iParam0, iParam1))
	{
		num = func_78(iParam0);
		Global_1156111.f_47689.f_63[num /*2*/] = iParam0;
		Global_1156111.f_47689.f_63[num /*2*/].f_1 = Global_1295666.f_16 + iParam2;
		return 1;
	}

	return 0;
}

BOOL func_29() // Position - 0x1143 Hash - 0xC7A0A0FD ^0xFFB17F52
{
	if (func_79())
		return false;

	return Global_1956875.f_1431.f_96 == 0;
}

BOOL func_30() // Position - 0x1161 Hash - 0xF0E68978 ^0x71076D6B
{
	if (func_79())
		return false;

	return Global_1956875.f_1431.f_96 == 2;
}

struct<2> func_31(int iParam0, int iParam1) // Position - 0x117F Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

void func_32(var uParam0, var uParam1, int iParam2) // Position - 0x1195 Hash - 0x31B6F9FF ^0xF5CD2283
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return;

	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16) // Position - 0x11B2 Hash - 0x72903DA6 ^0xEF9AE14A
{
	int i;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0.f_10)))
		return;

	if (Global_1939434.f_161 >= 10)
		return;

	if (!func_80(iParam16, 2))
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0.f_10))) > 0 || func_81(&(uParam0.f_10)))
			return;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939434[i /*16*/].f_10)))
		{
			Global_1939434[i /*16*/] = { uParam0 };
			Global_1939434.f_161 = Global_1939434.f_161 + 1;
			func_82(iParam16);
			return;
		}
	}

	return;
}

void func_34(int iParam0) // Position - 0x124E Hash - 0x5D78382 ^0x8F13B3A8
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int j;
	var unk;

	num2 = Global_1156111.f_47689.f_1.f_42;
	unk = 20;

	for (i = 0; i < num2; i = i + 1)
	{
		num = Global_1156111.f_47689.f_1[i /*2*/];
		num3 = func_83(num, 1);
	
		if (Global_1156111.f_35859.f_919[num3 /*12*/] == iParam0)
		{
			func_76(num);
			Global_1156111.f_47689.f_1.f_42 = Global_1156111.f_47689.f_1.f_42 - 1;
		}
		else
		{
			unk[num4 /*2*/] = { Global_1156111.f_47689.f_1[i /*2*/] };
			num4 = num4 + 1;
		}
	}

	for (j = 0; j < num4; j = j + 1)
	{
		Global_1156111.f_47689.f_1[j /*2*/] = { unk[j /*2*/] };
	}

	return;
}

BOOL func_35() // Position - 0x131E Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_84(1);
}

void func_36() // Position - 0x132B Hash - 0xF750052 ^0xD5562B72
{
	func_34(joaat("STATUS_EFFECT__POISON"));
	func_34(joaat("STATUS_EFFECT__TRACKING"));
	return;
}

BOOL func_37() // Position - 0x1345 Hash - 0x78092BAE ^0x48B67C15
{
	return Global_1953292.f_1676.f_1[1 /*3*/].f_1 == joaat("pomade");
}

int func_38(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x1361 Hash - 0x43B0ABE0 ^0x2B929A68
{
	var unk;
	var guid;
	var guid2;
	var outData;
	var unk36;
	int num;

	if (!func_3(hParam0, 0))
		return 0;

	unk = { func_85(hParam0, bParam2, 0) };
	guid = { func_86(hParam0, unk, unk.f_4, bParam2) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	guid2.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_87(bParam2), &guid, &guid2, 15, 1))
		return 0;

	outData.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_87(bParam2), &guid, &outData, true))
		return 0;

	if (guid2.f_14 == iParam1 && outData.f_10 == iParam3)
		return 1;

	if (func_88(bParam2))
	{
		guid2.f_14 = iParam1;
	
		if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_87(bParam2), &guid, &guid2, 15))
			return 0;
	}
	else
	{
		unk36.f_9 = 1;
		unk36.f_11 = joaat("SLOTID_NONE");
		unk36 = { func_89(&guid2, false) };
		unk36.f_10 = iParam3;
		unk36.f_17 = iParam1;
		num = func_90(joaat("UPDATE"), &unk36, false);
	
		if (num == -1)
			return 0;
	
		Global_1953292.f_926 = num;
	}

	return 1;
}

void func_39(BOOL bParam0, BOOL bParam1) // Position - 0x1486 Hash - 0x1D25F1B2 ^0xB435C1D6
{
	int num;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	num = 1;
	func_91();

	if (func_92(64))
		Global_1953292.f_2567.f_1[num /*3*/] = { Global_1953292.f_1557.f_1[num /*3*/] };

	if (func_93(num) != -1)
		func_94(true, bParam0, false, false, false);
	else
		Global_1953292.f_1676.f_1[num /*3*/] = Global_1953292.f_1557.f_1[num /*3*/];

	hash = func_95(81053684, 0);
	flag = !func_96(&(Global_1953292.f_1557), hash, true, bParam0, bParam1, false);
	flag2 = !func_97(&(Global_1953292.f_1676));

	if (flag2)
		if (!func_98(-525676072))
			func_99(-525676072, false, bParam1);
	else if (func_98(-525676072))
		func_100(-525676072, false, bParam1);

	if (bParam0)
	{
		if (flag)
			func_101(hash, 12);
	
		if (flag2)
			func_102(-525676072);
	
		func_103();
		func_104();
		func_105(&(Global_1953292.f_1048), &(Global_1953292.f_1048.f_9), 6);
	}

	return;
}

int func_40() // Position - 0x1593 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1902569;
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x159F Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_106(*iParam0);
	i = func_107(*iParam0);
	num2 = func_108(*iParam0);
	j = func_109(*iParam0);
	k = func_110(*iParam0);
	l = func_111(*iParam0);

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

	for (m = func_112(i, num); num2 > m; m = func_112(i, num))
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

	func_113(iParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_42(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1727 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_114(iParam1) || !func_114(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_43(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x1754 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_115(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_116(num);
	return;
}

Hash func_44() // Position - 0x1786 Hash - 0xB7A5BE74 ^0xFCB5AE63
{
	return Global_1953292.f_1676.f_1[1 /*3*/];
}

int func_45(Hash hParam0, Ped pedParam1, Hash hParam2, BOOL bParam3) // Position - 0x179A Hash - 0x9BD3FFA6 ^0xBD65ACD7
{
	int num;

	if (!func_117(hParam0, hParam2, 1, true, false, false, true))
		return 0;

	if (bParam3)
	{
		if (PED::IS_PED_A_PLAYER(pedParam1))
		{
			num = 0;
		
			if (func_118(hParam0, -1811760631, &(Global_1953292.f_1048), &(Global_1953292.f_1048.f_9), true))
				num = 2048;
		
			func_43(9, 0, num, 0, false);
		}
		else
		{
			func_43(9, 0, 1, pedParam1, false);
		}
	}

	func_119(1);
	return 1;
}

Hash func_46(Hash hParam0) // Position - 0x180B Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_47(Hash hParam0, Hash hParam1) // Position - 0x1815 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_120(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

int func_48(int iParam0) // Position - 0x184B Hash - 0x262796A6 ^0x32C91F91
{
	if (iParam0 == 2)
		iParam0 = func_121(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546;
	
		case 1:
			return Global_1956875.f_1565.f_136;
	
		default:
		
	}

	return -1;
}

void func_49(float fParam0, Ped pedParam1) // Position - 0x188B Hash - 0x81B8D237 ^0xD25A4B21
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	ENTITY::_CHANGE_ENTITY_HEALTH(pedParam1, fParam0, 0, 0);
	return;
}

int func_50(int iParam0) // Position - 0x18CF Hash - 0x3229E1B0 ^0x75954C0C
{
	if (iParam0 == 2)
		iParam0 = func_121(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_1;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_1;
	
		default:
		
	}

	return -1;
}

void func_51(float fParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1913 Hash - 0x5072E518 ^0x6DDAEE0A
{
	Player player;
	Ped ped;
	float playerSpecialAbilityMultiplier;

	player = PLAYER::PLAYER_ID();

	if (fParam0 > 0f && func_122(player))
		return;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	if (PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(player) && fParam0 > 0f && !bParam2)
		return;

	if (fParam0 == 0f)
		return;

	playerSpecialAbilityMultiplier = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(player);

	if (fParam0 < 0f && bParam1 == true)
		bParam1 = false;

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, 1f);

	if (fParam0 > 0f)
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(player, fParam0, 0, 0, 1);
	else
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(player, fParam0, 0);

	if (!bParam1)
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(player, playerSpecialAbilityMultiplier);

	return;
}

int func_52(int iParam0) // Position - 0x19C4 Hash - 0x3229E1B0 ^0x4F226FB4
{
	if (iParam0 == 2)
		iParam0 = func_121(1);

	switch (iParam0)
	{
		case 0:
			return Global_1956875.f_1546.f_2;
	
		case 1:
			return Global_1956875.f_1565.f_136.f_2;
	
		default:
		
	}

	return -1;
}

void func_53(float fParam0, Ped pedParam1) // Position - 0x1A08 Hash - 0xFCEEE112 ^0xFADF1B0E
{
	if (fParam0 == 0f)
		return;

	if (pedParam1 == 0)
		pedParam1 = Global_1295666.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedParam1))
		return;

	PED::_CHANGE_PED_STAMINA(pedParam1, fParam0);
	return;
}

float func_54(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1A4A Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_40();
	func_123(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_124(iParam0, 2);

	if (func_42(num, func_125(iParam0, 2), true))
	{
		func_126(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_59(103, bParam2);
		return 0f;
	}

	func_127(iParam0, func_40(), 2);
	func_126(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_55(int iParam0, int iParam1) // Position - 0x1AB3 Hash - 0x76523351 ^0x92907141
{
	if (iParam1 == 2)
		iParam1 = func_121(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/];
	
		default:
		
	}

	return -1f;
}

int func_56(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1AFF Hash - 0x4D45E238 ^0xDB438ECE
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_121(2);

	ped = PLAYER::PLAYER_PED_ID();

	if (func_128(ped, iParam0, fParam1))
	{
		if (bParam2)
			if (fParam1 >= 100f)
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			else
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	
		if (bParam3)
			func_129(iParam0, 7000, iParam5);
	
		func_130(ped, iParam0, fParam1);
		func_131(iParam0, fParam1, bParam4, iParam5);
	}

	return 1;
}

BOOL func_57() // Position - 0x1B79 Hash - 0x57305A7F ^0x41946F5D
{
	if (Global_1956875.f_1431.f_107 == -15)
		return true;

	return func_132(Global_1956875.f_1431.f_107, false);
}

void func_58(float fParam0, int iParam1) // Position - 0x1BA2 Hash - 0x6AFE3513 ^0x6AFE3513
{
	float num;
	int num2;
	int num3;

	num = func_133(13, 2);
	num2 = func_134(num);
	num = num + fParam0;
	num = func_135(num, 0f, 100f);
	num3 = func_134(num);

	if (num2 != num3)
	{
		Global_1956875.f_1431.f_107 = func_40();
		func_41(&(Global_1956875.f_1431.f_107), 0, 0, 1, 0, 0, 0, false);
	}

	func_136(13, num, 2);
	Global_1956875.f_1431.f_99 = iParam1;
	return;
}

void func_59(int iParam0, BOOL bParam1) // Position - 0x1C15 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_137(iParam0, &num, &num2);

	if (!func_138(iParam0, num, num2, bParam1))
		return;

	func_139(num, num2);
	return;
}

int func_60(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1C42 Hash - 0xFF5C68E3 ^0x564C72DE
{
	char* effectName;
	Ped ped;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_140(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return 0;

	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				effectName = func_141(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_142(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
	
		case 1:
			if (bParam2)
			{
				effectName = func_141(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_34(joaat("STATUS_EFFECT__TRACKING"));
			func_143(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
	
		case 2:
			if (bParam2)
			{
				effectName = func_141(iParam0);
			
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
					GRAPHICS::ANIMPOSTFX_PLAY(effectName);
			}
		
			func_144(-1, false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_145(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_34(joaat("STATUS_EFFECT__POISON"));
			func_145(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_145(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			return 0;
	}

	return 1;
}

struct<2> func_61(int iParam0) // Position - 0x1DF8 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_62(Hash hParam0) // Position - 0x1E08 Hash - 0x4DAA6E6F ^0x4DAA6E6F
{
	switch (hParam0)
	{
		case joaat("consumable_herb_common_bulrush"):
			return 11;
	
		case joaat("consumable_herb_oleander_sage"):
			return 27;
	
		case joaat("consumable_herb_parasol_mushroom"):
			return 29;
	
		case joaat("consumable_herb_black_berry"):
			return 5;
	
		case joaat("provision_wldflwr_cardinal_flower"):
			return 44;
	
		case joaat("consumable_herb_sage"):
			return 35;
	
		case joaat("provision_wldflwr_creek_plum"):
			return 46;
	
		case joaat("consumable_herb_evergreen_huckleberry"):
			return 16;
	
		case joaat("consumable_herb_english_mace"):
			return 15;
	
		case joaat("consumable_herb_bay_bolete"):
			return 4;
	
		case joaat("provision_wldflwr_blood_flower"):
			return 43;
	
		case joaat("consumable_herb_chanterelles"):
			return 8;
	
		case joaat("consumable_herb_rams_head"):
			return 32;
	
		case joaat("consumable_herb_wintergreen_berry"):
			return 52;
	
		case joaat("consumable_herb_indian_tobacco"):
			return 21;
	
		case joaat("provision_wldflwr_chocolate_daisy"):
			return 45;
	
		case joaat("consumable_herb_yarrow"):
			return 53;
	
		case joaat("consumable_herb_wild_mint"):
			return 51;
	
		case joaat("consumable_herb_burdock_root"):
			return 7;
	
		case joaat("provision_wldflwr_wisteria"):
			return 48;
	
		case joaat("consumable_herb_violet_snowdrop"):
			return 39;
	
		case joaat("provision_wldflwr_texas_blue_bonnet"):
			return 41;
	
		case joaat("consumable_herb_milkweed"):
			return 24;
	
		case joaat("consumable_herb_prairie_poppy"):
			return 30;
	
		case joaat("consumable_herb_oregano"):
			return 28;
	
		case joaat("consumable_herb_red_raspberry"):
			return 34;
	
		case joaat("consumable_herb_wild_feverfew"):
			return 50;
	
		case joaat("consumable_herb_currant"):
			return 6;
	
		case joaat("provision_wldflwr_bitterweed"):
			return 42;
	
		case joaat("consumable_herb_wild_carrots"):
			return 49;
	
		case joaat("provision_wldflwr_agarita"):
			return 40;
	
		case joaat("consumable_herb_ginseng"):
			return 2;
	
		case joaat("provision_wldflwr_wild_rhubarb"):
			return 47;
	
		case joaat("consumable_herb_vanilla_flower"):
			return 38;
	
		case joaat("consumable_herb_creeping_thyme"):
			return 12;
	}

	return 0;
}

void func_63(int iParam0, int iParam1) // Position - 0x1FE3 Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_31(joaat("eaten"), func_146(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_32(func_147(joaat("herbs_eaten")), iParam1);
	return;
}

int func_64() // Position - 0x2015 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_65(Hash hParam0, int iParam1) // Position - 0x2023 Hash - 0x5F9FD31D ^0xFCD5D23C
{
	int num;

	if (func_64() == 0)
	{
		num = func_1(hParam0, -949239683);
	
		if (iParam1 == -1387038764)
			return;
	
		if (func_13(hParam0, -136654233))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_CannedGoodsEaten_00"), 1);
	
		if (func_13(hParam0, 1765172170) || 1443104131 == num || -1919515848 == num)
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TobaccoSmokedChewed_00"), 1);
	
		if (func_13(hParam0, 1573112293))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_HerbsTasted_00"), 1);
	
		if (func_13(hParam0, -2085281117) && !func_13(hParam0, -1237028043))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_FreshProduceEaten_00"), 1);
	
		if (func_13(hParam0, 200705431))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_DryGoodsEaten_00"), 1);
	
		if (func_13(hParam0, joaat("ci_tag_item_meat_animal")) || func_13(hParam0, -839724752) || func_13(hParam0, 1264218912) || hParam0 == joaat("consumable_offal"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_MeatEaten_00"), 1);
	
		if (func_13(hParam0, -764700608))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), joaat("MPDC_Consumable_TonicOilUsed_00"), 1);
	
		if (hParam0 == joaat("consumable_candy_bag") || hParam0 == joaat("consumable_chocolate_bar") || hParam0 == joaat("consumable_peppermint"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), -1075364325, 1);
	
		if (hParam0 == joaat("consumable_coffee"))
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("FEATURE_PM_DAILY_CHALLENGES"), 2024753712, 1);
	}

	return;
}

BOOL func_66(Any* panParam0) // Position - 0x21C4 Hash - 0x6E844BA9 ^0x869AC4DA
{
	var src;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);

	if (!func_148(1))
		return false;

	*panParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

BOOL func_67(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x21F3 Hash - 0xE0BDD26B ^0x7E1BB2F9
{
	var unk;

	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;
	unk = panParam0->f_1;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_68(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x222C Hash - 0x16FE2F8B ^0x16FE2F8B
{
	return func_149(&uParam0, 61, 1);
}

void func_69(int iParam0) // Position - 0x223D Hash - 0x241D946F ^0xA232193E
{
	int num;

	func_150(iParam0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 1, false, false);
	func_151();
	func_152(8388608);

	if (func_153(iParam0, &num))
		func_155(func_154(num));

	return;
}

void func_70(BOOL bParam0, BOOL bParam1) // Position - 0x228C Hash - 0x2F17103B ^0x1C4D2C36
{
	if (func_156(255) == 4)
		return;

	if (_IS_NULL_VECTOR(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
		return;

	if (!bParam0)
	{
		func_158(0);
	}
	else
	{
		if (bParam1)
			func_159(0, false, 0, true);
	
		func_160(0);
		func_161(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = joaat("volSphere");
		func_162(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
	
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}

	func_163(Global_1102813.f_3839, 36);
	func_164(Global_1102813.f_3878, 36);
	return;
}

BOOL func_71(int iParam0) // Position - 0x23D7 Hash - 0xE114E312 ^0xE114E312
{
	int num;

	num = func_165(iParam0, 1);

	if (num >= 150 && num <= 152)
		return true;

	return false;
}

BOOL func_72(int iParam0) // Position - 0x23FF Hash - 0x2BE93DAE ^0x2BE93DAE
{
	int num;

	num = func_165(iParam0, 1);

	if (num < 1 || num >= 153)
		return false;

	return true;
}

BOOL func_73(int iParam0) // Position - 0x2427 Hash - 0x58B99E54 ^0x58B99E54
{
	int num;

	num = func_83(iParam0, 1);

	if (num >= 180 && num <= 182)
		return true;

	return false;
}

BOOL func_74(int iParam0) // Position - 0x244F Hash - 0xFFB3C2F0 ^0xFFB3C2F0
{
	int num;

	num = func_83(iParam0, 1);

	if (num < 2 || num >= 183)
		return false;

	return true;
}

BOOL func_75(int iParam0) // Position - 0x2477 Hash - 0x29DE2428 ^0x62E85AA
{
	if (!func_74(iParam0))
		return false;

	return Global_1156111.f_35859.f_919[func_83(iParam0, 1) /*12*/] == -1;
}

// Unhandled jump detected. Output should be considered invalid
int func_76(int iParam0) // Position - 0x24A4 Hash - 0x85160494 ^0x6688B38
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int j;
	int k;

	if (!func_74(iParam0))
		return 0;

	num = func_83(iParam0, 1);

	if (!func_72(Global_1156111.f_35859.f_919[num /*12*/]))
		return 1;

	num4 = func_165(Global_1156111.f_35859.f_919[num /*12*/], 1);

	for (i = 0; i < Global_1156111.f_35859[num4 /*6*/].f_5; i = i + 1)
	{
		num2 = Global_1156111.f_35859[num4 /*6*/][i];
	
		switch (func_166(iParam0, num2))
		{
			case 0:
				func_167(num2, iParam0, i);
				break;
		
			case 1:
				for (j = 0; j < Global_1156111.f_35859.f_11700; j = j + 1)
				{
					if (Global_1156111.f_35859.f_9503[j /*3*/] != num2 || Global_1156111.f_35859.f_9503[j /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_167(num2, iParam0, i);
						func_168(&Global_1156111.f_35859.f_9503[j /*3*/]);
						Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 - 1;
						Global_1156111.f_35859.f_9503[j /*3*/] = { Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] };
						func_168(&Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/]);
						break;
					}
				}
				break;
		
			case 2:
				goto 0x25E;
		}
	
		num3 = func_169(num2, 1);
		func_170(num3, -1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_29 <= 0)
		{
			func_171(num3, 0);
		
			for (k = 0; k < Global_1156111.f_35859.f_9502; k = k + 1)
			{
				if (Global_1156111.f_35859.f_9302[k] != num2)
				{
				}
				else
				{
					Global_1156111.f_35859.f_9302[k] = -1;
					Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 - 1;
					Global_1156111.f_35859.f_9302[k] = Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502];
					Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = -1;
					break;
				}
			}
		}
	}

	Global_1156111.f_35859.f_919[num /*12*/] = -1;
	func_172(&Global_1156111.f_35859.f_919[num /*12*/]);
	return 1;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_77(int iParam0, int iParam1) // Position - 0x2734 Hash - 0x7239F0F1 ^0x156DB2F1
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;

	if (!func_74(iParam0))
		return false;

	num = func_83(iParam0, 1);

	if (!func_72(iParam1))
		return false;

	num2 = func_165(iParam1, 1);

	if (Global_1156111.f_35859.f_919[num /*12*/] == iParam1)
		return true;

	if (func_72(Global_1156111.f_35859.f_919[num /*12*/]))
		func_76(iParam0);

	Global_1156111.f_35859.f_919[num /*12*/] = iParam1;

	for (i = 0; i < Global_1156111.f_35859[num2 /*6*/].f_5; i = i + 1)
	{
		num3 = Global_1156111.f_35859[num2 /*6*/][i];
		num4 = func_169(num3, 1);
	
		switch (func_173(iParam0, num3))
		{
			case 0:
				func_174(num3, iParam0, i);
				break;
		
			case 1:
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/] = num3;
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1156111.f_35859.f_9503[Global_1156111.f_35859.f_11700 /*3*/].f_2 = i;
				Global_1156111.f_35859.f_11700 = Global_1156111.f_35859.f_11700 + 1;
				break;
		
			case 2:
				goto 0x1AB;
		}
	
		if (Global_1156111.f_35859.f_3116[num4 /*31*/].f_29 <= 0)
		{
			Global_1156111.f_35859.f_9302[Global_1156111.f_35859.f_9502] = num3;
			Global_1156111.f_35859.f_9502 = Global_1156111.f_35859.f_9502 + 1;
		}
	
		func_170(num4, 1);
	}

	return true;
}

int func_78(int iParam0) // Position - 0x28EC Hash - 0x37C30FDA ^0x37C30FDA
{
	int num;

	num = func_83(iParam0, 1);

	if (func_175(iParam0))
		return num - 2;
	else if (func_176(iParam0))
		return num - 130;
	else if (func_177(iParam0))
		return num - 166;
	else if (func_178(iParam0))
		return num - 167;
	else if (func_179(iParam0))
		return num - 172;
	else if (func_73(iParam0))
		return num - 180;
	else if (func_180(iParam0))
		return num - 150;

	return -1;
}

BOOL func_79() // Position - 0x2986 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

BOOL func_80(int iParam0, int iParam1) // Position - 0x29AB Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_81(const char* sParam0) // Position - 0x29BA Hash - 0x2124511C ^0xA40AAA4F
{
	int i;

	i = 0;

	for (i = 0; i < Global_1939434.f_161; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939434[i /*16*/].f_10), sParam0))
			return true;
	}

	return false;
}

void func_82(int iParam0) // Position - 0x29F4 Hash - 0x22E7EDA ^0x22E7EDA
{
	if (func_80(iParam0, 1))
		func_181(1);

	return;
}

int func_83(int iParam0, int iParam1) // Position - 0x2A0B Hash - 0x26934C66 ^0x26934C66
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
	
		case -2059285007:
			return 167;
	
		case -2006026692:
			return 176;
	
		case -1993903481:
			return 124;
	
		case -1970041458:
			return 142;
	
		case -1935700575:
			return 136;
	
		case -1927422497:
			return 127;
	
		case -1920464018:
			return 58;
	
		case -1919393558:
			return 27;
	
		case -1857550353:
			return 173;
	
		case -1855662261:
			return 55;
	
		case -1840995238:
			return 15;
	
		case -1835722213:
			return 88;
	
		case -1790318144:
			return 106;
	
		case -1786033368:
			return 62;
	
		case -1767968552:
			return 86;
	
		case -1767662471:
			return 32;
	
		case -1729980669:
			return 108;
	
		case -1729554078:
			return 49;
	
		case -1727526861:
			return 109;
	
		case -1722264360:
			return 18;
	
		case -1719665775:
			return 37;
	
		case -1716981503:
			return 107;
	
		case -1697567574:
			return 72;
	
		case -1685270562:
			return 181;
	
		case -1631930150:
			return 166;
	
		case -1629969648:
			return 174;
	
		case -1605880447:
			return 120;
	
		case -1575244501:
			return 61;
	
		case -1551628748:
			return 74;
	
		case -1543433893:
			return 70;
	
		case -1539337723:
			return 121;
	
		case -1525401254:
			return 64;
	
		case -1525233154:
			return 47;
	
		case -1491472827:
			return 94;
	
		case -1486927560:
			return 112;
	
		case -1480068681:
			return 50;
	
		case -1478178768:
			return 148;
	
		case -1465202595:
			return 104;
	
		case -1459368569:
			return 116;
	
		case -1431848307:
			return 76;
	
		case -1418298797:
			return 155;
	
		case -1391865428:
			return 171;
	
		case -1378468884:
			return 60;
	
		case -1291022662:
			return 117;
	
		case -1288042557:
			return 19;
	
		case -1248720641:
			return 7;
	
		case -1229834518:
			return 89;
	
		case -1223791123:
			return 79;
	
		case -1209874968:
			return 45;
	
		case -1197630873:
			return 153;
	
		case -1196069774:
			return 180;
	
		case -1181880939:
			return 80;
	
		case -1170784825:
			return 38;
	
		case -1125028284:
			return 137;
	
		case -1123356036:
			return 147;
	
		case -1100659165:
			return 6;
	
		case -1089821002:
			return 85;
	
		case -1084890102:
			return 172;
	
		case -1080696981:
			return 92;
	
		case -1010031245:
			return 39;
	
		case -992423055:
			return 157;
	
		case -979738281:
			return 77;
	
		case -931294997:
			return 111;
	
		case -920221586:
			return 110;
	
		case -900877140:
			return 30;
	
		case -885737328:
			return 114;
	
		case -885646667:
			return 67;
	
		case -837774766:
			return 78;
	
		case -813902658:
			return 182;
	
		case -799500009:
			return 145;
	
		case -751329575:
			return 139;
	
		case -711254121:
			return 132;
	
		case -660114191:
			return 31;
	
		case -649929946:
			return 53;
	
		case -636552746:
			return 123;
	
		case -587737142:
			return 71;
	
		case -546870456:
			return 159;
	
		case -521477124:
			return 82;
	
		case -481051896:
			return 135;
	
		case -425216802:
			return 17;
	
		case -415437740:
			return 103;
	
		case -415250715:
			return 144;
	
		case -392183396:
			return 90;
	
		case -343572565:
			return 21;
	
		case -340578116:
			return 169;
	
		case -286632741:
			return 8;
	
		case -267135864:
			return 138;
	
		case -233204301:
			return 105;
	
		case -203268054:
			return 143;
	
		case -161625840:
			return 177;
	
		case -126580932:
			return 0;
	
		case -117284255:
			return 122;
	
		case -60432888:
			return 44;
	
		case -56802666:
			return 102;
	
		case -47513954:
			return 99;
	
		case -46116991:
			return 163;
	
		case -35033037:
			return 133;
	
		case -33431232:
			return 12;
	
		case -29822088:
			return 40;
	
		case 0:
			return 1;
	
		case 1213703:
			return 154;
	
		case 54499763:
			return 98;
	
		case 111084081:
			return 56;
	
		case 114587291:
			return 29;
	
		case 149216078:
			return 57;
	
		case 168336706:
			return 149;
	
		case 173401469:
			return 100;
	
		case 180714777:
			return 81;
	
		case 268103762:
			return 97;
	
		case 282858309:
			return 183;
	
		case 320758674:
			return 158;
	
		case 352539363:
			return 179;
	
		case 362862598:
			return 170;
	
		case 398279342:
			return 34;
	
		case 408582472:
			return 5;
	
		case 420477860:
			return 25;
	
		case 456199285:
			return 168;
	
		case 509781427:
			return 93;
	
		case 550487527:
			return 35;
	
		case 576694808:
			return 175;
	
		case 638586808:
			return 118;
	
		case 659100749:
			return 59;
	
		case 666050502:
			return 65;
	
		case 698214003:
			return 2;
	
		case 713106899:
			return 36;
	
		case 780689752:
			return 3;
	
		case 791791441:
			return 125;
	
		case 797908556:
			return 42;
	
		case 798283666:
			return 141;
	
		case 807983049:
			return 150;
	
		case 839199173:
			return 91;
	
		case 846387993:
			return 14;
	
		case 852774198:
			return 113;
	
		case 878491929:
			return 33;
	
		case 887717126:
			return 66;
	
		case 926420921:
			return 51;
	
		case 946848176:
			return 68;
	
		case 952755846:
			return 24;
	
		case 955999834:
			return 134;
	
		case 956867472:
			return 9;
	
		case 1036630721:
			return 10;
	
		case 1037792287:
			return 140;
	
		case 1052684812:
			return 87;
	
		case 1075856357:
			return 95;
	
		case 1078589127:
			return 46;
	
		case 1095779900:
			return 22;
	
		case 1110815339:
			return 152;
	
		case 1138017610:
			return 11;
	
		case 1156950836:
			return 83;
	
		case 1195903441:
			return 52;
	
		case 1278022357:
			return 48;
	
		case 1281707602:
			return 164;
	
		case 1323028278:
			return 41;
	
		case 1374979106:
			return 28;
	
		case 1405624312:
			return 146;
	
		case 1444077748:
			return 23;
	
		case 1449867002:
			return 162;
	
		case 1498983922:
			return 84;
	
		case 1547488310:
			return 161;
	
		case 1554410187:
			return 73;
	
		case 1585362808:
			return 16;
	
		case 1636352616:
			return 151;
	
		case 1662680949:
			return 178;
	
		case 1698995037:
			return 4;
	
		case 1769731136:
			return 115;
	
		case 1801131110:
			return 75;
	
		case 1806354060:
			return 96;
	
		case 1811663962:
			return 131;
	
		case 1828803907:
			return 20;
	
		case 1829805500:
			return 54;
	
		case 1830494920:
			return 101;
	
		case 1838787462:
			return 129;
	
		case 1865781806:
			return 165;
	
		case 1899963938:
			return 63;
	
		case 1900141702:
			return 156;
	
		case 1903067887:
			return 126;
	
		case 1907663129:
			return 43;
	
		case 2040423027:
			return 128;
	
		case 2050123975:
			return 130;
	
		case 2096770678:
			return 119;
	
		case 2110112797:
			return 69;
	
		case 2119170919:
			return 160;
	
		case 2132307595:
			return 26;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_84(int iParam0) // Position - 0x320C Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_182(iParam0);
}

struct<5> func_85(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x321A Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_183(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_184(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_191(hParam0, -1823706425))
			{
				unk = { func_86(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_191(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_86(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_86(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_191(hParam0, -1653629781))
			{
				unk = { func_86(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_189(bParam1) };
		
			switch (func_190(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_86(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_185(bParam1) };
		
			if (iParam2 && func_186(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_187(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_188(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_192(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_191(hParam0, -1653629781))
			{
				unk = { func_86(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
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

struct<4> func_86(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x358E Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_3(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_87(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

int func_87(BOOL bParam0) // Position - 0x35BF Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_64() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_88(BOOL bParam0) // Position - 0x3600 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_64() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_87(bParam0));
}

struct<17> func_89(var uParam0, BOOL bParam1) // Position - 0x361E Hash - 0x76921103 ^0xA9DF955B
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

	if (bParam1)
	{
		unk.f_15 = func_193(uParam0->f_4, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_194() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

int func_90(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x369F Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_195(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_197(func_196(num, hParam0, panParam1), num, panParam1);
	else
		return func_198(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 18), num, panParam1);

	return -1;
}

void func_91() // Position - 0x3709 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_1953292.f_1046 = 0;
	return;
}

BOOL func_92(BOOL bParam0) // Position - 0x3719 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1953292 && bParam0 != false;
}

int func_93(int iParam0) // Position - 0x372A Hash - 0xFF1F880 ^0x1EBA9018
{
	int i;

	for (i = 0; i < Global_1953292.f_2938; i = i + 1)
	{
		if (Global_1953292.f_2938.f_2[i /*2*/] == iParam0)
			return i;
	}

	return -1;
}

void func_94(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3762 Hash - 0x28B4597A ^0x28B4597A
{
	func_199(&(Global_1953292.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
	return;
}

Hash func_95(Hash hParam0, Hash hParam1) // Position - 0x377F Hash - 0x89CFE0A ^0x76F9281
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_190(hash) == hParam0 || hParam0 == 81053684 && func_13(hash, 160827531))
		{
			if (hParam1 == hash)
			{
			}
			else
			{
				return hash;
			}
		}
	}

	return 0;
}

BOOL func_96(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x37E8 Hash - 0xDF8D2AB3 ^0xDF8D2AB3
{
	switch (func_190(hParam1))
	{
		case -999503751:
			if (func_200(hParam1) && !func_202(2, func_201(hParam1)))
			{
				func_203(hParam1, bParam2, bParam3, bParam4, bParam5);
				return false;
			}
		
			return true;
	
		case 81053684:
			if (func_13(hParam1, -1303648999) && func_13(uParam0->f_1[1 /*3*/], -93469181))
				func_203(hParam1, bParam2, bParam3, bParam4, bParam5);
			break;
	}

	if (func_13(hParam1, -166674229))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_87(bParam5), hParam1, 0);

	return true;
}

BOOL func_97(Hash hParam0) // Position - 0x3888 Hash - 0x2DEC1E22 ^0x1D7D2CA6
{
	return !func_13(hParam0->f_1[1 /*3*/], -93469181);
}

BOOL func_98(Hash hParam0) // Position - 0x38A1 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_205(func_204(hParam0));
}

void func_99(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x38B3 Hash - 0x4CA93688 ^0x102635B5
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_87(bParam1);

	if (func_206(hParam0, true) > 0)
	{
		for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
		{
			item = Global_1953292.f_3352[i];
		
			if (func_190(item) == hParam0 || hParam0 == 81053684 && func_13(item, 160827531))
				INVENTORY::_INVENTORY_DISABLE_ITEM(inventoryId, item, 0);
		}
	}

	if (bParam2 && !func_98(hParam0))
		func_207(false, hParam0);

	func_208(func_204(hParam0), 6);
	return;
}

void func_100(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x394B Hash - 0x4CA93688 ^0x102635B5
{
	int i;
	Hash item;
	int inventoryId;

	inventoryId = func_87(bParam1);

	if (func_206(hParam0, true) > 0)
	{
		for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
		{
			item = Global_1953292.f_3352[i];
		
			if (func_190(item) == hParam0 || hParam0 == 81053684 && func_13(item, 160827531))
			{
				if (func_13(item, -166674229) && hParam0 != -999503751)
				{
				}
				else
				{
					INVENTORY::_INVENTORY_ENABLE_ITEM(inventoryId, item);
				}
			}
		}
	}

	if (bParam2 && func_98(hParam0))
		func_207(true, hParam0);

	func_209(func_204(hParam0), 6);
	return;
}

void func_101(Hash hParam0, int iParam1) // Position - 0x39FF Hash - 0x14EA6D0C ^0x6AD3B7B1
{
	int i;
	Hash hash;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = { func_210(iParam1, i) };
	
		if (hash == hParam0)
		{
			hash = Global_1953292.f_83[iParam1 /*12*/];
			hash.f_1 = 0;
			hash.f_2 = 0;
			func_211(&hash, iParam1, i);
		}
	}

	return;
}

void func_102(Hash hParam0) // Position - 0x3A4D Hash - 0xB956E3E4 ^0xC6800621
{
	int i;
	Hash hash;
	int num;

	num = func_213(func_212(hParam0), 1);

	if (num == -358215195)
		return;

	for (i = 0; i < 11; i = i + 1)
	{
		hash = { func_210(num, i) };
	
		if (func_190(hash) == hParam0)
		{
			hash = Global_1953292.f_83[num /*12*/];
			hash.f_1 = 0;
			hash.f_2 = 0;
			func_211(&hash, num, i);
		}
	}

	return;
}

void func_103() // Position - 0x3AB9 Hash - 0x6FC4321 ^0xE83F5B71
{
	Global_1149432.f_4787.f_7 = Global_1953292.f_1676.f_1[1 /*3*/];
	return;
}

void func_104() // Position - 0x3AD6 Hash - 0x7E263AAC ^0x591F214
{
	int num;
	int i;

	num = 1;

	for (i = 0; i < 11; i = i + 1)
	{
		func_211(&Global_1953292.f_1676.f_1[num /*3*/], num, i);
	}

	return;
}

void func_105(var uParam0, var uParam1, int iParam2) // Position - 0x3B09 Hash - 0xB6DE4FAF ^0x69ED2541
{
	int i;

	Global_17418.f_55.f_664.f_1354 = uParam0->f_1;
	Global_17418.f_55.f_664.f_1354.f_1 = uParam0->f_2;
	Global_17418.f_55.f_664.f_1354.f_2 = uParam0->f_3;
	Global_17418.f_55.f_664.f_1354.f_3 = uParam0->f_4;
	Global_17418.f_55.f_664.f_1354.f_4 = uParam0->f_5;

	if (uParam0->f_6 <= 0)
		return;

	for (i = 0; i < 22; i = i + 1)
	{
		if (i >= uParam0->f_6)
		{
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/] = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_1 = -1;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_2 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_3 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_4 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_5 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_6 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_7 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_8 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_9 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_10 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_11 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_12 = 0f;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_13 = 0f;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_14 = 0f;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_15 = 0;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_16 = 0;
		}
		else
		{
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/] = uParam1->[i /*18*/];
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_1 = uParam1->[i /*18*/].f_1;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_2 = uParam1->[i /*18*/].f_3;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_3 = uParam1->[i /*18*/].f_4;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_4 = uParam1->[i /*18*/].f_5;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_5 = uParam1->[i /*18*/].f_6;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_6 = uParam1->[i /*18*/].f_7;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_7 = uParam1->[i /*18*/].f_8;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_8 = uParam1->[i /*18*/].f_9;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_9 = uParam1->[i /*18*/].f_10;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_10 = uParam1->[i /*18*/].f_11;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_11 = uParam1->[i /*18*/].f_12;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_12 = uParam1->[i /*18*/].f_13;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_13 = uParam1->[i /*18*/].f_14;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_14 = uParam1->[i /*18*/].f_15;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_15 = uParam1->[i /*18*/].f_16;
			Global_17418.f_55.f_664.f_1354.f_5[i /*17*/].f_16 = uParam1->[i /*18*/].f_17;
		}
	}

	return;
}

int func_106(int iParam0) // Position - 0x3EA7 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_107(int iParam0) // Position - 0x3ECC Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_108(int iParam0) // Position - 0x3EDF Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_109(int iParam0) // Position - 0x3EF2 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_110(int iParam0) // Position - 0x3F05 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_111(int iParam0) // Position - 0x3F17 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_112(int iParam0, int iParam1) // Position - 0x3F29 Hash - 0x893AC59E ^0x893AC59E
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

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3FC3 Hash - 0xA65AB937 ^0xA65AB937
{
	func_215(iParam0, iParam6);
	func_216(iParam0, iParam5);
	func_217(iParam0, iParam4);
	func_218(iParam0, iParam3);
	func_219(iParam0, iParam2);
	func_220(iParam0, iParam1);
	return;
}

BOOL func_114(int iParam0) // Position - 0x3FFB Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_111(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_110(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_109(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_106(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_107(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_108(iParam0);

	if (num6 < 1 || num6 > func_112(num5, num4))
		return false;

	return true;
}

void func_115(BOOL bParam0) // Position - 0x40DC Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1953292 = Global_1953292 || bParam0;
	return;
}

void func_116(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x40EF Hash - 0x21CB5355 ^0x21CB5355
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
		case 23:
			if (Global_1953292.f_918 >= 25)
				return;
		
			if (func_221(iParam0))
			{
				for (i = 0; i < Global_1953292.f_918; i = i + 1)
				{
					num = (Global_1953292.f_923 + i) % 25;
				
					if (Global_1953292.f_736[num /*4*/] == iParam0 && Global_1953292.f_736[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_736[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_222(iParam0);
			Global_1953292.f_736[Global_1953292.f_924 /*4*/] = { iParam0 };
			Global_1953292.f_918 = Global_1953292.f_918 + 1;
			Global_1953292.f_924 = (Global_1953292.f_924 + 1) % 25;
			func_115(8);
			break;
	
		case 24:
		case 25:
			if (Global_1953292.f_919 >= 25)
				return;
		
			if (func_221(iParam0))
				return;
		
			func_222(iParam0);
			Global_1953292.f_635[Global_1953292.f_919 /*4*/] = { iParam0 };
			Global_1953292.f_919 = Global_1953292.f_919 + 1;
			func_115(8);
			break;
	
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953292.f_920 >= 20)
				return;
		
			if (func_221(iParam0))
			{
				for (i = 0; i < Global_1953292.f_920; i = i + 1)
				{
					num = (Global_1953292.f_921 + i) % 20;
				
					if (Global_1953292.f_837[num /*4*/] == iParam0 && Global_1953292.f_837[num /*4*/].f_1 == iParam0.f_1 && Global_1953292.f_837[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			if (iParam0 == 34)
			{
				Global_1953292.f_930 = 1;
				Global_1953292.f_930.f_1 = iParam0.f_2;
				Global_1953292.f_930.f_2 = iParam0.f_3;
			}
		
			func_222(iParam0);
			Global_1953292.f_837[Global_1953292.f_922 /*4*/] = { iParam0 };
			Global_1953292.f_920 = Global_1953292.f_920 + 1;
			Global_1953292.f_922 = (Global_1953292.f_922 + 1) % 20;
			func_115(8);
			break;
	}

	return;
}

BOOL func_117(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x43EB Hash - 0x6F6F94C ^0x832D60DF
{
	var unk;
	int num;
	int i;

	func_223();

	if (iParam2 == 39)
	{
		unk = { func_85(hParam0, true, 0) };
		iParam2 = func_213(func_224(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_92(32768) && iParam2 == 10)
		func_225(1108822547);

	num = 0;

	if (bParam4)
		num = 3;

	if (func_226(hParam0, true))
		func_227(&(Global_1953292.f_1557), &hParam0, iParam2, bParam5);

	if (bParam6)
		func_228(iParam2);

	func_229(iParam2, num);
	func_230(&Global_1953292.f_1557.f_1[iParam2 /*3*/], 4, 6);
	func_230(&Global_1953292.f_1676.f_1[iParam2 /*3*/], 4, 6);
	func_231(&(Global_1953292.f_1557), hParam0, iParam2, true, num);

	if (hParam1 == 0)
		hParam1 = Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1;

	Global_1953292.f_1557.f_1[iParam2 /*3*/] = hParam0;
	Global_1953292.f_1557.f_1[iParam2 /*3*/].f_1 = func_232(hParam0, iParam2, hParam1);

	if (bParam3)
	{
		for (i = 0; i < Global_1953292.f_2938; i = i + 1)
		{
			if (Global_1953292.f_2938.f_2[i /*2*/] >= 0 && Global_1953292.f_2938.f_2[i /*2*/] < 39)
			{
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/] = 0;
				Global_1953292.f_2765[Global_1953292.f_2938.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_234(func_233(Global_1953292.f_2938.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

BOOL func_118(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x458A Hash - 0x1B60D696 ^0x654CD4B3
{
	Hash hash;
	int num;
	BOOL flag;
	var unk;
	var unk19;

	if (func_235(&(Global_1953292.f_1048), 2))
		return false;

	if (iParam1 == -2118203104)
		hash = hParam0;
	else if (iParam1 == -1811760631)
		hash = func_236(hParam0);
	else
		return false;

	num = func_237(uParam3, iParam1);
	flag = func_238(hash) != 0;

	if (num == -1 && flag)
		return false;

	if (flag)
	{
		if (bParam4)
			func_239(uParam2, uParam3, iParam1);
		else
			func_240(uParam2, uParam3, num);
	
		return true;
	}

	if (bParam4)
	{
		unk.f_2 = -1;
		unk.f_13 = 1065353216;
		unk.f_14 = 1065353216;
	
		if (!func_241(&unk, hash, false, true, 6))
			return false;
	
		if (num != -1 && unk.f_3 == uParam3->[num /*18*/].f_3)
			return false;
	
		func_242(uParam2, uParam3, &unk);
	}
	else if (num == -1)
	{
		func_243(uParam2, uParam3, hash, false, true);
	}
	else
	{
		unk19.f_2 = -1;
		unk19.f_13 = 1065353216;
		unk19.f_14 = 1065353216;
	
		if (!func_241(&unk19, hash, false, true, 6))
			return false;
	
		uParam3->[num /*18*/] = { unk19 };
	}

	return true;
}

void func_119(int iParam0) // Position - 0x46CF Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1953292.f_1046 = iParam0;
	return;
}

BOOL func_120(Hash hParam0, int iParam1) // Position - 0x46E0 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_121(int iParam0) // Position - 0x46FA Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_245(func_244(iParam0));
}

BOOL func_122(Player plParam0) // Position - 0x470C Hash - 0xD9DF34E9 ^0x1EDCC4EC
{
	float num;

	num = func_246(plParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(plParam0);
	return num <= 1f;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x4727 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_106(*iParam0);
	i = func_107(*iParam0);
	j = func_108(*iParam0);
	k = func_109(*iParam0);
	l = func_110(*iParam0);
	m = func_111(*iParam0);

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
	
		num3 = func_112(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_113(iParam0, m, l, k, j, i, num);
	return;
}

int func_124(int iParam0, int iParam1) // Position - 0x489A Hash - 0xAECFF2CE ^0x28AB7A26
{
	if (iParam1 == 2)
		iParam1 = func_121(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
	
		default:
		
	}

	return -1;
}

int func_125(int iParam0, int iParam1) // Position - 0x48EA Hash - 0xAECFF2CE ^0xA6B4AB7D
{
	if (iParam1 == 2)
		iParam1 = func_121(2);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1;
	
		case 1:
			return Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
	
		default:
		
	}

	return -15;
}

void func_126(int iParam0, int iParam1, int iParam2) // Position - 0x493C Hash - 0x7E1E307C ^0xC0CC80A4
{
	if (iParam2 == 2)
		iParam2 = func_121(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_127(int iParam0, int iParam1, int iParam2) // Position - 0x4992 Hash - 0x7E1E307C ^0x81E4DDD9
{
	if (iParam2 == 2)
		iParam2 = func_121(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_128(Ped pedParam0, int iParam1, float fParam2) // Position - 0x49E8 Hash - 0xD72B3B3A ^0x22A28347
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (fParam2 > 100f)
		fParam2 = 100f;
	else if (fParam2 < 0f)
		fParam2 = 0f;

	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(pedParam0, func_247(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_129(int iParam0, int iParam1, int iParam2) // Position - 0x4A3D Hash - 0x9FB0AAD8 ^0x433FFF3E
{
	if (iParam2 == 2)
		iParam2 = func_121(2);

	if (iParam1 > 0)
		iParam1 = iParam1 + MISC::GET_GAME_TIMER();

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_130(Ped pedParam0, int iParam1, float fParam2) // Position - 0x4A9E Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_248(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_249(iParam1), fParam2, -1);

	return;
}

void func_131(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x4ACA Hash - 0xD1E7435D ^0x45C01A35
{
	int num;

	if (iParam3 == 2)
		iParam3 = func_121(2);

	num = Global_1295666.f_16;
	func_250(iParam0, fParam1, iParam3);

	if (bParam2)
		func_251(iParam0, num, iParam3);

	return;
}

BOOL func_132(int iParam0, BOOL bParam1) // Position - 0x4B00 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_42(func_40(), iParam0, bParam1);
}

float func_133(int iParam0, int iParam1) // Position - 0x4B14 Hash - 0x422268C7 ^0x22464E0E
{
	if (iParam1 == 2)
		iParam1 = func_121(1);

	switch (iParam1)
	{
		case 0:
			return Global_1956875.f_1431.f_26[iParam0];
	
		case 1:
			return Global_1956875.f_1565.f_2.f_26[iParam0];
	
		default:
		
	}

	return -1f;
}

int func_134(float fParam0) // Position - 0x4B60 Hash - 0x991CF40A ^0x6EC613A5
{
	float num;

	num = fParam0;
	num = (2f * num) - 100f;
	return BUILTIN::ROUND((num / 100f) * BUILTIN::TO_FLOAT(10));
}

float func_135(float fParam0, float fParam1, float fParam2) // Position - 0x4B8B Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_136(int iParam0, float fParam1, int iParam2) // Position - 0x4BB2 Hash - 0x91D240B ^0x31A81242
{
	if (!func_252(iParam0))
		return 0;

	if (iParam2 == 2)
		iParam2 = func_121(2);

	func_253(iParam0, fParam1, iParam2);

	if (!ENTITY::IS_ENTITY_DEAD(Global_1295666.f_3))
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295666.f_3, iParam0, BUILTIN::FLOOR(fParam1));

	return 1;
}

void func_137(int iParam0, var uParam1, var uParam2) // Position - 0x4C03 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_138(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4C1F Hash - 0x6E07CB9 ^0x6E07CB9
{
	if (iParam1 < 0 || iParam1 > 32)
		return false;

	if (func_254(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_255(iParam0))
		return false;

	if (func_256(iParam0))
		return false;

	if (Global_1900460.f_67 && !func_257(iParam0, 1) || func_258(32768))
		if (!func_257(iParam0, 262144) || !Global_1904402.f_8875)
			return false;

	if (!func_259())
		return false;

	return true;
}

void func_139(int iParam0, int iParam1) // Position - 0x4CC1 Hash - 0x978E21B ^0xA1438975
{
	var address;

	address = Global_1904402[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1904402[iParam0] = address;
	return;
}

BOOL func_140(int iParam0) // Position - 0x4CE5 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_141(int iParam0) // Position - 0x4D14 Hash - 0xB65EB704 ^0xB65EB704
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

void func_142(int iParam0) // Position - 0x4D4B Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_48(2);
	func_49(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_143(int iParam0) // Position - 0x4D88 Hash - 0x265AFF44 ^0xE695F6B4
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_52(2);
	func_53(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_144(int iParam0, BOOL bParam1) // Position - 0x4DC5 Hash - 0x71081FC9 ^0xE795FB69
{
	int num;

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = 10;

	num = func_50(2);
	func_51(BUILTIN::TO_FLOAT(iParam0 * num), false, bParam1);
	return;
}

void func_145(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4DFA Hash - 0x5C29635D ^0x5C29635D
{
	func_56(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

int func_146(int iParam0) // Position - 0x4E14 Hash - 0xBA965109 ^0xDF65C4FE
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
			return 1516353659;
	
		case 20:
			return joaat("herb_hummingbird_sage");
	
		case 21:
			return joaat("herb_indian_tobacco");
	
		case 22:
			return joaat("herb_lady_of_night_orchid");
	
		case 23:
			return joaat("herb_lady_slipper_orchid");
	
		case 24:
			return joaat("herb_milkweed");
	
		case 25:
			return joaat("herb_moccasin_flower_orchid");
	
		case 26:
			return joaat("herb_night_scented_orchid");
	
		case 27:
			return joaat("herb_oleander_sage");
	
		case 28:
			return joaat("herb_oregano");
	
		case 29:
			return joaat("herb_parasol_mushroom");
	
		case 30:
			return joaat("herb_prairie_poppy");
	
		case 31:
			return joaat("herb_queens_orchid");
	
		case 32:
			return joaat("herb_rams_head");
	
		case 33:
			return joaat("herb_rat_tail_orchid");
	
		case 34:
			return joaat("herb_red_raspberry");
	
		case 35:
			return joaat("herb_red_sage");
	
		case 36:
			return joaat("herb_sparrows_egg_orchid");
	
		case 37:
			return joaat("herb_spider_orchid");
	
		case 38:
			return joaat("herb_vanilla_flower");
	
		case 39:
			return joaat("herb_violet_snowdrop");
	
		case 40:
			return joaat("herb_wild_flwr_agarita");
	
		case 41:
			return joaat("herb_wild_flwr_blue_bonnet");
	
		case 42:
			return joaat("herb_wild_flwr_bitterweed");
	
		case 43:
			return joaat("herb_wild_flwr_blood_flower");
	
		case 44:
			return joaat("herb_wild_flwr_cardinal_flower");
	
		case 45:
			return joaat("herb_wild_flwr_chocolate_daisy");
	
		case 46:
			return joaat("herb_wild_flwr_creek_plum");
	
		case 47:
			return joaat("herb_wild_flwr_rhubarb");
	
		case 48:
			return joaat("herb_wild_flwr_wisteria");
	
		case 49:
			return joaat("herb_wild_carrots");
	
		case 50:
			return joaat("herb_wild_feverfew");
	
		case 51:
			return joaat("herb_wild_mint");
	
		case 52:
			return joaat("herb_wintergreen_berry");
	
		case 53:
			return joaat("herb_yarrow");
	}

	return 0;
}

struct<2> func_147(int iParam0) // Position - 0x51AA Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_148(int iParam0) // Position - 0x51BC Hash - 0x2795DEC ^0x4283DA24
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	return true;
}

var func_149(Any* panParam0, int iParam1, int iParam2) // Position - 0x51F7 Hash - 0xB208A015 ^0xE27079B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

void func_150(int iParam0) // Position - 0x5212 Hash - 0x29A8F290 ^0x6E801A78
{
	Global_1953292.f_1 = iParam0;
	return;
}

void func_151() // Position - 0x5222 Hash - 0x644D3D21 ^0x644D3D21
{
	func_260(128);
	return;
}

void func_152(BOOL bParam0) // Position - 0x5230 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1953292 = Global_1953292 - Global_1953292 && bParam0;
	return;
}

BOOL func_153(int iParam0, var uParam1) // Position - 0x5248 Hash - 0x5A9C5197 ^0x4A0493FD
{
	int num;

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			*uParam1 = joaat("mp_female");
			break;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			*uParam1 = joaat("mp_male");
			break;
	
		default:
			num = func_261(0, iParam0);
		
			if (num != -1)
			{
				*uParam1 = func_262(num);
			}
			else
			{
				*uParam1 = joaat("mp_male");
				return false;
			}
			break;
	}

	return true;
}

int func_154(int iParam0) // Position - 0x52A5 Hash - 0x339CDA33 ^0x339CDA33
{
	int randomIntInRange;
	int endRange;
	var unk;

	if (!func_66(&unk))
		return 0;

	if (!func_67(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_67(&unk, 37, 0, 0, 1))
		return 0;

	if (!func_67(&unk, 40, iParam0, 0, 1))
		return 0;

	if (!func_67(&unk, 59, 0, 0, 1))
		return 0;

	endRange = func_263(&unk, 12);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	if (!func_67(&unk, 60, randomIntInRange, 0, 1))
		return 0;

	return func_264(unk);
}

void func_155(int iParam0) // Position - 0x5337 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1953292.f_3 = iParam0;
	return;
}

int func_156(int iParam0) // Position - 0x5347 Hash - 0x8D78E39F ^0x46194076
{
	if (iParam0 == 255)
		return Global_1102813.f_1;

	if (iParam0 < 0 || iParam0 >= 32)
		return 26;

	if (Global_1295666.f_17[iParam0])
		return Global_1101558[iParam0 /*38*/].f_1;

	return 26;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x5392 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_158(int iParam0) // Position - 0x53BC Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_265(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_159(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x53D9 Hash - 0x79169E9C ^0xA3FE4569
{
	func_266(iParam0);

	if (!func_267(1))
		return;

	if (bParam1)
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	else if (!func_268(128) && !func_269(19))
		CAM::DO_SCREEN_FADE_OUT(iParam2);

	if (bParam3 && func_270() == 4)
		func_158(18);

	func_271(1024);
	return;
}

int func_160(int iParam0) // Position - 0x543B Hash - 0x5423E6F3 ^0xE2118439
{
	if (func_272(&(Global_1102813.f_4), iParam0, 5))
		return 1;

	return 0;
}

void func_161(var uParam0) // Position - 0x5458 Hash - 0xCF95012E ^0xCF95012E
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_162(var uParam0) // Position - 0x546A Hash - 0xFBC3ACC8 ^0xFBC3ACC8
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_163(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, int iParam30) // Position - 0x547C Hash - 0x63EE9672 ^0xDAC9325D
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0.f_4))
			{
			}
			break;
	}

	uParam0.f_16;
	VOLUME::DOES_VOLUME_EXIST(uParam0.f_27) && uParam0.f_28;
	return;
}

void func_164(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9) // Position - 0x54D2 Hash - 0x6DF4F0B2 ^0x7B946ED1
{
	switch (uParam0.f_5)
	{
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	return;
}

int func_165(int iParam0, int iParam1) // Position - 0x54FF Hash - 0x89B5041A ^0x89B5041A
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
	
		case -2082434331:
			return 152;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
	
		case -2038430863:
			return 151;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
	
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
	
		case -1246069683:
			return 124;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
	
		case -1105699593:
			return 153;
	
		case -1047626954:
			return 118;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
	
		case -980934770:
			return 125;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
	
		case -821191074:
			return 115;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
	
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
	
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
	
		case -193167881:
			return 127;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
	
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
	
		case 130533095:
			return 126;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
	
		case 158579484:
			return 117;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
	
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
	
		case 549687162:
			return 145;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
	
		case 808176588:
			return 116;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
	
		case 1130659268:
			return 123;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
	
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_166(int iParam0, int iParam1) // Position - 0x5BB6 Hash - 0x39669B5F ^0xB47C98D2
{
	int num;
	int num2;
	int num3;

	num = func_273(iParam0);
	num2 = Global_1295666;
	num3 = func_169(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num3 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (num2 == num)
				return 0;
			else
				return 2;
			break;
	
		case joaat("Duration"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
	
		default:
			if (num2 == num)
				return 1;
			break;
	}

	return 2;
}

int func_167(int iParam0, int iParam1, int iParam2) // Position - 0x5C39 Hash - 0xE22C7CA2 ^0xE22C7CA2
{
	int num;
	int num2;

	if (!func_74(iParam1))
		return 0;

	if (!func_274(iParam0))
		return 0;

	num = func_169(iParam0, 1);
	func_275(iParam0, iParam1, iParam2);

	if (func_276(Global_1156111.f_35859.f_3116[num /*31*/]) && func_277(iParam0, Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_278(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (func_279(num2))
			if (func_280(num2, num2.f_1, num2.f_2))
				func_281(Global_1156111.f_35859.f_3116[num /*31*/].f_4, num2, num2.f_1, num2.f_2);
			else
				func_282(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
		else
			func_282(Global_1156111.f_35859.f_3116[num /*31*/].f_4);
	}

	return 1;
}

void func_168(int iParam0) // Position - 0x5D31 Hash - 0xBACBE486 ^0xD8F73B9E
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = -1;
	return;
}

int func_169(int iParam0, int iParam1) // Position - 0x5D47 Hash - 0x9DD4188 ^0x9DD4188
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
	
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
	
		case -2019073637:
			return 198;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
	
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
	
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
	
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
	
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
	
		case -1394912816:
			return 199;
	
		case -1391351739:
			return 166;
	
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
	
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
	
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
	
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
	
		case -749371485:
			return 164;
	
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
	
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
	
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
	
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
	
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
	
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
	
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
	
		case -254950601:
			return 152;
	
		case -242870769:
			return 163;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
	
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
	
		case -124368414:
			return 197;
	
		case -106398498:
			return 153;
	
		case -97000889:
			return 86;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
	
		case -1:
			return 0;
	
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
	
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
	
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
	
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
	
		case 275909046:
			return 151;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
	
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
	
		case 558636891:
			return 187;
	
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
	
		case 634217179:
			return 150;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
	
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
	
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
	
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
	
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
	
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
	
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
	
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
	
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
	
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
	
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
	
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
	
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
	
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
	
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
	
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
	
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
	
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
	
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
	
		case 1256374770:
			return 165;
	
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
	
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
	
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
	
		case 1305406380:
			return 162;
	
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
	
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
	
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
	
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
	
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
	
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
	
		case 1462245043:
			return 154;
	
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
	
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
	
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
	
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
	
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
	
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
	
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
	
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
	
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
	
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
	
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
	
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
	
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
	
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
	
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
	
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
	
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
	
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
	
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
	
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
	
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
	
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
	
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
	
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
	
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
	
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
	
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
	
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_170(int iParam0, int iParam1) // Position - 0x65F8 Hash - 0x73AEC1AE ^0x984E1AE9
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1;
	return;
}

void func_171(int iParam0, int iParam1) // Position - 0x6627 Hash - 0x3B92C3EA ^0xE3D6CCE1
{
	Global_1156111.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
	return;
}

void func_172(int iParam0) // Position - 0x6643 Hash - 0x430DB350 ^0x725C69ED
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		iParam0->f_1[i /*2*/] = 0;
		iParam0->f_1[i /*2*/].f_1 = 0;
	}

	return;
}

int func_173(int iParam0, int iParam1) // Position - 0x6671 Hash - 0x36ABDA29 ^0x3AF62EAA
{
	int num;
	int num2;
	int num3;

	num = func_273(iParam0);
	num2 = Global_1295666;
	num3 = func_169(iParam1, 1);

	switch (Global_1156111.f_35859.f_3116[num3 /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
		case -2129621195:
		case -1503245593:
		case joaat("ALLY_ENTER_DEADEYE"):
			return 1;
	
		case joaat("ON_ENABLE"):
			if (num2 == num)
				return 0;
			else
				return 2;
			break;
	
		default:
			if (num2 == num)
				return 1;
			break;
	}

	return 2;
}

int func_174(int iParam0, int iParam1, int iParam2) // Position - 0x66EC Hash - 0x769F0B2E ^0x769F0B2E
{
	int num;
	BOOL flag;
	int num2;

	if (!func_74(iParam1))
		return 0;

	if (!func_274(iParam0))
		return 0;

	num = func_169(iParam0, 1);

	if (!func_283(iParam2))
		return 0;

	flag = func_276(Global_1156111.f_35859.f_3116[num /*31*/]);

	if (flag && func_284(Global_1156111.f_35859.f_3116[num /*31*/].f_4))
	{
		num2 = { func_285(Global_1156111.f_35859.f_3116[num /*31*/].f_4) };
	
		if (!func_275(num2, num2.f_1, num2.f_2))
			return 0;
	}

	if (func_280(iParam0, iParam1, iParam2))
	{
		if (flag)
			func_281(Global_1156111.f_35859.f_3116[num /*31*/].f_4, iParam0, iParam1, iParam2);
	
		return 1;
	}

	return 0;
}

BOOL func_175(int iParam0) // Position - 0x67C3 Hash - 0x56C0B35E ^0x56C0B35E
{
	int num;

	num = func_83(iParam0, 1);

	if (num >= 2 && num <= 129)
		return true;

	return false;
}

BOOL func_176(int iParam0) // Position - 0x67EA Hash - 0xCDD61996 ^0xCDD61996
{
	int num;

	num = func_83(iParam0, 1);

	if (num >= 130 && num <= 149)
		return true;

	return false;
}

BOOL func_177(int iParam0) // Position - 0x6812 Hash - 0x5052208B ^0x5052208B
{
	int num;

	num = func_83(iParam0, 1);

	if (num >= 166 && num <= 166)
		return true;

	return false;
}

BOOL func_178(int iParam0) // Position - 0x683A Hash - 0x7F6CD4C4 ^0x7F6CD4C4
{
	int num;

	num = func_83(iParam0, 1);

	if (num >= 167 && num <= 171)
		return true;

	return false;
}

BOOL func_179(int iParam0) // Position - 0x6862 Hash - 0xD766BF57 ^0xD766BF57
{
	int num;

	num = func_83(iParam0, 1);

	if (num >= 172 && num <= 179)
		return true;

	return false;
}

BOOL func_180(int iParam0) // Position - 0x688A Hash - 0xA1A1461E ^0xA1A1461E
{
	int num;

	num = func_83(iParam0, 1);

	if (num >= 150 && num <= 165)
		return true;

	return false;
}

void func_181(int iParam0) // Position - 0x68B2 Hash - 0x7A8EDFA0 ^0x9C9014A6
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (iParam0 == 1)
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");

	return;
}

BOOL func_182(int iParam0) // Position - 0x68F5 Hash - 0xA059D395 ^0x8E0849E2
{
	return func_286(Global_1940085.f_38, iParam0);
}

struct<4> func_183(BOOL bParam0) // Position - 0x6909 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_87(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_86(joaat("character"), func_194(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_86(joaat("character"), func_194(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_86(joaat("character"), func_194(), joaat("SLOTID_NONE"), bParam0);
}

int func_184(Hash hParam0) // Position - 0x69A9 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_3(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_185(BOOL bParam0) // Position - 0x69D4 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_87(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_86(923904168, func_183(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_86(923904168, func_183(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_86(923904168, func_183(bParam0), -740156546, false);
}

int func_186(Hash hParam0, BOOL bParam1) // Position - 0x6A75 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_190(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_287();
		else
			return 1;

	return 0;
}

BOOL func_187(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6AAC Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_288(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_188(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x6AC7 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_289(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_189(BOOL bParam0) // Position - 0x6AE8 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_87(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_86(271701509, func_183(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_86(271701509, func_183(bParam0), 12999093, false);
}

Hash func_190(Hash hParam0) // Position - 0x6B52 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_3(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_191(Hash hParam0, Hash hParam1) // Position - 0x6B7D Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_190(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_290(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_192(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x6BEA Hash - 0x113CD144 ^0x113CD144
{
	return func_291(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_193(Hash hParam0, Hash hParam1) // Position - 0x6C00 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_120(func_46(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

struct<4> func_194() // Position - 0x6C2C Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

BOOL func_195(Hash hParam0, Any* panParam1) // Position - 0x6C38 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_292(panParam1->f_8, hParam0, num, 2048) || func_292(panParam1->f_8, hParam0, num, 32768) || func_292(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_292(panParam1->f_8, hParam0, num, 4) || func_292(panParam1->f_8, hParam0, num, 256) || func_292(panParam1->f_8, hParam0, num, 65536) || func_292(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_292(panParam1->f_8, hParam0, num, 1) || func_292(panParam1->f_8, hParam0, num, 8) || func_292(panParam1->f_8, hParam0, num, 65536) || func_292(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_292(panParam1->f_8, hParam0, num, 1) || func_292(panParam1->f_8, hParam0, num, 16) || func_292(panParam1->f_8, hParam0, num, 2) || func_292(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_292(panParam1->f_8, hParam0, num, 8) || func_292(panParam1->f_8, hParam0, num, 4096) || func_292(panParam1->f_8, hParam0, num, 256) || func_292(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_196(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x6E0E Hash - 0xAEE55F03 ^0x36ABCD3F
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 18, panParam2, 0);
}

int func_197(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x6E25 Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_293(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_293(iParam1, 2, 0, 0);
	return -1;
}

int func_198(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x6E6E Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_293(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

void func_199(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x6E8A Hash - 0xDD68C02C ^0xDD68C02C
{
	int i;
	int num;
	BOOL flag;
	BOOL flag2;

	if (*iParam0 <= 0)
		return;

	num = -1;
	flag = false;

	if (bParam5)
	{
		num = func_201(Global_1953292.f_1676);
	
		if (bParam4)
			bParam4 = num == -1;
	}

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (func_92(4718592) && !func_294(func_190(Global_1953292.f_1557.f_1[iParam0->f_2[i /*2*/] /*3*/])))
		{
		}
		else
		{
			func_295(iParam0->f_2[i /*2*/], bParam1, bParam2, num);
			flag = true;
		}
	}

	if (!flag)
		return;

	if (bParam4)
	{
		flag2 = false;
	
		if (Global_1953292.f_1676 != 491602716 || !func_202(2, -1))
			flag2 = true;
		else if (!func_13(Global_1953292.f_1676, -166674229) && Global_1953292.f_1676 != 491602716 || !func_202(2, -1))
			flag2 = true;
	
		if (flag2)
		{
			Global_1953292.f_1676 = 491602716;
			Global_1953292.f_1557 = 491602716;
			func_296(491602716, 1, true);
			func_297(-1, false, 6);
			func_43(27, 0, 65536, 0, false);
		}
	}

	if (bParam3)
		func_298(false, true);

	return;
}

BOOL func_200(Hash hParam0) // Position - 0x6FC9 Hash - 0x5E6E1858 ^0xEA9696F7
{
	!func_3(hParam0, 0);

	if (func_13(hParam0, -1285438911))
		return true;

	return false;
}

int func_201(Hash hParam0) // Position - 0x6FEF Hash - 0x6EEB52D0 ^0x6EEB52D0
{
	int num;

	num = func_299(hParam0);

	if (num != -1)
		return num;

	return -1;
}

BOOL func_202(BOOL bParam0, int iParam1) // Position - 0x700B Hash - 0xFE9F4A91 ^0x51AAAD17
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		return Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_203(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x704E Hash - 0xB56128A7 ^0x710CD125
{
	BOOL flag;
	var unk;
	var unk120;
	int i;
	Hash hash;

	flag = false;

	switch (func_190(hParam0))
	{
		case -2061583405:
			flag = func_300(hParam0, &(Global_1953292.f_3352.f_28), bParam4);
			break;
	
		case -1719060085:
			flag = func_300(hParam0, &(Global_1953292.f_3352.f_31), bParam4);
			break;
	
		case -999503751:
			flag = func_300(hParam0, &(Global_1953292.f_3352.f_27), bParam4);
		
			if (func_13(hParam0, -166674229))
			{
				unk.f_1 = 39;
			
				if (func_301(&unk, hParam0, &unk120, false, true, false, 0, false, true, 8))
				{
					for (i = 0; i < 39; i = i + 1)
					{
						hash = unk.f_1[i /*3*/];
					
						if (func_3(hash, 0))
							func_203(hash, false, false, false, false);
					}
				}
			}
			break;
	
		case -525676072:
			flag = func_300(hParam0, &(Global_1953292.f_3352.f_29), bParam4);
			break;
	
		case 81053684:
			flag = func_300(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	
		case 119907797:
			flag = func_300(hParam0, &(Global_1953292.f_3352.f_32), bParam4);
			break;
	
		case 1388798186:
			flag = func_300(hParam0, &(Global_1953292.f_3352.f_33.f_7), bParam4);
			break;
	
		default:
			if (func_13(hParam0, 160827531))
				flag = func_300(hParam0, &(Global_1953292.f_3352.f_30), bParam4);
			break;
	}

	if (bParam3 && flag)
		func_302(false, hParam0);

	if (bParam2)
		func_303();

	if (bParam1)
		func_298(false, false);

	return;
}

int func_204(Hash hParam0) // Position - 0x71D4 Hash - 0xFFB858B2 ^0xFFB858B2
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
	
		case 81053684:
			return 8;
	
		case 119907797:
			return 32;
	
		case 1388798186:
			return 64;
	
		default:
		
	}

	return 0;
}

BOOL func_205(int iParam0) // Position - 0x722F Hash - 0x8364EAF ^0x20FEFCB3
{
	return Global_1953292.f_3352.f_33.f_6 && iParam0 != false;
}

int func_206(int iParam0, BOOL bParam1) // Position - 0x7247 Hash - 0x402BF0A8 ^0xF803E7D2
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1953292.f_3352.f_28;
	
		case -1719060085:
			return Global_1953292.f_3352.f_31;
	
		case -999503751:
			if (bParam1)
				return Global_1953292.f_3352.f_27;
			else
				return func_304();
			break;
	
		case -525676072:
			return Global_1953292.f_3352.f_29;
	
		case 81053684:
			return Global_1953292.f_3352.f_30;
	
		case 119907797:
			return Global_1953292.f_3352.f_32;
	
		case 1388798186:
			return Global_1953292.f_3352.f_33.f_7;
	}

	return 0;
}

void func_207(BOOL bParam0, Hash hParam1) // Position - 0x72EA Hash - 0x122D59B1 ^0x197A3620
{
	char* str;
	char* str2;
	char* str3;
	int num;
	Hash hash;

	if (hParam1 == -525676072)
		hash = 1535140710;
	else if (hParam1 == 81053684)
		hash = -1261287885;
	else if (hParam1 == -2061583405)
		hash = joaat("clothing_item_f_hat_000_tint_001");

	if (!func_305(hash, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	if (bParam0)
		str2 = "PORTABLE_WARDROBE_CATEGORY_ENABLED";
	else
		str2 = "PORTABLE_WARDROBE_CATEGORY_DISABLED";

	str3 = "Transaction_Positive";
	num = joaat("COLOR_PURE_WHITE");
	func_308(func_307(MISC::VAR_STRING(10, str2, MISC::VAR_STRING(0, func_306(hParam1))), num), str.f_1, MISC::GET_HASH_KEY(str), 0, num, "Transaction_Feed_Sounds", str3, 0, true);
	return;
}

void func_208(int iParam0, int iParam1) // Position - 0x73AB Hash - 0xB0EA57B9 ^0xD5490092
{
	Global_1953292.f_3352.f_33.f_6 = Global_1953292.f_3352.f_33.f_6 || iParam0;
	return;
}

void func_209(int iParam0, int iParam1) // Position - 0x73CC Hash - 0x2FE2A1EE ^0x3E3A2003
{
	Global_1953292.f_3352.f_33.f_6 = Global_1953292.f_3352.f_33.f_6 - Global_1953292.f_3352.f_33.f_6 && iParam0;
	return;
}

Vector3 func_210(int iParam0, int iParam1) // Position - 0x73F9 Hash - 0xC0396140 ^0x90919964
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

void func_211(Hash hParam0, int iParam1, int iParam2) // Position - 0x742C Hash - 0x9DADBD7B ^0xD8EA8C97
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	return;
}

int func_212(Hash hParam0) // Position - 0x7450 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_224(outSlotId);
}

int func_213(int iParam0, int iParam1) // Position - 0x7473 Hash - 0xFF013CB6 ^0xFF013CB6
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
	
		case 735520874:
			return 5;
	
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

var func_214(BOOL bParam0, var uParam1, var uParam2) // Position - 0x7644 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_215(int iParam0, int iParam1) // Position - 0x765B Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*iParam0 = *iParam0 - *iParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*iParam0 = *iParam0 | -2147483648;
	}
	else
	{
		*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*iParam0 = *iParam0 - *iParam0 & -2147483648;
	}

	return;
}

void func_216(int iParam0, int iParam1) // Position - 0x76E1 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_217(int iParam0, int iParam1) // Position - 0x771D Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_107(*iParam0);
	num2 = func_106(*iParam0);

	if (iParam1 < 1 || iParam1 > func_112(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_218(int iParam0, int iParam1) // Position - 0x7770 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_219(int iParam0, int iParam1) // Position - 0x77AB Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_220(int iParam0, int iParam1) // Position - 0x77E4 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_221(int iParam0) // Position - 0x781C Hash - 0xEA95855 ^0xEA95855
{
	return Global_1953292.f_595[iParam0] > 0;
}

void func_222(int iParam0) // Position - 0x7831 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1953292.f_595[iParam0] = Global_1953292.f_595[iParam0] + 1;
	return;
}

void func_223() // Position - 0x7851 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1953292.f_1557 = Global_1953292.f_1676;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1953292.f_1557.f_1[i /*3*/] = { Global_1953292.f_1676.f_1[i /*3*/] };
	}

	return;
}

int func_224(int iParam0) // Position - 0x7898 Hash - 0x10AF8248 ^0x31B33E5F
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1953292.f_83[i /*12*/].f_9 == iParam0)
			return func_233(i, 1);
	}

	return -358215195;
}

void func_225(int iParam0) // Position - 0x78D3 Hash - 0x65A082AE ^0x65A082AE
{
	func_234(iParam0, 8, 6);
	return;
}

BOOL func_226(Hash hParam0, BOOL bParam1) // Position - 0x78E4 Hash - 0x927056E ^0xFA981333
{
	!func_3(hParam0, 0);

	if (!bParam1 && hParam0 == joaat("clothing_item_hair_none") || hParam0 == joaat("clothing_item_beard_none"))
		return 0;

	if (func_13(hParam0, 265372629))
		return 1;

	return 0;
}

void func_227(var uParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x792F Hash - 0xD9092964 ^0xFDAEF5
{
	int num;
	Hash hash;

	if (bParam3)
	{
		if (*uParam1 == 832230214 || *uParam1 == 30652334 || *uParam1 == 750544038)
		{
			num = 16;
		
			if (func_190(uParam0->f_1[num /*3*/]) != 1882579758)
				return;
		
			hash = func_309(uParam0->f_1[num /*3*/]);
		
			if (hash != 0 && hash != Global_1953292.f_83[iParam2 /*12*/])
			{
				*uParam1 = hash;
				return;
			}
		}
	
		if (!func_310(*uParam1, iParam2))
		{
			*uParam1 = Global_1953292.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}

	*uParam1 = Global_1953292.f_83[iParam2 /*12*/];
	return;
}

void func_228(int iParam0) // Position - 0x79DD Hash - 0x20214C72 ^0x20214C72
{
	func_311(&(Global_1953292.f_2938), iParam0);
	return;
}

void func_229(int iParam0, int iParam1) // Position - 0x79F2 Hash - 0xDE0FB67D ^0xDE0FB67D
{
	if (iParam1 & 8 != 0)
		return;

	func_312(&(Global_1953292.f_2938), iParam0, iParam1);
	return;
}

void func_230(Hash hParam0, int iParam1, int iParam2) // Position - 0x7A15 Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_231(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x7A28 Hash - 0xF31ECD9B ^0x1CF13D77
{
	Hash hash;
	BOOL flag;

	hash = hParam1;
	flag = func_226(hash, true);

	if (bParam3 && func_13(uParam0->f_1[iParam2 /*3*/], 343781202))
		func_313(uParam0, uParam0->f_1[iParam2 /*3*/]);

	switch (func_233(iParam2, 1))
	{
		case -1944638739:
			func_329(uParam0, flag, hash, iParam4);
			break;
	
		case -1197751823:
			func_322(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_314(uParam0, hash, iParam2, iParam4);
			break;
	
		case -893163968:
			func_320(uParam0, flag, hash, iParam4);
			break;
	
		case -450913544:
			func_321(uParam0, flag, hash, iParam2, iParam4);
			break;
	
		case -426430150:
			func_326(uParam0, flag, iParam4);
			break;
	
		case -338487716:
			func_316(uParam0, hash, flag, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_325(uParam0, flag, hash, iParam4);
			break;
	
		case 304805134:
			func_323(uParam0, flag, hash, iParam4);
			break;
	
		case 788010710:
			func_327(uParam0, flag, hash, iParam4);
			break;
	
		case 1108822547:
			func_317(uParam0, flag, hash, iParam4);
			break;
	
		case 1145151482:
			func_324(uParam0, flag, hash, iParam4);
			break;
	
		case 1250092473:
			func_319(uParam0, flag, hash, iParam4);
			break;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_315(uParam0, hash, iParam2);
			break;
	
		case 1742327865:
			func_318(uParam0, flag, hash, iParam4);
			break;
	
		case 1958421083:
			func_328(uParam0, flag, hash, iParam4);
			break;
	}

	return;
}

Hash func_232(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x7BC1 Hash - 0xA84BB00 ^0xFB9157AD
{
	BOOL flag;

	flag = false;

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	if (hParam2 == 289238755)
		return 289238755;

	if (hParam2 != 0 && func_331(hParam0, flag, hParam2) != -1)
		return hParam2;

	if (func_332(hParam0, func_233(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

int func_233(int iParam0, int iParam1) // Position - 0x7C22 Hash - 0xE1D12727 ^0xE86A8679
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
			return 735520874;
	
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

void func_234(int iParam0, int iParam1, int iParam2) // Position - 0x7E71 Hash - 0x8A858A95 ^0x34E316B1
{
	Global_1953292.f_83[func_213(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_213(iParam0, 1) /*12*/].f_11 - Global_1953292.f_83[func_213(iParam0, 1) /*12*/].f_11 && iParam1;
	return;
}

BOOL func_235(var uParam0, int iParam1) // Position - 0x7EB0 Hash - 0x718DD1EF ^0x5F4D390E
{
	return uParam0->f_8 && iParam1 != false;
}

Hash func_236(Hash hParam0) // Position - 0x7EC1 Hash - 0x4BC1076B ^0x5C6BF787
{
	if (hParam0 == joaat("clothing_item_hair_none"))
		return 1687431937;
	else if (func_13(hParam0, -779797157))
		return 129780002;
	else if (func_13(hParam0, -1082418872))
		return -25348444;
	else if (func_13(hParam0, -724253702))
		return -1551826771;
	else
		return 1661173679;

	return 1687431937;
}

int func_237(var uParam0, int iParam1) // Position - 0x7F36 Hash - 0xA5909FB4 ^0x6F32DFC8
{
	int i;

	for (i = 0; i < 22; i = i + 1)
	{
		if (uParam0->[i /*18*/].f_1 == -1 || uParam0->[i /*18*/].f_17 == 0)
			break;
	
		if (uParam0->[i /*18*/].f_17 == iParam1)
			return i;
	}

	return -1;
}

int func_238(Hash hParam0) // Position - 0x7F84 Hash - 0xBA208EEB ^0x3767D51
{
	switch (hParam0)
	{
		case joaat("clothing_blend_eyeshadow_none"):
			return -875805376;
	
		case joaat("clothing_blend_foundation_none"):
			return -2056583192;
	
		case joaat("clothing_blend_complexion_none"):
			return -1180698265;
	
		case joaat("clothing_blend_complexion_2_none"):
			return -487028314;
	
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 1285634184;
	
		case joaat("clothing_blend_lipstick_none"):
			return -768760704;
	
		case joaat("clothing_blend_spots_none"):
			return 1301555144;
	
		case -643819742:
			return -559080197;
	
		case joaat("clothing_blend_freckles_none"):
			return 241235545;
	
		case -28107610:
			return -2118203104;
	
		case joaat("clothing_blend_moles_none"):
			return 1827902148;
	
		case joaat("clothing_blend_scar_none"):
			return 1858448324;
	
		case 1687431937:
			return -1811760631;
	
		case joaat("clothing_blend_blusher_none"):
			return 1015239729;
	
		case joaat("clothing_blend_eyeliner_none"):
			return -340627321;
	
		default:
		
	}

	return 0;
}

int func_239(var uParam0, var uParam1, int iParam2) // Position - 0x806C Hash - 0x2DA8CE0D ^0xA1820870
{
	int num;

	num = func_237(uParam1, iParam2);

	if (num == -1)
		return 0;

	PED::_REMOVE_PED_OVERLAY(*uParam0, uParam1->[num /*18*/].f_2);
	func_240(uParam0, uParam1, num);
	return 1;
}

void func_240(var uParam0, var uParam1, int iParam2) // Position - 0x80A2 Hash - 0xC9897066 ^0xCFC79A08
{
	int i;

	uParam0->f_6 = uParam0->f_6 - 1;

	for (i = iParam2; i <= uParam0->f_6; i = i + 1)
	{
		if (i + 1 >= 22)
			break;
	
		uParam1->[i /*18*/] = { uParam1->[i + 1 /*18*/] };
		uParam1->[i /*18*/].f_2 = uParam1->[i /*18*/].f_2 - 1;
	}

	return;
}

BOOL func_241(var uParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x80FC Hash - 0xB3501C03 ^0xE6D10B59
{
	int num;

	num = 660625468;
	num.f_1 = -756385367;
	num.f_2 = joaat("ID");
	num.f_3 = 1;
	num.f_4 = hParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!func_333(&num, uParam0, false, iParam4))
		return false;

	*uParam0 = hParam1;

	if (bParam2)
		func_334(uParam0, bParam3);

	return true;
}

void func_242(var uParam0, var uParam1, var uParam2) // Position - 0x8154 Hash - 0xF4045774 ^0x7B35B3F6
{
	int num;

	if (!func_235(uParam0, 1) || func_235(uParam0, 2) || uParam0->f_6 < 0)
		return;

	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
			uParam2->f_3 = uParam0->f_2;
	
		if (uParam2->f_4 == 0)
			uParam2->f_4 = uParam0->f_3;
	
		if (uParam2->f_5 == 0)
			uParam2->f_5 = uParam0->f_4;
	
		func_335(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		num = func_237(uParam1, uParam2->f_17);
	
		if (num <= -1)
		{
			if (uParam0->f_6 >= 22)
				return;
		
			uParam1->[uParam0->f_6 /*18*/] = { *uParam2 };
			uParam0->f_6 = uParam0->f_6 + 1;
			func_336(uParam0, uParam1, uParam0->f_6 - 1);
		}
		else
		{
			uParam2->f_2 = uParam1->[num /*18*/].f_2;
			uParam1->[num /*18*/] = { *uParam2 };
			func_337(uParam0, &uParam1->[num /*18*/], true);
		}
	}

	return;
}

int func_243(var uParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8244 Hash - 0xB071BA5A ^0x1717183B
{
	var unk;
	int i;
	var unk19;

	unk.f_2 = -1;
	unk.f_13 = 1065353216;
	unk.f_14 = 1065353216;

	if (!func_241(&unk, hParam2, bParam3, bParam4, 6))
		return 0;

	if (uParam0->f_6 >= 22)
		return 0;

	uParam1->[uParam0->f_6 /*18*/] = { unk };
	uParam0->f_6 = uParam0->f_6 + 1;
	unk19.f_2 = -1;
	unk19.f_13 = 1065353216;
	unk19.f_14 = 1065353216;

	for (i = uParam0->f_6 - 1; i >= 1; i = i + -1)
	{
		if (uParam1->[i /*18*/].f_1 < uParam1->[i - 1 /*18*/].f_1)
		{
			unk19 = { uParam1->[i /*18*/] };
			uParam1->[i /*18*/] = { uParam1->[i - 1 /*18*/] };
			uParam1->[i - 1 /*18*/] = { unk19 };
		}
		else
		{
			break;
		}
	}

	return 1;
}

BOOL func_244(int iParam0) // Position - 0x8327 Hash - 0x745CE6FE ^0x745CE6FE
{
	return func_338(&(Global_1956875.f_1565), iParam0, 1);
}

int func_245(BOOL bParam0) // Position - 0x833D Hash - 0x770A7C8B ^0x770A7C8B
{
	if (bParam0)
		return 1;

	return 0;
}

float func_246(Player plParam0) // Position - 0x834F Hash - 0x67CAB99C ^0xC9B69B05
{
	return PLAYER::_GET_PLAYER_MAX_DEAD_EYE(plParam0, 0) - (float)func_339(2);
}

int func_247(int iParam0) // Position - 0x8365 Hash - 0x26AB94C2 ^0x26AB94C2
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

char* func_248(int iParam0) // Position - 0x8394 Hash - 0x53BF4D64 ^0x152D039D
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

char* func_249(int iParam0) // Position - 0x83CE Hash - 0x53BF4D64 ^0x6942BD50
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

void func_250(int iParam0, float fParam1, int iParam2) // Position - 0x8408 Hash - 0xB327C991 ^0xFEB529B
{
	if (iParam2 == 2)
		iParam2 = func_121(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_251(int iParam0, int iParam1, int iParam2) // Position - 0x845A Hash - 0x7E1E307C ^0x5642EBD7
{
	if (iParam2 == 2)
		iParam2 = func_121(2);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_252(int iParam0) // Position - 0x84B0 Hash - 0x969D658D ^0x969D658D
{
	if (func_140(iParam0))
		return true;
	else if (func_340(iParam0))
		return true;

	return false;
}

void func_253(int iParam0, float fParam1, int iParam2) // Position - 0x84D6 Hash - 0xF69206DE ^0x1EC60A3A
{
	if (fParam1 < 0f)
		return;

	if (iParam2 == 2)
		iParam2 = func_121(1);

	switch (iParam2)
	{
		case 0:
			Global_1956875.f_1431.f_26[iParam0] = fParam1;
			break;
	
		case 1:
			Global_1956875.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_254(int iParam0, int iParam1) // Position - 0x8532 Hash - 0x5A86BEFA ^0xB951E1EF
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

BOOL func_255(int iParam0) // Position - 0x854A Hash - 0x773BFB67 ^0x773BFB67
{
	if (func_257(iParam0, 4))
		return false;

	return true;
}

BOOL func_256(int iParam0) // Position - 0x8561 Hash - 0x7F4C96B ^0x650690F6
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
		return false;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	for (i = 0; i < Global_38.f_3542; i = i + 1)
	{
		if (Global_38.f_3542[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
				num2 = 2;
		
			if (Global_1904402.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
				num2 = 5;
		
			num = cloudTimeAsInt - Global_38.f_3542[i /*3*/];
		
			if (Global_38.f_3542[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && Global_1904402.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
				return true;
		}
	}

	return false;
}

BOOL func_257(int iParam0, int iParam1) // Position - 0x862D Hash - 0xECB143B0 ^0xE41A70C5
{
	return Global_1904402.f_33[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_258(int iParam0) // Position - 0x8646 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_259() // Position - 0x8659 Hash - 0xD9A24882 ^0xD9A24882
{
	if (!func_341())
		return false;

	return Global_1904402.f_8873;
}

void func_260(int iParam0) // Position - 0x8674 Hash - 0x990D8E53 ^0x990D8E53
{
	func_342(&Global_1300385, iParam0);
	return;
}

int func_261(int iParam0, int iParam1) // Position - 0x8686 Hash - 0x448E7F2 ^0xF699C208
{
	int num;

	num = func_343(iParam0, 0, Global_1300387.f_52.f_31, iParam1);

	if (num == -1)
		return -1;

	return func_344(iParam0, num);
}

var func_262(int iParam0) // Position - 0x86B3 Hash - 0x1B04F1B9 ^0x32573E96
{
	return Global_1300387.f_52[iParam0 /*3*/].f_1;
}

int func_263(Any anParam0, int iParam1) // Position - 0x86C7 Hash - 0xF6C122AF ^0xA6A67C2F
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

int func_264(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x86DB Hash - 0xC3804B17 ^0xC3804B17
{
	return func_149(&uParam0, 61, 0);
}

BOOL func_265(var uParam0, int iParam1, int iParam2) // Position - 0x86EC Hash - 0x8AC008A3 ^0x375BADC3
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

void func_266(int iParam0) // Position - 0x871E Hash - 0x42868A8 ^0x3D52297C
{
	Global_1102813.f_26.f_12 = iParam0;
	return;
}

BOOL func_267(int iParam0) // Position - 0x8730 Hash - 0xA1D29AFD ^0xABA18533
{
	return Global_1102813.f_26.f_7 && iParam0 != false;
}

BOOL func_268(BOOL bParam0) // Position - 0x8745 Hash - 0xA1D29AFD ^0x8B9D4F17
{
	return Global_1102813.f_26.f_9 && bParam0 != false;
}

BOOL func_269(int iParam0) // Position - 0x875A Hash - 0x10DA64DD ^0x85E01D27
{
	return Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1 == Global_1106895[iParam0 /*2*/].f_1;
}

int func_270() // Position - 0x8788 Hash - 0xE5D277D5 ^0xE5D277D5
{
	if (Global_1102813 <= 5)
		return Global_1102813;

	if (Global_1102813 <= 22)
		return 4;

	if (Global_1102813 <= 25)
		return 3;

	return 26;
}

void func_271(BOOL bParam0) // Position - 0x87BB Hash - 0xEBD3AD20 ^0x6E10961F
{
	if (func_345(bParam0))
		return;

	Global_1102813.f_26.f_9 = Global_1102813.f_26.f_9 || bParam0;
	return;
}

BOOL func_272(var uParam0, int iParam1, int iParam2) // Position - 0x87E2 Hash - 0xA8F08582 ^0x9810C45C
{
	int num;
	int offset;
	BOOL isBitSet;

	num = iParam1 / 31;
	offset = iParam1 % 31;
	isBitSet = MISC::IS_BIT_SET(uParam0->[num], offset);
	MISC::SET_BIT(&uParam0->[num], offset);
	return !isBitSet;
}

int func_273(int iParam0) // Position - 0x8815 Hash - 0xF3F3BDC0 ^0xF3F3BDC0
{
	if (func_175(iParam0))
		return func_78(iParam0) % 32;

	return Global_1295666;
}

BOOL func_274(int iParam0) // Position - 0x8836 Hash - 0xE6FB7F28 ^0xE6FB7F28
{
	int num;

	num = func_169(iParam0, 1);

	if (num < 1 || num >= 199)
		return false;

	return true;
}

BOOL func_275(int iParam0, int iParam1, int iParam2) // Position - 0x885E Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_83(iParam1, 1);
	num2 = func_169(iParam0, 1);
	num3 = func_165(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	if (!Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = false;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_346(num4, 1);
	
		if (!func_347(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] - 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 - func_348(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_349(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_350(num6))
		{
		}
		else
		{
			num7 = func_351(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] - 1;
		
			if (Global_1156111.f_21645[num7 /*209*/][num2] <= 0)
				MISC::_CLEAR_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156111.f_21645[num7 /*209*/].f_200)))
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 0;
				func_352(num6);
			}
		}
	}

	return true;
}

BOOL func_276(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30) // Position - 0x8A4F Hash - 0x911ECD26 ^0x92039873
{
	return uParam0.f_4 != 0;
}

BOOL func_277(int iParam0, int iParam1) // Position - 0x8A5D Hash - 0xBA8D4E8F ^0x2A068003
{
	int num;

	if (!func_274(iParam0))
		return false;

	if (!func_353(iParam1))
		return false;

	num = func_354(iParam1, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/] == iParam0;
}

Vector3 func_278(int iParam0) // Position - 0x8A9D Hash - 0x4827F1DB ^0x96104558
{
	int num;
	var unk;

	num = func_355(iParam0);

	if (num == -1)
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	return Global_1156111.f_35859.f_9503[num /*3*/];
}

BOOL func_279(int iParam0, var uParam1, var uParam2) // Position - 0x8AD9 Hash - 0xB201D59F ^0xA3399F39
{
	if (!func_274(iParam0))
		return false;

	if (!func_74(iParam0.f_1))
		return false;

	if (!func_283(iParam0.f_2))
		return false;

	return true;
}

BOOL func_280(int iParam0, int iParam1, int iParam2) // Position - 0x8B10 Hash - 0xAE2CC17B ^0x2CD7F4CE
{
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int j;
	int num7;

	num = func_83(iParam1, 1);
	num2 = func_169(iParam0, 1);
	num3 = func_165(Global_1156111.f_35859.f_919[num /*12*/], 1);

	if (Global_1156111.f_35859[num3 /*6*/][iParam2] != iParam0)
		return false;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295666.f_16;

	if (Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/])
		return true;

	Global_1156111.f_35859.f_919[num /*12*/].f_1[iParam2 /*2*/] = true;

	for (i = 0; i < Global_1156111.f_35859.f_3116[num2 /*31*/].f_16; i = i + 1)
	{
		num4 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/];
		num5 = func_346(num4, 1);
	
		if (!func_347(num4))
		{
		}
		else
		{
			Global_1156111.f_2169[num5 /*205*/].f_1[num2] = Global_1156111.f_2169[num5 /*205*/].f_1[num2] + 1;
			Global_1156111.f_2169[num5 /*205*/].f_201 = Global_1156111.f_2169[num5 /*205*/].f_201 + func_348(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_6[i /*3*/]);
			func_356(num4);
		}
	}

	for (j = 0; j < Global_1156111.f_35859.f_3116[num2 /*31*/].f_28; j = j + 1)
	{
		num6 = Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/];
	
		if (!func_350(num6))
		{
		}
		else if (!func_357(&Global_1156111.f_35859.f_3116[num2 /*31*/].f_17[j /*2*/]))
		{
		}
		else
		{
			num7 = func_351(num6, 1);
			Global_1156111.f_21645[num7 /*209*/][num2] = Global_1156111.f_21645[num7 /*209*/][num2] + 1;
			MISC::_SET_BIT_FLAG(&(Global_1156111.f_21645[num7 /*209*/].f_200), num2);
		
			if (!Global_1156111.f_21645[num7 /*209*/].f_208)
			{
				Global_1156111.f_21645[num7 /*209*/].f_208 = 1;
				func_358(num6);
			}
		}
	}

	func_359(Global_1156111.f_35859.f_3116[num2 /*31*/].f_2);
	return true;
}

void func_281(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8D3E Hash - 0x562CA30C ^0x562CA30C
{
	int num;

	if (!func_353(iParam0))
		return;

	num = func_354(iParam0, 1);

	if (!func_274(iParam1))
		return;

	if (!func_74(iParam2))
		return;

	if (!func_283(iParam3))
		return;

	Global_1156111.f_35859.f_9286[num /*3*/] = iParam1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = iParam2;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = iParam3;
	return;
}

void func_282(int iParam0) // Position - 0x8DBD Hash - 0x9AA5A92B ^0xCC01F112
{
	int num;

	if (!func_353(iParam0))
		return;

	num = func_354(iParam0, 1);
	Global_1156111.f_35859.f_9286[num /*3*/] = -1;
	Global_1156111.f_35859.f_9286[num /*3*/].f_1 = 0;
	Global_1156111.f_35859.f_9286[num /*3*/].f_2 = -1;
	return;
}

BOOL func_283(int iParam0) // Position - 0x8E12 Hash - 0x7B05DC41 ^0x7B05DC41
{
	if (iParam0 < 0 || iParam0 > 4)
		return false;

	return true;
}

BOOL func_284(int iParam0) // Position - 0x8E30 Hash - 0x82822340 ^0x82822340
{
	int num;

	if (!func_353(iParam0))
		return 0;

	num = func_360(iParam0);

	if (!func_274(num))
		return 0;

	return 1;
}

Vector3 func_285(int iParam0) // Position - 0x8E5D Hash - 0x57721B17 ^0x45053CFB
{
	var unk;
	int num;

	if (!func_353(iParam0))
	{
		unk = -1;
		unk.f_2 = -1;
		return unk;
	}

	num = func_354(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

BOOL func_286(int iParam0, int iParam1) // Position - 0x8E9E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_287() // Position - 0x8EAD Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_361(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_288(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x8ECA Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_3(hParam0, 0))
		return 0;

	if (!bParam7 && func_193(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_86(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_87(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_87(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_289(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x8F49 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_87(false);
	*panParam1 = { func_86(hParam0, func_185(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_290(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x8F8E Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_291(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x8FC1 Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_87(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_292(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x8FFB Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_286(iParam2, iParam3))
		return true;

	return false;
}

void func_293(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9013 Hash - 0x3169A239 ^0x47E831EC
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292143.f_20.f_1[i /*21*/].f_1 = iParam1;
			}
		
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292143.f_20.f_1[i /*21*/].f_2 = iParam2;
				Global_1292143.f_20.f_1[i /*21*/].f_3 = iParam3;
			}
		
			return;
		}
	}

	func_362(iParam0, iParam1, iParam2, iParam3);
	return;
}

BOOL func_294(Hash hParam0) // Position - 0x90B1 Hash - 0x1DB3839 ^0xD5C14C10
{
	return hParam0 == -1839668642 || hParam0 == -1415811768 || hParam0 == 231148558 || hParam0 == -1674363638 || hParam0 == 252325943 || hParam0 == 1216664798 || hParam0 == 1341188928 || hParam0 == 829857647 || hParam0 == -636562458 || hParam0 == 1115104855;
}

void func_295(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x913F Hash - 0x3079C542 ^0x5D29A697
{
	if (bParam1)
		Global_1953292.f_1676.f_1[iParam0 /*3*/] = { Global_1953292.f_1557.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (iParam3 == -1)
		iParam3 = Global_17418.f_55.f_664.f_1777;

	func_211(&Global_1953292.f_1676.f_1[iParam0 /*3*/], iParam0, iParam3);
	return;
}

BOOL func_296(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x919B Hash - 0xECEF3502 ^0x2D53122C
{
	var unk;
	var unk6;

	unk = { func_85(hParam0, bParam2, 0) };
	unk6 = { func_86(hParam0, unk, unk.f_4, bParam2) };
	return func_363(unk6, iParam1, bParam2);
}

void func_297(int iParam0, BOOL bParam1, int iParam2) // Position - 0x91D0 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_364(&(Global_1953292.f_1557), iParam0);
	func_365(2, iParam0, 6);

	if (bParam1)
		func_298(false, true);

	return;
}

void func_298(BOOL bParam0, BOOL bParam1) // Position - 0x91F8 Hash - 0xB768D4F2 ^0xD5E3296F
{
	if (bParam1)
		func_91();

	if (bParam0)
	{
		func_115(8);
		func_115(512);
	}
	else
	{
		func_115(8);
		func_115(16);
	}

	return;
}

int func_299(Hash hParam0) // Position - 0x922A Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (hParam0)
	{
		case -2011879201:
			return 5;
	
		case -1323870201:
			return 8;
	
		case -1063340820:
			return 6;
	
		case -808817534:
			return 3;
	
		case 97391779:
			return 2;
	
		case 217155793:
			return 1;
	
		case 491602716:
			return 0;
	
		case 967218463:
			return 10;
	
		case 1270922359:
			return 4;
	
		case 1632140501:
			return 9;
	
		case 2127262701:
			return 7;
	
		default:
		
	}

	return -1;
}

BOOL func_300(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x92AC Hash - 0x88E96348 ^0x46451541
{
	int i;
	BOOL flag;

	if (*iParam1 <= 0)
	{
		*iParam1 = 0;
		return false;
	}

	if (Global_1953292.f_3352.f_26 <= 1)
	{
		Global_1953292.f_3352.f_26 = 0;
		*iParam1 = 0;
		Global_1953292.f_3352[0] = 0;
		return true;
	}

	for (i = 0; i <= Global_1953292.f_3352.f_26 - 1; i = i + 1)
	{
		if (hParam0 == Global_1953292.f_3352[i])
			flag = true;
	
		if (flag && i < Global_1953292.f_3352.f_26 - 1)
			Global_1953292.f_3352[i] = Global_1953292.f_3352[i + 1];
	}

	if (flag)
	{
		Global_1953292.f_3352.f_26 = Global_1953292.f_3352.f_26 - 1;
		*iParam1 = *iParam1 - 1;
		Global_1953292.f_3352[Global_1953292.f_3352.f_26] = 0;
		func_366(hParam0, true, bParam2);
	}

	return flag;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_301(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6, BOOL bParam7, BOOL bParam8, int iParam9) // Position - 0x938C Hash - 0xF5A6EBD3 ^0xB19C08FF
{
	int num;
	int num2;
	BOOL flag;
	int num3;
	int num4;
	int num5;

	num5 = 0;
	num4 = func_367(iParam6);
	num4.f_1 = hParam1;
	num4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num4);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num4))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num4, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num4, 2049745650);
	*uParam2 = flag;

	if (!flag && !bParam3)
		func_369(uParam0, func_368(num), true, true, bParam7);

	if (flag)
	{
		if (iParam9 != 8)
			func_228(-1);
	
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num4, -1212855483))
			num5 = func_368(num);
	}

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num4, 1409451727))
		{
		}
		else
		{
			num3 = num;
			num2 = func_213(num3, 1);
		
			if (num2 < 0 || num2 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num4, joaat("Component")))
			{
			}
			else
			{
				uParam0->f_1[num2 /*3*/] = num;
			
				if (flag)
					func_370(num3, 16, 6);
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num4, 1441384))
						uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
					else
						goto 0x16A;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num4, 1194786549))
					if (func_371(num3) && func_332(uParam0->f_1[num2 /*3*/], num3, &num))
						uParam0->f_1[num2 /*3*/].f_1 = num;
				else
					uParam0->f_1[num2 /*3*/].f_1 = num;
			}
		}
	}

	num2 = 16;

	if (flag)
	{
		if (!bParam8)
			func_373(uParam0, num5, func_372(hParam1) != 0, iParam9);
	}
	else if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE") && uParam0->f_1[num2 /*3*/] == Global_1953292.f_83[num2 /*12*/] && func_372(uParam0->f_1[34 /*3*/]) == 0 && !func_92(32) && !func_92(64))
	{
		uParam0->f_1[num2 /*3*/] = func_374(-1293064293, 0);
		uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		func_231(uParam0, uParam0->f_1[num2 /*3*/], num2, false, iParam9);
	}

	if (bParam4)
		*uParam0 = hParam1;

	return true;
}

void func_302(BOOL bParam0, Hash hParam1) // Position - 0x95BB Hash - 0x6921D7D5 ^0x79CBBDE5
{
	char* str;
	char* str2;
	char* str3;
	const char* str4;
	int num;
	int num2;
	Hash hash;
	Hash hash2;
	const char* str5;

	if (!func_3(hParam1, 0))
		return;

	num2 = -1;

	if (!func_305(hParam1, &str, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	if (bParam0)
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_299(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_202(4, num2))
		{
			str2 = "OUTFIT_STORED_LITERAL";
			str4 = func_376(func_375(num2));
		}
		else
		{
			hash = func_377(hParam1);
		
			if (func_3(hash, 0))
				hParam1 = hash;
		
			str2 = "ITEM_STORED";
			str4 = MISC::VAR_STRING(0, func_378(hParam1, false));
		}
	}
	else
	{
		str3 = "Transaction_Positive";
		num = joaat("COLOR_PURE_WHITE");
		num2 = func_299(hParam1);
	
		if (num2 > 0 && num2 < 11 && func_202(4, num2))
		{
			str2 = "OUTFIT_REMOVED_LITERAL";
			str4 = func_376(func_375(num2));
		}
		else
		{
			hash2 = func_377(hParam1);
		
			if (func_3(hash2, 0))
				hParam1 = hash2;
		
			str2 = "ITEM_REMOVED";
			str4 = MISC::VAR_STRING(0, func_378(hParam1, false));
		}
	}

	str5 = func_307(MISC::VAR_STRING(10, str2, str4), num);
	func_308(str5, str.f_1, MISC::GET_HASH_KEY(str), 0, num, "Transaction_Feed_Sounds", str3, 0, true);
	return;
}

void func_303() // Position - 0x9719 Hash - 0xC3588B6F ^0x86C68CA5
{
	int i;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		Global_17418.f_55.f_664[i] = Global_1953292.f_3352[i];
	}

	Global_17418.f_55.f_664.f_27 = Global_1953292.f_3352.f_27;
	Global_17418.f_55.f_664.f_28 = Global_1953292.f_3352.f_28;
	Global_17418.f_55.f_664.f_29 = Global_1953292.f_3352.f_29;
	Global_17418.f_55.f_664.f_30 = Global_1953292.f_3352.f_30;
	Global_17418.f_55.f_664.f_31 = Global_1953292.f_3352.f_31;
	Global_17418.f_55.f_664.f_32 = Global_1953292.f_3352.f_32;
	Global_17418.f_55.f_664.f_26 = Global_1953292.f_3352.f_26;
	return;
}

int func_304() // Position - 0x97D7 Hash - 0x16CCC184 ^0xB63B6FF6
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1953292.f_3352.f_26; i = i + 1)
	{
		hash = Global_1953292.f_3352[i];
	
		if (func_190(hash) == -999503751)
			if (func_379() != hash)
				num = num + 1;
	}

	return num;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_305(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x9828 Hash - 0x92B705D3 ^0xB783F681
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

 func_306(Hash hParam0) // Position - 0x991B Hash - 0x21FAF347 ^0xF8075872
{
	switch (hParam0)
	{
		case -2061583405:
			return -130542741;
	
		case -999503751:
			return -878523823;
	
		case -525676072:
			return 1434026037;
	
		default:
		
	}

	return 0;
}

const char* func_307(const char* sParam0, int iParam1) // Position - 0x9956 Hash - 0x9E99F03 ^0x9CCFA032
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_308(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x9970 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_380(sParam0, sParam1, hParam2);
	return num2;
}

Hash func_309(Hash hParam0) // Position - 0x99D3 Hash - 0xDBA8DC27 ^0x5C33F2A1
{
	int num;
	var unk;

	func_381(&unk, 9044914, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&unk);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&unk))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &unk, -1168434056))
			return 0;
	
		return num;
	}

	return 0;
}

BOOL func_310(Hash hParam0, int iParam1) // Position - 0x9A17 Hash - 0x926B5C1A ^0xC9C8B467
{
	Hash hash;

	hash = func_190(Global_1953292.f_1676.f_1[iParam1 /*3*/]);

	if (func_190(hParam0) == hash)
		return true;
	else if (hParam0 == -992705550)
		return func_13(Global_1953292.f_1676.f_1[iParam1 /*3*/], 160827531);
	else if (hParam0 == 491480257)
		return hash == -2061583405 || hash == 2086043523;
	else if (hParam0 == -1789518572)
		return hash == -923693316;
	else if (hParam0 == -275040139)
		return hash == 1882579758;

	return false;
}

void func_311(int iParam0, int iParam1) // Position - 0x9ABE Hash - 0xF4504E91 ^0x84D29029
{
	int i;
	int num;
	var unk;

	unk = 39;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_1953292.f_2938.f_35[i /*2*/] = { unk };
	
		if (i < *iParam0)
		{
			if (func_382(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_382(&iParam0->f_2[i /*2*/], 1))
					func_383(&iParam0->f_2[i /*2*/], 2, 6);
			
				Global_1953292.f_2938.f_35[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { Global_1953292.f_2938.f_35[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_312(int iParam0, int iParam1, int iParam2) // Position - 0x9BBB Hash - 0x917A9738 ^0x1D68250E
{
	int i;
	int j;

	if (*iParam0 + 1 >= 16)
		return;

	if (!func_384(iParam0, 1))
		func_385(iParam0, 1);

	for (i = 0; i < *iParam0; i = i + 1)
	{
		if (iParam0->f_2[i /*2*/] == iParam1)
		{
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			return;
		}
	
		if (Global_1953292.f_83[iParam0->f_2[i /*2*/] /*12*/].f_2 > Global_1953292.f_83[iParam1 /*12*/].f_2)
		{
			for (j = *iParam0; j >= i + 1; j = j + -1)
			{
				iParam0->f_2[j /*2*/] = { iParam0->f_2[j - 1 /*2*/] };
			}
		
			iParam0->f_2[i /*2*/] = iParam1;
			iParam0->f_2[i /*2*/].f_1 = iParam2;
			*iParam0 = *iParam0 + 1;
			return;
		}
	}

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_313(var uParam0, var uParam1) // Position - 0x9CA1 Hash - 0xEEF7C6EF ^0xEFE4EF7D
{
	int num;
	int num2;
	int num3;

	num = func_367(0);
	num.f_1 = uParam1;
	num.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
		return;

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, 1409451727))
		{
		}
		else
		{
			num3 = func_213(num2, 1);
		
			if (num3 < 0 || num3 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("Component")))
			{
			}
			else if (uParam0->f_1[num3 /*3*/] != num2)
			{
			}
			else
			{
				uParam0->f_1[num3 /*3*/] = Global_1953292.f_83[num3 /*12*/];
				uParam0->f_1[num3 /*3*/].f_1 = 0;
				func_229(num3, 0);
			}
		}
	}

	return;
}

void func_314(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x9D54 Hash - 0x47EC47B2 ^0xCC3EAB2D
{
	int num;
	Hash hash;

	if (hParam1 == -230310728 || hParam1 == 1326838792)
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	num = 10;
	hash = func_190(uParam0->f_1[num /*3*/]);

	if (hash == 119907797)
	{
		if (func_13(hParam1, 458991572))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}
	else if (hash == 2086043523)
	{
		if (func_13(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}
	else if (hash == -525676072)
	{
		if (func_13(hParam1, -93469181))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}

	num = 11;

	if (func_13(uParam0->f_1[num /*3*/], -1446529222) && func_13(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam1, -93469181) && func_13(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

void func_315(var uParam0, Hash hParam1, int iParam2) // Position - 0x9F29 Hash - 0xC8C81F63 ^0xED719640
{
	if (hParam1 == joaat("clothing_item_m_beard_stubble"))
		uParam0->f_1[iParam2 /*3*/].f_1 = 289238755;
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 289238755)
		uParam0->f_1[iParam2 /*3*/].f_1 = joaat("base");

	return;
}

void func_316(var uParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0x9F6E Hash - 0x1075AB8B ^0xF324283C
{
	int num;
	Hash hash;

	func_229(1, iParam3);

	if (bParam2)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (!func_226(hash, false) && func_13(hash, -180472385))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 10;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_190(hash) == 2086043523 && func_13(hParam1, -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

void func_317(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA037 Hash - 0xA81215F7 ^0xA81215F7
{
	switch (func_190(hParam2))
	{
		case -525676072:
			func_386(uParam0, bParam1, iParam3);
			break;
	
		case 2086043523:
			func_387(uParam0, bParam1, iParam3);
			break;
	}

	return;
}

void func_318(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA071 Hash - 0x7B358321 ^0x3A779D22
{
	int num;

	num = 18;

	if (func_190(uParam0->f_1[num /*3*/]) == 912453393)
		func_229(num, iParam3);

	func_229(1, iParam3);

	if (bParam1)
		return;

	if (func_388(hParam2))
		func_389(uParam0, bParam1, iParam3);

	num = 11;

	if (func_13(hParam2, -180472385) && !func_226(uParam0->f_1[num /*3*/], false))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	if (func_13(hParam2, -1303648999))
		return;

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_229(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_229(num, iParam3);
	}
	else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
	{
		uParam0->f_1[num /*3*/].f_1 = -1539589426;
		func_229(num, iParam3);
		num = 20;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
			func_229(num, iParam3);
	}

	return;
}

void func_319(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA1B1 Hash - 0x6DFFA234 ^0x160F223D
{
	int num;
	int metapedType;
	Hash hash;
	int num2;
	int num3;

	num = 12;
	metapedType = 0;

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	if (joaat("neckties") == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[num /*3*/], metapedType, true))
	{
		if (bParam1 || func_13(hParam2, 1872585553) || func_190(hParam2) == 1882579758)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}

	hash = uParam0->f_1[num /*3*/];

	if (!func_226(hash, false) && !func_13(hash, -1303648999) && func_13(hParam2, -1527414429))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 17;

	if (!func_226(uParam0->f_1[num /*3*/], false) && func_13(hParam2, 1467402774))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 29;

	if (!func_226(uParam0->f_1[num /*3*/], false) && func_13(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 34;
	hash = uParam0->f_1[num /*3*/];

	if (func_190(hash) == 1759215194 && func_190(hParam2) == 1882579758)
	{
		uParam0->f_1[num /*3*/] = func_309(hParam2);
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}
	else if (func_390(hash, bParam1, metapedType))
	{
		hash = uParam0->f_1[18 /*3*/];
		num2 = 0;
	
		if (func_190(hash) == 912453393 && func_391(32))
			num2 = num2 | 1;
	
		if (func_13(hParam2, 525391395))
			num2 = num2 | 2;
	
		hash = func_374(Global_1953292.f_83[num /*12*/].f_9, num2);
	
		if (hash != 0)
		{
			uParam0->f_1[num /*3*/] = hash;
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
			func_327(uParam0, false, hash, iParam3);
		}
	}

	num = 21;

	if (!func_226(uParam0->f_1[num /*3*/], false) && func_13(hParam2, 196770179))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num3 = 23;

	if (!func_226(uParam0->f_1[num /*3*/], false) || uParam0->f_1[num3 /*3*/] != Global_1953292.f_83[num3 /*12*/] && func_13(uParam0->f_1[num3 /*3*/], -1655064541))
		func_392(uParam0, iParam3);

	return;
}

void func_320(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA49A Hash - 0x7E0722A ^0xAB26183C
{
	int num;

	if (bParam1)
		return;

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

void func_321(var uParam0, BOOL bParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0xA4F9 Hash - 0xB459802F ^0xB459802F
{
	switch (func_190(hParam2))
	{
		case 698653232:
			func_393(uParam0, bParam1, hParam2, iParam4);
			break;
	
		case 912453393:
			func_394(uParam0, bParam1, iParam3, iParam4);
			break;
	}

	return;
}

void func_322(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA537 Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_190(hParam2))
	{
		case -1080198344:
		case 1868067663:
			func_395(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 294388917:
			func_396(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_323(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA57B Hash - 0x3C314B3B ^0x50027DDE
{
	int num;

	num = 18;

	if (func_190(uParam0->f_1[num /*3*/]) == 912453393)
		func_229(num, iParam3);

	if (bParam1)
		return;

	num = 23;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, 1537768121))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_392(uParam0, iParam3);

	return;
}

void func_324(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA617 Hash - 0xEA1EEC9C ^0x89D8E054
{
	int num;

	if (!bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			if (func_13(uParam0->f_1[num /*3*/], 1537768121))
			{
				uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
				uParam0->f_1[num /*3*/].f_1 = 0;
			}
		
			func_229(num, iParam3);
		}
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_13(hParam2, -1655064541))
			func_392(uParam0, iParam3);
		else
			func_229(num, iParam3 | 16);

	num = 20;

	if (uParam0->f_1[num /*3*/].f_1 != -529972961)
		return;

	uParam0->f_1[num /*3*/].f_1 = joaat("base");
	func_229(num, iParam3);
	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_229(num, iParam3);

	num = 28;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_229(num, iParam3);

	return;
}

void func_325(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA726 Hash - 0x69302866 ^0x620ADA80
{
	int num;

	if (bParam1)
		return;

	if (func_397(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) && func_13(hParam2, -1230785684))
	{
		num = 27;
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 32;

	if (!func_226(uParam0->f_1[num /*3*/], false) && func_13(hParam2, 1016511012))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

void func_326(var uParam0, BOOL bParam1, int iParam2) // Position - 0xA7C5 Hash - 0xAEDF8511 ^0x27A01C51
{
	int num;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(uParam0->f_1[num /*3*/], 358628372))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	return;
}

void func_327(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA82A Hash - 0x81434F3 ^0x81434F3
{
	switch (func_190(hParam2))
	{
		case -1740828670:
			func_402(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 344283346:
			func_403(uParam0, bParam1, iParam3);
			break;
	
		case 502936876:
			func_401(uParam0, bParam1, iParam3);
			break;
	
		case 684307653:
			func_400(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1223979091:
		case 2047428024:
			func_399(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1759215194:
			func_398(uParam0, iParam3);
			break;
	}

	return;
}

void func_328(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA8BA Hash - 0x22CB819F ^0x22CB819F
{
	switch (func_190(hParam2))
	{
		case -923693316:
			func_405(uParam0, bParam1, hParam2, iParam3);
			break;
	
		case 1769055947:
			func_404(uParam0, bParam1, hParam2, iParam3);
			break;
	}

	return;
}

void func_329(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xA8F8 Hash - 0x60D806B ^0x98705F22
{
	int num;
	Hash hash;

	if (bParam1)
	{
		func_406(uParam0, iParam3, false, true);
		return;
	}

	num = 35;
	hash = uParam0->f_1[num /*3*/];

	if (func_13(hParam2, 813132419) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_190(hash) == -923693316)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	if (func_13(hParam2, -1650340550) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_190(hash) == 1769055947)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 37;

	if (func_13(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

int func_330() // Position - 0xAA27 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1953292.f_1;
}

int func_331(Hash hParam0, BOOL bParam1, Hash hParam2) // Position - 0xAA35 Hash - 0xD6995ACD ^0x328CFE7D
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, true); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, true) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_332(Hash hParam0, int iParam1, var uParam2) // Position - 0xAA77 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return 1;
}

BOOL func_333(Any* panParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0xAA88 Hash - 0xA0DB69F9 ^0xBE34EAC2
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&unk3, panParam0, -480981886))
		uParam1->f_17 = unk3;
	else if (!bParam2)
		return false;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&unk, panParam0, joaat("albedo")))
		uParam1->f_3 = unk;
	else
		uParam1->f_3 = 0;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&unk, panParam0, joaat("normal")))
		uParam1->f_4 = unk;
	else
		uParam1->f_4 = 0;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&unk, panParam0, joaat("MATERIAL")))
		uParam1->f_5 = unk;
	else
		uParam1->f_5 = 0;

	if (DATAFILE::_PARSEDDATA_GET_FLOAT(&unk5, panParam0, 2018964076))
		uParam1->f_13 = unk5;
	else
		uParam1->f_13 = 0f;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&unk, panParam0, 723829617))
		uParam1->f_16 = func_407(unk);

	if (DATAFILE::_PARSEDDATA_GET_FLOAT(&unk5, panParam0, 1802626656))
		uParam1->f_15 = unk5;
	else
		uParam1->f_15 = 0f;

	if (DATAFILE::_PARSEDDATA_GET_INT(&unk4, panParam0, 939944711))
		uParam1->f_6 = unk4;
	else
		uParam1->f_6 = 0;

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&unk, panParam0, 917806888))
	{
		uParam1->f_7 = unk;
	
		if (DATAFILE::_PARSEDDATA_GET_INT(&unk4, panParam0, 1922465595))
			uParam1->f_8 = unk4;
		else
			uParam1->f_8 = 0;
	
		if (DATAFILE::_PARSEDDATA_GET_FLOAT(&unk5, panParam0, -1979206779))
			uParam1->f_14 = unk5;
		else
			uParam1->f_14 = 0f;
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&unk, panParam0, 333547134))
	{
		uParam1->f_9 = unk;
	
		if (DATAFILE::_PARSEDDATA_GET_INT(&unk4, panParam0, 1223307134))
			uParam1->f_10 = unk4;
	
		if (DATAFILE::_PARSEDDATA_GET_INT(&unk4, panParam0, 915180227))
			uParam1->f_11 = unk4;
	
		if (DATAFILE::_PARSEDDATA_GET_INT(&unk4, panParam0, -1231156504))
			uParam1->f_12 = unk4;
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}

	panParam0->f_1 = 1777366913;
	panParam0->f_2 = joaat("ID");
	panParam0->f_3 = 1;
	panParam0->f_4 = unk3;
	DATAFILE::_PARSEDDATA_GET_FILE(panParam0);

	if (DATAFILE::_PARSEDDATA_GET_INT(&unk2, panParam0, -1118674339))
		uParam1->f_1 = unk2;

	return true;
}

void func_334(var uParam0, BOOL bParam1) // Position - 0xAC8E Hash - 0x46FE2C9 ^0x5919DD5C
{
	Hash hash;
	var unk;
	Hash hash2;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	hash = func_408(uParam0->f_17);

	if (hash == 0)
		return;

	hash2 = *uParam0;
	unk19 = { func_86(joaat("WARDROBE"), func_183(true), joaat("SLOTID_WARDROBE"), true) };

	if (bParam1 && hash2 != func_409(unk19, hash, true, -1))
		return;

	unk = { func_410(func_86(hash2, unk19, hash, true), true, false) };

	if (unk.f_17 <= 0)
		return;

	uParam0->f_13 = func_411(unk.f_17);
	return;
}

void func_335(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0xAD26 Hash - 0xBAAE0C11 ^0x5BC17E6C
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
	return;
}

void func_336(var uParam0, var uParam1, int iParam2) // Position - 0xAD54 Hash - 0x2C644237 ^0x204F880C
{
	if (iParam2 > 0 && uParam1->[iParam2 - 1 /*18*/].f_1 > uParam1->[iParam2 /*18*/].f_1)
		func_412(uParam0, uParam1);
	else
		func_413(uParam0, &uParam1->[iParam2 /*18*/]);

	return;
}

void func_337(var uParam0, var uParam1, BOOL bParam2) // Position - 0xAD92 Hash - 0x1DEF2260 ^0xD17E8B58
{
	if (bParam2)
		PED::_SET_TEXTURE_LAYER_TEXTURE_MAP(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);

	if (uParam1->f_9 != 0)
	{
		PED::_SET_TEXTURE_LAYER_PALLETE(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_SET_TEXTURE_LAYER_TINT(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}

	if (uParam1->f_7 != 0)
		PED::_SET_TEXTURE_LAYER_MOD(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);

	if (uParam1->f_15 > 0f)
		PED::_SET_TEXTURE_LAYER_ROUGHNESS(*uParam0, uParam1->f_2, uParam1->f_15);

	PED::_SET_TEXTURE_LAYER_SHEET_GRID_INDEX(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_SET_TEXTURE_LAYER_ALPHA(*uParam0, uParam1->f_2, uParam1->f_13);
	return;
}

BOOL func_338(var uParam0, int iParam1, int iParam2) // Position - 0xAE39 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_339(int iParam0) // Position - 0xAE70 Hash - 0xF103C6A6 ^0xF103C6A6
{
	switch (iParam0)
	{
		case 0:
			return func_48(2) * 2;
	
		case 1:
			return func_52(2) * 2;
	
		case 2:
			return func_50(2) * 2;
	
		default:
		
	}

	return -1;
}

BOOL func_340(int iParam0) // Position - 0xAEB1 Hash - 0x830CD3BA ^0x830CD3BA
{
	switch (iParam0)
	{
		case 12:
			return true;
	
		case 13:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_341() // Position - 0xAED6 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_342(int iParam0, int iParam1) // Position - 0xAEEA Hash - 0xF55E891F ^0xF55E891F
{
	func_414(iParam0, iParam1);
	return;
}

int func_343(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xAEFA Hash - 0xBAD48FE6 ^0x74A9B9E1
{
	int num;

	if (iParam1 > iParam2)
		return -1;

	num = (iParam1 + iParam2) / 2;

	if (iParam3 < Global_1300387.f_84[iParam0 /*21*/][num /*2*/])
		return func_343(iParam0, iParam1, num - 1, iParam3);

	if (iParam3 > Global_1300387.f_84[iParam0 /*21*/][num /*2*/])
		return func_343(iParam0, num + 1, iParam2, iParam3);

	return num;
}

int func_344(int iParam0, int iParam1) // Position - 0xAF66 Hash - 0xE827FE7F ^0x76DD3C0D
{
	return Global_1300387.f_84[iParam0 /*21*/][iParam1 /*2*/].f_1;
}

BOOL func_345(BOOL bParam0) // Position - 0xAF7E Hash - 0x695C3191 ^0x86E70E17
{
	return Global_1102813.f_26.f_9 && bParam0 == bParam0;
}

int func_346(int iParam0, int iParam1) // Position - 0xAF94 Hash - 0x40BB17AB ^0x40BB17AB
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
	
		case joaat("MDEFENSE__BULLET"):
			return 49;
	
		case -1936069272:
			return 47;
	
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
	
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
	
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
	
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
	
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
	
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
	
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
	
		case -1575020444:
			return 94;
	
		case -1572802418:
			return 71;
	
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
	
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
	
		case -1349331938:
			return 43;
	
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
	
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
	
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
	
		case joaat("MHORSE__DEFENSE"):
			return 56;
	
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
	
		case joaat("MDEFENSE__RANGED"):
			return 46;
	
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
	
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
	
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
	
		case joaat("MDEFENSE__FIRE"):
			return 52;
	
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
	
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
	
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
	
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
	
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
	
		case -377364039:
			return 60;
	
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
	
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
	
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
	
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
	
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
	
		case joaat("MSKILL__PERCEPTION"):
			return 83;
	
		case -1:
			return 0;
	
		case 66478954:
			return 93;
	
		case 91687087:
			return 79;
	
		case joaat("MSKILL__DISTILLER"):
			return 90;
	
		case 194431787:
			return 61;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
	
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
	
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
	
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
	
		case joaat("MSKILL__DIVINATION"):
			return 89;
	
		case 410940916:
			return 92;
	
		case 447408404:
			return 81;
	
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
	
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
	
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
	
		case joaat("MSKILL__INTUITION"):
			return 88;
	
		case joaat("MDAMAGE__MELEE"):
			return 30;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
	
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
	
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
	
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
	
		case 874892169:
			return 95;
	
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
	
		case 920214733:
			return 91;
	
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
	
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
	
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
	
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
	
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
	
		case joaat("MDEFENSE__MELEE"):
			return 45;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
	
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
	
		case 1356998909:
			return 80;
	
		case joaat("MSKILL__FOCUS"):
			return 82;
	
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
	
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
	
		case 1546732394:
			return 34;
	
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
	
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
	
		case joaat("MDAMAGE__BULLETS"):
			return 32;
	
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
	
		case 1727267699:
			return 69;
	
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
	
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
	
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
	
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
	
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
	
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
	
		case joaat("MDAMAGE__THROWN"):
			return 31;
	
		case joaat("MSKILL__AWARENESS"):
			return 84;
	
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
	
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
	
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
	
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
	
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
	
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
	
		case joaat("MSKILL__POTENTIAL"):
			return 87;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_347(int iParam0) // Position - 0xB3CD Hash - 0x2139C0B7 ^0x2139C0B7
{
	int num;

	num = func_346(iParam0, 1);

	if (num < 1 || num >= 95)
		return false;

	return true;
}

float func_348(int iParam0) // Position - 0xB3F5 Hash - 0x571DF502 ^0xAB4A8B96
{
	float num;

	if (iParam0->f_2 != 0)
	{
		num = func_415(794259616, iParam0->f_2, iParam0->f_1, "");
		return num;
	}

	return iParam0->f_1;
}

void func_349(int iParam0) // Position - 0xB424 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_347(iParam0))
		return;

	num = func_346(iParam0, 1);

	if (!func_416(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] > 0)
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = 0;
	Global_1156111.f_2169[num /*205*/].f_204 = 0;

	if (!func_417(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_418(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] - 1;

	if (Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] > 0)
		return;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] != Global_1156111.f_2169[num /*205*/])
		{
		}
		else
		{
			Global_1156111.f_47561[num2 /*25*/][i] = -1;
			Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 - 1;
			Global_1156111.f_47561[num2 /*25*/][i] = Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23];
			Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = -1;
			break;
		}
	}

	return;
}

BOOL func_350(int iParam0) // Position - 0xB603 Hash - 0xD61CC19E ^0xD61CC19E
{
	int num;

	num = func_351(iParam0, 1);

	if (num < 1 || num >= 68)
		return false;

	return true;
}

int func_351(int iParam0, int iParam1) // Position - 0xB62B Hash - 0x49B3A5C3 ^0x49B3A5C3
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
	
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
	
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
	
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
	
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
	
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
	
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
	
		case -1730553768:
			return 3;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
	
		case -1651690657:
			return 65;
	
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
	
		case -1583192324:
			return 66;
	
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
	
		case -1486292178:
			return 67;
	
		case joaat("LASSO_IMMUNITY"):
			return 5;
	
		case joaat("DISABLE_JUMPING"):
			return 45;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
	
		case -1026481003:
			return 6;
	
		case joaat("TAGGING_IMMUNITY"):
			return 13;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
	
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
	
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
	
		case joaat("CONFUSION_EFFECT"):
			return 14;
	
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
	
		case -350459285:
			return 68;
	
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
	
		case -199042163:
			return 60;
	
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
	
		case -1:
			return 0;
	
		case joaat("TRAIL_EFFECT"):
			return 17;
	
		case joaat("POISON_EFFECT"):
			return 20;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
	
		case joaat("DISORIENT_EFFECT"):
			return 18;
	
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
	
		case joaat("WOUND_EFFECT"):
			return 15;
	
		case 718630298:
			return 56;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
	
		case joaat("NED_KELLY_BASE"):
			return 21;
	
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
	
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
	
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
	
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
	
		case 1037859088:
			return 51;
	
		case 1066450193:
			return 54;
	
		case 1159158432:
			return 62;
	
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
	
		case 1242495215:
			return 9;
	
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS") /* collision: RCEXO_RSC2_LIJ_1 */:
			return 63;
	
		case 1341326366:
			return 58;
	
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
	
		case 1398483650:
			return 50;
	
		case joaat("PULSE_REPOST_STATE"):
			return 38;
	
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
	
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
	
		case joaat("DRAIN_EFFECT"):
			return 16;
	
		case 1898374676:
			return 49;
	
		case 2067881273:
			return 8;
	
		case joaat("DISABLE_DROWNING"):
			return 47;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_352(int iParam0) // Position - 0xB93B Hash - 0xFC2A3E07 ^0xFD4CE356
{
	Ped ped;
	Player player;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_420();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_419();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_423(func_422(iParam0));
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_416(16);
			break;
	
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_416(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_421(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, false, 0);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_421(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_59(105, true);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_421(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(ped, 0f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, true);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_424();
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(ped, 18);
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, -1f);
			break;
	
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(ped, 0, true);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_421(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, false);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 0);
			PLAYER::_0xE910932F4B30BE23(player);
			PLAYER::_0x0E9057A9DA78D0F8(player, 8);
			PLAYER::_0x263D69767F76059C(player, 0);
			break;
	}

	return;
}

BOOL func_353(int iParam0) // Position - 0xBB4A Hash - 0x13096A7F ^0x13096A7F
{
	int num;

	num = func_354(iParam0, 1);

	if (num < 0 || num >= 5)
		return false;

	return true;
}

int func_354(int iParam0, int iParam1) // Position - 0xBB71 Hash - 0xD3D45784 ^0xD3D45784
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
	
		case -1038992817:
			return 5;
	
		case -950874556:
			return 4;
	
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
	
		case 0:
			return 0;
	
		case 1938826026:
			return 2;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_355(int iParam0) // Position - 0xBBCE Hash - 0x76D9051B ^0xE68FE534
{
	int num;
	var unk;
	var unk32;
	int num2;
	int num3;
	int i;

	num = func_360(iParam0);
	unk.f_3 = 1065353216;
	unk.f_5 = -1;
	unk.f_6 = 3;
	unk.f_6.f_1 = -1;
	unk.f_6.f_1.f_3 = -1;
	unk.f_6.f_1.f_3.f_3 = -1;
	unk.f_17 = 5;
	unk32.f_3 = 1065353216;
	unk32.f_5 = -1;
	unk32.f_6 = 3;
	unk32.f_6.f_1 = -1;
	unk32.f_6.f_1.f_3 = -1;
	unk32.f_6.f_1.f_3.f_3 = -1;
	unk32.f_17 = 5;
	num2 = -1;

	for (i = 0; i < Global_1156111.f_35859.f_11700; i = i + 1)
	{
		num3 = func_169(Global_1156111.f_35859.f_9503[i /*3*/], 1);
	
		if (Global_1156111.f_35859.f_3116[num3 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156111.f_35859.f_9503[i /*3*/] == num)
		{
		}
		else if (!func_425(Global_1156111.f_35859.f_9503[i /*3*/], Global_1156111.f_35859.f_9503[i /*3*/].f_1))
		{
		}
		else
		{
			unk = { func_426(Global_1156111.f_35859.f_9503[i /*3*/]) };
		
			if (unk.f_5 > unk32.f_5)
			{
				unk32 = { unk };
				num2 = i;
			}
		}
	}

	return num2;
}

void func_356(int iParam0) // Position - 0xBD12 Hash - 0x825D7B7E ^0x825D7B7E
{
	int num;
	int num2;
	int i;

	if (!func_347(iParam0))
		return;

	num = func_346(iParam0, 1);

	if (!func_416(Global_1156111.f_2169[num /*205*/]))
		return;

	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/][num] + 1;
	Global_1156111.f_2169[num /*205*/].f_204 = 1;

	if (!func_417(Global_1156111.f_2169[num /*205*/].f_203))
		return;

	num2 = func_418(Global_1156111.f_2169[num /*205*/].f_203, 1);
	Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] = Global_1156111[Global_1156111.f_2169[num /*205*/] /*102*/].f_96[num2] + 1;

	for (i = 0; i < Global_1156111.f_47561[num2 /*25*/].f_23; i = i + 1)
	{
		if (Global_1156111.f_47561[num2 /*25*/][i] == Global_1156111.f_2169[num /*205*/])
			return;
	}

	Global_1156111.f_47561[num2 /*25*/][Global_1156111.f_47561[num2 /*25*/].f_23] = Global_1156111.f_2169[num /*205*/];
	Global_1156111.f_47561[num2 /*25*/].f_23 = Global_1156111.f_47561[num2 /*25*/].f_23 + 1;
	return;
}

BOOL func_357(int iParam0) // Position - 0xBE67 Hash - 0x5CEAAD89 ^0xA6C1BC9F
{
	BOOL flag;

	if (iParam0->f_1 != 0)
	{
		flag = func_427(794259616, iParam0->f_1, true, "");
		return flag;
	}

	return true;
}

void func_358(int iParam0) // Position - 0xBE90 Hash - 0xE1E3399D ^0xAAA920BB
{
	Ped ped;
	Player player;
	int num;
	int entityBoneIndexByName;

	ped = PLAYER::PLAYER_PED_ID();
	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case joaat("HEADSHOT_IMMUNITY"):
			func_420();
			break;
	
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1936842089);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_419();
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			num = func_422(iParam0);
			func_429(num, 3, 1, -1, 1);
			break;
	
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_416(16);
			break;
	
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1014693585);
			PLAYER::_0x2B12B6FC8B8772AB(player, 8);
			PLAYER::_0x131E294EF60160DF(player, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(player, 1);
			break;
	
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_416(17);
			break;
	
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_421(iParam0));
			break;
	
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(ped, true, 0);
			GRAPHICS::ANIMPOSTFX_PLAY(func_421(iParam0));
			break;
	
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_59(104, true);
			break;
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			num = func_422(iParam0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_428(iParam0, 0));
			func_429(num, 0, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_428(iParam0, 1));
			func_429(num, 1, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_428(iParam0, 2));
			func_429(num, 2, 1, entityBoneIndexByName, 0);
			entityBoneIndexByName = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(ped, func_428(iParam0, 3));
			func_429(num, 2, 1, entityBoneIndexByName, 0);
			break;
	
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_421(iParam0));
			break;
	
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(player, "focusfire");
			break;
	
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
	
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(ped, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
	
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(player, false);
			break;
	
		case joaat("NED_KELLY_BASE"):
			func_430();
			break;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			num = func_422(iParam0);
			func_429(num, 4, 1, -1, 0);
			break;
	
		case joaat("OVERPOWER_PREDATOR"):
			break;
	
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(player, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(player, 2f);
			break;
	
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_421(iParam0));
			break;
	
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(player, true);
			break;
	
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(player, 1979474018);
			PLAYER::_0x2B12B6FC8B8772AB(player, 25);
			PLAYER::_0x263D69767F76059C(player, 2);
			break;
	}

	return;
}

void func_359(int iParam0) // Position - 0xC12F Hash - 0x4D7CA01F ^0xE11E9732
{
	char* audioName;
	char* audioRef;

	if (iParam0 == 0)
		return;

	audioName = func_431(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioName))
		return;

	audioRef = func_432(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(audioRef))
		return;

	AUDIO::PLAY_SOUND_FROM_ENTITY(audioName, Global_1295666.f_3, audioRef, false, 0, 0);
	return;
}

int func_360(int iParam0) // Position - 0xC179 Hash - 0x7AD8D3DF ^0x2C577CC4
{
	int num;

	if (!func_353(iParam0))
		return -1;

	num = func_354(iParam0, 1);
	return Global_1156111.f_35859.f_9286[num /*3*/];
}

int func_361(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC1A8 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_433(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_87(bParam1), hParam0, bParam3);
}

void func_362(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xC1DB Hash - 0xBC161045 ^0xD3B33F74
{
	int i;

	if (iParam0 == -1)
		return;

	if (Global_1292143.f_20 < 20)
	{
		Global_1292143.f_20 = Global_1292143.f_20 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1292143.f_20.f_1[i /*21*/] = { Global_1292143.f_20.f_1[i + 1 /*21*/] };
		}
	}

	func_434(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

BOOL func_363(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xC2B7 Hash - 0x7D75927B ^0xD259228E
{
	var unk;

	if (!func_88(false))
		return func_435(&uParam0, bParam4, true) != -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_192(uParam0, &unk, bParam5, false, -1))
		return false;

	if (unk.f_10 == bParam4)
		return true;

	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_87(bParam5), &uParam0, bParam4))
		return false;

	return true;
}

void func_364(var uParam0, int iParam1) // Position - 0xC32B Hash - 0x9E628A6B ^0xBF78A72D
{
	int i;

	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_211(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_365(BOOL bParam0, int iParam1, int iParam2) // Position - 0xC37C Hash - 0x2B8C80AA ^0xBEDF1A8D
{
	if (iParam1 == -1)
		iParam1 = Global_17418.f_55.f_664.f_1777;

	if (iParam1 > -1 && iParam1 < 11)
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || bParam0;

	return;
}

int func_366(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xC3C7 Hash - 0xFC1A4C7A ^0x2FD92EB6
{
	var unk;
	var guid;

	unk = { func_85(hParam0, bParam2, 0) };
	guid = { func_86(hParam0, unk, unk.f_4, bParam2) };

	if (func_288(hParam0, unk, unk.f_4, bParam2, false, false) <= 0)
		return 0;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_87(bParam2), &guid, bParam1);
	return 1;
}

int func_367(int iParam0) // Position - 0xC419 Hash - 0x4840ACEF ^0x81C8BA00
{
	if (iParam0 == 0)
		iParam0 = func_330();

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		return -1806335803;
	else if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		return -971050805;

	return 0;
}

int func_368(int iParam0) // Position - 0xC455 Hash - 0x34CDD129 ^0x4B6C5D
{
	switch (iParam0)
	{
		case -1932005642:
			return 131072;
	
		case -1925540957:
			return 65536;
	
		case -1886898087:
			return 32880;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 32768;
	
		case -1629261761:
			return 2049;
	
		case -1283403230:
			return 4096;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 65601;
	
		case -915377750:
			return 2048;
	
		case -884591393:
			return 96;
	
		case -803648582:
			return 128;
	
		case -663436545:
			return 112;
	
		case -597281578:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
	
		case 75507907:
			return 16384;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
	
		case 351949263:
			return 262144;
	
		case 396349281:
			return 2097152;
	
		case 465720259:
			return 1048576;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 40960;
	
		case 884232794:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 8192;
	
		case 1042019528:
			return 2160;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 2050534155:
			return 48;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_369(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xC5F6 Hash - 0x7FE551F ^0xCF526C14
{
	int i;
	Hash hash;
	Hash hash2;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_436(&uParam0->f_1[i /*3*/], 2))
		{
			if (func_437(i, iParam1))
			{
				hash2 = { func_210(i, -1) };
			
				if (!bParam4 && hash2 != Global_1953292.f_83[i /*12*/] && hash2 != 0 && uParam0->f_1[i /*3*/] != hash2 || uParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					uParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_438(i, 4))
					func_439(i, 4, 6);
			}
			else
			{
				if (bParam3)
					func_440(i, 4, 6);
			
				goto 0xCD;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1953292.f_83[i /*12*/];
			uParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

void func_370(int iParam0, int iParam1, int iParam2) // Position - 0xC6CF Hash - 0x10354A04 ^0x626AEEF7
{
	Global_1953292.f_83[func_213(iParam0, 1) /*12*/].f_11 = Global_1953292.f_83[func_213(iParam0, 1) /*12*/].f_11 || iParam1;
	return;
}

BOOL func_371(int iParam0) // Position - 0xC6FC Hash - 0xA5B8FD07 ^0xA62D1647
{
	int num;
	var unk;

	Global_1953292.f_1039.f_2 = 0;
	num = 1226838104;
	func_381(&(Global_1953292.f_1039), num, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953292.f_1039));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1953292.f_1039), 1409451727))
		return false;

	return true;
}

int func_372(Hash hParam0) // Position - 0xC755 Hash - 0xE1F3DDAE ^0x5813B139
{
	var outData;
	int num;

	if (!func_3(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, 761377030, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

void func_373(var uParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0xC78F Hash - 0x5B22F0B4 ^0xB19405C9
{
	int i;
	BOOL flag;

	if (func_13(uParam0->f_1[34 /*3*/], -166674229))
		return;

	for (i = 0; i < 39; i = i + 1)
	{
		flag = func_438(i, 16);
	
		if (flag)
			func_439(i, 16, 9);
	
		if (Global_1953292.f_83[i /*12*/].f_3[0] == joaat("MISSING") || uParam0->f_1[i /*3*/] == 0)
		{
		}
		else
		{
			if (flag)
				func_229(i, iParam3);
		
			if (!bParam2 && func_372(uParam0->f_1[i /*3*/]) != 0)
			{
			}
			else if (func_437(i, iParam1) && !flag)
			{
				uParam0->f_1[i /*3*/] = Global_1953292.f_83[i /*12*/];
				uParam0->f_1[i /*3*/].f_1 = 0;
				func_231(uParam0, uParam0->f_1[i /*3*/], i, true, iParam3);
				func_229(i, iParam3);
			}
			else if (flag && !bParam2)
			{
				func_231(uParam0, uParam0->f_1[i /*3*/], i, false, iParam3);
			}
		}
	}

	return;
}

Hash func_374(int iParam0, int iParam1) // Position - 0xC89B Hash - 0xD36D7E4E ^0x5FDE473
{
	int num;
	int num2;
	int num3;
	var unk;

	num3 = 0;
	unk = { func_441(0, joaat("SLOTID_NONE"), iParam0, joaat("SLOTID_NONE"), 0, 0, 0) };

	if (func_442(&unk, &num, &num2, true))
	{
		if (num2 > 0)
			num3 = func_443(num, num2, iParam1);
	
		func_444(num);
	}

	return num3;
}

struct<8> func_375(int iParam0) // Position - 0xC8E8 Hash - 0xAAC9C045 ^0xE6DD002E
{
	var unk;

	if (func_202(4, iParam0))
		return Global_17418.f_2645[iParam0 /*8*/];

	TEXT_LABEL_ASSIGN_STRING(&unk, HUD::GET_STRING_FROM_HASH_KEY(func_445(iParam0)), 64);
	return unk;
}

const char* func_376(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xC91D Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Hash func_377(Hash hParam0) // Position - 0xC931 Hash - 0xD046EEF0 ^0xB8E66C21
{
	int num;
	var unk;
	int collectionId;
	int num2;
	int i;
	Hash outKey;

	num = func_446(hParam0);

	if (num == 0)
		return 0;

	unk = { func_447(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };

	if (func_448(unk, &collectionId, &num2, 0))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(collectionId, i, &outKey) && func_449(outKey))
			{
				func_450(collectionId);
				return outKey;
			}
		}
	
		func_450(collectionId);
	}

	return 0;
}

Hash func_378(Hash hParam0, BOOL bParam1) // Position - 0xC9B6 Hash - 0x88397BA6 ^0x88397BA6
{
	Hash hash;

	if (!func_3(hParam0, 0))
		return 0;

	hash = func_451(hParam0, bParam1);

	if (hash != 0)
		return hash;

	return hParam0;
}

Hash func_379() // Position - 0xC9E4 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1953292.f_1676;
}

void func_380(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0xC9F3 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

void func_381(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5) // Position - 0xCA24 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = hParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = iParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_382(var uParam0, int iParam1) // Position - 0xCA53 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_383(var uParam0, int iParam1, int iParam2) // Position - 0xCA64 Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_384(int iParam0, int iParam1) // Position - 0xCA77 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_385(int iParam0, int iParam1) // Position - 0xCA88 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_386(var uParam0, BOOL bParam1, int iParam2) // Position - 0xCA9B Hash - 0x3F8569B2 ^0x210C3509
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 12;
	hash = uParam0->f_1[num /*3*/];

	if (func_13(hash, 160827531) || func_190(hash) == 81053684)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	return;
}

void func_387(var uParam0, BOOL bParam1, int iParam2) // Position - 0xCAFE Hash - 0x5D9C216F ^0x7A27103D
{
	int num;

	if (bParam1)
		return;

	num = 11;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(uParam0->f_1[num /*3*/], -93469181))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	return;
}

BOOL func_388(Hash hParam0) // Position - 0xCB63 Hash - 0xC36143B1 ^0xD0F863A4
{
	if (!func_3(hParam0, 0))
		return false;

	if (func_13(hParam0, 160827531) || func_190(hParam0) == 81053684)
		return true;

	return false;
}

void func_389(var uParam0, BOOL bParam1, int iParam2) // Position - 0xCB9F Hash - 0xD866F2E0 ^0x10CD7BBC
{
	int num;

	if (bParam1)
		return;

	num = 10;

	if (-525676072 == func_190(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	return;
}

BOOL func_390(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xCBEC Hash - 0x1514A216 ^0x8B5540D1
{
	Hash hash;

	hash = func_190(hParam0);

	if (iParam2 == 0)
		return hash == 1759215194 || hash == 344283346;

	return !bParam1 && hash == -1740828670 || hash == 344283346;
}

BOOL func_391(int iParam0) // Position - 0xCC39 Hash - 0xB39D195A ^0x26136171
{
	return Global_17418.f_55.f_664.f_1734 && iParam0 != false;
}

void func_392(var uParam0, int iParam1) // Position - 0xCC51 Hash - 0x91DC8CCD ^0x83C6C8B8
{
	int num;
	BOOL flag;

	num = 16;
	flag = false;

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag = true;

	func_229(num, iParam1);

	if (uParam0->f_1[num /*3*/].f_1 == -1539589426 || uParam0->f_1[num /*3*/].f_1 == 1334603721)
		return;

	if (uParam0->f_1[num /*3*/].f_1 == 0 || uParam0->f_1[num /*3*/].f_1 == joaat("base"))
	{
		if (func_331(uParam0->f_1[num /*3*/], flag, -1539589426) >= 0)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			return;
		}
	}

	if (func_331(uParam0->f_1[num /*3*/], flag, 1334603721) >= 0)
		uParam0->f_1[num /*3*/].f_1 = 1334603721;

	return;
}

void func_393(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xCD17 Hash - 0x40A062A0 ^0xFAF44654
{
	int num;

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, -1527414429) && !func_13(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/].f_1 == 1530758430 || uParam0->f_1[num /*3*/].f_1 == 1334603721 && func_13(hParam2, -985549034))
	{
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_229(num, iParam3);
		}
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
		{
			uParam0->f_1[num /*3*/].f_1 = -1539589426;
			func_229(num, iParam3);
		}
	}

	return;
}

void func_394(var uParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xCE1F Hash - 0xACD9DBFF ^0x9A6E665B
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	if (uParam0->f_1[iParam2 /*3*/].f_1 != -2081918609)
	{
		num = 34;
		hash = uParam0->f_1[num /*3*/];
	
		if (func_13(hash, 1583165364))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
			func_229(iParam2, iParam3);
		}
		else
		{
			num = 35;
			hash = uParam0->f_1[num /*3*/];
		
			if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_190(hash))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -2081918609;
				func_229(iParam2, iParam3);
			}
		}
	}

	return;
}

void func_395(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xCF01 Hash - 0xCE5028CB ^0xB60DB9E1
{
	int num;
	Hash hash;

	num = 16;
	func_229(num, iParam3);
	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_13(hParam2, 1889502862) && func_190(hash) == 698653232)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
		else if (func_13(hParam2, 449467137) && func_190(hash) == 912453393)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
		else
		{
			func_229(num, iParam3);
		}
	}

	if (bParam1)
	{
		num = 21;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		{
			func_229(num, iParam3);
			func_323(uParam0, false, uParam0->f_1[num /*3*/], iParam3);
		}
	
		num = 17;
	
		if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
		{
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	
		return;
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, 1126863852))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, -985549034))
		if (uParam0->f_1[num /*3*/].f_1 == 1530758430)
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		else if (uParam0->f_1[num /*3*/].f_1 == 1334603721)
			uParam0->f_1[num /*3*/].f_1 = -1539589426;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, -1527414429) && !func_13(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

void func_396(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xD16E Hash - 0xECEB911D ^0x9A8DDBFB
{
	int num;

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_229(num, iParam3);

	if (bParam1)
		return;

	num = 12;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && !func_13(uParam0->f_1[num /*3*/], -1303648999))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 13;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 25;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, 675650051))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

BOOL func_397(int iParam0) // Position - 0xD282 Hash - 0xF59F0C09 ^0x24088083
{
	return Global_1953292.f_1676.f_1[func_213(iParam0, 1) /*3*/] != Global_1953292.f_83[func_213(iParam0, 1) /*12*/];
}

void func_398(var uParam0, int iParam1) // Position - 0xD2AC Hash - 0xCA6DCF0B ^0x61DC2CB2
{
	int num;

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam1);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_229(num, iParam1);

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_13(uParam0->f_1[num /*3*/], -928740153))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	
		func_229(num, iParam1);
	}

	return;
}

void func_399(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xD377 Hash - 0xDFA7EB0B ^0x40890D8A
{
	int num;
	Hash hash;
	BOOL flag;
	BOOL flag2;

	if (bParam1)
		return;

	flag = false;
	flag2 = false;

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		flag2 = true;

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_190(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_374(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}

	num = 36;
	func_229(num, iParam3);

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, -1473580422))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_13(hash, 1469783911))
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
		}
		else if (func_331(uParam0->f_1[num /*3*/], flag2, -2081918609) != -1)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_190(hash) == 912453393)
		{
			flag = true;
		
			if (func_13(hParam2, 1583165364))
			{
				uParam0->f_1[num /*3*/].f_1 = -2081918609;
				func_229(num, iParam3);
			}
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/])
		if (func_190(hash) == 1868067663 && func_13(hParam2, -1016441646))
			func_452(uParam0, num, iParam3);
		else if (flag)
			func_229(num, iParam3);

	num = 34;

	if (1759215194 == func_190(uParam0->f_1[num /*3*/]))
		func_229(16, iParam3);

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, -1650340550))
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_190(hash) == 1769055947)
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}

	return;
}

void func_400(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xD61F Hash - 0xB469B457 ^0x8B431766
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/] && func_190(uParam0->f_1[18 /*3*/]) != 912453393)
		{
			uParam0->f_1[num /*3*/] = func_374(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_13(uParam0->f_1[num /*3*/], -2093434733))
			func_406(uParam0, iParam3, true, false);
		else if (func_13(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	func_229(num, iParam3);
	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (func_13(hash, 1090938458) && func_13(hParam2, 475297062))
			func_452(uParam0, num, iParam3);
	}

	return;
}

void func_401(var uParam0, BOOL bParam1, int iParam2) // Position - 0xD780 Hash - 0xBF53216D ^0xF222A515
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	func_229(36, iParam2);
	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		num = 16;
	
		if (uParam0->f_1[num /*3*/] == Global_1953292.f_83[num /*12*/])
		{
			num = 16;
			uParam0->f_1[num /*3*/] = func_374(Global_1953292.f_83[num /*12*/].f_9, 0);
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam2);
		}
	}

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (hash != Global_1953292.f_83[num /*12*/] && func_13(hash, 353024991))
		func_452(uParam0, num, iParam2);

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && 1769055947 == func_190(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	return;
}

void func_402(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xD935 Hash - 0xA299C777 ^0x2B6FCFBA
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 20;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_190(hash) == 294388917)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 18;
	hash = uParam0->f_1[num /*3*/];

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_190(hash) == 912453393)
		{
			if (uParam0->f_1[num /*3*/].f_1 != joaat("base"))
			{
				uParam0->f_1[num /*3*/].f_1 = joaat("base");
				func_229(num, iParam3);
			}
		}
		else
		{
			uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
			uParam0->f_1[num /*3*/].f_1 = 0;
			func_229(num, iParam3);
		}
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		if (func_13(uParam0->f_1[num /*3*/], -2093434733))
			func_406(uParam0, iParam3, true, false);
		else if (func_13(hParam2, 1718965018))
			uParam0->f_1[num /*3*/].f_1 = joaat("base");

	return;
}

void func_403(var uParam0, BOOL bParam1, int iParam2) // Position - 0xDB70 Hash - 0x1E46B0A9 ^0x1BAB244E
{
	int num;

	if (bParam1)
		return;

	num = 20;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
		func_452(uParam0, num, iParam2);

	num = 21;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 16;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 29;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 35;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		if (func_13(uParam0->f_1[num /*3*/], -2093434733))
		{
			func_406(uParam0, iParam2, true, false);
		}
		else
		{
			uParam0->f_1[num /*3*/].f_1 = joaat("base");
			func_229(num, iParam2);
		}
	}

	return;
}

void func_404(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xDD68 Hash - 0x5B6170DC ^0xD9A8FB92
{
	int num;
	Hash hash;

	if (bParam1)
		return;

	num = 34;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = joaat("base");
		func_229(num, iParam3);
	}

	num = 36;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/].f_1 = -2081918609;
		func_229(num, iParam3);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && func_13(hParam2, -1278198125))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	num = 18;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		hash = uParam0->f_1[num /*3*/];
	
		if (912453393 == func_190(hash) && uParam0->f_1[num /*3*/].f_1 != -2081918609)
		{
			uParam0->f_1[num /*3*/].f_1 = -2081918609;
			func_229(num, iParam3);
		}
	}

	return;
}

void func_405(var uParam0, BOOL bParam1, Hash hParam2, int iParam3) // Position - 0xDE85 Hash - 0x24AAAC6C ^0x8A4DF257
{
	int num;

	if (bParam1)
		return;

	num = 37;

	if (func_13(hParam2, -1278198125) && uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam3);
	}

	return;
}

void func_406(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xDEE4 Hash - 0x5D4D0F7B ^0xD4757168
{
	int num;

	num = 36;

	if (bParam2)
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam1);
	}

	num = 37;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam1);
	}

	num = 38;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/])
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam1);
	}

	num = 35;

	if (bParam3 && -923693316 == func_190(uParam0->f_1[num /*3*/]))
	{
		uParam0->f_1[num /*3*/] = Global_1953292.f_83[num /*12*/];
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam1);
	}

	return;
}

int func_407(int iParam0) // Position - 0xDFDB Hash - 0x7B86774C ^0x7B86774C
{
	switch (iParam0)
	{
		case -897347426:
			return 1;
	
		case -409773112:
			return 2;
	
		case 377740851:
			return 0;
	
		default:
		
	}

	return 0;
}

Hash func_408(int iParam0) // Position - 0xE00A Hash - 0xB8EC44B7 ^0xD13C219E
{
	switch (iParam0)
	{
		case -2118203104:
			return -1994943603;
	
		case -2056583192:
			return -1248299493;
	
		case -1811760631:
			return -246340825;
	
		case -1180698265:
			return -1915385310;
	
		case -875805376:
			return -1371514637;
	
		case -768760704:
			return 1547608292;
	
		case -559080197:
			return 892816668;
	
		case -487028314:
			return 1315162488;
	
		case -340627321:
			return -2041626192;
	
		case 12857284:
			return -1990383629;
	
		case 241235545:
			return 727393558;
	
		case 299749022:
			return -101524555;
	
		case 1015239729:
			return -451359317;
	
		case 1089431066:
			return -361152079;
	
		case 1285634184:
			return 1011151573;
	
		case 1301555144:
			return 1712094016;
	
		case 1827902148:
			return -1228057307;
	
		case 1858448324:
			return -1839865333;
	
		default:
		
	}

	return 0;
}

Hash func_409(var uParam0, var uParam1, var uParam2, var uParam3, Hash hParam4, BOOL bParam5, int iParam6) // Position - 0xE117 Hash - 0x67107E64 ^0x67107E64
{
	return func_453(&uParam0, hParam4, bParam5, iParam6);
}

struct<18> func_410(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xE12B Hash - 0x5B9BBF8B ^0x19F03106
{
	var unk;
	var unk19;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk19.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_87(bParam4), &uParam0, &unk19, 15, 1))
		return unk;

	unk = { func_89(&unk19, bParam5) };
	unk.f_17 = unk19.f_14;
	return unk;
}

float func_411(int iParam0) // Position - 0xE1A0 Hash - 0x356DF1A ^0x4FEF1C5B
{
	return func_135(BUILTIN::TO_FLOAT(iParam0) / 10000f, 0.001f, 1f);
}

void func_412(var uParam0, var uParam1) // Position - 0xE1BE Hash - 0x5E220F17 ^0x63CB5E53
{
	int i;
	int num;
	var unk;

	num = uParam0->f_6 - 1;
	unk.f_2 = -1;
	unk.f_13 = 1065353216;
	unk.f_14 = 1065353216;

	for (i = uParam0->f_6 - 1; i >= 1; i = i + -1)
	{
		if (uParam1->[i /*18*/].f_1 < uParam1->[i - 1 /*18*/].f_1)
		{
			PED::_REMOVE_PED_OVERLAY(*uParam0, uParam1->[i - 1 /*18*/].f_2);
			unk = { uParam1->[i /*18*/] };
			uParam1->[i /*18*/] = { uParam1->[i - 1 /*18*/] };
			uParam1->[i - 1 /*18*/] = { unk };
			num = i - 1;
		}
		else
		{
			break;
		}
	}

	for (i = num; i <= uParam0->f_6 - 1; i = i + 1)
	{
		func_413(uParam0, &uParam1->[i /*18*/]);
	}

	return;
}

void func_413(var uParam0, var uParam1) // Position - 0xE28A Hash - 0xB442C246 ^0xEF024D3A
{
	uParam1->f_2 = PED::_ADD_TEXTURE_LAYER(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_337(uParam0, uParam1, false);
	return;
}

void func_414(int iParam0, int iParam1) // Position - 0xE2BE Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

float func_415(Hash hParam0, Hash hParam1, float fParam2, char* sParam3) // Position - 0xE2CF Hash - 0xFE4D9153 ^0xACBF575D
{
	var unk;
	float num;

	if (func_454(hParam0, hParam1, &unk))
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, unk.f_10.f_1);
	else
		num = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(hParam0, hParam1, fParam2);

	return num;
}

BOOL func_416(int iParam0) // Position - 0xE305 Hash - 0xCFB57BFC ^0xD6F1E06
{
	if (iParam0 <= -1 || iParam0 >= 21)
		return false;

	if (iParam0 == 0)
		return true;

	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156111.f_2166), iParam0))
		return true;

	if (Global_1156111.f_2165 >= 21)
		return false;

	Global_1156111.f_2143[Global_1156111.f_2165] = iParam0;
	Global_1156111.f_2165 = Global_1156111.f_2165 + 1;
	return true;
}

BOOL func_417(int iParam0) // Position - 0xE374 Hash - 0x3374FEFF ^0x3374FEFF
{
	int num;

	num = func_418(iParam0, 1);

	if (num < 1 || num >= 5)
		return false;

	return true;
}

int func_418(int iParam0, int iParam1) // Position - 0xE39B Hash - 0xAF8796DC ^0xAF8796DC
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
	
		case -1016837116:
			return 5;
	
		case 0:
			return 0;
	
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
	
		case joaat("NEARBY_ALLIES"):
			return 2;
	
		case 1416591065:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_419() // Position - 0xE3F8 Hash - 0x8482C9D6 ^0xF644936D
{
	BOOL value;
	BOOL value2;

	if (Global_1156111.f_21645[3 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 550, value);

	if (Global_1156111.f_21645[4 /*209*/].f_208)
		if (!func_286(Global_1297600[Global_1295666 /*87*/].f_86, 1))
			value2 = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 556, value2);
	return;
}

void func_420() // Position - 0xE45A Hash - 0x1EC790D6 ^0xC31DC9FE
{
	BOOL value;

	value = false;

	if (Global_1156111.f_21645[12 /*209*/].f_208)
		value = true;

	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 263, value);
	return;
}

char* func_421(int iParam0) // Position - 0xE48A Hash - 0x82C6A767 ^0x776874E
{
	switch (iParam0)
	{
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
	
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
	
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
	
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
	
		default:
		
	}

	return "";
}

int func_422(int iParam0) // Position - 0xE4D1 Hash - 0x21FAF347 ^0xA1AE9E4F
{
	switch (iParam0)
	{
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return joaat("MOMENT_TO_RECUPERATE_VFX");
	
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -843895567;
	
		case joaat("SLOW_AND_STEADY_VFX"):
			return joaat("SLOW_AND_STEADY_VFX");
	
		default:
		
	}

	return 0;
}

void func_423(int iParam0) // Position - 0xE50C Hash - 0x2CE3A2A0 ^0xF0457356
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_1203871[i /*8*/].f_5 == iParam0)
		{
			Global_1203871[i /*8*/].f_7 = 1;
			Global_1203871[i /*8*/].f_5 = 0;
		}
	}

	return;
}

void func_424() // Position - 0xE54C Hash - 0xFDAE0587 ^0x5AB4C733
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3);
	return;
}

BOOL func_425(int iParam0, int iParam1) // Position - 0xE56C Hash - 0xB2431B7B ^0xEC29640E
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;

	if (!func_274(iParam0))
		return false;

	num = func_169(iParam0, 1);
	num3 = Global_1156111.f_35859.f_3116[num /*31*/].f_4;

	if (func_276(Global_1156111.f_35859.f_3116[num /*31*/]))
	{
		num4 = Global_1156111.f_35859.f_9286[func_354(num3, 1) /*3*/];
		unk = { func_426(num4) };
	
		if (num4 != iParam0 && Global_1156111.f_35859.f_3116[num /*31*/].f_5 <= unk.f_5)
			return false;
	}

	switch (Global_1156111.f_35859.f_3116[num /*31*/])
	{
		case joaat("ENTER_REVIVED_REMOTE"):
			num2 = func_273(iParam1);
		
			if (num2 == Global_1295666)
				return false;
		
			return true;
	
		case -2129621195:
			num2 = func_273(iParam1);
		
			if (num2 == Global_1295666)
				return false;
		
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295666.f_149[Global_1295666]))
				return false;
		
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295666.f_149[num2]))
				return false;
		
			return true;
	
		case -2010146101:
			if (!func_455())
				return false;
		
			return true;
	
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
	
		case -1503245593:
			if (!Global_1956875.f_1716[8])
				return false;
		
			num2 = func_273(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[num2]))
				return false;
		
			if (PED::_GET_LASSOED_LASSOER(Global_1295666.f_3) != PLAYER::GET_PLAYER_PED(Global_1295666.f_149[num2]))
				return false;
		
			return true;
	
		case joaat("ALLY_ENTER_DEADEYE"):
			num2 = func_273(iParam1);
		
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[num2]))
				return false;
		
			if (num2 != Global_1295666 && !func_457(Global_1295666.f_149[num2]))
				return false;
		
			if (!func_458(512, num2))
				return false;
		
			return true;
	
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_455() && !func_456())
				return false;
		
			return true;
	
		default:
		
	}

	return false;
}

struct<31> func_426(int iParam0) // Position - 0xE841 Hash - 0xCDBF4D5E ^0x8519EC8B
{
	int num;

	num = func_169(iParam0, 1);
	return Global_1156111.f_35859.f_3116[num /*31*/];
}

BOOL func_427(Hash hParam0, Hash hParam1, BOOL bParam2, char* sParam3) // Position - 0xE865 Hash - 0xFE4D9153 ^0x67064BE4
{
	var unk;
	BOOL flag;

	if (func_454(hParam0, hParam1, &unk))
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, unk.f_10.f_2);
	else
		flag = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(hParam0, hParam1, bParam2);

	return flag;
}

char* func_428(int iParam0, int iParam1) // Position - 0xE89B Hash - 0x503DA6AB ^0xA640DEBD
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
			
				case 1:
					return "CP_CHEST";
			
				case 2:
					return "CP_R_UpperArm";
			
				case 3:
					return "CP_L_UpperArm";
			
				default:
					break;
			}
			break;
	}

	return "";
}

void func_429(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xE8F3 Hash - 0x4DFFD3F3 ^0xFBF31414
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203871[i /*8*/]) && !Global_1203871[i /*8*/].f_6)
		{
			Global_1203871[i /*8*/].f_5 = iParam0;
			Global_1203871[i /*8*/].f_1 = iParam1;
			Global_1203871[i /*8*/].f_2 = iParam2;
			Global_1203871[i /*8*/].f_3 = iParam3;
			Global_1203871[i /*8*/].f_4 = iParam4;
			Global_1203871[i /*8*/].f_6 = 1;
			return;
		}
	}

	return;
}

void func_430() // Position - 0xE978 Hash - 0x54572B7C ^0x904B9528
{
	PED::SET_PED_CONFIG_FLAG(Global_1295666.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295666.f_3, 0.7f);
	return;
}

char* func_431(int iParam0) // Position - 0xE99D Hash - 0x7FAECEBB ^0x21ED6D5
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
	
		default:
		
	}

	return "";
}

char* func_432(int iParam0) // Position - 0xE9BD Hash - 0x7FAECEBB ^0x1E025294
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
	
		default:
		
	}

	return "";
}

BOOL func_433(Hash hParam0) // Position - 0xE9DD Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

void func_434(int iParam0) // Position - 0xE9EB Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_459(&(iParam0->f_4));
	return;
}

int func_435(Any* panParam0, int iParam1, BOOL bParam2) // Position - 0xEA0E Hash - 0x85BC54D5 ^0xA60D4F06
{
	int num;
	var unk;
	int num2;
	var unk15;
	var unk44;
	var unk70;
	var unk88;

	num = -1;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return num;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_192(*panParam0, &unk, true, false, -1))
		return num;

	if (unk.f_10 == iParam1)
		return num;

	if (unk.f_13)
		return num;

	num2 = func_184(unk.f_4);

	if (num2 == joaat("HORSE"))
	{
		unk15 = { func_460(*panParam0, true, false) };
		unk15.f_10 = iParam1;
		num = func_461(joaat("UPDATE"), &unk15, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("coach"))
	{
		unk44 = { func_462(*panParam0, true, false) };
		unk44.f_10 = iParam1;
		num = func_463(joaat("UPDATE"), &unk44, bParam2);
	
		if (num == -1)
			return num;
	}
	else if (num2 == joaat("CLOTHING"))
	{
		unk70 = { func_410(*panParam0, true, false) };
		unk70.f_10 = iParam1;
		num = func_90(joaat("UPDATE"), &unk70, bParam2);
	
		if (num == -1)
			return num;
	}
	else
	{
		unk88 = { func_89(&unk, false) };
		unk88.f_10 = iParam1;
		num = func_464(joaat("UPDATE"), &unk88, bParam2);
	
		if (num == -1)
			return num;
	}

	return num;
}

BOOL func_436(var uParam0, int iParam1) // Position - 0xEB51 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_437(int iParam0, int iParam1) // Position - 0xEB62 Hash - 0xEE6DCA90 ^0xB0C7528A
{
	if (iParam0 < 0 || iParam0 >= 39)
		return false;

	return Global_1953292.f_83[iParam0 /*12*/].f_10 && iParam1 != false;
}

BOOL func_438(int iParam0, int iParam1) // Position - 0xEB91 Hash - 0xECB143B0 ^0xBA414228
{
	return Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1 != false;
}

void func_439(int iParam0, int iParam1, int iParam2) // Position - 0xEBAA Hash - 0xF59FAE7F ^0x9B3AA80E
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 - Global_1953292.f_83[iParam0 /*12*/].f_11 && iParam1;
	return;
}

void func_440(int iParam0, int iParam1, int iParam2) // Position - 0xEBDA Hash - 0x5033A276 ^0xAD3736DE
{
	Global_1953292.f_83[iParam0 /*12*/].f_11 = Global_1953292.f_83[iParam0 /*12*/].f_11 || iParam1;
	return;
}

struct<18> func_441(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xEBFD Hash - 0x90CCF0F4 ^0xA5F3D799
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;
	num.f_13 = -1;
	num.f_14 = -1;
	num.f_15 = -1;
	num.f_16 = -1;
	num.f_17 = -1;

	if (iParam0 != 0)
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		num.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != 0)
		num.f_8 = iParam6;

	return num;
}

BOOL func_442(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xECDB Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_87(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_443(int iParam0, int iParam1, int iParam2) // Position - 0xED00 Hash - 0xFE41A884 ^0x917B03C
{
	int i;
	var unk;
	Hash hash;
	int metapedType;

	unk.f_9 = joaat("SLOTID_NONE");
	metapedType = 0;

	if (func_330() == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		metapedType = 1;

	iParam2 = iParam2 | 28;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (!func_465(&unk, i, iParam0, iParam1))
		{
		}
		else if (func_466(unk.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(unk.f_4, metapedType, true) == 0)
		{
		}
		else if (func_372(unk.f_4) != 0)
		{
		}
		else if (func_13(unk.f_4, -166674229))
		{
		}
		else if (func_13(unk.f_4, 525391395))
		{
		}
		else
		{
			hash = func_190(unk.f_4);
		
			if (func_468(iParam2, func_467(hash)))
			{
			}
			else
			{
				return unk.f_4;
			}
		}
	}

	return 0;
}

int func_444(int iParam0) // Position - 0xEDCD Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_445(int iParam0) // Position - 0xEDEE Hash - 0xB8EC44B7 ^0x7FF5C9C2
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
	
		case 2:
			return 97391779;
	
		case 3:
			return -808817534;
	
		case 4:
			return 1270922359;
	
		case 5:
			return -2011879201;
	
		case 6:
			return -1063340820;
	
		case 7:
			return 2127262701;
	
		case 8:
			return -1323870201;
	
		case 9:
			return 1632140501;
	
		case 10:
			return 967218463;
	
		default:
		
	}

	return 0;
}

int func_446(Hash hParam0) // Position - 0xEE8B Hash - 0xE1F3DDAE ^0xC8D3B326
{
	var outData;
	int num;

	if (!func_3(hParam0, 0))
		return 0;

	outData = 5;
	num = ITEMDATABASE::_0x8870895BA5ED9385(hParam0, -442898163, &outData);

	if (num > 0)
		return outData[0];

	return 0;
}

struct<10> func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0xEEC5 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_448(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0xEF99 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

BOOL func_449(Hash hParam0) // Position - 0xEFBA Hash - 0x5E6E1858 ^0xE905275C
{
	!func_3(hParam0, 0);

	if (func_13(hParam0, -393037696))
		return true;

	return false;
}

int func_450(int iParam0) // Position - 0xEFE0 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_451(Hash hParam0, BOOL bParam1) // Position - 0xF001 Hash - 0xBBDA5425 ^0x9568D91C
{
	switch (hParam0)
	{
		case joaat("kit_pouch_kit"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
	
		case joaat("kit_pouch_valuables"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
	
		case joaat("kit_pouch_provisions"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	
		case joaat("kit_pouch_remedies"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
	
		case 239629152:
			if (bParam1)
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			break;
	
		case joaat("kit_pouch_materials"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
	
		case joaat("kit_pouch_ingredients"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
	}

	return 0;
}

void func_452(var uParam0, int iParam1, int iParam2) // Position - 0xF0A3 Hash - 0x9F574CE5 ^0xC9B47479
{
	int num;

	if (func_13(uParam0->f_1[iParam1 /*3*/], 343781202))
	{
		func_313(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953292.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_229(iParam1, iParam2);
	}

	num = 17;

	if (uParam0->f_1[num /*3*/] != Global_1953292.f_83[num /*12*/] && uParam0->f_1[num /*3*/].f_1 == 289238755)
	{
		uParam0->f_1[num /*3*/].f_1 = 0;
		func_229(num, iParam2);
	}

	return;
}

int func_453(Any* panParam0, Hash hParam1, BOOL bParam2, int iParam3) // Position - 0xF137 Hash - 0xCBDD84FC ^0x74C2D9B6
{
	var unk;

	unk.f_9 = joaat("SLOTID_NONE");

	if (func_469(panParam0, hParam1, &unk, bParam2, iParam3))
		return unk.f_4;

	return 0;
}

BOOL func_454(Hash hParam0, Hash hParam1, var uParam2) // Position - 0xF165 Hash - 0xBD123D0 ^0xD5CDFAB
{
	int num;
	int num2;

	num = -178401592;
	num.f_1 = hParam0;
	num.f_2 = joaat("name");
	num.f_3 = 1;
	num.f_4 = hParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&num);

	if (DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("name")))
	{
		*uParam2 = hParam0;
		uParam2->f_9 = hParam1;
		TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_1), "", 64);
		TEXT_LABEL_APPEND_INT(&(uParam2->f_1), num2, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&num2, &num, joaat("TYPE"));
		uParam2->f_10.f_3 = func_470(num2);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &num, joaat("DEFAULT"));
				break;
		
			case 1:
				!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &num, joaat("DEFAULT"));
				break;
		
			case 2:
				!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &num, joaat("DEFAULT"));
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &num, joaat("min"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &num, joaat("min"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &num, joaat("min"));
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &num, joaat("max"));
				break;
		
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &num, joaat("max"));
				break;
		
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &num, joaat("max"));
				break;
		}
	
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
		
			case 1:
				break;
		
			case 2:
				break;
		}
	
		return true;
	}

	return false;
}

BOOL func_455() // Position - 0xF386 Hash - 0x4228A1C2 ^0x4A2C267D
{
	return Global_1572887.f_7;
}

BOOL func_456() // Position - 0xF394 Hash - 0x7C45C36E ^0x2F146C3F
{
	if (!Global_1048577)
		return false;

	if (!func_472(func_471(0)))
		return false;

	if (Global_3145858 != -504335712)
		return false;

	if (func_473(*Global_524288.f_39632))
		return true;

	return false;
}

BOOL func_457(Player plParam0) // Position - 0xF3DF Hash - 0x2484E1E ^0x4707F690
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return false;

	if (func_474(plParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) != 1)
			func_475(plParam0);
	
		return true;
	}

	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295666.f_5, plParam0) == 1;
}

BOOL func_458(int iParam0, int iParam1) // Position - 0xF424 Hash - 0xAF32F835 ^0x6534FA19
{
	if (iParam1 == 255)
		return Global_1102813.f_3 && iParam0 != false;

	return Global_1101558[iParam1 /*38*/].f_3 && iParam0 != false;
}

void func_459(var uParam0) // Position - 0xF450 Hash - 0x58FD8C3D ^0x7E71AD66
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
	return;
}

struct<29> func_460(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xF4AB Hash - 0xAF17ACBD ^0xCD0691E1
{
	var unk;
	var unk30;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk30.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_87(bParam4), &uParam0, &unk30, 29, 1))
		return unk;

	unk = { func_89(&unk30, bParam5) };
	unk.f_17 = { unk30.f_16 };
	unk.f_25 = unk30.f_25;
	unk.f_26 = unk30.f_27;
	unk.f_27 = unk30.f_28;
	unk.f_28 = unk30.f_24;
	return unk;
}

int func_461(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xF546 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_195(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_197(func_476(num, hParam0, panParam1), num, panParam1);
	else
		return func_198(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 29), num, panParam1);

	return -1;
}

struct<26> func_462(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xF5B0 Hash - 0x614973B0 ^0xCAE61311
{
	var unk;
	var unk27;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return unk;

	unk27.f_9 = joaat("SLOTID_NONE");

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_87(bParam4), &uParam0, &unk27, 24, 1))
		return unk;

	unk = { func_89(&unk27, bParam5) };
	unk.f_17 = { unk27.f_15 };
	unk.f_25 = unk27.f_23;
	return unk;
}

int func_463(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xF633 Hash - 0xD42DE772 ^0x5BC8E38A
{
	int num;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_197(func_477(num, hParam0, panParam1), num, panParam1);
	else
		return func_198(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 26), num, panParam1);

	return -1;
}

int func_464(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0xF683 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_195(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_197(func_478(num, hParam0, panParam1), num, panParam1);
	else
		return func_198(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

BOOL func_465(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xF6ED Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_466(Hash hParam0) // Position - 0xF728 Hash - 0x620CA239 ^0xCC576E0
{
	return hParam0 != joaat("clothing_item_m_beard_stubble") && hParam0 != -230310728 && hParam0 != 1326838792 && !func_449(hParam0);
}

int func_467(Hash hParam0) // Position - 0xF75E Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case -1740828670:
			return 8;
	
		case 344283346:
			return 16;
	
		case 502936876:
			return 1;
	
		case 684307653:
			return 2;
	
		case 1759215194:
			return 4;
	
		default:
		
	}

	return 0;
}

BOOL func_468(int iParam0, int iParam1) // Position - 0xF7A3 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_469(Any* panParam0, Hash hParam1, Any* panParam2, BOOL bParam3, int iParam4) // Position - 0xF7B2 Hash - 0xDB9E5F ^0x558F176F
{
	var outGuid;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return false;

	if (iParam4 == -1)
		iParam4 = func_87(bParam3);

	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, panParam0, hParam1, &outGuid))
		return false;

	if (!func_291(&outGuid, panParam2, bParam3, false, iParam4))
		return false;

	return true;
}

int func_470(int iParam0) // Position - 0xF800 Hash - 0xF3C27EA9 ^0xF3C27EA9
{
	int num;

	switch (iParam0)
	{
		case joaat("bool"):
			num = 2;
			break;
	
		case joaat("float"):
			num = 1;
			break;
	
		case joaat("int"):
			num = 0;
			break;
	}

	return num;
}

struct<2> func_471(int iParam0) // Position - 0xF836 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_472(var uParam0, var uParam1) // Position - 0xF84A Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_479(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_480(uParam0))
		return false;

	return true;
}

BOOL func_473(int iParam0) // Position - 0xF87E Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

BOOL func_474(Player plParam0) // Position - 0xF8C6 Hash - 0x18353CAA ^0x646BAFB
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), plParam0))
		return true;

	return false;
}

void func_475(Player plParam0) // Position - 0xF8E3 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (!Global_1295666.f_17[player])
	{
		func_481(plParam0);
		return;
	}

	if (Global_1072759.f_21353.f_1[player /*8*/] == 1)
		return;

	func_482(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 1);
	Global_1072759.f_21353.f_1[player /*8*/] = 1;
	return;
}

BOOL func_476(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xF966 Hash - 0x494940FE ^0x1E1EAABF
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 29, panParam2, 0);
}

BOOL func_477(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xF97D Hash - 0xB063C902 ^0x8DB8ACCE
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 26, panParam2, 0);
}

BOOL func_478(int iParam0, Hash hParam1, Any* panParam2) // Position - 0xF994 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

BOOL func_479(int iParam0) // Position - 0xF9AB Hash - 0x5000025C ^0x5000025C
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

int func_480(int iParam0) // Position - 0xF9EA Hash - 0xE34A477A ^0xE34A477A
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

void func_481(Player plParam0) // Position - 0xFA80 Hash - 0x40571888 ^0x70336487
{
	Player player;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
		return;

	player = plParam0;

	if (player < 0 || player >= 32)
		return;

	if (Global_1072759.f_21353.f_1[player /*8*/] == 0)
		return;

	func_482(player);
	NETWORK::_0x51951DE06C0D1C40(plParam0, 0);
	Global_1072759.f_21353.f_1[player /*8*/] = 0;
	return;
}

void func_482(Player plParam0) // Position - 0xFAEC Hash - 0xB360DAF6 ^0xEDA5F101
{
	if (Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[plParam0 /*8*/].f_1 = 0;
	}

	return;
}

