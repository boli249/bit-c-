#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
int main()
{
	int a = -128;
	printf("%u\n", a);
	return 0;
}
//int main()
//{
//	char a = -1;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(+a));
//	printf("%d\n", sizeof(-a));
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}