#include <stdio.h>
int main(void)
{
	int a[10][10],i,j;
	for(i=0;i<10;i++)//处理对角线和第一列
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=1;i<10;i++)//处理其余部分
	{
		for(j=1;j<i;j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	}
	for(i=0;i<10;i++)//输出部分
	{
		for(j=0;j<=i;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}
	return 0;
}
