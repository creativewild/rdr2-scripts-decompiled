// Program registers 125822 globals at index 7 starting from Global_1835008
void main() // Position - 0x0 Hash - 0xD01E4BFA ^0x8717F877
{
	Global_1902821 = -1;
	Global_1904399 = -1;
	Global_1904400 = -1;
	Global_1956805 = -1;

	if (SCRIPTS::_DOES_COMPRESSED_GLOBAL_BLOCK_BUFFER_EXIST(7))
		SCRIPTS::_RESTORE_GLOBAL_BLOCK(7);
	else
		SCRIPTS::_STORE_GLOBAL_BLOCK(7);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

