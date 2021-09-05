#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

double Pow(int n, int k)
{
	if (k > 0)
	{
		return n*Pow(n, k - 1);
	}
	else if (k==0)
	{
		return 1;
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}
//#include <string.h>
//int digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return digitsum(num/10)+num%10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int sum = digitsum(num);
//	printf("%d\n", sum);
//	return 0;
//}
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) > 1)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//
//}
//
//int main()
//{
//	char arr[] = "abcdef1563156g";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}