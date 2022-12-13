#define _CRT_SECURE_NO_WARNINGS 1
/*ʵ��11.3  ������������*/
# include <stdio.h>
# include <stdlib.h>
#define M 100
typedef char Etype; /*������������ֵ������Ϊ�ַ���*/
typedef struct BiTNode  /*�����ṹ */
{
	Etype data;
	struct BiTNode *lch, *rch;
}BiTNode, *BiTree;
BiTree que[M];
int  front = 0, rear = 0;
/* ����ԭ������ */
BiTNode *creat_bt1();
BiTNode *creat_bt2();
void preorder(BiTNode *p);
void inorder(BiTNode *p);
void postorder(BiTNode *p);
void  enqueue(BiTree);
BiTree  delqueue();
void  levorder(BiTree); /*��α���������*/
int treedepth(BiTree);
void prtbtree(BiTree, int);
void exchange(BiTree);
int leafcount(BiTree);
void paintleaf(BiTree);
BiTNode *t;
int count = 0;
/*  ������ */
void main()
{
	char ch; int k;
	do {
		printf("\n");
		printf("\n=============�� �� ��====================");
		printf("\n\n     1. ��������������1 ");
		printf("\n\n     2. ��������������2");
		printf("\n\n     3. ����ݹ����������");
		printf("\n\n     4. ����ݹ����������");
		printf("\n\n     5. ����ݹ����������");
		printf("\n\n     6. ��α���������");
		printf("\n\n     7. ����������ĸ߶�");
		printf("\n\n     8. �����������Ҷ������");
		printf("\n\n     9. ��������������������");
		printf("\n\n     10. ��ӡ������");
		printf("\n\n     0. ������������");
		printf("\n======================================");
		printf("\n   ����������ѡ�� (0,1,2,3,4,5,6,7,8,9,10):");
		scanf("%d", &k);
		switch (k)
		{
		case 1:t = creat_bt1(); break; /*  ��������5�����������㷨 */
		case 2:printf("\n�����������������ֵ:"); fflush(stdin);
			t = creat_bt2(); break; /*  ���õݹ齨���������㷨   */
		case 3:if (t)
		{
			printf("�������������:");
			preorder(t);
			printf("\n");
		}
			   else printf("������Ϊ��!\n");
			   break;
		case 4:if (t)
		{
			printf("�������������:");
			inorder(t);
			printf("\n");
		}
			   else printf("������Ϊ��!\n");
			   break;
		case 5:if (t)
		{
			printf("�������������:");
			postorder(t);
			printf("\n");
		}
			   else printf("������Ϊ��!\n");
			   break;
		case 6:if (t)
		{
			printf("��α���������:");
			levorder(t);
			printf("\n");
		}
			   else printf("������Ϊ��!\n");
			   break;
		case 7:if (t)
		{
			printf("�������ĸ߶�Ϊ:%d", treedepth(t));
			printf("\n");
		}
			   else printf("������Ϊ��!\n");
			   break;
		case 8:if (t)
		{
			printf("��������Ҷ�ӽ����Ϊ:%d\n", leafcount(t));
			printf("��������Ҷ���Ϊ:"); paintleaf(t);
			printf("\n");
		}
			   else printf("������Ϊ��!\n");
			   break;
		case 9:if (t)
		{
			printf("��������������������:\n");
			exchange(t);
			prtbtree(t, 0);
			printf("\n");
		}
			   else printf("������Ϊ��!\n");
			   break;
		case 10:if (t)
		{
			printf("��ʱ��90������Ķ�����:\n");
			prtbtree(t, 0);
			printf("\n");
		}
				else printf("������Ϊ��!\n");
				break;
		case 0: exit(0);
		} /*  switch  */
	} while (k >= 1 && k <= 10);
	printf("\n �ټ������س���������......\n");
	ch = getchar();
} /* main */

/* ���ö���������5 ������һά����V ���������� */
BiTNode *creat_bt1()
{
	BiTNode *t, *p, *v[20]; int i, j; Etype e;
	/* ����������i ����������e  */
	printf("\n����������������ı�źͶ�Ӧ��ֵ����1��a��:");
	scanf("%d,%c", &i, &e);
	while (i != 0 && e != '#')         /* �� iΪ0,eΪ��#��ʱ������ѭ��  */
	{
		p = (BiTNode *)malloc(sizeof(BiTNode));
		p->data = e; p->lch = NULL; p->rch = NULL;
		v[i] = p;
		if (i == 1) t = p;                /* ���Ϊ1�Ľ���Ǹ� */
		else{
			j = i / 2;
			if (i % 2 == 0) v[j]->lch = p; /* ���Ϊż����������*/
			else   v[j]->rch = p;  /* ���Ϊ���������Һ���*/
		}
		printf("\n�������������������ı�źͶ�Ӧ��ֵ:");
		scanf("%d,%c", &i, &e);
	}
	return(t);
} /* creat_bt1 */
/* ģ������ݹ�������������������� */
BiTNode * creat_bt2()
{
	BiTNode *t; Etype e;
	scanf("%c", &e);
	if (e == '#') t = NULL;            /* ����'#'ֵ���������½�� */
	else {
		t = (BiTNode *)malloc(sizeof(BiTNode));
		t->data = e;
		t->lch = creat_bt2();  /* ���ӻ����ָ��ֵ  */
		t->rch = creat_bt2();  /* �Һ��ӻ����ָ��ֵ  */
	}
	return(t);
} /* creat_bt2 */

/* ����ݹ����������  */
void preorder(BiTNode *p)
{
	if (p) {
		printf("%3c", p->data);
		preorder(p->lch);
		preorder(p->rch);
	}
} /* preorder  */

/* ����ݹ����������  */
void inorder(BiTNode *p)
{
	if (p) {
		inorder(p->lch);
		printf("%3c", p->data);
		inorder(p->rch);
	}
} /* inorder  */

/* ����ݹ����������  */
void postorder(BiTNode *p)
{
	if (p) {
		postorder(p->lch);
		postorder(p->rch);
		printf("%3c", p->data);
	}
} /* postorder  */
/*��α����������㷨˼�룺����һ������q���Ƚ����������������У�Ȼ���˶�*/
/*�У�����ý�㣻���������������㽫���������������У����������������㽫*/
/*���������������У�ֱ�����п�Ϊֹ����Ϊ���е��ص����Ƚ��ȳ����Ӷ��ﵽ��*/
/*���˳�������������Ŀ��*/
void  enqueue(BiTree  T)
{
	if (front != (rear + 1) % M)
	{
		rear = (rear + 1) % M;
		que[rear] = T;
	}
}

BiTree  delqueue()
{
	if (front == rear) return NULL;
	front = (front + 1) % M;
	return (que[front]);
}
void  levorder(BiTree  T)/*��α���������*/
{
	BiTree  p;
	if (T)
	{
		enqueue(T);
		while (front != rear){
			p = delqueue();
			printf("%3c", p->data);
			if (p->lch != NULL)enqueue(p->lch);
			if (p->rch != NULL)enqueue(p->rch);
		}
	}
}

int treedepth(BiTree bt)/*����������ĸ߶�*/
{
	int hl, hr, max;
	if (bt != NULL)
	{
		hl = treedepth(bt->lch);
		hr = treedepth(bt->rch);
		max = (hl>hr) ? hl : hr;
		return(max + 1);
	}
	else return(0);
}

void prtbtree(BiTree bt, int level)/*��ʱ��90���������������*/
{
	int j;
	if (bt)
	{
		prtbtree(bt->rch, level + 1);
		for (j = 0; j <= 6 * level; j++)printf(" ");
		printf("%c\n", bt->data);
		prtbtree(bt->lch, level + 1);
	}
}

void exchange(BiTree bt)/*��������������������*/
{
	BiTree p;
	if (bt)
	{
		p = bt->lch; bt->lch = bt->rch; bt->rch = p;
		exchange(bt->lch); exchange(bt->rch);
	}
}

int leafcount(BiTree bt)/*����Ҷ�����*/
{
	if (bt != NULL)
	{
		leafcount(bt->lch);
		leafcount(bt->rch);
		if ((bt->lch == NULL) && (bt->rch == NULL))
			count++;
	}
	return(count);
}

void paintleaf(BiTree bt)/*���Ҷ���*/
{
	if (bt != NULL)
	{
		if (bt->lch == NULL && bt->rch == NULL)
			printf("%3c", bt->data);
		paintleaf(bt->lch);
		paintleaf(bt->rch);
	}
}