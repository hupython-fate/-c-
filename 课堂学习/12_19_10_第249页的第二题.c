#include <stdio.h>

int *ppp(int (*x)[3],int y)
{
	//可以用指针下标
	int i,j;
	int h=0;
	int *p=x[0][0],*p1=NULL,kkk=0;
	for(p1=p;p<p1+y;p++)
	{
		if(*p>kkk)
		{
			kkk=*p;
		}
	}//最大值求出来了
	//根据求的最大值反向求出行和列
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(kkk==x[i][j])
			{
				h=1;
				break;
			}
		}
		if(h) break;
	}

	static int arr[3]={i,j,kkk};
	return arr;
}



int main(void)
{
	int i,*p,*p1;
	int arr[3][3];
	printf("请输入9个数：");
	for(p=&arr[0][0],p1=p;p<p1+9;p++)
		scanf("%f",p);
	int k=sizeof(arr)/sizeof(arr[0][0]);
	p1=ppp(p,k);//若要设函数的返回类型是数组，那么可以用指针函数，因为数组名的本质是一个指针。

	printf("在第%.0f行，第%.0f列，求得最大值%.2f",*p1+1,*(p1+1)+1,*(p1+2));
	return 0;
}
