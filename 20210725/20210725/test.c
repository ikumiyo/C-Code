#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 常量
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

//联合 - 联合体 - 共用体
//共用同一块空间
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
//	// 下面输出的结果是一样的吗？
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//	//下面输出的结果是什么？
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
//	//返回1，表示小端
//	//返回0，表示大端
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
	//int a = 0x11223344;
	//低地址---------------------------->高地址
	//...[][][][][11][22][33][44][][][][][]......大端字节序存储模式
	//...[][][][][44][33][22][11][][][][][]......小端字节序存储模式
	//讨论一个数据，放在内存中的存放的字节顺序
	//大小端字节序问题

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