#include <stdio.h>

float gongshi(int x)
{
	float i,j=0,z;
	for(i=1;i<=x;i++)
	{
		if(i==1)
			z=(1/i*i);
		else if(i>1)
			z=-1/(i*i);
		j+=z;
	}
	return j;
}


int main(void)
{
	float xxx;
	int xx;
	while(1)
	{
		printf("请输入项数：");
		scanf("%d",&xx);
		if(xx<=0)
		{
			printf("提醒！用户输入的数必需为正整数！\n");
			continue;
		}
		else break;
	}
	xxx=gongshi(xx);
	printf("t=%f",xxx);
	return 0;
}
