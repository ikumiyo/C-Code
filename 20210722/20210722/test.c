#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int is_left_move(char*str1, char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1  != len2)
//		return 0;
//
//	//1.��str1�ַ�����׷��һ��str1�ַ��� 
//	//strcat
//	//strncat
//	//strcat(str1,str1)- err
//	strncat(str1, str1, 6);//abcdefabcdef
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr - ���Ӵ���
//	char* ret=strstr(str1, str2);//��str1������û��str2���Ӵ�
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//}

//��Ŀ���ƣ����Ͼ���
//��Ŀ���ݣ���һ�����־��󣬾����ÿһ�д����ҵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O��N��

//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	//�Ҳ���
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	int count = ;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//
//	return 0;
//}
//int main()
//{//             3     -       6 = -3   
//	//strlen �ķ���������size_t == unsigned int
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//	//��ӡ�����hehe
//}
//my_strcpy(char*dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char*ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬��������0��
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}
//my_strcat(char*dest, const char*src)
//{
//	char*ret = dest;
//	assert(dest != NULL);
//	assert(src);
//
//	//1.�ҵ�Ŀ���ַ����ġ�\0��
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//
//		return 0;
//}

//ģ��ʵ��strcmp����
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&& str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}