#define _CRT_SECURE_NO_WARNINGS 1
/*ʵ��11.1.2  ������Ĳ���*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef int ElemType;
typedef  struct LNode
{
	ElemType data;                      /* ��������      */
	struct LNode *next;                 /* ָ������      */
}LNode;                               /* ���ṹ����  */
LNode *L;

/*  ��������  */
LNode *creat_L();
void  out_L(LNode *L);
void  insert_L(LNode *L, int i, ElemType e);
ElemType delete_L(LNode *L, int i);
int locat_L(LNode *L, ElemType e);
/*  ������  */
void main()
{
	int i, k, loc;
	ElemType e, x;
	char ch;
	do {
		printf("\n*******************************");
		printf("\n     1. ���������� ");
		printf("\n     2. ����Ԫ��");
		printf("\n     3. ɾ��Ԫ��");
		printf("\n     4. ����Ԫ��");
		printf("\n     0. ������������");
		printf("\n*******************************");
		printf("\n   ����������ѡ�� (1,2,3,4,0):");
		scanf("%d", &k);
		switch (k)
		{
		case 1:{  L = creat_L();
			out_L(L);
		} break;
		case 2:{ printf("\n ���������λ�ã�");
			scanf("%d", &i);
			printf("\n ������Ҫ�����Ԫ��ֵ��");
			scanf("%d", &e);
			insert_L(L, i, e);
			out_L(L);
		} break;
		case 3:{printf("\n������Ҫɾ����Ԫ��λ�ã�");
			scanf("%d", &i);
			x = delete_L(L, i);
			out_L(L);
			if (x != -1)
			{
				printf("\nɾ����Ԫ��Ϊ��%d\n", x);
				printf("ɾ��%d��ĵ�����Ϊ��\n", x);
				out_L(L);
			}
			else printf("\nҪɾ����Ԫ�ز����ڣ�");
		} break;
		case 4:{ printf("\n ������Ҫ���ҵ�Ԫ��ֵ��");
			scanf("%d", &e);
			loc = locat_L(L, e);
			if (loc == -1) printf("\n δ�ҵ�ָ��Ԫ�أ�");
			else printf("\n ���ҵ���Ԫ��λ���� %d", loc);
		} break;
		} /*  switch  */
		printf("\n ----------------");
	} while (k >= 1 && k<5);
	printf("\n      ���س���������......\n");
	ch = getchar();
} /* main */

/*  ������������  */
LNode *creat_L()
{
	LNode *h, *p, *s;  ElemType x;
	h = (LNode *)malloc(sizeof(LNode));                  /* ����ͷ��� */
	h->next = NULL;
	p = h;
	printf("\n�������һ������Ԫ�أ�");
	scanf("%d", &x);     /*  �����һ������Ԫ�� */
	while (x != -999)                            /*  ����-999������ѭ�� */
	{
		s = (LNode *)malloc(sizeof(LNode));             /*  �����½�� */
		s->data = x;  s->next = NULL;
		p->next = s;  p = s;
		printf("��������һ�����ݣ�������-999��ʾ��������");
		scanf("%d", &x); /* ������һ������*/
	}
	return(h);
} /* creat_L  */

/* ����������е�����Ԫ��*/
void out_L(LNode *L)
{
	LNode *p;
	p = L->next;    printf("\n\n");
	while (p != NULL)
	{
		printf("%5d", p->data); p = p->next;
	};
} /* out_link */

/*  ��iλ�ò���Ԫ��e  */
void insert_L(LNode *L, int i, ElemType e)
{
	LNode *s, *p;
	int j;
	p = L;      /* �ҵ�i-1�����  */
	j = 0;
	while (p != NULL && j <= i - 1) { p = p->next; j++; }
	if (p == NULL || i<1) printf("\n����λ�ô���!");
	else {
		s = (LNode *)malloc(sizeof(LNode));
		s->data = e;
		s->next = p->next;
		p->next = s;
	}
} /* insert_L */


/* ɾ����i��Ԫ�أ�������ֵ */
ElemType delete_L(LNode *L, int i)
{
	LNode *p, *q; int j; ElemType x;
	p = L; j = 0;
	while (p->next != NULL && j<i - 1){ p = p->next; j++; }
	if (!p->next || i<1) { printf("\nɾ��λ�ô���!"); return(-1); }
	else {
		q = p->next; x = q->data;
		p->next = q->next; 
		free(q);
		return(x);
	}
}  /* delete_L */
/*  ����ֵΪ e ��Ԫ��, ��������λ��  */
int locat_L(LNode *L, ElemType e)
{
	LNode *p; int j = 1;
	p = L->next;
	while (p != NULL && p->data != e) { p = p->next; j++; }
	if (p != NULL)return(j); else return(-1);
} /* locat_L */