#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <stdlib.h>
#define MAXSIZE 20                       /* ���������� */
typedef int ElemType;                    /* ����Ԫ������ */
typedef  struct
{
	ElemType  a[MAXSIZE];               /* һά�������� */
	int  length;                        /* ��������   */
}SqList;                       /* ˳��洢�Ľṹ������ */
SqList  a, b, c;

/*  �������� */
void creat_list(SqList *L);
void out_list(SqList L);
void insert_sq(SqList *L, int i, ElemType e);
ElemType delete_sq(SqList *L, int i);
int locat_sq(SqList L, ElemType e);

/*  ������  */
void main()
{
	int i, k, loc; ElemType e, x; char ch;
	do {
		printf("\n******************************");
		printf("\n     1. �������Ա�");
		printf("\n     2. ����Ԫ��");
		printf("\n     3. ɾ��Ԫ��");
		printf("\n     4. ����Ԫ��");
		printf("\n     0. ������������");
		printf("\n******************************");
		printf("\n    ����������ѡ��0-4��:");
		scanf("%d", &k);
		switch (k)
		{
		case 1:{ creat_list(&a);
			out_list(a);
		} break;
		case 2:{ printf("\n ���������λ�ã����ڵ���1��С�ڵ���%d����", a.length + 1);
			scanf("%d", &i);
			printf("\n ������Ҫ�����Ԫ��ֵ��");
			scanf("%d", &e);
			insert_sq(&a, i, e);
			out_list(a);
		} break;
		case 3:{ printf("\n������Ҫɾ����Ԫ��λ�ã����ڵ���1��С�ڵ���%d����", a.length);
			scanf("%d", &i);
			x = delete_sq(&a, i);
			out_list(a);
			if (x != -1)printf("\nɾ����Ԫ��Ϊ��%d\n", x);
			else printf("Ҫɾ����Ԫ�ز����ڣ�");
		} break;
		case 4:{ printf("\n ������Ҫ���ҵ�Ԫ��ֵ��");
			scanf("%d", &e);
			loc = locat_sq(a, e);
			if (loc == -1) printf("\n δ�ҵ�ָ��Ԫ�أ�");
			else printf("\n ���ҵ���Ԫ��λ���� %d", loc);
		} break;
		} /*  switch  */
	} while (k != 0);
	printf("\n          ���س���������......\n");
	ch = getchar();
} /*  main  */

/* �������Ա� */
void creat_list(SqList *L)
{
	int i;
	printf("���������Ա�ĳ��ȣ�");
	scanf("%d", &L->length);
	for (i = 0; i<L->length; i++)
	{
		printf("����%d=", i);
		scanf("%d", &(L->a[i]));
	}
} /*  creat_list   */
/* ������Ա� */
void out_list(SqList L)
{
	int i;
	for (i = 0; i <= L.length - 1; i++) printf("%10d", L.a[i]);
} /*  out_list  */

/*  �����Ա�ĵ�i��λ�ò���Ԫ��e  */
void insert_sq(SqList *L, int i, ElemType e)
{
	int j;
	if (L->length == MAXSIZE) printf(" ���Ա�����!\n");
	else if (i<1 || i>L->length + 1)  printf("����λ�ô�!\n");
	else {
		for (j = L->length - 1; j >= i - 1; j--) L->a[j + 1] = L->a[j];
		/* ����ƶ�����Ԫ�� */
		L->a[i - 1] = e;                    /* ����Ԫ��     */
		L->length++;                    /* ���Ա���1 */
	}
} /*  insert_sq  */

/* ɾ����i��Ԫ�أ�������ֵ */
ElemType delete_sq(SqList *L, int i)
{
	ElemType x; int j;
	if (L->length == 0) printf("�ձ�!\n");
	else if (i<1 || i> L->length){
		printf("����λ�ô�!\n");
		x = -1;
	}
	else {
		x = L->a[i - 1];
		for (j = i; j <= L->length - 1; j++) L->a[j - 1] = L->a[j];
		L->length--;
	}
	return(x);
} /* delete_sq  */

/* ����ֵΪ e ��Ԫ�أ���������λ��  */
int locat_sq(SqList L, ElemType e)
{
	int i = 0;
	while (i <= L.length - 1 && L.a[i] != e) i++;
	if (i <= L.length - 1)  return(i + 1);
	else return(-1);
}/* locat_sq  */