#include <stdio.h>

int main(void)
{
	int k;
	printf("请输入一个数：");
	scanf("%d",&k);
	if(k%3==0 && k%5==0)
	{
		printf("%d同时被3和5整除。\n",k);
	}
	else if(k%3==0)
	{
		printf("%d被3整除，但不被5整除。\n",k);
	}
	else if(k%5==0)
	{
		printf("%d被5整除，但不被3整除。\n",k);
	}
	else
	{
		printf("%d不被5整除，又不被3整除。\n",k);
	}
	return 0;
}
