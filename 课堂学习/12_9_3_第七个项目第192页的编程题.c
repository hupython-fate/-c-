#include <stdio.h>
#include <math.h>

float kkk(int n)
{
	float hh=0;
	int m;
	for(m=1;m<=n;m++)
		hh=hh+pow(-1,m-1)*(1.0/m);//要用浮点数除法，真是让我大开眼界，没有想到还有这种区别，1/m是整数除法，而1.0/m是浮点数除法。
	printf("%f",hh);
	return hh;
}

int main(void)
{
	int a;
	float b;
	printf("请输入项数：");
	scanf("%d",&a);
	b=kkk(a);
	printf("计算出的数为%f",b);
	return 0;
}
