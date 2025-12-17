#include <stdio.h>

int main(void)
{
	int i;
	float arr[3];
	float k;
	float *p=NULL,*p1=NULL;
	p=arr;
	p1=p;
	printf("请输入a,b,c的值：");
	scanf("%f %f %f",p,p+1,p+2);
	for(i=0;i<2;i++)//有三个数，循环2次
	{
		for(p=p1;p<p1+2;p++)
		{
			if(*p<*(p+1))
			{
				k=*p;
				*p=*(p+1);
				*(p+1)=k;
			}
		}
	}

	//按从大到小的顺序输出
	for(p=p1;p<p1+3;p++)
	{
		printf("%f\t",*p);
	}
	return 0;
}
