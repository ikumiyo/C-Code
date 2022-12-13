#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> 
#include <stdlib.h>
#define MAXSIZE 20                       /* 数组最大界限 */
typedef int ElemType;                    /* 数据元素类型 */
typedef  struct
{
	ElemType  a[MAXSIZE];               /* 一维数组子域 */
	int  length;                        /* 表长度子域   */
}SqList;                       /* 顺序存储的结构体类型 */
SqList  a, b, c;

/*  函数声明 */
void creat_list(SqList *L);
void out_list(SqList L);
void insert_sq(SqList *L, int i, ElemType e);
ElemType delete_sq(SqList *L, int i);
int locat_sq(SqList L, ElemType e);

/*  主函数  */
void main()
{
	int i, k, loc; ElemType e, x; char ch;
	do {
		printf("\n******************************");
		printf("\n     1. 建立线性表");
		printf("\n     2. 插入元素");
		printf("\n     3. 删除元素");
		printf("\n     4. 查找元素");
		printf("\n     0. 结束程序运行");
		printf("\n******************************");
		printf("\n    请输入您的选择（0-4）:");
		scanf("%d", &k);
		switch (k)
		{
		case 1:{ creat_list(&a);
			out_list(a);
		} break;
		case 2:{ printf("\n 请输入插入位置（大于等于1，小于等于%d）：", a.length + 1);
			scanf("%d", &i);
			printf("\n 请输入要插入的元素值：");
			scanf("%d", &e);
			insert_sq(&a, i, e);
			out_list(a);
		} break;
		case 3:{ printf("\n请输入要删除的元素位置（大于等于1，小于等于%d）：", a.length);
			scanf("%d", &i);
			x = delete_sq(&a, i);
			out_list(a);
			if (x != -1)printf("\n删除的元素为：%d\n", x);
			else printf("要删除的元素不存在！");
		} break;
		case 4:{ printf("\n 请输入要查找的元素值：");
			scanf("%d", &e);
			loc = locat_sq(a, e);
			if (loc == -1) printf("\n 未找到指定元素！");
			else printf("\n 已找到，元素位置是 %d", loc);
		} break;
		} /*  switch  */
	} while (k != 0);
	printf("\n          按回车键，返回......\n");
	ch = getchar();
} /*  main  */

/* 建立线性表 */
void creat_list(SqList *L)
{
	int i;
	printf("请输入线性表的长度：");
	scanf("%d", &L->length);
	for (i = 0; i<L->length; i++)
	{
		printf("数据%d=", i);
		scanf("%d", &(L->a[i]));
	}
} /*  creat_list   */
/* 输出线性表 */
void out_list(SqList L)
{
	int i;
	for (i = 0; i <= L.length - 1; i++) printf("%10d", L.a[i]);
} /*  out_list  */

/*  在线性表的第i个位置插入元素e  */
void insert_sq(SqList *L, int i, ElemType e)
{
	int j;
	if (L->length == MAXSIZE) printf(" 线性表已满!\n");
	else if (i<1 || i>L->length + 1)  printf("输入位置错!\n");
	else {
		for (j = L->length - 1; j >= i - 1; j--) L->a[j + 1] = L->a[j];
		/* 向后移动数据元素 */
		L->a[i - 1] = e;                    /* 插入元素     */
		L->length++;                    /* 线性表长加1 */
	}
} /*  insert_sq  */

/* 删除第i个元素，返回其值 */
ElemType delete_sq(SqList *L, int i)
{
	ElemType x; int j;
	if (L->length == 0) printf("空表!\n");
	else if (i<1 || i> L->length){
		printf("输入位置错!\n");
		x = -1;
	}
	else {
		x = L->a[i - 1];
		for (j = i; j <= L->length - 1; j++) L->a[j - 1] = L->a[j];
		L->length--;
	}
	return(x);
} /* delete_sq  */

/* 查找值为 e 的元素，返回它的位置  */
int locat_sq(SqList L, ElemType e)
{
	int i = 0;
	while (i <= L.length - 1 && L.a[i] != e) i++;
	if (i <= L.length - 1)  return(i + 1);
	else return(-1);
}/* locat_sq  */