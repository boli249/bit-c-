#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

int check_sys()
{
	int n = 1;
	return *(char*)&n;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小\n");
	}
	else
	{
		printf("大\n");
	}
	return 0;
}
//int main()
//{
//	int n = 1;
//	char* pn = (char*)&n;
//	if (*pn)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main(void)
//{
//	int n = 1;
//	printf(*(char*)&n ? "小端\n" : "大端\n");
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	//int* pa = &a;
//	//printf("%p\n", &a);
//	//0000000000000000000000000000000000011001
//	//0x 00 00 00 19
//	int b = -10;
//	//0000000000000000000000000000000000100110
//	//0x 00 00 00 25
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(int));
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//}