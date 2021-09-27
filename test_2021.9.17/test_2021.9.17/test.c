#define _CRT_SECURE_NO_DEPRECATE 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Stu
{
	char name[20];
	int age;
};
//	test1();
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2)
{
	//if (*(float*)e1 == *(float*)e2)
	//{
	//	return 0;
	//}
	//else if (*(float*)e1 < *(float*)e2)
	//{
	//	return -1;
	//}
	//else
	//{
	//	return 1;
	//}
	return (int)(*(float*)e1 - *(float*)e2);//
}
void test2()
{
	float arr[] = { 9.0, 8.1, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", arr[i]);
	}
}
int cmp_struct_s_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_struct_s_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void test4()
{
	struct Stu s[3] = { { "zahngsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_s_name);

}
void test3()
{
	struct Stu s[3] = { { "zahngsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_struct_s_age);

}
int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}

