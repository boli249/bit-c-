#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	printf("%p\n", &arr1[0]);
	printf("%p\n", arr1);
	printf("%d\n", *arr1);
	printf("%d\n", arr1[0]);
	printf("%d\n", arr1);
	return 0;
}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char *p1 = "abcdef";
//	char *p2= "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}
//int main()
//{
//	char* p = "abcdef";
//	*p = 'w';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	char arr[6] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	return 0;
//}