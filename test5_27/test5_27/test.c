#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
////{
////	//输入一个字符
////	char a;
////	scanf("%c\n", &a);
////
////	printf("     %c\n", a);
////	printf("   %c %c\n", a, a);
////	printf("  %c %c %c\n", a, a, a);
////	printf(" %c %c %c %c\n", a, a, a, a);
////	printf("%c %c %c %c %c\n", a, a, a, a, a);
//
//	return 0;
//}

//输入一个字符
#include<stdio.h>

int main()
{
	int a, b;
	scanf("a=%d,b=%d", &a, &b);
	int t = a;
	a = b;
	b = t;
	printf("a=%d,b=%d", a, b);

	return 0;
}