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
	var uLocal_28 = 1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = -1;
	var uLocal_36 = -1;
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
	var uLocal_57 = 8;
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
	var uLocal_68 = 8;
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
	var uScriptParam_0 = -1;
#endregion

void main() // Position - 0x0 Hash - 0xFE3B3E4 ^0xCF1BB8A0
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	while (func_1(&uLocal_19))
	{
		func_2(&uLocal_19, &uScriptParam_0);
		BUILTIN::WAIT(0);
	}

	func_3(&uLocal_19, &uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1(var uParam0) // Position - 0x37 Hash - 0x89AC8697 ^0x2ECCB1D
{
	var unk;

	if (func_4(false, false))
		return false;

	unk = -1;
	unk.f_1 = -1;

	if (func_5(unk, 0, 0))
		return false;

	if (uParam0->f_2.f_5 & 1 != 0)
		return false;

	return true;
}

void func_2(var uParam0, var uParam1) // Position - 0x7B Hash - 0xC3209B3E ^0xC3209B3E
{
	func_6(uParam0);

	switch (*uParam0)
	{
		case 0:
			func_7(uParam0, uParam1);
			break;
	
		case 1:
			func_8(uParam0, uParam1);
			break;
	
		case 2:
			func_9(uParam0, uParam1);
			break;
	
		case 3:
			func_10(uParam0, uParam1);
			break;
	
		default:
			break;
	}

	return;
}

void func_3(var uParam0, var uParam1) // Position - 0xD9 Hash - 0x78FABA75 ^0x9A99B50F
{
	func_11(uParam0, uParam1);
	func_12(&(uParam0->f_37));
	func_13(&(uParam0->f_37));
	func_14(&(uParam0->f_38));
	func_15(*uParam1, &(uParam0->f_49));
	func_16();
	return;
}

BOOL func_4(BOOL bParam0, BOOL bParam1) // Position - 0x111 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_5(var uParam0, var uParam1, int iParam2, int iParam3) // Position - 0x1F1 Hash - 0x72145F00 ^0xE568DB61
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}

	if (func_17(Global_1051268) && !func_18(Global_1051268, uParam0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}

	if (iParam2 != 0 && func_19(iParam2))
		return true;

	if (iParam3 != 0 && func_20(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return true;
	}

	if (Global_263042[Global_1295666 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return true;
	}

	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return true;
	}

	if (func_21())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}

	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_17(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return true;
		}
	}

	if (*Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(*Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return true;
	}

	Global_1072759.f_28307 = 0;
	return false;
}

void func_6(var uParam0) // Position - 0x31A Hash - 0x9B98F832 ^0x5BB55CF9
{
	int gameTimer;
	float num;

	if (uParam0->f_2.f_5 & 1073741824 == 0)
		return;

	if (uParam0->f_2.f_5 & 1 != 0)
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	num = func_22(Global_34, uParam0->f_2);

	if (uParam0->f_2.f_5 & 2 != 0)
	{
		if (num <= uParam0->f_2.f_3 + 15f)
			uParam0->f_2.f_5 = uParam0->f_2.f_5 - uParam0->f_2.f_5 & 2;
		else if (gameTimer - uParam0->f_2.f_4 >= 5000)
			uParam0->f_2.f_5 = uParam0->f_2.f_5 | 1;
	}
	else if (num > uParam0->f_2.f_3 + 15f)
	{
		uParam0->f_2.f_4 = gameTimer;
		uParam0->f_2.f_5 = uParam0->f_2.f_5 | 2;
	}

	return;
}

void func_7(var uParam0, var uParam1) // Position - 0x3D9 Hash - 0xE0DABDF8 ^0x40D0D3F4
{
	switch (uParam0->f_1)
	{
		case 0:
			if (!func_24(func_23(*uParam1), &(uParam0->f_2)))
				return;
		
			func_25(uParam0, uParam1, 1);
			break;
	
		case 1:
			if (!func_26(*uParam1, &(uParam0->f_49)))
				return;
		
			func_25(uParam0, uParam1, 2);
			break;
	
		case 2:
			if (!func_28(func_27(*uParam1), &(uParam0->f_14)))
				return;
		
			func_25(uParam0, uParam1, 3);
			break;
	
		case 3:
			uParam0->f_38.f_10 = func_29(*uParam1);
			func_25(uParam0, uParam1, 4);
			break;
	
		case 4:
			func_30(uParam0, uParam1, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_8(var uParam0, var uParam1) // Position - 0x493 Hash - 0x5EB2FED5 ^0x5EB2FED5
{
	func_30(uParam0, uParam1, 2);
	return;
}

void func_9(var uParam0, var uParam1) // Position - 0x4A4 Hash - 0x3E108339 ^0x160E345C
{
	if (!func_31(*uParam1, &(uParam0->f_49)))
		return;

	func_30(uParam0, uParam1, 3);
	return;
}

void func_10(var uParam0, var uParam1) // Position - 0x4C7 Hash - 0x4D70DD59 ^0x483FE6A8
{
	int num;

	func_32(&(uParam0->f_33));
	func_33(*uParam1, &(uParam0->f_38));
	func_34(uParam0, uParam1);

	if (func_35(&(uParam0->f_16), &num))
		if (num == joaat("transformation"))
			func_36(MISC::GET_GAME_TIMER());

	return;
}

int func_11(var uParam0, var uParam1) // Position - 0x509 Hash - 0xB9B33919 ^0x93C2D97D
{
	int i;
	int num;

	for (i = 0; i <= 0; i = i + 1)
	{
		num = func_37(i, 1);
		func_38(uParam0, uParam1, num);
	}

	uParam0->f_8.f_3 = uParam0->f_8.f_3 - uParam0->f_8.f_3 & 1;
	return 1;
}

void func_12(var uParam0) // Position - 0x54F Hash - 0xF0C4B67B ^0x68DFC55F
{
	if (!func_39(uParam0, 1))
		return;

	if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
		return;

	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	func_40(uParam0, 1);
	return;
}

void func_13(var uParam0) // Position - 0x584 Hash - 0x8C5B9997 ^0x38D55116
{
	if (!func_39(uParam0, 2))
		return;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_40(uParam0, 2);
	return;
}

void func_14(var uParam0) // Position - 0x5AC Hash - 0x78864A5A ^0x6C427E65
{
	int i;

	for (i = 0; i <= uParam0->f_10 - 1; i = i + 1)
	{
		func_41(uParam0, i);
	}

	return;
}

void func_15(int iParam0, var uParam1) // Position - 0x5D3 Hash - 0x3C486D1 ^0x54B3B3FE
{
	int i;

	for (i = 0; i <= uParam1->f_17 - 1; i = i + 1)
	{
		func_42(iParam0, uParam1, i);
	}

	return;
}

void func_16() // Position - 0x5FC Hash - 0x4CF2FAEE ^0xB12FCD58
{
	AUDIO::_RELEASE_SOUNDSET("Animal_Control_Screen_Overlay_Sounds");
	return;
}

BOOL func_17(var uParam0, var uParam1) // Position - 0x60A Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_43(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_44(uParam0))
		return false;

	return true;
}

BOOL func_18(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x63E Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_19(int iParam0) // Position - 0x659 Hash - 0x863407EE ^0x278607D
{
	if (Global_1572887.f_14 == -1)
		return false;

	return Global_1207339.f_1 && iParam0 != false;
}

BOOL func_20(int iParam0, int iParam1) // Position - 0x67A Hash - 0xA39C8374 ^0xEF47748F
{
	if (!Global_1072759.f_3)
		return false;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
		return false;

	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	return Global_1206954[iParam1 /*12*/] && iParam0 != false;
}

BOOL func_21() // Position - 0x6B6 Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_5)
		return true;

	if (Global_2883584)
		return true;

	if (Global_1048577)
		return true;

	if (!func_17(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return true;

	return false;
}

float func_22(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x70E Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_23(int iParam0) // Position - 0x72C Hash - 0x1B04F1B9 ^0xEBF52E04
{
	return Global_1300387.f_1[iParam0 /*10*/].f_4;
}

BOOL func_24(int iParam0, var uParam1) // Position - 0x740 Hash - 0xB7B5578F ^0xB7B5578F
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 14, 0, 0, 1))
		return false;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return false;

	*uParam1 = { func_47(unk) };
	uParam1->f_3 = func_48(unk);
	uParam1->f_5 = uParam1->f_5 | 1073741824;
	return true;
}

void func_25(var uParam0, var uParam1, int iParam2) // Position - 0x7B7 Hash - 0x517D489E ^0x25DDC7EB
{
	uParam0->f_1 = iParam2;
	return;
}

BOOL func_26(int iParam0, var uParam1) // Position - 0x7C5 Hash - 0x583D0114 ^0x920EBBF
{
	int i;
	Hash model;

	uParam1->f_17 = func_49(iParam0);

	for (i = 0; i <= uParam1->f_17 - 1; i = i + 1)
	{
		model = func_50(iParam0, i);
		STREAMING::REQUEST_MODEL(model, false);
	
		if (model != 0)
			func_51(uParam1, i, 1);
	}

	return true;
}

int func_27(int iParam0) // Position - 0x80F Hash - 0x1B04F1B9 ^0x358F17ED
{
	return Global_1300387.f_1[iParam0 /*10*/].f_7;
}

BOOL func_28(int iParam0, var uParam1) // Position - 0x823 Hash - 0x6463205F ^0x6463205F
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 37, 0, 0, 1))
		return false;

	if (!func_46(&unk, 38, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 45, 0, 0, 1))
		return false;

	*uParam1 = func_52(unk);
	uParam1->f_1 = func_53(unk);
	return true;
}

int func_29(int iParam0) // Position - 0x89E Hash - 0xB5D2D120 ^0xB5D2D120
{
	var unk;

	if (!func_45(&unk))
		return 0;

	if (!func_46(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 14, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 15, iParam0, 0, 1))
		return 0;

	if (!func_46(&unk, 48, 0, 0, 0))
		return 0;

	return func_54(&unk, 9);
}

void func_30(var uParam0, var uParam1, int iParam2) // Position - 0x909 Hash - 0xD829C7CA ^0xD829C7CA
{
	*uParam0 = iParam2;
	return;
}

BOOL func_31(int iParam0, var uParam1) // Position - 0x916 Hash - 0xDA8A8770 ^0x910ED103
{
	int i;
	int num;

	if (uParam1->f_17 <= 0)
		return true;

	for (i = 0; i <= uParam1->f_17 - 1; i = i + 1)
	{
		num = func_55(iParam0, i, uParam1);
	
		if (num == 2)
			break;
	}

	return uParam1->f_17 == uParam1->f_18;
}

void func_32(var uParam0) // Position - 0x95F Hash - 0x69E92BA2 ^0x70D27323
{
	if (uParam0->f_3 == 0)
		func_56(uParam0);
	else
		func_57(uParam0);

	return;
}

void func_33(int iParam0, var uParam1) // Position - 0x97E Hash - 0x98E3F4F4 ^0x1BE15084
{
	int i;

	if (uParam1->f_10 == uParam1->f_9)
		return;

	for (i = 0; i <= uParam1->f_10 - 1; i = i + 1)
	{
		func_58(iParam0, uParam1, i);
	}

	return;
}

void func_34(var uParam0, var uParam1) // Position - 0x9B5 Hash - 0xF10C1916 ^0x769877E3
{
	int num;
	int num2;

	switch (uParam0->f_8)
	{
		case 0:
			if (func_59(uParam0, uParam1))
				func_60(uParam0, uParam1, 1);
			break;
	
		case 1:
			num2 = func_61(uParam0);
			num = func_62(uParam0, uParam1, num2);
		
			if (func_63(num))
				func_64(uParam0, joaat("Inspect"));
			else
				func_65(uParam0, joaat("Inspect"));
		
			if (func_66(num))
			{
				func_67(uParam0, joaat("Inspect"));
			}
			else
			{
				if (num == 16)
				{
					if (uParam0->f_8.f_3 & 4 != 0)
					{
					}
					else
					{
						func_68(&(uParam0->f_33), 64);
					}
				}
			
				func_69(uParam0, joaat("Inspect"));
			}
		
			if (func_70(uParam0, joaat("Inspect")))
			{
				func_60(uParam0, uParam1, 2);
				func_71();
				func_72(&(uParam0->f_37));
				func_73(&(uParam0->f_37));
				func_74(1);
				uParam0->f_8.f_3 = uParam0->f_8.f_3 | 2;
				uParam0->f_8.f_4 = MISC::GET_GAME_TIMER();
				func_75(&(uParam0->f_33), 64);
				func_76(&(uParam0->f_33), 64);
			}
			break;
	
		case 2:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
			func_77(uParam0, joaat("Inspect"));
		
			if (func_78(uParam0->f_14, 1, uParam0->f_14.f_1, false))
			{
				func_79();
				func_80(uParam0->f_14, uParam0->f_14.f_1, 1, 0);
				func_74(2);
				uParam0->f_8.f_5 = MISC::GET_GAME_TIMER();
				func_60(uParam0, uParam1, 3);
			}
			else
			{
				func_82(&(uParam0->f_16), -1813292386, func_23(*uParam1), func_81(*uParam1));
				func_83(1);
				func_60(uParam0, uParam1, 7);
			}
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_8.f_5 < 200)
				break;
		
			if (!func_84())
				break;
		
			func_60(uParam0, uParam1, 4);
			break;
	
		case 4:
			func_82(&(uParam0->f_16), joaat("transformation"), func_23(*uParam1), func_81(*uParam1));
			func_60(uParam0, uParam1, 5);
			break;
	
		case 5:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
			uParam0->f_8.f_3 = uParam0->f_8.f_3 - uParam0->f_8.f_3 & 4;
		
			if (uParam0->f_16 != -1)
				func_60(uParam0, uParam1, 6);
			break;
	
		case 6:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
		
			if (uParam0->f_16 == -1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())))
					func_85();
			
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())))
					func_86();
			
				func_60(uParam0, uParam1, 9);
			}
			break;
	
		case 7:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
			uParam0->f_8.f_3 = uParam0->f_8.f_3 | 4;
		
			if (uParam0->f_16 != -1)
			{
				func_68(&(uParam0->f_33), 1);
				func_60(uParam0, uParam1, 8);
			}
			break;
	
		case 8:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
		
			if (uParam0->f_16 == -1)
			{
				func_76(&(uParam0->f_33), 1);
				func_60(uParam0, uParam1, 11);
			}
			break;
	
		case 9:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
			func_87(*uParam1);
			func_60(uParam0, uParam1, 10);
			break;
	
		case 10:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
		
			if (func_88())
				func_60(uParam0, uParam1, 11);
			break;
	
		case 11:
			func_65(uParam0, joaat("Inspect"));
			func_69(uParam0, joaat("Inspect"));
			func_12(&(uParam0->f_37));
			func_13(&(uParam0->f_37));
			func_60(uParam0, uParam1, 1);
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_35(Any* panParam0, var uParam1) // Position - 0xD6F Hash - 0x9A57043D ^0xC61948DB
{
	BOOL flag;
	BOOL num;

	flag = true;
	*uParam1 = panParam0->f_5;

	while (flag)
	{
		flag = false;
	
		switch (func_89(panParam0))
		{
			case -1:
				break;
		
			case 0:
				func_90(panParam0, 1);
				break;
		
			case 1:
				func_91(panParam0);
				break;
		
			case 2:
				func_92(panParam0);
				break;
		
			case 3:
				func_93(panParam0);
				break;
		
			case 4:
				func_94(panParam0);
				break;
		
			case 5:
				func_95(panParam0);
				break;
		
			case 6:
				func_96(panParam0);
				break;
		
			case 7:
				func_97(panParam0);
				break;
		
			case 8:
				func_98(panParam0);
				break;
		
			case 9:
				func_99(panParam0);
				break;
		
			case 10:
				func_100(panParam0);
				num = 1;
				func_100(panParam0);
				break;
		
			default:
				break;
		}
	
		flag = func_101(panParam0);
	}

	return num;
}

void func_36(int iParam0) // Position - 0xE5D Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1300387.f_295 = iParam0;
	return;
}

int func_37(int iParam0, int iParam1) // Position - 0xE6E Hash - 0x6285C675 ^0x9E3BC5CC
{
	switch (iParam0)
	{
		case 0:
			return joaat("Inspect");
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_38(var uParam0, var uParam1, int iParam2) // Position - 0xE9B Hash - 0x61C0DF5A ^0xD5BF9239
{
	int num;

	num = func_102(iParam2, 1);

	if (!func_103(uParam0->f_8.f_1[num]))
		return false;

	func_104(&uParam0->f_8.f_1[num], true, true);
	return true;
}

BOOL func_39(var uParam0, int iParam1) // Position - 0xED3 Hash - 0xE46677C2 ^0xE46677C2
{
	return *uParam0 && iParam1 != false;
}

void func_40(var uParam0, int iParam1) // Position - 0xEE3 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_41(var uParam0, int iParam1) // Position - 0xEF8 Hash - 0x26E1F603 ^0xB0AA27D4
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->[iParam1]))
		return;

	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->[iParam1]);
	PLAYER::_0xDC5E09D012D759C4(uParam0->[iParam1], uParam0->[iParam1], 0);
	uParam0->f_9 = uParam0->f_9 - 1;
	uParam0->[iParam1] = 0;
	return;
}

void func_42(int iParam0, var uParam1, int iParam2) // Position - 0xF41 Hash - 0xEBAA9868 ^0xC13B154C
{
	Hash entityModel;

	entityModel = 0;

	switch (uParam1->[iParam2 /*2*/].f_1)
	{
		case 0:
			break;
	
		case 1:
		case 2:
			entityModel = func_50(iParam0, iParam2);
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->[iParam2 /*2*/]))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(uParam1->[iParam2 /*2*/]);
				OBJECT::DELETE_OBJECT(&uParam1->[iParam2 /*2*/]);
				uParam1->[iParam2 /*2*/] = 0;
				uParam1->f_18 = uParam1->f_18 - 1;
			}
			else
			{
				entityModel = func_50(iParam0, iParam2);
			}
			break;
	
		default:
			break;
	}

	if (entityModel != 0)
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(entityModel);

	func_51(uParam1, iParam2, 0);
	return;
}

BOOL func_43(int iParam0) // Position - 0xFDE Hash - 0x5000025C ^0x5000025C
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

int func_44(int iParam0) // Position - 0x101D Hash - 0xE34A477A ^0xE34A477A
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

BOOL func_45(Any* panParam0) // Position - 0x10B3 Hash - 0x6E844BA9 ^0x869AC4DA
{
	var src;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);

	if (!func_105(1))
		return false;

	*panParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

BOOL func_46(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x10E2 Hash - 0xE0BDD26B ^0x7E1BB2F9
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

Vector3 func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x111B Hash - 0x21D17A62 ^0x21D17A62
{
	return func_106(&uParam0, 62, 1);
}

var func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x112C Hash - 0x255157D7 ^0x255157D7
{
	return func_107(&uParam0, 63, 1);
}

int func_49(int iParam0) // Position - 0x113D Hash - 0xB5D2D120 ^0xB5D2D120
{
	var unk;

	if (!func_45(&unk))
		return 0;

	if (!func_46(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 14, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 15, iParam0, 0, 1))
		return 0;

	if (!func_46(&unk, 49, 0, 0, 0))
		return 0;

	return func_54(&unk, 9);
}

Hash func_50(int iParam0, int iParam1) // Position - 0x11A8 Hash - 0xB7B5578F ^0xB7B5578F
{
	var unk;

	if (!func_45(&unk))
		return 0;

	if (!func_46(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 14, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 15, iParam0, 0, 1))
		return 0;

	if (!func_46(&unk, 49, 0, 0, 0))
		return 0;

	if (!func_46(&unk, 50, iParam1, 0, 1))
		return 0;

	return func_108(unk);
}

void func_51(var uParam0, int iParam1, int iParam2) // Position - 0x1227 Hash - 0xE743D763 ^0xA3607B64
{
	uParam0->[iParam1 /*2*/].f_1 = iParam2;
	return;
}

var func_52(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1239 Hash - 0xEDF980A1 ^0xEDF980A1
{
	return func_109(&uParam0, 80, 1);
}

var func_53(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x124A Hash - 0xE0E50F5F ^0xE0E50F5F
{
	return func_109(&uParam0, 81, 1);
}

int func_54(Any anParam0, int iParam1) // Position - 0x125B Hash - 0xF6C122AF ^0xA6A67C2F
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

int func_55(int iParam0, int iParam1, var uParam2) // Position - 0x126F Hash - 0xD3423083 ^0x69CFB9A
{
	Hash model;

	switch (uParam2->[iParam1 /*2*/].f_1)
	{
		case 0:
			model = func_50(iParam0, iParam1);
		
			if (model == 0)
				return 5;
		
			STREAMING::REQUEST_MODEL(model, false);
			func_51(uParam2, iParam1, 1);
			return 4;
	
		case 1:
			model = func_50(iParam0, iParam1);
		
			if (model == 0)
				return 5;
		
			if (!STREAMING::HAS_MODEL_LOADED(model))
				return 3;
		
			func_51(uParam2, iParam1, 2);
			return 4;
	
		case 2:
			if (!func_110(iParam0, iParam1, &model))
				return 5;
		
			uParam2->[iParam1 /*2*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(model, model.f_1, false, false, false, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->[iParam1 /*2*/]))
				return 5;
		
			ENTITY::SET_ENTITY_ROTATION(uParam2->[iParam1 /*2*/], model.f_4, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(uParam2->[iParam1 /*2*/], true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam2->[iParam1 /*2*/], false);
			ENTITY::SET_ENTITY_PROOFS(uParam2->[iParam1 /*2*/], 4, false);
			uParam2->f_18 = uParam2->f_18 + 1;
			func_51(uParam2, iParam1, 3);
			return 2;
	
		case 3:
			return 1;
	
		default:
			break;
	}

	return 0;
}

void func_56(var uParam0) // Position - 0x138D Hash - 0x2B238E7E ^0xC91FE23D
{
	int i;
	int num;

	if (*uParam0 == 0)
		return;

	if (!func_111())
		return;

	for (i = 0; i <= 31; i = i + 1)
	{
		if (!MISC::IS_BIT_SET(*uParam0, i))
		{
		}
		else
		{
			num = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(i)));
		
			if (!func_112(uParam0, num))
			{
			}
			else
			{
				func_75(uParam0, num);
				func_113(uParam0, num);
			}
		}
	}

	return;
}

void func_57(var uParam0) // Position - 0x13FD Hash - 0x386C4599 ^0x7572C92
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage == 0 || currentMessage != uParam0->f_3)
	{
		if (func_114(uParam0->f_1))
			func_115(uParam0, uParam0->f_1);
	
		func_116(uParam0, 0);
		func_117(uParam0, 0);
	}

	return;
}

void func_58(int iParam0, var uParam1, int iParam2) // Position - 0x1443 Hash - 0xC3302C3D ^0x7010E74E
{
	int red;
	Entity entity;

	red = -1;
	red.f_1 = -1;
	red.f_2 = -1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam1->[iParam2]))
		return;

	if (!func_118(iParam0, iParam2, &red))
		return;

	entity = func_119(red.f_4, red.f_7, red.f_3);

	if (!ENTITY::DOES_ENTITY_EXIST(entity))
		return;

	uParam1->[iParam2] = entity;
	PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam1->[iParam2], false);
	PLAYER::_0x6ECFC621A168424C(uParam1->[iParam2], uParam1->[iParam2], 0, 0);
	uParam1->f_9 = uParam1->f_9 + 1;

	if (red != -1 && red.f_1 != -1 && red.f_2 != -1)
	{
		PLAYER::_0xBC02B3D151D3859F(uParam1->[iParam2], 1);
		PLAYER::EAGLE_EYE_SET_CUSTOM_ENTITY_TINT(uParam1->[iParam2], red, red.f_1, red.f_2);
	}

	return;
}

BOOL func_59(var uParam0, var uParam1) // Position - 0x150F Hash - 0x68438FDF ^0x68438FDF
{
	int i;
	int num;
	int num2;

	num = func_120(func_23(*uParam1));
	func_121();

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num2 = func_122(func_23(*uParam1), i);
		func_123(uParam0, uParam1, num2);
	}

	uParam0->f_8.f_3 = uParam0->f_8.f_3 | 1;
	return true;
}

void func_60(var uParam0, var uParam1, int iParam2) // Position - 0x1568 Hash - 0x517D489E ^0x1598B3EB
{
	uParam0->f_8 = iParam2;
	return;
}

int func_61(var uParam0) // Position - 0x1576 Hash - 0x8487AD55 ^0x8487AD55
{
	var unk;

	return unk;
}

int func_62(var uParam0, var uParam1, int iParam2) // Position - 0x1580 Hash - 0x4150C563 ^0x19AAB47B
{
	Ped playerPed;

	if (func_88())
		return 12;

	if (uParam0->f_8.f_3 & 2 != 0)
		if (uParam0->f_8.f_4 + 20000 > MISC::GET_GAME_TIMER())
			return 16;

	if (iParam2 & 1 == 0 && uParam0->f_8 != 1)
		return 1;

	if (func_17(func_124()))
		return 2;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(playerPed) || TASK::PED_HAS_USE_SCENARIO_TASK(playerPed))
		return 6;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(PLAYER::PLAYER_PED_ID()))
		return 15;

	if (func_125(playerPed, 0) || FIRE::IS_ENTITY_ON_FIRE(playerPed) || PED::IS_PED_LASSOED(playerPed) || PED::IS_PED_HOGTIED(playerPed) || PED::_GET_LASSOER_OF_PED(playerPed) || PED::IS_PED_HOGTYING(playerPed))
		return 13;

	if (func_126(Global_33))
		return 14;

	if (func_127())
		return 7;

	if (func_128())
		return 8;

	if (func_129())
		return 9;

	if (func_130())
		return 10;

	if (func_131(PLAYER::PLAYER_ID(), true, false, true))
		return 4;

	if (PED::IS_PED_CARRYING_SOMETHING(playerPed) || func_132(playerPed))
		return 11;

	if (func_133(Global_33, SCRIPT_TASK_PLAY_ANIM))
		return 17;

	if (TASK::IS_PED_GETTING_UP(Global_33))
		return 18;

	return 0;
}

BOOL func_63(int iParam0) // Position - 0x16E8 Hash - 0x339D45CE ^0x339D45CE
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
			return false;
	
		default:
		
	}

	return true;
}

void func_64(var uParam0, int iParam1) // Position - 0x174B Hash - 0x93C80D14 ^0x5401D071
{
	int num;

	num = func_102(iParam1, 1);

	if (!func_103(uParam0->f_8.f_1[num]))
		return;

	if (func_134(uParam0->f_8.f_1[num], true))
		return;

	func_135(uParam0->f_8.f_1[num], true, true);
	return;
}

void func_65(var uParam0, int iParam1) // Position - 0x1796 Hash - 0xC412DF6C ^0xD27BB07A
{
	int num;

	num = func_102(iParam1, 1);

	if (!func_103(uParam0->f_8.f_1[num]))
		return;

	if (!func_134(uParam0->f_8.f_1[num], true))
		return;

	func_135(uParam0->f_8.f_1[num], false, true);
	return;
}

BOOL func_66(int iParam0) // Position - 0x17E2 Hash - 0xA250D4F7 ^0xA250D4F7
{
	return iParam0 == 0;
}

void func_67(var uParam0, int iParam1) // Position - 0x17EE Hash - 0x2CB074E ^0xEFCFD507
{
	int num;

	num = func_102(iParam1, 1);

	if (!func_103(uParam0->f_8.f_1[num]))
		return;

	if (func_136(uParam0->f_8.f_1[num], false))
		return;

	func_137(uParam0->f_8.f_1[num], true, true, true);
	return;
}

void func_68(var uParam0, int iParam1) // Position - 0x183A Hash - 0x40B7137F ^0x40B7137F
{
	if (func_138(uParam0, iParam1))
		return;

	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_69(var uParam0, int iParam1) // Position - 0x1859 Hash - 0xF97FD8B2 ^0xFE43C917
{
	int num;

	num = func_102(iParam1, 1);

	if (!func_103(uParam0->f_8.f_1[num]))
		return;

	if (!func_136(uParam0->f_8.f_1[num], false))
		return;

	func_137(uParam0->f_8.f_1[num], false, true, true);
	return;
}

BOOL func_70(var uParam0, int iParam1) // Position - 0x18A6 Hash - 0x136BCBF0 ^0xCC74524
{
	int num;

	num = func_102(iParam1, 1);
	return func_139(uParam0->f_8.f_1[num], true);
}

void func_71() // Position - 0x18C6 Hash - 0x66E327B2 ^0x7497091E
{
	NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
	return;
}

void func_72(var uParam0) // Position - 0x18D3 Hash - 0x3F9AB40C ^0x21E739F5
{
	if (func_39(uParam0, 1))
		return;

	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
		return;

	NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	func_140(uParam0, 1);
	return;
}

void func_73(var uParam0) // Position - 0x190F Hash - 0xEF6634D9 ^0xCFBA7839
{
	if (func_39(uParam0, 2))
		return;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	func_140(uParam0, 2);
	return;
}

void func_74(int iParam0) // Position - 0x1936 Hash - 0x22CDC537 ^0x2ED81983
{
	Global_1300387.f_288.f_2 = Global_1300387.f_288.f_2 || iParam0;
	return;
}

void func_75(var uParam0, int iParam1) // Position - 0x1953 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_76(var uParam0, int iParam1) // Position - 0x1968 Hash - 0xA4EAD31F ^0x77D45044
{
	uParam0->f_2 = uParam0->f_2 - uParam0->f_2 && iParam1;
	return;
}

void func_77(var uParam0, int iParam1) // Position - 0x1980 Hash - 0x2A34546A ^0xDEA9AD6
{
	int num;

	num = func_102(iParam1, 1);
	func_141(uParam0->f_8.f_1[num], true);
	return;
}

BOOL func_78(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x19A0 Hash - 0x521045B7 ^0x521045B7
{
	var unk;
	var unk3;

	return func_142(hParam0, iParam1, hParam2, &unk, &unk3, false, bParam3, false);
}

void func_79() // Position - 0x19BA Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_1913444 = 1;
	return;
}

int func_80(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x19C7 Hash - 0x2B91DAE0 ^0x2B91DAE0
{
	var unk;
	var unk3;
	int num;
	Hash hash;
	var unk8;
	var unk18;
	var unk36;
	var unk53;

	if (!func_143(hParam0, 0))
		return -1;

	if (func_144(hParam0))
		if (!func_146(func_145(hParam0), hParam1, &unk, false, false))
			return -1;
	else if (func_147(hParam0, hParam1, false, false) < iParam2)
		return -1;

	unk3 = { func_148(hParam0, true, 0) };

	if (func_149(hParam0, &unk3, iParam2, false, true, -1, false))
		return -1;

	num = -1;
	hash = func_150(hParam0);

	if (hash == 1388422710)
	{
		num = func_151(hParam0, "SPEND STEW FEE", 1, true, false, hParam1);
	}
	else
	{
		unk8 = -1;
		unk8.f_1 = -1;
	
		if (func_144(hParam0))
		{
			unk18.f_9 = 1;
			unk18.f_11 = joaat("SLOTID_NONE");
		
			if (!func_152(&unk8, func_145(hParam0), &unk18, true, hParam1, -1, false, false))
				return -1;
		}
		else
		{
			unk36.f_9 = 1;
			unk36.f_11 = joaat("SLOTID_NONE");
		
			if (!func_153(&unk8, hParam0, unk3, unk3.f_4, iParam2, &unk36, true, hParam1, -1, true))
				return -1;
		}
	
		num = unk8.f_1;
	}

	if (num == -1)
		return -1;

	unk53.f_7 = -142743235;
	unk53.f_16 = -1;
	unk53.f_1 = 1;

	if (hParam0 == -1283929968)
		unk53.f_1 = 0;

	if (func_144(hParam0))
		if (func_154(func_145(hParam0), hParam1) == 1400824947)
			unk53.f_1 = 0;
	else if (func_155(hParam0, hParam1) == 1400824947)
		unk53.f_1 = 0;

	func_156(num, unk53);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(hParam0, hParam1, iParam3, iParam2);
	return num;
}

int func_81(int iParam0) // Position - 0x1B66 Hash - 0x1B04F1B9 ^0x6D0BC24
{
	return Global_1300387.f_1[iParam0 /*10*/].f_5;
}

int func_82(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1B7A Hash - 0x2061E1DD ^0x90017C6
{
	var unk;
	var unk2;
	int num;

	if (func_89(uParam0) != -1)
		return 0;

	if (iParam1 == 0)
		return 0;

	if (iParam2 == 0)
		return 0;

	if (iParam1 == -238690612)
		if (iParam3 == 0)
			return 0;

	unk2 = { func_157(iParam2, iParam1, &unk) };

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&unk2))
		return 0;

	num = func_158(iParam2, iParam1);

	if (num == 0)
		return 0;

	func_159(uParam0, iParam1);
	func_160(uParam0, num);
	func_161(uParam0, iParam2);
	func_162(uParam0, iParam3);
	func_163(uParam0, unk);
	func_164(uParam0, unk2);
	func_90(uParam0, 0);
	return 1;
}

void func_83(int iParam0) // Position - 0x1C23 Hash - 0xD03086C1 ^0x7CFAAA2F
{
	Global_1300387.f_288.f_2 = Global_1300387.f_288.f_2 - Global_1300387.f_288.f_2 && iParam0;
	return;
}

BOOL func_84() // Position - 0x1C4A Hash - 0x1D054E6F ^0xFB76AC46
{
	Ped playerPed;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (PED::GET_PED_IS_GRAPPLING(playerPed))
		return false;

	if (PED::IS_PED_RAGDOLL(playerPed))
		return false;

	return true;
}

void func_85() // Position - 0x1C77 Hash - 0xA86A7AB9 ^0xA86A7AB9
{
	if (func_165(2, 255))
		return;

	func_166(2);
	return;
}

void func_86() // Position - 0x1C91 Hash - 0xCA40A0D7 ^0xCA40A0D7
{
	if (func_167(8, 255))
		return;

	func_168(3);
	return;
}

void func_87(int iParam0) // Position - 0x1CAB Hash - 0xB5EB21EB ^0xB5EB21EB
{
	if (func_169() != 0)
		return;

	func_170(iParam0);
	func_171(func_23(iParam0));
	func_172(func_81(iParam0));
	return;
}

BOOL func_88() // Position - 0x1CD8 Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

int func_89(Any* panParam0) // Position - 0x1CFD Hash - 0x51136ED0 ^0x51136ED0
{
	return *panParam0;
}

void func_90(Any* panParam0, int iParam1) // Position - 0x1D08 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*panParam0 = iParam1;
	return;
}

void func_91(Any* panParam0) // Position - 0x1D15 Hash - 0x3BC4341D ^0x10166743
{
	AnimScene animScene;
	var playbackListName;
	var animDict;
	BOOL flags;
	int num;

	num = func_173(panParam0);
	animDict = { func_174(num) };
	flags = func_175(num);
	playbackListName = { func_176(panParam0) };
	animScene = ANIMSCENE::_CREATE_ANIM_SCENE(&animDict, flags, &playbackListName, false, true);

	if (animScene == -1)
		return;

	ANIMSCENE::LOAD_ANIM_SCENE(animScene);
	GRAPHICS::_0xB958D97A0DFAA0C2(func_178(func_177(panParam0->f_6, panParam0->f_7)));
	func_179(panParam0, animScene);
	func_90(panParam0, 2);
	return;
}

void func_92(Any* panParam0) // Position - 0x1D84 Hash - 0x873F2CB1 ^0x6FE6C655
{
	if (func_180(Global_33, 0) || func_180(Global_33, 1))
	{
		if (!func_181(Global_33, SCRIPT_TASK_SWAP_WEAPON))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, joaat("WEAPON_UNARMED"), false, 1, false, false);
			WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, false);
			TASK::TASK_SWAP_WEAPON(Global_33, 0, 0, 0, 0);
		}
	
		return;
	}

	func_90(panParam0, 3);
	return;
}

void func_93(Any* panParam0) // Position - 0x1DF5 Hash - 0x806E501D ^0x67677199
{
	AnimScene animScene;

	animScene = _STOPWATCH_IS_INITIALIZED(panParam0);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(animScene, true, false))
		return;

	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(animScene, false))
		return;

	func_90(panParam0, 4);
	return;
}

void func_94(Any* panParam0) // Position - 0x1E36 Hash - 0xD22A8E58 ^0x76EF2524
{
	switch (func_183(panParam0))
	{
		case joaat("transformation"):
			break;
	
		case -956768978:
		case -238690612:
			if (func_184(255))
				return;
			break;
	}

	switch (panParam0->f_5)
	{
		case -956768978:
		case -238690612:
			func_90(panParam0, 5);
			break;
	
		default:
			func_90(panParam0, 6);
			break;
	}

	return;
}

void func_95(Any* panParam0) // Position - 0x1E98 Hash - 0x82331B70 ^0x647E836
{
	if (MISC::GET_GAME_TIMER() - func_185() < 3000)
		return;

	func_90(panParam0, 6);
	return;
}

void func_96(Any* panParam0) // Position - 0x1EB9 Hash - 0x1241E4DA ^0xE6C22787
{
	int num;
	Vector3 entityCoords;
	Vector3 vector;
	var unk13;
	float dx;
	var groundZ;
	Entity entity;
	AnimScene animScene;

	if (!func_187(func_186(panParam0), func_183(panParam0), &num))
		return;

	switch (num)
	{
		case -2135825642:
			entityCoords = { num.f_1 };
			unk13 = { entityCoords - ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false) };
			dx = { func_189(unk13) };
			vector = { 0f, 0f, MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1) };
			break;
	
		case joaat("Position"):
			entityCoords = { num.f_1 };
			vector = { num.f_4 };
			break;
	
		case joaat("OBJECT"):
			entity = func_188(num.f_1, num.f_7, num.f_8);
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
				return;
		
			entityCoords = { ENTITY::GET_ENTITY_COORDS(entity, true, false) };
			vector.f_2 = ENTITY::GET_ENTITY_HEADING(entity);
			break;
	
		case joaat("PLAYER"):
			MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false), &groundZ, false);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false) };
			entityCoords.f_2 = groundZ;
			vector = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) };
			break;
	
		default:
			break;
	}

	if (_IS_NULL_VECTOR(entityCoords))
		return;

	animScene = _STOPWATCH_IS_INITIALIZED(panParam0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(animScene, entityCoords, vector, 2);
	func_90(panParam0, 7);
	return;
}

void func_97(Any* panParam0) // Position - 0x1FFD Hash - 0x9A8C9165 ^0x9A8C9165
{
	func_191(panParam0);
	func_90(panParam0, 8);
	return;
}

void func_98(Any* panParam0) // Position - 0x2013 Hash - 0x39678095 ^0xE758DA6B
{
	AnimScene animScene;

	animScene = _STOPWATCH_IS_INITIALIZED(panParam0);
	ANIMSCENE::START_ANIM_SCENE(animScene);
	func_90(panParam0, 9);
	return;
}

void func_99(Any* panParam0) // Position - 0x2031 Hash - 0xB08375F2 ^0xED81649F
{
	AnimScene animScene;
	BOOL isAnimSceneFinished;
	BOOL isAnimSceneExitingThisFrame;
	BOOL isAnimSceneRunning;
	float animSceneDuration;
	float animSceneTime;
	float num;
	var unk;

	animScene = _STOPWATCH_IS_INITIALIZED(panParam0);
	animSceneTime = ANIMSCENE::_GET_ANIM_SCENE_TIME(animScene);
	animSceneDuration = ANIMSCENE::_GET_ANIM_SCENE_DURATION(animScene);
	num = animSceneDuration - animSceneTime;

	switch (panParam0->f_5)
	{
		case joaat("transformation"):
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, joaat("Eat")))
			{
				if (!func_192(panParam0, 4) && !func_192(panParam0, 8))
				{
					AUDIO::_START_AUDIO_SCENESET("NATAC_Screen_Overlay_Fade_To_Black", "MP007_NATAC_Sceneset");
					AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds", true, 0);
					panParam0->f_2 = animSceneTime;
					func_193(panParam0, 4);
				}
			}
			break;
	
		case -956768978:
		case -238690612:
			if (!func_192(panParam0, 4))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MP_NaturalistAnimalTransformEnd");
				func_193(panParam0, 4);
			}
		
			if (func_192(panParam0, 4) && !func_192(panParam0, 1) && animSceneTime > 1f)
			{
				CAM::DO_SCREEN_FADE_IN(1);
				func_193(panParam0, 1);
			}
		
			if (func_192(panParam0, 1))
			{
				GRAPHICS::ANIMPOSTFX_STOP("MP_NaturalistAnimalTransformStart");
				AUDIO::_STOP_SOUND_WITH_NAME("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
				AUDIO::_START_AUDIO_SCENESET("NATAC_Screen_Overlay_Fade_From_Black", "MP007_NATAC_Sceneset");
				AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Exit", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			}
		
			if (!func_192(panParam0, 1))
			{
				if (num < animSceneDuration / 2f)
				{
					CAM::DO_SCREEN_FADE_IN(1);
					func_193(panParam0, 1);
				}
			}
			break;
	}

	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	func_194();
	func_195(false, false, true);

	if (!func_192(panParam0, 16))
	{
		if (GRAPHICS::_0xFBF161FCFEC8589E(func_178(func_177(panParam0->f_6, panParam0->f_7)), 2, false, &unk))
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Animal_Control_Enter_Pre", "Animal_Control_Screen_Overlay_Sounds");
			AUDIO::PLAY_SOUND_FRONTEND("Animal_Control_Enter_Whoosh", "Animal_Control_Screen_Overlay_Sounds", true, 0);
			func_193(panParam0, 16);
		}
	}

	isAnimSceneFinished = ANIMSCENE::IS_ANIM_SCENE_FINISHED(animScene, false);
	isAnimSceneExitingThisFrame = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(animScene);
	isAnimSceneRunning = ANIMSCENE::IS_ANIM_SCENE_RUNNING(animScene, false);

	if (isAnimSceneFinished || isAnimSceneExitingThisFrame || !isAnimSceneRunning)
	{
		switch (panParam0->f_5)
		{
			case joaat("transformation"):
				CAM::DO_SCREEN_FADE_OUT(1);
				AUDIO::_STOP_AUDIO_SCENESET("MP007_NATAC_Sceneset");
				func_193(panParam0, 2);
				func_193(panParam0, 8);
				func_196(panParam0, 4);
				break;
		
			case -956768978:
			case -238690612:
				if (func_192(panParam0, 4))
				{
					AUDIO::_STOP_AUDIO_SCENESET("MP007_NATAC_Sceneset");
					func_193(panParam0, 8);
					func_196(panParam0, 4);
				}
				break;
		}
	
		if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 0))
			func_197(0, 0);
	
		func_90(panParam0, 10);
	}

	return;
}

void func_100(Any* panParam0) // Position - 0x2264 Hash - 0xDEA1A979 ^0xBB9EFCD5
{
	AnimScene animScene;
	var src;

	src = -1;
	src.f_1 = -1;
	func_90(panParam0, -1);
	animScene = _STOPWATCH_IS_INITIALIZED(panParam0);
	GRAPHICS::_0xA201A3D0AC087C37(func_178(func_177(panParam0->f_6, panParam0->f_7)));

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene))
		ANIMSCENE::_DELETE_ANIM_SCENE(animScene);

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 17);
	return;
}

BOOL func_101(Any* panParam0) // Position - 0x22B5 Hash - 0x51E5DB5D ^0x51E5DB5D
{
	switch (func_89(panParam0))
	{
		case 0:
		case 6:
		case 7:
		case 8:
		case 10:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_102(int iParam0, int iParam1) // Position - 0x22EC Hash - 0xE2A303C0 ^0xE2A303C0
{
	switch (iParam0)
	{
		case joaat("Inspect"):
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_103(int iParam0) // Position - 0x2317 Hash - 0x475F11C3 ^0x2467C3B3
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 60)
		return false;

	if (Global_1951910[iParam0 /*23*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3);
}

void func_104(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2356 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_103(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_198(*uParam0);

	if (Global_1951910[num /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_199(num);
	*uParam0 = 0;
	return;
}

BOOL func_105(int iParam0) // Position - 0x23AA Hash - 0x2795DEC ^0x4283DA24
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
		return false;

	return true;
}

Vector3 func_106(Any* panParam0, int iParam1, int iParam2) // Position - 0x23E5 Hash - 0x21BBA13F ^0x345D7DB2
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk, panParam0);
	return unk;
}

var func_107(Any* panParam0, int iParam1, int iParam2) // Position - 0x2403 Hash - 0xB8727DF2 ^0xEDBE3E6D
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk, panParam0);
	return unk;
}

int func_108(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x241F Hash - 0x45FCC46E ^0x45FCC46E
{
	return func_109(&uParam0, 67, 1);
}

int func_109(Any* panParam0, int iParam1, int iParam2) // Position - 0x2430 Hash - 0xB208A015 ^0xE27079B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

BOOL func_110(int iParam0, int iParam1, var uParam2) // Position - 0x244B Hash - 0xA3F61B33 ^0xA3F61B33
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 14, 0, 0, 1))
		return false;

	if (!func_46(&unk, 15, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 49, 0, 0, 1))
		return false;

	if (!func_46(&unk, 50, iParam1, 0, 1))
		return false;

	*uParam2 = func_108(unk);
	uParam2->f_1 = { func_47(unk) };
	uParam2->f_4 = { func_200(unk) };
	return true;
}

BOOL func_111() // Position - 0x24EA Hash - 0x4FE219A5 ^0x9BFF886E
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return false;

	return true;
}

BOOL func_112(var uParam0, int iParam1) // Position - 0x2504 Hash - 0xE170737F ^0x67A1E97F
{
	switch (iParam1)
	{
		case 8:
			if (!func_201(uParam0->f_2, 4))
				return false;
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)))
		return false;

	return true;
}

void func_113(var uParam0, int iParam1) // Position - 0x2540 Hash - 0xA0CD77DA ^0x48104713
{
	int num;

	num = func_203(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1), 10000, 0, 0, 0, true);
	func_116(uParam0, iParam1);
	func_117(uParam0, num);
	return;
}

BOOL func_114(int iParam0) // Position - 0x256B Hash - 0x339D45CE ^0x339D45CE
{
	switch (iParam0)
	{
		case 2:
			return false;
	
		default:
		
	}

	return true;
}

void func_115(var uParam0, var uParam1) // Position - 0x2586 Hash - 0x53A96DDB ^0xB6A79257
{
	uParam0->f_2 = uParam0->f_2 || uParam1;
	return;
}

void func_116(var uParam0, int iParam1) // Position - 0x2599 Hash - 0x4F8BE4B5 ^0x2E599B99
{
	uParam0->f_1 = iParam1;
	return;
}

void func_117(var uParam0, int iParam1) // Position - 0x25A7 Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

BOOL func_118(int iParam0, int iParam1, var uParam2) // Position - 0x25B5 Hash - 0xA3F61B33 ^0xA3F61B33
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 14, 0, 0, 1))
		return false;

	if (!func_46(&unk, 15, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 48, 0, 0, 0))
		return false;

	if (!func_46(&unk, 50, iParam1, 0, 1))
		return false;

	uParam2->f_3 = func_108(unk);
	uParam2->f_7 = func_48(unk);
	uParam2->f_4 = { func_47(unk) };
	*uParam2 = func_204(unk);
	uParam2->f_1 = func_205(unk);
	uParam2->f_2 = func_206(unk);
	return true;
}

Entity func_119(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Hash hParam4) // Position - 0x2676 Hash - 0xE5887B20 ^0x3865FBD9
{
	int i;
	int entitiesNearPoint;
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	Entity entity;
	Entity entityFromItem;
	Hash entityModel;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam0, fParam3, itemSet, 3);

	for (i = 0; i <= entitiesNearPoint - 1; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(entityFromItem);
		
			if (entityModel != hParam4)
			{
			}
			else
			{
				entity = entityFromItem;
				break;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return entity;
}

int func_120(int iParam0) // Position - 0x26E9 Hash - 0xB5D2D120 ^0xB5D2D120
{
	var unk;

	if (!func_45(&unk))
		return 0;

	if (!func_46(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 14, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return 0;

	if (!func_46(&unk, 34, 0, 0, 1))
		return 0;

	return func_54(&unk, 5);
}

void func_121() // Position - 0x2753 Hash - 0x50B21452 ^0x34BF758B
{
	AUDIO::PREPARE_SOUNDSET("Animal_Control_Screen_Overlay_Sounds", false);
	return;
}

int func_122(int iParam0, int iParam1) // Position - 0x2763 Hash - 0xB7B5578F ^0xB7B5578F
{
	var unk;

	if (!func_45(&unk))
		return 0;

	if (!func_46(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 14, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return 0;

	if (!func_46(&unk, 34, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 36, iParam1, 0, 1))
		return 0;

	return func_207(unk);
}

BOOL func_123(var uParam0, var uParam1, int iParam2) // Position - 0x27E2 Hash - 0x960F3B72 ^0x97A95838
{
	int num;
	var unk;

	num = func_102(iParam2, 1);

	if (num == -1)
		return false;

	if (func_103(uParam0->f_8.f_1[num]))
		return false;

	if (!func_208(func_23(*uParam1), iParam2, &unk))
		return false;

	uParam0->f_8.f_1[num] = func_209(&unk, unk.f_12, unk.f_8, unk.f_11, 0, 1, 0, 5, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), 0);
	func_69(uParam0, iParam2);
	func_65(uParam0, iParam2);
	return true;
}

struct<2> func_124() // Position - 0x2870 Hash - 0xA30248B6 ^0x10CDE073
{
	if (Global_1205804.f_129 <= 0)
		return func_210(0);

	if (Global_1205804.f_130 < 0 || Global_1205804.f_131 == 0)
		return func_210(0);

	return Global_1205804[Global_1205804.f_130 /*4*/].f_1;
}

BOOL func_125(Ped pedParam0, Ped pedParam1) // Position - 0x28BB Hash - 0xB1778072 ^0xDB718768
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_IN_COMBAT(pedParam0, pedParam1))
			return true;

	return false;
}

BOOL func_126(Ped pedParam0) // Position - 0x28DD Hash - 0x8F7DFED5 ^0x8768F0B4
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

BOOL func_127() // Position - 0x2947 Hash - 0xDC457EBB ^0x19F1C540
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");

	return false;
}

BOOL func_128() // Position - 0x296E Hash - 0xD6298B8D ^0xA8AC551C
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(872480335) > 0)
		return true;

	return false;
}

BOOL func_129() // Position - 0x2999 Hash - 0xCBC05297 ^0x5A47DB9B
{
	if (Global_1072759.f_28644.f_66.f_42 >= 9)
		return true;

	return false;
}

BOOL func_130() // Position - 0x29B6 Hash - 0xA3BE243F ^0x522D4AD4
{
	return Global_1072759.f_28644.f_66.f_42 != 0;
}

BOOL func_131(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x29CB Hash - 0x7FC88506 ^0x4CD32A11
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_211(bParam1, bParam2, bParam3);

	if (Global_1572887.f_14 != -1)
		if (plParam0 == Global_1295666.f_5)
			if (!Global_1295666.f_6)
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

BOOL func_132(Ped pedParam0) // Position - 0x2B00 Hash - 0xBEDFC3C1 ^0xBEDFC3C1
{
	return func_212(pedParam0, 4) || func_212(pedParam0, 5);
}

BOOL func_133(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x2B1C Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

BOOL func_134(int iParam0, BOOL bParam1) // Position - 0x2B45 Hash - 0xAAB142C4 ^0xDB043156
{
	int num;

	if (bParam1 && !func_103(iParam0))
		return false;

	num = func_198(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3);
}

void func_135(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2B78 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_103(iParam0))
		return;

	num = func_198(iParam0);
	func_213(num, bParam1);
	return;
}

BOOL func_136(int iParam0, BOOL bParam1) // Position - 0x2BA4 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_103(iParam0))
		return false;

	return !func_214(iParam0, 4);
}

void func_137(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2BC9 Hash - 0x90451281 ^0x90451281
{
	int num;

	if (bParam2 && !func_103(iParam0))
		return;

	num = func_198(iParam0);

	if (bParam1)
	{
		func_215(iParam0, 4);
	
		if (bParam3)
			func_213(num, true);
	
		func_216(num, true);
	}
	else
	{
		func_217(iParam0, 4);
		func_216(num, false);
	}

	return;
}

BOOL func_138(var uParam0, int iParam1) // Position - 0x2C1D Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

BOOL func_139(int iParam0, BOOL bParam1) // Position - 0x2C2E Hash - 0x1C19B2F4 ^0xAAE134BB
{
	int num;
	int gameTimer;
	float progress;
	int num2;
	int num3;

	if (bParam1 && !func_103(iParam0))
		return false;

	num = func_198(iParam0);

	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951910[num /*23*/].f_3))
	{
		if (Global_1951910[num /*23*/].f_20)
			gameTimer = MISC::GET_GAME_TIMER();
		else
			gameTimer = MISC::GET_SYSTEM_TIME();
	
		progress = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951910[num /*23*/].f_3);
	
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951910[num /*23*/].f_3))
		{
			num2 = gameTimer - Global_1951910[num /*23*/].f_21;
			num3 = BUILTIN::FLOOR((float)Global_1951910[num /*23*/].f_18 * (1f - Global_1951910[num /*23*/].f_22));
		
			if (num2 > num3)
				return true;
		}
		else
		{
			Global_1951910[num /*23*/].f_21 = gameTimer;
			Global_1951910[num /*23*/].f_22 = progress;
		}
	}

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951910[num /*23*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951910[num /*23*/].f_3);
}

void func_140(var uParam0, int iParam1) // Position - 0x2D28 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_141(int iParam0, BOOL bParam1) // Position - 0x2D39 Hash - 0x23556CE7 ^0xE508C6D9
{
	int num;

	if (bParam1 && !func_103(iParam0))
		return;

	num = func_198(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1951910[num /*23*/].f_3);
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_142(Hash hParam0, int iParam1, Hash hParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2D6B Hash - 0x9BC46265 ^0xEE2DD19E
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;
	int num4;
	int num5;
	Entity entity;
	int num6;
	int num7;

	if (func_218(hParam0) || func_219(hParam0, 1077060302))
		return func_146(func_220(hParam0, true), hParam2, uParam3, true, false);

	unk = 15;

	if (!func_221(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam6 && func_222(false) && !func_223();
	num5 = -1;

	if (Global_1915656.f_20638)
		num5 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && bParam7 || func_224(num2))
			goto 0x1F3;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && bParam7 || func_225(num2))
		{
		}
		else
		{
			num4 = func_226(num5, unk[i /*2*/]);
		
			if (num4 != 0)
			{
				bParam5 = false;
				num3 = func_227(unk[i /*2*/], num4);
			}
			else
			{
				num3 = func_228(unk[i /*2*/], false, !flag, true);
			}
		
			if (num3 >= num2)
			{
			}
			else
			{
				if (flag)
				{
					if (func_229(unk[i /*2*/]) || func_230(unk[i /*2*/]))
					{
						entity = 0;
					
						if (bParam5)
							num6 = func_231(7, unk[i /*2*/], &entity);
					
						num7 = func_232(unk[i /*2*/], num4);
					
						if (num3 + num6 + num7 >= num2)
							if (num3 + num7 < num2 && ENTITY::DOES_ENTITY_EXIST(entity))
								*uParam4 = entity;
						else
							goto 0x1E3;
					}
				
					if (bParam5 && num3 + func_233(7, unk[i /*2*/]) + func_234(unk[i /*2*/]) >= num2)
					{
					}
					else
					{
						*uParam3 = { unk[i /*2*/] };
						return false;
					}
				}
			
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_143(Hash hParam0, int iParam1) // Position - 0x2F6B Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_144(Hash hParam0) // Position - 0x2F85 Hash - 0x6942A5C5 ^0xFA5CB2EF
{
	return func_235(hParam0) && func_219(hParam0, 1584357097);
}

Hash func_145(Hash hParam0) // Position - 0x2FA3 Hash - 0xDDBFAC08 ^0x5ECDEB23
{
	if (!func_144(hParam0))
		return 0;

	switch (hParam0)
	{
		case -2109461640:
			return -1533903180;
	
		case -2050900874:
			return -856521084;
	
		case -2027203194:
			return 2081091619;
	
		case -1975194892:
			return 73453226;
	
		case -1894668475:
			return 1957000738;
	
		case -1815586685:
			return -412238982;
	
		case -1806184545:
			return 1874334976;
	
		case -1617589234:
			return -431273312;
	
		case -1617179117:
			return 862573726;
	
		case -1615607679:
			return 1686296029;
	
		case -1593520704:
			return -769187178;
	
		case -1382149068:
			return -240893062;
	
		case -1278925815:
			return 1640403026;
	
		case -1179959034:
			return -146516808;
	
		case -1085571851:
			return 1934791288;
	
		case -1053842899:
			return -2015093177;
	
		case -1042952050:
			return -1111852673;
	
		case -1029170414:
			return 1651235889;
	
		case -997271222:
			return 1353200767;
	
		case -878058438:
			return -668553641;
	
		case -873142887:
			return -337101316;
	
		case -862677113:
			return -1633818354;
	
		case -840486512:
			return -526428006;
	
		case -831411723:
			return -882484202;
	
		case -781656240:
			return -2040374903;
	
		case -755677768:
			return -1841483015;
	
		case -609641686:
			return 516107635;
	
		case -533360838:
			return 1220617347;
	
		case -464283790:
			return -553725692;
	
		case -452048774:
			return 974561281;
	
		case -429434400:
			return 1973137538;
	
		case -320325540:
			return 1029354793;
	
		case -297375678:
			return 2100623539;
	
		case -260985198:
			return -354862110;
	
		case -188079477:
			return -547676440;
	
		case -186533746:
			return -1123513064;
	
		case -142781743:
			return -99130340;
	
		case -131203731:
			return -1830556910;
	
		case -80071950:
			return -1229833684;
	
		case -51500315:
			return -260158053;
	
		case -28339930:
			return -2035393948;
	
		case 154924622:
			return 207980728;
	
		case 245915270:
			return 518337236;
	
		case 507515628:
			return -284580868;
	
		case 525029001:
			return 463034341;
	
		case 532885562:
			return 1728467402;
	
		case 538640747:
			return 677332424;
	
		case 550403966:
			return -1219424121;
	
		case 560856018:
			return 9691481;
	
		case 731907282:
			return 195889874;
	
		case 767294276:
			return -600422706;
	
		case 844146134:
			return 966617156;
	
		case 856007660:
			return 1019812717;
	
		case 919634467:
			return -1729036567;
	
		case 948647349:
			return -1058723344;
	
		case 1034120186:
			return 2091613460;
	
		case 1103717282:
			return 1767482612;
	
		case 1156363443:
			return 387193715;
	
		case 1254834984:
			return -311177636;
	
		case 1260724738:
			return -1889559288;
	
		case 1311814185:
			return -229245945;
	
		case 1332088703:
			return 1366042262;
	
		case 1348094862:
			return 863949896;
	
		case 1386939749:
			return 2105724242;
	
		case 1464921218:
			return -979751655;
	
		case 1502511939:
			return 1942551232;
	
		case 1561454517:
			return 465087209;
	
		case 1578729681:
			return 526083803;
	
		case 1646522145:
			return 1693169437;
	
		case 1701653225:
			return -1303234828;
	
		case 1717296181:
			return 149336704;
	
		case 1784374159:
			return 1100771587;
	
		case 1800445393:
			return 596295460;
	
		case 1809065934:
			return 518344954;
	
		case 1829957287:
			return 857944907;
	
		case 1864875333:
			return 1682604808;
	
		case 1879581870:
			return -1364982418;
	
		case 1890828381:
			return -1707282708;
	
		case 1894117705:
			return 1146825064;
	
		case 1952092069:
			return -1816797957;
	
		case 2039957913:
			return 329215271;
	
		case 2047228732:
			return 290265769;
	
		case 2081818376:
			return 1455922005;
	
		case 2095710966:
			return 1656345167;
	
		default:
		
	}

	return 0;
}

BOOL func_146(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3459 Hash - 0xE8CB342E ^0xE8CB342E
{
	var unk;
	int num;
	int i;
	int num2;
	int num3;
	int num4;

	unk = 15;

	if (!func_236(hParam0, hParam1, &unk, &num, false, true))
		return 0;

	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		if (unk[i /*2*/] == joaat("currency_cash"))
		{
			if (!bParam4 && !func_224(unk[i /*2*/].f_1))
				return 0;
		}
		else if (unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (!bParam4 && !func_225(unk[i /*2*/].f_1))
				return 0;
		}
		else
		{
			num2 = func_226(num3, unk[i /*2*/]);
		
			if (num2 != 0)
				num4 = func_227(unk[i /*2*/], num2);
			else
				num4 = func_228(unk[i /*2*/], false, bParam3, true);
		
			if (num4 < unk[i /*2*/].f_1)
			{
				*uParam2 = { unk[i /*2*/] };
				return 0;
			}
		}
	}

	return 1;
}

int func_147(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3560 Hash - 0xEC7BE68C ^0xEC7BE68C
{
	var unk;
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	unk = 15;

	if (!func_221(hParam0, hParam1, &unk, &num, true, false))
		return 0;

	flag = !bParam3 && func_222(false) && !func_223();
	num2 = -1;
	num3 = -1;

	if (Global_1915656.f_20638)
		num3 = Global_1915656.f_20241;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0)
			break;
	
		num4 = func_226(num3, unk[i /*2*/]);
	
		if (num4 != 0)
		{
			bParam2 = false;
			num5 = func_227(unk[i /*2*/], num4);
		}
		else
		{
			num5 = func_228(unk[i /*2*/], false, !flag, true);
		}
	
		if (flag)
		{
			if (func_229(unk[i /*2*/]) || func_230(unk[i /*2*/]))
			{
				num5 = num5 + func_232(unk[i /*2*/], 0);
			
				if (bParam2)
				{
					num6 = 0;
					num5 = num5 + func_231(7, unk[i /*2*/], &num6);
				}
			}
			else if (bParam2)
			{
				num5 = num5 + func_233(7, unk[i /*2*/]) + func_234(unk[i /*2*/]);
			}
		}
	
		if (num5 < unk[i /*2*/].f_1)
			return 0;
	
		num5 = num5 / unk[i /*2*/].f_1;
	
		if (num2 == -1 || num5 < num2)
			num2 = num5;
	}

	return num2;
}

struct<5> func_148(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x36B7 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_237(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_238(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_245(hParam0, -1823706425))
			{
				unk = { func_239(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_245(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_239(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_239(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_245(hParam0, -1653629781))
			{
				unk = { func_239(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_244(bParam1) };
		
			switch (func_150(hParam0))
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
			unk = { func_239(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_240(bParam1) };
		
			if (iParam2 && func_241(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_242(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_242(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_243(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_246(unk, &unk28, bParam1, false, -1))
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
			else if (func_245(hParam0, -1653629781))
			{
				unk = { func_239(1384535894, unk, 1784584921, bParam1) };
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

BOOL func_149(Hash hParam0, var uParam1, int iParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6) // Position - 0x3A2B Hash - 0x83727B4C ^0xA6F6F598
{
	var unk;
	var unk5;
	int num;
	int num2;

	func_247(&hParam0);

	if (!func_143(hParam0, 0) && !func_249(func_248(hParam0), 2))
		return false;

	if (!bParam3 && func_250(hParam0, joaat("DEFAULT")) == 0)
		bParam3 = true;

	if (func_251(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		unk = { func_240(false) };
		unk5.f_9 = joaat("SLOTID_NONE");
	
		if (!func_242(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
			return false;
		else if (func_243(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
			return false;
	
		if (func_241(hParam0, true))
			if (!func_242(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
				return false;
			else if (func_243(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
				return false;
	
		return true;
	}

	num = iParam5;

	if (iParam5 < 0)
		num = func_252(hParam0, uParam1, bParam3, bParam4);

	if (num < 0)
		return false;
	else if (num == 0)
		return true;

	num2 = func_253(hParam0, *uParam1, uParam1->f_4, bParam4, bParam3, bParam6);

	if (num2 + iParam2 > num)
		return true;

	return false;
}

Hash func_150(Hash hParam0) // Position - 0x3B5F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_143(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

int func_151(Hash hParam0, char* sParam1, int iParam2, BOOL bParam3, BOOL bParam4, Hash hParam5) // Position - 0x3B8A Hash - 0x8994BB7F ^0xDE1269F5
{
	int cashBalance;
	int goldBarBalance;
	var unk;
	int num;
	int num2;
	int i;
	var unk32;
	int num3;
	var unk49;

	if (!func_143(hParam0, 0))
		return -1;

	if (func_238(hParam0) != joaat("fee"))
		return -1;

	if (func_223())
		bParam3 = true;

	unk = 15;

	if (hParam5 == -570078785 || hParam5 == -915411861)
	{
		cashBalance = func_254(hParam0, hParam5, true, false, true, joaat("currency_cash")) * iParam2;
		goldBarBalance = 0;
	
		if (cashBalance <= 0)
		{
			goldBarBalance = func_254(hParam0, hParam5, true, false, true, joaat("currency_gold_bar")) * iParam2;
		
			if (goldBarBalance <= 0)
				return -1;
		}
	
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(cashBalance, goldBarBalance))
			return -1;
	}
	else if (func_221(hParam0, hParam5, &unk, &num, true, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			num2 = unk[i /*2*/].f_1 * iParam2;
		
			if (!(func_228(unk[i /*2*/], false, bParam3, false) >= num2))
				return -1;
		}
	}
	else
	{
		return -1;
	}

	if (!bParam3 && func_222(false))
	{
		if (cashBalance > 0)
		{
			func_255(joaat("currency_cash"), cashBalance, -142743235, 0, false);
		}
		else if (goldBarBalance > 0)
		{
			func_255(joaat("currency_gold_bar"), goldBarBalance, -142743235, 0, false);
		}
		else if (func_256(hParam5))
		{
			for (i = 0; i < num; i = i + 1)
			{
				num2 = unk[i /*2*/].f_1 * iParam2;
				func_255(unk[i /*2*/], num2, -142743235, 0, false);
			}
		}
	
		return -1;
	}

	unk32.f_9 = 1;
	unk32.f_11 = joaat("SLOTID_NONE");
	unk32.f_8 = hParam0;
	unk32.f_9 = iParam2;
	unk32.f_13 = hParam5;
	unk32.f_12 = -142743235;
	num3 = func_257(joaat("spend"), &unk32, bParam4);

	if (num3 == -1)
	{
	}
	else
	{
		unk49.f_7 = -142743235;
		unk49.f_16 = -1;
		TEXT_LABEL_ASSIGN_STRING(&(unk49.f_12), sParam1, 32);
		func_156(num3, unk49);
	}

	return num3;
}

BOOL func_152(int* piParam0, Hash hParam1, Any* panParam2, BOOL bParam3, Hash hParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x3D7A Hash - 0xB79F2DE9 ^0xB79F2DE9
{
	Hash hash;

	if (!func_258(piParam0, false))
		return false;

	if (hParam4 == 0)
		hParam4 = func_259(hParam1, 0, true, iParam5, bParam6);

	if (!func_260(hParam1, hParam4, iParam5))
		return false;

	panParam2->f_17 = hParam1;
	panParam2->f_8 = hParam1;
	panParam2->f_9 = 1;
	panParam2->f_13 = hParam4;
	panParam2->f_12 = 1248274121;
	hash = 541670136;

	if (bParam7)
		hash = joaat("batch");

	if (!func_261(piParam0, panParam2, hash, hParam4, bParam3))
		return false;

	return true;
}

BOOL func_153(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, int iParam7, var uParam8, BOOL bParam9, Hash hParam10, int iParam11, BOOL bParam12) // Position - 0x3E01 Hash - 0xB722E8D ^0xB722E8D
{
	var unk;

	if (!func_258(piParam0, false))
		return false;

	if (!func_262(piParam0, hParam1, uParam2, hParam6, hParam10, iParam7, iParam11, bParam12))
		return false;

	unk = { func_263(hParam1, uParam2, hParam6, iParam7, bParam12) };
	unk.f_13 = hParam10;
	unk.f_12 = 1248274121;
	*uParam8 = { unk };

	if (!func_264(piParam0, &unk, 2113164098, bParam9, iParam11))
		return false;

	return true;
}

int func_154(Hash hParam0, Hash hParam1) // Position - 0x3E7E Hash - 0x19C351C8 ^0x40F6A58B
{
	Hash outData;
	int awardAcquireCostCount;
	int i;

	outData.f_4 = 15;
	outData.f_36 = 10;
	awardAcquireCostCount = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT(hParam0);

	if (awardAcquireCostCount == 0)
		return 0;

	for (i = 0; i < awardAcquireCostCount; i = i + 1)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(hParam0, i, &outData) && outData == hParam1)
			return outData.f_2;
	}

	return 0;
}

int func_155(Hash hParam0, Hash hParam1) // Position - 0x3EDB Hash - 0x3A2C8450 ^0x3C621176
{
	var outData;

	if (func_218(hParam0) || func_219(hParam0, 1077060302))
		return func_154(func_220(hParam0, true), hParam1);

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return 0;

	return outData.f_2;
}

void func_156(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0x3F34 Hash - 0x4EE39F09 ^0x4C62B7DF
{
	int i;

	if (iParam0 == -1)
		return;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
		{
			if (Global_1292143.f_20.f_1[i /*21*/].f_1 == 1 || Global_1292143.f_20.f_1[i /*21*/].f_1 == 5)
				Global_1292143.f_20.f_1[i /*21*/].f_4 = { uParam1 };
		
			return;
		}
	}

	return;
}

struct<8> func_157(int iParam0, int iParam1, var uParam2) // Position - 0x3FB2 Hash - 0x8259F61F ^0x8259F61F
{
	var unk;
	int i;
	int endRange;
	int num;
	int randomIntInRange;
	int num2;
	var unk6;
	BOOL flag;
	BOOL flag2;
	Ped playerPed;

	if (!func_45(&unk))
		return unk6;

	if (!func_46(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 14, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return unk6;

	if (!func_46(&unk, 22, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 23, iParam1, 0, 1))
		return unk6;

	if (!func_46(&unk, 25, 0, 0, 1))
		return unk6;

	endRange = func_54(&unk, 1);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());

	if (func_265())
		num2 = 1;
	else
		num2 = -1;

	if (PED::IS_PED_MALE(playerPed))
		flag2 = flag2 | true;
	else
		flag2 = flag2 | 2;

	if (PED::GET_PED_CROUCH_MOVEMENT(playerPed))
		flag2 = flag2 | 8;
	else
		flag2 = flag2 | 4;

	for (i = 0; i <= endRange - 1; i = i + 1)
	{
		num = (randomIntInRange + (i * num2) + endRange) % endRange;
		flag = func_266(iParam0, iParam1, num);
	
		if (flag2 && flag != flag2)
		{
		}
		else if (!func_46(&unk, 26, num, 0, 1))
		{
		}
		else
		{
			*uParam2 = func_267(unk);
			return func_268(unk);
		}
	}

	return unk6;
}

int func_158(int iParam0, int iParam1) // Position - 0x4122 Hash - 0xB7B5578F ^0xB7B5578F
{
	var unk;

	if (!func_45(&unk))
		return 0;

	if (!func_46(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 14, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return 0;

	if (!func_46(&unk, 22, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 23, iParam1, 0, 1))
		return 0;

	return func_269(unk);
}

void func_159(var uParam0, int iParam1) // Position - 0x41A1 Hash - 0x4F8BE4B5 ^0x8A18C31F
{
	uParam0->f_5 = iParam1;
	return;
}

void func_160(var uParam0, int iParam1) // Position - 0x41AF Hash - 0x4F8BE4B5 ^0xC6136975
{
	uParam0->f_6 = iParam1;
	return;
}

void func_161(var uParam0, int iParam1) // Position - 0x41BD Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

void func_162(var uParam0, int iParam1) // Position - 0x41CB Hash - 0x4F8BE4B5 ^0xFF22C7C
{
	uParam0->f_4 = iParam1;
	return;
}

void func_163(var uParam0, var uParam1) // Position - 0x41D9 Hash - 0x4F8BE4B5 ^0x52BFCD58
{
	uParam0->f_7 = uParam1;
	return;
}

void func_164(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0x41E7 Hash - 0x1137B908 ^0xCA45ED86
{
	uParam0->f_8 = { uParam1 };
	return;
}

BOOL func_165(int iParam0, int iParam1) // Position - 0x41FB Hash - 0xDC1A83B4 ^0xDA257122
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_9 && iParam0 != false;
}

void func_166(int iParam0) // Position - 0x4235 Hash - 0x7547CFC4 ^0x7547CFC4
{
	func_270(0, iParam0);
	return;
}

BOOL func_167(int iParam0, int iParam1) // Position - 0x4244 Hash - 0xDC1A83B4 ^0xAE29DD8D
{
	if (iParam1 == 255)
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	return Global_1289643[iParam1 /*19*/].f_10 && iParam0 != false;
}

void func_168(int iParam0) // Position - 0x427E Hash - 0xB751AE80 ^0xB751AE80
{
	func_270(2, iParam0);
	return;
}

int func_169() // Position - 0x428D Hash - 0x4228A1C2 ^0x6C90BC6E
{
	return Global_1300387.f_150;
}

void func_170(var uParam0) // Position - 0x429B Hash - 0x42868A8 ^0xB4A33CD8
{
	Global_1300387.f_150.f_1 = uParam0;
	return;
}

void func_171(int iParam0) // Position - 0x42AD Hash - 0x42868A8 ^0x56BBBF67
{
	Global_1300387.f_150.f_2 = iParam0;
	return;
}

void func_172(int iParam0) // Position - 0x42BF Hash - 0x42868A8 ^0x8E199625
{
	Global_1300387.f_150.f_3 = iParam0;
	return;
}

int func_173(Any* panParam0) // Position - 0x42D1 Hash - 0xD73B9827 ^0xA4E0D7D7
{
	return panParam0->f_6;
}

struct<8> func_174(int iParam0) // Position - 0x42DD Hash - 0x7B37561A ^0x7B37561A
{
	var unk;
	var unk6;

	if (!func_45(&unk))
		return unk6;

	if (!func_46(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 22, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 23, iParam0, 0, 1))
		return unk6;

	return func_271(unk);
}

BOOL func_175(int iParam0) // Position - 0x4345 Hash - 0x737E7AD5 ^0x737E7AD5
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 22, 0, 0, 1))
		return false;

	if (!func_46(&unk, 23, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 27, 0, 0, 1))
		return false;

	return func_272(unk, joaat("ANIM_SCENE"));
}

struct<8> func_176(Any* panParam0) // Position - 0x43B5 Hash - 0x2A5E80CA ^0x96427EA4
{
	return panParam0->f_8;
}

struct<8> func_177(int iParam0, int iParam1) // Position - 0x43C4 Hash - 0xE6F222D5 ^0xE6F222D5
{
	var unk;
	var unk6;

	if (!func_45(&unk))
		return unk6;

	if (!func_46(&unk, 13, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 22, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 23, iParam0, 0, 1))
		return unk6;

	if (!func_46(&unk, 56, 0, 0, 1))
		return unk6;

	if (!func_46(&unk, 57, iParam1, 0, 1))
		return unk6;

	return func_273(unk);
}

const char* func_178(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x445B Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_179(Any* panParam0, AnimScene ansParam1) // Position - 0x446F Hash - 0x4F8BE4B5 ^0x2E599B99
{
	panParam0->f_1 = ansParam1;
	return;
}

BOOL func_180(Ped pedParam0, int iParam1) // Position - 0x447D Hash - 0xD0E1548F ^0x3DA2A550
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return func_274(weaponHash);
}

BOOL func_181(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x4498 Hash - 0xBA023B92 ^0x16E0B707
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

AnimScene _STOPWATCH_IS_INITIALIZED(Any* panParam0) // Position - 0x44F1 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return panParam0->f_1;
}

int func_183(Any* panParam0) // Position - 0x44FD Hash - 0xD73B9827 ^0x6B2CFE8C
{
	return panParam0->f_5;
}

BOOL func_184(int iParam0) // Position - 0x4509 Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_275(1, iParam0);
}

var func_185() // Position - 0x4518 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1300387.f_296;
}

int func_186(Any* panParam0) // Position - 0x4527 Hash - 0xD73B9827 ^0x75451C21
{
	return panParam0->f_3;
}

BOOL func_187(int iParam0, int iParam1, var uParam2) // Position - 0x4533 Hash - 0xA3F61B33 ^0xA3F61B33
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 14, 0, 0, 1))
		return false;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 22, 0, 0, 1))
		return false;

	if (!func_46(&unk, 23, iParam1, 0, 1))
		return false;

	if (!func_46(&unk, 24, 0, 0, 1))
		return false;

	*uParam2 = func_276(unk);

	switch (*uParam2)
	{
		case -2135825642:
			uParam2->f_1 = { func_47(unk) };
			break;
	
		case joaat("Position"):
			uParam2->f_1 = { func_47(unk) };
			uParam2->f_4 = { func_200(unk) };
			break;
	
		case joaat("OBJECT"):
			uParam2->f_1 = { func_47(unk) };
			uParam2->f_7 = func_48(unk);
			uParam2->f_8 = func_108(unk);
			break;
	
		case joaat("PLAYER"):
			break;
	
		default:
			break;
	}

	return true;
}

Entity func_188(Vector3 vParam0, var uParam1, var uParam2, float fParam3, Hash hParam4) // Position - 0x4649 Hash - 0xE5887B20 ^0x3865FBD9
{
	int i;
	int entitiesNearPoint;
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	Entity entity;
	Entity entityFromItem;
	Hash entityModel;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam0, fParam3, itemSet, 3);

	for (i = 0; i <= entitiesNearPoint - 1; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset);
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(entityFromItem);
		
			if (entityModel != hParam4)
			{
			}
			else
			{
				entity = entityFromItem;
				break;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return entity;
}

Vector3 func_189(float fParam0, var uParam1, var uParam2) // Position - 0x46BC Hash - 0xFB6A39D2 ^0x80C9C759
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

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x46FB Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_191(Any* panParam0) // Position - 0x4725 Hash - 0x585AE02F ^0xDF83B205
{
	int i;
	int num;
	AnimScene animScene;
	var entityName;
	int num2;

	animScene = _STOPWATCH_IS_INITIALIZED(panParam0);
	num2 = func_173(panParam0);
	num = func_277(num2, joaat("PLAYER"));

	for (i = 0; i <= num - 1; i = i + 1)
	{
		if (!func_278(num2, joaat("PLAYER"), i, &entityName))
		{
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(animScene, &entityName, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), entityName.f_8);
		}
	}

	return;
}

BOOL func_192(Any* panParam0, int iParam1) // Position - 0x4789 Hash - 0x718DD1EF ^0x6714EB56
{
	return panParam0->f_16 && iParam1 != false;
}

void func_193(Any* panParam0, int iParam1) // Position - 0x479A Hash - 0x53A96DDB ^0xEAED7DCA
{
	panParam0->f_16 = panParam0->f_16 || iParam1;
	return;
}

void func_194() // Position - 0x47AD Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_279(0);
	return;
}

void func_195(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x47BA Hash - 0xF809D8B4 ^0x510DD861
{
	Player player;
	Ped playerPed;
	int i;

	Global_1072759.f_7 = 1;

	if (Global_1295666.f_16 - Global_1072759.f_9 > 2)
		if (bParam2)
			func_280(20f);

	Global_1072759.f_9 = Global_1295666.f_16;

	if (bParam0)
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(player))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
		}
		else
		{
			playerPed = PLAYER::GET_PLAYER_PED(player);
		
			if (!ENTITY::DOES_ENTITY_EXIST(playerPed))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(playerPed))
			{
				PED::SET_PED_RESET_FLAG(playerPed, 96, true);
			}
		}
	}

	if (func_281())
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();

	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
	func_282(250);

	if (bParam1)
		HUD::_0x5651516D947ABC53();

	return;
}

void func_196(Any* panParam0, int iParam1) // Position - 0x488D Hash - 0xA4EAD31F ^0xB80375FB
{
	panParam0->f_16 = panParam0->f_16 - panParam0->f_16 && iParam1;
	return;
}

void func_197(int iParam0, int iParam1) // Position - 0x48A5 Hash - 0x2D5EA878 ^0x4B3C84DD
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(iParam1, 1065353216);
	return;
}

int func_198(int iParam0) // Position - 0x48C3 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_199(int iParam0) // Position - 0x48CD Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_283(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1951910[iParam0 /*23*/].f_3);

	Global_1951910[iParam0 /*23*/].f_4 = 0;
	Global_1951910[iParam0 /*23*/] = 1;
	Global_1951910[iParam0 /*23*/].f_16 = 0;
	Global_1951910[iParam0 /*23*/].f_1 = 0;
	Global_1951910[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_9 = 0f;
	Global_1951910[iParam0 /*23*/].f_10 = 0;
	Global_1951910[iParam0 /*23*/].f_11 = 0;
	Global_1951910[iParam0 /*23*/].f_2 = 1;
	Global_1951910[iParam0 /*23*/].f_15 = -1f;
	return;
}

Vector3 func_200(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4980 Hash - 0x705D8A8A ^0x705D8A8A
{
	return func_106(&uParam0, 68, 1);
}

BOOL func_201(int iParam0, int iParam1) // Position - 0x4991 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x49A0 Hash - 0xA17D549C ^0x7BB6FCD0
{
	switch (iParam0)
	{
		case 1:
			return "ANIMAL_TRANSFORMATION_NOT_ENOUGH_HERBS";
	
		case 2:
			return "ANIMAL_TRANSFORMATION_EXIT_HELP";
	
		case 4:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_1";
	
		case 8:
			return "ANIMAL_TRANSFORMATION_ENTER_PART_2";
	
		case 16:
			return "ANIMAL_TRANSFORMATION_TIME_RUNNING_OUT";
	
		case 32:
			return "ANIMAL_TRANSFORMATION_ABORT";
	
		case 64:
			return "ANIMAL_TRANSFORMATION_COOLDOWN";
	
		default:
		
	}

	return "";
}

int func_203(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x4A12 Hash - 0x8EBD6187 ^0x42F0F0AC
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

int func_204(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4A4D Hash - 0xECC0BB97 ^0xECC0BB97
{
	return func_284(&uParam0, 83, 0, -1);
}

int func_205(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4A5F Hash - 0x9161A40E ^0x9161A40E
{
	return func_284(&uParam0, 84, 0, -1);
}

int func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4A71 Hash - 0x76D3355A ^0x76D3355A
{
	return func_284(&uParam0, 85, 0, -1);
}

int func_207(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4A83 Hash - 0x16FE2F8B ^0x16FE2F8B
{
	return func_109(&uParam0, 61, 1);
}

BOOL func_208(int iParam0, int iParam1, var uParam2) // Position - 0x4A94 Hash - 0xA3F61B33 ^0xA3F61B33
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 14, 0, 0, 1))
		return false;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 34, 0, 0, 1))
		return false;

	if (!func_46(&unk, 35, iParam1, 0, 1))
		return false;

	*uParam2 = { func_271(unk) };
	uParam2->f_8 = { func_47(unk) };
	uParam2->f_11 = func_48(unk);
	uParam2->f_12 = func_285(unk);
	return true;
}

int func_209(const char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, int iParam16) // Position - 0x4B3F Hash - 0x8FE94EEE ^0x148ED6A8
{
	int i;
	int num;
	int num2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (_IS_NULL_VECTOR(uParam2))
		return 0;

	if (fParam5 <= 0f)
		return 0;

	for (i = 0; i < 60; i = i + 1)
	{
		if (func_214(i, 2))
		{
			if (func_286(uParam2, Global_1951910[i /*23*/].f_6, 0.01f, true) && hParam1 == Global_1951910[i /*23*/].f_4)
			{
				num2 = i;
				return num2;
			}
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_287(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, iParam16);
		return num;
	}

	return 0;
}

struct<2> func_210(int iParam0) // Position - 0x4C1D Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

BOOL func_211(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4C31 Hash - 0xC9655EC3 ^0xE7BDB885
{
	if (Global_1940199.f_12)
		if (bParam2 || Global_1940199.f_13 > 0 || Global_1940199.f_11 > 0)
			return 1;
	else if (bParam1 && !(Global_1940199.f_9 == 1370593166))
		return 0;

	if (Global_1940199.f_14 > 0 || bParam2 && Global_1940199.f_14 > -1)
		return 1;

	if (bParam0)
		if (Global_1940199.f_7)
			if (bParam2 || Global_1940199.f_15 > 0)
				return 1;

	return 0;
}

int func_212(Ped pedParam0, int iParam1) // Position - 0x4CCF Hash - 0x25D0971D ^0xF7D4E234
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

void func_213(int iParam0, BOOL bParam1) // Position - 0x4D0E Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		if (Global_1951910[iParam0 /*23*/].f_5 == 5 && !func_214(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

BOOL func_214(int iParam0, int iParam1) // Position - 0x4D66 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1951910[iParam0 /*23*/].f_1 && iParam1 != false;
}

void func_215(int iParam0, int iParam1) // Position - 0x4D87 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 - Global_1951910[iParam0 /*23*/].f_1 && iParam1;
	return;
}

void func_216(int iParam0, BOOL bParam1) // Position - 0x4DBA Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951910[iParam0 /*23*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951910[iParam0 /*23*/].f_3, bParam1);

	return;
}

void func_217(int iParam0, int iParam1) // Position - 0x4DE3 Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1951910[iParam0 /*23*/].f_1 = Global_1951910[iParam0 /*23*/].f_1 || iParam1;
	return;
}

BOOL func_218(Hash hParam0) // Position - 0x4E0B Hash - 0x672E565C ^0xD531C7FC
{
	if (func_219(hParam0, 75135761))
		return true;

	return false;
}

BOOL func_219(Hash hParam0, Hash hParam1) // Position - 0x4E26 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_143(hParam0, 0))
		return func_288(func_248(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

Hash func_220(Hash hParam0, BOOL bParam1) // Position - 0x4E67 Hash - 0x6C21B9A ^0x615CAFBF
{
	var outData;

	if (!func_143(hParam0, 0))
		return func_289(func_248(hParam0), bParam1);

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData) || outData.f_5 == 0)
		return 0;

	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(outData.f_5))
		return 0;

	return outData.f_5;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_221(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x4EBF Hash - 0x18E9762 ^0x852B384E
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_143(hParam0, 0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_290(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_222(BOOL bParam0) // Position - 0x4F4F Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_291() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_292(bParam0));
}

BOOL func_223() // Position - 0x4F6D Hash - 0xD3E48215 ^0xDBA46110
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
		return false;

	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

BOOL func_224(int iParam0) // Position - 0x4F89 Hash - 0x65331643 ^0x65331643
{
	if (iParam0 < 0)
		return false;

	if (func_291() == 0)
		return func_293(iParam0);

	return iParam0 <= func_294();
}

BOOL func_225(int iParam0) // Position - 0x4FB6 Hash - 0x9186FF7C ^0xD4141850
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

int func_226(int iParam0, Hash hParam1) // Position - 0x4FD9 Hash - 0x3911B2FD ^0x13C4D79B
{
	if (iParam0 == 15 && func_219(hParam1, -2051813666))
		return 1;

	return 0;
}

int func_227(Hash hParam0, int iParam1) // Position - 0x4FFE Hash - 0x3B4883DD ^0xBE4A62CA
{
	var unk;
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_143(hParam0, 0))
		return 0;

	unk = { func_237(false) };
	unk.f_4 = func_295(iParam1);
	guid = { func_239(hParam0, unk, unk.f_4, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_292(false), &guid, false);
	return inventoryItemCountWithGuid;
}

int func_228(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5059 Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_143(hParam0, 0))
		return 0;

	num = func_238(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_296(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_297(hParam0, false);
	}

	if (func_250(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_292(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_298(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_292(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_229(Hash hParam0) // Position - 0x511B Hash - 0x7A41F8FA ^0x4ED5CABB
{
	if (!func_143(hParam0, 0))
		return false;

	if (func_219(hParam0, joaat("ci_tag_item_meat_animal")))
		return true;

	return func_230(hParam0);
}

BOOL func_230(Hash hParam0) // Position - 0x514A Hash - 0x1FFCC90D ^0xF5D25358
{
	if (!func_143(hParam0, 0))
		return 0;

	if (func_219(hParam0, -839724752))
		return 1;

	return 0;
}

int func_231(int iParam0, Hash hParam1, var uParam2) // Position - 0x5174 Hash - 0xFBFC702 ^0xFBFC702
{
	Ped ped;
	ItemSet itemset;
	int itemsetSize;
	var unk;
	int num;
	int i;
	Entity entityFromItem;
	int j;
	Hash hash;

	iParam0 = func_299(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_143(hParam1, 0))
		return 0;

	if (!func_300(iParam0))
		return 0;

	ped = func_301(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return 0;

	if (PED::IS_PED_INJURED(ped))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(ped))
		return 0;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(ped, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
	unk.f_1 = 10;
	unk.f_12 = 10;
	num = 0;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!func_302(entityFromItem))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem), true, true, ENTITY::GET_ENTITY_MODEL(entityFromItem), &unk, 0);
		
			for (j = 0; j < 10; j = j + 1)
			{
				hash = unk.f_1[j];
			
				if (hash == hParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
						*uParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				
					num = num + 1;
				}
			}
		}
	}

	if (ITEMSET::IS_ITEMSET_VALID(itemset))
		ITEMSET::DESTROY_ITEMSET(itemset);

	return num;
}

int func_232(Hash hParam0, int iParam1) // Position - 0x52A1 Hash - 0x7A47071E ^0x7A47071E
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	Hash hash;
	int i;
	Hash hash2;
	int num5;

	if (!func_143(hParam0, 0))
		return 0;

	if (!func_229(hParam0) && !func_230(hParam0))
		return 0;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	num4 = func_303(hParam0, 1697966752);

	if (num4 == 0)
		return 0;

	unk = { func_304(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 235313564, 0, 0, -1, num4, 0) };

	if (func_305(unk, &num2, &num3, 0))
	{
		for (i = 0; i < num3; i = i + 1)
		{
			hash = func_306(i, num2);
		
			if (func_143(hash, 0) && hParam0 != hash)
			{
				hash2 = func_307(hash);
			
				if (hash2 != 0)
				{
					num5 = func_227(hash, iParam1);
				
					if (num5 > 0)
						num = num + (num5 * func_309(hash2, func_308(hash), hParam0));
				}
			}
		}
	
		func_310(num2);
	}

	return num;
}

int func_233(int iParam0, Hash hParam1) // Position - 0x53BE Hash - 0x9B281D8A ^0x9B281D8A
{
	Ped horse;
	Hash hash;
	int num;
	int i;

	iParam0 = func_299(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	if (!func_143(hParam1, 0))
		return 0;

	if (!func_300(iParam0))
		return 0;

	horse = func_301(iParam0);
	hash = hParam1;

	if (ENTITY::IS_ENTITY_DEAD(horse))
		return 0;

	if (PED::IS_PED_INJURED(horse))
		return 0;

	if (TASK::IS_PED_IN_WRITHE(horse))
		return 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (PED::_GET_PELT_FROM_HORSE(horse, i) != hash)
		{
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

int func_234(Hash hParam0) // Position - 0x545C Hash - 0x3CFC8FF5 ^0xC9DF94B0
{
	int num;
	Entity firstEntityPedIsCarrying;

	if (!func_143(hParam0, 0))
		return 0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		firstEntityPedIsCarrying = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
	
		if (ENTITY::DOES_ENTITY_EXIST(firstEntityPedIsCarrying) && !ENTITY::IS_ENTITY_A_PED(firstEntityPedIsCarrying))
			if (hParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(firstEntityPedIsCarrying))
				num = num + 1;
	}

	return num;
}

BOOL func_235(Hash hParam0) // Position - 0x54AE Hash - 0x1B551CF7 ^0x61950700
{
	return func_150(hParam0) == 1868067663;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_236(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x54C2 Hash - 0x8AAE9761 ^0xF5D9C5DD
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_311(hParam0))
		return false;

	*uParam3 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam4;
		return false;
	}

	!bParam4;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ACQUIRE_COST(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x70;
	
		!bParam4;
	}

	if (bParam5)
		func_312(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

struct<4> func_237(BOOL bParam0) // Position - 0x5551 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_292(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_239(joaat("character"), func_313(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_239(joaat("character"), func_313(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_239(joaat("character"), func_313(), joaat("SLOTID_NONE"), bParam0);
}

int func_238(Hash hParam0) // Position - 0x55F1 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_143(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_239(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x561C Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_143(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_292(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

struct<4> func_240(BOOL bParam0) // Position - 0x564D Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_292(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_239(923904168, func_237(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_239(923904168, func_237(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_239(923904168, func_237(bParam0), -740156546, false);
}

BOOL func_241(Hash hParam0, BOOL bParam1) // Position - 0x56EE Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_150(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_314();
		else
			return 1;

	return 0;
}

BOOL func_242(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5725 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_253(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_243(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x5740 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_315(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_244(BOOL bParam0) // Position - 0x5761 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_292(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_239(271701509, func_237(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_239(271701509, func_237(bParam0), 12999093, false);
}

BOOL func_245(Hash hParam0, Hash hParam1) // Position - 0x57CB Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_150(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_316(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_246(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x5838 Hash - 0x113CD144 ^0x113CD144
{
	return func_317(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

int func_247(var uParam0) // Position - 0x584E Hash - 0x8D760BCC ^0xB90089A3
{
	if (!func_143(*uParam0, 0))
		return 0;

	if (!func_318(*uParam0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			break;
	
		default:
			return 0;
	}

	return 1;
}

Hash func_248(Hash hParam0) // Position - 0x58D8 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_249(Hash hParam0, int iParam1) // Position - 0x58E2 Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

int func_250(Hash hParam0, Hash hParam1) // Position - 0x58FC Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_249(func_248(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

BOOL func_251(Hash hParam0) // Position - 0x5928 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_238(hParam0) == joaat("WEAPON");
}

int func_252(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x593C Hash - 0xFE9D5798 ^0xDB9F4CF5
{
	if (!func_143(hParam0, 0))
	{
		if (func_249(func_248(hParam0), 2))
			return -1;
	
		return 0;
	}

	if (func_238(hParam0) == joaat("fee"))
		return -1;

	if (!bParam2 && func_250(hParam0, joaat("DEFAULT")) == 0)
		bParam2 = true;

	if (bParam2)
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_292(bParam3), hParam0);
}

int func_253(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x59B0 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_143(hParam0, 0))
		return 0;

	if (!bParam7 && func_250(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_239(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_292(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_292(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

// Unhandled jump detected. Output should be considered invalid
int func_254(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5) // Position - 0x5A2F Hash - 0x8D867191 ^0xF02772A4
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (bParam4 && hParam1 == -915411861 && func_319(hParam0, 59806960))
		hParam1 = 59806960;

	if (func_218(hParam0) || func_219(hParam0, 1077060302))
		return func_320(func_220(hParam0, false), hParam1, bParam3, true);

	if (!func_221(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam3;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar"))
		{
			if (iParam5 != 0 && unk[i /*2*/] != iParam5)
			{
			}
			else
			{
				return unk[i /*2*/].f_1;
				goto 0xDD;
			}
		}
	
		if (unk[i /*2*/] == 0)
			break;
	}

	!bParam3;
	return 0;
}

BOOL func_255(Hash hParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x5B1F Hash - 0xDDC024C0 ^0x60000BA4
{
	int num;
	var unk;
	var unk6;

	if (!func_143(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	num = func_250(hParam0, joaat("DEFAULT"));

	if (num != 0)
		return func_321(hParam0, iParam1, iParam2, iParam3, bParam4);

	unk = { func_148(hParam0, bParam4, 0) };
	unk6 = { func_239(hParam0, unk, unk.f_4, bParam4) };
	return func_322(hParam0, &unk6, &unk, iParam1, iParam2, iParam3, bParam4);
}

BOOL func_256(Hash hParam0) // Position - 0x5B97 Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
	
		default:
		
	}

	return false;
}

int func_257(Hash hParam0, Any* panParam1, BOOL bParam2) // Position - 0x5BC4 Hash - 0xE31FD889 ^0x3309583A
{
	int num;

	if (hParam0 == 0)
		return -1;

	if (!func_323(hParam0, panParam1))
		return -1;

	num = -1;

	if (bParam2)
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&num, joaat("basket"), hParam0))
			return func_325(func_324(num, hParam0, panParam1), num, panParam1);
	else
		return func_326(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(hParam0, &num, panParam1, 17), num, panParam1);

	return -1;
}

BOOL func_258(int* piParam0, BOOL bParam1) // Position - 0x5C2E Hash - 0x7D3BA1EA ^0x8B940399
{
	if (!bParam1)
		if (func_327(piParam0))
			return false;

	if (func_328(&(piParam0->f_6)))
		if (NETWORK::_0xE10F2D7715ABABEC(&(piParam0->f_6)))
			return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(2113164098))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("Sell")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("UPDATE")))
		return false;

	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(joaat("use")))
		return false;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return false;

	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
		return false;

	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
		return false;

	return true;
}

Hash func_259(Hash hParam0, int iParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Position - 0x5CCA Hash - 0x6E5FA253 ^0x344F4256
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (!func_311(hParam0))
		return 0;

	flag = func_201(iParam3, 2);
	flag2 = func_329(hParam0, -570078785, flag);
	flag3 = func_329(hParam0, -915411861, flag);

	if (func_329(hParam0, 997808187, flag))
		iParam1 = 997808187;
	else if (bParam4 && func_330(hParam0, &num) || func_331(hParam0, &num))
		iParam1 = num;
	else if (flag2 && !flag3)
		iParam1 = -570078785;
	else if (flag2 && flag3)
		if (func_332())
			iParam1 = -570078785;
		else
			iParam1 = -915411861;
	else if (flag3)
		iParam1 = -915411861;
	else if (func_333(15) && func_329(hParam0, 369710026, flag))
		iParam1 = 369710026;

	if (iParam1 == 0 && bParam2)
		return -915411861;

	return iParam1;
}

BOOL func_260(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x5DCF Hash - 0x67DCAB3C ^0x67DCAB3C
{
	if (hParam0 == 0)
		return false;

	if (!func_329(hParam0, hParam1, false))
		return false;

	if (func_201(iParam2, 2))
		if (func_334(hParam0, hParam1))
			return false;

	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(hParam0))
		return false;

	if (func_201(iParam2, 8))
		return func_335(hParam0, hParam1);

	return true;
}

BOOL func_261(int* piParam0, Any* panParam1, Hash hParam2, Hash hParam3, BOOL bParam4) // Position - 0x5E2F Hash - 0xF0597DAC ^0x3CBF97D5
{
	var unk;
	int num;

	unk = 15;

	if (!func_236(panParam1->f_17, hParam3, &unk, &num, false, true))
		return false;

	switch (num)
	{
		case 1:
			return func_336(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 2:
			return func_337(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 3:
			return func_338(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 4:
			return func_339(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 5:
			return func_340(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 6:
			return func_341(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 7:
			return func_342(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 8:
			return func_343(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 9:
			return func_344(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 10:
			return func_345(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 11:
			return func_346(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 12:
			return func_347(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 13:
			return func_348(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 14:
			return func_349(piParam0, panParam1, hParam2, &unk, bParam4);
	
		case 15:
			return func_350(piParam0, panParam1, hParam2, &unk, bParam4);
	
		default:
		
	}

	return false;
}

BOOL func_262(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x5FB7 Hash - 0xCDB04DC0 ^0xCDB04DC0
{
	Hash hash;

	if (func_351(hParam1))
	{
		hash = func_248(hParam1);
		return func_352(piParam0, hash, hParam7, iParam8, iParam9);
	}

	if (func_201(iParam9, 32))
		if (!func_353(hParam1, uParam2, hParam6))
			return false;

	if (!func_354(hParam1, hParam7, iParam9))
		return false;

	if (func_201(iParam9, 4))
		if (!func_355(piParam0, hParam1, uParam2, hParam6, hParam7, iParam8, false, bParam10))
			return false;

	if (func_201(iParam9, 8))
		return func_356(piParam0, hParam1, hParam7, iParam8);

	return true;
}

struct<17> func_263(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, BOOL bParam7) // Position - 0x6054 Hash - 0x442F1CC9 ^0x744DB9CB
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk.f_4 = { uParam1 };
	unk = { func_239(hParam0, unk.f_4, hParam5, true) };
	unk.f_8 = hParam0;
	unk.f_9 = iParam6;
	unk.f_11 = hParam5;

	if (bParam7)
	{
		unk.f_15 = func_250(hParam0, joaat("DEFAULT"));
	
		if (unk.f_15 != 0)
		{
			unk.f_4 = { func_313() };
			unk.f_11 = 0;
		}
	}

	return unk;
}

BOOL func_264(int* piParam0, Any* panParam1, Hash hParam2, BOOL bParam3, int iParam4) // Position - 0x60CE Hash - 0x3AC44E6C ^0xC544632E
{
	var unk;
	int num;

	unk = 15;

	if (!func_221(panParam1->f_8, panParam1->f_13, &unk, &num, true, false))
		return false;

	switch (num)
	{
		case 1:
			return func_357(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 2:
			return func_358(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 3:
			return func_359(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 4:
			return func_360(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 5:
			return func_361(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 6:
			return func_362(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 7:
			return func_363(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 8:
			return func_364(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 9:
			return func_365(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 10:
			return func_366(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 11:
			return func_367(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 12:
			return func_368(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 13:
			return func_369(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 14:
			return func_370(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		case 15:
			return func_371(piParam0, panParam1, hParam2, &unk, bParam3, iParam4);
	
		default:
		
	}

	return false;
}

BOOL func_265() // Position - 0x6276 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

BOOL func_266(int iParam0, int iParam1, int iParam2) // Position - 0x6297 Hash - 0xA3F61B33 ^0xA3F61B33
{
	var unk;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 14, 0, 0, 1))
		return false;

	if (!func_46(&unk, 16, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 22, 0, 0, 1))
		return false;

	if (!func_46(&unk, 23, iParam1, 0, 1))
		return false;

	if (!func_46(&unk, 25, 0, 0, 1))
		return false;

	if (!func_46(&unk, 26, iParam2, 0, 1))
		return false;

	if (!func_46(&unk, 27, 0, 0, 0))
		return -1;

	return func_272(unk, joaat("PLAYLIST"));
}

int func_267(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6355 Hash - 0x16FE2F8B ^0x16FE2F8B
{
	return func_109(&uParam0, 61, 1);
}

struct<8> func_268(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6366 Hash - 0x497907B5 ^0x497907B5
{
	return func_372(&uParam0, 61, 1);
}

int func_269(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6377 Hash - 0xD78307DC ^0xD78307DC
{
	return func_109(&uParam0, 66, 1);
}

void func_270(int iParam0, int iParam1) // Position - 0x6388 Hash - 0x429BCC45 ^0xBC59CA01
{
	int eventData;
	var value;
	Player player;
	int i;

	eventData.f_4 = -1;
	eventData.f_5 = -1;
	eventData = 47;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	eventData.f_4 = iParam0;
	eventData.f_5 = iParam1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(eventData.f_1))
		return;

	if (eventData.f_4 == 2 || eventData.f_4 == 3 || eventData.f_4 == 6 || eventData.f_4 == 7 || eventData.f_4 == 8 || eventData.f_4 == 9 || eventData.f_4 == 10 || eventData.f_4 == 11 || eventData.f_4 == 12 || eventData.f_4 == 13 || eventData.f_4 == 14 || eventData.f_4 == 15)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			player = PLAYER::INT_TO_PLAYERINDEX(i);
		
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, i);
			}
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}

	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 6, 0, &value);
	return;
}

struct<8> func_271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x64AC Hash - 0xC815C420 ^0xC815C420
{
	return func_372(&uParam0, 69, 1);
}

BOOL func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x64BD Hash - 0xB1B0767 ^0xB1B0767
{
	int i;
	int num;
	int num2;
	BOOL flag;
	BOOL flag2;

	if (!func_46(&uParam0, 28, iParam5, 0, 1))
		return false;

	num = func_54(&uParam0, 3);

	for (i = 0; i <= num - 1; i = i + 1)
	{
		num2 = 0;
		flag = 0;
		num2 = func_373(uParam0, i);
	
		switch (iParam5)
		{
			case joaat("PARTICLE"):
				flag = func_375(func_377(num2));
				break;
		
			case joaat("PLAYLIST"):
				flag = func_375(func_378(num2));
				break;
		
			case -952694274:
				flag = func_375(func_376(num2));
				break;
		
			case joaat("ANIM_SCENE"):
				flag = func_375(func_374(num2));
				break;
		
			default:
				break;
		}
	
		flag2 = flag2 || flag;
	}

	return flag2;
}

struct<8> func_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6571 Hash - 0xE505E3B2 ^0xE505E3B2
{
	return func_372(&uParam0, 95, 1);
}

BOOL func_274(Hash hParam0) // Position - 0x6582 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

BOOL func_275(int iParam0, int iParam1) // Position - 0x659D Hash - 0x61AB4BED ^0x265134F3
{
	int num;

	num = iParam0;

	if (iParam1 == 255)
		return func_379(&(Global_1102813.f_4), num, 5);

	if (iParam1 == func_380())
		return func_379(&(Global_1102813.f_4), num, 5);

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	if (Global_1295666.f_17[iParam1])
		return func_379(&(Global_1101558[iParam1 /*38*/].f_4), num, 5);

	return false;
}

int func_276(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6611 Hash - 0x10FDF846 ^0x10FDF846
{
	return func_109(&uParam0, 73, 1);
}

int func_277(int iParam0, int iParam1) // Position - 0x6622 Hash - 0xC19B42CE ^0xC19B42CE
{
	var unk;

	if (!func_45(&unk))
		return 0;

	if (!func_46(&unk, 13, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 22, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 23, iParam0, 0, 1))
		return 0;

	if (!func_46(&unk, 31, 0, 0, 1))
		return 0;

	if (!func_46(&unk, 32, iParam1, 0, 1))
		return 0;

	return func_54(&unk, 4);
}

BOOL func_278(int iParam0, int iParam1, int iParam2, var uParam3) // Position - 0x66A0 Hash - 0x57DE1FF5 ^0x57DE1FF5
{
	var unk;
	int num;

	if (!func_45(&unk))
		return false;

	if (!func_46(&unk, 13, 0, 0, 1))
		return false;

	if (!func_46(&unk, 22, 0, 0, 1))
		return false;

	if (!func_46(&unk, 23, iParam0, 0, 1))
		return false;

	if (!func_46(&unk, 31, 0, 0, 1))
		return false;

	if (!func_46(&unk, 32, iParam1, 0, 1))
		return false;

	if (!func_46(&unk, 33, iParam2, 0, 1))
		return false;

	switch (iParam1)
	{
		case joaat("PLAYER"):
			if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				num = 70;
			else
				num = 71;
			break;
	
		default:
			num = 69;
			break;
	}

	*uParam3 = { func_372(&unk, num, 1) };

	if (func_46(&unk, 27, 0, 0, 0))
		uParam3->f_8 = func_272(unk, -952694274);

	return true;
}

void func_279(int iParam0) // Position - 0x678B Hash - 0x30EE0D75 ^0xD4D59189
{
	Global_1956875.f_1431.f_2 = 0f;
	Global_1956875.f_1431.f_1 = iParam0;
	return;
}

void func_280(float fParam0) // Position - 0x67A8 Hash - 0x4ADB1AC3 ^0x8834322
{
	Ped ped;
	Vector3 entityCoords;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, true, false) };
	MISC::CLEAR_AREA(entityCoords, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(entityCoords, fParam0);
	return;
}

BOOL func_281() // Position - 0x67E7 Hash - 0x9AF3EE3F ^0xBF53F360
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
		return true;

	return false;
}

void func_282(int iParam0) // Position - 0x67FB Hash - 0x81B61271 ^0x22A3D4FE
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

BOOL func_283(int iParam0) // Position - 0x6822 Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_214(iParam0, 2);
}

int func_284(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6831 Hash - 0x179D4F26 ^0x546E812
{
	int num;

	panParam0->f_2 = iParam1;

	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, panParam0))
		num = iParam3;

	return num;
}

var func_285(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6851 Hash - 0x46EC6A56 ^0x46EC6A56
{
	return func_109(&uParam0, 74, 1);
}

BOOL func_286(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x6862 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_287(int iParam0, Hash hParam1, const char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, var uParam7, var uParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x68B7 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1951910[iParam0 /*23*/].f_4 = hParam1;
	Global_1951910[iParam0 /*23*/] = iParam4;
	Global_1951910[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951910[iParam0 /*23*/].f_2 = iParam5;
	Global_1951910[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951910[iParam0 /*23*/].f_9 = fParam9;
	Global_1951910[iParam0 /*23*/].f_10 = volParam10;
	Global_1951910[iParam0 /*23*/].f_11 = volParam11;
	Global_1951910[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951910[iParam0 /*23*/].f_5 = iParam12;
	Global_1951910[iParam0 /*23*/].f_1 = 2;
	Global_1951910[iParam0 /*23*/].f_17 = -1;
	Global_1951910[iParam0 /*23*/].f_18 = iParam16;
	Global_1951910[iParam0 /*23*/].f_19 = iParam15;
	Global_1951910[iParam0 /*23*/].f_20 = bParam25;
	Global_1951910[iParam0 /*23*/].f_22 = 0f;

	if (bParam25)
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	else
		Global_1951910[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();

	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
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
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1951910[iParam0 /*23*/].f_3 = prompt;
	func_213(iParam0, true);
	func_216(iParam0, true);
	func_217(iParam0, 128);
	return;
}

BOOL func_288(Hash hParam0, Hash hParam1) // Position - 0x6BD1 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_249(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

Hash func_289(Hash hParam0, BOOL bParam1) // Position - 0x6C07 Hash - 0x84086197 ^0x82A85664
{
	int num;

	if (!func_249(hParam0, 2))
		return 0;

	num = 0;

	if (num != 0 && bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(num))
		return 0;

	return num;
}

void func_290(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x6C40 Hash - 0x7EFAC478 ^0x4E4217E0
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
		unk13[i] = 1f;
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
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_150(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

int func_291() // Position - 0x6E16 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

int func_292(BOOL bParam0) // Position - 0x6E24 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_291() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_293(int iParam0) // Position - 0x6E65 Hash - 0x6C22F57C ^0x1F3736DE
{
	if (iParam0 < 0)
		return false;

	if (iParam0 == 0)
		return true;

	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_294() // Position - 0x6E88 Hash - 0xD56F3AB7 ^0x4ED7D083
{
	if (func_291() == 0)
		return MONEY::_NETWORK_GET_CASH_BALANCE();

	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_295(int iParam0) // Position - 0x6EA3 Hash - 0xF00685F3 ^0x39EB3A7D
{
	switch (iParam0)
	{
		case 0:
			return joaat("SLOTID_SATCHEL");
	
		case 1:
			return -1360128126;
	
		default:
		
	}

	return joaat("SLOTID_SATCHEL");
}

Hash func_296(Hash hParam0, int iParam1) // Position - 0x6ED4 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_143(hParam0, 0))
		return 0;

	num = func_238(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_219(hParam0, 1399091007))
	{
		func_381(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_297(Hash hParam0, BOOL bParam1) // Position - 0x6F4E Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_382(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_383(&unk, func_240(false));

	if (!func_384(&unk, &num, &num2, false))
		return 0;

	func_385(num);
	return num2;
}

struct<4> func_298(Hash hParam0, BOOL bParam1) // Position - 0x6FAD Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_148(hParam0, bParam1, false) };
	return func_239(hParam0, unk, unk.f_4, bParam1);
}

int func_299(int iParam0) // Position - 0x6FD2 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_38.f_289;

	return iParam0;
}

BOOL func_300(int iParam0) // Position - 0x6FEB Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_299(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1902887[iParam0 /*43*/]))
		return true;

	return false;
}

Ped func_301(int iParam0) // Position - 0x7023 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_299(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1902887[iParam0 /*43*/];
}

BOOL func_302(Entity eParam0) // Position - 0x704F Hash - 0xF5A7D53A ^0xBECE42FF
{
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (!ENTITY::GET_IS_ANIMAL(pedIndexFromEntityIndex))
		return false;

	if (FLOCK::_GET_ANIMAL_RARITY(pedIndexFromEntityIndex) == 2)
		return false;

	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(eParam0))
		return false;

	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(eParam0))
		return false;

	return true;
}

int func_303(Hash hParam0, int iParam1) // Position - 0x70B2 Hash - 0x7A1C2599 ^0xFF9B5634
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

struct<10> func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x70FC Hash - 0x440EE211 ^0xAE2816F9
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

BOOL func_305(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x71D0 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_306(int iParam0, int iParam1) // Position - 0x71F1 Hash - 0x3644D28E ^0x6DB2088F
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

Hash func_307(Hash hParam0) // Position - 0x7234 Hash - 0x5FB59AC3 ^0xF8EA047B
{
	int num;

	num = 0;

	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			num = joaat("a_c_toad_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			num = joaat("a_c_bluejay_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			num = joaat("A_C_Pigeon");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			num = joaat("a_c_cardinal_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			num = joaat("a_c_carolinaparakeet_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			num = joaat("a_c_rat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			num = joaat("a_c_crow_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			num = joaat("a_c_crab_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			num = joaat("a_c_frogbull_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			num = joaat("a_c_sparrow_01");
			break;
	
		case joaat("provision_fish_chain_pickerel_poor"):
		case joaat("provision_fish_chain_pickerel"):
			num = joaat("a_c_fishchainpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			num = joaat("a_c_quail_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			num = joaat("a_c_chipmunk_01");
			break;
	
		case joaat("provision_fish_muskie"):
		case joaat("provision_fish_muskie_poor"):
			num = joaat("a_c_fishmuskie_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			num = joaat("a_c_oriole_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			num = joaat("a_c_bat_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			num = joaat("a_c_woodpecker_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			num = joaat("a_c_cedarwaxwing_01");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			num = joaat("a_c_robin_01");
			break;
	
		case joaat("provision_fish_smallmouth_bass_poor"):
		case joaat("provision_fish_smallmouth_bass"):
			num = joaat("a_c_fishsmallmouthbass_01_ms");
			break;
	
		case joaat("provision_fish_perch_poor"):
		case joaat("provision_fish_perch"):
			num = joaat("a_c_fishperch_01_sm");
			break;
	
		case joaat("provision_fish_lake_sturgeon"):
		case joaat("provision_fish_lake_sturgeon_poor"):
			num = joaat("a_c_fishlakesturgeon_01_lg");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			num = joaat("a_c_songbird_01");
			break;
	
		case joaat("provision_fish_bluegill_poor"):
		case joaat("provision_fish_bluegill"):
			num = joaat("a_c_fishbluegil_01_sm");
			break;
	
		case joaat("provision_fish_largemouth_bass"):
		case joaat("provision_fish_largemouth_bass_poor"):
			num = joaat("a_c_fishlargemouthbass_01_ms");
			break;
	
		case joaat("provision_fish_northern_pike"):
		case joaat("provision_fish_northern_pike_poor"):
			num = joaat("a_c_fishnorthernpike_01_lg");
			break;
	
		case joaat("provision_fish_bullhead_catfish"):
		case joaat("provision_fish_bullhead_catfish_poor"):
			num = joaat("a_c_fishbullheadcat_01_sm");
			break;
	
		case joaat("provision_fish_redfin_pickerel_poor"):
		case joaat("provision_fish_redfin_pickerel"):
			num = joaat("a_c_fishredfinpickerel_01_sm");
			break;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			num = joaat("a_c_squirrel_01");
			break;
	
		case joaat("provision_fish_sockeye_salmon_poor"):
		case joaat("provision_fish_sockeye_salmon"):
			num = joaat("a_c_fishsalmonsockeye_01_ms");
			break;
	
		case joaat("provision_fish_rock_bass_poor"):
		case joaat("provision_fish_rock_bass"):
			num = joaat("a_c_fishrockbass_01_sm");
			break;
	
		case joaat("provision_fish_steelhead_trout_poor"):
		case joaat("provision_fish_steelhead_trout"):
			num = joaat("a_c_fishrainbowtrout_01_ms");
			break;
	
		case joaat("provision_fish_channel_catfish_poor"):
		case joaat("provision_fish_channel_catfish"):
			num = joaat("a_c_fishchannelcatfish_01_lg");
			break;
	
		case joaat("provision_fish_longnose_gar_poor"):
		case joaat("provision_fish_longnose_gar"):
			num = joaat("a_c_fishlongnosegar_01_lg");
			break;
	}

	return num;
}

int func_308(Hash hParam0) // Position - 0x75A6 Hash - 0x6D5A6948 ^0x8A3E949A
{
	if (func_219(hParam0, 1064293907))
		return 2;
	else if (func_219(hParam0, -1218707194))
		return 1;
	else if (func_219(hParam0, 1888974372))
		return 0;

	return 1;
}

int func_309(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x75EB Hash - 0x97BDF54F ^0xE45E1733
{
	var unk;
	int num;
	int i;

	unk = 15;
	PED::_0xB29C553BA582D09E(&unk, hParam0, iParam1, 1);
	num = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_143(unk[i], 0) && hParam2 == unk[i])
			num = num + 1;
	}

	return num;
}

int func_310(int iParam0) // Position - 0x763F Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

BOOL func_311(Hash hParam0) // Position - 0x7660 Hash - 0x3FD9EF89 ^0x3FC8CAC6
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(hParam0);
}

void func_312(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0x7678 Hash - 0x7EFAC478 ^0x4E4217E0
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

	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
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
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_150(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

struct<4> func_313() // Position - 0x784E Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_314() // Position - 0x785A Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_386(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

BOOL func_315(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x7877 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_292(false);
	*panParam1 = { func_239(hParam0, func_240(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_316(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x78BC Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_317(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x78EF Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_292(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

BOOL func_318(Hash hParam0) // Position - 0x7929 Hash - 0xD47FBCD ^0xAB7C7E88
{
	return func_219(hParam0, 1279601681);
}

BOOL func_319(Hash hParam0, Hash hParam1) // Position - 0x793C Hash - 0xFB5CB038 ^0x83BB35B8
{
	if (!func_143(hParam0, 0))
		return false;

	if (func_218(hParam0) || func_219(hParam0, 1077060302))
		return func_329(func_220(hParam0, false), hParam1, false);

	return ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT_FROM_COST_TYPE(hParam0, hParam1) > 0;
}

int func_320(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7988 Hash - 0x45FFEF5A ^0x45FFEF5A
{
	var unk;
	int num;
	int i;

	unk = 15;

	if (!func_236(hParam0, hParam1, &unk, &num, bParam2, bParam3))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash") || unk[i /*2*/] == joaat("currency_gold_bar") || unk[i /*2*/] == joaat("character_role_token"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

BOOL func_321(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x7A1C Hash - 0x1D349B48 ^0xBDB6885B
{
	int num;
	var unk;
	int num2;
	int i;
	int num3;
	var unk62;
	int num4;

	if (func_387(hParam0))
		return 0;

	if (iParam1 <= 0)
		return 0;

	num = func_250(hParam0, joaat("DEFAULT"));

	if (num == 0)
		return 0;

	if (!func_222(bParam4))
	{
		unk = 10;
	
		if (num == 0)
			return 0;
	
		if (!func_388(&unk, &num2, hParam0, num, iParam1, true) || num2 < 1)
			return 0;
	
		num3 = -1;
		unk62.f_9 = 1;
		unk62.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < num2; i = i + 1)
		{
			unk62 = { func_389(hParam0, &unk[i /*6*/]) };
			unk62.f_12 = hParam2;
			num3 = func_257(joaat("use"), &unk62, true);
		
			if (num3 == -1)
				return 0;
		}
	
		if (num3 != -1)
		{
			num4.f_7 = -142743235;
			num4.f_16 = -1;
			num4 = iParam3;
			num4.f_7 = hParam2;
			func_156(num3, num4);
			return 1;
		}
	
		return 0;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_292(bParam4), hParam0, iParam1, hParam2))
		return 0;

	return 1;
}

BOOL func_322(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x7B34 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;
	var unk15;
	int num2;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_387(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_246(*panParam1, &unk, bParam6, false, -1))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_222(bParam6))
	{
		num = -1;
	
		if (unk.f_13)
		{
		}
		else if (func_291() == 0)
		{
			unk15.f_9 = 1;
			unk15.f_11 = joaat("SLOTID_NONE");
			unk15.f_8 = hParam0;
			unk15 = { *panParam1 };
			unk15.f_4 = { *uParam2 };
			unk15.f_11 = uParam2->f_4;
			unk15.f_9 = iParam3;
			unk15.f_12 = hParam4;
			num = func_257(joaat("use"), &unk15, true);
		
			if (num != -1)
			{
				num2.f_7 = -142743235;
				num2.f_16 = -1;
				num2 = iParam5;
				num2.f_7 = hParam4;
				func_156(num, num2);
			}
		}
	
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_292(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_323(Hash hParam0, Any* panParam1) // Position - 0x7C52 Hash - 0xB914F903 ^0x1DD44828
{
	int num;

	num = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(hParam0, panParam1);

	if (hParam0 == joaat("use"))
		if (func_390(panParam1->f_8, hParam0, num, 2048) || func_390(panParam1->f_8, hParam0, num, 32768) || func_390(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (hParam0 == 1168099063)
		if (func_390(panParam1->f_8, hParam0, num, 4) || func_390(panParam1->f_8, hParam0, num, 256) || func_390(panParam1->f_8, hParam0, num, 65536) || func_390(panParam1->f_8, hParam0, num, 131072))
			return false;
	else if (hParam0 == joaat("spend"))
		if (func_390(panParam1->f_8, hParam0, num, 1) || func_390(panParam1->f_8, hParam0, num, 8) || func_390(panParam1->f_8, hParam0, num, 65536) || func_390(panParam1->f_8, hParam0, num, 32))
			return false;
	else if (hParam0 == joaat("Sell"))
		if (func_390(panParam1->f_8, hParam0, num, 1) || func_390(panParam1->f_8, hParam0, num, 16) || func_390(panParam1->f_8, hParam0, num, 2) || func_390(panParam1->f_8, hParam0, num, 65536))
			return false;
	else if (func_390(panParam1->f_8, hParam0, num, 8) || func_390(panParam1->f_8, hParam0, num, 4096) || func_390(panParam1->f_8, hParam0, num, 256) || func_390(panParam1->f_8, hParam0, num, 65536))
		return false;

	return true;
}

BOOL func_324(int iParam0, Hash hParam1, Any* panParam2) // Position - 0x7E28 Hash - 0xC2FFDE1C ^0x97706777
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam2, 0);
}

int func_325(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x7E3F Hash - 0x85216370 ^0xE7D00C30
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_391(iParam1, 1, 0, 0);
			return iParam1;
		}
	
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}

	func_391(iParam1, 2, 0, 0);
	return -1;
}

int func_326(BOOL bParam0, int iParam1, Any* panParam2) // Position - 0x7E88 Hash - 0xE2AB25BA ^0xE2AB25BA
{
	if (bParam0)
	{
		func_391(iParam1, 1, 0, 0);
		return iParam1;
	}

	return -1;
}

BOOL func_327(int* piParam0) // Position - 0x7EA4 Hash - 0xF95E1119 ^0x322602AD
{
	int num;

	if (piParam0->f_1 == -1)
		return false;

	num = func_392(piParam0);

	if (num == 1 || num == 5)
		return true;

	return false;
}

BOOL func_328(var uParam0) // Position - 0x7ED6 Hash - 0x36229A1B ^0x2A9934D3
{
	if (*uParam0 == 0 && uParam0->f_1 == 0 || uParam0->f_1 == -889271554 && uParam0->f_2 == 0 && uParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_329(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x7F1C Hash - 0xDFD4B035 ^0x7F7C43A6
{
	if (!func_311(hParam0))
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_COUNT_FROM_COST_TYPE(hParam0, hParam1) == 0)
		return false;

	if (bParam2)
		return !func_334(hParam0, hParam1);

	return true;
}

BOOL func_330(Hash hParam0, var uParam1) // Position - 0x7F54 Hash - 0x4D07B4AD ^0x4D07B4AD
{
	*uParam1 = func_393(hParam0, true);
	return *uParam1 != 0;
}

BOOL func_331(Hash hParam0, var uParam1) // Position - 0x7F6B Hash - 0xA213590B ^0xA213590B
{
	*uParam1 = func_394(hParam0, true, false);
	return *uParam1 != 0;
}

BOOL func_332() // Position - 0x7F83 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_22477;
}

BOOL func_333(int iParam0) // Position - 0x7F92 Hash - 0x16518DC6 ^0xD6363784
{
	if (iParam0 == 34 && Global_1915656.f_22504.f_1)
		return true;

	if (func_395(true))
		if (Global_1915656.f_20241 == iParam0)
			return true;

	return false;
}

BOOL func_334(Hash hParam0, Hash hParam1) // Position - 0x7FCD Hash - 0x86D562BB ^0xB258F193
{
	var outData;
	int outUnk;
	Hash unlockHash;
	int num;
	int i;
	int j;

	outData = 10;
	outData.f_1.f_4 = 15;
	outData.f_1.f_36 = 10;
	outData.f_1.f_47.f_4 = 15;
	outData.f_1.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	outData.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(hParam0, &outData, &outUnk, 10) || outUnk == 0)
		return false;

	num = 0;

	for (i = 0; i < outUnk; i = i + 1)
	{
		if (outData[i /*47*/] == hParam1)
		{
			num = outData[i /*47*/].f_35;
		
			for (j = 0; j < num; j = j + 1)
			{
				unlockHash = outData[i /*47*/].f_36[j];
			
				if (unlockHash == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
				{
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_335(Hash hParam0, Hash hParam1) // Position - 0x8117 Hash - 0xB71B0B73 ^0xE4713C6D
{
	int num;
	int num2;
	var unk;

	if (hParam1 == -570078785)
	{
		num = func_320(hParam0, -570078785, false, true);
		num == 0;
	
		if (!func_225(num))
		{
			if (Global_1915656.f_20644)
				func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_396(num)));
		
			return 0;
		}
	}
	else if (hParam1 == -915411861)
	{
		num2 = func_320(hParam0, -915411861, false, true);
		num2 == 0;
	
		if (!func_224(num2))
		{
			if (Global_1915656.f_20644)
				func_397("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam1 == 997808187)
	{
		return 1;
	}

	if (!func_146(hParam0, hParam1, &unk, true, false))
		return 0;

	return 1;
}

BOOL func_336(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x81D1 Hash - 0x4801AC33 ^0x977B4A54
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4);
}

BOOL func_337(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x81FD Hash - 0x79BD6891 ^0x6EEFD0DD
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_338(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x8232 Hash - 0x50B8B41C ^0x57F7DD8D
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_339(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x8270 Hash - 0x95B6482C ^0xD86BD1B3
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_340(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x82B7 Hash - 0xA71C5094 ^0xD7710400
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_341(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x8307 Hash - 0xA70AFF4C ^0x87A14E1A
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_342(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x8360 Hash - 0x9D241613 ^0x5206EC63
{
	int num;

	num = 7;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_343(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x83C2 Hash - 0xD3D82136 ^0x2BD9FD92
{
	int num;

	num = 8;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_344(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x842E Hash - 0xB89E9756 ^0xC7E4B9B7
{
	int num;

	num = 9;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_345(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x84A3 Hash - 0xAF93960A ^0x4FD34C17
{
	int num;

	num = 10;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_346(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x8521 Hash - 0xA7BE52A0 ^0x83098350
{
	int num;

	num = 11;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_347(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x85A8 Hash - 0x78A25486 ^0xE1D6F33B
{
	int num;

	num = 12;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_348(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x8638 Hash - 0x41DDF9C2 ^0x5DB4EE85
{
	int num;

	num = 13;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_349(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x86D1 Hash - 0x69651352 ^0x3F210A96
{
	int num;

	num = 14;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_350(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0x8773 Hash - 0xD2B02045 ^0xF05687F5
{
	int num;

	num = 15;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_398(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4);
}

BOOL func_351(Hash hParam0) // Position - 0x881E Hash - 0xA7C375F ^0xA7C375F
{
	Hash hash;

	hash = func_248(hParam0);

	if (func_249(hash, 2))
		return true;

	return false;
}

BOOL func_352(int* piParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x883D Hash - 0x48FFE57F ^0x48FFE57F
{
	int num;
	var unk;
	var unk2;
	int i;
	var unk4;
	Hash hash;
	var unk85;
	var unk89;

	if (!func_249(hParam1, 2))
		return 0;

	unk2 = 1;
	unk4 = 16;
	func_399(hParam1, &unk2, &unk, &unk4, &num);

	if (func_201(iParam4, 8) && !func_400(hParam1, hParam2, iParam3))
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (unk4[i /*5*/].f_1 == joaat("SLOTID_NONE"))
		{
			hash = unk4[i /*5*/];
		
			if (func_201(iParam4, 4))
				if (!func_355(piParam0, hash, unk85, unk89, hParam2, iParam3 * unk4[i /*5*/].f_4, true, true))
					return 0;
		}
	}

	return 1;
}

BOOL func_353(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5) // Position - 0x88E8 Hash - 0x7947EF49 ^0x975F946
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_246(uParam1, &unk, true, false, -1))
		return false;

	if (!func_316(hParam0, func_150(unk.f_4), hParam5))
		return false;

	return true;
}

BOOL func_354(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x8939 Hash - 0xAE4FAB93 ^0xAE4FAB93
{
	if (func_201(iParam2, 1))
		if (!func_401(hParam0))
			return false;

	if (func_201(iParam2, 2))
		if (func_402(hParam0, hParam1, true))
			return false;

	return true;
}

BOOL func_355(int* piParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6, Hash hParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x8974 Hash - 0xFE04F182 ^0x2B0693EE
{
	var unk;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2))
		return false;

	unk.f_4 = hParam6;
	unk = { uParam2 };
	num = func_253(hParam1, uParam2, hParam6, true, !bParam10, false);
	num2 = func_252(hParam1, &unk, !bParam10, true);

	if (bParam9)
		num3 = 1;
	else
		func_403(hParam1, hParam7, &num3, false);

	num4 = func_404(piParam0, hParam1) * num3;
	num4 > 0;

	if (num2 >= 0)
	{
		num5 = num2 - (num + num4);
		num6 = iParam8 * num3;
	
		if (num6 > num2)
			num6 = num2;
	
		if (num5 <= 0)
			return false;
		else if (num6 - num5 >= num3)
			return false;
	}

	return true;
}

BOOL func_356(int* piParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x8A2B Hash - 0xB3A38359 ^0x2FF409D
{
	int num;
	int num2;
	int num3;
	int num4;
	var unk;
	var unk3;

	if (func_405(hParam1, true) && !func_406(hParam1, true))
	{
		if (Global_1915656.f_20644)
			func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
	
		return 0;
	}

	if (hParam2 == -570078785)
	{
		num = func_254(hParam1, -570078785, true, false, true, 0);
		num == 0;
		num2 = num * iParam3;
	
		if (!func_225(num2 + func_407(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", num2 / 100));
		
			return 0;
		}
	}
	else if (hParam2 == -915411861)
	{
		num3 = func_254(hParam1, -915411861, true, false, true, 0);
		num3 == 0;
		num4 = num3 * iParam3;
	
		if (!func_224(num4 + func_407(piParam0, hParam2)))
		{
			if (Global_1915656.f_20644)
				func_397("SHOP_H_TOO_POOR");
		
			return 0;
		}
	}
	else if (hParam2 == 997808187)
	{
		return 1;
	}

	if (func_249(func_248(hParam1), 2))
		if (!func_408(func_248(hParam1), iParam3, hParam2, &unk, true))
			return 0;
	else if (func_143(hParam1, 0))
		if (!func_142(hParam1, iParam3, hParam2, &unk, &unk3, false, true, false))
			return 0;

	return 1;
}

BOOL func_357(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8B73 Hash - 0x6C19C4AE ^0xD83B353E
{
	var unk;

	unk = 1;
	unk.f_1.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, unk, &unk, bParam4, iParam5);
}

BOOL func_358(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8BA1 Hash - 0x8B27BE2E ^0xAADA8B60
{
	int num;

	num = 2;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_359(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8BD8 Hash - 0xD4CDEBBB ^0xBF2724AE
{
	int num;

	num = 3;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_360(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8C18 Hash - 0xD685F3D ^0x43E0AB59
{
	int num;

	num = 4;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_361(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8C61 Hash - 0xDF565364 ^0x91E17214
{
	int num;

	num = 5;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_362(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8CB3 Hash - 0x34514D80 ^0x4B6EF0F8
{
	int num;

	num = 6;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_363(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8D0E Hash - 0xCAE539AC ^0xECCA6C83
{
	int num;

	num = 7;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_364(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8D72 Hash - 0x56AD96CC ^0x971EFE86
{
	int num;

	num = 8;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_365(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8DE0 Hash - 0x1B3CBC5E ^0x508721F5
{
	int num;

	num = 9;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_366(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8E57 Hash - 0xA29DCDA ^0xEDD5D2BE
{
	int num;

	num = 10;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_367(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8ED7 Hash - 0x4B3D6141 ^0xF7C4BBFB
{
	int num;

	num = 11;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_368(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8F60 Hash - 0xCE26321D ^0xE0369832
{
	int num;

	num = 12;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_369(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x8FF2 Hash - 0x72FA62DD ^0x50977A79
{
	int num;

	num = 13;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_370(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x908D Hash - 0xCE2A63CA ^0x257C4997
{
	int num;

	num = 14;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

BOOL func_371(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, BOOL bParam4, int iParam5) // Position - 0x9131 Hash - 0x9E474A42 ^0x2D85E611
{
	int num;

	num = 15;
	num.f_1.f_1 = 10;
	num.f_1.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	num.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_409(piParam0, panParam1, hParam2, uParam3, num, &num, bParam4, iParam5);
}

struct<8> func_372(Any* panParam0, int iParam1, int iParam2) // Position - 0x91DE Hash - 0x1E611575 ^0x844B49DF
{
	var unk;

	panParam0->f_2 = iParam1;
	!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk, panParam0);
	return unk;
}

int func_373(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x91FD Hash - 0x15BA38D8 ^0x15BA38D8
{
	if (!func_46(&uParam0, 30, iParam5, 0, 1))
		return 0;

	return func_109(&uParam0, 61, 1);
}

int func_374(int iParam0) // Position - 0x9222 Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case -1813649426:
			return 1;
	
		case -1728078503:
			return 2;
	
		case joaat("ASF_ENABLE_LETTER_BOX"):
			return 2048;
	
		case joaat("ASF_BLOCK_SKIPPING"):
			return 256;
	
		case -1303182884:
			return 4096;
	
		case -1138842803:
			return 512;
	
		case -656485570:
			return 8;
	
		case -608370326:
			return 128;
	
		case -40729341:
			return 32;
	
		case 513761045:
			return 64;
	
		case 664704845:
			return 4;
	
		case 856889675:
			return 16;
	
		case 1317645850:
			return 8192;
	
		case 1930555512:
			return 32768;
	
		case 1959327570:
			return 1024;
	
		case 2020911072:
			return 16384;
	
		default:
		
	}

	return 0;
}

int func_375(int iParam0) // Position - 0x92EC Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

int func_376(int iParam0) // Position - 0x92F6 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case joaat("ASSE_GIVE_OWNERSHIP"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_377(int iParam0) // Position - 0x9314 Hash - 0xD9E40410 ^0xD9E40410
{
	switch (iParam0)
	{
		case -1420685820:
			return 1;
	
		case -445480404:
			return 2;
	
		case -138533181:
			return 4;
	
		case 74623641:
			return 64;
	
		case 675169979:
			return 16;
	
		case 1324736666:
			return 8;
	
		default:
		
	}

	return 0;
}

int func_378(int iParam0) // Position - 0x9367 Hash - 0x697A209D ^0x697A209D
{
	switch (iParam0)
	{
		case joaat("crouching"):
			return 8;
	
		case joaat("Standing"):
			return 4;
	
		case joaat("Male"):
			return 1;
	
		case joaat("female"):
			return 2;
	
		default:
		
	}

	return 0;
}

BOOL func_379(var uParam0, int iParam1, int iParam2) // Position - 0x93A4 Hash - 0x15F7E5EE ^0x39F4E7C
{
	return MISC::IS_BIT_SET(uParam0->[iParam1 / 31], iParam1 % 31);
}

int func_380() // Position - 0x93DB Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

void func_381(Hash hParam0, var uParam1, var uParam2) // Position - 0x93EA Hash - 0x38E6C2DD ^0xA4FE6475
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

struct<18> func_382(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x95F6 Hash - 0x90CCF0F4 ^0xA5F3D799
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

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

void func_383(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x96D4 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_384(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x96EF Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_292(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_385(int iParam0) // Position - 0x9714 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_386(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9735 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_410(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_292(bParam1), hParam0, bParam3);
}

BOOL func_387(Hash hParam0) // Position - 0x9768 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_388(Any anParam0, var uParam1, Hash hParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x977E Hash - 0xF48E6FC8 ^0xA8BADD49
{
	*uParam1 = 0;

	if (iParam4 < 1)
		return false;
	else if (*anParam0 != 10)
		return false;

	if (iParam3 == 0)
	{
		iParam3 = func_250(hParam2, joaat("DEFAULT"));
	
		if (iParam3 == 0)
			return false;
	}

	if (!NETSHOPPING::_0xD1555FBC96C88444(hParam2, iParam3, iParam4, anParam0, 10))
		return false;

	if (!func_411(anParam0, uParam1, iParam4, bParam5))
		return false;

	return true;
}

struct<17> func_389(Hash hParam0, var uParam1) // Position - 0x97EB Hash - 0x692393AE ^0xF1DF31F2
{
	var unk;

	unk.f_9 = 1;
	unk.f_11 = joaat("SLOTID_NONE");
	unk = { func_239(hParam0, *uParam1, uParam1->f_4, true) };
	unk.f_4 = { *uParam1 };
	unk.f_8 = hParam0;
	unk.f_9 = uParam1->f_5;
	unk.f_11 = uParam1->f_4;
	return unk;
}

BOOL func_390(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x983E Hash - 0xF94ED236 ^0xF94ED236
{
	if (func_412(iParam2, iParam3))
		return true;

	return false;
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x9856 Hash - 0x3169A239 ^0x47E831EC
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

	func_413(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_392(int* piParam0) // Position - 0x98F4 Hash - 0xAC4ACAD7 ^0x53A8C861
{
	return func_414(piParam0->f_1);
}

Hash func_393(Hash hParam0, BOOL bParam1) // Position - 0x9904 Hash - 0x73CC7FFA ^0x73CC7FFA
{
	int i;
	int num;
	var unk;
	Hash hash;
	int j;

	unk = 15;

	for (i = 0; i < 3; i = i + 1)
	{
		hash = func_415(i, true, false);
	
		if (!func_236(hParam0, hash, &unk, &num, false, true))
		{
		}
		else
		{
			for (j = 0; j < num; j = j + 1)
			{
				if (func_416(unk[j /*2*/]))
				{
					if (!bParam1 || func_228(unk[j /*2*/], false, true, true) > 0)
						return hash;
				
					break;
				}
			
				if (unk[j /*2*/] == 0)
					break;
			}
		}
	}

	return 0;
}

Hash func_394(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9997 Hash - 0x2596799 ^0x2596799
{
	int i;
	int num;
	var unk;
	var unk2;
	Hash hash;
	Hash hash2;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var unk3;
	Hash hash3;
	int j;

	unk3 = 15;

	for (i = 0; i < 5; i = i + 1)
	{
		hash3 = func_415(i, false, true);
	
		if (!func_236(hParam0, hash3, &unk3, &num, false, true))
		{
		}
		else
		{
			flag3 = false;
			hash2 = 0;
		
			for (j = 0; j < num; j = j + 1)
			{
				if (func_417(unk3[j /*2*/]))
				{
					if (!bParam1 || func_228(unk3[j /*2*/], false, true, true) > 0)
						flag3 = true;
				}
				else if (unk3[j /*2*/] == joaat("currency_cash") || unk3[j /*2*/] == joaat("currency_gold_bar"))
				{
					if (bParam2 && unk3[j /*2*/] == joaat("currency_cash") || !bParam2 && unk3[j /*2*/] == joaat("currency_gold_bar"))
					{
						if (hash == 0 || flag && unk3[j /*2*/].f_1 < unk)
						{
							hash2 = hash3;
							unk2 = unk3[j /*2*/].f_1;
							flag2 = 1;
						}
					}
					else if (hash == 0 || unk3[j /*2*/].f_1 < unk)
					{
						hash2 = hash3;
						unk2 = unk3[j /*2*/].f_1;
						flag2 = 0;
					}
				}
				else if (unk3[j /*2*/] == 0)
				{
					break;
				}
			}
		
			if (flag3 && hash2 != 0)
			{
				hash = hash2;
				unk = unk2;
				flag = flag2;
			}
		}
	}

	return hash;
}

BOOL func_395(BOOL bParam0) // Position - 0x9AF6 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

int func_396(int iParam0) // Position - 0x9B26 Hash - 0x15FBACEE ^0x15FBACEE
{
	return iParam0 / 100;
}

void func_397(const char* sParam0) // Position - 0x9B33 Hash - 0x6D26E8EF ^0x36AA660D
{
	Global_1915656.f_22470 = func_203(sParam0, 10000, 0, 0, 0, true);
	return;
}

BOOL func_398(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6) // Position - 0x9B4F Hash - 0x131A2EB4 ^0xBB62EC7B
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_418(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1, &panParam5->[i /*42*/]))
			return false;
	}

	return func_419(piParam0, panParam1, panParam5, hParam2, bParam6);
}

int func_399(Hash hParam0, Any anParam1, var uParam2, var uParam3, var uParam4) // Position - 0x9BC5 Hash - 0xBDBB6885 ^0xBDBB6885
{
	Hash key;
	Hash outData;
	int i;
	int j;
	int num;

	if (!func_249(hParam0, 2))
		return 0;

	if (*uParam2 > *anParam1)
		return 0;

	for (i = 0; i < *anParam1; i = i + 1)
	{
	}

	num = ITEMDATABASE::_0x799FCD53358ED5FA(hParam0, anParam1);

	for (j = 0; j < num; j = j + 1)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(hParam0, anParam1, j, &key))
		{
			if (anParam1->[0] == 0)
			{
				anParam1->[0] = key;
			}
			else
			{
				*uParam2 = *uParam2 + 1;
				anParam1->[*uParam2] = key;
			}
		
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(key, &outData))
			{
				if (func_143(outData, 0))
				{
					if (*uParam4 >= 0 && *uParam4 < *uParam3)
					{
						uParam3->[*uParam4 /*5*/] = { key };
						*uParam4 = *uParam4 + 1;
					}
					else
					{
						return 0;
					}
				}
			}
		
			anParam1->[*uParam2] = 0;
		
			if (*uParam2 > 0)
				*uParam2 = *uParam2 - 1;
		}
	}

	return 1;
}

BOOL func_400(Hash hParam0, Hash hParam1, int iParam2) // Position - 0x9CAA Hash - 0x35FADD37 ^0x52F2BABB
{
	var unk;
	var unk48;

	unk.f_4 = 15;
	unk.f_36 = 10;
	func_420(hParam0, hParam1, &unk);

	if (hParam1 == -570078785)
	{
		unk.f_3 == 0;
	
		if (!func_225(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_397(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_396(unk.f_3 * iParam2)));
		
			return false;
		}
	}
	else if (hParam1 == -915411861)
	{
		unk.f_3 == 0;
	
		if (!func_224(unk.f_3 * iParam2))
		{
			if (Global_1915656.f_20644)
				func_397("SHOP_H_TOO_POOR");
		
			return false;
		}
	}
	else if (hParam1 == 997808187)
	{
		return true;
	}

	if (!func_408(hParam0, iParam2, hParam1, &unk48, true))
		return false;

	return true;
}

BOOL func_401(Hash hParam0) // Position - 0x9D76 Hash - 0xBF9BC979 ^0x2C23A458
{
	BOOL flag;
	Hash weaponUnlock;

	if (hParam0 == 0)
		return false;

	flag = false;

	if (func_291() == -1)
	{
		if (func_251(hParam0))
		{
			weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);
			flag = UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock);
		}
		else
		{
			return true;
		}
	}
	else
	{
		flag = UNLOCK::UNLOCK_IS_VISIBLE(hParam0);
	}

	return flag;
}

BOOL func_402(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x9DC0 Hash - 0x1244E24C ^0xA4727049
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_143(hParam0, 0))
		return func_421(func_248(hParam0), hParam1, bParam2);

	if (func_218(hParam0) || func_219(hParam0, 1077060302))
		return func_334(func_220(hParam0, true), hParam1);

	unk = 10;

	if (bParam2 && func_291() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return true;

	if (!func_422(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

BOOL func_403(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x9E85 Hash - 0x6E96D276 ^0x9A3B0071
{
	var outData;

	if (!func_143(hParam0, 0) && !func_249(func_248(hParam0), 2))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return false;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return true;
}

int func_404(int* piParam0, Hash hParam1) // Position - 0x9EE4 Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (itemInfo.f_8 != hParam1)
			{
			}
			else
			{
				num = num + itemInfo.f_9;
			}
		}
	}

	return num;
}

BOOL func_405(Hash hParam0, BOOL bParam1) // Position - 0x9F4E Hash - 0xAB149130 ^0xE03110FF
{
	if (!func_219(hParam0, 947377998))
		return false;

	if (bParam1)
	{
		if (func_219(hParam0, -1090933859))
			return func_220(hParam0, true) != 0;
	
		if (func_402(hParam0, -915411861, false) || func_402(hParam0, 600942249, false) || func_402(hParam0, -570078785, false))
			return true;
		else
			return false;
	}

	return true;
}

BOOL func_406(Hash hParam0, BOOL bParam1) // Position - 0x9FC7 Hash - 0x40576C2F ^0xED1B83AA
{
	Hash hash;
	var unk;

	hash = func_423(hParam0, true);

	if (hash == 0)
		return false;

	if (func_334(hash, -2141192156))
		return false;

	if (bParam1)
		if (!func_146(hash, -2141192156, &unk, false, false))
			return false;

	return true;
}

int func_407(int* piParam0, Hash hParam1) // Position - 0xA011 Hash - 0xD6C7A024 ^0x8CD358DF
{
	int num;
	int i;
	int numOfItems;
	var itemInfo;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		numOfItems = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0);
		itemInfo.f_9 = 1;
		itemInfo.f_11 = joaat("SLOTID_NONE");
	
		for (i = 0; i < numOfItems; i = i + 1)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*piParam0, i, &itemInfo))
			{
			}
			else if (hParam1 != itemInfo.f_13)
			{
			}
			else
			{
				num = num + (func_254(itemInfo.f_8, hParam1, true, false, true, 0) * itemInfo.f_9);
			}
		}
	}

	return num;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_408(Hash hParam0, int iParam1, Hash hParam2, var uParam3, BOOL bParam4) // Position - 0xA08A Hash - 0xC79E0D58 ^0xC79E0D58
{
	var unk;
	int num;
	int num2;
	int num3;
	int i;
	BOOL flag;

	unk = 15;

	if (!func_424(hParam0, hParam2, &unk, &num, true, false))
		return false;

	flag = !bParam4 && func_222(false) && !func_223();

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == 0 || unk[i /*2*/] == 1412640604)
			break;
	
		num2 = unk[i /*2*/].f_1 * iParam1;
	
		if (unk[i /*2*/] == joaat("currency_cash") && func_224(num2))
			goto 0xD9;
	
		if (unk[i /*2*/] == joaat("currency_gold_bar") && func_225(num2))
		{
		}
		else
		{
			num3 = func_228(unk[i /*2*/], false, !flag, false);
		
			if (num3 >= num2)
			{
			}
			else
			{
				*uParam3 = { unk[i /*2*/] };
				return false;
			}
		}
	}

	return true;
}

BOOL func_409(int* piParam0, Any* panParam1, Hash hParam2, var uParam3, int iParam4, Any* panParam5, BOOL bParam6, int iParam7) // Position - 0xA170 Hash - 0x40864787 ^0xC8FD8850
{
	int i;

	if (*panParam5 < iParam4)
		return false;

	for (i = 0; i < iParam4; i = i + 1)
	{
		if (uParam3->[i /*2*/] == 0 || uParam3->[i /*2*/].f_1 == 0)
			break;
	
		if (!func_418(uParam3->[i /*2*/], uParam3->[i /*2*/].f_1 * panParam1->f_9, &panParam5->[i /*42*/]))
			return false;
	}

	return func_425(piParam0, panParam1, panParam5, hParam2, bParam6, iParam7);
}

BOOL func_410(Hash hParam0) // Position - 0xA1ED Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_411(Any anParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0xA1FB Hash - 0x8E6DB586 ^0xC3CF8308
{
	int i;

	*uParam1 = 0;

	if (*anParam0 != 10)
		return false;

	for (i = 0; i < 10; i = i + 1)
	{
		if (iParam2 < 1)
			break;
	
		if (anParam0->[i /*6*/].f_4 == 0)
			goto 0xF4;
	
		if (anParam0->[i /*6*/].f_5 == 0)
			goto 0xF4;
	
		if (func_426(&anParam0->[i /*6*/]))
		{
		}
		else
		{
			if (i != *uParam1)
			{
				anParam0->[*uParam1 /*6*/] = { anParam0->[i /*6*/] };
				anParam0->[*uParam1 /*6*/].f_4 = anParam0->[i /*6*/].f_4;
			}
		
			if (anParam0->[i /*6*/].f_5 > iParam2)
			{
				anParam0->[*uParam1 /*6*/].f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				anParam0->[*uParam1 /*6*/].f_5 = anParam0->[i /*6*/].f_5;
				iParam2 = iParam2 - anParam0->[*uParam1 /*6*/].f_5;
			}
		
			if (i > *uParam1)
			{
				anParam0->[i /*6*/] = { func_313() };
				anParam0->[i /*6*/].f_4 = 0;
				anParam0->[i /*6*/].f_5 = 0;
			}
		
			*uParam1 = *uParam1 + 1;
		}
	}

	if (bParam3 && iParam2 > 0)
	{
		*uParam1 = 0;
		return false;
	}

	return true;
}

BOOL func_412(int iParam0, int iParam1) // Position - 0xA312 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_413(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0xA321 Hash - 0xBC161045 ^0xD3B33F74
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

	func_427(&Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/]);
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/] = iParam0;
	Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_1 = iParam1;

	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_2 = iParam2;
		Global_1292143.f_20.f_1[Global_1292143.f_20 - 1 /*21*/].f_3 = iParam3;
	}

	return;
}

int func_414(int iParam0) // Position - 0xA3FD Hash - 0xA7E21081 ^0xBD28E742
{
	int num;
	int status;

	num = func_428(iParam0);

	if (num == 0 || num == 1 || num == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &status))
		{
			if (status == 4 || status == 2 || num == 0 && status != 0)
			{
				func_391(iParam0, status, 0, 0);
				num = status;
			}
		}
		else if (num == 1 || num == 5)
		{
			func_391(iParam0, 4, 0, 0);
		}
	}

	return num;
}

Hash func_415(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA487 Hash - 0xC67FD48A ^0x72A5971A
{
	int num;

	num = 0;

	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
		
			case 1:
				return 866168015;
		
			case 2:
				return -1103707655;
		
			default:
			
		}
	
		num = 3;
	}

	if (bParam2)
	{
		switch (iParam0 - num)
		{
			case 0:
				return 75922725;
		
			case 1:
				return 1070046552;
		
			case 2:
				return -1843707398;
		
			case 3:
				return -1571233163;
		
			case 4:
				return -1197011183;
		
			default:
			
		}
	}

	return 0;
}

BOOL func_416(Hash hParam0) // Position - 0xA523 Hash - 0x1B551CF7 ^0x9235FF01
{
	return func_150(hParam0) == 1946043663;
}

BOOL func_417(Hash hParam0) // Position - 0xA537 Hash - 0x1B551CF7 ^0xC792EAB9
{
	return func_150(hParam0) == -126813555;
}

BOOL func_418(Hash hParam0, int iParam1, var uParam2) // Position - 0xA54B Hash - 0x373A2E12 ^0xF0869689
{
	var unk;
	int num;
	int num2;
	var unk6;
	int num3;
	int i;

	*uParam2 = hParam0;

	if (func_395(false))
	{
		num = func_226(func_429(), hParam0);
	
		if (num != 0)
		{
			unk = { func_237(true) };
			unk.f_4 = func_295(num);
			uParam2->f_1[0 /*4*/] = { func_239(hParam0, unk, unk.f_4, true) };
		
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
				return true;
		}
	}

	num2 = func_250(hParam0, joaat("DEFAULT"));

	if (num2 != 0)
	{
		unk6 = 10;
	
		if (!func_388(&unk6, &num3, hParam0, num2, iParam1, true) || num3 < 1)
			return false;
	
		for (i = 0; i < num3; i = i + 1)
		{
			uParam2->f_1[i /*4*/] = { func_239(hParam0, unk6[i /*6*/], unk6[i /*6*/].f_4, true) };
		
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[i /*4*/]))
				return false;
		}
	
		return true;
	}

	unk = { func_148(hParam0, true, 0) };
	uParam2->f_1[0 /*4*/] = { func_239(hParam0, unk, unk.f_4, true) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam2->f_1[0 /*4*/]))
		return false;

	return true;
}

BOOL func_419(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4) // Position - 0xA66D Hash - 0xB36012C8 ^0xBC48CAED
{
	if (hParam3 != 541670136 && hParam3 != joaat("batch"))
		return false;

	if (!func_430(*panParam1))
		return false;

	if (!func_431(piParam0, hParam3))
		return false;

	if (NETSHOPPING::_0xA3B8D31C13CB4239(*piParam0, 541670136, panParam1, 18, panParam2, *panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_432(piParam0, bParam4);
}

BOOL func_420(Hash hParam0, Hash hParam1, Any anParam2) // Position - 0xA6D9 Hash - 0x29542237 ^0x85ED2DB5
{
	int i;
	int num;

	num = ITEMDATABASE::_0x7A35A72A692BE9DB(hParam0);

	for (i = 0; i < num; i = i + 1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(hParam0, i, anParam2) && *anParam2 == hParam1)
			return true;
	}

	return false;
}

BOOL func_421(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xA719 Hash - 0x5E278D9E ^0x9ED660B8
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	if (!func_249(hParam0, 2))
		return 0;

	unk = 10;

	if (bParam2 && func_291() == 0 && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return 1;

	if (!func_433(hParam0, hParam1, &unk, &num) || num < 1)
		return 0;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return 1;
		}
	}

	return 0;
}

BOOL func_422(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xA7A7 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_143(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	if (outData.f_35 > 10)
		outData.f_35 = 10;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

Hash func_423(Hash hParam0, BOOL bParam1) // Position - 0xA82B Hash - 0xA9E35D6B ^0xBA3EB97
{
	if (!func_405(hParam0, bParam1))
		return 0;

	if (hParam0 == joaat("document_pamphlet_tracking_arrow"))
		return func_220(joaat("ammo_arrow_tracking"), true);
	else if (hParam0 == joaat("document_pamphlet_poison_bottle"))
		return func_220(joaat("ammo_poisonbottle"), true);
	else if (hParam0 == 318000298)
		return func_220(-1939515319, true);
	else if (hParam0 == -1771777013)
		return func_220(-1903059161, true);
	else if (hParam0 == 375366730)
		return func_220(-252071901, true);
	else if (hParam0 == -1309887827)
		return func_220(-611782825, true);

	return func_220(hParam0, true);
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_424(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xA8E3 Hash - 0x583856CF ^0xF105F8D9
{
	int i;

	*uParam3 = 0;

	if (*uParam2 < 15)
		return false;

	if (!func_249(hParam0, 2))
		return false;

	*uParam3 = ITEMDATABASE::_0x388088BFF3681189(hParam0, hParam1);

	if (*uParam3 == 0)
	{
		!bParam5;
		return false;
	}

	!bParam5;

	for (i = 0; i < *uParam3; i = i + 1)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(hParam0, hParam1, i, &uParam2->[i /*2*/]))
			goto 0x71;
	
		!bParam5;
	}

	if (bParam4)
		func_434(hParam0, hParam1, uParam2, *uParam3);

	return true;
}

BOOL func_425(int* piParam0, Any* panParam1, Any* panParam2, Hash hParam3, BOOL bParam4, int iParam5) // Position - 0xA973 Hash - 0xA8760DB6 ^0xC89F5487
{
	if (hParam3 != 2113164098 && hParam3 != joaat("Sell") && hParam3 != joaat("use"))
		return false;

	if (!func_435(hParam3, panParam1, iParam5))
		return false;

	if (!func_431(piParam0, hParam3))
		return false;

	if (func_436(*piParam0, hParam3, panParam1, panParam2))
	{
	}
	else
	{
		return false;
	}

	return func_432(piParam0, bParam4);
}

BOOL func_426(Any* panParam0) // Position - 0xA9E5 Hash - 0x7865E948 ^0x92258F24
{
	if (!func_437(panParam0))
		return false;

	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(panParam0);
}

void func_427(int iParam0) // Position - 0xAA01 Hash - 0x84E910A9 ^0x5650392D
{
	*iParam0 = -1;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	func_438(&(iParam0->f_4));
	return;
}

int func_428(int iParam0) // Position - 0xAA24 Hash - 0xD52E0195 ^0x6C5F51BC
{
	int i;

	if (iParam0 == -1)
		return 0;

	for (i = 0; i < Global_1292143.f_20; i = i + 1)
	{
		if (Global_1292143.f_20.f_1[i /*21*/] == iParam0)
			return Global_1292143.f_20.f_1[i /*21*/].f_1;
	}

	return 0;
}

int func_429() // Position - 0xAA70 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20241;
}

BOOL func_430(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17) // Position - 0xAA7F Hash - 0x195DA727 ^0x43C01C6A
{
	if (!func_311(uParam0.f_17))
		return false;

	return true;
}

BOOL func_431(int* piParam0, Hash hParam1) // Position - 0xAA98 Hash - 0x8DE7BD5B ^0x83B9042B
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
		if (!func_439(piParam0, hParam1))
			return false;

	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action != hParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) >= 50)
	{
		if (!func_440(piParam0))
			return false;
	
		if (!func_439(piParam0, hParam1))
			return false;
	}

	return true;
}

BOOL func_432(int* piParam0, BOOL bParam1) // Position - 0xAAFB Hash - 0x5B4FA9A9 ^0x92224A48
{
	piParam0->f_2 = piParam0->f_2 + 1;

	if (bParam1)
		return func_440(piParam0);

	return true;
}

BOOL func_433(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xAB1C Hash - 0x8EAA10FC ^0x9E3F883B
{
	var unk;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_249(hParam0, 2))
		return false;

	unk.f_4 = 15;
	unk.f_36 = 10;

	if (!func_420(hParam0, hParam1, &unk))
		return false;

	if (unk.f_35 > 10)
		unk.f_35 = 10;

	*uParam3 = unk.f_35;

	for (i = 0; i < unk.f_35; i = i + 1)
	{
		uParam2->[i] = unk.f_36[i];
	}

	return true;
}

void func_434(Hash hParam0, Hash hParam1, var uParam2, int iParam3) // Position - 0xABA0 Hash - 0x7EFAC478 ^0x4E4217E0
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

	if (!ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ACQUIRE_COST_MODIFIERS(hParam0, &outData) || outData == 0)
		return;

	unk13 = 15;

	for (i = 0; i < iParam3; i = i + 1)
	{
		unk13[i] = 1f;
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
							if (uParam2->[i /*2*/] == outData2)
							{
								unk13[i] = unk13[i] + (outData2.f_1 - 1f);
								break;
							}
						}
					}
				}
			
				break;
			}
		}
	}

	for (i = 0; i < iParam3; i = i + 1)
	{
		if (unk13[i] != 1f && uParam2->[i /*2*/].f_1 > 0)
		{
			if (uParam2->[i /*2*/] == joaat("currency_gold_bar"))
				uParam2->[i /*2*/].f_1 = ((100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 1000000) * 100;
			else
				uParam2->[i /*2*/].f_1 = (100 * uParam2->[i /*2*/].f_1 * BUILTIN::ROUND(unk13[i] * 100f)) / 10000;
		
			if (uParam2->[i /*2*/].f_1 == 0 && func_150(uParam2->[i /*2*/]) != -829303394)
				uParam2->[i /*2*/].f_1 = 1;
		}
	}

	return;
}

BOOL func_435(Hash hParam0, Any* panParam1, int iParam2) // Position - 0xAD76 Hash - 0xF56A9866 ^0x83AC84D6
{
	if (panParam1->f_9 < 1)
		return false;

	if (!func_143(panParam1->f_8, 0) && !func_249(func_248(panParam1->f_8), 2))
		return false;

	if (func_201(iParam2, 128))
		if (!func_249(func_248(panParam1->f_8), 2))
			if (func_150(panParam1->f_8) == 0)
				return false;

	if (func_201(iParam2, 16))
		if (!func_323(hParam0, panParam1))
			return false;

	return true;
}

BOOL func_436(int iParam0, Hash hParam1, Any* panParam2, Any* panParam3) // Position - 0xADF6 Hash - 0xA2FF6405 ^0x9144FDD7
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, hParam1, panParam2, 17, panParam3, *panParam3);
}

BOOL func_437(Any* panParam0) // Position - 0xAE0F Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*panParam0 == 0 && panParam0->f_1 == 0 && panParam0->f_2 == 0 && panParam0->f_3 == 0)
		return false;

	return true;
}

void func_438(var uParam0) // Position - 0xAE45 Hash - 0x58FD8C3D ^0x7E71AD66
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

BOOL func_439(int* piParam0, Hash hParam1) // Position - 0xAEA1 Hash - 0x8927A1A4 ^0x3C5C8B8F
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(piParam0, joaat("basket"), hParam1))
		return false;

	return true;
}

BOOL func_440(int* piParam0) // Position - 0xAEBF Hash - 0x7EABA512 ^0xD3B85449
{
	Hash action;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*piParam0))
	{
		func_391(*piParam0, 0, 0, 0);
		return true;
	}

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*piParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*piParam0);
		func_391(*piParam0, 4, 0, 0);
		return true;
	}

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*piParam0))
	{
		func_391(*piParam0, 2, 0, 0);
		return false;
	}

	func_391(*piParam0, 1, 0, 0);
	action = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*piParam0);

	if (action == 2113164098 || action == 541670136)
		piParam0->f_3 = 1;

	piParam0->f_1 = *piParam0;
	*piParam0 = -1;
	piParam0->f_2 = 0;
	return true;
}

