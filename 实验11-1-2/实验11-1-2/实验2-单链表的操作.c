#define _CRT_SECURE_NO_WARNINGS 1
/*实验11.1.2  单链表的操作*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef int ElemType;
typedef  struct LNode
{
	ElemType data;                      /* 数据子域      */
	struct LNode *next;                 /* 指针子域      */
}LNode;                               /* 结点结构类型  */
LNode *L;

/*  函数声明  */
LNode *creat_L();
void  out_L(LNode *L);
void  insert_L(LNode *L, int i, ElemType e);
ElemType delete_L(LNode *L, int i);
int locat_L(LNode *L, ElemType e);
/*  主函数  */
void main()
{
	int i, k, loc;
	ElemType e, x;
	char ch;
	do {
		printf("\n*******************************");
		printf("\n     1. 建立单链表 ");
		printf("\n     2. 插入元素");
		printf("\n     3. 删除元素");
		printf("\n     4. 查找元素");
		printf("\n     0. 结束程序运行");
		printf("\n*******************************");
		printf("\n   请输入您的选择 (1,2,3,4,0):");
		scanf("%d", &k);
		switch (k)
		{
		case 1:{  L = creat_L();
			out_L(L);
		} break;
		case 2:{ printf("\n 请输入插入位置：");
			scanf("%d", &i);
			printf("\n 请输入要插入的元素值：");
			scanf("%d", &e);
			insert_L(L, i, e);
			out_L(L);
		} break;
		case 3:{printf("\n请输入要删除的元素位置：");
			scanf("%d", &i);
			x = delete_L(L, i);
			out_L(L);
			if (x != -1)
			{
				printf("\n删除的元素为：%d\n", x);
				printf("删除%d后的单链表为：\n", x);
				out_L(L);
			}
			else printf("\n要删除的元素不存在！");
		} break;
		case 4:{ printf("\n 请输入要查找的元素值：");
			scanf("%d", &e);
			loc = locat_L(L, e);
			if (loc == -1) printf("\n 未找到指定元素！");
			else printf("\n 已找到，元素位置是 %d", loc);
		} break;
		} /*  switch  */
		printf("\n ----------------");
	} while (k >= 1 && k<5);
	printf("\n      按回车键，返回......\n");
	ch = getchar();
} /* main */

/*  建立线性链表  */
LNode *creat_L()
{
	LNode *h, *p, *s;  ElemType x;
	h = (LNode *)malloc(sizeof(LNode));                  /* 分配头结点 */
	h->next = NULL;
	p = h;
	printf("\n请输入第一个数据元素：");
	scanf("%d", &x);     /*  输入第一个数据元素 */
	while (x != -999)                            /*  输入-999，结束循环 */
	{
		s = (LNode *)malloc(sizeof(LNode));             /*  分配新结点 */
		s->data = x;  s->next = NULL;
		p->next = s;  p = s;
		printf("请输入下一个数据：（输入-999表示结束。）");
		scanf("%d", &x); /* 输入下一个数据*/
	}
	return(h);
} /* creat_L  */

/* 输出单链表中的数据元素*/
void out_L(LNode *L)
{
	LNode *p;
	p = L->next;    printf("\n\n");
	while (p != NULL)
	{
		printf("%5d", p->data); p = p->next;
	};
} /* out_link */

/*  在i位置插入元素e  */
void insert_L(LNode *L, int i, ElemType e)
{
	LNode *s, *p;
	int j;
	p = L;      /* 找第i-1个结点  */
	j = 0;
	while (p != NULL && j <= i - 1) { p = p->next; j++; }
	if (p == NULL || i<1) printf("\n插入位置错误!");
	else {
		s = (LNode *)malloc(sizeof(LNode));
		s->data = e;
		s->next = p->next;
		p->next = s;
	}
} /* insert_L */


/* 删除第i个元素，返回其值 */
ElemType delete_L(LNode *L, int i)
{
	LNode *p, *q; int j; ElemType x;
	p = L; j = 0;
	while (p->next != NULL && j<i - 1){ p = p->next; j++; }
	if (!p->next || i<1) { printf("\n删除位置错误!"); return(-1); }
	else {
		q = p->next; x = q->data;
		p->next = q->next; 
		free(q);
		return(x);
	}
}  /* delete_L */
/*  查找值为 e 的元素, 返回它的位置  */
int locat_L(LNode *L, ElemType e)
{
	LNode *p; int j = 1;
	p = L->next;
	while (p != NULL && p->data != e) { p = p->next; j++; }
	if (p != NULL)return(j); else return(-1);
} /* locat_L */