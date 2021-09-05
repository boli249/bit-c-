#define _CRT_SECURE_NO_DEPRECATE 1
#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 ,5,8,9};
	int i = 0;
	int ret = 0;
	//int j = 0;

	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];
		/*int count = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}

		if (count == 1)
		{
			printf("单身狗：%d\n", arr[i]);

		}*/
	}
	printf("单独的数是：%d\n", ret);
	printf("单独的数是：%d\n", 8^9);
	return 0;
}