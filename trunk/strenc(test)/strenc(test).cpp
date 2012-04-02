
#include <stdio.h>
#include <windows.h>
#include "test strings.h"

int main(int argc, char **argv)
{
	printf("%s\n", INTRO_STRING);
	printf("%s\n", SECOND_STRING);
	printf("%s\n", THIRD_STRING);
	printf("%s\n", LONG_STRING);

	while (true) Sleep(100);
	return 0;
}

