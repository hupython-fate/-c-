#include <stdio.h>
int main(void)
{	//计算1.01的365次方和0.09的365次方
	int i=1;
	float k=1,j=1;//这里不能初始化为零，因为零乘以任何数为零。
	/*while(i<=365)
	{
		k*=1.01;
		j*=0.99;
		i++;
	}*/
	do
	{
		k*=1.01;
		j*=0.99;
		i++;
	}while(i<=365);
	printf("1.01的365次方为%f，0.09的365次方为%f",k,j);
	return 0;
}
