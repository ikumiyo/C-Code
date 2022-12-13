#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//��ǿ����Ŀ�ά����
typedef int SQDataType;


typedef struct SepList
{
	SQDataType *a;
	int size;//��Ч���ݵĸ���
	int capacity;//����
}SL;

//typedef struct SeqList SL;

//��ɾ��ĵȽӿں���
void SeqListInit(SL*ps);

void SeqListPrint(SL*ps);

void SeqListPushBack(SL*ps, SQDataType x);//β��
void SeqListPushFront(SL*ps, SQDataType x);//ͷ��
void SeqListPopBack(SL*ps);//βɾ
void SepListPopFront(SL*ps);//ͷɾ
void SeqListInsert(SL*ps, int pos, SQDataType x);//��ָ��λ�ò���
void SeqListErase(SL*ps, int pos);//��ָ��λ��ɾ��

void SeqListDestory(SL*ps);//���ٿռ�

int SeqListFind(SL*ps, SQDataType x);//��������
void SeqListModify(SL*ps, int pos, SQDataType x);//�޸�����