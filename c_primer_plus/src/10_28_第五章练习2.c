#include <stdio.h>
int main()
{
    int a; 
	printf("请输入一个整数：");
	scanf("%d",&a);
	for(int i=0;i<11;i++)
	{
		printf("%5d",a);
		a+=1;
	}
} 
