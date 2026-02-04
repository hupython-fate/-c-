#include <stdio.h>

float jie(float k)
{
	int xxx=1;
	int i=0;
	if(k==0.0)
		xxx=1;
	else
	{
		for(i=1;i<=k;i++)
		xxx*=i;
	}
	return xxx;
}

int main(void)
{
	float a,i;
	float kkk=0.0;
	printf("请输入一个数：");
	scanf("%f",&a);
	for(i=0.0;i<=a;i++)
	{
		kkk+=(1.0/jie(i));	
	}
	printf("e=%.4f",kkk);
	return 0;
}
