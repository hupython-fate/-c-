#include <stdio.h>
int main(void)
{
	int a,b;
	int pa[8];
	for(a=0;a<8;a++)
	{
		printf("\n");
		printf("请输入一个整数:");
		scanf("%d",&pa[a]);
	}

	for(a=0;a<8;a++)
	{
		printf("%d",pa[7-a]);
	}
	return 0;


}
