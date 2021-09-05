#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>
//#include <string.h>
int add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	//int num1 = 10, num2 = 20;
	//int sum = 0;
	//int a = 5, b = 0;
	//int c = 0;

	//c = a + b;

	//sum = add(num1, num2);

	//printf("sum = %d\n", sum);
	//printf("c = %d\n", c);
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\n", arr[i]);
	//	i++;
	//}
	int a = 1;
	int b = a >> 2;

	printf("%d\n", b);
	printf("%d\n", a);

	return 0;
	//char arr1[] = "abc";
	//char arr2[] = { 'a', 'b', 'c' };
	//char arr3[] = { 'a', 'b', 'c', '\0' };

	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//printf("%d\n", strlen(arr3));

	//printf("%c\n", '\x61');
	//int line = 0;

	//printf("加入比特\n");

	//while (line < 20001)
	//{
	//	printf("敲一行代码：%d\n", line);
	//	line++;
	//}
	//if (line > 20000)
	//{
	//	printf("赢取白富美。\n");
	//}

	return 0;
}