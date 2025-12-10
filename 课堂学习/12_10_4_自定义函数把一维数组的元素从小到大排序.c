#include <stdio.h>

void pai(int arr[],int x)
{
	int i,j;
	int k;
	for(i=0;i<x-1;i++)
		for(j=0;j<x;j++)
			if(arr[j]>arr[j+1])
			{
				k=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=k;
			}
}

int main(void)
{
	int arr[100];
	int i,j;
	printf("请输入一组数据。\n");
	printf("如果您想结束输入，请输入101010,然后按回车。\n");
	j=0;
	for(i=0;i<100;i++)
	{
		j++;
		printf("请输入第%d个数：",j);
		scanf("%d",&arr[i]);
		if(arr[i]==101010) break;
	}
	pai(arr,j);//j是用户输入的数据个数。
	
	for(i=0;i<j;i++)
	{
		printf("%5d",arr[i]);
	}
	return 0;
}
