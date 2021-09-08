#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//} 
unsigned int i = 0;
int main()
{
	int count = 0;
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
		count++;
	}
	printf("count=%d\n", count);
	return 0;
}

