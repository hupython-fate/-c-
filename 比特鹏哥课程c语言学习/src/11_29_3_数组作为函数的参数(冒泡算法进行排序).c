#include <stdio.h>

//在写函数的形参时，如果是数组作为函数的参数，有两种写法：
//1,数组
//2,指针

//数组的写法
void maopao(int arr[],int sz)//要把小的数放前面//这里的arr实际上是指针。
			     //在函数参数中，int arr[] 实际上会被编译器当作 int *arr 来处理
{
	//确定元素的个数，从而确定排序的次数；规律为，排序次数=元素个数-1；
	//int sz=sizeof(arr)/sizeof(arr[0]);// 错误！这里得到的是指针大小/元素大小
	int a,b,c;
	for(a=0;a<sz;a++)
	{
		for(b=0;b<10;b++)
		{
			if(arr[a]<arr[b])//把更大的数换到后面。
			{
				c=arr[b];
				arr[b]=arr[a];
				arr[a]=c;
			}
		}
	}

}

数组名本质上是：数组首元素的地址。

int main(void)
{	//函数名(数组名);  这是把数组作为函数的参数的形式。
	int asdf[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(asdf)/sizeof(asdf[0]);
	maopao(asdf,sz);
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d",asdf[i]);
	}
	return 0;
}
