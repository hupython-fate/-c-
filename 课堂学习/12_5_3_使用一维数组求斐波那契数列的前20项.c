#include <stdio.h>
int main(void)
{
	//n为项数，f为对应关系的话，斐波那契数列的规律为f[0]=1,f[1]=1,n>=2时，f[n]=f[n-2]+f[n-1];
	//也就是说，当n>=2时，第n项目等于前两项目之和。
	int arr[20]={0};
	arr[0]=1;
	arr[1]=1;
	int i,j=0;
	for(i=2;i<20;i++)
	{
		arr[i]=arr[i-2]+arr[i-1];
	}
	for(i=0;i<20;i++)
	{
		j++;
		printf("%5d   ",arr[i]);
		if(j==5)
		{
			j=0;
			printf("\n");
		}
	}
	return 0;
}
