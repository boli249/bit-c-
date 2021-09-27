#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
void menu()
{
	printf("************************************\n");
	printf("****** 1.Add             2.Sub *****\n");
	printf("****** 3.Mul             4.Div *****\n");
	printf("****** 5.Xor             0.Exit ****\n");
	printf("************************************\n");
}
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
int Xor(int x, int y)
{
	return x ^ y;
}

int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pfarr[])(int, int) = { NULL, Add, Sub, Mul, Div, Xor };
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		if (input >= 1 && input <= sizeof(pfarr) / sizeof(pfarr[0])-1)
		{
			printf("请输入两个数");
			scanf("%d%d", &x, &y);
			printf("%d\n", pfarr[input](x, y));
		}
		else if (input == 0)
		{
			printf("程序退出\n");
		}
		else
		{
			printf("输入错误,请重新输入\n");
		}
	} while (input);

	return 0;
}