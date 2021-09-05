#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char str[] = "bitfajbfjb";
	int len = my_strlen(str);
	printf("%d\n", len);
	return 0;
	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("%d\n", &arr[3] - &arr[9]);
	//return 0;
	//int a = 0x11223344;
	//int* pa = &a;
	//char* pc = &a;
	//printf("%p\n", pa);
	//printf("%p\n", pa+1);
	//printf("%p\n", pc);
	//printf("%p\n", pc+1);
	//return 0;
}