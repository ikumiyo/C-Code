#define _CRT_SECURE_NO_WARNINGS 1
/*实验11.2.3   队列的顺序表示和实现*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define MAXNUM 100
#define Elemtype int
#define TRUE 1
#define FALSE 0
typedef struct
{
	Elemtype queue[MAXNUM];
	int front;
	int rear;
} sqqueue;
/*队列初始化*/
int initQueue(sqqueue *q)
{
	if (!q)
		return FALSE;
	q->front = -1;
	q->rear = -1;
	return TRUE;
}
/*入队*/
int append(sqqueue *q, Elemtype x)
{
	if (q->rear >= MAXNUM - 1)
		return FALSE;
	q->rear++;
	q->queue[q->rear] = x;
	return TRUE;
}
/*出队*/
Elemtype Delete(sqqueue *q)
{
	Elemtype x;
	if (q->front == q->rear)
	{
		printf("队列空!\n");
		return 0;
	}
	x = q->queue[++q->front];
	printf("\n队头元素%d出队！\n", x);
	return x;
}
/*判断队列是否为空*/
int Empty(sqqueue *q)
{
	if (q->front == q->rear)
		return TRUE;
	return FALSE;
}
/*取队头元素*/
int gethead(sqqueue *q)
{
	Elemtype x;
	if (q->front == q->rear)
	{
		printf("队列空!\n");
		return 0;
	}
	x = (q->queue[q->front + 1]);
	printf("队头元素为:%d\n", x);
	return x;
}
/*遍历队列*/
void display(sqqueue *q)
{
	int s;
	s = q->front;
	if (q->front == q->rear)
		printf("队列空!\n");
	else
	{
		printf("\n顺序队列依次为：");
		while (s < q->rear)
		{
			s = s + 1;
			printf("%d<-", q->queue[s]);
		}
		printf("\n");
		printf("顺序队列的队尾元素所在位置:rear=%d\n", q->rear);
		printf("顺序队列的队头元素所在位置:front=%d\n", q->front);
	}
}
/*建立顺序队列*/
void Setsqqueue(sqqueue *q)
{
	int n, i, m;
	printf("\n请输入将要入顺序队列的长度:");
	scanf("%d", &n);
	printf("\n请依次输入入顺序队列的元素值:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		append(q, m);
	}
}
void main()
{
	sqqueue *head;
	int x, select;
	head = (sqqueue *)malloc(sizeof(sqqueue));
	printf("\n第一次使用请初始化！\n");
	do
	{
		printf("============主菜单===================\n");
		printf("1 初始化\n");
		printf("2 建立顺序队列\n");
		printf("3 入队\n");
		printf("4 出队 \n");
		printf("5 判断队列是否为空\n");
		printf("6 取队头元素 \n");
		printf("7 遍历队列\n");
		printf("0 结束程序运行\n");
		printf("===================================\n");
		printf("\n请选择操作(1--7):\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
		{
			initQueue(head);
			printf("已经初始化顺序队列！\n");
			break;
		}
		case 2:
		{
			Setsqqueue(head);
			printf("\n已经建立队列！\n");
			display(head);
			break;
		}
		case 3:
		{
			printf("请输入队的值:\n ");
			scanf("%d", &x);
			append(head, x);
			display(head);
			break;
		}
		case 4:
		{
			Delete(head);
			display(head);
			break;
		}
		case 5:
		{
			if (Empty(head))
				printf("队列空\n");
			else
				printf("队列非空\n");
			break;
		}
		case 6:
		{
			gethead(head);
			break;
		}
		case 7:
		{
			display(head);
			break;
		}
		case 0:
			exit(0);
		}
	} while (select <= 7);
}
