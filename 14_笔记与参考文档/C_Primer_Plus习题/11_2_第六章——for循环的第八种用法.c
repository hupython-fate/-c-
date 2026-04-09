#include <stdio.h>
int main(void)
{
	int j=0;
	for(printf("你好！\n");j<100;)
	{
		printf("请输入任意一个数字：");
		printf("____\b\b\b"); 
		scanf("%d",&j);
	}
	return 0;
 } 
