#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int day;
	int year = 0;
	int month = 0;
	printf("��������ݣ�");
	scanf("%d", &year);

	printf("�������·ݣ�");
	scanf("%d", &month);

	switch (month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:day = 31; break;
	case 4:
	case 6:
	case 9:
	case 11:day = 30; break;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) day = 29;
		else day = 28;
	}
	printf("����Ĵ�����%d��", day);*/

	//for (int i = 0; i < 300; i++)
	//{
	//	if (i % 3 == 0 && i % 5 == 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}

	//int a, b, c,d;
	//scanf("%d %d %d %d", &a, &b, &c,&d);
	//int min = 0;
	//if (a <= b && a<=c && a<=d)
	//{
	//	min = a;
	//}
	//else if (b <= a && b <= c && b<=d)
	//{
	//	min = b;
	//}
	//else if (c<=a && c<=b && c<=d)
	//{
	//	min = c;
	//}
	//else
	//{
	//	min = d;
	//}

	//printf("��СֵΪ��%d\n", min);
	
	//double sum = 0;
	//for (int i = 1; i <= 100; i++)
	//{
	//	if (i % 2 != 0)
	//	{
	//		sum += 1.0 / i;
	//	}
	//	else
	//	{
	//		sum -= 1.0 / i;
	//	}
	//}

	double sum = 0.0;
	double t = 1.0;
	int i = 1;
	while (i <= 100)
	{
		sum += t / i;
		t = -t;
		i++;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}