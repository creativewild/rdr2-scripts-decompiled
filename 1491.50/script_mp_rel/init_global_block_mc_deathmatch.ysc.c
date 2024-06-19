// Program registers 14705 globals at index 9 starting from Global_2359296
void main() // Position - 0x0 Hash - 0x296933A1 ^0x1CFEFFF7
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(9))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(9);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(9);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

