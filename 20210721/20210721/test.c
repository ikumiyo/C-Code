#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//дһ�������������ַ���������
//#include<string.h>
//#include<assert.h>
//void reverse(char*str)
//{
//	assert(str);
//	int len = strlen(str);
//
//	char*left = str;
//	char*right = str + len - 1;
//
//	while (left < right)
//	{
//		int tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++; 
//			right--;
//
//	}
//
//}
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);//abcdef--->fedcba
//		//������
//	reverse(arr);
//
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2 5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	
//	return 0;
//
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��- nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.�Ƚ�i��ÿһλ��n�η�֮��sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}	
//
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*i+1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;
//	empty = money;
//	//����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//
//	return 0;
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left<right)
//	{
//		//�������ż��
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
//		while ((left<right) && (arr[right] % 2 == 0) )
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}
#include<string.h>
#include<assert.h>

void left_move(char*arr, int k)
{
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//����תһ���ַ�
		//1.
		char tmp = *arr;
		//2.
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		//3.
		*(arr + len - 1) = tmp;
	}
}

//����������ת��
//ab cdef
//ba fedc
//cd efab

//�����ַ����ĺ���
//void reverse(char*left, char*right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//
//
//}
//void left_move(char*arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}
int is_left_move(char*s1, char*s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}