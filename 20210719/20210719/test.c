#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//int main()
//{
	//����������Ԫ�ص�ַ���������������
	//1.sizeof����������- ��������ʾ��������
	//2.&������ - ��������ʾ��������

	//һά����
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//sizeof(�������� - ������������ܴ�С - ��λ���ֽ� - 16
	//printf("%d\n", sizeof(a+0));//4 - �����������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ��СΪ4/8���ֽ�
	//printf("%d\n", sizeof(*a));//4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof��*a������4
	//printf("%d\n", sizeof(a+1));//4 - �����������ʾ��Ԫ�ص�ַ��a+1�ǵ�2��Ԫ�صĵ�ַ����ַ��СΪ4/8���ֽ�
	//printf("%d\n", sizeof(a[1]));//4 - ��2��Ԫ�صĴ�С
	//printf("%d\n", sizeof(&a));//4-  &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ��С����4/8���ֽ�
	//printf("%d\n", sizeof(*&a));//16 - &a�õ���������ĵ�ַ������ĵ�ַ�����÷��ʵ�����������
	//printf("%d\n", sizeof(&a+1));//4 - &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	//printf("%d\n", sizeof(&a[0]));//4 - &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0]+1));//4 &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ


	//�ַ�����
	//char *p = "abcdef";//p�����ĵ����ַ������ַ��ĵ�ַ
	////strlen - �����ַ������ȣ��ӵ�ַ��ʼ�����ʣ�����\0ֹͣ

	//printf("%d\n", sizeof(p));//4 - ����ָ������Ĵ�С
	//printf("%d\n", sizeof(p + 1));//4 - p+1�õ������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//1 - *p�����ַ����ĵ�һ���ַ�������a��
	//printf("%d\n", sizeof(p[0]));//1 - p[0]==*(p+0);=='a'
	//printf("%d\n", sizeof(&p));//4  ��ַ
	//printf("%d\n", sizeof(&p + 1));//4  ��ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4  ��ַ

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//���ֵ��
	//printf("%d\n", strlen(&p + 1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5


	//char arr[] = "abcdef";
	////strlen - �����ַ������ȣ��ӵ�ַ��ʼ�����ʣ�����\0ֹͣ
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	////printf("%d\n", strlen(*arr));//err �Ƿ������ڴ�
	////printf("%d\n", strlen(arr[1]));//err �Ƿ������ڴ�
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//���ֵ
	//printf("%d\n", strlen(&arr[0] + 1));// 5

	//printf("%d\n", sizeof(arr));//7 - sizeof(arr)�������������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr + 0));//4 - arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(*arr));//1 - arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�ص��ַ���С��һ���ֽ�
	//printf("%d\n", sizeof(arr[1]));//1 - arr[1]�ǵڶ���Ԫ�أ�sizeof��arr[1])������ǵڶ���Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr));// 4- &arr��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr + 1));//4 -  &arr+1 ���������������ĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0] + 1));//4 - �ڶ���Ԫ�صĵ�ַ
	




	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', };//6*1

	//printf("%d\n", strlen(arr));// ���ֵ
	//printf("%d\n", strlen(arr+0));// ���ֵ
	////printf("%d\n", strlen(*arr));//������� *arr=��a��=97  �Ƿ������ڴ�
	////printf("%d\n", strlen(arr[1]));//�������
	//printf("%d\n", strlen(&arr));// ���ֵ
	//printf("%d\n", strlen(&arr+1));// ���ֵ-6
	//printf("%d\n", strlen(&arr[0]+1));// ���ֵ-1

	//printf("%d\n", sizeof(arr));//6 - sizeof�����������Ĵ�С 
	//printf("%d\n", sizeof(arr+0));//4 - arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(*arr));//1 - arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�ص��ַ���С��һ���ֽ�
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4 - &arr��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr+1));//4 - &arr+1 ���������������ĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
	//printf("%d\n", sizeof(&arr[0]+1));//4 - �ڶ���Ԫ�صĵ�ַ
	// 

	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 - a[0]�൱�ڵ�һ����Ϊһά�������������
//    //sizeof(arr[0])����������������sizeof�����ڣ�������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[0] + 1));//4 - a[0]�ǵ�һ�е�����������������ʱ��ʾ������Ԫ�صĵ�ַ����ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ��
//	//���� a[0]+1��ʾ��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 - *��a[0]+1)�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));//4  a�Ƕ�ά�������������û��sizeof������������Ҳû��&����������������a����Ԫ�ص�ַ
//	//�����Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�aҲ���ǵ�һ�У���Ԫ�أ��ĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16  sizeof��a[1]) ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));//4     �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(*a));//16  a����Ԫ�ص�ַ-��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof��*a�����Ǽ����һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16 sizeof�����ڣ�������м��㣬����a[3]Ҳ���൱��a[0],�൱�ڵ�4����Ϊһά�����������
//	return 0;
//}

//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);//&a+1 ����������������
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	
//	return 0;
//}//��ӡ�����2��5

//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;

}