#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
/*	int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
	//	printf("%d ", *(*pa + i));
	////}
	/*for (i = 0; i < 10; i++)
	{
		printf("%d ", (*pa)[i]);
	}*/
	return 0;
}
//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr; 
//	int arr[10] = { 0 };
//	int(*pb)[10] = &arr;
//
//	return 0;
//}