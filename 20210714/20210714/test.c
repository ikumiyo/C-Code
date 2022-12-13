#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	//char*pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	char*pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;//数组名-首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int*p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);//打印结果：9
//	printf("%d\n", &arr[0] - &arr[9]);//打印结果：-9
//	//指针-指针得到的是之间的元素个数
//	return 0;
//}
//
//int my_strlen(char*str)
//{
//	char*start = str;
//	char*end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen-计数器的方式1，递归的方式2
//	char arr[] = "bit";
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名是数组首元素地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	1.&arr - &数组名 - 数组名不是首元素的地址 - 数组名表示整个数组 - &数组名 取出的是整个数组的地址
//	2.sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组 - sizeof（数组名）计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p======%p\n", p + i, &arr[i]);
//	//}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	int**ppa = &pa;//ppa就是二级指针
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int*arr2[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", (*arr2[i]));
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 10 };
//	int tmp = 0;
//	int i =0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}

//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示中有几个1
//	//13
//	//00000000000000000000000000001101
//	//
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//		
//	return 0;
//} 

//int get_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	return count_bit_one(tmp);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &n, &m);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}

//void print(int n)
//{
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//
//	return 0;
//}


//print_table(int n)
//{
//	int i = 0;
//	for (i = 0; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//struct - 结构体关键字
//Stu - 结构体标签
//struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量（尽量少使用全局变量）

//typedef - 就是给这个结构体类型：struct Stu重新起了一个名字叫：Stu
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name:%s\n", tmp.name);
	printf("age:%d\n", tmp.age);
	printf("tele:%s\n", tmp.tele);
	printf("sex:%s\n", tmp.sex);
}

void Print2(Stu* ps)
{
	printf("name:%s\n", ps->name);
	printf("age:%d\n", ps->age);
	printf("tele:%s\n", ps->tele);
	printf("sex:%s\n", ps->sex);
}
int main()
{
	struct Stu s = { "李四", 40, "15598889888", "男" };
	//打印结构体数据
	//
	Print1(s);
	Print2(&s);
	return 0;
}