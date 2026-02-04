#include <stdio.h>

int main(void)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<i*3 || j==0;j++)
			printf("*");
		printf("\n");
	}
	printf("********\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<-3*i+6 || j==0;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
