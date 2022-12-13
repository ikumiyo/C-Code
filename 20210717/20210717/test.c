#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char*p1 = "abcdef";
//	char*p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//		char arr1[] = "abcdef";
//		char arr2[] = "abcdef";
//		char*p1 = "abcdef";//常量字符串
//		char*p2 = "abcdef";
//		if (p1 == p2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int*parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//		return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("% d",*(p+i));
//	}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("% d", *(*pa+i));
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", (*pa)[i]);//pa - 是数组的地址   *pa相当于数组名
	//}
//	return 0;
//}

Printf1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

Printf2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}



int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 },{2, 3, 4, 5, 6},{3, 4, 5, 6, 7} };
	Printf1(arr, 3, 5);//arr - 数组名 - 首元素地址
	Printf2(arr, 3, 5);

	return 0;
}