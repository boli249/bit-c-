#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//int count_bit_one( int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//
//		if ((a & (1 << i) ) != 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a=a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int get_bit_dif(int a, int b)
//{
//	int tmp = 0;
//	int count = 0;
//	tmp = a^b;
//	return count_bit_one(tmp);
	/*while (tmp)
	{
		tmp = tmp&(tmp - 1);
		count++;
	}
//	return count;*/
//}
void print_bit(int a)
{
	int i = 0;
	printf("打印奇数位\n");
	for (i = 30; i >= 0; i=i -2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");

	printf("打印偶数位\n");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	print_bit(a);
	return 0;
}