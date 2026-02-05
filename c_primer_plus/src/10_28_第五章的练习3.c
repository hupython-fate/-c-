#include <stdio.h>
#define yi 3.28084
#define er 2.54
int main()
{
	float k=1;
	float j;
	float h;
	float o;
	while(k>0)
	{
	printf("\n请你输入身高（厘米，cm）:");
	scanf("%f",&k);
	j=k/100;
	h=k*er;
	o=j*yi;
	printf("\n你的身高用不同单位来表示分别是：%.1f米，%.1f英寸，%.1f英尺",j,h,o);
    }
	return 0;
 } 
