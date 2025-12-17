#include <stdio.h>
#define MAX 40
int main(void)
{
	int a,i;
	float k,cc=0.0,ccc;
	float arr[MAX];
	while(1)
	{
		printf("请问您想要输入多少个人的成绩？____\b\b\b");
		scanf("%d",&a);
		if(a>MAX)
		{
			printf("您输入的数超过最大值%d\n",a-MAX);
			continue;
		}
		break;
	}
	for(i=0;i<a;i++)
	{
		printf("请输入第%d个人的成绩：",i+1);
		scanf("%f",&arr[i]);
	}
	for(i=0;i<a;i++)
	{
		k=arr[i];
		if(k>cc)
		{
			cc=k;
			ccc=i;
		}
	}

	printf("最大成绩为%.2f,对应序号为%.0f",cc,ccc+1);
	return 0;
}
