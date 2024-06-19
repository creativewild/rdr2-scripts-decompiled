// Program registers 4293 globals at index 3 starting from Global_786432
void main() // Position - 0x0 Hash - 0x4829FBB3 ^0x21DB377B
{
	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(3))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(3);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(3);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

