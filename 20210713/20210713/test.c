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
//	//~按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111  -补码
//	//11111111111111111111111111111110  -反码
//	//10000000000000000000000000000001  -原码
//	//-1
//	//printf("%d\n", a);
//	//printf("%d\n", ~a);
//	return 0;
//}
//
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//②
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//④
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//①
//	printf("%d\n", sizeof(ch));//③
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
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);//程序输出的结果为：2 2 3 4
//	return 0;
//}


//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = { "C语言程序设计",55 };
//	struct Book*pb = &b1;
//	//利用pb打印出我的书名和价格
//	//  .   结构体变量.成员
//	// ->   结构体指针->成员
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	printf("%s\n", (*pb).name);
//	printf("%d\n", (*pb).price);
//		/*printf("书名：%s\n", b1.name);
//		printf("价格：%d元\n", b1.price);
//		b1.price = 15;
//		printf("修改后的价格：%d元\n", b1.price);*/
//	return 0;
//}

//创建了一个结构体类型-struct Stu
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
//	//使用struct Stu 这个类型创建了一个学生对象s1并初始化
//	struct Stu s1 = { "张三", 20, "20210713" };
//	struct Stu*ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//结构体指针->成员名
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//	//printf("%s\n", (*ps).id);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}



//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011   这个数要放到a里面去，而char只能放8个bit位，要发生截断，从低位开始截断
//	//00000011  a的值
//
//	char b = 127;
//	//00000000000000000000000001111111 
//	//01111111  b的值
//
//	//a和b如何相加 -- 整形提升
//	//00000000000000000000000000000011   有符号数：前面按照符号位（高位 0 or 1 ）填充
//	//00000000000000000000000001111111   无符号数：前面直接补零
//	//00000000000000000000000010000010
//	//
//	char c = a + b;
//	//10000010  c的值
//	//11111111111111111111111110000010 -补码  （整形提升）
//	//11111111111111111111111110000001 -反码
//	//10000000000000000000000001111110 -原码
//	//-126
//	printf("%d\n", c);
//	return 0;
//}




