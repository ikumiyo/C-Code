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
//	struct S arr[50];//���50��strcut S���͵�����
//	//30 - �˷�
//	//60 - ����
//	return 0;
//}

//C�����ǿ��Դ����䳤���飨���ȿɱ䣬���Լ����룩 - C99��������

//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int *)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ��ʱ����Ӧ�û�������ϵͳ
//	//malloc �� free Ҫ�ɶ�ʹ��
//	free(p);//���ܿռ䱻�ͷ��ˣ����ǻ��ǿ���ͨ��p�ҵ�ԭ���ռ�ĵ�ַ
//	p = NULL;//���԰ѿ�ָ�븳��p
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}
//realloc - ������̬�����ڴ�ռ�Ĵ�С
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
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	//realoc ʹ�õ�ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�
//	//������󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//	//1.��NULL���н����ò���
//int main()
//{
//	int* p=(int*)malloc(40);
//	//��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
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
//	//2.�Զ�̬���ٵ��ڴ��Խ�����
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
//	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	free(p);
//	p = NULL; 
//	return 0;
//}


//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//		*p++ = i;//p�����˱仯
//	}
//	//���տռ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//...
//	free(p);
//
//	return 0;
//}

//6.��̬�����ڴ������ͷţ��ڴ�й©��
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
//	strcpy(str, "Hello World");//�������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����1
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

//����2
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

//��������Test ��������ʲô���Ľ����
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
//���ڷǷ������ڴ�����

//��������Test ��������ʲô���Ľ����
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
//	//���ڵ����⣺�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
//	//�ģ�
//	//free(str);
//	//str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//��������Test ��������ʲô���Ľ����
//void Test(void)
//{
//	char *str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	//�ģ�str=NULL��
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�Ƿ������ڴ�
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
//	int arr[0];//δ֪��С������ - ���������Ա - ����Ĵ�С�ǿ��Ե�����
//
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//������������Ľṹ���У���������������Ĵ�С
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
//	//�ͷ��ڴ�
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
	//������С
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
	//�ͷ��ڴ�
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;

	return 0;
}

