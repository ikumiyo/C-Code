#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
//
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char*p = &ch;
//	char*p2 = "abcdef";//实际上是把字符串的首字符‘a’的地址交给了p2;  且字符串为常量字符串，其内容不允许修改
//	//指针数组 - 数组 - 存放指针的数组
//	int*arr[10];
//	char*ch[5];
//	//数组指针 - 指向数组
//	//int *p3； 整形指针 - 指向整形的指针
//	//char*p4； 字符指针 - 指向字符的指针
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//pa就是一个数组指针
//
//	int(*   parr3[10]  )[5]//parr3是一个数组，数组元素是10个，它的每个元素又是一个数组指针
//		//int(*    )[5] - 数组指针类型
//
//	return 0;
//
//}

//二维数组传参
//void test(int arr[3][5])  
//{}
//void test1(int arr[][5])  
//{}
//void test2(int arr[3][])//错误传参形式
//void test3(int *arr)//错误传参形式
//{}
//void test4(int **arr)//错误传参形式
//{}
//void test5(int(*arr)[5])//
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}


//函数指针 - 是指向函数的指针 -存放函数地址的指针 
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	printf("%d\n", Add(a, b));
//
//	&函数名 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//打印结果为：5
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x/y;
//}
//
//int main()
//{
//	//int *arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针数组
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3)); 
//	}
//
//	return 0;
//}
//
//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针 pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组 pfArr,能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);


//计算器
//void menu()
//{
//	printf("**********************************\n");
//	printf("***      1.add     2.sub       ***\n");
//	printf("***      3.mul     4.div       ***\n");
//	printf("***           0.exit           ***\n");
//	printf("**********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = {1,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//
//	} while (input);
//}



//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
		//scanf("%d", &input);

//			switch (input)
//		{
//			case 1:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Add(x, y));
//				break;
//			case 2:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Sub(x, y));
//				break;
//			case 3:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Mul(x, y));
//				break;
//			case 4:
//				printf("请输入两个操作数:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Div(x, y));
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("选择错误\n");
//				break;
//
//
//
//
//		}
//	} while (input);
//	return 0;
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz -1-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdlib.h>


int cmp_int(const void*e1,const void*e2)
{
	//比较两个整形值的
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void*e1, const void*e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;

}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}


}

int cmp_stu_by_age(const void*e1, const void*e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;

}
void test3()
{
	struct Stu s[3] = { { "zhagnsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);

}
int main()
{
	//int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]); 
	//struct Stu s[3] = { { "zhagnsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
	//float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	//qsort(f,sz, sizeof(f[0] ),cmp_float);
	//test1();
	//test2();
	test3();

}
///代码有点毛病没解决  ————————————————