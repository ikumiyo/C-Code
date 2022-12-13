#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n-i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j<i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = n; i <= 2 * n; i++)
//		{
//			for (j = 0; j<i - n; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j<2 * n - i + 1; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i<n + 1; i++)
//		{
//			for (j = 0; j<n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j<i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<i + 2; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j<n - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		char arr[20][20] = { 0 };
//		int i = 0;
//		int j = 0;
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n; j++)
//			{
//				if (i == j)
//				{
//					arr[i][j] = '*';
//				}
//				else
//				{
//					arr[i][j] = ' ';
//				}
//			}
//		}
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n; j++)
//			{
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i, j, n;
//	while (scanf("%d", &n) != EOF)//4
//	{
//		for (i = 1; i <= n; i++)
//		{
//			for (j = n; j>0; j--)
//			{
//				if (i == j){
//					printf("*");
//				}
//				else{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n; j++)
//			{
//				if (i == 0 || i == n - 1)
//					printf("*");
//
//				else if (j == 0 || j == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 0; i<n; i++)
//		{
//			int j = 0;
//			for (j = 0; j<n; j++)
//			{
//				if (j == 0 || i == n - 1 || i == j)
//					printf("* ");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 1; i <= n; i++)
		{
			int j = 0;
			for (j = 1; j <= i; j++)
			{
				printf("%d", j);
			}
			printf("\n");
		}
	}
	return 0;
}