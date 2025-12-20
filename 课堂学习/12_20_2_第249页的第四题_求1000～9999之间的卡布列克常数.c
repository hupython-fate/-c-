#include <stdio.h>

int pipei(int *x)
{
	//printf("asdfasdaf\n");
	//匹配的数值应从0开始
	//也就是说，写一个循环，令一个变量的值从0开始递增，然后这个变量的每一位如果和参数数组相同的话，那么就跳出循环，并返回这个变量的值。
	int i=0,j=0,arr[4],z=0,h=0,ii=0,jj=0;
	for(i=0;i<9999;i++)
	{
		for(j=0;j<4;j++)
		{
			ii=i;//用中间变量避免死循环。
			jj=j;
			arr[jj]=ii%10;
			ii/=10;
			if(arr[0]==x[3] && arr[1]==x[2] && arr[2]==x[1] && arr[3]==x[0])
			{
				break;
				h=1;
			}
		}
		if(h) break;
	}
	return i;
}


int pai_max(int x)
{
	//printf("max\n");
	int arr[4],i,j,z;//四位数嘛，定义一个容量为4的数组；
	for(i=0;i<4;i++)
	{
		//printf("iiu\n");
		arr[i]=x%10;
		x/=10;
	}//把四位数倒序存入数组中，无论是正序还是倒序都可以，反正等会要进行排序。
	
	//老生常谈的冒泡排序
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
		{
			//printf("kkk\n");
			if(arr[j]<arr[j+1])//把小的放后面，把大的放前面。
			{
				//printf("kkk\n");
				z=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=z;
			}
		}
	//接下来就是进行匹配了
	return pipei(arr);//可以写一个匹配函数，反正等会也会用到，参数是一个数组，返会值就是匹配到的整数。

}

int pai_min(int x)
{
	int arr[4],i,j,z;//四位数嘛，定义一个容量为4的数组；
	for(i=0;i<4;i++)
	{
		arr[i]=x%10;
		x/=10;
	}//把四位数倒序存入数组中，无论是正序还是倒序都可以，反正等会要进行排序。
	
	//老生常谈的冒泡排序
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(arr[j]>arr[j+1])//把大的放后面，把小的放前面。
			{
				z=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=z;
			}

	//接下来就是进行匹配了
	return pipei(arr);//可以写一个匹配函数，反正等会也会用到，参数是一个数组，返会值就是匹配到的整数。
}


int kblk(int x)
{
	//printf("kblk\n");
	int max1=0;
	int min1=0;
	int cha=0;
	int h=0;

	while(cha!=6174)
	{
		printf("%d \n",max1);//打印出来居然是0,说明匹配函数有问题。
		h++;
		max1=pai_max(x);
		min1=pai_min(x);
		cha=max1-min1;
		x=cha;//计算出的差会变成新的x。
		if(cha==0 || h==100) break;//如果相减100次都不会等于6174,那大概率不是。
	}
	return cha;
}

int main(void)
{
	int x=1000;
	//printf("sssss\n");
	while(x<=9999)
	{
		//printf("kk\n");
		if(kblk(x)==6174)
		{
			printf("%d\n",x);
		}
		x++;
	}
	return 0;
}
