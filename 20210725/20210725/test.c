#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE=2,
//	FEMALE=4,
//	SECRET=8
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//0
//	BLUE//0
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}

//���� - ������ - ������
//����ͬһ��ռ�
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//}

//union Un
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	union Un un;
//	// ��������Ľ����һ������
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//	//��������Ľ����ʲô��
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//����1����ʾС��
//	//����0����ʾ���
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
	//int a = 0x11223344;
	//�͵�ַ---------------------------->�ߵ�ַ
	//...[][][][][11][22][33][44][][][][][]......����ֽ���洢ģʽ
	//...[][][][][44][33][22][11][][][][][]......С���ֽ���洢ģʽ
	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
	//��С���ֽ�������

//	return 0;
//}


union Un
{
	int a;//4
	char arr[5];//5
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}