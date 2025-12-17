#include <stdio.h>

int jie(int k)
{
	int xxx=1;
	if(k==0)
		xxx=1;
	else
		xxx*=k;
	return xxx;
}

int main(void)
{
	int a,i;
	float kkk=0.0;
	printf("请输入一个数：");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		kkk+=(1.0/jie(i));	
	}
	printf("e=%.4f",kkk);
	return 0;
}
