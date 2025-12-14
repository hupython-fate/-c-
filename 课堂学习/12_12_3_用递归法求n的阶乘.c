#include <stdio.h>

int faaa(int c)
{
	int k;
	if(c<0)
	{
		printf("输入错误！\n");
		k=-1;
	}
	else if(c==1 ||c==0)
		k=1;
	else 
		k=faaa(c-1)*c;
	return (k);
}

int main(void)
{
	int kkk;
	int lll;
	printf("输入一个正整数：");
	scanf("%d",&kkk);
	lll=faaa(kkk);
	printf("%d的阶乘为%d",kkk,lll);
	return 0;
}
