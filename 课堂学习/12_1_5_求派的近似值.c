#include <stdio.h>
#include <math.h>
int main(void)
{
	//pow(-1,n)*(1/2n+1);
	double n=0,k=0,h=0;
	do{
		k=pow(-1,n)*(1/(2*n+1));
		h=k+h;
		n++;
		printf("%lf\n",k);
	}while(fabs(k)>1e-6);
	printf("%lf",h*4);
	return 0;
}
