#include <stdio.h> 
#define WORK 10
#define WORK1 1.5
#define WORK2 0.15
#define WORK3 0.2
#define WORK4 0.25

int main(void) 
{
	int work; 
	int dellor;
	int zhong;
	int suijin;
	printf("请输入一周工作的小时数："); 
	scanf("%d",&work); 
	if(work>40)
		work*=WORK1;
	dellor=work*WORK;//未交税前的钱
	zhong=dellor;
	if(dellor<=300)
		suijin=dellor*WORK2;
	else if(dellor>300 && dellor<=450)
	{
		dellor-=300;
		suijin=dellor*WORK3+300*WORK2;
	}
	else
	{
		dellor-=450;
		suijin=dellor*WORK4+300*WORK2+150*WORK3;
	}
	printf("工资总额为%d，税金为%d，净收入为%d\n",zhong,suijin,zhong-suijin);
	return 0;
}
