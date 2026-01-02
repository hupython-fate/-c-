#include <stdio.h>
#define min 100
int x;
int input()//定义一个子函数获取用户的输入
{
	int n;
	while(1)
	{
		printf("请输入一个数：");
		scanf("%d",&n);
		if(n>=3 || n<=7)
			return n;
		else 
		{
			printf("您输入的数不符合标准！请重新输入！\n");
			continue;
		}
	}
}

long qiu_max(int c)
{
	int arr[7]={9,9,9,9,9,9,9};
	switch(c)//虽然能用两个数组和一个循环求，但是最后还是用了这个最直观的方法
	{
		case 3:
			return arr[0]*1+arr[1]*10+arr[2]*100;
			break;
		case 4:
			return arr[0]*1+arr[1]*10+arr[2]*100+arr[3]*1000;
			break;
		case 5:
			return arr[0]*1+arr[1]*10+arr[2]*100+arr[3]*1000+arr[4]*10000;
			break;
		case 6:
			return arr[0]*1+arr[1]*10+arr[2]*100+arr[3]*1000+arr[4]*10000+arr[5]*100000;
			break;
		case 7:	
			return arr[0]*1+arr[1]*10+arr[2]*100+arr[3]*1000+arr[4]*10000+arr[5]*100000+arr[6]*1000000;
			break;
	}
}

//求水仙花数的函数
void qiu_shui(long max,int x)
{
	//printf("yyyyyyyy\n");
	long i;
	long j;
	for(i=min;i<=max;i++)
	{
		j=i;
		//第一步，把i分解，求出它的每一位。
		//第二步，求出每一位的x次方的值
		//第三步，求出每一位的x次方的值的和（这里假定这个和是y）
		//第四步，对比i与y的值
		//第五步，如果相等，输出i的值，如果不相等，则不输出。

		//这一段是第一步
		int k;
		long wei[7];//定义一个数组来储存它的每一位
		for(k=0;k<x;k++)
		{
			wei[k]=j%10;//它的第一位
			j=j/10;
		}
		//printf("%d %d %d \n",wei[0],wei[1],wei[2]);	
		//这一段是第二步
		for(k=0;k<x;k++)
		{
			int kxk;
			long lll=1;
			for(kxk=0;kxk<x;kxk++)
			{
				lll*=wei[k];
			}
			wei[k]=lll;
		}
		//printf("%d %d %d \n",wei[0],wei[1],wei[2]);	
		//这一段是第三步
		long y=0;
		for(k=0;k<x;k++)
			y+=wei[k];
		//printf("%ld\n",y);
		
		//这一段是第四步和第五步
		if(i==y)
			printf("%ld\n",i);
	}
}

int main(void)
{
	int x=input();
	//printf("xx\n");
	long max=qiu_max(x);
	//printf("sssss\n");
	qiu_shui(max,x);
	return 0;
}
