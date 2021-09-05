#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else if (y > x)
//	{
//		return y;
//	}
//
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//
//}
int main()
{
	char ch = 'h';
	char* pa = &ch;
	printf("%d\n", ch);
	printf("%c\n", ch);
	printf("%d\n", sizeof(ch));
	printf("%d\n", *pa);
	printf("%c\n", *pa);
	printf("%d\n", sizeof(pa));
	printf("%d\n", pa);
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(char));

		return 0;
	//int b = ~a;

	//printf("b=%d\n", b);
	//return 0;
	//int num1 = 10, num2 = 5;
	//if (num1 > num2)
	//{
	//	printf("较大值为：%d\n", num1);
	//}
	//else
	//{
	//	printf("较大值为：%d\n", num2);
	//}
	//return 0;
	//int num1 = 3, num2 = 3;
	//int max = 0;

	//max = MAX(num1, num2);
	//printf("两者较大值为：%d\n", max);
	//return 0;
}