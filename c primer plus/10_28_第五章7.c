#include <stdio.h>

double jjj(double as);//�������� 

int main()
{   
    double kk; 
	printf("������һ��duoble���͵�����");
	scanf("%lf",&kk);
	double a=jjj(kk);
    printf("%lf",a);
    return 0;
} 
 
double jjj(double as)//�������� 
{
    double ghj=as*as*as;
	return ghj;
}
