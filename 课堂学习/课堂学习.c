#include <stdio.h>
#include <math.h>
int main() {
	printf("������һԪ���η��̵�a,b��c:");
	float a=0,b=0,c=0;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a==0){
		printf("");
	}
	int k=sqrt(b*b-4*a*c);
	float x1=(-b+k)/(2*a);
	float x2=(-b-k)/(2*a);
	printf("%f %f\n",x1,x2);
	return 0;
} 
