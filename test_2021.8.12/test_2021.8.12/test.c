#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n%j == 0)
//		{
//			return 0;
//			break;
//		}
//		
//	}
//	if (n%j != 0)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d是素数\n", i);
//		}
//		else
//		{
//			printf("%d不是素数\n", i);
//		}
//	}
//	return 0;
//}
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 10;
//	int b = 21;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10, b = 21;
//	int sum = 0;
//	sum = Add(a, 8);
//	printf("%d\n", sum);
////	char a[20] = { 0 };
//
//
//		system("shutdown -s -t 120");
//again:
//		printf("请注意你的电脑即将关机，请输入：我是猪！就可以取消\n请输入：");
//		scanf("%s", a);
//		if (strcmp(a, "我是猪") == 0)
//		{
//			system("shutdown -a");
//		}
//		else
//		{
//			goto again;
//		}

//	return 0;
//}