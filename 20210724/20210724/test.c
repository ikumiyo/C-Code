#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//声明一个结构体类型
//声明一个学生类型，是想用学生类型来创建学生变量（对象）
//描述学生：名字+电话+性别+年龄

//struct - 结构体关键字
//Stu - 结构体标签
//struct Stu - 结构体类型
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//s4,s5,s6是全局变量  （后面分号必不可少）
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;//局部变量
//	struct Stu s2;//局部变量
//	return 0;
//}

//结构体变量的初始化
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
//	//练习4-结构体嵌套问题
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//设置默认对齐数位4
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
//	printf("%d\n", sizeof(s));//原：16  修改对齐数后：12
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
//	//offsetof - 计算结构体中变量相对于首地址的偏移量
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
//void Print1(struct S tmp)//传值
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)//传址
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

//位段 - 二进制位
//struct S
//{
//	int _a : 2;//占2个bit位
//	int _b : 5;//占5个bit位
//	int _c : 10;//占10个bit位
//	int _d : 30;//占30个bit位
//
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
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