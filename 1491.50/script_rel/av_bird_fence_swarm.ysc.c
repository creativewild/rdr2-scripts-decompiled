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
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	Hash hLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	Volume volLocal_16 = 0;
	Volume volLocal_17 = 0;
	ItemSet isLocal_18 = 0;
	int iLocal_19 = 0;
	ScrHandle shLocal_20 = 0;
	int iLocal_21 = 0;
	var uScriptParam_0 = -1;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = -1;
	var uScriptParam_12 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x99AACEEA ^0xE0414DA2
{
	var unk;
	BOOL flag;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_9 = joaat("a_c_crow_01");
	hLocal_11 = joaat("world_animal_crow_on_perch");
	iLocal_21 = 12;
	unk.f_1 = -1;
	unk.f_3.f_9 = 3;
	unk.f_20 = 25;
	unk.f_20.f_1.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_9 = 1;
	unk.f_20.f_1.f_10 = 1;
	unk.f_20.f_1.f_11 = 1;
	unk.f_20.f_1.f_12 = 1;
	unk.f_20.f_1.f_13 = 1;
	unk.f_20.f_1.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_3 = joaat("META_OUTFIT_DEFAULT");
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_9 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_10 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_11 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_12 = 1;
	unk.f_20.f_1.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_14.f_13 = 1;
	unk.f_372 = 10;
	unk.f_372.f_1.f_7 = 1;
	unk.f_372.f_1.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_8.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	unk.f_372.f_1.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_8.f_7 = 1;
	unk.f_469 = 10;
	unk.f_482 = -1;
	unk.f_493 = 1056964608;
	unk.f_494 = 1119092736;
	unk.f_495 = 1112014848;
	unk.f_502 = 1259902591;
	unk = uScriptParam_0;
	unk.f_1 = uScriptParam_0.f_11;
	unk.f_483 = { uScriptParam_0.f_1 };
	unk.f_486 = { uScriptParam_0.f_4 };
	unk.f_489 = uScriptParam_0.f_7;
	unk.f_20[0 /*14*/] = uScriptParam_0.f_8;
	unk.f_453 = uScriptParam_0.f_9;
	unk.f_500 = uScriptParam_0.f_10;
	unk.f_503 = uScriptParam_0.f_12;
	func_1(&unk);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		unk.f_467(&unk, 1);
		func_2(&unk);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	flag = false;

	while (!flag)
	{
		if (func_3(&unk))
			flag = true;
	
		BUILTIN::WAIT(0);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x58C Hash - 0x646928F0 ^0x646928F0
{
	func_4(uParam0);
	return;
}

void func_2(var uParam0) // Position - 0x59A Hash - 0x15214583 ^0x343259F6
{
	int i;

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_20[i /*14*/].f_4))
			PED::_RELEASE_META_PED_OUTFIT_REQUEST(uParam0->f_20[i /*14*/].f_4);
	}

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_496))
		VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_496);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_497))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_497);
		func_5(uParam0->f_497);
	}

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_498))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_498);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_498);
		func_5(uParam0->f_498);
	}

	return;
}

BOOL func_3(var uParam0) // Position - 0x630 Hash - 0x9D8F0B2F ^0x9D8F0B2F
{
	BOOL flag;
	int num;
	float num2;

	if (uParam0->f_464 > 0 && uParam0->f_464 < 8)
		if (uParam0->f_499)
			uParam0->f_464 = 8;
		else if (func_6(uParam0))
			uParam0->f_464 = 8;

	switch (uParam0->f_464)
	{
		case 0:
			if (_IS_NULL_VECTOR(uParam0->f_483))
			{
				if (MISC::GET_GAME_TIMER() - uParam0->f_481 > 1000)
				{
					num = 0;
					uParam0->f_482 = func_8(*uParam0, &num, true, false, false);
				
					if (uParam0->f_482 != -1)
					{
						uParam0->f_483 = { Global_1415419.f_2996[uParam0->f_482 /*7*/] };
						uParam0->f_486 = { Global_1415419.f_2996[uParam0->f_482 /*7*/].f_3 };
						uParam0->f_489 = Global_1415419.f_2996[uParam0->f_482 /*7*/].f_6;
						flag = true;
					}
					else
					{
						uParam0->f_480 = uParam0->f_480 + 1;
						uParam0->f_481 = MISC::GET_GAME_TIMER();
					
						if (uParam0->f_480 > 1)
						{
							func_9(&(Global_1415419.f_19[*uParam0 /*12*/].f_11), 1);
							uParam0->f_464 = 8;
						}
					}
				}
			}
			else
			{
				flag = true;
			}
		
			if (flag)
			{
				func_10(*uParam0, uParam0->f_483, uParam0->f_1);
				TELEMETRY::_TELEMETRY_AMBIENT_VIGNETTE(func_11(*uParam0), uParam0->f_489, uParam0->f_483, uParam0->f_20[0 /*14*/], uParam0->f_453);
				num2 = func_12(*uParam0);
			
				if (num2 > 0f)
					uParam0->f_496 = func_13(uParam0->f_483, num2, "AMB_VIG", true, 0, 8, false, -1082130432);
			
				func_14(uParam0, uParam0->f_483, uParam0->f_486);
			
				if (Global_1415419.f_9758 != 0)
					uParam0->f_18 = 1;
			
				if (Global_1415419.f_19[*uParam0 /*12*/].f_6 != 4)
				{
					uParam0->f_497 = VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_483, 0f, 0f, 0f, func_15(uParam0));
					POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_497, 0, 0, 0, -1, -1, 0);
					uParam0->f_498 = VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_483, 0f, 0f, 0f, 15f, 15f, 10f);
					POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_498, 224, 0, 0, -1, -1, 14);
					POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_498, 224, 0, 0, -1, -1, 0);
				}
			
				uParam0->f_464 = 1;
			}
			break;
	
		case 1:
			uParam0->f_465(uParam0);
		
			if (StackVal)
				uParam0->f_464 = 2;
			break;
	
		case 2:
			if (func_16(uParam0))
				uParam0->f_464 = 3;
			break;
	
		case 3:
			if (func_17(uParam0) && func_18(uParam0))
				uParam0->f_464 = 5;
			else
				return false;
			break;
	
		case 4:
			if (func_23(uParam0) && func_24(uParam0) && func_25(uParam0))
			{
				func_26(uParam0);
				uParam0->f_464 = 6;
			}
			else
			{
				return false;
			}
			break;
	
		case 5:
			if (func_19(uParam0))
			{
				func_20(uParam0);
			
				if (func_21(*uParam0))
					func_22(uParam0->f_483, 6f, true, true, false, false, false);
			
				uParam0->f_464 = 4;
			}
			else
			{
				return false;
			}
			break;
	
		case 6:
			func_27(uParam0);
		
			if (func_28(uParam0))
			{
				func_29(uParam0);
				uParam0->f_464 = 7;
			}
			break;
	
		case 7:
			func_27(uParam0);
			uParam0->f_466(uParam0);
		
			if (StackVal)
			{
				if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_496))
					VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_496);
			
				if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_497))
				{
					POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_497);
					func_5(uParam0->f_497);
				}
			
				uParam0->f_464 = 8;
			}
			break;
	
		case 8:
			uParam0->f_467(uParam0, 0);
		
			if (StackVal)
			{
				func_2(uParam0);
				uParam0->f_464 = 9;
			}
			break;
	
		case 9:
			return true;
	}

	return false;
}

void func_4(var uParam0) // Position - 0x9D6 Hash - 0x4DA9BC8C ^0x38DCA471
{
	func_33(uParam0, &func_30, &func_31, &func_32);
	return;
}

void func_5(Volume volParam0) // Position - 0x9F0 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_6(var uParam0) // Position - 0xA07 Hash - 0x66ED4AB7 ^0x77055C23
{
	float num;
	float num2;
	int i;
	float num3;

	if (Global_1935630.f_12)
		return true;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (uParam0->f_18)
			num = 500f;
		else
			num = func_34(*uParam0);
	
		num = num * num;
	
		if (uParam0->f_464 != 7)
		{
			num2 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), uParam0->f_483);
		
			if (num2 < num)
				return false;
		}
	
		for (i = 0; i < uParam0->f_19; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[i /*14*/]))
			{
				num3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_20[i /*14*/], false, false));
			
				if (num3 < num)
					return false;
			}
		}
	
		return true;
	}

	return false;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0xAC5 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_8(int iParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAEF Hash - 0x746D7F2E ^0x5120CFB
{
	int i;
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	float num6;

	num = -1;
	num2 = 1E+09f;

	if (Global_1415419.f_19[iParam0 /*12*/].f_8 != -1 && Global_1415419.f_19[iParam0 /*12*/].f_9 < 960 && Global_1415419.f_19[iParam0 /*12*/].f_9 >= Global_1415419.f_19[iParam0 /*12*/].f_8)
	{
		num3 = func_35(iParam0);
		num3 = num3 * num3;
		num4 = func_36(iParam0);
		num4 = num4 * num4;
	
		for (i = Global_1415419.f_19[iParam0 /*12*/].f_8; i <= Global_1415419.f_19[iParam0 /*12*/].f_9; i = i + 1)
		{
			*uParam1 = *uParam1 + 1;
		
			if (!func_37(iParam0, Global_1415419.f_2996[i /*7*/]))
			{
			}
			else
			{
				num6 = BUILTIN::VDIST2(Global_36, Global_1415419.f_2996[i /*7*/]);
			
				if (bParam2 && iParam0 != 34)
				{
					num5 = func_38(Global_35, Global_1415419.f_2996[i /*7*/], 1060437492);
				
					if (num5 == 1)
					{
					}
					else if (num6 < num2)
					{
						if (func_39(Global_1415419.f_2996[i /*7*/], num6, iParam0 <= 33 || iParam0 == 72, bParam4, num3, num4, iParam0))
						{
							num = i;
							num2 = num6;
						
							if (bParam3)
								break;
						}
					}
				}
			
				if (num6 < num2)
				{
					if (func_39(Global_1415419.f_2996[i /*7*/], num6, iParam0 <= 33 || iParam0 == 72, bParam4, num3, num4, iParam0))
					{
						num = i;
						num2 = num6;
					
						if (bParam3)
							break;
					}
				}
			}
		}
	}

	return num;
}

void func_9(int iParam0, int iParam1) // Position - 0xC40 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_10(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0xC55 Hash - 0x563CDE2F ^0xDC1014A4
{
	if (func_40() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_40();

	func_41(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, false);
	func_42(iParam0, 1, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_2 = Global_32074.f_2697.f_6[iParam0 /*6*/].f_2 + 1;
	Global_32074.f_2697.f_1 = Global_32074.f_2697.f_1 + 1;

	if (iParam4 != -1 && iParam4 < 4)
		Global_1415419.f_9721[iParam4 /*8*/].f_4 = { uParam1 };

	return;
}

int func_11(int iParam0) // Position - 0xCF9 Hash - 0xB8EC44B7 ^0xC519E6BC
{
	switch (iParam0)
	{
		case -1:
			return -1385367302;
	
		case 0:
			return joaat("HASH_AMB_VIG_BARBER_SHAVING");
	
		case 1:
			return joaat("HASH_AMB_VIG_BODY_TOSS");
	
		case 2:
			return joaat("HASH_AMB_VIG_BUTCHER_BLEED_DEER");
	
		case 3:
			return joaat("HASH_AMB_VIG_BUTCHER_HANG_CARCASS");
	
		case 4:
			return joaat("HASH_AMB_VIG_CHAMBERPOT_TOSS");
	
		case 5:
			return joaat("HASH_AMB_VIG_COW_GRAZING");
	
		case 6:
			return joaat("HASH_AMB_VIG_DROP_RABBIT_TABLE");
	
		case 7:
			return joaat("HASH_AMB_VIG_GET_DIRECTIONS");
	
		case 8:
			return joaat("HASH_AMB_VIG_GOAT_GRAZING");
	
		case 9:
			return joaat("HASH_AMB_VIG_LIGHT_SMOKE");
	
		case 10:
			return joaat("HASH_AMB_VIG_LUMBER_PASS_DOWN_BALCONY");
	
		case 11:
			return joaat("HASH_AMB_VIG_LUMBER_PASS_UP_BALCONY");
	
		case 12:
			return joaat("HASH_AMB_VIG_MAN_JUMP_FENCE");
	
		case 13:
			return joaat("HASH_AMB_VIG_MAN_STAND_AT_WAGON");
	
		case 14:
			return joaat("HASH_AMB_VIG_PUMP_CART");
	
		case 15:
			return joaat("HASH_AMB_VIG_SHEEP_GRAZING");
	
		case 16:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_HIGH");
	
		case 17:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_MED");
	
		case 18:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_HIGH");
	
		case 19:
			return joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_MED");
	
		case 20:
			return joaat("HASH_AMB_VIG_STAGE_COACH");
	
		case 21:
			return joaat("HASH_AMB_VIG_STARTING_TO_RAIN_FEMALE");
	
		case 22:
			return joaat("HASH_AMB_VIG_STARTING_TO_RAIN_MALE");
	
		case 23:
			return joaat("HASH_AMB_VIG_VOMIT_SIT_FEMALE");
	
		case 24:
			return joaat("HASH_AMB_VIG_VOMIT_SIT_MALE");
	
		case 25:
			return joaat("HASH_AMB_VIG_VOMIT_WALL_FEMALE");
	
		case 26:
			return joaat("HASH_AMB_VIG_VOMIT_WALL_MALE");
	
		case 27:
			return joaat("HASH_AMB_VIG_WAGON_LOAD_BARREL");
	
		case 28:
			return joaat("HASH_AMB_VIG_WAGON_SWEEPER");
	
		case 29:
			return joaat("HASH_AMB_VIG_WAGON_UNLOAD_BARREL");
	
		case 30:
			return joaat("HASH_AMB_VIG_WALK_WITH_HORSE_A");
	
		case 31:
			return joaat("HASH_AMB_VIG_WHISPER_SIT");
	
		case 32:
			return joaat("HASH_AMB_VIG_WHISPER_STAND");
	
		case 33:
			return joaat("HASH_AMB_VIG_WHORE_GIVE_MONEY_MADAM");
	
		case 34:
			return joaat("HASH_AMB_VIG_AMB_CAMP_ROBBERY");
	
		case 35:
			return joaat("HASH_AMB_VIG_BOAT_PLACEMENT");
	
		case 36:
			return joaat("HASH_AMB_VIG_COUGAR_GRAPPLE_PED");
	
		case 37:
			return joaat("HASH_AMB_VIG_CROSS_TERRAIN_WALKER");
	
		case 38:
			return joaat("HASH_AMB_VIG_DEER_CARRY_DROPOFF");
	
		case 39:
			return joaat("HASH_AMB_VIG_DEER_CARRY_RIDE");
	
		case 40:
			return joaat("HASH_AMB_VIG_DOG_IN_WAGON");
	
		case 41:
			return joaat("HASH_AMB_VIG_DUCK_CARRY");
	
		case 42:
			return joaat("HASH_AMB_VIG_FEMALE_RIDER_MALE_WALKER");
	
		case 43:
			return joaat("HASH_AMB_VIG_FISHING_RIVER");
	
		case 44:
			return joaat("HASH_AMB_VIG_FISHING_RIVER_DOG");
	
		case 45:
			return joaat("HASH_AMB_VIG_GATOR_GRAPPLE_PED");
	
		case 46:
			return joaat("HASH_AMB_VIG_GOAT_CARRY_RIDE");
	
		case 47:
			return joaat("HASH_AMB_VIG_HOBO_TRAIN_HOP_NO_SACK");
	
		case 48:
			return joaat("HASH_AMB_VIG_MACFARLANE_FARMER");
	
		case 49:
			return joaat("HASH_AMB_VIG_MAN_RIDING_DONKEY");
	
		case 50:
			return joaat("HASH_AMB_VIG_MAN_SIT_READ");
	
		case 51:
			return joaat("HASH_AMB_VIG_MAN_RIDE_WITH_LANTERN");
	
		case 52:
			return joaat("HASH_AMB_VIG_OUTDOORSMAN");
	
		case 53:
			return joaat("HASH_AMB_VIG_RAM_CARRY_RIDE");
	
		case 54:
			return joaat("HASH_AMB_VIG_RESTING_HAT");
	
		case 55:
			return joaat("HASH_AMB_VIG_RIDER_GALLOP");
	
		case 56:
			return joaat("HASH_AMB_VIG_RIDER_WITH_DOG");
	
		case 57:
			return joaat("HASH_AMB_VIG_RIDGELINE_NATIVE");
	
		case 58:
			return joaat("HASH_AMB_VIG_RIDGELINE_RIDER");
	
		case 59:
			return joaat("HASH_AMB_VIG_ROVING_SHEEP_P1");
	
		case 60:
			return joaat("HASH_AMB_VIG_SLOW_RIDER");
	
		case 61:
			return joaat("HASH_AMB_VIG_TRAFFIC_CART");
	
		case 62:
			return joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_RIDERS");
	
		case 63:
			return joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_WALKERS");
	
		case 64:
			return joaat("HASH_AMB_VIG_TRAVELLER_GALLOP_PAST");
	
		case 65:
			return joaat("HASH_AMB_VIG_WAGON_HARMONICA");
	
		case 66:
			return joaat("HASH_AMB_VIG_WAGON_BACK_PASSENGER");
	
		case 67:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_DEER");
	
		case 68:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_GOAT");
	
		case 69:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_PRONGHORN");
	
		case 70:
			return joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_RAM");
	
		case 71:
			return joaat("HASH_AMB_VIG_WALK_PACK_HORSE");
	
		case 72:
			return joaat("HASH_AMB_VIG_WALK_WITH_DOG");
	
		case 73:
			return joaat("HASH_AMB_VIG_WALK_WITH_OX");
	
		case 74:
			return joaat("HASH_AMB_VIG_WATER_HORSE");
	
		case 75:
			return joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_LEG");
	
		case 76:
			return joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_NECK");
	
		case 77:
			return joaat("HASH_AMB_VIG_ALLIGATOR_EAT_DEAD_BIRD");
	
		case 78:
			return joaat("HASH_AMB_VIG_ARMADILLO_RUN");
	
		case 79:
			return joaat("HASH_AMB_VIG_BAT_FLEE_SWARM_LRG");
	
		case 80:
			return joaat("HASH_AMB_VIG_BAT_HANG_SWARM");
	
		case 81:
			return joaat("HASH_AMB_VIG_BEARBLACK_BACKDOWN");
	
		case 82:
			return joaat("HASH_AMB_VIG_BEAR_INTIMIDATE_WOLF");
	
		case 83:
			return joaat("HASH_AMB_VIG_BEAR_RUN_CATCH_FISH");
	
		case 84:
			return joaat("HASH_AMB_VIG_BEAR_SCRATCH_BACK");
	
		case 85:
			return joaat("HASH_AMB_VIG_BEAR_VS_WOLVES");
	
		case 86:
			return joaat("HASH_AMB_VIG_BEAVER_SWIM_WITH_BRANCH");
	
		case 87:
			return joaat("HASH_AMB_VIG_BIG_CAT_AMBUSH_DEER");
	
		case 88:
			return joaat("HASH_AMB_VIG_BIG_CAT_KILL_RACCOON");
	
		case 89:
			return joaat("HASH_AMB_VIG_BIRD_FENCE_SWARM_CROW");
	
		case 90:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_CROW");
	
		case 91:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK");
	
		case 92:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG");
	
		case 93:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG_W");
	
		case 94:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_GOOSE");
	
		case 95:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_PIGEON");
	
		case 96:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN");
	
		case 97:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_DARK");
	
		case 98:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_LRG");
	
		case 99:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SEAGULL");
	
		case 100:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SONGBIRD");
	
		case 101:
			return joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SPARROW");
	
		case 102:
			return joaat("HASH_AMB_VIG_BIRDS_IN_TREE");
	
		case 103:
			return joaat("HASH_AMB_VIG_BIRD_LAND_BLUEJAY");
	
		case 104:
			return joaat("HASH_AMB_VIG_BIRD_LAND_CARDINAL");
	
		case 105:
			return joaat("HASH_AMB_VIG_BIRD_LAND_DUCK");
	
		case 106:
			return joaat("HASH_AMB_VIG_BIRD_LAND_EAGLE");
	
		case 107:
			return joaat("HASH_AMB_VIG_BIRD_LAND_HAWK");
	
		case 108:
			return joaat("HASH_AMB_VIG_BIRD_LAND_HERON");
	
		case 109:
			return joaat("HASH_AMB_VIG_BIRD_LAND_LOON");
	
		case 110:
			return joaat("HASH_AMB_VIG_BIRD_LAND_OWL");
	
		case 111:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SEAGULL");
	
		case 112:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SONGBIRD");
	
		case 113:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SPARROW");
	
		case 114:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_CROW");
	
		case 115:
			return joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_PIGEON");
	
		case 116:
			return joaat("HASH_AMB_VIG_BIRD_ON_ALLIGATOR");
	
		case 117:
			return joaat("HASH_AMB_VIG_BIRD_ON_BUCK");
	
		case 118:
			return joaat("HASH_AMB_VIG_BIRD_ON_BUFFALO");
	
		case 119:
			return joaat("HASH_AMB_VIG_BIRD_ON_COW");
	
		case 120:
			return joaat("HASH_AMB_VIG_BIRD_ON_ELK");
	
		case 121:
			return joaat("HASH_AMB_VIG_BIRD_ON_MOOSE");
	
		case 122:
			return joaat("HASH_AMB_VIG_BIRD_SWARM");
	
		case 123:
			return joaat("HASH_AMB_VIG_BIRD_WIRE_SWARM_SPARROW");
	
		case 124:
			return joaat("HASH_AMB_VIG_BLUEJAY_ON_PERCH");
	
		case 125:
			return joaat("HASH_AMB_VIG_BOAR_RUN");
	
		case 126:
			return joaat("HASH_AMB_VIG_BUCK_AND_DOE");
	
		case 127:
			return joaat("HASH_AMB_VIG_BUCKS_FIGHTING");
	
		case 128:
			return joaat("HASH_AMB_VIG_BUFFALO_VS_BUFFALO");
	
		case 129:
			return joaat("HASH_AMB_VIG_BUFFALO_WALLOW_SHAKE");
	
		case 130:
			return joaat("HASH_AMB_VIG_CALIFORNIACONDOR_ON_PERCH");
	
		case 131:
			return joaat("HASH_AMB_VIG_CAMP_BIRD_ON_PERCH");
	
		case 132:
			return joaat("HASH_AMB_VIG_CARDINAL_ON_PERCH");
	
		case 133:
			return joaat("HASH_AMB_VIG_CAT_CARRY_RAT");
	
		case 134:
			return joaat("HASH_AMB_VIG_CAT_CATCH_BIRD");
	
		case 135:
			return joaat("HASH_AMB_VIG_CAT_RUN");
	
		case 136:
			return joaat("HASH_AMB_VIG_COYOTE_CATCH_SQUIRREL");
	
		case 137:
			return joaat("HASH_AMB_VIG_COYOTE_EAT_SHEEP");
	
		case 138:
			return joaat("HASH_AMB_VIG_COYOTE_TAKEDOWN_MISS_DEER");
	
		case 139:
			return joaat("HASH_AMB_VIG_CROWS_AND_EAGLES_EAT_DEER");
	
		case 140:
			return joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_DEER");
	
		case 141:
			return joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_HUMAN");
	
		case 142:
			return joaat("HASH_AMB_VIG_CROWS_EATING_DEER");
	
		case 143:
			return joaat("HASH_AMB_VIG_CROWS_EATING_HUMAN");
	
		case 144:
			return joaat("HASH_AMB_VIG_CROW_ON_PERCH");
	
		case 145:
			return joaat("HASH_AMB_VIG_DEAD_BOAR");
	
		case 146:
			return joaat("HASH_AMB_VIG_DEAD_BUCK");
	
		case 147:
			return joaat("HASH_AMB_VIG_DEAD_BUFFALO");
	
		case 148:
			return joaat("HASH_AMB_VIG_DEAD_COYOTE");
	
		case 149:
			return joaat("HASH_AMB_VIG_DEAD_HORSE_A");
	
		case 150:
			return joaat("HASH_AMB_VIG_DEAD_HORSE_B");
	
		case 151:
			return joaat("HASH_AMB_VIG_DEAD_PIG");
	
		case 152:
			return joaat("HASH_AMB_VIG_DEAD_POSSUM");
	
		case 153:
			return joaat("HASH_AMB_VIG_DEAD_PRONGHORN");
	
		case 154:
			return joaat("HASH_AMB_VIG_DEAD_RACCOON");
	
		case 155:
			return joaat("HASH_AMB_VIG_DEAD_SHEEP");
	
		case 156:
			return joaat("HASH_AMB_VIG_DEER_ANTLERS_STUCK");
	
		case 157:
			return joaat("HASH_AMB_VIG_DEER_RUN");
	
		case 158:
			return joaat("HASH_AMB_VIG_DEER_TREE_RUB");
	
		case 159:
			return joaat("HASH_AMB_VIG_DISCOVERABLE_PARAKEET");
	
		case 160:
			return joaat("HASH_AMB_VIG_DOG_CHASE_CAT");
	
		case 161:
			return joaat("HASH_AMB_VIG_DOG_CHASE_TAIL");
	
		case 162:
			return joaat("HASH_AMB_VIG_DOGS_PLAYING");
	
		case 163:
			return joaat("HASH_AMB_VIG_DUCK_WATER_SWARM");
	
		case 164:
			return joaat("HASH_AMB_VIG_EAGLE_CATCH_FISH");
	
		case 165:
			return joaat("HASH_AMB_VIG_EAGLE_CATCH_RABBIT");
	
		case 166:
			return joaat("HASH_AMB_VIG_EAGLE_CATCH_SEASNAKE");
	
		case 167:
			return joaat("HASH_AMB_VIG_EAGLE_DIVE_CATCH_FISH");
	
		case 168:
			return joaat("HASH_AMB_VIG_EAGLE_ON_PERCH");
	
		case 169:
			return joaat("HASH_AMB_VIG_FOX_CATCH_RODENT");
	
		case 170:
			return joaat("HASH_AMB_VIG_FOX_HUNT_IN_SNOW");
	
		case 171:
			return joaat("HASH_AMB_VIG_FOX_RUN");
	
		case 172:
			return joaat("HASH_AMB_VIG_FOX_SIT");
	
		case 173:
			return joaat("HASH_AMB_VIG_GOAT_RUN");
	
		case 174:
			return joaat("HASH_AMB_VIG_HAWK_CATCH_SNAKE");
	
		case 175:
			return joaat("HASH_AMB_VIG_HAWK_CATCH_SQUIRREL");
	
		case 176:
			return joaat("HASH_AMB_VIG_HAWK_ON_PERCH");
	
		case 177:
			return joaat("HASH_AMB_VIG_HAWK_VS_SNAKE");
	
		case 178:
			return joaat("HASH_AMB_VIG_HORSE_WALLOW");
	
		case 179:
			return joaat("HASH_AMB_VIG_IGUANA_RUN");
	
		case 180:
			return joaat("HASH_AMB_VIG_IGUANA_DESERT_RUN");
	
		case 181:
			return joaat("HASH_AMB_VIG_JAVELINA_RUN");
	
		case 182:
			return joaat("HASH_AMB_VIG_MANGY_DOG_AND_VULTURES");
	
		case 183:
			return joaat("HASH_AMB_VIG_MOOSE_GRAZING");
	
		case 184:
			return joaat("HASH_AMB_VIG_MOOSE_SLIPPING");
	
		case 185:
			return joaat("HASH_AMB_VIG_MUSKRAT_RUN");
	
		case 186:
			return joaat("HASH_AMB_VIG_OWL_CATCH_RAT");
	
		case 187:
			return joaat("HASH_AMB_VIG_OWL_ON_PERCH");
	
		case 188:
			return joaat("HASH_AMB_VIG_PELICAN_DIVE");
	
		case 189:
			return joaat("HASH_AMB_VIG_PELICAN_ON_PERCH");
	
		case 190:
			return joaat("HASH_AMB_VIG_PIG_ROLL_MUD");
	
		case 191:
			return joaat("HASH_AMB_VIG_PIG_RUN");
	
		case 192:
			return joaat("HASH_AMB_VIG_RABBIT_CHASE_RABBIT");
	
		case 193:
			return joaat("HASH_AMB_VIG_RABBIT_RUN");
	
		case 194:
			return joaat("HASH_AMB_VIG_RACCOON_EATING");
	
		case 195:
			return joaat("HASH_AMB_VIG_RACCOON_RUN");
	
		case 196:
			return joaat("HASH_AMB_VIG_RAMS_HEADBUTT");
	
		case 197:
			return joaat("HASH_AMB_VIG_RAM_RUN");
	
		case 198:
			return joaat("HASH_AMB_VIG_RATS_EAT_HUMAN");
	
		case 199:
			return joaat("HASH_AMB_VIG_RATS_EATING_GROUP");
	
		case 200:
			return joaat("HASH_AMB_VIG_RAVEN_ON_PERCH");
	
		case 201:
			return joaat("HASH_AMB_VIG_REDFOOTED_BOOBY_ON_PERCH");
	
		case 202:
			return joaat("HASH_AMB_VIG_RIDGELINE_BUCK");
	
		case 203:
			return joaat("HASH_AMB_VIG_RIDGELINE_ELK");
	
		case 204:
			return joaat("HASH_AMB_VIG_RIDGELINE_MOOSE");
	
		case 205:
			return joaat("HASH_AMB_VIG_RIDGELINE_PRONGHORN");
	
		case 206:
			return joaat("HASH_AMB_VIG_RIDGELINE_RAM");
	
		case 207:
			return joaat("HASH_AMB_VIG_RIDGELINE_WOLF");
	
		case 208:
			return joaat("HASH_AMB_VIG_SCAVENGER_ON_DEER");
	
		case 209:
			return joaat("HASH_AMB_VIG_SEAGULL_CATCH_FISH");
	
		case 210:
			return joaat("HASH_AMB_VIG_SHEEP_RUN");
	
		case 211:
			return joaat("HASH_AMB_VIG_SKUNK_RUN");
	
		case 212:
			return joaat("HASH_AMB_VIG_SNAKE_RUN");
	
		case 213:
			return joaat("HASH_AMB_VIG_SQUIRREL_CHASE_SQUIRREL");
	
		case 214:
			return joaat("HASH_AMB_VIG_SQUIRREL_RUN");
	
		case 215:
			return joaat("HASH_AMB_VIG_SWIMMING_BEARBLACK");
	
		case 216:
			return joaat("HASH_AMB_VIG_SWIMMING_BEAVER");
	
		case 217:
			return joaat("HASH_AMB_VIG_SWIMMING_BOAR");
	
		case 218:
			return joaat("HASH_AMB_VIG_SWIMMING_DEER");
	
		case 219:
			return joaat("HASH_AMB_VIG_SWIMMING_DOG");
	
		case 220:
			return joaat("HASH_AMB_VIG_SWIMMING_ELK");
	
		case 221:
			return joaat("HASH_AMB_VIG_SWIMMING_FOX");
	
		case 222:
			return joaat("HASH_AMB_VIG_SWIMMING_MOOSE");
	
		case 223:
			return joaat("HASH_AMB_VIG_SWIMMING_MUSKRAT");
	
		case 224:
			return joaat("HASH_AMB_VIG_SWIMMING_POSSUM");
	
		case 225:
			return joaat("HASH_AMB_VIG_SWIMMING_RACCOON");
	
		case 226:
			return joaat("HASH_AMB_VIG_SWIMMING_RAT");
	
		case 227:
			return joaat("HASH_AMB_VIG_SWIMMING_WOLF");
	
		case 228:
			return joaat("HASH_AMB_VIG_SWIM_WOLF_CHASE_MOOSE");
	
		case 229:
			return joaat("HASH_AMB_VIG_TURKEY_RUN");
	
		case 230:
			return joaat("HASH_AMB_VIG_VULTURES_EATING_CARCASS_A");
	
		case 231:
			return joaat("HASH_AMB_VIG_VULTURES_EATING_HUMAN");
	
		case 232:
			return joaat("HASH_AMB_VIG_VULTURE_ON_PERCH");
	
		case 233:
			return joaat("HASH_AMB_VIG_WILD_BULL");
	
		case 234:
			return joaat("HASH_AMB_VIG_WILD_GOAT");
	
		case 235:
			return joaat("HASH_AMB_VIG_WILD_OX");
	
		case 236:
			return joaat("HASH_AMB_VIG_WILD_SHARK");
	
		case 237:
			return joaat("HASH_AMB_VIG_WOLF_AMBUSH_DEER");
	
		case 238:
			return joaat("HASH_AMB_VIG_WOLF_FLEE_WOLVES");
	
		case 239:
			return joaat("HASH_AMB_VIG_WOLF_HOWL_CORPSE");
	
		case 240:
			return joaat("HASH_AMB_VIG_WOLF_HOWLING");
	
		case 241:
			return joaat("HASH_AMB_VIG_WOLVES_HOWLING");
	
		case 242:
			return joaat("HASH_AMB_VIG_WOLVES_EAT_DEER");
	
		case 243:
			return joaat("HASH_AMB_VIG_WOLVES_PLAYING");
	
		case 244:
			return joaat("HASH_AMB_VIG_WOLVES_PLAYING_B");
	
		case 245:
			return joaat("HASH_AMB_VIG_WOLVES_PLAYING_C");
	
		case 246:
			return joaat("HASH_AMB_VIG_WOLVES_RESTING");
	
		case 247:
			return joaat("HASH_AMB_VIG_WOLF_TAKEDOWN_MISS_DEER");
	
		default:
		
	}

	return -1385367302;
}

float func_12(int iParam0) // Position - 0x1AAA Hash - 0xD8BD2EF7 ^0x95BA15D9
{
	if (func_43(iParam0))
	{
		switch (Global_1415419.f_19[iParam0 /*12*/].f_6)
		{
			case 0:
				return 12f;
		
			case 1:
				return 1f;
		
			case 2:
				return 50f;
		
			case 3:
				return 100f;
		
			case 4:
				return 0f;
		
			default:
			
		}
	}

	return 12f;
}

Volume func_13(Vector3 vParam0, var uParam1, var uParam2, float fParam3, char* sParam4, BOOL bParam5, Entity eParam6, int iParam7, BOOL bParam8, int iParam9) // Position - 0x1B10 Hash - 0xC1E3A062 ^0xD42263D3
{
	Volume volume;
	int num;
	var entityCoords;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	if (fParam3 <= 0.1f)
		return 0;

	if (_IS_NULL_VECTOR(vParam0))
		return 0;

	num = 0;

	if (!bParam5)
		num = num | 2;

	num = num | 1;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam6))
	{
		if (func_44(vParam0))
			return 0;
	
		volume = VOLUME::_CREATE_VOLUME_LOCK(vParam0, fParam3, num, 0);
	}
	else
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam6, false, false) };
		volume = VOLUME::_CREATE_VOLUME_LOCK_ATTACHED_TO_ENTITY(eParam6, fParam3, num, 0);
	}

	if (iParam7 != 0)
		VOLUME::_0xB440F4E35393FC39(volume, iParam7);

	if (iParam9 >= 0f)
		VOLUME::_0xD460135C98940274(volume, iParam9);

	func_45(volume, bParam8);
	return volume;
}

void func_14(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x1BCA Hash - 0x9AB9A241 ^0xFD4AFA6E
{
	func_46(uParam0, "BIRD_FENCE_SWARM", "", uParam1, uParam4);

	if (*uParam0 == 123)
	{
		iLocal_21 = 9;
		hLocal_11 = joaat("world_animal_sparrow_on_perch");
	
		if (uParam0->f_489 == 1)
		{
			iLocal_9 = joaat("a_c_songbird_01");
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, 1308.83f, -1294.17f, 80.49f, 50.894f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 1308.84f, -1293.99f, 80.82f, 43.122f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 1308.76f, -1294.26f, 80.44f, 133.779f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 1308.63f, -1293.88f, 80.49f, 37.233f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 1309.03f, -1293.85f, 80.48f, -96.947f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 1308.84f, -1293.71f, 80.24f, 26.916f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 1308.59f, -1294.07f, 80.17f, 89.131f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 1308.7f, -1293.63f, 78.83f, -12.474f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 8, "BFS_BIRD_9", iLocal_9, 1308.36f, -1294.06f, 78.76f, 97.868f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else
		{
			iLocal_9 = joaat("a_c_sparrow_01");
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, func_48(-0.25f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, func_48(0.25f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, func_48(1f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, func_48(-1f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, func_48(-0.75f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, func_48(-0.5f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, func_48(0.5f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 8, "BFS_BIRD_9", iLocal_9, func_48(0.75f, 0f, 0f, uParam4) + uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
	}
	else if (*uParam0 == 80)
	{
		iLocal_9 = joaat("a_c_bat_01");
		hLocal_11 = joaat("world_animal_bat_hanging_demo");
	
		if (uParam0->f_489 == 1)
		{
			iLocal_21 = 18;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, 1711.87f, -1000.98f, 45.43f, -35.874f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 1711.73f, -1000.88f, 45.43f, -35.874f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 1713.26f, -1001.75f, 45.89f, -35.874f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 1711.47f, -1000.67f, 45.43f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 1711.28f, -1000.51f, 45.43f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 1711.13f, -1000.39f, 45.43f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 1710.99f, -1000.27f, 45.43f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 1711.85f, -999.97f, 46.58f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 8, "BFS_BIRD_9", iLocal_9, 1712.22f, -1000.65f, 46.55f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, 1712.44f, -1000.83f, 46.44f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, 1712.71f, -1001.03f, 46.32f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, 1713.03f, -1001.53f, 46.03f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, 1711.23f, -999.73f, 46.51f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, 1711.11f, -999.62f, 46.42f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, 1710.9f, -999.45f, 46.27f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, 1711.44f, -999.91f, 46.65f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 16, "BFS_BIRD_17", iLocal_9, 1713.57f, -1001.83f, 45.5f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 17, "BFS_BIRD_18", iLocal_9, 1712.85f, -1001.35f, 46.14f, -39.861f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 2)
		{
			iLocal_21 = 15;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, -2324.55f, 94.28f, 226.77f, -134.19f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, -2323.85f, 94.99f, 226.5f, -134.19f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, -2322.61f, 95.84f, 226.36f, -134.19f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, -2324.79f, 96.35f, 226.38f, -134.19f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, -2321.14f, 95.25f, 226.44f, -148.448f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, -2321.47f, 94.82f, 226.53f, -147.349f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, -2322.63f, 94.22f, 226.69f, -136.641f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, -2325.22f, 93.98f, 226.98f, -175.501f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, -2326.34f, 95.76f, 226.54f, -143.91f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, -2321.63f, 96.63f, 226.2f, -143.91f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, -2323.53f, 93.97f, 226.84f, -136.641f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, -2322.7f, 95.04f, 226.47f, -136.641f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, -2326.3f, 94.85f, 226.75f, -174.8f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, -2322.01f, 94.9f, 226.48f, -147.245f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 3)
		{
			iLocal_21 = 17;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, 1895.11f, -737.57f, 46.44f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 1895.06f, -738.42f, 46.44f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 1895.02f, -739.01f, 46.45f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 1894.97f, -739.67f, 46.46f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 1894.92f, -740.35f, 46.48f, 78.706f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 1894.82f, -741.82f, 46.53f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 1894.77f, -742.66f, 46.56f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 1894.48f, -744.69f, 46.07f, -172.229f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, 1894.85f, -744.7f, 46.07f, -172.229f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, 1895.09f, -738f, 46.45f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, 1895.24f, -735.64f, 46.45f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, 1895.22f, -736.07f, 46.45f, 88.468f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, 1895.19f, -736.5f, 46.45f, 80.406f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, 1895.59f, -735.15f, 46.07f, -0.44f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, 1895.27f, -735.13f, 46.07f, -3.393f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 16, "BFS_BIRD_17", iLocal_9, 1895.02f, -735.12f, 46.07f, -3.393f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 4)
		{
			iLocal_21 = 16;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, 2322.55f, 1085.99f, 105.59f, -85.634f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 2323.02f, 1084.85f, 105.22f, -85.634f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 2322.51f, 1088.35f, 105.52f, -85.634f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 2323.56f, 1083.33f, 105.28f, -64.668f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 2323.52f, 1085.62f, 105.76f, -73.037f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 2323.48f, 1086.85f, 106.02f, -94.224f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 2324.41f, 1081.31f, 104.88f, -29.563f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 2323.76f, 1082.63f, 105.08f, -54.208f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, 2321.64f, 1086.83f, 105.74f, -54.208f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, 2323.69f, 1084.24f, 105.76f, -68.321f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, 2322.96f, 1089.16f, 105.96f, -52.078f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, 2323.48f, 1088.31f, 106.01f, -69.219f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, 2324.81f, 1082.17f, 105.53f, -69.219f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, 2323.8f, 1087.56f, 106.12f, -76.39f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, 2323.41f, 1086.22f, 105.84f, -78.033f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 5)
		{
			iLocal_21 = 6;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, -1517.48f, 725.36f, 127.97f, 178.333f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, -1517.82f, 726.39f, 128.02f, 178.333f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, -1517.93f, 725.5f, 128.18f, 178.333f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, -1516.94f, 725.61f, 127.54f, 178.333f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, -1517.94f, 725.12f, 128.33f, 178.333f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, -1517.29f, 725.48f, 127.8f, 170.98f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 6)
		{
			iLocal_21 = 15;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, -2120.78f, 31.4f, 268.53f, -161.584f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, -2120.1f, 31.86f, 268.51f, -161.584f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, -2121.34f, 31.24f, 268.44f, -161.584f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, -2118.89f, 32.08f, 268.72f, -161.584f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, -2122.29f, 31.2f, 268.52f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, -2123.11f, 33.2f, 267.73f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, -2123.89f, 32.68f, 267.45f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, -2123.08f, 30.92f, 268.36f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, -2119.48f, 32.18f, 268.55f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, -2120.62f, 31.87f, 268.46f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, -2123.75f, 30.47f, 268.1f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, -2118.31f, 32.64f, 268.6f, -173.503f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, -2123.32f, 32.36f, 268.03f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, -2119.03f, 32.68f, 268.51f, -164.477f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 7)
		{
			iLocal_21 = 18;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, -3826.84f, -2983.01f, -3.77f, 173.718f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, -3827.07f, -2982.98f, -3.75f, 173.718f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, -3827.4f, -2983.02f, -3.71f, 173.718f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, -3827.84f, -2983.02f, -3.68f, 173.718f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, -3828.13f, -2983.02f, -3.64f, 173.718f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, -3825.91f, -2982.7f, -3.84f, -175.797f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, -3824.73f, -2982.72f, -3.9f, -175.797f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, -3826.51f, -2983.06f, -3.71f, -175.797f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, -3823.81f, -2982.74f, -3.77f, -175.797f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, -3823.48f, -2982.72f, -3.75f, -175.797f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, -3822.61f, -2981.71f, -3.28f, -92.069f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, -3822.68f, -2980.98f, -3.03f, -92.069f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, -3822.69f, -2980.52f, -2.87f, -83.601f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, -3822.83f, -2979.88f, -2.84f, -91.48f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, -3822.88f, -2978.62f, -4.1f, -91.48f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 16, "BFS_BIRD_17", iLocal_9, -3822.87f, -2978.22f, -4.09f, -91.48f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 17, "BFS_BIRD_18", iLocal_9, -3825.33f, -2982.69f, -3.82f, -175.239f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 8)
		{
			iLocal_21 = 18;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, 1774.73f, -463.53f, 50.05f, 32.47f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 1775.11f, -463.19f, 49.59f, 32.47f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 1775.86f, -463.88f, 47.41f, 34.464f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 1775.36f, -464.23f, 47.43f, 34.464f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 1772.95f, -465.97f, 47.5f, 34.464f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 1773.15f, -464.56f, 50.42f, 28.537f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 1772.56f, -464.98f, 49.82f, 28.537f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 1772.19f, -465.24f, 49.48f, 28.537f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, 1779.03f, -464.4f, 47.99f, -50.328f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, 1778.53f, -463.59f, 47.93f, -50.328f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, 1777.46f, -462.06f, 47.9f, -49.437f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, 1780.25f, -468.59f, 48.84f, -49.437f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, 1779.62f, -467.74f, 48.86f, -49.437f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, 1776.5f, -462.34f, 48.41f, 43.798f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, 1775.9f, -461.98f, 47.23f, 43.798f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 16, "BFS_BIRD_17", iLocal_9, -1574.08f, -930.37f, 86.99f, 179.06f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 17, "BFS_BIRD_18", iLocal_9, -1573.69f, -930.46f, 86.95f, 179.06f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 9)
		{
			iLocal_21 = 16;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, -1585.47f, -925.27f, 88.19f, 109.207f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, -1585.47f, -925.7f, 88.22f, 106.313f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, -1585.59f, -926.21f, 89.74f, 92.13f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, -1579.3f, -926.45f, 89.53f, -172.122f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, -1578.65f, -926.45f, 89.5f, -172.122f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, -1581.03f, -925.36f, 89.18f, 4.971f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, -1581.85f, -925.36f, 89.21f, -5.868f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, -1581.13f, -923.05f, 87.54f, 2.01f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, -1577.61f, -921.98f, 86.79f, 2.01f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, -1579.86f, -921.98f, 86.81f, 2.01f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, -1571.6f, -927.15f, 88.08f, -75.762f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, -1571.6f, -926.57f, 88.05f, -85.396f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, -1571.6f, -925.34f, 88.01f, -85.997f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, -1571.43f, -927.08f, 89.23f, -85.997f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, -1579.35f, -930.41f, 86.81f, 179.06f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 10)
		{
			iLocal_21 = 16;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, 2444.49f, 288.87f, 73.55f, -86.019f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 2444.51f, 289.22f, 73.56f, -92.396f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 2444.53f, 289.53f, 73.54f, -92.396f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 2444.55f, 289.87f, 73.54f, -92.396f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 2444.57f, 290.22f, 73.53f, -86.651f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 2447.72f, 288.98f, 71.85f, -86.651f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 2447.75f, 289.36f, 71.85f, -86.651f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 2448f, 293.26f, 71.82f, -86.651f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, 2447.91f, 292.66f, 71.89f, -86.651f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, 2443.46f, 280.13f, 78.44f, -93.507f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, 2443.42f, 279.61f, 78.34f, -93.507f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, 2443.02f, 277.84f, 77.79f, -93.507f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, 2443.04f, 278.08f, 77.79f, -93.507f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, 2443.06f, 278.36f, 77.79f, -93.507f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, 2443.3f, 277.42f, 78.33f, -93.507f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else
		{
			iLocal_21 = 20;
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, -316.83f, -110.7f, 50.92f, -149.582f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, -314.49f, -108.53f, 49.88f, -149.582f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, -316.59f, -110.56f, 50.85f, -149.582f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, -315.45f, -108.94f, 50.25f, -149.582f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, -316.18f, -108.68f, 51f, -149.582f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, -315.09f, -108.89f, 50.16f, -150.249f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, -314.87f, -108.81f, 50.11f, -150.249f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, -314.7f, -108.71f, 50.05f, -150.249f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 8, "BFS_BIRD_9", iLocal_9, -315.77f, -107.86f, 50.88f, -141.222f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, -315.55f, -107.68f, 50.75f, -153.206f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, -315.37f, -107.59f, 50.65f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, -315.15f, -107.5f, 50.54f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 12, "BFS_BIRD_13", iLocal_9, -316.75f, -110.66f, 50.89f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 13, "BFS_BIRD_14", iLocal_9, -314.65f, -108.6f, 49.94f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 14, "BFS_BIRD_15", iLocal_9, -314.82f, -108.67f, 50.02f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 15, "BFS_BIRD_16", iLocal_9, -314.94f, -108.72f, 50.09f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 16, "BFS_BIRD_17", iLocal_9, -315.07f, -108.77f, 50.13f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 17, "BFS_BIRD_18", iLocal_9, -315.25f, -108.85f, 50.18f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 18, "BFS_BIRD_19", iLocal_9, -316.5f, -110.51f, 50.81f, -156.979f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 19, "BFS_BIRD_20", iLocal_9, -316.38f, -110.44f, 50.77f, -143.955f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
	}
	else
	{
		iLocal_21 = 12;
	
		if (uParam0->f_489 == 0)
		{
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 1082.98f, 465.96f, 96.61f, -45.702f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 1085.05f, 463.6f, 96.24f, 140.55f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 1085.48f, 463.14f, 96.22f, 134.248f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 1086.61f, 461.9f, 96.29f, -140.251f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 1087.37f, 461.01f, 96.1f, -45.741f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 1088.75f, 459.55f, 96.05f, -48.963f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 1089.18f, 459f, 96.06f, 136.287f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 8, "BFS_BIRD_9", iLocal_9, 1089.53f, 458.58f, 96.07f, 128.572f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, 1090.93f, 456.93f, 96.12f, -43.254f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, 1091.81f, 455.94f, 96.23f, 124.263f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, 1093.48f, 454.05f, 96.29f, 43.036f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
		else if (uParam0->f_489 == 1)
		{
			func_47(uParam0, 0, "BFS_BIRD_1", iLocal_9, uParam1, uParam4.f_2, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 1, "BFS_BIRD_2", iLocal_9, 2527.89f, -885.75f, 42.19f, 28.258f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 2, "BFS_BIRD_3", iLocal_9, 2524.8f, -887.46f, 41.95f, 54.852f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 3, "BFS_BIRD_4", iLocal_9, 2521.59f, -889.15f, 42.22f, 13.408f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 4, "BFS_BIRD_5", iLocal_9, 2523.19f, -888.36f, 42.05f, 162.863f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 5, "BFS_BIRD_6", iLocal_9, 2520.99f, -889.32f, 41.96f, 32.252f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 6, "BFS_BIRD_7", iLocal_9, 2520.43f, -889.57f, 41.98f, 49.796f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 7, "BFS_BIRD_8", iLocal_9, 2519.42f, -890.01f, 42.01f, -144.771f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 8, "BFS_BIRD_9", iLocal_9, 2513.65f, -892.34f, 42.25f, -76.557f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 9, "BFS_BIRD_10", iLocal_9, 2515.58f, -891.54f, 42.08f, 23.63f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 10, "BFS_BIRD_11", iLocal_9, 2514.88f, -891.85f, 42.09f, 28.359f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
			func_47(uParam0, 11, "BFS_BIRD_12", iLocal_9, 2512.87f, -892.68f, 42.04f, -157.005f, 1, 1, 1, 1, joaat("META_OUTFIT_DEFAULT"), 1);
		}
	}

	return;
}

Vector3 func_15(var uParam0) // Position - 0x3F2C Hash - 0x6131D3C3 ^0x6131D3C3
{
	switch (*uParam0)
	{
		case 7:
		case 9:
			return 1f, 0.6f, 1.9f;
	
		case 11:
			return 1.2f, 3f, 4.5f;
	
		case 16:
		case 17:
		case 18:
		case 19:
		case 23:
		case 24:
		case 25:
		case 26:
			return 0.5f, 0.5f, 2f;
	
		case 30:
			return 2f, 1.5f, 3f;
	
		case 33:
			return 3f, 3f, 1.5f;
	
		default:
		
	}

	return 3f, 3f, 3f;
}

BOOL func_16(var uParam0) // Position - 0x3FCC Hash - 0x17F998C9 ^0xA9458C42
{
	int flags;
	int i;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			flags = 0;
		
			if (uParam0->f_16)
				flags = flags | 64;
		
			if (uParam0->f_17)
				flags = flags | 48;
		
			uParam0->f_3.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_3, flags, uParam0->f_3.f_9[0], false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_3.f_1, uParam0->f_3.f_2, uParam0->f_3.f_5, 2);
		}
	
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
			return false;
	
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_3.f_1);
	}

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (uParam0->f_20[i /*14*/].f_2 != 0)
			STREAMING::REQUEST_MODEL(uParam0->f_20[i /*14*/].f_2, false);
	}

	for (i = 0; i < uParam0->f_371; i = i + 1)
	{
		if (uParam0->f_372[i /*8*/].f_2 != 0)
			STREAMING::REQUEST_MODEL(uParam0->f_372[i /*8*/].f_2, false);
	}

	if (uParam0->f_453.f_1 != 0)
		STREAMING::REQUEST_MODEL(uParam0->f_453.f_1, false);

	PED::_RESERVE_AMBIENT_PEDS(uParam0->f_19);
	return true;
}

int func_17(var uParam0) // Position - 0x40E8 Hash - 0xD64BDDB0 ^0x6649AEFE
{
	int i;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
			return 0;
	
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_3.f_1, true, false))
			return 0;
	
		for (i = 0; i < uParam0->f_3.f_8; i = i + 1)
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_3.f_1, uParam0->f_3.f_9[i]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_3.f_1, uParam0->f_3.f_9[i]))
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_3.f_1, uParam0->f_3.f_9[i]);
			
				return 0;
			}
		}
	}

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (uParam0->f_20[i /*14*/].f_2 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_20[i /*14*/].f_2))
				return 0;
		
			if (uParam0->f_20[i /*14*/].f_3 != joaat("META_OUTFIT_DEFAULT"))
			{
				if (!PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_20[i /*14*/].f_4))
				{
					uParam0->f_20[i /*14*/].f_4 = PED::_REQUEST_META_PED_OUTFIT(uParam0->f_20[i /*14*/].f_2, uParam0->f_20[i /*14*/].f_3);
				
					if (!PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_20[i /*14*/].f_4))
					{
						uParam0->f_20[i /*14*/].f_3 = joaat("META_OUTFIT_DEFAULT");
						uParam0->f_20[i /*14*/].f_9 = 1;
					}
				
					return 0;
				}
				else if (!PED::_HAS_META_PED_OUTFIT_LOADED(uParam0->f_20[i /*14*/].f_4))
				{
					return 0;
				}
			}
		}
	}

	for (i = 0; i < uParam0->f_371; i = i + 1)
	{
		if (uParam0->f_372[i /*8*/].f_2 != 0)
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_372[i /*8*/].f_2))
				return 0;
	}

	if (uParam0->f_453.f_1 != 0)
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_453.f_1))
			return 0;

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return 0;

	return 1;
}

int func_18(var uParam0) // Position - 0x42B1 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

BOOL func_19(var uParam0) // Position - 0x42BA Hash - 0x595D6BD4 ^0x9D293229
{
	float num;
	int i;
	float num2;
	float num3;
	var matrix;

	if (Global_1935630.f_12)
		return false;

	if (func_49(0, false, true))
		if (func_50(0) == 4)
			return true;

	if (uParam0->f_500)
		return true;

	if (Global_1415419.f_9757 == -310375866)
		return true;

	if (func_51(uParam0->f_503, 2))
		return true;

	if (func_52())
	{
		num2 = 150f * 150f;
		num3 = 40f * 40f;
	}
	else
	{
		num2 = 150f * 150f;
	
		if (*uParam0 == 34)
			num3 = 900f;
		else
			num3 = 75f * 75f;
	}

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (uParam0->f_20[i /*14*/].f_2 != 0)
		{
			if (_IS_NULL_VECTOR(uParam0->f_20[i /*14*/].f_5))
			{
				if (uParam0->f_20[i /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				{
					matrix = { 0f, 0f, 0f };
					matrix.f_3 = { 0f, 0f, 0f };
					matrix.f_6 = { 0f, 0f, 0f };
					matrix.f_9 = { 0f, 0f, 0f };
					ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_20[i /*14*/].f_1, &matrix, true, uParam0->f_3.f_9[0], 2);
					uParam0->f_20[i /*14*/].f_5 = { matrix };
					uParam0->f_20[i /*14*/].f_8 = matrix.f_3.f_2;
				}
			}
		
			num = BUILTIN::VDIST2(Global_36, uParam0->f_20[i /*14*/].f_5);
		
			if (num < num2)
			{
				if (num < num3)
					return false;
			
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_20[i /*14*/].f_2, uParam0->f_20[i /*14*/].f_5, true))
					return false;
			}
		}
	}

	return true;
}

int func_20(var uParam0) // Position - 0x446A Hash - 0xE9CB60C1 ^0x884DE345
{
	var unk;

	unk = Global_1415419.f_1;
	unk.f_2 = 0;
	unk.f_3 = func_11(*uParam0);

	if (Global_1415419.f_9757 != -1)
	{
		unk.f_4 = Global_1415419.f_9757;
	
		if (func_53(uParam0, &unk))
		{
			return 1;
		}
		else
		{
			unk.f_4 = joaat("DEFAULT");
			func_53(uParam0, &unk);
			return 1;
		}
	}
	else
	{
		unk.f_4 = joaat("DEFAULT");
	}

	func_53(uParam0, &unk);
	return 1;
}

BOOL func_21(int iParam0) // Position - 0x44DE Hash - 0x7DFC1A23 ^0xD6849B09
{
	int num;

	num = Global_1415419.f_19[iParam0 /*12*/].f_5;

	if (num == 66 || num == 64 || num == 68 || num == 67 || num == 74)
		return true;

	return false;
}

void func_22(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x452D Hash - 0xDCA0A629 ^0x65C02C4D
{
	int num;

	num = 8;

	if (bParam4)
		num = num | 72;

	if (bParam5)
		num = num | 131072;

	if (bParam6)
		num = num | 24;

	if (bParam7)
		num = num | 40;

	if (bParam8)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

int func_23(var uParam0) // Position - 0x4585 Hash - 0xC59D483A ^0xE9F7DC8
{
	var matrix;

	matrix = { 0f, 0f, 0f };
	matrix.f_3 = { 0f, 0f, 0f };
	matrix.f_6 = { 0f, 0f, 0f };
	matrix.f_9 = { 0f, 0f, 0f };

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_453) && uParam0->f_453.f_1 != 0)
	{
		if (uParam0->f_453.f_7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_453.f_2, &matrix, false, 0, 2);
				uParam0->f_453.f_3 = { matrix };
				uParam0->f_453.f_6 = matrix.f_3.f_2;
			}
		}
	
		if (uParam0->f_453.f_10 != 0)
			uParam0->f_453 = VEHICLE::_CREATE_DRAFT_VEHICLE(uParam0->f_453.f_1, uParam0->f_453.f_3, uParam0->f_453.f_6, true, true, uParam0->f_453.f_9, uParam0->f_453.f_10, false);
		else
			uParam0->f_453 = VEHICLE::CREATE_VEHICLE(uParam0->f_453.f_1, uParam0->f_453.f_3, uParam0->f_453.f_6, true, true, uParam0->f_453.f_9, false);
	
		if (uParam0->f_453.f_9)
			VEHICLE::_0x3053064F909B5F42(uParam0->f_453, 1);
	
		return 0;
	}

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_453))
	{
		if (uParam0->f_453.f_8)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_3.f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_453, true, false), ENTITY::GET_ENTITY_ROTATION(uParam0->f_453, 2), 2);
	
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_453, false))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_453, true, true);
	}

	return 1;
}

int func_24(var uParam0) // Position - 0x46EE Hash - 0xD2ADCB31 ^0x23D387DE
{
	var matrix;
	int i;
	int randomIntInRange;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
			return 0;

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (uParam0->f_20[i /*14*/].f_2 != 0)
		{
			matrix = { 0f, 0f, 0f };
			matrix.f_3 = { 0f, 0f, 0f };
			matrix.f_6 = { 0f, 0f, 0f };
			matrix.f_9 = { 0f, 0f, 0f };
		
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_20[i /*14*/]))
			{
				if (uParam0->f_20[i /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				{
					ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_20[i /*14*/].f_1, &matrix, false, 0, 2);
					uParam0->f_20[i /*14*/].f_5 = { matrix };
					uParam0->f_20[i /*14*/].f_8 = matrix.f_3.f_2;
				}
			
				if (PED::_IS_META_PED_OUTFIT_REQUEST_VALID(uParam0->f_20[i /*14*/].f_4))
					uParam0->f_20[i /*14*/] = PED::_CREATE_META_PED_OUTFIT_PED(uParam0->f_20[i /*14*/].f_4, uParam0->f_20[i /*14*/].f_5, uParam0->f_20[i /*14*/].f_8, true, true, false, false);
				else
					uParam0->f_20[i /*14*/] = func_54(uParam0->f_20[i /*14*/].f_2, uParam0->f_20[i /*14*/].f_5, uParam0->f_20[i /*14*/].f_8, true, true, 0, true, uParam0->f_20[i /*14*/].f_11, uParam0->f_20[i /*14*/].f_9, false, false, false, false);
			
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 259, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 458, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 453, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 230, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 186, true);
			
				if (PED::IS_PED_HUMAN(uParam0->f_20[i /*14*/]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 146, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 307, true);
				}
			
				if (!PED::IS_PED_HUMAN(uParam0->f_20[i /*14*/]))
				{
					if (!func_55(uParam0->f_20[i /*14*/]))
					{
						randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
					
						if (i < 3)
							if (randomIntInRange <= 6)
								PED::_SET_PED_QUALITY(uParam0->f_20[i /*14*/], 1);
							else
								PED::_SET_PED_QUALITY(uParam0->f_20[i /*14*/], 2);
						else if (randomIntInRange <= 8)
							PED::_SET_PED_QUALITY(uParam0->f_20[i /*14*/], 1);
						else
							PED::_SET_PED_QUALITY(uParam0->f_20[i /*14*/], 2);
					}
				}
			
				if (uParam0->f_20[i /*14*/].f_12)
					PED::_SET_PED_SCALE(uParam0->f_20[i /*14*/], 1f);
			
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20[i /*14*/], true);
				return 0;
			}
		}
	}

	i = 0;

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[i /*14*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20[i /*14*/], true);
		
			if (uParam0->f_500)
				PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 171, true);
		
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_20[i /*14*/]))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_20[i /*14*/], true, false);
			else if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[i /*14*/], false))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_20[i /*14*/], true, true);
		}
	}

	return 1;
}

BOOL func_25(var uParam0) // Position - 0x4A15 Hash - 0x427C3B86 ^0x72BCBF03
{
	int i;
	var matrix;

	for (i = 0; i < uParam0->f_371; i = i + 1)
	{
		matrix = { 0f, 0f, 0f };
		matrix.f_3 = { 0f, 0f, 0f };
		matrix.f_6 = { 0f, 0f, 0f };
		matrix.f_9 = { 0f, 0f, 0f };
	
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_372[i /*8*/]))
		{
			if (uParam0->f_372[i /*8*/].f_7 && _IS_NULL_VECTOR(uParam0->f_372[i /*8*/].f_3) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_3.f_1, uParam0->f_372[i /*8*/].f_1, &matrix, false, 0, 2);
				uParam0->f_372[i /*8*/].f_3 = { matrix };
				uParam0->f_372[i /*8*/].f_6 = matrix.f_3.f_2;
			}
		
			uParam0->f_372[i /*8*/] = OBJECT::CREATE_OBJECT(uParam0->f_372[i /*8*/].f_2, uParam0->f_372[i /*8*/].f_3, true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_372[i /*8*/], uParam0->f_372[i /*8*/].f_6);
		
			if (uParam0->f_372[i /*8*/].f_7 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_372[i /*8*/], matrix.f_3, 2, true);
		
			return false;
		}
	}

	return true;
}

void func_26(var uParam0) // Position - 0x4B4C Hash - 0x4C71684F ^0x7A94D86C
{
	int i;

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[i /*14*/]))
		{
			if (uParam0->f_20[i /*14*/].f_10 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
			{
				if (uParam0->f_20[i /*14*/].f_13)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_20[i /*14*/], false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 168, true);
				}
			
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_20[i /*14*/].f_1, uParam0->f_20[i /*14*/], 0);
			}
		
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_20[i /*14*/], false);
		}
	}

	for (i = 0; i < uParam0->f_371; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_372[i /*8*/]) && uParam0->f_372[i /*8*/].f_7)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_372[i /*8*/].f_1, uParam0->f_372[i /*8*/], 0);
	}

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
		if (uParam0->f_453.f_7)
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_3.f_1, uParam0->f_453.f_2, uParam0->f_453, 0);

	return;
}

void func_27(var uParam0) // Position - 0x4C7C Hash - 0xFA70D137 ^0x7F492FB6
{
	int i;

	i = 0;

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[i /*14*/]))
			PED::SET_PED_RESET_FLAG(uParam0->f_20[i /*14*/], 29, true);
	}

	return;
}

BOOL func_28(var uParam0) // Position - 0x4CBB Hash - 0x50D334A6 ^0xBDC2CFE5
{
	if (*uParam0 == 80)
		volLocal_17 = VOLUME::CREATE_VOLUME_BOX(-309.7844f, -113.35817f, 49.776947f, 0f, 0f, 27.007847f, 19.720453f, 9.976815f, 3.902765f);

	return true;
}

void func_29(var uParam0) // Position - 0x4CF7 Hash - 0xACCC6A89 ^0xFA95CC86
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_3.f_1, uParam0->f_3.f_9[0], true);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_3.f_1);
	}

	return;
}

int func_30(var uParam0) // Position - 0x4D29 Hash - 0x2DF5A077 ^0x2DF5A077
{
	return 1;
}

int func_31(var uParam0) // Position - 0x4D32 Hash - 0x4C66700C ^0xEED2127B
{
	float num;
	int i;
	BOOL flag;
	int taskSequenceId;

	switch (iLocal_10)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iLocal_19 /*14*/]))
			{
				PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(uParam0->f_20[iLocal_19 /*14*/]);
				func_56(uParam0->f_20[iLocal_19 /*14*/], hLocal_11, uParam0->f_20[iLocal_19 /*14*/].f_5, uParam0->f_20[iLocal_19 /*14*/].f_8, 0, false, true, 0, -1082130432);
			
				if (*uParam0 == 80)
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_20[iLocal_19 /*14*/], false, false);
					FLOCK::_0xFDB008B3BCF5992F(uParam0->f_20[iLocal_19 /*14*/], 35f, 35f);
				}
			
				if (*uParam0 == 80)
					func_57(&uParam0->f_20[iLocal_19 /*14*/], true, true);
				else
					func_57(&uParam0->f_20[iLocal_19 /*14*/], false, true);
			}
		
			iLocal_19 = iLocal_19 + 1;
		
			if (iLocal_19 >= iLocal_21)
			{
				iLocal_19 = 0;
				iLocal_10 = 1;
			}
			break;
	
		case 1:
			num = BUILTIN::VDIST2(Global_36, uParam0->f_20[0 /*14*/].f_5);
		
			if (*uParam0 == 80 && uParam0->f_489 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_17, true, 0))
					flag = true;
			}
			else if (func_58(uParam0, uParam0->f_493, uParam0->f_494, 4, uParam0->f_495, 1112014848))
			{
				flag = true;
			}
			else if (num < 3600f)
			{
				if (*uParam0 != 80)
				{
					if (CAM::IS_SPHERE_VISIBLE(uParam0->f_20[0 /*14*/].f_5, 4f))
					{
						if (func_59(uParam0))
						{
							flag = true;
						}
						else
						{
							for (i = 0; i < iLocal_21; i = i + 1)
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[i /*14*/]))
								{
									if (PED::IS_PED_RESPONDING_TO_THREAT(uParam0->f_20[i /*14*/]))
									{
										flag = true;
										break;
									}
								}
							}
						}
					}
				}
			}
		
			if (flag)
			{
				func_60(*uParam0, false);
				func_61(*uParam0, uParam0->f_483, false);
				func_62(&uLocal_12);
				iLocal_10 = 3;
			}
			break;
	
		case 2:
			if (func_63(&uLocal_12, 0.1f))
			{
				shLocal_20 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), uParam0->f_483, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 3, 1);
				PED::_0x23BDE06596A22CEC(PED::GET_MOUNT(Global_35), 1, 0.15f, uParam0->f_20[5 /*14*/]);
				PED::_0x23BDE06596A22CEC(Global_35, 1, 1f, uParam0->f_20[5 /*14*/]);
				func_62(&uLocal_12);
				iLocal_10 = 4;
			}
			break;
	
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iLocal_19 /*14*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iLocal_19 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (*uParam0 == 80)
					{
						if (iLocal_19 < 7)
						{
							TASK::TASK_FLEE_COORD(uParam0->f_20[iLocal_19 /*14*/], uParam0->f_20[iLocal_19 /*14*/].f_5, 3, 256, -1082130432, -1, 0);
							PED::SET_PED_KEEP_TASK(uParam0->f_20[iLocal_19 /*14*/], true);
						}
						else if (iLocal_19 < 14)
						{
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							TASK::TASK_FLEE_COORD(0, uParam0->f_20[iLocal_19 /*14*/].f_5, 3, 256, -1082130432, -1, 0);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
							PED::SET_PED_KEEP_TASK(uParam0->f_20[iLocal_19 /*14*/], true);
							TASK::_TASK_PERFORM_SEQUENCE_2(uParam0->f_20[iLocal_19 /*14*/], taskSequenceId, 0.1f, 0.1f);
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							TASK::TASK_FLEE_COORD(0, uParam0->f_20[iLocal_19 /*14*/].f_5, 3, 256, -1082130432, -1, 0);
							TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
							PED::SET_PED_KEEP_TASK(uParam0->f_20[iLocal_19 /*14*/], true);
							TASK::_TASK_PERFORM_SEQUENCE_2(uParam0->f_20[iLocal_19 /*14*/], taskSequenceId, 0.125f, 0.125f);
							TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						}
					}
					else
					{
						TASK::TASK_FLEE_PED(uParam0->f_20[iLocal_19 /*14*/], Global_35, 3, 0, -1082130432, -1, 0);
					}
				
					PED::SET_PED_KEEP_TASK(uParam0->f_20[iLocal_19 /*14*/], true);
				}
			}
		
			iLocal_19 = iLocal_19 + 1;
		
			if (iLocal_19 >= iLocal_21)
			{
				iLocal_19 = 0;
			
				if (*uParam0 == 80)
				{
					iLocal_10 = 2;
				}
				else
				{
					func_62(&uLocal_12);
					iLocal_10 = 4;
				}
			}
			break;
	
		case 4:
			if (*uParam0 == 80)
				if (func_63(&uLocal_12, 15f))
					return 1;
			else if (func_63(&uLocal_12, 5f))
				return 1;
			break;
	}

	return 0;
}

int func_32(var uParam0, var uParam1) // Position - 0x5117 Hash - 0x2F8272AE ^0x6DDF2881
{
	func_64(uParam0, false, false, false);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_17))
		VOLUME::DELETE_VOLUME(volLocal_17);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_16))
		VOLUME::DELETE_VOLUME(volLocal_16);

	if (ITEMSET::IS_ITEMSET_VALID(isLocal_18))
		ITEMSET::DESTROY_ITEMSET(isLocal_18);

	if (shLocal_20 != 0)
		EVENT::REMOVE_SHOCKING_EVENT(shLocal_20);

	return 1;
}

void func_33(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5163 Hash - 0xDCA31891 ^0xDCA31891
{
	uParam0->f_465 = iParam1;
	uParam0->f_466 = iParam2;
	uParam0->f_467 = iParam3;
	return;
}

float func_34(int iParam0) // Position - 0x5180 Hash - 0x8CED6A02 ^0xD603ABD2
{
	float num;

	switch (iParam0)
	{
		case 7:
		case 15:
		case 28:
		case 40:
			if (Global_1415419.f_9757 == -310375866)
				return 650f;
			else
				return 175f;
			break;
	
		case 43:
		case 44:
			return 200f;
	
		case 47:
			if (Global_1415419.f_9757 == -310375866)
				return 700f;
			else
				return 200f;
			break;
	
		case 52:
			return 250f;
	
		case 72:
			return 200f;
	
		case 199:
			return 75f;
	
		default:
			if (func_52())
			{
				switch (func_65())
				{
					case 26:
						num = 175f;
						break;
				
					case 76:
						num = 175f;
						break;
				
					case 82:
						num = 175f;
						break;
				
					case 92:
						num = 200f;
						break;
				
					case 120:
						num = 175f;
						break;
				
					default:
						num = 105f;
						break;
				}
			}
			else
			{
				num = 200f;
			}
			break;
	}

	return num;
}

float func_35(int iParam0) // Position - 0x52BC Hash - 0xA8E8CC38 ^0x51F588E5
{
	float num;

	switch (iParam0)
	{
		case 7:
		case 15:
		case 28:
		case 40:
		case 44:
			if (Global_1415419.f_9757 == -310375866)
				return 600f;
			else
				return 150f;
			break;
	
		case 37:
			num = 175f;
			break;
	
		case 47:
			if (Global_1415419.f_9757 == -310375866)
				return 600f;
			else
				return 300f;
			break;
	
		case 52:
			return 200f;
	
		case 64:
			num = 175f;
			break;
	
		case 199:
			num = 50f;
			break;
	
		default:
			if (func_52())
			{
				switch (func_65())
				{
					case 26:
						num = 150f;
						break;
				
					case 76:
						num = 150f;
						break;
				
					case 82:
						num = 150f;
						break;
				
					case 92:
						num = 175f;
						break;
				
					case 120:
						num = 150f;
						break;
				
					default:
						num = 80f;
						break;
				}
			}
			else
			{
				num = 175f;
			}
			break;
	}

	return num;
}

float func_36(int iParam0) // Position - 0x53F5 Hash - 0xC36889AE ^0xC36889AE
{
	float num;

	switch (iParam0)
	{
		case 37:
			num = 100f;
			break;
	
		case 64:
			num = 100f;
			break;
	
		case 199:
			num = 20f;
			break;
	
		default:
			if (func_52())
			{
				switch (func_65())
				{
					case 26:
						num = 16f;
						break;
				
					case 76:
						num = 16f;
						break;
				
					case 82:
						num = 16f;
						break;
				
					case 92:
						num = 16f;
						break;
				
					default:
						num = 25f;
						break;
				}
			}
			else
			{
				num = 50f;
			}
			break;
	}

	return num;
}

BOOL func_37(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x549F Hash - 0x414F77D3 ^0xA2303EA9
{
	switch (iParam0)
	{
		case 58:
		case 124:
		case 132:
		case 168:
		case 176:
		case 187:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
			return true;
	
		default:
		
	}

	if (MISC::ABSF(Global_36.f_2 - uParam1.f_2) > 30f)
		return false;

	return true;
}

int func_38(Ped pedParam0, var uParam1, var uParam2, var uParam3, int iParam4) // Position - 0x5517 Hash - 0x2AE5C8B1 ^0x9995651A
{
	var entityCoords;
	var entityForwardVector;
	var unk5;
	float value;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	}

	unk5 = { uParam1 - entityCoords };
	value = func_66(entityForwardVector, unk5);

	if (MISC::ABSF(value) > iParam4)
		if (value > 0f)
			return 0;
		else
			return 1;

	if (func_67(entityCoords, entityCoords + entityForwardVector, uParam1))
		return 3;

	return 2;
}

BOOL func_39(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, float fParam6, float fParam7, int iParam8) // Position - 0x55A6 Hash - 0x43D58A3 ^0xFD80116C
{
	float num;
	var unk;
	var unk5;
	float radius;

	if (fParam3 == -1f)
		num = BUILTIN::VDIST2(Global_36, vParam0);
	else
		num = fParam3;

	if (num > fParam6)
		return false;

	if (num < fParam7)
		return false;

	if (!bParam5)
	{
		if (iParam8 != 34)
		{
			unk = 3;
			unk5 = 1;
		
			if (!bParam4)
			{
				unk[0] = 4;
				unk[1] = 16384;
			}
			else
			{
				unk[0] = 4;
				unk[1] = 16384;
				unk[2] = 8;
			}
		
			if (VOLUME::_0x870E9981ED27C815(vParam0, &unk5, &unk, 0))
				return false;
		}
	
		if (func_52())
			if (bParam4)
				radius = 3f;
			else
				radius = 60f;
		else if (iParam8 == 15 || iParam8 == 7 || iParam8 == 28 || iParam8 == 34)
			radius = 3f;
		else
			radius = 100f;
	
		if (VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, radius, 0, 8, 0))
			return false;
	
		if (func_68(vParam0, radius))
			return false;
	
		if (func_69(vParam0))
			return false;
	}

	return true;
}

int func_40() // Position - 0x56C1 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x56CD Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_70(*iParam0);
	i = func_71(*iParam0);
	num2 = func_72(*iParam0);
	j = func_73(*iParam0);
	k = func_74(*iParam0);
	l = func_75(*iParam0);

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

	for (m = func_76(i, num); num2 > m; m = func_76(i, num))
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

	func_77(iParam0, l, k, j, num2, i, num);
	return;
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x5855 Hash - 0xF543C309 ^0x6A5F3FAF
{
	int i;

	if (iParam3 == 0)
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;

	if (iParam3 != 0)
	{
		for (i = 0; i < 248; i = i + 1)
		{
			if (Global_1415419.f_19[i /*12*/].f_5 == iParam3)
			{
				if (i != iParam0)
				{
					if (func_40() > Global_32074.f_2697.f_6[i /*6*/].f_5)
						Global_32074.f_2697.f_6[i /*6*/].f_5 = func_40();
				
					func_41(&(Global_32074.f_2697.f_6[i /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, false);
					func_9(&(Global_1415419.f_19[i /*12*/].f_11), 2);
				}
			}
		}
	}

	return;
}

BOOL func_43(int iParam0) // Position - 0x58F5 Hash - 0xDC21AF4A ^0xDC21AF4A
{
	if (iParam0 != -1)
		return true;

	return false;
}

BOOL func_44(Vector3 vParam0, var uParam1, var uParam2) // Position - 0x5908 Hash - 0x3CD10F27 ^0xAC09280E
{
	return VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vParam0, 0.5f, 0, 0, 16384);
}

int func_45(Volume volParam0, BOOL bParam1) // Position - 0x5922 Hash - 0xEA796703 ^0x695D7925
{
	Volume volLockRequestId;
	int i;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return 0;

	!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volParam0);

	for (i = 0; i < Global_1911670; i = i + 1)
	{
		volLockRequestId = Global_1911670[i];
	
		if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(volLockRequestId) || volLockRequestId == volParam0)
		{
			Global_1911670[i] = volParam0;
			return 1;
		}
	}

	return 0;
}

void func_46(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8) // Position - 0x598A Hash - 0x99CB1C8D ^0x1337392D
{
	uParam0->f_2 = sParam1;
	uParam0->f_3 = sParam2;
	uParam0->f_3.f_2 = { uParam3 };
	uParam0->f_3.f_5 = { uParam6 };
	return;
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x59B6 Hash - 0x960D7EB7 ^0x57019BBE
{
	uParam0->f_20[iParam1 /*14*/].f_1 = sParam2;
	uParam0->f_20[iParam1 /*14*/].f_2 = iParam3;
	uParam0->f_20[iParam1 /*14*/].f_5 = { fParam4 };
	uParam0->f_20[iParam1 /*14*/].f_8 = fParam7;
	uParam0->f_20[iParam1 /*14*/].f_9 = iParam8;
	uParam0->f_20[iParam1 /*14*/].f_10 = iParam9;
	uParam0->f_20[iParam1 /*14*/].f_11 = iParam10;
	uParam0->f_20[iParam1 /*14*/].f_12 = iParam11;
	uParam0->f_20[iParam1 /*14*/].f_3 = iParam12;
	uParam0->f_20[iParam1 /*14*/].f_13 = iParam13;
	uParam0->f_19 = uParam0->f_19 + 1;
	return;
}

Vector3 func_48(float fParam0, float fParam1, float fParam2, float fParam3, var uParam4, var uParam5) // Position - 0x5A44 Hash - 0x7ADAAB88 ^0xBC8F8587
{
	float num;
	float num2;
	float num3;

	num = BUILTIN::COS(fParam3);
	num2 = BUILTIN::SIN(fParam3);
	num3 = fParam0;
	num3.f_1 = (num * fParam0.f_1) - (num2 * fParam0.f_2);
	num3.f_2 = (num2 * fParam0.f_1) + (num * fParam0.f_2);
	fParam0 = { num3 };
	num = BUILTIN::COS(fParam3.f_1);
	num2 = BUILTIN::SIN(fParam3.f_1);
	num3 = (num * fParam0) + (num2 * fParam0.f_2);
	num3.f_1 = fParam0.f_1;
	num3.f_2 = (num * fParam0.f_2) - (num2 * fParam0);
	fParam0 = { num3 };
	num = BUILTIN::COS(fParam3.f_2);
	num2 = BUILTIN::SIN(fParam3.f_2);
	num3 = (num * fParam0) - (num2 * fParam0.f_1);
	num3.f_1 = (num2 * fParam0) + (num * fParam0.f_1);
	num3.f_2 = fParam0.f_2;
	fParam0 = { num3 };
	return fParam0;
}

BOOL func_49(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5B1A Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_78())
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
		num = func_79(Global_1898164.f_1[0 /*5*/]);
	
		if (func_80(num) && func_81(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_82(Global_1898164.f_1[0 /*5*/]))
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

int func_50(int iParam0) // Position - 0x5D1E Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_51(int iParam0, int iParam1) // Position - 0x5D32 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_52() // Position - 0x5D41 Hash - 0x378FC94F ^0x378FC94F
{
	return Global_1894899 & true != 0 && func_65() != -1;
}

BOOL func_53(var uParam0, Any* panParam1) // Position - 0x5D5C Hash - 0x1B6187F7 ^0x93FC7285
{
	var unk;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam1->f_1), panParam1))
	{
		panParam1->f_2 = 1;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk, panParam1))
			uParam0->f_494 = unk;
	
		panParam1->f_2 = 2;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk, panParam1))
			uParam0->f_493 = unk;
	
		panParam1->f_2 = 3;
	
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&unk, panParam1))
			uParam0->f_495 = unk;
	
		return true;
	}

	return false;
}

Ped func_54(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x5DBB Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_83(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_55(Entity eParam0) // Position - 0x5DFD Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

void func_56(Ped pedParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, int iParam6, BOOL bParam7, BOOL bParam8, const char* sParam9, int iParam10) // Position - 0x5E29 Hash - 0xFE770A83 ^0xBFD078B3
{
	TASK::TASK_START_SCENARIO_AT_POSITION(pedParam0, hParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, iParam10, false);
	return;
}

void func_57(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5E4A Hash - 0x6DE5BABD ^0x14BE368D
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bParam1);

	if (!bParam1 && bParam2)
		PED::SET_PED_CONFIG_FLAG(*uParam0, 168, true);

	return;
}

BOOL func_58(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5) // Position - 0x5E72 Hash - 0x842F27B6 ^0xD8EEFFC
{
	int i;
	float num;
	Ped ped;
	float speedX;
	float speedY;
	float speedX2;
	float speedY2;
	float num2;
	float num3;

	if (func_51(uParam0->f_503, 1))
	{
		if (Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7)
		{
			Global_1415419.f_9721[uParam0->f_1 /*8*/].f_7 = 0;
			return true;
		}
	
		return false;
	}

	if (MISC::GET_FRAME_COUNT() % 8 == 0)
	{
		if (fParam4 > fParam2)
			num = fParam2;
		else
			num = fParam4;
	
		if (func_84(Global_35))
		{
			ped = func_85(Global_35);
		
			if (PED::GET_PED_CURRENT_MOVE_BLEND_RATIO(ped, &speedX, &speedY))
			{
				if (speedX >= 1.501f || speedY >= 1.501f)
				{
					num = num * 1.3f;
					fParam2 = fParam2 * 1.3f;
				}
			}
		}
		else
		{
			speedX2 = 1f;
			speedY2 = 1f;
			PED::GET_PED_CURRENT_MOVE_BLEND_RATIO(Global_35, &speedX2, &speedY2);
		
			if (speedX2 <= 2f && speedY2 <= 2f)
			{
				num = num * 0.7f;
				fParam2 = fParam2 * 0.7f;
			}
		}
	
		num = num * num;
		fParam2 = func_86(fParam2);
		num2 = func_87(Global_36, uParam0->f_483);
	
		if (num2 < uParam0->f_502)
			uParam0->f_502 = num2;
		else if (num2 - uParam0->f_502 > iParam5)
			return true;
	
		for (i = 0; i < uParam0->f_19; i = i + 1)
		{
			if (i >= iParam3)
				return false;
		
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[i /*14*/]))
			{
				if (!PED::_IS_PED_VISIBILITY_TRACKED(uParam0->f_20[i /*14*/]))
					PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_20[i /*14*/]);
			
				num3 = func_88(Global_35, uParam0->f_20[i /*14*/], true);
			
				if (num3 < num)
					return true;
			
				if (num3 < fParam2 * fParam2)
				{
					if (PED::_IS_PED_VISIBILITY_TRACKED(uParam0->f_20[i /*14*/]) && PED::IS_TRACKED_PED_VISIBLE(uParam0->f_20[i /*14*/]))
					{
						if (!func_89(&(uParam0->f_490)))
							func_62(&(uParam0->f_490));
					
						if (func_90(&(uParam0->f_490), fParam1))
						{
							func_91(&(uParam0->f_490));
							return true;
						}
					
						return false;
					}
				}
			}
		}
	
		if (func_89(&(uParam0->f_490)))
			func_91(&(uParam0->f_490));
	}

	return false;
}

BOOL func_59(var uParam0) // Position - 0x607D Hash - 0xB54AA975 ^0x86B841C0
{
	int entitiesInVolume;
	ScrHandle indexedItemInItemset;
	int i;
	Ped pedIndexFromEntityIndex;

	if (MISC::IS_BULLET_IN_AREA(uParam0->f_20[0 /*14*/].f_5, 10f, false))
	{
		if (ITEMSET::IS_ITEMSET_VALID(isLocal_18))
		{
			ITEMSET::DESTROY_ITEMSET(isLocal_18);
			return true;
		}
	}

	if (MISC::GET_GAME_TIMER() - iLocal_15 > 1000)
	{
		if (!ITEMSET::IS_ITEMSET_VALID(isLocal_18))
			isLocal_18 = ITEMSET::CREATE_ITEMSET(true);
		else
			ITEMSET::_CLEAR_ITEMSET(isLocal_18);
	
		if (!VOLUME::DOES_VOLUME_EXIST(volLocal_16))
			if (*uParam0 == 89)
				volLocal_16 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_20[0 /*14*/].f_5, 0f, 0f, 0f, 6f, 6f, 10f);
			else
				volLocal_16 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_20[0 /*14*/].f_5, 0f, 0f, 0f, 25f, 25f, 10f);
	
		entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volLocal_16, isLocal_18, 1);
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, isLocal_18);
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(indexedItemInItemset));
		
			if (PED::IS_PED_HUMAN(pedIndexFromEntityIndex) || PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex)))
			{
				ITEMSET::DESTROY_ITEMSET(isLocal_18);
				return true;
			}
		}
	
		iLocal_15 = MISC::GET_GAME_TIMER();
	}

	return false;
}

void func_60(int iParam0, BOOL bParam1) // Position - 0x6188 Hash - 0x4919699E ^0xFD97C4E2
{
	if (func_40() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_40();

	func_41(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, 1, 0, 0, 0, false);

	if (bParam1)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
		
			Global_1415419.f_7 = Global_1415419.f_7 + 50000;
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
		
			Global_1415419.f_8 = Global_1415419.f_8 + 50000;
		}
	}

	Global_32074.f_2697.f_6[iParam0 /*6*/].f_3 = Global_32074.f_2697.f_6[iParam0 /*6*/].f_3 + 1;
	Global_32074.f_2697.f_3 = Global_32074.f_2697.f_3 + 1;
	return;
}

void func_61(int iParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x625F Hash - 0x563CDE2F ^0xDC1014A4
{
	if (func_40() > Global_32074.f_2697.f_6[iParam0 /*6*/].f_5)
		Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_40();

	func_41(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 0, Global_1415419.f_19[iParam0 /*12*/].f_7, 0, 0, 0, false);

	if (bParam4)
	{
		if (iParam0 <= 74)
		{
			if (Global_1415419.f_7 < MISC::GET_GAME_TIMER())
				Global_1415419.f_7 = MISC::GET_GAME_TIMER();
		
			Global_1415419.f_7 = Global_1415419.f_7 + 120000;
		}
		else
		{
			if (Global_1415419.f_8 < MISC::GET_GAME_TIMER())
				Global_1415419.f_8 = MISC::GET_GAME_TIMER();
		
			Global_1415419.f_8 = Global_1415419.f_8 + 120000;
		}
	}

	func_42(iParam0, Global_1415419.f_19[iParam0 /*12*/].f_7 / 2, 0, 0);
	func_92(iParam0);
	func_93(iParam0, uParam1);
	Global_32074.f_2697.f_6[iParam0 /*6*/] = Global_32074.f_2697.f_6[iParam0 /*6*/] + 1;
	Global_32074.f_2697.f_2 = Global_32074.f_2697.f_2 + 1;
	return;
}

void func_62(var uParam0) // Position - 0x6363 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_94(uParam0, 0f);
	return;
}

BOOL func_63(var uParam0, float fParam1) // Position - 0x6372 Hash - 0xAC057F02 ^0xAC057F02
{
	if (!func_89(uParam0))
		return false;

	if (func_95(uParam0) > fParam1)
		return true;

	return false;
}

void func_64(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6399 Hash - 0xDC3D292 ^0xEF3943D3
{
	int i;

	if (bParam1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_3.f_1))
		{
			for (i = 0; i < uParam0->f_3.f_8; i = i + 1)
			{
				if (ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_3.f_1, uParam0->f_3.f_9[i]))
				{
				}
			}
		
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_3.f_1, 0);
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_3.f_1);
		}
	}

	if (bParam2)
	{
		for (i = 0; i < uParam0->f_371; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_372[i /*8*/]))
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&uParam0->f_372[i /*8*/]);
		}
	}

	if (bParam3)
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_453))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_453));

	for (i = 0; i < uParam0->f_19; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[i /*14*/]))
		{
			!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[i /*14*/]);
		
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_20[i /*14*/], true))
			{
				if (!PED::IS_PED_HUMAN(uParam0->f_20[i /*14*/]))
					if (PED::GET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 297, true))
						PED::SET_PED_CONFIG_FLAG(uParam0->f_20[i /*14*/], 297, false);
			
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->f_20[i /*14*/]);
			
				if (STREAMING::IS_MODEL_VALID(uParam0->f_20[i /*14*/].f_2))
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_20[i /*14*/].f_2);
			}
		}
	}

	return;
}

int func_65() // Position - 0x64ED Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

float func_66(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Position - 0x64FB Hash - 0x4C6A3038 ^0xA855205
{
	float num;

	fParam0.f_2 = 0f;
	fParam3.f_2 = 0f;
	num = BUILTIN::VMAG(fParam0);

	if (num != 0f)
	{
		fParam0 = fParam0 / num;
		fParam0.f_1 = fParam0.f_1 / num;
	}

	num = BUILTIN::VMAG(fParam3);

	if (num != 0f)
	{
		fParam3 = fParam3 / num;
		fParam3.f_1 = fParam3.f_1 / num;
	}

	return (fParam0 * fParam3) + (fParam0.f_1 * fParam3.f_1);
}

BOOL func_67(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8) // Position - 0x6562 Hash - 0x86FD6754 ^0x7FA3CE23
{
	return ((fParam3 - uParam0) * (fParam6.f_1 - uParam0.f_1)) - ((fParam3.f_1 - uParam0.f_1) * (fParam6 - uParam0)) > 0f;
}

BOOL func_68(var uParam0, var uParam1, var uParam2, float fParam3) // Position - 0x658B Hash - 0xFB3B5DBC ^0x49C12B1A
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (Global_1415419.f_9721[i /*8*/].f_2)
			if (func_96(uParam0, Global_1415419.f_9721[i /*8*/].f_4, fParam3, false))
				return true;
	}

	return false;
}

BOOL func_69(var uParam0, var uParam1, var uParam2) // Position - 0x65D7 Hash - 0xAD02BF52 ^0xC6AFBFA8
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_32074.f_2697.f_1495[i /*4*/] != -1)
			if (func_96(uParam0, Global_32074.f_2697.f_1495[i /*4*/].f_1, 1f, false))
				return true;
	}

	return false;
}

int func_70(int iParam0) // Position - 0x6626 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_71(int iParam0) // Position - 0x664B Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_72(int iParam0) // Position - 0x665E Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_73(int iParam0) // Position - 0x6671 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_74(int iParam0) // Position - 0x6684 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_75(int iParam0) // Position - 0x6696 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_76(int iParam0, int iParam1) // Position - 0x66A8 Hash - 0x893AC59E ^0x893AC59E
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

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6742 Hash - 0xA65AB937 ^0xA65AB937
{
	func_98(iParam0, iParam6);
	func_99(iParam0, iParam5);
	func_100(iParam0, iParam4);
	func_101(iParam0, iParam3);
	func_102(iParam0, iParam2);
	func_103(iParam0, iParam1);
	return;
}

BOOL func_78() // Position - 0x677A Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_79(int iParam0) // Position - 0x67CD Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_82(iParam0))
		return -1;

	return func_105(func_104(iParam0));
}

BOOL func_80(int iParam0) // Position - 0x67ED Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_81(int iParam0, int iParam1) // Position - 0x6803 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_82(int iParam0) // Position - 0x6812 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_83(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x6845 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_106(eptParam1))
		{
			func_107(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_108(pedParam0, 0, true);
	
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
			func_109(pedParam0, false);
			flag = true;
		}
	
		func_110(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_84(Ped pedParam0) // Position - 0x6926 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

Ped func_85(Ped pedParam0) // Position - 0x6941 Hash - 0x2F4187EE ^0xDD4F0EB9
{
	if (!PED::IS_PED_INJURED(pedParam0))
		return PED::GET_MOUNT(pedParam0);

	return 0;
}

float func_86(float fParam0) // Position - 0x695D Hash - 0xC65E6274 ^0xC318629A
{
	Hash* weaponHash;

	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		weaponHash = Global_1935630.f_44;
	
		if (WEAPON::_IS_WEAPON_SNIPER(weaponHash) || weaponHash == joaat("weapon_kit_binoculars"))
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
				fParam0 = fParam0 + (CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() * fParam0);
	}

	return fParam0;
}

float func_87(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x69A4 Hash - 0x6A10E689 ^0x100E8618
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_88(Ped pedParam0, Entity eParam1, BOOL bParam2) // Position - 0x69C2 Hash - 0x867DEA0 ^0xA060BC32
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return 0f;

	if (bParam2)
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false));

	return func_111(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(eParam1, false, false));
}

BOOL func_89(var uParam0) // Position - 0x6A19 Hash - 0x5001E582 ^0x5001E582
{
	return func_112(*uParam0, 1);
}

BOOL func_90(var uParam0, float fParam1) // Position - 0x6A29 Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_63(uParam0, fParam1))
	{
		func_91(uParam0);
		return true;
	}

	return false;
}

void func_91(var uParam0) // Position - 0x6A47 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_92(int iParam0) // Position - 0x6A5D Hash - 0xB0330CDF ^0xBFB3064F
{
	if (func_43(iParam0))
	{
		switch (Global_1415419.f_19[iParam0 /*12*/].f_5)
		{
			case 1:
				func_113(0, true, 0, 0, Global_1415419.f_19[iParam0 /*12*/].f_7 / 4, 0, false, true);
				func_113(1, true, 0, 0, Global_1415419.f_19[iParam0 /*12*/].f_7 / 4, 0, false, true);
				break;
		
			case 37:
				func_113(60, true, 0, 0, Global_1415419.f_19[iParam0 /*12*/].f_7 / 4, 0, false, true);
				break;
		}
	}

	return;
}

void func_93(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x6ADE Hash - 0xF0580228 ^0xF0580228
{
	int i;
	int num;

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (Global_32074.f_2697.f_1495[i /*4*/] == -1)
		{
			num = i;
			break;
		}
	
		if (Global_32074.f_2697.f_1495[i /*4*/] == iParam0)
			if (func_96(Global_32074.f_2697.f_1495[i /*4*/].f_1, uParam1, 1056964608, true))
				return;
	}

	if (num == -1)
	{
		for (i = 0; i < 9; i = i + 1)
		{
			Global_32074.f_2697.f_1495[i /*4*/] = Global_32074.f_2697.f_1495[i + 1 /*4*/];
			Global_32074.f_2697.f_1495[i /*4*/].f_1 = { Global_32074.f_2697.f_1495[i + 1 /*4*/].f_1 };
		}
	
		num = 9;
	}

	Global_32074.f_2697.f_1495[num /*4*/] = iParam0;
	Global_32074.f_2697.f_1495[num /*4*/].f_1 = { uParam1 };
	return;
}

void func_94(var uParam0, float fParam1) // Position - 0x6BCF Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_114() - fParam1;
	func_115(uParam0, 1);
	func_116(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

float func_95(var uParam0) // Position - 0x6BF5 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_89(uParam0))
		return uParam0->f_1;

	if (func_117(uParam0))
		return uParam0->f_2;

	return func_114() - uParam0->f_1;
}

BOOL func_96(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7) // Position - 0x6C2A Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= iParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= iParam6)
				return true;

	return false;
}

var func_97(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6C7F Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_98(int iParam0, int iParam1) // Position - 0x6C96 Hash - 0xD05180BA ^0x39589262
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

void func_99(int iParam0, int iParam1) // Position - 0x6D1C Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*iParam0 = *iParam0 - *iParam0 & 62914560;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_100(int iParam0, int iParam1) // Position - 0x6D58 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_71(*iParam0);
	num2 = func_70(*iParam0);

	if (iParam1 < 1 || iParam1 > func_76(num, num2))
		return;

	*iParam0 = *iParam0 - *iParam0 & 4063232;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_101(int iParam0, int iParam1) // Position - 0x6DAB Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*iParam0 = *iParam0 - *iParam0 & 126976;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_102(int iParam0, int iParam1) // Position - 0x6DE6 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 4032;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_103(int iParam0, int iParam1) // Position - 0x6E1F Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*iParam0 = *iParam0 - *iParam0 & 63;
	*iParam0 = *iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_104(int iParam0) // Position - 0x6E57 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_105(BOOL bParam0) // Position - 0x6E95 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_106(ePedType eptParam0) // Position - 0x6EA8 Hash - 0x5000025C ^0x5000025C
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

void func_107(Ped pedParam0, Hash hParam1) // Position - 0x72FB Hash - 0xEA1C858E ^0x7A3A251A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_118(pedParam0, hParam1))
		{
			if (func_119(pedParam0, hParam1))
			{
				if (func_120(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_121(pedParam0);
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

void func_108(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x73A5 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_109(Ped pedParam0, BOOL bParam1) // Position - 0x73D5 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_110(Ped pedParam0, int iParam1) // Position - 0x741A Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

float func_111(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x7441 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

BOOL func_112(int iParam0, int iParam1) // Position - 0x745F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_113(int iParam0, BOOL bParam1, int iParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6, BOOL bParam7) // Position - 0x746E Hash - 0x4654DD91 ^0x21FEF3E7
{
	int num;

	num = iParam2 + (60 * iParam3) + (3600 * iParam4) + (86400 * iParam5);

	if (func_122(iParam0) == 1 && bParam7)
		return;

	if (bParam6)
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > num)
			return;

	if (bParam1 || bParam6 || func_123() != -1)
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;

	Global_17504.f_42[iParam0 /*8*/].f_4 = Global_17504.f_42[iParam0 /*8*/].f_4 + num;
	return;
}

float func_114() // Position - 0x74FA Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_115(var uParam0, int iParam1) // Position - 0x752C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_116(var uParam0, int iParam1) // Position - 0x753D Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_117(var uParam0) // Position - 0x7552 Hash - 0x39705408 ^0x39705408
{
	return func_112(*uParam0, 2);
}

BOOL func_118(Ped pedParam0, Hash hParam1) // Position - 0x7562 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_119(Ped pedParam0, Hash hParam1) // Position - 0x7590 Hash - 0xA54F3032 ^0xD2631326
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

BOOL func_120(Ped pedParam0, Hash hParam1) // Position - 0x75E1 Hash - 0xA54F3032 ^0xD2631326
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_118(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_121(Ped pedParam0) // Position - 0x7653 Hash - 0x446F1BDD ^0xCA35E3BF
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

int func_122(int iParam0) // Position - 0x7671 Hash - 0x69AF6CF8 ^0x64DBA37A
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

BOOL func_123() // Position - 0x7684 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

