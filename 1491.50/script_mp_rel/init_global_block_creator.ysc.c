// Program registers 12945 globals at index 11 starting from Global_2883584
void main() // Position - 0x0 Hash - 0x32D603AE ^0x2FB44C0F
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(11))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(11);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(11);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

