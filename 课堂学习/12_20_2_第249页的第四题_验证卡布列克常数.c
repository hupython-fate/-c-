#include <stdio.h>

int pipei(int *x)
{
    // 假设数组有4个元素，组合成4位数
    // 例如：x[0]=1, x[1]=2, x[2]=3, x[3]=4 -> 返回1234
    return x[0] * 1000 + x[1] * 100 + x[2] * 10 + x[3];
}//直是绝妙的方法。

int pai_max(int x)
{
	int arr[4],i,j,z;//四位数嘛，定义一个容量为4的数组；
	for(i=0;i<4;i++)
	{
		//printf("iiu\n");
		arr[i]=x%10;
		x/=10;
	}//把四位数倒序存入数组中，无论是正序还是倒序都可以，反正等会要进行排序。
	
	//老生常谈的冒泡排序
	for(i=0;i<3;i++)
		for(j=0;j<3-i;j++)
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
		for(j=0;j<3-i;j++)
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
	printf("不是卡布列克常数的有\n");
	while(x<=9999)
	{
		//printf("kk\n");
		if(kblk(x)!=6174)
		{
			printf("%d ",x);
		}
		x++;
	}
	printf("\n其他的全部都是卡布列克常数！");
	return 0;
}


//1实际上，几乎所有四位不同数字的数（除了1111、2222等）都能通过卡布列克过程得到6174，所以这个程序会输出大量的数字。

