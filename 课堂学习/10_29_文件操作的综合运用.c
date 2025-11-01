#include <stdio.h>
int main(void)
{
	
	//需求是什么？嗯，我需要写一个可以储存每天的的自评的程序，并且我输入日期的时候可以查询。 
	char zhi[60];
	char ri[60];
	char filename[60];
	printf("请你输入你的今日自我评价：");
	scanf("%s",zhi);
	printf("\n请你输入今天的日期：");
	scanf("%s",ri); 
	FILE *K;
	filename=ri+".txt";
	K=fopen(filename,"w");
	//未完成！ 
	return 0； 
 } 
