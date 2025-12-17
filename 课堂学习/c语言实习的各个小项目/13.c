#include <stdio.h>

int main(void)
{
	int i,j;
	int arr[6][6]={0};
	for(i=0;i<6;i++)//处理对角线和第一列
	{
		arr[i][0]=1;
		arr[i][i]=1;
	}
	for(i=2;i<6;i++)//处理
	{
		for(j=1;j<6;j++)
		{
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(i=0;i<6;i++)//打印
	{
		for(j=0;j<=i;j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
