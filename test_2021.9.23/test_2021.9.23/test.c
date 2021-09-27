#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <string.h>

int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int*)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x\n", ptr1[-1], *ptr2);
	return 0;

}
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", &a[0]);
//	printf("%p\n", &a[1]);
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//	//char str[] = "abcdef";
//	//printf("%d\n", sizeof(str));
//	//printf("%d\n", strlen(str));
//	//return 0;
//}