#include <stdio.h>

int main(void)
{
	int i;
	int arr[3];
	printf("请输入三个整数：");
	scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);

	int *p=arr,*p1=NULL,kk;
	for(i=0;i<2;i++)
	{
		for(p=arr,p1=p;p<p1+2;p++)
		{
			if(*p<*(p+1))
			{
				kk=*p;
				*p=*(p+1);
				*(p+1)=kk;
			}
		}
	}

	for(i=0;i<3;i++)
		printf("%d  ",arr[i]);
	return 0;
}
