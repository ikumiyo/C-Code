#define _CRT_SECURE_NO_WARNINGS 1
#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

///pcb���ƿ���Ϣ
typedef struct P_node{
	long t_pid;///����id
	int t_size;///���̴�С
	int priority;///�������ȼ�
}PCB;

PCB ReadyArray[20];//��������
PCB SuspendArray[20];//��������

PCB cpu;//���н���

int ReadyCount = 0;//����������
int SuspendCount = 0;//���������
int First = 0;//��һ�������Ľ���

//��������
void Create(){
	if (ReadyCount >= 20){
		printf("������������������ɾ���������̣�");
	}
	else{
		if (First = 0){
			printf("�������һ�����������Ϣ������ֱ�ӵ���CPU���У�");
			printf("�������½��̵�pid\n");
			scanf("%d", &cpu.t_pid);
			printf("�������½��̵����ȼ�");
			scanf("%d", &cpu.priority);
			printf("�������½��̵Ĵ�С");
			scanf("%d", &cpu.t_size);
			First++;
		}
		else{
			printf("�������½��̵�pid\n");
			scanf("%d", &cpu.t_pid);
			printf("�������½��̵����ȼ�");
			scanf("%d", &cpu.priority);
			printf("�������½��̵Ĵ�С");
			scanf("%d", &cpu.t_size);
			ReadyCount++;
		}
	}
}

//�鿴���н���
void Run(){
	printf("�����������еĽ�����������:\n");
	printf(" ����ID��%ld\n���ȼ���%d\n���̴�С��",cpu.t_pid,cpu.priority,cpu.t_size );
}

//���̵��ȣ������ȼ�С�Ľ��̻��룬��������ǰ����ִ�еĽ���
void swap(){
	int P_min = 0;
	int temp_size;
	int temp_pid;
	int temp_priority;
	P_min = ReadyArray[0].priority;
	//�����ҳ����ȼ���С�Ľ���
	for (int i = 1; i < ReadyCount; i++){
		if (P_min>ReadyArray[i].priority){
			P_min = ReadyArray[i].priority;
		}
	}
	//������ǰ�������еĽ���
	int i = 0;
	for (i = 0; i < 20; i++){
		if (P_min == ReadyArray[i].priority){
			temp_size = cpu.t_size;
			cpu.t_size = ReadyArray[i].t_size;

			temp_pid = cpu.t_pid;
			cpu.t_pid = ReadyArray[i].t_pid;

			temp_priority = cpu.priority;
			cpu.priority = ReadyArray[i].priority;
			break;
		}
		else{
			continue;
		}
	}
	//������Ľ��̴Ӿ���������ɾ�������������Ľ��̲��뵽�������е����
	for (i; i < ReadyCount - 1; i++){
		ReadyArray[i].t_size = ReadyArray[i + 1].t_size;
		ReadyArray[i].t_pid = ReadyArray[i + 1].t_pid;
		ReadyArray[i].priority = ReadyArray[i + 1].priority;
	}
	ReadyArray[i].t_size = temp_size;
	ReadyArray[i].t_pid = temp_pid;
	ReadyArray[i].priority = temp_priority;
}

//�����������һ������
void suspend(){
	int i, p;
	printf("��������Ҫ����Ľ���PID��(��������ѡ):\n");
	for (i = 0; i < ReadyCount; i++){
		printf("%d", ReadyArray[i].t_pid);
	}
	//*******************�´���д���ݰ�~
}


