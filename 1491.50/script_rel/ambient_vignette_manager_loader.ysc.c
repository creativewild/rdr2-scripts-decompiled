#region Local Var
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

void main() // Position - 0x0 Hash - 0x1D791AD ^0xADBA9A52
{
	BOOL flag;
	int num;
	int num2;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		SCRIPTS::TERMINATE_THIS_THREAD();

	flag = false;
	num = 0;

	while (!flag)
	{
		num2 = num;
	
		if (func_1(Global_1415419.f_19[num2 /*12*/].f_11, 8))
			func_2(num2);
	
		num = num + 1;
	
		if (num > 247)
			flag = true;
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_1(int iParam0, int iParam1) // Position - 0x5D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

// Unhandled jump detected. Output should be considered invalid
void func_2(int iParam0) // Position - 0x6C Hash - 0xB8B72797 ^0x9A891A43
{
	Any any;
	int numChildren;
	int i;
	var unk5;
	var unk6;
	var unk9;
	var unk12;

	any = Global_1415419;
	any.f_1 = Global_1415419.f_19[iParam0 /*12*/].f_10;
	any.f_2 = -641542860;
	any.f_3 = func_3(Global_1415419.f_9756);
	Global_1415419.f_19[iParam0 /*12*/].f_8 = -1;
	Global_1415419.f_19[iParam0 /*12*/].f_9 = -1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
	{
		unk12 = any.f_1;
		numChildren = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(any, any.f_1);
	
		for (i = 0; i < numChildren; i = i + 1)
		{
			if (Global_1415419.f_9717 >= 960)
				break;
		
			any.f_2 = 1696282352;
			any.f_3 = i;
		
			if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(any.f_1), &any))
			{
				any.f_2 = -1119853910;
			
				if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk6, &any))
				{
					if (Global_1415419.f_19[iParam0 /*12*/].f_8 == -1)
						Global_1415419.f_19[iParam0 /*12*/].f_8 = Global_1415419.f_9717;
				
					Global_1415419.f_2996[Global_1415419.f_9717 /*7*/] = { unk6 };
					Global_1415419.f_19[iParam0 /*12*/].f_9 = Global_1415419.f_9717;
				}
				else
				{
					goto 0x188;
				}
			
				any.f_2 = -1983241935;
			
				if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&unk9, &any))
					Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_3 = { unk9 };
			
				any.f_2 = -143463129;
			
				if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&unk5, &any))
					Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_6 = unk5;
				else
					Global_1415419.f_2996[Global_1415419.f_9717 /*7*/].f_6 = 0;
			
				Global_1415419.f_9717 = Global_1415419.f_9717 + 1;
			}
		
			any.f_1 = unk12;
		}
	}

	func_4(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 8);
	func_4(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 1);
	func_4(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 2);
	return;
}

int func_3(int iParam0) // Position - 0x234 Hash - 0xB8EC44B7 ^0xCA15B31A
{
	switch (iParam0)
	{
		case 0:
			return joaat("district_bayou_nwa");
	
		case 1:
			return joaat("district_big_valley");
	
		case 2:
			return joaat("district_bluegill_marsh");
	
		case 3:
			return joaat("district_cumberland_forest");
	
		case 4:
			return joaat("district_great_plains");
	
		case 5:
			return joaat("district_grizzlies");
	
		case 6:
			return joaat("district_grizzlies_east");
	
		case 7:
			return joaat("district_grizzlies_west");
	
		case 8:
			return joaat("district_guama");
	
		case 9:
			return joaat("district_heartland");
	
		case 10:
			return joaat("district_roanoke_ridge");
	
		case 11:
			return joaat("district_scarlett_meadows");
	
		case 12:
			return joaat("district_tall_trees");
	
		case 13:
			return joaat("district_gaptooth_ridge");
	
		case 14:
			return joaat("district_rio_bravo");
	
		case 15:
			return joaat("district_cholla_springs");
	
		case 16:
			return joaat("district_hennigans_stead");
	
		default:
		
	}

	return 1776960747;
}

void func_4(int iParam0, int iParam1) // Position - 0x337 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

