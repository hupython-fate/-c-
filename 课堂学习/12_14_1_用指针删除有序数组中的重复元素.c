#include <stdio.h>

int del(int arr[],int m)
{
	int *x,*y,*z;
	int kk=0;
	for(x=arr;x<arr+m;x++)//外循环,判断并删除重复元素
	{
		kk=0;
		y=x+1;//y的地址是x的后一位；
		while(*y==*x && y<arr+m)//判断重复元素
		{
			y++;//后移一位，判断重复元素。
			kk++;//累加器，用来计算重复元素的个数。
		}
		if(y<=arr+m)//加等号是因为while循环会多加一次y
		{
			for(z=x+1;y<arr+m;y++,z++)//通过前移和覆盖来达到删除元素的目的。
				*z=*y;
			m-=kk;//删除了kk个重复元素。
		}
	}
	return m;

}

int main(void)
{
	int i,w;
	int arr[10]={0};
	for(i=0;i<10;i++)
	{
		printf("请输入第%d个数:",i+1);
		scanf("%d",&arr[i]);
	}
	w=del(arr,10);

	//打印出删除好的数组
	for(i=0;i<w;i++)
		printf("%d  ",arr[i]);	
	return 0;
}
