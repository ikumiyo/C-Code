#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	short s = 0;
//	int a = 0;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	//int a = 0;
//	//char b = 'w';
//	//int arr[10] = { 0 };
//
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//
//	//printf("%d\n", sizeof(b));
//	//printf("%d\n", sizeof(char));
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int [10]));
//	return 0;
//}

//
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);//15
//	a = a&(~(1 << 2));
//	printf("%d\n", a);//11
//	//~����2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  -����
//	//11111111111111111111111111111110  -����
//	//10000000000000000000000000000001  -ԭ��
//	//-1
//	//printf("%d\n", a);
//	//printf("%d\n", ~a);
//	return 0;
//}
//
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//��
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//��
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//��
//	printf("%d\n", sizeof(ch));//��
//	test1(arr);
//	test2(arr);
//	return 0;
//}

//
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b &&d++;
//	i = a++ || ++b || d++;
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//��������Ľ��Ϊ��2 2 3 4
//	return 0;
//}


//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = { "C���Գ������",55 };
//	struct Book*pb = &b1;
//	//����pb��ӡ���ҵ������ͼ۸�
//	//  .   �ṹ�����.��Ա
//	// ->   �ṹ��ָ��->��Ա
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//		/*printf("������%s\n", b1.name);
//		printf("�۸�%dԪ\n", b1.price);
//		b1.price = 15;
//		printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);*/
//	return 0;
//}

//������һ���ṹ������-struct Stu
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1����ʼ��
//	struct Stu s1 = { "����", 20, "20210713" };
//	struct Stu*ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//�ṹ��ָ��->��Ա��
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//	//printf("%s\n", (*ps).id);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}



//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011   �����Ҫ�ŵ�a����ȥ����charֻ�ܷ�8��bitλ��Ҫ�����ضϣ��ӵ�λ��ʼ�ض�
//	//00000011  a��ֵ
//
//	char b = 127;
//	//00000000000000000000000001111111 
//	//01111111  b��ֵ
//
//	//a��b������ -- ��������
//	//00000000000000000000000000000011   �з�������ǰ�水�շ���λ����λ 0 or 1 �����
//	//00000000000000000000000001111111   �޷�������ǰ��ֱ�Ӳ���
//	//00000000000000000000000010000010
//	//
//	char c = a + b;
//	//10000010  c��ֵ
//	//11111111111111111111111110000010 -����  ������������
//	//11111111111111111111111110000001 -����
//	//10000000000000000000000001111110 -ԭ��
//	//-126
//	printf("%d\n", c);
//	return 0;
//}




