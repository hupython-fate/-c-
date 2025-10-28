#include <stdio.h>

double jjj(double as);//函数声名 

int main()
{   
    double kk; 
	printf("请输入一个duoble类型的数：");
	scanf("%lf",&kk);
	double a=jjj(kk);
    printf("%lf",a);
    return 0;
} 
 
double jjj(double as)//函数定义 
{
    double ghj=as*as*as;
	return ghj;
}
