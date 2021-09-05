#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

int main()
{
	int x = -1073741825;
	x = x << 1;
	printf("x=%d\n", x);

	return 0;
}