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
	BOOL bLocal_14 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF84A7874 ^0x27B9FC91
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(&iScriptParam_0, true);

	Global_1898092.f_26.f_1 = iScriptParam_0;
	Global_1898092.f_26.f_2 = func_2(Global_1898092.f_26.f_1);

	if (!func_3(Global_1898092.f_26.f_2))
		func_1(&iScriptParam_0, false);

	while (func_4(1) || func_4(2))
	{
		BUILTIN::WAIT(0);
	}

	func_5(16);
	func_6(iScriptParam_0, 8);
	func_7(iScriptParam_0, 1);

	while (!func_8(iScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}

	func_1(&iScriptParam_0, false);
	return;
}

void func_1(var uParam0, BOOL bParam1) // Position - 0x9D Hash - 0x5F48FBF3 ^0x1107D728
{
	if (bParam1 || bLocal_14)
		func_7(*uParam0, 0);

	if (bLocal_14)
	{
		func_9(*uParam0, 8);
		func_10();
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_2(int iParam0) // Position - 0xD0 Hash - 0x595F92D5 ^0x595F92D5
{
	if (!func_11(iParam0))
		return -1;

	switch (iParam0)
	{
		case 11:
			return 0;
	
		case 15:
			return 3;
	
		case 76:
			return 1;
	
		case 128:
			return 2;
	
		default:
		
	}

	return -1;
}

BOOL func_3(int iParam0) // Position - 0x117 Hash - 0x4461E3A8 ^0x4461E3A8
{
	if (iParam0 <= -1 || iParam0 >= 4)
		return false;

	return true;
}

BOOL func_4(int iParam0) // Position - 0x135 Hash - 0xC67CC87B ^0x88ADC254
{
	return Global_1898092.f_1 && iParam0 != false;
}

void func_5(int iParam0) // Position - 0x148 Hash - 0x3410C012 ^0x1CF87B3B
{
	Global_1898092.f_1 = Global_1898092.f_1 || iParam0;
	return;
}

void func_6(int iParam0, BOOL bParam1) // Position - 0x15F Hash - 0x1F53BD85 ^0xA70B55E5
{
	if (Global_1572887.f_12 == -1)
		Global_23118[iParam0 /*11*/] = Global_23118[iParam0 /*11*/] || bParam1;
	else
		Global_1058888.f_40545[iParam0 /*11*/] = Global_1058888.f_40545[iParam0 /*11*/] || bParam1;

	return;
}

void func_7(int iParam0, int iParam1) // Position - 0x1A2 Hash - 0x9642AD01 ^0xCF226DF6
{
	if (!func_11(iParam0))
		return;

	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
	return;
}

BOOL func_8(int iParam0) // Position - 0x1C3 Hash - 0xC3388825 ^0x8BC6DDFF
{
	int num;

	num = func_2(iParam0);

	if (!func_3(num))
	{
		bLocal_14 = true;
		return true;
	}

	if (func_12(Global_1392194[num /*10*/].f_1, 1))
		return true;

	if (!func_13(iParam0, true, false, 300f * 300f, false))
	{
		bLocal_14 = true;
		return true;
	}

	return false;
}

void func_9(int iParam0, BOOL bParam1) // Position - 0x21A Hash - 0x2B17ED40 ^0x23FC9AA5
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = Global_23118[iParam0 /*11*/] - Global_23118[iParam0 /*11*/] && bParam1;
		return;
	}

	Global_1058888.f_40545[iParam0 /*11*/] = Global_1058888.f_40545[iParam0 /*11*/] - Global_1058888.f_40545[iParam0 /*11*/] && bParam1;
	return;
}

void func_10() // Position - 0x273 Hash - 0xFDF756DB ^0x22E643E4
{
	Global_1898092.f_26 = 0;
	Global_1898092.f_26.f_1 = -1;
	Global_1898092.f_26.f_2 = -1;
	Global_1898092.f_26.f_7 = -1;
	Global_1898092.f_26.f_3 = 0;
	Global_1898092.f_26.f_4 = 0;
	func_14(Global_1898092.f_26.f_5);
	return;
}

BOOL func_11(int iParam0) // Position - 0x2BB Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_12(int iParam0, int iParam1) // Position - 0x2D1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_13(int iParam0, BOOL bParam1, BOOL bParam2, float fParam3, BOOL bParam4) // Position - 0x2E0 Hash - 0xDCD755E9 ^0x16EAC14D
{
	int num;
	Vector3 entityCoords;
	Vector3 volumeCoords;
	var unk5;
	var unk8;
	float num2;

	if (iParam0 == -1)
		return false;

	num = -1;

	if (bParam4)
		num = func_15();

	if (num == -1)
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };

	if (num == iParam0)
		return true;

	if (VOLUME::IS_POINT_IN_VOLUME(func_16(iParam0), entityCoords))
		return true;

	if (bParam1)
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		volumeCoords = { VOLUME::GET_VOLUME_COORDS(func_16(iParam0)) };
		entityCoords.f_2 = 0f;
		volumeCoords.f_2 = 0f;
		num2 = BUILTIN::VDIST2(entityCoords, volumeCoords);
	
		if (num2 < fParam3)
		{
			if (!bParam2)
			{
				return true;
			}
			else
			{
				unk5 = { func_18(func_17(CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING())) };
				unk8 = { func_18(volumeCoords - entityCoords) };
			
				if (func_19(unk5, unk8) > 0f)
					return true;
			}
		}
	}

	return false;
}

void func_14(Volume volParam0) // Position - 0x3B9 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

int func_15() // Position - 0x3D0 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

Volume func_16(int iParam0) // Position - 0x3DE Hash - 0xE4DA9E55 ^0x6DBF788A
{
	if (!func_11(iParam0))
		return 0;

	return Global_1888801[iParam0 /*35*/].f_3;
}

Vector3 func_17(float fParam0) // Position - 0x3FE Hash - 0x22303A60 ^0x2A964B45
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_18(float fParam0, var uParam1, var uParam2) // Position - 0x414 Hash - 0xFB6A39D2 ^0x80C9C759
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

float func_19(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x453 Hash - 0x9ECDD667 ^0x170D4E4C
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1);
}

