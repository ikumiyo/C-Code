#include "SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);

	SeqListPushFront(&sl, 1);
	SeqListPushFront(&sl, 2);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 4);
	SeqListPushFront(&sl, 5);
	SeqListPushFront(&sl, 6);
	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SepListPopFront(&sl);
	SeqListPrint(&sl);

	SeqListInsert(&sl, 1, 20);
	SeqListPrint(&sl);

	SeqListErase(&sl, 1);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

int main()
{
	TestSeqList1();
	return 0;
}