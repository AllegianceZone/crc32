// crc32.cpp : Defines the entry point for the console application.
//

#include "CRC.h"

int main(int argc, char* argv[])
{
	char szBuffer[512];
	int icrc = FileCRC(argv[1],szBuffer);
	printf("%X\n",icrc);
	return 0;
}

