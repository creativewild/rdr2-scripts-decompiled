#region Local Var
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xB3AAC732 ^0x64A4CF4A
{
	var unk;
	var unk182;
	var unk185;
	var unk188;
	Hash itemInteractionState;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	unk.f_2.f_2 = 1086324736;
	unk.f_2.f_11.f_1 = 20;
	unk.f_2.f_33 = 20;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		SCRIPTS::TERMINATE_THIS_THREAD();

	unk.f_2 = uScriptParam_0.f_2;
	unk182 = { 0f, 0f, 0f };
	unk185 = { 0f, 0f, 0f };
	unk188 = { 0f, 0f, 0f };

	switch (func_1(unk.f_2, -949239683))
	{
		case -1919515848:
			unk182 = { 25f, 0f, 90f };
			unk185 = { 0f, 0f, 0f };
			unk188 = { -0.0664749f, -0.00670436f, 0.0292784f };
			break;
	
		case 1443104131:
			itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_35);
		
			switch (itemInteractionState)
			{
				case joaat("quick_smoke_cigarette_rifle"):
					unk188 = { -0.0040397f, -0.00102244f, 0.00599561f };
					break;
			
				case joaat("quick_smoke_cigarette_left_hand"):
					unk188 = { -0.0147231f, -0.00414051f, 0.000197684f };
					break;
			
				case joaat("quick_smoke_cigarette_right_hand"):
					unk188 = { -0.0150581f, -0.00181651f, 0.012338f };
					break;
			}
			break;
	}

	unk.f_2.f_2 = 1f;
	flag3 = true;

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (!uScriptParam_0.f_3)
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK2"), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(unk.f_180))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1019710152))
				{
					ENTITY::DETACH_ENTITY(unk.f_180, false, true);
					func_2(&unk, 7966, 0f, 0f, 0f, unk185);
					flag2 = false;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1188360335))
				{
					ENTITY::DETACH_ENTITY(unk.f_180, false, true);
					func_2(&unk, 37709, 0f, 0f, 0f, unk185);
					flag2 = false;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1377726152))
				{
					func_2(&unk, 9650, unk188, unk182);
					flag2 = true;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("detach")))
				{
					ENTITY::DETACH_ENTITY(unk.f_180, true, true);
					flag2 = false;
				}
			
				if (flag2)
				{
					if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
					{
						if (flag3)
						{
							ENTITY::SET_ENTITY_VISIBLE(unk.f_180, false);
							flag3 = false;
						}
					}
					else if (!flag3)
					{
						ENTITY::SET_ENTITY_VISIBLE(unk.f_180, true);
						flag3 = true;
					}
				}
				else if (!flag3)
				{
					ENTITY::SET_ENTITY_VISIBLE(unk.f_180, true);
					flag3 = true;
				}
			}
			else
			{
				unk.f_180 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, joaat("primaryitem"));
			}
		}
	
		if (!uScriptParam_0.f_3)
			func_3(&(unk.f_2));
	
		switch (unk.f_1)
		{
			case 0:
				if (func_4(unk.f_2, 0))
					func_5(&(unk.f_2));
			
				if (uScriptParam_0.f_3)
				{
					unk.f_2.f_2 = 1f;
					func_6(&unk, 2);
				}
				else
				{
					func_6(&unk, 1);
				}
				break;
		
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					unk.f_2.f_1 = unk.f_2.f_1 + 1;
					func_7(&(unk.f_2), (float)unk.f_2.f_1 >= unk.f_2.f_2);
				}
			
				if ((float)unk.f_2.f_1 >= unk.f_2.f_2)
					func_6(&unk, 3);
				break;
		
			case 2:
				func_7(&(unk.f_2), true);
				func_6(&unk, 3);
				break;
		
			case 3:
				if (uScriptParam_0.f_3)
					SCRIPTS::TERMINATE_THIS_THREAD();
				else if (!flag)
					if (func_8() == -1 && func_9(0))
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
								if (func_10(Global_35, "Player_Sick_Smoking_Cough", joaat("SPEECH_PARAMS_FORCE"), 0, 1, 0, 0, 1))
									flag = true;
					else
						flag = true;
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	if (unk.f_1 <= 1)
		func_7(&(unk.f_2), true);

	return;
}

int func_1(Hash hParam0, int iParam1) // Position - 0x388 Hash - 0x7A1C2599 ^0xFF9B5634
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

void func_2(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, Vector3 vParam5, var uParam6, var uParam7) // Position - 0x3D2 Hash - 0x9F6022AA ^0x315B3075
{
	ENTITY::DETACH_ENTITY(uParam0->f_180, false, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_180, Global_35, PED::GET_PED_BONE_INDEX(Global_35, iParam1), fParam2, vParam5, true, true, false, false, 2, true, false, false);
	return;
}

int func_3(var uParam0) // Position - 0x408 Hash - 0xAD6E5C1 ^0xDD044968
{
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1234314267))
		{
			func_11(uParam0);
			return 1;
		}
	}

	if (!uParam0->f_177)
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1895155945))
			uParam0->f_177 = 1;

	return 0;
}

BOOL func_4(Hash hParam0, int iParam1) // Position - 0x469 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_5(var uParam0) // Position - 0x483 Hash - 0x9FDF9381 ^0x3B8D525B
{
	int i;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[i], &uParam0->f_33[i /*7*/]);
	}

	return;
}

void func_6(var uParam0, int iParam1) // Position - 0x4C3 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

void func_7(var uParam0, BOOL bParam1) // Position - 0x4D1 Hash - 0xCD22ACC2 ^0x7500490B
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

	if (func_12(*uParam0, 1573112293) || func_12(*uParam0, 672467738) || func_12(*uParam0, -550842268))
		flag = true;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1935496.f_26 = 0;

	for (i = 0; i < uParam0->f_11; i = i + 1)
	{
		if (-943921969 == uParam0->f_33[i /*7*/].f_1)
		{
			num = func_13(0, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_14((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, true);
			func_15(0, 7000);
			flag3 = true;
		}
		else if (-1104847406 == uParam0->f_33[i /*7*/].f_1)
		{
			num2 = func_13(2, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_16((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_15(2, 7000);
			flag2 = true;
		}
		else if (381158954 == uParam0->f_33[i /*7*/].f_1)
		{
			num3 = func_13(1, (float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_17((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2);
			func_15(1, 7000);
		}
		else if (joaat("EFFECT_HEALTH_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num4 = func_18((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_19(&(uParam0->f_9), &(uParam0->f_10), num4))
			{
				func_20(num4, true, flag, true);
				func_15(0, 7000);
			}
		
			flag3 = true;
		}
		else if (joaat("EFFECT_DEADEYE_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num5 = func_18((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_19(&(uParam0->f_9), &(uParam0->f_10), num5))
			{
				func_21(num5, true, flag, true);
				func_15(2, 7000);
				flag2 = true;
			}
		}
		else if (joaat("EFFECT_STAMINA_CORE") == uParam0->f_33[i /*7*/].f_1)
		{
			num6 = func_18((float)uParam0->f_33[i /*7*/].f_2 / uParam0->f_2, uParam0->f_33[i /*7*/].f_5 / uParam0->f_2);
		
			if (func_19(&(uParam0->f_9), &(uParam0->f_10), num6))
			{
				func_22(num6, true, flag, true);
				func_15(1, 7000);
			}
		}
		else if (-816334026 == uParam0->f_33[i /*7*/].f_1)
		{
			func_23(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_2) / uParam0->f_2, 1 == uParam0->f_1);
		}
		else if (bParam1)
		{
			if (joaat("Effect_Health_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_24(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_25(19, num7);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_24(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_25(20, num7);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_24(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_25(18, num7);
			}
			else if (1869697234 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_24(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_25(0, num7);
				flag3 = true;
			}
			else if (1342237631 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_24(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_25(2, num7);
				flag2 = true;
			}
			else if (-1240225157 == uParam0->f_33[i /*7*/].f_1)
			{
				num7 = func_24(BUILTIN::TO_FLOAT(uParam0->f_33[i /*7*/].f_3), uParam0->f_33[i /*7*/].f_4);
				func_25(1, num7);
			}
		}
	}

	if (flag3)
		if (num4 > 0f || num > 0f)
			flag4 = true;

	func_26(*uParam0, bParam1, flag2, flag4);
	func_11(uParam0);
	uParam0->f_3 = uParam0->f_3 + num;
	uParam0->f_4 = uParam0->f_4 + num2;
	uParam0->f_5 = uParam0->f_5 + num3;
	uParam0->f_6 = uParam0->f_6 + num4;
	uParam0->f_7 = uParam0->f_7 + num5;
	uParam0->f_8 = uParam0->f_8 + num6;
	return;
}

BOOL func_8() // Position - 0x938 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_9(int iParam0) // Position - 0x946 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_27())
		return false;

	return func_28(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_10(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x968 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_29(pedParam0, &str);
}

void func_11(var uParam0) // Position - 0x9AF Hash - 0xA2F56449 ^0xA1F38980
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

BOOL func_12(Hash hParam0, Hash hParam1) // Position - 0x9D9 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

float func_13(int iParam0, float fParam1) // Position - 0xA0A Hash - 0x17EDCAD1 ^0xD87169C2
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

void func_14(float fParam0, BOOL bParam1) // Position - 0xA9B Hash - 0x6515398 ^0xDD905ACD
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

void func_15(int iParam0, int iParam1) // Position - 0xB10 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_16(float fParam0) // Position - 0xB29 Hash - 0xE6CD767E ^0x10A2850D
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), fParam0 * 14f, 0, 0, 0);
	return;
}

void func_17(float fParam0) // Position - 0xB44 Hash - 0x54A9293A ^0x6B1712EF
{
	int num;

	if (func_8() != -1)
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

float func_18(float fParam0, float fParam1) // Position - 0xB7F Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_19(var uParam0, var uParam1, float fParam2) // Position - 0xBAD Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_8() != -1)
		return true;

	if (!func_9(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_10(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_30(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_10(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_20(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC97 Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_8() == false)
	{
		func_31(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_32(0);

	if (bParam1)
		func_33(num);

	if (num >= 100f - 1f)
		func_34();

	if (bParam2)
		fParam0 = func_35(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_37(0, func_36(fParam0, -100f, 100f), bParam1);
	return;
}

void func_21(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD09 Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_8() == false)
	{
		func_31(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_32(2);

	if (bParam1)
		func_33(num);

	if (bParam2)
		fParam0 = func_35(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_37(2, func_36(fParam0, -100f, 100f), bParam1);
	return;
}

void func_22(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD6A Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_8() == false)
	{
		func_31(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_32(1);

	if (bParam1)
		func_33(num);

	if (bParam2)
		fParam0 = func_35(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_37(1, func_36(fParam0, -100f, 100f), bParam1);
	return;
}

void func_23(float fParam0, BOOL bParam1) // Position - 0xDCB Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_38(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_39(17))
		return;

	if (func_40())
	{
		num2 = func_41(num);
		num = num + fParam0;
		num3 = func_41(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_42();
			func_43(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_44(&num4, &num5);
		func_45(13, func_36(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_30(94, false);
	}

	return;
}

float func_24(float fParam0, int iParam1) // Position - 0xE7C Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_25(int iParam0, float fParam1) // Position - 0xECE Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_46(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_47(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_48(-1);
			func_49(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_47(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_50(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_47(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_51(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_52(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_52(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_52(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_26(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1061 Hash - 0xE2FD0FF5 ^0x668B624E
{
	if (!bParam1)
		return;

	if (bParam3 || func_12(hParam0, -537818634))
		func_54(func_53(joaat("medicine_items_used")), 1);

	if (func_12(hParam0, -1457797660))
		func_54(func_53(joaat("provision_items_used")), 1);

	if (func_12(hParam0, 1573112293))
		func_56(func_55(&hParam0), 1);

	if (func_12(hParam0, 1939071949))
		func_54(func_57(joaat("USED"), joaat("tonic")), 1);

	switch (hParam0)
	{
		case joaat("consumable_oat_cakes"):
		case joaat("consumable_sugarcube"):
		case joaat("consumable_haycube"):
			func_54(func_57(joaat("USED"), joaat("feed_bag")), 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("consumable_horse_medicine"):
		case joaat("consumable_horse_medicine_used"):
			func_54(func_57(joaat("USED"), joaat("horse_pills")), 1);
			break;
	
		case joaat("consumable_whiskey_used"):
		case joaat("consumable_whiskey"):
			func_54(func_57(joaat("USED"), joaat("Whiskey")), 1);
			break;
	
		case joaat("consumable_predator_bait"):
		case joaat("consumable_potent_predator_bait"):
			func_54(func_57(joaat("USED"), joaat("potent_predator_bait")), 1);
			break;
	
		case joaat("consumable_snake_oil"):
		case joaat("consumable_potent_snake_oil"):
		case joaat("consumable_snake_oil_used"):
			func_54(func_57(joaat("USED"), joaat("Snake_Oil")), 1);
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
		case joaat("consumable_cocaine_chewing_gum"):
			func_54(func_57(joaat("USED"), joaat("cocaine_gum")), 1);
			break;
	
		case joaat("consumable_chewing_tobacco"):
		case joaat("consumable_chewing_tobacco_used"):
			func_54(func_57(joaat("USED"), joaat("chewing_tobacco")), 1);
			break;
	
		case joaat("consumable_moonshine"):
			func_54(func_57(joaat("USED"), joaat("moonshine")), 1);
			break;
	
		case joaat("CONSUMABLE_COVER_SCENT_USED"):
		case joaat("CONSUMABLE_COVER_SCENT"):
			func_54(func_57(joaat("USED"), joaat("cover_scent")), 1);
			break;
	
		case joaat("consumable_herbivore_bait"):
		case joaat("consumable_potent_herbivore_bait"):
			func_54(func_57(joaat("USED"), joaat("potent_herbivore_bait")), 1);
			break;
	}

	if (func_8() == -1)
		if (hParam0 == joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"))
			func_54(func_57(joaat("USED"), joaat("special_tonic")), 1);

	if (bParam2)
		func_54(func_53(joaat("DEADEYE_ITEMS_USED")), 1);

	return;
}

BOOL func_27() // Position - 0x128E Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_8() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_28(int iParam0, BOOL bParam1) // Position - 0x12B3 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_58(iParam0))
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

BOOL func_29(Ped pedParam0, Any* panParam1) // Position - 0x12E4 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

void func_30(int iParam0, BOOL bParam1) // Position - 0x12F4 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_59(iParam0, &num, &num2);

	if (!func_60(iParam0, num, num2, bParam1))
		return;

	func_61(num, num2);
	return;
}

void func_31(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1321 Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_35(iParam0, fParam1, true);

	func_63(iParam0, func_62(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_32(int iParam0) // Position - 0x1350 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_33(float fParam0) // Position - 0x1362 Hash - 0xF9450574 ^0xBC85BE8A
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_34() // Position - 0x1392 Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_35(int iParam0, float fParam1, BOOL bParam2) // Position - 0x13BF Hash - 0xFB55A421 ^0xFB55A421
{
	int num;
	int num2;

	num = func_42();
	func_64(&num, 0, 0, 0, 1, 0, 0);
	num2 = func_65(iParam0, 2);

	if (func_67(num, func_66(iParam0, 2), true))
	{
		func_68(iParam0, 0, 2);
		num2 = 0;
	}

	if (num2 >= 2)
	{
		func_30(88, bParam2);
		return 0f;
	}

	func_69(iParam0, func_42(), 2);
	func_68(iParam0, num2 + 1, 2);
	return fParam1;
}

float func_36(float fParam0, float fParam1, float fParam2) // Position - 0x1428 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_37(int iParam0, float fParam1, BOOL bParam2) // Position - 0x144F Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_8() != -1)
		return;

	if (!func_39(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_70(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_71(iParam0), value);
	func_73(func_72(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_74(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_30(84, true);

	if (fParam1 <= -99.999f)
		func_30(func_75(iParam0), true);

	variableName = func_76(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

float func_38(int iParam0) // Position - 0x1528 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_39(int iParam0) // Position - 0x153C Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_77(iParam0))
		return false;

	return func_78(iParam0);
}

BOOL func_40() // Position - 0x1558 Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_8() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_79(Global_1347477.f_195, false);
}

int func_41(float fParam0) // Position - 0x1594 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

int func_42() // Position - 0x15AF Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x15BB Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_80(*iParam0);
	i = func_81(*iParam0);
	num2 = func_82(*iParam0);
	j = func_83(*iParam0);
	k = func_84(*iParam0);
	l = func_85(*iParam0);

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

	for (m = func_86(i, num); num2 > m; m = func_86(i, num))
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

	func_87(iParam0, l, k, j, num2, i, num);
	return;
}

void func_44(var uParam0, var uParam1) // Position - 0x1743 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_88())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_45(int iParam0, float fParam1) // Position - 0x177C Hash - 0x74EEAD81 ^0x16C02EF7
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_90(1, flag, true, str);
		func_91(!flag, fParam1 < 0f, flag);
		num = func_70(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_92();
	}
	else if (iParam0 == 10)
	{
		num = func_70(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_70(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

BOOL func_46(int iParam0) // Position - 0x1850 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_47(int iParam0) // Position - 0x187F Hash - 0xD8644BEE ^0xD8644BEE
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

void func_48(int iParam0) // Position - 0x18B6 Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_93(2);
	func_94(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_49(BOOL bParam0) // Position - 0x18F3 Hash - 0x9114E741 ^0x8984E174
{
	if (func_8() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_30(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_30(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_95(1, bParam0, true);
	func_92();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_50(int iParam0) // Position - 0x1961 Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_96(2);
	func_97(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_51(int iParam0) // Position - 0x199D Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_98(2);
	func_99(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_52(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x19DA Hash - 0x5C29635D ^0x5C29635D
{
	func_63(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

struct<2> func_53(int iParam0) // Position - 0x19F4 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

void func_54(var uParam0, var uParam1, int iParam2) // Position - 0x1A04 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_55(var uParam0) // Position - 0x1A14 Hash - 0x19D4C5AC ^0x19D4C5AC
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

void func_56(int iParam0, int iParam1) // Position - 0x1C42 Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_57(joaat("eaten"), func_100(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_54(func_101(joaat("herbs_eaten")), iParam1);
	return;
}

struct<2> func_57(int iParam0, int iParam1) // Position - 0x1C74 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

int func_58(int iParam0) // Position - 0x1C8A Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_102(iParam0))
		return -1;

	return func_103(iParam0);
}

void func_59(int iParam0, var uParam1, var uParam2) // Position - 0x1CA6 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_60(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1CC2 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_104(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_105(iParam0))
		return false;

	if (func_106(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_107(iParam0, 1) || func_108(32768))
		if (!func_107(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_109())
		return false;

	return true;
}

void func_61(int iParam0, int iParam1) // Position - 0x1D64 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

float func_62(int iParam0, int iParam1) // Position - 0x1D88 Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_110();

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

int func_63(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x1DD3 Hash - 0x44567975 ^0xB011A579
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_110();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_111(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_112(ped, iParam0, fParam1);
	func_113(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_71(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_64(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1E85 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_80(*uParam0);
	i = func_81(*uParam0);
	j = func_82(*uParam0);
	k = func_83(*uParam0);
	l = func_84(*uParam0);
	m = func_85(*uParam0);

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
	
		num3 = func_86(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_87(uParam0, m, l, k, j, i, num);
	return;
}

int func_65(int iParam0, int iParam1) // Position - 0x1FF8 Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_110();

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

int func_66(int iParam0, int iParam1) // Position - 0x2047 Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_110();

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

BOOL func_67(int iParam0, int iParam1, BOOL bParam2) // Position - 0x2098 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_114(iParam1) || !func_114(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_68(int iParam0, int iParam1, int iParam2) // Position - 0x20C5 Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_110();

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

void func_69(int iParam0, int iParam1, int iParam2) // Position - 0x211A Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_110();

	switch (iParam2)
	{
		case 0:
			Global_1954819.f_753.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		case 1:
			Global_1954819.f_866.f_2.f_5[iParam0 /*3*/].f_1 = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

int func_70(int iParam0) // Position - 0x216F Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_71(int iParam0) // Position - 0x2193 Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_72(int iParam0) // Position - 0x21C2 Hash - 0x5163992 ^0x5163992
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

void func_73(int iParam0, float fParam1, BOOL bParam2) // Position - 0x21F1 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_115(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_74(int iParam0) // Position - 0x2241 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_75(int iParam0) // Position - 0x2265 Hash - 0x68BC9945 ^0x68BC9945
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

char* func_76(int iParam0) // Position - 0x2297 Hash - 0x890B7245 ^0x890B7245
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

BOOL func_77(int iParam0) // Position - 0x22CE Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_78(int iParam0) // Position - 0x22E1 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL func_79(int iParam0, BOOL bParam1) // Position - 0x230B Hash - 0x10DE2364 ^0x10DE2364
{
	return func_67(func_42(), iParam0, bParam1);
}

int func_80(int iParam0) // Position - 0x231F Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_81(int iParam0) // Position - 0x2344 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_82(int iParam0) // Position - 0x2357 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_83(int iParam0) // Position - 0x236A Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_84(int iParam0) // Position - 0x237D Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_85(int iParam0) // Position - 0x238F Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_86(int iParam0, int iParam1) // Position - 0x23A1 Hash - 0x893AC59E ^0x893AC59E
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

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x243B Hash - 0xA65AB937 ^0xA65AB937
{
	func_117(iParam0, iParam6);
	func_118(iParam0, iParam5);
	func_119(iParam0, iParam4);
	func_120(iParam0, iParam3);
	func_121(iParam0, iParam2);
	func_122(iParam0, iParam1);
	return;
}

BOOL func_88() // Position - 0x2473 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

var func_89(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2492 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_90(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x24A9 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_91(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24ED Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_115(0, 1, bParam0, bParam1);
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

void func_92() // Position - 0x25E1 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_123();
	func_124();
	func_125();
	return;
}

int func_93(int iParam0) // Position - 0x25F8 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_110();

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

void func_94(float fParam0, Ped pedParam1) // Position - 0x2637 Hash - 0x2062487E ^0xADB8AE45
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

void func_95(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2679 Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

int func_96(int iParam0) // Position - 0x26A9 Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_110();

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

void func_97(float fParam0) // Position - 0x26EC Hash - 0xEBF0A2AB ^0x54370C29
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

int func_98(int iParam0) // Position - 0x2726 Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_110();

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

void func_99(float fParam0, BOOL bParam1) // Position - 0x2769 Hash - 0x1FE7F29A ^0xE2FCD967
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

int func_100(int iParam0) // Position - 0x27FD Hash - 0xBA965109 ^0xDF65C4FE
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

struct<2> func_101(int iParam0) // Position - 0x2AE9 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_102(int iParam0) // Position - 0x2AFB Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_103(int iParam0) // Position - 0x2B2E Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_126(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_104(int iParam0, int iParam1) // Position - 0x2B6F Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_8() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_105(int iParam0) // Position - 0x2BA2 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_8() != -1)
		if (func_107(iParam0, 4))
			return false;
	else if (func_107(iParam0, 2))
		return false;

	return true;
}

BOOL func_106(int iParam0) // Position - 0x2BD2 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_107(iParam0, 65536) && !func_107(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_107(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_107(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_107(int iParam0, int iParam1) // Position - 0x2C7E Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_108(int iParam0) // Position - 0x2C97 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_109() // Position - 0x2CAA Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_110() // Position - 0x2CB9 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_127())
		return 1;

	return 0;
}

void func_111(int iParam0, int iParam1, int iParam2) // Position - 0x2CCD Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_110();

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

void func_112(Ped pedParam0, int iParam1, float fParam2) // Position - 0x2D1E Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_76(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_128(iParam1), fParam2, -1);

	return;
}

void func_113(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x2D4A Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_110();

	gameTimer = MISC::GET_GAME_TIMER();
	func_129(iParam0, fParam1, iParam3);

	if (bParam2)
		func_130(iParam0, gameTimer, iParam3);

	return;
}

BOOL func_114(int iParam0) // Position - 0x2D7D Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_85(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_84(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_83(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_80(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_81(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_82(iParam0);

	if (num6 < 1 || num6 > func_86(num5, num4))
		return false;

	return true;
}

char* func_115(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2E59 Hash - 0xB8E689B5 ^0x3C8FC1FF
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

var func_116(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2EFF Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_117(var uParam0, int iParam1) // Position - 0x2F16 Hash - 0xD05180BA ^0x39589262
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

void func_118(var uParam0, int iParam1) // Position - 0x2F9C Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_119(var uParam0, int iParam1) // Position - 0x2FD8 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_81(*uParam0);
	num2 = func_80(*uParam0);

	if (iParam1 < 1 || iParam1 > func_86(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_120(var uParam0, int iParam1) // Position - 0x302B Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_121(var uParam0, int iParam1) // Position - 0x3066 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_122(var uParam0, int iParam1) // Position - 0x309F Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

float func_123() // Position - 0x30D7 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_131())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_32(2);

	if (Global_1347477.f_119)
		return func_32(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_132();
	num3 = func_133();
	num4 = func_134();
	num5 = func_135();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_136());
	num8 = func_32(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_137(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_138(3, num9, num9 > 100f);
	return func_36(num8, -100f, 100f);
}

float func_124() // Position - 0x3200 Hash - 0x951B1CCC ^0x7B312694
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

	if (func_131())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_32(1);

	if (Global_1347477.f_119)
		return func_32(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_132();
	num3 = func_133();
	num4 = func_134();
	num5 = func_135();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_136());
	num8 = func_32(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_137(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_138(2, num9, num9 > 100f);
	return func_36(num8, -100f, 100f);
}

float func_125() // Position - 0x3329 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_131())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_32(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_139())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_140())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_32(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_132();
	num3 = func_133();
	num4 = func_134();
	num5 = func_135();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_136());
	num8 = func_32(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_137(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_138(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_32(0);

	return func_36(num8, -100f, 100f);
}

int func_126(int iParam0) // Position - 0x34D0 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_127() // Position - 0x3551 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_128(int iParam0) // Position - 0x3560 Hash - 0xFA312CAA ^0x320C41CF
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

void func_129(int iParam0, float fParam1, int iParam2) // Position - 0x359A Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_110();

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

void func_130(int iParam0, int iParam1, int iParam2) // Position - 0x35EB Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_110();

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

BOOL func_131() // Position - 0x3640 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_132() // Position - 0x365C Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_38(13);
	num2 = func_41(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_133() // Position - 0x369F Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_134() // Position - 0x36BA Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_141())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_135() // Position - 0x36D9 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_136() // Position - 0x371B Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_137(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3729 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_115(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_138(int iParam0, float fParam1, BOOL bParam2) // Position - 0x3775 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_115(iParam0, 2, false, false);
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

BOOL func_139() // Position - 0x38BB Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_38(12) <= -99f;
}

BOOL func_140() // Position - 0x38CF Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_38(12) >= 99f;
}

BOOL func_141() // Position - 0x38E3 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

