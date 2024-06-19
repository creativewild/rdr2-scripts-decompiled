// Program registers 37443 globals at index 14 starting from Global_3670016
void main() // Position - 0x0 Hash - 0xA3BBAC87 ^0x8371DC0F
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(14))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(14);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(14);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

