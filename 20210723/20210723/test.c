#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//strncmp - 字符串比较
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
////	int ret=strcmp(p1, p2);
//	int ret = strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr函数的实现
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char *s1 = NULL;
//	char *s2 = NULL;
//	char *cur =(char*) p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2  && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到子串
//		}
//		cur++;
//	}
//	return NULL;//找不到子串
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//int main()
//{
	//192.168.31.121
	//192.168.31.121  - strtok
	//zxh@qq.com
	//zx qq com

	//char arr[] = "zxh@qq.com";
	//char*p = "@.";
	//char arr[] = "192.168.31.121";
	//char *p = ".";

	//char buf[1024] = { 0 };
	//strcpy(buf, arr);
	////切割buf中的字符串

	//char*ret = NULL;
	//for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	//{
	//	printf("%s\n", ret);
	//}


	//char*ret = strtok(arr, p);
	//printf("%s\n", ret);

	//ret = strtok(NULL, p);
	//printf("%s\n", ret);

	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	 

//	return 0;
//}

#include<errno.h>
//
//int main()
//{
//	//错误码    错误信息
//	//  0   -   No error
//	//  1   -   Operation not permitted
//	//  2   -   No such file or directory
//	//...
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//char* str = strerror(2);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}  

#include<ctype.h>
//
//int main()
//{
////	char ch = '2';
////	int ret = isdigit(ch);
//////	int ret = islower(ch);
////	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//char ch=tolower('Q');
//	//char ch=toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}

//struct s
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	//arr1中的数字拷贝到arr2中
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//C语言标准：
//memcpy函数可以拷贝不重叠的就可以了，当下发现：VS2013环境下的memcpy可以处理重叠拷贝
//memmove 处理重叠内存的拷贝

//my_memmove(void* dest,const void*src,size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//从前->后拷贝
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//
//	}
//	else
//	{
//		//后 ->前拷贝
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//把12345拷贝到34567上去
//	int i = 0;
//	//my_memcpy(arr+2,arr,20);
//	//memmove(arr+2,arr,20);//处理内存重叠拷贝的情况
//	my_memmove(arr + 2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 0 };
//	struct s arr3[] = { { "张三", 20 },{"李四",30} };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 8);//比较的字节的个数
//	printf("%d\n", ret);
//	return 0;
//}

