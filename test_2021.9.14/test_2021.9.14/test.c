#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>

void test()
{
	printf("hehe\n");
}

int main()
{
	test();
	void(*p1)() = test;
	(*p1)();
	void(*p2)() = &test;
	(*p2)();
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	printf("%d\n", a);
//	printf("%d\n", *p);
//	char* str1 = "abcd e";
//	printf("%s\n", str1);
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void (*p)(char*)= Print;
//	char* str = "hello bit";
//	Print(str);
//	(*p)(str);
//	return 0;
//}

//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n",Add(a, b));
//	//int(*p)(int, int) = Add;
//	int(*p)(int, int) = &Add;
//	printf("%d\n", (*p)(a, b));
//	return 0;
//}

//int Add(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//	//�� ��������&��������һ�����ǣ����������������Ԫ�صĵ�ַ������������⣬����һ�־���&�����������������ĵ�ַ
//	//��������&������ ��һ���Ķ��Ǻ����ĵ�ַ
//	return 0;
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	/*char arr[8] = "abcdef"; 
//	printf("%s\n", arr);*/
//	return 0;
//}