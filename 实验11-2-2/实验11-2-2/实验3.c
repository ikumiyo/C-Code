#define _CRT_SECURE_NO_WARNINGS 1

/*ʵ��11.2.2   ջ����ʽ��ʾ��ʵ��*/
#include "stdio.h"
#include "malloc.h"
#include "stdlib.h"
typedef int Elemtype;
typedef struct stacknode {
	Elemtype data;
	struct stacknode * next;
}StackNode;
typedef struct  {
	struct stacknode * top; //ջ��ָ��
}LinkStack;
/*��ʼ����ջ*/
void InitStack(LinkStack * s)
{
	s->top = NULL;
	printf("\n�Ѿ���ʼ����ջ��\n");
}
/*��ջ�ÿ�*/
void setEmpty(LinkStack * s)
{
	s->top = NULL;
	printf("\n��ջ���ÿգ�\n");
}
/*��ջ*/
void pushLstack(LinkStack * s, Elemtype x)
{
	StackNode * p;
	p = (StackNode *)malloc(sizeof(StackNode));  //����һ���ڵ㡣
	p->data = x;
	p->next = s->top;    //��������ջ��pushLstack������Ҫָ��ջ����
	s->top = p;//����
}
/*��ջ*/
Elemtype popLstack(LinkStack * s)
{
	Elemtype x;
	StackNode * p;
	p = s->top;//ָ��ջ��
	if (s->top == 0)
	{
		printf("\nջ�գ����ܳ�ջ��\n");
		return (0);
		//exit(-1);
	}
	x = p->data; printf("\n��ǰ��ջ�������ǣ�%d", x);
	s->top = p->next;    //��ǰ��ջ��ָ��ԭջ��next
	free(p); //�ͷ�
	return x;
}
/*ȡջ��Ԫ��*/
Elemtype StackTop(LinkStack *s)
{
	Elemtype x;
	if (s->top == 0)
	{
		printf("\n��ջ��\n");
		return (0);
	}
	{x = s->top->data; printf("\n\n��ǰ��ջ��ջ��Ԫ��Ϊ��%d\n", x); return(x); }
}
/*������ջ*/
void Disp(LinkStack * s)
{
	printf("\n��ջ�е�����Ϊ��\n");
	printf("=======================================\n");
	StackNode * p;
	p = s->top;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;
	}
	printf("=======================================\n");
}
void main()
{
	int i, n, a;//int m;
	LinkStack * s;
	s = (LinkStack *)malloc(sizeof(LinkStack));
	int cord;
	printf("ע�⣺��һ��ʹ�ñ����ʼ����\n");
	do{
		printf("\n ========= ���˵�===========\n");
		printf("\n1��ʼ����ջ \n");
		printf("\n2��ջ  \n");
		printf("\n3��ջ  \n");
		printf("\n4ȡջ��Ԫ�� \n");
		printf("\n5�ÿ���ջ   \n");
		printf("\n6������������    \n");
		printf("\n===========================\n");
		printf("����������ѡ��( 1, 2, 3, 4, 5,6):");
		scanf("%d", &cord);
		printf("\n");
		switch (cord)
		{
		case 1:
		{   InitStack(s);
		Disp(s);
		}break;
		case 2:
		{printf("���뽫Ҫѹ����ջ�����ݵĸ�����n=");
		scanf("%d", &n);
		printf("���ν�%d������ѹ����ջ��\n", n);
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &a);
			pushLstack(s, a);
		}
		Disp(s);
		}break;
		case 3:
		{	//printf("\n��ջ������ʼ!\n");
			//printf("���뽫Ҫ��ջ�����ݸ�����m=");
			//scanf("%d",&m);
			//for(i=1;i<=m;i++)
			//{printf("\n��%d�γ�ջ�������ǣ�%d",i,popLstack(s));}
			popLstack(s); Disp(s);
		}break;
		case 4:
		{	//printf("\n\n��ջ��ջ��Ԫ��Ϊ��%d\n",StackTop(s));
			StackTop(s); printf("\n");
		}break;
		case 5:
		{	setEmpty(s);
		Disp(s);
		}break;
		case 6:
			exit(0);
		}
	} while (cord <= 6);
}