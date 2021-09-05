#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

//int fib(int n)
//{
//	int a =1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = fib(n);
//	printf("%d\n", ret);
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
////	}
////	return count;
////}
//int my_strlen(char* str)
//{
//	if (*(str) != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char str[] = "bit";
//	int len = 0;
//	len = my_strlen(str);
//	printf("len=%d\n", len);
//	return 0;
//}
//void print(int a)
//{
//	if (a > 9)
//	{
//		print(a / 10);
//	}
//	printf("%d ", a % 10);
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//int main()
//{
//	printf("heh\n");
//	main();
//	return 0;
//}