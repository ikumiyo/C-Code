#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//存放50个strcut S类型的数据
//	//30 - 浪费
//	//60 - 不够
//	return 0;
//}

//C语言是可以创建变长数组（长度可变，可自己输入） - C99中增加了

//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int *)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用时，就应该还给操作系统
//	//malloc 和 free 要成对使用
//	free(p);//尽管空间被释放了，但是还是可以通过p找到原来空间的地址
//	p = NULL;//所以把空指针赋予p
//
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int));
//	int *p=(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc - 调整动态开辟内存空间的大小
//int main()
//{
//	int *p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realoc 使用的注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存
//	//区域，最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接收realloc函数的返回值
//
//	int* ptr = realloc(p, 40);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//	//1.对NULL进行解引用操作
//int main()
//{
//	int* p=(int*)malloc(40);
//	//万一malloc失败了，p就被赋值为NULL
//	*p = 0;//err
//
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		*(p + i) = i;//err
//	}
//	free(p);
//	p = NULL;
//}

//int main()
//{
//	//2.对动态开辟的内存的越界访问
//	int*p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*p = &a;
//	*p = 20;
//	//3.对非动态开辟内存使用free释放
//	free(p);
//	p = NULL; 
//	return 0;
//}


//4.使用free释放动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;//p发生了变化
//	}
//	//回收空间
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存的多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//	free(p);
//	//...
//	free(p);
//
//	return 0;
//}

//6.动态开辟内存忘记释放（内存泄漏）
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char*str = NULL;
//	GetMemory(str);
//	strcpy(str, "Hello World");//程序崩溃
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正1
//void GetMemory(char**p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char*str = NULL;
//	GetMemory(&str);
//	strcpy(str, "Hello World");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
//char* GetMemory(char*p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char*str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "Hello World");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//请问运行Test 函数会有什么样的结果？
//char *GetMemory(void)
//{
//	char p[] = "Hello World";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//存在非法访问内存问题

//请问运行Test 函数会有什么样的结果？
//void GetMemory(char **p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//存在的问题：忘记释放动态开辟的内存，导致内存泄漏
//	//改：
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//请问运行Test 函数会有什么样的结果？
//void Test(void)
//{
//	char *str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	//改：str=NULL；
//	if (str != NULL)
//	{
//		strcpy(str, "world");//非法访问内存
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//struct S
//{
//	int n;
//	int arr[10];
//
//};
//struct S
//{
//	int n;
//	int arr[0];//未知大小的数组 - 柔性数组成员 - 数组的大小是可以调整的
//
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//含有柔性数组的结构体中，不计算柔性数组的大小
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;// 0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//释放内存
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int*arr;
};
int main()
{
	struct S*ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//调整大小
	int*ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放内存
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}

