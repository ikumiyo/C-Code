#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//����һ���ṹ������
//����һ��ѧ�����ͣ�������ѧ������������ѧ������������
//����ѧ��������+�绰+�Ա�+����

//struct - �ṹ��ؼ���
//Stu - �ṹ���ǩ
//struct Stu - �ṹ������
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//s4,s5,s6��ȫ�ֱ���  ������ֺűز����٣�
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;//�ֲ�����
//	struct Stu s2;//�ֲ�����
//	return 0;
//}

//�ṹ������ĳ�ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c', 100, 3.14, "hello world" };
//	struct S s = { 'c', { 55.6, 30 }, 100, 3.14, "hello world" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	//struct S1 s1 = { 0 };
//	//printf("%d\n", sizeof(s1));//12
//	//struct S2 s2 = { 0 };
//	//printf("%d\n", sizeof(s2));//8
//	printf("%d\n", sizeof(struct S3));
//	//��ϰ4-�ṹ��Ƕ������
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//����Ĭ�϶�����λ4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	7
//	double d;//8
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//ԭ��16  �޸Ķ�������12
//}

//#include<stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof - ����ṹ���б���������׵�ַ��ƫ����
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S*ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//void Print1(struct S tmp)//��ֵ
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)//��ַ
//{
//	printf("%d %c %lf", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

//λ�� - ������λ
//struct S
//{
//	int _a : 2;//ռ2��bitλ
//	int _b : 5;//ռ5��bitλ
//	int _c : 10;//ռ10��bitλ
//	int _d : 30;//ռ30��bitλ
//
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

//struct S
//{
//	int a : 3;
//	int b : 4;
//	int c : 5;
//	int d : 4;
//
//};
//
//int main()
//{
//	struct S s = {0};
//	s.a= 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}