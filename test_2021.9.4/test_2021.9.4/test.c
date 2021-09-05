#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
	const int num = 10;
	const int* p1 = &num;
	const int** p2 = &p1;
	//*p1 = 20;
	*p2 = 30;
	printf("%d\n", num);
	return 0;
}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int ret = ADD(x, y);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", 10-i);
//	}
//
//	return 0;
//}