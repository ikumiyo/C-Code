#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[51] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (arr[i]>m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	if (i<0)
//	{
//		arr[0] = m;
//	}
//	//Êä³ö
//	for (i = 0; i<n + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//

int main()
{
	int n = 0;
	scanf("%d", &n);
	double arr[100] = { 0.0 };
	int i = 0;
	for (i = 0; i<n; i++)
	{
		scanf("%lf ", &arr[i]);
	}
	double max = 0.0;
	double min = 0.0;
	double average = 0.0;
	double sum = 0.0;

	for (i = 0; i<n; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
		}
		if (arr[i]<min)
		{
			min = arr[i];
		}
		sum += arr[i];
	}
	printf("%.2lf %.2lf %.2lf", max, min, sum / n);
	return 0;
}