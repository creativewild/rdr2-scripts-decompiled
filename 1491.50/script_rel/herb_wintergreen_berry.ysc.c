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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	BOOL bLocal_22 = 0;
	var uLocal_23 = 4;
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
	var uLocal_36 = 4;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x9B82711D ^0x5A965298
{
	Vector3 scenarioPointCoords;
	float num;
	BOOL flag;
	int num2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	scenarioPointCoords.f_9 = 3;
	scenarioPointCoords.f_13 = 4;
	scenarioPointCoords.f_20 = 1;
	scenarioPointCoords.f_21 = 1;
	scenarioPointCoords.f_22 = 4;
	scenarioPointCoords.f_28 = 4;
	scenarioPointCoords.f_33 = 4;
	scenarioPointCoords.f_5 = uScriptParam_0;
	scenarioPointCoords.f_6 = uScriptParam_0.f_1;
	func_1(&scenarioPointCoords);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2(&scenarioPointCoords);

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		func_2(&scenarioPointCoords);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uScriptParam_0.f_1))
		func_2(&scenarioPointCoords);

	scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(uScriptParam_0.f_1, true) };
	scenarioPointCoords.f_3 = TASK::_GET_SCENARIO_POINT_HEADING(uScriptParam_0.f_1, true);
	scenarioPointCoords.f_4 = TASK::_GET_SCENARIO_POINT_RADIUS(uScriptParam_0.f_1);
	Global_43839[scenarioPointCoords.f_18] = Global_43839[scenarioPointCoords.f_18] + 1;

	if (func_3() != false)
		if (!func_4(10))
			func_2(&scenarioPointCoords);

	scenarioPointCoords.f_24 = func_5(scenarioPointCoords.f_18, scenarioPointCoords);

	if (scenarioPointCoords.f_24 <= -1)
	{
		scenarioPointCoords.f_24 = func_6(scenarioPointCoords.f_18, scenarioPointCoords);
	
		if (func_7(&scenarioPointCoords))
			func_8(&scenarioPointCoords);
		else
			func_9(&scenarioPointCoords);
	}

	while (func_10(&scenarioPointCoords))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			func_2(&scenarioPointCoords);
	
		BUILTIN::WAIT(0);
	}

	iLocal_14 = 0;

	while (func_11(&scenarioPointCoords))
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			func_2(&scenarioPointCoords);
	
		func_12(&scenarioPointCoords);
		func_13(&scenarioPointCoords);
	
		if (iLocal_14 <= 0)
		{
			num = BUILTIN::VDIST2(scenarioPointCoords, Global_36);
		
			switch (func_14(&scenarioPointCoords))
			{
				case 0:
					scenarioPointCoords.f_24 = func_5(scenarioPointCoords.f_18, scenarioPointCoords);
				
					if (scenarioPointCoords.f_24 <= -1)
					{
						scenarioPointCoords.f_24 = func_6(scenarioPointCoords.f_18, scenarioPointCoords);
					
						if (func_7(&scenarioPointCoords))
							func_8(&scenarioPointCoords);
						else
							func_9(&scenarioPointCoords);
					}
				
					func_15(&scenarioPointCoords, 1);
					break;
			
				case 1:
					if (num < 4900f)
						func_15(&scenarioPointCoords, 2);
					break;
			
				case 2:
					if (func_16(scenarioPointCoords.f_24, scenarioPointCoords.f_4))
						func_17(scenarioPointCoords.f_24, false);
				
					flag = func_18(scenarioPointCoords.f_24);
				
					if (flag)
						func_15(&scenarioPointCoords, 3);
					else
						func_15(&scenarioPointCoords, 4);
				
					func_19(&scenarioPointCoords);
					break;
			
				case 3:
					if (func_20(&scenarioPointCoords))
					{
						num2 = func_21(&scenarioPointCoords);
					
						if (num2 == 1)
							func_15(&scenarioPointCoords, 6);
						else if (num2 == 0)
							iLocal_14 = 1000;
						else
							func_2(&scenarioPointCoords);
					}
					break;
			
				case 4:
					if (func_20(&scenarioPointCoords))
					{
						num2 = func_21(&scenarioPointCoords);
					
						if (num2 != 1)
							if (num2 == 0)
								iLocal_14 = 1000;
							else
								func_2(&scenarioPointCoords);
						else
							func_15(&scenarioPointCoords, 5);
					}
					break;
			
				case 5:
					if (func_22(&scenarioPointCoords))
						func_15(&scenarioPointCoords, 10);
					break;
			
				case 6:
					if (func_22(&scenarioPointCoords))
						func_15(&scenarioPointCoords, 7);
					break;
			
				case 7:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 174961811))
						if (func_24(scenarioPointCoords.f_18, func_23(PLAYER::GET_PLAYER_INDEX()), &(scenarioPointCoords.f_24), &iLocal_21, true))
							func_15(&scenarioPointCoords, 9);
					else if (!func_18(scenarioPointCoords.f_24))
						func_15(&scenarioPointCoords, 9);
				
					if (!bLocal_22)
					{
						if (func_25(4))
						{
							if (num < 625f && !PED::IS_PED_ON_MOUNT(Global_35))
							{
								func_26(602, false);
								bLocal_22 = true;
							}
						}
						else
						{
							bLocal_22 = true;
						}
					}
				
					if (num > 8100f || func_27(scenarioPointCoords.f_24, 1))
					{
						func_28(scenarioPointCoords.f_24, 1);
						func_15(&scenarioPointCoords, 8);
					}
					break;
			
				case 8:
					func_35(&scenarioPointCoords);
					func_15(&scenarioPointCoords, 1);
					break;
			
				case 9:
					func_29(scenarioPointCoords.f_24);
					func_30(scenarioPointCoords.f_24, iLocal_21);
				
					if (func_31(scenarioPointCoords.f_18))
						func_32(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(BUILTIN::FLOOR(scenarioPointCoords.f_4), 1777389635, 0));
				
					Global_1935496.f_127 = 1;
					func_15(&scenarioPointCoords, 10);
					break;
			
				case 10:
					if (func_33(scenarioPointCoords.f_18))
						func_34(scenarioPointCoords, &uLocal_16, &uLocal_17, &uLocal_18);
				
					if (num > 8100f || func_27(scenarioPointCoords.f_24, 1))
					{
						func_28(scenarioPointCoords.f_24, 1);
						func_15(&scenarioPointCoords, 8);
					}
					break;
			}
		}
	
		if (func_37(func_36(&scenarioPointCoords)))
			if (func_38(&scenarioPointCoords) != func_36(&scenarioPointCoords))
				func_39(&scenarioPointCoords, func_36(&scenarioPointCoords));
		else if (func_38(&scenarioPointCoords) != Global_36580)
			func_39(&scenarioPointCoords, Global_36580);
	
		func_40(&scenarioPointCoords);
		iLocal_14 = iLocal_14 - 1;
	
		if (iLocal_14 < 0)
			iLocal_14 = 0;
	
		BUILTIN::WAIT(0);
	}

	func_2(&scenarioPointCoords);
	return;
}

void func_1(var uParam0) // Position - 0x4A0 Hash - 0x5DCF617 ^0x5DCF617
{
	func_41(uParam0, 42);
	return;
}

void func_2(var uParam0) // Position - 0x4B0 Hash - 0x2DFAD19C ^0x70314EC
{
	Global_43839[uParam0->f_18] = Global_43839[uParam0->f_18] - 1;
	SCRIPTS::_0xE7282390542F570D(uParam0->f_5);

	if (func_38(uParam0) == 1 && TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_6))
		Global_1913813 = uParam0->f_6;

	func_35(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_3() // Position - 0x4FF Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_4(int iParam0) // Position - 0x50D Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_42(iParam0))
		return false;

	return func_43(iParam0);
}

// Unhandled jump detected. Output should be considered invalid
int func_5(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x529 Hash - 0x86D7FC0F ^0xE301F5F2
{
	float num;
	float num2;
	int num3;
	int i;

	if (_IS_NULL_VECTOR(uParam1))
		return -1;

	num2 = 25f;
	num3 = -1;

	for (i = 0; i < 500; i = i + 1)
	{
		if (!func_45(i))
		{
			return num3;
		}
		else
		{
			if (func_46(i) != iParam0)
				goto 0x6C;
		
			num = func_48(uParam1, func_47(i));
		
			if (num < num2)
			{
				num2 = num;
				num3 = i;
			}
		}
	}

	return num3;
}

int func_6(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x5A3 Hash - 0x2E753214 ^0x1F1F79D8
{
	int num;

	if (iParam0 <= 0)
		return -1;

	if (_IS_NULL_VECTOR(uParam1))
		return -1;

	if (Global_40.f_9273 >= 500)
		Global_40.f_9273 = 0;

	num = Global_40.f_9273;
	func_49(&Global_27573[num /*9*/], iParam0, uParam1, -15);
	Global_40.f_9273 = Global_40.f_9273 + 1;
	return num;
}

BOOL func_7(var uParam0) // Position - 0x603 Hash - 0x27FCE43D ^0xFFAD00D5
{
	return uParam0->f_20 != 3;
}

void func_8(var uParam0) // Position - 0x611 Hash - 0x6E87F615 ^0xB09F6B58
{
	var unk;
	var unk8;
	int randomIntInRange;
	int i;
	int value;
	int randomIntInRange2;
	int num;

	unk = 6;
	unk8 = 3;
	func_50(uParam0->f_20, &unk, &unk8);

	if (uParam0->f_22 > 4)
		uParam0->f_22 = 4;

	if (uParam0->f_21 <= 0)
		uParam0->f_21 = 1;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_21, uParam0->f_22 + 1);

	for (i = 0; i <= randomIntInRange - 1; i = i + 1)
	{
		if (unk[i] == 0)
			value = 0;
		else
			value = unk8[MISC::GET_RANDOM_INT_IN_RANGE(0, 3)];
	
		if (uParam0->f_23 > 0)
			randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);
	
		num = unk[i] || BUILTIN::SHIFT_LEFT(value, 9) || BUILTIN::SHIFT_LEFT(randomIntInRange2, 13) | 1073741824;
		func_51(uParam0->f_24, i, num);
	}

	return;
}

void func_9(var uParam0) // Position - 0x6C9 Hash - 0x6E52288B ^0xB1D56E8B
{
	var unk;
	var unk8;
	int randomIntInRange;
	int num;

	unk = 6;
	unk8 = 3;
	func_50(uParam0->f_20, &unk, &unk8);

	if (uParam0->f_23 > 0)
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_23);

	num = unk[0] || BUILTIN::SHIFT_LEFT(0, 9) || BUILTIN::SHIFT_LEFT(randomIntInRange, 13) | 1073741824;
	func_51(uParam0->f_24, 0, num);
	return;
}

BOOL func_10(var uParam0) // Position - 0x723 Hash - 0xF02C8413 ^0xF02C8413
{
	if (func_52(Global_35) && func_53())
		return true;

	func_13(uParam0);

	if (func_37(func_36(uParam0)))
		if (func_38(uParam0) != func_36(uParam0))
			func_39(uParam0, func_36(uParam0));
	else if (func_38(uParam0) != Global_36580)
		func_39(uParam0, Global_36580);

	if (func_38(uParam0) == 1)
		return true;

	return false;
}

BOOL func_11(var uParam0) // Position - 0x797 Hash - 0xC0C2F0E6 ^0xC0C2F0E6
{
	if (func_54(true))
		return false;

	if (func_38(uParam0) == 1)
		if (Global_1913813 == 0)
			return false;

	return true;
}

void func_12(var uParam0) // Position - 0x7C5 Hash - 0x67C7BF32 ^0xAFD491FB
{
	BOOL flag;
	int i;

	flag = false;

	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && func_55() && func_56(PLAYER::PLAYER_ID(), 1, false) && func_57(0) == joaat("herbalist"))
		flag = true;

	if (!flag && !(uParam0->f_18 == 11 || uParam0->f_18 == 26))
		return;

	if (func_58(uParam0->f_18) || uParam0->f_8 == 1)
		flag = true;

	if (func_38(uParam0) == 2)
		flag = true;

	if (flag)
	{
		for (i = 0; i < uParam0->f_22; i = i + 1)
		{
			if (func_59(uParam0->f_13[i]))
				MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(uParam0->f_13[i], false);
		}
	}

	return;
}

void func_13(var uParam0) // Position - 0x883 Hash - 0x7E69B046 ^0x577BF0BD
{
	int i;

	if (!func_60(&(uParam0->f_25)))
		func_61(&(uParam0->f_25), 1f, false);

	if (func_62(&(uParam0->f_25)) >= 1f)
	{
		func_63(&(uParam0->f_25));
	
		for (i = 0; i < 10; i = i + 1)
		{
			if (func_64(Global_36581[i /*2*/], *uParam0))
				func_65(uParam0, Global_36581[i /*2*/].f_1);
		}
	
		if (func_31(uParam0->f_18) && !func_66(uParam0->f_18))
			if (func_68(func_67(uParam0->f_18)) >= func_70(func_69(uParam0->f_18)) - 1)
				func_65(uParam0, 1);
	}

	return;
}

int func_14(var uParam0) // Position - 0x927 Hash - 0xD73B9827 ^0xB0CA2F10
{
	return uParam0->f_11;
}

void func_15(var uParam0, int iParam1) // Position - 0x933 Hash - 0x4F8BE4B5 ^0x994917B9
{
	uParam0->f_11 = iParam1;
	return;
}

BOOL func_16(int iParam0, float fParam1) // Position - 0x941 Hash - 0x8BC02629 ^0x8BC02629
{
	int num;

	if (iParam0 <= -1)
		return false;

	if (!func_71(iParam0))
		return false;

	if (func_72(iParam0, fParam1))
		return false;

	num = func_73(iParam0);
	func_74(&num, 0, 0, 0, 0, 3, 0, false);

	if (func_75(num, true))
		return true;

	return false;
}

void func_17(int iParam0, BOOL bParam1) // Position - 0x994 Hash - 0x98309943 ^0x98309943
{
	int i;

	if (iParam0 <= -1)
		return;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (func_76(iParam0, i))
			func_77(iParam0, i);
	}

	if (bParam1)
		func_78(iParam0, 1);

	return;
}

BOOL func_18(int iParam0) // Position - 0x9D6 Hash - 0xF89F7389 ^0xF89F7389
{
	int i;

	if (iParam0 <= -1)
		return 0;

	i = 0;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!func_76(iParam0, i))
		{
		}
		else if (!func_79(iParam0, i))
		{
			return 1;
		}
	}

	return 0;
}

void func_19(var uParam0) // Position - 0xA1D Hash - 0xAF6C6D9E ^0x3609F071
{
	TASK::_REQUEST_HERB_COMPOSITE_ASSET(uParam0->f_38);
	return;
}

BOOL func_20(var uParam0) // Position - 0xA2E Hash - 0x1E653336 ^0xD532C70E
{
	if (!TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(uParam0->f_38))
		return false;

	return true;
}

int func_21(var uParam0) // Position - 0xA47 Hash - 0x4EFA6A00 ^0x4829AF10
{
	int i;
	int num;
	int value;
	var unk;
	var groundZ;

	groundZ = uParam0->f_2;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, uParam0->f_2 + 2f, &groundZ, false))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, uParam0->f_2 + 10f, &groundZ, false))
		{
			uParam0->f_12 = uParam0->f_12 + 1;
		
			if (uParam0->f_12 >= 50)
			{
				uParam0->f_12 = 0;
				return -1;
			}
			else
			{
				return 0;
			}
		}
	}

	uParam0->f_2 = groundZ;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (!func_76(uParam0->f_24, i))
		{
		}
		else
		{
			func_80(uParam0->f_24, i, &num, &value, &unk);
			uLocal_23[i /*3*/] = *uParam0 + ((float)num * BUILTIN::COS(BUILTIN::TO_FLOAT(value)));
			uLocal_23[i /*3*/].f_1 = uParam0->f_1 + ((float)num * BUILTIN::SIN(BUILTIN::TO_FLOAT(value)));
			uLocal_23[i /*3*/].f_2 = uParam0->f_2;
		
			if (uParam0->f_23 > 0)
				uLocal_36[i] = unk;
			else
				uLocal_36[i] = -1;
		
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(uLocal_23[i /*3*/], uLocal_23[i /*3*/].f_1, uLocal_23[i /*3*/].f_2 + 10f, &(uLocal_23[i /*3*/].f_2), false))
			{
				uParam0->f_12 = 0;
				return -1;
			}
		}
	}

	uParam0->f_12 = 0;
	return 1;
}

BOOL func_22(var uParam0) // Position - 0xB7A Hash - 0x5B013D33 ^0x432A89F2
{
	var unk;
	int groundSetting;

	if (iLocal_15 < 4)
	{
		if (!_IS_NULL_VECTOR(uLocal_23[iLocal_15 /*3*/]))
		{
			if (!Global_1913812)
			{
				groundSetting = 0;
			
				if (uParam0->f_18 == 1 || uParam0->f_18 == 9 || uParam0->f_18 == 10 || uParam0->f_18 == 17 || uParam0->f_18 == 21 || uParam0->f_18 == 25 || uParam0->f_18 == 32 || uParam0->f_18 == 36)
				{
					groundSetting = groundSetting | 2;
					uLocal_23[iLocal_15 /*3*/] = { uLocal_23[iLocal_15 /*3*/] + func_81(0f, 0.737008f, 1.81999f, uParam0->f_3) };
				}
			
				if (uParam0->f_18 == 37)
				{
					groundSetting = groundSetting | 2;
					uLocal_23[iLocal_15 /*3*/] = { uLocal_23[iLocal_15 /*3*/] + func_81(0f, 0.5f, 1.81999f, uParam0->f_3) };
				}
			
				if (func_79(uParam0->f_24, iLocal_15))
					groundSetting = groundSetting | 1;
			
				uParam0->f_13[iLocal_15] = TASK::_CREATE_HERB_COMPOSITES(uParam0->f_38, uLocal_23[iLocal_15 /*3*/], func_82(uParam0->f_3 + ((float)iLocal_15 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f))), groundSetting, &unk, uLocal_36[iLocal_15]);
			
				if (func_83(uParam0->f_18))
					uParam0->f_28[iLocal_15] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(uLocal_23[iLocal_15 /*3*/], 0.37f, 4, 27, 0);
			
				if (uParam0->f_18 == 38)
					func_84(&uParam0->f_33[iLocal_15], uLocal_23[iLocal_15 /*3*/], 0.15f);
			
				iLocal_15 = iLocal_15 + 1;
				Global_1913812 = true;
			}
		}
		else
		{
			return true;
		}
	
		return false;
	}

	return true;
}

Vector3 func_23(Player plParam0) // Position - 0xD17 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

BOOL func_24(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0xD2B Hash - 0x5D712CAB ^0x5D712CAB
{
	int i;
	int num;
	int value;
	var unk;
	int num2;
	float num3;
	float num4;
	var unk6;
	float num5;
	float num6;

	if (_IS_NULL_VECTOR(uParam1))
		return false;

	if (*uParam4 <= -1)
		*uParam4 = func_5(iParam0, uParam1);

	if (*uParam4 <= -1)
		return false;

	num5 = -1f;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (func_76(*uParam4, i))
		{
			if (bParam6 && func_79(*uParam4, i))
			{
			}
			else
			{
				num4 = { func_47(*uParam4) };
				func_80(*uParam4, i, &num, &value, &unk);
				num3 = num4 + ((float)num * BUILTIN::COS(BUILTIN::TO_FLOAT(value)));
				num3.f_1 = num4.f_1 + ((float)num * BUILTIN::SIN(BUILTIN::TO_FLOAT(value)));
				num6 = func_48(uParam1, num3);
			
				if (num5 < 0f || num5 >= 0f && num6 < num5)
				{
					num5 = num6;
					num2 = i;
					unk6 = { num3 };
				}
			}
		}
	}

	if (func_48(uParam1, unk6) < 25f)
	{
		*uParam5 = num2;
		return true;
	}

	return false;
}

BOOL func_25(int iParam0) // Position - 0xE3A Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_85(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

void func_26(int iParam0, BOOL bParam1) // Position - 0xE99 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_86(iParam0, &num, &num2);

	if (!func_87(iParam0, num, num2, bParam1))
		return;

	func_88(num, num2);
	return;
}

BOOL func_27(int iParam0, int iParam1) // Position - 0xEC6 Hash - 0x980702A2 ^0x9084871D
{
	if (iParam0 == -1)
		return false;

	if (func_3() != -1)
		return Global_38105[iParam0 /*9*/].f_3 && iParam1 != false;

	return Global_27573[iParam0 /*9*/].f_3 && iParam1 != false;
}

void func_28(int iParam0, int iParam1) // Position - 0xEFF Hash - 0x8AB9A819 ^0xD655AC3A
{
	if (iParam0 == -1)
		return;

	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 = Global_38105[iParam0 /*9*/].f_3 - Global_38105[iParam0 /*9*/].f_3 && iParam1;
		return;
	}

	Global_27573[iParam0 /*9*/].f_3 = Global_27573[iParam0 /*9*/].f_3 - Global_27573[iParam0 /*9*/].f_3 && iParam1;
	return;
}

void func_29(int iParam0) // Position - 0xF59 Hash - 0x3B12F3D3 ^0x6834E3F2
{
	if (iParam0 <= -1 || iParam0 >= 500)
		return;

	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_2 = func_89();
		return;
	}

	Global_27573[iParam0 /*9*/].f_2 = func_89();
	return;
}

void func_30(int iParam0, int iParam1) // Position - 0xF9C Hash - 0xD941C8C5 ^0x957BB006
{
	if (iParam0 <= -1)
		return;

	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] = Global_38105[iParam0 /*9*/].f_4[iParam1] | 4096;
		return;
	}

	Global_27573[iParam0 /*9*/].f_4[iParam1] = Global_27573[iParam0 /*9*/].f_4[iParam1] | 4096;
	return;
}

BOOL func_31(int iParam0) // Position - 0xFF4 Hash - 0xA376F75 ^0xA376F75
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return true;
	
		default:
			return false;
	}

	return false;
}

void func_32(Hash hParam0) // Position - 0x1061 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

BOOL func_33(int iParam0) // Position - 0x1070 Hash - 0x4B08C8C4 ^0x4B08C8C4
{
	return !func_31(iParam0);
}

void func_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41) // Position - 0x107F Hash - 0x9FAF0C05 ^0xD0FBCF2B
{
	int num;
	int num2;
	BOOL flag;
	int randomIntInRange;

	num = uParam0.f_18;
	num2 = uParam0.f_24;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	if (num2 != -1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1027129856))
		{
			if (func_90(num, Global_35, 0, 1, func_23(PLAYER::GET_PLAYER_INDEX())))
			{
				if (func_91() && PED::IS_PED_ON_FOOT(Global_35))
				{
					if (num == 26 || num == 11)
					{
						flag = true;
					}
					else if (num == 29)
					{
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					
						if (randomIntInRange == 3)
							flag = true;
					}
				}
			
				func_92(num, true, 1);
				func_93(func_69(num), !flag);
				func_94(func_69(num), 1, false, 0, 0);
				func_95(num, 1);
			}
		}
	
		func_96(uParam39, uParam40, flag, uParam41);
	}

	return;
}

void func_35(var uParam0) // Position - 0x114C Hash - 0x2B8EC770 ^0x562E1F87
{
	var unk;
	int i;
	int j;

	for (i = 0; i <= 3; i = i + 1)
	{
		if (func_76(uParam0->f_24, i) && uParam0->f_13[i] != unk)
		{
			TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(uParam0->f_13[i], false);
			uParam0->f_13[i] = 0;
		}
	}

	for (j = 0; j < 4; j = j + 1)
	{
		if (func_97(&uParam0->f_28[j]))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&uParam0->f_28[j], 1);
			uParam0->f_28[j] = -1;
		}
	
		if (func_97(&uParam0->f_33[j]))
		{
			GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&uParam0->f_33[j], 1);
			uParam0->f_33[j] = -1;
		}
	}

	iLocal_15 = 0;
	return;
}

int func_36(var uParam0) // Position - 0x11F8 Hash - 0xD73B9827 ^0xDD697719
{
	return uParam0->f_9;
}

BOOL func_37(int iParam0) // Position - 0x1204 Hash - 0x5358D51E ^0x5358D51E
{
	return iParam0 != 3;
}

int func_38(var uParam0) // Position - 0x1210 Hash - 0xD73B9827 ^0x8E05EC78
{
	return uParam0->f_8;
}

void func_39(var uParam0, int iParam1) // Position - 0x121C Hash - 0x1E7F7E8E ^0x1FCFF10
{
	if (!func_37(iParam1))
		return;

	if (func_38(uParam0) == iParam1)
		return;

	uParam0->f_8 = iParam1;
	return;
}

void func_40(var uParam0) // Position - 0x1245 Hash - 0x1000862B ^0x1B2B6576
{
	BOOL flag;
	int i;

	flag = false;

	if (func_98(Global_1935630, 2097152))
		flag = true;

	if (func_38(uParam0) == 2)
		flag = true;

	if (!flag)
		return;

	for (i = 0; i < uParam0->f_22; i = i + 1)
	{
		if (func_59(uParam0->f_13[i]))
		{
			MISC::_0x082C043C7AFC3747(uParam0->f_13[i], true);
			MISC::DISABLE_LOOTING_COMPOSITE_LOOTABLE_THIS_FRAME(uParam0->f_13[i], true);
		}
	}

	return;
}

void func_41(var uParam0, int iParam1) // Position - 0x12B6 Hash - 0x1C2072BD ^0xB78D2AB0
{
	uParam0->f_18 = func_99(iParam1);
	uParam0->f_19 = func_69(uParam0->f_18);
	uParam0->f_20 = func_100(uParam0->f_18);
	uParam0->f_23 = func_101(uParam0->f_18);
	uParam0->f_21 = func_102(uParam0->f_18);
	uParam0->f_22 = func_103(uParam0->f_18);
	uParam0->f_38 = func_104(uParam0->f_18);
	return;
}

BOOL func_42(int iParam0) // Position - 0x1310 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_43(int iParam0) // Position - 0x1323 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x134D Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_45(int iParam0) // Position - 0x1377 Hash - 0xC34C92BC ^0xC34C92BC
{
	if (iParam0 == -1)
		return false;

	if (func_3() != -1)
		return Global_38105[iParam0 /*9*/] > 0;

	return Global_27573[iParam0 /*9*/] > 0;
}

int func_46(int iParam0) // Position - 0x13A6 Hash - 0x8C4DB1D9 ^0x8C4DB1D9
{
	if (iParam0 == -1)
		return 0;

	if (func_3() != -1)
		return Global_38105[iParam0 /*9*/];
	else
		return Global_27573[iParam0 /*9*/];

	return 0;
}

Vector3 func_47(int iParam0) // Position - 0x13D8 Hash - 0x5689F523 ^0x63052FDD
{
	if (iParam0 == -1)
		return -1f, -1f, -1f;

	if (func_3() != -1)
		return func_105(Global_38105[iParam0 /*9*/].f_1);

	return func_105(Global_27573[iParam0 /*9*/].f_1);
}

float func_48(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x1411 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_49(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x142F Hash - 0xCB6851C5 ^0x985C187D
{
	var src;

	src.f_2 = -15;
	src.f_4 = 4;
	MISC::COPY_SCRIPT_STRUCT(iParam0, &src, 9);
	*iParam0 = iParam1;
	iParam0->f_1 = func_106(uParam2);
	iParam0->f_2 = iParam5;
	return;
}

void func_50(int iParam0, var uParam1, var uParam2) // Position - 0x1469 Hash - 0xAA3D52E0 ^0xAA3D52E0
{
	int i;
	int randomIntInRange;
	var unk;

	switch (iParam0)
	{
		case 0:
			uParam2->[0] = 1;
			uParam2->[1] = 2;
			uParam2->[2] = 3;
			break;
	
		case 1:
			uParam2->[0] = 2;
			uParam2->[1] = 3;
			uParam2->[2] = 4;
			break;
	
		case 2:
			uParam2->[0] = 3;
			uParam2->[1] = 4;
			uParam2->[2] = 5;
			break;
	
		case 3:
			uParam2->[0] = 2;
			uParam2->[1] = 3;
			uParam2->[2] = 4;
			break;
	
		default:
			uParam2->[0] = 2;
			uParam2->[1] = 3;
			uParam2->[2] = 4;
			break;
	}

	uParam1->[0] = 0;
	uParam1->[1] = 67;
	uParam1->[2] = 139;
	uParam1->[3] = 223;
	uParam1->[4] = 293;
	uParam1->[5] = 359;

	for (i = 5; i >= 1; i = i + -1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, i + 1);
		unk = uParam1->[randomIntInRange];
		uParam1->[randomIntInRange] = uParam1->[i];
		uParam1->[i] = unk;
	}

	return;
}

void func_51(int iParam0, int iParam1, int iParam2) // Position - 0x155E Hash - 0x4A4BB3E1 ^0x934485E9
{
	if (iParam0 > 500)
		return;

	if (func_3() != -1)
		Global_38105[iParam0 /*9*/].f_4[iParam1] = iParam2;

	Global_27573[iParam0 /*9*/].f_4[iParam1] = iParam2;
	return;
}

BOOL func_52(Ped pedParam0) // Position - 0x1597 Hash - 0x28235D58 ^0x5BD1001B
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true);

	return false;
}

BOOL func_53() // Position - 0x15B4 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_107() != -1;
}

BOOL func_54(BOOL bParam0) // Position - 0x15CF Hash - 0xD5646B1 ^0x7FAD7A3A
{
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

	return false;
}

BOOL func_55() // Position - 0x162B Hash - 0xA5A53F42 ^0xE343240E
{
	return func_108(Global_1572887.f_6, 1);
}

BOOL func_56(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x163E Hash - 0x7030BA00 ^0xA94D0FFB
{
	Player player;
	int i;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && iParam1 != -1)
	{
		player = plParam0;
	
		for (i = 0; i <= 5; i = i + 1)
		{
			if (Global_1145592.f_1[i /*11*/].f_1 == iParam1 && func_109(i, 128, player))
				if (bParam2)
					if (Global_1145899.f_20[i /*16*/] >= 2)
						return true;
				else if (Global_1145899.f_20[i /*16*/] >= 6)
					return true;
		}
	}

	return false;
}

int func_57(int iParam0) // Position - 0x16BC Hash - 0x1B04F1B9 ^0x33AF67A6
{
	return Global_1145592.f_1[iParam0 /*11*/].f_3;
}

BOOL func_58(int iParam0) // Position - 0x16D0 Hash - 0x49EE3EAE ^0x49EE3EAE
{
	if (!func_110(iParam0))
		return false;

	return func_111(iParam0, 4, true);
}

BOOL func_59(int iParam0) // Position - 0x16EE Hash - 0xE7558FF0 ^0xE7558FF0
{
	return iParam0 != -1;
}

BOOL func_60(var uParam0) // Position - 0x16FA Hash - 0x5001E582 ^0x5001E582
{
	return func_112(*uParam0, 1);
}

void func_61(var uParam0, float fParam1, BOOL bParam2) // Position - 0x170A Hash - 0xB5C75B44 ^0xB5C75B44
{
	if (bParam2 || !func_60(uParam0))
		func_113(uParam0, fParam1);

	return;
}

float func_62(var uParam0) // Position - 0x172C Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_60(uParam0))
		return uParam0->f_1;

	if (func_114(uParam0))
		return uParam0->f_2;

	return func_115() - uParam0->f_1;
}

void func_63(var uParam0) // Position - 0x1761 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_113(uParam0, 0f);
	return;
}

BOOL func_64(Volume volParam0, Vector3 vParam1, var uParam2, var uParam3) // Position - 0x1770 Hash - 0x23F7A048 ^0x52C55AC8
{
	if (!VOLUME::DOES_VOLUME_EXIST(volParam0))
		return false;

	return VOLUME::IS_POINT_IN_VOLUME(volParam0, vParam1);
}

void func_65(var uParam0, int iParam1) // Position - 0x1790 Hash - 0x1E7F7E8E ^0xC9619E4
{
	if (!func_37(iParam1))
		return;

	if (func_36(uParam0) == iParam1)
		return;

	uParam0->f_9 = iParam1;
	return;
}

BOOL func_66(int iParam0) // Position - 0x17B9 Hash - 0xD30ACE25 ^0xD30ACE25
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 17:
			return func_117() >= 2;
	
		case 10:
		case 14:
		case 30:
		case 35:
			return func_117() >= 4;
	
		case 21:
			return func_116(43);
	
		case 22:
		case 24:
			return func_117() >= 1;
	
		case 25:
		case 32:
		case 36:
			return func_117() >= 3;
	
		default:
		
	}

	return false;
}

Hash func_67(int iParam0) // Position - 0x1845 Hash - 0xFD06F393 ^0x79DCC221
{
	switch (iParam0)
	{
		case 1:
			return -1112589856;
	
		case 9:
			return 270657460;
	
		case 10:
			return 1485944635;
	
		case 14:
			return 767056202;
	
		case 17:
			return -1064869901;
	
		case 21:
			return -16133028;
	
		case 22:
			return -1268393363;
	
		case 24:
			return 5452285;
	
		case 25:
			return -491162917;
	
		case 30:
			return 1819699601;
	
		case 32:
			return 1077382670;
	
		case 35:
			return 1298182602;
	
		case 36:
			return -345586569;
	
		default:
		
	}

	return 0;
}

int func_68(Hash hParam0) // Position - 0x190B Hash - 0xDCB10D9D ^0xC3926CE3
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(1777389635, hParam0);
}

Hash func_69(int iParam0) // Position - 0x191E Hash - 0xBA965109 ^0xA132DCEE
{
	switch (iParam0)
	{
		case 1:
			return joaat("provision_ro_flower_acunas_star");
	
		case 2:
			return joaat("consumable_herb_ginseng");
	
		case 3:
			return joaat("consumable_herb_ginseng");
	
		case 4:
			return joaat("consumable_herb_bay_bolete");
	
		case 5:
			return joaat("consumable_herb_black_berry");
	
		case 6:
			return joaat("consumable_herb_currant");
	
		case 7:
			return joaat("consumable_herb_burdock_root");
	
		case 8:
			return joaat("consumable_herb_chanterelles");
	
		case 9:
			return joaat("provision_ro_flower_cigar");
	
		case 10:
			return joaat("provision_ro_flower_clamshell");
	
		case 11:
			return joaat("consumable_herb_common_bulrush");
	
		case 12:
			return joaat("consumable_herb_creeping_thyme");
	
		case 13:
			return joaat("consumable_herb_sage");
	
		case 14:
			return joaat("provision_ro_flower_dragons");
	
		case 15:
			return joaat("consumable_herb_english_mace");
	
		case 16:
			return joaat("consumable_herb_evergreen_huckleberry");
	
		case 17:
			return joaat("provision_ro_flower_ghost");
	
		case 18:
			return joaat("consumable_herb_currant");
	
		case 19:
			return joaat("consumable_herb_sage");
	
		case 20:
			return joaat("consumable_herb_indian_tobacco");
	
		case 21:
			return joaat("provision_ro_flower_lady_of_night");
	
		case 22:
			return joaat("provision_ro_flower_lady_slipper");
	
		case 23:
			return joaat("consumable_herb_milkweed");
	
		case 24:
			return joaat("provision_ro_flower_moccasin");
	
		case 25:
			return joaat("provision_ro_flower_night_scented");
	
		case 26:
			return joaat("consumable_herb_oleander_sage");
	
		case 27:
			return joaat("consumable_herb_oregano");
	
		case 28:
			return joaat("consumable_herb_parasol_mushroom");
	
		case 29:
			return joaat("consumable_herb_prairie_poppy");
	
		case 30:
			return joaat("provision_ro_flower_queens");
	
		case 31:
			return joaat("consumable_herb_rams_head");
	
		case 32:
			return joaat("provision_ro_flower_rat_tail");
	
		case 33:
			return joaat("consumable_herb_red_raspberry");
	
		case 34:
			return joaat("consumable_herb_sage");
	
		case 35:
			return joaat("provision_ro_flower_sparrows");
	
		case 36:
			return joaat("provision_ro_flower_spider");
	
		case 37:
			return joaat("consumable_herb_vanilla_flower");
	
		case 38:
			return joaat("consumable_herb_violet_snowdrop");
	
		case 39:
			return joaat("consumable_herb_wild_carrots");
	
		case 40:
			return joaat("consumable_herb_wild_feverfew");
	
		case 41:
			return joaat("consumable_herb_wild_mint");
	
		case 42:
			return joaat("consumable_herb_wintergreen_berry");
	
		case 43:
			return joaat("consumable_herb_yarrow");
	
		default:
			break;
	}

	return 0;
}

int func_70(int iParam0) // Position - 0x1C0D Hash - 0xEED5739D ^0xEED5739D
{
	switch (iParam0)
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

BOOL func_71(int iParam0) // Position - 0x1CE6 Hash - 0xCC89D857 ^0xA955CCBE
{
	if (func_3() != -1)
		return Global_38105[iParam0 /*9*/].f_2 != -15;

	return Global_27573[iParam0 /*9*/].f_2 != -15;
}

BOOL func_72(int iParam0, float fParam1) // Position - 0x1D13 Hash - 0x4A4671B3 ^0x53F13BA9
{
	int num;

	num = func_46(iParam0);

	if (!func_31(num) || func_3() != -1)
		return false;

	if (!func_66(num) && func_118(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(BUILTIN::FLOOR(fParam1), 1777389635, 0)))
		return true;

	return false;
}

int func_73(int iParam0) // Position - 0x1D65 Hash - 0x7B4A2ACE ^0xA0930A0C
{
	if (func_3() != -1)
		return Global_38105[iParam0 /*9*/].f_2;

	return Global_27573[iParam0 /*9*/].f_2;
}

void func_74(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x1D8A Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_119(*hParam0);
	i = func_120(*hParam0);
	num2 = func_121(*hParam0);
	j = func_122(*hParam0);
	k = func_123(*hParam0);
	l = func_124(*hParam0);

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

	for (m = func_125(i, num); num2 > m; m = func_125(i, num))
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

	func_126(hParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_75(Hash hParam0, BOOL bParam1) // Position - 0x1F12 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_127(func_89(), hParam0, bParam1);
}

BOOL func_76(int iParam0, int iParam1) // Position - 0x1F26 Hash - 0x909CC7A4 ^0xAC0DFB3F
{
	if (iParam0 == -1)
		return false;

	if (func_3() != -1)
		return Global_38105[iParam0 /*9*/].f_4[iParam1] & 1073741824 != 0;

	return Global_27573[iParam0 /*9*/].f_4[iParam1] & 1073741824 != 0;
}

void func_77(int iParam0, int iParam1) // Position - 0x1F6D Hash - 0xAC5FA64D ^0x3E1CB42B
{
	if (iParam0 <= -1)
		return;

	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_4[iParam1] = Global_38105[iParam0 /*9*/].f_4[iParam1] - Global_38105[iParam0 /*9*/].f_4[iParam1] & 4096;
		return;
	}

	Global_27573[iParam0 /*9*/].f_4[iParam1] = Global_27573[iParam0 /*9*/].f_4[iParam1] - Global_27573[iParam0 /*9*/].f_4[iParam1] & 4096;
	return;
}

void func_78(int iParam0, int iParam1) // Position - 0x1FE1 Hash - 0x4CB3197E ^0x713E6C92
{
	if (iParam0 == -1)
		return;

	if (func_3() != -1)
	{
		Global_38105[iParam0 /*9*/].f_3 = Global_38105[iParam0 /*9*/].f_3 || iParam1;
		return;
	}

	Global_27573[iParam0 /*9*/].f_3 = Global_27573[iParam0 /*9*/].f_3 || iParam1;
	return;
}

BOOL func_79(int iParam0, int iParam1) // Position - 0x2027 Hash - 0xD3901915 ^0xCB587D09
{
	if (iParam0 <= -1)
		return false;

	if (func_3() != -1)
		return Global_38105[iParam0 /*9*/].f_4[iParam1] & 4096 != 0;

	return Global_27573[iParam0 /*9*/].f_4[iParam1] & 4096 != 0;
}

void func_80(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x206A Hash - 0x9D94CD5F ^0x9D94CD5F
{
	if (iParam0 <= -1)
		return;

	if (func_3() != -1)
	{
		func_128(&Global_38105[iParam0 /*9*/], iParam1, uParam2, uParam3, uParam4);
		return;
	}

	func_129(&Global_27573[iParam0 /*9*/], iParam1, uParam2, uParam3, uParam4);
	return;
}

Vector3 func_81(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x20AC Hash - 0x8959C4D1 ^0x8922A2E2
{
	float num;
	float num2;
	float num3;

	num2 = BUILTIN::SIN(fParam3);
	num3 = BUILTIN::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

float func_82(float fParam0) // Position - 0x20F0 Hash - 0xC531A009 ^0xC531A009
{
	return fParam0 * 0.017453292f;
}

BOOL func_83(int iParam0) // Position - 0x2100 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
	
		default:
		
	}

	return false;
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x212D Hash - 0x6BFCB057 ^0x6BFCB057
{
	int num;

	num = -1;
	func_130(uParam0, uParam1, fParam4, 4, num, 0);
	return;
}

BOOL func_85(int iParam0, BOOL bParam1) // Position - 0x2148 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_131(iParam0))
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

void func_86(int iParam0, var uParam1, var uParam2) // Position - 0x2179 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_87(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2195 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_132(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_133(iParam0))
		return false;

	if (func_134(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_135(iParam0, 1) || func_136(32768))
		if (!func_135(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_137())
		return false;

	return true;
}

void func_88(int iParam0, int iParam1) // Position - 0x2237 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

Hash func_89() // Position - 0x225B Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_90(int iParam0, Ped pedParam1, int iParam2, int iParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x2267 Hash - 0x1F6EDE2 ^0x506BAE1A
{
	int num;
	int num2;
	Hash herbType;
	int num3;

	num = -1;

	if (func_24(iParam0, vParam4, &num, &num2, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1) && pedParam1 == Global_35)
		{
			herbType = func_138(iParam0);
			TELEMETRY::_TELEMETRY_HERB_PICKED(herbType);
			COMPENDIUM::COMPENDIUM_HERB_PICKED(herbType, vParam4);
		
			if (!func_139(iParam0))
				func_140(iParam0, false, true);
		
			if (func_3() == -1)
			{
				if (func_85(Global_1835011[4 /*74*/].f_1, true))
				{
					num3 = func_141(iParam0);
				
					if (num3 != -1)
						func_26(num3, true);
				}
			}
		
			func_143(func_142(joaat("Pick"), herbType), iParam3);
			func_143(func_144(joaat("herbs_picked_total")), iParam3);
		
			if (func_145(iParam0))
				func_143(func_144(joaat("herbs_picked_mushrooms")), iParam3);
		}
	
		func_29(num);
		func_30(num, num2);
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_91() // Position - 0x234A Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_146(1);
}

void func_92(int iParam0, BOOL bParam1, int iParam2) // Position - 0x2357 Hash - 0x50964517 ^0x50964517
{
	Hash num;
	int num2;

	num = func_69(iParam0);
	num2 = func_147(&num);

	if (num2 != iParam0)
		func_148(num2, 4);

	if (!func_110(iParam0))
		return;

	if (func_58(iParam0))
		return;

	func_148(iParam0, 4);
	func_149(iParam0, bParam1);

	if (!func_139(iParam0))
		func_140(iParam0, true, false);

	if (bParam1)
		if (!func_150(0, false, true))
			func_151(true, 6);

	return;
}

void func_93(Hash hParam0, BOOL bParam1) // Position - 0x23CD Hash - 0x87EB26BF ^0x55136C8F
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

	if (func_152(hParam0, 1573112293) || func_152(hParam0, 672467738) || func_152(hParam0, -550842268))
		flag = true;

	if (func_153(hParam0) == joaat("consumable"))
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
				health = func_154(0, outData2.f_2);
				func_155(outData2.f_2, true);
				func_156(0, 7000);
				flag3 = true;
			}
			else if (-1104847406 == outData2.f_1)
			{
				deadeye = func_154(2, outData2.f_2);
				func_157(outData2.f_2);
				func_156(2, 7000);
				flag2 = true;
			}
			else if (381158954 == outData2.f_1)
			{
				stamina = func_154(1, outData2.f_2);
				func_158(outData2.f_2);
				func_156(1, 7000);
			}
			else if (joaat("EFFECT_HEALTH_CORE") == outData2.f_1)
			{
				num = func_159(outData2.f_2, outData2.f_5);
			
				if (func_160(&unk28, &unk29, num))
				{
					func_161(num, true, flag, bParam1);
					func_156(0, 7000);
				}
			
				flag3 = true;
			}
			else if (joaat("EFFECT_DEADEYE_CORE") == outData2.f_1)
			{
				num2 = func_159(outData2.f_2, outData2.f_5);
			
				if (func_160(&unk28, &unk29, num2))
				{
					func_162(num2, true, flag, bParam1);
					func_156(2, 7000);
				}
			
				flag2 = true;
			}
			else if (joaat("EFFECT_STAMINA_CORE") == outData2.f_1)
			{
				num3 = func_159(outData2.f_2, outData2.f_5);
			
				if (func_160(&unk28, &unk29, num3))
				{
					func_163(num3, true, flag, bParam1);
					func_156(1, 7000);
				}
			}
			else if (joaat("Effect_Health_Core_Gold") == outData2.f_1)
			{
				num4 = func_164(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_165(19, num4);
				flag3 = true;
			}
			else if (joaat("Effect_Deadeye_Core_Gold") == outData2.f_1)
			{
				num4 = func_164(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_165(20, num4);
				flag2 = true;
			}
			else if (joaat("Effect_Stamina_Core_Gold") == outData2.f_1)
			{
				num4 = func_164(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_165(18, num4);
			}
			else if (1869697234 == outData2.f_1)
			{
				num4 = func_164(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_165(0, num4);
				flag3 = true;
			}
			else if (1342237631 == outData2.f_1)
			{
				num4 = func_164(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_165(2, num4);
				flag2 = true;
			}
			else if (-1240225157 == outData2.f_1)
			{
				num4 = func_164(BUILTIN::TO_FLOAT(outData2.f_3), outData2.f_4);
				func_165(1, num4);
			}
			else if (-816334026 == outData2.f_1)
			{
				func_166(BUILTIN::TO_FLOAT(outData2.f_2), true);
			}
		}
	
		if (flag3)
			if (num > 0f || health > 0f)
				flag4 = true;
	
		if (flag4 || func_152(hParam0, -537818634))
			func_143(func_167(joaat("medicine_items_used")), 1);
	
		if (func_152(hParam0, -1457797660))
			func_143(func_167(joaat("provision_items_used")), 1);
	
		if (flag2)
			func_143(func_167(joaat("DEADEYE_ITEMS_USED")), 1);
	
		PLAYER::_SET_USED_ITEM_EFFECT(health, stamina, deadeye, BUILTIN::ROUND(num / 2f), BUILTIN::ROUND(num3 / 2f), BUILTIN::ROUND(num2 / 2f));
	}

	return;
}

void func_94(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, int iParam4) // Position - 0x273D Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_168(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_169())
	{
		func_170(hParam0, iParam1, bParam2, iParam4);
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
		if (iParam3 || iParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_172(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_153(hParam0);
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
	else if (!func_173(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_175(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_174(hParam0)), num), num5);

	if (iParam1 == 1 || func_152(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_174(hParam0));

	func_176(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

void func_95(int iParam0, int iParam1) // Position - 0x2983 Hash - 0xDB5B57E1 ^0x4CB48A48
{
	var statId;

	statId = { func_142(joaat("eaten"), func_138(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&statId, iParam1);
	func_143(func_144(joaat("herbs_eaten")), iParam1);
	return;
}

int func_96(var uParam0, var uParam1, BOOL bParam2, var uParam3) // Position - 0x29B5 Hash - 0x5FBAFD9 ^0x36226411
{
	if (*uParam0 < 5)
	{
		if (func_177() || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, *uParam1) || !func_91() || !PED::IS_PED_ON_FOOT(Global_35))
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
				ANIMSCENE::_DELETE_ANIM_SCENE(*uParam1);
		
			return 1;
		}
		else
		{
			Global_1935496.f_127 = 1;
		}
	}

	switch (*uParam0)
	{
		case 0:
			if (bParam2)
				func_178(uParam3, false);
		
			if (func_60(uParam3) && func_62(uParam3) > 2f)
			{
				func_179(uParam0, 1);
				func_180(uParam3);
			}
			break;
	
		case 1:
			*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@sal1@ig@sal1_ig12_wake_up@sal1_ig12_wake_up", 0, "Herb_PL", false, true);
			func_179(uParam0, 2);
			break;
	
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				func_179(uParam0, 3);
			}
			break;
	
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
				func_179(uParam0, 5);
			}
			break;
	
		case 5:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam1, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35);
				func_179(uParam0, 0);
				return 1;
			}
			break;
	}

	return 0;
}

BOOL func_97(var uParam0) // Position - 0x2B0B Hash - 0x5499D461 ^0x5499D461
{
	if (*uParam0 == 0)
		return false;

	return *uParam0 != -1;
}

BOOL func_98(int iParam0, int iParam1) // Position - 0x2B23 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_99(int iParam0) // Position - 0x2B32 Hash - 0x38641D8F ^0xE728EF79
{
	var unk;
	int i;
	BOOL flag;

	if (Global_1913678.f_133)
	{
		unk = 44;
	
		for (i = 0; i <= 1; i = i + 1)
		{
			if (Global_1913678[iParam0 /*3*/][i] != 0)
			{
				flag = true;
				break;
			}
		}
	
		if (!flag)
			return iParam0;
	
		func_181(&unk, 44, true);
	
		for (i = 0; i <= 43; i = i + 1)
		{
			if (i == iParam0)
			{
			}
			else if (func_182(&Global_1913678[iParam0 /*3*/], i, 44))
			{
				return i;
			}
		}
	
		return iParam0;
	}

	return iParam0;
}

int func_100(int iParam0) // Position - 0x2BC4 Hash - 0x71D92F17 ^0x71D92F17
{
	switch (iParam0)
	{
		case 1:
			return 3;
	
		case 2:
			return 3;
	
		case 3:
			return 3;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 0;
	
		case 9:
			return 3;
	
		case 10:
			return 3;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	
		case 14:
			return 3;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 3;
	
		case 18:
			return 0;
	
		case 19:
			return 0;
	
		case 20:
			return 0;
	
		case 21:
			return 3;
	
		case 22:
			return 3;
	
		case 23:
			return 0;
	
		case 24:
			return 3;
	
		case 25:
			return 3;
	
		case 26:
			return 0;
	
		case 27:
			return 0;
	
		case 28:
			return 0;
	
		case 29:
			return 0;
	
		case 30:
			return 3;
	
		case 31:
			return 0;
	
		case 32:
			return 3;
	
		case 33:
			return 1;
	
		case 34:
			return 0;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 0;
	
		case 39:
			return 0;
	
		case 40:
			return 0;
	
		case 41:
			return 0;
	
		case 42:
			return 1;
	
		case 43:
			return 0;
	
		default:
			break;
	}

	return -1;
}

int func_101(int iParam0) // Position - 0x2E07 Hash - 0xEC3CB391 ^0xEC3CB391
{
	switch (iParam0)
	{
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
	
		case 37:
			return 0;
	
		case 38:
			return 0;
	
		case 39:
			return 0;
	
		case 40:
			return 0;
	
		case 41:
			return 0;
	
		case 42:
			return 0;
	
		case 43:
			return 4;
	
		default:
			break;
	}

	return 0;
}

int func_102(int iParam0) // Position - 0x304A Hash - 0x1D008578 ^0x1D008578
{
	switch (iParam0)
	{
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 2;
	
		case 5:
			return 1;
	
		case 6:
			return 2;
	
		case 7:
			return 2;
	
		case 8:
			return 2;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 3;
	
		case 12:
			return 3;
	
		case 13:
			return 2;
	
		case 14:
			return 1;
	
		case 15:
			return 2;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 2;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 2;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 2;
	
		case 27:
			return 3;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 1;
	
		case 31:
			return 2;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 2;
	
		case 35:
			return 1;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
		case 38:
			return 2;
	
		case 39:
			return 2;
	
		case 40:
			return 2;
	
		case 41:
			return 3;
	
		case 42:
			return 1;
	
		case 43:
			return 2;
	
		default:
			break;
	}

	return 0;
}

int func_103(int iParam0) // Position - 0x328D Hash - 0xB3CC54A0 ^0xB3CC54A0
{
	switch (iParam0)
	{
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 4;
	
		case 5:
			return 2;
	
		case 6:
			return 3;
	
		case 7:
			return 3;
	
		case 8:
			return 4;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 4;
	
		case 12:
			return 4;
	
		case 13:
			return 3;
	
		case 14:
			return 1;
	
		case 15:
			return 3;
	
		case 16:
			return 2;
	
		case 17:
			return 1;
	
		case 18:
			return 3;
	
		case 19:
			return 3;
	
		case 20:
			return 3;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 3;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 3;
	
		case 27:
			return 4;
	
		case 28:
			return 4;
	
		case 29:
			return 3;
	
		case 30:
			return 1;
	
		case 31:
			return 4;
	
		case 32:
			return 1;
	
		case 33:
			return 2;
	
		case 34:
			return 3;
	
		case 35:
			return 1;
	
		case 36:
			return 1;
	
		case 37:
			return 1;
	
		case 38:
			return 3;
	
		case 39:
			return 3;
	
		case 40:
			return 3;
	
		case 41:
			return 4;
	
		case 42:
			return 2;
	
		case 43:
			return 3;
	
		default:
			break;
	}

	return 0;
}

int func_104(int iParam0) // Position - 0x34D0 Hash - 0xB8EC44B7 ^0x53064FE4
{
	switch (iParam0)
	{
		case 1:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_ACUNA_STAR_DEF");
	
		case 2:
			return joaat("COMPOSITE_LOOTABLE_ALASKAN_GINSENG_ROOT_DEF");
	
		case 3:
			return joaat("COMPOSITE_LOOTABLE_AMERICAN_GINSENG_ROOT_DEF");
	
		case 4:
			return joaat("COMPOSITE_LOOTABLE_BAY_BOLETE_DEF");
	
		case 5:
			return joaat("COMPOSITE_LOOTABLE_BLACK_BERRY_DEF");
	
		case 6:
			return joaat("COMPOSITE_LOOTABLE_BLACK_CURRANT_DEF");
	
		case 7:
			return joaat("COMPOSITE_LOOTABLE_BURDOCK_ROOT_DEF");
	
		case 8:
			return joaat("COMPOSITE_LOOTABLE_CHANTERELLES_DEF");
	
		case 9:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CIGAR_DEF");
	
		case 10:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_CLAM_SHELL_DEF");
	
		case 11:
			return joaat("COMPOSITE_LOOTABLE_COMMON_BULRUSH_DEF");
	
		case 12:
			return joaat("COMPOSITE_LOOTABLE_CREEPING_THYME_DEF");
	
		case 13:
			return joaat("COMPOSITE_LOOTABLE_DESERT_SAGE_DEF");
	
		case 14:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_DRAGONS_DEF");
	
		case 15:
			return joaat("COMPOSITE_LOOTABLE_ENGLISH_MACE_DEF");
	
		case 16:
			return joaat("COMPOSITE_LOOTABLE_EVERGREEN_HUCKLEBERRY_DEF");
	
		case 17:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_GHOST_DEF");
	
		case 18:
			return joaat("COMPOSITE_LOOTABLE_GOLDEN_CURRANT_DEF");
	
		case 19:
			return joaat("COMPOSITE_LOOTABLE_HUMMINGBIRD_SAGE_DEF");
	
		case 20:
			return joaat("COMPOSITE_LOOTABLE_INDIAN_TOBACCO_DEF");
	
		case 21:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_NIGHT_DEF");
	
		case 22:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_LADY_SLIPPER_DEF");
	
		case 23:
			return joaat("COMPOSITE_LOOTABLE_MILKWEED_DEF");
	
		case 24:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_MOCCASIN_DEF");
	
		case 25:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_NIGHT_SCENTED_DEF");
	
		case 26:
			return joaat("COMPOSITE_LOOTABLE_OLEANDER_SAGE_DEF");
	
		case 27:
			return joaat("COMPOSITE_LOOTABLE_OREGANO_DEF");
	
		case 28:
			return joaat("COMPOSITE_LOOTABLE_PARASOL_MUSHROOM_DEF");
	
		case 29:
			return joaat("COMPOSITE_LOOTABLE_PRAIRIE_POPPY_DEF");
	
		case 30:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_QUEENS_DEF");
	
		case 31:
			return joaat("COMPOSITE_LOOTABLE_RAMS_HEAD_DEF");
	
		case 32:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_RAT_TAIL_DEF");
	
		case 33:
			return joaat("COMPOSITE_LOOTABLE_RED_RASPBERRY_DEF");
	
		case 34:
			return joaat("COMPOSITE_LOOTABLE_RED_SAGE_DEF");
	
		case 35:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPARROWS_DEF");
	
		case 36:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_SPIDER_DEF");
	
		case 37:
			return joaat("COMPOSITE_LOOTABLE_ORCHID_VANILLA_DEF");
	
		case 38:
			return joaat("COMPOSITE_LOOTABLE_VIOLET_SNOWDROP_DEF");
	
		case 39:
			return joaat("COMPOSITE_LOOTABLE_WILD_CARROT_DEF");
	
		case 40:
			return joaat("COMPOSITE_LOOTABLE_WILD_FEVERFEW_DEF");
	
		case 41:
			return joaat("COMPOSITE_LOOTABLE_WILD_MINT_DEF");
	
		case 42:
			return joaat("COMPOSITE_LOOTABLE_WINTERGREEN_BERRY_DEF");
	
		case 43:
			return joaat("COMPOSITE_LOOTABLE_YARROW_DEF");
	
		default:
		
	}

	return 0;
}

Vector3 func_105(int iParam0) // Position - 0x373E Hash - 0xAC89079C ^0xF0D7C0AA
{
	float num;
	int value;
	int value2;

	value = iParam0 & 32767;
	value2 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	num = BUILTIN::TO_FLOAT(value);
	num.f_1 = BUILTIN::TO_FLOAT(value2);

	if (iParam0 & 1073741824 == 0)
		num = num * -1f;

	if (iParam0 & -2147483648 == 0)
		num.f_1 = num.f_1 * -1f;

	return num;
}

BOOL func_106(float fParam0, var uParam1, var uParam2) // Position - 0x379A Hash - 0xEEEBBA53 ^0xA3D9EE1A
{
	BOOL flag;

	flag = BUILTIN::ROUND(MISC::ABSF(fParam0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(fParam0.f_1)) & 32767, 15);

	if (fParam0 > 0f)
		flag = flag | 1073741824;

	if (fParam0.f_1 > 0f)
		flag = flag | -2147483648;

	return flag;
}

eStackSize func_107() // Position - 0x37EF Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_108(BOOL bParam0, BOOL bParam1) // Position - 0x37FD Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && bParam1 != false;
}

BOOL func_109(int iParam0, int iParam1, Player plParam2) // Position - 0x380C Hash - 0x8F4D222D ^0x8F4D222D
{
	return func_183(Global_1145667[plParam2 /*7*/][iParam0], iParam1);
}

BOOL func_110(int iParam0) // Position - 0x3826 Hash - 0x7946919E ^0x7946919E
{
	return !(iParam0 <= 0);
}

BOOL func_111(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3833 Hash - 0x77ECC81C ^0x6B9E3122
{
	if (bParam2)
		if (!func_110(iParam0))
			return false;

	if (Global_1572887.f_12 != -1)
		return Global_36638[iParam0] && bParam1 != false;

	return Global_40.f_9274[iParam0] && bParam1 != false;
}

BOOL func_112(int iParam0, int iParam1) // Position - 0x3876 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_113(var uParam0, float fParam1) // Position - 0x3885 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_115() - fParam1;
	func_184(uParam0, 1);
	func_185(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_114(var uParam0) // Position - 0x38AB Hash - 0x39705408 ^0x39705408
{
	return func_112(*uParam0, 2);
}

float func_115() // Position - 0x38BB Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_116(int iParam0) // Position - 0x38ED Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_3() != -1)
		return 0;

	return func_85(Global_1347702[iParam0 /*49*/].f_15, true);
}

int func_117() // Position - 0x3910 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_186(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

BOOL func_118(Hash hParam0) // Position - 0x3948 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_119(int iParam0) // Position - 0x3958 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_120(int iParam0) // Position - 0x397D Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_121(int iParam0) // Position - 0x3990 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_122(int iParam0) // Position - 0x39A3 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_123(int iParam0) // Position - 0x39B6 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_124(int iParam0) // Position - 0x39C8 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_125(int iParam0, int iParam1) // Position - 0x39DA Hash - 0x893AC59E ^0x893AC59E
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

void func_126(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x3A74 Hash - 0xA65AB937 ^0xA65AB937
{
	func_188(uParam0, iParam6);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_191(uParam0, iParam3);
	func_192(uParam0, iParam2);
	func_193(uParam0, iParam1);
	return;
}

BOOL func_127(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x3AAC Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_194(hParam1) || !func_194(hParam0))
			return true;

	return hParam0 > hParam1;
}

void func_128(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3AD9 Hash - 0xE35EF9B5 ^0x9962393C
{
	*uParam3 = iParam0->f_4[iParam1] & 511;
	*uParam2 = BUILTIN::SHIFT_RIGHT(iParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(iParam0->f_4[iParam1] & 57344, 13);
	return;
}

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4) // Position - 0x3B1B Hash - 0xE35EF9B5 ^0x9962393C
{
	*uParam3 = iParam0->f_4[iParam1] & 511;
	*uParam2 = BUILTIN::SHIFT_RIGHT(iParam0->f_4[iParam1] & 3584, 9);
	*uParam4 = BUILTIN::SHIFT_RIGHT(iParam0->f_4[iParam1] & 57344, 13);
	return;
}

void func_130(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x3B5D Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_97(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_97(uParam0))
		{
		}
	}

	return;
}

int func_131(int iParam0) // Position - 0x3B91 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_195(iParam0))
		return -1;

	return func_196(iParam0);
}

BOOL func_132(int iParam0, int iParam1) // Position - 0x3BAD Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_3() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_133(int iParam0) // Position - 0x3BE0 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_3() != -1)
		if (func_135(iParam0, 4))
			return false;
	else if (func_135(iParam0, 2))
		return false;

	return true;
}

BOOL func_134(int iParam0) // Position - 0x3C10 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_135(iParam0, 65536) && !func_135(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_135(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_135(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_135(int iParam0, int iParam1) // Position - 0x3CBC Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_136(int iParam0) // Position - 0x3CD5 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_137() // Position - 0x3CE8 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

Hash func_138(int iParam0) // Position - 0x3CF7 Hash - 0xBA965109 ^0xDF65C4FE
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

BOOL func_139(int iParam0) // Position - 0x3FE3 Hash - 0xAE1EF8D7 ^0xAE1EF8D7
{
	if (!func_110(iParam0))
		return false;

	return func_111(iParam0, true, true);
}

void func_140(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4003 Hash - 0xD71C2102 ^0xD71C2102
{
	if (!func_110(iParam0))
		return;

	if (func_139(iParam0))
		return;

	if (!bParam1)
		bParam1 = func_31(iParam0);

	if (!bParam1)
	{
		if (func_3() != -1)
		{
		}
		else
		{
			func_197(iParam0);
		}
	}

	func_148(iParam0, 1);

	if (func_3() == -1)
		func_199(iParam0, func_198());

	func_149(iParam0, true);

	if (bParam2)
		if (!func_150(0, false, true))
			func_151(true, 6);

	return;
}

int func_141(int iParam0) // Position - 0x4082 Hash - 0xD978C06 ^0xD978C06
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 100;
	
		case 5:
		case 33:
		case 42:
			return 107;
	
		case 11:
			return 105;
	
		case 13:
		case 19:
		case 34:
			return 101;
	
		case 20:
			return 102;
	
		case 26:
			return 106;
	
		case 39:
			return 104;
	
		case 43:
			return 103;
	}

	return -1;
}

struct<2> func_142(int iParam0, Hash hParam1) // Position - 0x4121 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = hParam1;
	return num;
}

void func_143(var uParam0, var uParam1, int iParam2) // Position - 0x4137 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_144(int iParam0) // Position - 0x4147 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

BOOL func_145(int iParam0) // Position - 0x4159 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 4:
		case 8:
		case 28:
		case 31:
			return true;
	}

	return false;
}

BOOL func_146(int iParam0) // Position - 0x4189 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_200(iParam0);
}

int func_147(var uParam0) // Position - 0x4197 Hash - 0x19D4C5AC ^0x19D4C5AC
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

void func_148(int iParam0, BOOL bParam1) // Position - 0x43C5 Hash - 0x94511870 ^0x94511870
{
	if (!func_110(iParam0))
		return;

	if (func_3() != -1)
	{
		Global_36638[iParam0] = Global_36638[iParam0] || bParam1;
		return;
	}

	Global_40.f_9274[iParam0] = Global_40.f_9274[iParam0] || bParam1;
	return;
}

void func_149(int iParam0, BOOL bParam1) // Position - 0x440D Hash - 0x2762FC5A ^0x2762FC5A
{
	if (!func_110(iParam0))
		return;

	if (func_201(iParam0))
		return;

	func_148(iParam0, 2);

	if (bParam1)
		if (!func_150(0, false, true))
			func_151(true, 6);

	return;
}

BOOL func_150(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x444B Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_202())
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
		num = func_203(Global_1898164.f_1[0 /*5*/]);
	
		if (func_204(num) && func_205(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_195(Global_1898164.f_1[0 /*5*/]))
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

void func_151(BOOL bParam0, int iParam1) // Position - 0x464F Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_206(&Global_0, 8);

	if (!func_207() || func_3() != -1)
		return;

	func_206(&Global_0, 1);
	return;
}

BOOL func_152(Hash hParam0, Hash hParam1) // Position - 0x4695 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

int func_153(Hash hParam0) // Position - 0x46C6 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_168(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

float func_154(int iParam0, int iParam1) // Position - 0x46F1 Hash - 0x882BA7B3 ^0xDE52A593
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

void func_155(int iParam0, BOOL bParam1) // Position - 0x47A6 Hash - 0x9D46840B ^0xDAAD5146
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

void func_156(int iParam0, int iParam1) // Position - 0x4817 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_157(int iParam0) // Position - 0x4830 Hash - 0x3A3EA746 ^0x311B4E59
{
	PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
	return;
}

void func_158(int iParam0) // Position - 0x484B Hash - 0xD46386C8 ^0x5B34A14E
{
	int num;

	if (func_3() != -1)
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

float func_159(int iParam0, float fParam1) // Position - 0x4888 Hash - 0xDF35DF4B ^0x834D2C65
{
	return func_208(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

BOOL func_160(var uParam0, var uParam1, float fParam2) // Position - 0x489C Hash - 0xEC9C2B00 ^0xEC9C2B00
{
	if (func_3() != -1)
		return true;

	if (!func_209(0))
		return true;

	if (fParam2 <= 0f)
		return true;

	if (*uParam0)
		return !*uParam1;

	*uParam0 = 1;

	if (!Global_1347477.f_191.f_3)
	{
		func_210(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477.f_191.f_3 = 1;
	}

	if (Global_1347477.f_191 < MISC::GET_GAME_TIMER())
		Global_1347477.f_191.f_1 = 0;

	Global_1347477.f_191.f_1 = Global_1347477.f_191.f_1 + 1;

	if (Global_1347477.f_191.f_1 > 3)
	{
		if (Global_1347477.f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_26(0, true);
			Global_1347477.f_191.f_2 = MISC::GET_GAME_TIMER() + 480000;
		}
	
		func_210(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return false;
	}

	Global_1347477.f_191 = MISC::GET_GAME_TIMER() + 480000;
	*uParam1 = 0;
	return true;
}

void func_161(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4988 Hash - 0x99A7D713 ^0x99A7D713
{
	float num;

	if (func_3() == false)
	{
		func_211(0, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_212(0);

	if (bParam1)
		func_213(num);

	if (num >= 100f - 1f)
		func_214();

	if (bParam2)
		fParam0 = func_215(0, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_217(0, func_216(fParam0, -100f, 100f), bParam1);
	return;
}

void func_162(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x49FA Hash - 0x2BA41710 ^0x2BA41710
{
	float num;

	if (func_3() == false)
	{
		func_211(2, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_212(2);

	if (bParam1)
		func_213(num);

	if (bParam2)
		fParam0 = func_215(2, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_217(2, func_216(fParam0, -100f, 100f), bParam1);
	return;
}

void func_163(float fParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4A5B Hash - 0x5266CD64 ^0x5266CD64
{
	float num;

	if (func_3() == false)
	{
		func_211(1, fParam0 / 2f, bParam1, true, bParam2);
		return;
	}

	num = func_212(1);

	if (bParam1)
		func_213(num);

	if (bParam2)
		fParam0 = func_215(1, fParam0, bParam3);

	fParam0 = fParam0 + num;
	func_217(1, func_216(fParam0, -100f, 100f), bParam1);
	return;
}

float func_164(float fParam0, int iParam1) // Position - 0x4ABC Hash - 0x4EDD98F5 ^0x4EDD98F5
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

void func_165(int iParam0, float fParam1) // Position - 0x4B0E Hash - 0xE703ECFF ^0xBDAEF876
{
	Ped ped;
	char* effectName;

	ped = PLAYER::PLAYER_PED_ID();

	if (fParam1 == -1f)
		if (func_218(iParam0))
			fParam1 = 30f;
		else
			fParam1 = 30f;
	else if (fParam1 <= 0f)
		return;

	fParam1 = fParam1 * (1f + Global_40.f_11095.f_70);

	switch (iParam0)
	{
		case 0:
			effectName = func_219(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_220(-1);
			func_221(false);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
	
		case 1:
			effectName = func_219(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_222(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
	
		case 2:
			effectName = func_219(iParam0);
		
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(effectName))
				GRAPHICS::ANIMPOSTFX_PLAY(effectName);
		
			func_223(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
	
		case 18:
			func_224(1, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[1 /*2*/].f_1 = fParam1;
			break;
	
		case 19:
			func_224(0, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[0 /*2*/].f_1 = fParam1;
			break;
	
		case 20:
			func_224(2, true, true);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(ped, iParam0, fParam1, true);
			Global_40.f_11095.f_4[2 /*2*/].f_1 = fParam1;
			break;
	
		default:
			break;
	}

	return;
}

void func_166(float fParam0, BOOL bParam1) // Position - 0x4CA1 Hash - 0xDA7BE4BE ^0xDA7BE4BE
{
	float num;
	int num2;
	int num3;
	float num4;
	float num5;

	num = func_225(13);

	if (fParam0 > 10f)
		fParam0 = 10f;

	if (!func_4(17))
		return;

	if (func_226())
	{
		num2 = func_227(num);
		num = num + fParam0;
		num3 = func_227(num);
	
		if (num2 != num3)
		{
			Global_1347477.f_195 = func_89();
			func_74(&(Global_1347477.f_195), 0, 0, 1, 0, 0, 0, false);
		}
	
		func_228(&num4, &num5);
		func_229(13, func_216(num, num4, num5));
	}

	if (bParam1)
	{
		Global_40.f_11095.f_66 = Global_40.f_11095.f_66 + 1;
	
		if (5 == Global_40.f_11095.f_66)
			func_26(94, false);
	}

	return;
}

struct<2> func_167(int iParam0) // Position - 0x4D52 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

BOOL func_168(Hash hParam0, int iParam1) // Position - 0x4D62 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_169() // Position - 0x4D7C Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_170(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x4D89 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_171(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4DF3 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_172(Hash hParam0, int iParam1) // Position - 0x4E0A Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_168(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_173(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x4E29 Hash - 0x92B705D3 ^0xB783F681
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

Hash func_174(Hash hParam0) // Position - 0x4F1C Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_168(hParam0, 0))
		return 0;

	return hParam0;
}

const char* func_175(const char* sParam0, int iParam1) // Position - 0x4F35 Hash - 0x9E99F03 ^0x303C33D4
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_176(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x4F4F Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_230(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_177() // Position - 0x4FB2 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false);
}

void func_178(var uParam0, BOOL bParam1) // Position - 0x4FCE Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_60(uParam0))
		func_63(uParam0);

	return;
}

void func_179(var uParam0, int iParam1) // Position - 0x4FEE Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_180(var uParam0) // Position - 0x4FFB Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_181(var uParam0, int iParam1, BOOL bParam2) // Position - 0x5011 Hash - 0xD58BF130 ^0xD58BF130
{
	var unk;
	int randomIntInRange;
	int i;

	i = 0;

	if (bParam2)
	{
		for (i = 0; i <= iParam1 - 1; i = i + 1)
		{
			uParam0->[i] = i;
		}
	}

	i = iParam1 - 1;

	for (i = iParam1 - 1; i >= 0; i = i + -1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, i);
		unk = uParam0->[i];
		uParam0->[i] = uParam0->[randomIntInRange];
		uParam0->[randomIntInRange] = unk;
	}

	return;
}

BOOL func_182(var uParam0, int iParam1, int iParam2) // Position - 0x507E Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

BOOL func_183(int iParam0, int iParam1) // Position - 0x50B5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_184(var uParam0, int iParam1) // Position - 0x50C4 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_185(var uParam0, int iParam1) // Position - 0x50D5 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_186(Hash hParam0) // Position - 0x50EA Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

var func_187(BOOL bParam0, var uParam1, var uParam2) // Position - 0x50FA Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_188(var uParam0, int iParam1) // Position - 0x5111 Hash - 0xD05180BA ^0x39589262
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

void func_189(var uParam0, int iParam1) // Position - 0x5197 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_190(var uParam0, int iParam1) // Position - 0x51D3 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_120(*uParam0);
	num2 = func_119(*uParam0);

	if (iParam1 < 1 || iParam1 > func_125(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_191(var uParam0, int iParam1) // Position - 0x5226 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_192(var uParam0, int iParam1) // Position - 0x5261 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_193(var uParam0, int iParam1) // Position - 0x529A Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_194(Hash hParam0) // Position - 0x52D2 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_124(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_123(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_122(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_119(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_120(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_121(hParam0);

	if (num6 < 1 || num6 > func_125(num5, num4))
		return false;

	return true;
}

BOOL func_195(int iParam0) // Position - 0x53AE Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_196(int iParam0) // Position - 0x53E1 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_231(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_197(int iParam0) // Position - 0x5422 Hash - 0xC5BA52D ^0xC5BA52D
{
	switch (iParam0)
	{
		case 2:
			func_26(214, false);
			break;
	
		case 3:
			func_26(215, false);
			break;
	
		case 4:
			func_26(233, false);
			break;
	
		case 5:
			func_26(210, false);
			break;
	
		case 6:
			func_26(229, false);
			break;
	
		case 7:
			func_26(226, false);
			break;
	
		case 8:
			func_26(234, false);
			break;
	
		case 11:
			break;
	
		case 12:
			func_26(237, false);
			break;
	
		case 13:
			func_26(221, false);
			break;
	
		case 15:
			func_26(217, false);
			break;
	
		case 16:
			func_26(211, false);
			break;
	
		case 18:
			func_26(228, false);
			break;
	
		case 19:
			func_26(222, false);
			break;
	
		case 20:
			func_26(227, false);
			break;
	
		case 23:
			func_26(218, false);
			break;
	
		case 26:
			func_26(220, false);
			break;
	
		case 27:
			func_26(238, false);
			break;
	
		case 28:
			func_26(235, false);
			break;
	
		case 29:
			func_26(230, false);
			break;
	
		case 31:
			func_26(236, false);
			break;
	
		case 33:
			func_26(212, false);
			break;
	
		case 34:
			func_26(223, false);
			break;
	
		case 37:
			func_26(219, false);
			break;
	
		case 38:
			func_26(224, false);
			break;
	
		case 39:
			func_26(231, false);
			break;
	
		case 40:
			func_26(225, false);
			break;
	
		case 41:
			func_26(239, false);
			break;
	
		case 42:
			func_26(213, false);
			break;
	
		case 43:
			func_26(216, false);
			break;
	}

	return;
}

int func_198() // Position - 0x560B Hash - 0x37EC066 ^0xC9B08D38
{
	if (func_3() != -1)
		return 0;

	if (Global_40.f_39 == joaat("Player_Zero"))
		return 1;

	return 0;
}

void func_199(int iParam0, int iParam1) // Position - 0x5631 Hash - 0xE05A2D67 ^0x31D6C1E4
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_acunas_star_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_acunas_star_orchid_jn"), 0);
			break;
	
		case 2:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_alaskan_ginseng_ar"), 0);
			else
				func_232(joaat("journal_herb_alaskan_ginseng_jn"), 0);
			break;
	
		case 3:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_american_ginseng_ar"), 0);
			else
				func_232(joaat("journal_herb_american_ginseng_jn"), 0);
			break;
	
		case 4:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_bay_bolete_ar"), 0);
			else
				func_232(joaat("journal_herb_bay_bolete_jn"), 0);
			break;
	
		case 5:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_blackberry_ar"), 0);
			else
				func_232(joaat("journal_herb_blackberry_jn"), 0);
			break;
	
		case 6:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_black_currant_ar"), 0);
			else
				func_232(joaat("journal_herb_black_currant_jn"), 0);
			break;
	
		case 7:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_burdock_root_ar"), 0);
			else
				func_232(joaat("journal_herb_burdock_root_jn"), 0);
			break;
	
		case 8:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_chanterelle_ar"), 0);
			else
				func_232(joaat("journal_herb_chanterelle_jn"), 0);
			break;
	
		case 9:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_cigar_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_cigar_orchid_jn"), 0);
			break;
	
		case 10:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_clamshell_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_clamshell_orchid_jn"), 0);
			break;
	
		case 11:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_bulrush_ar"), 0);
			else
				func_232(joaat("journal_herb_bulrush_jn"), 0);
			break;
	
		case 12:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_creeping_thyme_ar"), 0);
			else
				func_232(joaat("journal_herb_creeping_thyme_jn"), 0);
			break;
	
		case 13:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_desert_sage_ar"), 0);
			else
				func_232(joaat("journal_herb_desert_sage_jn"), 0);
			break;
	
		case 14:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_dragons_mouth_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_dragons_mouth_orchid_jn"), 0);
			break;
	
		case 15:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_english_mace_ar"), 0);
			else
				func_232(joaat("journal_herb_english_mace_jn"), 0);
			break;
	
		case 16:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_huckleberry_ar"), 0);
			else
				func_232(joaat("journal_herb_huckleberry_jn"), 0);
			break;
	
		case 17:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_ghost_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_ghost_orchid_jn"), 0);
			break;
	
		case 18:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_golden_currant_ar"), 0);
			else
				func_232(joaat("journal_herb_golden_currant_jn"), 0);
			break;
	
		case 19:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_hummingbird_sage_ar"), 0);
			else
				func_232(joaat("journal_herb_hummingbird_sage_jn"), 0);
			break;
	
		case 20:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_indian_tobacco_ar"), 0);
			else
				func_232(joaat("journal_herb_indian_tobacco_jn"), 0);
			break;
	
		case 21:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_lady_of_the_night_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_lady_of_the_night_orchid_jn"), 0);
			break;
	
		case 22:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_lady_slipper_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_lady_slipper_orchid_jn"), 0);
			break;
	
		case 23:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_milkweed_ar"), 0);
			else
				func_232(joaat("journal_herb_milkweed_jn"), 0);
			break;
	
		case 24:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_moccasin_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_moccasin_orchid_jn"), 0);
			break;
	
		case 25:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_night_scented_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_night_scented_orchid_jn"), 0);
			break;
	
		case 26:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_oleander_sage_ar"), 0);
			else
				func_232(joaat("journal_herb_oleander_sage_jn"), 0);
			break;
	
		case 27:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_oregano_ar"), 0);
			else
				func_232(joaat("journal_herb_oregano_jn"), 0);
			break;
	
		case 28:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_parasol_ar"), 0);
			else
				func_232(joaat("journal_herb_parasol_jn"), 0);
			break;
	
		case 29:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_prairie_poppy_ar"), 0);
			else
				func_232(joaat("journal_herb_prairie_poppy_jn"), 0);
			break;
	
		case 30:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_queens_orchids_ar"), 0);
			else
				func_232(joaat("journal_herb_queens_orchids_jn"), 0);
			break;
	
		case 31:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_ramshead_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_ramshead_orchid_jn"), 0);
			break;
	
		case 32:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_rat_tail_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_rat_tail_orchid_jn"), 0);
			break;
	
		case 33:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_raspberry_ar"), 0);
			else
				func_232(joaat("journal_herb_raspberry_jn"), 0);
			break;
	
		case 34:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_red_sage_ar"), 0);
			else
				func_232(joaat("journal_herb_red_sage_jn"), 0);
			break;
	
		case 35:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_sparrows_egg_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_sparrows_egg_orchid_jn"), 0);
			break;
	
		case 36:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_spider_orchid_ar"), 0);
			else
				func_232(joaat("journal_herb_spider_orchid_jn"), 0);
			break;
	
		case 37:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_vanilla_flower_ar"), 0);
			else
				func_232(joaat("journal_herb_vanilla_flower_jn"), 0);
			break;
	
		case 38:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_violet_snowdrop_ar"), 0);
			else
				func_232(joaat("journal_herb_violet_snowdrop_jn"), 0);
			break;
	
		case 39:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_carrot_ar"), 0);
			else
				func_232(joaat("journal_herb_carrot_jn"), 0);
			break;
	
		case 40:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_feverfew_ar"), 0);
			else
				func_232(joaat("journal_herb_feverfew_jn"), 0);
			break;
	
		case 41:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_mint_ar"), 0);
			else
				func_232(joaat("journal_herb_mint_jn"), 0);
			break;
	
		case 42:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_winterberry_ar"), 0);
			else
				func_232(joaat("journal_herb_winterberry_jn"), 0);
			break;
	
		case 43:
			if (iParam1 == 1)
				func_232(joaat("journal_herb_yarrow_ar"), 0);
			else
				func_232(joaat("journal_herb_yarrow_jn"), 0);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_200(int iParam0) // Position - 0x5CA6 Hash - 0xA059D395 ^0xE600C05
{
	return func_183(Global_1935496.f_27, iParam0);
}

BOOL func_201(int iParam0) // Position - 0x5CBA Hash - 0xE139661B ^0xE139661B
{
	if (!func_110(iParam0))
		return false;

	return func_111(iParam0, 2, true);
}

BOOL func_202() // Position - 0x5CD8 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_203(int iParam0) // Position - 0x5D2B Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_195(iParam0))
		return -1;

	return func_234(func_233(iParam0));
}

BOOL func_204(int iParam0) // Position - 0x5D4B Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_205(int iParam0, int iParam1) // Position - 0x5D61 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_206(Hash hParam0, int iParam1) // Position - 0x5D70 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_207() // Position - 0x5D83 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

float func_208(float fParam0, float fParam1) // Position - 0x5DA2 Hash - 0x2BA4B8ED ^0x2BA4B8ED
{
	if (fParam1 != 0f)
		return (fParam1 / 100f) * 200f;

	return (fParam0 / 8f) * 200f;
}

BOOL func_209(int iParam0) // Position - 0x5DD0 Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_235())
		return false;

	return func_85(Global_1347702[58 /*49*/].f_15, true);
}

BOOL func_210(Ped pedParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x5DF2 Hash - 0x281BDD5E ^0x8899ECCD
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
	return func_236(pedParam0, &str);
}

void func_211(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5E39 Hash - 0x6775E582 ^0x6775E582
{
	if (bParam4)
		fParam1 = func_215(iParam0, fParam1, true);

	func_238(iParam0, func_237(iParam0, 2) + fParam1, bParam2, bParam3, true, 2);
	return;
}

float func_212(int iParam0) // Position - 0x5E68 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

void func_213(float fParam0) // Position - 0x5E7A Hash - 0x92695771 ^0x7311EE8F
{
	if (fParam0 >= 100f - 1f)
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	else
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	return;
}

void func_214() // Position - 0x5EAE Hash - 0xB36799A8 ^0x76458B55
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
	return;
}

float func_215(int iParam0, float fParam1, BOOL bParam2) // Position - 0x5EDB Hash - 0xFB55A421 ^0xFB55A421
{
	Hash hash;
	int num;

	hash = func_89();
	func_239(&hash, 0, 0, 0, 1, 0, 0);
	num = func_240(iParam0, 2);

	if (func_127(hash, func_241(iParam0, 2), true))
	{
		func_242(iParam0, 0, 2);
		num = 0;
	}

	if (num >= 2)
	{
		func_26(88, bParam2);
		return 0f;
	}

	func_243(iParam0, func_89(), 2);
	func_242(iParam0, num + 1, 2);
	return fParam1;
}

float func_216(float fParam0, float fParam1, float fParam2) // Position - 0x5F44 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_217(int iParam0, float fParam1, BOOL bParam2) // Position - 0x5F6B Hash - 0x8FDCEA1F ^0x46BCD39D
{
	int value;
	char* variableName;

	if (func_3() != -1)
		return;

	if (!func_4(15))
		return;

	Global_40.f_11095[iParam0] = fParam1;
	value = func_244(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_245(iParam0), value);
	func_247(func_246(iParam0), 100f * (BUILTIN::TO_FLOAT(value) / 100f), false);

	if (fParam1 <= func_248(15) && iParam0 == 1 && PED::IS_PED_ON_FOOT(Global_35) && !PED::IS_PED_SWIMMING(Global_35))
		func_26(84, true);

	if (fParam1 <= -99.999f)
		func_26(func_249(iParam0), true);

	variableName = func_250(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(variableName))
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, variableName, BUILTIN::TO_FLOAT(value), -1);

	return;
}

BOOL func_218(int iParam0) // Position - 0x6044 Hash - 0x3FEE6090 ^0x3FEE6090
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

char* func_219(int iParam0) // Position - 0x6073 Hash - 0x21CE226B ^0xCC5083F3
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

void func_220(int iParam0) // Position - 0x60AE Hash - 0x265AFF44 ^0xECA4C539
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(ped);

	num = func_251(2);
	func_252(BUILTIN::TO_FLOAT(iParam0 * num), 0);
	return;
}

void func_221(BOOL bParam0) // Position - 0x60EB Hash - 0x9114E741 ^0x8984E174
{
	if (func_3() != -1)
		return;

	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
		return;

	if (Global_40.f_11095.f_43 == bParam0)
		return;

	if (bParam0)
	{
		func_26(89, true);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_26(90, true);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}

	func_253(1, bParam0, true);
	func_254();
	Global_40.f_11095.f_43 = bParam0;
	return;
}

void func_222(int iParam0) // Position - 0x6159 Hash - 0x89FD216F ^0xA46E837F
{
	Ped ped;
	int num;

	ped = PLAYER::PLAYER_PED_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PED::_0xFC3B580C4380B5B7(ped);

	num = func_255(2);
	func_256(BUILTIN::TO_FLOAT(iParam0 * num));
	return;
}

void func_223(int iParam0) // Position - 0x6195 Hash - 0x265AFF44 ^0x6BC758B3
{
	Player player;
	int num;

	player = PLAYER::PLAYER_ID();

	if (iParam0 == 0)
		return;
	else if (iParam0 == -1)
		iParam0 = PLAYER::_0x57D9991DC1334151(player);

	num = func_257(2);
	func_258(BUILTIN::TO_FLOAT(iParam0 * num), false);
	return;
}

void func_224(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x61D2 Hash - 0x5C29635D ^0x5C29635D
{
	func_238(iParam0, 100f, bParam1, bParam2, true, 2);
	return;
}

float func_225(int iParam0) // Position - 0x61EC Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

BOOL func_226() // Position - 0x6200 Hash - 0xF6B2CBD4 ^0x78757C46
{
	if (func_3() != -1)
		return false;

	if (Global_1347477.f_200)
		return false;

	if (Global_1347477.f_195 == -15)
		return true;

	return func_75(Global_1347477.f_195, false);
}

int func_227(float fParam0) // Position - 0x623C Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

void func_228(var uParam0, var uParam1) // Position - 0x6257 Hash - 0x9E01892C ^0x3EC1D72C
{
	if (!func_207())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}

	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
	return;
}

void func_229(int iParam0, float fParam1) // Position - 0x6290 Hash - 0x45CA0D9B ^0xC6D1BFFB
{
	int num;
	BOOL flag;
	char* str;

	Global_40.f_11095.f_11[iParam0] = fParam1;

	if (iParam0 == 12)
	{
		flag = fParam1 != 0f;
		str = fParam1 < 0f ? "rpg_cold" : "rpg_hot";
		func_259(1, flag, true, str);
		func_260(!flag, fParam1 < 0f, flag);
		num = func_244(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
		func_254();
	}
	else if (iParam0 == 10)
	{
		num = func_244(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num);
	}
	else if (iParam0 == 16)
	{
		num = func_244(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, num * 100);
	}
	else if (iParam0 == 13)
	{
	}

	return;
}

void func_230(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x6366 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

int func_231(int iParam0) // Position - 0x6397 Hash - 0x6EC15CF9 ^0xE613EBE0
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

void func_232(int iParam0, int iParam1) // Position - 0x6418 Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_261(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_262(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

BOOL func_233(int iParam0) // Position - 0x6470 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_234(BOOL bParam0) // Position - 0x64AE Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_235() // Position - 0x64C1 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_3() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_236(Ped pedParam0, Any* panParam1) // Position - 0x64E6 Hash - 0x2ACCF512 ^0x38357878
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, panParam1);
}

float func_237(int iParam0, int iParam1) // Position - 0x64F6 Hash - 0xB4BF1B35 ^0x79981B44
{
	if (iParam1 == 2)
		iParam1 = func_263();

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

int func_238(int iParam0, float fParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x6541 Hash - 0xB3CE93F ^0x10229F0F
{
	Ped ped;

	if (iParam5 == 2)
		iParam5 = func_263();

	ped = PLAYER::PLAYER_PED_ID();

	if (bParam2)
		if (fParam1 >= 100f)
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		else
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);

	if (bParam3)
		func_264(iParam0, 7000, iParam5);

	if (fParam1 > 100f)
		fParam1 = 100f;
	else if (fParam1 < 0f)
		fParam1 = 0f;

	func_265(ped, iParam0, fParam1);
	func_266(iParam0, fParam1, bParam4, iParam5);

	if (!ENTITY::IS_ENTITY_DEAD(ped))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(ped, func_245(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x65F7 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;

	num = func_119(*uParam0);
	i = func_120(*uParam0);
	j = func_121(*uParam0);
	k = func_122(*uParam0);
	l = func_123(*uParam0);
	m = func_124(*uParam0);

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
	
		num3 = func_125(num2, num);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_126(uParam0, m, l, k, j, i, num);
	return;
}

int func_240(int iParam0, int iParam1) // Position - 0x676A Hash - 0xAAC15258 ^0xF098E005
{
	if (iParam1 == 2)
		iParam1 = func_263();

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

Hash func_241(int iParam0, int iParam1) // Position - 0x67B9 Hash - 0xAAC15258 ^0x5B988360
{
	if (iParam1 == 2)
		iParam1 = func_263();

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

void func_242(int iParam0, int iParam1, int iParam2) // Position - 0x680A Hash - 0x8F2CCCF2 ^0x7EED1EE3
{
	if (iParam2 == 2)
		iParam2 = func_263();

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

void func_243(int iParam0, Hash hParam1, int iParam2) // Position - 0x685F Hash - 0x8F2CCCF2 ^0xDB456F85
{
	if (iParam2 == 2)
		iParam2 = func_263();

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

int func_244(int iParam0) // Position - 0x68B4 Hash - 0xC1A484EF ^0xB46B3CEC
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0 + 100) / 200f;
	return BUILTIN::CEIL(100f * num);
}

int func_245(int iParam0) // Position - 0x68D8 Hash - 0x26AB94C2 ^0x26AB94C2
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

int func_246(int iParam0) // Position - 0x6907 Hash - 0x5163992 ^0x5163992
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

void func_247(int iParam0, float fParam1, BOOL bParam2) // Position - 0x6936 Hash - 0x67180CD8 ^0x6965D1E9
{
	char* str;

	str = func_267(iParam0, 0, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
	return;
}

float func_248(int iParam0) // Position - 0x6986 Hash - 0x56878B22 ^0xF716EA88
{
	float num;

	num = BUILTIN::TO_FLOAT(iParam0) / 100f;
	return (num * 200f) - 100f;
}

int func_249(int iParam0) // Position - 0x69AA Hash - 0x68BC9945 ^0x68BC9945
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

char* func_250(int iParam0) // Position - 0x69DC Hash - 0x21CE226B ^0xC82BE976
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

int func_251(int iParam0) // Position - 0x6A17 Hash - 0x7401DE8A ^0xC8FAA995
{
	if (iParam0 == 2)
		iParam0 = func_263();

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

void func_252(float fParam0, Ped pedParam1) // Position - 0x6A56 Hash - 0x2062487E ^0xADB8AE45
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

void func_253(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6A98 Hash - 0x15F4D03F ^0x38F95A43
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_5, bParam2);
	return;
}

void func_254() // Position - 0x6AC8 Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_268();
	func_269();
	func_270();
	return;
}

int func_255(int iParam0) // Position - 0x6ADF Hash - 0x4B3CC2BE ^0x5B1CA90F
{
	if (iParam0 == 2)
		iParam0 = func_263();

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

void func_256(float fParam0) // Position - 0x6B22 Hash - 0xEBF0A2AB ^0x54370C29
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

int func_257(int iParam0) // Position - 0x6B5C Hash - 0x4B3CC2BE ^0x6D5E7BC6
{
	if (iParam0 == 2)
		iParam0 = func_263();

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

void func_258(float fParam0, BOOL bParam1) // Position - 0x6B9F Hash - 0x1FE7F29A ^0xE2FCD967
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

void func_259(int iParam0, BOOL bParam1, BOOL bParam2, char* sParam3) // Position - 0x6C33 Hash - 0x3C2F3887 ^0xD0B646ED
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
	return;
}

void func_260(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6C77 Hash - 0x620F816C ^0x10DFE187
{
	char* str;

	str = func_267(0, 1, bParam0, bParam1);
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

void func_261(int iParam0, int iParam1) // Position - 0x6D6F Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_271(true);

	return;
}

void func_262(int iParam0) // Position - 0x6D88 Hash - 0x23AE6B73 ^0x23AE6B73
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
	
		func_261(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_271(true);

	return;
}

int func_263() // Position - 0x6DF6 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_272())
		return 1;

	return 0;
}

void func_264(int iParam0, int iParam1, int iParam2) // Position - 0x6E0A Hash - 0x22949E32 ^0xF7641F46
{
	if (iParam2 == 2)
		iParam2 = func_263();

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

void func_265(Ped pedParam0, int iParam1, float fParam2) // Position - 0x6E5B Hash - 0x10CC1594 ^0xA098FFFF
{
	char* str;

	str = func_250(iParam1);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str))
		PED::_SET_PED_BLACKBOARD_FLOAT(pedParam0, func_273(iParam1), fParam2, -1);

	return;
}

void func_266(int iParam0, float fParam1, BOOL bParam2, int iParam3) // Position - 0x6E87 Hash - 0x31C6C7F2 ^0x7DF2B018
{
	int gameTimer;

	if (iParam3 == 2)
		iParam3 = func_263();

	gameTimer = MISC::GET_GAME_TIMER();
	func_274(iParam0, fParam1, iParam3);

	if (bParam2)
		func_275(iParam0, gameTimer, iParam3);

	return;
}

char* func_267(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6EBA Hash - 0xC24B5846 ^0x6E308F26
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

float func_268() // Position - 0x6F63 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_276())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_212(2);

	if (Global_1347477.f_119)
		return func_212(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_277();
	num3 = func_278();
	num4 = func_279();
	num5 = func_280();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_281());
	num8 = func_212(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_282(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_283(3, num9, num9 > 100f);
	return func_216(num8, -100f, 100f);
}

float func_269() // Position - 0x708C Hash - 0x951B1CCC ^0x7B312694
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

	if (func_276())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_212(1);

	if (Global_1347477.f_119)
		return func_212(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_277();
	num3 = func_278();
	num4 = func_279();
	num5 = func_280();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_281());
	num8 = func_212(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_282(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_283(2, num9, num9 > 100f);
	return func_216(num8, -100f, 100f);
}

float func_270() // Position - 0x71B5 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_276())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_212(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_284())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_285())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_212(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_277();
	num3 = func_278();
	num4 = func_279();
	num5 = func_280();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_281());
	num8 = func_212(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_282(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_283(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_212(0);

	return func_216(num8, -100f, 100f);
}

void func_271(BOOL bParam0) // Position - 0x735C Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_286(&(Global_40.f_12019.f_42), 1);
	else
		func_287(&(Global_40.f_12019.f_42), 1);

	return;
}

BOOL func_272() // Position - 0x7386 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1954819.f_866;
}

char* func_273(int iParam0) // Position - 0x7395 Hash - 0x21CE226B ^0x21567B2F
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

void func_274(int iParam0, float fParam1, int iParam2) // Position - 0x73D0 Hash - 0x22949E32 ^0x7BF032F1
{
	if (iParam2 == 2)
		iParam2 = func_263();

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

void func_275(int iParam0, int iParam1, int iParam2) // Position - 0x7421 Hash - 0x8F2CCCF2 ^0x17FB84D
{
	if (iParam2 == 2)
		iParam2 = func_263();

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

BOOL func_276() // Position - 0x7476 Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_277() // Position - 0x7492 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_225(13);
	num2 = func_227(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_278() // Position - 0x74D5 Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_279() // Position - 0x74F0 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_288())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_280() // Position - 0x750F Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_281() // Position - 0x7551 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_282(int iParam0, int iParam1, BOOL bParam2) // Position - 0x755F Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_267(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_283(int iParam0, float fParam1, BOOL bParam2) // Position - 0x75AB Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_267(iParam0, 2, false, false);
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

BOOL func_284() // Position - 0x76F1 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_225(12) <= -99f;
}

BOOL func_285() // Position - 0x7705 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_225(12) >= 99f;
}

void func_286(BOOL bParam0, int iParam1) // Position - 0x7719 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_287(BOOL bParam0, int iParam1) // Position - 0x772A Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

BOOL func_288() // Position - 0x773F Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

