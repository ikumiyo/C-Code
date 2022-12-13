#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define MAX 100;
//
//int main()
//{
//	int max = MAX;
//	printf("%d\n", max);
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	//int ret = SQUARE(5); //- SQUARE就是宏
//	//相当于：int ret = 5 * 5;
//
//	int ret = SQUARE(5 + 1);//11
//	//相当于：5+1*5+1=11
//	//宏是完全替换的，而不是传参的
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//相当于 int ret=10*（（a）+（a））；
//	//
//	printf("%d\n", ret);
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	printf("the value of ""a"" is %d\n",a);
//	PRINT(b);
//	printf("the value of ""b"" is %d\n",b);
//	return 0;
//}

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int Class84 = 2021;
//	//printf("%d\n", Class84);
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n", Class##84);
//	//printf("%d\n", Class84);
//
//	return 0;
//}

//#define MAX(X, Y)  ((X)>(Y) ? (X) : (Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//#include<stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}

