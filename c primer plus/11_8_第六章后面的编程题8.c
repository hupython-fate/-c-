#include <stdio.h>
int main(void)
{
	float as,df,gh;
	printf("请输入两个数:");
	scanf("%f %f",&as,&df);
	gh=(as-df)/(as*df);
	printf("计算结果为%.2f",gh);
	return 0;
}
