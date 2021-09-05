#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

int i;
int main()
{
	int j=0;
	printf("%d\n", i);
	printf("%d\n", j);
	return 0;
}
//int main()
//{
//	int a[] = { 1, 3, 5, 7, 9 };
//	int b[] = { 2, 4, 6, 8, 0 };
//	int temp = 0;
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	for (i = 0; i < sz; i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = 0;
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//Init(arr, sz);
//	
//	Print(arr, sz);
//	Reverse(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
////void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag != 0)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 8,7,11,4, 6, 1,5 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}