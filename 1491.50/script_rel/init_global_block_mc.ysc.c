// Program registers 224306 globals at index 2 starting from Global_524288
void main() // Position - 0x0 Hash - 0xCFD4C14B ^0x5A7CA589
{
	TEXT_LABEL_ASSIGN_STRING(&Global_524294, "", 32);

	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(2))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(2);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(2);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

