#include <stdio.h>
#define WORK1 1.5
#define WORK2 0.15
#define WORK3 0.2
#define WORK4 0.25

#define work1 8.75
#define work2 9.33
#define work3 10.00
#define work4 11.20

int main(void)
{
	while(1)
	{
	int shu;
	float WORK;
	printf("=======================\n");
	printf("请你输入你的工资等级:\n");
	printf("1)8.75/hr\t\t2)9.33/hr\n");
	printf("2)10.00/hr\t\t4)11.20/hr\n");
	printf("5)quit\n");
	printf("=======================\n");
	printf("____\b\b\b\b");
	scanf("%d",&shu);
	switch(shu)
	{
		case 1:
			WORK=work1;
			break;
		case 2:
			WORK=work2;
			break;
		case 3:
			WORK=work3;
			break;
		case 4:
			WORK=work4;
			break;
		case 5:
			printf("已退出！\n");
			return 0;
		default:
			printf("您的输入错误，请重新输入！\n");
			continue;
	}
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
	}
	return 0;
}
