#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
//
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char*p = &ch;
//	char*p2 = "abcdef";//ʵ�����ǰ��ַ��������ַ���a���ĵ�ַ������p2;  ���ַ���Ϊ�����ַ����������ݲ������޸�
//	//ָ������ - ���� - ���ָ�������
//	int*arr[10];
//	char*ch[5];
//	//����ָ�� - ָ������
//	//int *p3�� ����ָ�� - ָ�����ε�ָ��
//	//char*p4�� �ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//pa����һ������ָ��
//
//	int(*   parr3[10]  )[5]//parr3��һ�����飬����Ԫ����10��������ÿ��Ԫ������һ������ָ��
//		//int(*    )[5] - ����ָ������
//
//	return 0;
//
//}

//��ά���鴫��
//void test(int arr[3][5])  
//{}
//void test1(int arr[][5])  
//{}
//void test2(int arr[3][])//���󴫲���ʽ
//void test3(int *arr)//���󴫲���ʽ
//{}
//void test4(int **arr)//���󴫲���ʽ
//{}
//void test5(int(*arr)[5])//
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//��ά���鴫��
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//	return 0;
//}


//����ָ�� - ��ָ������ָ�� -��ź�����ַ��ָ�� 
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
//	&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//��ӡ���Ϊ��5
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
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ������
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };//����ָ�������
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
////1.дһ������ָ�� pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
////2.дһ������ָ������ pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);


//������
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//		printf("��ѡ��>");
		//scanf("%d", &input);

//			switch (input)
//		{
//			case 1:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Add(x, y));
//				break;
//			case 2:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Sub(x, y));
//				break;
//			case 3:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Mul(x, y));
//				break;
//			case 4:
//				printf("����������������:>");
//				scanf("%d%d", &x, &y);
//				printf("%d\n", Div(x, y));
//				break;
//			case 0:
//				printf("�˳�\n");
//				break;
//			default:
//				printf("ѡ�����\n");
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
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
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
	//�Ƚ���������ֵ��
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
///�����е�ë��û���  ��������������������������������