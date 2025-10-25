#include <stdio.h>
#include <float.h>
int main(){
	double k1=1.0/3.0;
	float k2=1.0/3.0;
	printf("%.6f %.6f\n",k1,k2);
	printf("%.12lf %.12f\n",k1,k2);
	printf("%.16lf %.16f\n",k1,k2);
	printf("%f\n",FLT_DIG);
	printf("%f\n",DBL_DIG);
	return 0;
} 
