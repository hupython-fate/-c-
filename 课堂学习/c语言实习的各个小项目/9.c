#include <stdio.h>
#define MAX 40
int main(void)
{
	int i,j;
	float arr[MAX]={0};
	float *p=arr,*p1=NULL;
	float kkk;
	int a;
	while(1)
	{
		printf("请问您想输入多少个学生的成绩：");
		scanf("%d",&a);
		if(a>MAX)
		{
			printf("输入的数超过最大值%d\n",a-MAX);
			continue;
		}
		break;
	}
	for(i=0;i<a;i++)
	{
		printf("请输入第%d个学生的成绩：",i+1);
		scanf("%f",&arr[i]);
	}

	for(i=0;i<a-1;i++)//冒泡排序
	{
		for(p=arr,p1=p;p<p1+a-1;p++)
		{
			if(*p<*(p+1))
			{
				kkk=*p;
				*p=*(p+1);
				*(p+1)=kkk;
			}
		}
	}

	for(i=0;i<a;i++)//打印部分
	{
		printf("%.2f\t",arr[i]);
	}
	return 0;
}
