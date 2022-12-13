#define _CRT_SECURE_NO_WARNINGS 1
/*ʵ��11.2.3   ���е�˳���ʾ��ʵ��*/
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
/*���г�ʼ��*/
int initQueue(sqqueue *q)
{
	if (!q)
		return FALSE;
	q->front = -1;
	q->rear = -1;
	return TRUE;
}
/*���*/
int append(sqqueue *q, Elemtype x)
{
	if (q->rear >= MAXNUM - 1)
		return FALSE;
	q->rear++;
	q->queue[q->rear] = x;
	return TRUE;
}
/*����*/
Elemtype Delete(sqqueue *q)
{
	Elemtype x;
	if (q->front == q->rear)
	{
		printf("���п�!\n");
		return 0;
	}
	x = q->queue[++q->front];
	printf("\n��ͷԪ��%d���ӣ�\n", x);
	return x;
}
/*�ж϶����Ƿ�Ϊ��*/
int Empty(sqqueue *q)
{
	if (q->front == q->rear)
		return TRUE;
	return FALSE;
}
/*ȡ��ͷԪ��*/
int gethead(sqqueue *q)
{
	Elemtype x;
	if (q->front == q->rear)
	{
		printf("���п�!\n");
		return 0;
	}
	x = (q->queue[q->front + 1]);
	printf("��ͷԪ��Ϊ:%d\n", x);
	return x;
}
/*��������*/
void display(sqqueue *q)
{
	int s;
	s = q->front;
	if (q->front == q->rear)
		printf("���п�!\n");
	else
	{
		printf("\n˳���������Ϊ��");
		while (s < q->rear)
		{
			s = s + 1;
			printf("%d<-", q->queue[s]);
		}
		printf("\n");
		printf("˳����еĶ�βԪ������λ��:rear=%d\n", q->rear);
		printf("˳����еĶ�ͷԪ������λ��:front=%d\n", q->front);
	}
}
/*����˳�����*/
void Setsqqueue(sqqueue *q)
{
	int n, i, m;
	printf("\n�����뽫Ҫ��˳����еĳ���:");
	scanf("%d", &n);
	printf("\n������������˳����е�Ԫ��ֵ:\n");
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
	printf("\n��һ��ʹ�����ʼ����\n");
	do
	{
		printf("============���˵�===================\n");
		printf("1 ��ʼ��\n");
		printf("2 ����˳�����\n");
		printf("3 ���\n");
		printf("4 ���� \n");
		printf("5 �ж϶����Ƿ�Ϊ��\n");
		printf("6 ȡ��ͷԪ�� \n");
		printf("7 ��������\n");
		printf("0 ������������\n");
		printf("===================================\n");
		printf("\n��ѡ�����(1--7):\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
		{
			initQueue(head);
			printf("�Ѿ���ʼ��˳����У�\n");
			break;
		}
		case 2:
		{
			Setsqqueue(head);
			printf("\n�Ѿ��������У�\n");
			display(head);
			break;
		}
		case 3:
		{
			printf("������ӵ�ֵ:\n ");
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
				printf("���п�\n");
			else
				printf("���зǿ�\n");
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
