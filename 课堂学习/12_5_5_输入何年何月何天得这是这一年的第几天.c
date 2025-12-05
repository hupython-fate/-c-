#include <stdio.h>
int main(void)
{
	int nian,yue,ri;
	printf("请输入年份：");
	scanf("%d",&nian);
	if(nian%400==0 || (nian%4==0 && nian%100!=0))
	{
		printf("%d年是闰年。",nian);
	}
	else 
		printf("%d是平年。",nian);


	return 0;
}
