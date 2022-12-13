
#include<stdio.h>

int main() {

	int x, cnt = 0, i = 0;

	int y = 0, b = 0;

	scanf_s("%d", &x);

	int t = x;

	while (t > 0)

	{
		t /= 10;

		cnt++;
	}

	const int c = cnt;

	int a[6] = { 0 };

	for (i = 0; i < cnt; i++)

	{
		b *= 10;//b=0
	}

	for (i = 0; i < cnt; i++)

	{
		a[i] = x % 10;

		x /= 10;
	}

	for (i = 0; i < cnt; i++)

	{
		y = y + a[i] * b;

		b /= 10;
	}

	printf("%d", y);

	return 0;

}

//最简单的递归
//int main()
//{
//	printf("haha\n");
//	main();
//		return 0;
//}
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n/ 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//递归
//	print(num);
//	return 0;
//}

//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}

//递归的方法
//把大事化小
//my_strlen("bit");
//1 + my_strlen("it");
//1 + 1 + my_strlen("t");
//1 + 1 + 1 + my_strlen("")
//1+1+1+0
//3
//题目要求：编写函数不允许创建临时变量，求字符串长度。
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是首元素的地址
//	printf("len= %d\n", len);
//	return 0;
//}


//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}

//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//递归的方式
//	printf("%d\n", ret);
//
//	return 0;
//}



//描述第n个斐波那契数
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//循环的方式求斐波那契数
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
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
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret= %d", ret);
//	return 0;
//}

//
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %p\n ",i,j,&arr[i][j]);
//		}
//	}
//
//	return 0;
//}



//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟的冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr传参的时候，实际上传递过去的是数组arr首元素的地址&arr[0]
//
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1, 2, 4, 5, 6, 7, 8, 9 };
//	printf("%p\n", arr);//数组名就是首元素地址
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}

//不创建变量，编写代码交换两个数
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp=0;//临时变量
//	printf("before:a=%d b=%d\n", a, b);
//	//tmp=a;
//	//a = b;
//	//b=tmp;
//
//
//	//加减法-缺点：可能会溢出
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	//异或的方法
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after:a=%d b=%d", a, b);
//
//	return 0;
//}




//编写代码实现：求一个整数存储在内存中的二进制中1的个数、
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);//3-011
	//32bit
	//num &1==1
	//0000 0000 0000 0000 0000 0000 0000 0011
	//0000 0000 0000 0000 0000 0000 0000 0001
	//0000 0000 0000 0000 0000 0000 0000 0010
	//int i = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (1 == ((num >> i) & 1))
	//		count++;
	//}

	//统计num的补码中有几个1
	//while (num)该方法有问题，对于-1的情况不适用
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}


//	printf("%d\n", count);
//	return 0;
//}



