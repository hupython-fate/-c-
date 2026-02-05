#include <stdio.h>
int main(void)
{
	int aa,bb,c;
	int a,b;
	printf("请输入表格的上限:");
	scanf(" %d",&a);
	printf("整数|平方|立方|\n");
	for(b=1;b<=a;b++)
	{
		aa=b*b;
		bb=b*b*b;
		printf("%3d  %3d  %3d\n ",b,aa,bb);
	}
	return 0;
}
