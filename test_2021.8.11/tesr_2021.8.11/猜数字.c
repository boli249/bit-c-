#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************************\n");
	printf("*****1.play        0.exit   ******\n");
	printf("**********************************\n");
}
//RAND_MAX
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	//printf("%d\n", ret);
	while (1)
	{
		printf("��³�������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;


	do
	{
		menu();
		printf("�����룺");
		scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			printf("�뿪ʼ��Ϸ��\n");
			game();
			break;
		default:
			printf("�������\n");
			break;
		} 
	
	} while (input);
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
	//int k = 11;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int left = 0;
	//int right = sz - 1;

	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] == k)
	//	{
	//		printf("�ҵ��ˣ���������±���%d\n", mid);
	//		break;
	//	}
	//	else if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}

	//}
	//if (left>right)
	//{
	//	printf("�Ҳ���!\n");
	//}

	//int i = 0, j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%-2d ", i, j, i*j);
	//	}
	//	printf("\n");
	//}
	//int arr[] = { 1, 2, 3, 4, 15, 6, 7, 8, 9, 10 };
	//int max = arr[0];
	//int i = 0;
	//for (i = 1; i < 10; i++)
	//{
	//	if (arr[i]>max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("max=%d\n", max);
	//int i = 0;
	//float sum = 0.0;
	//int flag = 1;
	//for (i = 1; i < 101; i++)
	//{
	//	sum += pow(-1, i + 1)*1.0 / i;

	//	//sum += flag * 1.0 / i;
	//	//flag = -flag;
	//}

	//printf("%f\n", sum);
	//int i = 0;
	//int count = 0;
	//for (i = 1; i < 100; i++)
	//{
	//	if (i % 10 == 9)
	//	{
	//		count++;
	//	}
	//	if (i / 10 == 9)
	//	{
	//		count++;
	//	}

	//}
	//printf("%d\n", count);
	//int i = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++)
	//	{
	//		if (i%j == 0)
	//		{
	//			printf("%d��������\n", i);
	//			break;
	//		}
	//	}
	//	if (j > sqrt(i))
	//	{
	//		printf("%d������\n", i);
	//	}


	//}
	/*int m = 0, n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (m%n)
	{
		r = m%n;
		m = n;
		n = r;
	}
	printf("���Լ����%d\n", n);*/
	//int i = 0;
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (0 == i % 3)
	//	{
	//		printf("%d ", i);
	//		count++;
	//	}
	//	
	//}
	//printf("\n,����%d����",count);
	//int a = 0, b = 0, c = 0;
	//printf("��������������");
	//scanf("%d%d%d", &a, &b, &c);
	//if (a < b)
	//{
	//	int tmp = a;
	//	a = b;
	//	b = tmp;
	//}
	//if (a < c)
	//{
	//	int tmp = a;
	//	a = c;
	//	c = tmp;
	//}
	//if (b < c)
	//{
	//	int tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	//printf("%d %d %d\n", a, b, c);
	return 0;
}