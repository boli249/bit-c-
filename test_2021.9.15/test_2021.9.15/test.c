#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int(*p)(int, int) = Add;
	printf("%d\n", Add(5, 7));
	printf("%d\n", (*p)(5, 7));
	printf("%d\n", p(5, 7));
	int(*parr[4])(int, int) = {Add,Sub,Mul,Div};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", (*parr[i])(2, 3));
		printf("%d\n", parr[i](2, 3));
	}
	return 0;
}
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	printf("%d\n", a);
//	printf("%p\n", pa);
//	printf("%d\n", pa);
//	printf("%d\n", *pa);
//	return 0;
//
//}
//int main()
//{
//	char a = 'c';
//	printf("%d\n", (int)a);
//	char* b = &a;
//	//*b = 'b';
//	printf("%p\n", b);
//	printf("%d\n", *b);
//	printf("%d\n", *(int*)b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0 + 1]);
//	printf("%p\n", &arr[0]+1);
//	return 0;
//}