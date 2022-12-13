#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//增强程序的可维护性
typedef int SQDataType;


typedef struct SepList
{
	SQDataType *a;
	int size;//有效数据的个数
	int capacity;//容量
}SL;

//typedef struct SeqList SL;

//增删查改等接口函数
void SeqListInit(SL*ps);

void SeqListPrint(SL*ps);

void SeqListPushBack(SL*ps, SQDataType x);//尾插
void SeqListPushFront(SL*ps, SQDataType x);//头插
void SeqListPopBack(SL*ps);//尾删
void SepListPopFront(SL*ps);//头删
void SeqListInsert(SL*ps, int pos, SQDataType x);//从指定位置插入
void SeqListErase(SL*ps, int pos);//从指定位置删除

void SeqListDestory(SL*ps);//销毁空间

int SeqListFind(SL*ps, SQDataType x);//查找数据
void SeqListModify(SL*ps, int pos, SQDataType x);//修改数据