#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
////	int ret=strcmp(p1, p2);
//	int ret = strncmp(p1, p2,3);
//	printf("%d\n", ret);
//	return 0;
//}

//strstr������ʵ��
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
//			return cur;//�ҵ��Ӵ�
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	char* p1 = "abbbcdef";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
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
	////�и�buf�е��ַ���

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
//	//������    ������Ϣ
//	//  0   -   No error
//	//  1   -   Operation not permitted
//	//  2   -   No such file or directory
//	//...
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char* str = strerror(2);
//	//printf("%s\n", str);
//
//	//���ļ�
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
//	//arr1�е����ֿ�����arr2��
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//C���Ա�׼��
//memcpy�������Կ������ص��ľͿ����ˣ����·��֣�VS2013�����µ�memcpy���Դ����ص�����
//memmove �����ص��ڴ�Ŀ���

//my_memmove(void* dest,const void*src,size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//��ǰ->�󿽱�
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
//		//�� ->ǰ����
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
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//��12345������34567��ȥ
//	int i = 0;
//	//my_memcpy(arr+2,arr,20);
//	//memmove(arr+2,arr,20);//�����ڴ��ص����������
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
//	struct s arr3[] = { { "����", 20 },{"����",30} };
//	struct s arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 8);//�Ƚϵ��ֽڵĸ���
//	printf("%d\n", ret);
//	return 0;
//}

