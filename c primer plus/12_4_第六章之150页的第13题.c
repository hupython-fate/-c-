#include <stdio.h>
#include <math.h>
int main(void)
{
	int arr[8];
	int i;
	for(i=0;i<8;i++)
	{
		arr[i]=pow(2,i+1);
	}
	do{
		i--;
		printf("%d\n",arr[i]);
	}while(i!=0);
	return 0;
}
