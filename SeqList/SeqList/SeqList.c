#include "SeqList.h"
#include"SeqList.h"
//增删查改等接口函数
void SeqListInit(SL*ps)//初始化
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SL*ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;

}

void SeqListCheckCapaciy(SL*ps)
{
	//满了就要扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity* sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}

void SeqListPushBack(SL*ps, SQDataType x)//尾插
{
	SeqListCheckCapaciy(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SL*ps, SQDataType x)//头插
{

	SeqListCheckCapaciy(ps);

	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
	ps->size++;

}


void SeqListPopBack(SL*ps)//尾删
{
	assert(ps->size > 0);
	ps->size--;

}


void SepListPopFront(SL*ps)//头删
{
	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;

}

void SeqListInsert(SL*ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	SeqListCheckCapaciy(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos] = x;
	ps->size++;

}


void SeqListErase(SL*ps, int pos)
{
	assert(pos < ps->size);
	int start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		++start;
	}
	ps->size--;

}


int SeqListFind(SL*ps, SQDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}

	return -1;
}


void SeqListModify(SL*ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;

}


void SeqListPrint(SL*ps)
{
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}