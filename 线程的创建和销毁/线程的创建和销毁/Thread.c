#define _CRT_SECURE_NO_WARNINGS 1
#include"conio.h"
#include"stdio.h"
#include"stdlib.h"

///pcb控制块信息
typedef struct P_node{
	long t_pid;///进程id
	int t_size;///进程大小
	int priority;///进程优先级
}PCB;

PCB ReadyArray[20];//就绪数组
PCB SuspendArray[20];//挂起数组

PCB cpu;//运行进程

int ReadyCount = 0;//就绪进程数
int SuspendCount = 0;//挂起进程数
int First = 0;//第一个创建的进程

//创建进程
void Create(){
	if (ReadyCount >= 20){
		printf("就绪进程已满，请先删除或挂起进程！");
	}
	else{
		if (First = 0){
			printf("这是你第一次输入进程信息，它将直接调入CPU运行！");
			printf("请输入新进程的pid\n");
			scanf("%d", &cpu.t_pid);
			printf("请输入新进程的优先级");
			scanf("%d", &cpu.priority);
			printf("请输入新进程的大小");
			scanf("%d", &cpu.t_size);
			First++;
		}
		else{
			printf("请输入新进程的pid\n");
			scanf("%d", &cpu.t_pid);
			printf("请输入新进程的优先级");
			scanf("%d", &cpu.priority);
			printf("请输入新进程的大小");
			scanf("%d", &cpu.t_size);
			ReadyCount++;
		}
	}
}

//查看运行进程
void Run(){
	printf("现在正在运行的进程资料如下:\n");
	printf(" 进程ID：%ld\n优先级：%d\n进程大小：",cpu.t_pid,cpu.priority,cpu.t_size );
}

//进程调度：将优先级小的进程换入，并换出当前正在执行的进程
void swap(){
	int P_min = 0;
	int temp_size;
	int temp_pid;
	int temp_priority;
	P_min = ReadyArray[0].priority;
	//遍历找出优先级最小的进程
	for (int i = 1; i < ReadyCount; i++){
		if (P_min>ReadyArray[i].priority){
			P_min = ReadyArray[i].priority;
		}
	}
	//换出当前正在运行的进程
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
	//将换入的进程从就绪队列中删除，并将换出的进程插入到就绪队列的最后
	for (i; i < ReadyCount - 1; i++){
		ReadyArray[i].t_size = ReadyArray[i + 1].t_size;
		ReadyArray[i].t_pid = ReadyArray[i + 1].t_pid;
		ReadyArray[i].priority = ReadyArray[i + 1].priority;
	}
	ReadyArray[i].t_size = temp_size;
	ReadyArray[i].t_pid = temp_pid;
	ReadyArray[i].priority = temp_priority;
}

//根据输入挂起一个进程
void suspend(){
	int i, p;
	printf("请输入想要挂起的进程PID码(从以下中选):\n");
	for (i = 0; i < ReadyCount; i++){
		printf("%d", ReadyArray[i].t_pid);
	}
	//*******************下次在写，拜拜~
}


