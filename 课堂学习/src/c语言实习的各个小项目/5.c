#include <stdio.h>

int main(void)
{
	//第一行13个星号
	//第二行1个空格+11个星号
	//第三行2个空格+9个星号
	//第四行3个空格+7格星号
	//～～～
	//(0,13),(1,11),(2,9)
	//11=k+b
	//9=2k+b
	//-2=k
	//11=b-2
	//b=11+2=13
	//y=-2x+13
	int i,j;
	for(i=0;i<7;i++)//打印七行
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(j=0;j<-2*i+13;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
